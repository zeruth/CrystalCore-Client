#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::UI2::AddonCabinet::vf2 */
uint F_007b2db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b2db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar3 = (param_1 & 0xffff) - 0x1f;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    F_00560760(&(*(undefined4 *)(gen_frame + 0x10)));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 2)) = 2;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + param_4[2] * 0x68 + 0x1dc);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 3)) = this[param_4[2] * 0x68 + 0x1d8];
    (*(int *)(gen_frame + 0x18)) = CONCAT13(this[param_4[2] * 0x68 + 0x1d8],CONCAT12(2,(undefined2)(*(int *)(gen_frame + 0x18))));
    if (*param_4 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(undefined4 *)(*param_4 + 0x70);
    }
    AVar1 = this[0x13a];
    uVar3 = F_0055dcb0();
    uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),4,(uint)(byte)AVar1,param_1,&(*(undefined4 *)(gen_frame + 0x10)),0,0);
    return uVar3;
  case 1: ;
    uVar3 = F_0055dcb0();
    uVar3 = F_00594d90((undefined *)(uVar3 + 0xe0),0);
switchD_007b2dca_caseD_22: ;
    return uVar3;
  case 2: ;
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    uVar2 = *(undefined4 *)(this + param_4[2] * 0x68 + 0x1e0);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(int *)(gen_frame + 0x18)) = uVar2;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    uVar3 = F_0055dcb0();
    F_00594d90((undefined *)(uVar3 + 0xe0),1);
    iVar4 = 1;
    do {
      this_01 = this_01 + -8;
      uVar3 = F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return uVar3;
  case 3: ;
    goto switchD_007b2dca_caseD_22;
  case 4: ;
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    iVar4 = param_4[2];
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(int *)(gen_frame + 0x18)) = iVar4;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_00 = this_00 + -8;
      uVar3 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return uVar3;
  default: ;
    return uVar3;
  }
}

/* ref: FUN_007b2f50 */
uint F_007b2f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  uVar1 = F_00559b90(*param_2);
  if (uVar1 != 0) {
    F_005951c0(param_3,*(undefined4 *)(param_1 * 0x68 + 0x1d4 + (int)this),0,uVar1);
  }
  uVar1 = F_0042a990(param_1 * 0x68 + 0x180 + (int)this);
  F_00584110(this_00,uVar1);
  uVar1 = F_00568230(param_2[2],*(float *)(param_1 * 0x68 + 0x1e4 + (int)this));
  return uVar1;
}

/* ref: Client::UI2::AddonCabinet::vf25 */
uint F_007b2fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b2fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b2ff0 */
uint F_007b2ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + 0x15d0 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf41 */
byte F_007b3070(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CabinetWithdraw",0,6);
  return bVar1;
}

/* ref: FUN_007b3080 */
uint F_007b3080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  uVar1 = F_00559b90(*param_2);
  if (uVar1 != 0) {
    F_005951c0(param_3,*(undefined4 *)(param_1 * 0x60 + 0x1d8 + (int)this),0,uVar1);
  }
  uVar1 = F_0042a990(param_1 * 0x60 + 0x184 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf25 */
uint F_007b30e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b30e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b3110 */
uint F_007b3110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b3110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x1444) != 0) {
    *(undefined1 *)((int)this + 0x180) = 1;
    F_00560760(((undefined1 *)(gen_frame + 0x0)));
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_1 * 0x60 + 0x1dc + (int)this);
    (*(undefined2 *)(gen_frame + 0xa)) = 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1444) + 0x50))))
                      (*(int * PTR32 *)((int)this + 0x1444),param_1);
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar2 + 0x70);
    }
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar2 = F_0055dcb0();
    in_EAX = F_00588780((undefined *)(uVar2 + 0xe0),4,(uint)bVar1,uVar3,((undefined1 *)(gen_frame + 0x0)),0,0);
  }
  return in_EAX;
}

/* ref: FUN_007b31a0 */
uint F_007b31a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b31a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x180) = 0;
  uVar1 = F_0055dcb0();
  uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),param_1);
  return uVar1;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf41 */
byte F_007b3200(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"LegacyItemStorage",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf2 */
uint F_007b3210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b3210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  uVar3 = param_1 & 0xffff;
  if (uVar3 == 0x1f) {
    uVar3 = *(uint *)(this + 0x3d80);
    if (uVar3 != param_4[2]) {
      F_00560760(&(*(undefined4 *)(gen_frame + 0x10)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = 9;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      AVar1 = this[param_4[2] * 0x60 + 0x1dc];
      *(int *)(this + 0x3d80) = param_4[2];
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 3)) = AVar1;
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT13(AVar1,CONCAT12(9,(undefined2)(*(undefined4 *)(gen_frame + 0x18))));
      if (*param_4 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = *(undefined4 *)(*param_4 + 0x70);
      }
      AVar1 = this[0x13a];
      uVar3 = F_0055dcb0();
      uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),4,(uint)(byte)AVar1,param_1,&(*(undefined4 *)(gen_frame + 0x10)),0,0);
    }
  }
  else {
    if (uVar3 == 0x20) {
      uVar3 = F_0055dcb0();
      uVar3 = F_00594d90((undefined *)(uVar3 + 0xe0),0);
      return uVar3;
    }
    uVar3 = uVar3 - 0x21;
    if (uVar3 == 0) {
      uVar3 = F_0055dcb0();
      F_00594d90((undefined *)(uVar3 + 0xe0),0);
      *(int *)(this + 0x3d80) = param_4[2];
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      uVar2 = *(undefined4 *)(this + param_4[2] * 0x60 + 0x1dc);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
      (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar4 = 1;
      do {
        this_00 = this_00 + -8;
        uVar3 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf25 */
uint F_007b3350(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b3380 */
uint F_007b3380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  this_01 = (undefined *)F_00559ba0(param_2[2]);
  uVar1 = F_00559b90(*param_2);
  if (uVar1 != 0) {
    F_005951c0(param_3,*(undefined4 *)(param_1 * 0x60 + 0x1d4 + (int)this),0,uVar1);
  }
  uVar1 = F_00560910(*(undefined4 *)(param_1 * 0x60 + 0x1d8 + (int)this));
  F_00584110(this_01,uVar1);
  uVar1 = F_0042a990(((undefined *)GEN_TOP(((param_1 * 3 + 0xc) * 0x20 + (int)this))));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b3410 */
uint F_007b3410(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce0ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  puVar1 = (undefined4 *)((int)this + 0x194);
  local_8 = 0x14;
  do {
    puVar1[4] = puVar1[4] & 0xfffffffc;
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xf0;
    puVar1[0xb] = puVar1[0xb] & 0xfffffffc;
    *(byte *)(puVar1 + 0xc) = *(byte *)(puVar1 + 0xc) & 0xf0;
    puVar1[0x12] = puVar1[0x12] & 0xfffffffc;
    *(byte *)(puVar1 + 0x13) = *(byte *)(puVar1 + 0x13) & 0xf0;
    puVar1[0x19] = puVar1[0x19] & 0xfffffffc;
    *(byte *)(puVar1 + 0x1a) = *(byte *)(puVar1 + 0x1a) & 0xf0;
    puVar1[0x20] = puVar1[0x20] & 0xfffffffc;
    *(byte *)(puVar1 + 0x21) = *(byte *)(puVar1 + 0x21) & 0xf0;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[7] = 0xffffffff;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xe] = 0xffffffff;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x15] = 0xffffffff;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1c] = 0xffffffff;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1 = puVar1 + 0x23;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined1 *)((int)this + 0xc88) = 0;
  *(undefined4 *)((int)this + 0xc84) = 0xffffffff;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonGearSet::vf37 */
uint F_007b3520(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  F_005a92d0(this,1,0x2b,0);
  F_005a92d0(this,0,0x27,0);
  uVar1 = F_0055dcb0();
  this_00 = (undefined *)(uVar1 + 0xe0);
  if (*(int *)(this + 0x184) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x38))))(*(int * PTR32 *)(this + 0x184));
    F_00596b10(this_00,uVar1);
  }
  if (*(int *)(this + 0x180) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x38))))(*(int * PTR32 *)(this + 0x180));
    F_00596b10(this_00,uVar1);
  }
  if (*(int *)(this + 0x188) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x38))))(*(int * PTR32 *)(this + 0x188));
    F_00596b10(this_00,uVar1);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonGearSet::vf38 */
uint F_007b35b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b35b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonGearSet::vf41 */
byte F_007b35e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b35e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GearSetList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGearSet::vf45 */
unsigned int F_007b35f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b35f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0056ae10(this);
  return 0;
}

/* ref: Client::UI2::AddonGearSet::vf25 */
uint F_007b3600(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonGearSet::vf48 */
uint F_007b3670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b3670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_007b3680 */
uint F_007b3680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b3680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  byte * pbVar5;
  uint * puVar6;
  int local_20;
  int local_1c;
  undefined4 * local_18;
  undefined * local_14;
  byte local_10;
  undefined4 * local_c;
  undefined4 * local_8;
  
  iVar3 = (int)param_1;
  pvVar4 = this;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    local_c = (undefined4 *)((int)this + 0x19c);
    local_18 = (undefined4 *)((int)this + 0x1a0);
    local_8 = (undefined4 *)((int)this + 0x198);
    pbVar5 = (byte *)((int)this + 0x1a8);
    puVar6 = (uint *)((int)this + 0x1a4);
    param_1 = (int *)((int)this + 0x194);
    local_14 = (undefined *)0x0;
    local_20 = 2;
    local_1c = 0x28;
    pvVar4 = (undefined *)0x14;
    do {
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + -0xc))) != 0) {
        *param_1 = local_20 + -2;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + -8 + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + -4 + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20))));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 4 + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + -4 + local_1c)));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + 8))) != 0) {
        *param_1 = local_20 + -1;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xc + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10 + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x14 + (int)pvVar4)));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x18 + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((local_1c + *(int *)(param_2 + 0x20))));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + 0x1c))) != 0) {
        *param_1 = local_20;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x20 + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x24 + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x28 + (int)pvVar4)));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x2c + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + local_1c)));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + 0x30))) != 0) {
        *param_1 = local_20 + 1;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x34 + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x38 + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x3c + (int)pvVar4)));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x40 + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8 + local_1c)));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + 0x44))) != 0) {
        *param_1 = local_20 + 2;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x48 + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4c + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x50 + (int)pvVar4)));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x54 + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc + local_1c)));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      local_1c = local_1c + 0x14;
      iVar1 = local_20 + 3;
      pvVar4 = (undefined *)((int)pvVar4 + 100);
      local_20 = local_20 + 5;
    } while (iVar1 < 100);
    if ((*(int *)((int)this + 0x18c) != 0) &&
       (pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x7c))))
                                   (*(int * PTR32 *)((int)this + 0x18c)))), pvVar4 != local_14)) {
      F_0058d980(*(undefined4 *)((int)this + 0x18c),(uint)local_14);
      pvVar4 = (undefined *)F_0059d6a0(this,(-(uint)(local_14 != (undefined *)0x0) & 0xffffffac) + 0x65,1,0)
      ;
    }
  }
  return (uint)pvVar4;
}

/* ref: FUN_007b3aa0 */
uint F_007b3aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  uVar4 = (*(uint *)(gen_frame + 0x14));
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0xc0)));
  piVar2 = *(int * PTR32 *)((int)this + 0x188);
  (*(uint *)(gen_frame + 0x18)) = 0xffffffff;
  if (iVar1 < 0) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x14)) = uVar4 & 0xffffff00;
    (*(uint *)(gen_frame + 0x18)) = 3;
  }
  else if ((((byte)*((undefined4 *)GEN_TOP(((int)this + (iVar1 + 0xf) * 0x1c))) & 3) == 1) &&
          ((*(byte *)((int)this + iVar1 * 0x1c + 0x1a8) & 0xe) == 0)) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x14)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3) << 8;
    (*(uint *)(gen_frame + 0x18)) = 4;
  }
  else {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),1);
  }
  ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,(*(uint *)(gen_frame + 0x14)));
  uVar4 = (*(uint *)(gen_frame + 0x18));
  if (*(uint *)((int)this + 0xc84) != (*(uint *)(gen_frame + 0x18))) {
    uVar3 = F_0055dcb0();
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2);
    uVar4 = F_00596b10((undefined *)(uVar3 + 0xe0),uVar4);
    if (-1 < (int)(*(uint *)(gen_frame + 0x18))) {
      uVar4 = F_0055dcb0();
      uVar4 = F_0055b9a0(uVar4);
      (*(uint *)(gen_frame + 0x14)) = *(int *)(uVar4 + 0x9c);
      F_00560760(((undefined4 *)(gen_frame + 0x8)));
      ((undefined4 *)(gen_frame + 0x8))[0] = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x14)) + 0x20) + (*(uint *)(gen_frame + 0x18)) * 4)));
      puVar5 = ((undefined4 *)(gen_frame + 0x8));
      (*(uint *)(gen_frame + 0x14)) = (uint)*(byte *)((int)this + 0x13a);
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2);
      uVar4 = F_00590ad0((undefined *)(uVar3 + 0xe0),2,(*(uint *)(gen_frame + 0x14)),uVar4,puVar5);
    }
    *(uint *)((int)this + 0xc84) = (*(uint *)(gen_frame + 0x18));
  }
  return uVar4;
}

/* ref: FUN_007b3bc0 */
uint F_007b3bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b3bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  bool bVar2;
  uint uVar3;
  byte * pbVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar2 = false;
  if (*(int *)((int)this + 0x18c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x78))))(*(int * PTR32 *)((int)this + 0x18c));
    uVar5 = 0;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x7c))))(*(int * PTR32 *)((int)this + 0x18c));
    if (uVar3 != 0) {
      pbVar4 = (byte *)((int)this + 0x1a4);
      do {
        if ((*(int *)(pbVar4 + -0x10) == param_1) || ((param_1 < 0 && ((*pbVar4 & 3) != 0)))) {
          F_005623b0(*(undefined * PTR32 *)((int)this + 0x18c),uVar5);
          uVar7 = 0;
          uVar6 = 1;
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x18c));
          F_0059b340(this,uVar3,uVar6,uVar7);
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x74))))(*(int * PTR32 *)((int)this + 0x18c),uVar5,0);
          bVar2 = true;
          break;
        }
        uVar5 = uVar5 + 1;
        pbVar4 = pbVar4 + 0x1c;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x7c))))(*(int * PTR32 *)((int)this + 0x18c));
      } while (uVar5 < uVar3);
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x18c);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,(uint)*(ushort *)(piVar1 + 0x30));
    if (bVar2) {
      return uVar3;
    }
    if ((*(int *)((int)this + 0x18c) != 0) &&
       (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x7c))))(*(int * PTR32 *)((int)this + 0x18c)),
       uVar3 != 0)) {
      uVar7 = 0;
      uVar6 = 1;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x18c));
      F_0059b340(this,uVar3,uVar6,uVar7);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x74))))(*(int * PTR32 *)((int)this + 0x18c),0,0);
      return uVar3;
    }
  }
  uVar7 = 0;
  uVar6 = 1;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x3c))))(*(int * PTR32 *)((int)this + 0x184));
  uVar3 = F_0059b340(this,uVar3,uVar6,uVar7);
  return uVar3;
}

/* ref: FUN_007b3cf0 */
uint F_007b3cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pvVar6 = (undefined *)*param_2;
  piVar1 = (int *)((int)this + param_1 * 0x1c + 0x194);
  uVar3 = param_1;
  if (pvVar6 != (undefined *)0x0) {
    F_0055a300(pvVar6,1);
    uVar7 = 0x11;
    if ((piVar1[4] & 3U) == 1) {
      uVar7 = 0x65;
    }
    else if ((piVar1[4] & 3U) == 2) {
      uVar7 = 0x66;
    }
    uVar3 = F_0059d640(pvVar6,uVar7);
  }
  pvVar6 = (undefined *)param_2[1];
  if (pvVar6 != (undefined *)0x0) {
    uVar4 = F_00559ba0(pvVar6);
    uVar3 = 0;
    if (uVar4 != 0) {
      F_0055a300(pvVar6,1);
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      iVar5 = *piVar1 + 1;
      pvVar6 = (undefined *)F_00559ba0(pvVar6);
      uVar3 = F_0057eb30(pvVar6,iVar5,uVar7,uVar8,uVar9,uVar10);
    }
  }
  pvVar6 = (undefined *)param_2[2];
  if (pvVar6 != (undefined *)0x0) {
    F_0055a300(pvVar6,1);
    uVar3 = F_005951c0(param_3,piVar1[1],0,pvVar6);
  }
  pvVar6 = (undefined *)param_2[3];
  if (pvVar6 != (undefined *)0x0) {
    uVar4 = F_00559ba0(pvVar6);
    uVar3 = 0;
    if (uVar4 != 0) {
      F_0055a300(pvVar6,1);
      iVar5 = piVar1[3];
      pvVar6 = (undefined *)F_00559ba0(pvVar6);
      uVar3 = F_00584110(pvVar6,iVar5);
    }
  }
  pvVar6 = (undefined *)param_2[4];
  if (pvVar6 != (undefined *)0x0) {
    F_0055a300(pvVar6,1);
    bVar2 = *(byte *)(piVar1 + 5);
    if ((bVar2 & 1) != 0) {
      uVar3 = F_0059d640(pvVar6,0x65);
      return uVar3;
    }
    if ((bVar2 & 6) == 0) {
      if ((bVar2 & 8) != 0) {
        uVar3 = F_0059d640(pvVar6,0x67);
        return uVar3;
      }
      uVar3 = F_0055a300(pvVar6,0);
      return uVar3;
    }
    uVar3 = F_0059d640(pvVar6,0x66);
  }
  return uVar3;
}

/* ref: FUN_007b3e20 */
uint F_007b3e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  this_00 = (gen_frame + 0x1c);
  F_00557670(param_2,0);
  piVar1 = *(int * PTR32 *)((int)this + 0x18c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (param_1 == 1) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
  }
  else if (param_1 == 2) {
    if (piVar1 != (int *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
      (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    }
  }
  else if (param_1 == 3) {
    if ((piVar1 == (int *)0x0) || (piVar1[0x30] < 0)) goto LAB_007b3f04;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    uVar4 = *(undefined4 *)((int)this + piVar1[0x30] * 0x1c + 0x194);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar4;
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    F_0059b340(this,uVar2,uVar4,uVar5);
  }
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
LAB_007b3f04: ;
  iVar3 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007b3f30 */
uint F_007b3f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  if (*(int *)((int)this + 0x18c) != 0) {
    piVar1 = (int *)((int)this + param_3[2] * 0x1c + 0x194);
    this_00 = (undefined *)F_005ab2b0((undefined *)*param_3,*piVar1,
                                   *(undefined4 *)((int)this + param_3[2] * 0x1c + 0x19c),0);
    uVar2 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_0058ea90(this_00,*piVar1 + 1);
    }
  }
  return uVar2;
}

/* ref: FUN_007b3fa0 */
uint F_007b3fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar2 = F_00557670(param_2,0);
  if (*(undefined * PTR32 *)((int)this + 0x18c) != (undefined *)0x0) {
    uVar2 = F_005623b0(*(undefined * PTR32 *)((int)this + 0x18c),*(undefined4 *)(param_3 + 8));
  }
  if (*(char *)(param_3 + 0x10) == '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + *(int *)(param_3 + 8) * 0x1c + 0x194)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar3 = 1;
    do {
      this_00 = this_00 + -8;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007b4040 */
uint F_007b4040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  if ((char)param_3[1] == '\0') {
    if (param_1 == 3) {
      in_EAX = 0;
      if (*param_3 == 2) {
        F_00557670(param_2,0);
        in_EAX = F_0059b390(this,*(undefined4 *)((int)this + 0x18c),1,0);
      }
    }
    else {
      in_EAX = param_1 - 4;
      if ((((in_EAX == 0) && (*param_3 == 5)) &&
          (in_EAX = *(uint *)((int)this + 0x18c), in_EAX != 0)) && (-1 < *(int *)(in_EAX + 0xcc))) {
        F_00557670(param_2,0);
        F_005623b0(*(undefined * PTR32 *)((int)this + 0x18c),
                     *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x18c) + 0xcc))));
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
        (*(undefined4 *)(gen_frame + 0x10)) = 4;
        uVar1 = *((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0xc0))) * 0x1c + 0x194)));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
        (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar3 = 1;
        do {
          this_00 = this_00 + -8;
          uVar2 = F_005a2670(this_00);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        return uVar2;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_007b4150 */
unsigned int F_007b4150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (param_1 == 5) {
    F_0056b630(this,0x18aee,7,0,9,0,0);
  }
  return 0;
}

/* ref: FUN_007b4180 */
unsigned int F_007b4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (param_1 == 5) {
    F_0056b780(this,0);
  }
  return 0;
}

/* ref: FUN_007b41a0 */
uint F_007b41a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b41a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  uVar1 = F_007b3aa0(this);
  return uVar1;
}

/* ref: FUN_007b41c0 */
uint F_007b41c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b41c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = F_00557670(param_2,0);
  if (*(int *)((int)this + 0x18c) != 0) {
    iVar5 = (int)this + param_3[2] * 0x1c + 0x194;
    bVar1 = *(byte *)(iVar5 + 0x14);
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) == 0) {
            return CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
          }
          iVar5 = 8;
        }
        else {
          iVar5 = 7;
        }
      }
      else {
        iVar5 = 6;
      }
    }
    else {
      iVar5 = 5;
    }
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9a0(uVar4);
    iVar2 = *(int *)(uVar4 + 0x9c);
    F_00560760(((undefined4 *)(gen_frame + 0x0)));
    bVar1 = *(byte *)((int)this + 0x13a);
    ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + iVar5 * 4)));
    uVar3 = *(undefined4 *)(*param_3 + 0x1e4);
    uVar4 = F_0055dcb0();
    uVar4 = F_00588780((undefined *)(uVar4 + 0xe0),2,(uint)bVar1,uVar3,((undefined4 *)(gen_frame + 0x0)),0,0);
  }
  return uVar4;
}

/* ref: FUN_007b4290 */
uint F_007b4290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  uVar1 = F_0055dcb0();
  uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),0);
  return uVar1;
}

/* ref: FUN_007b42c0 */
uint F_007b42c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b42c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce1ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0xffffffff;
  puVar1 = (undefined4 *)((int)this + 0x188);
  iVar2 = 0xd;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonGearSetView::vf37 */
uint F_007b4350(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x2b,0);
  F_005a92d0(this,0,0x27,0);
  F_005a92d0(this,1,0x40,0);
  F_005a92d0(this,0,0x3b,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonGearSetView::vf41 */
byte F_007b4390(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GearSetView",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGearSetView::vf25 */
uint F_007b43a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b43a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a9130(this,0xffffffff);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  return uVar1;
}

/* ref: FUN_007b43c0 */
uint F_007b43c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b43c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  pvVar4 = (undefined *)param_2[2];
  uVar3 = param_1 * 5;
  iVar1 = param_1 * 0x14;
  if (pvVar4 != (undefined *)0x0) {
    F_0055a300(pvVar4,1);
    uVar3 = F_005951c0(param_3,*(undefined4 *)((int)this + iVar1 + 0x18c),0,pvVar4);
  }
  if ((undefined *)param_2[1] != (undefined *)0x0) {
    uVar3 = F_0059d670((undefined *)param_2[1],
                         ((*(int *)((int)this + iVar1 + 400) < 1) - 1 & 0xffffffac) + 0x65);
  }
  if (0 < *(int *)((int)this + iVar1 + 400)) {
    pvVar4 = (undefined *)param_2[3];
    if (pvVar4 != (undefined *)0x0) {
      F_0055a300(pvVar4,1);
      uVar3 = F_005951c0(param_3,*(undefined4 *)((int)this + iVar1 + 400),0,pvVar4);
    }
    pvVar4 = (undefined *)param_2[4];
    if (pvVar4 != (undefined *)0x0) {
      F_0055a300(pvVar4,1);
      uVar5 = *(undefined4 *)((int)this + iVar1 + 0x194);
      pvVar4 = (undefined *)F_00559ba0(pvVar4);
      uVar3 = F_00584110(pvVar4,uVar5);
    }
    pvVar4 = (undefined *)*param_2;
    if (pvVar4 != (undefined *)0x0) {
      F_0055a300(pvVar4,1);
      bVar2 = *(byte *)((int)this + iVar1 + 0x199);
      uVar5 = 0x11;
      if ((bVar2 & 1) != 0) {
        uVar3 = F_0059d670(pvVar4,0x65);
        return uVar3;
      }
      if ((bVar2 & 6) != 0) {
        uVar3 = F_0059d670(pvVar4,0x66);
        return uVar3;
      }
      if ((bVar2 & 8) != 0) {
        uVar5 = 0x67;
      }
      uVar3 = F_0059d670(pvVar4,uVar5);
    }
  }
  return uVar3;
}

/* ref: FUN_007b44c0 */
uint F_007b44c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b44c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  
  uVar4 = F_00557670(param_2,0);
  if (*(int *)((int)this + 0x180) == 0) {
    return uVar4;
  }
  F_00560760(&(*(uint *)(gen_frame + 0x0)));
  iVar6 = param_3[2];
  bVar2 = *(byte *)((int)this + iVar6 * 0x14 + 0x199);
  uVar4 = CONCAT31((int3)((uint)iVar6 >> 8),bVar2);
  piVar1 = (int *)((int)this + iVar6 * 0x14 + 0x188);
  bVar5 = 0;
  if ((bVar2 & 1) == 0) {
    if ((bVar2 & 2) == 0) {
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 8) == 0) goto LAB_007b4549;
        iVar6 = 2;
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = 0;
    }
  }
  else {
    iVar6 = 1;
  }
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4);
  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar4 + 0xec) + 0x20))) + iVar6 * 4)));
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  bVar5 = 2;
LAB_007b4549: ;
  if (0 < *piVar1) {
    (*(undefined1 *)(gen_frame + 0xa)) = 0xb;
    (*(int *)(gen_frame + 0x4)) = *piVar1;
    (*(undefined1 *)(gen_frame + 0xb)) = (char)piVar1[4];
    bVar2 = *(byte *)((int)this + 0x13a);
    uVar3 = *(undefined4 *)(*param_3 + 0x1e4);
    uVar4 = F_0055dcb0();
    uVar4 = F_00588780((undefined *)(uVar4 + 0xe0),(uint)(bVar5 | 4),(uint)bVar2,uVar3,&(*(uint *)(gen_frame + 0x0)),0,0);
  }
  return uVar4;
}

/* ref: FUN_007b45b0 */
uint F_007b45b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b45b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  ((uint *)(gen_frame + 0x0))[0xe] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  ((uint *)(gen_frame + 0x0))[0] = 0;
  ((uint *)(gen_frame + 0x0))[1] = 1;
  ((uint *)(gen_frame + 0x0))[2] = 2;
  ((uint *)(gen_frame + 0x0))[3] = 3;
  ((uint *)(gen_frame + 0x0))[4] = 4;
  ((uint *)(gen_frame + 0x0))[5] = 5;
  ((uint *)(gen_frame + 0x0))[6] = 6;
  ((uint *)(gen_frame + 0x0))[7] = 7;
  ((uint *)(gen_frame + 0x0))[8] = 9;
  ((uint *)(gen_frame + 0x0))[9] = 8;
  ((uint *)(gen_frame + 0x0))[10] = 10;
  ((uint *)(gen_frame + 0x0))[0xb] = 0xc;
  ((uint *)(gen_frame + 0x0))[0xc] = 0xb;
  ((uint *)(gen_frame + 0x0))[0xd] = 0xd;
  uVar1 = ((uint *)(gen_frame + 0x0))[(int)(param_1)];
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_007b4640 */
uint F_007b4640(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce2ec));
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonTrade::vf36 */
unsigned int F_007b4750(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 500) = 0;
  return 0;
}

/* ref: Client::UI2::AddonTrade::vf41 */
byte F_007b47a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b47a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Trade",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTrade::vf25 */
uint F_007b47b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b47b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonTrade::vf52 */
byte F_007b4810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b4810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x1c);
  if ((*param_1 == 5) && ((char)param_1[1] == '\0')) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    *(undefined4 *)(this + 0x21c) = 0xffffffff;
    iVar1 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    return 1;
  }
  return 0;
}

/* ref: FUN_007b4880 */
uint F_007b4880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint * this_00;
  int iVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  piVar1 = (int *)*param_3;
  if ((*(byte *)(piVar1 + 5) & 4) != 0) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
    *(undefined1 *)(param_2 + 0x15) = 0;
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
    return (uint)param_3;
  }
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  uVar2 = *puVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  uVar2 = puVar4[1];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x22;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar3 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar5 = 3;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_007b4970 */
uint F_007b4970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b4970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b49c0 */
uint F_007b49c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b49c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b4a20 */
uint F_007b4a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b4a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b4a80 */
unsigned int F_007b4a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  if (*(char *)((int)this + 0x220) == '\0') {
    iVar2 = *(int *)((int)this + param_1 * 4 + 0x1d0);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x84) + 0xc))))(iVar2 + 0x84);
    uVar1 = F_0055a2d0(uVar1);
    if ((char)uVar1 != '\0') {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
      (*(int *)(gen_frame + 0x18)) = param_1;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      F_0056b630(this,0x18ad8,7,0,9,0,0);
      iVar2 = 1;
      do {
        this_00 = this_00 + -8;
        F_005a2670(this_00);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
  }
  return 0;
}

/* ref: FUN_007b4b30 */
uint F_007b4b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5);
  piVar2 = (int *)*param_3;
  iVar3 = *(int *)(uVar5 + 0x2c);
  if (piVar2 != (int *)0x0) {
    iVar4 = *(int *)((int)this + param_1 * 4 + 0x1d0);
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    *puVar6 = 0x22;
    uVar1 = *(ushort *)(iVar4 + 0x9c);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3);
    *(uint *)(uVar5 + 4) = (uint)uVar1;
    iVar3 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10 + (uint)*(ushort *)(iVar4 + 0x9c) * 0x14)));
    F_00561860(*(undefined * PTR32 *)(iVar4 + 0xa4),(uint)((byte)iVar3 & 1));
    uVar5 = F_005a03c0(*(undefined * PTR32 *)(iVar4 + 0xa4),iVar3 >> 1);
  }
  return uVar5;
}

/* ref: Client::UI2::AddonTrade::vf53 */
uint F_007b4bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b4bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = 0;
  if ((char)param_1 != '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 4;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonTrade::vf2 */
uint F_007b4c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b4c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 uVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined1 * this_00;
  
  if ((short)param_1 == 0x11) {
    piVar4 = param_2;
    if ((int *)0x2 < param_2) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + (int)((int)(uintptr_t)param_2) * 4 + 0x1c4) + 0x84))) + 0xc))))
                        (*(int *)(this + (int)((int)(uintptr_t)param_2) * 4 + 0x1c4) + 0x84);
      uVar3 = F_0055a2d0(uVar3);
      if ((char)uVar3 != '\0') {
        F_0056b630(this,0xd1,7,0,9,0,0);
        uVar3 = F_00557670(param_3,0);
        return uVar3;
      }
      F_0056b630(this,0x18ad8,7,0,9,0,0);
      uVar3 = F_00557670(param_3,0);
      return uVar3;
    }
  }
  else {
    if ((short)param_1 == 0x12) {
      F_0056b780(this,0);
      uVar3 = F_00557670(param_3,0);
      return uVar3;
    }
    if ((short)param_1 == 0xc) {
      piVar4 = param_4;
      if (*param_4 == 1) {
        cVar1 = (char)param_4[1];
        piVar4 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)param_4) >> 8),cVar1)));
        if (cVar1 == '\x01') {
          if (param_2 == *(int * PTR32 *)(this + 0x21c)) {
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + (int)((int)(uintptr_t)param_2) * 4 + 0x1d0) + 0x84))) + 0xc))))
                              (*(int *)(this + (int)((int)(uintptr_t)param_2) * 4 + 0x1d0) + 0x84);
            uVar3 = F_0055a2d0(uVar3);
            if ((char)uVar3 == '\0') {
              uVar2 = *(undefined4 *)(this + 0x21c);
              (*(undefined4 *)(gen_frame + 0x4)) = 0;
              (*(undefined4 *)(gen_frame + 0xc)) = 0;
              F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
              (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
              F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
              (*(undefined4 *)(gen_frame + 0x8)) = 5;
              uVar3 = F_0055dcb0();
              ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x14)),1);
              F_005a2670(((undefined1 *)(gen_frame + 0x14)));
              F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
              F_0056b630(this,0x18ad8,7,0,9,0,0);
              this_00 = ((undefined1 *)(gen_frame + 0x14));
              iVar5 = 1;
              do {
                this_00 = this_00 + -8;
                F_005a2670(this_00);
                iVar5 = iVar5 + -1;
              } while (-1 < iVar5);
            }
          }
          *(undefined4 *)(this + 0x21c) = 0xffffffff;
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
        if (cVar1 == '\0') {
          *(int * PTR32 *)(this + 0x21c) = param_2;
          return (uint)piVar4;
        }
      }
    }
    else {
      if ((short)param_1 == 0x17) {
        if (param_2 == (int *)0x0) {
          F_007b4970(this,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
        if (param_2 == (int *)0x1) {
          F_007b49c0(this,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
        if (param_2 == (int *)0x2) {
          F_007b4a20(this,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
      }
      else if ((short)param_1 == 0x30) {
        if (param_2 + -2 < &REFG(undefined, 0x5)) {
          F_007b4880(this,param_2 + -2,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
      }
      else if ((short)param_1 == 0x34) {
        if ((int)param_2 - 0xdU < 5) {
          F_007b4a80(this,(int)param_2 - 0xdU,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
      }
      else {
        if ((short)param_1 != 0x2d) {
          return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
        }
        if ((int)param_2 - 3U < 5) {
          F_007b4b30(this,(int)param_2 - 3U,param_3,param_4);
        }
      }
      piVar4 = (int *)F_00557670(param_3,0);
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_007b4ee0 */
uint F_007b4ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x88;
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x7f ^
       *(byte *)((int)this + 0xf9);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce3ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonCrossEditor::vf37 */
uint F_007b4f50(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,0,0x2f,0);
  F_005a92d0(this,1,0x33,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCrossEditor::vf41 */
byte F_007b4f80(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ActionCrossEditor",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCrossEditor::vf52 */
byte F_007b4f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b4f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  bVar1 = 0;
  if ((*param_1 == 2) && (*(int *)(this + 0x194) == 2)) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: Client::UI2::AddonCrossEditor::vf25 */
uint F_007b4fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b5020 */
uint F_007b5020(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce4ec));
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined2 *)((int)this + 0x2b8) = 0;
  F_00c48350((undefined *)((int)this + 0x180),0,0x130);
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsInfo::vf25 */
uint F_007b5080(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf36 */
uint F_007b50b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b50b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055e2a0(this,0x1000000,1);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf37 */
uint F_007b50f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b50f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,0,2,0);
  F_005a92d0(this,1,3,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf41 */
byte F_007b5120(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ContentsInfo",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf47 */
uint F_007b5130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00591c00(*(undefined * PTR32 *)(this + 0x194),
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) + 0xd0))),0);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf2 */
unsigned int F_007b5160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b5160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_007b5170 */
uint F_007b5170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0055e2f0(this,param_1);
  this_00 = (undefined *)F_00559c20(uVar1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00561530(this_00,2);
    *param_2 = uVar1;
    uVar1 = F_00561550(this_00,3);
    param_2[1] = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007b51b0 */
uint F_007b51b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b51b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0055e2f0(this,param_1);
  this_00 = (undefined *)F_00559c20(uVar1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    *param_2 = this_00;
    uVar1 = F_0055e2f0(this,param_1);
    param_2[1] = uVar1;
    uVar1 = F_00561530(this_00,4);
    param_2[2] = uVar1;
    uVar1 = F_00561550(this_00,3);
    param_2[3] = uVar1;
    uVar1 = F_00561530(this_00,5);
    param_2[4] = uVar1;
    uVar1 = F_00561530(this_00,6);
    param_2[5] = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007b5220 */
uint F_007b5220(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined1 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce5ec));
  return (uint)this;
}

/* ref: Client::UI2::AddonMovieSubtitle::vf38 */
uint F_007b52a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b52a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 * this;
  
  this = (gen_frame + 0x1c);
  bVar1 = F_0055dcc0(param_1);
  if ((bVar1 != 0) && (*(char *)((int)param_1 + 0x180) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x180) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    bVar1 = F_0055dcc0(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),2);
    (*(byte *)(gen_frame + 0x18)) = bVar1;
    F_005a9110(param_1,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar3 = 1;
    do {
      this = this + -8;
      F_005a2670(this);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonMovieSubtitleOpening::vf41 */
byte F_007b5330(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar2 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))) {
  case (undefined *)0x0: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_Ja",0,6);
    return bVar1;
  default: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_En",0,6);
    return bVar1;
  case (undefined *)0x2: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_De",0,6);
    return bVar1;
  case (undefined *)0x3: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_Fr",0,6);
    return bVar1;
  case (undefined *)0x4: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_Chs",0,6);
    return bVar1;
  case (undefined *)0x5: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_Cht",0,6);
    return bVar1;
  }
}

/* ref: Client::UI2::AddonMovieSubtitleOpening::vf44 */
uint F_007b5400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  uint uVar2;
  
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e360(this,2);
  uVar2 = F_0055da10(uVar2);
  fVar1 = REFG(float, 0x10a0da0);
  *(uint *)(this + 0x188) = uVar2;
  F_0055e1c0(this,fVar1,0,0,(float)(float10)1,1);
  F_0055e220(this,REFG(float, 0x10a0da0),0,0,(float)(float10)1,1);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar2;
}

/* ref: Client::UI2::AddonMovieSubtitleOpening::vf46 */
byte F_007b5480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5480u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  
  if (0 < (*(int *)&gen_args[1])) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
    F_004142d0(&(*(int *)&gen_args[1]),*(undefined4 *)(uVar1 + 0x14));
    if (((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) != 0) && ((*(byte * PTR32 *)&gen_args[2])[4] != 0)) {
      if (((*(byte * PTR32 *)&gen_args[2])[8] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0xc)));
      }
      F_0059d670(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),*(int *)(&REFG(undefined, 0x10c22d4) + (*(int *)&gen_args[1]) * 4) + iVar2);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),0);
      return 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]),0,0);
  }
  return 1;
}

/* ref: Client::UI2::AddonMovieSubtitleVoyage::vf41 */
byte F_007b5500(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar2 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))) {
  case (undefined *)0x0: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_Ja",0,6);
    return bVar1;
  default: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_En",0,6);
    return bVar1;
  case (undefined *)0x2: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_De",0,6);
    return bVar1;
  case (undefined *)0x3: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_Fr",0,6);
    return bVar1;
  case (undefined *)0x4: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_Chs",0,6);
    return bVar1;
  case (undefined *)0x5: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_Cht",0,6);
    return bVar1;
  }
}

/* ref: Client::UI2::AddonMovieSubtitleVoyage::vf44 */
uint F_007b55d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b55d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  uint uVar2;
  
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e360(this,2);
  uVar2 = F_0055da10(uVar2);
  fVar1 = REFG(float, 0x10a0da0);
  *(uint *)(this + 0x188) = uVar2;
  F_0055e1c0(this,fVar1,0,0,(float)(float10)1,1);
  F_0055e220(this,REFG(float, 0x10a0da0),0,0,(float)(float10)1,1);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar2;
}

/* ref: Client::UI2::AddonMovieSubtitleVoyage::vf46 */
byte F_007b5650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5650u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  
  if (0 < (*(int *)&gen_args[1])) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
    F_004142d0(&(*(int *)&gen_args[1]),*(undefined4 *)(uVar1 + 0x14));
    if (((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) != 0) && ((*(byte * PTR32 *)&gen_args[2])[4] != 0)) {
      if (((*(byte * PTR32 *)&gen_args[2])[8] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0xc)));
      }
      F_0059d670(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),*(int *)(&REFG(undefined, 0x10c22ec) + (*(int *)&gen_args[1]) * 4) + iVar2);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),0);
      return 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]),0,0);
  }
  return 1;
}

/* ref: FUN_007b56d0 */
uint F_007b56d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b56d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce6ec));
  F_0055e2a0(this,0x1000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonPadMouseMode::vf41 */
byte F_007b5740(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"PadMouseMode",0,6);
  return bVar1;
}

/* ref: FUN_007b5780 */
uint F_007b5780(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce7ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined1 *)((int)this + 0x1b0) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonBank::vf41 */
byte F_007b5820(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,&REFG(undefined, 0x10c2468),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBank::vf25 */
uint F_007b5830(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonBank::vf38 */
uint F_007b5890(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b5890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  char cVar1;
  int iVar2;
  uint uVar3;
  
  F_005a2370(param_1,param_2);
  iVar2 = *(int *)(param_1 + 0x180);
  uVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x84);
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
    if (*(char *)(param_1 + 0x1b0) != cVar1) {
      *(char *)(param_1 + 0x1b0) = cVar1;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18c) + 0x28))))
                        (*(int * PTR32 *)(param_1 + 0x18c),(uint)(cVar1 == '\0'));
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonBank::vf52 */
byte F_007b58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*param_1 != 2) {
    return 0;
  }
  uVar1 = F_0055dcb0();
  uVar1 = F_00558e10(*(undefined4 *)(uVar1 + 0x18));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x3c))))(*(int * PTR32 *)(this + 0x184));
  if (uVar1 != uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188));
    if (uVar1 != uVar2) {
      F_0059b390(this,*(undefined4 *)(this + 0x184),1,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007b5960 */
uint F_007b5960(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b59b0 */
uint F_007b59b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b59b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b5a10 */
uint F_007b5a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b5a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonBuddy::vf37 */
uint F_007b5a90(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pAVar4;
  undefined * pAVar5;
  int iVar6;
  int local_10;
  int local_8;
  
  F_005a92d0(this,1,0x38,0);
  F_005a92d0(this,0,0x34,0);
  if (*(undefined * PTR32 *)(this + 0x1cc) != (undefined *)0x0) {
    F_00597570(*(undefined * PTR32 *)(this + 0x1cc));
  }
  if (*(undefined * PTR32 *)(this + 0x1d0) != (undefined *)0x0) {
    F_00597570(*(undefined * PTR32 *)(this + 0x1d0));
  }
  pAVar4 = this + 0x1f8;
  iVar6 = 6;
  do {
    if (*(undefined * PTR32 *)pAVar4 != (undefined *)0x0) {
      F_00597570(*(undefined * PTR32 *)pAVar4);
    }
    pAVar4 = pAVar4 + 0x28;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  pAVar4 = this + 0x2f4;
  local_10 = 3;
  do {
    local_8 = 10;
    pAVar5 = pAVar4;
    do {
      if (*(int *)pAVar5 != 0) {
        uVar2 = F_0055dcb0();
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar5 + 0x38))))(*(int * PTR32 *)pAVar5);
        F_00596b10((undefined *)(uVar2 + 0xe0),uVar3);
      }
      pAVar5 = pAVar5 + 0x2c;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    pAVar4 = pAVar4 + 0x1c4;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  pAVar4 = this + 0x838;
  local_10 = 3;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar1 = *(undefined4 *)(*(int *)pAVar4 + 0x70);
      uVar2 = F_0055dcb0();
      F_00596b10((undefined *)(uVar2 + 0xe0),uVar1);
    }
    pAVar4 = pAVar4 + 8;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  pAVar4 = this + 0x1a8;
  iVar6 = 3;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar2 = F_0055dcb0();
      F_00596b10((undefined *)(uVar2 + 0xe0),*(int *)pAVar4);
    }
    pAVar4 = pAVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonBuddy::vf41 */
byte F_007b5bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Buddy",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBuddy::vf25 */
uint F_007b5bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007b5c40 */
unsigned int F_007b5c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b5c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  uVar1 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    if (((*(byte * PTR32 *)&gen_args[4])[0x18] & 0xf) == 0) {
      (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) = 0;
    }
    else {
      (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) = (undefined2)*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x1c)));
    }
    F_0056e4d0(this_00,(uint)((char)((ushort)(*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) >> 8) != '\0'));
    *(undefined2 *)((int)this_00 + 0x9c) = (undefined2)(*(undefined4 *)&gen_args[2]);
    if ((*(*(byte * PTR32 *)&gen_args[4]) & 0xf) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 4)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0x28))))((int)this_00 + 0x84);
    *(undefined4 *)((int)this_00 + 0x98) = 0x10000;
    F_00595560(this_00,uVar1);
    if (((*(byte * PTR32 *)&gen_args[4])[0x10] & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x14)));
    }
    F_00560760(&(*(undefined4 *)(gen_frame + 0xc)));
    (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[2]);
    (*(undefined2 *)(gen_frame + 0x16)) = 1;
    F_005916c0(this_00,6,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x13a),&(*(undefined4 *)(gen_frame + 0xc)));
    uVar3 = iVar2 >> 0x10 & 0xffff;
    if ((uVar3 < 2) && ((char)(*(undefined * PTR32 *)&gen_args[1]) != '\x05')) {
      F_00584110(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0xa4) + 0xbc))),&REFG(undefined, 0x10beae6));
    }
    else {
      F_0057eb30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0xa4) + 0xbc))),uVar3,0,0,0,0);
    }
    if (((*(byte * PTR32 *)&gen_args[4])[0x20] & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x24)));
    }
    F_00561860(*(undefined * PTR32 *)((int)this_00 + 0xa4),(uint)((byte)iVar2 & 1));
    F_005a03c0(*(undefined * PTR32 *)((int)this_00 + 0xa4),iVar2 >> 1);
  }
  return 0;
}

/* ref: FUN_007b5d80 */
unsigned int F_007b5d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (param_1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 9;
    *(undefined2 *)(param_1 + 8) = 0;
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 4);
    }
    uVar4 = uVar2 >> 0x18;
    if ((param_2[8] & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 0xc);
    }
    param_1[2] = iVar5;
    if ((param_2[0x10] & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x14);
    }
    param_1[5] = iVar5;
    if ((param_2[0x18] & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x1c);
    }
    *(bool *)(param_1 + 8) = iVar3 != 0;
    param_1[4] = uVar2 & 0xffffff;
    param_1[7] = uVar4;
    if (uVar4 == 4) {
      param_1[3] = 0x80000;
      param_1[6] = 0x11;
    }
    else if (uVar4 == 8) {
      param_1[3] = 0x1000000;
      param_1[6] = 0x19;
    }
    if ((undefined *)*param_1 != (undefined *)0x0) {
      F_00595560((undefined *)*param_1,iVar5);
      *(short *)(*param_1 + 0x9c) = (short)param_1[4];
      *(int *)(*param_1 + 0x98) = param_1[3];
      F_00563050(*param_1,(uint)*(byte *)(param_1 + 8));
      pbVar1 = (byte *)(*param_1 + 0xaa);
      *pbVar1 = *pbVar1 ^ (((char)param_1[8] == '\0') * '\x02' ^ *(byte *)(*param_1 + 0xaa)) & 2;
      *(undefined1 *)(*param_1 + 0xa9) = 2;
      F_00560760(((undefined1 *)(gen_frame + 0xc)));
      (*(undefined1 *)(gen_frame + 0x16)) = (char)param_1[6];
      (*(int *)(gen_frame + 0x10)) = param_1[4];
      (*(undefined1 *)(gen_frame + 0x17)) = 0;
      F_005916c0((undefined *)*param_1,8,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x13a),((undefined1 *)(gen_frame + 0xc)));
    }
    if ((undefined *)param_1[1] != (undefined *)0x0) {
      F_00584110((undefined *)param_1[1],param_1[2]);
    }
  }
  return 0;
}

/* ref: FUN_007b5ed0 */
uint F_007b5ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b5ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    uVar1 = *(ushort *)(piVar2 + 6);
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2);
    *(uint *)(uVar3 + 4) = (uint)uVar1;
  }
  uVar3 = F_00557670(param_1,0);
  return uVar3;
}

/* ref: FUN_007b5f00 */
uint F_007b5f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b5f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar3 = *param_4;
  if (iVar3 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    uVar1 = *(ushort *)(iVar3 + 0x18);
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = (uint)uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = param_2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar2 = F_00557670(param_3,0);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007b5fb0 */
uint F_007b5fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b5fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar3 = *param_3;
  if (iVar3 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x11;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar1 = *(ushort *)(iVar3 + 0x18);
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(uint *)(gen_frame + 0x14)) = (uint)uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar2 = F_00557670(param_2,0);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007b6060 */
uint F_007b6060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b6060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xd;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  F_00557670(param_2,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007b6100 */
uint F_007b6100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b6100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (*(char *)(param_3 + 6) == '\x01') {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0xe;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  F_00557670(param_2,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007b61c0 */
uint F_007b61c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b61c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 9 + param_1 * 10;
}

/* ref: FUN_007b61e0 */
unsigned int F_007b61e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b61e0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_1 != (uint *)0x0) {
    *param_1 = (param_3 - 9U) / 10;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = (param_3 - 9U) % 10;
  }
  return 0;
}

/* ref: FUN_007b6220 */
uint F_007b6220(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  iVar3 = *(int *)(uVar2 + 8);
  if (iVar3 != 0) {
    do {
      if (iVar3 == *(int *)((int)this + 0x834)) {
        bVar1 = F_0056b630(this,0x18ae3,7,0,9,0,0);
        return CONCAT31(extraout_var_00,bVar1);
      }
      if (((iVar3 == *(int *)((int)this + 0x1c0)) || (iVar3 == *(int *)((int)this + 0x1c4))) ||
         (iVar3 == *(int *)((int)this + 0x1c8))) {
        bVar1 = F_0056b630(this,0x18ae2,7,0,9,0,0);
        return CONCAT31(extraout_var_01,bVar1);
      }
      iVar3 = *(int *)(iVar3 + 8);
    } while (iVar3 != 0);
  }
  bVar1 = F_0056b780(this,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007b62a0 */
uint F_007b62a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b62a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce9ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0xffffffff;
  *(undefined4 *)((int)this + 0x188) = 0;
  puVar1 = (undefined4 *)((int)this + 0x18c);
  iVar2 = 0x31;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf41 */
byte F_007b6320(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"BuddyEquipList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf46 */
byte F_007b6330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * this_00;
  undefined * pAVar4;
  undefined4 uVar5;
  int iVar6;
  int local_8;
  
  local_8 = -1;
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x1c);
  }
  iVar6 = 0;
  *(int *)(this + 0x188) = iVar1;
  if (0 < iVar1) {
    pAVar4 = this + 0x194;
    puVar2 = (undefined4 *)(param_2 + 0x44);
    do {
      if ((*(byte *)(puVar2 + -7) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = puVar2[-6];
      }
      *(undefined4 *)(pAVar4 + -8) = uVar5;
      if ((*(byte *)(puVar2 + -5) & 0xf) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = puVar2[-4];
      }
      pAVar4[-4] = (undefined1)(iVar1 != 0);
      if (iVar1 != 0) {
        local_8 = iVar6;
      }
      if ((*(byte *)(puVar2 + -1) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar2;
      }
      *(undefined4 *)pAVar4 = uVar5;
      if ((*(byte *)(puVar2 + -3) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = puVar2[-2];
      }
      *(undefined4 *)(pAVar4 + 4) = uVar5;
      iVar6 = iVar6 + 1;
      puVar2 = puVar2 + 8;
      pAVar4 = pAVar4 + 0x10;
    } while (iVar6 < *(int *)(this + 0x188));
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x7c))))(*(int * PTR32 *)(this + 0x180));
  if (uVar3 != *(uint *)(this + 0x188)) {
    F_0058d980(*(undefined4 *)(this + 0x180),(uint)*(ushort *)(this + 0x188));
  }
  F_005623b0(*(undefined * PTR32 *)(this + 0x180),local_8);
  if (*(int *)(this + 0x188) < 1) {
    *(undefined4 *)(this + 0x188) = 0;
    uVar5 = 0x65;
  }
  else {
    uVar5 = 0x11;
  }
  F_0059d640(*(undefined * PTR32 *)(this + 0x90),uVar5);
  if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x24);
  }
  this_00 = (undefined *)F_0055e340(this,6);
  F_00584110(this_00,uVar5);
  return 1;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf25 */
uint F_007b6450(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xf;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf2 */
uint F_007b64d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b64d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  if ((((short)param_1 == 0x21) && (param_2 == 1)) && (uVar2 = 0, -1 < *(int *)(param_4 + 8))) {
    if (*(char *)(param_4 + 0x10) == '\0') {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      uVar1 = *(undefined4 *)(this + 0x184);
      (*(undefined4 *)(gen_frame + 0x4)) = 0x12;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      uVar1 = *((undefined4 *)GEN_TOP((this + *(int *)(param_4 + 8) * 0x10 + 0x18c)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0x18));
      iVar3 = 2;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    *((undefined1 *)GEN_TOP((*(int *)(this + 0x180) + 0x113))) = 0;
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
    *(undefined1 *)(param_3 + 0x15) = 1;
    uVar2 = F_00557670(param_3,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007b65c0 */
uint F_007b65c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b65c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  pvVar2 = (undefined *)*param_2;
  uVar1 = param_1 * 2;
  if (pvVar2 != (undefined *)0x0) {
    F_0055a300(pvVar2,1);
    uVar1 = F_005951c0(param_3,*(undefined4 *)((int)this + param_1 * 0x10 + 0x194),0,pvVar2);
  }
  pvVar2 = (undefined *)param_2[1];
  if (pvVar2 != (undefined *)0x0) {
    F_0055a300(pvVar2,1);
    uVar3 = *(undefined4 *)((int)this + param_1 * 0x10 + 0x198);
    pvVar2 = (undefined *)F_00559ba0(pvVar2);
    uVar1 = F_00584110(pvVar2,uVar3);
  }
  return uVar1;
}

/* ref: FUN_007b6620 */
uint F_007b6620(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ceaec));
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
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
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x20000;
  return (uint)this;
}

/* ref: Client::UI2::AddonRecommendList::vf37 */
uint F_007b6750(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x3b,0);
  F_005a92d0(this,0,0x37,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonRecommendList::vf41 */
byte F_007b6780(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"RecommendList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonRecommendList::vf38 */
uint F_007b6790(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b6790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0xf9) & 1) != 0) {
    iVar4 = 0;
    bVar1 = F_0056c7e0();
    if ((bVar1 != 0) &&
       ((uVar2 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
      uVar2 = F_0055dcb0();
      iVar4 = (*((int *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) + 1;
    }
    if (*(int *)(param_1 + 0x204) != iVar4) {
      if ((iVar4 == 0) || (uVar3 = 0x65, iVar4 == 1)) {
        uVar3 = 0x66;
      }
      F_0059d640(*(undefined * PTR32 *)(param_1 + 0x20c),uVar3);
      F_00563db0(*(undefined4 *)(param_1 + 0x208),1);
      *(int *)(param_1 + 0x204) = iVar4;
    }
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonRecommendList::vf43 */
byte F_007b6830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6830u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  
  pbVar3 = param_3;
  if ((param_3 != (byte *)0x0) && (param_2 == 1)) {
    if ((*param_3 & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_3 + 4);
    }
    bVar1 = ((iVar2 != 0) << 6 ^ *(byte *)(in_ecx + 0xf9)) & 0x40;
    pbVar3 = (byte *)(uint)bVar1;
    *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  }
  return (byte)pbVar3;
}

/* ref: Client::UI2::AddonRecommendList::vf47 */
uint F_007b6870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined * pAVar6;
  
  iVar1 = *(int *)(param_1 + 0xec);
  iVar2 = *(int *)(param_2 + 0xdc);
  uVar5 = param_1;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar3 = **(int * PTR32 *)(iVar1 + 0x20);
    iVar4 = 0;
    *(int *)(this + 0x188) = iVar3;
    if (0 < iVar3) {
      pAVar6 = this + 0x194;
      do {
        *(undefined4 *)(pAVar6 + -8) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + iVar4 * 4)));
        *(undefined4 *)(pAVar6 + -4) = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + iVar4 * 4)));
        *(undefined4 *)pAVar6 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x28 + iVar4 * 4)));
        iVar4 = iVar4 + 1;
        pAVar6 = pAVar6 + 0xc;
      } while (iVar4 < *(int *)(this + 0x188));
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x7c))))(*(int * PTR32 *)(this + 0x180));
    if (uVar5 != *(uint *)(this + 0x188)) {
      F_0058d980(*(undefined4 *)(this + 0x180),(uint)*(ushort *)(this + 0x188));
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70))))(*(int * PTR32 *)(this + 0x180));
    if (*(int *)(this + 0x188) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x184),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x50))));
    }
    uVar5 = F_0059d640(*(undefined * PTR32 *)(this + 0x90),
                         (-(uint)(*(int *)(this + 0x188) != 0) & 0xffffffac) + 0x65);
  }
  return uVar5;
}

/* ref: Client::UI2::AddonRecommendList::vf25 */
uint F_007b6950(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = F_0055dcb0();
  uVar1 = *(uint *)(uVar1 + 0x14);
  if (*(undefined * PTR32 *)(uVar1 + 0xcc) == this) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00,uVar2,uVar3,uVar4);
    uVar1 = F_0055dcb0();
    F_00580230(*(undefined * PTR32 *)(uVar1 + 0x14),this,0);
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
    uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: Client::UI2::AddonRecommendList::vf5 */
uint F_007b69c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b69c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  this[0xf9] = (undefined1)((byte)this[0xf9] | 0x40);
  return uVar1;
}

/* ref: Client::UI2::AddonRecommendList::vf2 */
uint F_007b69e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b69e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined1 AVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  byte * pbVar7;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar8;
  bool bVar9;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar4 = param_1 & 0xffff;
  uVar5 = uVar4 - 0x17;
  if (uVar5 < 0xb) {
    uVar5 = (uint)*(byte *)(uVar4 + 0x7b6ba9);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0x17: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0xffffffff;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
      (*(int *)(gen_frame + 0x18)) = 0;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar8 = 1;
      do {
        this_00 = this_00 + -8;
        uVar5 = F_005a2670(this_00);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      return uVar5;
    case 0x1f: ;
      if (-1 < param_4[2]) {
        F_00557670(param_3,0);
        F_00560760(&(*(byte * PTR32 *)(gen_frame + 0x10)));
        pbVar6 = *(byte * PTR32 *)(this + param_4[2] * 0xc + 0x194);
        (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar6;
        uVar5 = 0;
        if (pbVar6 != (byte *)0x0) {
          pbVar7 = &REFG(undefined1, 0x10beae7);
          do {
            bVar1 = *pbVar6;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_007b6b46: ;
              iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_007b6b4b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_007b6b46;
            pbVar6 = pbVar6 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_007b6b4b: ;
          uVar5 = 0;
          if (iVar8 != 0) {
            uVar3 = *(undefined4 *)(*param_4 + 0x1e4);
            AVar2 = this[0x13a];
            uVar5 = F_0055dcb0();
            uVar5 = F_00588780((undefined *)(uVar5 + 0xe0),2,(uint)(byte)AVar2,uVar3,&(*(byte * PTR32 *)(gen_frame + 0x10)),0,0);
            return uVar5;
          }
        }
      }
      break;
    case 0x20: ;
      F_00557670(param_3,0);
      uVar5 = F_0055dcb0();
      uVar5 = F_00594d90((undefined *)(uVar5 + 0xe0),0);
      break;
    case 0x21: ;
      if ((param_2 == 1) && (-1 < param_4[2])) {
        if ((char)param_4[4] == '\0') {
          (*(undefined4 *)(gen_frame + 0xc)) = 0;
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
          iVar8 = param_4[2];
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0xb;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
          (*(int *)(gen_frame + 0x18)) = iVar8;
          F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
          iVar8 = 1;
          do {
            this_01 = this_01 + -8;
            F_005a2670(this_01);
            iVar8 = iVar8 + -1;
          } while (-1 < iVar8);
        }
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
        *(undefined1 *)(param_3 + 0x15) = 1;
        uVar5 = F_00557670(param_3,0);
        return uVar5;
      }
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonRecommendList::vf48 */
uint F_007b6bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6bd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  return (uint)(*((int *)GEN_TOP((*(int *)(uVar1 + 0x14) + 0xcc))) == in_ecx);
}

/* ref: FUN_007b6bf0 */
uint F_007b6bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b6bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  pvVar3 = (undefined *)*param_2;
  uVar2 = param_1 * 3 + 99;
  puVar1 = (undefined4 *)((int)this + uVar2 * 4);
  if (pvVar3 != (undefined *)0x0) {
    F_0055a300(pvVar3,1);
    uVar2 = F_005951c0(param_3,*puVar1,0,pvVar3);
  }
  pvVar3 = (undefined *)param_2[1];
  if (pvVar3 != (undefined *)0x0) {
    F_0055a300(pvVar3,1);
    uVar4 = puVar1[1];
    pvVar3 = (undefined *)F_00559ba0(pvVar3);
    uVar2 = F_00584110(pvVar3,uVar4);
  }
  return uVar2;
}

/* ref: FUN_007b6c50 */
uint F_007b6c50(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cebec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 400) = 0;
  *(undefined1 *)((int)this + 0x192) = 0;
  F_0055e2a0(this,0x1000000,1);
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,1);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonCatch::vf41 */
byte F_007b6ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextFishingNote",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCatch::vf25 */
unsigned int F_007b6cf0(void)
{
  GEN_ENTER(0x7b6cf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonCatch::vf6 */
uint F_007b6d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCatch::vf46 */
byte F_007b6d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  if ((((param_2 != (byte *)0x0) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) == 1)) &&
     (this[0x18a] != (undefined1)0x2)) {
    if (((byte)this[0xf9] & 1) != 0) {
      F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x69);
      this[0x18a] = (undefined1)0x2;
      return 1;
    }
    this[0x18a] = (undefined1)0x1;
  }
  return 1;
}

/* ref: FUN_007b6d80 */
uint F_007b6d80(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  undefined * this_00;
  
  if (*(char *)((int)this + 0x191) == '\0') {
    this_00 = (undefined *)F_0055e2f0(this,2);
    in_EAX = F_0059d640(this_00,((*(int *)((int)this + 0x184) < 1) - 1 & 0x54) + 0x11);
    *(undefined1 *)((int)this + 0x191) = 1;
  }
  return in_EAX;
}

/* ref: FUN_007b6dc0 */
uint F_007b6dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cecec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[4])REFP(0x10c41a8));
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  F_00580ea0((undefined *)((int)this + 0x19c));
  F_00c48350((undefined *)((int)this + 0x1d4),0,0x600);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  F_00560e80((undefined *)((int)this + 0x19c),this);
  return (uint)this;
}

/* ref: FUN_007b6e70 */
uint F_007b6e70(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cecec));
  F_00590cc0((undefined *)((int)this + 0x19c));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf25 */
uint F_007b6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00580fa0(this + 0x19c);
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonCutSceneReplay::vf37 */
uint F_007b6ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 0x184) != 0) {
    F_00588cd0(this + 0x19c,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(int *)(this + 0x184),0);
    *(undefined4 *)(this + 0x184) = 0;
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf38 */
uint F_007b6f10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b6f10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x19c,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf39 */
unsigned int F_007b6f40(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x19c);
  return 0;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf41 */
byte F_007b6f60(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CutScene",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf47 */
unsigned int F_007b6f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf49 */
uint F_007b6f80(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00580f60(this + 0x19c,0);
  uVar1 = F_005a9190((undefined *)this);
  return uVar1;
}

/* ref: FUN_007b6fa0 */
uint F_007b6fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b6fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this_00,*(undefined4 *)((int)this + param_1 * 4 + 0x1d4));
  return uVar1;
}

/* ref: FUN_007b6fd0 */
uint F_007b6fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b6fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(uint *)(param_1 + 8);
  if (*(uint *)((int)this + 0x180) != uVar1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    *(uint *)((int)this + 0x180) = uVar1;
    (*(undefined4 *)(gen_frame + 0x10)) = 1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007b7030 */
uint F_007b7030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b7030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((char)param_1 != '\0') {
    in_ecx = F_0055e2f0(this,7);
    uVar2 = F_0055a020(in_ecx);
    bVar1 = F_0056b630(this,0x12c7,6,0,7,(uint)(uVar2 >> 1),uVar3);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b780(this,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_007b7080 */
byte F_007b7080(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = 0;
  if (((*((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0xc0))) == *((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0xcc)))
       ) && (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x184) + 4))), iVar3 != 0)) &&
     (iVar2 = *(int *)(iVar3 + 0xa4), iVar2 != 0)) {
    uVar4 = 0;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00,iVar2,iVar3,uVar4);
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_007b70d0 */
uint F_007b70d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b70d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cedec));
  return (uint)this;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf41 */
byte F_007b7170(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CutSceneDetail",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf38 */
uint F_007b7180(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b7180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf52 */
byte F_007b71a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b71a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  
  if (((char)param_1[1] == '\0') && (*param_1 == 2)) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x8c))(piVar3);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007b71f0 */
uint F_007b71f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b71f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte * pbVar5;
  int iVar6;
  uint * this_00;
  ulonglong uVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar3;
  if (param_1 != 0) {
    if ((*(byte *)(param_3 + param_4 * 8) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_3 + param_4 * 8 + 4);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),uVar4,REFG(undefined4, 0x108cc50));
    if (1 < param_1) {
      iVar6 = param_1 - 1;
      pbVar5 = (byte *)(param_3 + 8 + param_4 * 8);
      do {
        F_0042d540(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10c24e0));
        if ((*pbVar5 & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + 4);
        }
        F_0042d540(((undefined1 *)(gen_frame + 0x14)),uVar4);
        iVar6 = iVar6 + -1;
        pbVar5 = pbVar5 + 8;
      } while (iVar6 != 0);
    }
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined4 *)(gen_frame + 0x68)) = 6;
    (*(uint *)(gen_frame + 0x6c)) = uVar3;
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x188));
    (*(undefined4 *)(gen_frame + 0x70)) = 4;
    (*(uint *)(gen_frame + 0x74)) = (uint)uVar2;
    uVar3 = F_0055ab00(*(undefined4 *)((int)this + 0x188));
    (*(undefined4 *)(gen_frame + 0x78)) = 4;
    (*(uint *)(gen_frame + 0x7c)) = uVar3;
    bVar1 = F_0055ab50(*(undefined4 *)((int)this + 0x188));
    (*(undefined4 *)(gen_frame + 0x80)) = 4;
    (*(uint *)(gen_frame + 0x84)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x68)))));
    if ((*pbVar5 & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar5 + 4);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x188),uVar4);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    this_00 = &(*(uint *)(gen_frame + 0x88));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    uVar3 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: FUN_007b7340 */
uint F_007b7340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b7340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x1b0),param_1,0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a4) + 0x28))))
            (*(int * PTR32 *)((int)this + 0x1a4),
             (uint)(*((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x98))) < param_1));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x28))))
            (*(int * PTR32 *)((int)this + 0x1a8),
             (uint)(param_1 < *((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x9c)))));
  F_0055dcb0();
  uVar1 = F_00560910(param_1 + 1);
  uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),uVar1);
  return uVar1;
}

/* ref: FUN_007b73c0 */
uint F_007b73c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b73c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ceeec));
  F_0042c880((undefined *)((int)this + 0x9784));
  iVar3 = 0x95;
  pvVar2 = (undefined *)((int)this + 0x9780);
  do {
    F_0042c880((undefined *)((int)pvVar2 + -0x54));
    F_0042c880((undefined *)((int)pvVar2 + -0xa8));
    F_0042c880((undefined *)((int)pvVar2 + -0x100));
    iVar3 = iVar3 + -1;
    pvVar2 = (undefined *)((int)pvVar2 + -0x100);
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigKeybind::vf41 */
byte F_007b7420(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigKeybind",0,6);
  return bVar1;
}

/* ref: FUN_007b7430 */
uint F_007b7430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b7430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  uVar1 = F_00559ba0(*param_2);
  if (uVar1 != 0) {
    uVar2 = F_0042a990(param_1 * 0x100 + 0x180 + (int)this);
    pvVar3 = (undefined *)F_00559ba0(uVar1);
    F_00584110(pvVar3,uVar2);
  }
  pvVar3 = (undefined *)F_00559c20(param_2[1]);
  if (pvVar3 != (undefined *)0x0) {
    F_00561ee0(pvVar3,1,1);
    uVar1 = F_00561530(pvVar3,5);
    if (uVar1 != 0) {
      uVar5 = 0;
      uVar2 = F_00559ba0(uVar1);
      F_0055aab0(uVar2,uVar5);
      uVar2 = F_0042a990(param_1 * 0x100 + 0x1d8 + (int)this);
      pvVar4 = (undefined *)F_00559ba0(uVar1);
      F_00584110(pvVar4,uVar2);
    }
    pvVar3 = (undefined *)F_00561490(pvVar3,3);
    if (pvVar3 != (undefined *)0x0) {
      if ((*(int *)((int)this + 0x97d8) == param_1) && (*(int *)((int)this + 0x97dc) == 0)) {
        uVar5 = 0x65;
      }
      else {
        uVar5 = 0x66;
      }
      F_0059d670(pvVar3,uVar5);
    }
  }
  pvVar3 = (undefined *)F_00559c20(param_2[2]);
  uVar1 = 0;
  if (pvVar3 != (undefined *)0x0) {
    F_00561ee0(pvVar3,1,1);
    uVar1 = F_00561530(pvVar3,5);
    if (uVar1 != 0) {
      uVar5 = 0;
      uVar2 = F_00559ba0(uVar1);
      F_0055aab0(uVar2,uVar5);
      uVar2 = F_0042a990(param_1 * 0x100 + 0x22c + (int)this);
      pvVar4 = (undefined *)F_00559ba0(uVar1);
      F_00584110(pvVar4,uVar2);
    }
    pvVar3 = (undefined *)F_00561490(pvVar3,3);
    uVar1 = 0;
    if (pvVar3 != (undefined *)0x0) {
      if ((*(int *)((int)this + 0x97d8) == param_1) && (*(int *)((int)this + 0x97dc) == 1)) {
        uVar1 = F_0059d670(pvVar3,0x65);
        return uVar1;
      }
      uVar1 = F_0059d670(pvVar3,0x66);
    }
  }
  return uVar1;
}

/* ref: FUN_007b7590 */
uint F_007b7590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b7590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = 0;
  if (*(char *)((int)this + 0x98aa) != '\0') {
    *(undefined4 *)((int)this + 0x97d8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x97dc) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x68;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigKeybind::vf2 */
uint F_007b7620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b7620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint * puVar5;
  uint uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar4 = param_4;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0xc: ;
    if ((char)param_4[1] == '\0') {
      if (param_2 == (int *)0x2) {
        if (*param_4 == 2) {
          F_00557670(param_3,0);
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
          (*(undefined4 *)(gen_frame + 0x14)) = 0x66;
          F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
          puVar5 = &(*(uint *)(gen_frame + 0x28));
          (*(int *)(gen_frame + 0x4)) = 2;
          do {
            puVar5 = puVar5 + -2;
            F_005a2670(puVar5);
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
          } while (-1 < (*(int *)(gen_frame + 0x4)));
        }
      }
      else if ((param_2 == (int *)0x1) && (*param_4 == 2)) {
        F_00557670(param_3,0);
      }
      if (*param_4 == 5) {
        F_00557670(param_3,0);
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
        (*(undefined4 *)(gen_frame + 0x14)) = 0x6a;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
        puVar5 = &(*(uint *)(gen_frame + 0x28));
        iVar7 = 2;
        do {
          puVar5 = puVar5 + -2;
          uVar3 = F_005a2670(puVar5);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar3;
      }
    }
    break;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x18: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x1f: ;
  case 0x20: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
    break;
  case 0x17: ;
    piVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case (int *)0x0: ;
      F_00557670(param_3,0);
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x98c8) + 0x88)));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x65;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(uint)bVar1;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    case (int *)0x1: ;
    case (int *)0x2: ;
    case (int *)0x3: ;
    case (int *)0x4: ;
    case (int *)0x5: ;
    case (int *)0x6: ;
    case (int *)0x7: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 100;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int * PTR32 *)(gen_frame + 0x1c)) = param_2;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    case (int *)0x8: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x66;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    case (int *)0x9: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x6a;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    case (int *)0xa: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x67;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
    break;
  case 0x19: ;
    uVar3 = F_007b7590(this,0);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  case 0x21: ;
    uVar3 = F_00568410(*(undefined * PTR32 *)(*param_4 + 0x1e4));
    uVar6 = (uint)(uVar3 == 5);
    uVar3 = F_00568410(*(undefined * PTR32 *)(*param_4 + 0x1e4));
    if ((uVar6 == 0) && (uVar3 != 6)) {
LAB_007b7af0: ;
      uVar3 = F_007b7590(this,0);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
    if (*(byte *)(param_4 + 4) == 0) {
      if (this[0x98aa] == (undefined1)0x0) {
        *(int *)(this + 0x97d8) = param_4[2];
        *(uint *)(this + 0x97dc) = uVar6;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
        (*(undefined4 *)(gen_frame + 0x14)) = 0x68;
        uVar2 = *(undefined4 *)(this + param_4[2] * 0x100 + 0x1d4);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)uVar2;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
        (*(uint *)(gen_frame + 0x24)) = uVar6;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
        puVar5 = &(*(uint *)(gen_frame + 0x28));
        iVar7 = 2;
        do {
          puVar5 = puVar5 + -2;
          uVar3 = F_005a2670(puVar5);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar3;
      }
      goto LAB_007b7af0;
    }
    piVar4 = ((int *)GEN_TOP((*(byte *)(param_4 + 4) - 1)));
    if ((piVar4 == (int *)0x0) && (this[0x98aa] == (undefined1)0x0)) {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x69;
      uVar2 = *(undefined4 *)(this + param_4[2] * 0x100 + 0x1d4);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)uVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = uVar6;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
    break;
  case 0x25: ;
    if (this[0x98aa] != (undefined1)0x0) {
      F_007b7590(this,0);
      uVar3 = F_00557670(param_3,0);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
    piVar4 = *(int * PTR32 *)(this + 0x98d0);
    if (piVar4[0x33] < 0) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x66;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        piVar4 = (int *)F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    break;
  default: ;
    goto switchD_007b7655_default;
  }
switchD_007b7655_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)piVar4;
}

/* ref: Client::UI2::AddonConfigKeybind::vf25 */
uint F_007b7c00(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigKeybind::vf53 */
unsigned int F_007b7c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b7c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((char)param_1 == '\0') {
    F_007b7590(this,0);
  }
  return 0;
}

/* ref: FUN_007b7c60 */
uint F_007b7c60(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cefec));
  pvVar2 = (undefined *)((int)this + 0x998);
  iVar3 = 2;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x89c);
  iVar3 = 1;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x7f4);
  iVar3 = 1;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x74c);
  iVar3 = 0xc;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x308);
  iVar3 = 3;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLog::vf41 */
byte F_007b7d20(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigLog",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigLog::vf25 */
uint F_007b7d40(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b7d70 */
uint F_007b7d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b7d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
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
  if (param_1 == 1) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
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
  if (param_1 == 3) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
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
  if (param_1 == 4) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
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
  uVar2 = param_1;
  if (param_1 == 6) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar4 = 2;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007b7fa0 */
uint F_007b7fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b7fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 7) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 7;
    uVar1 = F_00562c60(*(undefined4 *)((int)this + 0x198));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  if (param_1 == 0xd) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 10;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 - 9 < 4) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 9;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(uint *)(gen_frame + 0xc)) = param_1 - 9;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007b80f0 */
uint F_007b80f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b80f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x188) != param_1) {
    uVar2 = *(uint *)((int)this + 0x194);
    if (uVar2 == param_1) {
      piVar1 = *(int * PTR32 *)((int)this + 0x198);
      if (*(char *)(uVar2 + 0x88) != '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x28))))(*(int * PTR32 *)((int)this + 0x19c),1);
        return uVar2;
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x28))))(*(int * PTR32 *)((int)this + 0x19c),0);
    }
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18c);
  if (*((char *)GEN_TOP((*(uint *)((int)this + 0x188) + 0x88))) != '\0') {
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400),1);
    return uVar2;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400),0);
  return uVar2;
}

/* ref: FUN_007b81a0 */
uint F_007b81a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b81a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x1b8 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b81d0 */
uint F_007b81d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b81d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x308 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8200 */
uint F_007b8200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x74c + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8230 */
uint F_007b8230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x7f4 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8260 */
uint F_007b8260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x89c + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8290 */
uint F_007b8290(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf0ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  in_ecx = (int)this + 0x27c;
  iVar1 = 0x21;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogColor::vf41 */
byte F_007b8350(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigLogColor",0,6);
  return bVar1;
}

/* ref: FUN_007b8370 */
uint F_007b8370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b8370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = 0;
  piVar3 = (int *)((int)this + 0x1b4);
  while( true ) {
    iVar2 = 0;
    if (*piVar3 != 0) {
      iVar2 = *(int *)(*piVar3 + 0x70);
    }
    if (iVar2 == param_1) break;
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 1;
    if (0xf < uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_007b83a0 */
uint F_007b83a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b83a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  float10 fVar3;
  float10 fVar4;
  uint uVar2;
  
  this_00 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x1b4),5);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    fVar3 = (float10)*(double *)&REFG(undefined, 0x1088100);
    fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
    bVar1 = F_0055a1d0(this_00,(int)TRUNC(((float10)(param_2 >> 0x10 & 0xff) / fVar3) * fVar4) &
                                 0xff,
                         (int)TRUNC(((float10)(param_2 >> 8 & 0xff) / fVar3) * fVar4) & 0xff,
                         (int)TRUNC(((float10)(param_2 & 0xff) / fVar3) * fVar4) & 0xff);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_007b8470 */
uint F_007b8470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b8470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00561530(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x1b4),2);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0042a990(param_2);
    uVar1 = F_00584110(this_00,uVar1);
  }
  return uVar1;
}

/* ref: FUN_007b84a0 */
uint F_007b84a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b84a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xda4);
  switch((unsigned int)(uintptr_t)(puVar1)) {
  case (undefined4 *)0x0: ;
    *param_1 = 0;
    *param_2 = 6;
    return (uint)param_1;
  case (undefined4 *)0x1: ;
    *param_1 = 6;
    *param_2 = 9;
    return (uint)param_2;
  case (undefined4 *)0x2: ;
    *param_1 = 0xf;
    *param_2 = 7;
    return (uint)puVar1;
  case (undefined4 *)0x3: ;
    *param_1 = 0x16;
    *param_2 = 0xc;
    puVar1 = param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_007b8520 */
uint F_007b8520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b8570 */
uint F_007b8570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b85d0 */
uint F_007b85d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b85d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b8630 */
uint F_007b8630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8630u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  
  uVar3 = 0;
  piVar2 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4)));
  while( true ) {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = *(uint *)(*piVar2 + 0x70);
    }
    if (uVar1 == *(uint *)((*(int *)&gen_args[2]) + 4)) break;
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
    if (0xf < uVar3) {
      return uVar1;
    }
  }
  if (-1 < (int)uVar3) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4 + 0x1b4))),0);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    F_007b84a0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[2]),((undefined1 *)(gen_frame + 0x18)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(int *)(gen_frame + 0x14)) = uVar3 + (*(int *)&gen_args[2]);
    F_005a9110((*(undefined * PTR32 *)&gen_args[0]),2,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = ((undefined1 *)(gen_frame + 0x18));
    iVar4 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLogColor::vf25 */
uint F_007b86f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b86f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 2;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b8720 */
uint F_007b8720(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf1ec));
  pvVar2 = (undefined *)((int)this + 0x1a58);
  iVar3 = 5;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x58);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 0x1f;
  pvVar2 = (undefined *)((int)this + 0x1848);
  do {
    F_0042c880((undefined *)((int)pvVar2 + -0x58));
    F_0042c880((undefined *)((int)pvVar2 + -0xb4));
    iVar3 = iVar3 + -1;
    pvVar2 = (undefined *)((int)pvVar2 + -0xb4);
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf41 */
byte F_007b8790(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigLogFilter",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf25 */
uint F_007b87b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b87b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 2;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b87e0 */
uint F_007b87e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b87e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 3: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    break;
  case 4: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    break;
  case 5: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    iVar2 = 2;
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    break;
  case 6: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 5;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    break;
  case 7: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = F_00557670(param_2,0);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007b8980 */
uint F_007b8980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b8980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  longlong lVar1;
  undefined * this_00;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  byte * pbVar5;
  uint * this_01;
  undefined4 uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  this_00 = *(undefined * PTR32 *)((int)this + 0x1a8);
  F_00559fe0(this_00,&(*(float *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x4)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  uVar4 = F_0042a990(param_2);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  uVar3 = F_0055a020(this_00);
  (*(uint *)(gen_frame + 0x14)) = (uint)uVar3;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = ((undefined2)0x27f);
  (*(uint *)(gen_frame + 0x14)) = CONCAT22(((undefined2)0x27f),uVar3);
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)) = ((undefined2)0x27f) | 0xc00;
  lVar1 = (longlong)TRUNC((float10)uVar3 * (float10)(*(float *)(gen_frame + 0x8)));
  (*(longlong *)(gen_frame + 0xc)) = lVar1;
  lVar1 = (*(longlong *)(gen_frame + 0xc));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined4)lVar1;
  uVar6 = (undefined4)(*(longlong *)(gen_frame + 0xc));
  (*(longlong *)(gen_frame + 0xc)) = lVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = uVar6;
  uVar4 = F_0055ab00(this_00);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(uint *)(gen_frame + 0x2c)) = uVar4;
  bVar2 = F_0055ab50(this_00);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(uint *)(gen_frame + 0x34)) = (uint)bVar2;
  uVar4 = F_0055dcb0();
  pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))
                             (*(int * PTR32 *)(uVar4 + 0x38),&(*(longlong *)(gen_frame + 0xc)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x18)))));
  if ((*pbVar5 & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(pbVar5 + 4);
  }
  F_005a2670(&(*(longlong *)(gen_frame + 0xc)));
  F_0055aa30(this_00,param_1);
  F_00584110(this_00,uVar6);
  this_01 = &(*(uint *)(gen_frame + 0x38));
  iVar7 = 3;
  do {
    this_01 = this_01 + -2;
    uVar4 = F_005a2670(this_01);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_007b8ab0 */
uint F_007b8ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x1a8),"");
  uVar1 = *(uint *)((int)this + 0x188);
  if (*(char *)(uVar1 + 0x88) != '\0') {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x194),0x65);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(int *)(gen_frame + 0xc)) = 1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x88))) != '\0') {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x194),0x66);
    uVar1 = F_00562c60(*(undefined4 *)((int)this + 0x1a0));
    iVar3 = *(int *)(uVar1 * 0x58 + 0x189c + (int)this);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(int *)(gen_frame + 0xc)) = iVar3 + 4;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 400) + 0x88))) != '\0') {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x194),0x67);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    iVar3 = 2;
    (*(int *)(gen_frame + 0xc)) = 2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf60 */
byte F_007b8c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b8c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)(this + 0x188);
  uVar2 = 0;
  if ((char)piVar4[0x22] == '\0') {
    if (*((char *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))) == '\0') {
      if (*((char *)GEN_TOP((*(int *)(this + 400) + 0x88))) != '\0') {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  if (param_1 == 0xf) {
    uVar3 = uVar2 + 1;
    if (2 < uVar3) {
      uVar3 = -(uint)((char)param_2 != '\0') & 2;
    }
  }
  else {
    if (param_1 != 0x10) {
      return 0;
    }
    if (uVar2 == 0) {
      uVar3 = 0;
      if ((char)param_2 == '\0') {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = uVar2 - 1;
    }
  }
  if (uVar3 == uVar2) {
    return 0;
  }
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      piVar4 = *(int * PTR32 *)(this + 0x18c);
    }
    else {
      if (uVar3 != 2) goto LAB_007b8d11;
      piVar4 = *(int * PTR32 *)(this + 400);
    }
  }
  uVar2 = F_00561390();
  ((code *)*(gen_code32 *)(*piVar4 + 0x60))(piVar4,uVar2 + 0xc0);
LAB_007b8d11: ;
  F_007b8ab0(this);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  bVar1 = F_0055de10(this,uVar2);
  if (((bVar1 != 0) && (uVar2 = F_00561680(uVar2), uVar2 != 0)) &&
     (uVar2 = F_005613a0(uVar2), uVar2 != 1)) {
    F_0059b3f0(this,1,1);
  }
  uVar2 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
  F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_007b8d90 */
uint F_007b8d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0042a990(param_1 * 0x58 + 0x1848 + (int)this);
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8dc0 */
uint F_007b8dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf2ec));
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogFilterInputString::vf41 */
byte F_007b8e00(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigLogFilterInputString",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigLogFilterInputString::vf2 */
uint F_007b8e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b8e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if ((short)param_1 == 0x17) {
    if (param_2 == 8) {
      ((uint *)(gen_frame + 0x8))[2] = 0;
      ((uint *)(gen_frame + 0x8))[4] = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(((uint *)(gen_frame + 0x8)) + 2,3);
      ((uint *)(gen_frame + 0x8))[3] = 0;
      uVar1 = F_0042a990(*(int *)(this + 0x180) + 0x9c);
      F_005a2710(((uint *)(gen_frame + 0x8)) + 4,6);
      ((uint *)(gen_frame + 0x8))[5] = uVar1;
      uVar1 = F_0042a990(*(int *)(this + 0x184) + 0x9c);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
      (*(uint *)(gen_frame + 0x24)) = uVar1;
      F_005a9110(this,3,((uint *)(gen_frame + 0x8)) + 2);
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar2 = 2;
      do {
        this_00 = this_00 + -2;
        uVar1 = F_005a2670(this_00);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    else {
      uVar1 = param_2 - 9;
      if (uVar1 == 0) {
        ((uint *)(gen_frame + 0x8))[0] = uVar1;
        F_005a2710(((uint *)(gen_frame + 0x8)),3);
        ((uint *)(gen_frame + 0x8))[1] = 1;
        F_005a9110(this,1,((uint *)(gen_frame + 0x8)));
        uVar1 = F_005a2670(((uint *)(gen_frame + 0x8)));
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_007b8f60 */
uint F_007b8f60(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf3ec));
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x304);
  iVar2 = 0x12;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined2 *)((int)this + 1000) = 0;
  *(undefined1 *)((int)this + 0x3ea) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined2 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  F_00c48350((undefined *)((int)this + 0x1c0),0,0x70);
  F_00c48350((undefined *)((int)this + 0x2b0),0,0x4c);
  F_00c48350((undefined *)((int)this + 600),0,0x58);
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigSystem::vf41 */
byte F_007b90c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b90c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigSystem",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigSystem::vf47 */
uint F_007b90d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b90d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0xb8);
  if ((uVar1 != 0) && (*(undefined * PTR32 *)(this + 0x1b4) != (undefined *)0x0)) {
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1b4),**(undefined4 * PTR32 *)(uVar1 + 0x20));
  }
  return uVar1;
}

/* ref: FUN_007b9120 */
uint F_007b9120(unsigned int gen_a0)
{
  GEN_ENTER(0x7b9120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xe;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b9150 */
uint F_007b9150(unsigned int gen_a0)
{
  GEN_ENTER(0x7b9150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigSystem::vf25 */
uint F_007b9180(unsigned int gen_a0)
{
  GEN_ENTER(0x7b9180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b91b0 */
uint F_007b91b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b91b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b91e0 */
uint F_007b91e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b91e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar3 = 0x17;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),3);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0xc;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x1056;
  F_005a2710(((undefined1 *)(gen_frame + 0x78)),3);
  (*(undefined4 *)(gen_frame + 0x7c)) = 1;
  F_005a9110(this,0x18,((undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0xc8));
  iVar3 = 0x17;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: FUN_007b92a0 */
uint F_007b92a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b92a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  undefined4 uVar3;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0x10))[0] = 0x65;
  ((uint *)(gen_frame + 0x10))[1] = 0x66;
  ((uint *)(gen_frame + 0x10))[2] = 0x67;
  ((uint *)(gen_frame + 0x10))[3] = 0x68;
  ((uint *)(gen_frame + 0x10))[4] = 0x69;
  ((uint *)(gen_frame + 0x10))[5] = 0x6a;
  F_0059d640(*(undefined * PTR32 *)((int)this + 0x90),((uint *)(gen_frame + 0x10))[(int)(param_1)]);
  *(int *)((int)this + 0x198) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((uint *)(gen_frame + 0x10))[0] = 0;
  ((uint *)(gen_frame + 0x10))[2] = 0;
  ((uint *)(gen_frame + 0x10))[4] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x198);
  (*(undefined4 *)(gen_frame + 0xc)) = 10;
  F_005a2710(((uint *)(gen_frame + 0x10)) + 2,3);
  ((uint *)(gen_frame + 0x10))[3] = (*(undefined4 *)(gen_frame + 0x4));
  F_005a2710(((uint *)(gen_frame + 0x10)) + 4,3);
  ((uint *)(gen_frame + 0x10))[5] = 0;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  if ((char)param_2 != '\0') {
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x0)),1);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  }
  if ((char)param_3 != '\0') {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar3 = *(undefined4 *)((int)this + 0x2b0);
      break;
    case 1: ;
      uVar3 = *(undefined4 *)((int)this + 0x25c);
      break;
    case 2: ;
      uVar3 = *(undefined4 *)((int)this + 0x2b8);
      break;
    case 3: ;
      uVar3 = *(undefined4 *)((int)this + 0x29c);
      break;
    case 4: ;
      uVar3 = *(undefined4 *)((int)this + 0x2a4);
      break;
    case 5: ;
      uVar3 = *(undefined4 *)((int)this + 0x228);
      break;
    default: ;
      goto switchD_007b9378_default;
    }
    F_0059b390(this,uVar3,1,0);
  }
switchD_007b9378_default: ;
  if (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x198) * 4 + 0x3ec))) != 0) {
    F_00574c80(*((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x198) * 4 + 0x3ec))),0,1,1);
  }
  this_00 = ((uint *)(gen_frame + 0x10)) + 6;
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_007b9430 */
uint F_007b9430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9430u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar1) != param_1 ||
         (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar1) != param_2))) {
    uVar1 = uVar1 + 0x18;
    iVar2 = iVar2 + 1;
    if (0x77f < uVar1) {
      return 0;
    }
  }
  return (uint)(&REFG(undefined4, 0x10c2578) + iVar2 * 6);
}

/* ref: FUN_007b9470 */
uint F_007b9470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar5 = *(int *)((int)this + param_1 * 4 + 600);
  uVar4 = 0;
  if (iVar5 != 0) {
    bVar1 = *(byte *)(iVar5 + 0x88);
    iVar5 = 0;
    uVar4 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar4) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar4) != 0))) {
      uVar4 = uVar4 + 0x18;
      iVar5 = iVar5 + 1;
      if (0x77f < uVar4) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar4;
      }
    }
    if (iVar5 * 0x18 != -0x10c2578) {
      uVar2 = (&REFG(undefined4, 0x10c2580))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar3 = (&REFG(undefined4, 0x10c2584))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar4 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_007b9560 */
uint F_007b9560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * this_00;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  uVar4 = uVar3;
  if (*(int *)((int)this + param_1 * 4 + 0x1c0) != 0) {
    iVar5 = 0;
    uVar4 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar4) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar4) != 1))) {
      uVar4 = uVar4 + 0x18;
      iVar5 = iVar5 + 1;
      if (0x77f < uVar4) {
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar4;
      }
    }
    if (iVar5 * 0x18 != -0x10c2578) {
      uVar1 = (&REFG(undefined4, 0x10c2580))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      uVar1 = (&REFG(undefined4, 0x10c2584))[iVar5 * 6];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      uVar2 = (&REFG(undefined4, 0x10c2588))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar4 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_007b9640 */
uint F_007b9640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  iVar4 = *(int *)((int)this + param_1 * 4 + 0x2b0);
  if (iVar4 != 0) {
    uVar3 = F_00562c60(iVar4);
    iVar4 = 0;
    uVar2 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar2) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar2) != 2))) {
      uVar2 = uVar2 + 0x18;
      iVar4 = iVar4 + 1;
      if (0x77f < uVar2) {
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar2;
      }
    }
    if (iVar4 * 0x18 != -0x10c2578) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      uVar1 = (&REFG(undefined4, 0x10c2580))[iVar4 * 6];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      uVar1 = (&REFG(undefined4, 0x10c2584))[iVar4 * 6];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      iVar4 = (&REFG(undefined4, 0x10c2588))[iVar4 * 6];
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int *)(gen_frame + 0x1c)) = iVar4 + uVar3;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 3;
      do {
        this_00 = this_00 + -2;
        uVar2 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_007b9730 */
uint F_007b9730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar5 = *(int *)((int)this + param_1 * 4 + 0x230);
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar1 = *(undefined4 *)(iVar5 + 0xa0);
    iVar5 = 0;
    uVar4 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar4) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar4) != 3))) {
      uVar4 = uVar4 + 0x18;
      iVar5 = iVar5 + 1;
      if (0x77f < uVar4) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar4;
      }
    }
    if (iVar5 * 0x18 != -0x10c2578) {
      uVar2 = (&REFG(undefined4, 0x10c2580))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar3 = (&REFG(undefined4, 0x10c2584))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar4 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_007b9820 */
uint F_007b9820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar5 = *(int *)((int)this + param_1 * 4 + 0x2fc);
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar1 = *(undefined4 *)(iVar5 + 0x178);
    iVar5 = 0;
    uVar4 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar4) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar4) != 4))) {
      uVar4 = uVar4 + 0x18;
      iVar5 = iVar5 + 1;
      if (0x77f < uVar4) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar4;
      }
    }
    if (iVar5 * 0x18 != -0x10c2578) {
      uVar2 = (&REFG(undefined4, 0x10c2580))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar3 = (&REFG(undefined4, 0x10c2584))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar4 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_007b9910 */
uint F_007b9910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b9910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4 + param_2 * 8);
  }
  this_00 = *(undefined * PTR32 *)((int)this + param_3 * 4 + 600);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0059dde0(this_00,(uint)(uVar1 != 0));
  }
  return uVar1;
}

/* ref: FUN_007b9950 */
uint F_007b9950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b9950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4 + param_2 * 8);
  }
  uVar3 = iVar2 + param_3;
  piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4 + 0x1c0);
  if (piVar1 != (int *)0x0) {
    uVar3 = F_00561390();
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar3 + 0xc0);
  }
  return uVar3;
}

/* ref: FUN_007b99a0 */
uint F_007b99a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b99a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4 + param_2 * 8);
  }
  this_00 = *(undefined * PTR32 *)((int)this + param_3 * 4 + 0x2b0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0059caa0(this_00,uVar1);
  }
  return uVar1;
}

/* ref: FUN_007b99d0 */
uint F_007b99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b99d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4 + param_2 * 8);
  }
  this_00 = *(undefined * PTR32 *)((int)this + param_3 * 4 + 0x230);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0059dbe0(this_00,uVar1,1);
  }
  return uVar1;
}

/* ref: FUN_007b9a10 */
uint F_007b9a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b9a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4 + param_2 * 8);
  }
  this_00 = *(undefined * PTR32 *)((int)this + param_3 * 4 + 0x2fc);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0059cf90(this_00,uVar1,1,1);
  }
  return uVar1;
}

/* ref: FUN_007b9a50 */
uint F_007b9a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b9a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  byte * pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_1;
  if (*(int *)((int)this + param_1 * 4 + 0x2b0) != 0) {
    uVar5 = 0;
    iVar1 = param_1 * 0xc;
    if (param_4 != 0) {
      pbVar2 = (byte *)(param_2 + param_3 * 8);
      iVar6 = 0;
      do {
        if ((*pbVar2 & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar2 + 4);
        }
        F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + iVar1 + 0x30c) + iVar6))),uVar3);
        uVar4 = F_0042a990(*(int *)((int)this + iVar1 + 0x30c) + iVar6);
        pbVar2 = pbVar2 + 8;
        *((uint *)GEN_TOP((*(int *)((int)this + iVar1 + 0x308) + uVar5 * 4))) = uVar4;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0x54;
      } while (uVar5 < param_4);
    }
    uVar5 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x2b0) + 0x88))),param_4,
                         *(undefined4 *)((int)this + iVar1 + 0x308),1);
  }
  return uVar5;
}

/* ref: FUN_007b9b00 */
uint F_007b9b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = param_1;
  if (*(int *)((int)this + 0x2b0) != 0) {
    if ((*(byte *)(param_1 + 0xa00) & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xa04);
    }
    if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0xa4c);
    }
    if (iVar3 != 0) {
      F_007b9a50(this,0,param_1,0x141,iVar3);
      F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2b0),uVar5);
      F_00581b80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2b0) + 0x88))));
    }
  }
  if (((*(byte *)(param_1 + 0xa50) & 0xf) != 0) && (*(int *)(param_1 + 0xa54) != 0)) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1b8),1);
  }
  if (*(int *)((int)this + 0x2b4) != 0) {
    if ((*(byte *)(param_1 + 0x30) & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x34);
    }
    if ((*(byte *)(param_1 + 0xa60) & 0xf) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(int *)(param_1 + 0xa64);
    }
    if (iVar3 != 0) {
      F_007b9a50(this,1,iVar2,7,iVar3);
      iVar6 = param_1;
      if (param_1 < 0) {
        iVar6 = iVar3 + -1;
      }
      F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2b4),iVar6);
    }
  }
  if ((*(byte *)(iVar2 + 0xa58) & 0xf) == 0) {
LAB_007b9c5a: ;
    if (*(int *)((int)this + 0x2b4) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2b4) + 0x28))))(*(int * PTR32 *)((int)this + 0x2b4),1);
    }
    if (*(int *)((int)this + 0x2fc) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2fc) + 0x28))))(*(int * PTR32 *)((int)this + 0x2fc),1);
      F_00563b00(*(undefined4 *)((int)this + 0x2fc),1);
      if ((*(byte *)(iVar2 + 0xa90) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0xa94);
      }
      F_0059d040(*(undefined * PTR32 *)((int)this + 0x2fc),uVar5,1,1);
      if ((*(byte *)(iVar2 + 0xa98) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0xa9c);
      }
      F_0059d070(*(undefined * PTR32 *)((int)this + 0x2fc),uVar5,1,1);
      F_00563aa0(*(undefined4 *)((int)this + 0x2fc),10);
    }
    if (*(int *)((int)this + 0x300) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x300) + 0x28))))(*(int * PTR32 *)((int)this + 0x300),1);
      F_00563b00(*(undefined4 *)((int)this + 0x300),1);
      if ((*(byte *)(iVar2 + 0xaa0) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0xaa4);
      }
      F_0059d040(*(undefined * PTR32 *)((int)this + 0x300),uVar5,1,1);
      if ((*(byte *)(iVar2 + 0xaa8) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0xaac);
      }
      F_0059d070(*(undefined * PTR32 *)((int)this + 0x300),uVar5,1,1);
      F_00563aa0(*(undefined4 *)((int)this + 0x300),10);
    }
  }
  else {
    if (*(int *)(iVar2 + 0xa5c) == 2) {
      if (*(int *)((int)this + 0x2b4) != 0) {
        uVar5 = 1;
LAB_007b9c14: ;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2b4) + 0x28))))(*(int * PTR32 *)((int)this + 0x2b4),uVar5);
      }
    }
    else {
      if (*(int *)(iVar2 + 0xa5c) != 1) goto LAB_007b9c5a;
      if (*(int *)((int)this + 0x2b4) != 0) {
        uVar5 = 0;
        goto LAB_007b9c14;
      }
    }
    if (*(int *)((int)this + 0x2fc) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2fc) + 0x28))))(*(int * PTR32 *)((int)this + 0x2fc),0);
    }
    if (*(int *)((int)this + 0x300) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x300) + 0x28))))(*(int * PTR32 *)((int)this + 0x300),0);
    }
  }
  if ((*(byte *)(iVar2 + 0xa68) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0xa6c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2fc) != (undefined *)0x0) {
    F_0059cf90(*(undefined * PTR32 *)((int)this + 0x2fc),uVar5,1,1);
  }
  if ((*(byte *)(iVar2 + 0xa70) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0xa74);
  }
  if (*(undefined * PTR32 *)((int)this + 0x300) != (undefined *)0x0) {
    F_0059cf90(*(undefined * PTR32 *)((int)this + 0x300),uVar5,1,1);
  }
  if ((*(byte *)(iVar2 + 0xa58) & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0xa5c);
  }
  piVar1 = *(int * PTR32 *)((int)this + iVar3 * 4 + 0x1c0);
  if (piVar1 != (int *)0x0) {
    uVar4 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar4 + 0xc0);
  }
  if ((*(byte *)(iVar2 + 0xa78) & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0xa7c);
  }
  piVar1 = *(int * PTR32 *)((int)this + iVar3 * 4 + 0x1cc);
  if (piVar1 != (int *)0x0) {
    uVar4 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar4 + 0xc0);
  }
  if ((*(byte *)(iVar2 + 0xa80) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0xa84);
  }
  if (*(undefined * PTR32 *)((int)this + 600) != (undefined *)0x0) {
    uVar4 = F_0059dde0(*(undefined * PTR32 *)((int)this + 600),(uint)(uVar4 != 0));
  }
  if ((*(byte *)(iVar2 + 0xa88) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0xa8c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x230) != (undefined *)0x0) {
    uVar4 = F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x230),uVar5,1);
  }
  return uVar4;
}

/* ref: FUN_007b9e80 */
uint F_007b9e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x25c) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x25c),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa50) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa54);
  }
  if (*(undefined * PTR32 *)((int)this + 0x260) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x260),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa58) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa5c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x234) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x234),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa60) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa64);
  }
  if (*(undefined * PTR32 *)((int)this + 0x238) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x238),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa68) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa6c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x23c) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x23c),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa70) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa74);
  }
  if (*(undefined * PTR32 *)((int)this + 0x240) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x240),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa78) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa7c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x244) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x244),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa80) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa84);
  }
  if (*(undefined * PTR32 *)((int)this + 0x248) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x248),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa88) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa8c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x24c) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x24c),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa90) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa94);
  }
  if (*(undefined * PTR32 *)((int)this + 0x264) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x264),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa98) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa9c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x268) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x268),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xaa0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xaa4);
  }
  if (*(undefined * PTR32 *)((int)this + 0x26c) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x26c),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xaa8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xaac);
  }
  if (*(undefined * PTR32 *)((int)this + 0x270) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x270),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xab0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xab4);
  }
  if (*(undefined * PTR32 *)((int)this + 0x274) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x274),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xab8) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xabc);
  }
  if (*(undefined * PTR32 *)((int)this + 0x278) != (undefined *)0x0) {
    uVar3 = F_0059dde0(*(undefined * PTR32 *)((int)this + 0x278),(uint)(uVar3 != 0));
  }
  return uVar3;
}

/* ref: FUN_007ba0e0 */
uint F_007ba0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ba0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 uVar5;
  uint * this_00;
  int iVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  if ((param_2 != 0) && (param_1 != (undefined *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
    (*(int *)(gen_frame + 0xc)) = param_2;
    uVar2 = F_0055a020(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = (uint)uVar2;
    uVar3 = F_0055ab00(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    bVar1 = F_0055ab50(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    pbVar4 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x8)))));
    if ((*pbVar4 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(pbVar4 + 4);
    }
    F_00584110(param_1,uVar5);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      uVar3 = F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_007ba1d0 */
uint F_007ba1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ba1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x29c) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x29c),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa50) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa54);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2a0) != (undefined *)0x0) {
    uVar2 = F_0059dde0(*(undefined * PTR32 *)((int)this + 0x2a0),(uint)(uVar2 != 0));
  }
  if ((*(byte *)(param_1 + 0xa58) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xa5c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x250) != (undefined *)0x0) {
    uVar2 = F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x250),uVar3,1);
  }
  return uVar2;
}

/* ref: FUN_007ba260 */
uint F_007ba260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ba260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = param_1;
  uVar3 = F_0055dcb0();
  iVar4 = 0;
  if (*(int *)((int)this + 0x2f0) != 0) {
    if ((*(byte *)(param_1 + 0x9a0) & 0xf) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(int *)(param_1 + 0x9a4);
    }
    if ((*(byte *)(iVar2 + 0xa50) & 0xf) != 0) {
      iVar4 = *(int *)(iVar2 + 0xa54);
    }
    if ((param_1 == 0) || (iVar4 < 0)) {
      uVar3 = F_0043bd30(*(undefined * PTR32 *)(uVar3 + 0x30),0x1016);
      F_0058e4c0(*(undefined * PTR32 *)((int)this + 0x2f0),uVar3);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2f0) + 0x28))))(*(int * PTR32 *)((int)this + 0x2f0),0);
      if (*(int *)((int)this + 0x1a8) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1a8),0);
      }
    }
    else {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2f0) + 0x28))))(*(int * PTR32 *)((int)this + 0x2f0),1);
      if (*(int *)((int)this + 0x1a8) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1a8),1);
      }
      F_007b9a50(this,0x10,iVar2,0x135,param_1);
      F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2f0),iVar4);
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f0) + 0x88)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1);
      F_00581b80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f0) + 0x88))));
    }
  }
  if (((*(byte *)(iVar2 + 0xa70) & 0xf) != 0) && (*(int *)(iVar2 + 0xa74) != 0)) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1bc),1);
  }
  if ((*(byte *)(iVar2 + 0xa48) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0xa4c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2a4) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x2a4),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(iVar2 + 0xa58) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0xa5c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2a8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x2a8),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(iVar2 + 0xa60) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0xa64);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2ac) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x2ac),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(iVar2 + 0xa68) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 0xa6c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2f4) != (undefined *)0x0) {
    uVar3 = F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2f4),uVar3);
  }
  if ((*(byte *)(iVar2 + 0xa78) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0xa7c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x254) != (undefined *)0x0) {
    uVar3 = F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x254),uVar5,1);
  }
  return uVar3;
}

/* ref: FUN_007ba450 */
uint F_007ba450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ba450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa4c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2f8) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2f8),uVar2);
  }
  if ((*(byte *)(param_1 + 0xa50) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa54);
  }
  piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4 + 0x228);
  if (piVar1 != (int *)0x0) {
    uVar3 = F_00561390();
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar3 + 0xc0);
  }
  return uVar3;
}

/* ref: FUN_007ba4c0 */
byte F_007ba4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ba4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x198) == 2) {
    piVar1 = *(int * PTR32 *)((int)this + 0x298);
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    if (uVar2 == uVar3) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007ba500 */
byte F_007ba500(unsigned int gen_a0)
{
  GEN_ENTER(0x7ba500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 0x198) == 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x2b0);
  }
  else {
    if (*(int *)((int)this + 0x198) != 2) {
      return 0;
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x280);
  }
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b9e0(uVar1);
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
  if (uVar1 != uVar2) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007ba550 */
uint F_007ba550(unsigned int gen_a0)
{
  GEN_ENTER(0x7ba550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x198) * 4 + 0x3ec)));
  if (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x198) * 4 + 0x3ec))) != 0) {
    puVar1 = (undefined4 *)F_00574c80(*puVar1,0,1,1);
  }
  return (uint)puVar1;
}

/* ref: FUN_007ba580 */
uint F_007ba580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ba580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x198) * 4 + 0x3ec)));
  if (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x198) * 4 + 0x3ec))) != 0) {
    *(undefined1 *)((int)this + 0x408) = 1;
    puVar1 = (undefined4 *)F_0059f6f0((undefined *)*puVar1,param_1,1);
    *(undefined1 *)((int)this + 0x408) = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_007ba5c0 */
uint F_007ba5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ba5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf4ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0x5f;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined1 *)((int)this + 0x210) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf41 */
byte F_007ba640(unsigned int gen_a0)
{
  GEN_ENTER(0x7ba640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigPadCalibration",0,6);
  return bVar1;
}

/* ref: FUN_007ba650 */
unsigned int F_007ba650(unsigned int gen_a0)
{
  GEN_ENTER(0x7ba650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x194);
  uVar1 = 0;
  do {
    if ((undefined *)*puVar2 != (undefined *)0x0) {
      F_0059d670((undefined *)*puVar2,*(undefined4 *)((int)&REFG(undefined4, 0x10c2e3c) + uVar1));
    }
    uVar1 = uVar1 + 8;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 0xc0);
  return 0;
}

/* ref: FUN_007ba690 */
unsigned int F_007ba690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ba690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  int iVar1;
  
  iVar1 = param_2;
  do {
    if (param_3 <= iVar1) {
      return 0;
    }
    this_00 = *(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x194);
    if (this_00 != (undefined *)0x0) {
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar1 * 4))) == 0) {
        F_0059d670(this_00,(&REFG(undefined4, 0x10c2e3c))[iVar1 * 2]);
      }
      else {
        F_0059d670(this_00,*(undefined4 *)(&REFG(undefined, 0x10c2e38) + iVar1 * 8));
        if ((char)param_4 != '\0') {
          return 0;
        }
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf2 */
uint F_007ba6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ba6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0x17) {
    F_00557670(param_3,0);
    if (param_2 == 1) {
      if (*(int *)(this + 0x208) == 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar2;
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      if (*(int *)(this + 0x208) == 0x19) {
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        (*(undefined4 *)(gen_frame + 0xc)) = 0x1c;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
        puVar3 = &(*(uint *)(gen_frame + 0x28));
        iVar4 = 3;
        do {
          puVar3 = puVar3 + -2;
          uVar2 = F_005a2670(puVar3);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar2;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = 0x1a;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      puVar3 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 3;
      do {
        puVar3 = puVar3 + -2;
        uVar2 = F_005a2670(puVar3);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    else {
      if (param_2 == 2) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        if (*(int *)(this + 0x208) == 0) {
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
          uVar1 = *(undefined4 *)(this + 0x20c);
          (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
          (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
          F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
          puVar3 = &(*(uint *)(gen_frame + 0x28));
          iVar4 = 3;
          do {
            puVar3 = puVar3 + -2;
            uVar2 = F_005a2670(puVar3);
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar2;
        }
        if (*(int *)(this + 0x208) == 0x19) {
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
          (*(undefined4 *)(gen_frame + 0xc)) = 0x1b;
          F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
          puVar3 = &(*(uint *)(gen_frame + 0x28));
          iVar4 = 3;
          do {
            puVar3 = puVar3 + -2;
            uVar2 = F_005a2670(puVar3);
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar2;
        }
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        (*(undefined4 *)(gen_frame + 0xc)) = 0x19;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
        puVar3 = &(*(uint *)(gen_frame + 0x28));
        iVar4 = 3;
        do {
          puVar3 = puVar3 + -2;
          uVar2 = F_005a2670(puVar3);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar2;
      }
      uVar2 = param_2 - 3;
      if (uVar2 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        (*(undefined4 *)(gen_frame + 0xc)) = 0x19;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
        puVar3 = &(*(uint *)(gen_frame + 0x28));
        iVar4 = 3;
        do {
          puVar3 = puVar3 + -2;
          uVar2 = F_005a2670(puVar3);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar2;
      }
    }
  }
  else if (uVar2 == 0x23) {
    F_00557670(param_3,0);
    *(undefined4 *)(this + 0x20c) = *(undefined4 *)(param_4 + 8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar1 = *(undefined4 *)(this + 0x20c);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x1d;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
    puVar3 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_007ba9b0 */
uint F_007ba9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ba9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  undefined * this_01;
  int * piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  byte * pbVar5;
  undefined4 uVar6;
  int iVar7;
  uint * this_02;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x10)) = param_1;
  uVar4 = F_0055dcb0();
  this_00 = *(undefined * PTR32 *)(uVar4 + 0x30);
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)(&REFG(undefined, 0x10c2f00) + param_1 * 0xc);
  if (*(uint *)((int)this + 0x208) != param_1) {
    if (*(uint *)((int)this + 0x208) < param_1) {
      uVar4 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x8)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    }
    F_007ba650(this);
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x14))[1] == -3) {
    F_0059d670(*(undefined * PTR32 *)((int)this + 400),0x65);
    uVar4 = F_0043bd00(this_00,0x10cc,0,0);
    F_00589280(*(undefined * PTR32 *)((int)this + 500),uVar4);
    uVar6 = 0x10cd;
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x14))[1] != -1) {
      F_0059d670(*(undefined * PTR32 *)((int)this + 400),0x65);
      uVar4 = F_0043bd00(this_00,0x10ce,0,0);
      F_00589280(*(undefined * PTR32 *)((int)this + 500),uVar4);
      uVar4 = F_0043bd00(this_00,0x10d5,0,0);
      F_00589280(*(undefined * PTR32 *)((int)this + 0x1f8),uVar4);
      uVar4 = F_00460bd0(this_00,0x10d2,*(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
      F_00584110(*(undefined * PTR32 *)((int)this + 0x204),uVar4);
      iVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x14))[1];
      if ((-1 < iVar7) &&
         (this_01 = *(undefined * PTR32 *)((int)this + iVar7 * 4 + 0x194), this_01 != (undefined *)0x0)) {
        F_0059d670(this_01,*(undefined4 *)(&REFG(undefined, 0x10c2e38) + iVar7 * 8));
      }
      goto LAB_007bab41;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x18c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
    }
    F_0059d670(*(undefined * PTR32 *)((int)this + 400),0x65);
    uVar4 = F_0043bd00(this_00,0x10cf,0,0);
    F_00589280(*(undefined * PTR32 *)((int)this + 500),uVar4);
    uVar6 = 0x10d0;
  }
  uVar4 = F_0043bd00(this_00,uVar6,0,0);
  F_00589280(*(undefined * PTR32 *)((int)this + 0x1f8),uVar4);
LAB_007bab41: ;
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x14))[2] != 0) {
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    uVar4 = F_0043bd00(this_00,(*(undefined4 * PTR32 *)(gen_frame + 0x14))[2],0,0);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
    (*(uint *)(gen_frame + 0x1c)) = uVar4;
    uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x200));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = (uint)uVar3;
    uVar4 = F_0055ab00(*(undefined4 *)((int)this + 0x200));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = uVar4;
    bVar2 = F_0055ab50(*(undefined4 *)((int)this + 0x200));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
    (*(uint *)(gen_frame + 0x34)) = (uint)bVar2;
    uVar4 = F_0055dcb0();
    pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x18)))));
    if ((*pbVar5 & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(pbVar5 + 4);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x200),uVar6);
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    this_02 = &(*(uint *)(gen_frame + 0x38));
    iVar7 = 3;
    do {
      this_02 = this_02 + -2;
      F_005a2670(this_02);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    uVar4 = (*(uint *)(gen_frame + 0x10));
    *(uint *)((int)this + 0x208) = (*(uint *)(gen_frame + 0x10));
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar4;
  }
  *(uint *)((int)this + 0x208) = (*(uint *)(gen_frame + 0x10));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf25 */
uint F_007bac60(unsigned int gen_a0)
{
  GEN_ENTER(0x7bac60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007bac90 */
uint F_007bac90(unsigned int gen_a0)
{
  GEN_ENTER(0x7bac90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf604));
  F_00580ea0((undefined *)((int)this + 0x180));
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x108;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined2 *)((int)this + 0x214) = 0;
  *(undefined2 *)((int)this + 0x216) = 0x50;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x218) = 0x280140;
  *(undefined2 *)((int)this + 0x21c) = 0x28;
  return (uint)this;
}

/* ref: FUN_007bad20 */
uint F_007bad20(unsigned int gen_a0)
{
  GEN_ENTER(0x7bad20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf604));
  F_00590cc0((undefined *)((int)this + 0x180));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: FUN_007bad40 */
uint F_007bad40(unsigned int gen_a0)
{
  GEN_ENTER(0x7bad40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xe;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007bad70 */
uint F_007bad70(unsigned int gen_a0)
{
  GEN_ENTER(0x7bad70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacter::vf25 */
uint F_007bada0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bada0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007badd0 */
uint F_007badd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7badd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007bae00 */
uint F_007bae00(unsigned int gen_a0)
{
  GEN_ENTER(0x7bae00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  F_0056b630(this,0x18aae,7,0,9,0,0);
  if (*(char *)((int)this + 0x215) != '\0') {
    this_00 = (undefined *)F_0055e2f0(this,0x13);
    F_00559d30(this_00,((short *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)));
    (*(short *)(gen_frame + 0xc)) = *(short *)((int)this + 0x21a) + ((short *)(gen_frame + 0x14))[0];
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
    (*(undefined2 *)(gen_frame + 0x8)) = 0x4001;
    (*(short *)(gen_frame + 0xa)) = *(short *)((int)this + 0x216) + ((short *)(gen_frame + 0x18))[0];
    F_0056b6e0(this,&(*(undefined2 *)(gen_frame + 0x8)));
    (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(short *)(gen_frame + 0xc)) = *(short *)((int)this + 0x21c) + ((short *)(gen_frame + 0x14))[0];
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
    (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x8)) + 0)) = 2;
    (*(undefined2 *)(gen_frame + 0x8)) = 0x4002;
    (*(short *)(gen_frame + 0xa)) = *(short *)((int)this + 0x218) + ((short *)(gen_frame + 0x18))[0];
    uVar2 = F_0056b6e0(this,&(*(undefined2 *)(gen_frame + 0x8)));
    return uVar2;
  }
  F_0056b780(this,1);
  bVar1 = F_0056b780(this,2);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonConfigCharacter::vf36 */
byte F_007baee0(unsigned int gen_a0)
{
  GEN_ENTER(0x7baee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this);
  bVar1 = F_00560e80(this + 0x180,this);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigCharacter::vf41 */
byte F_007baf00(unsigned int gen_a0)
{
  GEN_ENTER(0x7baf00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigCharacter",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigCharacter::vf60 */
byte F_007baf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7baf10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  uint uVar2;
  int * this_00;
  int iVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  ((int *)(gen_frame + 0x10))[0x26] = uVar2;
  iVar3 = *(int *)(this + 0x20c);
  if (iVar3 == -1) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  if (this[0x1b5] != (undefined1)0x0) {
    iVar1 = *(int *)(this + iVar3 * 4 + 0x1f8);
    ((int *)(gen_frame + 0x10))[0x23] = 3;
    ((int *)(gen_frame + 0x10))[0x24] = 3;
    ((int *)(gen_frame + 0x10))[0x21] = 5;
    ((int *)(gen_frame + 0x10))[0x22] = 2;
    ((int *)(gen_frame + 0x10))[0x25] = 1;
    ((int *)(gen_frame + 0x10))[0x19] = 0;
    ((int *)(gen_frame + 0x10))[0x1a] = 0;
    ((int *)(gen_frame + 0x10))[0x1b] = 0;
    ((int *)(gen_frame + 0x10))[0x1c] = 0;
    ((int *)(gen_frame + 0x10))[0x1d] = 0;
    (*(int *)(gen_frame + 0xc)) = iVar1;
    if (1 < ((int *)(gen_frame + 0x10))[(int)(iVar3 + 0x21)] - ((int *)(gen_frame + 0x10))[(int)(iVar3 + 0x19)]) {
      if (param_1 == 0xf) {
        iVar3 = iVar1 + 1;
        if (((int *)(gen_frame + 0x10))[(int)(*(int *)(this + 0x20c) + 0x21)] <= iVar1 + 1) {
          if ((char)param_2 == '\0') {
            iVar3 = ((int *)(gen_frame + 0x10))[(int)(*(int *)(this + 0x20c) + 0x19)];
          }
          else {
            iVar3 = ((int *)(gen_frame + 0x10))[(int)(*(int *)(this + 0x20c) + 0x21)] + -1;
          }
        }
      }
      else {
        iVar3 = iVar1;
        if (param_1 == 0x10) {
          iVar3 = iVar1 + -1;
          if ((iVar1 + -1 < ((int *)(gen_frame + 0x10))[(int)(*(int *)(this + 0x20c) + 0x19)]) &&
             (iVar3 = ((int *)(gen_frame + 0x10))[(int)(*(int *)(this + 0x20c) + 0x19)], (char)param_2 == '\0')) {
            iVar3 = ((int *)(gen_frame + 0x10))[(int)(*(int *)(this + 0x20c) + 0x21)] + -1;
          }
        }
      }
      *((int *)GEN_TOP((this + *(int *)(this + 0x20c) * 4 + 0x1f8))) = iVar3;
      ((int *)(gen_frame + 0x10))[0] = 0;
      ((int *)(gen_frame + 0x10))[1] = 1;
      ((int *)(gen_frame + 0x10))[2] = 2;
      ((int *)(gen_frame + 0x10))[3] = 3;
      ((int *)(gen_frame + 0x10))[4] = 4;
      ((int *)(gen_frame + 0x10))[5] = 5;
      ((int *)(gen_frame + 0x10))[6] = 6;
      ((int *)(gen_frame + 0x10))[7] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[8] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[9] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[10] = 8;
      ((int *)(gen_frame + 0x10))[0xb] = 9;
      ((int *)(gen_frame + 0x10))[0xc] = 10;
      ((int *)(gen_frame + 0x10))[0xd] = 0xb;
      ((int *)(gen_frame + 0x10))[0xe] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[0xf] = 0xc;
      ((int *)(gen_frame + 0x10))[0x10] = 0xd;
      ((int *)(gen_frame + 0x10))[0x11] = 0xe;
      ((int *)(gen_frame + 0x10))[0x12] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[0x13] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[0x14] = 0xf;
      ((int *)(gen_frame + 0x10))[0x15] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[0x16] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[0x17] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[0x18] = 0xffffffff;
      ((int *)(gen_frame + 0x10))[0x1e] = 0;
      ((int *)(gen_frame + 0x10))[0x20] = 0;
      ((int *)(gen_frame + 0x10))[0x22] = 0;
      ((int *)(gen_frame + 0x10))[0x24] = 0;
      F_005a2710(((int *)(gen_frame + 0x10)) + 0x1e,3);
      ((int *)(gen_frame + 0x10))[0x1f] = 10;
      (*(int *)(gen_frame + 0x8)) = ((int *)(gen_frame + 0x10))[(int)(*(int *)(this + 0x20c) * 5 + iVar3)];
      F_005a2710(((int *)(gen_frame + 0x10)) + 0x22,3);
      ((int *)(gen_frame + 0x10))[0x23] = (*(int *)(gen_frame + 0x8));
      F_005a2710(((int *)(gen_frame + 0x10)) + 0x24,3);
      ((int *)(gen_frame + 0x10))[0x25] = 1;
      F_005a9110(this,4,((int *)(gen_frame + 0x10)) + 0x1e);
      if (((*(int *)(gen_frame + 0xc)) != iVar3) && (-1 < ((int *)(gen_frame + 0x10))[(int)(*(int *)(this + 0x20c) * 5 + iVar3)])) {
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      }
      this_00 = ((int *)(gen_frame + 0x10)) + 0x26;
      iVar3 = 3;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      F_00c47745(((int *)(gen_frame + 0x10))[0x26] ^ (uint)(uint)(gen_frame + 0xac));
      return 1;
    }
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: FUN_007bb190 */
uint F_007bb190(unsigned int gen_a0)
{
  GEN_ENTER(0x7bb190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(uint *)(gen_frame + 0xc8)) = uVar1;
  if (*(char *)((int)this + 0x214) != '\0') {
    *(undefined1 *)((int)this + 0x214) = 0;
    *(undefined1 *)((int)this + 0x212) = 0;
    puVar2 = ((undefined4 *)(gen_frame + 0x8));
    iVar3 = 0x17;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),3);
    ((undefined4 *)(gen_frame + 0x8))[1] = 0xc;
    F_005a2710(((undefined1 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x28)),3);
    (*(undefined4 *)(gen_frame + 0x2c)) = 0x1d63;
    F_005a2710(((undefined1 *)(gen_frame + 0x78)),3);
    (*(undefined4 *)(gen_frame + 0x7c)) = 1;
    F_005a9110(this,0x18,((undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0xc8));
    iVar3 = 0x17;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar1;
}

/* ref: FUN_007bb270 */
uint F_007bb270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7bb270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  ((byte *)(gen_frame + 0x4))[0] = 0;
  ((byte *)(gen_frame + 0x4))[1] = 0;
  ((byte *)(gen_frame + 0x4))[2] = 0;
  ((byte *)(gen_frame + 0x4))[3] = 0;
  ((byte *)(gen_frame + 0x4))[4] = 1;
  ((byte *)(gen_frame + 0x4))[5] = 0;
  ((byte *)(gen_frame + 0x4))[6] = 0;
  ((byte *)(gen_frame + 0x4))[7] = 0;
  ((byte *)(gen_frame + 0x4))[8] = 2;
  ((byte *)(gen_frame + 0x4))[9] = 0;
  ((byte *)(gen_frame + 0x4))[10] = 0;
  ((byte *)(gen_frame + 0x4))[0xb] = 0;
  ((byte *)(gen_frame + 0x4))[0xc] = 3;
  ((byte *)(gen_frame + 0x4))[0xd] = 0;
  ((byte *)(gen_frame + 0x4))[0xe] = 0;
  ((byte *)(gen_frame + 0x4))[0xf] = 0;
  ((byte *)(gen_frame + 0x4))[0x10] = 4;
  ((byte *)(gen_frame + 0x4))[0x11] = 0;
  ((byte *)(gen_frame + 0x4))[0x12] = 0;
  ((byte *)(gen_frame + 0x4))[0x13] = 0;
  ((byte *)(gen_frame + 0x4))[0x14] = 5;
  ((byte *)(gen_frame + 0x4))[0x15] = 0;
  ((byte *)(gen_frame + 0x4))[0x16] = 0;
  ((byte *)(gen_frame + 0x4))[0x17] = 0;
  ((byte *)(gen_frame + 0x4))[0x18] = 6;
  ((byte *)(gen_frame + 0x4))[0x19] = 0;
  ((byte *)(gen_frame + 0x4))[0x1a] = 0;
  ((byte *)(gen_frame + 0x4))[0x1b] = 0;
  ((byte *)(gen_frame + 0x4))[0x1c] = 7;
  ((byte *)(gen_frame + 0x4))[0x1d] = 0;
  ((byte *)(gen_frame + 0x4))[0x1e] = 0;
  ((byte *)(gen_frame + 0x4))[0x1f] = 0;
  ((byte *)(gen_frame + 0x4))[0x20] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x21] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x22] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x23] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x24] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x25] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x26] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x27] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x28] = 8;
  ((byte *)(gen_frame + 0x4))[0x29] = 0;
  ((byte *)(gen_frame + 0x4))[0x2a] = 0;
  ((byte *)(gen_frame + 0x4))[0x2b] = 0;
  ((byte *)(gen_frame + 0x4))[0x2c] = 9;
  ((byte *)(gen_frame + 0x4))[0x2d] = 0;
  ((byte *)(gen_frame + 0x4))[0x2e] = 0;
  ((byte *)(gen_frame + 0x4))[0x2f] = 0;
  ((byte *)(gen_frame + 0x4))[0x30] = 10;
  ((byte *)(gen_frame + 0x4))[0x31] = 0;
  ((byte *)(gen_frame + 0x4))[0x32] = 0;
  ((byte *)(gen_frame + 0x4))[0x33] = 0;
  ((byte *)(gen_frame + 0x4))[0x34] = 0xb;
  ((byte *)(gen_frame + 0x4))[0x35] = 0;
  ((byte *)(gen_frame + 0x4))[0x36] = 0;
  ((byte *)(gen_frame + 0x4))[0x37] = 0;
  ((byte *)(gen_frame + 0x4))[0x38] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x39] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x3a] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x3b] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x3c] = 0xc;
  ((byte *)(gen_frame + 0x4))[0x3d] = 0;
  ((byte *)(gen_frame + 0x4))[0x3e] = 0;
  ((byte *)(gen_frame + 0x4))[0x3f] = 0;
  ((byte *)(gen_frame + 0x4))[0x40] = 0xd;
  ((byte *)(gen_frame + 0x4))[0x41] = 0;
  ((byte *)(gen_frame + 0x4))[0x42] = 0;
  ((byte *)(gen_frame + 0x4))[0x43] = 0;
  ((byte *)(gen_frame + 0x4))[0x44] = 0xe;
  ((byte *)(gen_frame + 0x4))[0x45] = 0;
  ((byte *)(gen_frame + 0x4))[0x46] = 0;
  ((byte *)(gen_frame + 0x4))[0x47] = 0;
  ((byte *)(gen_frame + 0x4))[0x48] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x49] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x4a] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x4b] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x4c] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x4d] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x4e] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x4f] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x50] = 0xf;
  ((byte *)(gen_frame + 0x4))[0x51] = 0;
  ((byte *)(gen_frame + 0x4))[0x52] = 0;
  ((byte *)(gen_frame + 0x4))[0x53] = 0;
  ((byte *)(gen_frame + 0x4))[0x54] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x55] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x56] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x57] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x58] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x59] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x5a] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x5b] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x5c] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x5d] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x5e] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x5f] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x60] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x61] = 0xff;
  ((byte *)(gen_frame + 0x4))[0x62] = 0xff;
  ((byte *)(gen_frame + 0x4))[99] = 0xff;
  ((byte *)(gen_frame + 0x4))[100] = 0;
  ((byte *)(gen_frame + 0x4))[0x65] = 0;
  ((byte *)(gen_frame + 0x4))[0x66] = 0;
  ((byte *)(gen_frame + 0x4))[0x67] = 0;
  ((byte *)(gen_frame + 0x4))[0x6c] = 0;
  ((byte *)(gen_frame + 0x4))[0x6d] = 0;
  ((byte *)(gen_frame + 0x4))[0x6e] = 0;
  ((byte *)(gen_frame + 0x4))[0x6f] = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  F_005a2710(((byte *)(gen_frame + 0x4)) + 100,3);
  ((byte *)(gen_frame + 0x4))[0x68] = 10;
  ((byte *)(gen_frame + 0x4))[0x69] = 0;
  ((byte *)(gen_frame + 0x4))[0x6a] = 0;
  ((byte *)(gen_frame + 0x4))[0x6b] = 0;
  uVar1 = *((undefined4 *)GEN_TOP((((byte *)(gen_frame + 0x4)) + (param_1 * 5 + *(int *)((int)this + param_1 * 4 + 0x1f8)) * 4)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x78)),3);
  (*(undefined4 *)(gen_frame + 0x7c)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x80)),3);
  (*(uint *)(gen_frame + 0x84)) = (uint)((char)param_2 != '\0');
  F_005a9110(this,4,((byte *)(gen_frame + 0x4)) + 100);
  this_00 = &(*(uint *)(gen_frame + 0x88));
  iVar3 = 3;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacter::vf38 */
uint F_007bb3a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7bb3a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x180,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacter::vf39 */
unsigned int F_007bb3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bb3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x180);
  return 0;
}

/* ref: FUN_007bb3f0 */
uint F_007bb3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bb3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  *(undefined4 *)((int)this + 0x184) = 0;
  return (uint)this;
}

/* ref: FUN_007bb430 */
uint F_007bb430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7bb430u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return in_EAX;
}

/* ref: FUN_007bb450 */
unsigned int F_007bb450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7bb450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  float10 fVar1;
  float10 fVar2;
  
  if ((*(undefined * PTR32 *)this != (undefined *)0x0) && (-1 < param_2)) {
    this_00 = (undefined *)F_00561490(*(undefined * PTR32 *)this,param_2);
    if (this_00 != (undefined *)0x0) {
      fVar1 = (float10)*(double *)&REFG(undefined, 0x1088100);
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      F_0055a1d0(this_00,(int)TRUNC(((float10)(param_1 & 0xff) / fVar1) * fVar2) & 0xff,
                   (int)TRUNC(((float10)(param_1 >> 8 & 0xff) / fVar1) * fVar2) & 0xff,
                   (int)TRUNC(((float10)(param_1 >> 0x10 & 0xff) / fVar1) * fVar2) & 0xff);
    }
  }
  return 0;
}

/* ref: FUN_007bb520 */
byte F_007bb520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7bb520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  int iVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  iVar5 = *(int *)this;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar5 + 0x70);
  }
  if ((iVar4 == param_2) && (iVar5 != 0)) {
    if (*(int *)((int)this + 4) == -1) {
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar2 = *(undefined4 *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    uVar3 = *(uint *)((int)this + 8);
    if (uVar3 == 0) {
      bVar1 = *(byte *)(*(int *)this + 0x88);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
    }
    else {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = uVar3;
    }
    F_005a9110(param_1,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar5 = 3;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_007bb620 */
uint F_007bb620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7bb620u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return in_EAX;
}

/* ref: FUN_007bb640 */
unsigned int F_007bb640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bb640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)this,param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_007bb670 */
byte F_007bb670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7bb670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  int iVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  iVar5 = *(int *)this;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar5 + 0x70);
  }
  if ((iVar4 == param_2) && (iVar5 != 0)) {
    if (*(int *)((int)this + 4) == -1) {
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar2 = *(undefined4 *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    bVar1 = *(byte *)(*(int *)this + 0x88);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
    F_005a9110(param_1,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar5 = 3;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_007bb760 */
uint F_007bb760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7bb760u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return in_EAX;
}

/* ref: FUN_007bb780 */
uint F_007bb780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bb780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    if (param_1 == *(int *)((int)this + 8)) {
      uVar1 = F_0059dde0(this_00,1);
      return uVar1;
    }
    this = (undefined *)F_0059dde0(this_00,0);
  }
  return (uint)this;
}

/* ref: FUN_007bb7b0 */
byte F_007bb7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7bb7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  int iVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  iVar5 = *(int *)this;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar5 + 0x70);
  }
  if ((iVar4 == param_2) && (iVar5 != 0)) {
    if (*(int *)((int)this + 4) == -1) {
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar1 = *(undefined4 *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    uVar2 = *(undefined4 *)((int)this + 8);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    F_005a9110(param_1,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar5 = 3;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_007bb890 */
uint F_007bb890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7bb890u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return in_EAX;
}

/* ref: FUN_007bb8b0 */
unsigned int F_007bb8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bb8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined1 *)((int)this + 8) = 1;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)this,param_1,1);
  }
  *(undefined1 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_007bb8f0 */
byte F_007bb8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7bb8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  iVar4 = *(int *)this;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x70);
  }
  if (((iVar3 == param_2) && (*(char *)((int)this + 8) == '\0')) && (iVar4 != 0)) {
    if (*(int *)((int)this + 4) == -1) {
      F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar1 = *(undefined4 *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    uVar1 = *(undefined4 *)(*(int *)this + 0xa0);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
    F_005a9110(param_1,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_007bb9e0 */
uint F_007bb9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7bb9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return in_EAX;
}

/* ref: FUN_007bba00 */
unsigned int F_007bba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bba00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)this,param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_007bba30 */
byte F_007bba30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bba30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  iVar4 = *(int *)this;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x70);
  }
  if ((iVar3 == param_2) && (iVar4 != 0)) {
    if (*(int *)((int)this + 4) != -1) {
      if (param_3 == 0x23) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        uVar1 = *(undefined4 *)((int)this + 4);
        (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
        (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
        uVar2 = F_00562c60(*(undefined4 *)this);
        iVar4 = *(int *)((int)this + 8);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(int *)(gen_frame + 0x1c)) = uVar2 + iVar4;
        F_005a9110(param_1,4,&(*(undefined4 *)(gen_frame + 0x8)));
        this_00 = &(*(uint *)(gen_frame + 0x28));
        iVar4 = 3;
        do {
          this_00 = this_00 + -2;
          F_005a2670(this_00);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      else if (param_3 == 0x2b) {
        if (*(int *)(iVar4 + 0x88) != 0) {
          *(undefined4 *)((int)param_1 + 0x98) = *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x88) + 0x70)));
          F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x2c));
          return 1;
        }
        *(undefined4 *)((int)param_1 + 0x98) = 0;
        F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x2c));
        return 1;
      }
    }
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::vf37 */
uint F_007bbbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bbbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x18d] != (undefined1)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x194) + 8))))(this + 0x194);
  }
  this[0x18d] = (undefined1)0x0;
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::vf41 */
byte F_007bbbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bbbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigCharacterChatLog",0,6);
  return bVar1;
}

/* ref: FUN_007bbbf0 */
uint F_007bbbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bbbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007bbc20 */
uint F_007bbc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bbc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar3 = 0x17;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),3);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0xc;
  if (param_1 == -1) {
    F_005a2710(((undefined1 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x28)),3);
    (*(undefined4 *)(gen_frame + 0x2c)) = 0x1d63;
    F_005a2710(((undefined1 *)(gen_frame + 0x78)),3);
    (*(undefined4 *)(gen_frame + 0x7c)) = 1;
    F_005a9110(this,0x18,((undefined4 *)(gen_frame + 0x8)));
    puVar1 = &(*(undefined4 *)(gen_frame + 0xc8));
    iVar3 = 0x17;
    do {
      puVar1 = puVar1 + -2;
      uVar2 = F_005a2670(puVar1);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xd8)),3);
  (*(int *)(gen_frame + 0xdc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc8)),3);
  (*(undefined4 *)(gen_frame + 0xcc)) = 0x13;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0xc8)));
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 2;
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x1d63;
  F_005a2710(((undefined1 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x57;
  F_005a2710(((undefined1 *)(gen_frame + 0x78)),3);
  (*(undefined4 *)(gen_frame + 0x7c)) = 1;
  F_005a2710(((undefined1 *)(gen_frame + 0x80)),3);
  (*(undefined4 *)(gen_frame + 0x84)) = 1;
  F_005a9110(this,0x18,((undefined4 *)(gen_frame + 0x8)));
  *(int *)((int)this + 400) = param_1;
  this_00 = &(*(uint *)(gen_frame + 0xe8));
  iVar3 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  puVar1 = &(*(undefined4 *)(gen_frame + 0xc8));
  iVar3 = 0x17;
  do {
    puVar1 = puVar1 + -2;
    uVar2 = F_005a2670(puVar1);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::vf44 */
uint F_007bbde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7bbde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  code * pcVar1;
  uint uVar2;
  int iVar3;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar2 = F_0055dcb0();
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x30);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x260;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x2a0;
  iVar3 = 0;
  do {
    uVar2 = F_00560910(iVar3 + 0xc);
    F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x4)),uVar2);
    uVar2 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x4)));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x54;
    *(uint *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = uVar2;
    iVar3 = iVar3 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
  } while (iVar3 < 9);
  uVar2 = F_0043bd00(this_00,0x1f09,0,0);
  *(uint *)(this + 0x250) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f0a,0,0);
  *(uint *)(this + 0x254) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f0b,0,0);
  *(uint *)(this + 600) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f0c,0,0);
  *(uint *)(this + 0x25c) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f0e,0,0);
  *(uint *)(this + 0x284) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f0f,0,0);
  *(uint *)(this + 0x288) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f13,0,0);
  *(uint *)(this + 0x28c) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f14,0,0);
  *(uint *)(this + 0x290) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f18,0,0);
  *(uint *)(this + 0x294) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f19,0,0);
  *(uint *)(this + 0x298) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1f1a,0,0);
  *(uint *)(this + 0x29c) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1e84,0,0);
  *(uint *)(this + 0x240) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1e85,0,0);
  *(uint *)(this + 0x244) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1e86,0,0);
  *(uint *)(this + 0x248) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1e87,0,0);
  *(uint *)(this + 0x24c) = uVar2;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x194) + 4)));
  *(undefined * PTR32 *)(this + 0x198) = this;
  (*pcVar1)(this + 0x194);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x194) + 0x14))))(this + 0x194,0,4,this + 0x250);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x194) + 0x14))))(this + 0x194,1,9,this + 0x260);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x194) + 0x14))))(this + 0x194,2,2,this + 0x284);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x194) + 0x14))))(this + 0x194,3,2,this + 0x28c);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x194) + 0x14))))(this + 0x194,4,3,this + 0x294);
  this[0x18d] = (undefined1)0x1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x14;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),2);
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  this_01 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 5;
  do {
    this_01 = this_01 + -2;
    uVar2 = F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::vf2 */
uint F_007bc0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7bc0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xffff;
  puVar2 = (undefined4 *)(uVar4 - 0xc);
  if (puVar2 < &REFG(undefined, 0x20)) {
    puVar2 = (undefined4 *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7bc250) + uVar4)));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0xc: ;
      puVar2 = param_4;
      if (*(char *)(param_4 + 1) == '\0') {
        puVar2 = (undefined4 *)*param_4;
        if (puVar2 == (undefined4 *)0x5) {
          if (this[0x18c] != (undefined1)0x0) {
            uVar4 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x14)),1);
            F_005a2670(((undefined1 *)(gen_frame + 0x14)));
          }
          F_00557670(param_3,0);
          uVar4 = F_007bbbf0(this);
          return uVar4;
        }
        if (puVar2 == (undefined4 *)0x2) {
          uVar4 = F_0055dcb0();
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0xc)),3);
          F_005a2670(((undefined1 *)(gen_frame + 0xc)));
          F_00557670(param_3,0);
          AVar1 = this[0x13c];
          uVar4 = F_0055dcb0();
          piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar4 + 0x14),(uint)(byte)AVar1);
          uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x8c))(piVar3);
          return uVar4;
        }
        if (puVar2 == (undefined4 *)0x4) {
          F_00557670(param_3,0);
          switch((unsigned int)(uintptr_t)(param_2)) {
          default: ;
            uVar4 = F_007bbc20(this,0xffffffff);
            return uVar4;
          case 5: ;
            uVar4 = F_007bbc20(this,2);
            return uVar4;
          case 6: ;
            uVar4 = F_007bbc20(this,3);
            return uVar4;
          }
        }
      }
      break;
    case 0x17: ;
      if (param_2 == 0) {
        F_00557670(param_3,0);
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x194) + 0x10))))(this + 0x194,uVar4,0,param_3);
        return uVar4;
      }
      break;
    case 0x1b: ;
    case 0x23: ;
    case 0x2b: ;
      F_00557670(param_3,0);
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x194) + 0x10))))(this + 0x194,uVar4,param_2,param_3)));
    }
  }
  return (uint)puVar2;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::CChatLog::vf4 */
uint F_007bc290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bc290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined * pCVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar5 = 0;
    pCVar4 = this + 0x44;
    do {
      bVar2 = F_007bb670(pCVar4,*(undefined4 *)(this + 4),uVar1);
      if (bVar2 != 0) {
        return CONCAT31(extraout_var_00,bVar2);
      }
      iVar5 = iVar5 + 1;
      pCVar4 = pCVar4 + 8;
    } while (iVar5 < 4);
    iVar5 = 0;
    pCVar4 = this + 100;
    while( true ) {
      bVar2 = F_007bb520(pCVar4,*(undefined4 *)(this + 4),uVar1);
      uVar3 = CONCAT31(extraout_var_01,bVar2);
      if (bVar2 != 0) break;
      iVar5 = iVar5 + 1;
      pCVar4 = pCVar4 + 0xc;
      if (5 < iVar5) {
        return uVar3;
      }
    }
    if (iVar5 == 0) {
      if (*(int *)(this + 0x38) != 0) {
        uVar3 = F_00562c60(*(int *)(this + 0x38));
        uVar3 = F_0043f8b0(uVar3 + 0x25);
        return uVar3;
      }
      uVar3 = F_0043f8b0(0x25);
    }
  }
  else {
    uVar3 = param_2 - 1;
    if (uVar3 == 0) {
      iVar5 = 0;
      pCVar4 = this + 8;
      while( true ) {
        bVar2 = F_007bba30(pCVar4,*(undefined4 *)(this + 4),uVar1,param_1);
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) break;
        iVar5 = iVar5 + 1;
        pCVar4 = pCVar4 + 0xc;
        if (4 < iVar5) {
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::CChatLog::vf5 */
uint F_007bc370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bc370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + param_1 * 0xc + 8) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + param_1 * 0xc + 8) + 0x88))),param_2,param_3,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::vf41 */
byte F_007bc3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bc3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigCharacterHotBar",0,6);
  return bVar1;
}

/* ref: FUN_007bc3f0 */
uint F_007bc3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bc3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007bc420 */
uint F_007bc420(unsigned int gen_a0)
{
  GEN_ENTER(0x7bc420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar3 = 0x17;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),3);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0xc;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x1d63;
  F_005a2710(((undefined1 *)(gen_frame + 0x78)),3);
  (*(undefined4 *)(gen_frame + 0x7c)) = 1;
  F_005a9110(this,0x18,((undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0xc8));
  iVar3 = 0x17;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: FUN_007bc4e0 */
uint F_007bc4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bc4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  ((byte *)(gen_frame + 0xc))[0] = 0xc;
  ((byte *)(gen_frame + 0xc))[1] = 0;
  ((byte *)(gen_frame + 0xc))[2] = 0;
  ((byte *)(gen_frame + 0xc))[3] = 0;
  ((byte *)(gen_frame + 0xc))[4] = 0xd;
  ((byte *)(gen_frame + 0xc))[5] = 0;
  ((byte *)(gen_frame + 0xc))[6] = 0;
  ((byte *)(gen_frame + 0xc))[7] = 0;
  ((byte *)(gen_frame + 0xc))[8] = 0xe;
  ((byte *)(gen_frame + 0xc))[9] = 0;
  ((byte *)(gen_frame + 0xc))[10] = 0;
  ((byte *)(gen_frame + 0xc))[0xb] = 0;
  ((byte *)(gen_frame + 0xc))[0xc] = 0;
  ((byte *)(gen_frame + 0xc))[0xd] = 0;
  ((byte *)(gen_frame + 0xc))[0xe] = 0;
  ((byte *)(gen_frame + 0xc))[0xf] = 0;
  ((byte *)(gen_frame + 0xc))[0x14] = 0;
  ((byte *)(gen_frame + 0xc))[0x15] = 0;
  ((byte *)(gen_frame + 0xc))[0x16] = 0;
  ((byte *)(gen_frame + 0xc))[0x17] = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(((byte *)(gen_frame + 0xc)) + 0xc,3);
  ((byte *)(gen_frame + 0xc))[0x10] = 10;
  ((byte *)(gen_frame + 0xc))[0x11] = 0;
  ((byte *)(gen_frame + 0xc))[0x12] = 0;
  ((byte *)(gen_frame + 0xc))[0x13] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(((byte *)(gen_frame + 0xc)) + param_1 * 4);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  F_005a9110(this,4,((byte *)(gen_frame + 0xc)) + 0xc);
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_007bc580 */
uint F_007bc580(unsigned int gen_a0)
{
  GEN_ENTER(0x7bc580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((int *)(gen_frame + 0xc))[3] = uVar2;
  ((int *)(gen_frame + 0xc))[0] = 8;
  ((int *)(gen_frame + 0xc))[1] = 0x2b;
  ((int *)(gen_frame + 0xc))[2] = 0x43;
  if ((*(int *)((int)this + 0x180) != 0) &&
     (uVar2 = *(uint *)((int)this + 900), ((int *)(gen_frame + 0xc))[(int)(uVar2)] != -1)) {
    uVar4 = 0;
    uVar2 = F_0055e2f0(this,0x68);
    uVar3 = F_0055e2f0(this,((int *)(gen_frame + 0xc))[(int)(*(int *)((int)this + 900))]);
    F_0058e3c0(*(undefined * PTR32 *)((int)this + 0x180),uVar3,uVar2,uVar4);
    F_00574c80(*(undefined4 *)((int)this + 0x180),
                 *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 900) * 4 + 0x388))),1,1);
    uVar2 = F_0055e2f0(this,0x47);
    uVar1 = F_0055a030(uVar2);
    uVar2 = (uint)uVar1;
    *((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc2))) = uVar1;
  }
  F_00c47745(((int *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007bc640 */
uint F_007bc640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bc640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0) {
    *(undefined1 *)((int)this + 0x188) = 1;
    in_EAX = F_0059f6f0(*(undefined * PTR32 *)((int)this + 0x180),param_1,1);
    *(undefined1 *)((int)this + 0x188) = 0;
  }
  return in_EAX;
}

/* ref: FUN_007bc670 */
uint F_007bc670(unsigned int gen_a0)
{
  GEN_ENTER(0x7bc670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 900) * 4 + 0x388))) = 0;
  if (*(int *)((int)this + 0x180) != 0) {
    this = (undefined *)F_00574c80(*(int *)((int)this + 0x180),
                                *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 900) * 4 + 0x388))),1,1);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CDisplay::vf3 */
uint F_007bc6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bc6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 0x10) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x10),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x18),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x20),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (*(undefined * PTR32 *)(this + 0x28) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x28),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x94);
  }
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x30),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x38),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  if (*(undefined * PTR32 *)(this + 0x40) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x40),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xac);
  }
  if (*(undefined * PTR32 *)(this + 0x48) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x48),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xb0) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xb4);
  }
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    uVar2 = F_0059dde0(*(undefined * PTR32 *)(this + 0x50),(uint)(uVar2 != 0));
  }
  if ((*(byte *)(param_1 + 0xb8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xbc);
  }
  if (*(undefined * PTR32 *)(this + 0x58) != (undefined *)0x0) {
    uVar2 = F_0059dde0(*(undefined * PTR32 *)(this + 0x58),(uint)(iVar1 != 0));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CDisplay::vf4 */
uint F_007bc860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bc860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pCVar3;
  int iVar4;
  int iVar5;
  undefined * pCVar6;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_2 == 0) {
    this_00 = *(undefined * PTR32 *)(this + 4);
    iVar4 = 0;
    pCVar3 = this;
    while( true ) {
      pCVar6 = pCVar3 + 8;
      this = *(undefined * PTR32 *)pCVar6;
      if (this == (undefined *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(this + 0x70);
      }
      if ((iVar5 == *(int *)(param_3 + 4)) && (this != (undefined *)0x0)) break;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar6;
      if (10 < iVar4) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return (uint)this;
      }
    }
    if (*(uint *)(pCVar3 + 0xc) != 0xffffffff) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar2 = *(uint *)(pCVar3 + 0xc);
      (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      bVar1 = *(byte *)(*(uint *)pCVar6 + 0x88);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
      F_005a9110(this_00,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_01 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 3;
      do {
        this_01 = this_01 + -2;
        this = (undefined *)F_005a2670(this_01);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CCommon::vf3 */
uint F_007bc950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bc950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 0x10) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x10),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x18),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x20),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (*(undefined * PTR32 *)(this + 0x28) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x28),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x94);
  }
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x30),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x38),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  if (*(undefined * PTR32 *)(this + 0x40) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x40),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xac);
  }
  if (*(undefined * PTR32 *)(this + 0x48) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x48),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xb0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb4);
  }
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x50),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xb8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xbc);
  }
  if (*(undefined * PTR32 *)(this + 0x58) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x58),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xc0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc4);
  }
  if (*(undefined * PTR32 *)(this + 0x60) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x60),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 200) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  if (*(undefined * PTR32 *)(this + 0x68) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x68),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xd0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd4);
  }
  if (*(undefined * PTR32 *)(this + 0x70) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x70),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xd8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xdc);
  }
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x78),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xe0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe4);
  }
  if (*(undefined * PTR32 *)(this + 0x80) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x80),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xe8) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xec);
  }
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    uVar2 = F_0059dde0(*(undefined * PTR32 *)(this + 0x88),(uint)(uVar2 != 0));
  }
  if ((*(byte *)(param_1 + 0xf0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xf4);
  }
  if (*(undefined * PTR32 *)(this + 0x90) != (undefined *)0x0) {
    uVar2 = F_0059dde0(*(undefined * PTR32 *)(this + 0x90),(uint)(iVar1 != 0));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CCommon::vf4 */
uint F_007bcc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bcc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pCVar3;
  int iVar4;
  int iVar5;
  undefined * pCVar6;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_2 == 0) {
    this_00 = *(undefined * PTR32 *)(this + 4);
    iVar4 = 0;
    pCVar3 = this;
    while( true ) {
      pCVar6 = pCVar3 + 8;
      this = *(undefined * PTR32 *)pCVar6;
      if (this == (undefined *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(this + 0x70);
      }
      if ((iVar5 == *(int *)(param_3 + 4)) && (this != (undefined *)0x0)) break;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar6;
      if (0x11 < iVar4) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return (uint)this;
      }
    }
    if (*(uint *)(pCVar3 + 0xc) != 0xffffffff) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar2 = *(uint *)(pCVar3 + 0xc);
      (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      bVar1 = *(byte *)(*(uint *)pCVar6 + 0x88);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
      F_005a9110(this_00,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_01 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 3;
      do {
        this_01 = this_01 + -2;
        this = (undefined *)F_005a2670(this_01);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CXhb::vf3 */
uint F_007bcd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bcd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  uint * puVar6;
  undefined4 uVar7;
  int local_8;
  
  iVar4 = param_1;
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 0x44) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x44),(uint)(iVar2 != 0));
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x4c) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x4c),(uint)(iVar2 != 0));
  }
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x8c);
  }
  if (*(undefined * PTR32 *)(this + 0x54) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x54),(uint)(iVar2 != 0));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(iVar2 == *(int *)(this + 0x10)));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 0x14) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x14),(uint)(iVar2 == *(int *)(this + 0x1c)));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x20),(uint)(iVar2 == *(int *)(this + 0x28)));
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x2c) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x2c),(uint)(iVar2 == *(int *)(this + 0x34)));
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x38),(uint)(iVar2 == *(int *)(this + 0x40)));
  }
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(param_1 + 0x94);
  }
  if ((*(byte *)(iVar4 + 0xd8) & 0xf) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(iVar4 + 0xdc);
  }
  if (*(undefined * PTR32 *)(this + 0x5c) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x5c),(uint)(param_1 != 0));
  }
  if (*(undefined * PTR32 *)(this + 0xa4) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0xa4),(uint)(local_8 != 0));
  }
  pCVar5 = this + 0xac;
  puVar6 = (uint *)(iVar4 + 0xe4);
  iVar4 = 8;
  do {
    if ((puVar6[-0x13] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = puVar6[-0x12];
    }
    if (*(undefined * PTR32 *)(pCVar5 + -0x48) != (undefined *)0x0) {
      F_0059dde0(*(undefined * PTR32 *)(pCVar5 + -0x48),(uint)(uVar3 != 0));
    }
    if ((puVar6[-1] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar6;
    }
    if (*(undefined * PTR32 *)pCVar5 != (undefined *)0x0) {
      uVar3 = F_0059dde0(*(undefined * PTR32 *)pCVar5,(uint)(uVar3 != 0));
    }
    piVar1 = *(int * PTR32 *)(pCVar5 + -0x48);
    if (param_1 == 0) {
      if (piVar1 != (int *)0x0) {
        uVar7 = 0;
        goto LAB_007bcf09;
      }
    }
    else if (piVar1 != (int *)0x0) {
      uVar7 = 1;
LAB_007bcf09: ;
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,uVar7);
    }
    piVar1 = *(int * PTR32 *)pCVar5;
    if (local_8 == 0) {
      if (piVar1 != (int *)0x0) {
        uVar7 = 0;
        goto LAB_007bcf26;
      }
    }
    else if (piVar1 != (int *)0x0) {
      uVar7 = 1;
LAB_007bcf26: ;
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,uVar7);
    }
    puVar6 = puVar6 + 2;
    pCVar5 = pCVar5 + 8;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return uVar3;
    }
  } while( true );
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CXhb::vf4 */
uint F_007bcf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bcf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  undefined3 extraout_var_00 = 0;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  uVar3 = param_3;
  if (param_2 == 0) {
    iVar4 = 0;
    pCVar5 = this + 8;
    do {
      bVar2 = F_007bb7b0(pCVar5,*(undefined4 *)(this + 4),uVar1);
      if (bVar2 != 0) {
        return CONCAT31(extraout_var,bVar2);
      }
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 0xc;
    } while (iVar4 < 5);
    iVar4 = 0;
    pCVar5 = this + 0x44;
    do {
      bVar2 = F_007bb670(pCVar5,*(undefined4 *)(this + 4),uVar1);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 8;
    } while (iVar4 < 0x15);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterHud::vf41 */
byte F_007bcff0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bcff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigCharacterHud",0,6);
  return bVar1;
}

/* ref: FUN_007bd000 */
uint F_007bd000(unsigned int gen_a0)
{
  GEN_ENTER(0x7bd000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007bd030 */
uint F_007bd030(unsigned int gen_a0)
{
  GEN_ENTER(0x7bd030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar3 = 0x17;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),3);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0xc;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x1d63;
  F_005a2710(((undefined1 *)(gen_frame + 0x78)),3);
  (*(undefined4 *)(gen_frame + 0x7c)) = 1;
  F_005a9110(this,0x18,((undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0xc8));
  iVar3 = 0x17;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: FUN_007bd0f0 */
uint F_007bd0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bd0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  ((byte *)(gen_frame + 0xc))[0] = 5;
  ((byte *)(gen_frame + 0xc))[1] = 0;
  ((byte *)(gen_frame + 0xc))[2] = 0;
  ((byte *)(gen_frame + 0xc))[3] = 0;
  ((byte *)(gen_frame + 0xc))[4] = 6;
  ((byte *)(gen_frame + 0xc))[5] = 0;
  ((byte *)(gen_frame + 0xc))[6] = 0;
  ((byte *)(gen_frame + 0xc))[7] = 0;
  ((byte *)(gen_frame + 0xc))[8] = 7;
  ((byte *)(gen_frame + 0xc))[9] = 0;
  ((byte *)(gen_frame + 0xc))[10] = 0;
  ((byte *)(gen_frame + 0xc))[0xb] = 0;
  ((byte *)(gen_frame + 0xc))[0xc] = 0;
  ((byte *)(gen_frame + 0xc))[0xd] = 0;
  ((byte *)(gen_frame + 0xc))[0xe] = 0;
  ((byte *)(gen_frame + 0xc))[0xf] = 0;
  ((byte *)(gen_frame + 0xc))[0x14] = 0;
  ((byte *)(gen_frame + 0xc))[0x15] = 0;
  ((byte *)(gen_frame + 0xc))[0x16] = 0;
  ((byte *)(gen_frame + 0xc))[0x17] = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(((byte *)(gen_frame + 0xc)) + 0xc,3);
  ((byte *)(gen_frame + 0xc))[0x10] = 10;
  ((byte *)(gen_frame + 0xc))[0x11] = 0;
  ((byte *)(gen_frame + 0xc))[0x12] = 0;
  ((byte *)(gen_frame + 0xc))[0x13] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(((byte *)(gen_frame + 0xc)) + param_1 * 4);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  F_005a9110(this,4,((byte *)(gen_frame + 0xc)) + 0xc);
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_007bd190 */
uint F_007bd190(unsigned int gen_a0)
{
  GEN_ENTER(0x7bd190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = 7;
  ((undefined4 *)(gen_frame + 0x4))[1] = 0x36;
  if (*(int *)((int)this + 0x180) != 0) {
    uVar4 = 0;
    uVar2 = F_0055e2f0(this,0x3e);
    uVar3 = F_0055e2f0(this,((undefined4 *)(gen_frame + 0x4))[(int)(*(int *)((int)this + 0x2b4))]);
    F_0058e3c0(*(undefined * PTR32 *)((int)this + 0x180),uVar3,uVar2,uVar4);
    F_00574c80(*(undefined4 *)((int)this + 0x180),
                 *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x2b4) * 4 + 0x2b8))),1,1);
    uVar2 = F_0055e2f0(this,0x16);
    uVar1 = F_0055a030(uVar2);
    in_EAX = (uint)uVar1;
    *((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc2))) = uVar1;
  }
  return in_EAX;
}

/* ref: FUN_007bd220 */
uint F_007bd220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bd220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0) {
    *(undefined1 *)((int)this + 0x188) = 1;
    in_EAX = F_0059f6f0(*(undefined * PTR32 *)((int)this + 0x180),param_1,1);
    *(undefined1 *)((int)this + 0x188) = 0;
  }
  return in_EAX;
}

/* ref: FUN_007bd250 */
uint F_007bd250(unsigned int gen_a0)
{
  GEN_ENTER(0x7bd250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2b4) * 4 + 0x2b8))) = 0;
  if (*(int *)((int)this + 0x180) != 0) {
    this = (undefined *)F_00574c80(*(int *)((int)this + 0x180),
                                *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x2b4) * 4 + 0x2b8))),1,1);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CGeneral::vf3 */
uint F_007bd290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bd290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 0x10) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x10),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x18),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x20),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (*(undefined * PTR32 *)(this + 0x28) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x28),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x94);
  }
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x30),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x38),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  if (*(undefined * PTR32 *)(this + 0x40) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x40),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xac);
  }
  if (*(undefined * PTR32 *)(this + 0x48) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x48),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xb0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb4);
  }
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x50),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xb8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xbc);
  }
  if (*(undefined * PTR32 *)(this + 0x58) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x58),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xc0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc4);
  }
  if (*(undefined * PTR32 *)(this + 0x60) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x60),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 200) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  if (*(undefined * PTR32 *)(this + 0x68) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x68),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x108) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10c);
  }
  if (*(undefined * PTR32 *)(this + 0x90) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x90),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x110) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x114);
  }
  if (*(undefined * PTR32 *)(this + 0x98) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x98),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x120) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x124);
  }
  if (*(undefined * PTR32 *)(this + 0xa0) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0xa0),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x128) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 300);
  }
  if (*(undefined * PTR32 *)(this + 0xa8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0xa8),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x100) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x104);
  }
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x88),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xf8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xfc);
  }
  if (*(undefined * PTR32 *)(this + 0xbc) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0xbc),(uint)(iVar1 == *(int *)(this + 0xc4)));
  }
  if ((*(byte *)(param_1 + 0xf8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xfc);
  }
  if (*(undefined * PTR32 *)(this + 200) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 200),(uint)(iVar1 == *(int *)(this + 0xd0)));
  }
  if (((*(byte *)(param_1 + 0xf8) & 0xf) == 0) || (*(int *)(param_1 + 0xfc) == 0)) {
    piVar3 = *(int * PTR32 *)(this + 0x88);
    if (piVar3 == (int *)0x0) goto LAB_007bd5fa;
    uVar4 = 1;
  }
  else {
    piVar3 = *(int * PTR32 *)(this + 0x88);
    if (piVar3 == (int *)0x0) goto LAB_007bd5fa;
    uVar4 = 0;
  }
  ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,uVar4);
LAB_007bd5fa: ;
  if ((*(byte *)(param_1 + 0x130) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x134);
  }
  if (*(undefined * PTR32 *)(this + 0xd4) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0xd4),uVar4);
  }
  if ((*(byte *)(param_1 + 0x118) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x11c);
  }
  if (*(undefined * PTR32 *)(this + 0xe0) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0xe0),uVar4);
  }
  if ((*(byte *)(param_1 + 0xd8) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xdc);
  }
  if (*(undefined * PTR32 *)(this + 0xec) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0xec),uVar4);
  }
  piVar3 = *(int * PTR32 *)(this + 0x68);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0);
  }
  if ((*(byte *)(param_1 + 0xd0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd4);
  }
  if (*(undefined * PTR32 *)(this + 0x70) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x70),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xe0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe4);
  }
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x78),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xe8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xec);
  }
  if (*(undefined * PTR32 *)(this + 0x80) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x80),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xf0) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xf4);
  }
  this[0xb8] = (undefined1)0x1;
  if (*(undefined * PTR32 *)(this + 0xb0) != (undefined *)0x0) {
    uVar2 = F_0059dbe0(*(undefined * PTR32 *)(this + 0xb0),uVar2,1);
  }
  this[0xb8] = (undefined1)0x0;
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CGeneral::vf4 */
uint F_007bd730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bd730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  int iVar4;
  undefined * pCVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar4 = 0;
    pCVar5 = this + 0xbc;
    do {
      bVar2 = F_007bb7b0(pCVar5,*(undefined4 *)(this + 4),uVar1);
      if (bVar2 != 0) {
        return CONCAT31(extraout_var_01,bVar2);
      }
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 0xc;
    } while (iVar4 < 2);
    iVar4 = 0;
    pCVar5 = this;
    do {
      pCVar5 = pCVar5 + 8;
      bVar2 = F_007bb670(pCVar5,*(undefined4 *)(this + 4),uVar1);
      uVar3 = CONCAT31(extraout_var_02,bVar2);
      if (bVar2 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x15);
  }
  else if (param_2 == 1) {
    iVar4 = 0;
    pCVar5 = this + 0xd4;
    while( true ) {
      bVar2 = F_007bba30(pCVar5,*(undefined4 *)(this + 4),uVar1,param_1);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) break;
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 0xc;
      if (2 < iVar4) {
        return uVar3;
      }
    }
  }
  else {
    uVar3 = param_2 - 2;
    if (uVar3 == 0) {
      iVar4 = 0;
      pCVar5 = this + 0xb0;
      while( true ) {
        bVar2 = F_007bb8f0(pCVar5,*(undefined4 *)(this + 4),uVar1);
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) break;
        iVar4 = iVar4 + 1;
        pCVar5 = pCVar5 + 0xc;
        if (0 < iVar4) {
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CGeneral::vf5 */
uint F_007bd810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bd810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + param_1 * 0xc + 0xd4) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + param_1 * 0xc + 0xd4) + 0x88))),param_2,param_3,1)
    ;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CPartyList::vf3 */
uint F_007bd840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bd840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(iVar2 != 0));
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x10) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x10),(uint)(iVar2 != 0));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
    uVar3 = F_0059caa0(*(undefined * PTR32 *)(this + 0x18),uVar3);
  }
  if (((*(byte *)(param_1 + 0x68) & 0xf) == 0) || (*(int *)(param_1 + 0x6c) == 0)) {
    piVar1 = *(int * PTR32 *)(this + 0x18);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
    }
    piVar1 = *(int * PTR32 *)(this + 0x10);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
    }
  }
  else {
    piVar1 = *(int * PTR32 *)(this + 0x18);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
    }
    piVar1 = *(int * PTR32 *)(this + 0x10);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CPartyList::vf4 */
uint F_007bd910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bd910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * pCVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar5 = 0;
    pCVar4 = this;
    do {
      pCVar4 = pCVar4 + 8;
      bVar2 = F_007bb670(pCVar4,*(undefined4 *)(this + 4),uVar1);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        return uVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
  }
  else {
    uVar3 = param_2 - 1;
    if (uVar3 == 0) {
      iVar5 = 0;
      pCVar4 = this + 0x18;
      while( true ) {
        bVar2 = F_007bba30(pCVar4,*(undefined4 *)(this + 4),uVar1,param_1);
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) break;
        iVar5 = iVar5 + 1;
        pCVar4 = pCVar4 + 0xc;
        if (0 < iVar5) {
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CPartyList::vf5 */
uint F_007bd990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bd990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP((this + (param_1 * 3 + 6) * 4))) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((this + (param_1 * 3 + 6) * 4))) + 0x88))),param_2,param_3,1
                        );
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::vf41 */
byte F_007bda00(unsigned int gen_a0)
{
  GEN_ENTER(0x7bda00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigCharacterNamePlate",0,6);
  return bVar1;
}

/* ref: FUN_007bda10 */
uint F_007bda10(unsigned int gen_a0)
{
  GEN_ENTER(0x7bda10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007bda40 */
uint F_007bda40(unsigned int gen_a0)
{
  GEN_ENTER(0x7bda40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar3 = 0x17;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),3);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0xc;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x1d63;
  F_005a2710(((undefined1 *)(gen_frame + 0x78)),3);
  (*(undefined4 *)(gen_frame + 0x7c)) = 1;
  F_005a9110(this,0x18,((undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0xc8));
  iVar3 = 0x17;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: FUN_007bdb00 */
uint F_007bdb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bdb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  ((byte *)(gen_frame + 0x8))[0] = 8;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  ((byte *)(gen_frame + 0x8))[4] = 9;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  ((byte *)(gen_frame + 0x8))[8] = 10;
  ((byte *)(gen_frame + 0x8))[9] = 0;
  ((byte *)(gen_frame + 0x8))[10] = 0;
  ((byte *)(gen_frame + 0x8))[0xb] = 0;
  ((byte *)(gen_frame + 0x8))[0xc] = 0xb;
  ((byte *)(gen_frame + 0x8))[0xd] = 0;
  ((byte *)(gen_frame + 0x8))[0xe] = 0;
  ((byte *)(gen_frame + 0x8))[0xf] = 0;
  ((byte *)(gen_frame + 0x8))[0x10] = 0;
  ((byte *)(gen_frame + 0x8))[0x11] = 0;
  ((byte *)(gen_frame + 0x8))[0x12] = 0;
  ((byte *)(gen_frame + 0x8))[0x13] = 0;
  ((byte *)(gen_frame + 0x8))[0x18] = 0;
  ((byte *)(gen_frame + 0x8))[0x19] = 0;
  ((byte *)(gen_frame + 0x8))[0x1a] = 0;
  ((byte *)(gen_frame + 0x8))[0x1b] = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(((byte *)(gen_frame + 0x8)) + 0x10,3);
  ((byte *)(gen_frame + 0x8))[0x14] = 10;
  ((byte *)(gen_frame + 0x8))[0x15] = 0;
  ((byte *)(gen_frame + 0x8))[0x16] = 0;
  ((byte *)(gen_frame + 0x8))[0x17] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(((byte *)(gen_frame + 0x8)) + param_1 * 4);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  F_005a9110(this,4,((byte *)(gen_frame + 0x8)) + 0x10);
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_007bdbb0 */
uint F_007bdbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bdbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[3] = uVar2;
  ((uint *)(gen_frame + 0xc))[0] = 0xd;
  ((uint *)(gen_frame + 0xc))[1] = 0x29;
  ((uint *)(gen_frame + 0xc))[2] = 0x5d;
  if (*(int *)((int)this + 0x180) != 0) {
    uVar4 = 0;
    uVar2 = F_0055e2f0(this,0x95);
    uVar3 = F_0055e2f0(this,((uint *)(gen_frame + 0xc))[(int)(*(int *)((int)this + 0x444))]);
    F_0058e3c0(*(undefined * PTR32 *)((int)this + 0x180),uVar3,uVar2,uVar4);
    F_00574c80(*(undefined4 *)((int)this + 0x180),
                 *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x444) * 4 + 0x448))),1,1);
    uVar2 = F_0055e2f0(this,0xf);
    uVar1 = F_0055a030(uVar2);
    uVar2 = (uint)uVar1;
    *((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc2))) = uVar1;
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007bdc60 */
uint F_007bdc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bdc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0) {
    *(undefined1 *)((int)this + 0x188) = 1;
    in_EAX = F_0059f6f0(*(undefined * PTR32 *)((int)this + 0x180),param_1,1);
    *(undefined1 *)((int)this + 0x188) = 0;
  }
  return in_EAX;
}

/* ref: FUN_007bdc90 */
byte F_007bdc90(unsigned int gen_a0)
{
  GEN_ENTER(0x7bdc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 0x444) == 2) &&
     (piVar1 = *(int * PTR32 *)((int)this + 0x338), piVar1 != (int *)0x0)) {
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    if (uVar2 == uVar3) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007bdcd0 */
byte F_007bdcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7bdcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 0x444) == 2) &&
     (piVar1 = *(int * PTR32 *)((int)this + 0x428), piVar1 != (int *)0x0)) {
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    if (uVar2 == uVar3) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007bdd10 */
uint F_007bdd10(unsigned int gen_a0)
{
  GEN_ENTER(0x7bdd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x444) * 4 + 0x448))) = 0;
  if (*(int *)((int)this + 0x180) != 0) {
    this = (undefined *)F_00574c80(*(int *)((int)this + 0x180),
                                *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x444) * 4 + 0x448))),1,1);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CGeneral::vf3 */
uint F_007bdd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bdd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    uVar1 = F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(uVar1 != 0));
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CGeneral::vf4 */
uint F_007bdd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bdd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pCVar3;
  int iVar4;
  int iVar5;
  undefined * pCVar6;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_2 == 0) {
    this_00 = *(undefined * PTR32 *)(this + 4);
    iVar5 = 0;
    pCVar3 = this;
    while( true ) {
      pCVar6 = pCVar3 + 8;
      this = *(undefined * PTR32 *)pCVar6;
      if (this == (undefined *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(this + 0x70);
      }
      if ((iVar4 == *(int *)(param_3 + 4)) && (this != (undefined *)0x0)) break;
      iVar5 = iVar5 + 1;
      pCVar3 = pCVar6;
      if (0 < iVar5) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return (uint)this;
      }
    }
    if (*(uint *)(pCVar3 + 0xc) != 0xffffffff) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar2 = *(uint *)(pCVar3 + 0xc);
      (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      bVar1 = *(byte *)(*(uint *)pCVar6 + 0x88);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
      F_005a9110(this_00,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_01 = &(*(uint *)(gen_frame + 0x28));
      iVar5 = 3;
      do {
        this_01 = this_01 + -2;
        this = (undefined *)F_005a2670(this_01);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CMyself::vf3 */
unsigned int F_007bde70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bde70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x6c);
    if (iVar2 == 4) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x88)));
      uVar3 = 5;
      goto LAB_007bde8e;
    }
  }
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x88)));
  uVar3 = 4;
LAB_007bde8e: ;
  F_0058d980(uVar1,uVar3);
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 8),iVar2);
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x14) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x14),uVar1);
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x20),uVar1);
  }
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
  }
  if (*(undefined * PTR32 *)(this + 0x2c) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x2c),uVar1);
  }
  if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x38),uVar1);
  }
  if ((*(byte *)(param_1 + 0xa0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
  }
  if (*(undefined * PTR32 *)(this + 0x44) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x44),uVar1);
  }
  if ((*(byte *)(param_1 + 0xb0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xb4);
  }
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x50),uVar1);
  }
  if ((*(byte *)(param_1 + 0xb8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xbc);
  }
  if (*(undefined * PTR32 *)(this + 0x5c) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x5c),uVar1);
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x74);
  }
  F_007bb450(this + 0x68,uVar1,4);
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x94);
  }
  F_007bb450(this + 0x74,uVar1,4);
  if ((*(byte *)(param_1 + 0xa8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xac);
  }
  F_007bb450(this + 0x80,uVar1,4);
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CMyself::vf5 */
uint F_007bdff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bdff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + param_1 * 0xc + 8) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + param_1 * 0xc + 8) + 0x88))),param_2,param_3,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CMyself::vf4 */
uint F_007be020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7be020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * pCVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar4 = 0;
    pCVar3 = this + 0x68;
    do {
      bVar2 = F_007bb520(pCVar3,*(undefined4 *)(this + 4),uVar1);
      if (bVar2 != 0) {
        return CONCAT31(extraout_var,bVar2);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 0xc;
    } while (iVar4 < 3);
  }
  else if (param_2 - 1U != 0) {
    return param_2 - 1U;
  }
  iVar4 = 0;
  pCVar3 = this + 8;
  do {
    bVar2 = F_007bba30(pCVar3,*(undefined4 *)(this + 4),uVar1,param_1);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var_00,bVar2);
    }
    iVar4 = iVar4 + 1;
    pCVar3 = pCVar3 + 0xc;
  } while (iVar4 < 8);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CAnother::vf3 */
unsigned int F_007be0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7be0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x6c);
    if (iVar2 == 4) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x88)));
      uVar3 = 5;
      goto LAB_007be0be;
    }
  }
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x88)));
  uVar3 = 4;
LAB_007be0be: ;
  F_0058d980(uVar1,uVar3);
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 8),iVar2);
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x14) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x14),uVar1);
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x20),uVar1);
  }
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
  }
  if (*(undefined * PTR32 *)(this + 0x2c) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x2c),uVar1);
  }
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x94);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x38),uVar1);
  }
  if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
  }
  if (*(undefined * PTR32 *)(this + 0x44) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x44),uVar1);
  }
  if ((*(byte *)(param_1 + 0xd8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xdc);
  }
  if (*(undefined * PTR32 *)(this + 0x8c) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x8c),uVar1);
  }
  if ((*(byte *)(param_1 + 0xe0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xe4);
  }
  if (*(undefined * PTR32 *)(this + 0x98) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x98),uVar1);
  }
  if ((*(byte *)(param_1 + 0xe8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xec);
  }
  if (*(undefined * PTR32 *)(this + 0xa4) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0xa4),uVar1);
  }
  if ((*(byte *)(param_1 + 0xf0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xf4);
  }
  if (*(undefined * PTR32 *)(this + 0xb0) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0xb0),uVar1);
  }
  if ((*(byte *)(param_1 + 0xf8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xfc);
  }
  if (*(undefined * PTR32 *)(this + 0xbc) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0xbc),uVar1);
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x74);
  }
  F_007bb450(this + 200,uVar1,4);
  if ((*(byte *)(param_1 + 0xd0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xd4);
  }
  F_007bb450(this + 0xe0,uVar1,4);
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CAnother::vf5 */
uint F_007be280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7be280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + param_1 * 0xc + 8) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + param_1 * 0xc + 8) + 0x88))),param_2,param_3,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CAnother::vf4 */
uint F_007be2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7be2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * pCVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar4 = 0;
    pCVar3 = this + 200;
    do {
      bVar2 = F_007bb520(pCVar3,*(undefined4 *)(this + 4),uVar1);
      if (bVar2 != 0) {
        return CONCAT31(extraout_var,bVar2);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 0xc;
    } while (iVar4 < 3);
  }
  else if (param_2 - 1U != 0) {
    return param_2 - 1U;
  }
  iVar4 = 0;
  pCVar3 = this + 8;
  do {
    bVar2 = F_007bba30(pCVar3,*(undefined4 *)(this + 4),uVar1,param_1);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var_00,bVar2);
    }
    iVar4 = iVar4 + 1;
    pCVar3 = pCVar3 + 0xc;
  } while (iVar4 < 0x10);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CNpc::vf3 */
unsigned int F_007be330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7be330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x6c);
    if (iVar2 == 4) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x88)));
      uVar3 = 5;
      goto LAB_007be34e;
    }
  }
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x88)));
  uVar3 = 4;
LAB_007be34e: ;
  F_0058d980(uVar1,uVar3);
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 8),iVar2);
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x14) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x14),uVar1);
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x20),uVar1);
  }
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x94);
  }
  if (*(undefined * PTR32 *)(this + 0x2c) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x2c),uVar1);
  }
  if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x38),uVar1);
  }
  if ((*(byte *)(param_1 + 0xa8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xac);
  }
  if (*(undefined * PTR32 *)(this + 0x44) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x44),uVar1);
  }
  if ((*(byte *)(param_1 + 0xb0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xb4);
  }
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x50),uVar1);
  }
  if ((*(byte *)(param_1 + 0xc0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc4);
  }
  if (*(undefined * PTR32 *)(this + 0x5c) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x5c),uVar1);
  }
  if ((*(byte *)(param_1 + 200) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xcc);
  }
  if (*(undefined * PTR32 *)(this + 0x68) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x68),uVar1);
  }
  if ((*(byte *)(param_1 + 0xd8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xdc);
  }
  if (*(undefined * PTR32 *)(this + 0x74) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x74),uVar1);
  }
  if ((*(byte *)(param_1 + 0xe0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xe4);
  }
  if (*(undefined * PTR32 *)(this + 0x80) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x80),uVar1);
  }
  if ((*(byte *)(param_1 + 0xf0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xf4);
  }
  if (*(undefined * PTR32 *)(this + 0x8c) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x8c),uVar1);
  }
  if ((*(byte *)(param_1 + 0xf8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xfc);
  }
  if (*(undefined * PTR32 *)(this + 0x98) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0x98),uVar1);
  }
  if ((*(byte *)(param_1 + 0x108) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10c);
  }
  if (*(undefined * PTR32 *)(this + 0xa4) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0xa4),uVar1);
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x74);
  }
  F_007bb450(this + 0xb0,uVar1,4);
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
  }
  F_007bb450(this + 0xbc,uVar1,4);
  if ((*(byte *)(param_1 + 0xa0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
  }
  F_007bb450(this + 200,uVar1,4);
  if ((*(byte *)(param_1 + 0xb8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xbc);
  }
  F_007bb450(this + 0xd4,uVar1,4);
  if ((*(byte *)(param_1 + 0xd0) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xd4);
  }
  F_007bb450(this + 0xe0,uVar1,4);
  if ((*(byte *)(param_1 + 0xe8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xec);
  }
  F_007bb450(this + 0xec,uVar1,4);
  if ((*(byte *)(param_1 + 0x100) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x104);
  }
  F_007bb450(this + 0xf8,uVar1,4);
  if ((*(byte *)(param_1 + 0x110) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x114);
  }
  F_007bb450(this + 0x104,uVar1,4);
  if ((*(byte *)(param_1 + 0x118) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x11c);
  }
  F_007bb450(this + 0x110,uVar1,4);
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CNpc::vf5 */
uint F_007be650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7be650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + param_1 * 0xc + 8) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + param_1 * 0xc + 8) + 0x88))),param_2,param_3,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CNpc::vf4 */
uint F_007be680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7be680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * pCVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar4 = 0;
    pCVar3 = this + 0xb0;
    do {
      bVar2 = F_007bb520(pCVar3,*(undefined4 *)(this + 4),uVar1);
      if (bVar2 != 0) {
        return CONCAT31(extraout_var,bVar2);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 0xc;
    } while (iVar4 < 9);
  }
  else if (param_2 - 1U != 0) {
    return param_2 - 1U;
  }
  iVar4 = 0;
  pCVar3 = this + 8;
  do {
    bVar2 = F_007bba30(pCVar3,*(undefined4 *)(this + 4),uVar1,param_1);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var_00,bVar2);
    }
    iVar4 = iVar4 + 1;
    pCVar3 = pCVar3 + 0xc;
  } while (iVar4 < 0xe);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: Client::UI2::AddonConfigCharacterOperation::vf41 */
byte F_007be740(unsigned int gen_a0)
{
  GEN_ENTER(0x7be740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigCharacterOperation",0,6);
  return bVar1;
}

/* ref: FUN_007be750 */
uint F_007be750(unsigned int gen_a0)
{
  GEN_ENTER(0x7be750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007be780 */
uint F_007be780(unsigned int gen_a0)
{
  GEN_ENTER(0x7be780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar3 = 0x17;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),3);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0xc;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x1d63;
  F_005a2710(((undefined1 *)(gen_frame + 0x78)),3);
  (*(undefined4 *)(gen_frame + 0x7c)) = 1;
  F_005a9110(this,0x18,((undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0xc8));
  iVar3 = 0x17;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: FUN_007be840 */
uint F_007be840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7be840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  ((byte *)(gen_frame + 0x4))[0] = 0;
  ((byte *)(gen_frame + 0x4))[1] = 0;
  ((byte *)(gen_frame + 0x4))[2] = 0;
  ((byte *)(gen_frame + 0x4))[3] = 0;
  ((byte *)(gen_frame + 0x4))[4] = 1;
  ((byte *)(gen_frame + 0x4))[5] = 0;
  ((byte *)(gen_frame + 0x4))[6] = 0;
  ((byte *)(gen_frame + 0x4))[7] = 0;
  ((byte *)(gen_frame + 0x4))[8] = 2;
  ((byte *)(gen_frame + 0x4))[9] = 0;
  ((byte *)(gen_frame + 0x4))[10] = 0;
  ((byte *)(gen_frame + 0x4))[0xb] = 0;
  ((byte *)(gen_frame + 0x4))[0xc] = 3;
  ((byte *)(gen_frame + 0x4))[0xd] = 0;
  ((byte *)(gen_frame + 0x4))[0xe] = 0;
  ((byte *)(gen_frame + 0x4))[0xf] = 0;
  ((byte *)(gen_frame + 0x4))[0x10] = 4;
  ((byte *)(gen_frame + 0x4))[0x11] = 0;
  ((byte *)(gen_frame + 0x4))[0x12] = 0;
  ((byte *)(gen_frame + 0x4))[0x13] = 0;
  ((byte *)(gen_frame + 0x4))[0x14] = 0;
  ((byte *)(gen_frame + 0x4))[0x15] = 0;
  ((byte *)(gen_frame + 0x4))[0x16] = 0;
  ((byte *)(gen_frame + 0x4))[0x17] = 0;
  ((byte *)(gen_frame + 0x4))[0x1c] = 0;
  ((byte *)(gen_frame + 0x4))[0x1d] = 0;
  ((byte *)(gen_frame + 0x4))[0x1e] = 0;
  ((byte *)(gen_frame + 0x4))[0x1f] = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(((byte *)(gen_frame + 0x4)) + 0x14,3);
  ((byte *)(gen_frame + 0x4))[0x18] = 10;
  ((byte *)(gen_frame + 0x4))[0x19] = 0;
  ((byte *)(gen_frame + 0x4))[0x1a] = 0;
  ((byte *)(gen_frame + 0x4))[0x1b] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(((byte *)(gen_frame + 0x4)) + param_1 * 4);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  F_005a9110(this,4,((byte *)(gen_frame + 0x4)) + 0x14);
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_007be8f0 */
uint F_007be8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7be8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x4))[5] = uVar2;
  ((uint *)(gen_frame + 0x4))[0] = 10;
  ((uint *)(gen_frame + 0x4))[1] = 0x3e;
  ((uint *)(gen_frame + 0x4))[2] = 0x54;
  ((uint *)(gen_frame + 0x4))[3] = 0x91;
  ((uint *)(gen_frame + 0x4))[4] = 0xb9;
  if (*(int *)((int)this + 0x180) != 0) {
    uVar4 = 0;
    uVar2 = F_0055e2f0(this,0xbe);
    uVar3 = F_0055e2f0(this,((uint *)(gen_frame + 0x4))[(int)(*(int *)((int)this + 0x57c))]);
    F_0058e3c0(*(undefined * PTR32 *)((int)this + 0x180),uVar3,uVar2,uVar4);
    F_00574c80(*(undefined4 *)((int)this + 0x180),
                 *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x57c) * 4 + 0x580))),1,1);
    uVar2 = F_0055e2f0(this,0x18);
    uVar1 = F_0055a030(uVar2);
    uVar2 = (uint)uVar1;
    *((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc2))) = uVar1;
  }
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007be9b0 */
uint F_007be9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7be9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0) {
    *(undefined1 *)((int)this + 0x188) = 1;
    in_EAX = F_0059f6f0(*(undefined * PTR32 *)((int)this + 0x180),param_1,1);
    *(undefined1 *)((int)this + 0x188) = 0;
  }
  return in_EAX;
}

/* ref: FUN_007be9e0 */
uint F_007be9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7be9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x57c) * 4 + 0x580))) = 0;
  if (*(int *)((int)this + 0x180) != 0) {
    this = (undefined *)F_00574c80(*(int *)((int)this + 0x180),
                                *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x57c) * 4 + 0x580))),1,1);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CGeneral::vf3 */
uint F_007bea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bea20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(iVar1 == *(int *)(this + 0x10)));
  }
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 0x14) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x14),(uint)(iVar1 == *(int *)(this + 0x1c)));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 0x80) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x80),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x20),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x28) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x28),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x30),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x94);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x38),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c);
  }
  if (*(undefined * PTR32 *)(this + 0x40) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x40),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  if (*(undefined * PTR32 *)(this + 0x48) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x48),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xac);
  }
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x50),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xb0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb4);
  }
  if (*(undefined * PTR32 *)(this + 0x58) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x58),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xc0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc4);
  }
  if (*(undefined * PTR32 *)(this + 0x60) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x60),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 200) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  if (*(undefined * PTR32 *)(this + 0x68) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x68),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xe8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xec);
  }
  if (*(undefined * PTR32 *)(this + 0x70) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x70),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xf8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xfc);
  }
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x78),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xb8) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xbc);
  }
  if (*(undefined * PTR32 *)(this + 0xb8) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0xb8),uVar2);
  }
  if ((*(byte *)(param_1 + 0xf0) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xf4);
  }
  if (*(undefined * PTR32 *)(this + 0xc4) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)(this + 0xc4),uVar2);
  }
  if ((*(byte *)(param_1 + 0xd0) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xd4);
  }
  this[0x90] = (undefined1)0x1;
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)(this + 0x88),uVar2,1);
  }
  this[0x90] = (undefined1)0x0;
  if ((*(byte *)(param_1 + 0xd8) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xdc);
  }
  this[0x9c] = (undefined1)0x1;
  if (*(undefined * PTR32 *)(this + 0x94) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)(this + 0x94),uVar2,1);
  }
  this[0x9c] = (undefined1)0x0;
  if ((*(byte *)(param_1 + 0xe0) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xe4);
  }
  this[0xa8] = (undefined1)0x1;
  if (*(undefined * PTR32 *)(this + 0xa0) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)(this + 0xa0),uVar2,1);
  }
  this[0xa8] = (undefined1)0x0;
  if ((*(byte *)(param_1 + 0x100) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x104);
  }
  this[0xb4] = (undefined1)0x1;
  if (*(undefined * PTR32 *)(this + 0xac) != (undefined *)0x0) {
    uVar3 = F_0059dbe0(*(undefined * PTR32 *)(this + 0xac),uVar3,1);
  }
  this[0xb4] = (undefined1)0x0;
  if (*(int *)(this + 0xb8) == 0) {
LAB_007beda7: ;
    piVar4 = *(int * PTR32 *)(this + 0x60);
    if (piVar4 == (int *)0x0) goto LAB_007bedb7;
    uVar2 = 1;
  }
  else {
    uVar3 = F_00562c60(*(int *)(this + 0xb8));
    if ((int)uVar3 < 0) goto LAB_007bedb7;
    if ((int)uVar3 < 2) goto LAB_007beda7;
    if ((uVar3 != 2) || (piVar4 = *(int * PTR32 *)(this + 0x60), piVar4 == (int *)0x0)) goto LAB_007bedb7;
    uVar2 = 0;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,uVar2);
LAB_007bedb7: ;
  if (((*(byte *)(param_1 + 0x68) & 0xf) == 0) || (*(int *)(param_1 + 0x6c) == 0)) {
    piVar4 = *(int * PTR32 *)(this + 0xb8);
    if (piVar4 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,1);
    }
    piVar4 = *(int * PTR32 *)(this + 0x60);
    if (piVar4 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,1);
      return uVar3;
    }
  }
  else {
    piVar4 = *(int * PTR32 *)(this + 0xb8);
    if (piVar4 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0);
    }
    piVar4 = *(int * PTR32 *)(this + 0x60);
    if (piVar4 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CGeneral::vf5 */
uint F_007bee20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bee20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + param_1 * 0xc + 0xb8) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + param_1 * 0xc + 0xb8) + 0x88))),param_2,param_3,1)
    ;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CGeneral::vf4 */
uint F_007bee50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bee50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  int iVar4;
  undefined * pCVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar4 = 0;
    pCVar5 = this + 8;
    do {
      bVar2 = F_007bb7b0(pCVar5,*(undefined4 *)(this + 4),uVar1);
      if (bVar2 != 0) {
        return CONCAT31(extraout_var_01,bVar2);
      }
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 0xc;
    } while (iVar4 < 2);
    iVar4 = 0;
    pCVar5 = this + 0x20;
    do {
      bVar2 = F_007bb670(pCVar5,*(undefined4 *)(this + 4),uVar1);
      uVar3 = CONCAT31(extraout_var_02,bVar2);
      if (bVar2 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 8;
    } while (iVar4 < 0xd);
  }
  else if (param_2 == 1) {
    iVar4 = 0;
    pCVar5 = this + 0xb8;
    while( true ) {
      bVar2 = F_007bba30(pCVar5,*(undefined4 *)(this + 4),uVar1,param_1);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) break;
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 0xc;
      if (1 < iVar4) {
        return uVar3;
      }
    }
  }
  else {
    uVar3 = param_2 - 2;
    if (uVar3 == 0) {
      iVar4 = 0;
      pCVar5 = this + 0x88;
      while( true ) {
        bVar2 = F_007bb8f0(pCVar5,*(undefined4 *)(this + 4),uVar1);
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) break;
        iVar4 = iVar4 + 1;
        pCVar5 = pCVar5 + 0xc;
        if (3 < iVar4) {
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CTarget::vf3 */
uint F_007bef30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bef30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 0x10) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x10),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x18),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x20),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (*(undefined * PTR32 *)(this + 0x28) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x28),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 == 6) {
      F_0058d980(*((undefined4 *)GEN_TOP((*(int *)(this + 0x68) + 0x88))),7);
      this_00 = *(undefined * PTR32 *)(this + 0x68);
      goto joined_r0x007bf047;
    }
  }
  F_0058d980(*((undefined4 *)GEN_TOP((*(int *)(this + 0x68) + 0x88))),6);
  this_00 = *(undefined * PTR32 *)(this + 0x68);
joined_r0x007bf047: ;
  if (this_00 != (undefined *)0x0) {
    F_0059caa0(this_00,iVar1);
  }
  if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c);
  }
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x30),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x38),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xac);
  }
  if (*(undefined * PTR32 *)(this + 0x40) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x40),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xb0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb4);
  }
  if (*(undefined * PTR32 *)(this + 0x48) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x48),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xb8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xbc);
  }
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x50),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xc0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc4);
  }
  if (*(undefined * PTR32 *)(this + 0x58) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x58),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 200) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xcc);
  }
  if (*(undefined * PTR32 *)(this + 0x60) != (undefined *)0x0) {
    uVar2 = F_0059dde0(*(undefined * PTR32 *)(this + 0x60),(uint)(uVar2 != 0));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CTarget::vf4 */
uint F_007bf160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bf160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * pCVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar5 = 0;
    pCVar4 = this;
    do {
      pCVar4 = pCVar4 + 8;
      bVar2 = F_007bb670(pCVar4,*(undefined4 *)(this + 4),uVar1);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        return uVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xc);
  }
  else {
    uVar3 = param_2 - 1;
    if (uVar3 == 0) {
      iVar5 = 0;
      pCVar4 = this + 0x68;
      while( true ) {
        bVar2 = F_007bba30(pCVar4,*(undefined4 *)(this + 4),uVar1,param_1);
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) break;
        iVar5 = iVar5 + 1;
        pCVar4 = pCVar4 + 0xc;
        if (0 < iVar5) {
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CTarget::vf5 */
uint F_007bf1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bf1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + param_1 * 0xc + 0x68) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + param_1 * 0xc + 0x68) + 0x88))),param_2,param_3,1)
    ;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCircle::vf3 */
uint F_007bf210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bf210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  char cVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined * pCVar9;
  
  ((int *)(gen_frame + 0x8))[0x38] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0xe0) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xe4);
  }
  if (*(undefined * PTR32 *)(this + 0x70) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x70),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0xe8) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xec);
  }
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x78),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0x128) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 300);
  }
  if (*(undefined * PTR32 *)(this + 0x80) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x80),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0x168) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x16c);
  }
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x88),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0x1a8) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1ac);
  }
  if (*(undefined * PTR32 *)(this + 0x90) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x90),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x7c);
  }
  if (*(undefined * PTR32 *)(this + 0x10) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x10),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x84);
  }
  if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x18),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x8c);
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x20),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x94);
  }
  if (*(undefined * PTR32 *)(this + 0x28) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x28),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x9c);
  }
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x30),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0xa0) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xa4);
  }
  if (*(undefined * PTR32 *)(this + 0x38) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x38),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar4 = 0;
LAB_007bf41c: ;
    F_0058d980(*((undefined4 *)GEN_TOP((*(int *)(this + 0x158) + 0x88))),6);
    pvVar2 = *(undefined * PTR32 *)(this + 0x158);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x74);
    if (iVar4 != 6) goto LAB_007bf41c;
    F_0058d980(*((undefined4 *)GEN_TOP((*(int *)(this + 0x158) + 0x88))),7);
    pvVar2 = *(undefined * PTR32 *)(this + 0x158);
  }
  if (pvVar2 != (undefined *)0x0) {
    F_0059caa0(pvVar2,iVar4);
  }
  if ((*(byte *)(param_1 + 0xb0) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xb4);
  }
  if (*(undefined * PTR32 *)(this + 0x40) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x40),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0xb8) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xbc);
  }
  if (*(undefined * PTR32 *)(this + 0x48) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x48),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0xc0) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xc4);
  }
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x50),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 200) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xcc);
  }
  if (*(undefined * PTR32 *)(this + 0x58) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x58),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0xd0) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xd4);
  }
  if (*(undefined * PTR32 *)(this + 0x60) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x60),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0xd8) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xdc);
  }
  if (*(undefined * PTR32 *)(this + 0x68) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x68),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(param_1 + 0xa8) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xac);
    if (iVar4 == 6) {
      F_0058d980(*((undefined4 *)GEN_TOP((*(int *)(this + 0x164) + 0x88))),7);
      pvVar2 = *(undefined * PTR32 *)(this + 0x164);
      goto joined_r0x007bf7a4;
    }
  }
  F_0058d980(*((undefined4 *)GEN_TOP((*(int *)(this + 0x164) + 0x88))),6);
  pvVar2 = *(undefined * PTR32 *)(this + 0x164);
joined_r0x007bf7a4: ;
  if (pvVar2 != (undefined *)0x0) {
    F_0059caa0(pvVar2,iVar4);
  }
  ((int *)(gen_frame + 0x8))[0x31] = 0x24;
  ((int *)(gen_frame + 0x8))[5] = 0x24;
  iVar4 = 0;
  ((int *)(gen_frame + 0x8))[0x1c] = 0x12;
  ((int *)(gen_frame + 0x8))[0x1d] = 0x13;
  ((int *)(gen_frame + 0x8))[0x1e] = 0x14;
  ((int *)(gen_frame + 0x8))[0x1f] = 0x15;
  ((int *)(gen_frame + 0x8))[0x20] = 0x16;
  ((int *)(gen_frame + 0x8))[0x21] = 0x17;
  ((int *)(gen_frame + 0x8))[0x22] = 2;
  ((int *)(gen_frame + 0x8))[0x23] = 0x18;
  ((int *)(gen_frame + 0x8))[0x24] = 0x19;
  ((int *)(gen_frame + 0x8))[0x25] = 0x1a;
  ((int *)(gen_frame + 0x8))[0x26] = 0x1b;
  ((int *)(gen_frame + 0x8))[0x27] = 0x1c;
  ((int *)(gen_frame + 0x8))[0x28] = 0x1d;
  ((int *)(gen_frame + 0x8))[0x29] = 3;
  ((int *)(gen_frame + 0x8))[0x2a] = 0x1e;
  ((int *)(gen_frame + 0x8))[0x2b] = 0x1f;
  ((int *)(gen_frame + 0x8))[0x2c] = 0x20;
  ((int *)(gen_frame + 0x8))[0x2d] = 0x21;
  ((int *)(gen_frame + 0x8))[0x2e] = 0x22;
  ((int *)(gen_frame + 0x8))[0x2f] = 0x23;
  ((int *)(gen_frame + 0x8))[0x30] = 4;
  ((int *)(gen_frame + 0x8))[0x32] = 0x25;
  ((int *)(gen_frame + 0x8))[0x33] = 0x26;
  ((int *)(gen_frame + 0x8))[0x34] = 0x27;
  ((int *)(gen_frame + 0x8))[0x35] = 0x28;
  ((int *)(gen_frame + 0x8))[0x36] = 0x29;
  ((int *)(gen_frame + 0x8))[0x37] = 5;
  ((int *)(gen_frame + 0x8))[0] = 0x1f;
  ((int *)(gen_frame + 0x8))[1] = 0x20;
  ((int *)(gen_frame + 0x8))[2] = 0x21;
  ((int *)(gen_frame + 0x8))[3] = 0x22;
  ((int *)(gen_frame + 0x8))[4] = 0x23;
  ((int *)(gen_frame + 0x8))[6] = 0x1e;
  ((int *)(gen_frame + 0x8))[7] = 0x27;
  ((int *)(gen_frame + 0x8))[8] = 0x28;
  ((int *)(gen_frame + 0x8))[9] = 0x29;
  ((int *)(gen_frame + 0x8))[10] = 0x2a;
  ((int *)(gen_frame + 0x8))[0xb] = 0x2b;
  ((int *)(gen_frame + 0x8))[0xc] = 0x2c;
  ((int *)(gen_frame + 0x8))[0xd] = 0x26;
  ((int *)(gen_frame + 0x8))[0xe] = 0x2f;
  ((int *)(gen_frame + 0x8))[0xf] = 0x30;
  ((int *)(gen_frame + 0x8))[0x10] = 0x31;
  ((int *)(gen_frame + 0x8))[0x11] = 0x32;
  ((int *)(gen_frame + 0x8))[0x12] = 0x33;
  ((int *)(gen_frame + 0x8))[0x13] = 0x34;
  ((int *)(gen_frame + 0x8))[0x14] = 0x2e;
  ((int *)(gen_frame + 0x8))[0x15] = 0x37;
  ((int *)(gen_frame + 0x8))[0x16] = 0x38;
  ((int *)(gen_frame + 0x8))[0x17] = 0x39;
  ((int *)(gen_frame + 0x8))[0x18] = 0x3a;
  ((int *)(gen_frame + 0x8))[0x19] = 0x3b;
  ((int *)(gen_frame + 0x8))[0x1a] = 0x3c;
  ((int *)(gen_frame + 0x8))[0x1b] = 0x36;
  (*(int *)(gen_frame + 0x4)) = 0;
  do {
    iVar7 = 6;
    iVar8 = (*(int *)(gen_frame + 0x4));
    do {
      if ((*((byte *)GEN_TOP((param_1 + *(int *)((int)((int *)(gen_frame + 0x8)) + iVar8) * 8))) & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *((int *)GEN_TOP((param_1 + *(int *)((int)((int *)(gen_frame + 0x8)) + iVar8) * 8 + 4)));
      }
      if (*((undefined * PTR32 *)GEN_TOP((this + *(int *)((int)((int *)(gen_frame + 0x8)) + iVar8 + 0x70) * 8 + 8))) != (undefined *)0x0) {
        F_0059dde0(*((undefined * PTR32 *)GEN_TOP((this + *(int *)((int)((int *)(gen_frame + 0x8)) + iVar8 + 0x70) * 8 + 8))),
                     (uint)(iVar6 != 0));
      }
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar8 = *(int *)((int)((int *)(gen_frame + 0x8)) + iVar4 + 0x18);
    iVar7 = 0;
    if (((*(byte *)(param_1 + iVar8 * 8) & 0xf) == 0) ||
       (iVar7 = *(int *)(param_1 + iVar8 * 8 + 4), iVar7 != 6)) {
      iVar8 = *(int *)((int)((int *)(gen_frame + 0x8)) + iVar4 + 0x88);
      F_0058d980(*((undefined4 *)GEN_TOP((*(int *)(this + iVar8 * 0xc + 0x158) + 0x88))),6);
      pvVar2 = *(undefined * PTR32 *)(this + iVar8 * 0xc + 0x158);
    }
    else {
      iVar8 = *(int *)((int)((int *)(gen_frame + 0x8)) + iVar4 + 0x88);
      F_0058d980(*((undefined4 *)GEN_TOP((*(int *)(this + iVar8 * 0xc + 0x158) + 0x88))),7);
      pvVar2 = *(undefined * PTR32 *)(this + iVar8 * 0xc + 0x158);
    }
    if (pvVar2 != (undefined *)0x0) {
      F_0059caa0(pvVar2,iVar7);
    }
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 0x1c;
    iVar4 = iVar4 + 0x1c;
  } while (iVar4 < 0x70);
  gen_piece_set(&(*(int *)(gen_frame + 0x4)), 1, 3, (unsigned long long)((uint3)((uint)(*(int *)(gen_frame + 0x4)) >> 8)));
  if (*(int *)(this + 8) == 0) {
    (*(int *)(gen_frame + 0x4)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3) << 8;
  }
  else {
    (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),*((undefined1 *)GEN_TOP((*(int *)(this + 8) + 0x88))));
  }
  pCVar9 = this + 0x10;
  iVar4 = 6;
  do {
    piVar3 = *(int * PTR32 *)pCVar9;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
    }
    pCVar9 = pCVar9 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pCVar9 = this + 0x40;
  iVar4 = 6;
  do {
    piVar3 = *(int * PTR32 *)pCVar9;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
    }
    pCVar9 = pCVar9 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar3 = *(int * PTR32 *)(this + 0x158);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
  }
  piVar3 = *(int * PTR32 *)(this + 0x164);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
  }
  iVar4 = *(int *)(this + 0x70);
  uVar5 = 0;
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + 0x88);
    uVar5 = CONCAT31((int3)((uint)iVar4 >> 8),cVar1);
    (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),cVar1);
    if (cVar1 != '\0') {
      pCVar9 = this + 0x78;
      iVar4 = 4;
      do {
        piVar3 = *(int * PTR32 *)pCVar9;
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
        }
        pCVar9 = pCVar9 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (*(int *)(this + 0x78) == 0) {
        (*(int *)(gen_frame + 0x4)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3) << 8;
      }
      else {
        (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),*((undefined1 *)GEN_TOP((*(int *)(this + 0x78) + 0x88))));
      }
      pCVar9 = this + 0x98;
      iVar4 = 6;
      do {
        piVar3 = *(int * PTR32 *)pCVar9;
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
        }
        pCVar9 = pCVar9 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      piVar3 = *(int * PTR32 *)(this + 0x170);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
      }
      if (*(int *)(this + 0x80) == 0) {
        (*(int *)(gen_frame + 0x4)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3) << 8;
      }
      else {
        (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),*((undefined1 *)GEN_TOP((*(int *)(this + 0x80) + 0x88))));
      }
      pCVar9 = this + 200;
      iVar4 = 6;
      do {
        piVar3 = *(int * PTR32 *)pCVar9;
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
        }
        pCVar9 = pCVar9 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      piVar3 = *(int * PTR32 *)(this + 0x17c);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
      }
      if (*(int *)(this + 0x88) == 0) {
        (*(int *)(gen_frame + 0x4)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3) << 8;
      }
      else {
        (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),*((undefined1 *)GEN_TOP((*(int *)(this + 0x88) + 0x88))));
      }
      pCVar9 = this + 0xf8;
      iVar4 = 6;
      do {
        piVar3 = *(int * PTR32 *)pCVar9;
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
        }
        pCVar9 = pCVar9 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      piVar3 = *(int * PTR32 *)(this + 0x188);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
      }
      uVar5 = *(uint *)(this + 0x90);
      if (uVar5 == 0) {
        (*(int *)(gen_frame + 0x4)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3) << 8;
      }
      else {
        (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),*(undefined1 *)(uVar5 + 0x88));
      }
      pCVar9 = this + 0x128;
      iVar4 = 6;
      do {
        piVar3 = *(int * PTR32 *)pCVar9;
        if (piVar3 != (int *)0x0) {
          uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
        }
        pCVar9 = pCVar9 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      piVar3 = *(int * PTR32 *)(this + 0x194);
      if (piVar3 != (int *)0x0) {
        uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(int *)(gen_frame + 0x4)));
      }
      F_00c47745(((int *)(gen_frame + 0x8))[0x38] ^ (uint)(uint)(gen_frame + 0xec));
      return uVar5;
    }
  }
  pCVar9 = this + 0x78;
  iVar4 = 0x1c;
  do {
    piVar3 = *(int * PTR32 *)pCVar9;
    if (piVar3 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0);
    }
    pCVar9 = pCVar9 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pCVar9 = this + 0x170;
  iVar4 = 4;
  do {
    piVar3 = *(int * PTR32 *)pCVar9;
    if (piVar3 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0);
    }
    pCVar9 = pCVar9 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  F_00c47745(((int *)(gen_frame + 0x8))[0x38] ^ (uint)(uint)(gen_frame + 0xec));
  return uVar5;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCircle::vf5 */
uint F_007bfb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bfb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + param_1 * 0xc + 0x158) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + param_1 * 0xc + 0x158) + 0x88))),param_2,param_3,1
                        );
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCircle::vf4 */
uint F_007bfb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bfb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * pCVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar5 = 0;
    pCVar4 = this;
    do {
      pCVar4 = pCVar4 + 8;
      bVar2 = F_007bb670(pCVar4,*(undefined4 *)(this + 4),uVar1);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        return uVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x2a);
  }
  else {
    uVar3 = param_2 - 1;
    if (uVar3 == 0) {
      iVar5 = 0;
      pCVar4 = this + 0x158;
      while( true ) {
        bVar2 = F_007bba30(pCVar4,*(undefined4 *)(this + 4),uVar1,param_1);
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) break;
        iVar5 = iVar5 + 1;
        pCVar4 = pCVar4 + 0xc;
        if (5 < iVar5) {
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCharacter::vf3 */
uint F_007bfbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7bfbd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((*(byte *)((*(int *)&gen_args[1]) + 0x68) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x6c);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0x70) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x74);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0x80) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x84);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0x88) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((*(int *)&gen_args[1]) + 0x8c);
  }
  (*(undefined * PTR32 *)&gen_args[0])[0x60] = (undefined1)0x1;
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != (undefined *)0x0) {
    F_0059dbe0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x58))),uVar3,1);
  }
  (*(undefined * PTR32 *)&gen_args[0])[0x60] = (undefined1)0x0;
  if ((*(byte *)((*(int *)&gen_args[1]) + 0x90) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x94);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x20))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x20))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0x98) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x9c);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x28))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x28))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xa0) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xa4);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xa8) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xac);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xb0) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xb4);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xb8) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xbc);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x48))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x48))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xc0) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xc4);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))),(uint)(iVar2 != 0));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 200) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((*(int *)&gen_args[1]) + 0xcc);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100))) != (undefined *)0x0) {
    F_0059caa0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100))),uVar3);
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xd0) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xd4);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x70))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x70))),(uint)(iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78)))));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xd0) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xd4);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x7c))),(uint)(iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x84)))));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xd0) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xd4);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))),(uint)(iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90)))));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xd8) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xdc);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x94))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x94))),(uint)(iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x9c)))));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xd8) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xdc);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa0))),(uint)(iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa8)))));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xd8) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xdc);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))),(uint)(iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4)))));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xe0) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xe4);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))),(uint)(iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc0)))));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xe0) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xe4);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc4))),(uint)(iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xcc)))));
  }
  if ((*(byte *)((*(int *)&gen_args[1]) + 0xe0) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0xe4);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) != (undefined *)0x0) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xd0))),(uint)(iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xd8)))));
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == 0) {
    (*(int *)&gen_args[1]) = (uint)GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3) << 8;
  }
  else {
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0x88))));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x58)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(*(int *)&gen_args[1]));
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x28))) == 0) {
    (*(int *)&gen_args[1]) = (uint)GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3) << 8;
  }
  else {
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + 0x88))));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(*(int *)&gen_args[1]));
  }
  iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (iVar2 == 0) {
    (*(int *)&gen_args[1]) = (uint)GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3) << 8;
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(iVar2 + 0x88));
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),*(undefined1 *)(iVar2 + 0x88));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
  if (piVar1 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(*(int *)&gen_args[1]));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  if (piVar1 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(*(int *)&gen_args[1]));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)));
  if (piVar1 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(*(int *)&gen_args[1]));
  }
  return uVar4;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCharacter::vf4 */
uint F_007bfff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7bfff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  int iVar4;
  undefined * pCVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  if (param_2 == 0) {
    iVar4 = 0;
    pCVar5 = this + 0x70;
    do {
      bVar2 = F_007bb7b0(pCVar5,*(undefined4 *)(this + 4),uVar1);
      if (bVar2 != 0) {
        return CONCAT31(extraout_var_01,bVar2);
      }
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 0xc;
    } while (iVar4 < 9);
    iVar4 = 0;
    pCVar5 = this;
    do {
      pCVar5 = pCVar5 + 8;
      bVar2 = F_007bb670(pCVar5,*(undefined4 *)(this + 4),uVar1);
      uVar3 = CONCAT31(extraout_var_02,bVar2);
      if (bVar2 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
  }
  else if (param_2 == 1) {
    iVar4 = 0;
    pCVar5 = this + 100;
    while( true ) {
      bVar2 = F_007bba30(pCVar5,*(undefined4 *)(this + 4),uVar1,param_1);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) break;
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 0xc;
      if (0 < iVar4) {
        return uVar3;
      }
    }
  }
  else {
    uVar3 = param_2 - 2;
    if (uVar3 == 0) {
      iVar4 = 0;
      pCVar5 = this + 0x58;
      while( true ) {
        bVar2 = F_007bb8f0(pCVar5,*(undefined4 *)(this + 4),uVar1);
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) break;
        iVar4 = iVar4 + 1;
        pCVar5 = pCVar5 + 0xc;
        if (0 < iVar4) {
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCharacter::vf5 */
uint F_007c00c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c00c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + param_1 * 0xc + 100) != 0) {
    uVar1 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + param_1 * 0xc + 100) + 0x88))),param_2,param_3,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CMouse::vf3 */
uint F_007c00f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c00f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x6c);
  }
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    uVar1 = F_0059dde0(*(undefined * PTR32 *)(this + 8),(uint)(uVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x74);
  }
  if (*(undefined * PTR32 *)(this + 0x10) != (undefined *)0x0) {
    uVar1 = F_0059dde0(*(undefined * PTR32 *)(this + 0x10),(uint)(iVar2 != 0));
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CMouse::vf5 */
unsigned int F_007c0150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c0150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CMouse::vf4 */
uint F_007c0160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c0160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pCVar3;
  int iVar4;
  int iVar5;
  undefined * pCVar6;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_2 == 0) {
    this_00 = *(undefined * PTR32 *)(this + 4);
    iVar4 = 0;
    pCVar3 = this;
    while( true ) {
      pCVar6 = pCVar3 + 8;
      this = *(undefined * PTR32 *)pCVar6;
      if (this == (undefined *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(this + 0x70);
      }
      if ((iVar5 == *(int *)(param_3 + 4)) && (this != (undefined *)0x0)) break;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar6;
      if (1 < iVar4) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return (uint)this;
      }
    }
    if (*(uint *)(pCVar3 + 0xc) != 0xffffffff) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar2 = *(uint *)(pCVar3 + 0xc);
      (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      bVar1 = *(byte *)(*(uint *)pCVar6 + 0x88);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
      F_005a9110(this_00,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_01 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 3;
      do {
        this_01 = this_01 + -2;
        this = (undefined *)F_005a2670(this_01);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)this;
}

/* ref: FUN_007c0250 */
uint F_007c0250(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cfa7c));
  *(undefined2 *)((int)this + 0x180) = 0;
  iVar2 = (int)this + 0x184;
  local_8 = 0xd;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x61c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x658);
  iVar2 = 0xd;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)((int)this + 0x754) = 0;
  *(undefined4 *)((int)this + 0x758) = 0;
  *(undefined4 *)((int)this + 0x75c) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0x5f | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_00c48350((undefined *)((int)this + 0x620),0,0x38);
  F_00c48350((undefined *)((int)this + 0x71c),0,0x38);
  *(undefined4 *)((int)this + 0x700) = 0;
  *(undefined4 *)((int)this + 0x704) = 0;
  *(undefined4 *)((int)this + 0x708) = 0;
  *(undefined2 *)((int)this + 0x70c) = 0;
  *(undefined4 *)((int)this + 0x70e) = 0;
  *(undefined4 *)((int)this + 0x712) = 0;
  *(undefined4 *)((int)this + 0x716) = 0;
  *(undefined2 *)((int)this + 0x71a) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigPadCustomize::vf41 */
byte F_007c0380(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigPadCustomize",0,6);
  return bVar1;
}

/* ref: FUN_007c03b0 */
uint F_007c03b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c03b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  uint * this_00;
  int * piVar1;
  uint uVar2;
  uint * puVar3;
  byte * pbVar4;
  undefined4 uVar5;
  uint uVar6;
  uint * in_ecx;
  int iVar7;
  int iVar8;
  
  piVar1 = (int *)F_00404270();
  this_00 = (uint *)((int)this + param_1 * 0xc + 0x658);
  F_0090b700(this_00);
  *this_00 = param_3;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_3 * 4,0x10);
  uVar6 = *this_00;
  this_00[1] = uVar2;
  uVar2 = -(uint)((int)((ulonglong)uVar6 * 0x54 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x54);
  puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4,0,piVar1,0);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar3 = uVar6;
    puVar3 = puVar3 + 1;
    in_ecx = puVar3;
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      F_0042b630(in_ecx);
      in_ecx = in_ecx + 0x15;
    }
  }
  iVar7 = 0;
  this_00[2] = (uint)puVar3;
  if (0 < (int)param_3) {
    pbVar4 = (byte *)(param_4 + 0x80 + param_2 * 8);
    iVar8 = 0;
    do {
      if ((*pbVar4 & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar4 + 4);
      }
      F_0042e430((undefined *)(this_00[2] + iVar8),uVar5);
      uVar6 = F_0042a990(this_00[2] + iVar8);
      pbVar4 = pbVar4 + 8;
      *(uint *)(this_00[1] + iVar7 * 4) = uVar6;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x54;
    } while (iVar7 < (int)param_3);
  }
  uVar6 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x620) + 0x88))),param_3,
                       this_00[1],1);
  return uVar6;
}

/* ref: FUN_007c0500 */
unsigned int F_007c0500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c0500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  char * pcVar1;
  
  if (*(char *)((int)this + 0x181) == '\0') {
    if ((char)param_2 == '\0') {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)F_0042a990(param_1 * 0x54 + 0x184 + (int)this);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x61c),pcVar1);
  }
  if (((*(char *)(param_1 + 0x700 + (int)this) == '\0') &&
      (*(char *)(param_1 + 0x70e + (int)this) == '\0')) &&
     (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x71c), this_00 != (undefined *)0x0)) {
    if ((char)param_2 != '\0') {
      F_0059d670(this_00,*(undefined4 *)(&REFG(undefined, 0x10c31d0) + param_1 * 8));
      return 0;
    }
    F_0059d670(this_00,(&REFG(undefined4, 0x10c31d4))[param_1 * 2]);
  }
  return 0;
}

/* ref: Client::UI2::AddonConfigPadCustomize::vf46 */
byte F_007c0590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c0590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined * pAVar3;
  int iVar4;
  
  if ((param_2[8] & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  this[0x180] = (undefined1)(iVar1 != 0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x754) + 0x28))))(*(int * PTR32 *)(this + 0x754),(uint)(iVar1 != 0));
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  pAVar3 = this + 0x620;
  iVar4 = 0;
  do {
    if (*(undefined * PTR32 *)pAVar3 != (undefined *)0x0) {
      if ((param_2[(iVar4 + iVar1) * 8 + 0x80] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *((undefined4 *)GEN_TOP((param_2 + (iVar4 + iVar1) * 8 + 0x84)));
      }
      F_0059caa0(*(undefined * PTR32 *)pAVar3,uVar2);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(int *)pAVar3 + 0x88) + 0x70))))(*(int * PTR32 *)(*(int *)pAVar3 + 0x88));
      F_00581b80(*(undefined * PTR32 *)(*(int *)pAVar3 + 0x88));
    }
    iVar4 = iVar4 + 1;
    pAVar3 = pAVar3 + 4;
  } while (iVar4 < 0xe);
  return 1;
}

/* ref: FUN_007c0640 */
uint F_007c0640(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xe;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007c0670 */
uint F_007c0670(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007c06a0 */
uint F_007c06a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c06a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigPadCustomize::vf25 */
uint F_007c06d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c06d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007c0700 */
uint F_007c0700(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_005903f0(this);
  uVar1 = REFG(float, 0x1087f04);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0xa0;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x810;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cfb7c));
  *(undefined4 *)((int)this + 0x184) = uVar1;
  *(undefined4 *)((int)this + 0x188) = uVar1;
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  *(undefined2 *)((int)this + 400) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonLogo::vf38 */
uint F_007c07b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c07b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  F_005a2370(param_1,param_2);
  uVar2 = param_1[0x60];
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    iVar1 = param_1[99];
    if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 4)) {
      uVar2 = F_0055a2d0(param_1[0x66]);
      if ((char)uVar2 != '\0') {
        param_1[0x60] = 1;
        return uVar2;
      }
    }
    else {
      uVar2 = F_0055a2d0(param_1[0x67]);
      if ((char)uVar2 != '\0') {
        param_1[0x60] = 2;
        return uVar2;
      }
    }
    break;
  case 1: ;
    uVar2 = F_0055a2d0(param_1[0x66]);
    if (((char)uVar2 == '\0') && (uVar2 = F_0055a2d0(param_1[0x67]), (char)uVar2 == '\x01')) {
      param_1[0x60] = 2;
      return uVar2;
    }
    break;
  case 2: ;
    if ((param_1[0x65] != 0) &&
       (uVar2 = F_00559cf0(param_1[0x65]), (short)uVar2 == (short)param_1[100])) {
      param_1[0x60] = 3;
      return uVar2;
    }
    break;
  case 3: ;
    param_1[0x60] = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a9110(param_1,1,&(*(undefined4 *)(gen_frame + 0x4)));
    ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,0,0);
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonLogo::vf41 */
byte F_007c08e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c08e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,&REFG(undefined, 0x10c3290),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonLogo::vf44 */
uint F_007c08f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c08f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  code * pcVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined * pvVar7;
  float10 fVar8;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x54);
  *(undefined4 *)(this + 0xa0) = 0;
  uVar4 = (*pcVar1)(this,0);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
  *(float *)(this + 0x188) = ((float)GEN_TOF(((float10)(uVar4 & 0xffff) / (float10)(uVar5 & 0xffff))));
  if ((*param_2 & 0xf) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
  }
  *(int *)(this + 0x18c) = iVar6;
  if (iVar6 == 1) {
    F_0059d6a0(this,0x65,1,0);
    pvVar7 = (undefined *)F_0055e2f0(this,2);
    *(undefined * PTR32 *)(this + 0x194) = pvVar7;
    F_0059d640(pvVar7,0x65);
    *(undefined2 *)(this + 400) = 0x66;
    *(undefined4 *)(this + 0x180) = 1;
    uVar4 = F_0055e2f0(this,4);
    *(uint *)(this + 0x19c) = uVar4;
    uVar4 = F_0055e2f0(this,3);
    *(uint *)(this + 0x198) = uVar4;
    uVar3 = F_0055a020(uVar4);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
    fVar8 = (float10)uVar3 / (float10)(uVar4 & 0xffff);
  }
  else if (iVar6 == 2) {
    F_0059d6a0(this,0x66,1,0);
    pvVar7 = (undefined *)F_0055e2f0(this,5);
    *(undefined * PTR32 *)(this + 0x194) = pvVar7;
    F_0059d640(pvVar7,0x65);
    *(undefined2 *)(this + 400) = 0x66;
    *(undefined4 *)(this + 0x180) = 1;
    uVar4 = F_0055e2f0(this,6);
    *(uint *)(this + 0x19c) = uVar4;
    uVar4 = F_0055e2f0(this,7);
    *(uint *)(this + 0x198) = uVar4;
    uVar3 = F_0055a020(uVar4);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
    fVar8 = (float10)uVar3 / (float10)(uVar4 & 0xffff);
  }
  else {
    if (iVar6 != 4) {
      F_0059d6a0(this,0x11,1,0);
      pvVar7 = (undefined *)F_0055e2f0(this,0xd);
      *(undefined * PTR32 *)(this + 0x194) = pvVar7;
      F_0059d640(pvVar7,0x65);
      *(undefined2 *)(this + 400) = 0x66;
      *(undefined4 *)(this + 0x180) = 2;
      goto LAB_007c0b1c;
    }
    F_0059d6a0(this,0x67,1,0);
    pvVar7 = (undefined *)F_0055e2f0(this,8);
    *(undefined * PTR32 *)(this + 0x194) = pvVar7;
    F_0059d640(pvVar7,0x65);
    *(undefined2 *)(this + 400) = 0x66;
    *(undefined4 *)(this + 0x180) = 1;
    uVar4 = F_0055e2f0(this,0xc);
    *(uint *)(this + 0x19c) = uVar4;
    uVar4 = F_0055e2f0(this,9);
    *(uint *)(this + 0x198) = uVar4;
    uVar3 = F_0055a020(uVar4);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
    fVar8 = (float10)uVar3 / (float10)(uVar4 & 0xffff);
  }
  *(float *)(this + 0x184) = (float)fVar8;
LAB_007c0b1c: ;
  uVar4 = F_0055dcb0();
  uVar2 = *(undefined4 *)(uVar4 + 0x238);
  uVar4 = F_0055dcb0();
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,*(undefined4 *)(uVar4 + 0x234),uVar2);
  return uVar4;
}

/* ref: Client::UI2::AddonLogo::vf54 */
unsigned int F_007c0b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c0b50u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  uint local_10;
  float local_8;
  
  if (param_1[0x60] == 1) {
    fVar3 = (float10)(int)param_3;
    if ((int)param_3 < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1,0);
    local_8 = ((float)GEN_TOF(((float10)(float)fVar3 / (float10)(uVar2 & 0xffff))));
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,0);
    if (param_2 < ((int)TRUNC(((float10)GEN_TOD(((int)TRUNC((float10)(uVar2 & 0xffff) * (float10)local_8) &
                                       0xffff))) * ((float10)GEN_TOD(gen_bits2f(param_1[0x61])))) & 0xffffU)) {
      fVar3 = (float10)(int)param_2;
      if ((int)param_2 < 0) {
        fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar1 = F_0055a020(param_1[0x66]);
      local_8 = (float)((float10)(float)fVar3 / (float10)uVar1);
    }
    F_0056b4b0(param_1,local_8);
    return 0;
  }
  fVar3 = (float10)(int)param_2;
  if ((int)param_2 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  local_10 = (uint)(longlong)TRUNC((float)fVar3 * gen_bits2f(param_1[0x62]));
  if (param_3 < local_10) {
    fVar3 = (float10)(int)param_3;
    if ((int)param_3 < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1,0);
    fVar3 = (float10)(float)fVar3 / (float10)(uVar2 & 0xffff);
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,0);
    fVar3 = (float10)(float)fVar3 / (float10)(uVar2 & 0xffff);
  }
  F_0056b4b0(param_1,(float)fVar3);
  return 0;
}

/* ref: FUN_007c0cf0 */
uint F_007c0cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x84;
  uVar1 = REFG(float, 0x1087f04);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x850;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cfc7c));
  *(undefined4 *)((int)this + 0x180) = uVar1;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x77 ^
       *(byte *)((int)this + 0xf9) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonTitleLogo::vf37 */
uint F_007c0d50(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_005b0510((undefined *)this);
  *(undefined4 *)(this + 0x184) = 0;
  return uVar1;
}

/* ref: Client::UI2::AddonTitleLogo::vf38 */
uint F_007c0d70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c0d70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_005a2370(param_1,param_2);
  if (param_1[0x61] == 1) {
    uVar2 = F_00559cd0(param_1[0x24]);
    uVar1 = F_00567ff0((undefined *)param_1[0x24],0x66);
    uVar1 = uVar1 & 0xffff;
    if (uVar1 <= uVar2) {
      param_1[0x61] = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 3;
      F_005a9110(param_1,1,&(*(undefined4 *)(gen_frame + 0x4)));
      ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,0,0);
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonTitleLogo::vf41 */
byte F_007c0df0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Title_Logo",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTitleLogo::vf46 */
byte F_007c0e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c0e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 4);
    }
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(this + 0x184) = 1;
      F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x66);
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = 0;
      this_00 = (undefined *)F_0055dcb0();
      F_0059b300(this_00,uVar2,uVar3,uVar4);
    }
  }
  return 1;
}

/* ref: FUN_007c0e60 */
unsigned int F_007c0e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c0e60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  if ((float10)*(float *)(param_1 + 0x180) * (float10)(ushort)param_2 <= (float10)(param_3 & 0xffff)
     ) {
    F_0056b4b0(param_1,(float)((float10)(ushort)param_2 / (float10)*(double *)&REFG(undefined, 0x10cfd80)));
    return 0;
  }
  F_0056b4b0(param_1,((float)GEN_TOF(((float10)(param_3 & 0xffff) / (float10)*(double *)&REFG(undefined, 0x10cfd78)))));
  return 0;
}

/* ref: FUN_007c0ec0 */
uint F_007c0ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x50;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cfd8c));
  return (uint)this;
}

/* ref: Client::UI2::AddonTitleMenu::vf41 */
byte F_007c0f10(unsigned int gen_a0)
{
  GEN_ENTER(0x7c0f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Title_Menu",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTitleMenu::vf2 */
unsigned int F_007c0f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c0f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  if (((((byte)this[0xf9] & 1) != 0) && (uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar2 != 5))
     && (uVar2 != 4)) {
    if ((short)param_1 == 0xf) {
      bVar1 = F_00a34970(*(undefined * PTR32 *)(param_4 + 8),0x165);
      if (bVar1 != 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 3;
        (*(undefined4 *)(gen_frame + 0x8)) = 1;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
        return 0;
      }
    }
    else if ((short)param_1 == 0x17) {
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x180) + 100)))) {
        (*(undefined4 *)(gen_frame + 0x4)) = 3;
        (*(undefined4 *)(gen_frame + 0x8)) = 1;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      }
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x184) + 100)))) {
        (*(undefined4 *)(gen_frame + 0x4)) = 3;
        (*(undefined4 *)(gen_frame + 0x8)) = 0xe;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      }
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x188) + 100)))) {
        (*(undefined4 *)(gen_frame + 0x4)) = 3;
        (*(undefined4 *)(gen_frame + 0x8)) = 0xc;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      }
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x18c) + 100)))) {
        (*(undefined4 *)(gen_frame + 0x4)) = 3;
        (*(undefined4 *)(gen_frame + 0x8)) = 0xb;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      }
    }
  }
  return 0;
}

/* ref: FUN_007c1070 */
uint F_007c1070(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x850;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cfe8c));
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x77 ^
       *(byte *)((int)this + 0xf9) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonTitleRevision::vf41 */
byte F_007c10c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c10c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Title_Revision",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTitleRevision::vf44 */
uint F_007c10d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c10d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  this_00 = (undefined *)F_0055e340(this,2);
  if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
  }
  F_00584110(this_00,uVar2);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonTitleRevision::vf46 */
byte F_007c1110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 4);
    }
    if ((uVar1 & 1) != 0) {
      F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x66);
    }
  }
  return 1;
}

/* ref: FUN_007c1150 */
uint F_007c1150(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x84;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x50;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cff8c));
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x77 ^
       *(byte *)((int)this + 0xf9) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonTitleRights::vf41 */
byte F_007c11a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c11a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Title_Rights",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTitleRights::vf46 */
byte F_007c11b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c11b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 4);
    }
    if ((uVar1 & 1) != 0) {
      F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x66);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonTitleRights::vf44 */
uint F_007c11f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c11f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: FUN_007c1200 */
uint F_007c1200(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined1 *)((int)this + 0x194) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d008c));
  return (uint)this;
}

/* ref: Client::UI2::AddonTitle::vf37 */
uint F_007c1260(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 400) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x10))))(*(int * PTR32 *)(this + 400),0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonTitle::vf44 */
uint F_007c1290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_TitleLogo");
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_TitleMenu");
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_TitleRevision");
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_TitleRights");
  *(uint *)(this + 0x18c) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonTitle::vf46 */
byte F_007c1300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0xb8))))(*(int * PTR32 *)(this + 0x180),param_1,param_2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0xb8))))(*(int * PTR32 *)(this + 0x184),param_1,param_2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0xb8))))(*(int * PTR32 *)(this + 0x188),param_1,param_2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0xb8))))(*(int * PTR32 *)(this + 0x18c),param_1,param_2);
  }
  return 1;
}

/* ref: Client::UI2::AddonTitle::vf48 */
byte F_007c1370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1370u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(char *)(in_ecx + 0x194) != '\0';
}

/* ref: FUN_007c1380 */
uint F_007c1380(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x800;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d018c));
  return (uint)this;
}

/* ref: Client::UI2::AddonWarning::vf41 */
byte F_007c13f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c13f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Warning",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonWarning::vf45 */
uint F_007c1400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7c1400u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  this[0xf9] = (undefined1)((byte)this[0xf9] | 0x40);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonWarning::vf46 */
byte F_007c1420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (1 < param_1) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    if ((param_2[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,uVar1);
    ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,uVar2);
  }
  return 1;
}

/* ref: FUN_007c1470 */
uint F_007c1470(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d028c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelect::vf37 */
uint F_007c14e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c14e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  F_005b0510((undefined *)this);
  uVar3 = 0;
  uVar2 = 0xc;
  this[0x19c] = (undefined1)0x0;
  this_00 = (undefined *)F_0055dcb0();
  uVar1 = F_00586850(this_00,uVar2,uVar3,this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelect::vf44 */
uint F_007c1510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_CharaSelectWorldServer");
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_CharaSelectListMenu");
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_CharaSelectDetail");
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_CharaSelectInfo");
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_CharaSelectNameInput");
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_CharaSelectLegacy");
  *(uint *)(this + 0x194) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14),"_CharaSelectReturn");
  *(uint *)(this + 0x198) = uVar1;
  *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x1d0))) = this;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x1d4))) = *(undefined4 *)(this + 0x18c);
  uVar5 = 0;
  uVar4 = 0;
  *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x1a4))) = this;
  uVar3 = 0;
  *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x1a8))) = this;
  uVar2 = 0xc;
  this_00 = (undefined *)F_0055dcb0();
  uVar1 = F_0056a3d0(this_00,uVar2,uVar3,this,uVar4,uVar5);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelect::vf38 */
unsigned int F_007c1620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c1620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((((this[0x19c] == (undefined1)0x0) && (*(int *)(this + 0x180) != 0)) &&
      (*(int *)(this + 0x184) != 0)) &&
     (((*(int *)(this + 0x188) != 0 && ((*((byte *)GEN_TOP((*(int *)(this + 0x180) + 0xf9))) & 1) != 0)) &&
      (((*((byte *)GEN_TOP((*(int *)(this + 0x184) + 0xf9))) & 1) != 0 &&
       ((*((byte *)GEN_TOP((*(int *)(this + 0x188) + 0xf9))) & 1) != 0)))))) {
    this[0x19c] = (undefined1)0x1;
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaSelect::vf48 */
byte F_007c1670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1670u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(char *)(in_ecx + 0x19c) != '\0';
}

/* ref: Client::UI2::AddonCharaSelect::vf46 */
byte F_007c1680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 400) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0xb8))))(*(int * PTR32 *)(this + 400),param_1,param_2);
    }
    if (*(int *)(this + 0x184) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0xb8))))(*(int * PTR32 *)(this + 0x184),param_1,param_2);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonCharaSelect::vf2 */
unsigned int F_007c16e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c16e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((short)param_1 == 0xc) {
    uVar1 = F_0055dcb0();
    uVar1 = F_0055b9e0(uVar1);
    if (((uVar1 == 0) && ((char)param_4[1] == '\0')) && ((*param_4 == 2 || (*param_4 == 3)))) {
      if (*(int *)(this + 0x198) != 0) {
        iVar3 = *(int *)(this + 0x198);
        uVar2 = *(undefined4 *)(iVar3 + 0xa4);
        uVar4 = 0;
        this_00 = (undefined *)F_0055dcb0();
        F_0059b300(this_00,uVar2,iVar3,uVar4);
      }
      F_00557670(param_3,0);
    }
  }
  return 0;
}

/* ref: FUN_007c1750 */
uint F_007c1750(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d038c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectInfo::vf41 */
byte F_007c17c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c17c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaSelect_Info",0,6);
  return bVar1;
}

/* ref: FUN_007c17d0 */
uint F_007c17d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c17d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: FUN_007c17f0 */
uint F_007c17f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c17f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: FUN_007c1810 */
uint F_007c1810(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d048c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectLegacy::vf37 */
uint F_007c1860(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005b0510((undefined *)this);
  uVar1 = F_005a92d0(this,1,2,0);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectLegacy::vf41 */
byte F_007c1880(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaSelect_Legacy",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectLegacy::vf44 */
uint F_007c1890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0055e1c0(this,(float)((float10)*(float *)&REFG(undefined, 0x109feac) * (float10)*(double *)&REFG(undefined, 0x10944e0)),0,
               0,(float)(float10)1,1);
  F_0055e220(this,(float)((float10)*(float *)&REFG(undefined, 0x109feac) * (float10)*(double *)&REFG(undefined, 0x10944e0)),0,
               0,(float)(float10)1,1);
  *(undefined4 *)(this + 0xa0) = 0;
  F_005a91d0(this,1,2);
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b990(uVar1);
  if ((*(int *)(uVar1 + 8) == 0) ||
     (uVar1 = *((uint *)GEN_TOP((*(int *)(uVar1 + 8) + 0x20))), *(int *)(uVar1 + 400) < 1)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectLegacy::vf47 */
unsigned int F_007c1940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if ((**(uint * PTR32 *)(iVar1 + 0x20) & 8) != 0) {
      **(uint * PTR32 *)(iVar1 + 0x20) = **(uint * PTR32 *)(iVar1 + 0x20) & 0xfffffff7;
      if (((0 < *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 400)))) &&
          (uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar2 != 3)) && (uVar2 != 2)) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
      }
    }
  }
  return 0;
}

/* ref: FUN_007c19a0 */
uint F_007c19a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c19a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x184) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d058c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectReturn::vf41 */
byte F_007c1a10(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaSelect_Return",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectReturn::vf2 */
unsigned int F_007c1a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c1a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaSelectReturn::vf38 */
uint F_007c1a70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c1a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) == 0) ||
     ((uVar1 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c1b16;
  uVar1 = F_0055dcb0();
  if ((*(short *)(uVar1 + 0x1e8) == 0) && (*(short *)(uVar1 + 0x1ea) == 0)) {
    uVar1 = F_0055dcb0();
    if (*(char *)(param_1 + 0x184) != *(char *)(uVar1 + 0x21d)) goto LAB_007c1b16;
    uVar1 = F_0055dcb0();
    bVar2 = *(char *)(uVar1 + 0x21d) == '\0';
    this = *(undefined * PTR32 *)(param_1 + 0x180);
    *(bool *)(param_1 + 0x184) = bVar2;
    if (this == (undefined *)0x0) goto LAB_007c1b16;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*(char *)(param_1 + 0x184) == '\0') goto LAB_007c1b16;
    this = *(undefined * PTR32 *)(param_1 + 0x180);
    *(undefined1 *)(param_1 + 0x184) = 0;
    if (this == (undefined *)0x0) goto LAB_007c1b16;
    iVar3 = 0x66;
  }
  F_0059d640(this,iVar3);
LAB_007c1b16: ;
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: FUN_007c1b30 */
uint F_007c1b30(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x800;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d068c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectShadow::vf41 */
byte F_007c1ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaSelect_Shadow",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectShadow::vf44 */
uint F_007c1bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0xa0) = 0;
  uVar2 = F_0055dcb0();
  uVar1 = *(undefined4 *)(uVar2 + 0x238);
  uVar2 = F_0055dcb0();
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,*(undefined4 *)(uVar2 + 0x234),uVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaSelectShadow::vf54 */
uint F_007c1bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c1bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  ushort uVar2;
  uint uVar3;
  uint in_ecx;
  
  uVar3 = F_0055e2f0(param_1,2);
  if (uVar3 != 0) {
    fVar1 = (float)(int)param_3;
    if ((int)param_3 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = F_0055a030(uVar3);
    F_00568250(uVar3,(float)((float10)fVar1 / (float10)uVar2));
    F_00559eb0(uVar3,param_2);
  }
  uVar3 = F_0055e2f0(param_1,3);
  if (uVar3 != 0) {
    fVar1 = (float)(int)param_3;
    if ((int)param_3 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = F_0055a030(uVar3);
    F_00568250(uVar3,(float)((float10)fVar1 / (float10)uVar2));
  }
  in_ecx = F_0055e2f0(param_1,4);
  uVar3 = 0;
  if (in_ecx != 0) {
    fVar1 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = F_0055a020(in_ecx);
    F_00568230(in_ecx,(float)((float10)fVar1 / (float10)uVar2));
    uVar3 = F_00559f40(in_ecx,param_3);
  }
  return uVar3;
}

/* ref: FUN_007c1cf0 */
uint F_007c1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d078c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectTitle::vf41 */
byte F_007c1d60(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaSelect_Title",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectTitle::vf38 */
uint F_007c1d70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c1d70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  bool bVar2;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) != 0) &&
     ((uVar1 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
    uVar1 = F_0055dcb0();
    if (*(char *)(param_1 + 0x184) == *(char *)(uVar1 + 0x21d)) {
      uVar1 = F_0055dcb0();
      bVar2 = *(char *)(uVar1 + 0x21d) == '\0';
      *(bool *)(param_1 + 0x184) = bVar2;
      if (*(undefined * PTR32 *)(param_1 + 0x180) != (undefined *)0x0) {
        F_0059d640(*(undefined * PTR32 *)(param_1 + 0x180),!bVar2 + 0x65);
      }
    }
  }
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: FUN_007c1df0 */
uint F_007c1df0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d088c));
  F_0042cc20((undefined *)((int)this + 0x180),"",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x1d4),"",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x228),"",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x27c),"",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x2d0),"",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x324),"",REFG(undefined4, 0x108cc50));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 1;
  return (uint)this;
}

/* ref: FUN_007c1ee0 */
uint F_007c1ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d088c));
  F_0042c880((undefined *)((int)this + 0x324));
  F_0042c880((undefined *)((int)this + 0x2d0));
  F_0042c880((undefined *)((int)this + 0x27c));
  F_0042c880((undefined *)((int)this + 0x228));
  F_0042c880((undefined *)((int)this + 0x1d4));
  F_0042c880((undefined *)((int)this + 0x180));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf41 */
byte F_007c1f60(unsigned int gen_a0)
{
  GEN_ENTER(0x7c1f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaSelect_NameInput",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf38 */
uint F_007c1f70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c1f70u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(byte *)((int)param_1 + 0xf9) & 1) == 0) ||
     ((uVar2 = *(uint *)((int)param_1 + 0xf4) >> 0x14 & 0xf, uVar2 != 3 && (uVar2 != 2))))
  goto LAB_007c2069;
  if (*(char *)((int)param_1 + 0x3a3) == '\0') {
    if (*(char *)((int)param_1 + 0x3a2) == '\0') {
      if (*((char *)GEN_TOP((*(int *)((int)param_1 + 900) + 0x84))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*(int *)((int)param_1 + 0x388) + 0x84)));
        goto LAB_007c203a;
      }
      goto LAB_007c203c;
    }
    if (*((char *)GEN_TOP((*(int *)((int)param_1 + 900) + 0x84))) == '\0') {
      iVar3 = *(int *)((int)param_1 + 0x388);
      goto LAB_007c1fe4;
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x3a2) == '\0') {
      cVar1 = *((char *)GEN_TOP((*(int *)((int)param_1 + 0x38c) + 0x84)));
LAB_007c203a: ;
      if (cVar1 == '\0') goto LAB_007c2069;
LAB_007c203c: ;
      uVar2 = F_0055dcb0();
      if (*(char *)(uVar2 + 0x21d) == '\0') {
        *(undefined1 *)((int)param_1 + 0x3a2) = 1;
        F_0056b630(param_1,0x11a,7,0,9,0,0);
      }
      goto LAB_007c2069;
    }
    iVar3 = *(int *)((int)param_1 + 0x38c);
LAB_007c1fe4: ;
    if (*(char *)(iVar3 + 0x84) == '\0') goto LAB_007c1ffb;
  }
  uVar2 = F_0055dcb0();
  if (*(char *)(uVar2 + 0x21d) != '\0') {
LAB_007c1ffb: ;
    *(undefined1 *)((int)param_1 + 0x3a2) = 0;
    F_0056b780(param_1,0);
    uVar2 = F_005a2370(param_1,param_2);
    return uVar2;
  }
LAB_007c2069: ;
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf52 */
byte F_007c2080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c2080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (((char)param_1[1] == '\0') && ((*param_1 == 2 || (*param_1 == 3)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007c20b0 */
uint F_007c20b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c20b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x378) = param_2;
  return param_2;
}

/* ref: FUN_007c20c0 */
uint F_007c20c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c20c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  if ((*(byte *)((int)this + 0xf9) & 1) == 0) goto LAB_007c225c;
  if (*(char *)((int)this + 0x3a3) != '\0') {
    F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)),*(int *)((int)this + 0x38c) + 0x9c);
    uVar2 = F_0042b790(((undefined1 *)(gen_frame + 0xb4)));
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),uVar2 != 0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x398) + 0x28))))(*(int * PTR32 *)((int)this + 0x398),(*(uint *)(gen_frame + 0x8)));
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return (uint)uVar5;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)),*(int *)((int)this + 900) + 0x9c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x388) + 0x9c);
  uVar2 = F_0042b790(((undefined1 *)(gen_frame + 0xc)));
  uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xb4)));
  uVar4 = F_0042b790(((undefined1 *)(gen_frame + 0xc)));
  if (uVar4 < 2) {
LAB_007c21d2: ;
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  }
  else {
    uVar4 = F_0042b790(((undefined1 *)(gen_frame + 0xb4)));
    if ((uVar4 < 2) || (0x14 < uVar2 + uVar3)) goto LAB_007c21d2;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),1);
    bVar1 = F_0042b660(((undefined1 *)(gen_frame + 0xb4)),(int)this + 0x228);
    if (bVar1 != 0) {
      bVar1 = F_0042b660(((undefined1 *)(gen_frame + 0xc)),(int)this + 0x27c);
      if (bVar1 != 0) goto LAB_007c21d2;
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x398) + 0x28))))(*(int * PTR32 *)((int)this + 0x398),(*(uint *)(gen_frame + 0x8)));
  if (*(int *)((int)this + 0x380) != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x60)));
    uVar2 = F_00560910(uVar2 + uVar3);
    F_0042e430(((undefined1 *)(gen_frame + 0x60)),uVar2);
    F_0042e370(((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10c3430));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x60)));
    F_00584110(*(undefined * PTR32 *)((int)this + 0x380),uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  uVar2 = (uint)uVar5;
LAB_007c225c: ;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2;
}

/* ref: FUN_007c2270 */
unsigned int F_007c2270(unsigned int gen_a0)
{
  GEN_ENTER(0x7c2270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x3a3) == '\0') {
    uVar1 = F_0055dcb0();
    F_00596b90((undefined *)(uVar1 + 0xe0),(uint)*(byte *)((int)this + 0x13a),1);
  }
  return 0;
}

/* ref: FUN_007c22a0 */
uint F_007c22a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c22a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined1 *)((int)this + 0x1bc) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d098c));
  *(undefined2 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1b8) = 0xffffffff;
  return (uint)this;
}

