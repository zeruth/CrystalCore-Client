#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::UI2::AddonSocialDetailA::vf36 */
uint F_00795ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x795ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 0x8000;
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailA::vf41 */
byte F_00795af0(unsigned int gen_a0)
{
  GEN_ENTER(0x795af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"SocialDetailA",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSocialDetailA::vf5 */
uint F_00795b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x795b00u, gen_a0, gen_a1, 0u, 0u);
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
    F_00594790(this);
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: FUN_00795b50 */
uint F_00795b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x88))) != '\0');
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x88))) != '\0') {
    uVar1 = uVar1 | 2;
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x88))) != '\0') {
    uVar1 = uVar1 | 4;
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b8) + 0x88))) != '\0') {
    uVar1 = uVar1 | 8;
  }
  if (uVar1 == 0) {
    uVar1 = F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2e8) * 4 + 0x1ac))),1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailA::vf25 */
uint F_00795bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x795bc0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00795c00 */
uint F_00795c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x795c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (param_1 != 3) {
    F_0042e430((undefined *)((int)this + 0x23c),param_2);
    F_0042e430((undefined *)((int)this + 0x290),param_3);
    if (param_1 == 0) {
      return 2;
    }
  }
  return 0;
}

/* ref: FUN_00795c50 */
uint F_00795c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00795c90 */
unsigned int F_00795c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795c90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined * pvVar4;
  uint3 uVar7;
  int iVar5;
  undefined4 * puVar6;
  int iVar8;
  undefined4 uVar9;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 8)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x37c)));
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),iVar1 == iVar2);
  if (((iVar1 == iVar2) && (iVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x380))), iVar8 != 0)) &&
     (pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar8 * 4 + 0x1b8))), pvVar4 != (undefined *)0x0)) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e4))) = iVar8;
    F_0059dde0(pvVar4,1);
    F_005614a0(pvVar4,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 * PTR32 *)&gen_args[2]));
    uVar9 = 1;
    pvVar4 = (undefined *)F_00561550(pvVar4,2);
    F_0055a300(pvVar4,uVar9);
  }
  puVar6 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc)));
  iVar8 = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x1;
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar6;
  do {
    if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2ec))) & (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x8))) != 0) {
      piVar3 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
      uVar7 = (uint3)((uint)((int)(uintptr_t)puVar6) >> 8);
      if ((*((char *)GEN_TOP((iVar8 + 0x360 + (int)(*(undefined * PTR32 *)&gen_args[0])))) == '\0') || (iVar1 != iVar2)) {
        iVar5 = (uint)uVar7 << 8;
      }
      else {
        iVar5 = CONCAT31(uVar7,1);
      }
      F_0059dde0(piVar3,iVar5);
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(undefined4 *)(gen_frame + 0x4)));
    }
    (*(undefined4 * PTR32 *)&gen_args[2]) = (*(undefined4 * PTR32 *)&gen_args[2]) + 1;
    iVar8 = iVar8 + 1;
    puVar6 = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8))) << 1 | (uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) < 0));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
  } while (iVar8 < 0x1c);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e4)));
  if (((0 < iVar1) && (iVar1 < 0x1d)) &&
     (piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 4 + 0x1b8))), piVar3 != (int *)0x0)) {
    F_0059dde0(piVar3,(*(undefined4 *)(gen_frame + 0x4)));
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(undefined4 *)(gen_frame + 0x4)));
    F_0055a370(piVar3[0x1c],0);
  }
  return 0;
}

/* ref: FUN_00795da0 */
uint F_00795da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x795da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = param_1 * 0xa8 + 900 + (int)this;
  this_00 = (undefined *)*param_2;
  uVar2 = F_0042a990(iVar1 + 0x54);
  F_00584110(this_00,uVar2);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = F_0056c3b0(iVar1);
  uVar2 = F_005951c0(param_3,uVar2,uVar3,uVar4);
  return uVar2;
}

/* ref: FUN_00795df0 */
uint F_00795df0(unsigned int gen_a0)
{
  GEN_ENTER(0x795df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c80ac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  F_0042b630((int)this + 0x238);
  F_0042b630((int)this + 0x28c);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  return (uint)this;
}

/* ref: FUN_00795e90 */
uint F_00795e90(unsigned int gen_a0)
{
  GEN_ENTER(0x795e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c80ac));
  F_0042c880((undefined *)((int)this + 0x28c));
  F_0042c880((undefined *)((int)this + 0x238));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailB::vf41 */
byte F_00795ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x795ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"SocialDetailB",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSocialDetailB::vf5 */
uint F_00795ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x795ee0u, gen_a0, gen_a1, 0u, 0u);
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
    F_00594790(this);
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailB::vf37 */
uint F_00795f30(unsigned int gen_a0)
{
  GEN_ENTER(0x795f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,9,0);
  F_005a92d0(this,0,8,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailB::vf47 */
uint F_00795f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  char * pcVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  uint uVar8;
  undefined * puVar9;
  undefined * pvVar10;
  undefined3 extraout_var = 0;
  int iVar11;
  undefined * pAVar12;
  float10 fVar13;
  
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5);
  (*(int *)(gen_frame + 0x18)) = *(int *)(uVar5 + 0x24);
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b9a0(uVar5);
  iVar7 = *(int *)(uVar5 + 0x20);
  F_00584110(*(undefined * PTR32 *)(this + 0x1b0),*((undefined4 *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0x100))));
  pcVar6 = (char *)F_0055aaf0(*(undefined4 *)(this + 0x1a4));
  pcVar2 = *((char * PTR32 *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0xfc)));
  if ((((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) || (pcVar2 == (char *)0x0)) ||
     (*pcVar2 == '\0')) {
    F_0059d6a0(this,0x11,1,0);
  }
  else {
    F_0059d6a0(this,0x65,1,0);
    F_005600b0(((undefined1 *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 0xa4))));
    F_00560080(((undefined1 *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 0xa8))));
    F_005959f0(*(undefined * PTR32 *)(this + 0x1a8),((undefined1 *)(gen_frame + 0x8)));
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0),pcVar2);
    uVar5 = F_00577bc0(*(undefined * PTR32 *)(this + 0x1a0),0,0,REFG(undefined4, 0x108cc50),0);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = gen_bits2f(uVar5);
    dVar3 = (double)(int)uVar5;
    if ((int)uVar5 < 0) {
      dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(double *)(gen_frame + 0x10)) = dVar3;
    fVar13 = F_00559d60(*(undefined4 *)(this + 0x1a0));
    fVar1 = (float)(fVar13 + (float10)(*(double *)(gen_frame + 0x10)));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = fVar1;
    (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x10)) + 0))));
    F_00559e70(*(undefined4 *)(this + 0x1a4),fVar1);
  }
  iVar11 = (*(int *)(gen_frame + 0x18));
  if (*((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 0xa0))) < 1) {
    F_0055a300(*(undefined * PTR32 *)(this + 0x18c),0);
    F_0042aca0(this + 0x28c);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)(this + 0x18c),1);
    F_00591c00(*(undefined * PTR32 *)(this + 0x18c),*((undefined4 *)GEN_TOP((*(int *)(iVar11 + 0x20) + 0xa0))),0);
    F_0042e430(this + 0x28c,*((undefined4 *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0x104))));
  }
  iVar7 = -0x11c - (int)this;
  pAVar12 = this + 0x1c8;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = gen_bits2f(iVar7);
  (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44(iVar7,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x10)) + 0))));
  iVar11 = 0x1c;
  while( true ) {
    uVar5 = *((uint *)GEN_TOP((pAVar12 + *(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + iVar7)));
    uVar8 = uVar5 & 0xffff;
    if (uVar8 == 0) {
      puVar9 = &REFG(undefined, 0x10c179c);
    }
    else {
      puVar9 = (undefined *)F_00560910(uVar8);
    }
    pvVar10 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar12,3);
    F_00584110(pvVar10,puVar9);
    uVar5 = (uint)((byte)(uVar5 >> 0x10) & 1);
    pvVar10 = (undefined *)F_00561550(*(undefined * PTR32 *)pAVar12,2);
    bVar4 = F_0055a300(pvVar10,uVar5);
    pAVar12 = pAVar12 + 4;
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) break;
    iVar7 = (int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)));
  }
  return CONCAT31(extraout_var,bVar4);
}

/* ref: Client::UI2::AddonSocialDetailB::vf53 */
unsigned int F_00796160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x796160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::AddonSocialDetailB::vf25 */
uint F_00796170(unsigned int gen_a0)
{
  GEN_ENTER(0x796170u, gen_a0, 0u, 0u, 0u);
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

/* ref: Client::UI2::AddonSocialDetailB::vf2 */
uint F_007961b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7961b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined4 uVar3;
  
  if ((short)param_1 == 6) {
    F_00560760(((uint *)(gen_frame + 0x0)));
    if (param_2 == 0x1c) {
      if (**(char * PTR32 *)(this + 0x238) != '\0') {
        uVar2 = F_0042a990(this + 0x238);
        AVar1 = this[0x13a];
        ((uint *)(gen_frame + 0x0))[0] = uVar2;
        uVar2 = F_0055dcb0();
        uVar3 = *(undefined4 *)(this + 0x188);
        goto LAB_0079623f;
      }
    }
    else if ((param_2 == 0x1d) && (**(char * PTR32 *)(this + 0x28c) != '\0')) {
      uVar2 = F_0042a990(this + 0x28c);
      AVar1 = this[0x13a];
      ((uint *)(gen_frame + 0x0))[0] = uVar2;
      uVar2 = F_0055dcb0();
      uVar3 = *(undefined4 *)(this + 400);
LAB_0079623f: ;
      F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)(byte)AVar1,uVar3,((uint *)(gen_frame + 0x0)),0,0);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
  }
  else {
    if ((short)param_1 != 7) {
      return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
    }
    if ((0x1b < param_2) && (param_2 < 0x1e)) {
      AVar1 = this[0x13a];
      uVar2 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    }
  }
  uVar2 = F_00557670(param_3,0);
  return uVar2;
}

/* ref: FUN_007962b0 */
uint F_007962b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7962b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c81ac));
  iVar2 = (int)this + 0x180;
  iVar1 = 9;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar2 = (int)this + 0x4c8;
  iVar1 = 0x1f;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined4 *)((int)this + 0x1050) = 0;
  *(undefined4 *)((int)this + 0x1054) = 0;
  *(undefined4 *)((int)this + 0x1058) = 0;
  *(undefined4 *)((int)this + 0x105c) = 0;
  *(undefined4 *)((int)this + 0x1060) = 0;
  F_00c48350((undefined *)((int)this + 0xf48),0,0x108);
  return (uint)this;
}

/* ref: FUN_00796340 */
uint F_00796340(unsigned int gen_a0)
{
  GEN_ENTER(0x796340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c81ac));
  pvVar2 = (undefined *)((int)this + 0xf48);
  iVar3 = 0x1f;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x4c8);
  iVar3 = 9;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf37 */
uint F_007963a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7963a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf41 */
byte F_007963d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7963d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"PcSearchDetail",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf5 */
uint F_007963e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7963e0u, gen_a0, gen_a1, 0u, 0u);
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
    F_00594790(this);
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf25 */
uint F_00796430(unsigned int gen_a0)
{
  GEN_ENTER(0x796430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf58 */
uint F_00796460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x796460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  short sVar1;
  int * piVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  
  uVar3 = (short)param_2 + (short)param_4;
  uVar4 = F_0055dcb0();
  sVar1 = *(short *)(uVar4 + 0x238);
  uVar4 = F_0055dcb0();
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar4 + 0x14) + 0xd8)));
  uVar4 = (uint)uVar3;
  if (piVar2 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,0);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,0);
    uVar7 = (sVar1 - (short)uVar5) - (short)uVar6;
    if ((short)uVar7 < (short)uVar3) {
      uVar4 = (uint)uVar7;
    }
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,param_1 + param_3,uVar4);
  return uVar4;
}

/* ref: FUN_007964e0 */
uint F_007964e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7964e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0xf60);
  iVar2 = 10;
  do {
    uVar1 = 0;
    if ((undefined *)*puVar4 != (undefined *)0x0) {
      uVar1 = F_0059dde0((undefined *)*puVar4,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00796520 */
uint F_00796520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x796520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0xf88);
  iVar2 = 0x20;
  do {
    uVar1 = 0;
    if ((undefined *)*puVar4 != (undefined *)0x0) {
      uVar1 = F_0059dde0((undefined *)*puVar4,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00796560 */
uint F_00796560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x796560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x1008);
  iVar2 = 9;
  do {
    uVar1 = param_1;
    if (*(int *)((int)this + param_1 * 4 + 0x1008) != 0) {
      uVar1 = F_0059dde0((undefined *)*puVar4,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_007965c0 */
uint F_007965c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7965c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x102c);
  iVar2 = 4;
  do {
    uVar1 = 0;
    if ((undefined *)*puVar4 != (undefined *)0x0) {
      uVar1 = F_0059dde0((undefined *)*puVar4,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00796600 */
uint F_00796600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x796600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x103c);
  iVar2 = 3;
  do {
    uVar1 = 0;
    if ((undefined *)*puVar4 != (undefined *)0x0) {
      uVar1 = F_0059dde0((undefined *)*puVar4,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00796660 */
uint F_00796660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x796660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559b90(param_2);
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = F_00591c00(this,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_00796690 */
uint F_00796690(unsigned int gen_a0)
{
  GEN_ENTER(0x796690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c82ac));
  iVar2 = (int)this + 0x180;
  iVar1 = 9;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar2 = (int)this + 0x4c8;
  iVar1 = 0x1f;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0xf48) = 0;
  *(undefined4 *)((int)this + 0xf4c) = 0;
  F_0042b630((int)this + 0xf58);
  F_0042b630((int)this + 0xfac);
  F_0042b630((int)this + 0x1000);
  F_0042b630((int)this + 0x1054);
  F_0042b630((int)this + 0x10a8);
  F_0042b630((int)this + 0x10fc);
  iVar2 = (int)this + 0x1150;
  iVar1 = 0x47;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined2 *)((int)this + 0x2a1c) = 0;
  *(undefined4 *)((int)this + 0x2a20) = 0;
  *(undefined4 *)((int)this + 0x2a24) = 0;
  *(undefined4 *)((int)this + 0x2a64) = 0;
  *(undefined4 *)((int)this + 0x2a68) = 0;
  *(undefined2 *)((int)this + 0x2a6c) = 0;
  *(undefined1 *)((int)this + 0x2a6e) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_00c48350((undefined *)((int)this + 0x2a28),0,0x3c);
  F_00c48350((undefined *)((int)this + 0x29b8),0,100);
  F_00c48350((undefined *)((int)this + 0x28f0),0,200);
  return (uint)this;
}

/* ref: FUN_007967d0 */
uint F_007967d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7967d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c82ac));
  pvVar3 = (undefined *)((int)this + 0x28f0);
  iVar2 = 0x47;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x54);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_0042c880((undefined *)((int)this + 0x10fc));
  F_0042c880((undefined *)((int)this + 0x10a8));
  F_0042c880((undefined *)((int)this + 0x1054));
  F_0042c880((undefined *)((int)this + 0x1000));
  F_0042c880((undefined *)((int)this + 0xfac));
  F_0042c880((undefined *)((int)this + 0xf58));
  pvVar3 = (undefined *)((int)this + 0xf48);
  iVar2 = 0x1f;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x54);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pvVar3 = (undefined *)((int)this + 0x4c8);
  iVar2 = 9;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x54);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearch::vf37 */
uint F_00796880(unsigned int gen_a0)
{
  GEN_ENTER(0x796880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if (*(int *)(this + 0x2a20) != 0) {
    F_00406810(*(int *)(this + 0x2a20));
    *(undefined4 *)(this + 0x2a20) = 0;
  }
  if (*(int *)(this + 0x2a64) != 0) {
    F_00406810(*(int *)(this + 0x2a64));
    *(undefined4 *)(this + 0x2a64) = 0;
  }
  iVar1 = *(int *)(this + 0x2a24);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x54);
      F_0042c880(this_00);
    }
    F_00406b30((int *)(iVar1 + -4));
    *(undefined4 *)(this + 0x2a24) = 0;
  }
  F_005a92d0(this,0,0x21,0);
  F_005a92d0(this,1,0x24,0);
  uVar3 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar3 + 0xe0),(uint)(byte)this[0x13a],1);
  F_00596b90((undefined *)(uVar3 + 0xe0),(uint)(byte)this[0x13a],1);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonItemSearch::vf41 */
byte F_00796960(unsigned int gen_a0)
{
  GEN_ENTER(0x796960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ItemSearch",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonItemSearch::vf25 */
uint F_00796970(unsigned int gen_a0)
{
  GEN_ENTER(0x796970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007969a0 */
uint F_007969a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7969a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (uint)*(byte *)(param_1 + 0x29b8 + (int)this) * 0x10 + *(int *)((int)this + 0x2a64);
  F_005951c0(param_3,*(undefined4 *)(iVar3 + 4),0,0);
  pvVar1 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 4));
  F_00584110(pvVar1,*(undefined4 *)(iVar3 + 8));
  pvVar1 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 8));
  uVar2 = F_00584110(pvVar1,*(undefined4 *)(iVar3 + 0xc));
  return uVar2;
}

/* ref: FUN_00796a20 */
byte F_00796a20(unsigned int gen_a0)
{
  GEN_ENTER(0x796a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  
  pcVar3 = (char *)0x0;
  if (*(int *)((int)this + 0x2a28) != 0) {
    pcVar3 = (char *)F_0042a990(*(int *)((int)this + 0x2a28) + 0xf0);
  }
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  return pcVar3 != pcVar1;
}

/* ref: FUN_00796a50 */
uint F_00796a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x796a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00559b90(param_2);
  uVar2 = F_0055da10(uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = F_0058f730((undefined *)(uVar2 + 4),param_3,param_4,6);
  }
  return uVar1;
}

/* ref: FUN_00796a80 */
uint F_00796a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x796a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a2c) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x2a2c),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00796aa0 */
uint F_00796aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x796aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a44) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x2a44),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00796ac0 */
uint F_00796ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x796ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c83ac));
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  F_0042b630((int)this + 0x1ac);
  F_0042b630((int)this + 0x200);
  F_0042b630((int)this + 0x254);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  return (uint)this;
}

/* ref: FUN_00796b40 */
uint F_00796b40(unsigned int gen_a0)
{
  GEN_ENTER(0x796b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c83ac));
  F_0042c880((undefined *)((int)this + 0x254));
  F_0042c880((undefined *)((int)this + 0x200));
  F_0042c880((undefined *)((int)this + 0x1ac));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf25 */
uint F_00796b80(unsigned int gen_a0)
{
  GEN_ENTER(0x796b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf36 */
uint F_00796bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x796bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this);
  this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf37 */
uint F_00796bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x796bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x1a4) != 0) {
    F_00406810(*(int *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  F_00596cb0((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],0);
  F_005b0510((undefined *)this);
  F_005a92d0(this,0,0x21,0);
  uVar1 = F_005a92d0(this,1,0x24,0);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf41 */
byte F_00796c50(unsigned int gen_a0)
{
  GEN_ENTER(0x796c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ItemSearchResult",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf47 */
uint F_00796c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x796c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  
  uVar5 = *(uint *)(param_1 + 0x90);
  iVar1 = *(int *)(param_2 + 0x84);
  if ((uVar5 != 0) && (iVar1 != 0)) {
    uVar2 = *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x324)));
    F_0055a300(*(undefined * PTR32 *)(this + 0x1a0),(uint)(uVar2 == 0));
    if ((int)uVar2 < 1) {
      if (uVar2 == 0) {
        F_0042e430(this + 0x1ac,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x324))));
        uVar5 = F_0042a990(this + 0x1ac);
        F_00584110(*(undefined * PTR32 *)(this + 0x1a0),uVar5);
        F_0059ead0(*(undefined * PTR32 *)(this + 0x198),0,0,1);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x74))))(*(int * PTR32 *)(this + 0x198),0xfffffffe,0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x78))))(*(int * PTR32 *)(this + 0x198));
      }
    }
    else {
      F_00592700(*(undefined * PTR32 *)(this + 0x198),0);
      if (*(int *)(this + 0x1a8) < (int)uVar2) {
        *(uint *)(this + 0x1a8) = uVar2;
        if (*(int *)(this + 0x1a4) != 0) {
          F_00406810(*(int *)(this + 0x1a4));
          *(undefined4 *)(this + 0x1a4) = 0;
        }
        piVar3 = (int *)F_00404270();
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(int *)(this + 0x1a8) * 0x1c,0x10);
        *(uint *)(this + 0x1a4) = uVar4;
      }
      puVar6 = *(undefined4 * PTR32 *)(this + 0x1a4);
      if (0 < (int)uVar2) {
        iVar7 = 0x330;
        param_2 = uVar2;
        do {
          puVar6[1] = *((undefined4 *)GEN_TOP((iVar7 + -4 + *(int *)(iVar1 + 0x20))));
          puVar6[2] = *((undefined4 *)GEN_TOP((iVar7 + *(int *)(iVar1 + 0x20))));
          puVar6[3] = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)(iVar1 + 0x20))));
          puVar6[4] = *((undefined4 *)GEN_TOP((iVar7 + 0xc + *(int *)(iVar1 + 0x20))));
          puVar6[5] = *((undefined4 *)GEN_TOP((iVar7 + 8 + *(int *)(iVar1 + 0x20))));
          *puVar6 = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)(uVar5 + 0x20))));
          *(bool *)((int)puVar6 + 0x19) = 0 < *((int *)GEN_TOP((iVar7 + *(int *)(uVar5 + 0x20))));
          *(undefined1 *)(puVar6 + 6) = *((undefined1 *)GEN_TOP((iVar7 + 8 + *(int *)(uVar5 + 0x20))));
          F_00596d70(*(undefined * PTR32 *)(this + 0x198),*puVar6,0,0,0);
          iVar7 = iVar7 + 0x14;
          puVar6 = puVar6 + 7;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      F_0058d980(*(undefined4 *)(this + 0x198),uVar2);
    }
    F_0055a300(*(undefined * PTR32 *)(this + 0x19c),1);
    uVar5 = F_00584110(*(undefined * PTR32 *)(this + 0x19c),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x328))));
  }
  return uVar5;
}

/* ref: Client::UI2::AddonItemSearchResult::vf2 */
uint F_00796e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x796e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined1 AVar2;
  int iVar3;
  char * pcVar4;
  char * pcVar5;
  uint uVar6;
  char * PTR32 * this_00;
  int iVar7;
  undefined4 uVar8;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0x17: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (param_2 != 3) {
      (*(uint *)(gen_frame + 0x4)) = 1;
    }
    (*(uint *)(gen_frame + 0x4)) = (uint)(param_2 != 3);
    uVar8 = 1;
    goto LAB_00796eb1;
  case 0x1f: ;
    iVar7 = param_4[2];
    if (((-1 < iVar7) && (*param_4 != 0)) && (*(int *)(*param_4 + 0x1e4) != 0)) {
      iVar3 = *(int *)(this + 0x1a4);
      F_00560760(&(*(char * PTR32 *)(gen_frame + 0x10)));
      uVar6 = F_00568410(*(undefined * PTR32 *)(*param_4 + 0x1e4));
      if ((uVar6 == 9) && (pcVar4 = *(char * PTR32 *)(iVar3 + iVar7 * 0x1c + 0x14), pcVar4 != (char *)0x0))
      {
        pcVar5 = pcVar4;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 != pcVar4 + 1) {
          iVar7 = *param_4;
          AVar2 = this[0x13a];
          (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar4;
          uVar8 = *(undefined4 *)(iVar7 + 0x1e4);
          uVar6 = F_0055dcb0();
          F_00588780((undefined *)(uVar6 + 0xe0),2,(uint)(byte)AVar2,uVar8,&(*(char * PTR32 *)(gen_frame + 0x10)),0,0);
          break;
        }
      }
      uVar8 = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined1 *)(gen_frame + 0x1b)) = (char)param_4[2];
      (*(undefined1 *)(gen_frame + 0x1a)) = 4;
      (*(undefined2 *)(gen_frame + 0x18)) = 0xffff;
      if (*param_4 != 0) {
        uVar8 = *(undefined4 *)(*param_4 + 0x70);
      }
      AVar2 = this[0x13a];
      uVar6 = F_0055dcb0();
      F_00588780((undefined *)(uVar6 + 0xe0),4,(uint)(byte)AVar2,uVar8,&(*(char * PTR32 *)(gen_frame + 0x10)),0,0);
    }
    break;
  case 0x20: ;
    uVar6 = F_0055dcb0();
    F_00594d90((undefined *)(uVar6 + 0xe0),0);
    break;
  case 0x21: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    iVar7 = param_4[2];
    (*(uint *)(gen_frame + 0x4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = iVar7;
    uVar8 = 2;
LAB_00796eb1: ;
    F_005a9110(this,uVar8,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00557670(param_3,0);
  }
  this_00 = &(*(char * PTR32 *)(gen_frame + 0x10));
  iVar7 = 1;
  do {
    this_00 = this_00 + -2;
    uVar6 = F_005a2670(this_00);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  return uVar6;
}

/* ref: FUN_00797030 */
uint F_00797030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x797030u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar1 = *(int *)((int)this + 0x1a4) + param_1 * 0x1c;
  F_005951c0(param_3,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a4) + param_1 * 0x1c))),0,0);
  F_0055a300((undefined *)param_2[4],(uint)*(byte *)(iVar1 + 0x19));
  F_0055a300((undefined *)param_2[5],(uint)(*(char *)(iVar1 + 0x18) != '\0'));
  if (*(byte *)(iVar1 + 0x18) != 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = (uint)*(byte *)(iVar1 + 0x18);
    uVar4 = 0;
    pvVar2 = (undefined *)F_00559ba0(param_2[5]);
    F_0057eb30(pvVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  pvVar2 = (undefined *)F_00559ba0(*param_2);
  F_00584110(pvVar2,*(undefined4 *)(iVar1 + 0x10));
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  F_00584110(pvVar2,*(undefined4 *)(iVar1 + 4));
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  F_00584110(pvVar2,*(undefined4 *)(iVar1 + 0xc));
  pvVar2 = (undefined *)F_00559ba0(param_2[3]);
  uVar3 = F_00584110(pvVar2,*(undefined4 *)(iVar1 + 8));
  return uVar3;
}

/* ref: FUN_007970f0 */
uint F_007970f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7970f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c84ac));
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf25 */
uint F_00797130(unsigned int gen_a0)
{
  GEN_ENTER(0x797130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf37 */
uint F_00797170(unsigned int gen_a0)
{
  GEN_ENTER(0x797170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if (*(int *)(this + 0x184) != 0) {
    F_00406810(*(int *)(this + 0x184));
    *(undefined4 *)(this + 0x184) = 0;
  }
  iVar1 = *(int *)(this + 0x188);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x54);
      F_0042c880(this_00);
    }
    F_00406b30((int *)(iVar1 + -4));
    *(undefined4 *)(this + 0x188) = 0;
  }
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf41 */
byte F_007971f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7971f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ItemSearchFilter",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf2 */
uint F_00797200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x797200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if ((short)param_1 == 0x17) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    if (param_2 == 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      if (*((char *)GEN_TOP((*(int *)(this + 400) + 0x88))) != '\0') {
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
        (*(undefined4 *)(gen_frame + 0x18)) = 1;
      }
    }
    else {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
    }
  }
  else {
    if ((short)param_1 != 0x23) goto LAB_007972a9;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    uVar1 = *(undefined4 *)(param_4 + 8);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
  }
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  F_00557670(param_3,0);
LAB_007972a9: ;
  iVar3 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007972d0 */
uint F_007972d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7972d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c85ac));
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf25 */
uint F_00797310(unsigned int gen_a0)
{
  GEN_ENTER(0x797310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf36 */
uint F_00797340(unsigned int gen_a0)
{
  GEN_ENTER(0x797340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055e2a0(this,0x1000000,1);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf37 */
uint F_00797370(unsigned int gen_a0)
{
  GEN_ENTER(0x797370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x18c) != 0) {
    F_00406810(*(int *)(this + 0x18c));
    *(undefined4 *)(this + 0x18c) = 0;
  }
  F_005b0510((undefined *)this);
  F_005a92d0(this,0,0x21,0);
  uVar1 = F_005a92d0(this,1,0x24,0);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf41 */
byte F_007973c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7973c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ItemSearchHistory",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf46 */
byte F_007973d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7973d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf47 */
uint F_007973e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7973e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 0x90);
  iVar2 = *(int *)(param_2 + 0x84);
  puVar5 = puVar1;
  if ((puVar1 != (undefined4 *)0x0) && (iVar2 != 0)) {
    uVar7 = *(uint *)(puVar1[8] + 0x968);
    if ((int)uVar7 < 1) {
      if (uVar7 == 0) {
        F_0055a300(*(undefined * PTR32 *)(this + 0x188),1);
        F_0058d980(*(undefined4 *)(this + 0x180),0);
        puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x78))))(*(int * PTR32 *)(this + 0x180))));
      }
    }
    else {
      F_0055a300(*(undefined * PTR32 *)(this + 0x188),0);
      F_0058d980(*(undefined4 *)(this + 0x180),uVar7);
      if (*(int *)(this + 400) < (int)uVar7) {
        *(uint *)(this + 400) = uVar7;
        if (*(int *)(this + 0x18c) != 0) {
          F_00406810(*(int *)(this + 0x18c));
          *(undefined4 *)(this + 0x18c) = 0;
        }
        piVar3 = (int *)F_00404270();
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(int *)(this + 400) * 0x14,0x10);
        *(uint *)(this + 0x18c) = uVar4;
      }
      puVar5 = *(undefined4 * PTR32 *)(this + 0x18c);
      if (0 < (int)uVar7) {
        iVar6 = 0xafc;
        iVar8 = 0x974;
        do {
          puVar5[1] = *((undefined4 *)GEN_TOP((iVar6 + *(int *)(iVar2 + 0x20))));
          puVar5[2] = *((undefined4 *)GEN_TOP((iVar6 + 4 + *(int *)(iVar2 + 0x20))));
          *puVar5 = *((undefined4 *)GEN_TOP((iVar6 + 8 + *(int *)(iVar2 + 0x20))));
          puVar5[3] = *((undefined4 *)GEN_TOP((iVar6 + 0xc + *(int *)(iVar2 + 0x20))));
          *(bool *)(puVar5 + 4) = 0 < *(int *)(iVar8 + puVar1[8]);
          iVar8 = iVar8 + 0x18;
          iVar6 = iVar6 + 0x14;
          puVar5 = puVar5 + 5;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        return (uint)puVar5;
      }
    }
  }
  return (uint)puVar5;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf2 */
unsigned int F_00797520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x797520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_00797530 */
uint F_00797530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x797530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18c) + param_1 * 0x14)));
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x10 + param_1 * 0x14))) == '\0') {
    uVar4 = 0x65;
  }
  else {
    uVar4 = 0x66;
  }
  F_0059d670((undefined *)param_2[4],uVar4);
  pvVar2 = (undefined *)F_00559ba0(*param_2);
  F_00584110(pvVar2,*puVar1);
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  F_00584110(pvVar2,puVar1[1]);
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  F_00584110(pvVar2,puVar1[2]);
  pvVar2 = (undefined *)F_00559ba0(param_2[3]);
  uVar3 = F_00584110(pvVar2,puVar1[3]);
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf41 */
byte F_007975e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7975e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyRights",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf46 */
byte F_007975f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7975f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,uVar1);
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,uVar1);
    F_0056b300(this,0);
    F_00594790(this);
  }
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf25 */
uint F_00797650(unsigned int gen_a0)
{
  GEN_ENTER(0x797650u, gen_a0, 0u, 0u, 0u);
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

/* ref: Client::UI2::AddonFreeCompanyRights::vf47 */
uint F_007976b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7976b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  uVar2 = *(uint *)(param_2 + 0xa0);
  if ((iVar1 != 0) && (uVar2 != 0)) {
    pAVar3 = this + 0x180;
    param_1 = 2;
    do {
      if (*(undefined * PTR32 *)pAVar3 != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)pAVar3,0);
      }
      pAVar3 = pAVar3 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    if (*((char *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xcc))) == '\x01') {
      F_0059dde0(*(undefined * PTR32 *)(this + 0x184),1);
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x15c)));
      F_0059d670(*(undefined * PTR32 *)(this + 0x18c),0x65);
      uVar5 = 0x2b;
      uVar4 = 0x49;
    }
    else {
      F_0059dde0(*(undefined * PTR32 *)(this + 0x180),1);
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x120)));
      if (iVar6 == 0) {
        uVar4 = 0x66;
      }
      else {
        uVar4 = 0x65;
      }
      F_0059d670(*(undefined * PTR32 *)(this + 0x18c),uVar4);
      uVar5 = 0x17;
      uVar4 = 0x34;
    }
    uVar2 = F_00596e00(*(undefined * PTR32 *)(this + 0x188),iVar1,uVar2,uVar4,uVar5,1,1,iVar6,this + 400);
  }
  return uVar2;
}

/* ref: FUN_007977a0 */
uint F_007977a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7977a0u, gen_a0, gen_a1, 0u, 0u);
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
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
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

/* ref: FUN_00797800 */
uint F_00797800(unsigned int gen_a0)
{
  GEN_ENTER(0x797800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
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
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c87bc));
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf37 */
uint F_007978d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7978d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x2a,0);
  F_005a92d0(this,0,0x26,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf41 */
byte F_00797900(unsigned int gen_a0)
{
  GEN_ENTER(0x797900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyApplication",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf46 */
byte F_00797910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x797910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf2 */
unsigned int F_00797920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x797920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  undefined1 * this_00;
  
  this_00 = (gen_frame + 0x1c);
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    iVar1 = param_2 + -1;
    if (param_2 - 2U < 3) {
LAB_00797993: ;
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 2;
      (*(undefined4 *)(gen_frame + 0x14)) = 4;
      (*(int *)(gen_frame + 0x18)) = iVar1;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar1 = 1;
      do {
        this_00 = this_00 + -8;
        F_005a2670(this_00);
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
      return 0;
    }
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 0: ;
      iVar1 = 0;
      goto LAB_00797993;
    default: ;
      goto switchD_0079794b_caseD_1;
    case 4: ;
    case 5: ;
      ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
      return 0;
    case 6: ;
      uVar2 = 0;
      break;
    case 7: ;
      uVar2 = 1;
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(int *)(gen_frame + 0x18)) = uVar2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  }
switchD_0079794b_caseD_1: ;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf25 */
uint F_00797a00(unsigned int gen_a0)
{
  GEN_ENTER(0x797a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00797a30 */
unsigned int F_00797a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x797a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00561550(param_1,2);
    if (pvVar1 != (undefined *)0x0) {
      F_00591c00(pvVar1,param_2,0);
    }
    pvVar1 = (undefined *)F_00561530(param_1,3);
    if (pvVar1 != (undefined *)0x0) {
      F_00584110(pvVar1,param_3);
    }
  }
  return 0;
}

/* ref: FUN_00797a80 */
uint F_00797a80(unsigned int gen_a0)
{
  GEN_ENTER(0x797a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
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
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c88bc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf41 */
byte F_00797b20(unsigned int gen_a0)
{
  GEN_ENTER(0x797b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyProfile",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf44 */
uint F_00797b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x797b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,2);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e2f0(this,0x14);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this,6);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this,5);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055e340(this,7);
  *(uint *)(this + 0x194) = uVar1;
  uVar1 = F_0055e340(this,8);
  *(uint *)(this + 0x198) = uVar1;
  uVar1 = F_0055e340(this,0xc);
  *(uint *)(this + 0x19c) = uVar1;
  uVar1 = F_0055e340(this,0xe);
  *(uint *)(this + 0x1a0) = uVar1;
  uVar1 = F_0055e340(this,0x10);
  *(uint *)(this + 0x1a4) = uVar1;
  uVar1 = F_0055e340(this,0x12);
  *(uint *)(this + 0x1a8) = uVar1;
  uVar1 = F_0055e340(this,0x16);
  *(uint *)(this + 0x1ac) = uVar1;
  uVar1 = F_0055e360(this,3);
  *(uint *)(this + 0x1b0) = uVar1;
  uVar1 = F_0055e360(this,4);
  *(uint *)(this + 0x1b4) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf46 */
byte F_00797c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x797c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  char * pcVar2;
  undefined4 uVar3;
  
  if ((param_2 != (byte *)0x0) && (0 < param_1)) {
    if (((param_2[0x18] & 0xf) == 0) || (iVar1 = *(int *)(param_2 + 0x1c), iVar1 == 0)) {
      F_0059d640(*(undefined * PTR32 *)(this + 0x180),0x65);
      return 1;
    }
    F_0059d640(*(undefined * PTR32 *)(this + 0x180),0x11);
    if (iVar1 == 2) {
      uVar3 = 0x66;
    }
    else if (iVar1 == 3) {
      uVar3 = 0x65;
    }
    else {
      uVar3 = 0x11;
    }
    F_0059d640(*(undefined * PTR32 *)(this + 0x184),uVar3);
    if ((param_2[0x20] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x24);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x18c),uVar3);
    if ((*param_2 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    F_005600b0(((undefined1 *)(gen_frame + 0x4)),uVar3);
    if ((param_2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    F_00560080(((undefined1 *)(gen_frame + 0x4)),uVar3);
    F_005959f0(*(undefined * PTR32 *)(this + 0x1b0),((undefined1 *)(gen_frame + 0x4)));
    if ((param_2[0x10] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x14);
    }
    F_00591c00(*(undefined * PTR32 *)(this + 0x1b4),uVar3,0);
    if ((param_2[0x30] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x34);
    }
    F_00584110(*(undefined * PTR32 *)(this + 400),uVar3);
    if ((param_2[0x38] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x3c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x194),uVar3);
    if ((param_2[0x40] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x44);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x198),uVar3);
    if ((param_2[0x48] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x19c),uVar3);
    if ((param_2[0x28] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_0057eb30(*(undefined * PTR32 *)(this + 0x1a0),uVar3,0,0,0,0);
    if ((param_2[0x50] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x54);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4),uVar3);
    if ((param_2[0x58] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x5c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar3);
    if ((((param_2[0x60] & 0xf) != 0) && (pcVar2 = *(char * PTR32 *)(param_2 + 100), pcVar2 != (char *)0x0)
        ) && (*pcVar2 != '\0')) {
      F_0059d670(*(undefined * PTR32 *)(this + 0x188),0x65);
      F_00584110(*(undefined * PTR32 *)(this + 0x1ac),pcVar2);
      return 1;
    }
    F_0059d670(*(undefined * PTR32 *)(this + 0x188),0x66);
  }
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf25 */
uint F_00797e00(unsigned int gen_a0)
{
  GEN_ENTER(0x797e00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00797e50 */
uint F_00797e50(unsigned int gen_a0)
{
  GEN_ENTER(0x797e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c89bc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined1 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0xffffffff;
  *(undefined1 *)((int)this + 0x1a8) = 0;
  F_0042b630((int)this + 0x1ac);
  F_0042b630((int)this + 0x200);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_00797ef0 */
uint F_00797ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x797ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c89bc));
  F_0042c880((undefined *)((int)this + 0x200));
  F_0042c880((undefined *)((int)this + 0x1ac));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf41 */
byte F_00797f30(unsigned int gen_a0)
{
  GEN_ENTER(0x797f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MemberRankAssign",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf25 */
uint F_00797f40(unsigned int gen_a0)
{
  GEN_ENTER(0x797f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00797fb0 */
uint F_00797fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x797fb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (0xe < param_1) {
    return 0;
  }
  return param_1 + 0x65;
}

/* ref: FUN_00797fd0 */
uint F_00797fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x797fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (param_1 < 0x10) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(int *)(gen_frame + 0x14)) = (int)(short)uVar3 + (uVar2 & 0xffff);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(int *)(gen_frame + 0x1c)) = (int)(short)uVar2;
    bVar1 = *(byte *)((int)this + param_1 + 400);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_007980a0 */
uint F_007980a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7980a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar2 = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00798100 */
uint F_00798100(unsigned int gen_a0)
{
  GEN_ENTER(0x798100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00798170 */
uint F_00798170(unsigned int gen_a0)
{
  GEN_ENTER(0x798170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
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
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  F_00c48350((undefined *)((int)this + 0x18),0,0x30);
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf41 */
byte F_00798240(unsigned int gen_a0)
{
  GEN_ENTER(0x798240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MemberRankEdit",0,6);
  return bVar1;
}

/* ref: FUN_00798250 */
byte F_00798250(unsigned int gen_a0)
{
  GEN_ENTER(0x798250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  uVar6 = 0;
  uVar4 = 1;
  piVar1 = (int *)((int)this + 0x19c);
  iVar5 = 2;
  do {
    if ((piVar1[-1] != 0) && (*(char *)(piVar1[-1] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((*piVar1 != 0) && (*(char *)(*piVar1 + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[1] != 0) && (*(char *)(piVar1[1] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[2] != 0) && (*(char *)(piVar1[2] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[3] != 0) && (*(char *)(piVar1[3] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[4] != 0) && (*(char *)(piVar1[4] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    piVar1 = piVar1 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (uVar6 != *(uint *)((int)this + 0x224)) {
    return 1;
  }
  uVar4 = 0;
  iVar5 = 0;
  puVar7 = (undefined4 *)((int)this + 0x1d0);
  do {
    uVar6 = F_00562c60(*puVar7);
    bVar3 = (byte)iVar5;
    iVar5 = iVar5 + 2;
    puVar7 = puVar7 + 3;
    uVar4 = uVar4 | uVar6 << (bVar3 & 0x1f);
  } while (iVar5 < 10);
  uVar6 = F_00562c60(*(undefined4 *)((int)this + 0x20c));
  uVar2 = F_00562c60(*(undefined4 *)((int)this + 0x218));
  return (uVar4 | uVar6 << 0xc | uVar2 << 0xe) != *(uint *)((int)this + 0x228);
}

/* ref: FUN_00798360 */
uint F_00798360(unsigned int gen_a0)
{
  GEN_ENTER(0x798360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  F_0059d6a0(this,0x11,1,0);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 0x18c),1);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 400),0);
  uVar1 = F_0055dcb0();
  uVar1 = F_00558e10(*(undefined4 *)(uVar1 + 0x18));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x21c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x21c));
  if (uVar1 != uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x220) + 0x3c))))(*(int * PTR32 *)((int)this + 0x220));
    if (uVar1 != uVar2) {
      uVar4 = 0;
      uVar3 = 1;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x3c))))(*(int * PTR32 *)((int)this + 0x198));
      uVar2 = F_0059b340(this,uVar1,uVar3,uVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_007983e0 */
uint F_007983e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7983e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  F_0059d6a0(this,0x65,1,0);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 0x18c),0);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 400),1);
  uVar1 = F_0055dcb0();
  uVar1 = F_00558e10(*(undefined4 *)(uVar1 + 0x18));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x21c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x21c));
  if (uVar1 != uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x220) + 0x3c))))(*(int * PTR32 *)((int)this + 0x220));
    if (uVar1 != uVar2) {
      uVar4 = 0;
      uVar3 = 1;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d0) + 0x3c))))(*(int * PTR32 *)((int)this + 0x1d0));
      uVar2 = F_0059b340(this,uVar1,uVar3,uVar4);
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf52 */
byte F_00798460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x798460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 2) {
    uVar2 = F_0055dcb0();
    uVar2 = F_00558e10(*(undefined4 *)(uVar2 + 0x18));
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x21c) + 0x3c))))(*(int * PTR32 *)(this + 0x21c));
    if (uVar2 != uVar3) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x220) + 0x3c))))(*(int * PTR32 *)(this + 0x220));
      if (uVar2 != uVar3) {
        F_0059b390(this,*(undefined4 *)(this + 0x21c),1,0);
        return 1;
      }
    }
    return 0;
  }
  if (iVar1 != 0xf) {
    if (iVar1 == 0x10) {
      if (*((char *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))) == '\0') {
        F_00798360(this);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
        F_005a2670(((undefined1 *)(gen_frame + 0x14)));
      }
      return 1;
    }
    return 0;
  }
  if (*((char *)GEN_TOP((*(int *)(this + 400) + 0x88))) == '\0') {
    F_007983e0(this);
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  }
  return 1;
}

/* ref: FUN_00798570 */
unsigned int F_00798570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x798570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  byte bVar2;
  
  if (param_1 == 6) {
    iVar1 = **(int * PTR32 *)((int)this + 0x21c);
    bVar2 = F_00798250(this);
    ((code *)*(gen_code32 *)(iVar1 + 0x28))(*(undefined4 *)((int)this + 0x21c),(uint)(bVar2 != 0));
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: FUN_007985b0 */
uint F_007985b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7985b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  uint * this_00;
  int * piVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  puVar6 = ((undefined4 *)(gen_frame + 0x10));
  iVar3 = 0x14;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x10)),3);
  ((undefined4 *)(gen_frame + 0x10))[1] = 0;
  puVar4 = ((undefined1 *)(gen_frame + 0x20));
  piVar5 = (int *)((int)this + 0x198);
  (*(int *)(gen_frame + 0xc)) = 0xc;
  do {
    if (*piVar5 == 0) {
      F_005a2710(puVar4,3);
      *(undefined4 *)(puVar4 + 4) = 0xffffffff;
    }
    else {
      cVar1 = *(char *)(*piVar5 + 0x88);
      F_005a2710(puVar4,3);
      *(uint *)(puVar4 + 4) = (uint)(cVar1 != '\0');
    }
    piVar5 = piVar5 + 1;
    puVar4 = puVar4 + 8;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  puVar4 = ((undefined1 *)(gen_frame + 0x80));
  puVar6 = (undefined4 *)((int)this + 0x1d0);
  (*(int *)(gen_frame + 0xc)) = 5;
  do {
    uVar2 = F_00562c60(*puVar6);
    F_005a2710(puVar4,3);
    *(uint *)(puVar4 + 4) = uVar2;
    puVar4 = puVar4 + 8;
    puVar6 = puVar6 + 3;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  uVar2 = F_00562c60(*(undefined4 *)((int)this + 0x20c));
  F_005a2710(((undefined1 *)(gen_frame + 0xa8)),3);
  (*(uint *)(gen_frame + 0xac)) = uVar2;
  uVar2 = F_00562c60(*(undefined4 *)((int)this + 0x218));
  F_005a2710(((undefined1 *)(gen_frame + 0xb0)),3);
  (*(uint *)(gen_frame + 0xb4)) = uVar2;
  F_005a9110(this,0x15,((undefined4 *)(gen_frame + 0x10)));
  this_00 = &(*(uint *)(gen_frame + 0xb8));
  iVar3 = 0x14;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf25 */
uint F_00798710(unsigned int gen_a0)
{
  GEN_ENTER(0x798710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x14;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),3);
  ((undefined4 *)(gen_frame + 0x0))[1] = 0xffffffff;
  bVar1 = F_00798250(this);
  F_005a2710(((undefined1 *)(gen_frame + 0x8)),4);
  (*(uint *)(gen_frame + 0xc)) = (uint)(bVar1 != 0);
  F_005a9110(this,0x15,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0xa8));
  iVar4 = 0x14;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar3;
}

/* ref: FUN_007987b0 */
uint F_007987b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7987b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0042a990(param_1 * 0x54 + 0x22c + (int)this);
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankOrderEdit::vf41 */
byte F_00798810(unsigned int gen_a0)
{
  GEN_ENTER(0x798810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MemberRankOrderEdit",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankOrderEdit::vf25 */
uint F_00798820(unsigned int gen_a0)
{
  GEN_ENTER(0x798820u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00798860 */
uint F_00798860(unsigned int gen_a0)
{
  GEN_ENTER(0x798860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 * this_00;
  uint * this_01;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  puVar4 = ((undefined4 *)(gen_frame + 0x8));
  iVar3 = 0x11;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),3);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x7c))))(*(int * PTR32 *)((int)this + 0x180));
  if (uVar2 != 0) {
    this_00 = ((undefined1 *)(gen_frame + 0x18));
    puVar4 = (undefined4 *)((int)this + 0x2a4);
    (*(uint *)(gen_frame + 0x4)) = uVar2;
    do {
      uVar1 = *puVar4;
      F_005a2710(this_00,4);
      *(undefined4 *)(this_00 + 4) = uVar1;
      puVar4 = puVar4 + 0x19;
      this_00 = this_00 + 8;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
    } while ((*(uint *)(gen_frame + 0x4)) != 0);
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  F_005a9110(this,0x12,((undefined4 *)(gen_frame + 0x8)));
  this_01 = &(*(uint *)(gen_frame + 0x98));
  iVar3 = 0x11;
  do {
    this_01 = this_01 + -2;
    uVar2 = F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar2;
}

/* ref: FUN_00798960 */
uint F_00798960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x798960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  int in_ecx;
  
  if (param_1 == 0) {
    F_0059c700(*(undefined * PTR32 *)((int)this + 0x180),1);
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x121))) = 0x100;
    uVar2 = F_0042a990((int)this + 0x240);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x194),uVar2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184),0);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x188) + 0x28))))(*(int * PTR32 *)((int)this + 0x188),0);
    return uVar2;
  }
  *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x121))) = 0x101;
  if (((char)param_2 == '\0') ||
     (in_ecx = (int)this + 0x198, *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0xd0))) != -1)) {
    in_ecx = (int)this + 0x1ec;
  }
  uVar2 = F_0042a990(in_ecx);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x194),uVar2);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))
            (*(int * PTR32 *)((int)this + 0x184),(uint)(param_1 != 1 && -1 < param_1 + -1));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x7c))))(*(int * PTR32 *)((int)this + 0x180));
  piVar1 = *(int * PTR32 *)((int)this + 0x188);
  if (param_1 < (int)(uVar2 - 1)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
  return uVar2;
}

/* ref: FUN_00798a50 */
uint F_00798a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x798a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  iVar1 = param_1 * 100;
  F_0059d670((undefined *)*param_2,*(int *)((int)this + iVar1 + 0x2a8) + 0x65);
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_0042a990((int)this + iVar1 + 0x2b4);
    F_00584110(pvVar2,uVar3);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[3]);
  if (pvVar2 != (undefined *)0x0) {
    F_0057eb30(pvVar2,*(undefined4 *)((int)this + iVar1 + 0x2b0),0,0,0,0);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  uVar3 = 0;
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_0057eb30(pvVar2,*(undefined4 *)((int)this + iVar1 + 0x2ac),0,0,0,0);
  }
  return uVar3;
}

/* ref: FUN_00798ae0 */
uint F_00798ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x798ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8bbc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf41 */
byte F_00798b50(unsigned int gen_a0)
{
  GEN_ENTER(0x798b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyInputString",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf46 */
byte F_00798b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x798b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf2 */
unsigned int F_00798b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x798b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  if ((short)param_1 == 0x17) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(int *)(gen_frame + 0x10)) = (uint)(param_2 == 0) * 2 + -1;
    uVar1 = F_0042a990(*(int *)(this + 0x18c) + 0x9c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),6);
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    F_00557670(param_3,0);
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00798c10 */
uint F_00798c10(unsigned int gen_a0)
{
  GEN_ENTER(0x798c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x1d4)));
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar2 = F_0042a970(*(int *)((int)this + 0x18c) + 0x9c);
  uVar2 = F_00560910(iVar1 - uVar2);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar2,uVar4);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x188),uVar2);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf25 */
uint F_00798c90(unsigned int gen_a0)
{
  GEN_ENTER(0x798c90u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00798cd0 */
uint F_00798cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x798cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8cbc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined2 *)((int)this + 0x2c4) = 0;
  *(undefined1 *)((int)this + 0x2c6) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined1 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  F_00c48350((undefined *)((int)this + 0x1a8),0,200);
  F_00c48350((undefined *)((int)this + 0x270),0,0x48);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf41 */
byte F_00798dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x798dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyChest",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf25 */
uint F_00798de0(unsigned int gen_a0)
{
  GEN_ENTER(0x798de0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00798e40 */
unsigned int F_00798e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x798e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  char cVar1;
  undefined * this_01;
  uint uVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(bool *)(gen_frame + 0x1b)) = *(int *)((int)this + 0x2cc) != 2;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0xcc;
  do {
    this_00 = *(undefined * PTR32 *)((int)this + (*(int *)(gen_frame + 0x14)) + 0x1a4);
    iVar4 = (*(int *)(gen_frame + 0x14));
    if (this_00 != (undefined *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0xc))))((int)this_00 + 0x84);
      uVar5 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3ee + (*(int *)(gen_frame + 0x10)))));
      if ((uVar5 == 0) || ((*(bool *)(gen_frame + 0x1b)) != false)) {
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\0';
      }
      *(byte *)((int)this_00 + 0xaa) =
           *(byte *)((int)this_00 + 0xaa) ^ (cVar1 * '\x02' ^ *(byte *)((int)this_00 + 0xaa)) & 2;
      F_0056e530(this_00,2);
      this_01 = (undefined *)F_00561530(this_00,3);
      uVar2 = F_00560910(uVar5);
      F_00584110(this_01,uVar2);
      F_00560760(&(*(char * PTR32 *)(gen_frame + 0x0)));
      pcVar3 = *((char * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + *(int *)(param_2 + 0x20))));
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar3;
      (*(undefined1 *)(gen_frame + 0xa)) = 2;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x43;
      (*(undefined1 *)(gen_frame + 0xb)) = *(undefined1 *)((int)this_00 + 0x9c);
      F_005916c0(this_00,(uint)(uVar5 != 0) * 4 + 2,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x13a),
                   &(*(char * PTR32 *)(gen_frame + 0x0)));
      iVar4 = (*(int *)(gen_frame + 0x14));
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    }
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0xc;
    (*(int *)(gen_frame + 0x14)) = iVar4 + 4;
  } while (iVar4 + 4 < 0x114);
  return 0;
}

/* ref: FUN_00798f70 */
uint F_00798f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x798f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00561490(param_1,2);
  if (param_2 == 0) {
    this = (undefined *)F_0059d670(this,0x66);
  }
  else {
    if (param_2 == 1) {
      uVar1 = F_0059d670(this,0x67);
      return uVar1;
    }
    if (param_2 == 2) {
      uVar1 = F_0059d670(this,0x65);
      return uVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00798fb0 */
uint F_00798fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x798fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x2c8) >> ((char)param_2 * '\x02' & 0x1fU) & 3;
}

/* ref: FUN_00798fd0 */
uint F_00798fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x798fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * this_00;
  undefined1 * this_01;
  int iVar2;
  
  this_01 = (gen_frame + 0x1c);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 0x1a4),0);
  if (*(char *)((int)this + 0x2c4) == '\0') {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x2c5) * 4 + 0x18c)));
  }
  else {
    if (*(char *)((int)this + 0x2c4) != '\x01') goto LAB_00799013;
    this_00 = *(undefined * PTR32 *)((int)this + 0x1a0);
  }
  F_0059dde0(this_00,1);
LAB_00799013: ;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_01 = this_01 + -8;
    uVar1 = F_005a2670(this_01);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00799060 */
byte F_00799060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  bVar3 = 0;
  if ((*(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU) & 3) != 0) {
    piVar1 = (int *)*param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    uVar2 = *puVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1);
    uVar2 = *(undefined4 *)(uVar5 + 4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    bVar3 = *(byte *)((int)this + 0x2c5);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(int *)(gen_frame + 0x1c)) = bVar3 + 0x3e;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(undefined4 *)(gen_frame + 0x24)) = param_1;
    uVar5 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    bVar3 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return bVar3;
}

/* ref: FUN_00799160 */
byte F_00799160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  bVar3 = 0;
  if (*(int *)((int)this + 0x2cc) != 0) {
    piVar1 = (int *)*param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    uVar2 = *puVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1);
    uVar2 = *(undefined4 *)(uVar5 + 4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0x43;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(undefined4 *)(gen_frame + 0x24)) = param_1;
    uVar5 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    bVar3 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return bVar3;
}

/* ref: FUN_00799240 */
uint F_00799240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x799240u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_007992b0 */
uint F_007992b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7992b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00799240(this,param_1);
  return uVar1;
}

/* ref: FUN_007992c0 */
uint F_007992c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7992c0u, gen_a0, gen_a1, 0u, 0u);
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
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
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

/* ref: FUN_00799330 */
uint F_00799330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x799330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU) &
          0xffffff03;
  if ((char)uVar1 == '\x02') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
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

/* ref: FUN_007993a0 */
unsigned int F_007993a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7993a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x1c);
  if (*(int *)((int)this + 0x2cc) == 2) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar1 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00799400 */
uint F_00799400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x799400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int local_8;
  
  uVar1 = 1;
  puVar2 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c)));
  local_8 = 5;
  do {
    ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x28))((int *)*puVar2,(uint)(((*(uint *)&gen_args[1]) & uVar1) != 0));
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 0x28))))
            (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),(uint)((byte)((*(uint *)&gen_args[1]) >> 5) & 1));
  if ((((*(uint *)&gen_args[1]) & 0x40) == 0) ||
     ((*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1), *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2d0))) != 2)) {
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))),(*(uint *)&gen_args[1]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c0))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c0))),(*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_007994a0 */
uint F_007994a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7994a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return (uint)*(byte *)(in_ecx + 0x2c6);
  }
  return (uint)(byte)param_3;
}

/* ref: FUN_007994c0 */
uint F_007994c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7994c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  
  F_0056b780(this,0);
  uVar4 = 0;
  if (*(char *)((int)this + 0x2c4) == '\x01') {
    uVar2 = F_0055a030(*(undefined4 *)((int)this + 0x180));
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,0);
    uVar4 = (uint)(ushort)(uVar2 - (short)uVar4);
  }
  if (*(int *)((int)this + 0x2d4) == 1) {
    uVar3 = *(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU) &
            0xffffff03;
    if ((char)uVar3 == '\x02') {
      uVar3 = F_0055dcb0();
      if ((*(char *)(uVar3 + 0xbc) == '\0') && ((char)param_1 == '\0')) {
        bVar1 = F_0056b630(this,0x18adc,7,0,9,0,uVar4);
        return CONCAT31(extraout_var_00,bVar1);
      }
      bVar1 = F_0056b630(this,0x18add,7,0,9,0,uVar4);
      uVar3 = CONCAT31(extraout_var_01,bVar1);
    }
  }
  else {
    uVar3 = *(int *)((int)this + 0x2d4) - 2;
    if ((uVar3 == 0) && (*(int *)((int)this + 0x2cc) == 2)) {
      bVar1 = F_0056b630(this,0x18adf,7,0,9,0,uVar4);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf41 */
byte F_00799590(unsigned int gen_a0)
{
  GEN_ENTER(0x799590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyExchange",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf46 */
byte F_007995a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7995a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf52 */
byte F_007995b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7995b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*param_1 == 2) {
    if ((char)param_1[1] == '\0') {
      piVar1 = *(int * PTR32 *)(this + 0x1dc);
      uVar3 = F_0055dcb0();
      uVar3 = F_0055b9e0(uVar3);
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
      if (uVar3 != uVar4) {
        if (*(int *)(this + 0x1dc) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
        }
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b9e0(uVar3);
        bVar2 = F_005612e0(uVar5,uVar3);
        if (bVar2 == 0) {
          F_0059b390(this,*(undefined4 *)(this + 0x1dc),1,0);
          return 1;
        }
      }
    }
  }
  else if ((*param_1 - 7U < 2) && ((char)param_1[1] == '\0')) {
    piVar1 = *(int * PTR32 *)(this + 0x1dc);
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9e0(uVar3);
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    if (uVar3 != uVar4) {
      if (*(int *)(this + 0x1dc) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
      }
      uVar3 = F_0055dcb0();
      uVar3 = F_0055b9e0(uVar3);
      bVar2 = F_005612e0(uVar5,uVar3);
      if (bVar2 == 0) {
        return 0;
      }
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x7c))))(*(int * PTR32 *)(this + 0x188));
    if (uVar3 == 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x7c))))(*(int * PTR32 *)(this + 0x18c));
      if (uVar3 != 0) {
        F_0059b390(this,*(undefined4 *)(this + 0x18c),1,0);
      }
      return 1;
    }
    F_0059b390(this,*(undefined4 *)(this + 0x188),1,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_00799710 */
uint F_00799710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x799710u, gen_a0, gen_a1, 0u, 0u);
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
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
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

/* ref: FUN_00799780 */
uint F_00799780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b990(uVar6);
  iVar3 = *(int *)(uVar6 + 0xe4);
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b990(uVar6);
  uVar6 = *(uint *)(uVar6 + 0xc0);
  if ((iVar3 != 0) && (uVar6 != 0)) {
    iVar4 = *(int *)(iVar3 + 0x20);
    iVar3 = param_1 * 4 + 2;
    sVar2 = *(short *)(iVar4 + iVar3 * 4);
    iVar7 = 0;
    if (*((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x10))) < *(uint *)(iVar4 + 8 + iVar3 * 4)) {
      iVar7 = *(int *)((int)this + 0x1e0);
    }
    else if (*((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x24))) < *(uint *)(iVar4 + 0xc + iVar3 * 4)) {
      iVar7 = *(int *)((int)this + 0x1e4);
    }
    F_00560760(&(*(int *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x4)) = (int)sVar2;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x18;
    if (iVar7 != 0) {
      (*(int *)(gen_frame + 0x0)) = iVar7;
    }
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar5 = *(undefined4 *)(param_2 + 0x1e4);
    uVar6 = F_0055dcb0();
    uVar6 = F_00588780((undefined *)(uVar6 + 0xe0),
                         (int)CONCAT31((int3)((uint)&(*(int *)(gen_frame + 0x0)) >> 8),iVar7 != 0) * 2 + 8,(uint)bVar1,
                         uVar5,&(*(int *)(gen_frame + 0x0)),0,0);
  }
  return uVar6;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf71 */
uint F_00799880(unsigned int gen_a0)
{
  GEN_ENTER(0x799880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_00558e10(*(undefined4 *)(uVar2 + 0x18));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188));
  if (uVar2 != uVar3) {
    uVar4 = 0;
    if (*(int *)(this + 0x188) != 0) {
      uVar4 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    bVar1 = F_005612e0(uVar4,uVar2);
    if ((bVar1 == 0) &&
       (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c)),
       uVar2 != uVar3)) {
      uVar4 = 0;
      if (*(int *)(this + 0x18c) != 0) {
        uVar4 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      bVar1 = F_005612e0(uVar4,uVar2);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var,bVar1);
      }
    }
  }
  uVar2 = F_0059b390(this,*(undefined4 *)(this + 0x1dc),1,0);
  return uVar2;
}

/* ref: FUN_00799900 */
uint F_00799900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x799900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3);
  iVar2 = *(int *)(uVar3 + 0xe4);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3);
  uVar3 = *(uint *)(uVar3 + 0xd4);
  uVar5 = uVar3;
  if ((iVar2 != 0) && (uVar3 != 0)) {
    iVar1 = param_1 * 4 + 2;
    F_005951c0(param_3,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4 + iVar1 * 4))),0,*param_2);
    pvVar4 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar4 != (undefined *)0x0) {
      F_00584110(pvVar4,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + param_1 * 8))));
    }
    pvVar4 = (undefined *)F_00559ba0(param_2[2]);
    if (pvVar4 != (undefined *)0x0) {
      F_0057eb30(pvVar4,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8 + iVar1 * 4))),0,0,0,0);
    }
    pvVar4 = (undefined *)F_00559ba0(param_2[3]);
    uVar5 = 0;
    if (pvVar4 != (undefined *)0x0) {
      uVar5 = F_00584110(pvVar4,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + param_1 * 8))));
    }
  }
  return uVar5;
}

/* ref: FUN_007999e0 */
uint F_007999e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7999e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8dbc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyProfileEdit::vf25 */
uint F_00799a40(unsigned int gen_a0)
{
  GEN_ENTER(0x799a40u, gen_a0, 0u, 0u, 0u);
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

/* ref: Client::UI2::AddonFreeCompanyProfileEdit::vf41 */
byte F_00799ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x799ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyProfileEdit",0,6);
  return bVar1;
}

/* ref: FUN_00799ac0 */
uint F_00799ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x799ac0u, gen_a0, 0u, 0u, 0u);
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
  uVar1 = F_0042a990(*(int *)((int)this + 0x188) + 0x9c);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),6);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00799b40 */
uint F_00799b40(unsigned int gen_a0)
{
  GEN_ENTER(0x799b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x188) + 0x1d4)));
  uVar2 = F_0042a970(*(int *)((int)this + 0x188) + 0x9c);
  uVar2 = F_00560910(iVar1 - uVar2);
  uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),uVar2);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf36 */
uint F_00799b80(unsigned int gen_a0)
{
  GEN_ENTER(0x799b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_0055dc60((undefined *)this);
  pvVar1 = F_00c48350(this + 0x180,0,0x78);
  return (uint)pvVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf37 */
uint F_00799ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x799ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x1b4) != 0) {
    uVar1 = F_0055dcb0();
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b4) + 0x38))))(*(int * PTR32 *)(this + 0x1b4));
    F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
  }
  if (*(int *)(this + 0x1bc) != 0) {
    uVar1 = F_0055dcb0();
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1bc) + 0x38))))(*(int * PTR32 *)(this + 0x1bc));
    F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
  }
  F_005a92d0(this,1,0x3c,0);
  F_00c48350(this + 0x180,0,0x78);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf41 */
byte F_00799c30(unsigned int gen_a0)
{
  GEN_ENTER(0x799c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyCrestEditor",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf38 */
uint F_00799c40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x799c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_005a2370(param_1,param_2);
  if ((*(byte *)(param_1 + 0xf9) & 1) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x180) != 0) {
      uVar2 = F_0055c500(*(int *)(param_1 + 0x180) + 4);
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = F_00560020((undefined *)(uVar2 + 0x10),param_1 + 0x200);
        if ((char)uVar1 != '\0') {
          uVar1 = F_005944b0(((undefined *)GEN_TOP((*(int *)(param_1 + 0x180) + 4))),param_1 + 0x200);
        }
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00799ca0 */
uint F_00799ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x799ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)((int)this + 600);
  if (*(int *)((int)this + uVar2 * 4 + 400) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + uVar2 * 4 + 400);
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    uVar2 = F_0059b340(this,uVar2,uVar3,uVar4);
  }
  return uVar2;
}

/* ref: FUN_00799cd0 */
uint F_00799cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
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

/* ref: FUN_00799d60 */
uint F_00799d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_005600a0(param_2);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = F_005600d0(param_2);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
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

/* ref: FUN_00799e50 */
uint F_00799e50(unsigned int gen_a0)
{
  GEN_ENTER(0x799e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x1c8) != 0) {
    uVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0xcc))) + *(int *)((int)this + 0x25c) * 0x18;
  }
  return uVar1;
}

/* ref: FUN_00799e70 */
uint F_00799e70(unsigned int gen_a0)
{
  GEN_ENTER(0x799e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 / 0x18;
}

/* ref: FUN_00799e90 */
uint F_00799e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_00560050(((undefined1 *)(gen_frame + 0x4)),param_1);
  F_00560080(param_1,param_2);
  F_005600b0(param_1,param_3);
  bVar1 = F_0056bb70(((undefined1 *)(gen_frame + 0x4)));
  F_0056bb40(param_1,(uint)bVar1);
  bVar1 = F_0056bbb0(((undefined1 *)(gen_frame + 0x4)));
  F_0056bb80(param_1,(uint)bVar1);
  bVar1 = F_0056bb30(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_0056bb00(param_1,(uint)bVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyCrestColor::vf36 */
uint F_00799f00(unsigned int gen_a0)
{
  GEN_ENTER(0x799f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyCrestColor::vf37 */
uint F_00799f30(unsigned int gen_a0)
{
  GEN_ENTER(0x799f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x3c,0);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestColor::vf41 */
byte F_00799f60(unsigned int gen_a0)
{
  GEN_ENTER(0x799f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyCrestColor",0,6);
  return bVar1;
}

/* ref: FUN_00799f70 */
uint F_00799f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_005600a0(param_2);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = F_005600d0(param_2);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
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

/* ref: FUN_0079a010 */
uint F_0079a010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79a010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_1 < 0) {
    uVar2 = param_1 + 0x20;
  }
  else {
    uVar2 = param_1;
    if (0x1f < (int)param_1) {
      uVar2 = param_1 - 0x20;
    }
  }
  uVar3 = (int)(((int)uVar2 >> 0x1f & 0xfU) + uVar2) >> 4;
  if ((uVar3 < 2) &&
     (*(uint *)((int)this + 0x1b8) = uVar2, *(int *)((int)this + uVar3 * 4 + 0x188) != 0)) {
    uVar2 = uVar2 & 0x8000000f;
    piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4 + 0x188);
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1,uVar2,0);
    piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4 + 0x188);
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    uVar2 = F_0059b340(this,uVar2,uVar4,uVar5);
  }
  return uVar2;
}

/* ref: FUN_0079a090 */
byte F_0079a090(unsigned int gen_a0)
{
  GEN_ENTER(0x79a090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  uVar3 = 0;
  piVar4 = (int *)(in_ecx + 0x188);
  do {
    if (*piVar4 != 0) {
      bVar1 = F_005615c0(*piVar4,uVar2);
      if (bVar1 != 0) {
        return 1;
      }
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 2);
  return 0;
}

/* ref: FUN_0079a0e0 */
uint F_0079a0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_00560050(((undefined1 *)(gen_frame + 0x4)),param_1);
  F_00560080(param_1,param_2);
  F_005600b0(param_1,param_3);
  bVar1 = F_0056bc70(((undefined1 *)(gen_frame + 0x4)));
  F_0056bc40(param_1,(uint)bVar1);
  bVar1 = F_0056bcb0(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_0056bc80(param_1,(uint)bVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyCrestSymbolColor::vf36 */
uint F_0079a140(unsigned int gen_a0)
{
  GEN_ENTER(0x79a140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyCrestSymbolColor::vf37 */
uint F_0079a160(unsigned int gen_a0)
{
  GEN_ENTER(0x79a160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x3c,0);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestSymbolColor::vf41 */
byte F_0079a190(unsigned int gen_a0)
{
  GEN_ENTER(0x79a190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyCrestSymbolColor",0,6);
  return bVar1;
}

/* ref: FUN_0079a1a0 */
uint F_0079a1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_005600a0(param_2);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = F_005600d0(param_2);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
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

/* ref: FUN_0079a240 */
uint F_0079a240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_00560050(((undefined1 *)(gen_frame + 0x4)),param_1);
  F_00560080(param_1,param_2);
  F_005600b0(param_1,param_3);
  bVar1 = F_0056bbf0(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_0056bbc0(param_1,(uint)bVar1);
  return uVar2;
}

/* ref: FUN_0079a290 */
uint F_0079a290(unsigned int gen_a0)
{
  GEN_ENTER(0x79a290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8ebc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1ac);
  iVar2 = 99;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined1 *)((int)this + 0x97c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf41 */
byte F_0079a340(unsigned int gen_a0)
{
  GEN_ENTER(0x79a340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyCrestDecal",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf47 */
uint F_0079a350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0x80) != 0) {
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x180),**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x80) + 0x20)))
                        );
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf25 */
uint F_0079a380(unsigned int gen_a0)
{
  GEN_ENTER(0x79a380u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079a3f0 */
uint F_0079a3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x79a3f0u, gen_a0, 0u, 0u, 0u);
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
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
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

/* ref: FUN_0079a460 */
uint F_0079a460(unsigned int gen_a0)
{
  GEN_ENTER(0x79a460u, gen_a0, 0u, 0u, 0u);
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
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
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

/* ref: FUN_0079a4d0 */
uint F_0079a4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x79a4d0u, gen_a0, 0u, 0u, 0u);
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
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
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

/* ref: FUN_0079a540 */
uint F_0079a540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79a540u, gen_a0, gen_a1, 0u, 0u);
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
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

/* ref: FUN_0079a5c0 */
uint F_0079a5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79a5c0u, gen_a0, gen_a1, 0u, 0u);
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  iVar2 = 2;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_0079a630 */
unsigned int F_0079a630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 < 100) {
    F_00560760(((undefined1 *)(gen_frame + 0x0)));
    bVar1 = *(byte *)((int)this + 0x13a);
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + (param_1 * 5 + 0x6e) * 4)));
    uVar2 = *(undefined4 *)(param_2 + 0x1e4);
    (*(undefined1 *)(gen_frame + 0xa)) = 2;
    (*(undefined1 *)(gen_frame + 0xb)) = *(undefined1 *)((int)this + param_1 * 0x14 + 0x1bc);
    uVar3 = F_0055dcb0();
    F_00588780((undefined *)(uVar3 + 0xe0),4,(uint)bVar1,uVar2,((undefined1 *)(gen_frame + 0x0)),0,0);
  }
  return 0;
}

/* ref: FUN_0079a6c0 */
uint F_0079a6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)((int)this + 0x97c) = (undefined1)param_1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400),0);
  F_0059ead0(*(undefined * PTR32 *)((int)this + 0x198),0,0,1);
  if (*(char *)((int)this + 0x97c) == '\x01') {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x184),0);
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x188),1);
    uVar2 = 0x66;
  }
  else {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x184),1);
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x188),0);
    uVar2 = 0x65;
  }
  F_0059d670(*(undefined * PTR32 *)((int)this + 0x194),uVar2);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = F_00589280(*(undefined * PTR32 *)((int)this + 400),param_2);
  }
  return uVar1;
}

/* ref: FUN_0079a750 */
unsigned int F_0079a750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79a750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  if (param_1 < 3) {
    this_00 = (undefined *)F_00559ba0(*param_2);
    if (this_00 != (undefined *)0x0) {
      F_00584110(this_00,*(undefined4 *)((int)this + param_1 * 4 + 0x1a0));
    }
  }
  return 0;
}

/* ref: FUN_0079a790 */
uint F_0079a790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79a790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 100) {
    F_005951c0(param_3,*(undefined4 *)((int)this + param_1 * 0x14 + 0x1ac),0,*param_2);
    pvVar1 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar1 != (undefined *)0x0) {
      F_00584110(pvVar1,*(undefined4 *)((int)this + param_1 * 0x14 + 0x1b0));
    }
    pvVar1 = (undefined *)F_00559ba0(param_2[2]);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      uVar2 = F_00584110(pvVar1,*(undefined4 *)((int)this + param_1 * 0x14 + 0x1b4));
    }
  }
  return uVar2;
}

/* ref: FUN_0079a800 */
uint F_0079a800(unsigned int gen_a0)
{
  GEN_ENTER(0x79a800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8fbc));
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
  *(undefined1 *)((int)this + 0x1c0) = 0;
  F_00580ea0((undefined *)((int)this + 0x1c4));
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_0079a8b0 */
uint F_0079a8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x79a8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8fbc));
  F_00590cc0((undefined *)((int)this + 0x1c4));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf36 */
byte F_0079a8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x79a8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this);
  bVar1 = F_00560e80(this + 0x1c4,this);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf41 */
byte F_0079a8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x79a8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompany",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf25 */
uint F_0079a900(unsigned int gen_a0)
{
  GEN_ENTER(0x79a900u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079a940 */
byte F_0079a940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79a940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    F_0059b390(this,*((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x1c0) * 4 + 0x180))),1,
                 0);
    return 1;
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 6: ;
    if (*(int *)((int)this + 0x1fc) == 0) {
      return 1;
    }
    uVar1 = F_0055dcb0();
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1fc) + 0x14)));
    break;
  case 5: ;
    uVar1 = F_0055dcb0();
    uVar1 = F_0055b990(uVar1);
    if ((*(int *)(uVar1 + 0xe8) != 0) &&
       ((piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0xe8) + 0x20))), *piVar2 == 0 ||
        ((piVar2[1] == 0 && (piVar2[0xb] == 0)))))) {
      return 0;
    }
    if (*(int *)((int)this + 0x1fc) == 0) {
      return 1;
    }
    uVar1 = F_0055dcb0();
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1fc) + 0x14)));
    break;
  default: ;
    goto switchD_0079a956_default;
  }
  piVar2 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14),uVar3);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x8c))(piVar2);
  }
switchD_0079a956_default: ;
  return 1;
}

/* ref: FUN_0079aa30 */
uint F_0079aa30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79aa30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  if (5 < (byte)(*(undefined4 *)&gen_args[1])) {
    return CONCAT31((int3)((uint)in_EAX >> 8),(byte)(*(undefined4 *)&gen_args[1]));
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) = (byte)(*(undefined4 *)&gen_args[1]);
  puVar1 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)(byte)(*(undefined4 *)&gen_args[1]) * 4 + 0x180)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)(byte)(*(undefined4 *)&gen_args[1]) * 4 + 0x180))) == 0) {
    return (uint)puVar1;
  }
  F_0059dde0((undefined *)*puVar1,1);
  if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    F_0059bd30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),0,1,0);
    bVar2 = F_0079a940((*(undefined * PTR32 *)&gen_args[0]),0);
    return CONCAT31(extraout_var,bVar2);
  }
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))) {
  case 0: ;
    uVar4 = 1;
    break;
  case 1: ;
    uVar4 = 2;
    break;
  case 2: ;
    uVar4 = 3;
    break;
  case 3: ;
    uVar4 = 4;
    break;
  case 4: ;
    uVar4 = 5;
    break;
  case 5: ;
    uVar4 = 6;
    break;
  default: ;
    goto switchD_0079aa76_default;
  }
  bVar2 = F_0079a940((*(undefined * PTR32 *)&gen_args[0]),uVar4);
  (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),bVar2);
switchD_0079aa76_default: ;
  uVar3 = F_0059bd30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),0,1,(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompany::vf5 */
uint F_0079ab80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79ab80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_005a89b0(this,param_1,1);
  uVar1 = F_0059bc90(this + 0x1c4);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf6 */
unsigned int F_0079abb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79abb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_005b0610(this,param_1,1,param_2);
  F_00580f10(this + 0x1c4,param_2,0);
  return 0;
}

/* ref: Client::UI2::AddonFreeCompany::vf49 */
uint F_0079abe0(unsigned int gen_a0)
{
  GEN_ENTER(0x79abe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00580f60(this + 0x1c4,0);
  uVar1 = F_005a9190((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf38 */
uint F_0079ac00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x79ac00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x1c4,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf39 */
unsigned int F_0079ac30(unsigned int gen_a0)
{
  GEN_ENTER(0x79ac30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x1c4);
  return 0;
}

/* ref: FUN_0079ac50 */
uint F_0079ac50(unsigned int gen_a0)
{
  GEN_ENTER(0x79ac50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf25 */
uint F_0079ac90(unsigned int gen_a0)
{
  GEN_ENTER(0x79ac90u, gen_a0, 0u, 0u, 0u);
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

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf2 */
uint F_0079acd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x79acd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0xffff;
  uVar2 = uVar1 - 6;
  if (uVar2 < 0x20) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x79ade0) + uVar1 + 2)));
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this,param_2,param_3,param_4);
      return uVar1;
    case 7: ;
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x114))(this,param_2,param_3,param_4);
      break;
    case 0x17: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this,param_2,param_3,param_4);
      return uVar1;
    case 0x1f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,param_2,param_3,param_4);
      return uVar1;
    case 0x20: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))(this,param_2,param_3,param_4);
      return uVar1;
    case 0x21: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,param_2,param_3,param_4);
      return uVar1;
    case 0x24: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,param_2,param_3,param_4);
      return uVar1;
    case 0x25: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10c))(this,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf62 */
unsigned int F_0079ae10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf63 */
unsigned int F_0079ae20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf64 */
unsigned int F_0079ae30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf65 */
unsigned int F_0079ae40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf66 */
unsigned int F_0079ae50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf67 */
unsigned int F_0079ae60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf68 */
unsigned int F_0079ae70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf69 */
unsigned int F_0079ae80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf44 */
uint F_0079ae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79ae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  undefined2 extraout_var = 0;
  
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
  return CONCAT22(extraout_var,uVar1);
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf52 */
byte F_0079aed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79aed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if ((*param_1 == 2) && ((char)param_1[1] == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
    }
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf70 */
uint F_0079af20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79af20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3);
  iVar2 = *(int *)(uVar3 + 0xe8);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3);
  uVar3 = *(uint *)(uVar3 + 0xd8);
  uVar5 = uVar3;
  if ((iVar2 != 0) && (uVar3 != 0)) {
    iVar1 = param_1 * 2 + 1;
    F_005951c0(param_3,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + (param_1 * 3 + 3) * 4))),0,*param_2)
    ;
    pvVar4 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar4 != (undefined *)0x0) {
      F_00584110(pvVar4,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))));
    }
    pvVar4 = (undefined *)F_00559ba0(param_2[2]);
    uVar5 = 0;
    if (pvVar4 != (undefined *)0x0) {
      uVar5 = F_00584110(pvVar4,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + iVar1 * 4))));
    }
  }
  return uVar5;
}

/* ref: FUN_0079afc0 */
uint F_0079afc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x79afc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_2 + 0xac);
  uVar3 = param_1;
  if ((*(int *)(param_1 + 0xbc) != 0) && (iVar1 != 0)) {
    F_0059d670((undefined *)*param_4,
                 *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xbc) + 0x20))) + 8 + param_3 * 4))) + param_5);
    pvVar2 = (undefined *)F_00559ba0(param_4[1]);
    if (pvVar2 != (undefined *)0x0) {
      F_00584110(pvVar2,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + param_3 * 8))));
    }
    pvVar2 = (undefined *)F_00559ba0(param_4[2]);
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_00584110(pvVar2,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + param_3 * 8))));
    }
  }
  return uVar3;
}

/* ref: FUN_0079b040 */
uint F_0079b040(unsigned int gen_a0)
{
  GEN_ENTER(0x79b040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[72])REFP(0x10c91dc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf38 */
uint F_0079b0c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x79b0c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) != 0) &&
     (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x188) + 0x7c))))(*(int * PTR32 *)(param_1 + 0x188)),
     uVar2 != 0)) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3);
    if ((*(int *)(uVar3 + 0xe8) != 0) &&
       (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0xe8) + 0x20))) + 0x870))),
       *(int *)(param_1 + 0x1b0) != iVar1)) {
      uVar3 = 0;
      *(int *)(param_1 + 0x1b0) = iVar1;
      if (uVar2 != 0) {
        do {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x188) + 0x6c))))(*(int * PTR32 *)(param_1 + 0x188),uVar3,0,0);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2);
      }
    }
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf41 */
byte F_0079b150(unsigned int gen_a0)
{
  GEN_ENTER(0x79b150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyAction",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf47 */
uint F_0079b160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79b160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined4 uVar8;
  undefined3 extraout_var_00 = 0;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  piVar2 = *(int * PTR32 *)(iVar1 + 0x20);
  iVar3 = *(int *)(param_2 + 0xd8);
  if (*piVar2 == 0) {
    F_0059ead0(*(undefined * PTR32 *)(this + 0x188),0,0,1);
    F_0059ead0(*(undefined * PTR32 *)(this + 0x18c),0,0,1);
    F_0059d670(*(undefined * PTR32 *)(this + 0x180),*(undefined4 *)(this + 0x19c));
    F_0059d670(*(undefined * PTR32 *)(this + 0x184),*(undefined4 *)(this + 0x1a8));
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
    return uVar6;
  }
  iVar4 = piVar2[1];
  if (iVar4 == 0) {
    uVar8 = *(undefined4 *)(this + 0x1a0);
  }
  else {
    uVar8 = *(undefined4 *)(this + 0x198);
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x180),uVar8);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x188),iVar4,0,1);
  F_00584110(*(undefined * PTR32 *)(this + 400),**(undefined4 * PTR32 *)(iVar3 + 0x20));
  iVar1 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x2c)));
  if (iVar1 == 0) {
    uVar8 = *(undefined4 *)(this + 0x1ac);
  }
  else {
    uVar8 = *(undefined4 *)(this + 0x1a4);
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x184),uVar8);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x18c),iVar1,0,1);
  uVar6 = F_00584110(*(undefined * PTR32 *)(this + 0x194),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x1c))));
  if (iVar4 != 0) {
    if (iVar1 == 0) {
      uVar6 = F_0055dcb0();
      uVar6 = F_0055b9e0(uVar6);
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c));
      if (uVar6 != uVar7) {
        uVar8 = 0;
        if (*(int *)(this + 0x18c) != 0) {
          uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
        }
        bVar5 = F_005612e0(uVar8,uVar6);
        if (bVar5 == 0) {
          return CONCAT31(extraout_var_00,bVar5);
        }
      }
      uVar6 = F_0059b390(this,*(undefined4 *)(this + 0x188),1,0);
    }
    return uVar6;
  }
  if (iVar1 == 0) {
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
    return uVar6;
  }
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b9e0(uVar6);
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188));
  if (uVar6 != uVar7) {
    uVar8 = 0;
    if (*(int *)(this + 0x188) != 0) {
      uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    bVar5 = F_005612e0(uVar8,uVar6);
    if (bVar5 == 0) {
      return CONCAT31(extraout_var,bVar5);
    }
  }
  uVar6 = F_0059b390(this,*(undefined4 *)(this + 0x18c),1,0);
  return uVar6;
}

/* ref: FUN_0079b340 */
uint F_0079b340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79b340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  if (param_1 == 1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_01 = this_01 + -8;
      uVar1 = F_005a2670(this_01);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
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
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_0079b400 */
uint F_0079b400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79b400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3);
  uVar3 = *(uint *)(uVar3 + 0xe8);
  if (uVar3 != 0) {
    if (param_1 == 1) {
      sVar4 = *((short *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8 + param_2 * 0xc)));
    }
    else {
      if (param_1 != 2) {
        return uVar3;
      }
      sVar4 = *((short *)GEN_TOP((*(int *)(uVar3 + 0x20) + (param_2 * 3 + 0xc) * 4)));
    }
    if (-1 < sVar4) {
      F_00560760(((undefined1 *)(gen_frame + 0x0)));
      bVar1 = *(byte *)((int)this + 0x13a);
      uVar2 = *(undefined4 *)(param_3 + 0x1e4);
      (*(int *)(gen_frame + 0x4)) = (int)sVar4;
      (*(undefined2 *)(gen_frame + 0xa)) = 0x18;
      uVar3 = F_0055dcb0();
      uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),8,(uint)bVar1,uVar2,((undefined1 *)(gen_frame + 0x0)),0,0);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf71 */
uint F_0079b4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x79b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9e0(uVar3);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188));
  if (uVar3 != uVar4) {
    uVar5 = 0;
    if (*(int *)(this + 0x188) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    bVar2 = F_005612e0(uVar5,uVar3);
    if ((bVar2 == 0) &&
       (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c)),
       uVar3 != uVar4)) {
      uVar5 = 0;
      if (*(int *)(this + 0x18c) != 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      bVar2 = F_005612e0(uVar5,uVar3);
      if (bVar2 == 0) {
        return CONCAT31(extraout_var,bVar2);
      }
    }
  }
  AVar1 = this[0x13c];
  uVar3 = F_0055dcb0();
  piVar6 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x8c))
                    (piVar6,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar3;
}

/* ref: FUN_0079b560 */
uint F_0079b560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79b560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  iVar1 = *(int *)(uVar2 + 0xe8);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2);
  uVar2 = *(uint *)(uVar2 + 0xd8);
  if ((iVar1 != 0) && (uVar2 != 0)) {
    F_005951c0(param_3,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x34 + param_1 * 0xc))),0,*param_2);
    pvVar3 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar3 != (undefined *)0x0) {
      F_00584110(pvVar3,*((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x20 + param_1 * 8))));
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[2]);
    uVar2 = 0;
    if (pvVar3 != (undefined *)0x0) {
      uVar2 = F_00584110(pvVar3,"");
    }
  }
  return uVar2;
}

/* ref: FUN_0079b600 */
uint F_0079b600(unsigned int gen_a0)
{
  GEN_ENTER(0x79b600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9304));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf41 */
byte F_0079b650(unsigned int gen_a0)
{
  GEN_ENTER(0x79b650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyActivity",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf47 */
uint F_0079b660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79b660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xbc);
  if ((uVar1 != 0) && (*(int *)(param_2 + 0xac) != 0)) {
    if (**(int * PTR32 *)(uVar1 + 0x20) != 0) {
      uVar1 = (*(int * PTR32 *)(uVar1 + 0x20))[1];
      if (100 < uVar1) {
        uVar1 = 100;
      }
      uVar1 = F_0058d980(*(undefined4 *)(this + 0x180),uVar1);
      return uVar1;
    }
    uVar1 = F_0059ead0(*(undefined * PTR32 *)(this + 0x180),0,0,1);
  }
  return uVar1;
}

/* ref: FUN_0079b6c0 */
unsigned int F_0079b6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79b6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  
  if ((param_1 < 100) && (this_00 = (undefined *)F_00561530(param_2,4), this_00 != (undefined *)0x0)) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9a0(uVar3);
    if (*(int *)(uVar3 + 0xac) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0xac) + 0x20))) + param_1 * 8)));
      bVar2 = F_00584440(this_00,uVar1);
      if (bVar2 != 0) {
        F_00560760(((undefined4 *)(gen_frame + 0x0)));
        bVar2 = *(byte *)((int)this + 0x13a);
        ((undefined4 *)(gen_frame + 0x0))[0] = uVar1;
        uVar1 = *(undefined4 *)((int)param_2 + 0x1e4);
        uVar3 = F_0055dcb0();
        F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)bVar2,uVar1,((undefined4 *)(gen_frame + 0x0)),0,0);
      }
    }
  }
  return 0;
}

/* ref: FUN_0079b770 */
uint F_0079b770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79b770u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_0079b7b0 */
uint F_0079b7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x79b7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9424));
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  F_0042b630((int)this + 0x1c0);
  F_0042b630((int)this + 0x214);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  return (uint)this;
}

/* ref: FUN_0079b850 */
uint F_0079b850(unsigned int gen_a0)
{
  GEN_ENTER(0x79b850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9424));
  F_0042c880((undefined *)((int)this + 0x214));
  F_0042c880((undefined *)((int)this + 0x1c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf41 */
byte F_0079b890(unsigned int gen_a0)
{
  GEN_ENTER(0x79b890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyMember",0,6);
  return bVar1;
}

/* ref: FUN_0079b8b0 */
uint F_0079b8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79b8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)((int)this + 400);
  do {
    uVar1 = F_0059dde0((undefined *)*puVar3,(uint)(iVar2 == param_1));
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 3);
  return uVar1;
}

/* ref: FUN_0079b8f0 */
unsigned int F_0079b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_1 == 0) {
    uVar2 = 0xa2f;
  }
  else {
    if (param_1 != 1) {
      uVar1 = 0x11;
      goto LAB_0079b91d;
    }
    uVar2 = 0xa30;
  }
  uVar1 = 0x65;
LAB_0079b91d: ;
  F_0059d670(*(undefined * PTR32 *)((int)this + 0x1a8),uVar1);
  F_005842a0(*(undefined * PTR32 *)((int)this + 0x1ac),uVar2);
  return 0;
}

/* ref: FUN_0079b940 */
uint F_0079b940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79b940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  char * pcVar7;
  
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b990(uVar4);
  iVar1 = *(int *)(uVar4 + 0x9c);
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4);
  uVar4 = *(uint *)(uVar4 + 0x90);
  if ((iVar1 != 0) && (uVar4 != 0)) {
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + param_1 * 0x20)));
    F_005951c0(param_3,iVar2,0,param_2[1]);
    F_0055a300((undefined *)param_2[1],(uint)(0 < iVar2));
    pvVar5 = (undefined *)F_00559ba0(param_2[2]);
    if (pvVar5 != (undefined *)0x0) {
      F_00584110(pvVar5,*((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + param_1 * 0x14))));
      uVar6 = F_005612d0(*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10 + param_1 * 0x20))));
      F_0055aa30(pvVar5,uVar6);
    }
    F_0059d670((undefined *)*param_2,0x65);
    F_0055a300((undefined *)param_2[3],
                 (uint)((byte)(*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x1c + param_1 * 0x20))) >> 5) & 1))
    ;
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + param_1 * 0x20)));
    F_005951c0(param_3,iVar2,0,param_2[4]);
    F_0055a300((undefined *)param_2[4],(uint)(0 < iVar2));
    pvVar5 = (undefined *)F_00559ba0(param_2[5]);
    if (pvVar5 != (undefined *)0x0) {
      iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + param_1 * 0x20)));
      if (iVar2 < 1) {
        F_00584110(pvVar5,"");
      }
      else {
        F_0057eb30(pvVar5,iVar2,0,0,0,0);
      }
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc + param_1 * 0x20)));
    F_005951c0(param_3,iVar2,0,param_2[6]);
    F_0055a300((undefined *)param_2[6],(uint)(0 < iVar2));
    pvVar5 = (undefined *)F_00559ba0(param_2[8]);
    if (pvVar5 != (undefined *)0x0) {
      F_005842e0(pvVar5,*((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + param_1 * 0x14))),0);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x1910 + param_1 * 4)));
    F_0059d670((undefined *)param_2[9],iVar2 + 0x65);
    pvVar5 = (undefined *)F_00559ba0(param_2[10]);
    if (pvVar5 != (undefined *)0x0) {
      uVar4 = F_0055dcb0();
      uVar4 = F_0055b9a0(uVar4);
      if (*(int *)(uVar4 + 0xa0) == 0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = *((char * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar4 + 0xa0) + 0x20))) + iVar2 * 4)));
      }
      F_00584110(pvVar5,pcVar7);
    }
    iVar1 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x14 + param_1 * 0x20)));
    bVar3 = (byte)iVar1;
    F_0055a300((undefined *)param_2[0xc],(uint)(bVar3 & 1));
    F_0055a300((undefined *)param_2[0xd],(uint)(bVar3 >> 1 & 1));
    F_0055a300((undefined *)param_2[0xe],(uint)(bVar3 >> 2 & 1));
    F_0055a300((undefined *)param_2[0xf],(uint)(bVar3 >> 3 & 1));
    uVar4 = iVar1 >> 0x10 & 0xffff;
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar4 = F_0059d670((undefined *)param_2[0xb],0x65);
      return uVar4;
    case 1: ;
      uVar4 = F_0059d670((undefined *)param_2[0xb],0x66);
      return uVar4;
    case 2: ;
      uVar4 = F_0059d670((undefined *)param_2[0xb],0x67);
      return uVar4;
    case 3: ;
      uVar4 = F_0059d670((undefined *)param_2[0xb],0x68);
      return uVar4;
    case 4: ;
    case 5: ;
      uVar4 = F_0059d670((undefined *)param_2[0xb],0x69);
    }
  }
  return uVar4;
}

/* ref: FUN_0079bc10 */
uint F_0079bc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79bc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
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

/* ref: FUN_0079bc90 */
unsigned int F_0079bc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79bc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined * this_00;
  byte * pbVar6;
  byte * pbVar7;
  
  if ((param_1 != (undefined *)0x0) && (*(int *)((int)param_1 + 0x1e4) != 0)) {
    uVar5 = F_0055dcb0();
    uVar5 = F_0055b990(uVar5);
    iVar1 = *(int *)(uVar5 + 0x9c);
    uVar5 = F_0055dcb0();
    uVar5 = F_0055b9a0(uVar5);
    iVar2 = *(int *)(uVar5 + 0x90);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)param_1 + 0x1e4) + 4)));
      if (iVar1 == 6) {
        F_00560760(((byte * PTR32 *)(gen_frame + 0x0)));
        ((byte * PTR32 *)(gen_frame + 0x0))[0] = *((byte * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xc + param_2 * 0x14)));
      }
      else {
        if (iVar1 == 0x10) {
          pbVar6 = *((byte * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x10 + param_2 * 0x14)));
          if (pbVar6 == (byte *)0x0) {
            return 0;
          }
          bVar4 = *pbVar6;
        }
        else {
          if (iVar1 != 0x13) {
            return 0;
          }
          pbVar6 = *((byte * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4 + param_2 * 0x14)));
          pbVar7 = pbVar6;
          this_00 = (undefined *)F_00561530(param_1,0x12);
          bVar4 = F_00584440(this_00,pbVar7);
        }
        if (bVar4 == 0) {
          return 0;
        }
        F_00560760(((byte * PTR32 *)(gen_frame + 0x0)));
        ((byte * PTR32 *)(gen_frame + 0x0))[0] = pbVar6;
      }
      uVar3 = *(undefined4 *)((int)param_1 + 0x1e4);
      bVar4 = *(byte *)((int)this + 0x13a);
      uVar5 = F_0055dcb0();
      F_00588780((undefined *)(uVar5 + 0xe0),2,(uint)bVar4,uVar3,((byte * PTR32 *)(gen_frame + 0x0)),0,0);
    }
  }
  return 0;
}

/* ref: FUN_0079bd90 */
unsigned int F_0079bd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79bd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (*(undefined * PTR32 *)(param_1 + 0x1e4) != (undefined *)0x0)) {
    uVar2 = F_00568410(*(undefined * PTR32 *)(param_1 + 0x1e4));
    if ((uVar2 != 6) &&
       ((uVar2 = F_00568410(*(undefined * PTR32 *)(param_1 + 0x1e4)), uVar2 != 0x10 &&
        (uVar2 = F_00568410(*(undefined * PTR32 *)(param_1 + 0x1e4)), uVar2 != 0x13)))) {
      return 0;
    }
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)bVar1,0);
  }
  return 0;
}

/* ref: FUN_0079be00 */
unsigned int F_0079be00(unsigned int gen_a0)
{
  GEN_ENTER(0x79be00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x1a4) != 0) {
    F_00560760(((uint *)(gen_frame + 0x0)));
    uVar3 = F_0042a990((int)this + 0x1c0);
    bVar1 = *(byte *)((int)this + 0x13a);
    ((uint *)(gen_frame + 0x0))[0] = uVar3;
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0x68)));
    uVar3 = F_0055dcb0();
    F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)bVar1,uVar2,((uint *)(gen_frame + 0x0)),0,0);
  }
  return 0;
}

/* ref: FUN_0079be80 */
uint F_0079be80(unsigned int gen_a0)
{
  GEN_ENTER(0x79be80u, gen_a0, 0u, 0u, 0u);
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
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
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

/* ref: FUN_0079bf10 */
uint F_0079bf10(unsigned int gen_a0)
{
  GEN_ENTER(0x79bf10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  
  F_0056b780(this,0);
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0x88))) == '\0') {
    if (1 < *(byte *)((int)this + 0x1b6)) {
      bVar1 = F_0056b630(this,0x18ad0,7,0,9,0,0);
      return CONCAT31(extraout_var_01,bVar1);
    }
    bVar1 = F_0056b630(this,0x18aba,7,0,9,0,0);
    return CONCAT31(extraout_var_02,bVar1);
  }
  if (1 < *(byte *)((int)this + 0x1b6)) {
    bVar1 = F_0056b630(this,0x18ad1,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(this,0x18abb,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_0079bf80 */
uint F_0079bf80(unsigned int gen_a0)
{
  GEN_ENTER(0x79bf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9544));
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf41 */
byte F_0079c030(unsigned int gen_a0)
{
  GEN_ENTER(0x79c030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyRank",0,6);
  return bVar1;
}

/* ref: FUN_0079c040 */
uint F_0079c040(unsigned int gen_a0)
{
  GEN_ENTER(0x79c040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_0079c0d0 */
uint F_0079c0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x79c0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_0079c160 */
uint F_0079c160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79c160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (param_2 < 0x10) {
    if ((char)param_1 == '\0') {
      if (((char)param_3 != '\0') || (*((uint *)GEN_TOP((*(int *)((int)this + 400) + 0xc0))) == param_2)) {
LAB_0079c204: ;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        bVar1 = *(byte *)((int)this + param_2 + 0x1a0);
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
        (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
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
    else if ((char)param_1 == '\x01') goto LAB_0079c204;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    bVar1 = *(byte *)((int)this + param_2 + 0x1a0);
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
    puVar3 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_0079c270 */
uint F_0079c270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79c270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (param_1 < 0x10) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(int *)(gen_frame + 0x1c)) = (int)(short)((short)uVar2 + (short)uVar3);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    bVar1 = *(byte *)((int)this + param_1 + 0x1a0);
    (*(int *)(gen_frame + 0x24)) = (int)(short)uVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar5 = 3;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_0079c350 */
uint F_0079c350(unsigned int gen_a0)
{
  GEN_ENTER(0x79c350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 5;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_0079c3c0 */
uint F_0079c3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x79c3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 6;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_0079c430 */
uint F_0079c430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79c430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  iVar1 = *(int *)(uVar2 + 0xb0);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2);
  uVar2 = *(uint *)(uVar2 + 0xa0);
  if ((iVar1 != 0) && (uVar2 != 0)) {
    uVar4 = (uint)*(byte *)(param_1 + 0x1a0 + (int)this);
    F_0059d670((undefined *)*param_2,*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + uVar4 * 0xc))) + 0x65);
    pvVar3 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar3 != (undefined *)0x0) {
      F_0057eb30(pvVar3,*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + uVar4 * 0xc))) + 1,0,0,0,0);
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[2]);
    if (pvVar3 != (undefined *)0x0) {
      F_00584110(pvVar3,*((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + uVar4 * 4))));
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[3]);
    uVar2 = 0;
    if (pvVar3 != (undefined *)0x0) {
      uVar2 = F_0057eb30(pvVar3,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + uVar4 * 0xc))),0,0,0,0)
      ;
    }
  }
  return uVar2;
}

/* ref: FUN_0079c510 */
uint F_0079c510(unsigned int gen_a0)
{
  GEN_ENTER(0x79c510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9664));
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
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
  *(undefined1 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf41 */
byte F_0079c610(unsigned int gen_a0)
{
  GEN_ENTER(0x79c610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyStatus",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf46 */
byte F_0079c620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79c620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined1 AVar1;
  undefined * this_00;
  undefined * pAVar2;
  uint uVar3;
  
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_1 < 1) {
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    AVar1 = (undefined1)0x0;
  }
  else {
    AVar1 = SUB41(*(undefined4 *)(param_2 + 4),0);
  }
  this[0x1e8] = AVar1;
  if (AVar1 == (undefined1)0x0) {
    F_0059d6a0(this,0x65,1,0);
    F_0059d670(*(undefined * PTR32 *)(this + 0x18c),0x65);
    this_00 = *(undefined * PTR32 *)(this + 400);
  }
  else {
    if (AVar1 != (undefined1)0x1) {
      if (AVar1 == (undefined1)0x2) {
        F_0059d6a0(this,0x67,1,0);
      }
      else {
        this[0x1e8] = (undefined1)0x0;
        F_0059d6a0(this,0x65,1,0);
      }
      goto LAB_0079c6a8;
    }
    F_0059d6a0(this,0x66,1,0);
    this_00 = *(undefined * PTR32 *)(this + 0x194);
  }
  F_0059d670(this_00,0x65);
LAB_0079c6a8: ;
  uVar3 = 0;
  pAVar2 = this + 0x180;
  do {
    if (*(undefined * PTR32 *)pAVar2 != (undefined *)0x0) {
      F_0059dde0(*(undefined * PTR32 *)pAVar2,(uint)(uVar3 == (byte)this[0x1e8]));
    }
    uVar3 = uVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while ((int)uVar3 < 3);
  F_0059b3f0(this,1,1);
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf47 */
uint F_0079c6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79c6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined * pAVar9;
  undefined4 uVar10;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  uVar6 = **(uint * PTR32 *)(iVar1 + 0x20);
  iVar2 = *(int *)(param_2 + 0xb4);
  if ((uVar6 & 1) == 0) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x18c),0x65);
  }
  else {
    F_0059d670(*(undefined * PTR32 *)(this + 0x18c),0x11);
    iVar3 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4)));
    local_8 = 0;
    param_2 = 0;
    iVar7 = 8;
    pAVar9 = this + 0x1a0;
    do {
      if (local_8 == iVar3) {
        uVar10 = 0x66;
      }
      else {
        uVar10 = 0x65;
      }
      F_0059d670(*(undefined * PTR32 *)(pAVar9 + -8),uVar10);
      F_00591c00(*(undefined * PTR32 *)(pAVar9 + -4),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + iVar7))),0);
      F_00584110(*(undefined * PTR32 *)pAVar9,*((undefined4 *)GEN_TOP((param_2 + *(int *)(iVar2 + 0x20)))));
      F_00568230(*(undefined4 *)(pAVar9 + 4),
                   ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + iVar7))) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8)))));
      F_00584110(*(undefined * PTR32 *)(pAVar9 + 8),*((undefined4 *)GEN_TOP((param_2 + 4 + *(int *)(iVar2 + 0x20)))));
      param_2 = param_2 + 8;
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 0xc;
      pAVar9 = pAVar9 + 0x14;
    } while (local_8 < 3);
    F_00584110(*(undefined * PTR32 *)(this + 0x1d4),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18))));
  }
  if ((uVar6 & 2) == 0) {
    uVar10 = 0x65;
  }
  else {
    pcVar4 = *((char * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1c)));
    if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
      F_0059d670(*(undefined * PTR32 *)(this + 400),0x11);
      F_00584110(*(undefined * PTR32 *)(this + 0x1d8),pcVar4);
      goto LAB_0079c842;
    }
    uVar10 = 0x66;
  }
  F_0059d670(*(undefined * PTR32 *)(this + 400),uVar10);
LAB_0079c842: ;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x28))))
            (*(int * PTR32 *)(this + 0x1dc),(uint)(0 < *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x3c)))));
  *(undefined4 *)(this + 0x1e4) = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x2c)));
  if ((uVar6 & 4) == 0) {
    uVar6 = F_0059d670(*(undefined * PTR32 *)(this + 0x194),0x65);
  }
  else {
    F_0059d670(*(undefined * PTR32 *)(this + 0x194),0x11);
    uVar5 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x40)));
    uVar6 = F_0059ead0(*(undefined * PTR32 *)(this + 0x1e0),uVar5,0,1);
    uVar8 = 0;
    if (uVar5 != 0) {
      param_1 = 0x4c;
      do {
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1e0) + 0x54))))
                          (*(undefined4 *)(this + 0x1e0),uVar8,
                           (uint)(*((int *)GEN_TOP((param_1 + *(int *)(iVar1 + 0x20)))) == 1));
        param_1 = param_1 + 0xc;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
      return uVar6;
    }
  }
  return uVar6;
}

/* ref: FUN_0079c900 */
uint F_0079c900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79c900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
  (*(uint *)(gen_frame + 0x18)) = param_1 & 0xff;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0079c960 */
uint F_0079c960(unsigned int gen_a0)
{
  GEN_ENTER(0x79c960u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079c9e0 */
uint F_0079c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3);
  iVar2 = *(int *)(uVar3 + 0xc4);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3);
  uVar3 = *(uint *)(uVar3 + 0xb4);
  uVar5 = uVar3;
  if ((iVar2 != 0) && (uVar3 != 0)) {
    iVar1 = param_1 * 2 + 0xc;
    F_005951c0(param_3,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x44 + param_1 * 0xc))),0,*param_2);
    pvVar4 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar4 != (undefined *)0x0) {
      F_00584110(pvVar4,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))));
    }
    pvVar4 = (undefined *)F_00559ba0(param_2[2]);
    uVar5 = 0;
    if (pvVar4 != (undefined *)0x0) {
      uVar5 = F_00584110(pvVar4,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + iVar1 * 4))));
    }
  }
  return uVar5;
}

/* ref: FUN_0079ca80 */
uint F_0079ca80(unsigned int gen_a0)
{
  GEN_ENTER(0x79ca80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9784));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  F_0042b630((int)this + 0x1a0);
  return (uint)this;
}

/* ref: FUN_0079caf0 */
uint F_0079caf0(unsigned int gen_a0)
{
  GEN_ENTER(0x79caf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9784));
  F_0042c880((undefined *)((int)this + 0x1a0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf38 */
uint F_0079cb30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x79cb30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) != 0) &&
     (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 400) + 0x7c))))(*(int * PTR32 *)(param_1 + 400)), uVar2 != 0)
     ) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3);
    if ((*(int *)(uVar3 + 0xe8) != 0) &&
       (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0xe8) + 0x20))) + 0x870))),
       *(int *)(param_1 + 500) != iVar1)) {
      uVar3 = 0;
      *(int *)(param_1 + 500) = iVar1;
      if (uVar2 != 0) {
        do {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 400) + 0x6c))))(*(int * PTR32 *)(param_1 + 400),uVar3,0,0);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2);
      }
    }
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf41 */
byte F_0079cbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x79cbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FreeCompanyTopics",0,6);
  return bVar1;
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
  undefined4 uVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  
  if ((param_1 < 3) && (this_00 = (undefined *)F_00561530(param_2,4), this_00 != (undefined *)0x0)) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9a0(uVar3);
    if (*(int *)(uVar3 + 0xac) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0xac) + 0x20))) + param_1 * 8)));
      bVar2 = F_00584440(this_00,uVar1);
      if (bVar2 != 0) {
        F_00560760(((undefined4 *)(gen_frame + 0x0)));
        bVar2 = *(byte *)((int)this + 0x13a);
        ((undefined4 *)(gen_frame + 0x0))[0] = uVar1;
        uVar1 = *(undefined4 *)((int)param_2 + 0x1e4);
        uVar3 = F_0055dcb0();
        F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)bVar2,uVar1,((undefined4 *)(gen_frame + 0x0)),0,0);
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
uint F_0079d2d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x79d2d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  
  F_005a2370(param_1,param_2);
  uVar2 = F_0059d8b0(param_1 + 0x6c0,param_2);
  bVar1 = *(byte *)(param_1 + 0xcf8);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
  if ((bVar1 != 0) && (uVar2 = (uint)bVar1, uVar2 != 0xffffffff)) {
    uVar2 = F_0055dcb0();
    uVar2 = *((uint *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc)));
    if (uVar2 != param_1) {
      if (uVar2 != 0) {
        if ((*(int *)(param_1 + 0x188) != 0) && (uVar2 == *((uint *)GEN_TOP((*(int *)(param_1 + 0x188) + 4)))))
        {
          return uVar2;
        }
        bVar1 = *(byte *)(uVar2 + 0x13a);
        uVar2 = F_0055dcb0();
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14) + 0x44))))(*(int * PTR32 *)(uVar2 + 0x14),0x2a);
        if (bVar1 == uVar2) {
          return uVar2;
        }
        uVar2 = F_0055dcb0();
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14) + 0x44))))(*(int * PTR32 *)(uVar2 + 0x14),7);
        if (bVar1 == uVar2) {
          return uVar2;
        }
      }
      *(undefined1 *)(param_1 + 0xcf8) = 0;
    }
  }
  return uVar2;
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
byte F_0079d390(unsigned int gen_a0)
{
  GEN_ENTER(0x79d390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Journal",0,6);
  return bVar1;
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
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 8);
  (*(uint *)(gen_frame + 0x14)) = *((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x2a))) & 0xf;
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
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
byte F_0079dd70(unsigned int gen_a0)
{
  GEN_ENTER(0x79dd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"JournalAccept",1,6);
  return bVar1;
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
byte F_0079dea0(unsigned int gen_a0)
{
  GEN_ENTER(0x79dea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"JournalDetail",1,6);
  return bVar1;
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
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    uVar4 = *(undefined4 *)((int)this + 0x1bc);
    (*(undefined4 *)(gen_frame + 0x68)) = 6;
    (*(uint *)(gen_frame + 0x6c)) = uVar3;
    uVar2 = F_0055a020(uVar4);
    (*(undefined4 *)(gen_frame + 0x70)) = 4;
    (*(uint *)(gen_frame + 0x74)) = (uint)uVar2;
    uVar3 = F_0055ab00(*(undefined4 *)((int)this + 0x1bc));
    (*(undefined4 *)(gen_frame + 0x78)) = 4;
    (*(uint *)(gen_frame + 0x7c)) = uVar3;
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
byte F_0079e230(unsigned int gen_a0)
{
  GEN_ENTER(0x79e230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"JournalResult",1,6);
  return bVar1;
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
  GEN_ENTER(0x79e2d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
byte F_0079e3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x79e3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GuildLeve",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf52 */
byte F_0079e3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79e3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  if (*param_1 == 5) {
    uVar1 = *(undefined4 *)(this + 0x700);
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
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
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = param_1;
  if ((param_1 != *(ushort *)((int)this + 0x706)) && (param_1 < *(ushort *)((int)this + 0x704))) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    *(short *)((int)this + 0x706) = (short)param_1;
    (*(undefined4 *)(gen_frame + 0x10)) = 9;
    (*(uint *)(gen_frame + 0x18)) = param_1 & 0xffff;
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

/* ref: FUN_0079e4d0 */
uint F_0079e4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79e4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * pvVar2;
  undefined * this_00;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  pvVar2 = (undefined *)F_00561530(param_1,2);
  this_00 = (undefined *)F_00561530(param_1,4);
  uVar3 = param_2 >> 0x10;
  F_0055dcb0();
  uVar3 = F_0056a410(uVar3);
  F_00584110(pvVar2,uVar3);
  if ((char)param_3 != '\0') {
    uVar3 = param_2 & 0xffff;
    F_0055dcb0();
    uVar3 = F_0056a410(uVar3);
    uVar3 = F_00584110(this_00,uVar3);
    return uVar3;
  }
  F_0055a300(this_00,0);
  pvVar2 = (undefined *)F_00561530(param_1,3);
  bVar1 = F_0055a300(pvVar2,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0079e570 */
uint F_0079e570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79e570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x2a))) & 0xf) == 1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x74))))
                      (*(int * PTR32 *)((int)this + 0x184),*(int *)(param_1 + 8) + 1,0);
  }
  return uVar1;
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
byte F_0079e610(unsigned int gen_a0)
{
  GEN_ENTER(0x79e610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GuildLeveDifficulty",0,6);
  return bVar1;
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
      uVar2 = F_00557670(param_3,0);
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
    else {
      uVar2 = param_2;
      if (param_2 == 1) {
        F_00557670(param_3,0);
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
        uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      }
    }
  }
  else if (uVar2 == 0x1b) {
    uVar2 = F_00557670(param_3,0);
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
  return uVar2;
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
byte F_0079e840(unsigned int gen_a0)
{
  GEN_ENTER(0x79e840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GuildLeveHistory",0,6);
  return bVar1;
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
byte F_0079e930(unsigned int gen_a0)
{
  GEN_ENTER(0x79e930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ColosseumRecord",1,6);
  return bVar1;
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
      F_0059d670((undefined *)*param_2,((undefined * PTR32 *)(gen_frame + 0x0))[(int)(*(byte *)(puVar1 + 8))]);
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
byte F_0079eb80(unsigned int gen_a0)
{
  GEN_ENTER(0x79eb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"RetainerSell",0,6);
  return bVar1;
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
byte F_0079eeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x79eeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"RetainerSellList",0,6);
  return bVar1;
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
  uVar3 = param_2;
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
    uVar3 = F_00557670(param_2,0);
  }
  return uVar3;
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
byte F_0079f520(unsigned int gen_a0)
{
  GEN_ENTER(0x79f520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"RetainerHistory",0,6);
  return bVar1;
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
  undefined * pAVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_2 + 0x84);
  pAVar3 = param_1;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    pAVar3 = *(undefined * PTR32 *)(iVar1 + 0x20);
    param_1 = *(undefined * PTR32 *)(pAVar3 + 0x968);
    if (0 < (int)param_1) {
      pAVar3 = this + 0x18c;
      iVar5 = 0x980;
      iVar4 = 0xb08;
      do {
        *(undefined4 *)(pAVar3 + 0x10) = *((undefined4 *)GEN_TOP((iVar4 + -0xc + *(int *)(iVar2 + 0x20))));
        *(undefined4 *)(pAVar3 + 0x14) = *((undefined4 *)GEN_TOP((iVar4 + -8 + *(int *)(iVar2 + 0x20))));
        *(undefined4 *)(pAVar3 + 0xc) = *((undefined4 *)GEN_TOP((iVar4 + -4 + *(int *)(iVar2 + 0x20))));
        *(undefined4 *)(pAVar3 + 0x18) = *((undefined4 *)GEN_TOP((iVar4 + *(int *)(iVar2 + 0x20))));
        *(undefined4 *)(pAVar3 + 4) = *((undefined4 *)GEN_TOP((iVar4 + 4 + *(int *)(iVar2 + 0x20))));
        pAVar3[0x1d] = (undefined1)(0 < *((int *)GEN_TOP((iVar5 + -0xc + *(int *)(iVar1 + 0x20)))));
        pAVar3[0x1c] = *((undefined *)GEN_TOP((iVar5 + -0x10 + *(int *)(iVar1 + 0x20))));
        *(undefined4 *)(pAVar3 + 8) = *((undefined4 *)GEN_TOP((iVar5 + *(int *)(iVar1 + 0x20))));
        *(undefined4 *)pAVar3 = *((undefined4 *)GEN_TOP((iVar5 + -4 + *(int *)(iVar1 + 0x20))));
        iVar5 = iVar5 + 0x18;
        iVar4 = iVar4 + 0x14;
        pAVar3 = pAVar3 + 0x20;
        param_1 = (undefined *)((int)param_1 + -1);
      } while (param_1 != (undefined *)0x0);
    }
    if (((byte)this[0xf9] & 1) != 0) {
      pAVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70))))(*(int * PTR32 *)(this + 0x180))));
    }
  }
  return (uint)pAVar3;
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
  GEN_ENTER(0x79f890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
byte F_0079f8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x79f8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"RetainerInventory",0,6);
  return bVar1;
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
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (param_1 != 7) {
    bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),1);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),0);
  return CONCAT31(extraout_var_00,bVar1);
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
byte F_0079fcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x79fcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"RetainerInventoryGrid",0,6);
  return bVar1;
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
byte F_0079fd50(unsigned int gen_a0)
{
  GEN_ENTER(0x79fd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"RetainerInventoryGridCrystal",0,6);
  return bVar1;
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
  undefined * pvVar4;
  char * pcVar5;
  uint uVar6;
  
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
        uVar6 = *((uint *)GEN_TOP((param_2 + 4 + *(int *)((*(int *)(gen_frame + 0x14)) + 0x20))));
        uVar3 = *((uint *)GEN_TOP((param_2 + 8 + *(int *)((*(int *)(gen_frame + 0x14)) + 0x20)))) & 0xffff;
        *(undefined4 *)((int)this_00 + 0x98) = 0x8000;
        *puVar2 = 0x2e;
        puVar2[1] = uVar3;
        if (uVar3 == 0xffff) {
          puVar2[1] = 0xffffffff;
        }
        puVar2[0x19] = uVar6 & 0xffff;
        F_0056e530(this_00,2);
        uVar1 = *(undefined2 *)(puVar2 + 1);
        uVar6 = (int)uVar6 >> 0x10 & 0xffff;
        *(byte *)((int)this_00 + 0xaa) =
             *(byte *)((int)this_00 + 0xaa) ^
             ((uVar6 == 0) * '\x02' ^ *(byte *)((int)this_00 + 0xaa)) & 2;
        *(undefined2 *)((int)this_00 + 0x9c) = uVar1;
        pvVar4 = (undefined *)F_00561530(this_00,3);
        (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar4;
        uVar6 = F_00560910(uVar6);
        F_00584110((*(undefined * PTR32 *)(gen_frame + 0x10)),uVar6);
        pcVar5 = *((char * PTR32 *)GEN_TOP((param_1 + *(int *)((*(int *)(gen_frame + 0xc)) + 0x20))));
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "";
        }
        (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar5;
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
byte F_007a0030(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MonsterNoteBook",0,6);
  return bVar1;
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
byte F_007a01c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a01c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GatheringNoteBook",0,6);
  return bVar1;
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
  int iVar1;
  undefined1 AVar2;
  uint uVar3;
  undefined * pAVar4;
  undefined4 * puVar5;
  
  if (this[0x1bc] != (undefined1)0x0) {
    pAVar4 = this + 0x180;
    (*(int *)(gen_frame + 0x18)) = 4;
    do {
      F_00560760(((undefined4 *)(gen_frame + 0x8)));
      AVar2 = this[0x13a];
      ((undefined4 *)(gen_frame + 0x8))[0] = *(undefined4 *)(pAVar4 + 0x2c);
      uVar3 = F_0055dcb0();
      (*(uint *)(gen_frame + 0x14)) = uVar3;
      puVar5 = ((undefined4 *)(gen_frame + 0x8));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x38))))(*(int * PTR32 *)pAVar4);
      F_00590ad0((undefined *)((*(uint *)(gen_frame + 0x14)) + 0xe0),2,(uint)(byte)AVar2,uVar3,puVar5);
      pAVar4 = pAVar4 + 4;
      iVar1 = (*(int *)(gen_frame + 0x18)) + -1;
      (*(int *)(gen_frame + 0x18)) = iVar1;
    } while (iVar1 != 0);
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
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  F_00557670(param_1,0);
  F_00560760(&(*(char * PTR32 *)(gen_frame + 0x0)));
  iVar2 = param_2[2];
  (*(char * PTR32 *)(gen_frame + 0x0)) = "";
  (*(undefined2 *)(gen_frame + 0xa)) = 1;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + iVar2 * 0x24 + 0x308);
  if (*param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*param_2 + 0x70);
  }
  bVar1 = *(byte *)((int)this + 0x13a);
  uVar3 = F_0055dcb0();
  uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),4,(uint)bVar1,uVar4,&(*(char * PTR32 *)(gen_frame + 0x0)),0,0);
  return uVar3;
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
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = param_1;
  while( true ) {
    if ((char)param_2 == '\0') {
      uVar1 = uVar1 + 1;
      if (3 < (int)uVar1) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        uVar1 = 3;
      }
    }
    if ((*(uint *)((int)this + 0x1a0) & 1 << ((byte)uVar1 & 0x1f)) != 0) break;
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return uVar1;
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
  undefined1 uVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  
  if (param_1 < 6) {
    puVar2 = ((undefined4 *)GEN_TOP(((int)this + (param_1 + 1) * 0x38)));
    this_00 = (undefined *)*puVar2;
    if (this_00 != (undefined *)0x0) {
      uVar4 = *(undefined4 *)((int)this_00 + 0x78);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar4;
      uVar5 = *(undefined4 *)((int)this_00 + 0x7c);
      (*(undefined4 *)(gen_frame + 0x10)) = uVar5;
      uVar3 = *(undefined1 *)((int)this_00 + 0x80);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = (char)uVar4;
      cVar6 = (char)(*(undefined4 *)(gen_frame + 0xc));
      (*(undefined1 *)(gen_frame + 0x14)) = uVar3;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = (char)(*(undefined4 *)(gen_frame + 0xc)) + '\x01';
      (*(char *)(gen_frame + 0x1b)) = (char)(*(undefined4 *)(gen_frame + 0x10));
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3, (unsigned long long)((undefined3)((uint)uVar5 >> 8)));
      cVar1 = (char)(*(undefined4 *)(gen_frame + 0xc)) + '\x02';
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 0, 3, (unsigned long long)((undefined3)uVar4));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 3)) = cVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT13(cVar1,(undefined3)(*(undefined4 *)(gen_frame + 0xc)));
      F_00561740(this_00,&(*(undefined4 *)(gen_frame + 0xc)),1);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = (*(char *)(gen_frame + 0x1b));
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(*(char *)(gen_frame + 0x1b)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = cVar1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 3)) = cVar6;
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT13(cVar6,(undefined3)(*(undefined4 *)(gen_frame + 0xc)));
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
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = cVar6;
      (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3),cVar6);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = cVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),cVar1);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 3)) = (*(char *)(gen_frame + 0x1b));
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT13((*(char *)(gen_frame + 0x1b)),(undefined3)(*(undefined4 *)(gen_frame + 0xc)));
      if (0 < (int)param_1) {
        if ((char)param_2 == '\0') {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = cVar6 + -1;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = CONCAT11(cVar6 + -1,cVar1);
        }
        else {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = cVar6 + -3;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = CONCAT11(cVar6 + -3,cVar1);
        }
      }
      if ((int)param_1 < 5) {
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = cVar6 + '\x05';
        gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 0, 3, (unsigned long long)(CONCAT12(cVar6 + '\x05',(undefined2)(*(undefined4 *)(gen_frame + 0xc)))));
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
  uint uVar2;
  
  uVar2 = param_1;
  if (((param_1 < 6) &&
      (pvVar1 = ((undefined *)GEN_TOP(((int)this + (param_1 + 1) * 0x38))), uVar2 = 0, pvVar1 != (undefined *)0x0)) &&
     (pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x1c), uVar2 = 0, pvVar1 != (undefined *)0x0)) {
    uVar2 = F_00584110(pvVar1,param_2);
  }
  return uVar2;
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
byte F_007a0e50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a0e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"RecipeNoteBook",0,6);
  return bVar1;
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
  byte bVar5;
  uint uVar6;
  
  F_00557670(param_1,0);
  iVar3 = *param_2;
  iVar1 = param_2[2] * 0x28;
  bVar5 = F_00584440(*(undefined * PTR32 *)(iVar3 + 0x104),
                       *(undefined4 *)((int)this + param_2[2] * 0x28 + 0x554));
  F_00560760(&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + iVar1 + 0x554);
  (*(undefined1 *)(gen_frame + 0xa)) = 1;
  bVar2 = *(byte *)((int)this + 0x13a);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + iVar1 + 0x548);
  (*(undefined1 *)(gen_frame + 0xb)) = 0;
  uVar4 = *(undefined4 *)(iVar3 + 0x1e4);
  uVar6 = F_0055dcb0();
  uVar6 = F_00588780((undefined *)(uVar6 + 0xe0),(uint)(bVar5 != 0) * 2 + 4,(uint)bVar2,uVar4,&(*(undefined4 *)(gen_frame + 0x0))
                       ,0,0);
  return uVar6;
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
byte F_007a10c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a10c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (5 < param_1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  iVar2 = (int)this + param_1 * 0x38 + 0x250;
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x35) == '\0')) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = *(int *)(iVar2 + 0x30);
    if ((*(int *)(gen_frame + 0xc)) < 0) goto LAB_007a119d;
  }
  if (((iVar2 != 0) && (*(char *)(iVar2 + 0x35) != '\0')) && (*(int *)(iVar2 + 0x10) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x10) + 0x3c))))(*(int * PTR32 *)(iVar2 + 0x10));
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
    F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
LAB_007a119d: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

