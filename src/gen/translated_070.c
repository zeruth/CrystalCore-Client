#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::UI2::AddonFreeCompanyTopics::vf41 */
uint F_0079cbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x79cbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"FreeCompanyTopics",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0079cbd0 */
uint F_0079cbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79cbd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined4 uVar6;
  
  uVar4 = *(uint *)(param_1 + 0xe8);
  iVar1 = *(int *)(param_2 + 0xd8);
  if (uVar4 == 0) {
    return 0;
  }
  if (iVar1 == 0) {
    return uVar4;
  }
  if (**(int * PTR32 *)(uVar4 + 0x20) == 0) {
    F_0059ead0(*(undefined * PTR32 *)((int)this + 400),0,0,1);
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x18c),0x66);
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9e0(uVar4);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x3c))))(*(int * PTR32 *)((int)this + 400));
    if (uVar4 != uVar5) {
      uVar6 = 0;
      if (*(int *)((int)this + 400) != 0) {
        uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
      }
      bVar3 = F_005612e0(uVar6,uVar4);
      if (bVar3 == 0) {
        return CONCAT31(extraout_var,bVar3);
      }
    }
    uVar4 = F_0059b390(this,*(undefined4 *)((int)this + 0x198),1,0);
    return uVar4;
  }
  iVar2 = (*(int * PTR32 *)(uVar4 + 0x20))[1];
  if (iVar2 == 0) {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x18c),0x65);
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9e0(uVar4);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x3c))))(*(int * PTR32 *)((int)this + 400));
    if (uVar4 != uVar5) {
      uVar6 = 0;
      if (*(int *)((int)this + 400) != 0) {
        uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
      }
      bVar3 = F_005612e0(uVar6,uVar4);
      if (bVar3 == 0) goto LAB_0079cce6;
    }
    F_0059b390(this,*(undefined4 *)((int)this + 0x198),1,0);
  }
  else {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x18c),0x11);
  }
LAB_0079cce6: ;
  F_0059ead0(*(undefined * PTR32 *)((int)this + 400),iVar2,0,1);
  uVar4 = F_00584110(*(undefined * PTR32 *)((int)this + 0x194),**(undefined4 * PTR32 *)(iVar1 + 0x20));
  return uVar4;
}

/* ref: FUN_0079cd20 */
uint F_0079cd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79cd20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xbc);
  if ((uVar1 != 0) && (*(int *)(param_2 + 0xac) != 0)) {
    if (**(int * PTR32 *)(uVar1 + 0x20) != 0) {
      uVar1 = (*(int * PTR32 *)(uVar1 + 0x20))[1];
      if (3 < uVar1) {
        uVar1 = 3;
      }
      uVar1 = F_0058d980(*(undefined4 *)((int)this + 0x198),uVar1);
      return uVar1;
    }
    uVar1 = F_0059ead0(*(undefined * PTR32 *)((int)this + 0x198),0,0,1);
  }
  return uVar1;
}

/* ref: FUN_0079cd80 */
uint F_0079cd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79cd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x9c);
  if ((uVar2 != 0) && (*(int *)(param_2 + 0x90) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1900)));
    if ((*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x190c))) != 0) && (0 < (int)uVar1)) {
      F_0058d980(*(undefined4 *)((int)this + 0x19c),uVar1);
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x70))))(*(int * PTR32 *)((int)this + 0x19c));
      return uVar2;
    }
    uVar2 = F_0059ead0(*(undefined * PTR32 *)((int)this + 0x19c),0,0,1);
  }
  return uVar2;
}

/* ref: FUN_0079cdf0 */
uint F_0079cdf0(unsigned int gen_a0)
{
  GEN_ENTER(0x79cdf0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079ce60 */
unsigned int F_0079ce60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79ce60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  
  if ((param_1 < 3) && (this_00 = (undefined *)F_00561530(param_2,4), this_00 != (undefined *)0x0)) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9a0(uVar3);
    if (*(int *)(uVar3 + 0xac) != 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0xac) + 0x20))) + param_1 * 8)));
      uVar3 = F_00584440(this_00,uVar2);
      if ((char)uVar3 != '\0') {
        F_00560760(((undefined4 *)(gen_frame + 0x0)));
        bVar1 = *(byte *)((int)this + 0x13a);
        ((undefined4 *)(gen_frame + 0x0))[0] = uVar2;
        uVar2 = *(undefined4 *)((int)param_2 + 0x1e4);
        uVar3 = F_0055dcb0();
        F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)bVar1,uVar2,((undefined4 *)(gen_frame + 0x0)),0,0);
      }
    }
  }
  return 0;
}

/* ref: FUN_0079cf10 */
uint F_0079cf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79cf10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if (((char)param_1 == '\0') || ((char)param_1 == '\x01')) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
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

/* ref: FUN_0079cf80 */
uint F_0079cf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79cf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if (((char)param_1 == '\0') || ((char)param_1 == '\x01')) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
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

/* ref: FUN_0079cff0 */
uint F_0079cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79cff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = F_0055dcb0();
  uVar5 = F_0055b990(uVar4);
  uVar4 = 0;
  if (*(int *)(uVar5 + 0xe8) != 0) {
    sVar2 = *((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar5 + 0xe8) + 0x20))) + 8 + param_1 * 0xc)));
    F_00560760(((undefined1 *)(gen_frame + 0x0)));
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar3 = *(undefined4 *)(param_2 + 0x1e4);
    (*(int *)(gen_frame + 0x4)) = (int)sVar2;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x18;
    uVar4 = F_0055dcb0();
    uVar4 = F_00588780((undefined *)(uVar4 + 0xe0),8,(uint)bVar1,uVar3,((undefined1 *)(gen_frame + 0x0)),0,0);
  }
  return uVar4;
}

/* ref: FUN_0079d090 */
uint F_0079d090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79d090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x65;
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b9a0(uVar1);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  uVar1 = F_0079afc0(uVar2,uVar1,param_1,param_2,uVar3);
  return uVar1;
}

/* ref: FUN_0079d0d0 */
unsigned int F_0079d0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79d0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b990(uVar4);
  iVar1 = *(int *)(uVar4 + 0x9c);
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4);
  iVar2 = *(int *)(uVar4 + 0x90);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar3 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + param_1 * 0x20)));
    F_005951c0(param_3,iVar3,0,*param_2);
    F_0055a300((undefined *)*param_2,(uint)(0 < iVar3));
    this_00 = (undefined *)F_00559ba0(param_2[1]);
    F_00584110(this_00,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + param_1 * 0x14))));
    uVar4 = F_005612d0(*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10 + param_1 * 0x20))));
    F_0055aa30(this_00,uVar4);
  }
  return 0;
}

/* ref: FUN_0079d190 */
uint F_0079d190(unsigned int gen_a0)
{
  GEN_ENTER(0x79d190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c98bc));
  F_00590cc0((undefined *)((int)this + 0x6c0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6b4) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  this_00 = (undefined *)((int)this + 0x6b4);
  iVar2 = 0xa0;
  do {
    this_00 = (undefined *)((int)this_00 + -8);
    F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonJournal::vf25 */
uint F_0079d1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x79d1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined3 extraout_var = 0;
  
  if (this[0xcf8] != (undefined1)0x0) {
    uVar2 = F_0055dcb0();
    piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)this[0xcf8]);
    if (((piVar3 != (int *)0x0) &&
        (((*(byte *)((int)piVar3 + 0xf9) & 4) != 0 || ((*(byte *)(piVar3 + 0x3e) & 1) != 0)))) &&
       ((uVar2 = (uint)piVar3[0x3d] >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
      *(byte *)(piVar3 + 0x3e) = *(byte *)(piVar3 + 0x3e) & 0x7f;
      ((code *)*(gen_code32 *)(*piVar3 + 0x8c))(piVar3);
    }
    this[0xcf8] = (undefined1)0x0;
  }
  F_00580fa0(this + 0x6c0);
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonJournal::vf37 */
uint F_0079d270(unsigned int gen_a0)
{
  GEN_ENTER(0x79d270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005a92d0(this,0,0x17,1);
  F_005a92d0(this,1,0x1a,0);
  if (*(int *)(this + 0x188) != 0) {
    F_00588cd0(this + 0x6c0,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(int *)(this + 0x188),0);
    *(undefined4 *)(this + 0x188) = 0;
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonJournal::vf38 */
unsigned int F_0079d2d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x79d2d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  F_005a2370(param_1,param_2);
  F_0059d8b0(param_1 + 0x6c0,param_2);
  if ((*(byte *)(param_1 + 0xcf8) != 0) && (*(byte *)(param_1 + 0xcf8) != 0xffffffff)) {
    uVar3 = F_0055dcb0();
    iVar2 = *((int *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc)));
    if (iVar2 != param_1) {
      if (iVar2 != 0) {
        if ((*(int *)(param_1 + 0x188) != 0) && (iVar2 == *((int *)GEN_TOP((*(int *)(param_1 + 0x188) + 4)))))
        {
          return 0;
        }
        bVar1 = *(byte *)(iVar2 + 0x13a);
        uVar3 = F_0055dcb0();
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x14) + 0x44))))(*(int * PTR32 *)(uVar3 + 0x14),0x2a);
        if (bVar1 == uVar3) {
          return 0;
        }
        uVar3 = F_0055dcb0();
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x14) + 0x44))))(*(int * PTR32 *)(uVar3 + 0x14),7);
        if (bVar1 == uVar3) {
          return 0;
        }
      }
      *(undefined1 *)(param_1 + 0xcf8) = 0;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonJournal::vf39 */
unsigned int F_0079d370(unsigned int gen_a0)
{
  GEN_ENTER(0x79d370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x6c0);
  return 0;
}

/* ref: Client::UI2::AddonJournal::vf41 */
uint F_0079d390(unsigned int gen_a0)
{
  GEN_ENTER(0x79d390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"Journal",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonJournal::vf49 */
uint F_0079d3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x79d3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00580f60(this + 0x6c0,0);
  uVar1 = F_005a9190((undefined *)this);
  return uVar1;
}

/* ref: FUN_0079d3c0 */
uint F_0079d3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined * this_00;
  int local_8;
  
  iVar3 = (int)param_2;
  iVar2 = param_1;
  this_00 = (undefined *)((int)this + 0x1ac);
  iVar5 = 0xa1;
  do {
    F_005a2710(this_00,1);
    this_00 = (undefined *)((int)this_00 + 8);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x12e8)));
  uVar4 = F_005a2710((undefined *)((int)this + 0x4d4),4);
  *(int *)((int)this + 0x4d8) = iVar5;
  if (0 < iVar5) {
    iVar5 = *(int *)((int)this + 0x180);
    uVar4 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1220)));
    F_005a2710((undefined *)((int)this + 0x1ac),4);
    *(uint *)((int)this + 0x1b0) = uVar4 | (-(uint)(iVar5 != 1) & 0x80000000) + 0x80000000;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0xd84)));
    F_005a2710((undefined *)((int)this + 0x1b4),6);
    *(undefined4 *)((int)this + 0x1b8) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1228)));
    F_005a2710((undefined *)((int)this + 0x1bc),4);
    *(undefined4 *)((int)this + 0x1c0) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0xc80)));
    F_005a2710((undefined *)((int)this + 0x1c4),6);
    *(undefined4 *)((int)this + 0x1c8) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x122c)));
    F_005a2710((undefined *)((int)this + 0x4cc),4);
    *(undefined4 *)((int)this + 0x4d0) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1230)));
    F_005a2710((undefined *)((int)this + 0x1cc),4);
    *(undefined4 *)((int)this + 0x1d0) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1234)));
    F_005a2710((undefined *)((int)this + 0x1d4),4);
    *(undefined4 *)((int)this + 0x1d8) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1238)));
    F_005a2710((undefined *)((int)this + 0x4c4),4);
    *(undefined4 *)((int)this + 0x4c8) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x12ec)));
    F_005a2710((undefined *)((int)this + 0x4dc),4);
    *(undefined4 *)((int)this + 0x4e0) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x12f8)));
    F_005a2710((undefined *)((int)this + 0x60c),4);
    *(undefined4 *)((int)this + 0x610) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0xc88)));
    F_005a2710((undefined *)((int)this + 0x1dc),6);
    *(undefined4 *)((int)this + 0x1e0) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0xc84)));
    F_005a2710((undefined *)((int)this + 0x1e4),6);
    *(undefined4 *)((int)this + 0x1e8) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0xc8c)));
    F_005a2710((undefined *)((int)this + 0x1ec),6);
    *(undefined4 *)((int)this + 0x1f0) = uVar1;
    local_8 = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x123c)));
    F_005a2710((undefined *)((int)this + 0x444),4);
    *(int *)((int)this + 0x448) = local_8;
    if (0 < local_8) {
      param_2 = (undefined4 *)((int)this + 0x450);
      param_1 = 0xc90;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x5b0 + param_1)));
        F_005a2710(param_2 + 9,4);
        param_2[10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *(int *)(iVar3 + 0x20))));
        F_005a2710(param_2 + -1,6);
        *param_2 = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x14 + param_1)));
        F_005a2710(param_2 + 0x13,6);
        param_1 = param_1 + 4;
        param_2[0x14] = uVar1;
        param_2 = param_2 + 2;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    local_8 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1254)));
    F_005a2710((undefined *)((int)this + 500),4);
    *(int *)((int)this + 0x1f8) = local_8;
    if (0 < local_8) {
      param_2 = (undefined4 *)((int)this + 0x228);
      param_1 = 0x126c;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + -0x14 + *(int *)(iVar2 + 0x20))));
        F_005a2710(param_2 + -0xb,4);
        param_2[-10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *(int *)(iVar2 + 0x20))));
        F_005a2710(param_2 + -1,4);
        *param_2 = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x28 + *(int *)(iVar2 + 0x20))));
        F_005a2710(param_2 + 9,4);
        param_2[10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x14 + *(int *)(iVar2 + 0x20))));
        F_005a2710(param_2 + 0x1d,4);
        param_2[0x1e] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + -0x5a0 + param_1)));
        F_005a2710(param_2 + 0x27,6);
        param_1 = param_1 + 4;
        param_2[0x28] = uVar1;
        param_2 = param_2 + 2;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    local_8 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x12a8)));
    F_005a2710((undefined *)((int)this + 0x2ec),4);
    *(int *)((int)this + 0x2f0) = local_8;
    if (0 < local_8) {
      param_2 = (undefined4 *)((int)this + 800);
      param_1 = 0x12c0;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + -0x14 + *(int *)(iVar2 + 0x20))));
        F_005a2710(param_2 + -0xb,4);
        param_2[-10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *(int *)(iVar2 + 0x20))));
        F_005a2710(param_2 + -1,4);
        *param_2 = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x14 + *(int *)(iVar2 + 0x20))));
        F_005a2710(param_2 + 9,4);
        param_2[10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + -0x5e0 + *(int *)(iVar3 + 0x20))));
        F_005a2710(param_2 + 0x13,6);
        param_1 = param_1 + 4;
        param_2[0x14] = uVar1;
        param_2 = param_2 + 2;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    local_8 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x12fc)));
    F_005a2710((undefined *)((int)this + 0x394),4);
    *(int *)((int)this + 0x398) = local_8;
    if (0 < local_8) {
      param_2 = (undefined4 *)((int)this + 0x3c8);
      param_1 = 0x1310;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + -0x10 + param_1)));
        F_005a2710(param_2 + -9,4);
        param_2[-8] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *(int *)(iVar2 + 0x20))));
        F_005a2710(param_2 + -1,4);
        *param_2 = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x10 + param_1)));
        F_005a2710(param_2 + 0xf,4);
        param_2[0x10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x20 + param_1)));
        F_005a2710(param_2 + 0x17,4);
        param_2[0x18] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + -0x588 + param_1)));
        F_005a2710(param_2 + 7,6);
        param_1 = param_1 + 4;
        param_2[8] = uVar1;
        param_2 = param_2 + 2;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    local_8 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x12f0)));
    F_005a2710((undefined *)((int)this + 0x4fc),4);
    *(int *)((int)this + 0x500) = local_8;
    if (0 < local_8) {
      param_2 = (undefined4 *)((int)this + 0x504);
      param_1 = 0xcf4;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *(int *)(iVar3 + 0x20))));
        F_005a2710(param_2,6);
        param_1 = param_1 + 4;
        *(undefined4 *)((int)param_2 + 4) = uVar1;
        param_2 = (undefined4 *)((int)param_2 + 8);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    param_2 = (undefined4 *)((int)this + 0x4e4);
    param_1 = 0xd54;
    do {
      uVar1 = *((undefined4 *)GEN_TOP((param_1 + *(int *)(iVar3 + 0x20))));
      F_005a2710(param_2,6);
      *(undefined4 *)((int)param_2 + 4) = uVar1;
      param_1 = param_1 + 4;
      param_2 = (undefined4 *)((int)param_2 + 8);
    } while (param_1 < 0xd60);
    local_8 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x12f4)));
    F_005a2710((undefined *)((int)this + 0x5c4),4);
    *(int *)((int)this + 0x5c8) = local_8;
    if (0 < local_8) {
      param_2 = (undefined4 *)((int)this + 0x5cc);
      param_1 = 0xd64;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *(int *)(iVar3 + 0x20))));
        F_005a2710(param_2,6);
        param_1 = param_1 + 4;
        *(undefined4 *)((int)param_2 + 4) = uVar1;
        param_2 = (undefined4 *)((int)param_2 + 8);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1340)));
    F_005a2710((undefined *)((int)this + 0x694),4);
    *(undefined4 *)((int)this + 0x698) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1344)));
    F_005a2710((undefined *)((int)this + 0x69c),4);
    *(undefined4 *)((int)this + 0x6a0) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1348)));
    F_005a2710((undefined *)((int)this + 0x6a4),4);
    *(undefined4 *)((int)this + 0x6a8) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x134c)));
    uVar4 = F_005a2710((undefined *)((int)this + 0x6ac),4);
    *(undefined4 *)((int)this + 0x6b0) = uVar1;
  }
  return uVar4;
}

/* ref: FUN_0079db00 */
unsigned int F_0079db00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  uint uVar2;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00561530(param_1,2);
    this_00 = (undefined *)F_00561530(param_1,4);
    uVar2 = (int)param_2 >> 0x10 & 0xffff;
    F_0055dcb0();
    uVar2 = F_0056a410(uVar2);
    F_00584110(pvVar1,uVar2);
    if ((char)param_3 != '\0') {
      uVar2 = param_2 & 0xffff;
      F_0055dcb0();
      uVar2 = F_0056a410(uVar2);
      F_00584110(this_00,uVar2);
      return 0;
    }
    pvVar1 = (undefined *)F_00561530(param_1,3);
    F_0055a300(pvVar1,0);
    F_0055a300(this_00,0);
  }
  return 0;
}

/* ref: FUN_0079dbb0 */
uint F_0079dbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79dbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this_00,*(undefined4 *)((int)this + param_1 * 4 + 0x6f8));
  return uVar1;
}

/* ref: FUN_0079dc10 */
uint F_0079dc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79dc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x14)) = *((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x2a))) & 0xf;
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_1 + 8);
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
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

/* ref: FUN_0079dc80 */
uint F_0079dc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79dc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((char)param_1 != '\0') {
    uVar3 = 0x1c1;
    if (*(int *)((int)this + 0x180) == 1) {
      uVar3 = 0x18ad3;
    }
    uVar4 = 0;
    in_ecx = F_0055e2f0(this,0x1e);
    uVar2 = F_0055a020(in_ecx);
    bVar1 = F_0056b630(this,uVar3,6,0,7,(uint)(uVar2 >> 1),uVar4);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b780(this,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_0079dce0 */
uint F_0079dce0(unsigned int gen_a0)
{
  GEN_ENTER(0x79dce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c99bc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalAccept::vf41 */
uint F_0079dd70(unsigned int gen_a0)
{
  GEN_ENTER(0x79dd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"JournalAccept",1,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonJournalAccept::vf25 */
uint F_0079dd80(unsigned int gen_a0)
{
  GEN_ENTER(0x79dd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_0079ddc0 */
uint F_0079ddc0(unsigned int gen_a0)
{
  GEN_ENTER(0x79ddc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x4000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
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
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined1 *)((int)this + 0x1dc) = 0;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9abc));
  *(undefined4 *)((int)this + 0x184) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1cc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1d0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1d4) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalDetail::vf41 */
uint F_0079dea0(unsigned int gen_a0)
{
  GEN_ENTER(0x79dea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"JournalDetail",1,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonJournalDetail::vf52 */
byte F_0079deb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79deb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0079df00 */
uint F_0079df00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x79df00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
        F_0042d540(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10c1a5c));
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
    (*(uint *)(gen_frame + 0x6c)) = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined4 *)(gen_frame + 0x68)) = 6;
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x1bc));
    (*(undefined4 *)(gen_frame + 0x70)) = 4;
    (*(uint *)(gen_frame + 0x74)) = (uint)uVar2;
    (*(uint *)(gen_frame + 0x7c)) = F_0055ab00(*(undefined4 *)((int)this + 0x1bc));
    (*(undefined4 *)(gen_frame + 0x78)) = 4;
    bVar1 = F_0055ab50(*(undefined4 *)((int)this + 0x1bc));
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
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1bc),uVar4);
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

/* ref: FUN_0079e050 */
uint F_0079e050(unsigned int gen_a0)
{
  GEN_ENTER(0x79e050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(undefined4 *)((int)this + 0x1cc);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0x180);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
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

/* ref: FUN_0079e0c0 */
uint F_0079e0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(undefined4 *)((int)this + 0x1d4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0x180);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
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

/* ref: FUN_0079e130 */
uint F_0079e130(unsigned int gen_a0)
{
  GEN_ENTER(0x79e130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(undefined4 *)((int)this + 0x1d0);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0x180);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
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

/* ref: FUN_0079e1a0 */
uint F_0079e1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9bbc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined1 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalResult::vf41 */
uint F_0079e230(unsigned int gen_a0)
{
  GEN_ENTER(0x79e230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"JournalResult",1,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonJournalResult::vf25 */
uint F_0079e240(unsigned int gen_a0)
{
  GEN_ENTER(0x79e240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_0079e280 */
uint F_0079e280(unsigned int gen_a0)
{
  GEN_ENTER(0x79e280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9ccc));
  F_00590cc0((undefined *)((int)this + 0x714));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x708) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  this_00 = (undefined *)((int)this + 0x6e0);
  iVar2 = 0xa0;
  do {
    this_00 = (undefined *)((int)this_00 + -8);
    F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf38 */
uint F_0079e2d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x79e2d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x714,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf39 */
unsigned int F_0079e300(unsigned int gen_a0)
{
  GEN_ENTER(0x79e300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x714);
  return 0;
}

/* ref: Client::UI2::AddonGuildLeve::vf25 */
uint F_0079e320(unsigned int gen_a0)
{
  GEN_ENTER(0x79e320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  F_00580fa0(this + 0x714);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf36 */
byte F_0079e360(unsigned int gen_a0)
{
  GEN_ENTER(0x79e360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  *(undefined2 *)(this + 0x136) = 0x17;
  bVar1 = F_00560e80(this + 0x714,this);
  return bVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf37 */
uint F_0079e390(unsigned int gen_a0)
{
  GEN_ENTER(0x79e390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 0x180) != 0) {
    F_00588cd0(this + 0x714,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(int *)(this + 0x180),0);
    *(undefined4 *)(this + 0x180) = 0;
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf41 */
uint F_0079e3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"GuildLeve",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGuildLeve::vf52 */
byte F_0079e3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79e3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x1c);
  if (*param_1 == 5) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x700);
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
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

/* ref: Client::UI2::AddonGuildLeve::vf49 */
uint F_0079e440(unsigned int gen_a0)
{
  GEN_ENTER(0x79e440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00580f60(this + 0x714,0);
  uVar1 = F_005a9190((undefined *)this);
  return uVar1;
}

/* ref: FUN_0079e460 */
uint F_0079e460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79e460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x1c);
  if ((param_1 != *(ushort *)((int)this + 0x706)) && (param_1 < *(ushort *)((int)this + 0x704))) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    *(short *)((int)this + 0x706) = (short)param_1;
    (*(undefined4 *)(gen_frame + 0x10)) = 9;
    (*(uint *)(gen_frame + 0x18)) = param_1 & 0xffff;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar1 = 1;
    do {
      this_00 = this_00 + -8;
      param_1 = F_005a2670(this_00);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return param_1;
}

/* ref: FUN_0079e4d0 */
uint F_0079e4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79e4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00561530(param_1,2);
  this_00 = (undefined *)F_00561530(param_1,4);
  uVar2 = param_2 >> 0x10;
  F_0055dcb0();
  uVar2 = F_0056a410(uVar2);
  F_00584110(pvVar1,uVar2);
  if ((char)param_3 != '\0') {
    uVar2 = param_2 & 0xffff;
    F_0055dcb0();
    uVar2 = F_0056a410(uVar2);
    uVar2 = F_00584110(this_00,uVar2);
    return uVar2;
  }
  F_0055a300(this_00,0);
  pvVar1 = (undefined *)F_00561530(param_1,3);
  uVar2 = F_0055a300(pvVar1,0);
  return uVar2;
}

/* ref: FUN_0079e570 */
uint F_0079e570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79e570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x2a))) & 0xf) == 1) {
    param_1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x74))))
                        (*(int * PTR32 *)((int)this + 0x184),*(int *)(param_1 + 8) + 1,0);
  }
  return param_1;
}

/* ref: FUN_0079e5a0 */
uint F_0079e5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9dcc));
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf36 */
uint F_0079e5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf41 */
uint F_0079e610(unsigned int gen_a0)
{
  GEN_ENTER(0x79e610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"GuildLeveDifficulty",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf46 */
byte F_0079e620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79e620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_1 != 0) {
    if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x184),0);
      return 1;
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x184),*(undefined4 *)(param_2 + 0x24));
  }
  return 1;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf2 */
uint F_0079e660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x79e660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0x17) {
    if (param_2 == 0) {
      param_2 = F_00557670(param_3,0);
      if (*(int *)(this + 0x180) != 0) {
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0xa0)));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
        (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar3 = 1;
        do {
          this_01 = this_01 + -8;
          uVar2 = F_005a2670(this_01);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        return uVar2;
      }
    }
    else if (param_2 == 1) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
      param_2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    }
  }
  else {
    param_2 = uVar2;
    if (uVar2 == 0x1b) {
      param_2 = F_00557670(param_3,0);
      if (*(int *)(this + 0x180) != 0) {
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
        (*(undefined4 *)(gen_frame + 0x10)) = 3;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0xa0)));
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
  return param_2;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf25 */
uint F_0079e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_0079e7f0 */
uint F_0079e7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9ecc));
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeveHistory::vf41 */
uint F_0079e840(unsigned int gen_a0)
{
  GEN_ENTER(0x79e840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"GuildLeveHistory",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGuildLeveHistory::vf2 */
unsigned int F_0079e850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x79e850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_0079e860 */
uint F_0079e860(unsigned int gen_a0)
{
  GEN_ENTER(0x79e860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9fcc));
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x20000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonColosseumRecord::vf25 */
uint F_0079e8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonColosseumRecord::vf37 */
uint F_0079e8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  F_005a92d0(this,2,1,0);
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonColosseumRecord::vf41 */
uint F_0079e930(unsigned int gen_a0)
{
  GEN_ENTER(0x79e930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ColosseumRecord",1,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonColosseumRecord::vf46 */
byte F_0079e940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79e940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (((byte)this[0xf9] & 1) == 0) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x4a8) & 0xf) == 0) {
    F_00584110(*(undefined * PTR32 *)(this + 0x184),0);
    return 1;
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x184),*(undefined4 *)(param_2 + 0x4ac));
  return 1;
}

/* ref: Client::UI2::AddonColosseumRecord::vf2 */
unsigned int F_0079e990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x79e990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    F_005a9130(this,0xffffffff);
  }
  return 0;
}

/* ref: FUN_0079e9c0 */
unsigned int F_0079e9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  ((undefined * PTR32 *)(gen_frame + 0x0))[2] = this;
  ((undefined * PTR32 *)(gen_frame + 0x0))[0] = (undefined *)0x65;
  ((undefined * PTR32 *)(gen_frame + 0x0))[1] = (undefined *)0x66;
  if (param_1 < 0x10) {
    puVar1 = (undefined4 *)((int)this + param_1 * 0x24 + 0x188);
    if (*(byte *)(puVar1 + 8) < 2) {
      F_0059d670((undefined *)*param_2,((undefined * PTR32 *)(gen_frame + 0x0))[*(byte *)(puVar1 + 8)]);
    }
    uVar3 = *puVar1;
    pvVar2 = (undefined *)F_00559ba0(param_2[1]);
    F_00584110(pvVar2,uVar3);
    uVar3 = puVar1[3];
    uVar6 = 0;
    pvVar2 = (undefined *)F_00559b90(param_2[2]);
    F_00591c00(pvVar2,uVar3,uVar6);
    uVar3 = puVar1[2];
    pvVar2 = (undefined *)F_00559ba0(param_2[3]);
    F_00584110(pvVar2,uVar3);
    uVar3 = puVar1[4];
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    pvVar2 = (undefined *)F_00559ba0(param_2[5]);
    F_0057eb30(pvVar2,uVar3,uVar6,uVar4,uVar5,uVar7);
    uVar3 = puVar1[5];
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    pvVar2 = (undefined *)F_00559ba0(param_2[6]);
    F_0057eb30(pvVar2,uVar3,uVar6,uVar4,uVar5,uVar7);
    uVar3 = puVar1[6];
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    pvVar2 = (undefined *)F_00559ba0(param_2[7]);
    F_0057eb30(pvVar2,uVar3,uVar6,uVar4,uVar5,uVar7);
    uVar3 = puVar1[7];
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    pvVar2 = (undefined *)F_00559ba0(param_2[8]);
    F_0057eb30(pvVar2,uVar3,uVar6,uVar4,uVar5,uVar7);
    F_0059d670((undefined *)param_2[9],(param_1 != *(uint *)((int)((undefined * PTR32 *)(gen_frame + 0x0))[2] + 0x3c8)) + 0x65);
  }
  return 0;
}

/* ref: FUN_0079eb00 */
uint F_0079eb00(unsigned int gen_a0)
{
  GEN_ENTER(0x79eb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca0cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerSell::vf41 */
uint F_0079eb80(unsigned int gen_a0)
{
  GEN_ENTER(0x79eb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"RetainerSell",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonRetainerSell::vf46 */
byte F_0079eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79eb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x38) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x3c);
    }
    F_0059d070(*(undefined * PTR32 *)(this + 0x198),uVar1,1,1);
    if ((*(byte *)(param_2 + 0x40) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x44);
    }
    F_0059cf90(*(undefined * PTR32 *)(this + 0x194),uVar1,1,1);
    if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_0059cf90(*(undefined * PTR32 *)(this + 0x198),uVar1,1,1);
    if ((*(byte *)(param_2 + 0x68) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x6c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4),uVar1);
    if ((*(byte *)(param_2 + 0x70) & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x1a0),0);
      return 1;
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0),*(undefined4 *)(param_2 + 0x74));
  }
  return 1;
}

/* ref: Client::UI2::AddonRetainerSell::vf25 */
uint F_0079ec50(unsigned int gen_a0)
{
  GEN_ENTER(0x79ec50u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079ec90 */
uint F_0079ec90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79ec90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar2 = F_0055e2f0(this,0xd);
  uVar3 = F_0055e2f0(this,9);
  if (*(uint *)(param_1 + 4) == uVar2) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    uVar1 = *param_2;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_00 = this_00 + -8;
      uVar2 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return uVar2;
  }
  if (*(uint *)(param_1 + 4) == uVar3) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    uVar1 = *param_2;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_01 = this_01 + -8;
      uVar3 = F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return uVar3;
}

/* ref: FUN_0079ed70 */
uint F_0079ed70(unsigned int gen_a0)
{
  GEN_ENTER(0x79ed70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079edb0 */
uint F_0079edb0(unsigned int gen_a0)
{
  GEN_ENTER(0x79edb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_0079edf0 */
uint F_0079edf0(unsigned int gen_a0)
{
  GEN_ENTER(0x79edf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_0079ee50 */
uint F_0079ee50(unsigned int gen_a0)
{
  GEN_ENTER(0x79ee50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca1cc));
  iVar3 = 0x92;
  pvVar2 = (undefined *)((int)this + 0x6da8);
  do {
    F_0042c880((undefined *)((int)pvVar2 + -0x68));
    F_0042c880((undefined *)((int)pvVar2 + -0xbc));
    iVar3 = iVar3 + -1;
    pvVar2 = (undefined *)((int)pvVar2 + -0xbc);
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerSellList::vf41 */
uint F_0079eeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x79eeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"RetainerSellList",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonRetainerSellList::vf45 */
unsigned int F_0079eec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79eec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x180);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if (uVar2 == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180));
      this[0xf9] = (undefined1)((byte)this[0xf9] | 0x40);
      *(uint *)(this + 0xa4) = uVar2;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
      (*(undefined4 *)(gen_frame + 0x8)) = 3;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonRetainerSellList::vf46 */
byte F_0079ef30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79ef30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte * pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  undefined * this_00;
  
  pbVar6 = param_2;
  if ((param_2 != (byte *)0x0) && (*(int *)(this + 0x180) != 0)) {
    if (((param_2[0x10] & 0xf) != 0) && (0 < *(int *)(param_2 + 0x14))) {
      F_00591c00(*(undefined * PTR32 *)(this + 400),*(int *)(param_2 + 0x14),0);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x194),uVar3);
    if ((*param_2 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x184),uVar3);
    F_00562110(*(undefined * PTR32 *)(this + 0x180),1);
    uVar4 = F_0055dcb0();
    F_00594d90((undefined *)(uVar4 + 0xe0),0);
    pbVar1 = param_2 + 0x30;
    param_2 = (byte *)0x0;
    if (((*pbVar1 & 0xf) == 0) || (iVar2 = *(int *)(pbVar6 + 0x34), iVar2 < 1)) {
      F_0059d6a0(this,0x65,1,0);
    }
    else {
      F_0059d6a0(this,0x11,1,0);
      param_2 = (byte *)0x0;
      if (0 < iVar2) {
        this_00 = this + 0x1b4;
        pbVar6 = pbVar6 + 0x4c;
        iVar5 = iVar2;
        do {
          if ((pbVar6[-0x14] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + -0x10);
          }
          *(undefined4 *)(this_00 + -0x14) = uVar3;
          if ((pbVar6[-0xc] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + -8);
          }
          F_0042e430(this_00,uVar3);
          if ((pbVar6[-4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)pbVar6;
          }
          *(undefined4 *)(this_00 + -0x10) = uVar3;
          if ((pbVar6[4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + 8);
          }
          F_0042e430(this_00 + 0x54,uVar3);
          if ((pbVar6[0xc] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + 0x10);
          }
          *(undefined4 *)(this_00 + -0xc) = uVar3;
          if ((pbVar6[0x14] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + 0x18);
          }
          *(undefined4 *)(this_00 + -8) = uVar3;
          if ((pbVar6[0x1c] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + 0x20);
          }
          *(undefined4 *)(this_00 + -4) = uVar3;
          this_00 = this_00 + 0xbc;
          pbVar6 = pbVar6 + 0x38;
          iVar5 = iVar5 + -1;
          param_2 = (byte *)iVar2;
        } while (iVar5 != 0);
      }
    }
    F_0059ead0(*(undefined * PTR32 *)(this + 0x180),param_2,0,1);
  }
  return 1;
}

/* ref: Client::UI2::AddonRetainerSellList::vf5 */
uint F_0079f0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79f0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 == 3) || (uVar1 == 2)) {
    uVar2 = *(undefined4 *)(this + 0xa4);
    uVar4 = 0;
    pAVar3 = this;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00,uVar2,pAVar3,uVar4);
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerSellList::vf25 */
uint F_0079f110(unsigned int gen_a0)
{
  GEN_ENTER(0x79f110u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079f150 */
uint F_0079f150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79f150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != 0) {
    if ((short)param_1 == 0x1f) {
      F_00560760(((undefined1 *)(gen_frame + 0x0)));
      bVar1 = *(byte *)((int)this + 0x13a);
      (*(undefined1 *)(gen_frame + 0xa)) = 2;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x30;
      (*(undefined1 *)(gen_frame + 0xb)) = *((undefined1 *)GEN_TOP((*(int *)(param_3 + 8) * 0xbc + 0x1a8 + (int)this)));
      uVar3 = F_0055dcb0();
      F_00588780((undefined *)(uVar3 + 0xe0),4,(uint)bVar1,iVar2,((undefined1 *)(gen_frame + 0x0)),0,0);
      uVar3 = F_00557670(param_2,0);
      return uVar3;
    }
    uVar3 = F_0055dcb0();
    F_00594d90((undefined *)(uVar3 + 0xe0),0);
    param_2 = F_00557670(param_2,0);
  }
  return param_2;
}

/* ref: FUN_0079f200 */
uint F_0079f200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79f200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  uVar1 = *(undefined4 *)(param_2 + 8);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar3 = 1;
  }
  else if (*(char *)(param_2 + 0x10) == '\x02') {
    uVar3 = 2;
  }
  else if ((*(byte *)(param_2 + 0x11) & 8) != 0) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00557670(param_1,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_0079f2d0 */
uint F_0079f2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79f2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2)));
  uVar1 = *puVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2);
  uVar1 = *(undefined4 *)(uVar3 + 4);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))(this);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000;
  *(char *)(param_1 + 0x15) = (char)uVar3;
  F_00557670(param_1,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_0079f3a0 */
uint F_0079f3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79f3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined * this_00;
  char * pcVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)(param_2[2] * 0xbc + 0x1a0 + (int)this);
  this_00 = (undefined *)F_005ab2b0((undefined *)*param_2,puVar1[2],*puVar1,0x30);
  if (this_00 != (undefined *)0x0) {
    if ((int)puVar1[1] < 2) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)F_00560910(puVar1[1]);
    }
    F_0058ea60(this_00,pcVar2);
    uVar3 = puVar1[4];
    F_00561860(*(undefined * PTR32 *)((int)this_00 + 0xa4),(uint)(*(byte *)(puVar1 + 4) & 1));
    F_005a03c0(*(undefined * PTR32 *)((int)this_00 + 0xa4),uVar3 >> 1);
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000;
  *(undefined1 *)(param_1 + 0x15) = 1;
  uVar3 = F_00557670(param_1,0);
  return uVar3;
}

/* ref: FUN_0079f430 */
uint F_0079f430(unsigned int gen_a0)
{
  GEN_ENTER(0x79f430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca2cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  F_00c48350((undefined *)((int)this + 0x18c),0,0x280);
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerHistory::vf25 */
uint F_0079f490(unsigned int gen_a0)
{
  GEN_ENTER(0x79f490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerHistory::vf36 */
uint F_0079f4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x79f4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055e2a0(this,0x1000000,1);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerHistory::vf37 */
uint F_0079f4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x79f4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005b0510((undefined *)this);
  F_005a92d0(this,0,0x21,0);
  uVar1 = F_005a92d0(this,1,0x24,0);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerHistory::vf41 */
uint F_0079f520(unsigned int gen_a0)
{
  GEN_ENTER(0x79f520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"RetainerHistory",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonRetainerHistory::vf47 */
uint F_0079f530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79f530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pAVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_2 + 0x84);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar3 = *((int *)GEN_TOP((*(undefined * PTR32 *)(iVar1 + 0x20) + 0x968)));
    param_1 = *(undefined * PTR32 *)(iVar1 + 0x20);
    if (0 < iVar3) {
      pAVar4 = this + 0x18c;
      iVar6 = 0x980;
      iVar5 = 0xb08;
      do {
        param_1 = (undefined *)iVar3;
        *(undefined4 *)(pAVar4 + 0x10) = *((undefined4 *)GEN_TOP((iVar5 + -0xc + *(int *)(iVar2 + 0x20))));
        *(undefined4 *)(pAVar4 + 0x14) = *((undefined4 *)GEN_TOP((iVar5 + -8 + *(int *)(iVar2 + 0x20))));
        *(undefined4 *)(pAVar4 + 0xc) = *((undefined4 *)GEN_TOP((iVar5 + -4 + *(int *)(iVar2 + 0x20))));
        *(undefined4 *)(pAVar4 + 0x18) = *((undefined4 *)GEN_TOP((iVar5 + *(int *)(iVar2 + 0x20))));
        *(undefined4 *)(pAVar4 + 4) = *((undefined4 *)GEN_TOP((iVar5 + 4 + *(int *)(iVar2 + 0x20))));
        pAVar4[0x1d] = (undefined1)(0 < *((int *)GEN_TOP((iVar6 + -0xc + *(int *)(iVar1 + 0x20)))));
        pAVar4[0x1c] = *((undefined *)GEN_TOP((iVar6 + -0x10 + *(int *)(iVar1 + 0x20))));
        *(undefined4 *)(pAVar4 + 8) = *((undefined4 *)GEN_TOP((iVar6 + *(int *)(iVar1 + 0x20))));
        *(undefined4 *)pAVar4 = *((undefined4 *)GEN_TOP((iVar6 + -4 + *(int *)(iVar1 + 0x20))));
        iVar6 = iVar6 + 0x18;
        iVar5 = iVar5 + 0x14;
        pAVar4 = pAVar4 + 0x20;
        iVar3 = (int)param_1 + -1;
        param_1 = pAVar4;
      } while (iVar3 != 0);
    }
    if (((byte)this[0xf9] & 1) != 0) {
      param_1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70))))(*(int * PTR32 *)(this + 0x180))));
    }
  }
  return (uint)param_1;
}

/* ref: FUN_0079f610 */
uint F_0079f610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79f610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar2 = param_1 * 0x20;
  iVar1 = *(int *)((int)this + iVar2 + 0x194);
  if (0 < iVar1) {
    F_005951c0(param_3,iVar1,0,0);
    F_005899e0(param_3,*(undefined4 *)((int)this + iVar2 + 0x1a0));
  }
  if (*(char *)((int)this + iVar2 + 0x1a8) == '\0') {
    F_0059d670((undefined *)param_2[2],7);
  }
  else {
    F_0059d670((undefined *)param_2[2],0x11);
    uVar4 = (uint)*(byte *)((int)this + iVar2 + 0x1a8);
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    pvVar3 = (undefined *)F_00559ba0(param_2[3]);
    F_0057eb30(pvVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  }
  uVar5 = *(undefined4 *)((int)this + iVar2 + 400);
  pvVar3 = (undefined *)F_00559ba0(*param_2);
  F_00584110(pvVar3,uVar5);
  uVar5 = *(undefined4 *)((int)this + iVar2 + 0x198);
  pvVar3 = (undefined *)F_00559ba0(param_2[4]);
  F_00584110(pvVar3,uVar5);
  uVar5 = *(undefined4 *)((int)this + iVar2 + 0x19c);
  pvVar3 = (undefined *)F_00559ba0(param_2[5]);
  F_00584110(pvVar3,uVar5);
  uVar5 = *(undefined4 *)((int)this + iVar2 + 0x1a4);
  pvVar3 = (undefined *)F_00559ba0(param_2[6]);
  uVar4 = F_00584110(pvVar3,uVar5);
  return uVar4;
}

/* ref: FUN_0079f710 */
uint F_0079f710(unsigned int gen_a0)
{
  GEN_ENTER(0x79f710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca3cc));
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
  F_00580ea0((undefined *)((int)this + 0x1ac));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined2 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_0079f7b0 */
uint F_0079f7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x79f7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca3cc));
  F_00590cc0((undefined *)((int)this + 0x1ac));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf5 */
uint F_0079f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  F_0059bc90(this + 0x1ac);
  uVar1 = F_00580fd0(this + 0x1ac);
  uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((((uVar2 == 5) || (uVar2 == 4)) && (uVar1 != 0)) &&
     ((*(int *)(uVar1 + 4) != 0 && ((*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0xf9))) & 1) != 0)))) {
    this[0xf9] = (undefined1)((byte)this[0xf9] | 0x40);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 4) + 0x8c))))(*(int * PTR32 *)(uVar1 + 4));
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf6 */
uint F_0079f840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79f840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00580f10(this + 0x1ac,0,0);
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf36 */
byte F_0079f870(unsigned int gen_a0)
{
  GEN_ENTER(0x79f870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this);
  bVar1 = F_00560e80(this + 0x1ac,this);
  return bVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf38 */
uint F_0079f890(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x79f890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x1ac,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf39 */
unsigned int F_0079f8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x79f8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x1ac);
  return 0;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf41 */
uint F_0079f8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x79f8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"RetainerInventory",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonInventoryRetainer::vf25 */
uint F_0079f8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x79f8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  
  if (*(int *)(this + 0x1ec) != 0) {
    uVar1 = F_0055dcb0();
    piVar2 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14),*(undefined4 *)(this + 0x1ec));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x8c))(piVar2);
    }
    if (this[500] == (undefined1)0x1) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    }
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf46 */
byte F_0079f990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79f990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0xf) != 0)) {
    if (*(int *)(param_2 + 4) == 1) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    }
    else if (*(int *)(param_2 + 4) == 2) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
      return 0;
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf33 */
uint F_0079f9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x79f9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  uVar1 = F_00580fd0(this + 0x1ac);
  if ((uVar1 == 0) ||
     (pAVar2 = *(undefined * PTR32 *)(uVar1 + 4),
     *(undefined * PTR32 *)(uVar1 + 4) == (undefined *)0x0)) {
    pAVar2 = this;
  }
  return (uint)pAVar2;
}

/* ref: FUN_0079f9f0 */
uint F_0079f9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x79f9f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079fa30 */
uint F_0079fa30(unsigned int gen_a0)
{
  GEN_ENTER(0x79fa30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_0079fa70 */
uint F_0079fa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79fa70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 7) {
    uVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),1);
    return uVar1;
  }
  uVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),0);
  return uVar1;
}

/* ref: FUN_0079faa0 */
unsigned int F_0079faa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79faa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x1f5) != '\0') {
    uVar1 = F_0055dcb0();
    uVar1 = F_0055b9a0(uVar1);
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b990(uVar2);
    if (param_1 == 7) {
      F_00560f70(*(undefined4 *)((int)this + 0x1e8),uVar2,uVar1);
      return 0;
    }
    F_00560f70(*(undefined4 *)((int)this + 0x1e4),uVar2,uVar1);
  }
  return 0;
}

/* ref: FUN_0079fb00 */
uint F_0079fb00(unsigned int gen_a0)
{
  GEN_ENTER(0x79fb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x1ec) != 0) {
    uVar2 = F_0055dcb0();
    piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),*(undefined4 *)((int)this + 0x1ec));
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x8c))(piVar3);
    }
    if (*(char *)((int)this + 500) == '\x01') {
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  bVar1 = *(byte *)((int)this + 0x13a);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_0079fbd0 */
uint F_0079fbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x79fbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca4cc));
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
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf41 */
uint F_0079fcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x79fcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"RetainerInventoryGrid",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0079fce0 */
uint F_0079fce0(unsigned int gen_a0)
{
  GEN_ENTER(0x79fce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  uVar2 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  if (uVar2 != 0) {
    return *(uint *)(uVar2 + 0x1f0);
  }
  return 0;
}

/* ref: FUN_0079fd10 */
uint F_0079fd10(unsigned int gen_a0)
{
  GEN_ENTER(0x79fd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca5cc));
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf41 */
uint F_0079fd50(unsigned int gen_a0)
{
  GEN_ENTER(0x79fd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"RetainerInventoryGridCrystal",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf47 */
uint F_0079fd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79fd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined2 uVar1;
  undefined * this_00;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  
  (*(int *)(gen_frame + 0x14)) = *(int *)(param_1 + 0x84);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0xc)) = *(int *)(param_2 + 0x78);
  param_1 = F_0055dcb0();
  if (*(char *)(param_1 + 0xbc) == '\0') {
    F_00560760(&(*(char * PTR32 *)(gen_frame + 0x0)));
    (*(undefined1 *)(gen_frame + 0xa)) = 2;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x2e;
    param_2 = 500;
    param_1 = 100;
    do {
      this_00 = *(undefined * PTR32 *)(this + param_1 + 0x11c);
      if (this_00 != (undefined *)0x0) {
        puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0x28))))((int)this_00 + 0x84)));
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0xc))))((int)this_00 + 0x84);
        uVar4 = *((uint *)GEN_TOP((param_2 + 4 + *(int *)((*(int *)(gen_frame + 0x14)) + 0x20))));
        uVar3 = *((uint *)GEN_TOP((param_2 + 8 + *(int *)((*(int *)(gen_frame + 0x14)) + 0x20)))) & 0xffff;
        *(undefined4 *)((int)this_00 + 0x98) = 0x8000;
        *puVar2 = 0x2e;
        puVar2[1] = uVar3;
        if (uVar3 == 0xffff) {
          puVar2[1] = 0xffffffff;
        }
        puVar2[0x19] = uVar4 & 0xffff;
        F_0056e530(this_00,2);
        uVar1 = *(undefined2 *)(puVar2 + 1);
        uVar4 = (int)uVar4 >> 0x10 & 0xffff;
        *(byte *)((int)this_00 + 0xaa) =
             *(byte *)((int)this_00 + 0xaa) ^
             ((uVar4 == 0) * '\x02' ^ *(byte *)((int)this_00 + 0xaa)) & 2;
        *(undefined2 *)((int)this_00 + 0x9c) = uVar1;
        (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)F_00561530(this_00,3);
        uVar4 = F_00560910(uVar4);
        F_00584110((*(undefined * PTR32 *)(gen_frame + 0x10)),uVar4);
        (*(char * PTR32 *)(gen_frame + 0x0)) = *((char * PTR32 *)GEN_TOP((param_1 + *(int *)((*(int *)(gen_frame + 0xc)) + 0x20))));
        if ((*(char * PTR32 *)(gen_frame + 0x0)) == (char *)0x0) {
          (*(char * PTR32 *)(gen_frame + 0x0)) = "";
        }
        (*(undefined1 *)(gen_frame + 0xb)) = *(undefined1 *)((int)this_00 + 0x9c);
        F_005916c0(this_00,(uint)(puVar2[1] != -1) * 4 + 2,(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x18))[0x13a],&(*(char * PTR32 *)(gen_frame + 0x0)));
        this = (*(undefined * PTR32 *)(gen_frame + 0x18));
      }
      param_2 = param_2 + 0xc;
      param_1 = param_1 + 4;
    } while ((int)param_1 < 0xac);
  }
  return param_1;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf52 */
byte F_0079fef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79fef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*param_1 == 2) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (this_00 != (undefined *)0x0) {
      F_0079fb00(this_00);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_0079ff30 */
byte F_0079ff30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ff30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  int * piVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined1 * this_00;
  int * piVar7;
  int iVar8;
  
  piVar2 = (int *)*param_3;
  if (piVar2 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = piVar2 + -0x21;
  }
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  if (*piVar4 != 0x26) {
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  uVar3 = *puVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar3;
  uVar1 = *(ushort *)(piVar7 + 0x27);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
  (*(uint *)(gen_frame + 0x10)) = (uint)uVar1;
  uVar6 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 4))))(*(int * PTR32 *)(uVar6 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x2e,2,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(((undefined1 *)(gen_frame + 0x14)));
  this_00 = ((undefined1 *)(gen_frame + 0x14));
  iVar8 = 1;
  do {
    this_00 = this_00 + -8;
    F_005a2670(this_00);
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  return 1;
}

/* ref: Client::UI2::AddonMonsterNote::vf37 */
uint F_007a0000(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonMonsterNote::vf41 */
uint F_007a0030(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"MonsterNoteBook",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonMonsterNote::vf47 */
unsigned int F_007a0040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::AddonMonsterNote::vf25 */
uint F_007a0050(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a0069 */
unsigned int F_007a0069(void)
{
  GEN_ENTER(0x7a0069u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_007a0073 */
unsigned int F_007a0073(void)
{
  GEN_ENTER(0x7a0073u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_007a0080 */
uint F_007a0080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a0080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 1;
  do {
    if (*(int *)((int)this + iVar2 * 4) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + iVar2 * 4);
      in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(uint)((param_1 & uVar3) != 0));
    }
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while (iVar2 < 4);
  return in_EAX;
}

/* ref: FUN_007a00d0 */
uint F_007a00d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a00d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  
  iVar3 = 0;
  pbVar4 = (byte *)(param_1 + param_2 * 8);
  do {
    uVar1 = *(uint *)((int)this + iVar3 * 4);
    pbVar5 = pbVar4;
    if (((uVar1 != 0) && (((byte)*(undefined4 *)pbVar4 & 0xf) == 4)) &&
       (this_00 = *(undefined * PTR32 *)(uVar1 + 0x108), this_00 != (undefined *)0x0)) {
      uVar1 = F_00559b70(this_00);
      if (uVar1 == 2) {
        pbVar5 = pbVar4 + 8;
        if ((*pbVar4 & 0xf) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(pbVar4 + 4);
        }
        uVar1 = F_00591c00(this_00,uVar2,0);
      }
    }
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar5;
  } while (iVar3 < 4);
  return uVar1;
}

/* ref: FUN_007a0140 */
uint F_007a0140(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = *(uint *)((int)this + iVar2 * 4);
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x108);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00559b70(this_00);
      if (uVar1 == 2) {
        uVar1 = F_00591c00(this_00,0xffffffff,0);
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return uVar1;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf25 */
uint F_007a01a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a01a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf41 */
uint F_007a01c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a01c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"GatheringNoteBook",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf47 */
uint F_007a01d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a01d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  code * pcVar3;
  undefined4 uVar4;
  uint * puVar5;
  int iVar6;
  undefined * pAVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 100);
  puVar5 = *(uint * PTR32 *)(iVar1 + 0x20);
  uVar9 = *puVar5;
  iVar12 = *(int *)(param_2 + 0x58);
  if (uVar9 != 0) {
    if ((uVar9 & 0x20) != 0) {
      uVar2 = puVar5[1];
      *(uint *)(this + 0x1a0) = uVar2;
      puVar5 = (uint *)F_007a0080(this + 0x180,uVar2);
    }
    if ((uVar9 & 8) != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
      iVar6 = 8;
      do {
        *(undefined4 *)(this + iVar6 + 0x1a4) = *((undefined4 *)GEN_TOP((iVar6 + *(int *)(iVar12 + 0x20))));
        iVar6 = iVar6 + 4;
      } while (iVar6 < 0x18);
      pcVar3 = *(gen_code32 *)(*(int *)this + 0xe0);
      this[0x1bc] = (undefined1)0x1;
      puVar5 = ((uint *)GEN_TOP((*pcVar3)(this)));
    }
    if ((uVar9 & 1) != 0) {
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8)));
      puVar5 = (uint *)F_0059ead0(*(undefined * PTR32 *)(this + 400),iVar6,0,1);
      if (0 < iVar6) {
        iVar11 = 0;
        if (0 < iVar6) {
          iVar10 = 0x10;
          pAVar7 = this + 0x1ca;
          do {
            uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar12 + 0x20) + 8 + iVar10)));
            *(short *)(pAVar7 + -2) = (short)iVar11;
            *(undefined4 *)(pAVar7 + -6) = uVar4;
            iVar11 = iVar11 + 1;
            *pAVar7 = (undefined1)(*((int *)GEN_TOP((iVar10 + *(int *)(iVar1 + 0x20)))) != 0);
            iVar10 = iVar10 + 4;
            pAVar7 = pAVar7 + 8;
          } while (iVar11 < iVar6);
        }
        uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc)));
        *(undefined4 *)(this + 0x1a4) = uVar4;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x74))))(*(int * PTR32 *)(this + 400),uVar4,0);
        puVar5 = (uint *)F_005623b0(*(undefined * PTR32 *)(this + 400),*(undefined4 *)(this + 0x1a4));
      }
    }
    if ((uVar9 & 2) != 0) {
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xb0)));
      F_0059ead0(*(undefined * PTR32 *)(this + 0x194),iVar6,0,1);
      if (iVar6 < 1) {
        puVar5 = (uint *)F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x66);
      }
      else {
        uVar4 = **(undefined4 * PTR32 *)(iVar12 + 0x20);
        F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x65);
        param_2 = 0;
        if (0 < iVar6) {
          iVar11 = 0xb8;
          local_10 = 0xb8;
          pAVar7 = this + 0x310;
          do {
            *(short *)(pAVar7 + -4) = (short)param_2;
            *(undefined4 *)pAVar7 = *((undefined4 *)GEN_TOP((local_10 + *(int *)(iVar12 + 0x20))));
            *(undefined4 *)(pAVar7 + -0xc) = *((undefined4 *)GEN_TOP((iVar11 + 4 + *(int *)(iVar1 + 0x20))));
            pAVar7[-1] = (undefined1)
                         (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + iVar11))) != 0);
            *(undefined4 *)(pAVar7 + -8) = *((undefined4 *)GEN_TOP((iVar11 + *(int *)(iVar1 + 0x20))));
            uVar2 = *((uint *)GEN_TOP((iVar11 + 0xc + *(int *)(iVar1 + 0x20))));
            uVar8 = uVar2 & 0xffff;
            pAVar7[-2] = SUB41(uVar2 >> 0x10,0);
            pAVar7[4] = (undefined1)0x0;
            if (uVar8 != 0) {
              F_00c472af(pAVar7 + 4,0x14,&REFG(undefined, 0x10c1b90),uVar4,uVar8);
            }
            local_10 = local_10 + 4;
            param_2 = param_2 + 1;
            iVar11 = iVar11 + 0x10;
            pAVar7 = pAVar7 + 0x24;
          } while (param_2 < iVar6);
        }
        uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xb4)));
        *(undefined4 *)(this + 0x1a8) = uVar4;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x194) + 0x74))))(*(int * PTR32 *)(this + 0x194),uVar4,0);
        puVar5 = (uint *)F_005623b0(*(undefined * PTR32 *)(this + 0x194),*(undefined4 *)(this + 0x1a8));
      }
    }
    if ((uVar9 & 4) != 0) {
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x298)));
      if (iVar6 < 1) {
        puVar5 = (uint *)F_00591410(*(undefined * PTR32 *)(this + 0x198),0);
      }
      else {
        puVar5 = (uint *)F_00596e00(*(undefined * PTR32 *)(this + 0x198),iVar1,iVar12,0xa7,0x4c,2,2,iVar6,
                                      this + 0x73c);
        iVar12 = 0;
        if (0 < iVar6) {
          param_2 = 0x2a0;
          do {
            puVar5 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x54))))
                                       (*(undefined4 *)(this + 0x198),iVar12,
                                        (uint)(*((int *)GEN_TOP((param_2 + *(int *)(iVar1 + 0x20)))) == 0))));
            param_2 = param_2 + 8;
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar6);
        }
        iVar12 = 0;
        if (0 < iVar6) {
          do {
            uVar9 = F_0056dc60(*(undefined4 *)(this + 0x198),iVar12);
            if ((uVar9 != 0) && (*(char *)(uVar9 + 0x2c) == '\0')) {
              uVar9 = F_00592870(*(undefined * PTR32 *)(this + 0x198),iVar12,0);
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar6);
          **(undefined4 * PTR32 *)(iVar1 + 0x20) = 0;
          return uVar9;
        }
      }
    }
    **(undefined4 * PTR32 *)(iVar1 + 0x20) = 0;
  }
  return (uint)puVar5;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf56 */
unsigned int F_007a0500(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  uint uVar2;
  undefined * pAVar3;
  undefined4 * puVar4;
  
  if (this[0x1bc] != (undefined1)0x0) {
    pAVar3 = this + 0x180;
    (*(int *)(gen_frame + 0x18)) = 4;
    do {
      F_00560760(((undefined4 *)(gen_frame + 0x8)));
      AVar1 = this[0x13a];
      ((undefined4 *)(gen_frame + 0x8))[0] = *(undefined4 *)(pAVar3 + 0x2c);
      (*(uint *)(gen_frame + 0x14)) = F_0055dcb0();
      puVar4 = ((undefined4 *)(gen_frame + 0x8));
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3);
      F_00590ad0((undefined *)((*(uint *)(gen_frame + 0x14)) + 0xe0),2,(uint)(byte)AVar1,uVar2,puVar4);
      pAVar3 = pAVar3 + 4;
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + -1;
    } while ((*(int *)(gen_frame + 0x18)) != 0);
  }
  return 0;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf57 */
unsigned int F_007a0570(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  if (this[0x1bc] != (undefined1)0x0) {
    pAVar3 = this + 0x180;
    local_8 = 4;
    do {
      uVar1 = F_0055dcb0();
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3);
      F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
      pAVar3 = pAVar3 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_007a05c0 */
uint F_007a05c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a05c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  F_00557670(param_1,0);
  uVar2 = *(uint *)(param_2 + 8);
  if ((-1 < (int)uVar2) && (*(uint *)((int)this + 0x1a4) != uVar2)) {
    *(uint *)((int)this + 0x1a4) = uVar2;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    uVar1 = *(undefined4 *)(param_2 + 8);
    (*(undefined4 *)(gen_frame + 0x10)) = 1;
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

/* ref: FUN_007a0650 */
uint F_007a0650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  F_00557670(param_1,0);
  uVar2 = *(uint *)(param_2 + 8);
  if ((-1 < (int)uVar2) && (*(uint *)((int)this + 0x1a8) != uVar2)) {
    *(uint *)((int)this + 0x1a8) = uVar2;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    uVar1 = *(undefined4 *)(param_2 + 8);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
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

/* ref: FUN_007a06e0 */
uint F_007a06e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a06e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  F_00557670(param_1,0);
  F_00560760(&(*(char * PTR32 *)(gen_frame + 0x0)));
  (*(char * PTR32 *)(gen_frame + 0x0)) = "";
  (*(undefined2 *)(gen_frame + 0xa)) = 1;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + param_2[2] * 0x24 + 0x308);
  if (*param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*param_2 + 0x70);
  }
  bVar1 = *(byte *)((int)this + 0x13a);
  uVar2 = F_0055dcb0();
  uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),4,(uint)bVar1,uVar3,&(*(char * PTR32 *)(gen_frame + 0x0)),0,0);
  return uVar2;
}

/* ref: FUN_007a0760 */
uint F_007a0760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  F_00557670(param_1,0);
  bVar1 = *(byte *)((int)this + 0x13a);
  uVar2 = F_0055dcb0();
  uVar2 = F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)bVar1,0);
  return uVar2;
}

/* ref: FUN_007a07a0 */
uint F_007a07a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a07a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  F_00584110(this_00,*(undefined4 *)((int)this + param_1 * 8 + 0x1c4));
  if (*(char *)((int)this + param_1 * 8 + 0x1ca) != '\0') {
    uVar1 = F_0059d640((undefined *)param_2[1],0x65);
    return uVar1;
  }
  uVar1 = F_0059d640((undefined *)param_2[1],0x11);
  return uVar1;
}

/* ref: FUN_007a07f0 */
uint F_007a07f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a07f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if ((char)param_2 == '\0') {
      param_1 = param_1 + 1;
      if (3 < (int)param_1) {
        param_1 = 0;
      }
    }
    else {
      param_1 = param_1 - 1;
      if ((int)param_1 < 0) {
        param_1 = 3;
      }
    }
    if ((*(uint *)((int)this + 0x1a0) & 1 << ((byte)param_1 & 0x1f)) != 0) break;
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      return 0;
    }
  }
  return param_1;
}

/* ref: FUN_007a0840 */
byte F_007a0840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a0840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  if (*(int *)((int)this + 0x19c) != param_1) {
    *(int *)((int)this + 0x19c) = param_1;
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x180);
    uVar3 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar3 + 0xc0);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    uVar2 = *(undefined4 *)((int)this + 0x19c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return 1;
  }
  return 0;
}

/* ref: FUN_007a08e0 */
uint F_007a08e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a08e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_0058d480((int)this + 0x188);
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  F_00c48350((undefined *)((int)this + 0x38),0,0x150);
  return (uint)this;
}

/* ref: FUN_007a0950 */
unsigned int F_007a0950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 * puVar2;
  undefined * this_00;
  char cVar3;
  
  if (param_1 < 6) {
    puVar2 = ((undefined4 *)GEN_TOP(((int)this + (param_1 + 1) * 0x38)));
    this_00 = (undefined *)*puVar2;
    if (this_00 != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this_00 + 0x78);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this_00 + 0x7c);
      cVar3 = (char)(*(undefined4 *)(gen_frame + 0xc));
      (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)((int)this_00 + 0x80);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = (char)(*(undefined4 *)(gen_frame + 0xc)) + '\x01';
      (*(char *)(gen_frame + 0x1b)) = (char)(*(undefined4 *)(gen_frame + 0x10));
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3, (unsigned long long)((undefined3)((uint)*(undefined4 *)((int)this_00 + 0x7c) >> 8)));
      cVar1 = (char)(*(undefined4 *)(gen_frame + 0xc)) + '\x02';
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 3)) = cVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT13(cVar1,(undefined3)(*(undefined4 *)(gen_frame + 0xc)));
      F_00561740(this_00,&(*(undefined4 *)(gen_frame + 0xc)),1);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = (*(char *)(gen_frame + 0x1b));
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(*(char *)(gen_frame + 0x1b)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = cVar1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 3)) = cVar3;
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT13(cVar3,(undefined3)(*(undefined4 *)(gen_frame + 0xc)));
      if (0 < (int)param_1) {
        if ((char)param_2 == '\0') {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = (*(char *)(gen_frame + 0x1b)) + -3;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = CONCAT11((*(char *)(gen_frame + 0x1b)) + -3,(*(char *)(gen_frame + 0x1b)));
        }
        else {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = (*(char *)(gen_frame + 0x1b)) + -4;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = CONCAT11((*(char *)(gen_frame + 0x1b)) + -4,(*(char *)(gen_frame + 0x1b)));
        }
      }
      if ((int)param_1 < 5) {
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = (*(char *)(gen_frame + 0x1b)) + '\x03';
        gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 0, 3, (unsigned long long)(CONCAT12((*(char *)(gen_frame + 0x1b)) + '\x03',(undefined2)(*(undefined4 *)(gen_frame + 0xc)))));
      }
      F_00561740((undefined *)puVar2[8],&(*(undefined4 *)(gen_frame + 0xc)),0);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = cVar3;
      (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3),cVar3);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = cVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),cVar1);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 3)) = (*(char *)(gen_frame + 0x1b));
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT13((*(char *)(gen_frame + 0x1b)),(undefined3)(*(undefined4 *)(gen_frame + 0xc)));
      if (0 < (int)param_1) {
        if ((char)param_2 == '\0') {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = cVar3 + -1;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = CONCAT11(cVar3 + -1,cVar1);
        }
        else {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = cVar3 + -3;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = CONCAT11(cVar3 + -3,cVar1);
        }
      }
      if ((int)param_1 < 5) {
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = cVar3 + '\x05';
        gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 0, 3, (unsigned long long)(CONCAT12(cVar3 + '\x05',(undefined2)(*(undefined4 *)(gen_frame + 0xc)))));
      }
      F_00561740((undefined *)puVar2[9],&(*(undefined4 *)(gen_frame + 0xc)),2);
    }
  }
  return 0;
}

/* ref: FUN_007a0a40 */
uint F_007a0a40(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_0058d590(*(undefined * PTR32 *)this);
  }
  iVar1 = *(int *)((int)this + 0x1c4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this);
    F_00596b10((undefined *)(iVar1 + 0xe0),uVar2);
    F_00596b10(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0xe0))),*(undefined4 *)((int)this + 0x24));
    uVar2 = F_00596b10(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0xe0))),
                         *(undefined4 *)((int)this + 0x34));
    puVar3 = (undefined4 *)((int)this + 0x48);
    local_8 = 2;
    do {
      if (puVar3 != (undefined4 *)0x10) {
        iVar1 = *(int *)((int)this + 0x1c4);
        uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x38))((int *)*puVar3);
        F_00596b10((undefined *)(iVar1 + 0xe0),uVar2);
        uVar2 = F_0058d590((undefined *)*puVar3);
      }
      puVar3 = puVar3 + 0xe;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return uVar2;
}

/* ref: FUN_007a0af0 */
uint F_007a0af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a0af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)((int)this + 0x24);
  do {
    this_00 = (undefined *)puVar3[-3];
    F_0055a300(this_00,0);
    F_0055a3c0(this_00,0);
    F_00596b10(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0xe0))),*puVar3);
    uVar1 = param_1;
    if ((-1 < (int)param_1) && ((int)param_1 <= iVar2)) {
      F_00584110((undefined *)puVar3[-2],"");
      uVar1 = F_00584110((undefined *)puVar3[-1],"");
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 4;
  } while (iVar2 < 2);
  return uVar1;
}

/* ref: FUN_007a0b70 */
uint F_007a0b70(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x1c4) != 0) {
    uVar1 = F_0056a410(*(undefined4 *)((int)this + 0x1b8));
    in_EAX = F_00584110(*(undefined * PTR32 *)((int)this + 0x10),uVar1);
  }
  return in_EAX;
}

/* ref: FUN_007a0ba0 */
uint F_007a0ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a0ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  if (((param_1 < 6) && (pvVar1 = ((undefined *)GEN_TOP(((int)this + (param_1 + 1) * 0x38))), pvVar1 != (undefined *)0x0)
      ) && (*(char *)((int)pvVar1 + 0x35) != '\0')) {
    return *(uint *)((int)pvVar1 + 0x30);
  }
  return 0;
}

/* ref: FUN_007a0bd0 */
uint F_007a0bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a0bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((param_1 < 6) &&
       (pvVar1 = ((undefined *)GEN_TOP(((int)this + (param_1 + 1) * 0x38))), pvVar1 != (undefined *)0x0)) &&
      (*(char *)((int)pvVar1 + 0x35) != '\0')) && (*(int *)((int)pvVar1 + 0x10) != 0)) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x3c))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    return uVar2;
  }
  return 0;
}

/* ref: FUN_007a0c10 */
uint F_007a0c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  
  if (((param_1 < 6) &&
      (pvVar1 = ((undefined *)GEN_TOP(((int)this + (param_1 + 1) * 0x38))), param_1 = 0, pvVar1 != (undefined *)0x0)) &&
     (pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x1c), param_1 = 0, pvVar1 != (undefined *)0x0)) {
    param_1 = F_00584110(pvVar1,param_2);
  }
  return param_1;
}

/* ref: FUN_007a0c50 */
unsigned int F_007a0c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a0c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x260) != (undefined *)0x0) {
    this_00 = (undefined *)F_0055e2f0(*(undefined * PTR32 *)((int)this + 0x260),0x15);
    F_0059d670(this_00,((char)param_1 == '\0') + 0x65);
  }
  return 0;
}

/* ref: FUN_007a0c80 */
uint F_007a0c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x7c) + 0x28))))(*(int * PTR32 *)((int)this + 0x7c),param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x78) + 0x28))))(*(int * PTR32 *)((int)this + 0x78),param_2);
  return uVar1;
}

/* ref: FUN_007a0cb0 */
unsigned int F_007a0cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a0cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)((int)this + 0x260) != 0) {
    F_00584110(*(undefined * PTR32 *)this,param_1);
    F_00584110(*(undefined * PTR32 *)((int)this + 4),param_3);
    F_00584110(*(undefined * PTR32 *)((int)this + 8),param_4);
    uVar1 = F_00568410(*(undefined * PTR32 *)((int)this + 0xc));
    uVar1 = F_0055e380(*(undefined * PTR32 *)((int)this + 0x260),uVar1);
    F_0058f730((undefined *)(uVar1 + 4),param_2,0,6);
    uVar5 = (uint)*(ushort *)((int)this + 0x14);
    uVar1 = (uint)*(ushort *)((int)this + 0x12);
    uVar4 = (uint)*(ushort *)((int)this + 0x10);
    uVar9 = *(undefined4 *)this;
    uVar2 = F_0055e2f0(*(undefined * PTR32 *)((int)this + 0x260),2);
    uVar7 = *(undefined4 *)((int)this + 4);
    uVar6 = *(undefined4 *)((int)this + 0xc);
    uVar8 = *(undefined4 *)((int)this + 8);
    uVar3 = F_0055e2f0(*(undefined * PTR32 *)((int)this + 0x260),4);
    F_007851d0(uVar3,uVar6,uVar7,uVar8,uVar2,uVar9,uVar4,uVar1,uVar5);
  }
  return 0;
}

/* ref: FUN_007a0d60 */
uint F_007a0d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a0d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 1;
  piVar4 = (int *)((int)this + 0x18);
  iVar2 = 8;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(uint)((param_1 & uVar3) != 0));
    }
    piVar4 = piVar4 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return in_EAX;
}

/* ref: FUN_007a0da0 */
uint F_007a0da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  uVar2 = param_2;
  iVar1 = param_2 * 8;
  puVar5 = (undefined4 *)((int)this + 0x18);
  param_2 = 8;
  pbVar3 = (byte *)(param_1 + iVar1);
  do {
    pbVar4 = pbVar3;
    if ((undefined *)puVar5[0x10] != (undefined *)0x0) {
      pbVar4 = pbVar3 + 8;
      if ((*pbVar3 & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(pbVar3 + 4);
      }
      uVar2 = F_00568410((undefined *)puVar5[0x10]);
      uVar2 = F_00561570((undefined *)*puVar5,uVar2);
      uVar2 = F_0058f730((undefined *)(uVar2 + 4),uVar6,0,6);
    }
    puVar5 = puVar5 + 1;
    param_2 = param_2 + -1;
    pbVar3 = pbVar4;
  } while (param_2 != 0);
  return uVar2;
}

/* ref: FUN_007a0e20 */
uint F_007a0e20(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca7f4));
  F_0058d4b0((undefined *)((int)this + 0x3a0));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf41 */
uint F_007a0e50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"RecipeNoteBook",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf46 */
byte F_007a0e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x60) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 100);
    }
    if ((*(byte *)(param_2 + 0x58) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x5c);
    }
    if ((*(byte *)(param_2 + 0x50) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x54);
    }
    if ((*(byte *)(param_2 + 0x48) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x4c);
    }
    F_007a0cb0(this + 0x180,uVar2,uVar1,uVar4,uVar3);
  }
  return 1;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf25 */
uint F_007a0ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a0ed0 */
uint F_007a0ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0ed0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if ((-1 < (int)uVar2) && (*(uint *)((int)this + 0x1514) != uVar2)) {
    *(uint *)((int)this + 0x1514) = uVar2;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x28))))(*(int * PTR32 *)((int)this + 0x1fc),0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1f8),0);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    sVar1 = *((short *)GEN_TOP(((int)this + (*(int *)(param_2 + 8) * 5 + 0xaa) * 8)));
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

/* ref: FUN_007a0fb0 */
uint F_007a0fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a0fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  F_00557670(param_1,0);
  iVar3 = *param_2;
  iVar1 = param_2[2] * 0x28;
  uVar5 = F_00584440(*(undefined * PTR32 *)(iVar3 + 0x104),
                       *(undefined4 *)((int)this + param_2[2] * 0x28 + 0x554));
  F_00560760(&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + iVar1 + 0x554);
  (*(undefined1 *)(gen_frame + 0xa)) = 1;
  bVar2 = *(byte *)((int)this + 0x13a);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + iVar1 + 0x548);
  (*(undefined1 *)(gen_frame + 0xb)) = 0;
  uVar4 = *(undefined4 *)(iVar3 + 0x1e4);
  uVar6 = F_0055dcb0();
  uVar5 = F_00588780((undefined *)(uVar6 + 0xe0),(uint)((char)uVar5 != '\0') * 2 + 4,(uint)bVar2,uVar4,
                       &(*(undefined4 *)(gen_frame + 0x0)),0,0);
  return uVar5;
}

/* ref: FUN_007a1050 */
uint F_007a1050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00557670(param_1,0);
  uVar1 = F_0055dcb0();
  uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),0);
  return uVar1;
}

/* ref: FUN_007a1080 */
uint F_007a1080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x1f8) != 0) {
    F_0059b390(this,*(int *)((int)this + 0x1f8),1,0);
  }
  F_00557670(param_1,0);
  bVar1 = F_005a9130(this,7);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a10c0 */
uint F_007a10c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a10c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if (5 < param_1) {
    F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x2c));
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  uVar1 = (int)this + param_1 * 0x38 + 0x250;
  if ((uVar1 == 0) || (*(char *)(uVar1 + 0x35) == '\0')) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = *(int *)(uVar1 + 0x30);
    if ((*(int *)(gen_frame + 0xc)) < 0) goto LAB_007a119d;
  }
  if (((uVar1 != 0) && (*(char *)(uVar1 + 0x35) != '\0')) && (*(int *)(uVar1 + 0x10) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x10) + 0x3c))))(*(int * PTR32 *)(uVar1 + 0x10));
    if (uVar1 != 0) {
      F_0059b340(this,uVar1,1,0);
    }
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = 8;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(uint *)(gen_frame + 0x1c)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0xc));
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
LAB_007a119d: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf56 */
unsigned int F_007a11d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a11d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  uint uVar2;
  undefined * pAVar3;
  undefined4 * puVar4;
  
  if (this[0x1518] != (undefined1)0x0) {
    pAVar3 = this + 0x198;
    (*(int *)(gen_frame + 0x18)) = 8;
    do {
      F_00560760(((undefined4 *)(gen_frame + 0x8)));
      AVar1 = this[0x13a];
      ((undefined4 *)(gen_frame + 0x8))[0] = *(undefined4 *)(pAVar3 + 0x1350);
      (*(uint *)(gen_frame + 0x14)) = F_0055dcb0();
      puVar4 = ((undefined4 *)(gen_frame + 0x8));
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3);
      F_00590ad0((undefined *)((*(uint *)(gen_frame + 0x14)) + 0xe0),2,(uint)(byte)AVar1,uVar2,puVar4);
      pAVar3 = pAVar3 + 4;
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + -1;
    } while ((*(int *)(gen_frame + 0x18)) != 0);
  }
  return 0;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf57 */
unsigned int F_007a1250(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  if (this[0x1518] != (undefined1)0x0) {
    pAVar3 = this + 0x198;
    local_8 = 8;
    do {
      uVar1 = F_0055dcb0();
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3);
      F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
      pAVar3 = pAVar3 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_007a12a0 */
uint F_007a12a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a12a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  if (this_00 != (undefined *)0x0) {
    F_00584110(this_00,*(undefined4 *)((int)this + param_1 * 8 + 1000));
  }
  uVar1 = F_0059d640((undefined *)param_2[1],(uint)*(ushort *)((int)this + param_1 * 8 + 0x3e6));
  return uVar1;
}

/* ref: FUN_007a12e0 */
uint F_007a12e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a12e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00584110(this_00,*(undefined4 *)((int)this + param_1 * 8 + 0x528));
  }
  return uVar1;
}

/* ref: FUN_007a1320 */
uint F_007a1320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if ((char)param_2 == '\0') {
      param_1 = param_1 + 1;
      if (7 < (int)param_1) {
        param_1 = 0;
      }
    }
    else {
      param_1 = param_1 - 1;
      if ((int)param_1 < 0) {
        param_1 = 7;
      }
    }
    if ((*(uint *)((int)this + 0x1508) & 1 << ((byte)param_1 & 0x1f)) != 0) break;
    iVar1 = iVar1 + 1;
    if (7 < iVar1) {
      return 0;
    }
  }
  return param_1;
}

/* ref: FUN_007a1370 */
uint F_007a1370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x14e4) = param_1;
  if ((char)param_2 != '\0') {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = *(undefined4 *)((int)this + 0x208);
      break;
    case 1: ;
      uVar2 = *(undefined4 *)((int)this + 0x210);
      break;
    case 2: ;
      uVar2 = *(undefined4 *)((int)this + 0x20c);
      break;
    case 3: ;
      uVar2 = *(undefined4 *)((int)this + 0x1fc);
      break;
    default: ;
      goto switchD_007a138a_default;
    }
    F_0059b390(this,uVar2,1,0);
  }
switchD_007a138a_default: ;
  if ((*(int *)((int)this + 0x14e4) != 0) && (*(int *)((int)this + 0x14e4) != 2)) {
    bVar1 = F_0056b630(this,0x184,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: Client::UI2::AddonFishingNote::vf41 */
uint F_007a1420(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"FishingNoteBook",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonFishingNote::vf25 */
uint F_007a1430(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonFishingNote::vf56 */
uint F_007a1440(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  uint uVar2;
  uint uVar3;
  undefined * pAVar4;
  uint * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  ((uint *)(gen_frame + 0x8))[0] = F_00560760(((uint *)(gen_frame + 0x8)));
  pAVar4 = this + 0x1a4;
  (*(int *)(gen_frame + 0x18)) = 2;
  do {
    if ((*(int *)pAVar4 != 0) && (((uint *)(gen_frame + 0x8))[0] = *(uint *)(pAVar4 + 0xd2c), ((uint *)(gen_frame + 0x8))[0] != 0)) {
      AVar1 = this[0x13a];
      uVar2 = F_0055dcb0();
      puVar5 = ((uint *)(gen_frame + 0x8));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x38))))(*(int * PTR32 *)pAVar4);
      ((uint *)(gen_frame + 0x8))[0] = F_00590ad0((undefined *)(uVar2 + 0xe0),2,(uint)(byte)AVar1,uVar3,puVar5);
      this = (*(undefined * PTR32 *)(gen_frame + 0x14));
    }
    pAVar4 = pAVar4 + 4;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + -1;
  } while ((*(int *)(gen_frame + 0x18)) != 0);
  return ((uint *)(gen_frame + 0x8))[0];
}

/* ref: Client::UI2::AddonFishingNote::vf57 */
unsigned int F_007a14c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a14c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  pAVar3 = this + 0x1a4;
  local_8 = 2;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar1 = F_0055dcb0();
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3);
      F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
    }
    pAVar3 = pAVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_007a1510 */
byte F_007a1510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (((999 < param_1) && ((char)param_2[1] == '\0')) && (*param_2 == 2)) {
    F_0059b390(this,*(undefined4 *)((int)this + 0x184),1,0);
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    return 1;
  }
  return 0;
}

/* ref: FUN_007a1580 */
byte F_007a1580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    F_0059b390(this,*(undefined4 *)((int)this + 0x184),1,0);
    return 1;
  }
  if ((((param_1 == 1) && (iVar2 = *(int *)(param_2 + 8), -1 < iVar2)) &&
      (iVar2 < *(int *)((int)this + 0xedc))) &&
     ((bVar1 = *(byte *)((int)this + iVar2 * 0xc + 0x2b0), (~bVar1 & 1) != 0 &&
      ((bVar1 & 0x10) != 0)))) {
    uVar5 = 0;
    uVar4 = 1;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1ac) + 0x3c))))(*(int * PTR32 *)((int)this + 0x1ac));
    F_0059b340(this,uVar3,uVar4,uVar5);
  }
  return 0;
}

/* ref: FUN_007a1600 */
byte F_007a1600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  if ((param_1 == 1) && (*(int *)((int)this + 0x180) != 0)) {
    piVar1 = *(int * PTR32 *)((int)this + 0x180);
    ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1,piVar1[0x30],0);
    F_0059b390(this,*(undefined4 *)((int)this + 0x180),1,0);
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    return 1;
  }
  return 0;
}

/* ref: FUN_007a1680 */
uint F_007a1680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = (*(uint *)(gen_frame + 0x18));
  if (param_1 == 1) {
    iVar3 = *(int *)(param_2 + 8);
    uVar2 = 0;
    if (((-1 < iVar3) && (iVar3 < *(int *)((int)this + 0xedc))) &&
       ((*(byte *)((int)this + iVar3 * 0xc + 0x2b0) & 1) != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(int *)(gen_frame + 0xc)) = iVar3;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this + (iVar3 * 3 + 0xab) * 4)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
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
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_007a1760 */
byte F_007a1760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 - 1000U < 10) {
    F_0056b630(this,0x18af1,7,0,9,0,0);
    return 1;
  }
  F_0056b630(this,0x18af0,7,0,9,0,0);
  return 1;
}

/* ref: FUN_007a17a0 */
byte F_007a17a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a17a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)((int)this + 0xee2) != '\0') {
    *(undefined1 *)((int)this + 0xee2) = 0;
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x21b) = 0;
    uVar1 = F_0055dcb0();
    F_005aa060((undefined *)(uVar1 + 0x20c),0,0);
    uVar4 = 3;
    uVar3 = 5;
    pvVar2 = this;
    this_00 = (undefined *)F_0055dcb0();
    F_00586850(this_00,uVar3,uVar4,pvVar2);
    uVar4 = 3;
    uVar3 = 4;
    pvVar2 = (undefined *)F_0055dcb0();
    F_00586850(pvVar2,uVar3,uVar4,this);
  }
  return 1;
}

/* ref: FUN_007a1810 */
uint F_007a1810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a1810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00584110(this_00,*(undefined4 *)((int)this + param_1 * 8 + 0x268));
  }
  return uVar1;
}

/* ref: FUN_007a1840 */
uint F_007a1840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined2 * puVar3;
  int iVar4;
  
  uVar2 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 4)));
  iVar4 = 0;
  *(uint *)((int)this + 0xed8) = uVar2;
  if (0 < (int)uVar2) {
    uVar2 = 0xc;
    puVar3 = (undefined2 *)((int)this + 0x26c);
    do {
      *(undefined4 *)(puVar3 + -2) = *((undefined4 *)GEN_TOP(((uVar2 - 4) + *(int *)(param_2 + 0x20))));
      *puVar3 = *((undefined2 *)GEN_TOP((uVar2 + *(int *)(param_1 + 0x20))));
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (iVar4 < *(int *)((int)this + 0xed8));
  }
  if (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0) {
    F_0059ead0(*(undefined * PTR32 *)((int)this + 0x180),(uint)*(ushort *)((int)this + 0xed8),0,1);
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 8)));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x74))))(*(int * PTR32 *)((int)this + 0x180),uVar1,0);
    uVar2 = F_005623b0(*(undefined * PTR32 *)((int)this + 0x180),uVar1);
  }
  return uVar2;
}

/* ref: FUN_007a18d0 */
uint F_007a18d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a18d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  pbVar3 = *((byte * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x2c)));
  *(byte * PTR32 *)((int)this + 0xedc) = pbVar3;
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x30)));
  local_c = 0;
  if (0 < (int)pbVar3) {
    iVar4 = 0x34;
    local_8 = 0x28;
    pbVar3 = (byte *)((int)this + 0x2b0);
    do {
      *(undefined4 *)(pbVar3 + -8) = *((undefined4 *)GEN_TOP((local_8 + *(int *)(param_2 + 0x20))));
      *(undefined4 *)(pbVar3 + -4) = *((undefined4 *)GEN_TOP((iVar4 + 4 + *(int *)(param_1 + 0x20))));
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      local_8 = local_8 + 4;
      *pbVar3 = *pbVar3 ^ ((byte)(*((uint *)GEN_TOP((iVar4 + *(int *)(param_1 + 0x20)))) >> 4) ^ *pbVar3) & 1;
      uVar2 = *((uint *)GEN_TOP((iVar4 + 8 + *(int *)(param_1 + 0x20))));
      *pbVar3 = ((((byte)(uVar2 >> 2) & 1) * '\x04' | (byte)(uVar2 >> 1) & 1) * '\x02' |
                (byte)uVar2 & 1) * '\x02' | *pbVar3 & 0xe1;
      local_c = local_c + 1;
      iVar4 = iVar4 + 0xc;
      pbVar3 = pbVar3 + 0xc;
    } while (local_c < *(int *)((int)this + 0xedc));
  }
  if (*(undefined * PTR32 *)((int)this + 0x184) != (undefined *)0x0) {
    F_00596e00(*(undefined * PTR32 *)((int)this + 0x184),param_1,param_2,0xd,10,3,0,
                 *(undefined4 *)((int)this + 0xedc),(int)this + 0x25c);
    pbVar3 = (byte *)F_00592870(*(undefined * PTR32 *)((int)this + 0x184),uVar1,0);
  }
  return (uint)pbVar3;
}

/* ref: FUN_007a19e0 */
unsigned int F_007a19e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a19e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x194) != (undefined *)0x0) {
    F_00584110(*(undefined * PTR32 *)((int)this + 0x194),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x428))));
  }
  if (*(undefined * PTR32 *)((int)this + 400) != (undefined *)0x0) {
    F_00584110(*(undefined * PTR32 *)((int)this + 400),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x42c))));
  }
  return 0;
}

/* ref: FUN_007a1a30 */
uint F_007a1a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = 0x67;
  if ((*(int *)(uVar1 + 0xc34) != 0) && (uVar2 = 0x66, *(int *)(uVar1 + 0xc40) != 0)) {
    uVar2 = 0x65;
  }
  if (*(undefined * PTR32 *)((int)this + 0x198) != (undefined *)0x0) {
    uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x198),
                         *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x430))));
  }
  if (*(undefined * PTR32 *)((int)this + 0x19c) != (undefined *)0x0) {
    uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x19c),
                         *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x434))));
  }
  if (*(ushort *)((int)this + 0xee0) != uVar2) {
    *(short *)((int)this + 0xee0) = (short)uVar2;
    uVar1 = F_0059d670(*(undefined * PTR32 *)((int)this + 0x1a0),uVar2);
  }
  return uVar1;
}

/* ref: FUN_007a1ac0 */
uint F_007a1ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca8f4));
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x300) = 0xffffffff;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined2 *)((int)this + 0x308) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x234);
  puVar2 = (undefined4 *)((int)this + 0x1a8);
  iVar3 = 0x19;
  do {
    *puVar2 = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonFishGuide::vf37 */
uint F_007a1bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  pAVar3 = this + 0x1a8;
  local_8 = 0x19;
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
  F_005a92d0(this,1,0x3f,0);
  F_005a92d0(this,0,0x3a,1);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFishGuide::vf41 */
uint F_007a1c50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"FishGuide",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonFishGuide::vf46 */
byte F_007a1c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonFishGuide::vf25 */
uint F_007a1c70(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonFishGuide::vf56 */
uint F_007a1c80(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  uint uVar2;
  uint uVar3;
  undefined * pAVar4;
  uint * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  ((uint *)(gen_frame + 0x8))[0] = F_00560760(((uint *)(gen_frame + 0x8)));
  pAVar4 = this + 0x180;
  (*(int *)(gen_frame + 0x18)) = 2;
  do {
    if ((*(int *)pAVar4 != 0) && (((uint *)(gen_frame + 0x8))[0] = *(uint *)(pAVar4 + 0x178), ((uint *)(gen_frame + 0x8))[0] != 0)) {
      AVar1 = this[0x13a];
      uVar2 = F_0055dcb0();
      puVar5 = ((uint *)(gen_frame + 0x8));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x38))))(*(int * PTR32 *)pAVar4);
      ((uint *)(gen_frame + 0x8))[0] = F_00590ad0((undefined *)(uVar2 + 0xe0),2,(uint)(byte)AVar1,uVar3,puVar5);
      this = (*(undefined * PTR32 *)(gen_frame + 0x14));
    }
    pAVar4 = pAVar4 + 4;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + -1;
  } while ((*(int *)(gen_frame + 0x18)) != 0);
  return ((uint *)(gen_frame + 0x8))[0];
}

/* ref: Client::UI2::AddonFishGuide::vf57 */
unsigned int F_007a1d00(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  pAVar3 = this + 0x180;
  local_8 = 2;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar1 = F_0055dcb0();
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3);
      F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
    }
    pAVar3 = pAVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_007a1d50 */
uint F_007a1d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a1d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (((param_1 < 8) && (*(char *)((int)this + 0x308) != '\0')) &&
     (*(uint *)((int)this + 0x304) != param_1)) {
    *(uint *)((int)this + 0x304) = param_1;
    iVar3 = 0;
    puVar2 = (undefined4 *)((int)this + 0x188);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_0059dde0((undefined *)*puVar2,(uint)(*(int *)((int)this + 0x304) == iVar3));
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = param_1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return param_1 & 0xffffff00;
}

/* ref: FUN_007a1e40 */
uint F_007a1e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a1e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  if ((param_1 < 0x19) && (uVar1 = 0, *(char *)((int)this + 0x309) != '\0')) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 7;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = param_1;
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
  return uVar1 & 0xffffff00;
}

/* ref: FUN_007a1ed0 */
uint F_007a1ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a1ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  if (0x18 < param_1) {
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar4 & 0xffffff00;
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x1a8);
  if ((piVar1 == (int *)0x0) ||
     (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1), *(uint *)((int)this + 0xa4) == uVar4)) {
    if (*(int *)((int)this + param_1 * 8 + 0x230) < 1) {
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar4 & 0xffffff00;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    uVar2 = *(undefined4 *)((int)this + param_1 * 8 + 0x230);
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar3 = *(undefined4 *)((int)this + param_1 * 8 + 0x234);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar5 = 2;
    do {
      this_00 = this_00 + -2;
      uVar4 = F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  else {
    *(uint *)((int)this + 0xa4) = uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: FUN_007a1fd0 */
unsigned int F_007a1fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  int local_8;
  
  iVar2 = 0xc;
  puVar3 = (undefined4 *)((int)this + 0x1a8);
  local_8 = 0x19;
  do {
    if ((undefined *)*puVar3 != (undefined *)0x0) {
      this_00 = (undefined *)F_00561550((undefined *)*puVar3,5);
      if (this_00 != (undefined *)0x0) {
        iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar2)));
        if (iVar1 < 1) {
          F_0058f5b0(this_00);
        }
        else {
          F_00591c00(this_00,iVar1,0);
        }
        ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x28))((int *)*puVar3,(uint)(0 < iVar1));
      }
    }
    iVar2 = iVar2 + 0xc;
    puVar3 = puVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_007a2050 */
uint F_007a2050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a2050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  iVar1 = *(int *)(uVar2 + 0x138);
  if (0 < iVar1) {
    if (*(undefined * PTR32 *)((int)this + 0x214) != (undefined *)0x0) {
      uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x214),
                           *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc))));
    }
    if (*(undefined * PTR32 *)((int)this + 0x218) != (undefined *)0x0) {
      uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x218),
                           *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14))));
    }
    if (*(undefined * PTR32 *)((int)this + 0x21c) != (undefined *)0x0) {
      iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x13c)));
      uVar2 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x21c),(uint)(iVar3 != 0));
      if (0 < iVar3) {
        uVar4 = 5;
        this_00 = (undefined *)F_0055dcb0();
        uVar2 = F_0055ba90(this_00,iVar3,uVar4);
        uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x21c),uVar2);
      }
    }
    if (*(undefined * PTR32 *)((int)this + 0x220) != (undefined *)0x0) {
      uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x220),
                           *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18))));
    }
    if (*(undefined * PTR32 *)((int)this + 0x224) != (undefined *)0x0) {
      uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x224),
                           *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x1c))));
    }
  }
  if (*(int *)((int)this + 0x300) != iVar1) {
    uVar2 = F_0059d6a0(this,(iVar1 < 1) + 0x65,0,0);
    *(int *)((int)this + 0x300) = iVar1;
  }
  return uVar2;
}

/* ref: FUN_007a2140 */
unsigned int F_007a2140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a2140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if (0 < *(int *)((int)this + 0x300)) {
    if (*(undefined * PTR32 *)((int)this + 0x210) != (undefined *)0x0) {
      F_00584110(*(undefined * PTR32 *)((int)this + 0x210),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x10))));
    }
    if (*(undefined * PTR32 *)((int)this + 0x228) != (undefined *)0x0) {
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x140)));
      if (0 < iVar1) {
        F_00591c00(*(undefined * PTR32 *)((int)this + 0x228),iVar1,0);
      }
      if (*(undefined * PTR32 *)((int)this + 0x22c) != (undefined *)0x0) {
        F_0059d670(*(undefined * PTR32 *)((int)this + 0x22c),((iVar1 < 1) - 1 & 0xffffffac) + 0x65);
      }
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonFishGuide::vf52 */
byte F_007a21b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a21b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x304);
  if (*param_1 == 0xf) {
    iVar3 = iVar1 + 1;
    if (7 < iVar3) {
      iVar3 = 0;
    }
    if (iVar1 < iVar3) goto LAB_007a21f6;
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    iVar3 = iVar1 + -1;
    if (iVar3 < 0) {
      iVar3 = 7;
    }
    if (iVar3 < iVar1) goto LAB_007a21f6;
  }
  if ((char)param_1[1] == '\x02') {
    return 1;
  }
LAB_007a21f6: ;
  uVar2 = F_007a1d50(this,iVar3);
  if ((char)uVar2 != '\0') {
    uVar2 = F_0055dcb0();
    *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 0x1c) + 0x20))) = 1;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  }
  return 1;
}

/* ref: FUN_007a2240 */
uint F_007a2240(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca9f4));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x25c) = 0;
  F_0055e2a0(this,0x1000000,1);
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFishRecord::vf41 */
uint F_007a22a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a22a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"FishRecords",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonFishRecord::vf46 */
byte F_007a22b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a22b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined1 AVar1;
  undefined * pAVar2;
  byte * pbVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((((byte)this[0xf9] & 1) != 0) && (param_2 != (byte *)0x0)) && (*(int *)(this + 0x180) != 0))
  {
    if ((*param_2 & 0xf) == 0) {
      AVar1 = (undefined1)0x0;
    }
    else {
      AVar1 = SUB41(*(undefined4 *)(param_2 + 4),0);
    }
    this[0x25c] = AVar1;
    pAVar2 = this + 0x188;
    pbVar3 = param_2 + 0x1c;
    iVar5 = 6;
    do {
      if ((pbVar3[-0x14] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + -0x10);
      }
      *(undefined4 *)(pAVar2 + -4) = uVar4;
      if ((pbVar3[-0xc] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + -8);
      }
      *(undefined4 *)(pAVar2 + 0xc) = uVar4;
      if ((pbVar3[-4] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)pbVar3;
      }
      *(undefined4 *)pAVar2 = uVar4;
      if ((pbVar3[4] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + 8);
      }
      *(undefined4 *)(pAVar2 + 0x10) = uVar4;
      if ((pbVar3[0xc] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + 0x10);
      }
      *(undefined4 *)(pAVar2 + 4) = uVar4;
      if ((pbVar3[0x14] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + 0x18);
      }
      *(undefined4 *)(pAVar2 + 8) = uVar4;
      if ((pbVar3[0x1c] & 0xf) == 0) {
        AVar1 = (undefined1)0x0;
      }
      else {
        AVar1 = SUB41((uint)*(undefined4 *)(pbVar3 + 0x20) >> 0x10,0);
      }
      pAVar2[0x19] = AVar1;
      if ((pbVar3[0x1c] & 0xf) == 0) {
        AVar1 = (undefined1)0x0;
      }
      else {
        AVar1 = SUB41(*(undefined4 *)(pbVar3 + 0x20),0);
      }
      pAVar2[0x18] = AVar1;
      if ((pbVar3[0x24] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + 0x28);
      }
      *(undefined4 *)(pAVar2 + 0x14) = uVar4;
      *(undefined4 *)(pAVar2 + 0x1a) = 0;
      pbVar3 = pbVar3 + 0x40;
      pAVar2 = pAVar2 + 0x24;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_0059ead0(*(undefined * PTR32 *)(this + 0x180),6,0,1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x74))))(*(int * PTR32 *)(this + 0x180),0,0);
    }
    return 1;
  }
  return 1;
}

/* ref: Client::UI2::AddonFishRecord::vf25 */
uint F_007a23e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a23e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonContentsFinder::vf25 */
uint F_007a2440(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00580fa0(this + 0x18c);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinder::vf37 */
uint F_007a2490(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 0x1c4) != 0) {
    F_00588cd0(this + 0x18c,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(int *)(this + 0x1c4),0);
    *(undefined4 *)(this + 0x1c4) = 0;
  }
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  F_005a92d0(this,0,2,0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonContentsFinder::vf38 */
uint F_007a2500(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7a2500u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x18c,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinder::vf39 */
unsigned int F_007a2530(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x18c);
  return 0;
}

/* ref: Client::UI2::AddonContentsFinder::vf41 */
uint F_007a2550(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ContentsFinder",1,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonContentsFinder::vf49 */
uint F_007a2560(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00580f60(this + 0x18c,0);
  uVar1 = F_005a9190((undefined *)this);
  return uVar1;
}

/* ref: FUN_007a2580 */
uint F_007a2580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a2580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = (undefined *)((int)this + 0x218);
  iVar3 = param_2 + 0x1500;
  iVar2 = 0xa1;
  do {
    uVar1 = F_00596cd0(this_00,iVar3);
    iVar3 = iVar3 + 8;
    this_00 = (undefined *)((int)this_00 + 8);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_007a25c0 */
uint F_007a25c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a25c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x1c);
  if (*(uint *)((int)this + 0x720) != param_1) {
    *(uint *)((int)this + 0x720) = param_1;
    (*(uint *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar1 = 1;
    do {
      this_00 = this_00 + -8;
      param_1 = F_005a2670(this_00);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return param_1;
}

/* ref: FUN_007a2630 */
uint F_007a2630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a2630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 5;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007a2660 */
uint F_007a2660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a2660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 6;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007a2690 */
uint F_007a2690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a2690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  undefined4 uVar2;
  undefined * this_00;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xf8)));
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1fc),*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xf4))));
    F_00584110(*(undefined * PTR32 *)((int)this + 0x200),uVar2);
    sVar1 = *(short *)((int)this + 0x734);
    uVar2 = *(undefined4 *)((int)this + 0x200);
    this_00 = *(undefined * PTR32 *)((int)this + 0x1fc);
    uVar4 = F_00577bc0(this_00,0,0,REFG(undefined4, 0x108cc50),0);
    uVar3 = F_00559d70(this_00);
    uVar4 = F_00559eb0(uVar2,(uint)(ushort)((short)uVar4 + uVar3 + sVar1));
  }
  return uVar4;
}

/* ref: FUN_007a2720 */
uint F_007a2720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a2720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  
  ((uint *)(gen_frame + 0x1c))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0x1c))[0] = 0x65;
  ((uint *)(gen_frame + 0x1c))[1] = 0x66;
  ((uint *)(gen_frame + 0x1c))[2] = 0x67;
  if ((*(byte *)(param_2 + 0x60) & 0xf) == 0) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + 100);
  }
  if ((*(byte *)(param_2 + 0x58) & 0xf) == 0) {
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + 0x5c);
  }
  if ((*(byte *)(param_2 + 0x70) & 0xf) == 0) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = *(int *)(param_2 + 0x74);
  }
  if ((*(byte *)(param_2 + 0x78) & 0xf) == 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 0x7c);
  }
  this_00 = (undefined *)F_0055e2f0(this,0xc);
  this_01 = (undefined *)F_0055e2f0(this,0xe);
  F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x214) + 4))),(*(undefined4 *)(gen_frame + 0x10)),0,6);
  if ((*(int *)(gen_frame + 0xc)) == 3) {
    F_0055a300(this_00,0);
  }
  else {
    F_0059d670(this_00,((uint *)(gen_frame + 0x1c))[(*(int *)(gen_frame + 0xc))]);
    F_0055a300(this_00,1);
  }
  F_0055a300(this_01,(uint)((*(int *)(gen_frame + 0xc)) != 3));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x204),(*(undefined4 *)(gen_frame + 0x18)));
  uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x208),(*(undefined4 *)(gen_frame + 0x14)));
  F_00c47745(((uint *)(gen_frame + 0x1c))[3] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_007a2830 */
uint F_007a2830(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2830u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 1;
  if (param_1 == 5) {
    uVar1 = 0x3d;
  }
  else if (param_1 == 6) {
    return 3;
  }
  return uVar1;
}

/* ref: FUN_007a2860 */
uint F_007a2860(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cac04));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf25 */
uint F_007a28f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a28f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf37 */
uint F_007a2930(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,0,0x32,0);
  F_005a92d0(this,1,0x36,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf41 */
uint F_007a2960(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ContentsFinderStatus",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf2 */
unsigned int F_007a2970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a2970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 6;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007a29c0 */
uint F_007a29c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a29c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined2 *)((int)this + 0x136) = 0x43;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cad04));
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf25 */
uint F_007a29f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a29f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf37 */
uint F_007a2a30(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,0,2,0);
  F_005a92d0(this,0,0x32,0);
  F_005a92d0(this,1,0x36,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf41 */
uint F_007a2a60(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ContentsFinderConfirm",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf46 */
byte F_007a2a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a2a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x11;
  if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x34);
  }
  if (iVar1 == 1) {
    uVar2 = 0x66;
  }
  else {
    if (iVar1 == 2) {
      F_0059d6a0(this,0x67,1,0);
      return 1;
    }
    if (iVar1 == 3) {
      F_0059d6a0(this,0x65,1,0);
      return 1;
    }
  }
  F_0059d6a0(this,uVar2,1,0);
  return 1;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf2 */
unsigned int F_007a2ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a2ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007a2b20 */
uint F_007a2b20(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cae04));
  *(undefined4 *)((int)this + 0x198) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf25 */
unsigned int F_007a2b70(void)
{
  GEN_ENTER(0x7a2b70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf41 */
uint F_007a2ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ContentsFinderReady",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonContentsFinderReady::vf44 */
uint F_007a2bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a2bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pAVar4;
  uint uVar5;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0x10))[3] = 5;
  ((uint *)(gen_frame + 0x10))[4] = 6;
  ((uint *)(gen_frame + 0x10))[5] = 7;
  ((uint *)(gen_frame + 0x10))[0] = 0x65;
  ((uint *)(gen_frame + 0x10))[1] = 0x66;
  ((uint *)(gen_frame + 0x10))[2] = 0x67;
  if ((param_2[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  pvVar2 = (undefined *)F_0055e340(this,2);
  F_00584110(pvVar2,uVar1);
  if ((*param_2 & 0xf) == 0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_2 + 4);
  }
  uVar5 = 0;
  pAVar4 = this + 0x180;
  do {
    uVar3 = F_0055e2f0(this,((uint *)(gen_frame + 0x10))[uVar5 + 3]);
    pvVar2 = (undefined *)F_00559c20(uVar3);
    *(undefined * PTR32 *)(pAVar4 + 0xc) = pvVar2;
    uVar3 = F_00561530(pvVar2,3);
    *(uint *)pAVar4 = uVar3;
    uVar5 = uVar5 + 1;
    pAVar4 = pAVar4 + 4;
  } while (uVar5 < 3);
  if (((*(uint *)(gen_frame + 0xc)) & 2) == 0) {
    uVar1 = 0x65;
    pvVar2 = (undefined *)F_0055e2f0(this,4);
    F_0059d670(pvVar2,uVar1);
    uVar1 = 0x68;
    *(undefined4 *)(this + 0x198) = 1;
    pvVar2 = (undefined *)F_00561490(*(undefined * PTR32 *)(this + 0x18c),4);
    F_0059d670(pvVar2,uVar1);
  }
  else {
    uVar1 = 0x11;
    pvVar2 = (undefined *)F_0055e2f0(this,4);
    F_0059d670(pvVar2,uVar1);
    *(undefined4 *)(this + 0x198) = 3;
    uVar5 = 0;
    pAVar4 = this + 0x18c;
    do {
      uVar3 = ((uint *)(gen_frame + 0x10))[uVar5];
      pvVar2 = (undefined *)F_00561490(*(undefined * PTR32 *)pAVar4,4);
      F_0059d670(pvVar2,uVar3);
      uVar5 = uVar5 + 1;
      pAVar4 = pAVar4 + 4;
    } while (uVar5 < 3);
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf2 */
unsigned int F_007a2d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a2d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_007a2d10 */
uint F_007a2d10(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10caf04));
  *(undefined4 *)((int)this + 0x180) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf25 */
uint F_007a2d50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf41 */
uint F_007a2da0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ContentsFinderSupply",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf2 */
unsigned int F_007a2db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a2db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    if (param_2 == 0) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x8)) = 10;
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    }
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: Client::UI2::AddonMaterialize::vf41 */
uint F_007a2e30(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"Materialize",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonMaterialize::vf47 */
unsigned int F_007a2e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a2e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::AddonMaterialize::vf2 */
uint F_007a2e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a2e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 uVar2;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0x1f) {
    uVar1 = F_0055dcb0();
    F_00560760(&(*(undefined4 *)(gen_frame + 0x10)));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 2)) = 2;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + param_4[2] * 0x10c + 0x288);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 3)) = this[param_4[2] * 0x10c + 0x28c];
    (*(int *)(gen_frame + 0x18)) = CONCAT13(this[param_4[2] * 0x10c + 0x28c],CONCAT12(2,(undefined2)(*(int *)(gen_frame + 0x18))));
    uVar2 = 0;
    if (*param_4 != 0) {
      uVar2 = *(undefined4 *)(*param_4 + 0x70);
    }
    uVar1 = F_00588780((undefined *)(uVar1 + 0xe0),4,(uint)(byte)this[0x13a],uVar2,&(*(undefined4 *)(gen_frame + 0x10)),0,0);
  }
  else {
    if (uVar1 == 0x20) {
      uVar1 = F_0055dcb0();
      uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),0);
      return uVar1;
    }
    uVar1 = uVar1 - 0x21;
    if (uVar1 == 0) {
      F_00557670(param_3,0);
      if (param_2 == 0) {
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(int *)(gen_frame + 0x18)) = param_4[2];
        (*(undefined4 *)(gen_frame + 0x10)) = 1;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar3 = 1;
        do {
          this_00 = this_00 + -8;
          uVar1 = F_005a2670(this_00);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        return uVar1;
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x58))))(*(int * PTR32 *)(this + 0x184),param_4[2]);
      if ((char)uVar1 == '\0') {
        (*(int *)(gen_frame + 0x18)) = param_4[2];
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 2;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar3 = 1;
        do {
          this_01 = this_01 + -8;
          uVar1 = F_005a2670(this_01);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonMaterialize::vf25 */
uint F_007a2fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2fb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_007a2ff0 */
uint F_007a2ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb004));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf25 */
uint F_007a3050(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf41 */
uint F_007a3090(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"MaterializeDialog",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonMaterializeDialog::vf2 */
unsigned int F_007a30a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a30a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007a30f0 */
uint F_007a30f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a30f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xf;
}

/* ref: FUN_007a3100 */
uint F_007a3100(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3110 */
uint F_007a3110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a3110u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1 >> ((char)param_2 * '\x04' + 8U & 0x1f) & 0xf;
}

/* ref: Client::UI2::AddonMateriaAttach::vf37 */
uint F_007a3130(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00594d90((undefined *)(uVar1 + 0xe0),0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonMateriaAttach::vf41 */
uint F_007a3150(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"MateriaAttach",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonMateriaAttach::vf25 */
uint F_007a3160(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007a3190 */
uint F_007a3190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a3190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = param_1 * 0xb8 + 0x2a30 + (int)this;
  uVar4 = *(undefined4 *)(iVar3 + 0xa8);
  uVar6 = 0;
  pvVar1 = (undefined *)F_00559b90(*param_2);
  F_00591c00(pvVar1,uVar4,uVar6);
  uVar2 = F_0042a990(iVar3);
  pvVar1 = (undefined *)F_00559ba0(param_2[6]);
  F_00584110(pvVar1,uVar2);
  uVar2 = F_0042a990(iVar3 + 0x54);
  pvVar1 = (undefined *)F_00559ba0(param_2[5]);
  F_00584110(pvVar1,uVar2);
  iVar3 = (int)*(char *)(iVar3 + 0xb4);
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  pvVar1 = (undefined *)F_00559ba0(param_2[1]);
  uVar2 = F_0057eb30(pvVar1,iVar3,uVar4,uVar6,uVar5,uVar7);
  return uVar2;
}

/* ref: FUN_007a3220 */
uint F_007a3220(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3220u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xf;
}

/* ref: FUN_007a3230 */
uint F_007a3230(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3240 */
uint F_007a3240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a3240u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1 >> ((char)param_2 * '\x04' + 8U & 0x1f) & 0xf;
}

/* ref: FUN_007a3260 */
uint F_007a3260(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb104));
  *(undefined4 *)((int)this + 0x180) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaAttachDialog::vf25 */
uint F_007a32b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a32b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonMateriaAttachDialog::vf37 */
uint F_007a32f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a32f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonMateriaAttachDialog::vf41 */
uint F_007a3320(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this,"MateriaAttachDialog",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a3370 */
uint F_007a3370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a3370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  int iVar3;
  
  uVar2 = F_0055e2f0(this,0xd);
  this_00 = (undefined *)F_00559c20(uVar2);
  uVar2 = F_0055e2f0(this,0x14);
  this_01 = (undefined *)F_00559c20(uVar2);
  uVar2 = F_0055e2f0(this,0x24);
  this_02 = (undefined *)F_00559c20(uVar2);
  if ((*param_2 & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
  }
  if ((iVar3 == 0) || (iVar3 == 2)) {
    uVar1 = *(undefined4 *)((int)this_01 + 0x78);
    (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this_01 + 0x7c);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 3)) = (undefined1)((uint)uVar1 >> 0x18);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = (undefined2)uVar1;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)) = *(undefined1 *)((int)this_02 + 0x78);
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x4)), 0, 3, (unsigned long long)(CONCAT12(*(undefined1 *)((int)this_02 + 0x78),(undefined2)(*(undefined4 *)(gen_frame + 0x4)))));
    (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)((int)this_01 + 0x80);
    F_00561740(this_01,&(*(undefined4 *)(gen_frame + 0x4)),0);
    uVar1 = *(undefined4 *)((int)this_02 + 0x78);
    (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_02 + 0x7c);
    (*(undefined1 *)(gen_frame + 0x18)) = *(undefined1 *)((int)this_02 + 0x80);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 2)) = (undefined2)((uint)uVar1 >> 0x10);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 1)) = *(undefined1 *)((int)this_01 + 0x78);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = CONCAT11(*(undefined1 *)((int)this_01 + 0x78),(char)uVar1);
    uVar2 = F_00561740(this_02,&(*(undefined4 *)(gen_frame + 0x10)),0);
  }
  else {
    uVar2 = iVar3 - 3;
    if (uVar2 == 0) {
      uVar1 = *(undefined4 *)((int)this_00 + 0x78);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_00 + 0x7c);
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined1 *)(gen_frame + 0x18)) = *(undefined1 *)((int)this_00 + 0x80);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 3)) = (undefined1)((uint)uVar1 >> 0x18);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = (undefined2)uVar1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 2)) = *(undefined1 *)((int)this_02 + 0x78);
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x10)), 0, 3, (unsigned long long)(CONCAT12(*(undefined1 *)((int)this_02 + 0x78),(undefined2)(*(undefined4 *)(gen_frame + 0x10)))));
      F_00561740(this_00,&(*(undefined4 *)(gen_frame + 0x10)),0);
      uVar1 = *(undefined4 *)((int)this_02 + 0x78);
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this_02 + 0x7c);
      (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)((int)this_02 + 0x80);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)) = (undefined2)((uint)uVar1 >> 0x10);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 1)) = *(undefined1 *)((int)this_00 + 0x78);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11(*(undefined1 *)((int)this_00 + 0x78),(char)uVar1);
      uVar2 = F_00561740(this_02,&(*(undefined4 *)(gen_frame + 0x4)),0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_007a3490 */
uint F_007a3490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a3490u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  uint uStack_8;
  
  uVar4 = F_0055e2f0(param_1,2);
  uVar2 = F_0055a030(uVar4);
  if (((*(byte *)(param_3 + 0x40) & 0xf) == 0) || (*(int *)(param_3 + 0x44) == 0)) {
    uVar4 = F_0055e2f0(param_1,9);
    uVar3 = F_0055a030(uVar4);
    uVar2 = uVar2 - uVar3;
  }
  uVar4 = F_0055e2f0(param_1,10);
  fVar6 = F_00559d80(uVar4);
  uStack_8 = (uint)uVar2;
  F_00559f00(uVar4,(float)((float10)uStack_8 + fVar6));
  uVar3 = F_0055a030(uVar4);
  uVar2 = uVar2 + uVar3;
  if (((*(byte *)(param_3 + 0x78) & 0xf) != 0) && (iVar1 = *(int *)(param_3 + 0x7c), 0 < iVar1)) {
    uVar4 = F_0055e2f0(param_1,0x10);
    uVar3 = F_0055a030(uVar4);
    uVar2 = uVar2 + uVar3 * ((short)iVar1 + -1);
  }
  if (((*(byte *)param_3 & 0xf) == 0) || (*(int *)(param_3 + 4) != 3)) {
    uVar4 = F_0055e2f0(param_1,0x11);
    fVar6 = F_00559d80(uVar4);
    uStack_8 = (uint)uVar2;
    F_00559f00(uVar4,(float)((float10)uStack_8 + fVar6));
    uVar3 = F_0055a030(uVar4);
    uVar2 = uVar2 + uVar3;
    if (((*(byte *)(param_3 + 0x128) & 0xf) == 0) || (*(int *)(param_3 + 300) == 0)) {
      uVar4 = F_0055e340(param_1,0x17);
      uVar3 = F_0055a030(uVar4);
      uVar2 = uVar2 - uVar3;
    }
  }
  uVar4 = F_0055e2f0(param_1,0x18);
  fVar6 = F_00559d80(uVar4);
  uStack_8 = (uint)uVar2;
  F_00559f00(uVar4,(float)((float10)uStack_8 + fVar6));
  uVar3 = F_0055a030(uVar4);
  uVar2 = uVar2 + uVar3;
  if (((*(byte *)param_3 & 0xf) != 0) && (*(int *)(param_3 + 4) != 0)) {
    uVar4 = F_0055e2f0(param_1,0x1d);
    fVar6 = F_00559d80(uVar4);
    F_00559f00(uVar4,(float)((float10)uVar2 + fVar6));
    uVar3 = F_0055a030(uVar4);
    uVar2 = uVar2 + uVar3;
  }
  uVar4 = F_0055e2f0(param_1,0x23);
  fVar6 = F_00559d80(uVar4);
  F_00559f00(uVar4,(float)((float10)uVar2 + fVar6));
  uVar2 = F_0055a030(uVar4);
  fVar6 = F_00559d80(uVar4);
  uVar5 = (int)TRUNC(fVar6 + (float10)uVar2) & 0xffff;
  uVar4 = F_0055e2f0(param_1,0x27);
  F_0055a080(uVar4,uVar5);
  iVar1 = *param_1;
  uVar4 = ((code *)*(gen_code32 *)(iVar1 + 0x50))(param_1,0,uVar5);
  uVar4 = ((code *)*(gen_code32 *)(iVar1 + 0x4c))(param_1,uVar4 & 0xffff);
  return uVar4;
}

/* ref: Client::UI2::AddonMateriaBroker::vf37 */
uint F_007a36e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a36e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0x21;
    pAVar5 = this;
    pvVar1 = (undefined *)F_0055e2f0(this,3);
    F_005840a0(pvVar1,uVar3,uVar4,pAVar5,uVar6);
    pvVar1 = (undefined *)F_0055e2f0(this,10);
    F_005840a0(pvVar1,0x21,1,this,0);
    F_005840a0(pvVar1,0x1f,1,this,0);
    F_005840a0(pvVar1,0x20,1,this,0);
  }
  uVar2 = F_0055dcb0();
  F_00594d90((undefined *)(uVar2 + 0xe0),0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonMateriaBroker::vf41 */
uint F_007a3760(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"MateriaBroker",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonMateriaBroker::vf25 */
uint F_007a3770(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3770u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_007a37b0 */
uint F_007a37b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a37b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_2 + 0x678) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x67c);
  }
  *(int *)((int)this + 0x4b00) = iVar1;
  iVar1 = iVar1 + 0x65;
  pvVar2 = (undefined *)F_0055e2f0(this,0xb);
  F_0059d670(pvVar2,iVar1);
  if ((*(byte *)(param_2 + 0x680) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x684);
  }
  pvVar2 = (undefined *)F_0055e340(this,0xc);
  uVar3 = F_00584110(pvVar2,uVar4);
  return uVar3;
}

/* ref: FUN_007a3810 */
uint F_007a3810(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xf;
}

/* ref: FUN_007a3820 */
uint F_007a3820(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3820u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3830 */
uint F_007a3830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a3830u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1 >> ((char)param_2 * '\x04' + 8U & 0x1f) & 0xf;
}

/* ref: FUN_007a3850 */
byte F_007a3850(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  int iVar2;
  byte bVar3;
  
  uVar1 = param_1 & 0xf;
  if (uVar1 < 5) {
    return 0;
  }
  iVar2 = 0;
  if (uVar1 != 0) {
    bVar3 = 8;
    do {
      if ((param_1 >> (bVar3 & 0x1f) & 0xf) == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      bVar3 = bVar3 + 4;
    } while (iVar2 < (int)uVar1);
  }
  return 1;
}

/* ref: FUN_007a38a0 */
uint F_007a38a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a38a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb204));
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf25 */
uint F_007a38e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a38e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf37 */
uint F_007a3920(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pAVar6;
  undefined4 uVar7;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0x17;
    pAVar6 = this;
    pvVar2 = (undefined *)F_0055e2f0(this,0xd);
    F_005840a0(pvVar2,uVar4,uVar5,pAVar6,uVar7);
    uVar7 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x17;
    pAVar6 = this;
    pvVar2 = (undefined *)F_0055e2f0(this,0xe);
    F_005840a0(pvVar2,uVar4,uVar5,pAVar6,uVar7);
  }
  AVar1 = this[0x13a];
  uVar3 = F_0055dcb0();
  F_00596b90((undefined *)(uVar3 + 0xe0),(uint)(byte)AVar1,1);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf41 */
uint F_007a3980(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"MateriaBrokerDialog",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf2 */
unsigned int F_007a3990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a3990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007a39e0 */
uint F_007a39e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a39e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xf;
}

/* ref: FUN_007a39f0 */
uint F_007a39f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a39f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3a00 */
uint F_007a3a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a3a00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1 >> ((char)param_2 * '\x04' + 8U & 0x1f) & 0xf;
}

/* ref: Client::UI2::AddonMateriaAttachedRepair::vf25 */
uint F_007a3a50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonMateriaAttachedRepair::vf37 */
uint F_007a3a90(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonMateriaAttachedRepair::vf41 */
uint F_007a3ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"MateriaAttachedRepair",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a3ad0 */
uint F_007a3ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3ad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xf;
}

/* ref: FUN_007a3ae0 */
uint F_007a3ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3af0 */
uint F_007a3af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a3af0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1 >> ((char)param_2 * '\x04' + 8U & 0x1f) & 0xf;
}

/* ref: Client::UI2::AddonMateriaRepair::vf41 */
uint F_007a3b10(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"MateriaRepair",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonMateriaRepair::vf46 */
byte F_007a3b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a3b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar7 & 2) != 0) {
    if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_0057eb30(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x61c) + 0xbc))),uVar1,0,0,0,0);
    if ((*(byte *)(param_2 + 0x38) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x3c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x180),uVar1);
    if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x34);
    }
    F_00595190(*(undefined * PTR32 *)(this + 0x61c),uVar1,0,0);
  }
  if ((uVar7 & 1) != 0) {
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x14);
    }
    uVar7 = 0;
    *(int *)(this + 0x614) = iVar2;
    if (iVar2 != 0) {
      pAVar4 = this + 0x1b8;
      puVar3 = (undefined4 *)(param_2 + 0x18c);
      do {
        if ((*(byte *)(puVar3 + -0x51) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[-0x50];
        }
        *(undefined4 *)(pAVar4 + 4) = uVar1;
        if ((*(byte *)(puVar3 + -1) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *puVar3;
        }
        *(undefined4 *)pAVar4 = uVar1;
        if ((*(byte *)(puVar3 + 0x4f) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[0x50];
        }
        *(undefined4 *)(pAVar4 + 8) = uVar1;
        if ((*(byte *)(puVar3 + 0x9f) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined2)puVar3[0xa0];
        }
        *(undefined2 *)(pAVar4 + 0xc) = uVar5;
        if ((*(byte *)(puVar3 + 0xef) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined2)puVar3[0xf0];
        }
        *(undefined2 *)(pAVar4 + 0xe) = uVar5;
        if ((*(byte *)(puVar3 + 0x13f) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[0x140];
        }
        *(undefined4 *)(pAVar4 + -4) = uVar1;
        if ((*(byte *)(puVar3 + 0x1df) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[0x1e0];
        }
        *(undefined4 *)(pAVar4 + 0x10) = uVar1;
        if ((*(byte *)(puVar3 + 399) & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = puVar3[400];
        }
        uVar8 = uVar6 & 0xffff;
        *(short *)(pAVar4 + 0x16) = (short)uVar6;
        if ((int)uVar8 < (int)*(short *)(pAVar4 + 0x14)) {
          if ((short)uVar6 == 0) {
            uVar8 = 1;
          }
          *(short *)(pAVar4 + 0x14) = (short)uVar8;
        }
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 2;
        pAVar4 = pAVar4 + 0x1c;
      } while (uVar7 < *(uint *)(this + 0x614));
    }
    F_0058d980(*(undefined4 *)(this + 0x1a8),(uint)*(ushort *)(this + 0x614));
  }
  return 1;
}

/* ref: Client::UI2::AddonColorantEquipmentSelector::vf37 */
uint F_007a3cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00594d90((undefined *)(uVar1 + 0xe0),0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonColorantEquipmentSelector::vf41 */
uint F_007a3cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ColorantEquipmentSelector",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonColorantEquipmentSelector::vf25 */
uint F_007a3d00(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007a3d30 */
uint F_007a3d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a3d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int in_ecx;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  in_ecx = param_1 * 0x60 + 400 + (int)this;
  uVar3 = *(undefined4 *)(in_ecx + 0x54);
  uVar4 = 0;
  pvVar1 = (undefined *)F_00559b90(*param_2);
  F_00591c00(pvVar1,uVar3,uVar4);
  uVar2 = F_0042a990(in_ecx);
  pvVar1 = (undefined *)F_00559ba0(param_2[3]);
  uVar2 = F_00584110(pvVar1,uVar2);
  return uVar2;
}

/* ref: FUN_007a3d80 */
uint F_007a3d80(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb404));
  in_ecx = (int)this + 0x180;
  local_8 = 0x17;
  do {
    F_0042b630(in_ecx);
    *(undefined4 *)(in_ecx + 0x54) = 0xffffffff;
    *(undefined4 *)(in_ecx + 0x58) = 0;
    *(undefined4 *)(in_ecx + 0x5c) = 0;
    *(undefined1 *)(in_ecx + 0x60) = 0;
    in_ecx = in_ecx + 100;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0xae0) = 0;
  *(undefined4 *)((int)this + 0xae4) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf37 */
uint F_007a3e40(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf41 */
uint F_007a3e70(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ColorantColoringSelector",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf25 */
uint F_007a3e80(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 2;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007a3eb0 */
uint F_007a3eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a3eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  iVar1 = param_1 * 100;
  this_00 = (undefined *)F_00559b90(*param_2);
  F_0055a1d0(this_00,0,0,0);
  uVar2 = *(uint *)((int)this + iVar1 + 0x1d8);
  F_0055a170(this_00,(uint)*(byte *)((int)this + iVar1 + 0x1da),(uVar2 & 0xff00) >> 8,uVar2 & 0xff
              );
  uVar2 = F_0059d670((undefined *)param_2[1],*(char *)((int)this + iVar1 + 0x1e0) + 0x65);
  return uVar2;
}

/* ref: FUN_007a3f40 */
uint F_007a3f40(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb504));
  F_00581600((undefined *)((int)this + 400));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf25 */
uint F_007a3f60(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf37 */
uint F_007a3fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
  if (*(int *)(this + 0x318) != 0) {
    F_00406810(*(int *)(this + 0x318));
    *(undefined4 *)(this + 0x318) = 0;
  }
  F_005b0510((undefined *)this);
  uVar2 = F_005a92d0(this,0,0x20,0);
  return uVar2;
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf41 */
uint F_007a4010(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"GrandCompanyExchange",1,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf47 */
unsigned int F_007a4020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a4020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_00584110(*(undefined * PTR32 *)(this + 0x184),
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 0x80) + 0x20))) + 4))));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 4;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007a4090 */
uint F_007a4090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a4090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * puVar2;
  undefined4 uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x1f5: ;
    uVar3 = *(undefined4 *)((int)this + 800);
    break;
  case 0x1f6: ;
    uVar3 = *(undefined4 *)((int)this + 0x324);
    break;
  case 0x1f7: ;
    uVar3 = *(undefined4 *)((int)this + 0x328);
    break;
  case 0x1f8: ;
    uVar3 = *(undefined4 *)((int)this + 0x32c);
    break;
  default: ;
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar4 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  iVar4 = 2;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  puVar2 = &(*(uint *)(gen_frame + 0x18));
  do {
    puVar2 = puVar2 + -2;
    uVar1 = F_005a2670(puVar2);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007a4170 */
uint F_007a4170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a4170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x318) + param_1 * 0x24)));
  iVar1 = *(int *)((int)this + 0x318) + param_1 * 0x24;
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  F_00584110(pvVar2,uVar6);
  F_005951c0(param_3,*(undefined4 *)(iVar1 + 0x14),0,*param_2);
  F_005951c0(param_3,*(undefined4 *)(iVar1 + 0x18),0,param_2[1]);
  uVar6 = *(undefined4 *)(iVar1 + 8);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar5 = 1;
  pvVar2 = (undefined *)F_00559ba0(param_2[3]);
  F_0057eb30(pvVar2,uVar6,uVar5,uVar7,uVar8,uVar9);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[4]);
  F_0057eb30(pvVar2,uVar6,uVar5,uVar7,uVar8,uVar9);
  uVar3 = F_0055a300((undefined *)param_2[5],(uint)(1 < *(uint *)(iVar1 + 0x10)));
  uVar4 = *(uint *)(iVar1 + 0x10);
  if (1 < uVar4) {
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    pvVar2 = (undefined *)F_00559ba0(param_2[5]);
    uVar3 = F_0057eb30(pvVar2,uVar4,uVar6,uVar5,uVar7,uVar8);
  }
  return uVar3;
}

/* ref: FUN_007a4230 */
uint F_007a4230(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb604));
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf25 */
uint F_007a4260(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf36 */
uint F_007a4290(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055e2a0(this,0x1000000,1);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf37 */
uint F_007a42c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a42c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005b0510((undefined *)this);
  F_005a92d0(this,0,2,0);
  uVar1 = F_005a92d0(this,1,3,0);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf41 */
uint F_007a42f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a42f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"GrandCompanyRank",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf44 */
uint F_007a4300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a4300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  uint in_ecx;
  undefined * pvVar2;
  undefined * this_00;
  undefined4 uVar3;
  uint uVar4;
  uint local_8;
  
  if ((*param_2 & 0xf) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(uint *)(param_2 + 4);
  }
  bVar1 = 0;
  if (local_8 != 0) {
    uVar4 = 0;
    do {
      in_ecx = F_0055e2f0(this,uVar4 + 8);
      pvVar2 = (undefined *)F_00559c20(in_ecx);
      if (pvVar2 != (undefined *)0x0) {
        this_00 = (undefined *)F_00561530(pvVar2,4);
        pvVar2 = (undefined *)F_00561550(pvVar2,3);
        if ((param_2[uVar4 * 8 + 0xc0] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_2 + uVar4 * 8 + 0xc4);
        }
        F_00584110(this_00,uVar3);
        if ((param_2[uVar4 * 8 + 0x18] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_2 + uVar4 * 8 + 0x1c);
        }
        F_00591c00(pvVar2,uVar3,0);
      }
      bVar1 = bVar1 + 1;
      uVar4 = (uint)bVar1;
    } while (uVar4 < local_8);
  }
  if ((param_2[0x10] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x14);
  }
  pvVar2 = (undefined *)F_0055e340(this,3);
  F_00584110(pvVar2,uVar3);
  F_005a91d0(this,0,2);
  F_005a91d0(this,1,3);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar4;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf47 */
uint F_007a4400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a4400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) + 0xd0)));
  uVar3 = 0;
  this_00 = (undefined *)F_0055e360(this,2);
  F_00591c00(this_00,uVar2,uVar3);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf2 */
unsigned int F_007a4460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a4460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_007a4470 */
uint F_007a4470(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb704));
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf25 */
uint F_007a44a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a44a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf36 */
uint F_007a44d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a44d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf41 */
uint F_007a44f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a44f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"GrandCompanyRankUp",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf2 */
unsigned int F_007a4500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a4500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    if (param_2 != 0) {
      (*(uint *)(gen_frame + 0x8)) = 1;
    }
    else {
      (*(uint *)(gen_frame + 0x8)) = 0;
    }
    (*(uint *)(gen_frame + 0x8)) = (uint)(param_2 != 0);
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007a4550 */
uint F_007a4550(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb804));
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf25 */
uint F_007a45d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a45d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf36 */
uint F_007a4600(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf37 */
uint F_007a4620(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
  if (*(int *)(this + 0x180) != 0) {
    F_00406810(*(int *)(this + 0x180));
    *(undefined4 *)(this + 0x180) = 0;
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf41 */
uint F_007a4670(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"GrandCompanySupplyList",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf46 */
byte F_007a4680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a4680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 * puVar4;
  byte bVar5;
  uint uVar6;
  byte * pbVar7;
  uint local_10;
  uint local_8;
  
  pbVar7 = param_2;
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
  }
  if ((uVar1 & 2) != 0) {
    if ((param_2[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0),uVar2);
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
  }
  if ((uVar1 & 1) == 0) {
    return 1;
  }
  if ((param_2[0x18] & 0xf) == 0) {
    param_2 = (byte *)0x0;
  }
  else {
    param_2 = *(byte * PTR32 *)(param_2 + 0x1c);
  }
  uVar1 = local_8 >> 8;
  local_8 = local_8 & 0xffffff00;
  if ((pbVar7[0x10] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(pbVar7 + 0x14);
  }
  *(undefined4 *)(this + 0x1ac) = uVar2;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    F_0059d6a0(this,0x65,1,0);
    piVar3 = *(int * PTR32 *)(this + 400);
    uVar1 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,uVar1 + 0xc0);
    if ((pbVar7[0x28] & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x1a4),0);
      break;
    }
    goto LAB_007a474c;
  case 1: ;
    F_0059d6a0(this,0x66,1,0);
    piVar3 = *(int * PTR32 *)(this + 0x194);
    uVar1 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,uVar1 + 0xc0);
    if ((pbVar7[0x28] & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x1a4),0);
      break;
    }
LAB_007a474c: ;
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4),*(undefined4 *)(pbVar7 + 0x2c));
    break;
  case 2: ;
    F_0059d6a0(this,0x67,1,0);
    piVar3 = *(int * PTR32 *)(this + 0x198);
    uVar6 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,uVar6 + 0xc0);
    if ((pbVar7[0x20] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(pbVar7 + 0x24);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4),uVar2);
    local_8 = CONCAT31((int3)uVar1,1);
    break;
  case 3: ;
    F_0059d6a0(this,0x68,1,0);
  }
  F_0059ead0(*(undefined * PTR32 *)(this + 0x188),0,0,1);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x18c),0,0,1);
  F_00562110(*(undefined * PTR32 *)(this + 0x188),(uint)((char)local_8 == '\0'));
  F_00562110(*(undefined * PTR32 *)(this + 0x18c),local_8);
  if ((char)local_8 == '\0') {
    piVar3 = *(int * PTR32 *)(this + 0x188);
  }
  else {
    piVar3 = *(int * PTR32 *)(this + 0x18c);
  }
  *(int * PTR32 *)(this + 0x1a8) = piVar3;
  ((code *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3,0xfffffffe,0);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x1a8),param_2,0,1);
  F_0059b390(this,*(undefined4 *)(this + 0x1a8),1,0);
  if (param_2 == (byte *)0x0) {
    uVar2 = 0x65;
  }
  else {
    uVar2 = 0x66;
  }
  this_00 = (undefined *)F_0055e2f0(this,2);
  F_0059d670(this_00,uVar2);
  piVar3 = (int *)F_00404270();
  if (*(uint *)(this + 0x184) < param_2) {
    *(byte * PTR32 *)(this + 0x184) = param_2;
    if (*(int *)(this + 0x180) != 0) {
      F_00406810(*(int *)(this + 0x180));
      *(undefined4 *)(this + 0x180) = 0;
    }
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,(int)((int)(uintptr_t)param_2) << 5,0x10);
    *(uint *)(this + 0x180) = uVar1;
  }
  local_10 = 0;
  if (param_2 != (byte *)0x0) {
    local_8 = 0;
    pbVar7 = pbVar7 + 0x17c;
    do {
      puVar4 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + local_8)));
      if ((pbVar7[0x13c] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(pbVar7 + 0x140);
      }
      *puVar4 = uVar2;
      if ((pbVar7[-4] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)pbVar7;
      }
      puVar4[1] = uVar2;
      if ((pbVar7[0x27c] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(pbVar7 + 0x280);
      }
      puVar4[2] = uVar2;
      if ((pbVar7[0x3bc] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(pbVar7 + 0x3c0);
      }
      puVar4[3] = uVar2;
      if ((pbVar7[0x4fc] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(pbVar7 + 0x500);
      }
      puVar4[4] = uVar1;
      if ((pbVar7[0x63c] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(pbVar7 + 0x640);
      }
      puVar4[5] = uVar6;
      if ((pbVar7[0x77c] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(pbVar7 + 0x780);
      }
      puVar4[6] = uVar2;
      if ((pbVar7[-0x144] & 0xf) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = pbVar7[-0x140];
      }
      *(byte *)(puVar4 + 7) = bVar5;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x54))))
                (*(int * PTR32 *)(this + 0x1a8),local_10,(uint)(uVar1 < uVar6));
      local_8 = local_8 + 0x20;
      local_10 = local_10 + 1;
      pbVar7 = pbVar7 + 8;
    } while (local_10 < param_2);
  }
  return 1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf2 */
uint F_007a4a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a4a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 * this_00;
  int iVar4;
  
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0x17: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    if (param_2 == 2) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    else if (param_2 == 3) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(int *)(gen_frame + 0xc)) = 1;
    }
    else if (param_2 == 4) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(int *)(gen_frame + 0xc)) = 2;
    }
    else if (param_2 == 5) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(int *)(gen_frame + 0xc)) = 3;
    }
    goto LAB_007a4abe;
  case 0x1f: ;
    F_00560760(((undefined1 *)(gen_frame + 0x10)));
    (*(undefined1 *)(gen_frame + 0x1b)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((param_4[2] * 0x20 + 0x18 + *(int *)(this + 0x180))));
    (*(undefined1 *)(gen_frame + 0x1a)) = 7;
    if (*param_4 != 0) {
      uVar3 = *(undefined4 *)(*param_4 + 0x70);
    }
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00588780((undefined *)(uVar2 + 0xe0),4,(uint)(byte)AVar1,uVar3,((undefined1 *)(gen_frame + 0x10)),0,0);
    break;
  case 0x20: ;
    uVar2 = F_0055dcb0();
    F_00594d90((undefined *)(uVar2 + 0xe0),0);
    break;
  case 0x21: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    iVar4 = param_4[2];
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = iVar4;
LAB_007a4abe: ;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00557670(param_3,0);
  }
  this_00 = ((undefined1 *)(gen_frame + 0x10));
  iVar4 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return uVar2;
}

/* ref: FUN_007a4bb0 */
uint F_007a4bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a4bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x180) != 0) {
    puVar3 = ((undefined4 *)GEN_TOP((param_1 * 0x20 + *(int *)((int)this + 0x180))));
    uVar7 = *puVar3;
    pvVar1 = (undefined *)F_00559ba0(param_2[3]);
    F_00584110(pvVar1,uVar7);
    F_005951c0(param_3,puVar3[1],0,param_2[2]);
    if (*(char *)(puVar3 + 7) == '\0') {
      F_0059d670((undefined *)*param_2,0x66);
      uVar7 = 0x11;
    }
    else {
      F_0059d670((undefined *)*param_2,0x65);
      uVar7 = 0x65;
    }
    F_0059d670((undefined *)param_2[1],uVar7);
    if ((uint)puVar3[4] < (uint)puVar3[5]) {
      F_0059d670((undefined *)param_2[1],7);
    }
    if (param_2[7] != 0) {
      uVar7 = puVar3[2];
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      pvVar1 = (undefined *)F_00559ba0(param_2[7]);
      F_0057eb30(pvVar1,uVar7,uVar4,uVar5,uVar6,uVar8);
    }
    uVar7 = puVar3[3];
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    pvVar1 = (undefined *)F_00559ba0(param_2[4]);
    F_0057eb30(pvVar1,uVar7,uVar4,uVar5,uVar6,uVar8);
    uVar7 = puVar3[4];
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    pvVar1 = (undefined *)F_00559ba0(param_2[5]);
    uVar2 = F_0057eb30(pvVar1,uVar7,uVar4,uVar5,uVar6,uVar8);
    if (param_2[6] != 0) {
      uVar7 = puVar3[5];
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      pvVar1 = (undefined *)F_00559ba0(param_2[6]);
      uVar2 = F_0057eb30(pvVar1,uVar7,uVar4,uVar5,uVar6,uVar8);
    }
  }
  return uVar2;
}

/* ref: FUN_007a4cb0 */
uint F_007a4cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb904));
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf25 */
uint F_007a4cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf37 */
uint F_007a4d30(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf41 */
uint F_007a4d60(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"GrandCompanySupplyReward",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf2 */
unsigned int F_007a4d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a4d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    if (param_2 != 0) {
      (*(uint *)(gen_frame + 0x8)) = 1;
    }
    else {
      (*(uint *)(gen_frame + 0x8)) = 0;
    }
    (*(uint *)(gen_frame + 0x8)) = (uint)(param_2 != 0);
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007a4dc0 */
uint F_007a4dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cba04));
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
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined1 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  F_00580ea0((undefined *)((int)this + 0x1c0));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x300;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined2 *)((int)this + 0x200) = 0;
  *(undefined1 *)((int)this + 0x202) = 0;
  *(undefined1 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x204) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_007a4e90 */
uint F_007a4e90(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cba04));
  F_00590cc0((undefined *)((int)this + 0x1c0));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf36 */
byte F_007a4eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this);
  bVar1 = F_00560e80(this + 0x1c0,this);
  return bVar1;
}

/* ref: Client::UI2::AddonInventory::vf41 */
uint F_007a4ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"Inventory",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonInventory::vf47 */
uint F_007a4ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a4ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  undefined * this_00;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      if (iVar2 == 4) {
        uVar3 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x448)));
        this_00 = *(undefined * PTR32 *)(this + 0x1a8);
      }
      else {
        uVar3 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x438 + iVar2 * 4)));
        this_00 = *(undefined * PTR32 *)(this + iVar2 * 4 + 0x198);
      }
      F_00589280(this_00,uVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    param_2 = F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x430))))
    ;
  }
  return param_2;
}

/* ref: Client::UI2::AddonInventory::vf25 */
uint F_007a4f50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  uVar1 = F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(char *)(gen_frame + 0x10)) = (char)uVar1;
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  }
  F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf53 */
unsigned int F_007a4fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a4fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::AddonInventory::vf5 */
uint F_007a4fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a4fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_005a89b0(this,param_1,1);
  uVar1 = F_0059bc90(this + 0x1c0);
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf6 */
unsigned int F_007a4ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a4ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if ((this[0x208] != (undefined1)0x0) &&
     ((uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x18);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  }
  if (*(undefined * PTR32 *)(this + 0x18c) != (undefined *)0x0) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x18c),0x11);
    F_00577ad0(*(undefined * PTR32 *)(this + 0x18c));
  }
  F_005b0610(this,param_1,1,param_2);
  F_00580f10(this + 0x1c0,0,0);
  return 0;
}

/* ref: FUN_007a5080 */
uint F_007a5080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0x198);
  iVar3 = 5;
  do {
    F_0059dde0((undefined *)*puVar2,0);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x198),1);
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf38 */
uint F_007a50c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7a50c0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)param_1 + 0x1b8) != '\0') {
    if (*(int *)((int)param_1 + 0x1b4) != 0) {
      uVar1 = F_0055dcb0();
      uVar1 = F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14),*(undefined4 *)((int)param_1 + 0x1b4));
      if ((uVar1 == 0) ||
         ((uVar1 = *(uint *)(uVar1 + 0xf4) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
      goto LAB_007a5116;
      F_00594790(param_1);
    }
    *(undefined1 *)((int)param_1 + 0x1b8) = 0;
  }
LAB_007a5116: ;
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0((int)param_1 + 0x1c0,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf39 */
unsigned int F_007a5140(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x1c0);
  return 0;
}

/* ref: FUN_007a5160 */
uint F_007a5160(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  uVar1 = *(undefined4 *)((int)this + 0x1b4);
  (*(undefined4 *)(gen_frame + 0x10)) = 0x12;
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

/* ref: Client::UI2::AddonInventory::vf33 */
uint F_007a51d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a51d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  uVar1 = F_00580fd0(this + 0x1c0);
  if ((uVar1 == 0) ||
     (pAVar2 = *(undefined * PTR32 *)(uVar1 + 4),
     *(undefined * PTR32 *)(uVar1 + 4) == (undefined *)0x0)) {
    pAVar2 = this;
  }
  return (uint)pAVar2;
}

/* ref: FUN_007a51f0 */
uint F_007a51f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a51f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar2 = 0;
  if (*(char *)((int)this + 0x202) != '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    uVar1 = *(undefined4 *)((int)this + 0x1b4);
    (*(undefined4 *)(gen_frame + 0x10)) = 10;
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

/* ref: FUN_007a5260 */
uint F_007a5260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar2 = *(int *)((int)this + 0x204);
  if (iVar2 == 4) {
    iVar2 = 0x26;
  }
  uVar1 = *(int *)((int)this + 0x1bc) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(int *)(gen_frame + 0x14)) = iVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x20,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    puVar3 = &(*(uint *)(gen_frame + 0x38));
    iVar2 = 4;
    do {
      puVar3 = puVar3 + -2;
      uVar1 = F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  case 1: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xb;
    break;
  case 2: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xc;
    break;
  case 3: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xd;
    break;
  case 4: ;
    goto switchD_007a5295_caseD_5;
  case 5: ;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(int *)(gen_frame + 0x2c)) = iVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
    (*(undefined4 *)(gen_frame + 0x34)) = param_1;
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x39,2,&(*(undefined4 *)(gen_frame + 0x28)));
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x38));
    iVar2 = 1;
    do {
      puVar3 = puVar3 + -2;
      uVar1 = F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  case 6: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xe;
    break;
  case 7: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xf;
    break;
  case 8: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
    break;
  default: ;
switchD_007a5295_default: ;
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0xc));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(int *)(gen_frame + 0x2c)) = iVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(undefined4 *)(gen_frame + 0x34)) = param_1;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x20)));
  puVar3 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 2;
  do {
    puVar3 = puVar3 + -2;
    uVar1 = F_005a2670(puVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
switchD_007a5295_caseD_5: ;
  goto switchD_007a5295_default;
}

/* ref: FUN_007a5470 */
uint F_007a5470(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  undefined1 * this_00;
  int iVar5;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  uVar1 = *(undefined4 *)((int)this + 0x1b4);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x11;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 0x1b4) != 0) {
    uVar2 = F_0055dcb0();
    piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),*(undefined4 *)((int)this + 0x1b4));
    if (piVar3 != (int *)0x0) {
      uVar2 = F_0055dcb0();
      piVar4 = (int *)F_0057f930(*(undefined * PTR32 *)(uVar2 + 0x14),piVar3);
      if (piVar4 == (int *)0x0) {
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x84))(piVar3)));
      }
      ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x14)));
    }
  }
  this_00 = ((undefined1 *)(gen_frame + 0x14));
  iVar5 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  return uVar2;
}

/* ref: FUN_007a5550 */
uint F_007a5550(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00580fd0((undefined *)((int)this + 0x1c0));
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar2 = F_0055dcb0();
    uVar1 = F_0059b860(*(undefined * PTR32 *)(uVar2 + 0x14),*(undefined4 *)(uVar1 + 4),0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf45 */
unsigned int F_007a5590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a5590u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined1 *)(in_ecx + 0x208) = 1;
  return 0;
}

/* ref: FUN_007a55a0 */
uint F_007a55a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a55a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbb04));
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
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryGrid::vf41 */
uint F_007a5710(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"InventoryGrid",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonInventoryGrid::vf38 */
uint F_007a5720(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7a5720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: FUN_007a5740 */
uint F_007a5740(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  uVar2 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  return uVar2;
}

/* ref: FUN_007a5760 */
uint F_007a5760(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  uVar2 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  if (uVar2 != 0) {
    return *(uint *)(uVar2 + 0x204);
  }
  return 0;
}

/* ref: Client::UI2::AddonInventoryGrid::vf52 */
byte F_007a5790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (*param_1 == 2) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    pvVar3 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (pvVar3 != (undefined *)0x0) {
      F_007a5470(pvVar3);
      return 1;
    }
  }
  else if (*param_1 == 5) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    pvVar3 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (pvVar3 != (undefined *)0x0) {
      F_007a51f0(pvVar3);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007a5800 */
unsigned int F_007a5800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0x1e8);
  iVar2 = 5;
  do {
    if (piVar1[-1] != 0) {
      *(undefined1 *)(piVar1[-1] + 0xa9) = (undefined1)param_1;
    }
    if (*piVar1 != 0) {
      *(undefined1 *)(*piVar1 + 0xa9) = (undefined1)param_1;
    }
    if (piVar1[1] != 0) {
      *(undefined1 *)(piVar1[1] + 0xa9) = (undefined1)param_1;
    }
    if (piVar1[2] != 0) {
      *(undefined1 *)(piVar1[2] + 0xa9) = (undefined1)param_1;
    }
    if (piVar1[3] != 0) {
      *(undefined1 *)(piVar1[3] + 0xa9) = (undefined1)param_1;
    }
    piVar1 = piVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_007a5860 */
uint F_007a5860(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbc04));
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
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf41 */
uint F_007a5910(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"InventoryGridCrystal",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf47 */
unsigned int F_007a5920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a5920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  undefined * pAVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  iVar5 = *(int *)(param_1 + 0x1c);
  (*(int *)(gen_frame + 0xc)) = iVar5;
  (*(int *)(gen_frame + 0x10)) = *(int *)(param_2 + 0x18);
  if (iVar5 != 0) {
    F_00560760(&(*(undefined4 *)(gen_frame + 0x0)));
    (*(undefined1 *)(gen_frame + 0xa)) = 2;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x26;
    param_2 = 0xee0;
    param_1 = 1000;
    do {
      this_00 = *(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + param_1 + -0x220);
      if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x9e) == '\0')) {
        iVar5 = *(int *)(iVar5 + 0x20);
        uVar3 = *(uint *)(param_2 + 8 + iVar5);
        iVar1 = *(int *)(param_2 + 4 + iVar5);
        F_00595560(this_00,*(undefined4 *)(param_2 + iVar5));
        uVar3 = uVar3 & 0xffff;
        if (uVar3 == 0xffff) {
          uVar3 = 0xffffffff;
        }
        F_0056e530(this_00,2);
        uVar4 = iVar1 >> 0x10 & 0xffff;
        *(byte *)((int)this_00 + 0xaa) =
             *(byte *)((int)this_00 + 0xaa) ^
             ((uVar4 == 0) * '\x02' ^ *(byte *)((int)this_00 + 0xaa)) & 2;
        *(short *)((int)this_00 + 0x9c) = (short)uVar3;
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)F_00561530(this_00,3);
        pAVar2 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        F_0055dcb0();
        uVar4 = F_0056a410(uVar4);
        F_00584110((*(undefined * PTR32 *)(gen_frame + 0x14)),uVar4);
        (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
        (*(undefined1 *)(gen_frame + 0xb)) = (char)uVar3;
        F_005916c0(this_00,(uint)(uVar3 != 0xffffffff) * 4 + 2,(uint)(byte)pAVar2[0x13a],&(*(undefined4 *)(gen_frame + 0x0))
                    );
        iVar5 = (*(int *)(gen_frame + 0xc));
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + 0xc;
    } while (param_1 < 0x430);
  }
  return 0;
}

/* ref: FUN_007a5a90 */
uint F_007a5a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_007a5260(this_00,param_1);
    return uVar2;
  }
  return 0;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf52 */
byte F_007a5ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (*param_1 == 2) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    pvVar3 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (pvVar3 != (undefined *)0x0) {
      F_007a5470(pvVar3);
      return 1;
    }
  }
  else if (*param_1 == 5) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    pvVar3 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (pvVar3 != (undefined *)0x0) {
      F_007a51f0(pvVar3);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007a5b30 */
unsigned int F_007a5b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0x1cc);
  iVar2 = 3;
  do {
    if (piVar1[-1] != 0) {
      *(undefined1 *)(piVar1[-1] + 0xa9) = (undefined1)param_1;
    }
    if (*piVar1 != 0) {
      *(undefined1 *)(*piVar1 + 0xa9) = (undefined1)param_1;
    }
    if (piVar1[1] != 0) {
      *(undefined1 *)(piVar1[1] + 0xa9) = (undefined1)param_1;
    }
    if (piVar1[2] != 0) {
      *(undefined1 *)(piVar1[2] + 0xa9) = (undefined1)param_1;
    }
    if (piVar1[3] != 0) {
      *(undefined1 *)(piVar1[3] + 0xa9) = (undefined1)param_1;
    }
    if (piVar1[4] != 0) {
      *(undefined1 *)(piVar1[4] + 0xa9) = (undefined1)param_1;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_007a5ba0 */
uint F_007a5ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbd04));
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
  *(undefined1 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  F_00580ea0((undefined *)((int)this + 0x1b4));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x300;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined1 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_007a5c70 */
uint F_007a5c70(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbd04));
  F_00590cc0((undefined *)((int)this + 0x1b4));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf36 */
byte F_007a5c90(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this);
  bVar1 = F_00560e80(this + 0x1b4,this);
  return bVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf41 */
uint F_007a5cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"InventoryEvent",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonInventoryEvent::vf25 */
uint F_007a5cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf53 */
unsigned int F_007a5d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::AddonInventoryEvent::vf5 */
uint F_007a5d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0059bc90(this + 0x1b4);
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf6 */
uint F_007a5d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a5d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00580f10(this + 0x1b4,0,0);
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: FUN_007a5d80 */
uint F_007a5d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0x194);
  iVar3 = 5;
  do {
    F_0059dde0((undefined *)*puVar2,0);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x194),1);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf38 */
uint F_007a5dc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7a5dc0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)param_1 + 0x1ac) != '\0') {
    if (*(int *)((int)param_1 + 0x1a8) != 0) {
      uVar1 = F_0055dcb0();
      uVar1 = F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14),*(undefined4 *)((int)param_1 + 0x1a8));
      if ((uVar1 == 0) ||
         ((uVar1 = *(uint *)(uVar1 + 0xf4) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
      goto LAB_007a5e16;
      F_00594790(param_1);
    }
    *(undefined1 *)((int)param_1 + 0x1ac) = 0;
  }
LAB_007a5e16: ;
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0((int)param_1 + 0x1b4,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf39 */
unsigned int F_007a5e40(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x1b4);
  return 0;
}

/* ref: Client::UI2::AddonInventoryEvent::vf50 */
unsigned int F_007a5e60(void)
{
  GEN_ENTER(0x7a5e60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonInventoryEvent::vf27 */
uint F_007a5e70(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_0055dcb0();
  piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),*(undefined4 *)(this + 500));
  uVar2 = 0;
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
    ((code *)*(gen_code32 *)(iVar1 + 0x30))(piVar3,uVar2 & 0xffff);
    iVar1 = *piVar3;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x34))(piVar3,uVar2 & 0xffff);
  }
  return uVar2;
}

/* ref: FUN_007a5ed0 */
uint F_007a5ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  uVar1 = *(undefined4 *)((int)this + 0x1a8);
  (*(undefined4 *)(gen_frame + 0x10)) = 0x12;
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

/* ref: Client::UI2::AddonInventoryEvent::vf33 */
uint F_007a5f40(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  uVar1 = F_00580fd0(this + 0x1b4);
  if ((uVar1 == 0) ||
     (pAVar2 = *(undefined * PTR32 *)(uVar1 + 4),
     *(undefined * PTR32 *)(uVar1 + 4) == (undefined *)0x0)) {
    pAVar2 = this;
  }
  return (uint)pAVar2;
}

/* ref: FUN_007a5f60 */
uint F_007a5f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a5f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (*(int *)((int)this + 0x1b0) == 8) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0xf;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x13;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x24;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
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

/* ref: FUN_007a6000 */
uint F_007a6000(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  undefined1 * this_00;
  int iVar4;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  uVar1 = *(undefined4 *)((int)this + 0x1a8);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x11;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 0x1a8) != 0) {
    uVar2 = F_0055dcb0();
    piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),*(undefined4 *)((int)this + 0x1a8));
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x8c))(piVar3);
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x14)));
    }
  }
  this_00 = ((undefined1 *)(gen_frame + 0x14));
  iVar4 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return uVar2;
}

/* ref: FUN_007a60c0 */
uint F_007a60c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a60c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00580fd0((undefined *)((int)this + 0x1b4));
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar2 = F_0055dcb0();
    uVar1 = F_0059b860(*(undefined * PTR32 *)(uVar2 + 0x14),*(undefined4 *)(uVar1 + 4),0);
  }
  return uVar1;
}

/* ref: FUN_007a6100 */
uint F_007a6100(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbe04));
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
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf41 */
uint F_007a61d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a61d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"InventoryGrid",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a6230 */
uint F_007a6230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a6230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_007a5f60(this_00,(uint)*((ushort *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x1e4) + 0x9c)))
                        );
  }
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf52 */
byte F_007a6270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a6270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*param_1 == 2) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (this_00 != (undefined *)0x0) {
      F_007a6000(this_00);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007a62b0 */
uint F_007a62b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a62b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbf04));
  in_ecx = (int)this + 0x194;
  iVar1 = 2;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined1 *)((int)this + 0x2a4) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonShop::vf52 */
uint F_007a6390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a6390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = (*(uint *)(gen_frame + 0x18));
  if ((*param_1 == 5) && (uVar1 = 0, (char)param_1[1] == '\0')) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x402;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1 & 0xffffff00;
}

/* ref: Client::UI2::AddonShop::vf25 */
uint F_007a6420(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: Client::UI2::AddonShop::vf37 */
uint F_007a6470(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
  if (*(int *)(this + 0x290) != 0) {
    F_00406810(*(int *)(this + 0x290));
    *(undefined4 *)(this + 0x290) = 0;
  }
  if (*(int *)(this + 0x294) != 0) {
    F_00406810(*(int *)(this + 0x294));
    *(undefined4 *)(this + 0x294) = 0;
  }
  F_005b0510((undefined *)this);
  uVar2 = F_005a92d0(this,0,0x20,0);
  return uVar2;
}

/* ref: Client::UI2::AddonShop::vf41 */
uint F_007a64e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a64e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,&REFG(undefined, 0x10c1eb8),1,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonShop::vf47 */
uint F_007a64f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a64f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x188),**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x80) + 0x20))));
  return uVar1;
}

/* ref: FUN_007a6520 */
uint F_007a6520(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = 0;
  if (*(int *)((int)this + 0x2a0) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    *(undefined4 *)((int)this + 0x2a0) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x400;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x78))))(*(int * PTR32 *)((int)this + 0x180));
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

/* ref: FUN_007a65b0 */
uint F_007a65b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a65b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  if (*(int *)((int)this + 0x2a0) != 1) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    *(undefined4 *)((int)this + 0x2a0) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x401;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
    F_0058d980(*(undefined4 *)((int)this + 0x184),0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x78))))(*(int * PTR32 *)((int)this + 0x184));
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

/* ref: Client::UI2::AddonShop::vf60 */
byte F_007a6660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a6660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  if (((char)param_2 == '\0') && ((param_1 == 0x10 || (param_1 == 0xf)))) {
    if (*(int *)(this + 0x2a0) == 0) {
      piVar1 = *(int * PTR32 *)(this + 400);
      if (piVar1 != (int *)0x0) {
        uVar2 = F_00561390();
        ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar2 + 0xc0);
      }
      F_007a65b0(this);
    }
    else {
      piVar1 = *(int * PTR32 *)(this + 0x18c);
      if (piVar1 != (int *)0x0) {
        uVar2 = F_00561390();
        ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar2 + 0xc0);
      }
      F_007a6520(this);
    }
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    return 1;
  }
  return 0;
}

/* ref: FUN_007a6710 */
uint F_007a6710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a6710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x294) + param_1 * 0x24)));
  iVar1 = *(int *)((int)this + 0x294) + param_1 * 0x24;
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  F_00584110(pvVar2,uVar4);
  F_005951c0(param_3,*(undefined4 *)(iVar1 + 0x18),0,*param_2);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  F_0057eb30(pvVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[3]);
  F_0057eb30(pvVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
  F_0055a300((undefined *)param_2[4],0);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[5]);
  F_0057eb30(pvVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
  if (*(int *)(iVar1 + 0x14) == 0) {
    uVar3 = F_0059d670((undefined *)param_2[6],7);
    return uVar3;
  }
  F_0059d670((undefined *)param_2[6],0x11);
  uVar4 = *(undefined4 *)(iVar1 + 0x14);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[7]);
  uVar3 = F_0057eb30(pvVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
  return uVar3;
}

/* ref: FUN_007a67f0 */
uint F_007a67f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a67f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc004));
  *(undefined4 *)((int)this + 0xce0) = 0;
  F_00c48350((undefined *)((int)this + 0x1a0),0,0x3c0);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf25 */
uint F_007a6870(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf36 */
uint F_007a68a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a68a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf37 */
uint F_007a68d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a68d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  F_00596cb0((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf41 */
uint F_007a6910(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ShopExchangeItem",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonShopExchangeItem::vf46 */
byte F_007a6920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a6920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined * pAVar6;
  undefined * pAVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined4 * puVar11;
  undefined * local_c;
  
  iVar2 = param_2;
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x14);
  }
  *(int *)(this + 0xce0) = iVar4;
  param_2 = 0;
  if (iVar4 != 0) {
    local_c = this + 0x1a4;
    puVar11 = (undefined4 *)(iVar2 + 0x18c);
    pAVar7 = this + 0x57c;
    puVar5 = (undefined4 *)(iVar2 + 0xcdc);
    do {
      if ((*(byte *)(puVar11 + -0x51) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar11[-0x50];
      }
      *(undefined4 *)(local_c + 4) = uVar10;
      if ((*(byte *)(puVar11 + -1) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *puVar11;
      }
      *(undefined4 *)local_c = uVar10;
      if ((*(byte *)(puVar11 + 0x9f) & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (undefined2)puVar11[0xa0];
      }
      *(undefined2 *)(local_c + 0xc) = uVar9;
      if ((*(byte *)(puVar11 + 0xef) & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (undefined2)puVar11[0xf0];
      }
      *(undefined2 *)(local_c + 0xe) = uVar9;
      if ((*(byte *)(puVar11 + 0x13f) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar11[0x140];
      }
      *(undefined4 *)(local_c + -4) = uVar10;
      if ((*(byte *)(puVar11 + 0x1df) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar11[0x1e0];
      }
      *(undefined4 *)(local_c + 0x10) = uVar10;
      if ((*(byte *)(puVar5 + -0xa3) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar5[-0xa2];
      }
      *(undefined4 *)(pAVar7 + -0x14) = uVar10;
      if ((*(byte *)(puVar5 + -3) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar5[-2];
      }
      *(undefined4 *)(pAVar7 + -0x18) = uVar10;
      if ((*(byte *)(puVar5 + 0x13d) & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (undefined2)puVar5[0x13e];
      }
      *(undefined2 *)(pAVar7 + -0xc) = uVar9;
      if ((*(byte *)(puVar5 + 0x1dd) & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (undefined2)puVar5[0x1de];
      }
      *(undefined2 *)(pAVar7 + -10) = uVar9;
      if ((*(byte *)(puVar5 + 0x27d) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar5[0x27e];
      }
      *(undefined4 *)(pAVar7 + -0x1c) = uVar10;
      if ((*(byte *)(puVar5 + -0xa1) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar5[-0xa0];
      }
      *(undefined4 *)(pAVar7 + 4) = uVar10;
      if ((*(byte *)(puVar5 + -1) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *puVar5;
      }
      *(undefined4 *)pAVar7 = uVar10;
      if ((*(byte *)(puVar5 + 0x13f) & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (undefined2)puVar5[0x140];
      }
      *(undefined2 *)(pAVar7 + 0xc) = uVar9;
      if ((*(byte *)(puVar5 + 0x1df) & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (undefined2)puVar5[0x1e0];
      }
      *(undefined2 *)(pAVar7 + 0xe) = uVar9;
      if ((*(byte *)(puVar5 + 0x27f) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar5[0x280];
      }
      *(undefined4 *)(pAVar7 + -4) = uVar10;
      local_c = local_c + 0x18;
      param_2 = param_2 + 1;
      puVar11 = puVar11 + 2;
      puVar5 = puVar5 + 4;
      pAVar7 = pAVar7 + 0x30;
    } while (param_2 < *(uint *)(this + 0xce0));
  }
  F_0058d980(*(undefined4 *)(this + 0x180),(uint)*(ushort *)(this + 0xce0));
  uVar3 = 0;
  if (*(int *)(this + 0xce0) != 0) {
    pAVar7 = this + 0x570;
    do {
      uVar1 = param_2 >> 8;
      param_2 = param_2 & 0xffffff00;
      uVar8 = 0;
      pAVar6 = pAVar7;
      do {
        if ((*(int *)(pAVar6 + -0x10) != 0) && (*(ushort *)pAVar6 < *(ushort *)(pAVar6 + 2))) {
          param_2 = CONCAT31((int3)uVar1,1);
          break;
        }
        uVar8 = uVar8 + 1;
        pAVar6 = pAVar6 + 0x18;
      } while (uVar8 < 2);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x54))))(*(int * PTR32 *)(this + 0x180),uVar3,param_2);
      uVar3 = uVar3 + 1;
      pAVar7 = pAVar7 + 0x30;
    } while (uVar3 < *(uint *)(this + 0xce0));
  }
  return 1;
}

/* ref: FUN_007a6b70 */
uint F_007a6b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a6b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = (*(int *)&gen_args[1]) * 0x18;
  F_005951c0((*(undefined * PTR32 *)&gen_args[3]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1a4))),0,0);
  uVar6 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1a8)));
  pvVar2 = (undefined *)F_00559ba0(*(*(undefined4 * PTR32 *)&gen_args[2]));
  F_00584110(pvVar2,uVar6);
  uVar3 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1b0)));
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  pvVar2 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)&gen_args[2])[2]);
  F_0057eb30(pvVar2,uVar3,uVar6,uVar7,uVar8,uVar9);
  uVar3 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1b2)));
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  pvVar2 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)&gen_args[2])[3]);
  F_0057eb30(pvVar2,uVar3,uVar6,uVar7,uVar8,uVar9);
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[2]) + 6;
  piVar5 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 0x30 + 0x564)));
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x2;
  do {
    iVar1 = piVar5[-1];
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),iVar1 != 0);
    F_0055a300((undefined *)puVar4[-2],(*(int *)&gen_args[1]));
    uVar3 = F_0055a300((undefined *)*puVar4,(*(int *)&gen_args[1]));
    if (iVar1 != 0) {
      if (*piVar5 != 0) {
        F_005951c0((*(undefined * PTR32 *)&gen_args[3]),*piVar5,0,puVar4[-2]);
      }
      uVar3 = (uint)*(ushort *)((int)piVar5 + 0xe);
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      pvVar2 = (undefined *)F_00559ba0(*puVar4);
      uVar3 = F_0057eb30(pvVar2,uVar3,uVar6,uVar7,uVar8,uVar9);
    }
    piVar5 = piVar5 + 6;
    puVar4 = puVar4 + 1;
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + -1)));
  } while ((*(undefined4 * PTR32 *)&gen_args[2]) != (undefined4 *)0x0);
  return uVar3;
}

/* ref: FUN_007a6c70 */
uint F_007a6c70(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc104));
  *(undefined2 *)((int)this + 0x1b0) = 0;
  *(undefined1 *)((int)this + 0x1b2) = 0;
  *(undefined4 *)((int)this + 0x614) = 0;
  *(undefined4 *)((int)this + 0x618) = 0;
  F_00c48350((undefined *)((int)this + 0x1b4),0,0x460);
  F_00c48350((undefined *)((int)this + 0x180),0,0x30);
  return (uint)this;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf25 */
uint F_007a6ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf36 */
uint F_007a6d10(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 0x100;
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf37 */
uint F_007a6d50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  F_00596cb0((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf41 */
uint F_007a6d90(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00572e60(this,"ShopExchangeCurrency",0,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf46 */
byte F_007a6da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a6da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  undefined2 uVar5;
  uint uVar6;
  
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar6 & 2) != 0) {
    if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x180),uVar1);
  }
  if ((uVar6 & 1) != 0) {
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x14);
    }
    uVar6 = 0;
    *(int *)(this + 0x614) = iVar2;
    if (iVar2 != 0) {
      pAVar4 = this + 0x1b8;
      puVar3 = (undefined4 *)(param_2 + 0x18c);
      do {
        if ((*(byte *)(puVar3 + -0x51) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[-0x50];
        }
        *(undefined4 *)(pAVar4 + 4) = uVar1;
        if ((*(byte *)(puVar3 + -1) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *puVar3;
        }
        *(undefined4 *)pAVar4 = uVar1;
        if ((*(byte *)(puVar3 + 0x4f) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[0x50];
        }
        *(undefined4 *)(pAVar4 + 8) = uVar1;
        if ((*(byte *)(puVar3 + 0x9f) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined2)puVar3[0xa0];
        }
        *(undefined2 *)(pAVar4 + 0xc) = uVar5;
        if ((*(byte *)(puVar3 + 0xef) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined2)puVar3[0xf0];
        }
        *(undefined2 *)(pAVar4 + 0xe) = uVar5;
        if ((*(byte *)(puVar3 + 0x13f) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[0x140];
        }
        *(undefined4 *)(pAVar4 + -4) = uVar1;
        if ((*(byte *)(puVar3 + 0x1df) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[0x1e0];
        }
        *(undefined4 *)(pAVar4 + 0x10) = uVar1;
        *(undefined2 *)(pAVar4 + 0x14) = 1;
        uVar6 = uVar6 + 1;
        puVar3 = puVar3 + 2;
        pAVar4 = pAVar4 + 0x1c;
      } while (uVar6 < *(uint *)(this + 0x614));
    }
    if (*(int *)(this + 0x1a8) != 0) {
      F_0058d980(*(int *)(this + 0x1a8),(uint)*(ushort *)(this + 0x614));
      if (*(int *)(this + 0x614) == 0) {
        F_0059d6a0(this,0x65,1,0);
        return 1;
      }
      F_0059d6a0(this,0x11,1,0);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf60 */
uint F_007a6f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a6f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int * piVar5;
  uint * this_00;
  int iVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  AVar1 = this[0x1b1];
  uVar4 = (*(uint *)(gen_frame + 0x38));
  if ((byte)AVar1 < 2) {
LAB_007a6f2e: ;
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar4 & 0xffffff00;
  }
  if (param_1 == 0xf) {
    if (((char)param_2 != '\0') && (uVar4 = (byte)AVar1 - 1, (byte)this[0x1b0] == uVar4))
    goto LAB_007a6f2e;
    param_1 = (uint)((ulonglong)((byte)this[0x1b0] + 1) /
                    (ulonglong)(longlong)(int)(uint)(byte)AVar1);
    this[0x1b0] = SUB81((ulonglong)((byte)this[0x1b0] + 1) %
                        (ulonglong)(longlong)(int)(uint)(byte)AVar1,0);
  }
  else if (param_1 == 0x10) {
    if (this[0x1b0] == (undefined1)0x0) {
      uVar4 = 0;
      if ((char)param_2 != '\0') goto LAB_007a6f2e;
      this[0x1b0] = (undefined1)((char)AVar1 - 1);
      param_1 = 0;
    }
    else {
      param_1 = 0;
      this[0x1b0] = (undefined1)((char)this[0x1b0] + -1);
    }
  }
  if (*(undefined * PTR32 *)(this + 0x1a8) != (undefined *)0x0) {
    F_0059ec00(*(undefined * PTR32 *)(this + 0x1a8));
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    AVar1 = this[0x1b0];
    (*(undefined4 *)(gen_frame + 0x24)) = 0x403;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
    (*(uint *)(gen_frame + 0x34)) = (uint)(byte)AVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x20)));
    uVar4 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    iVar6 = *((int *)GEN_TOP((*(int *)(this + 0x1a8) + 0xcc)));
    if (iVar6 < 0) {
      AVar1 = this[0x13a];
      uVar4 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,0);
    }
    else {
      F_00560760(&(*(undefined4 *)(gen_frame + 0x14)));
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + iVar6 * 0x1c + 0x1b4);
      sVar2 = *(short *)(this + iVar6 * 0x1c + 0x1cc);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + iVar6 * 0x1c + 0x1bc);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x10001;
      if (sVar2 < 2) {
        uVar3 = *(ushort *)(this + iVar6 * 0x1c + 0x1c6);
        if (1 < uVar3) {
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x1c)) + 0)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x1c)) = CONCAT22(1,uVar3);
        }
      }
      else {
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x1c)) + 0)) = sVar2;
        (*(undefined4 *)(gen_frame + 0x1c)) = CONCAT22(1,sVar2);
      }
      piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x50))))(*(int * PTR32 *)(this + 0x1a8),iVar6)));
      AVar1 = this[0x13a];
      (*(uint *)(gen_frame + 0x10)) = F_0055dcb0();
      uVar9 = 0;
      uVar8 = 0;
      puVar7 = &(*(undefined4 *)(gen_frame + 0x14));
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x38))(piVar5);
      F_00588780((undefined *)((*(uint *)(gen_frame + 0x10)) + 0xe0),4,(uint)(byte)AVar1,uVar4,puVar7,uVar8,uVar9);
    }
    piVar5 = *(int * PTR32 *)(this + (uint)(byte)this[0x1b0] * 4 + 0x188);
    uVar4 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar5 + 0x60))(piVar5,uVar4 + 0xc0);
    this_00 = &(*(uint *)(gen_frame + 0x38));
    iVar6 = 2;
    do {
      this_00 = this_00 + -2;
      uVar4 = F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return param_1 & 0xffffff00;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf2 */
uint F_007a7140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a7140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pAVar1;
  undefined1 AVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint * this_00;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0x17: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0x403;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(undefined4 *)(gen_frame + 0x24)) = param_2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
    break;
  default: ;
    goto switchD_007a7180_caseD_18;
  case 0x19: ;
    if (((undefined2 *)param_4[1] != (undefined2 *)0x0) && (-1 < param_4[2])) {
      *(undefined2 *)(this + param_4[2] * 0x1c + 0x1cc) = *(undefined2 *)param_4[1];
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x6c))))(*(int * PTR32 *)(this + 0x1a8),param_4[2],0,0);
    }
    break;
  case 0x1f: ;
    pAVar1 = this + param_4[2] * 0x1c + 0x1b4;
    F_00560760(((undefined1 *)(gen_frame + 0x0)));
    (*(undefined1 *)(gen_frame + 0xa)) = 1;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)pAVar1;
    (*(undefined1 *)(gen_frame + 0xb)) = 0;
    (*(ushort *)(gen_frame + 0x8)) = 1;
    uVar4 = *(ushort *)(pAVar1 + 0x18);
    if ((1 < (short)uVar4) || (uVar4 = *(ushort *)(pAVar1 + 0x12), 1 < uVar4)) {
      (*(ushort *)(gen_frame + 0x8)) = uVar4;
    }
    if (*param_4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(*param_4 + 0x70);
    }
    AVar2 = this[0x13a];
    uVar5 = F_0055dcb0();
    F_00588780((undefined *)(uVar5 + 0xe0),4,(uint)(byte)AVar2,uVar6,((undefined1 *)(gen_frame + 0x0)),0,0);
    goto switchD_007a7180_caseD_18;
  case 0x20: ;
    uVar5 = F_0055dcb0();
    F_00594d90((undefined *)(uVar5 + 0xe0),0);
    goto switchD_007a7180_caseD_18;
  case 0x21: ;
    uVar6 = *(undefined4 *)(this + param_4[2] * 0x1c + 0x1c8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar6;
    sVar3 = *(short *)(this + param_4[2] * 0x1c + 0x1cc);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(int *)(gen_frame + 0x1c)) = (int)sVar3;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
  }
  F_00557670((*(undefined4 *)(gen_frame + 0xc)),0);
switchD_007a7180_caseD_18: ;
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar7 = 2;
  do {
    this_00 = this_00 + -2;
    uVar5 = F_005a2670(this_00);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: FUN_007a7340 */
uint F_007a7340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a7340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = param_1 * 0x1c;
  F_005951c0(param_3,*(undefined4 *)((int)this + param_1 * 0x1c + 0x1b8),0,0);
  F_005951c0(param_3,*(undefined4 *)((int)this + 0x618),0,param_2[3]);
  uVar4 = *(undefined4 *)((int)this + iVar1 + 0x1bc);
  pvVar2 = (undefined *)F_00559ba0(*param_2);
  F_00584110(pvVar2,uVar4);
  uVar3 = (uint)*(ushort *)((int)this + iVar1 + 0x1c4);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  F_0057eb30(pvVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar4 = *(undefined4 *)((int)this + iVar1 + 0x1c0);
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  F_00584110(pvVar2,uVar4);
  uVar3 = (uint)*(ushort *)((int)this + iVar1 + 0x1c6);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[4]);
  uVar3 = F_0057eb30(pvVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return uVar3;
}

/* ref: FUN_007a73f0 */
uint F_007a73f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a73f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc204));
  F_0042b630((int)this + 0x180);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x60;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0xa0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc4;
  *(undefined2 *)((int)this + 0x1d8) = 1;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  return (uint)this;
}

/* ref: FUN_007a7460 */
uint F_007a7460(unsigned int gen_a0)
{
  GEN_ENTER(0x7a7460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc204));
  F_0042c880((undefined *)((int)this + 0x180));
  uVar1 = F_00590600(this);
  return uVar1;
}

