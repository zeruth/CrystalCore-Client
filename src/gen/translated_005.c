#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00441df0 */
byte F_00441df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x441df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    if ((char)param_1 == '\x01') {
      *(undefined1 *)((int)this + 0x48c) = 5;
    }
    else {
      if ((char)param_1 != '\x02') goto LAB_00441eac;
      *(undefined1 *)((int)this + 0x48c) = 100;
    }
    *(int *)((int)this + 0x488) = *(int *)((int)this + 0x488) + 1;
    (*(undefined2 *)(gen_frame + 0x20)) = 0;
    *(undefined1 *)((int)this + 0x48d) = 1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x120;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x22)) = *(undefined1 *)((int)this + 0x488);
    bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
LAB_00441eac: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00441ed0 */
unsigned int F_00441ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x441ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  uint uVar2;
  
  if ((((*(char *)((int)this + 0x7b) == '\0') || (*(char *)((int)this + 0x7b) == '\x01')) &&
      ((char)param_1 != '\0')) && ((char)param_1 != '\x01')) {
    if (*(int *)((int)this + 0x10) == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar2 + 0x3c);
    }
    if (*(int *)((int)this + 0x10) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x30))) = 0;
    }
  }
  cVar1 = *(char *)((int)this + 0x7b);
  *(char *)((int)this + 0x7b) = (char)param_1;
  if ((cVar1 == '\x03') && ((char)param_1 != '\x03')) {
    *(undefined1 *)((int)this + 0x48d) = 0;
  }
  return 0;
}

/* ref: FUN_00441f30 */
unsigned int F_00441f30(unsigned int gen_a0)
{
  GEN_ENTER(0x441f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x10) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar1 + 0x3c);
  }
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x30))) = 0;
  }
  *(undefined1 *)((int)this + 0x48d) = 0;
  return 0;
}

/* ref: FUN_00441f60 */
uint F_00441f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x441f60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = 0;
  if (param_1 != 0 || param_2 != 0) {
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0xd1;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
      (*(int *)(gen_frame + 0x20)) = param_1;
      (*(int *)(gen_frame + 0x24)) = param_2;
      bVar1 = F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = CONCAT31(extraout_var,1);
        goto LAB_00441fdf;
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00441fdf: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyCreate::vf1 */
uint F_00442000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x442000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  undefined * pIVar5;
  undefined4 uVar6;
  
  *(int *)(this + 0x80) = param_1[8];
  *(int *)(this + 0x84) = param_1[9];
  piVar3 = param_1 + 0xd;
  pIVar5 = this + 0x94;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pIVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    pIVar5 = pIVar5 + 4;
  }
  *(int *)(this + 0x88) = param_1[10];
  *(int *)(this + 0x8c) = param_1[0xb];
  this[0x90] = *(undefined *)(param_1 + 0xc);
  this[0x91] = *(undefined *)((int)param_1 + 0x31);
  this[0x92] = *(undefined *)((int)param_1 + 0x32);
  this[0x93] = *(undefined *)((int)param_1 + 0x33);
  this[0xb4] = *(undefined *)(param_1 + 0x15);
  this[0xb5] = *(undefined *)((int)param_1 + 0x55);
  this[0xb6] = *(undefined *)((int)param_1 + 0x56);
  this[0x78] = (undefined1)0x0;
  *(int *)(this + 0xb8) = param_1[0x18];
  *(int *)(this + 0xbc) = param_1[0x19];
  piVar3 = param_1 + 0x1d;
  pIVar5 = this + 0xcc;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pIVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    pIVar5 = pIVar5 + 4;
  }
  *(int *)(this + 0xc0) = param_1[0x1a];
  *(int *)(this + 0xc4) = param_1[0x1b];
  this[200] = *(undefined *)(param_1 + 0x1c);
  this[0xc9] = *(undefined *)((int)param_1 + 0x71);
  this[0xca] = *(undefined *)((int)param_1 + 0x72);
  this[0xcb] = *(undefined *)((int)param_1 + 0x73);
  this[0xec] = *(undefined *)(param_1 + 0x25);
  this[0xed] = *(undefined *)((int)param_1 + 0x95);
  this[0xee] = *(undefined *)((int)param_1 + 0x96);
  if (*(int *)(this + 0xb8) != 0 || *(int *)(this + 0xbc) != 0) {
    this[0x78] = (undefined1)((char)this[0x78] + '\x01');
  }
  *(int *)(this + 0xf0) = param_1[0x26];
  *(int *)(this + 0xf4) = param_1[0x27];
  piVar3 = param_1 + 0x2b;
  pIVar5 = this + 0x104;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pIVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    pIVar5 = pIVar5 + 4;
  }
  *(int *)(this + 0xf8) = param_1[0x28];
  *(int *)(this + 0xfc) = param_1[0x29];
  this[0x100] = *(undefined *)(param_1 + 0x2a);
  this[0x101] = *(undefined *)((int)param_1 + 0xa9);
  this[0x102] = *(undefined *)((int)param_1 + 0xaa);
  this[0x103] = *(undefined *)((int)param_1 + 0xab);
  this[0x124] = *(undefined *)(param_1 + 0x33);
  this[0x125] = *(undefined *)((int)param_1 + 0xcd);
  this[0x126] = *(undefined *)((int)param_1 + 0xce);
  if (*(int *)(this + 0xf0) != 0 || *(int *)(this + 0xf4) != 0) {
    this[0x78] = (undefined1)((char)this[0x78] + '\x01');
  }
  *(int *)(this + 0x128) = param_1[0x34];
  *(int *)(this + 300) = param_1[0x35];
  piVar3 = param_1 + 0x39;
  pIVar5 = this + 0x13c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pIVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    pIVar5 = pIVar5 + 4;
  }
  *(int *)(this + 0x130) = param_1[0x36];
  *(int *)(this + 0x134) = param_1[0x37];
  this[0x138] = *(undefined *)(param_1 + 0x38);
  this[0x139] = *(undefined *)((int)param_1 + 0xe1);
  this[0x13a] = *(undefined *)((int)param_1 + 0xe2);
  this[0x13b] = *(undefined *)((int)param_1 + 0xe3);
  this[0x15c] = *(undefined *)(param_1 + 0x41);
  this[0x15d] = *(undefined *)((int)param_1 + 0x105);
  this[0x15e] = *(undefined *)((int)param_1 + 0x106);
  if (*(int *)(this + 0x128) != 0 || *(int *)(this + 300) != 0) {
    this[0x78] = (undefined1)((char)this[0x78] + '\x01');
  }
  piVar3 = param_1;
  if (*param_1 != 0 || param_1[1] != 0) {
    uVar6 = 3;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    pvVar2 = (undefined *)F_00763050(uVar1,uVar6);
    F_00771260(pvVar2,param_1 + 0x42,(uint)(byte)this[0x78]);
    uVar6 = 0x40;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    pvVar2 = (undefined *)F_00763050(uVar1,uVar6);
    piVar3 = (int *)0x0;
    if (pvVar2 != (undefined *)0x0) {
      F_0077e1e0(pvVar2,*param_1,param_1[1],param_1 + 0x42,(int)param_1 + 0x15,
                   (uint)*(byte *)(param_1 + 5),param_1[4]);
      piVar3 = (int *)F_0082b9b0(pvVar2,this + 0x80,this + 0xb8);
    }
  }
  return (uint)piVar3;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyCreate::vf4 */
byte F_00442310(void)
{
  GEN_ENTER(0x442310u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x119;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    bVar1 = F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_004423a0 */
byte F_004423a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4423a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x70);
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x74);
    (*(undefined1 *)(gen_frame + 0x29)) = (undefined1)param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xca;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    (*(undefined1 *)(gen_frame + 0x28)) = 4;
    bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00442450 */
byte F_00442450(unsigned int gen_a0)
{
  GEN_ENTER(0x442450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar4 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar2 != 0 || iVar1 != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      if (this_00 != (undefined *)0x0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0x10e;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
        (*(int *)(gen_frame + 0x20)) = iVar2;
        (*(int *)(gen_frame + 0x24)) = iVar1;
        bVar3 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        if (bVar3 != 0) {
          F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
          return 1;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00442510 */
uint F_00442510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x442510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte * pbVar5;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  undefined4 * puVar9;
  uint uVar10;
  undefined4 * puVar11;
  bool bVar12;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  iVar6 = *(int *)(uVar4 + 0x34);
  uVar4 = 0;
  if (iVar6 != 0) {
    iVar1 = *(int *)(iVar6 + 0x18);
    uVar2 = *(uint *)(iVar6 + 0x1c);
    uVar4 = uVar2;
    if (iVar1 != 0 || uVar2 != 0) {
      uVar10 = 0;
      pbVar8 = (byte *)((int)this + 0xcc);
      pbVar5 = param_1;
      pbVar7 = pbVar8;
LAB_00442575: ;
      bVar3 = *pbVar5;
      bVar12 = bVar3 < *pbVar8;
      if (bVar3 == *pbVar8) {
        if (bVar3 != 0) {
          bVar3 = pbVar5[1];
          bVar12 = bVar3 < pbVar8[1];
          if (bVar3 != pbVar8[1]) goto LAB_00442595;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
          if (bVar3 != 0) goto LAB_00442575;
        }
        uVar4 = 0;
      }
      else {
LAB_00442595: ;
        uVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (uVar4 != 0) goto code_r0x0044259e;
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      uVar4 = 0;
      if (this_00 != (undefined *)0x0) {
        (*(int *)(gen_frame + 0x20)) = iVar1;
        (*(uint *)(gen_frame + 0x24)) = uVar2;
        (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + uVar10 * 0x38 + 0xb8);
        (*(undefined4 *)(gen_frame + 0x8)) = 0x10f;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
        (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)((int)this + uVar10 * 0x38 + 0xbc);
        puVar9 = (undefined4 *)((int)this + uVar10 * 0x38 + 0xcc);
        puVar11 = ((undefined4 *)(gen_frame + 0x30));
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        bVar3 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        uVar4 = CONCAT31(extraout_var,bVar3);
        if (bVar3 != 0) {
          uVar4 = CONCAT31(extraout_var,1);
          goto LAB_004425a9;
        }
      }
    }
  }
LAB_004425a7: ;
  uVar4 = uVar4 & 0xffffff00;
LAB_004425a9: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar4;
code_r0x0044259e: ;
  uVar10 = uVar10 + 1;
  pbVar8 = pbVar7 + 0x38;
  pbVar5 = param_1;
  pbVar7 = pbVar8;
  if (2 < uVar10) goto LAB_004425a7;
  goto LAB_00442575;
}

/* ref: FUN_00442660 */
uint F_00442660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x442660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int * piVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  iVar6 = *(int *)(uVar4 + 0x34);
  piVar5 = (int *)0x0;
  if (iVar6 != 0) {
    iVar1 = *(int *)(iVar6 + 0x18);
    piVar2 = *(int * PTR32 *)(iVar6 + 0x1c);
    piVar5 = piVar2;
    if (iVar1 != 0 || piVar2 != (int *)0x0) {
      uVar4 = 0;
      piVar5 = (int *)((int)this + 0xb8);
LAB_004426c0: ;
      if ((*piVar5 != param_1) || (piVar5[1] != param_2)) goto LAB_004426cf;
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      piVar5 = (int *)0x0;
      if (this_00 != (undefined *)0x0) {
        (*(int *)(gen_frame + 0x20)) = iVar1;
        (*(int * PTR32 *)(gen_frame + 0x24)) = piVar2;
        (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + uVar4 * 0x38 + 0xb8);
        (*(undefined4 *)(gen_frame + 0x8)) = 0x10f;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
        (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)((int)this + uVar4 * 0x38 + 0xbc);
        puVar7 = (undefined4 *)((int)this + uVar4 * 0x38 + 0xcc);
        puVar8 = ((undefined4 *)(gen_frame + 0x30));
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        bVar3 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        piVar5 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
        if (bVar3 != 0) {
          uVar4 = CONCAT31(extraout_var,1);
          goto LAB_004426da;
        }
      }
    }
  }
LAB_004426d8: ;
  uVar4 = (uint)piVar5 & 0xffffff00;
LAB_004426da: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar4;
LAB_004426cf: ;
  uVar4 = uVar4 + 1;
  piVar5 = piVar5 + 0xe;
  if (2 < uVar4) goto LAB_004426d8;
  goto LAB_004426c0;
}

/* ref: FUN_00442790 */
byte F_00442790(unsigned int gen_a0)
{
  GEN_ENTER(0x442790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar4 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar2 != 0 || iVar1 != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      if (this_00 != (undefined *)0x0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0x118;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
        (*(int *)(gen_frame + 0x20)) = iVar2;
        (*(int *)(gen_frame + 0x24)) = iVar1;
        bVar3 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        if (bVar3 != 0) {
          F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
          return 1;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00442850 */
uint F_00442850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x442850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * puVar1;
  uint uVar2;
  undefined * this_00;
  undefined * this_01;
  ulonglong uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)((int)this + 0x70) = param_1;
  *(undefined4 *)((int)this + 0x74) = param_2;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = &REFG(undefined, 0x108d08b);
  }
  F_0042e430((undefined *)((int)this + 0x1c),puVar1);
  uVar4 = 3;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00763050(uVar2,uVar4);
  this_01 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_01 == (undefined *)0x0) {
    uVar3 = F_0046ff40();
    uVar2 = (uint)(uVar3 / 1000);
  }
  else {
    uVar2 = F_00975680(this_01);
  }
  F_00771140(this_00,param_3,param_4 - uVar2);
  F_00a6e080(&REFG(undefined, 0x14a9e40),0x71,0,0);
  uVar2 = F_00a6e080(&REFG(undefined, 0x14a9e40),0x5b,0,0);
  return uVar2;
}

/* ref: FUN_004428f0 */
uint F_004428f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4428f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined * puVar3;
  undefined4 uVar4;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  if (*(int *)(uVar1 + 0x34) != 0) {
    uVar4 = 0x40;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar2 = (int *)F_00763050(uVar1,uVar4);
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      if ((char)uVar1 != '\0') {
        uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
        return uVar1;
      }
    }
    *(char *)((int)this + 0x78) = *(char *)((int)this + 0x78) + '\x01';
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    if ((*(int *)(uVar1 + 0x34) == 0) ||
       (puVar3 = ((undefined *)GEN_TOP((*(int *)(uVar1 + 0x34) + 0x44))), puVar3 == (undefined *)0x0)) {
      puVar3 = &REFG(undefined, 0x108d0ab);
    }
    uVar4 = 3;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    this_00 = (undefined *)F_00763050(uVar1,uVar4);
    uVar1 = F_00771260(this_00,puVar3,(param_2 & 0xff) - 1);
  }
  return uVar1;
}

/* ref: FUN_00442980 */
uint F_00442980(unsigned int gen_a0)
{
  GEN_ENTER(0x442980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  ushort * puVar5;
  undefined4 uVar6;
  int local_8;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  iVar2 = *(int *)(uVar3 + 0x34);
  uVar6 = 3;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00763050(uVar3,uVar6);
  if (this_00 != (undefined *)0x0) {
    F_00771380(this_00);
  }
  uVar6 = 0x40;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar4 = (int *)F_00763050(uVar3,uVar6);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xd8))))(*(int * PTR32 *)((int)this + 4),0x1d4f3,1,0,0xffffffff);
  uVar3 = F_00ab4190(1);
  if (uVar3 != 0) {
    puVar5 = (ushort *)(uVar3 + 8);
    local_8 = 3;
    do {
      if ((*puVar5 != 0) &&
         (((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xf0))))
                    (*(int * PTR32 *)((int)this + 4),0xffffffff,(uint)*puVar5), iVar2 != 0)) {
        uVar1 = *puVar5;
        if (uVar1 == 1) {
          uVar6 = 0x74;
        }
        else if (uVar1 == 2) {
          uVar6 = 0x75;
        }
        else {
          if (uVar1 != 4) goto LAB_00442a4c;
          uVar6 = 0x76;
        }
        F_00a6e080(&REFG(undefined, 0x14a9e40),uVar6,0,0);
      }
LAB_00442a4c: ;
      puVar5 = puVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  F_00a6e080(&REFG(undefined, 0x14a9e40),0x72,0,0);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  return uVar3;
}

/* ref: FUN_00442a80 */
unsigned int F_00442a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x442a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 3;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    this_00 = (undefined *)F_00763050(uVar1,uVar3);
    if (this_00 != (undefined *)0x0) {
      F_00771380(this_00);
    }
    uVar3 = 0x40;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar2 = (int *)F_00763050(uVar1,uVar3);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    piVar2 = *(int * PTR32 *)(uVar1 + 0x34);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  return 0;
}

/* ref: FUN_00442af0 */
uint F_00442af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x442af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_004373c0(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00442b10 */
unsigned int F_00442b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x442b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  if (param_4 == 0) {
    F_004373c0(this,param_1,param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00442b30 */
uint F_00442b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x442b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  if (*(int *)(uVar2 + 0x48) == 0 && *(int *)(uVar2 + 0x4c) == 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 8) + 8))) == 0) {
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 0x18)));
      uVar5 = *puVar1;
      uVar4 = puVar1[1];
    }
    *(undefined4 *)(uVar2 + 0x48) = uVar5;
    *(undefined4 *)(uVar2 + 0x4c) = uVar4;
  }
  if ((param_1 == *(int *)(uVar2 + 0x48)) && (param_2 == *(int *)(uVar2 + 0x4c))) {
    uVar5 = 3;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    this_00 = (undefined *)F_00763050(uVar2,uVar5);
    if (this_00 != (undefined *)0x0) {
      F_00771380(this_00);
    }
    uVar5 = 0x40;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar3 = (int *)F_00763050(uVar2,uVar5);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    piVar3 = *(int * PTR32 *)(uVar2 + 0x34);
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      return uVar2;
    }
  }
  else {
    uVar2 = F_004373c0(this,param_1,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_00442bf0 */
unsigned int F_00442bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x442bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 3;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    this_00 = (undefined *)F_00763050(uVar1,uVar3);
    if (this_00 != (undefined *)0x0) {
      F_00771380(this_00);
    }
    uVar3 = 0x40;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar2 = (int *)F_00763050(uVar1,uVar3);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    piVar2 = *(int * PTR32 *)(uVar1 + 0x34);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  return 0;
}

/* ref: FUN_00442c60 */
unsigned int F_00442c60(unsigned int gen_a0)
{
  GEN_ENTER(0x442c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 uVar3;
  
  uVar3 = 3;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00763050(uVar1,uVar3);
  if (this_00 != (undefined *)0x0) {
    F_00771380(this_00);
  }
  uVar3 = 0x40;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = (int *)F_00763050(uVar1,uVar3);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x34);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    return 0;
  }
  return 0;
}

/* ref: FUN_00442cd0 */
uint F_00442cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x442cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  int * this_00;
  undefined * this_01;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x40;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (int *)F_00763050(uVar2,uVar5);
  uVar2 = 0;
  if ((this_00 != (int *)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00), (char)uVar2 != '\0')) {
    this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_0043f9f0(this_01);
    iVar3 = (int)(uVar4 >> 0x20);
    if ((*(int *)((int)this + 0x80) == (int)uVar4) && (*(int *)((int)this + 0x84) == iVar3)) {
      *(undefined4 *)((int)this + 0x88) = *param_1;
      *(undefined4 *)((int)this + 0x8c) = param_1[1];
    }
    else {
      uVar2 = 0;
      do {
        if ((*(int *)((int)this + uVar2 * 0x38 + 0xb8) == (int)uVar4) &&
           (*(int *)((int)this + uVar2 * 0x38 + 0xbc) == iVar3)) {
          *(undefined4 *)((int)this + uVar2 * 0x38 + 0xc0) = *param_1;
          *(undefined4 *)((int)this + uVar2 * 0x38 + 0xc4) = param_1[1];
          break;
        }
        bVar1 = (char)uVar2 + 1;
        uVar2 = (uint)bVar1;
      } while (bVar1 < 3);
    }
    uVar2 = F_0082b9b0(this_00,(int *)((int)this + 0x80),(int)this + 0xb8);
  }
  return uVar2;
}

/* ref: FUN_00442dc0 */
uint F_00442dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x442dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  *(undefined4 *)((int)this + 0xc) = 0xb002a2e;
  uVar1 = F_00406bb0(0x58,0,0);
  *(uint *)((int)this + 0x10) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  F_0042b630((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090ba8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1090ba0));
  return (uint)this;
}

/* ref: FUN_00442e30 */
uint F_00442e30(unsigned int gen_a0)
{
  GEN_ENTER(0x442e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090ba8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1090ba0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880((undefined *)((int)this + 0x24));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyInvite::vf7 */
uint F_00442e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x442e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar3 = F_00438660(this,param_1);
  uVar2 = 0;
  if (uVar3 != 0) {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    uVar2 = 0;
    if (this_00 != (undefined *)0x0) {
      (*(undefined1 *)(gen_frame + 0x29)) = (undefined1)param_2;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xca;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
      (*(ulonglong *)(gen_frame + 0x20)) = uVar3;
      (*(undefined1 *)(gen_frame + 0x28)) = 5;
      bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = CONCAT31(extraout_var,1);
        goto LAB_00442f04;
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00442f04: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_00442f20 */
byte F_00442f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x442f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      iVar4 = 0;
      iVar3 = 0;
      goto LAB_00442f42;
    }
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + uVar2 * 8)));
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + uVar2 * 8)));
LAB_00442f42: ;
      if ((iVar4 == param_1) && (iVar3 == param_2)) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_00442f70 */
uint F_00442f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x442f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  byte bVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  undefined * puVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  
  puVar3 = param_1;
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,(uint)*(byte *)((int)this + 0x10));
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,(uint)*(byte *)((int)this + 0x11));
  ((byte *)(gen_frame + 0x0))[8] = (char)uVar6;
  ((byte *)(gen_frame + 0x0))[9] = (char)(uVar6 >> 8);
  ((byte *)(gen_frame + 0x0))[10] = (char)(uVar6 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0xb] = (char)(uVar6 >> 0x18);
  if ((uVar5 != 0) && (uVar6 != 0)) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4))));
    uVar10 = F_0043f9f0(this_00);
    uVar6 = F_004361a0(this,(int)uVar10,(int)(uVar10 >> 0x20));
    ((byte *)(gen_frame + 0x0))[0xc] = (char)uVar6;
    ((byte *)(gen_frame + 0x0))[0xd] = (char)(uVar6 >> 8);
    ((byte *)(gen_frame + 0x0))[0xe] = (char)(uVar6 >> 0x10);
    ((byte *)(gen_frame + 0x0))[0xf] = (char)(uVar6 >> 0x18);
    if ((-1 < (int)uVar6) && (uVar6 < *(uint *)((int)this + 8))) {
      iVar9 = *(int *)((int)this + 0x18) + uVar6 * 0x48;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = iVar9;
      if (iVar9 != 0) {
        *(uint *)(iVar9 + 8) = *param_1;
        *(uint *)(iVar9 + 0xc) = param_1[1];
        *(undefined1 *)(iVar9 + 0x18) = *(undefined1 *)((int)param_1 + 0x15);
        uVar8 = *param_1 & 0x800000;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        ((byte *)(gen_frame + 0x0))[0] = (char)uVar8;
        ((byte *)(gen_frame + 0x0))[1] = (char)(uVar8 >> 8);
        ((byte *)(gen_frame + 0x0))[2] = (char)(uVar8 >> 0x10);
        ((byte *)(gen_frame + 0x0))[3] = (char)(uVar8 >> 0x18);
        bVar2 = REFG(undefined1, 0x14ab0d4);
        if (uVar8 != 0) {
          bVar2 = (byte)param_1[5];
        }
        param_1 = (uint *)(uint)bVar2;
        uVar8 = F_00a68280(&REFG(undefined1, 0x14ab070),param_1,1);
        if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + uVar6 * 0x20))) != (uVar8 & 0xffff)) {
          *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + uVar6 * 0x20))) = uVar8 & 0xffff;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        if (param_1 == (uint *)0x0) {
          iVar9 = -1;
        }
        else {
          iVar9 = (int)param_1 + 62000;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + uVar6 * 0x20))) != iVar9) {
          *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + uVar6 * 0x20))) = iVar9;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        uVar8 = F_007c9a80(*puVar3,puVar3[1],*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 0x10))),((byte *)(gen_frame + 0x0)) + 0x10,
                             &(*(undefined * PTR32 *)(gen_frame + 0x18)));
        puVar1 = ((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + uVar6 * 0x20)));
        if (*puVar1 != uVar8) {
          *puVar1 = uVar8;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x10 + uVar6 * 0x20))) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x10 + uVar6 * 0x20))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        puVar7 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        if ((*(undefined * PTR32 *)(gen_frame + 0x18)) == (undefined *)0x0) {
          puVar7 = &REFG(undefined, 0x108d0c6);
        }
        F_00431250((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) * 5 + 3,puVar7,0,1,0);
        if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x14 + uVar6 * 0x20))) !=
            (uint)*(byte *)((int)puVar3 + 0x15)) {
          *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x14 + uVar6 * 0x20))) =
               (uint)*(byte *)((int)puVar3 + 0x15);
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        puVar1 = ((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1c + uVar6 * 0x20)));
        uVar6 = -(uint)(*(char *)((int)puVar3 + 0x16) != '\0') & 0x20;
        if (*puVar1 != uVar6) {
          *puVar1 = uVar6;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00443140 */
byte F_00443140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x443140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (*(int *)((int)this + 0x20) != 0 || *(int *)((int)this + 0x24) != 0) {
    uVar5 = F_00437a70(this,param_1);
    if (uVar5 != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      if (this_00 != (undefined *)0x0) {
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x20);
        (*(ulonglong *)(gen_frame + 0x28)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x24);
        (*(undefined4 *)(gen_frame + 0x8)) = 0x10f;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
        puVar3 = param_1;
        puVar4 = ((undefined4 *)(gen_frame + 0x30));
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        if (bVar1 != 0) {
          bVar1 = 1;
          goto LAB_00443209;
        }
      }
    }
  }
  bVar1 = 0;
LAB_00443209: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return bVar1;
}

/* ref: FUN_004432e0 */
byte F_004432e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4432e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if ((*(int *)((int)this + 0x20) != 0 || *(int *)((int)this + 0x24) != 0) &&
     (param_1 != 0 || param_2 != 0)) {
    uVar2 = F_004360f0(this,param_1,param_2,0);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      if (this_00 != (undefined *)0x0) {
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = F_00470b60(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x20),
                             *(undefined4 *)((int)this + 0x24),param_1,param_2,uVar2 + 0x1c);
        bVar1 = F_00974da0(this_00,uVar2,uVar3,uVar4);
        if (bVar1 != 0) {
          bVar1 = 1;
          goto LAB_0044338d;
        }
      }
    }
  }
  bVar1 = 0;
LAB_0044338d: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return bVar1;
}

/* ref: FUN_004433b0 */
byte F_004433b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4433b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (*(int *)((int)this + 0x20) != 0 || *(int *)((int)this + 0x24) != 0) {
    uVar5 = F_00437a70(this,param_1);
    if (uVar5 != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      if (this_00 != (undefined *)0x0) {
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x20);
        (*(ulonglong *)(gen_frame + 0x28)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x24);
        (*(undefined4 *)(gen_frame + 0x8)) = 0x11f;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
        puVar3 = param_1;
        puVar4 = ((undefined4 *)(gen_frame + 0x30));
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        if (bVar1 != 0) {
          bVar1 = 1;
          goto LAB_00443479;
        }
      }
    }
  }
  bVar1 = 0;
LAB_00443479: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return bVar1;
}

/* ref: FUN_00443490 */
byte F_00443490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x443490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if ((*(int *)((int)this + 0x20) != 0 || *(int *)((int)this + 0x24) != 0) &&
     (param_1 != 0 || param_2 != 0)) {
    uVar2 = F_004360f0(this,param_1,param_2,0);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      if (this_00 != (undefined *)0x0) {
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = F_00470e50(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x20),
                             *(undefined4 *)((int)this + 0x24),param_1,param_2,uVar2 + 0x1c);
        bVar1 = F_00974da0(this_00,uVar2,uVar3,uVar4);
        if (bVar1 != 0) {
          bVar1 = 1;
          goto LAB_0044353d;
        }
      }
    }
  }
  bVar1 = 0;
LAB_0044353d: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return bVar1;
}

/* ref: FUN_00443560 */
byte F_00443560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x443560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (*(char *)((int)this + 0x30) != '\0') {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0x20)) = param_1;
      (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_3;
      (*(undefined4 *)(gen_frame + 0x24)) = param_2;
      (*(undefined1 *)(gen_frame + 0x2b)) = (undefined1)param_5;
      (*(undefined1 *)(gen_frame + 0x2a)) = (undefined1)param_4;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xcb;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
      (*(undefined1 *)(gen_frame + 0x2c)) = (undefined1)param_6;
      bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar1 != 0) {
        F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
        return 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: Client::UI::Info::InfoProxyFriendlist::vf4 */
byte F_00443630(unsigned int gen_a0)
{
  GEN_ENTER(0x443630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  pvVar2 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (pvVar2 != (undefined *)0x0) {
    this[0xd] = this[0xc];
    this[0xc] = (undefined1)((char)this[0xc] + '\x01');
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    (*(undefined2 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xcb;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    (*(undefined1 *)(gen_frame + 0x2a)) = 0xb;
    (*(undefined1 *)(gen_frame + 0x2b)) = this[0xd];
    bVar1 = F_00974da0(pvVar2,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      this[0x1c] = (undefined1)0x0;
      *(undefined2 *)(this + 0x88) = 0x100;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,(uint)(byte)this[0x10]);
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(uint)(byte)this[0x11]);
      if ((uVar4 != 0) && (uVar5 != 0)) {
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1908))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1908))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4));
        if (*(int *)(uVar4 + 600) == 0) {
          uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x34) + 8))))(*(int * PTR32 *)(uVar4 + 0x34),"Addon");
          *(uint *)(uVar4 + 600) = uVar6;
        }
        piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 600) + 0x24))))(*(int * PTR32 *)(uVar4 + 600),299)));
        uVar7 = 0;
        pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
        uVar4 = F_00cb0950(pvVar2,uVar7);
        if (uVar4 != **(uint * PTR32 *)(uVar5 + 0x20)) {
          **(uint * PTR32 *)(uVar5 + 0x20) = uVar4;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
      }
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: Client::UI::Info::InfoProxyFriendlist::vf7 */
uint F_004437d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4437d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  code * pcVar3;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (this[0xd] == *(undefined *)((int)param_1 + 0xd)) {
    if (*(short *)((int)param_1 + 10) == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 + 4,10);
    if (*(short *)(param_1 + 2) != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      uVar2 = 0;
      if (this_00 != (undefined *)0x0) {
        (*(undefined4 *)(gen_frame + 0x20)) = *param_1;
        (*(undefined4 *)(gen_frame + 0x24)) = param_1[1];
        (*(undefined2 *)(gen_frame + 0x28)) = *(undefined2 *)(param_1 + 2);
        (*(undefined1 *)(gen_frame + 0x2b)) = *(undefined1 *)((int)param_1 + 0xd);
        (*(undefined1 *)(gen_frame + 0x2a)) = *(undefined1 *)(param_1 + 3);
        (*(undefined4 *)(gen_frame + 0x8)) = 0xcb;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
        (*(undefined1 *)(gen_frame + 0x2c)) = *(undefined1 *)((int)param_1 + 0xe);
        bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        uVar2 = CONCAT31(extraout_var,bVar1);
      }
      goto LAB_004438ac;
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x14);
  }
  else {
    pcVar3 = *(gen_code32 *)(*(int *)this + 0xc);
  }
  uVar2 = (*pcVar3)(this);
LAB_004438ac: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_004438d0 */
uint F_004438d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4438d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xc9;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
    (*(undefined1 *)(gen_frame + 0x20)) = 2;
    puVar3 = param_1;
    puVar4 = ((undefined4 *)(gen_frame + 0x21));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar1 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_00443960 */
uint F_00443960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x443960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar5 = F_00435f70(this,param_1);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if ((this_00 == (undefined *)0x0) || (uVar5 == 0)) {
    uVar1 = (uint)this_00 & 0xffffff00;
  }
  else {
    (*(ulonglong *)(gen_frame + 0x20)) = uVar5;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xe6;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
    puVar3 = param_1;
    puVar4 = ((undefined4 *)(gen_frame + 0x28));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar1 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_00443a10 */
uint F_00443a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x443a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  uint uVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  if (param_1 < uVar1) {
    uVar1 = *(uint *)((int)this + 0x18);
    iVar3 = param_1 * 0x48;
    if (*(int *)(iVar3 + uVar1) != 0 || *(int *)(iVar3 + 4 + uVar1) != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      uVar1 = 0;
      if (this_00 != (undefined *)0x0) {
        iVar2 = *(int *)((int)this + 0x18) + iVar3;
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar2 + 4);
        (*(undefined4 *)(gen_frame + 0x8)) = 0xe6;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
        (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar3)));
        puVar4 = (undefined4 *)(iVar2 + 0x1c);
        puVar5 = ((undefined4 *)(gen_frame + 0x28));
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        uVar1 = CONCAT31(extraout_var,1);
        goto LAB_00443abf;
      }
    }
  }
  uVar1 = uVar1 & 0xffffff00;
LAB_00443abf: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_00443ae0 */
uint F_00443ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x443ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = F_00435f70(this,param_1);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if ((this_00 == (undefined *)0x0) || (uVar2 == 0)) {
    uVar1 = (uint)this_00 & 0xffffff00;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xca;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    (*(ulonglong *)(gen_frame + 0x20)) = uVar2;
    (*(undefined1 *)(gen_frame + 0x28)) = 2;
    (*(undefined1 *)(gen_frame + 0x29)) = (undefined1)param_2;
    F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar1 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_00443b90 */
uint F_00443b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x443b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int iVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  if (param_1 < uVar2) {
    uVar2 = *(uint *)((int)this + 0x18);
    iVar1 = param_1 * 0x48;
    if (*(int *)(iVar1 + uVar2) != 0 || *(int *)(iVar1 + 4 + uVar2) != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      uVar2 = 0;
      if (this_00 != (undefined *)0x0) {
        (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP((iVar1 + 4 + *(int *)((int)this + 0x18))));
        (*(undefined4 *)(gen_frame + 0x8)) = 0xca;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
        (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x18))));
        (*(undefined1 *)(gen_frame + 0x28)) = 2;
        (*(undefined1 *)(gen_frame + 0x29)) = (undefined1)param_2;
        F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        uVar2 = CONCAT31(extraout_var,1);
        goto LAB_00443c3e;
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00443c3e: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: Client::UI::Info::InfoProxyItemSearch::vf4 */
byte F_00443c60(unsigned int gen_a0)
{
  GEN_ENTER(0x443c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x10);
    (*(undefined1 *)(gen_frame + 0x24)) = this[0x14];
    (*(undefined1 *)(gen_frame + 0x25)) = this[0x15];
    (*(undefined4 *)(gen_frame + 0x8)) = 0x104;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: Client::UI::Info::InfoProxyItemSearch::vf7 */
uint F_00443d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x443d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  code * pcVar3;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (this[0xd] == *(undefined *)(param_1 + 0x462)) {
    if (*(char *)(param_1 + 0x461) == '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1,10);
    if (*(char *)(param_1 + 0x460) != '\0') {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      uVar2 = 0;
      if (this_00 != (undefined *)0x0) {
        (*(undefined1 *)(gen_frame + 0x20)) = *(undefined1 *)(param_1 + 0x460);
        (*(undefined4 *)(gen_frame + 0x8)) = 0x105;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
        (*(undefined1 *)(gen_frame + 0x21)) = *(undefined1 *)(param_1 + 0x462);
        bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        uVar2 = CONCAT31(extraout_var,bVar1);
      }
      goto LAB_00443dcc;
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x14);
  }
  else {
    pcVar3 = *(gen_code32 *)(*(int *)this + 0xc);
  }
  uVar2 = (*pcVar3)(this);
LAB_00443dcc: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_00443df0 */
unsigned int F_00443df0(unsigned int gen_a0)
{
  GEN_ENTER(0x443df0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined2 *)(in_ecx + 0x14) = 0x902;
  return 0;
}

/* ref: FUN_00443e00 */
byte F_00443e00(unsigned int gen_a0)
{
  GEN_ENTER(0x443e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x1920);
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x1924);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x1928);
    (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)((int)this + 0x192c);
    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)((int)this + 0x1930);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x1934);
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)((int)this + 0x1938);
    (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)((int)this + 0x193c);
    (*(undefined2 *)(gen_frame + 0x40)) = *(undefined2 *)((int)this + 0x1940);
    (*(undefined1 *)(gen_frame + 0x42)) = *(undefined1 *)((int)this + 0x1942);
    (*(undefined1 *)(gen_frame + 0x43)) = *(undefined1 *)((int)this + 0x1943);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x107;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
    bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00443f20 */
byte F_00443f20(void)
{
  GEN_ENTER(0x443f20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x106;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    bVar1 = F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00443fb0 */
byte F_00443fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x443fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (*(int *)((int)this + 0x1c90) != 0 || *(int *)((int)this + 0x1c94) != 0) {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x1c90);
      (*(undefined4 *)(gen_frame + 0x8)) = 0x108;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x1c94);
      bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar1 != 0) {
        F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
        return 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: Client::UI::Info::InfoProxyLetter::vf3 */
uint F_00444060(unsigned int gen_a0)
{
  GEN_ENTER(0x444060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined1 *)(in_ecx + 0x51b8) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  return 0;
}

/* ref: Client::UI::Info::InfoProxyLetter::vf4 */
byte F_00444080(unsigned int gen_a0)
{
  GEN_ENTER(0x444080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    this[0xd] = this[0xc];
    this[0xc] = (undefined1)((char)this[0xc] + '\x01');
    (*(undefined1 *)(gen_frame + 0x21)) = this[0xd];
    (*(undefined4 *)(gen_frame + 0x8)) = 0xfc;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      *(undefined4 *)(this + 8) = 0;
      this[0x51b8] = (undefined1)0x0;
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: Client::UI::Info::InfoProxyLetter::vf7 */
uint F_00444130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x444130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (this[0xd] == *(undefined *)(param_1 + 0x322)) {
    if (*(char *)(param_1 + 0x321) == '\0') {
      *(undefined4 *)(this + 8) = 0;
      this[0x51b8] = (undefined1)0x0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1,5);
    if (*(char *)(param_1 + 800) == '\0') {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
    }
    else {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      uVar2 = 0;
      if (this_00 != (undefined *)0x0) {
        (*(undefined1 *)(gen_frame + 0x20)) = *(undefined1 *)(param_1 + 800);
        (*(undefined4 *)(gen_frame + 0x8)) = 0xfc;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
        (*(undefined1 *)(gen_frame + 0x21)) = *(undefined1 *)(param_1 + 0x322);
        bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        uVar2 = CONCAT31(extraout_var,bVar1);
      }
    }
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(this + 8) = 0;
    this[0x51b8] = (undefined1)0x0;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_00444210 */
byte F_00444210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x444210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xea0];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xe8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe90);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 == (undefined *)0x0) {
    bVar1 = 0;
  }
  else {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4));
    F_00a26b90((undefined *)(uVar2 + 0x1b8),param_3,((undefined4 *)(gen_frame + 0xc28)),0x259);
    (*(undefined4 *)(gen_frame + 0x20)) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xfa;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x2c0;
    (*(undefined4 *)(gen_frame + 0x24)) = param_2;
    puVar4 = param_5;
    puVar5 = ((undefined4 *)(gen_frame + 0x28));
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = ((undefined4 *)(gen_frame + 0xc28));
    puVar5 = ((undefined4 *)(gen_frame + 0x70));
    for (iVar3 = 0x96; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    (*(undefined1 *)(gen_frame + 0x2c9)) = (undefined1)param_4;
    F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    bVar1 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8c)) ^ (uint)(uint)(gen_frame + 0xe90));
  return bVar1;
}

/* ref: FUN_00444300 */
byte F_00444300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x444300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 * puVar1;
  byte bVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (*(int *)((int)this + 0x5160) < 0) {
    pvVar3 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if ((pvVar3 != (undefined *)0x0) && (param_1 < *(uint *)((int)this + 8))) {
      puVar1 = (undefined4 *)(param_1 * 0xa0 + 0x20 + (int)this);
      (*(undefined4 *)(gen_frame + 0x20)) = *puVar1;
      (*(undefined4 *)(gen_frame + 0x24)) = puVar1[1];
      (*(undefined4 *)(gen_frame + 0x8)) = 0xfd;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
      (*(undefined4 *)(gen_frame + 0x28)) = puVar1[2];
      (*(undefined1 *)(gen_frame + 0x2c)) = 1;
      bVar2 = F_00974da0(pvVar3,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar2 != 0) {
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x12);
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x10)));
        if ((uVar5 != 0) && (pvVar3 != (undefined *)0x0)) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1 + 3;
          iVar7 = 0x224;
          do {
            uVar6 = F_00ab65a0(*(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
            if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar7))) != uVar6) {
              *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar7))) = uVar6;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 2;
            iVar7 = iVar7 + 4;
          } while (iVar7 < 0x238);
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x220))) != puVar1[0xe]) {
            *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x220))) = puVar1[0xe];
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          F_00431250(pvVar3,0x187,&REFG(undefined, 0x108d0d7),0,1,0);
        }
        *(uint *)((int)this + 0x5160) = param_1;
        bVar2 = 1;
        goto LAB_0044449c;
      }
    }
  }
  bVar2 = 0;
LAB_0044449c: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return bVar2;
}

/* ref: FUN_004444c0 */
byte F_004444c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4444c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 * puVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if ((this_00 != (undefined *)0x0) && (param_1 < *(uint *)((int)this + 8))) {
    puVar1 = (undefined4 *)(param_1 * 0xa0 + 0x20 + (int)this);
    (*(undefined4 *)(gen_frame + 0x20)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x24)) = puVar1[1];
    (*(undefined4 *)(gen_frame + 0x8)) = 0xfb;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    (*(undefined4 *)(gen_frame + 0x28)) = puVar1[2];
    F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00444580 */
uint F_00444580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x444580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (param_2 < *(uint *)(in_ecx + 8)) {
    iVar1 = param_2 * 0xa0 + 0x20 + in_ecx;
    uVar2 = (uint)(*(int *)(iVar1 + 0x38) != 0);
    if (*(int *)(iVar1 + 0xc) != 0) {
      uVar2 = uVar2 + 1;
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      uVar2 = uVar2 + 1;
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      uVar2 = uVar2 + 1;
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      uVar2 = uVar2 + 1;
    }
    if (*(int *)(iVar1 + 0x2c) != 0) {
      return uVar2 + 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_004445d0 */
uint F_004445d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4445d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc70];
  undefined * pvVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xc5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc60);
  pvVar1 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar1;
  uVar2 = 0;
  if ((pvVar1 == (undefined *)0x0) || (uVar2 = param_1, *(uint *)((int)this + 8) <= param_1)) {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    puVar4 = (undefined4 *)(param_1 * 0xa0 + 0x20 + (int)this);
    F_00c48350(((undefined4 *)(gen_frame + 0x4)),0,0x30);
    if (param_2 < 0) {
      ((undefined4 *)(gen_frame + 0x4))[0] = puVar4[3];
      ((undefined4 *)(gen_frame + 0x4))[1] = puVar4[4];
      ((undefined4 *)(gen_frame + 0x4))[2] = puVar4[5];
      ((undefined4 *)(gen_frame + 0x4))[3] = puVar4[6];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar4[7];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar4[8];
      (*(undefined4 *)(gen_frame + 0x1c)) = puVar4[9];
      (*(undefined4 *)(gen_frame + 0x20)) = puVar4[10];
      (*(undefined4 *)(gen_frame + 0x24)) = puVar4[0xb];
      (*(undefined4 *)(gen_frame + 0x28)) = puVar4[0xc];
      (*(undefined4 *)(gen_frame + 0x2c)) = puVar4[0xd];
      (*(undefined4 *)(gen_frame + 0x30)) = puVar4[0xe];
    }
    else {
      ((undefined4 *)(gen_frame + 0x4))[0] = puVar4[param_2 * 2 + 3];
      ((undefined4 *)(gen_frame + 0x4))[1] = puVar4[param_2 * 2 + 4];
    }
    (*(undefined4 *)(gen_frame + 0x50)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x38)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0x50;
    (*(undefined4 *)(gen_frame + 0x54)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x58)) = puVar4[2];
    puVar4 = ((undefined4 *)(gen_frame + 0x4));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    F_00974da0((*(undefined * PTR32 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),0,0);
    uVar2 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc5c)) ^ (uint)(uint)(gen_frame + 0xc60));
  return uVar2;
}

/* ref: FUN_00444740 */
uint F_00444740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x444740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc70];
  undefined * pvVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xc5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc60);
  pvVar1 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar1;
  uVar2 = 0;
  if ((pvVar1 == (undefined *)0x0) || (uVar2 = param_1, *(uint *)((int)this + 8) <= param_1)) {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    puVar4 = (undefined4 *)(param_1 * 0xa0 + 0x20 + (int)this);
    F_00c48350(((undefined4 *)(gen_frame + 0x4)),0,0x30);
    (*(undefined4 *)(gen_frame + 0x50)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x2c)) = puVar4[0xd];
    (*(undefined4 *)(gen_frame + 0x30)) = puVar4[0xe];
    (*(undefined4 *)(gen_frame + 0x38)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0x50;
    (*(undefined4 *)(gen_frame + 0x54)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x58)) = puVar4[2];
    puVar4 = ((undefined4 *)(gen_frame + 0x4));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    F_00974da0((*(undefined * PTR32 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),0,0);
    uVar2 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc5c)) ^ (uint)(uint)(gen_frame + 0xc60));
  return uVar2;
}

/* ref: Client::UI::Info::InfoProxyLinkshell::vf4 */
byte F_00444830(unsigned int gen_a0)
{
  GEN_ENTER(0x444830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xf6;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      this[0x14a] = (undefined1)0x1;
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_004448d0 */
uint F_004448d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4448d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * in_EAX = 0;
  
  if (*(char *)((int)this + 0x149) != '\0') {
    in_EAX = (char *)F_00439390(this,param_1,param_2);
    if ((in_EAX != (char *)0x0) && (*in_EAX == '\0')) {
      in_EAX = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_004449f0 */
unsigned int F_004449f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4449f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 in_ecx;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar3 = F_00414500(in_ecx,0xb7);
  uVar3 = *(uint *)(uVar3 + 0x14);
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(ulonglong *)((int)this + 0x138) = (ulonglong)uVar3 << 0x20;
  uVar3 = F_00414500(in_ecx,0xb8);
  uVar2 = *(uint *)(uVar3 + 0x14);
  puVar1 = (uint *)((int)this + 0x138);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar2;
  *(undefined1 *)((int)this + 0x148) = 0;
  *(int *)((int)this + 0x13c) = *(int *)((int)this + 0x13c) + (uint)CARRY4(uVar3,uVar2);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0xf);
  if (uVar3 != 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1030))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1030))) = 0xffffffff;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x102c))) = 1;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_00444aa0 */
byte F_00444aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x444aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 in_ecx;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0xf);
  if (uVar3 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = (int *)((int)this + 0x78);
    do {
      if (((piVar2[-2] != 0 || piVar2[-1] != 0) && (*piVar2 == param_1)) && (piVar2[1] == param_2))
      {
        if ((char)param_3 == '\0') {
          uVar6 = 0;
          *(undefined4 *)((int)this + 0x130) = 0xffffffff;
          *(undefined4 *)((int)this + 0x138) = 0;
          *(undefined4 *)((int)this + 0x13c) = 0;
          *(undefined4 *)((int)this + 0x140) = 0;
        }
        else {
          *(uint *)((int)this + 0x130) = uVar5;
          *(undefined4 *)((int)this + 0x138) = *(undefined4 *)((int)this + uVar5 * 0x18 + 0x70);
          *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)((int)this + uVar5 * 0x18 + 0x74);
          iVar1 = uVar5 * 3 + 0xf;
          *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + iVar1 * 8);
          uVar6 = *(undefined4 *)((int)this + iVar1 * 8 + 4);
        }
        *(undefined4 *)((int)this + 0x144) = uVar6;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1030))) != *(int *)((int)this + 0x130)) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1030))) = *(int *)((int)this + 0x130);
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x102c))) = 1;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
        uVar6 = *(undefined4 *)((int)this + uVar5 * 0x18 + 0x74);
        in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
        uVar7 = 1;
        pvVar4 = (undefined *)F_00414500(in_ecx,0xb7);
        F_00414a40(pvVar4,uVar6,uVar7);
        uVar6 = *(undefined4 *)((int)this + uVar5 * 0x18 + 0x70);
        uVar7 = 1;
        pvVar4 = (undefined *)F_00414500(in_ecx,0xb8);
        F_00414a40(pvVar4,uVar6,uVar7);
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
        if (*(int *)(uVar3 + 0x44) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x44) + 0x14))) = *(undefined4 *)((int)this + 0x130);
        }
        return 1;
      }
      uVar5 = uVar5 + 1;
      piVar2 = piVar2 + 6;
    } while (uVar5 < *(uint *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00444bf0 */
uint F_00444bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x444bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc90];
  undefined * this_00;
  uint uVar1;
  undefined3 extraout_var = 0;
  char * pcVar2;
  char * pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0xc7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc80);
  pcVar2 = param_1;
  if ((((param_1 != (char *)0x0) && (pcVar2 = param_1, *param_1 != '\0')) &&
      (pcVar2 = param_1, param_2 != (char *)0x0)) && (pcVar2 = param_1, *param_2 != '\0')) {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc20)),param_1,REFG(undefined4, 0x108cc50));
    uVar4 = F_00439070(this,((undefined1 *)(gen_frame + 0xc20)));
    pcVar3 = (char *)(uVar4 >> 0x20);
    F_0042c880(((undefined1 *)(gen_frame + 0xc20)));
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    pcVar2 = (char *)0x0;
    if ((this_00 != (undefined *)0x0) && (pcVar2 = pcVar3, uVar4 != 0)) {
      uVar6 = 0;
      uVar5 = 0;
      uVar1 = F_004706b0(((undefined1 *)(gen_frame + 0x0)),(int)uVar4,pcVar3,param_2);
      F_00974da0(this_00,uVar1,uVar5,uVar6);
      uVar1 = CONCAT31(extraout_var,1);
      goto LAB_00444ca6;
    }
  }
  uVar1 = (uint)pcVar2 & 0xffffff00;
LAB_00444ca6: ;
  F_00c47745((*(uint *)(gen_frame + 0xc7c)) ^ (uint)(uint)(gen_frame + 0xc80));
  return uVar1;
}

/* ref: FUN_00444cc0 */
uint F_00444cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x444cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc90];
  char * this_00;
  undefined3 extraout_var = 0;
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0xc7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc80);
  this_00 = param_1;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc20)),param_1,REFG(undefined4, 0x108cc50));
    uVar2 = F_00439070(this,((undefined1 *)(gen_frame + 0xc20)));
    F_0042c880(((undefined1 *)(gen_frame + 0xc20)));
    this_00 = (char *)F_00424810(REFG(undefined4, 0x137104c));
    if ((this_00 != (char *)0x0) && (uVar2 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0xf1;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
      (*(ulonglong *)(gen_frame + 0x18)) = uVar2;
      F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      uVar1 = CONCAT31(extraout_var,1);
      goto LAB_00444d6a;
    }
  }
  uVar1 = (uint)this_00 & 0xffffff00;
LAB_00444d6a: ;
  F_00c47745((*(uint *)(gen_frame + 0xc7c)) ^ (uint)(uint)(gen_frame + 0xc80));
  return uVar1;
}

/* ref: FUN_00444d80 */
uint F_00444d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x444d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc90];
  char * this_00;
  undefined3 extraout_var = 0;
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0xc7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc80);
  this_00 = param_1;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc20)),param_1,REFG(undefined4, 0x108cc50));
    uVar2 = F_00439070(this,((undefined1 *)(gen_frame + 0xc20)));
    F_0042c880(((undefined1 *)(gen_frame + 0xc20)));
    this_00 = (char *)F_00424810(REFG(undefined4, 0x137104c));
    if ((this_00 != (char *)0x0) && (uVar2 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0xf2;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
      (*(ulonglong *)(gen_frame + 0x18)) = uVar2;
      F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      uVar1 = CONCAT31(extraout_var,1);
      goto LAB_00444e2a;
    }
  }
  uVar1 = (uint)this_00 & 0xffffff00;
LAB_00444e2a: ;
  F_00c47745((*(uint *)(gen_frame + 0xc7c)) ^ (uint)(uint)(gen_frame + 0xc80));
  return uVar1;
}

/* ref: FUN_00444e40 */
byte F_00444e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x444e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int * piVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    piVar1 = (int *)F_00439150(this,param_1,((undefined1 *)(gen_frame + 0x4)));
    if ((piVar1 != (int *)0x0) && ((piVar1[4] & 0x700U) == 0x200)) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      if (this_00 != (undefined *)0x0) {
        if (*piVar1 != 0 || piVar1[1] != 0) {
          (*(int *)(gen_frame + 0x20)) = *piVar1;
          (*(undefined4 *)(gen_frame + 0x8)) = 0xf9;
          (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
          (*(int *)(gen_frame + 0x24)) = piVar1[1];
          F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
          F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
          return 1;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: Client::UI::Info::InfoProxyLinkshellMember::vf7 */
uint F_00444f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x444f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  code * pcVar3;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (this[0xd] == *(undefined *)((int)param_1 + 0xd)) {
    if (*(short *)((int)param_1 + 10) == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 + 4,10);
    if (*(short *)(param_1 + 2) != 0) {
      if (this[0x30] == (undefined1)0x0) {
        this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
        uVar2 = 0;
        if (this_00 != (undefined *)0x0) {
          (*(undefined4 *)(gen_frame + 0x20)) = *param_1;
          (*(undefined4 *)(gen_frame + 0x24)) = param_1[1];
          (*(undefined2 *)(gen_frame + 0x28)) = *(undefined2 *)(param_1 + 2);
          (*(undefined1 *)(gen_frame + 0x2b)) = *(undefined1 *)((int)param_1 + 0xd);
          (*(undefined1 *)(gen_frame + 0x2a)) = *(undefined1 *)(param_1 + 3);
          (*(undefined4 *)(gen_frame + 0x8)) = 0xcb;
          (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
          (*(undefined1 *)(gen_frame + 0x2c)) = *(undefined1 *)((int)param_1 + 0xe);
          bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
          uVar2 = CONCAT31(extraout_var,bVar1);
        }
      }
      goto LAB_00445002;
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x14);
  }
  else {
    pcVar3 = *(gen_code32 *)(*(int *)this + 0xc);
  }
  uVar2 = (*pcVar3)(this);
LAB_00445002: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_00445020 */
uint F_00445020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x445020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  uint uVar7;
  undefined * puVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  
  puVar2 = param_1;
  uVar12 = 0x2d;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar4 = (int *)F_00763050(uVar3,uVar12);
  uVar3 = 0;
  if ((piVar4 != (int *)0x0) && (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4), (char)uVar3 != '\0')
     ) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,(uint)*(byte *)((int)this + 0x10));
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,(uint)*(byte *)((int)this + 0x11));
    ((byte *)(gen_frame + 0x0))[8] = (char)uVar3;
    ((byte *)(gen_frame + 0x0))[9] = (char)(uVar3 >> 8);
    ((byte *)(gen_frame + 0x0))[10] = (char)(uVar3 >> 0x10);
    ((byte *)(gen_frame + 0x0))[0xb] = (char)(uVar3 >> 0x18);
    if ((uVar5 != 0) && (uVar3 != 0)) {
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4))));
      uVar11 = F_0043f9f0(this_00);
      uVar6 = F_004361a0(this,(int)uVar11,(int)(uVar11 >> 0x20));
      ((byte *)(gen_frame + 0x0))[0xc] = (char)uVar6;
      ((byte *)(gen_frame + 0x0))[0xd] = (char)(uVar6 >> 8);
      ((byte *)(gen_frame + 0x0))[0xe] = (char)(uVar6 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0xf] = (char)(uVar6 >> 0x18);
      uVar3 = uVar6;
      if (-1 < (int)uVar6) {
        uVar7 = F_004360d0(this,uVar6);
        ((byte *)(gen_frame + 0x0))[0x14] = (char)uVar7;
        ((byte *)(gen_frame + 0x0))[0x15] = (char)(uVar7 >> 8);
        ((byte *)(gen_frame + 0x0))[0x16] = (char)(uVar7 >> 0x10);
        ((byte *)(gen_frame + 0x0))[0x17] = (char)(uVar7 >> 0x18);
        uVar3 = 0;
        if (uVar7 != 0) {
          *(uint *)(uVar7 + 8) = *param_1;
          *(uint *)(uVar7 + 0xc) = param_1[1];
          *(undefined1 *)(uVar7 + 0x18) = *(undefined1 *)((int)param_1 + 0x15);
          uVar3 = *param_1 & 0x800000;
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
          ((byte *)(gen_frame + 0x0))[0] = (char)uVar3;
          ((byte *)(gen_frame + 0x0))[1] = (char)(uVar3 >> 8);
          ((byte *)(gen_frame + 0x0))[2] = (char)(uVar3 >> 0x10);
          ((byte *)(gen_frame + 0x0))[3] = (char)(uVar3 >> 0x18);
          bVar9 = REFG(undefined1, 0x14ab0d4);
          if (uVar3 != 0) {
            bVar9 = (byte)param_1[5];
          }
          param_1 = (uint *)(uint)bVar9;
          uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070),param_1,1);
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + uVar6 * 0x20))) != (uVar3 & 0xffff)) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + uVar6 * 0x20))) = uVar3 & 0xffff;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (param_1 == (uint *)0x0) {
            iVar10 = -1;
          }
          else {
            iVar10 = (int)param_1 + 62000;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + uVar6 * 0x20))) != iVar10) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + uVar6 * 0x20))) = iVar10;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar3 = F_007c9a80(*puVar2,puVar2[1],*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 0x10))),((byte *)(gen_frame + 0x0)) + 0x10
                               ,&(*(undefined * PTR32 *)(gen_frame + 0x18)));
          puVar1 = ((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + uVar6 * 0x20)));
          if (*puVar1 != uVar3) {
            *puVar1 = uVar3;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x10 + uVar6 * 0x20))) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))) {
            *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x10 + uVar6 * 0x20))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          puVar8 = (*(undefined * PTR32 *)(gen_frame + 0x18));
          if ((*(undefined * PTR32 *)(gen_frame + 0x18)) == (undefined *)0x0) {
            puVar8 = &REFG(undefined, 0x108d0e7);
          }
          F_00431250((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) * 5 + 3,puVar8,0,1,0);
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x14 + uVar6 * 0x20))) !=
              (uint)*(byte *)((int)puVar2 + 0x15)) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x14 + uVar6 * 0x20))) =
                 (uint)*(byte *)((int)puVar2 + 0x15);
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          bVar9 = (byte)((uint)*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 0x10))) >> 8) & 7;
          puVar1 = ((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1c + uVar6 * 0x20)));
          uVar3 = -(uint)(*(char *)((int)puVar2 + 0x16) != '\0') & 0x20 | (bVar9 != 4) - 1 & 0x10 |
                  (bVar9 != 3) - 1 & 8 | (bVar9 != 2) - 1 & 4 | (bVar9 != 1) - 1 & 2;
          if (*puVar1 != uVar3) {
            *puVar1 = uVar3;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1004))) = 1;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI::Info::InfoProxyLinkshellMember::vf4 */
byte F_00445260(unsigned int gen_a0)
{
  GEN_ENTER(0x445260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    this[0xd] = this[0xc];
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x20);
    this[0xc] = (undefined1)((char)this[0xc] + '\x01');
    (*(undefined2 *)(gen_frame + 0x28)) = 0;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0x24);
    (*(undefined4 *)(gen_frame + 0x8)) = 0xcb;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    (*(undefined1 *)(gen_frame + 0x2a)) = 0xc;
    (*(undefined1 *)(gen_frame + 0x2b)) = this[0xd];
    bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      this[0x1c] = (undefined1)0x0;
      this[0x30] = (undefined1)0x0;
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00445410 */
uint F_00445410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x445410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  uint uVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  if (param_1 < uVar1) {
    uVar1 = *(uint *)((int)this + 0x18);
    iVar3 = param_1 * 0x48;
    if (*(int *)(iVar3 + uVar1) != 0 || *(int *)(iVar3 + 4 + uVar1) != 0) {
      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      uVar1 = 0;
      if (this_00 != (undefined *)0x0) {
        iVar2 = *(int *)((int)this + 0x18) + iVar3;
        (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(iVar2 + 4);
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x20);
        (*(undefined4 *)(gen_frame + 0x8)) = 0xf5;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x24);
        (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar3)));
        puVar4 = (undefined4 *)(iVar2 + 0x1c);
        puVar5 = ((undefined4 *)(gen_frame + 0x30));
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        uVar1 = CONCAT31(extraout_var,1);
        goto LAB_004454df;
      }
    }
  }
  uVar1 = uVar1 & 0xffffff00;
LAB_004454df: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_00445500 */
uint F_00445500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x445500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar5 = F_00435f70(this,param_1);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if ((this_00 == (undefined *)0x0) || (uVar5 == 0)) {
    uVar1 = (uint)this_00 & 0xffffff00;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x20);
    (*(ulonglong *)(gen_frame + 0x28)) = uVar5;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
    iVar2 = 8;
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x24);
    (*(undefined4 *)(gen_frame + 0x8)) = 0xf7;
    puVar3 = param_1;
    puVar4 = ((undefined4 *)(gen_frame + 0x30));
    if ((char)param_2 == '\0') {
      (*(undefined4 *)(gen_frame + 0x8)) = 0xf8;
      puVar3 = param_1;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar1 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_004455e0 */
uint F_004455e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4455e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar5 = F_00435f70(this,param_1);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if ((this_00 == (undefined *)0x0) || (uVar5 == 0)) {
    uVar1 = (uint)this_00 & 0xffffff00;
  }
  else {
    (*(ulonglong *)(gen_frame + 0x28)) = uVar5;
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x20);
    (*(undefined4 *)(gen_frame + 0x8)) = 0xf4;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x24);
    puVar3 = param_1;
    puVar4 = ((undefined4 *)(gen_frame + 0x30));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar1 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyPartyInvite::vf7 */
uint F_004456b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4456b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = F_00438660(this,param_1);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if ((this_00 == (undefined *)0x0) || (uVar2 == 0)) {
    uVar1 = (uint)this_00 & 0xffffff00;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xca;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    (*(ulonglong *)(gen_frame + 0x20)) = uVar2;
    (*(undefined1 *)(gen_frame + 0x28)) = 1;
    (*(undefined1 *)(gen_frame + 0x29)) = (undefined1)param_2;
    F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar1 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_00445760 */
byte F_00445760(unsigned int gen_a0)
{
  GEN_ENTER(0x445760u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this == (undefined *)0x0) {
    bVar1 = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xc9;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
    (*(undefined1 *)(gen_frame + 0x20)) = 1;
    puVar3 = param_1;
    puVar4 = ((undefined4 *)(gen_frame + 0x21));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    bVar1 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return bVar1;
}

/* ref: Client::UI::Info::InfoProxyPartyMember::vf4 */
byte F_004457f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4457f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    this[0xd] = this[0xc];
    this[0xc] = (undefined1)((char)this[0xc] + '\x01');
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    (*(undefined2 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xcb;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    (*(undefined1 *)(gen_frame + 0x2a)) = 2;
    (*(undefined1 *)(gen_frame + 0x2b)) = this[0xd];
    bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (bVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_004458c0 */
uint F_004458c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4458c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar2 = (*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20)) / 0x18;
  iVar4 = 0;
  if (0 < iVar2) {
    piVar1 = *(int * PTR32 *)((int)this + 0x20);
    piVar3 = piVar1;
    do {
      if (((*piVar3 == param_1) && (piVar3[1] == param_2)) &&
         ((param_3 == 0 || ((piVar3[4] == param_3 && ((char)piVar3[5] == (char)param_4)))))) {
        if ((char)param_5 != '\0') {
          return (uint)*(byte *)((int)piVar1 + iVar4 * 0x18 + 9);
        }
        return (uint)*(byte *)((int)piVar1 + iVar4 * 0x18 + 10);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 6;
    } while (iVar4 < iVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_00445960 */
uint F_00445960(unsigned int gen_a0)
{
  GEN_ENTER(0x445960u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if ((this == (undefined *)0x0) || (param_1 == (undefined4 *)0x0)) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xde;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
    puVar3 = param_1;
    puVar4 = ((undefined4 *)(gen_frame + 0x20));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar1 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_004459f0 */
byte F_004459f0(void)
{
  GEN_ENTER(0x4459f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xdc;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00445a80 */
uint F_00445a80(unsigned int gen_a0)
{
  GEN_ENTER(0x445a80u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if ((this == (undefined *)0x0) || (param_1 == (undefined4 *)0x0)) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xdf;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
    puVar3 = param_1;
    puVar4 = ((undefined4 *)(gen_frame + 0x20));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar1 = CONCAT31(extraout_var,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_00445b10 */
byte F_00445b10(void)
{
  GEN_ENTER(0x445b10u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xdd;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: Client::UI::Info::InfoProxySearch::vf5 */
uint F_00445ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x445ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_00;
  undefined4 uVar8;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,(uint)(byte)this[0x11]);
  uVar6 = 0;
  if (uVar5 != 0) {
    iVar2 = *(int *)(this + 8);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4));
    if (*(int *)(uVar6 + 600) == 0) {
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x34) + 8))))(*(int * PTR32 *)(uVar6 + 0x34),"Addon");
      *(uint *)(uVar6 + 600) = uVar7;
    }
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 600) + 0x24))))(*(int * PTR32 *)(uVar6 + 600),0x153)));
    uVar8 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
    uVar6 = F_00cb0950(this_00,uVar8);
    puVar1 = ((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar2 * 0x14)));
    if (uVar6 != *puVar1) {
      *puVar1 = uVar6;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
  }
  F_00c47745(uVar3 ^ (uint)(uint)(gen_out + 0x0));
  return uVar6;
}

/* ref: Client::UI::Info::InfoProxySearch::vf4 */
byte F_00445c50(unsigned int gen_a0)
{
  GEN_ENTER(0x445c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = F_00470630(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c),
                         (uint)*(ushort *)(this + 0x30),(uint)*(ushort *)(this + 0x32),
                         *(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c),
                         *(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x44),
                         *(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),this + 0x50,
                         this + 0xb4);
    bVar1 = F_00974da0(this_00,uVar2,uVar3,uVar4);
    if (bVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: Client::UI::Info::InfoProxySearch::vf3 */
uint F_00445d10(unsigned int gen_a0)
{
  GEN_ENTER(0x445d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  undefined4 uVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  *(undefined4 *)(this + 8) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,(uint)(byte)this[0x10]);
  if (uVar3 != 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) != *(int *)(this + 8))
    {
      *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) = *(int *)(this + 8);
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
  }
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,(uint)(byte)this[0x11]);
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4));
    if (*(int *)(uVar3 + 600) == 0) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x34) + 8))))(*(int * PTR32 *)(uVar3 + 0x34),"Addon");
      *(uint *)(uVar3 + 600) = uVar5;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 600) + 0x24))))(*(int * PTR32 *)(uVar3 + 600),0x157)));
    uVar6 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
    uVar3 = F_00cb0950(this_00,uVar6);
    if (uVar3 != **(uint * PTR32 *)(uVar4 + 0x20)) {
      **(uint * PTR32 *)(uVar4 + 0x20) = uVar3;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return uVar3;
}

/* ref: FUN_00445df0 */
uint F_00445df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x445df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  *(uint *)((int)this + 0xd8) = param_1;
  if ((int)param_1 < 1) {
    uVar3 = param_1;
    if (param_1 == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,(uint)*(byte *)((int)this + 0x10));
      if (uVar3 != 0) {
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + (uint)*(ushort *)((int)this + 0x14) * 4))) !=
            *(int *)((int)this + 8)) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + (uint)*(ushort *)((int)this + 0x14) * 4))) =
               *(int *)((int)this + 8);
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
      }
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
    }
  }
  else {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    uVar3 = 0;
    if (this_00 != (undefined *)0x0) {
      *(char *)((int)this + 0xd) = *(char *)((int)this + 0xc);
      *(char *)((int)this + 0xc) = *(char *)((int)this + 0xc) + '\x01';
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined1 *)(gen_frame + 0x2c)) = 0;
      (*(undefined2 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xcb;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
      (*(undefined1 *)(gen_frame + 0x2a)) = 0xe;
      (*(undefined1 *)(gen_frame + 0x2b)) = *(undefined1 *)((int)this + 0xd);
      bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      uVar3 = CONCAT31(extraout_var,bVar1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar3;
}

/* ref: FUN_00445f00 */
uint F_00445f00(unsigned int gen_a0)
{
  GEN_ENTER(0x445f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_00c48350((undefined4 *)((int)this + 0x28),0,0xb0);
  *(undefined4 *)((int)this + 0x30) = 0x630001;
  *(undefined4 *)((int)this + 0x40) = 0xff;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xff;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  pvVar1 = F_00c48350((undefined *)((int)this + 0x50),0,100);
  return (uint)pvVar1;
}

/* ref: FUN_00445f60 */
byte F_00445f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x445f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    *(undefined1 *)((int)this + 0x20) = 0;
    F_00c48350((undefined *)((int)this + 0x50),0,100);
  }
  if (*(byte *)((int)this + 0x20) < 0x32) {
    *((undefined2 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x20) * 2 + 0x50))) = (undefined2)param_1;
    *(char *)((int)this + 0x20) = *(char *)((int)this + 0x20) + '\x01';
    return 1;
  }
  return 0;
}

/* ref: FUN_00445fb0 */
byte F_00445fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x445fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  if ((((*(uint *)(uVar2 + 0xa8) & 0x800) != 0) &&
      (this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c)), this_00 != (undefined *)0x0)) &&
     (bVar1 = F_00975060(this_00), bVar1 != 0)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    return 1;
  }
  return 0;
}

/* ref: FUN_00446010 */
uint F_00446010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x446010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  F_00c49908((int)this + 0x20,0xc,"CHARA.DAT");
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090bd4));
  return (uint)this;
}

/* ref: FUN_00446060 */
uint F_00446060(unsigned int gen_a0)
{
  GEN_ENTER(0x446060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: FUN_004460e0 */
uint F_004460e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4460e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00c48350(param_1,0,0x97);
    if (param_2 == 0) {
      uVar1 = 0;
      do {
        uVar2 = F_00ab3c30(uVar1);
        if (uVar2 == 0) {
          *(undefined1 *)(uVar1 + (int)param_1) = 0;
        }
        else {
          *(bool *)(uVar1 + (int)param_1) = (*(byte *)(uVar2 + 0xd) & 1) != 0;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x97);
    }
    else {
      if (param_2 == 1) {
        uVar2 = 0;
        do {
          uVar1 = F_00ab3c30(uVar2);
          if (uVar1 == 0) {
            *(undefined1 *)(uVar2 + (int)param_1) = 0;
          }
          else {
            *(bool *)(uVar2 + (int)param_1) = (*(byte *)(uVar1 + 0xd) & 2) != 0;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x97);
        return uVar1;
      }
      uVar2 = param_2 - 2;
      if (uVar2 == 0) {
        uVar2 = 0;
        do {
          uVar1 = F_00ab3c30(uVar2);
          if (uVar1 == 0) {
            *(undefined1 *)(uVar2 + (int)param_1) = 0;
            uVar1 = 0;
          }
          else {
            bVar3 = (*(byte *)(uVar1 + 0xd) & 4) != 0;
            uVar1 = CONCAT31((int3)(uVar1 >> 8),bVar3);
            *(bool *)(uVar2 + (int)param_1) = bVar3;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x97);
        return uVar1;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_004461b0 */
unsigned int F_004461b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4461b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * _Dst;
  
  if (param_1 < 4) {
    uVar1 = F_00424750(REFG(undefined4, 0x137104c));
    if (uVar1 != 0) {
      if (param_1 == 0) {
        F_004460e0((int)this + 0x30,0);
      }
      else {
        if (param_1 == 1) {
          F_004460e0((int)this + 199,1);
          return 0;
        }
        if (param_1 != 2) {
          F_00c48350((undefined *)(param_1 * 0x97 + 0x30 + (int)this),0,0x97);
          return 0;
        }
        _Dst = (undefined *)((int)this + 0x15e);
        uVar1 = F_00424750(REFG(undefined4, 0x137104c));
        if (uVar1 != 0) {
          F_00c48350(_Dst,0,0x97);
          uVar1 = 0;
          do {
            uVar2 = F_00ab3c30(uVar1);
            if (uVar2 == 0) {
              *(undefined1 *)(uVar1 + (int)_Dst) = 0;
            }
            else {
              *(bool *)(uVar1 + (int)_Dst) = (*(byte *)(uVar2 + 0xd) & 4) != 0;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < 0x97);
          return 0;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00446290 */
uint F_00446290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x446290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090990));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_0042b630((int)this + 0x10);
  F_0042b630((int)this + 100);
  F_0042b630((int)this + 0xb8);
  *(undefined4 *)((int)this + 0x10c) = 0;
  F_00a29aa0((undefined *)((int)this + 0x110));
  *(undefined4 *)((int)this + 0x1b0) = param_3;
  return (uint)this;
}

/* ref: FUN_004462f0 */
uint F_004462f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4462f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 10) == -1)) {
    bVar1 = F_0043ac90((uint)*(byte *)((int)this + 9),*(undefined4 *)((int)this + 4));
    *(byte *)((int)this + 10) = bVar1;
  }
  return (int)*(char *)((int)this + 10);
}

/* ref: FUN_00446320 */
uint F_00446320(unsigned int gen_a0)
{
  GEN_ENTER(0x446320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 8) != '\0') && (*(char *)(in_ecx + 0xb) == -1)) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 9))) {
    case 1: ;
    case 9: ;
      *(undefined1 *)(in_ecx + 0xb) = 1;
      return 1;
    case 2: ;
    case 4: ;
    case 0xe: ;
    case 0xf: ;
      *(undefined1 *)(in_ecx + 0xb) = 2;
      return 2;
    default: ;
      *(undefined1 *)(in_ecx + 0xb) = 0;
    }
  }
  return (int)*(char *)(in_ecx + 0xb);
}

/* ref: FUN_00446380 */
uint F_00446380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x446380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 4: ;
    uVar3 = F_00ab2510(param_2);
    if (uVar3 != 0) {
      return (uint)*(ushort *)(uVar3 + 0x1c);
    }
    break;
  case 6: ;
    uVar3 = F_00ab28a0(param_2);
    if (uVar3 != 0) {
      return (uint)*(ushort *)(uVar3 + 0x20);
    }
  case 2: ;
  case 0xe: ;
    uVar3 = F_00ab65a0(param_2,0);
    return uVar3;
  case 7: ;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2);
      return *((uint *)GEN_TOP((((param_2 >> 8 & 0xff) * 100 + (param_2 & 0xff)) * 0x544 + 0x3c + uVar3)));
    }
  case 1: ;
    uVar3 = F_00ab1ed0(param_2);
    if (uVar3 != 0) {
      return (uint)*(ushort *)(uVar3 + 8);
    }
    break;
  case 8: ;
    uVar3 = F_00ab28d0(param_2);
    if (uVar3 != 0) {
      return *(uint *)(uVar3 + 4);
    }
    break;
  case 9: ;
    uVar3 = F_00ab1f00(param_2);
    if (uVar3 != 0) {
      return (uint)*(ushort *)(uVar3 + 0xc);
    }
    break;
  case 10: ;
    uVar3 = F_00ab1f30(param_2);
    if (uVar3 != 0) {
      return *(uint *)(uVar3 + 8);
    }
    break;
  case 0xb: ;
    uVar3 = F_00ab2c30(param_2);
    if (uVar3 != 0) {
      return *(uint *)(uVar3 + 8);
    }
    break;
  case 0xc: ;
    uVar3 = F_00ab2cf0(param_2);
    if (uVar3 != 0) {
      return *(uint *)(uVar3 + 8);
    }
    break;
  case 0xd: ;
    uVar3 = F_00ab2870(param_2);
    if (uVar3 != 0) {
      return (uint)*(ushort *)(uVar3 + 0x16);
    }
    break;
  case 0xf: ;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2);
      bVar1 = F_0043b400(uVar3,param_2);
      if (bVar1 != 0) {
        uVar3 = F_0043b3e0(uVar3,param_2);
        if (*(int *)(uVar3 + 0x34) != 0) {
          return *(int *)(uVar3 + 0x34) + 0xf550;
        }
      }
    }
    break;
  case 0x10: ;
    uVar3 = F_00ab2d50(param_2);
    if (uVar3 != 0) {
      return *(uint *)(uVar3 + 8);
    }
    break;
  case 0x11: ;
    uVar3 = F_00ab2840(param_2);
    if (uVar3 != 0) {
      return (uint)*(ushort *)(uVar3 + 0x9a);
    }
  }
  return 0;
}

/* ref: FUN_004465b0 */
byte F_004465b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4465b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  switch((unsigned int)(uintptr_t)((uint)*(byte *)((int)this + 9))) {
  case 1: ;
  case 2: ;
  case 4: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xd: ;
  case 0x10: ;
  case 0x11: ;
    uVar2 = F_0043ad70((uint)*(byte *)((int)this + 9));
    bVar1 = F_00ac7930(&REFG(undefined, 0x14bcf40),uVar2,*(undefined4 *)((int)this + 4));
    return bVar1 != 0;
  case 6: ;
    bVar1 = 0;
    if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
      bVar1 = F_00aa0f40(REFG(undefined4, 0x1379694));
      return bVar1 != 0;
    }
    break;
  case 0xc: ;
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if ((piVar3 != (int *)0x0) &&
       (uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x11c))(piVar3,*(undefined4 *)((int)this + 4)),
       (char)uVar2 == '\0')) {
      return 0;
    }
  default: ;
    bVar1 = 1;
    break;
  case 0xf: ;
    bVar4 = false;
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x34))(piVar3);
      bVar1 = F_0043b400(uVar2,*(undefined4 *)((int)this + 4));
      bVar4 = bVar1 != 0;
    }
    return bVar4;
  }
  return bVar1;
}

/* ref: FUN_00446690 */
uint F_00446690(unsigned int gen_a0)
{
  GEN_ENTER(0x446690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 9))) {
  case 1: ;
  case 2: ;
  case 4: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xd: ;
  case 0x10: ;
  case 0x11: ;
    break;
  default: ;
    return 0;
  }
  uVar3 = 0;
  uVar2 = F_0043ad70(CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((int)this + 9)));
  bVar1 = F_00ac58b0(&REFG(undefined, 0x14bcf40),uVar2,*(undefined4 *)((int)this + 4));
  if (bVar1 != 0) {
    uVar3 = 0x100;
  }
  bVar1 = F_00ac2f60(&REFG(undefined, 0x14bcf40),uVar2,*(undefined4 *)((int)this + 4));
  if ((bVar1 != 0) &&
     (fVar4 = F_00ac3090(&REFG(undefined, 0x14bcf40),uVar2,*(undefined4 *)((int)this + 4)),
     (float10)0 < (float10)fVar4)) {
    dVar5 = F_00ac3060(&REFG(undefined, 0x14bcf40),uVar2,*(undefined4 *)((int)this + 4));
    uVar3 = uVar3 | (int)(((float10)dVar5 * (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)fVar4 +
                         (float10)REFG(double, 0x1088108));
  }
  return uVar3;
}

/* ref: FUN_00446760 */
uint F_00446760(unsigned int gen_a0)
{
  GEN_ENTER(0x446760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 8) != '\0') {
    uVar3 = *(uint *)((int)this + 4);
    uVar2 = F_0043ad70((uint)*(byte *)((int)this + 9));
    bVar1 = F_00ac2e60(&REFG(undefined, 0x14bcf40),uVar2,uVar3);
    return (uint)(bVar1 != 0);
  }
  return 1;
}

/* ref: FUN_00446790 */
uint F_00446790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x446790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((*(char *)((int)this + 8) != '\0') && (*(int *)((int)this + 0xb8) == -2)) ||
     ((char)param_1 != '\0')) {
    uVar1 = F_0043ae30((uint)*(byte *)((int)this + 9),*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 0xb8) = uVar1;
    F_0042aca0((int)this + 0xbc);
  }
  return *(uint *)((int)this + 0xb8);
}

/* ref: FUN_004467e0 */
uint F_004467e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4467e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 gen_out[0x4];
  undefined * this_00;
  char cVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_0042aca0((int)this + 0xc);
  this_00 = (undefined *)((int)this + 0x60);
  F_0042aca0(this_00);
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar6 = 0;
  if (piVar4 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4);
    cVar1 = *param_1;
    uVar6 = CONCAT31((int3)(uVar5 >> 8),cVar1);
    bVar2 = param_1[1];
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),cVar1);
    if (cVar1 != '\0') {
      if (*(int *)(uVar5 + 600) == 0) {
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x34) + 8))))(*(int * PTR32 *)(uVar5 + 0x34),"Addon");
        *(uint *)(uVar5 + 600) = uVar6;
      }
      piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 600) + 0x24))))(*(int * PTR32 *)(uVar5 + 600),0x675)));
      uVar9 = 0;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
      uVar6 = F_00cb0950(pvVar8,uVar9);
      F_0042e370(this_00,uVar6);
      if ((bVar2 & 2) != 0) {
        if (*(int *)(uVar5 + 600) == 0) {
          uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x34) + 8))))(*(int * PTR32 *)(uVar5 + 0x34),"Addon");
          *(uint *)(uVar5 + 600) = uVar6;
        }
        piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 600) + 0x24))))(*(int * PTR32 *)(uVar5 + 600),0x1399)))
        ;
        uVar9 = 0;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
        uVar6 = F_00cb0950(pvVar8,uVar9);
        F_0042e370(this_00,uVar6);
        F_0042e370(this_00,&REFG(undefined, 0x108f6ac));
      }
      if ((bVar2 & 4) != 0) {
        if (*(int *)(uVar5 + 600) == 0) {
          uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x34) + 8))))(*(int * PTR32 *)(uVar5 + 0x34),"Addon");
          *(uint *)(uVar5 + 600) = uVar6;
        }
        piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 600) + 0x24))))(*(int * PTR32 *)(uVar5 + 600),0x139a)))
        ;
        uVar9 = 0;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
        uVar6 = F_00cb0950(pvVar8,uVar9);
        F_0042e370(this_00,uVar6);
        F_0042e370(this_00,&REFG(undefined, 0x108f6f0));
      }
      if ((bVar2 & 1) != 0) {
        if (*(int *)(uVar5 + 600) == 0) {
          uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x34) + 8))))(*(int * PTR32 *)(uVar5 + 0x34),"Addon");
          *(uint *)(uVar5 + 600) = uVar6;
        }
        piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 600) + 0x24))))(*(int * PTR32 *)(uVar5 + 600),0x1398)))
        ;
        uVar9 = 0;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
        uVar6 = F_00cb0950(pvVar8,uVar9);
        F_0042e370(this_00,uVar6);
        F_0042e370(this_00,&REFG(undefined, 0x108f6f4));
      }
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,(*(undefined4 *)(gen_frame + 0x0)));
      F_0042e370(this_00,uVar6);
      if (*(int *)(uVar5 + 600) == 0) {
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x34) + 8))))(*(int * PTR32 *)(uVar5 + 0x34),"Addon");
        *(uint *)(uVar5 + 600) = uVar6;
      }
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 600) + 0x24))))(*(int * PTR32 *)(uVar5 + 600),0x676)));
      uVar9 = 0;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
      uVar6 = F_00cb0950(pvVar8,uVar9);
      uVar6 = F_0042e370(this_00,uVar6);
    }
  }
  F_00c47745(uVar3 ^ (uint)(uint)(gen_out + 0x0));
  return uVar6;
}

/* ref: FUN_00446a20 */
uint F_00446a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x446a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  F_00c49908((int)this + 0x20,0xc,"HOTBAR.DAT");
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) =
       (*(undefined * PTR32 (*)[2])REFP(0x1090504));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090c08));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[2])REFP(0x1090bfc));
  *(undefined4 *)((int)this + 0x34) = param_2;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x3a) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  puVar1 = (undefined4 *)((int)this + 0x48);
  param_1 = 0x11f;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 10) = 0xff;
    F_0042b630(puVar1 + 3);
    F_0042b630(puVar1 + 0x18);
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0xfffffffe;
    F_0042b630(puVar1 + 0x2f);
    F_0042b630(puVar1 + 0x44);
    puVar1 = puVar1 + 0x59;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  puVar1 = (undefined4 *)((int)this + 0x190c8);
  param_1 = 0xf;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 10) = 0xff;
    F_0042b630(puVar1 + 3);
    F_0042b630(puVar1 + 0x18);
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0xfffffffe;
    F_0042b630(puVar1 + 0x2f);
    F_0042b630(puVar1 + 0x44);
    puVar1 = puVar1 + 0x59;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  puVar1 = (undefined4 *)((int)this + 0x1a708);
  param_1 = 0xf;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 10) = 0xff;
    F_0042b630(puVar1 + 3);
    F_0042b630(puVar1 + 0x18);
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0xfffffffe;
    F_0042b630(puVar1 + 0x2f);
    F_0042b630(puVar1 + 0x44);
    puVar1 = puVar1 + 0x59;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x1bd48) = 0;
  *(undefined1 *)((int)this + 0x2c24c) = 0;
  *(undefined4 *)((int)this + 0x2c250) = 0;
  F_0043b1d0(this,0);
  return (uint)this;
}

/* ref: FUN_00446bb0 */
uint F_00446bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x446bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (((char)param_5 == '\0') && ((*(uint *)((int)this + 0x40) & 1 << ((byte)param_2 & 0x1f)) != 0))
  {
    iVar2 = 0;
  }
  iVar2 = (param_2 + iVar2 * 0x12) * 0x10 + param_3;
  *(undefined1 *)((int)this + iVar2 * 8 + 0x1bd4c) = *(undefined1 *)(param_4 + 2);
  uVar1 = (int)this + iVar2 * 8 + 0x1bd4c;
  *(undefined4 *)(uVar1 + 4) = *param_4;
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar1;
}

/* ref: FUN_00446c10 */
byte F_00446c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x446c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (*(uint *)((int)this + 0x40) & 1 << ((byte)param_1 & 0x1f)) != 0;
}

/* ref: FUN_00446c30 */
byte F_00446c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x446c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (*(uint *)((int)this + 0x40) & 1 << ((char)param_1 + 10U & 0x1f)) != 0;
}

/* ref: FUN_00446c50 */
uint F_00446c50(unsigned int gen_a0)
{
  GEN_ENTER(0x446c50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar2 = (uint)((char)param_1 != '\0');
  this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xba);
  bVar1 = F_00414a40(this,uVar2,uVar3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00446c80 */
byte F_00446c80(void)
{
  GEN_ENTER(0x446c80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xba);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: FUN_00446ca0 */
uint F_00446ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x446ca0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar2 = (uint)((char)param_1 != '\0');
  this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xdb);
  bVar1 = F_00414a40(this,uVar2,uVar3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00446cd0 */
byte F_00446cd0(void)
{
  GEN_ENTER(0x446cd0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xdb);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: FUN_00446cf0 */
uint F_00446cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x446cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  F_00c49908((int)this + 0x20,0xc,"GEARSET.DAT");
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090c30));
  *(undefined4 *)((int)this + 0x30) = param_2;
  puVar3 = (undefined4 *)((int)this + 0x34);
  param_1 = 100;
  do {
    *(byte *)((int)puVar3 + 0x39) = *(byte *)((int)puVar3 + 0x39) & 0xfc;
    *puVar3 = 0xffffffff;
    puVar3[0xd] = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    F_00401500(puVar3 + 0x10,0x10,0xe,((code *)REFP(0x46f820)));
    F_00c48350(puVar3 + 1,0,0x30);
    puVar3 = puVar3 + 0x48;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x71d4) = 0xffffffff;
  *(undefined1 *)((int)this + 0x71d8) = 0;
  F_0046f830((undefined *)((int)this + 0x71dc));
  piVar1 = (int *)((int)this + 0x34);
  do {
    *piVar1 = iVar2;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x48;
  } while (iVar2 < 0x65);
  return (uint)this;
}

/* ref: FUN_00446dc0 */
uint F_00446dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x446dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: FUN_00446df0 */
unsigned int F_00446df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x446df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)(param_1 * 0x120 + 0x6d + (int)this);
  *pbVar1 = *pbVar1 & 0xfe;
  if (*(char *)((int)this + 0x71d8) == '\0') {
    iVar2 = *(int *)((int)this + 0x71d4);
  }
  else {
    iVar2 = -1;
  }
  *(undefined1 *)((int)this + 0x2c) = 1;
  if (param_1 == iVar2) {
    *(undefined4 *)((int)this + 0x71d4) = 0xffffffff;
    *(undefined1 *)((int)this + 0x71d8) = 0;
  }
  return 0;
}

/* ref: FUN_00446e40 */
uint F_00446e40(unsigned int gen_a0)
{
  GEN_ENTER(0x446e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(byte *)((int)this + 0x70ed) = *(byte *)((int)this + 0x70ed) & 0xfd | 1;
  pbVar1 = (byte *)((int)this + 0x70f4);
  iVar4 = 0xe;
  do {
    *pbVar1 = *pbVar1 & 0xf8;
    pbVar1 = pbVar1 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230),1000);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = F_0043b520((int)this + 0x70b4,uVar2);
    *(undefined1 *)((int)this + 0x2c) = 1;
  }
  return uVar3;
}

/* ref: FUN_00446e90 */
uint F_00446e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x446e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return ((*(byte *)((int)this + 0xc4) & 7) * 8 | *(byte *)((int)this + 0xc5) & 7) << 7 |
         param_1 & 0x7f;
}

/* ref: FUN_00446ec0 */
uint F_00446ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x446ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar3 = F_0042a990(param_1);
  bVar2 = F_0043f660(uVar3);
  if (bVar2 == 0) {
    uVar3 = F_0042ccf0(param_2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return uVar3;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
  F_0042b630(((undefined1 *)(gen_frame + 0x60)));
  uVar3 = F_0042a990(param_1);
  bVar2 = F_00a69a10(uVar3);
  if (bVar2 != 1) {
    uVar3 = F_0042a990(param_1);
    pcVar6 = "<link(%d,%d,%d,%d,%s)>";
  }
  else {
    uVar3 = F_0042a990(param_1);
    pcVar6 = "<link(%d,%d,%d,%d,%s)>";
  }
  F_0042d000(((undefined1 *)(gen_frame + 0xb4)),pcVar6,(uint)(bVar2 == 1),0,0,0,uVar3);
  iVar1 = **(int * PTR32 *)((int)this + 0x5c);
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x20))(*(undefined4 *)((int)this + 0x5c),((undefined1 *)(gen_frame + 0xc)),uVar3);
  F_0042ccf0(param_2,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  uVar4 = (uint)*(byte *)((int)this + 0x27b0);
  uVar3 = F_0042a990(param_1);
  F_0043f750(((undefined1 *)(gen_frame + 0x60)),uVar3,uVar4);
  F_0042e360(param_2,((undefined1 *)(gen_frame + 0x60)));
  F_0042d000(((undefined1 *)(gen_frame + 0xb4)),"<link(%d,0,0,0,)>",0xce);
  iVar1 = **(int * PTR32 *)((int)this + 0x5c);
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x20))(*(undefined4 *)((int)this + 0x5c),((undefined1 *)(gen_frame + 0xc)),uVar3);
  F_0042e360(param_2,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar5;
}

/* ref: FUN_00447050 */
uint F_00447050(unsigned int gen_a0)
{
  GEN_ENTER(0x447050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  int iVar2;
  int in_ecx_00;
  int iVar3;
  int local_8;
  
  iVar3 = in_ecx + 0x94;
  local_8 = 100;
  do {
    *(undefined4 *)(iVar3 + -0x58) = 0;
    F_0042aca0(iVar3 + -0x54);
    iVar2 = 0xf;
    in_ecx_00 = iVar3;
    do {
      uVar1 = F_0042aca0(in_ecx_00);
      in_ecx_00 = in_ecx_00 + 0x54;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = iVar3 + 0x544;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar1;
}

/* ref: FUN_004470b0 */
uint F_004470b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4470b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0043ba80(param_1);
  if (uVar1 == 0xf) {
    uVar1 = 0xe;
  }
  uVar1 = F_0043b960(this,param_1,uVar1,param_2);
  return uVar1;
}

/* ref: FUN_004470e0 */
uint F_004470e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4470e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 in_esi = (undefined4)gen_a2;
  undefined4 in_edi = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int in_ecx_00;
  int in_ecx_01;
  uint uVar1;
  int * piVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  in_ecx_00 = in_ecx + 0x334;
  F_0042aca0(in_ecx_00);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_5,REFG(undefined4, 0x108cc50));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 0x1b4) + 0x18))))(*(int * PTR32 *)(in_ecx + 0x1b4));
  F_00a27140((undefined *)(uVar1 + 0x1b8),((undefined1 *)(gen_frame + 0x4)),in_ecx_00,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  in_ecx_01 = in_ecx + 0x388;
  F_0042aca0(in_ecx_01);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 0x1b4) + 0x18))))(*(int * PTR32 *)(in_ecx + 0x1b4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,in_ecx_00,in_ecx + 0x304,in_ecx_01);
  F_0042aca0(in_ecx_00);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 0x1b4) + 0x1c))))
                    (*(int * PTR32 *)(in_ecx + 0x1b4),in_ecx_00,in_ecx_01,1);
  F_00559470(uVar1);
  F_0055f370(in_edi,in_esi,in_ebx);
  uVar1 = F_0042a990(in_ecx_00);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x4471a1;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_004471b0 */
byte F_004471b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4471b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined * PTR32 * ppvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    return 0;
  }
  uVar6 = 0;
  uVar5 = 0;
  ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  puVar2 = &(*(undefined4 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 5;
  (*(undefined4 *)(gen_frame + 0x1d)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x756764;
  uVar3 = (*(undefined4 *)&gen_args[1]);
  uVar1 = F_004ff310(&(*(undefined4 *)&gen_args[1]),6,0);
  uVar1 = F_00513d20(uVar1,puVar2,uVar3,ppvVar4,uVar5,uVar6);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined4 *)&gen_args[3]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(undefined4 *)&gen_args[2]);
  return 1;
}

/* ref: FUN_00447240 */
uint F_00447240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x447240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_14;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x14) == 0) {
    uVar2 = F_0043c5e0(this);
    if (uVar2 != 0) {
      if (*(int *)((int)this + 0x14) != 0) {
        F_00406810(*(int *)((int)this + 0x14));
        *(undefined4 *)((int)this + 0x14) = 0;
        *(undefined4 *)((int)this + 0x18) = 0;
      }
      return 0xfffffffe;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  local_14 = CONCAT22((short)uVar2,(undefined2)param_1);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,*(int *)((int)this + 0x14) + 0x10,uVar3);
  *(uint *)((int)this + 0x18) = uVar2;
  if ((0 < (int)uVar2) && (uVar2 <= uVar3)) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
    *puVar1 = local_14;
    puVar1[1] = uVar3;
    puVar1[2] = uVar2;
    puVar1[3] = local_8;
    *(undefined2 *)((int)this + 0x2c) = 0;
    return 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x18) = 0;
  *puVar1 = local_14;
  puVar1[1] = uVar3;
  puVar1[2] = 0;
  puVar1[3] = local_8;
  *(undefined2 *)((int)this + 0x2c) = 0;
  return 0;
}

/* ref: FUN_00447310 */
uint F_00447310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x447310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short * psVar1;
  uint uVar2;
  
  psVar1 = *(short * PTR32 *)((int)this + 0x14);
  if (psVar1 == (short *)0x0) {
    return 0xffffffff;
  }
  if (*(int *)(psVar1 + 4) != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    if (*psVar1 == (short)uVar2) goto LAB_0044733d;
  }
  param_1 = param_1 & 0xffffff00;
LAB_0044733d: ;
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,psVar1 + 8,*(undefined4 *)(psVar1 + 4));
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(bool *)((int)this + 0x2c) = (char)param_1 == '\0';
  return 0;
}

/* ref: Client::UI::Misc::UserFileManager::UserFileEvent::vf8 */
byte F_00447390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x447390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  (*(uint *)(gen_frame + 0x208)) = uVar1;
  if (*(int *)(this + 0x14) == 0) {
    if ((this[0x2c] == (undefined1)0x0) && ((char)param_1 == '\0')) {
      this[0x2d] = (undefined1)0x0;
      F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x20c));
      return 0;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    F_00447240(this,uVar1 & 0xffff);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    uVar3 = *(undefined4 *)(this + 0x14);
    iVar2 = uVar1 + 0x20;
    uVar1 = F_0042a3f0(((undefined1 *)(gen_frame + 0x0)),this + 0x20,1);
    F_0043c410(*(undefined * PTR32 *)(this + 0x10),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc),uVar1
                 ,uVar3,iVar2);
    F_00429fa0();
    if (*(int *)(this + 0x14) != 0) {
      F_00406810(*(int *)(this + 0x14));
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return 0;
}

/* ref: FUN_00447460 */
byte F_00447460(unsigned int gen_a0)
{
  GEN_ENTER(0x447460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  this_00 = (undefined *)((int)this + 8);
  uVar2 = F_00acf5c0(this_00);
  if ((char)uVar2 != '\0') {
    iVar3 = 0;
    while (bVar1 = F_00acf5e0(this_00,iVar3), bVar1 != 0) {
      iVar3 = iVar3 + 1;
      if (1 < iVar3) {
        bVar1 = F_00acfb50(this_00);
        return bVar1;
      }
    }
    if (-1 < iVar3) {
      F_00ad0470(this_00,iVar3);
    }
  }
  bVar1 = F_00acfb50(this_00);
  return bVar1;
}

/* ref: FUN_004474b0 */
uint F_004474b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4474b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar3;
  
  this_00 = (undefined *)((int)this + 8);
  uVar2 = F_00acf5c0(this_00);
  if ((char)uVar2 != '\0') {
    iVar3 = 0;
    while( true ) {
      bVar1 = F_00acf5e0(this_00,iVar3);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) break;
      iVar3 = iVar3 + 1;
      if (1 < iVar3) {
        return uVar2;
      }
    }
    if (-1 < iVar3) {
      bVar1 = F_00ad0470(this_00,iVar3);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_004474f0 */
byte F_004474f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4474f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((*(uint *)((int)this + 0x184) & 0x100) != 0) {
    return 0;
  }
  *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) | 0x100;
  *(undefined4 *)((int)this + 0xce8) = *param_1;
  F_0042ccf0((undefined *)((int)this + 0xcec),param_1 + 1);
  *(undefined4 *)((int)this + 0xd40) = param_1[0x16];
  *(undefined4 *)((int)this + 0xd44) = param_1[0x17];
  *(undefined4 *)((int)this + 0xd48) = param_1[0x18];
  *(undefined4 *)((int)this + 0xd4c) = param_1[0x19];
  *(undefined4 *)((int)this + 0xd50) = param_1[0x1a];
  F_0042ccf0((undefined *)((int)this + 0xd54),param_1 + 0x1b);
  return 1;
}

/* ref: FUN_00447580 */
unsigned int F_00447580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x447580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if (((*(int *)((int)this + 0x98c) == -1) && (param_2 < (param_1[1] - *param_1) / 0x58)) &&
     (iVar1 = *(int *)(param_2 * 0x58 + 0x54 + *param_1), *(int *)((int)this + 0xa40) != iVar1)) {
    *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) | 0x80;
    *(int *)((int)this + 0x98c) = iVar1;
    *(int *)((int)this + 0xa40) = iVar1;
    *(undefined1 *)((int)this + 0xa3c) = 0;
  }
  return 0;
}

/* ref: FUN_004475f0 */
uint F_004475f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4475f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  int iVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar3 = 0;
  while( true ) {
    bVar1 = F_00acf5e0((undefined *)((int)this + 8),iVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) break;
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar2;
    }
  }
  if (-1 < iVar3) {
    uVar2 = *(uint *)((int)this + 0x184);
    if ((uVar2 & 0x1000) == 0) {
      if ((uVar2 & 0x100) == 0) {
        if ((char)uVar2 < '\0') {
          bVar1 = F_00ad0940((undefined *)((int)this + 8),iVar3,*(undefined4 *)((int)this + 0x98c));
          uVar2 = CONCAT31(extraout_var_02,bVar1);
          if (bVar1 != 0) {
            *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) & 0xffffff7f;
            F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
            return uVar2;
          }
        }
        else if ((uVar2 & 0x40) == 0) {
          if ((uVar2 & 1) == 0) {
            if ((uVar2 & 2) == 0) {
              if ((uVar2 & 0x10) == 0) {
                if ((uVar2 & 4) != 0) {
                  bVar1 = F_00acf570(iVar3);
                  uVar2 = CONCAT31(extraout_var_06,bVar1);
                  if (bVar1 != 0) {
                    *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) & 0xfffffffb;
                  }
                }
              }
              else {
                bVar1 = F_00ad0b30((undefined *)((int)this + 8),iVar3,
                                     *(undefined4 *)((int)this + 0xc78),
                                     *(undefined4 *)((int)this + 0xc7c));
                uVar2 = CONCAT31(extraout_var_05,bVar1);
                if (bVar1 != 0) {
                  uVar2 = *(uint *)((int)this + 0x184) & 0xffffffef | 0x20;
                  *(uint *)((int)this + 0x184) = uVar2;
                  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
                  return uVar2;
                }
              }
            }
            else {
              bVar1 = F_00ad05e0((undefined *)((int)this + 8),iVar3);
              uVar2 = CONCAT31(extraout_var_04,bVar1);
              if (bVar1 != 0) {
                *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) & 0xfffffffd;
                F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
                return uVar2;
              }
            }
          }
          else {
            uVar2 = F_00ad05a0((undefined *)((int)this + 8),iVar3);
            if ((char)uVar2 != '\0') {
              *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) & 0xfffffffe;
              F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
              return uVar2;
            }
          }
        }
        else {
          bVar1 = F_00ad0700((undefined *)((int)this + 8),iVar3,(int)this + 0xdac);
          uVar2 = CONCAT31(extraout_var_03,bVar1);
          if (bVar1 != 0) {
            *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) & 0xffffffbf;
            F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
            return uVar2;
          }
        }
      }
      else {
        if (*(int *)((int)this + 0xd40) - 20000U < 3) {
          F_0042b630(((undefined1 *)(gen_frame + 0x4)));
          F_0042ccf0(((undefined1 *)(gen_frame + 0x4)),(int)this + 0xcec);
          (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)((int)this + 0xd40);
          (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)((int)this + 0xd44);
          bVar1 = F_00ad1020((undefined *)((int)this + 8),iVar3,((undefined1 *)(gen_frame + 0x4)),(int)this + 0xd54);
          if (bVar1 != 0) {
            *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) & 0xfffffeff;
          }
          uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return (uint)uVar4;
        }
        bVar1 = F_00ad0d30((undefined *)((int)this + 8),iVar3,(int)this + 0xce8,(int)this + 0xd54);
        uVar2 = CONCAT31(extraout_var_01,bVar1);
        if (bVar1 != 0) {
          *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) & 0xfffffeff;
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return uVar2;
        }
      }
    }
    else {
      uVar2 = F_00acf5c0((undefined *)((int)this + 8));
      if ((char)uVar2 == '\0') {
        bVar1 = F_00ad0240((undefined *)((int)this + 8),iVar3);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 != 0) {
          uVar2 = *(uint *)((int)this + 0x184) & 0xffffefff | 0x2000;
          *(uint *)((int)this + 0x184) = uVar2;
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return uVar2;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00447870 */
byte F_00447870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x447870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * pvVar1;
  int * piVar2;
  bool bVar3;
  int iVar4;
  uint * this_00;
  byte local_5;
  
  iVar4 = param_3;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + (param_1 * 3 + 0x39) * 8)));
  local_5 = 0;
  bVar3 = false;
  if (param_3 < 3) {
    this_00 = ((uint *)GEN_TOP(((int)this + (param_3 * 0x14f + param_1) * 8 + 0x2130)));
    param_3 = 3 - param_3;
    do {
      if ((*this_00 & 0xf) == 3) {
        if (param_2 == this_00[1]) {
          local_5 = 1;
        }
        else {
          F_005a2710(this_00,3);
          this_00[1] = param_2;
          bVar3 = true;
        }
      }
      this_00 = this_00 + 0x29e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (((iVar4 <= *(int *)((int)pvVar1 + 8)) && ((char)param_4 != '\0')) && (bVar3)) {
    if (*(int *)((int)pvVar1 + 0x10) == 0) {
      F_0043cb50(this,(uint)pvVar1,(int)this + (iVar4 * 0x14f + param_1) * 8 + 0x2130);
    }
    else {
      ((code *)*(gen_code32 *)((int)pvVar1 + 0x10))
                (*(int *)((int)pvVar1 + 0x14) + (int)this,param_1,pvVar1,2,param_2,iVar4);
    }
    if ((char)param_5 != '\0') {
      for (piVar2 = *(int * PTR32 *)((int)this + 0x1c0); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,iVar4);
      }
    }
    return 1;
  }
  return local_5;
}

/* ref: FUN_00447980 */
uint F_00447980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x447980u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d8)));
  do {
    uVar1 = (*(uint *)&gen_args[1]);
    if ((piVar2[-3] & (*(uint *)&gen_args[1])) != 0) {
      if (*piVar2 != 0) {
        (*(code *)*piVar2)(piVar2[1] + (int)(*(undefined * PTR32 *)&gen_args[0]),uVar3,piVar2 + -4,3,0,(*(undefined4 *)&gen_args[2]));
      }
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_0043ccc0((*(undefined * PTR32 *)&gen_args[0]),piVar2 + -4,&(*(undefined4 *)(gen_frame + 0x4)));
      if (((byte)(*(undefined4 *)(gen_frame + 0x4)) & 0xf) == 3) {
        F_00447870((*(undefined * PTR32 *)&gen_args[0]),uVar3,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]),1,0);
      }
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 6;
  } while (uVar3 < 0x14f);
  return uVar1;
}

/* ref: FUN_00447a10 */
unsigned int F_00447a10(unsigned int gen_a0)
{
  GEN_ENTER(0x447a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  uint local_8;
  
  local_8 = 0;
  puVar2 = (uint *)((int)this + 0x2bac);
  piVar3 = (int *)((int)this + 0x1d8);
  do {
    F_0043ca30((uint)(piVar3 + -4),(uint)(puVar2 + -0x29f));
    if (*piVar3 == 0) {
      if ((puVar2[-0x29f] & 0xf) == 3) {
        uVar1 = puVar2[-0x29e];
        goto LAB_00447a7e;
      }
    }
    else {
      uVar1 = (*(code *)*piVar3)(piVar3[1] + (int)this,local_8,piVar3 + -4,0,0,0);
LAB_00447a7e: ;
      F_005a2710(puVar2 + -1,3);
      *puVar2 = uVar1;
      F_005a2710(puVar2 + 0x29d,3);
      puVar2[0x29e] = uVar1;
    }
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 6;
    puVar2 = puVar2 + 2;
    if (0x14e < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00447ac0 */
uint F_00447ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x447ac0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint local_8;
  
  local_8 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2bac)));
  piVar2 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d8)));
  do {
    if ((*(byte *)(puVar3 + -0x29f) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = puVar3[-0x29e];
    }
    if ((piVar2[-3] & (*(uint *)&gen_args[1])) != 0) {
      if (*piVar2 == 0) {
        F_0043cb50((*(undefined * PTR32 *)&gen_args[0]),(uint)(piVar2 + -4),(uint)(puVar3 + -0x29f));
      }
      else {
        (*(code *)*piVar2)(piVar2[1] + (int)(*(undefined * PTR32 *)&gen_args[0]),local_8,piVar2 + -4,5,uVar1,0);
      }
      F_005a2710(puVar3 + -1,3);
      *puVar3 = uVar1;
      F_005a2710(puVar3 + 0x29d,3);
      puVar3[0x29e] = uVar1;
    }
    local_8 = local_8 + 1;
    puVar3 = puVar3 + 2;
    piVar2 = piVar2 + 6;
  } while (local_8 < 0x14f);
  return local_8;
}

/* ref: FUN_00447b80 */
uint F_00447b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x447b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  int local_c;
  uint local_8;
  
  uVar2 = 0;
  if (param_1 != 0) {
    local_8 = (int)this + 0x1c8;
    puVar4 = (uint *)(param_1 * 0xa78 + 0x16bc + (int)this);
    local_c = 0x14f;
    do {
      iVar1 = *(int *)(local_8 + 8);
      if ((puVar4[0x29d] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = puVar4[0x29e];
      }
      if ((puVar4[-1] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *puVar4;
      }
      if (uVar3 != uVar2) {
        uVar2 = F_005a2710(puVar4 + -1,3);
        *puVar4 = uVar3;
        if (iVar1 < param_1) {
          uVar2 = F_0043cb50(this,local_8,(uint)(puVar4 + -1));
        }
      }
      local_8 = local_8 + 0x18;
      puVar4 = puVar4 + 2;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return uVar2;
}

/* ref: FUN_00447c20 */
unsigned int F_00447c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x447c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  short * psVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if (*(char *)((int)this + 0x1c0) == '\0') {
    (*(char *)(gen_frame + 0x1b)) = '\0';
    uVar3 = 0;
    psVar2 = (short *)((int)this + 0x1c4);
    do {
      if ((param_1 == *psVar2) && (*(int *)(param_2 + 0x10) == 2)) {
        (*(uint *)(gen_frame + 0xc)) = 0;
        F_0043ca30((uint)psVar2,(uint)&(*(uint *)(gen_frame + 0xc)));
        F_00447870((undefined *)((int)this + -4),uVar3,-(uint)(((*(uint *)(gen_frame + 0xc)) & 0xf) != 0) & (*(uint *)(gen_frame + 0x10)),0,0,
                     0);
        (*(char *)(gen_frame + 0x1b)) = '\x01';
        F_005a2670(&(*(uint *)(gen_frame + 0xc)));
        this = (*(undefined * PTR32 *)(gen_frame + 0x14));
      }
      uVar3 = uVar3 + 1;
      psVar2 = psVar2 + 0xc;
    } while (uVar3 < 0x14f);
    if ((*(char *)(gen_frame + 0x1b)) != '\0') {
      for (piVar1 = *(int * PTR32 *)((int)this + 0x1bc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,0);
      }
    }
  }
  return 0;
}

/* ref: FUN_00447ce0 */
unsigned int F_00447ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x447ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 0) {
    F_00447a10(this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x1c))))(*(int * PTR32 *)((int)this + 0x10));
    F_00821e50();
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    ((code *)*(gen_code32 *)((int)this + 0x18))
              (*(undefined4 *)((int)this + 0x1c),(int)this + 0x20,param_1,
               *(undefined4 *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return 0;
}

/* ref: FUN_00447d30 */
uint F_00447d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x447d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0043cde0(this);
  return uVar1;
}

/* ref: FUN_00447d40 */
unsigned int F_00447d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x447d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(int *)((int)this + 0x2c) != 0) {
    ((code *)*(gen_code32 *)((int)this + 0x28))
              (*(undefined4 *)((int)this + 0x2c),(int)this + 0x30,0,
               *(undefined4 *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  return 0;
}

/* ref: FUN_00447d70 */
uint F_00447d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x447d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_0043d010(this,param_1);
  uVar1 = *(uint *)((int)this + 0x1c0);
  *(uint *)(param_1 + 4) = uVar1;
  *(int *)((int)this + 0x1c0) = param_1;
  *(undefined * PTR32 *)(param_1 + 8) = this;
  return uVar1;
}

/* ref: FUN_00447da0 */
unsigned int F_00447da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x447da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  int * piVar2;
  bool bVar3;
  uint uVar4;
  uint * this_00;
  uint uVar5;
  uint local_14;
  int local_10;
  
  if (param_1 < 5) {
    local_14 = 0;
    do {
      uVar4 = (uint)(byte)(&REFG(undefined, 0x12fdd91))[param_1 + local_14];
      uVar5 = (uint)(byte)(&REFG(undefined1, 0x12fdd90))[local_14];
      bVar3 = false;
      pvVar1 = ((undefined *)GEN_TOP(((int)this + (uVar5 * 3 + 0x39) * 8)));
      if (param_2 < 3) {
        this_00 = ((uint *)GEN_TOP(((int)this + (param_2 * 0x14f + uVar5) * 8 + 0x2130)));
        local_10 = 3 - param_2;
        bVar3 = false;
        do {
          if (((*this_00 & 0xf) == 3) && (uVar4 != this_00[1])) {
            F_005a2710(this_00,3);
            this_00[1] = uVar4;
            bVar3 = true;
          }
          this_00 = this_00 + 0x29e;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      if (((param_2 <= *(int *)((int)pvVar1 + 8)) && ((char)param_3 != '\0')) && (bVar3)) {
        if (*(int *)((int)pvVar1 + 0x10) == 0) {
          F_0043cb50(this,(uint)pvVar1,(int)this + (param_2 * 0x14f + uVar5) * 8 + 0x2130);
        }
        else {
          ((code *)*(gen_code32 *)((int)pvVar1 + 0x10))
                    (*(int *)((int)pvVar1 + 0x14) + (int)this,uVar5,pvVar1,2,uVar4,param_2);
        }
        for (piVar2 = *(int * PTR32 *)((int)this + 0x1c0); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1])
        {
          ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,param_2);
        }
      }
      local_14 = local_14 + 6;
    } while (local_14 < 0xa8);
  }
  return 0;
}

/* ref: FUN_00447ed0 */
uint F_00447ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x447ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  undefined4 * puVar5;
  byte * pbVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (REFG(int, 0x137104c) == 0) {
LAB_00447ef0: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),(&REFG(undefined4, 0x10901dc))[param_1]);
  if (*(int *)(uVar2 + 0x10) != 4) goto LAB_00447ef0;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(uVar2 + 0x14));
  uVar2 = 0;
  do {
    pbVar3 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    pbVar6 = (&REFG(undefined * PTR32, 0x12fde38))[uVar2];
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00447f60: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00447f65;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00447f60;
      pbVar6 = pbVar6 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00447f65: ;
    if (iVar4 == 0) goto LAB_00447fa9;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x10);
  F_0043d1b0();
  puVar5 = (undefined4 *)F_00424cd0();
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar5 + 0x38))((int *)*puVar5);
  if ((char)uVar2 == '\0') {
    if (param_1 == 6) {
      uVar2 = 9;
      goto LAB_00447fa9;
    }
    uVar2 = 10;
    if (param_1 == 5) goto LAB_00447fa9;
  }
  uVar2 = (&REFG(undefined4, 0x1090214))[param_1];
LAB_00447fa9: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00447fd0 */
uint F_00447fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x447fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 gen_out[0x4];
  undefined * this_00;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined * local_8;
  
  local_8 = this;
  this_00 = (undefined *)0x0;
  if (REFG(int, 0x137104c) != 0) {
    iStack_18 = (&REFG(undefined4, 0x10901dc))[param_1];
    iStack_1c = 0x447ff6;
    this_00 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),(&REFG(undefined4, 0x10901dc))[param_1]);
    if (*(int *)((int)this_00 + 0x10) == 4) {
      F_0042cc20((gen_out + 0x0),(&REFG(undefined * PTR32, 0x12fde38))[param_2],REFG(undefined4, 0x108cc50));
      F_00414b60(this_00,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,
                   uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,
                   uStack_2c,uStack_28,uStack_24,uStack_20,iStack_1c,iStack_18);
      iStack_18 = param_2;
      iStack_1c = param_1;
      uStack_20 = 0x44802b;
      this_00 = (undefined *)F_0043d240(local_8,param_1,param_2);
    }
  }
  return (uint)this_00;
}

/* ref: FUN_00448040 */
uint F_00448040(unsigned int gen_a0)
{
  GEN_ENTER(0x448040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (REFG(int, 0x137104c) != 0) {
    this_00 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x4d);
    if (*(int *)((int)this_00 + 0x14) == 1) {
      F_0043d1b0();
      F_00414a40(this_00,0,1);
    }
    iVar2 = 0;
    do {
      uVar1 = F_00447ed0(this,iVar2);
      uVar1 = F_0043d240(this,iVar2,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xe);
  }
  return uVar1;
}

/* ref: FUN_00448090 */
byte F_00448090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x448090u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int * this;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
  this = *(int * PTR32 *)(uVar1 + 0xc);
  uVar1 = ((code *)*(gen_code32 *)(*this + 0x18))(this);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0x2f;
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x48))(param_2);
  this_00 = (undefined *)F_00763050(uVar1,uVar2);
  if (param_3 == 0x10) {
    if (1 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54)) {
      uVar1 = F_0042a990(*(int *)(param_1 + 0x10) + 0x54);
      ((code *)*(gen_code32 *)(*this + 0x1c))(this,uVar1,1);
      return 1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*this + 0x18))(this);
    if (uVar1 == 1) {
      uVar3 = 0;
      uVar2 = 0;
      uVar1 = F_00438700(this,0);
      F_0087d300(this_00,uVar1,uVar2,uVar3);
      return 1;
    }
    uVar2 = 1;
  }
  else {
    if (param_3 != 0x12) {
      return 0;
    }
    if (1 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54)) {
      uVar1 = F_0042a990(*(int *)(param_1 + 0x10) + 0x54);
      ((code *)*(gen_code32 *)(*this + 0x1c))(this,uVar1,0);
      return 1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*this + 0x18))(this);
    uVar2 = 0;
    if (uVar1 == 1) {
      uVar1 = F_00438700(this,0);
      F_0087d4a0(this_00,uVar1,uVar2);
      return 1;
    }
  }
  F_0077c090(this_00,uVar2);
  return 1;
}

/* ref: FUN_004481d0 */
uint F_004481d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4481d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((uint)((param_2[1] - *param_2) / 0x54) < 3) {
    iVar3 = -1;
  }
  else {
    uVar2 = F_00a4cf70(*param_2 + 0xa8,10);
    iVar3 = uVar2 - 1;
  }
  *param_3 = iVar3;
  *param_4 = 0xffffffff;
  uVar2 = (param_2[1] - *param_2) / 0x54;
  if (3 < uVar2) {
    bVar1 = F_0043da00(param_1,*param_2 + 0xfc,param_4);
    if (bVar1 != 0) {
      uVar2 = *param_4;
      if ((0x85 < (int)uVar2) && ((int)uVar2 < 0xa5)) {
        uVar2 = (int)(uVar2 - 0x86) >> 1;
        *param_4 = uVar2;
        return uVar2;
      }
      *param_4 = 0xffffffff;
      return uVar2;
    }
    uVar2 = F_00a4cf70(*param_2 + 0xfc,10);
    uVar2 = uVar2 - 1;
    *param_4 = uVar2;
  }
  return uVar2;
}

/* ref: FUN_004482b0 */
uint F_004482b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4482b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),param_1);
  if ((param_2 & 0xfffffffe) == 0) {
    bVar1 = F_00414a40(this,1,1);
    return CONCAT31(extraout_var_01,bVar1);
  }
  if ((param_2 & 0xfffffffe) != 2) {
    bVar1 = F_00414a40(this,(uint)(*(int *)((int)this + 0x14) == 0),1);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_00414a40(this,0,1);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00448300 */
byte F_00448300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x448300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined * pvVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = param_2 * 3 + 0x39;
  pvVar1 = (undefined *)((int)param_1 + iVar2 * 8);
  if (*(int *)((int)param_1 + iVar2 * 8 + 0x10) == 0) {
    if (((byte)*(undefined4 *)((int)param_1 + param_2 * 8 + 0x2130) & 0xf) == 3) {
      uVar4 = *(uint *)((int)param_1 + param_2 * 8 + 0x2134);
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)((int)pvVar1 + 0x10))
                      (*(int *)((int)pvVar1 + 0x14) + (int)param_1,param_2,pvVar1,1,0,0);
  }
  if ((param_3 & 0xfffffffe) != 0) {
    if ((param_3 & 0xfffffffe) != 2) {
      bVar3 = F_00447870(param_1,param_2,(uint)(uVar4 == 0),0,1,1);
      return bVar3;
    }
    bVar3 = F_00447870(param_1,param_2,0,0,1,1);
    return bVar3;
  }
  bVar3 = F_00447870(param_1,param_2,1,0,1,1);
  return bVar3;
}

/* ref: FUN_00448390 */
unsigned int F_00448390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x448390u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this;
  uint uVar1;
  ulonglong uVar2;
  
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x28);
  if (this != (undefined *)0x0) {
    uVar1 = (*(uint *)&gen_args[1]);
    if (((*(uint *)&gen_args[2]) & 0xfffffffe) != 0) {
      if (((*(uint *)&gen_args[2]) & 0xfffffffe) == 2) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_0077a990(*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c));
        if (*(int *)((int)this + 0x20) != 0 || *(int *)((int)this + 0x24) != 0) {
          *(undefined4 *)((int)this + 0x20) = 0;
          *(undefined4 *)((int)this + 0x24) = 0;
          *(undefined1 *)((int)this + 0x1ec) = 1;
        }
        if (*(char *)((int)this + 0x28) != '\0') {
          *(undefined1 *)((int)this + 0x28) = 0;
          *(undefined1 *)((int)this + 0x1ec) = 1;
        }
        uVar1 = -(uint)(uVar1 != (*(uint *)&gen_args[1])) & (*(uint *)&gen_args[1]);
      }
    }
    uVar2 = F_0077a9f0(uVar1);
    if ((*(int *)((int)this + 0x18) != (int)uVar2) ||
       (*(int *)((int)this + 0x1c) != (int)(uVar2 >> 0x20))) {
      *(ulonglong *)((int)this + 0x18) = uVar2;
      *(undefined1 *)((int)this + 0x1ec) = 1;
    }
    F_004408a0(this,0);
  }
  return 0;
}

/* ref: FUN_00448440 */
uint F_00448440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x448440u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  char * _String;
  int iVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  double dVar5;
  int local_c;
  
  iVar2 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x54 + iVar1 == iVar1) {
    *(undefined4 *)(param_1 + 0x24) = 1000;
  }
  else {
    _String = (char *)F_0042a990(*(undefined4 *)(param_2 + 0x10));
    dVar5 = F_00c4acaa(_String);
    local_c = (int)(longlong)TRUNC((double)(float)dVar5 + REFG(double, 0x1088108));
    *(int *)(param_1 + 0x24) = local_c * 1000;
    if (60000 < (uint)(local_c * 1000)) {
      *(undefined4 *)(param_1 + 0x24) = 60000;
    }
  }
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)(param_1 + 0xc) = (int)_Var3;
  uVar4 = F_00427d90();
  *(ulonglong *)(param_1 + 0x14) = uVar4;
  uVar4 = F_00427e30();
  *(ulonglong *)(param_1 + 0x1c) = uVar4;
  return 0;
}

/* ref: FUN_004484f0 */
unsigned int F_004484f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4484f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined * this_00;
  int iVar2;
  
  if (*(int *)((int)this + 0x770) != -2) {
    bVar1 = F_00abe720(this,(int)this + 0x774);
    if (bVar1 != 0) {
      *(undefined4 *)((int)this + 0x718) = *(undefined4 *)((int)this + 0x770);
      F_0042ccf0((undefined *)((int)this + 0x71c),(int)this + 0x7c8);
    }
    *(undefined4 *)((int)this + 0x770) = 0xfffffffe;
  }
  *(undefined4 *)((int)this + 0x1d4) = *param_1;
  F_0042ccf0((undefined *)((int)this + 0x1d8),param_1 + 1);
  this_00 = (undefined *)((int)this + 0x22c);
  iVar2 = 0xf;
  do {
    F_0042ccf0(this_00,((int)param_1 - ((int)this + 0x1d4)) + (int)this_00);
    this_00 = (undefined *)((int)this_00 + 0x54);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined1 *)((int)this + 0x1ce) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  return 0;
}

/* ref: FUN_004485a0 */
byte F_004485a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4485a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  byte bVar1;
  byte bVar2;
  undefined1 * puVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  bVar2 = 0;
  if (5 < param_1) {
    puVar3 = (undefined1 *)F_0042ce40(((undefined1 *)(gen_frame + 0x204)),&REFG(undefined, 0x10903c4),param_2 + 1);
LAB_00448743: ;
    bVar2 = F_00abe720(this,puVar3);
    puVar3 = ((undefined1 *)(gen_frame + 0x204));
    goto LAB_0044874d;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar4 = F_0042a990(param_3);
    bVar1 = F_0043f660(uVar4);
    if (bVar1 == 0) goto switchD_004485f0_default;
    F_0042cc20(((undefined1 *)(gen_frame + 0x60)),"/tell ",REFG(undefined4, 0x108cc50));
    uVar4 = F_0046e280(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x60)),param_3);
    bVar2 = F_00abe720(this,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    if (bVar2 == 0) goto switchD_004485f0_default;
    F_0042ccf0((undefined *)((int)this + 0x71c),param_3);
    goto LAB_00448754;
  case 1: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x10903d4),REFG(undefined4, 0x108cc50));
    bVar2 = F_00abe720(this,((undefined1 *)(gen_frame + 0xb4)));
    puVar3 = ((undefined1 *)(gen_frame + 0xb4));
    break;
  case 2: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0x15c)),"/party",REFG(undefined4, 0x108cc50));
    bVar2 = F_00abe720(this,((undefined1 *)(gen_frame + 0x15c)));
    puVar3 = ((undefined1 *)(gen_frame + 0x15c));
    break;
  case 3: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0x108)),"/yell",REFG(undefined4, 0x108cc50));
    bVar2 = F_00abe720(this,((undefined1 *)(gen_frame + 0x108)));
    puVar3 = ((undefined1 *)(gen_frame + 0x108));
    break;
  case 4: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)),"/shout",REFG(undefined4, 0x108cc50));
    bVar2 = F_00abe720(this,((undefined1 *)(gen_frame + 0x1b0)));
    puVar3 = ((undefined1 *)(gen_frame + 0x1b0));
    break;
  case 5: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0x204)),(*(undefined * PTR32 (*)[1])REFP(0x10903f4)),REFG(undefined4, 0x108cc50));
    puVar3 = ((undefined1 *)(gen_frame + 0x204));
    goto LAB_00448743;
  default: ;
    goto switchD_004485f0_default;
  }
LAB_0044874d: ;
  F_0042c880(puVar3);
LAB_00448754: ;
  if (bVar2 != 0) {
    *(int *)((int)this + 0x718) = param_2 + param_1;
  }
switchD_004485f0_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
  return bVar2;
}

/* ref: FUN_004487a0 */
byte F_004487a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4487a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x770) == -2) {
    *(undefined4 *)((int)this + 0x770) = *(undefined4 *)((int)this + 0x718);
    uVar2 = F_00abde80(this);
    F_0042ccf0((undefined *)((int)this + 0x774),uVar2);
    F_0042ccf0((undefined *)((int)this + 0x7c8),(int)this + 0x71c);
  }
  bVar1 = F_004485a0(this,param_1,param_2,param_3);
  if (bVar1 == 0) {
    *(undefined4 *)((int)this + 0x770) = 0xfffffffe;
  }
  return bVar1;
}

/* ref: FUN_00448810 */
byte F_00448810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x448810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  char * pcVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  F_00429f90(((undefined1 *)(gen_frame + 0x0)));
  if (-1 < param_1) {
    if (param_1 == 0) {
      if (this == (undefined *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)this + 0x850;
      }
      pcVar1 = "ui/common/keybind_109.ugd";
    }
    else if (param_1 == 2) {
      if (this == (undefined *)0x0) {
        iVar2 = 0;
        pcVar1 = "ui/common/keybind_105b.ugd";
      }
      else {
        iVar2 = (int)this + 0x850;
        pcVar1 = "ui/common/keybind_105b.ugd";
      }
    }
    else if (param_1 == 3) {
      if (this == (undefined *)0x0) {
        iVar2 = 0;
        pcVar1 = "ui/common/keybind_105a.ugd";
      }
      else {
        iVar2 = (int)this + 0x850;
        pcVar1 = "ui/common/keybind_105a.ugd";
      }
    }
    else if (this == (undefined *)0x0) {
      iVar2 = 0;
      pcVar1 = "ui/common/keybind_104.ugd";
    }
    else {
      iVar2 = (int)this + 0x850;
      pcVar1 = "ui/common/keybind_104.ugd";
    }
    F_004471b0(*(undefined * PTR32 *)((int)this + 0x860),pcVar1,iVar2,0);
  }
  *(undefined4 *)((int)this + 0x880) = param_2;
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return 1;
}

/* ref: Client::UI::UIInputData::vf2 */
uint F_004488f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4488f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  byte bVar2;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 3: ;
    bVar1 = F_0043e970(this,0x186);
    bVar2 = F_0043e970(this,0x185);
    return ((uint)bVar1 - (uint)bVar2) * 100;
  case 4: ;
    bVar1 = F_0043e970(this,0x184);
    bVar2 = F_0043e970(this,0x183);
    return ((uint)bVar2 - (uint)bVar1) * 100;
  case 5: ;
    bVar1 = F_0043e970(this,0x18a);
    bVar2 = F_0043e970(this,0x189);
    return ((uint)bVar1 - (uint)bVar2) * 100;
  case 6: ;
    bVar1 = F_0043e970(this,0x188);
    bVar2 = F_0043e970(this,0x187);
    return ((uint)bVar2 - (uint)bVar1) * 100;
  default: ;
    return 0;
  }
}

/* ref: Client::UI::UIInputData::vf3 */
uint F_004489d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4489d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      bVar1 = F_0043e970(this,0x173);
      return (uint)bVar1;
    }
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      bVar1 = F_0043e970(this,0x179);
      return (uint)bVar1;
    case 2: ;
      bVar1 = F_0043e970(this,0x17a);
      return (uint)bVar1;
    case 4: ;
      bVar1 = F_0043e970(this,0x17b);
      return (uint)bVar1;
    case 8: ;
      bVar1 = F_0043e970(this,0x17c);
      return (uint)bVar1;
    case 0x10: ;
      bVar1 = F_0043e970(this,0x17d);
      return (uint)bVar1;
    case 0x20: ;
      bVar1 = F_0043e970(this,0x17e);
      return (uint)bVar1;
    case 0x40: ;
      bVar1 = F_0043e970(this,0x17f);
      return (uint)bVar1;
    case 0x80: ;
      bVar1 = F_0043e970(this,0x180);
      return (uint)bVar1;
    }
  }
  else if (param_1 < 0x1001) {
    if (param_1 == 0x1000) {
      bVar1 = F_0043e970(this,0x177);
      return (uint)bVar1;
    }
    if (param_1 == 0x200) {
      bVar1 = F_0043e970(this,0x174);
      return (uint)bVar1;
    }
    if (param_1 == 0x400) {
      bVar1 = F_0043e970(this,0x175);
      return (uint)bVar1;
    }
    if (param_1 == 0x800) {
      bVar1 = F_0043e970(this,0x176);
      return (uint)bVar1;
    }
  }
  else {
    if (param_1 == 0x2000) {
      bVar1 = F_0043e970(this,0x178);
      return (uint)bVar1;
    }
    if (param_1 == 0x4000) {
      bVar1 = F_0043e970(this,0x182);
      return (uint)bVar1;
    }
    if (param_1 == 0x8000) {
      bVar1 = F_0043e970(this,0x181);
      return (uint)bVar1;
    }
  }
  return 0;
}

/* ref: Client::UI::UIInputData::vf4 */
uint F_00448bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x448bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      bVar1 = F_0043e9f0(this,0x173);
      return (uint)bVar1;
    }
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      bVar1 = F_0043e9f0(this,0x179);
      return (uint)bVar1;
    case 2: ;
      bVar1 = F_0043e9f0(this,0x17a);
      return (uint)bVar1;
    case 4: ;
      bVar1 = F_0043e9f0(this,0x17b);
      return (uint)bVar1;
    case 8: ;
      bVar1 = F_0043e9f0(this,0x17c);
      return (uint)bVar1;
    case 0x10: ;
      bVar1 = F_0043e9f0(this,0x17d);
      return (uint)bVar1;
    case 0x20: ;
      bVar1 = F_0043e9f0(this,0x17e);
      return (uint)bVar1;
    case 0x40: ;
      bVar1 = F_0043e9f0(this,0x17f);
      return (uint)bVar1;
    case 0x80: ;
      bVar1 = F_0043e9f0(this,0x180);
      return (uint)bVar1;
    }
  }
  else if (param_1 < 0x1001) {
    if (param_1 == 0x1000) {
      bVar1 = F_0043e9f0(this,0x177);
      return (uint)bVar1;
    }
    if (param_1 == 0x200) {
      bVar1 = F_0043e9f0(this,0x174);
      return (uint)bVar1;
    }
    if (param_1 == 0x400) {
      bVar1 = F_0043e9f0(this,0x175);
      return (uint)bVar1;
    }
    if (param_1 == 0x800) {
      bVar1 = F_0043e9f0(this,0x176);
      return (uint)bVar1;
    }
  }
  else {
    if (param_1 == 0x2000) {
      bVar1 = F_0043e9f0(this,0x178);
      return (uint)bVar1;
    }
    if (param_1 == 0x4000) {
      bVar1 = F_0043e9f0(this,0x182);
      return (uint)bVar1;
    }
    if (param_1 == 0x8000) {
      bVar1 = F_0043e9f0(this,0x181);
      return (uint)bVar1;
    }
  }
  return 0;
}

/* ref: Client::UI::UIInputData::vf5 */
uint F_00448e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x448e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      bVar1 = F_0043ea70(this,0x173);
      return (uint)bVar1;
    }
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      bVar1 = F_0043ea70(this,0x179);
      return (uint)bVar1;
    case 2: ;
      bVar1 = F_0043ea70(this,0x17a);
      return (uint)bVar1;
    case 4: ;
      bVar1 = F_0043ea70(this,0x17b);
      return (uint)bVar1;
    case 8: ;
      bVar1 = F_0043ea70(this,0x17c);
      return (uint)bVar1;
    case 0x10: ;
      bVar1 = F_0043ea70(this,0x17d);
      return (uint)bVar1;
    case 0x20: ;
      bVar1 = F_0043ea70(this,0x17e);
      return (uint)bVar1;
    case 0x40: ;
      bVar1 = F_0043ea70(this,0x17f);
      return (uint)bVar1;
    case 0x80: ;
      bVar1 = F_0043ea70(this,0x180);
      return (uint)bVar1;
    }
  }
  else if (param_1 < 0x1001) {
    if (param_1 == 0x1000) {
      bVar1 = F_0043ea70(this,0x177);
      return (uint)bVar1;
    }
    if (param_1 == 0x200) {
      bVar1 = F_0043ea70(this,0x174);
      return (uint)bVar1;
    }
    if (param_1 == 0x400) {
      bVar1 = F_0043ea70(this,0x175);
      return (uint)bVar1;
    }
    if (param_1 == 0x800) {
      bVar1 = F_0043ea70(this,0x176);
      return (uint)bVar1;
    }
  }
  else {
    if (param_1 == 0x2000) {
      bVar1 = F_0043ea70(this,0x178);
      return (uint)bVar1;
    }
    if (param_1 == 0x4000) {
      bVar1 = F_0043ea70(this,0x182);
      return (uint)bVar1;
    }
    if (param_1 == 0x8000) {
      bVar1 = F_0043ea70(this,0x181);
      return (uint)bVar1;
    }
  }
  return 0;
}

/* ref: Client::UI::UIInputData::vf6 */
uint F_00449030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x449030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      bVar1 = F_0043eaf0(this,0x173);
      return (uint)bVar1;
    }
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      bVar1 = F_0043eaf0(this,0x179);
      return (uint)bVar1;
    case 2: ;
      bVar1 = F_0043eaf0(this,0x17a);
      return (uint)bVar1;
    case 4: ;
      bVar1 = F_0043eaf0(this,0x17b);
      return (uint)bVar1;
    case 8: ;
      bVar1 = F_0043eaf0(this,0x17c);
      return (uint)bVar1;
    case 0x10: ;
      bVar1 = F_0043eaf0(this,0x17d);
      return (uint)bVar1;
    case 0x20: ;
      bVar1 = F_0043eaf0(this,0x17e);
      return (uint)bVar1;
    case 0x40: ;
      bVar1 = F_0043eaf0(this,0x17f);
      return (uint)bVar1;
    case 0x80: ;
      bVar1 = F_0043eaf0(this,0x180);
      return (uint)bVar1;
    }
  }
  else if (param_1 < 0x1001) {
    if (param_1 == 0x1000) {
      bVar1 = F_0043eaf0(this,0x177);
      return (uint)bVar1;
    }
    if (param_1 == 0x200) {
      bVar1 = F_0043eaf0(this,0x174);
      return (uint)bVar1;
    }
    if (param_1 == 0x400) {
      bVar1 = F_0043eaf0(this,0x175);
      return (uint)bVar1;
    }
    if (param_1 == 0x800) {
      bVar1 = F_0043eaf0(this,0x176);
      return (uint)bVar1;
    }
  }
  else {
    if (param_1 == 0x2000) {
      bVar1 = F_0043eaf0(this,0x178);
      return (uint)bVar1;
    }
    if (param_1 == 0x4000) {
      bVar1 = F_0043eaf0(this,0x182);
      return (uint)bVar1;
    }
    if (param_1 == 0x8000) {
      bVar1 = F_0043eaf0(this,0x181);
      return (uint)bVar1;
    }
  }
  return 0;
}

/* ref: Client::UI::UIModule::vf2 */
unsigned int F_00449250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x449250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 UVar1;
  uint uVar2;
  
  if ((char)param_2 == '\0') {
    *(ushort *)(this + 0x9253c) = *(ushort *)(this + 0x9253c) & ~(ushort)param_1;
  }
  else {
    *(ushort *)(this + 0x9253c) = *(ushort *)(this + 0x9253c) | (ushort)param_1;
  }
  if (((ushort)param_1 & 0xa4) != 0) {
    UVar1 = this[0x9253c];
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x92534) + 0x20))))(*(int * PTR32 *)(this + 0x92534));
    if (((byte)UVar1 & 0xa4) != 0xa4) {
      *(uint *)(uVar2 + 0x820) = *(uint *)(uVar2 + 0x820) | 1;
      return 0;
    }
    *(uint *)(uVar2 + 0x820) = *(uint *)(uVar2 + 0x820) & 0xfffffffe;
  }
  return 0;
}

/* ref: Client::UI::UIModule::vf46 */
uint F_004492b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4492b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_008aa800(pvVar2);
  uVar4 = 1;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x48))(this)));
  F_00763020(pvVar2,uVar4);
  if ((REFG(undefined4, 0x1379694) == 0) || (uVar3 = REFG(undefined4, 0x1379694), *(char *)(REFG(undefined4, 0x1379694) + 0x189) == '\0')) {
    bVar1 = F_00a4a950();
    if (bVar1 != 0) {
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x20))(this)));
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10903d4),REFG(undefined4, 0x108cc50));
      bVar1 = F_00abe720(pvVar2,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      if (bVar1 != 0) {
        *(undefined4 *)((int)pvVar2 + 0x718) = 1;
      }
      uVar4 = 1;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
      F_007c9410(pvVar2,uVar4);
      ((code *)*(gen_code32 *)(*(int *)this + 8))(this,0x1cc,0);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
      *(uint *)(uVar3 + 0x820) = *(uint *)(uVar3 + 0x820) | 2;
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar3;
    }
    uVar4 = 0;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
    F_007c9410(pvVar2,uVar4);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
    *(uint *)(uVar3 + 0x820) = *(uint *)(uVar3 + 0x820) & 0xfffffffd;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_004493c0 */
uint F_004493c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4493c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  byte bVar4;
  ulonglong uVar5;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))();
  this_00 = *(undefined * PTR32 *)(uVar1 + 0x28);
  if (this_00 == (undefined *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if (((0 < param_3) && (((byte)*param_2 & 0xf) == 4)) &&
     ((*(int *)((int)this_00 + 0x20) != param_2[1] || (*(int *)((int)this_00 + 0x24) != 0)))) {
    *(undefined4 *)((int)this_00 + 0x20) = param_2[1];
    *(undefined4 *)((int)this_00 + 0x24) = 0;
    *(undefined1 *)((int)this_00 + 0x1ec) = 1;
  }
  if ((1 < param_3) && (((byte)param_2[2] & 0xf) == 3)) {
    if ((this_00 == (undefined *)0xffffffe8) ||
       (*(int *)((int)this_00 + 0x20) != 0 || *(int *)((int)this_00 + 0x24) != 0)) {
      if (*(char *)((int)this_00 + 0x28) == (char)param_2[3]) goto LAB_00449444;
      *(char *)((int)this_00 + 0x28) = (char)param_2[3];
    }
    else {
      if (*(char *)((int)this_00 + 0x28) == '\0') goto LAB_00449444;
      *(undefined1 *)((int)this_00 + 0x28) = 0;
    }
    *(undefined1 *)((int)this_00 + 0x1ec) = 1;
  }
LAB_00449444: ;
  if ((2 < param_3) && (((byte)param_2[4] & 0xf) == 3)) {
    uVar5 = F_0077a9f0(param_2[5]);
    if ((*(int *)((int)this_00 + 0x18) != (int)uVar5) ||
       (*(int *)((int)this_00 + 0x1c) != (int)(uVar5 >> 0x20))) {
      *(ulonglong *)((int)this_00 + 0x18) = uVar5;
      *(undefined1 *)((int)this_00 + 0x1ec) = 1;
    }
  }
  if ((3 < param_3) && (((byte)param_2[6] & 0xf) == 4)) {
    bVar4 = (byte)param_2[7];
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x220) + 0xc))))(*(int * PTR32 *)((int)this + 0x220))))
    ;
    if ((*piVar2 == 4) ||
       (piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x220) + 0xc))))
                                  (*(int * PTR32 *)((int)this + 0x220)))), *piVar2 == 5)) {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x220) + 0xc))))(*(int * PTR32 *)((int)this + 0x220))));
      bVar4 = '\x01' << ((byte)*puVar3 & 0x1f) | bVar4;
    }
    if ((bVar4 != 0) && (*(byte *)((int)this_00 + 0x29) != bVar4)) {
      *(byte *)((int)this_00 + 0x29) = bVar4;
      *(undefined1 *)((int)this_00 + 0x1ec) = 1;
    }
  }
  if ((4 < param_3) && (((byte)param_2[8] & 0xf) == 6)) {
    F_00440970(this_00,param_2[9]);
  }
  F_004408a0(this_00,0);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_00449540 */
unsigned int F_00449540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x449540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_ecx;
  int * piVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)this + 0x13) != '\0') {
    *(undefined1 *)((int)this + 0x13) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),1);
    if ((char)param_1 != '\0') {
      F_0043f8b0(0x34);
    }
    uVar2 = 0x5a;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar1 = (int *)F_00763050(in_ecx,uVar2);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  return 0;
}

/* ref: FUN_004495a0 */
unsigned int F_004495a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4495a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_ecx;
  int * piVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)this + 0x13) != '\0') {
    *(undefined1 *)((int)this + 0x13) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),1);
    uVar2 = 0x5a;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar1 = (int *)F_00763050(in_ecx,uVar2);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_004495e0 */
unsigned int F_004495e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4495e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_ecx;
  int * piVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)this + 0x13) != '\0') {
    *(undefined1 *)((int)this + 0x13) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),1);
    uVar2 = 0x5a;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar1 = (int *)F_00763050(in_ecx,uVar2);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00449620 */
unsigned int F_00449620(unsigned int gen_a0)
{
  GEN_ENTER(0x449620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_ecx;
  int * piVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)this + 0x13) != '\0') {
    *(undefined1 *)((int)this + 0x13) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),1);
    F_0043f8b0(0x34);
    uVar2 = 0x5a;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar1 = (int *)F_00763050(in_ecx,uVar2);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  *(undefined1 *)((int)this + 0x14) = 1;
  return 0;
}

/* ref: FUN_00449670 */
uint F_00449670(unsigned int gen_a0)
{
  GEN_ENTER(0x449670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int * piVar3;
  bool bVar4;
  undefined4 uVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x80))))(*(int * PTR32 *)((int)this + 4),0);
  if ((char)uVar2 != '\0') {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
    if ((*(byte *)(uVar2 + 0x2c24c) & 0x3c) == 0) {
      bVar1 = F_00a34970(this_00,0x163);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        bVar4 = *(char *)((int)this + 0x13) == '\0';
        *(bool *)((int)this + 0x13) = bVar4;
        F_0043f8b0(!bVar4 + 0x33);
        if (*(char *)((int)this + 0x13) == '\0') {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),1);
        }
        uVar5 = 0x5a;
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
        piVar3 = (int *)F_00763050(uVar2,uVar5);
        uVar2 = 0;
        if (piVar3 != (int *)0x0) {
          if (*(char *)((int)this + 0x13) == '\0') {
            uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
            return uVar2;
          }
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x94))))(*(int * PTR32 *)((int)this + 4),1);
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00449740 */
uint F_00449740(unsigned int gen_a0)
{
  GEN_ENTER(0x449740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined * this_01;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
  uVar7 = 3;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00763050(uVar3,uVar7);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
  cVar1 = *(char *)(uVar3 + 0x2c24c);
  iVar5 = *(int *)(uVar3 + 0x1bd48);
  bVar6 = false;
  uVar4 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xdc);
  if (iVar5 == 0) {
    bVar6 = false;
    goto LAB_004497d1;
  }
  if (iVar5 != 1) {
    if (iVar5 != 2) goto LAB_004497d1;
    if (-1 < cVar1) {
      bVar6 = *(int *)(uVar4 + 0x14) != 0;
      goto LAB_004497d1;
    }
  }
  bVar6 = true;
LAB_004497d1: ;
  if ((*(char *)((int)this + 0x13) == '\0') && ((*(byte *)(uVar3 + 0x2c24c) & 0x3c) == 0)) {
    bVar2 = F_00a34970(this_01,0xbc);
    if (bVar2 != 0) {
      *(undefined2 *)((int)this + 0x11) = 0x101;
    }
    bVar2 = F_00a34870(this_01,0xbc);
    if (bVar2 == 0) {
      *(undefined1 *)((int)this + 0x12) = 0;
      *(byte *)(uVar3 + 0x2c24c) = *(byte *)(uVar3 + 0x2c24c) & 0xfe;
      if (*(char *)((int)this + 0x11) != '\0') {
        if (bVar6) {
          F_0046eea0(uVar3,(uint)(-1 < cVar1));
        }
        else {
          F_007d5c00(this_00);
        }
        F_0043f8b0(0x22);
        *(undefined1 *)((int)this + 0x11) = 0;
      }
    }
    else if (*(char *)((int)this + 0x12) != '\0') {
      *(byte *)(uVar3 + 0x2c24c) = *(byte *)(uVar3 + 0x2c24c) | 1;
    }
    bVar2 = F_00a34a70(this_01,0xbc);
    if (bVar2 != 0) {
      *(undefined1 *)((int)this + 0x11) = 0;
    }
    iVar5 = 0xd5;
    do {
      bVar2 = F_00a34970(this_01,iVar5);
      uVar4 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        F_007d5b50(this_00,iVar5 + -0xcb);
        uVar4 = F_0043f8b0(0x22);
        *(undefined1 *)((int)this + 0x11) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xdd);
  }
  return uVar4;
}

/* ref: FUN_004498c0 */
uint F_004498c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4498c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint in_ecx;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4));
  in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = (int *)F_00763050(in_ecx,0x56);
  ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  F_0043f8b0(0x18);
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = F_00a34270(uVar1);
  return uVar1;
}

/* ref: FUN_00449910 */
uint F_00449910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x449910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined * this_01;
  undefined4 uVar5;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,6);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x2f)));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar4 = F_00763050(uVar4,0x56);
  F_0043f8b0(param_1);
  F_00778ba0(uVar4,uVar3,this,0,&REFG(undefined, 0x108d00f));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  F_0042e430((undefined *)((int)this + 0x30),&REFG(undefined, 0x108d01f));
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d34))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d34))) = 0;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4));
  if (*(int *)(uVar3 + 600) == 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x34) + 8))))(*(int * PTR32 *)(uVar3 + 0x34),"Addon");
    *(uint *)(uVar3 + 600) = uVar4;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 600) + 0x24))))(*(int * PTR32 *)(uVar3 + 600),0xcfb)));
  uVar5 = 0;
  this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  uVar3 = F_00cb0950(this_01,uVar5);
  uVar3 = F_00431250(this_00,2,uVar3,0,1,0);
  *(undefined4 *)((int)this + 0x18) = 1;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return uVar3;
}

/* ref: FUN_00449a30 */
byte F_00449a30(unsigned int gen_a0)
{
  GEN_ENTER(0x449a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4))));
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4))));
  (*(byte *)(gen_frame + 0x3)) = 0;
  bVar1 = F_00a34970(pvVar3,4);
  if (bVar1 != 0) {
    (*(byte *)(gen_frame + 0x3)) = F_0043f600(this);
  }
  bVar1 = F_00a34970(pvVar3,0x15d);
  if ((bVar1 != 0) && ((*(byte *)(gen_frame + 0x3)) == 0)) {
    F_007cc180(this_00,0x1f);
  }
  bVar1 = F_00a34970(pvVar3,0xe0);
  if (bVar1 != 0) {
    F_007cc180(this_00,8);
  }
  bVar1 = F_00a34970(pvVar3,0xe1);
  if (bVar1 != 0) {
    F_007cc180(this_00,0xc);
  }
  bVar1 = F_00a34970(pvVar3,0xe4);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x19);
  }
  bVar1 = F_00a34970(pvVar3,0xe5);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x3f);
  }
  bVar1 = F_00a34970(pvVar3,0xe7);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x18);
  }
  bVar1 = F_00a34970(pvVar3,0xe3);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x2a);
  }
  bVar1 = F_00a34970(pvVar3,0xe8);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x13);
  }
  bVar1 = F_00a34970(pvVar3,0xe9);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x2d);
  }
  bVar1 = F_00a34970(pvVar3,0xea);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x1e);
  }
  bVar1 = F_00a34970(pvVar3,0xeb);
  if (bVar1 != 0) {
    this_02 = (undefined *)F_00763050(this_00,5);
    if (this_02 != (undefined *)0x0) {
      F_0086e930(this_02,0);
    }
  }
  bVar1 = F_00a34970(pvVar3,0xec);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x14);
  }
  bVar1 = F_00a34970(pvVar3,0xed);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x1f);
  }
  bVar1 = F_00a34970(pvVar3,0xee);
  if (bVar1 != 0) {
    F_007cc180(this_00,0xf);
  }
  bVar1 = F_00a34970(pvVar3,0xef);
  if (bVar1 != 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"/return",REFG(undefined4, 0x108cc50));
    F_00abefa0(this_01,((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 4));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  bVar1 = F_00a34970(pvVar3,0xf0);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x28);
  }
  bVar1 = F_00a34970(pvVar3,0xf1);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x1a);
  }
  bVar1 = F_00a34970(pvVar3,0xf2);
  if (bVar1 != 0) {
    F_007cc180(this_00,0xe);
  }
  bVar1 = F_00a34970(pvVar3,0xe2);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x29);
  }
  bVar1 = F_00a34970(pvVar3,0xfa);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x58);
  }
  bVar1 = F_00a34970(pvVar3,0xfb);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x5c);
  }
  bVar1 = F_00a34970(pvVar3,0xfc);
  if (bVar1 != 0) {
    F_007cc180(this_00,0xd);
  }
  bVar1 = F_00a34970(pvVar3,0xdf);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x15);
  }
  bVar1 = F_00a34970(pvVar3,0xfd);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x16);
  }
  bVar1 = F_00a34970(pvVar3,0xfe);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x5b);
  }
  bVar1 = F_00a34970(pvVar3,0xf3);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x10);
  }
  bVar1 = F_00a34970(pvVar3,0xf4);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x3b);
  }
  bVar1 = F_00a34970(pvVar3,0xf5);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x49);
  }
  bVar1 = F_00a34970(pvVar3,0xe6);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x55);
  }
  bVar1 = F_00a34970(pvVar3,0xf6);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x51);
  }
  bVar1 = F_00a34970(pvVar3,0xf7);
  if (bVar1 != 0) {
    F_007cc180(this_00,0x4a);
  }
  bVar1 = F_00a34970(pvVar3,0xf8);
  if (bVar1 != 0) {
    F_007cc180(this_00,0xb);
  }
  bVar1 = F_00a34970(pvVar3,0xf9);
  if (bVar1 != 0) {
    F_007cc180(this_00,10);
  }
  bVar2 = F_00a34970(pvVar3,0xde);
  bVar1 = 0;
  if (bVar2 != 0) {
    pvVar3 = (undefined *)F_00763050(this_00,3);
    bVar1 = 0;
    if (pvVar3 != (undefined *)0x0) {
      bVar1 = F_007d5d70(pvVar3);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return bVar1;
}

/* ref: FUN_00449e30 */
unsigned int F_00449e30(unsigned int gen_a0)
{
  GEN_ENTER(0x449e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    F_004449f0(piVar1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  }
  if (*(int *)((int)this + 0x28) != 0) {
    F_00440810();
    return 0;
  }
  return 0;
}

/* ref: FUN_00449ea0 */
uint F_00449ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x449ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  uint in_EAX = 0;
  uint uVar1;
  
  this_00 = *(int * PTR32 *)((int)this + 0x10);
  if (this_00 != (int *)0x0) {
    F_004449f0(this_00);
    uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00449ec0 */
unsigned int F_00449ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x449ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x34) != (undefined *)0x0) {
    F_00441300(*(undefined * PTR32 *)((int)this + 0x34),param_1);
    if ((char)param_1 == '\x01') {
      *(undefined1 *)((int)this + 0xb0) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00449ef0 */
unsigned int F_00449ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x449ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x660))) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[6] = 0;
    *(undefined1 *)(piVar1 + 8) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    piVar1[9] = 0;
    *(undefined1 *)(piVar1 + 0xb) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    piVar1[4] = 0;
    *(undefined1 *)(piVar1 + 6) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    F_00c48350(piVar1 + 10,0,0xb0);
    piVar1[0xc] = 0x630001;
    piVar1[10] = -1;
    piVar1[0xb] = -1;
    piVar1[0x10] = 0xff;
    piVar1[0x11] = 0;
    piVar1[0xe] = 0xff;
    piVar1[0xf] = 0;
    piVar1[0x12] = 0;
    piVar1[0x13] = 0;
    *(undefined1 *)(piVar1 + 8) = 0;
    F_00c48350(piVar1 + 0x14,0,100);
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar1 != (int *)0x0) {
    piVar1[6] = 0;
    *(undefined1 *)(piVar1 + 8) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if (piVar1 != (int *)0x0) {
    piVar1[4] = 0;
    *(undefined1 *)(piVar1 + 6) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyCatalogSearch::vf4 */
unsigned int F_0044a000(unsigned int gen_a0)
{
  GEN_ENTER(0x44a000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0043fe60(this,0,100);
  return 0;
}

/* ref: FUN_0044a010 */
uint F_0044a010(unsigned int gen_a0)
{
  GEN_ENTER(0x44a010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(uint)*(byte *)((int)this + 0x10));
  (*(uint *)(gen_frame + 0x54)) = uVar2;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(uint)*(byte *)((int)this + 0x11));
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  if ((uVar2 != 0) && (uVar3 != 0)) {
    uVar2 = *(uint *)((int)this + 8);
    (*(uint *)(gen_frame + 0x64)) = 0;
    if (uVar2 != 0) {
      (*(uint *)(gen_frame + 0x5c)) = 0;
      do {
        uVar7 = (*(uint *)(gen_frame + 0x64)) + 1;
        (*(uint *)(gen_frame + 0x50)) = uVar7;
        (*(uint *)(gen_frame + 0x68)) = uVar7;
        uVar3 = (*(uint *)(gen_frame + 0x5c));
        if (uVar7 < uVar2) {
          (*(int *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x5c)) + 0x48;
          do {
            iVar5 = *(int *)((int)this + 0x18);
            if (*(ushort *)((*(int *)(gen_frame + 0x60)) + 0x14 + iVar5) < *(ushort *)(uVar3 + 0x14 + iVar5)) {
              puVar6 = (undefined4 *)((*(int *)(gen_frame + 0x60)) + iVar5);
              puVar8 = (undefined4 *)(uVar3 + iVar5);
              puVar9 = ((undefined4 *)(gen_frame + 0x8));
              for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar9 = puVar9 + 1;
              }
              puVar8 = puVar6;
              puVar9 = (undefined4 *)(uVar3 + iVar5);
              for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar9 = puVar9 + 1;
              }
              puVar8 = ((undefined4 *)(gen_frame + 0x8));
              for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar6 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar6 = puVar6 + 1;
              }
              F_00440340(this,(*(uint *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x68)));
              uVar3 = (*(uint *)(gen_frame + 0x5c));
              uVar7 = (*(uint *)(gen_frame + 0x50));
            }
            uVar2 = (*(uint *)(gen_frame + 0x68)) + 1;
            (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 0x48;
            (*(uint *)(gen_frame + 0x68)) = uVar2;
          } while (uVar2 < *(uint *)((int)this + 8));
        }
        uVar2 = *(uint *)((int)this + 8);
        uVar3 = uVar3 + 0x48;
        (*(uint *)(gen_frame + 0x64)) = uVar7;
        (*(uint *)(gen_frame + 0x5c)) = uVar3;
      } while (uVar7 < uVar2);
    }
  }
  return uVar3;
}

/* ref: FUN_0044a130 */
uint F_0044a130(unsigned int gen_a0)
{
  GEN_ENTER(0x44a130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(uint)*(byte *)((int)this + 0x10));
  (*(uint *)(gen_frame + 0x54)) = uVar2;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(uint)*(byte *)((int)this + 0x11));
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  if ((uVar2 != 0) && (uVar3 != 0)) {
    uVar2 = *(uint *)((int)this + 8);
    (*(uint *)(gen_frame + 0x64)) = 0;
    if (uVar2 != 0) {
      (*(uint *)(gen_frame + 0x5c)) = 0;
      do {
        uVar6 = (*(uint *)(gen_frame + 0x64)) + 1;
        (*(uint *)(gen_frame + 0x50)) = uVar6;
        (*(uint *)(gen_frame + 0x68)) = uVar6;
        uVar3 = (*(uint *)(gen_frame + 0x5c));
        if (uVar6 < uVar2) {
          (*(int *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x5c)) + 0x48;
          do {
            uVar2 = *((uint *)GEN_TOP((uVar3 + 0xc + *(int *)((int)this + 0x18)))) & 8;
            uVar6 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + 0xc + *(int *)((int)this + 0x18)))) & 8;
            if ((uVar2 <= uVar6) && (uVar2 < uVar6)) {
              puVar9 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + *(int *)((int)this + 0x18))));
              puVar4 = ((undefined4 *)GEN_TOP((uVar3 + *(int *)((int)this + 0x18))));
              puVar7 = puVar4;
              puVar8 = ((undefined4 *)(gen_frame + 0x8));
              for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar9;
              for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar4 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar7 = ((undefined4 *)(gen_frame + 0x8));
              for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              F_00440340(this,(*(uint *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x68)));
              uVar3 = (*(uint *)(gen_frame + 0x5c));
            }
            uVar2 = (*(uint *)(gen_frame + 0x68)) + 1;
            (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 0x48;
            (*(uint *)(gen_frame + 0x68)) = uVar2;
            uVar6 = (*(uint *)(gen_frame + 0x50));
          } while (uVar2 < *(uint *)((int)this + 8));
        }
        uVar2 = *(uint *)((int)this + 8);
        uVar3 = uVar3 + 0x48;
        (*(uint *)(gen_frame + 0x64)) = uVar6;
        (*(uint *)(gen_frame + 0x5c)) = uVar3;
      } while (uVar6 < uVar2);
    }
  }
  return uVar3;
}

/* ref: FUN_0044a280 */
uint F_0044a280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x44a280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(uint *)(gen_frame + 0xc2c)) = uVar2;
  if (param_3 == 0) {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 != (undefined *)0x0) {
      (*(undefined2 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
      bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar1 != 0) {
        *(undefined1 *)((int)this + 0x48e) = 1;
      }
    }
    bVar1 = F_00441cd0();
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (*(int *)((int)this + 0x10) == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      uVar2 = *(uint *)(uVar2 + 0x3c);
      *(uint *)((int)this + 0x10) = uVar2;
    }
    if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
      uVar2 = F_00437630(*(undefined * PTR32 *)((int)this + 0x10),param_1,param_2);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_0044a340 */
uint F_0044a340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44a340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  undefined3 extraout_var = 0;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  if (*(int *)(uVar3 + 0x48) == 0 && *(int *)(uVar3 + 0x4c) == 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 8) + 8))) == 0) {
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar3 + 8) + 0x18)));
      uVar6 = *puVar1;
      uVar5 = puVar1[1];
    }
    *(undefined4 *)(uVar3 + 0x48) = uVar6;
    *(undefined4 *)(uVar3 + 0x4c) = uVar5;
  }
  if ((param_1 == *(int *)(uVar3 + 0x48)) && (param_2 == *(int *)(uVar3 + 0x4c))) {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 != (undefined *)0x0) {
      (*(undefined2 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
      bVar2 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar2 != 0) {
        *(undefined1 *)((int)this + 0x48e) = 1;
      }
    }
    F_00441cd0();
    uVar6 = 0x3f;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar4 = (int *)F_00763050(uVar3,uVar6);
    uVar3 = 0;
    if ((piVar4 == (int *)0x0) ||
       (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4), (char)uVar3 == '\0')) goto LAB_0044a46f;
  }
  else {
    uVar6 = 0x3f;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar4 = (int *)F_00763050(uVar3,uVar6);
    uVar3 = 0;
    if ((piVar4 == (int *)0x0) ||
       (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4), (char)uVar3 == '\0')) goto LAB_0044a46f;
    bVar2 = F_00441cd0();
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar3 + 0x3c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar3 = F_00437630(*(undefined * PTR32 *)((int)this + 0x10),param_1,param_2);
  }
LAB_0044a46f: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar3;
}

/* ref: FUN_0044a490 */
uint F_0044a490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44a490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(uint *)(gen_frame + 0xc2c)) = uVar2;
  if (param_2 == 0) {
    if ((char)param_1 == *(char *)((int)this + 0x32)) {
      pvVar3 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      if (pvVar3 != (undefined *)0x0) {
        (*(undefined2 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
        bVar1 = F_00974da0(pvVar3,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        if (bVar1 != 0) {
          *(undefined1 *)((int)this + 0x48e) = 1;
        }
      }
    }
    uVar4 = 0x3f;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    pvVar3 = (undefined *)F_00763050(uVar2,uVar4);
    uVar2 = 0;
    if (pvVar3 != (undefined *)0x0) {
      uVar2 = F_008a0010(pvVar3,param_1,1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_0044a550 */
uint F_0044a550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44a550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if ((char)param_1 == *(char *)((int)this + 0x32)) {
    pvVar2 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (pvVar2 != (undefined *)0x0) {
      (*(undefined2 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
      bVar1 = F_00974da0(pvVar2,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar1 != 0) {
        *(undefined1 *)((int)this + 0x48e) = 1;
      }
    }
  }
  uVar4 = 0x3f;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  pvVar2 = (undefined *)F_00763050(uVar3,uVar4);
  uVar3 = 0;
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_008a0010(pvVar2,param_1,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar3;
}

/* ref: FUN_0044a600 */
uint F_0044a600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44a600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(uint *)(gen_frame + 0xc2c)) = uVar2;
  if (param_2 == 0) {
    if (((char)param_1 == *(char *)((int)this + 0x32)) || ((char)param_1 == '\x10')) {
      pvVar3 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      if (pvVar3 != (undefined *)0x0) {
        (*(undefined2 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
        bVar1 = F_00974da0(pvVar3,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        if (bVar1 != 0) {
          *(undefined1 *)((int)this + 0x48e) = 1;
        }
      }
    }
    uVar4 = 0x3f;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    pvVar3 = (undefined *)F_00763050(uVar2,uVar4);
    uVar2 = 0;
    if (pvVar3 != (undefined *)0x0) {
      uVar2 = F_008a0120(pvVar3,param_1,1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_0044a6c0 */
uint F_0044a6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44a6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (((char)param_1 == *(char *)((int)this + 0x32)) || ((char)param_1 == '\x10')) {
    pvVar2 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (pvVar2 != (undefined *)0x0) {
      (*(undefined2 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
      bVar1 = F_00974da0(pvVar2,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar1 != 0) {
        *(undefined1 *)((int)this + 0x48e) = 1;
      }
    }
  }
  uVar4 = 0x3f;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  pvVar2 = (undefined *)F_00763050(uVar3,uVar4);
  uVar3 = 0;
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_008a0120(pvVar2,param_1,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar3;
}

/* ref: FUN_0044a780 */
uint F_0044a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x44a780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  pbVar2 = &REFG(undefined1, 0x14ab071);
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_0044a7d2: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0044a7d7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_0044a7d2;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0044a7d7: ;
  if (iVar3 == 0) {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 != (undefined *)0x0) {
      (*(undefined2 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
      bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar1 != 0) {
        *(undefined1 *)((int)this + 0x48e) = 1;
      }
    }
  }
  bVar1 = F_00441d60();
  uVar4 = CONCAT31(extraout_var,bVar1);
  if (*(int *)((int)this + 0x10) == 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar4 = *(uint *)(uVar4 + 0x3c);
    *(uint *)((int)this + 0x10) = uVar4;
  }
  if ((*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) && (uVar4 = param_2, (byte)param_2 < 0x10)) {
    uVar4 = F_00437760(*(undefined * PTR32 *)((int)this + 0x10),param_1,param_2);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar4;
}

/* ref: FUN_0044a870 */
uint F_0044a870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x44a870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (param_3 == 0xb) {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 != (undefined *)0x0) {
      (*(undefined2 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
      bVar1 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar1 != 0) {
        *(undefined1 *)((int)this + 0x48e) = 1;
      }
    }
  }
  uVar4 = 0x3f;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar3 = (int *)F_00763050(uVar2,uVar4);
  uVar2 = 0;
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
    if ((char)uVar2 != '\0') {
      bVar1 = F_00441d60();
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (*(int *)((int)this + 0x10) == 0) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar2 + 0x3c);
      }
      if ((*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) && (uVar2 = param_2, (byte)param_2 < 0x10))
      {
        uVar2 = F_00437760(*(undefined * PTR32 *)((int)this + 0x10),param_1,param_2);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_0044a960 */
uint F_0044a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44a960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(uint *)(gen_frame + 0xc2c)) = uVar2;
  if ((char)param_2 == '\n') {
    uVar4 = 0x47;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    pvVar3 = (undefined *)F_00763050(uVar2,uVar4);
    uVar2 = 0;
    if (pvVar3 != (undefined *)0x0) {
      uVar2 = F_0077f770(pvVar3,param_1);
    }
  }
  if (param_1 == 0) {
    pvVar3 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    uVar2 = 0;
    if (pvVar3 != (undefined *)0x0) {
      (*(undefined2 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
      bVar1 = F_00974da0(pvVar3,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        *(undefined1 *)((int)this + 0x48e) = 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_0044aa20 */
uint F_0044aa20(unsigned int gen_a0)
{
  GEN_ENTER(0x44aa20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (*(char *)((int)this + 0x30) == '\0') {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    if (*(char *)(uVar3 + 0xb0) != '\0') {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      iVar1 = *(int *)(uVar4 + 0x34);
      uVar3 = uVar4;
      if (iVar1 != 0) {
        if (*(char *)(iVar1 + 0x48e) == '\0') {
          this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
          uVar3 = 0;
          if (this_00 != (undefined *)0x0) {
            (*(undefined2 *)(gen_frame + 0x20)) = 1;
            (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
            (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
            bVar2 = F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
            uVar3 = CONCAT31(extraout_var,bVar2);
            if (bVar2 != 0) {
              *(undefined1 *)(iVar1 + 0x48e) = 1;
            }
          }
        }
        *(undefined1 *)(uVar4 + 0xb0) = 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar3;
}

/* ref: FUN_0044aaf0 */
byte F_0044aaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44aaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x10) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar2 + 0x3c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    bVar1 = F_00443140(*(undefined * PTR32 *)((int)this + 0x10),param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_0044ab20 */
byte F_0044ab20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44ab20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x10) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar2 + 0x3c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    bVar1 = F_004432e0(*(undefined * PTR32 *)((int)this + 0x10),param_1,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_0044ab60 */
uint F_0044ab60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44ab60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  uint in_EAX = 0;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  if (*(byte *)((int)this + 0x30) < 3) {
    if (*(int *)((int)this + 0x14) == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      in_EAX = *(uint *)(uVar2 + 0x40);
      *(uint *)((int)this + 0x14) = in_EAX;
    }
    if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
      uVar2 = F_00442cd0(*(undefined * PTR32 *)((int)this + 0x14),param_1);
      return uVar2;
    }
  }
  else {
    uVar4 = 0x3f;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar3 = (int *)F_00763050(uVar2,uVar4);
    in_EAX = 0;
    if (piVar3 != (int *)0x0) {
      in_EAX = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
      if ((char)in_EAX != '\0') {
        cVar1 = *(char *)((int)this + 0x7b);
        in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar1);
        if ((cVar1 == '\0') || ((cVar1 == '\x01' && (*(char *)((int)this + 0x7c) == '\0')))) {
          if (*(int *)((int)this + 0x10) == 0) {
            in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
            *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(in_EAX + 0x3c);
          }
          if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
            uVar2 = F_00442f70(*(undefined * PTR32 *)((int)this + 0x10),param_1);
            return uVar2;
          }
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_0044abf0 */
byte F_0044abf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44abf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x10) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar2 + 0x3c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    bVar1 = F_004433b0(*(undefined * PTR32 *)((int)this + 0x10),param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_0044ac20 */
byte F_0044ac20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44ac20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x10) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar2 + 0x3c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    bVar1 = F_00443490(*(undefined * PTR32 *)((int)this + 0x10),param_1,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_0044ac60 */
byte F_0044ac60(unsigned int gen_a0)
{
  GEN_ENTER(0x44ac60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_004423a0(this,1);
  return bVar1;
}

/* ref: FUN_0044ac70 */
byte F_0044ac70(unsigned int gen_a0)
{
  GEN_ENTER(0x44ac70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_004423a0(this,0);
  return bVar1;
}

/* ref: FUN_0044ac80 */
uint F_0044ac80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44ac80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar3 = (*(uint *)&gen_args[1]) & 0xff;
  iVar4 = (*(int *)&gen_args[2]);
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),0x10);
      goto LAB_0044acbe;
    }
    if (uVar3 - 3 != 0) {
      return uVar3 - 3 & 0xffffff00;
    }
    if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e))) <= (ushort)(*(int *)&gen_args[2])) {
      (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),0x10);
      iVar4 = (*(int *)&gen_args[2]) - (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e)));
      goto LAB_0044acbe;
    }
  }
  (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),0xf);
LAB_0044acbe: ;
  *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd))) = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + '\x01';
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd))));
  *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (short)iVar4;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 1;
  bVar2 = F_00443560((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),
                       iVar4,(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),uVar1);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyMember::vf7 */
uint F_0044ad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  undefined4 in_EAX = 0;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  int iVar7;
  
  uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),this[0xd]);
  if (this[0xd] == *(undefined *)((int)param_1 + 0xd)) {
    piVar1 = param_1 + 4;
    iVar7 = 0;
    iVar4 = 0;
    piVar6 = piVar1;
    do {
      if (*piVar6 == 0 && piVar6[1] == 0) break;
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 0x14;
    } while (iVar4 < 10);
    if (*(short *)(this + 0x2c) == *(short *)((int)param_1 + 10)) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
    this[0x29] = *(undefined *)(param_1 + 3);
    *(undefined2 *)(this + 0x2a) = *(undefined2 *)(param_1 + 2);
    this[0x28] = *(undefined *)((int)param_1 + 0xe);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    if ((uint)*(ushort *)(this + 0x12) < uVar5 + iVar7) {
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
      iVar4 = *(int *)this;
      pcVar2 = *(gen_code32 *)(iVar4 + 0x18);
      *(short *)(this + 0x2a) =
           (*(short *)((int)param_1 + 10) - (short)uVar5) + *(short *)(this + 0x12);
      uVar5 = (*pcVar2)(this);
      ((code *)*(gen_code32 *)(iVar4 + 4))(this,piVar1,*(ushort *)(this + 0x12) - uVar5);
    }
    else {
      ((code *)*(gen_code32 *)(*(int *)this + 4))(this,piVar1,iVar7);
      if (*(short *)(param_1 + 2) == 0) {
        if ((*(char *)((int)param_1 + 0xe) == '\x03') && (*(char *)(param_1 + 3) == '\x0f')) {
          uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
          if (uVar5 < *(ushort *)(this + 0x12)) {
            F_00443560(this,*param_1,param_1[1],0,0x10,(uint)*(byte *)((int)param_1 + 0xd),
                         (uint)*(byte *)((int)param_1 + 0xe));
            *(undefined2 *)(this + 0x2c) = 0x200;
            this[0x29] = (undefined1)0x10;
            return 0x200;
          }
          uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
          this[0x29] = (undefined1)0x10;
          return uVar5;
        }
      }
      else {
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
        if (uVar5 < *(ushort *)(this + 0x12)) {
          bVar3 = F_00443560(this,*param_1,param_1[1],(uint)*(ushort *)(param_1 + 2),
                               (uint)*(byte *)(param_1 + 3),(uint)*(byte *)((int)param_1 + 0xd),
                               (uint)*(byte *)((int)param_1 + 0xe));
          return CONCAT31(extraout_var,bVar3);
        }
      }
    }
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  }
  return uVar5;
}

/* ref: Client::UI::Info::InfoProxyFriendlist::vf5 */
unsigned int F_0044ae60(unsigned int gen_a0)
{
  GEN_ENTER(0x44ae60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  uint * puVar7;
  uint * puVar8;
  int iVar9;
  undefined4 uVar10;
  uint * local_c;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,(uint)(byte)this[0x10]);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(uint)(byte)this[0x11]);
  if ((uVar4 != 0) && (uVar5 != 0)) {
    if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1908))) !=
        (uint)(*(uint *)(this + 8) < (uint)*(ushort *)(this + 0x12))) {
      *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1908))) =
           (uint)(*(uint *)(this + 8) < (uint)*(ushort *)(this + 0x12));
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    iVar9 = *(int *)(this + 8);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4));
    if (*(int *)(uVar4 + 600) == 0) {
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x34) + 8))))(*(int * PTR32 *)(uVar4 + 0x34),"Addon");
      *(uint *)(uVar4 + 600) = uVar6;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 600) + 0x24))))(*(int * PTR32 *)(uVar4 + 600),299)));
    uVar10 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    uVar4 = F_00cb0950(this_00,uVar10);
    if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar9 * 0x14)))) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar9 * 0x14))) = uVar4;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
  }
  uVar4 = 0;
  puVar7 = (uint *)0x0;
  iVar9 = 0;
  local_c = (uint *)0x0;
  *(undefined4 *)(this + 0x84) = 0;
  if (*(int *)(this + 8) != 0) {
    puVar8 = ((uint *)GEN_TOP((*(int *)(this + 0x18) + 0x10)));
    do {
      uVar5 = *puVar8 >> 4 & 0xf;
      if (uVar5 == 1) {
        *(int *)(this + 0x84) = *(int *)(this + 0x84) + 1;
      }
      else if (uVar5 == 3) {
        if (iVar9 == 0) {
          local_c = puVar8 + 3;
        }
        iVar9 = iVar9 + 1;
      }
      uVar4 = uVar4 + 1;
      puVar8 = puVar8 + 0x12;
      puVar7 = local_c;
    } while (uVar4 < *(uint *)(this + 8));
  }
  iVar1 = *(int *)(this + 0x24);
  if (iVar1 != iVar9) {
    *(int *)(this + 0x24) = iVar9;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)&REFG(undefined1, 0x107fc63);
    }
    F_0042e430(this + 0x30,puVar7);
    if (iVar1 < iVar9) {
      this[0x2c] = (undefined1)0x1;
      F_0043f8b0(0x3b);
    }
  }
  this[0x1c] = (undefined1)0x1;
  if (this[0x1d] == (undefined1)0x0) {
    F_0044a010(this);
  }
  else if (this[0x1d] == (undefined1)0x1) {
    F_0044a130(this);
  }
  this[0x89] = (undefined1)0x0;
  F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0));
  return 0;
}

/* ref: FUN_0044b000 */
uint F_0044b000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44b000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  undefined1 * puVar6;
  byte * pbVar7;
  byte * pbVar8;
  bool bVar9;
  ulonglong uVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 < 2) {
    if (0 < iVar2) {
      *(int *)((int)this + 0x24) = iVar2 + -1;
    }
    uVar3 = F_0042e430((undefined *)((int)this + 0x30),&REFG(undefined1, 0x107fc63));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar3;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990((int)this + 0x30);
  F_0042e430(((undefined1 *)(gen_frame + 0x4)),uVar3);
  pbVar4 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  pbVar8 = param_1;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_0044b090: ;
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0044b095;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_0044b090;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0044b095: ;
  if ((iVar5 == 0) && (uVar3 = 0, *(int *)((int)this + 8) != 0)) {
    pbVar8 = ((byte *)GEN_TOP((*(int *)((int)this + 0x18) + 0x1c)));
    do {
      pbVar4 = pbVar8;
      pbVar7 = param_1;
      if (((byte)*(undefined4 *)(pbVar8 + -0xc) & 0xf0) == 0x30) {
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_0044b0e1: ;
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0044b0e6;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_0044b0e1;
          pbVar7 = pbVar7 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_0044b0e6: ;
        if (iVar5 != 0) {
          puVar6 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x1c + uVar3 * 0x48)));
          *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &REFG(undefined1, 0x107fc63);
          }
          F_0042e430((undefined *)((int)this + 0x30),puVar6);
          break;
        }
      }
      uVar3 = uVar3 + 1;
      pbVar8 = pbVar8 + 0x48;
    } while (uVar3 < *(uint *)((int)this + 8));
  }
  iVar5 = *(int *)((int)this + 0x24);
  if (iVar2 == iVar5) {
    puVar6 = (undefined1 *)F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    *(int *)((int)this + 0x24) = iVar5 + -1;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &REFG(undefined1, 0x107fc63);
    }
    F_0042e430((undefined *)((int)this + 0x30),puVar6);
  }
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar10;
}

/* ref: FUN_0044b160 */
uint F_0044b160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int in_ecx;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1090890));
  *(undefined4 *)((int)this + 0x1918) = 0;
  iVar1 = 7;
  in_ecx = (int)this + 0x1958;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x68;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0x1c90) = 0;
  *(undefined4 *)((int)this + 0x1c94) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0x902;
  *(undefined4 *)((int)this + 0x1920) = 0;
  *(undefined4 *)((int)this + 0x1924) = 0;
  *(undefined4 *)((int)this + 0x1928) = 0;
  *(undefined4 *)((int)this + 0x192c) = 0;
  *(undefined4 *)((int)this + 0x1930) = 0;
  *(undefined4 *)((int)this + 0x1934) = 0;
  *(undefined4 *)((int)this + 0x1938) = 0;
  *(undefined4 *)((int)this + 0x193c) = 0;
  *(undefined4 *)((int)this + 0x1940) = 0;
  *(undefined4 *)((int)this + 0x1944) = 0;
  F_00c48350((undefined *)((int)this + 0x18),0,0x1900);
  return (uint)this;
}

/* ref: FUN_0044b380 */
uint F_0044b380(unsigned int gen_a0)
{
  GEN_ENTER(0x44b380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  int iVar2;
  int * piVar3;
  undefined1 * local_c;
  int local_8;
  
  puVar1 = (undefined1 *)0x0;
  iVar2 = *(int *)((int)this + 8) + -1;
  local_8 = 0;
  local_c = (undefined1 *)0x0;
  if (-1 < iVar2) {
    piVar3 = (int *)((int)this + iVar2 * 0x18 + 0x70);
    do {
      if ((*piVar3 != 0 || piVar3[1] != 0) && ((piVar3[4] & 0x700U) == 0x400)) {
        if (local_8 == 0) {
          local_c = (undefined1 *)F_00439390(this,*piVar3,piVar3[1]);
        }
        local_8 = local_8 + 1;
      }
      piVar3 = piVar3 + -6;
      iVar2 = iVar2 + -1;
      puVar1 = local_c;
    } while (-1 < iVar2);
  }
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != local_8) {
    *(int *)((int)this + 0x10) = local_8;
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &REFG(undefined1, 0x107fc63);
    }
    puVar1 = (undefined1 *)F_0042e430((undefined *)((int)this + 0x1c),puVar1);
    if (iVar2 < local_8) {
      *(undefined1 *)((int)this + 0x18) = 1;
      puVar1 = (undefined1 *)F_0043f8b0(0x3b);
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_0044b420 */
unsigned int F_0044b420(unsigned int gen_a0)
{
  GEN_ENTER(0x44b420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined8 * puVar2;
  int iVar3;
  undefined4 in_ecx;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (*(char *)((int)this + 0x149) != '\0') {
    uVar5 = 0xffffffff;
    if ((*(int *)((int)this + 0x138) != 0 || *(int *)((int)this + 0x13c) != 0) &&
       (uVar7 = 0, *(int *)((int)this + 8) != 0)) {
      piVar4 = (int *)((int)this + 0x70);
      do {
        if ((*piVar4 == *(int *)((int)this + 0x138)) && (piVar4[1] == *(int *)((int)this + 0x13c)))
        {
          uVar5 = uVar7;
          if (-1 < (int)uVar7) goto LAB_0044b4b5;
          break;
        }
        uVar5 = 0xffffffff;
        uVar7 = uVar7 + 1;
        piVar4 = piVar4 + 6;
      } while (uVar7 < *(uint *)((int)this + 8));
    }
    uVar9 = 0;
    uVar7 = uVar5;
    if (*(int *)((int)this + 8) != 0) {
      puVar8 = (uint *)((int)this + 0x80);
      do {
        if ((puVar8[-4] != 0 || puVar8[-3] != 0) && (uVar7 = uVar9, (*puVar8 & 0x700) != 0x400))
        break;
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 6;
        uVar7 = uVar5;
      } while (uVar9 < *(uint *)((int)this + 8));
    }
    if (-1 < (int)uVar7) {
LAB_0044b4b5: ;
      if (*(char *)((int)this + 0x148) == '\0') {
        *(undefined1 *)((int)this + 0x148) = 1;
      }
      iVar1 = uVar7 * 3 + 0xf;
      iVar3 = *(int *)((int)this + iVar1 * 8);
      iVar1 = *(int *)((int)this + iVar1 * 8 + 4);
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0xf);
      if ((uVar5 != 0) && (uVar7 = 0, *(int *)((int)this + 8) != 0)) {
        piVar4 = (int *)((int)this + 0x78);
        while (((piVar4[-2] == 0 && piVar4[-1] == 0 || (*piVar4 != iVar3)) || (piVar4[1] != iVar1)))
        {
          uVar7 = uVar7 + 1;
          piVar4 = piVar4 + 6;
          if (*(uint *)((int)this + 8) <= uVar7) {
            return 0;
          }
        }
        *(uint *)((int)this + 0x130) = uVar7;
        puVar2 = (undefined8 *)((int)this + uVar7 * 0x18 + 0x70);
        *(undefined4 *)((int)this + 0x138) = *(undefined4 *)puVar2;
        *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)((int)puVar2 + 4);
        iVar1 = uVar7 * 3 + 0xf;
        *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + iVar1 * 8);
        *(undefined4 *)((int)this + 0x144) = *(undefined4 *)((int)this + iVar1 * 8 + 4);
        if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1030))) != uVar7) {
          *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1030))) = uVar7;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x102c))) = 1;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
        in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
        uVar11 = 1;
        uVar10 = (undefined4)((ulonglong)*puVar2 >> 0x20);
        pvVar6 = (undefined *)F_00414500(in_ecx,0xb7);
        F_00414a40(pvVar6,uVar10,uVar11);
        uVar10 = *(undefined4 *)puVar2;
        uVar11 = 1;
        pvVar6 = (undefined *)F_00414500(in_ecx,0xb8);
        F_00414a40(pvVar6,uVar10,uVar11);
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
        if (*(int *)(uVar5 + 0x44) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x44) + 0x14))) = *(undefined4 *)((int)this + 0x130);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0044b5f0 */
uint F_0044b5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x44b5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  uint * puVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(uint *)(gen_frame + 0xc2c)) = uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (*(int *)((int)this + 8) != 0) {
    puVar3 = (uint *)((int)this + 0x80);
    do {
      if (((puVar3[-4] != 0 || puVar3[-3] != 0) && ((*puVar3 & 0x700) != 0x400)) &&
         ((*puVar3 & 0x800) == 0)) {
        uVar2 = puVar3[-1];
        uVar1 = puVar3[-2];
        this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
        if (this_00 != (undefined *)0x0) {
          (*(uint *)(gen_frame + 0x24)) = uVar2;
          (*(undefined4 *)(gen_frame + 0x8)) = 0xd1;
          (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
          (*(uint *)(gen_frame + 0x20)) = uVar1;
          F_00974da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        }
      }
      uVar2 = (*(uint *)(gen_frame + 0x4)) + 1;
      puVar3 = puVar3 + 6;
      (*(uint *)(gen_frame + 0x4)) = uVar2;
    } while (uVar2 < *(uint *)((int)this + 8));
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: Client::UI::Info::InfoProxyLinkshellMember::vf5 */
unsigned int F_0044b6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x44b6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(uint)(byte)this[0x10]);
  if (uVar2 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1004))) = 1;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  this[0x1c] = (undefined1)0x1;
  if (this[0x1d] == (undefined1)0x0) {
    F_0044a010(this);
    return 0;
  }
  if (this[0x1d] == (undefined1)0x1) {
    F_0044a130(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_0044b730 */
uint F_0044b730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44b730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  int iVar8;
  char * pcVar9;
  int * piVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,(uint)*(byte *)((int)this + 0x10));
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (uVar5 != 0) {
    uVar6 = uVar5;
    if ((char)param_1 != '\0') {
      uVar6 = (uint)(((byte)*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x10))) & 0xf) == 1);
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x128))) != uVar6) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x128))) = uVar6;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
      uVar6 = (uint)(1 < uVar6);
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 300))) != uVar6) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 300))) = uVar6;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
    }
    uVar5 = uVar6;
    if ((char)param_2 != '\0') {
      iVar2 = *(int *)((int)this + 0x18);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
      uVar5 = uVar5 - 1;
      if (0 < (int)uVar5) {
        pcVar9 = (char *)(iVar2 + 100);
        (*(int *)(gen_frame + 0x28)) = 0x108;
        (*(uint *)(gen_frame + 0x24)) = uVar5;
        do {
          pcVar7 = pcVar9;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          F_0040b1a0(((undefined1 *)(gen_frame + 0x8)),pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
          uVar3 = *(undefined4 *)(pcVar9 + -0xc);
          uVar5 = F_00408810(((undefined1 *)(gen_frame + 0x8)));
          piVar4 = *(int * PTR32 *)((int)this + 0x20);
          (*(uint *)(gen_frame + 0x1c)) = uVar5;
          iVar2 = (*(int *)((int)this + 0x24) - (int)piVar4) / 0x18;
          iVar8 = 0;
          if (0 < iVar2) {
            (*(int *)(gen_frame + 0x10)) = *(int *)(pcVar9 + -0x1c);
            (*(int *)(gen_frame + 0x14)) = *(int *)(pcVar9 + -0x18);
            piVar10 = piVar4;
            do {
              if (((*piVar10 == *(int *)(pcVar9 + -0x1c)) &&
                  (piVar10[1] == *(int *)(pcVar9 + -0x18))) &&
                 ((uVar5 == 0 ||
                  ((piVar10[4] == uVar5 && (*(byte *)(piVar10 + 5) == (byte)((uint)uVar3 >> 0x1c))))
                  ))) {
                uVar6 = (uint)*(byte *)((int)piVar4 + iVar8 * 0x18 + 9);
                goto LAB_0044b8ca;
              }
              iVar8 = iVar8 + 1;
              piVar10 = piVar10 + 6;
            } while (iVar8 < iVar2);
          }
          iVar8 = 0;
          param_1 = piVar4;
          if (iVar2 < 1) {
            uVar6 = 0;
          }
          else {
            do {
              if ((*param_1 == *(int *)(pcVar9 + -0x1c)) && (param_1[1] == *(int *)(pcVar9 + -0x18))
                 ) {
                uVar6 = (uint)*(byte *)((int)piVar4 + iVar8 * 0x18 + 9);
                goto LAB_0044b8ca;
              }
              iVar8 = iVar8 + 1;
              param_1 = param_1 + 6;
            } while (iVar8 < iVar2);
            uVar6 = 0;
          }
LAB_0044b8ca: ;
          uVar5 = *(uint *)((*(uint *)(gen_frame + 0x18)) + 0x20);
          if (*(uint *)(uVar5 + (*(int *)(gen_frame + 0x28))) != uVar6) {
            *(uint *)(uVar5 + (*(int *)(gen_frame + 0x28))) = uVar6;
            *(undefined1 *)((*(uint *)(gen_frame + 0x18)) + 0x1d) = 1;
          }
          F_004087f0(((undefined1 *)(gen_frame + 0x8)));
          (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 4;
          pcVar9 = pcVar9 + 0x48;
          uVar6 = (*(uint *)(gen_frame + 0x24)) - 1;
          (*(uint *)(gen_frame + 0x24)) = uVar6;
          this = (*(undefined * PTR32 *)(gen_frame + 0x20));
        } while (uVar6 != 0);
      }
    }
  }
  return uVar5;
}

/* ref: FUN_0044b910 */
uint F_0044b910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x44b910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte * pbVar12;
  bool bVar13;
  bool bVar14;
  uint local_c;
  
  uVar9 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  if (((uVar9 != 0) && (param_1 < (int)uVar9)) && (param_2 < (int)uVar9)) {
    uVar9 = (*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20)) / 0x18;
    uVar11 = 0xffffffff;
    uVar10 = 0;
    local_c = 0xffffffff;
    if (0 < (int)uVar9) {
      pbVar12 = ((byte *)GEN_TOP((*(int *)((int)this + 0x20) + 9)));
      bVar13 = false;
      bVar14 = uVar9 == 0;
      do {
        if (bVar13 || bVar14) {
                    
          F_00c457e7("invalid vector<T> subscript");
        }
        uVar8 = local_c;
        if (((pbVar12[-1] != 0) && (uVar8 = uVar10, (uint)*pbVar12 != param_1 + 1U)) &&
           (uVar8 = local_c, (uint)*pbVar12 == param_2 + 1U)) {
          uVar11 = uVar10;
        }
        local_c = uVar8;
        uVar10 = uVar10 + 1;
        pbVar12 = pbVar12 + 0x18;
        bVar13 = uVar9 < uVar10;
        bVar14 = uVar9 == uVar10;
      } while (!bVar14 && (int)uVar10 <= (int)uVar9);
      uVar9 = local_c;
      if ((-1 < (int)local_c) && (-1 < (int)uVar11)) {
        iVar2 = *(int *)((int)this + 0x20);
        iVar6 = local_c * 0x18;
        uVar1 = *(undefined1 *)(iVar2 + 0x14 + iVar6);
        uVar3 = *(undefined4 *)(iVar2 + iVar6);
        uVar4 = *(undefined4 *)(iVar2 + 4 + iVar6);
        uVar5 = *(undefined4 *)(iVar2 + 0x10 + iVar6);
        iVar7 = uVar11 * 0x18;
        *(undefined4 *)(iVar2 + iVar6) = *(undefined4 *)(iVar7 + iVar2);
        *(undefined4 *)(iVar2 + 4 + iVar6) = *(undefined4 *)(iVar7 + 4 + iVar2);
        iVar2 = *(int *)((int)this + 0x20);
        *(undefined4 *)(iVar7 + iVar2) = uVar3;
        *(undefined4 *)(iVar7 + 4 + iVar2) = uVar4;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x10 + iVar6))) =
             *((undefined4 *)GEN_TOP((iVar7 + 0x10 + *(int *)((int)this + 0x20))));
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x10 + iVar7))) = uVar5;
        *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x14 + iVar6))) =
             *((undefined1 *)GEN_TOP((iVar7 + 0x14 + *(int *)((int)this + 0x20))));
        uVar9 = *(uint *)((int)this + 0x20);
        *(undefined1 *)(uVar9 + 0x14 + iVar7) = uVar1;
      }
    }
    if ((char)param_3 != '\0') {
      uVar9 = F_0044b730(this,0,1);
    }
  }
  return uVar9;
}

/* ref: FUN_0044ba50 */
uint F_0044ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44ba50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined2 *)((int)this + 0x14) = 0x640;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0xc81113);
  uVar1 = F_00406bb0(0x3840,0,0);
  *(uint *)((int)this + 0x18) = uVar1;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10911b4));
  *(undefined4 *)((int)this + 0xd8) = 0;
  F_00c48350((undefined4 *)((int)this + 0x28),0,0xb0);
  *(undefined4 *)((int)this + 0x30) = 0x630001;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0xff;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xff;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  F_00c48350((undefined *)((int)this + 0x50),0,100);
  return (uint)this;
}

/* ref: FUN_0044bb10 */
unsigned int F_0044bb10(unsigned int gen_a0)
{
  GEN_ENTER(0x44bb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * _Dst;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = 0;
  do {
    uVar1 = F_00424750(REFG(undefined4, 0x137104c));
    if (uVar1 != 0) {
      if (uVar3 == 0) {
        uVar5 = 0;
        iVar4 = (int)this + 0x30;
      }
      else {
        if (uVar3 != 1) {
          if (uVar3 == 2) {
            _Dst = (undefined *)((int)this + 0x15e);
            uVar1 = F_00424750(REFG(undefined4, 0x137104c));
            if (uVar1 != 0) {
              F_00c48350(_Dst,0,0x97);
              uVar1 = 0;
              do {
                uVar2 = F_00ab3c30(uVar1);
                if (uVar2 == 0) {
                  *(undefined1 *)(uVar1 + (int)_Dst) = 0;
                }
                else {
                  *(bool *)(uVar1 + (int)_Dst) = (*(byte *)(uVar2 + 0xd) & 4) != 0;
                }
                uVar1 = uVar1 + 1;
              } while (uVar1 < 0x97);
            }
          }
          else {
            F_00c48350((undefined *)(uVar3 * 0x97 + 0x30 + (int)this),0,0x97);
          }
          goto LAB_0044bbd4;
        }
        uVar5 = 1;
        iVar4 = (int)this + 199;
      }
      F_004460e0(iVar4,uVar5);
    }
LAB_0044bbd4: ;
    uVar3 = uVar3 + 1;
    if (3 < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0044bbf0 */
byte F_0044bbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x44bbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  if (3 < param_3) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c) ^ (uint)(uint)(gen_frame + 0x9c));
    return 0;
  }
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x0)),0,0x97);
  iVar2 = 0;
  pcVar1 = param_1;
  do {
    if (*pcVar1 != 'E') {
      F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
      return 0;
    }
    *(bool *)((int)&(*(undefined4 *)(gen_frame + 0x0)) + iVar2) = pcVar1[2] != '\0';
    if (pcVar1 + (byte)(pcVar1[1] + 2) < param_1 + param_2) {
      pcVar1 = pcVar1 + (byte)(pcVar1[1] + 2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x97);
  puVar3 = &(*(undefined4 *)(gen_frame + 0x0));
  puVar4 = (undefined4 *)(param_3 * 0x97 + 0x30 + (int)this);
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return 1;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf1 */
uint F_0044bcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x44bcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = (*(int *)&gen_args[3]);
  iVar1 = (*(int *)&gen_args[2]);
  if (((char)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) != '\0') && ((*(int *)&gen_args[2]) != 0)) {
    (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
    uVar4 = F_00407d50((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]) + -1);
    if ((0 < (int)uVar4) && (bVar3 = F_0044bbf0((*(undefined * PTR32 *)&gen_args[0]),iVar1,iVar2,(*(undefined4 *)&gen_args[4])), bVar3 != 0)) {
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) + 1;
      (*(undefined * PTR32 *)&gen_args[0])[0x2c] = (undefined1)0x0;
      return 1;
    }
    (*(undefined * PTR32 *)&gen_args[0])[0x2c] = (undefined1)0x0;
  }
  F_004461b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[4]));
  *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) + 1;
  return 1;
}

/* ref: FUN_0044bd50 */
uint F_0044bd50(unsigned int gen_a0)
{
  GEN_ENTER(0x44bd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 8) != '\0') && (*(int *)((int)this + 0xb4) == 0)) {
    uVar1 = F_00446380((uint)*(byte *)((int)this + 9),*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 0xb4) = uVar1;
  }
  return *(uint *)((int)this + 0xb4);
}

/* ref: FUN_0044bd80 */
uint F_0044bd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44bd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_1 * 0x10 + param_2) * 0x164 + 0x48 + (int)this)));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[0x2d] = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0xff;
  *(undefined1 *)((int)puVar1 + 0xb) = 0xff;
  puVar1[0x2e] = 0xfffffffe;
  F_0042aca0(puVar1 + 3);
  F_0042aca0(puVar1 + 0x2f);
  uVar2 = (uint)*(byte *)((int)this + 0x39);
  if ((*(uint *)((int)this + 0x40) & 1 << ((byte)param_1 & 0x1f)) != 0) {
    uVar2 = 0;
  }
  iVar3 = (param_1 + uVar2 * 0x12) * 0x10 + param_2;
  *(undefined1 *)((int)this + iVar3 * 8 + 0x1bd4c) = *(undefined1 *)(puVar1 + 2);
  uVar2 = (int)this + iVar3 * 8 + 0x1bd4c;
  *(undefined4 *)(uVar2 + 4) = *puVar1;
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar2;
}

/* ref: FUN_0044be20 */
uint F_0044be20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44be20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte * pbVar5;
  uint uVar6;
  byte * pbVar7;
  byte * pbVar8;
  byte * pbVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pbVar5 = (byte *)F_0043b1d0(this,0);
  if (2 < param_2) {
    pbVar8 = param_1 + param_2;
    pbVar9 = param_1 + 2;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x1090ae0));
    (*(byte * PTR32 *)(gen_frame + 0x4)) = param_1;
    (*(byte * PTR32 *)(gen_frame + 0x8)) = pbVar8;
    (*(byte * PTR32 *)(gen_frame + 0xc)) = param_1;
    (*(undefined1 *)(gen_frame + 0x12)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    pbVar5 = param_1;
    if (pbVar9 <= pbVar8) {
      do {
        pbVar7 = pbVar5 + (byte)(pbVar5[1] + 2);
        (*(undefined1 *)(gen_frame + 0x11)) = 0;
        if (*pbVar5 == 0x4a) {
          bVar1 = *pbVar9;
          if (pbVar7 < pbVar8) {
            (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
            (*(byte * PTR32 *)(gen_frame + 0xc)) = pbVar7;
            pbVar5 = pbVar7;
          }
          if (bVar1 < 0x1d) {
            pbVar7 = pbVar5 + (byte)(pbVar5[1] + 2);
            (*(undefined1 *)(gen_frame + 0x11)) = 0;
            if (*pbVar5 != 0x53) goto LAB_0044beb8;
            bVar2 = pbVar5[2];
            if (pbVar7 < pbVar8) {
              (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
              (*(byte * PTR32 *)(gen_frame + 0xc)) = pbVar7;
              pbVar5 = pbVar7;
            }
            if (bVar2 < 0x12) {
              pbVar7 = pbVar5 + (byte)(pbVar5[1] + 2);
              (*(undefined1 *)(gen_frame + 0x11)) = 0;
              if (*pbVar5 != 0x49) goto LAB_0044beb8;
              bVar3 = pbVar5[2];
              if (pbVar7 < pbVar8) {
                (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
                (*(byte * PTR32 *)(gen_frame + 0xc)) = pbVar7;
                pbVar5 = pbVar7;
              }
              if (bVar3 < 0x10) {
                (*(byte *)(gen_frame + 0x10)) = *pbVar5;
                (*(undefined1 *)(gen_frame + 0x11)) = 0;
                if (*pbVar5 == 0x54) {
                  bVar4 = pbVar5[2];
                  F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
                  pbVar5 = (*(byte * PTR32 *)(gen_frame + 0xc));
                  pbVar8 = (*(byte * PTR32 *)(gen_frame + 0x8));
                  if (bVar4 < 0x12) {
                    (*(byte *)(gen_frame + 0x10)) = *(*(byte * PTR32 *)(gen_frame + 0xc));
                    (*(undefined1 *)(gen_frame + 0x11)) = 0;
                    if (*(*(byte * PTR32 *)(gen_frame + 0xc)) == 0x56) {
                      uVar6 = F_0046f610((*(byte * PTR32 *)(gen_frame + 0xc)) + 2,0x10);
                      F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
                      pbVar5 = ((byte *)GEN_TOP(((int)this +
                                       (((uint)bVar2 + (uint)bVar1 * 0x12) * 0x10 + (uint)bVar3) * 8
                                       + 0x1bd4c)));
                      *pbVar5 = bVar4;
                      *(uint *)(pbVar5 + 4) = uVar6;
                      pbVar5 = (*(byte * PTR32 *)(gen_frame + 0xc));
                      pbVar8 = (*(byte * PTR32 *)(gen_frame + 0x8));
                    }
                    else {
                      F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
                      pbVar5 = (*(byte * PTR32 *)(gen_frame + 0xc));
                      pbVar8 = (*(byte * PTR32 *)(gen_frame + 0x8));
                    }
                  }
                }
                else {
                  F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
                  pbVar5 = (*(byte * PTR32 *)(gen_frame + 0xc));
                  pbVar8 = (*(byte * PTR32 *)(gen_frame + 0x8));
                }
              }
            }
          }
        }
        else {
LAB_0044beb8: ;
          (*(undefined1 *)(gen_frame + 0x11)) = 0;
          if (pbVar7 < pbVar8) {
            (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
            (*(byte * PTR32 *)(gen_frame + 0xc)) = pbVar7;
            pbVar5 = pbVar7;
          }
        }
        pbVar9 = pbVar5 + 2;
      } while (pbVar9 <= pbVar8);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)pbVar5;
}

/* ref: FUN_0044bfc0 */
uint F_0044bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44bfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  cVar1 = *(char *)((int)this + 0x71d8);
  puVar2 = (undefined4 *)((int)this + 0x70b4);
  puVar3 = (undefined4 *)((int)this + 0x71dc);
  for (iVar4 = 0x48; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((cVar1 != '\0') || (*(int *)((int)this + 0x71d4) == -1)) {
    F_00446e40(this);
  }
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  iVar4 = 0xd;
  do {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  puVar3 = (undefined4 *)(param_1 * 0x120 + 0x7c + (int)this);
  iVar4 = 0xe;
  do {
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar3 = puVar3 + 4;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  F_00a46200(&REFG(undefined, 0x14a4230),param_1,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: FUN_0044c070 */
uint F_0044c070(unsigned int gen_a0)
{
  GEN_ENTER(0x44c070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  *(undefined1 *)((int)this + 0x71d8) = 1;
  *(byte *)((int)this + 0x70ed) = *(byte *)((int)this + 0x70ed) & 0xfe;
  if ((*(char *)((int)this + 0x71d8) == '\0') && (*(int *)((int)this + 0x71d4) == 100)) {
    *(undefined4 *)((int)this + 0x71d4) = 0xffffffff;
    *(undefined1 *)((int)this + 0x71d8) = 0;
  }
  *(undefined1 *)((int)this + 0x2c) = 1;
  uVar2 = 0x50;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x48))))(*(int * PTR32 *)((int)this + 0x30));
  this_00 = (undefined *)F_00763050(uVar1,uVar2);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_007d2430(this_00);
  }
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar1;
}

/* ref: FUN_0044c0d0 */
uint F_0044c0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x44c0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  char * pcVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 uVar10;
  
  uVar5 = param_1;
  if (param_1 == 100) {
    uVar5 = 0xffffffff;
  }
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230));
  uVar2 = (uint)bVar1;
  if ((int)uVar5 < (int)uVar2) {
    if (((char)param_3 == '\0') || ((char)param_2 == '\0')) {
      puVar6 = (undefined4 *)((int)this + 0x71dc);
      puVar8 = (undefined4 *)((int)this + 0x70b4);
      for (iVar4 = 0x48; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    else if (uVar5 == 0xffffffff) {
      F_0047de70(this);
    }
    if ((char)param_3 != '\0') {
      if (-1 < (int)uVar5) {
        iVar4 = uVar5 * 0x120;
        pbVar3 = (byte *)((int)this + iVar4 + 0x6d);
        *pbVar3 = *pbVar3 ^ (((char)param_2 == '\0') * '\x02' ^ *(byte *)((int)this + iVar4 + 0x6d))
                            & 2;
        iVar9 = 7;
        pbVar3 = (byte *)((int)this + iVar4 + 0x84);
        pcVar7 = (char *)(param_4 + 5);
        do {
          pbVar3[-0x10] = pbVar3[-0x10] ^ (pcVar7[-5] ^ pbVar3[-0x10]) & 1;
          bVar1 = (pcVar7[-4] * '\x02' ^ pbVar3[-0x10]) & 2 ^ pbVar3[-0x10];
          pbVar3[-0x10] = bVar1;
          pbVar3[-0x10] = (pcVar7[-3] * '\x04' ^ bVar1) & 4 ^ bVar1;
          *pbVar3 = *pbVar3 ^ (pcVar7[-2] ^ *pbVar3) & 1;
          bVar1 = (pcVar7[-1] * '\x02' ^ *pbVar3) & 2 ^ *pbVar3;
          *pbVar3 = bVar1;
          iVar9 = iVar9 + -1;
          *pbVar3 = (*pcVar7 * '\x04' ^ bVar1) & 4 ^ bVar1;
          pbVar3 = pbVar3 + 0x20;
          pcVar7 = pcVar7 + 6;
        } while (iVar9 != 0);
      }
      if ((char)param_2 != '\0') {
        if (uVar5 < 100) {
          *(uint *)((int)this + 0x71d4) = uVar5;
        }
        else {
          *(undefined4 *)((int)this + 0x71d4) = 0xffffffff;
        }
        *(undefined1 *)((int)this + 0x71d8) = 0;
      }
      uVar10 = 0x50;
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x48))))(*(int * PTR32 *)((int)this + 0x30));
      this_00 = (undefined *)F_00763050(uVar5,uVar10);
      uVar2 = 0;
      if (this_00 != (undefined *)0x0) {
        uVar2 = F_007d2430(this_00);
      }
      *(undefined1 *)((int)this + 0x2c) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_0044c230 */
uint F_0044c230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44c230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  char cVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined1 * puVar5;
  uint uVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  byte * pbVar11;
  char * pcVar12;
  undefined4 * puVar13;
  char * pcVar14;
  undefined4 uVar15;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  pcVar14 = param_1 + param_2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)) = (*(undefined * PTR32 (*)[1])REFP(0x1090ae0));
  (*(char * PTR32 *)(gen_frame + 0x64)) = param_1;
  (*(char * PTR32 *)(gen_frame + 0x68)) = pcVar14;
  (*(char * PTR32 *)(gen_frame + 0x6c)) = param_1;
  (*(undefined1 *)(gen_frame + 0x72)) = 0;
  (*(int *)(gen_frame + 0x74)) = 0;
  puVar5 = ((undefined1 *)(gen_frame + 0x94));
  iVar10 = 7;
  do {
    puVar5[-0x1c] = puVar5[-0x1c] & 0xf8;
    *(undefined4 *)(puVar5 + -0x14) = 0;
    puVar5[-0x10] = 0;
    puVar5[-0xc] = puVar5[-0xc] & 0xf8;
    *(undefined4 *)(puVar5 + -4) = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 0x20;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  pcVar7 = param_1 + 2;
  if ((pcVar7 <= pcVar14) && ((*(undefined1 *)(gen_frame + 0x71)) = 0, *param_1 == 'V')) {
    uVar15 = 0x10;
    uVar6 = F_0042cc20(((undefined1 *)(gen_frame + 0xc)),pcVar7,REFG(undefined4, 0x108cc50));
    pcVar7 = (char *)F_00a4cf70(uVar6,uVar15);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    pcVar8 = param_1 + (byte)(param_1[1] + 2);
    pcVar12 = param_1;
    if (pcVar8 < pcVar14) {
      (*(char * PTR32 *)(gen_frame + 0x6c)) = pcVar8;
      (*(int *)(gen_frame + 0x74)) = 1;
      pcVar12 = pcVar8;
    }
    if ((pcVar7 == (char *)0x66) || (0x65 < (int)pcVar7)) {
      if (pcVar12 + 2 <= pcVar14) {
        if (*pcVar12 == 'R') {
          iVar10 = (int)pcVar12[2];
          *(int *)((int)this + 0x71d4) = iVar10;
          if ((iVar10 < 0) || (99 < iVar10)) {
            *(undefined4 *)((int)this + 0x71d4) = 0xffffffff;
          }
          pcVar7 = pcVar12 + (byte)(pcVar12[1] + 2);
          if (pcVar7 < pcVar14) {
            (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
            (*(char * PTR32 *)(gen_frame + 0x6c)) = pcVar7;
            pcVar12 = pcVar7;
          }
        }
        (*(undefined1 *)(gen_frame + 0x71)) = 0;
        if (*pcVar12 == 'r') {
          *(bool *)((int)this + 0x71d8) = pcVar12[2] != '\0';
          pcVar7 = pcVar12 + (byte)(pcVar12[1] + 2);
          if (pcVar7 < pcVar14) {
            (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
            (*(char * PTR32 *)(gen_frame + 0x6c)) = pcVar7;
            pcVar12 = pcVar7;
          }
        }
      }
      pcVar7 = pcVar12 + 2;
      if (pcVar7 <= pcVar14) {
        do {
          (*(undefined1 *)(gen_frame + 0x71)) = 0;
          if (*pcVar12 == 'A') {
            cVar1 = *pcVar7;
            pcVar7 = pcVar12 + (byte)(pcVar12[1] + 2);
            if (pcVar7 < pcVar14) {
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
              (*(char * PTR32 *)(gen_frame + 0x6c)) = pcVar7;
              pcVar12 = pcVar7;
            }
            pcVar7 = pcVar12 + (byte)(pcVar12[1] + 2);
            (*(undefined1 *)(gen_frame + 0x71)) = 0;
            if (*pcVar12 != 'I') goto LAB_0044c3c6;
            uVar6 = (uint)(byte)pcVar12[2];
            if (pcVar7 < pcVar14) {
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
              (*(char * PTR32 *)(gen_frame + 0x6c)) = pcVar7;
              pcVar12 = pcVar7;
            }
            if (uVar6 < 0x65) {
              pcVar7 = pcVar12 + (byte)(pcVar12[1] + 2);
              (*(undefined1 *)(gen_frame + 0x71)) = 0;
              if (*pcVar12 != 'J') goto LAB_0044c3c6;
              bVar2 = pcVar12[2];
              if (pcVar7 < pcVar14) {
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                (*(char * PTR32 *)(gen_frame + 0x6c)) = pcVar7;
                pcVar12 = pcVar7;
              }
              if (bVar2 < 0x1d) {
                (*(char *)(gen_frame + 0x70)) = *pcVar12;
                (*(undefined1 *)(gen_frame + 0x71)) = 0;
                if (*pcVar12 == 'K') {
                  cVar3 = pcVar12[2];
                  F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                  (*(char *)(gen_frame + 0x70)) = *(*(char * PTR32 *)(gen_frame + 0x6c));
                  (*(undefined1 *)(gen_frame + 0x71)) = 0;
                  if (*(*(char * PTR32 *)(gen_frame + 0x6c)) == 'N') {
                    cVar4 = (*(char * PTR32 *)(gen_frame + 0x6c))[2];
                    F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                    (*(char *)(gen_frame + 0x70)) = *(*(char * PTR32 *)(gen_frame + 0x6c));
                    (*(undefined1 *)(gen_frame + 0x71)) = 0;
                    if (*(*(char * PTR32 *)(gen_frame + 0x6c)) == 'L') {
                      F_00c49908(((undefined1 *)(gen_frame + 0x158)),0x30,(*(char * PTR32 *)(gen_frame + 0x6c)) + 2);
                      F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                      pbVar11 = ((byte *)(gen_frame + 0x78));
                      (*(int *)(gen_frame + 0x8)) = 0xe;
                      do {
                        (*(char *)(gen_frame + 0x70)) = *(*(char * PTR32 *)(gen_frame + 0x6c));
                        (*(undefined1 *)(gen_frame + 0x71)) = 0;
                        if (*(*(char * PTR32 *)(gen_frame + 0x6c)) == 'C') {
                          uVar9 = F_0046f610((*(char * PTR32 *)(gen_frame + 0x6c)) + 2,0x10);
                          *(uint *)(pbVar11 + 8) = uVar9;
                          F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                          (*(char *)(gen_frame + 0x70)) = *(*(char * PTR32 *)(gen_frame + 0x6c));
                          (*(undefined1 *)(gen_frame + 0x71)) = 0;
                          if (*(*(char * PTR32 *)(gen_frame + 0x6c)) == 'S') {
                            uVar9 = F_0046f610((*(char * PTR32 *)(gen_frame + 0x6c)) + 2,0x10);
                            pbVar11[0xc] = (byte)uVar9;
                            F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                            (*(char *)(gen_frame + 0x70)) = *(*(char * PTR32 *)(gen_frame + 0x6c));
                            (*(undefined1 *)(gen_frame + 0x71)) = 0;
                            if (*(*(char * PTR32 *)(gen_frame + 0x6c)) == 'F') {
                              *pbVar11 = *pbVar11 ^ ((*(char * PTR32 *)(gen_frame + 0x6c))[2] != '\0' ^ *pbVar11) & 1;
                              F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                              (*(char *)(gen_frame + 0x70)) = *(*(char * PTR32 *)(gen_frame + 0x6c));
                              (*(undefined1 *)(gen_frame + 0x71)) = 0;
                              if (*(*(char * PTR32 *)(gen_frame + 0x6c)) == 'E') {
                                *pbVar11 = *pbVar11 ^
                                           (((*(char * PTR32 *)(gen_frame + 0x6c))[2] != '\0') * '\x02' ^ *pbVar11) & 2;
                                F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                                (*(char *)(gen_frame + 0x70)) = *(*(char * PTR32 *)(gen_frame + 0x6c));
                                (*(undefined1 *)(gen_frame + 0x71)) = 0;
                                if (*(*(char * PTR32 *)(gen_frame + 0x6c)) == 'W') {
                                  *pbVar11 = *pbVar11 ^
                                             (((*(char * PTR32 *)(gen_frame + 0x6c))[2] != '\0') * '\x04' ^ *pbVar11) & 4;
                                }
                              }
                            }
                          }
                        }
                        (*(undefined1 *)(gen_frame + 0x71)) = 0;
                        F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                        pbVar11 = pbVar11 + 0x10;
                        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
                      } while ((*(int *)(gen_frame + 0x8)) != 0);
                      *(uint *)((int)this + uVar6 * 0x120 + 0x34) = uVar6;
                      F_00c49908((int)this + uVar6 * 0x120 + 0x38,0x30,((undefined1 *)(gen_frame + 0x158)));
                      *(uint *)((int)this + uVar6 * 0x120 + 0x68) = (uint)bVar2;
                      *(char *)((int)this + uVar6 * 0x120 + 0x6c) = cVar3;
                      *(byte *)((int)this + uVar6 * 0x120 + 0x6d) =
                           (cVar4 != '\0') * '\x02' | cVar1 != '\0' |
                           *(byte *)((int)this + uVar6 * 0x120 + 0x6d) & 0xfc;
                      pbVar11 = ((byte *)(gen_frame + 0x78));
                      puVar13 = (undefined4 *)((int)this + uVar6 * 0x120 + 0x74);
                      for (iVar10 = 0x38; pcVar12 = (*(char * PTR32 *)(gen_frame + 0x6c)), pcVar14 = (*(char * PTR32 *)(gen_frame + 0x68)), iVar10 != 0;
                          iVar10 = iVar10 + -1) {
                        *puVar13 = *(undefined4 *)pbVar11;
                        pbVar11 = pbVar11 + 4;
                        puVar13 = puVar13 + 1;
                      }
                    }
                    else {
                      F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                      pcVar12 = (*(char * PTR32 *)(gen_frame + 0x6c));
                      pcVar14 = (*(char * PTR32 *)(gen_frame + 0x68));
                    }
                  }
                  else {
                    F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                    pcVar12 = (*(char * PTR32 *)(gen_frame + 0x6c));
                    pcVar14 = (*(char * PTR32 *)(gen_frame + 0x68));
                  }
                }
                else {
                  F_0047c860(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
                  pcVar12 = (*(char * PTR32 *)(gen_frame + 0x6c));
                  pcVar14 = (*(char * PTR32 *)(gen_frame + 0x68));
                }
              }
            }
          }
          else {
            pcVar7 = pcVar12 + (byte)(pcVar12[1] + 2);
LAB_0044c3c6: ;
            (*(undefined1 *)(gen_frame + 0x71)) = 0;
            if (pcVar7 < pcVar14) {
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
              (*(char * PTR32 *)(gen_frame + 0x6c)) = pcVar7;
              pcVar12 = pcVar7;
            }
          }
          pcVar7 = pcVar12 + 2;
        } while (pcVar7 <= pcVar14);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return (uint)pcVar7;
}

/* ref: Client::UI::Misc::RaptureGearsetModule::vf1 */
byte F_0044c700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x44c700u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  undefined * pRVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (*(int *)&gen_args[3]);
  iVar1 = (*(int *)&gen_args[2]);
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x71d4))) = 0xffffffff;
  (*(undefined * PTR32 *)&gen_args[0])[0x71d8] = (undefined1)0x0;
  pRVar3 = (*(undefined * PTR32 *)&gen_args[0]) + 0x6d;
  iVar5 = 0x65;
  do {
    *pRVar3 = (undefined1)((byte)*pRVar3 & 0xfe);
    pRVar3 = pRVar3 + 0x120;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((char)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) != '\0') {
    if ((*(int *)&gen_args[2]) != 0) {
      (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
      uVar4 = F_00407d50((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]) + -1);
      if (0 < (int)uVar4) {
        F_0044c230((*(undefined * PTR32 *)&gen_args[0]),iVar1,iVar2);
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

/* ref: FUN_0044c780 */
uint F_0044c780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x44c780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  F_00c49908((int)this + 0x20,0xc,"MACRO.DAT");
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10911ec));
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 0x34) = param_2;
  iVar1 = 99;
  iVar2 = (int)this + 0x94;
  do {
    F_0042b630(iVar2 + -0x54);
    F_00401500(iVar2,0x54,0xf,((code *)REFP(0x42b630)));
    iVar2 = iVar2 + 0x544;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00447050(this);
  return (uint)this;
}

/* ref: FUN_0044c810 */
byte F_0044c810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44c810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(char * PTR32 *)(gen_frame + 0x78)) = param_1 + param_2;
  (*(int *)(gen_frame + 0x84)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  pcVar5 = param_1;
  do {
    (*(uint *)(gen_frame + 0xc)) = 0;
    do {
      if (*pcVar5 != 'T') {
LAB_0044c9f1: ;
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return 0;
      }
      iVar4 = (*(uint *)(gen_frame + 0x10)) + (*(uint *)(gen_frame + 0xc));
      F_0042aca0((int)this + iVar4 * 0x544 + 0x40);
      bVar2 = F_0042a800(pcVar5 + 3,REFG(undefined4, 0x108cc50));
      if (bVar2 != 0) {
        iVar1 = **(int * PTR32 *)((int)this + 0x30);
        uVar6 = 0x3c;
        uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x1c)),pcVar5 + 3,REFG(undefined4, 0x108cc50));
        ((code *)*(gen_code32 *)(iVar1 + 0x28))
                  (*(undefined4 *)((int)this + 0x30),(int)this + iVar4 * 0x544 + 0x40,uVar3,uVar6);
        F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
      }
      if (pcVar5 + (ushort)(*(short *)(pcVar5 + 1) + 3) < (*(char * PTR32 *)(gen_frame + 0x78))) {
        (*(int *)(gen_frame + 0x84)) = (*(int *)(gen_frame + 0x84)) + 1;
        pcVar5 = pcVar5 + (ushort)(*(short *)(pcVar5 + 1) + 3);
      }
      if (*pcVar5 != 'I') goto LAB_0044c9f1;
      uVar6 = 0x10;
      uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x1c)),pcVar5 + 3,REFG(undefined4, 0x108cc50));
      uVar3 = F_00a4cf70(uVar3,uVar6);
      F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
      *(uint *)((int)this + iVar4 * 0x544 + 0x3c) = uVar3;
      if (pcVar5 + (ushort)(*(short *)(pcVar5 + 1) + 3) < (*(char * PTR32 *)(gen_frame + 0x78))) {
        (*(int *)(gen_frame + 0x84)) = (*(int *)(gen_frame + 0x84)) + 1;
        pcVar5 = pcVar5 + (ushort)(*(short *)(pcVar5 + 1) + 3);
      }
      iVar4 = (int)this + iVar4 * 0x544 + 0x94;
      (*(int *)(gen_frame + 0x8)) = 0xf;
      do {
        if (*pcVar5 == 'L') {
          F_0042aca0(iVar4);
          bVar2 = F_0042a800(pcVar5 + 3,REFG(undefined4, 0x108cc50));
          if (bVar2 != 0) {
            iVar1 = **(int * PTR32 *)((int)this + 0x30);
            uVar6 = 0xb4;
            uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x1c)),pcVar5 + 3,REFG(undefined4, 0x108cc50));
            ((code *)*(gen_code32 *)(iVar1 + 0x28))(*(undefined4 *)((int)this + 0x30),iVar4,uVar3,uVar6);
            F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
          }
          if (pcVar5 + (ushort)(*(short *)(pcVar5 + 1) + 3) < (*(char * PTR32 *)(gen_frame + 0x78))) {
            (*(int *)(gen_frame + 0x84)) = (*(int *)(gen_frame + 0x84)) + 1;
            pcVar5 = pcVar5 + (ushort)(*(short *)(pcVar5 + 1) + 3);
          }
        }
        else {
          F_0042aca0(iVar4);
        }
        iVar4 = iVar4 + 0x54;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
      } while ((*(int *)(gen_frame + 0x8)) != 0);
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
    } while ((*(uint *)(gen_frame + 0xc)) < 100);
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 100;
    if (99 < (*(uint *)(gen_frame + 0x10))) {
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 1;
    }
  } while( true );
}

/* ref: Client::UI::Misc::RaptureMacroModule::vf1 */
byte F_0044cba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x44cba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = (*(int *)&gen_args[3]);
  iVar1 = (*(int *)&gen_args[2]);
  (*(undefined * PTR32 *)&gen_args[0])[0x2c] = (undefined1)0x1;
  if ((char)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) == '\0') {
    F_0044ca10((*(undefined * PTR32 *)&gen_args[0]));
  }
  else {
    if ((*(int *)&gen_args[2]) == 0) goto LAB_0044cc06;
    (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
    uVar4 = F_00407d50((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]) + -1);
    if ((int)uVar4 < 1) {
LAB_0044cbe3: ;
      F_00447050((*(undefined * PTR32 *)&gen_args[0]));
      (*(undefined * PTR32 *)&gen_args[0])[0x39] = (undefined1)0x1;
      (*(undefined * PTR32 *)&gen_args[0])[0x38] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[4]) + 0));
      return 1;
    }
    bVar3 = F_0044c810((*(undefined * PTR32 *)&gen_args[0]),iVar1,iVar2);
    if (bVar3 == 0) goto LAB_0044cbe3;
  }
  (*(undefined * PTR32 *)&gen_args[0])[0x2c] = (undefined1)0x1;
LAB_0044cc06: ;
  (*(undefined * PTR32 *)&gen_args[0])[0x39] = (undefined1)0x1;
  (*(undefined * PTR32 *)&gen_args[0])[0x38] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[4]) + 0));
  return 1;
}

/* ref: FUN_0044cf40 */
uint F_0044cf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44cf40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  
  if (param_1 == 4) {
    F_00447580(this,(int)this + 0x93c,param_2);
    this = ((undefined *)(uint)(this));
  }
  else {
    if (param_1 == 5) {
      F_00447580(this,(int)this + 0x964,param_2);
      return ((int)(uint)(this)) + 0x990;
    }
    if (param_1 == 6) {
      F_00447580(this,(int)this + 0xa48,param_2);
      return ((int)(uint)(this)) + 0x990;
    }
  }
  return (int)this + 0x990;
}

/* ref: FUN_0044cfa0 */
uint F_0044cfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44cfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint local_8;
  
  uVar4 = 0;
  if (param_1 == 0) {
    iVar6 = *(int *)((int)this + 0x278);
    iVar3 = *(int *)((int)this + 0x27c) - iVar6;
    iVar1 = iVar3 >> 0x1f;
    iVar3 = iVar3 / 0x170 + iVar1;
    if (((uint)(iVar3 - iVar1) <= param_2) || (iVar3 == iVar1)) goto LAB_0044d10d;
    local_8 = 0xffffffff;
    param_1 = 0;
    while( true ) {
      bVar2 = F_0042b6a0((undefined *)(param_1 + 8 + iVar6),&REFG(undefined, 0x108fa38));
      if (((bVar2 != 0) || (**((char * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 8 + param_1))) == '\0')) &&
         (local_8 = local_8 + 1, local_8 == param_2)) break;
      iVar6 = *(int *)((int)this + 0x278);
      param_1 = param_1 + 0x170;
      uVar4 = uVar4 + 1;
      if ((uint)((*(int *)((int)this + 0x27c) - iVar6) / 0x170) <= uVar4) {
        return (int)this + 0xa5c;
      }
    }
    puVar5 = ((undefined4 *)GEN_TOP((uVar4 * 0x170 + *(int *)((int)this + 0x278))));
    *(undefined4 *)((int)this + 0xa5c) = *puVar5;
    *(undefined4 *)((int)this + 0xa60) = puVar5[1];
    F_00471510((undefined *)((int)this + 0xa64),puVar5 + 2);
  }
  else {
    if (param_1 != 3) goto LAB_0044d10d;
    iVar6 = *(int *)((int)this + 0x278);
    if ((uint)((*(int *)((int)this + 0x27c) - iVar6) / 0x170) <= param_2) goto LAB_0044d10d;
    puVar5 = (undefined4 *)(iVar6 + param_2 * 0x170);
    *(undefined4 *)((int)this + 0xa5c) = *(undefined4 *)(iVar6 + param_2 * 0x170);
    *(undefined4 *)((int)this + 0xa60) = puVar5[1];
    F_00471510((undefined *)((int)this + 0xa64),puVar5 + 2);
  }
  F_0042ccf0((undefined *)((int)this + 0xb78),puVar5 + 0x47);
LAB_0044d10d: ;
  return (int)this + 0xa5c;
}

/* ref: FUN_0044d120 */
uint F_0044d120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x44d120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    uVar1 = F_0043d090(this,param_5);
    return uVar1;
  case 1: ;
    uVar1 = F_0043d090(this,param_5);
    this_00 = ((undefined *)GEN_TOP(((int)this + (param_5 * 0x14f + param_1) * 8 + 0x2130)));
    F_005a2710(this_00,3);
    *(uint *)((int)this_00 + 4) = uVar1;
    return uVar1;
  case 2: ;
    F_00447da0(this,param_4,param_5,1);
    return 0;
  case 3: ;
    F_00447da0(this,2,param_5,0);
    F_005a2710((undefined *)((int)this + 0x2d60),3);
    *(undefined4 *)((int)this + 0x2d64) = 1;
    F_005a2710((undefined *)((int)this + 0x37d8),3);
    *(undefined4 *)((int)this + 0x37dc) = 1;
  }
  return 0;
}

/* ref: FUN_0044d1f0 */
uint F_0044d1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x44d1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int param_8 = (int)gen_a7;
  int iVar1;
  undefined4 uVar2;
  
  switch((unsigned int)(uintptr_t)(param_6)) {
  case 0: ;
    iVar1 = param_8 * 0x14f + param_4;
    if ((*(byte *)((int)in_ecx + iVar1 * 8 + 0x2130) & 0xf) == 0) {
      return 0;
    }
    break;
  case 1: ;
    iVar1 = param_8 * 0x14f + param_4;
    if ((*(byte *)((int)in_ecx + iVar1 * 8 + 0x2130) & 0xf) == 0) {
      return 0;
    }
    break;
  case 2: ;
    switch((unsigned int)(uintptr_t)(param_4)) {
    case 0xd: ;
      uVar2 = 0x13;
      break;
    case 0xe: ;
      uVar2 = 0x14;
      break;
    case 0xf: ;
      uVar2 = 0x15;
      break;
    case 0x10: ;
      uVar2 = 0x16;
      break;
    case 0x11: ;
      uVar2 = 0x17;
      break;
    case 0x12: ;
      uVar2 = 0x18;
      break;
    default: ;
      goto switchD_0044d266_default;
    }
    F_00447870(in_ecx,uVar2,0,param_8,1,1);
switchD_0044d266_default: ;
    F_0043cb50(in_ecx,param_5,(int)in_ecx + (param_8 * 0x14f + param_4) * 8 + 0x2130);
    return 0;
  default: ;
    return 0;
  case 5: ;
    F_0043cb50(in_ecx,param_5,(int)in_ecx + (param_8 * 0x14f + param_4) * 8 + 0x2130);
    return 0;
  }
  return *(uint *)((int)in_ecx + iVar1 * 8 + 0x2134);
}

/* ref: FUN_0044d330 */
uint F_0044d330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x44d330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  int iVar2;
  
  uVar1 = param_5;
  if ((char)param_8 != '\0') {
    uVar1 = (uint)(param_5 == 0);
  }
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 0: ;
  case 1: ;
    break;
  case 2: ;
  case 5: ;
    if (uVar1 != 0) {
      REFG(undefined2, 0x14b4eb8) = REFG(undefined2, 0x14b4eb8) | (ushort)param_1;
      F_00a51d60();
      return 0;
    }
    REFG(undefined2, 0x14b4eb8) = REFG(undefined2, 0x14b4eb8) & ~(ushort)param_1;
    F_00a51d60();
    return 0;
  case 3: ;
    F_00447870(this,param_2,param_7,param_6,1,1);
  default: ;
    return 0;
  }
  iVar2 = param_6 * 0x14f + param_2;
  if ((*(byte *)((int)this + iVar2 * 8 + 0x2130) & 0xf) == 0) {
    return 0;
  }
  return *(uint *)((int)this + iVar2 * 8 + 0x2134);
}

/* ref: FUN_0044d3f0 */
uint F_0044d3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44d3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * in_ecx;
  byte bVar1;
  undefined4 * in_EAX = 0;
  undefined3 extraout_var = 0;
  
  in_ecx = REFG(undefined4, 0x137104c);
  if (REFG(undefined4, 0x137104c) != (undefined *)0x0) {
    if ((REFG(undefined4, 0x137104c) != (undefined *)0x0) &&
       (*((char *)GEN_TOP((*(int *)((int)REFG(undefined4, 0x137104c) + 0x10) + 0xac))) != '\0')) {
      bVar1 = F_00976910(REFG(undefined4, 0x137104c));
      if (bVar1 == 0) {
        *(undefined4 *)((int)this + 0x28) = *param_1;
        *(undefined4 *)((int)this + 0x2c) = param_1[1];
        *(undefined4 *)((int)this + 0x30) = param_1[2];
        (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x447d40));
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        *(undefined4 *)((int)this + 0x34) = param_1[3];
        (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x474710));
        (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
        bVar1 = F_00976af0(in_ecx,in_ecx,&(*(gen_code32 *)(gen_frame + 0xc)),0);
        return CONCAT31(extraout_var,bVar1);
      }
    }
    *(undefined4 *)((int)this + 0x1a0) = *param_1;
    *(undefined4 *)((int)this + 0x1a4) = param_1[1];
    *(undefined4 *)((int)this + 0x1a8) = param_1[2];
    *(undefined4 *)((int)this + 0x1ac) = param_1[3];
    *(undefined1 *)((int)this + 0x16d) = 1;
    in_EAX = param_1;
  }
  return (uint)in_EAX & 0xffffff00;
}

/* ref: FUN_0044d4a0 */
uint F_0044d4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x44d4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = REFG(undefined4, 0x137104c);
  if ((REFG(undefined4, 0x137104c) != 0) &&
     (in_ecx = *(int *)(REFG(undefined4, 0x137104c) + 0x10), *(char *)(in_ecx + 0xac) != '\0')) {
    *(undefined1 *)((int)this + 0x3c) = 1;
    uVar1 = F_00414500(in_ecx,0x4e);
    if (*(int *)(uVar1 + 0x14) == 0) {
      *(undefined1 *)((int)this + 0x3c) = 0;
    }
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x1c))))
                                (*(int * PTR32 *)((int)this + 0x10))));
    F_0081fc50(this_00);
    F_00447a10(this);
    F_00448040(this);
    uVar1 = 0;
    if (REFG(undefined4, 0x137104c) != 0) {
      uVar1 = F_00415250(*(undefined * PTR32 *)(REFG(undefined4, 0x137104c) + 0x10),(int)this + 4);
    }
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x16a) = 1;
  return uVar1;
}

/* ref: Client::UI::UIModule::vf23 */
unsigned int F_0044d510(unsigned int gen_a0)
{
  GEN_ENTER(0x44d510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_ecx;
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  if (this[0x92543] != (undefined1)0x0) {
    this[0x92543] = (undefined1)0x0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x92534) + 0x78))))(*(int * PTR32 *)(this + 0x92534),1);
    F_0043f8b0(0x34);
    uVar2 = 0x5a;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x92534) + 0x48))))(*(int * PTR32 *)(this + 0x92534));
    piVar1 = (int *)F_00763050(in_ecx,uVar2);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  this[0x92544] = (undefined1)0x1;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_0075ea00(this_00);
  return 0;
}

/* ref: FUN_0044d580 */
uint F_0044d580(unsigned int gen_a0)
{
  GEN_ENTER(0x44d580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x44))(this)));
  F_00449e30(pvVar3);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  iVar1 = *(int *)(uVar4 + 0x34);
  uVar5 = uVar4;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x48e) == '\0') {
      pvVar3 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      uVar5 = 0;
      if (pvVar3 != (undefined *)0x0) {
        (*(undefined2 *)(gen_frame + 0x20)) = 1;
        (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
        bVar2 = F_00974da0(pvVar3,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        uVar5 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) {
          *(undefined1 *)(iVar1 + 0x48e) = 1;
        }
      }
    }
    *(undefined1 *)(uVar4 + 0xb0) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar5;
}

/* ref: FUN_0044d640 */
uint F_0044d640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44d640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int * piVar1;
  int iVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  bVar3 = *(byte *)(param_1 + 0xd);
  uVar5 = CONCAT31((int3)((uint)param_1 >> 8),bVar3);
  if ((bVar3 & 2) == 0) {
    if ((bVar3 & 4) != 0) {
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
      piVar1 = *(int * PTR32 *)(uVar5 + 0x44);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x44))(this)));
      F_00449ef0(pvVar4);
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x44))(this)));
      F_00449e30(pvVar4);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
      iVar2 = *(int *)(uVar5 + 0x34);
      if (iVar2 != 0) {
        pvVar4 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
        uVar5 = 0;
        if (pvVar4 != (undefined *)0x0) {
          (*(undefined2 *)(gen_frame + 0x20)) = 5;
          (*(undefined4 *)(gen_frame + 0x8)) = 0x117;
          (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
          bVar3 = F_00974da0(pvVar4,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
          uVar5 = CONCAT31(extraout_var,bVar3);
          if (bVar3 != 0) {
            *(undefined1 *)(iVar2 + 0x48e) = 1;
            F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
            return uVar5;
          }
        }
      }
      goto LAB_0044d7c8;
    }
    if ((bVar3 & 1) == 0) {
      if ((bVar3 & 8) != 0) {
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
        F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
        return uVar5;
      }
    }
    else if ((bVar3 & 8) != 0) {
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
      goto LAB_0044d773;
    }
    if ((bVar3 & 1) == 0) {
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x44))(this)));
      uVar5 = F_00449ea0(pvVar4);
    }
  }
  else {
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x44))(this)));
    F_00449ef0(pvVar4);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
    piVar1 = *(int * PTR32 *)(uVar5 + 0x18);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    }
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
LAB_0044d773: ;
    if (*(undefined * PTR32 *)(uVar5 + 0x44) != (undefined *)0x0) {
      bVar3 = F_00445fb0(*(undefined * PTR32 *)(uVar5 + 0x44));
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return CONCAT31(extraout_var_00,bVar3);
    }
  }
LAB_0044d7c8: ;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar5;
}

/* ref: FUN_0044d7e0 */
unsigned int F_0044d7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x44d7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) == 2) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
    if ((*(byte *)(uVar1 + 0x2c24c) & 0x3c) == 0) {
      F_00449910(this,3);
    }
  }
  return 0;
}

/* ref: FUN_0044d810 */
uint F_0044d810(unsigned int gen_a0)
{
  GEN_ENTER(0x44d810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined * this_01;
  int * piVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  byte bVar7;
  bool bVar8;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_01 = (undefined *)F_00763050(uVar4,0x56);
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,6);
  iVar1 = *(int *)(uVar3 + 0x1bd48);
  uVar4 = 0;
  if (uVar6 != 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar2 = F_005594b0(uVar4);
    uVar4 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      bVar2 = F_00a34c40(this_00,0x164);
      bVar8 = (*(byte *)(uVar3 + 0x2c24c) & 0x3c) != 0;
      uVar4 = CONCAT31(extraout_var_00,bVar8);
      bVar7 = *(byte *)(uVar3 + 0x2c24c) >> 1 & 1;
      if (*(int *)((int)this + 0x18) == 0) {
        if ((((bVar8) && (bVar2 != 0)) && (bVar7 != 0)) && (iVar1 != 1)) {
          F_00778b90(this_01);
          F_00a34270(this_00);
          uVar4 = F_0043f8b0(0xd);
          *(undefined4 *)((int)this + 0x18) = 1;
        }
      }
      else if ((*(int *)((int)this + 0x18) != 4) && ((bVar2 != 0 || (bVar7 == 0)))) {
        if (*((int *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x2d34))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x2d34))) = 0;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        uVar4 = F_004498c0(this);
        return uVar4;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_0044d930 */
uint F_0044d930(unsigned int gen_a0)
{
  GEN_ENTER(0x44d930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  F_00763050(uVar1,3);
  uVar1 = F_00763050(uVar1,0x56);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,6);
  if (uVar3 != 0) {
    if (*(int *)(uVar1 + 0x6c) == 1) {
      F_0044bd80(this_00,*(undefined4 *)((int)this + 0x2c),*(undefined4 *)((int)this + 0x1c));
      uVar3 = F_00449910(this,0x12);
    }
    else if (*(int *)(uVar1 + 0x6c) == 2) {
      *(undefined4 *)((int)this + 0x18) = 2;
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_0044d9c0 */
uint F_0044d9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x44d9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00449ef0(this);
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  uVar1 = F_0042aca0((int)this + 0x50);
  return uVar1;
}

/* ref: FUN_0044d9e0 */
unsigned int F_0044d9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44d9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((*(char *)((int)this + 0x1d) != (char)param_1) &&
     (*(char *)((int)this + 0x1d) = (char)param_1, *(char *)((int)this + 0x1c) != '\0')) {
    if ((char)param_1 == '\0') {
      F_0044a010(this);
      return 0;
    }
    if ((char)param_1 == '\x01') {
      F_0044a130(this);
    }
  }
  return 0;
}

/* ref: FUN_0044da10 */
uint F_0044da10(unsigned int gen_a0)
{
  GEN_ENTER(0x44da10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = (int *)F_00763050(uVar1,uVar3);
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if ((((char)uVar1 != '\0') && (*(char *)((int)this + 0x7b) == '\x01')) &&
       (*(char *)((int)this + 0x7c) == '\0')) {
      if (*(int *)((int)this + 0x10) == 0) {
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar1 + 0x3c);
      }
      if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
        uVar1 = F_0044ac80(*(undefined * PTR32 *)((int)this + 0x10),(uint)*(byte *)((int)this + 0x7d),
                             (uint)*(ushort *)((int)this + 0x7e));
      }
    }
  }
  return uVar1;
}

/* ref: FUN_0044da80 */
uint F_0044da80(unsigned int gen_a0)
{
  GEN_ENTER(0x44da80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x10) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    in_EAX = *(uint *)(uVar1 + 0x3c);
    *(uint *)((int)this + 0x10) = in_EAX;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x10);
  if (this_00 != (undefined *)0x0) {
    if (*(byte *)((int)this + 0x7b) == 0) {
      in_EAX = F_0044ac80(this_00,1,0);
    }
    else {
      in_EAX = *(byte *)((int)this + 0x7b) - 1;
      if ((in_EAX == 0) && (*(char *)((int)this + 0x7c) == '\0')) {
        uVar1 = F_0044ac80(this_00,(uint)*(byte *)((int)this + 0x7d),
                             (uint)*(ushort *)((int)this + 0x7e));
        return uVar1;
      }
    }
  }
  return in_EAX;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyMember::vf4 */
uint F_0044dad0(unsigned int gen_a0)
{
  GEN_ENTER(0x44dad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0044ac80(this,3,0);
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyLinkshell::vf1 */
unsigned int F_0044dae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44dae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 IVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined * pIVar6;
  
  uVar2 = param_2;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0xf);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0xd)));
  this[0x14a] = (undefined1)0x0;
  if (((uVar4 != 0) && (this_00 != (undefined *)0x0)) && (param_2 < 9)) {
    IVar1 = this[0x149];
    param_2 = 0x280;
    if (uVar2 != 0) {
      piVar3 = (int *)(param_1 + 0x10);
      iVar5 = 0x1008;
      pIVar6 = this + 0x70;
      param_1 = uVar2;
      do {
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar5))) != *piVar3) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar5))) = *piVar3;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        iVar5 = iVar5 + 4;
        F_00431250(this_00,param_2,piVar3 + 1,0,1,0);
        *(int *)pIVar6 = piVar3[-4];
        *(int *)(pIVar6 + 4) = piVar3[-3];
        *(int *)(pIVar6 + 8) = piVar3[-2];
        *(int *)(pIVar6 + 0xc) = piVar3[-1];
        *(int *)(pIVar6 + 0x10) = *piVar3;
        param_2 = param_2 + 1;
        if (*(int *)pIVar6 != 0 || *(int *)(pIVar6 + 4) != 0) {
          this[0x149] = (undefined1)((char)this[0x149] + '\x01');
        }
        pIVar6 = pIVar6 + 0x18;
        piVar3 = piVar3 + 0xe;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1028))) != *(int *)(this + 8)) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1028))) = *(int *)(this + 8);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x102c))) = 1;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
    F_0044b380(this);
    if (((IVar1 == (undefined1)0x0) && (this[0x149] != (undefined1)0x0)) &&
       (this[0x148] == (undefined1)0x0)) {
      F_0044b420(this);
    }
    F_0044b5f0(this);
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyLinkshell::vf2 */
unsigned int F_0044dc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44dc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined * pIVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0xf);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0xd)));
  if ((uVar3 != 0) && (this_00 != (undefined *)0x0)) {
    uVar5 = 0;
    if (*(int *)(this + 8) != 0) {
      pIVar4 = this + 0x70;
      do {
        if ((*(int *)pIVar4 == *param_1) && (*(int *)(pIVar4 + 4) == param_1[1])) {
          iVar1 = uVar5 * 3 + 0xf;
          pIVar4 = this + iVar1 * 8;
          if ((*(int *)pIVar4 == *(int *)(this + 0x140)) &&
             (*(int *)(this + iVar1 * 8 + 4) == *(int *)(this + 0x144))) {
            F_00444aa0(this,*(int *)pIVar4,*(int *)(this + iVar1 * 8 + 4),0);
          }
          *(int *)pIVar4 = 0;
          *(int *)(pIVar4 + 4) = 0;
          *(undefined4 *)(this + uVar5 * 0x18 + 0x70) = 0;
          *(undefined4 *)(this + uVar5 * 0x18 + 0x74) = 0;
          *(undefined4 *)(this + uVar5 * 0x18 + 0x80) = 0;
          if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1008 + uVar5 * 4))) != 0) {
            *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1008 + uVar5 * 4))) = 0;
            *(undefined1 *)(uVar3 + 0x1d) = 1;
          }
          F_00431250(this_00,uVar5 + 0x280,&REFG(undefined, 0x108d0e5),0,1,0);
          *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x102c))) = 1;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
          this[0x149] = (undefined1)((char)this[0x149] + -1);
          break;
        }
        uVar5 = uVar5 + 1;
        pIVar4 = pIVar4 + 0x18;
      } while (uVar5 < *(uint *)(this + 8));
    }
    F_0044b380(this);
    F_0044b420(this);
  }
  return 0;
}

/* ref: FUN_0044dd80 */
byte F_0044dd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x44dd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  uint uVar6;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0xf);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0xd)));
  if ((uVar4 != 0) && (this_00 != (undefined *)0x0)) {
    bVar2 = *(byte *)((int)this + 0x149);
    if (7 < bVar2) {
      return 0;
    }
    uVar6 = 0;
    if (*(int *)((int)this + 8) != 0) {
      piVar3 = (int *)((int)this + 0x70);
      do {
        if (*piVar3 == 0 && piVar3[1] == 0) {
          iVar5 = (param_4 & 7) * 0x100;
          if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1008 + uVar6 * 4))) != iVar5) {
            *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1008 + uVar6 * 4))) = iVar5;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          F_00431250(this_00,uVar6 + 0x280,param_3,0,1,0);
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x102c))) = 1;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
          *(undefined4 *)((int)this + uVar6 * 0x18 + 0x70) = param_1;
          *(undefined4 *)((int)this + uVar6 * 0x18 + 0x74) = param_2;
          iVar1 = uVar6 * 3 + 0xf;
          *(int *)((int)this + uVar6 * 0x18 + 0x80) = iVar5;
          *(undefined4 *)((int)this + iVar1 * 8) = param_5;
          *(undefined4 *)((int)this + iVar1 * 8 + 4) = param_6;
          *(char *)((int)this + 0x149) = *(char *)((int)this + 0x149) + '\x01';
          break;
        }
        uVar6 = uVar6 + 1;
        piVar3 = piVar3 + 6;
      } while (uVar6 < *(uint *)((int)this + 8));
    }
    F_0044b380(this);
    if (((bVar2 == 0) && (*(char *)((int)this + 0x149) != '\0')) &&
       (*(char *)((int)this + 0x148) == '\0')) {
      F_0044b420(this);
    }
    F_0044b5f0(this);
  }
  return 1;
}

/* ref: FUN_0044dec0 */
uint F_0044dec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x44dec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0xf);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0xd);
  if ((uVar3 != 0) && (uVar4 != 0)) {
    uVar4 = 0;
    if (*(int *)((int)this + 8) != 0) {
      piVar2 = (int *)((int)this + 0x70);
      while ((*piVar2 != param_1 || (piVar2[1] != param_2))) {
        uVar4 = uVar4 + 1;
        piVar2 = piVar2 + 6;
        if (*(uint *)((int)this + 8) <= uVar4) {
          uVar3 = F_0044b380(this);
          return uVar3;
        }
      }
      puVar1 = (uint *)((int)this + uVar4 * 0x18 + 0x80);
      *puVar1 = *puVar1 ^ (param_3 << 8 ^ *(uint *)((int)this + uVar4 * 0x18 + 0x80)) & 0x700;
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1008 + uVar4 * 4))) != *puVar1) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1008 + uVar4 * 4))) = *puVar1;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x102c))) = 1;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    uVar4 = F_0044b380(this);
  }
  return uVar4;
}

/* ref: FUN_0044dfa0 */
uint F_0044dfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44dfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
    if (param_1 <= (uint)((*(int *)((int)this + 0x24) - (int)puVar1) / 0x18)) {
      for (; puVar1 != *(undefined4 * PTR32 *)((int)this + 0x24); puVar1 = puVar1 + 6) {
        if (*(byte *)((int)puVar1 + 10) == param_1) {
          uVar2 = F_004360f0(this,*puVar1,puVar1[1],puVar1[4]);
          return uVar2;
        }
      }
    }
    return 0;
  }
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  return *(uint *)((int)this + 0x18);
}

/* ref: FUN_0044e020 */
uint F_0044e020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44e020u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint in_EAX = 0;
  
  if ((*(int *)&gen_args[1]) != 0) {
    in_EAX = F_0047e8e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)&gen_args[1]));
  }
  return in_EAX;
}

/* ref: FUN_0044e040 */
uint F_0044e040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x44e040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x95: ;
    uVar1 = F_0044d330(this,1,param_1,param_2,param_3,(uint)(param_4 != 0),param_5,1,1);
    return uVar1;
  case 0x96: ;
    uVar1 = F_0044d330(this,2,param_1,param_2,param_3,(uint)(param_4 != 0),param_5,1,1);
    return uVar1;
  default: ;
    return 0;
  case 0x99: ;
    uVar1 = F_0044d330(this,8,param_1,param_2,param_3,(uint)(param_4 != 0),param_5,0,0);
    return uVar1;
  case 0x9a: ;
    uVar1 = F_0044d330(this,0x10,param_1,param_2,param_3,(uint)(param_4 != 0),param_5,1,0);
    return uVar1;
  case 0x9b: ;
    uVar1 = F_0044d330(this,0x20,param_1,param_2,param_3,(uint)(param_4 != 0),param_5,1,0);
    return uVar1;
  case 0x14e: ;
    uVar1 = F_0044d330(this,4,param_1,param_2,param_3,(uint)(param_4 != 0),param_5,1,1);
    return uVar1;
  }
}

/* ref: FUN_0044e230 */
uint F_0044e230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x44e230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x654)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0x654)) {
      return 0;
    }
    if ((puVar2[0x1a] == param_1) && (puVar2[0x1b] == param_2)) break;
    if (*(char *)((int)puVar2 + 0x71) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x71) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x71);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x71);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x71);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x71);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  uVar5 = F_0042a990(puVar2 + 4);
  return uVar5;
}

/* ref: FUN_0044e3e0 */
byte F_0044e3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44e3e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x660))) == '\0') {
    return 1;
  }
  F_00481810(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x650))),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  return (*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x654)));
}

/* ref: FUN_0044e420 */
byte F_0044e420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44e420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  bool bVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_1,REFG(undefined4, 0x108cc50));
  if (*(char *)((int)this + 0x660) == '\0') {
    bVar2 = true;
  }
  else {
    F_00481810((undefined *)((int)this + 0x650),&(*(int *)(gen_frame + 0x0)),uVar1);
    bVar2 = (*(int *)(gen_frame + 0x0)) != *(int *)((int)this + 0x654);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return bVar2;
}

/* ref: FUN_0044e490 */
unsigned int F_0044e490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x44e490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0x3f;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar2 = (int *)F_00763050(uVar1,uVar3);
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      if ((char)uVar1 != '\0') {
        F_00441b10();
        F_00441d60();
        F_0044da80(this);
      }
    }
  }
  return 0;
}

/* ref: FUN_0044e4e0 */
uint F_0044e4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x44e4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00482170((undefined *)((int)this + 0x30));
  return uVar1;
}

/* ref: FUN_0044e4f0 */
unsigned int F_0044e4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44e4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],param_1);
  }
  return 0;
}

/* ref: FUN_0044e520 */
uint F_0044e520(unsigned int gen_a0)
{
  GEN_ENTER(0x44e520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x40) == 0) {
    return 0x12fd328;
  }
  uVar2 = *(uint *)((int)this + 0x3c);
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)((int)this + 0x30) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30))), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
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

/* ref: FUN_0044e570 */
uint F_0044e570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44e570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)((int)this + 0x40);
  if (iVar2 == 0) {
    return 0x12fd328;
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x48) = 0;
    uVar3 = F_00481de0((undefined *)((int)this + 0x30),0);
    return uVar3;
  }
  piVar1 = (int *)((int)this + 0x48);
  *piVar1 = *piVar1 + param_1;
  if (*piVar1 < 0) {
    *(int *)((int)this + 0x48) = iVar2 + -1;
    uVar3 = F_00481de0((undefined *)((int)this + 0x30),iVar2 + -1);
    return uVar3;
  }
  if (iVar2 <= *(int *)((int)this + 0x48)) {
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  uVar3 = F_00481de0((undefined *)((int)this + 0x30),*(undefined4 *)((int)this + 0x48));
  return uVar3;
}

/* ref: FUN_0044e5d0 */
uint F_0044e5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x44e5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  undefined * this_00;
  uint uVar1;
  undefined * PTR32 * ppuVar2;
  int iVar3;
  char * pcVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  uVar1 = 0;
  if (*(int *)((int)this + 0x30) != 0 || *(int *)((int)this + 0x34) != 0) {
    this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10);
    iVar3 = 0;
    (*(int *)(gen_frame + 0x0)) = 0;
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    if (REFG(undefined * PTR32, 0x12fdc18) != (undefined *)0x0) {
      ppuVar2 = &REFG(undefined * PTR32, 0x12fdc18);
      do {
        F_00a4bc50(&(*(int *)(gen_frame + 0x0)),"n:%s\n",*ppuVar2);
        uVar1 = F_00414550(this_00,*ppuVar2,0,0xffffffff);
        if (uVar1 != 0) {
          iVar5 = *(int *)(uVar1 + 0x10);
          if (iVar5 == 2) {
            pcVar4 = "d:%d\n";
LAB_0044e69f: ;
            F_00a4bc50(&(*(int *)(gen_frame + 0x0)),pcVar4);
          }
          else if (iVar5 == 3) {
            F_00a4bc50(&(*(int *)(gen_frame + 0x0)),"f:%f\n",
                         (int)(ulonglong)gen_d2bits((double)*(float *)(uVar1 + 0x14)),
                         (int)((ulonglong)gen_d2bits((double)*(float *)(uVar1 + 0x14)) >> 0x20));
          }
          else if (iVar5 == 4) {
            F_0042a990(*(undefined4 *)(uVar1 + 0x14));
            pcVar4 = "s:%s\n";
            goto LAB_0044e69f;
          }
        }
        iVar3 = iVar3 + 1;
        ppuVar2 = &REFG(undefined * PTR32, 0x12fdc18) + iVar3;
      } while ((&REFG(undefined * PTR32, 0x12fdc18))[iVar3] != (undefined *)0x0);
    }
    iVar3 = (*(int *)(gen_frame + 0x4)) - (*(int *)(gen_frame + 0x0));
    if (iVar3 != 0) {
      iVar5 = (*(int *)(gen_frame + 0x0));
      uVar1 = F_0042a3f0(((undefined1 *)(gen_frame + 0x10)),REFG(undefined * PTR32, 0x12fdc10),1);
      F_0043c410(*(undefined * PTR32 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x30),
                   *(undefined4 *)((int)this + 0x34),uVar1,iVar5,iVar3);
      F_00429fa0();
    }
    uVar1 = 0;
    if ((*(int *)(gen_frame + 0x0)) != 0) {
      uVar1 = F_00406ad0((*(int *)(gen_frame + 0x0)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return uVar1;
}

/* ref: FUN_0044e730 */
uint F_0044e730(unsigned int gen_a0)
{
  GEN_ENTER(0x44e730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
  if ((*(int *)((int)this + 0x20) != iVar1) &&
     (*(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1,
     *(int *)((int)this + 0x20) != iVar1)) {
    if (*(int * PTR32 *)((int)this + 0x18) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = **(int * PTR32 *)((int)this + 0x18);
    }
    uVar2 = *(uint *)((int)this + 0x20);
    if (*(uint *)(iVar1 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar1 + 8);
    }
    return *((uint *)GEN_TOP((*(int *)(iVar1 + 4) + uVar2 * 4)));
  }
  return 0;
}

/* ref: FUN_0044e770 */
uint F_0044e770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44e770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  if (param_1 < 0x53) {
    if (0x3a < param_1) {
      return 0;
    }
    if (0x32 < param_1) {
      return 0;
    }
    if (0x2b < param_1) {
      uVar6 = 3;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1b0) + 0x48))))(*(int * PTR32 *)((int)this + 0x1b0));
      uVar1 = F_00763050(uVar1,uVar6);
      if (uVar1 == 0) {
        return 0;
      }
      uVar1 = F_00770440(uVar1,param_1 - 0x2b);
      pvVar3 = (undefined *)F_00ae0850(&REFG(undefined, 0x1336e40),uVar1);
      if (pvVar3 == (undefined *)0x0) {
        return 0;
      }
      uVar1 = F_00ae09f0(pvVar3);
      return uVar1;
    }
    if (param_1 == 0x2b) {
      return REFG(undefined4, 0x1379694);
    }
    if (0x22 < param_1) {
      pvVar3 = (undefined *)F_00ae0850(&REFG(undefined, 0x1336e40),param_1 - 0x23);
      if (pvVar3 == (undefined *)0x0) {
        return 0;
      }
      uVar1 = F_00ae09f0(pvVar3);
      return uVar1;
    }
    if (param_1 < 9) {
      return 0;
    }
    if (*(int *)(&REFG(undefined, 0x14b27dc) + param_1 * 4) == -0x20000000) {
      return 0;
    }
    uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),*(int *)(&REFG(undefined, 0x14b27dc) + param_1 * 4));
    return uVar1;
  }
  if (param_1 - 0x17a < 5) {
    uVar1 = param_1 - 0x17a >> 1;
    uVar4 = (uint)(byte)(&REFG(undefined, 0x13003fc))[uVar1 * 2];
    if ((byte)(&REFG(undefined, 0x13003fd))[uVar1 * 2] <= uVar4) {
      return 0;
    }
    piVar2 = &REFG(undefined4, 0x14b2790) + uVar4 * 2;
    while( true ) {
      if (*piVar2 != -0x20000000) {
        uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*piVar2,piVar2[1]);
        return uVar1;
      }
      if (piVar2[1] != 0) break;
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 2;
      if ((int)(uint)(byte)(&REFG(undefined, 0x13003fd))[uVar1 * 2] <= (int)uVar4) {
        return 0;
      }
    }
    return 0;
  }
  if (param_1 - 0x15e < 0x1b) {
    uVar1 = param_1 - 0x15e >> 1;
    if (((&REFG(undefined4, 0x14b2790))[uVar1 * 2] == -0x20000000) && ((&REFG(undefined4, 0x14b2794))[uVar1 * 2] == 0)) {
      return 0;
    }
    uVar1 = F_00475fa0((&REFG(undefined4, 0x14b2790))[uVar1 * 2],(&REFG(undefined4, 0x14b2794))[uVar1 * 2]);
    return uVar1;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 300: ;
    uVar1 = F_00533c90(&REFG(undefined4, 0x1375bc0));
    return uVar1;
  case 0x12e: ;
    pvVar3 = (undefined *)F_00533c90(&REFG(undefined4, 0x1375bc0));
    if (pvVar3 != (undefined *)0x0) {
      uVar5 = F_00aa1840(pvVar3);
      uVar1 = F_00475fa0((int)uVar5,(int)(uVar5 >> 0x20));
      return uVar1;
    }
    break;
  case 0x130: ;
    return REFG(undefined4, 0x1375c40);
  case 0x132: ;
    uVar5 = F_0046e570(&REFG(undefined4, 0x1375bc0));
    goto LAB_0044e8e6;
  case 0x134: ;
    uVar5 = F_0046e550(&REFG(undefined4, 0x1375bc0));
    goto LAB_0044e8e6;
  case 0x138: ;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1b0) + 0x1c))))
                              (*(int * PTR32 *)((int)this + 0x1b0))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x80))(piVar2);
    if ((char)uVar1 != '\0') {
      if (*(uint *)((int)this + 0x10c) == 0) {
        uVar1 = F_00533b40(&REFG(undefined4, 0x1375bc0));
        return uVar1;
      }
      return *(uint *)((int)this + 0x10c);
    }
    break;
  case 0x13a: ;
    return REFG(undefined4, 0x1379694);
  case 0x13c: ;
    uVar1 = F_00a64520(&REFG(undefined, 0x14a9a18),REFG(undefined4, 0x1379694));
    return uVar1;
  case 0x13e: ;
    if (REFG(int, 0x14ab5bc) != -0x20000000) {
      uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),REFG(int, 0x14ab5bc));
      return uVar1;
    }
    break;
  case 0x140: ;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1b0) + 0x38))))
                               (*(int * PTR32 *)((int)this + 0x1b0))));
    uVar1 = F_0044e520(pvVar3);
    F_0042ccf0((undefined *)((int)this + 0xb8),uVar1);
    uVar6 = 0;
    uVar1 = F_0042a990((int)this + 0xb8);
    uVar1 = F_00a64490(&REFG(undefined, 0x14a9a18),uVar1,uVar6);
    return uVar1;
  case 0x180: ;
    uVar5 = F_0046e4e0(&REFG(undefined4, 0x1375bc0));
LAB_0044e8e6: ;
    if (uVar5 != 0xe0000000) {
      uVar1 = F_00475fa0((int)uVar5,(int)(uVar5 >> 0x20));
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0044ead0 */
uint F_0044ead0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44ead0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  int * local_1c;
  uint local_14;
  int * local_10;
  uint local_8;
  
  piVar7 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  uVar6 = *(uint *)((int)this + 0x2718);
  local_1c = *(int * PTR32 *)((int)this + 0x270c);
  uVar8 = *(int *)((int)this + 0x271c) + uVar6;
  local_10 = local_1c;
  uVar3 = uVar8;
  local_8 = uVar8;
  if ((local_1c != (int *)0x0) && ((undefined4 *)*local_1c != (undefined4 *)0x0)) {
    piVar7 = *(int * PTR32 *)*local_1c;
  }
  for (; uVar6 != uVar8; uVar6 = uVar6 + 1) {
    if (piVar7 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar7;
    }
    uVar2 = uVar6;
    if (*(uint *)(iVar5 + 8) <= uVar6) {
      uVar2 = uVar6 - *(uint *)(iVar5 + 8);
    }
    uVar1 = **((ushort * PTR32 *)GEN_TOP((*(int *)(iVar5 + 4) + uVar2 * 4)));
    local_14 = uVar3;
    if ((*((uint *)GEN_TOP((*(int *)(param_1 + 0x718) + (uint)(uVar1 >> 5) * 4))) & 1 << ((byte)uVar1 & 0x1f))
        == 0) {
      if (((local_8 == uVar8) && (local_8 = uVar6, local_10 != piVar7)) &&
         ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        local_10 = *(int * PTR32 *)*piVar7;
      }
      if (piVar7 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar7;
      }
      uVar3 = uVar6;
      if (*(uint *)(iVar5 + 8) <= uVar6) {
        uVar3 = uVar6 - *(uint *)(iVar5 + 8);
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + 4))) <= *(int *)(param_1 + 0x744)) {
        *(undefined2 *)(param_1 + 0x6f6) = *(undefined2 *)(param_1 + 0x6f4);
        *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_1 + 0x6f8);
      }
      *(short *)(param_1 + 0x6f4) = *(short *)(param_1 + 0x6f4) + 1;
      if (piVar7 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar7;
      }
      uVar3 = uVar6;
      if (*(uint *)(iVar5 + 8) <= uVar6) {
        uVar3 = uVar6 - *(uint *)(iVar5 + 8);
      }
      *(int *)(param_1 + 0x6f8) =
           *(int *)(param_1 + 0x6f8) +
           (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + 8 +
                          (uint)*(byte *)(param_1 + 0x753))));
      local_14 = uVar6;
      if ((local_1c != piVar7) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        local_1c = *(int * PTR32 *)*piVar7;
      }
    }
    uVar3 = local_14;
  }
  if (local_8 == uVar8) {
    uVar4 = 0;
  }
  else {
    iVar5 = 0;
    if (local_10 != (int *)0x0) {
      iVar5 = *local_10;
    }
    if (*(uint *)(iVar5 + 8) <= local_8) {
      local_8 = local_8 - *(uint *)(iVar5 + 8);
    }
    uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + local_8 * 4))) + 4)));
  }
  *(undefined4 *)(param_1 + 0x6e8) = uVar4;
  if (uVar3 == uVar8) {
    *(undefined4 *)(param_1 + 0x6f0) = 0;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    return 0;
  }
  iVar5 = 0;
  if (local_1c != (int *)0x0) {
    iVar5 = *local_1c;
  }
  if (*(uint *)(iVar5 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar5 + 8);
  }
  uVar6 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + 4)));
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  *(uint *)(param_1 + 0x6ec) = uVar6;
  return uVar6;
}

/* ref: FUN_0044eca0 */
unsigned int F_0044eca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x44eca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int * local_10;
  
  uVar2 = *(uint *)((int)this + 0x2718);
  uVar5 = *(int *)((int)this + 0x271c) + uVar2;
  local_10 = (int *)0x0;
  if ((*(int * PTR32 *)((int)this + 0x270c) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x270c))), puVar1 != (undefined4 *)0x0)) {
    local_10 = (int *)*puVar1;
  }
  for (; uVar2 != uVar5; uVar2 = uVar2 + 1) {
    iVar4 = 0;
    if (local_10 != (int *)0x0) {
      iVar4 = *local_10;
    }
    uVar3 = uVar2;
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar3 = uVar2 - *(uint *)(iVar4 + 8);
    }
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 8 + param_1))) = 0;
  }
  return 0;
}

/* ref: FUN_0044ed10 */
uint F_0044ed10(unsigned int gen_a0)
{
  GEN_ENTER(0x44ed10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined2 *)((int)this + 0x1e0) = 0x11;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined2 *)((int)this + 0x1f8) = 0xf;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined2 *)((int)this + 0x210) = 0x10;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined2 *)((int)this + 0x228) = 0x12;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined2 *)((int)this + 0x240) = 0x13;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined2 *)((int)this + 600) = 0x14;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined2 *)((int)this + 0x270) = 0x15;
  *(undefined2 *)((int)this + 0x1c8) = 0xffff;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 1;
  *(undefined4 *)((int)this + 0x1d0) = 1;
  *(undefined1 *)((int)this + 0x1d4) = 0xff;
  *(undefined1 *)((int)this + 0x1d5) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 1;
  *(undefined4 *)((int)this + 0x1e8) = 1;
  *(undefined1 *)((int)this + 0x1ec) = 0xff;
  *(undefined1 *)((int)this + 0x1ed) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 1;
  *(undefined4 *)((int)this + 0x200) = 1;
  *(undefined1 *)((int)this + 0x204) = 0xff;
  *(undefined1 *)((int)this + 0x205) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x214) = 1;
  *(undefined4 *)((int)this + 0x218) = 1;
  *(undefined1 *)((int)this + 0x21c) = 0xff;
  *(undefined1 *)((int)this + 0x21d) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x22c) = 1;
  *(undefined4 *)((int)this + 0x230) = 1;
  *(undefined1 *)((int)this + 0x234) = 0xff;
  *(undefined1 *)((int)this + 0x235) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x244) = 1;
  *(undefined4 *)((int)this + 0x248) = 1;
  *(undefined1 *)((int)this + 0x24c) = 0xff;
  *(undefined1 *)((int)this + 0x24d) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x25c) = 1;
  *(undefined4 *)((int)this + 0x260) = 1;
  *(undefined1 *)((int)this + 0x264) = 0xff;
  *(undefined1 *)((int)this + 0x265) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x274) = 1;
  *(undefined4 *)((int)this + 0x278) = 1;
  *(undefined1 *)((int)this + 0x27c) = 0xff;
  *(undefined1 *)((int)this + 0x27d) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined2 *)((int)this + 0x288) = 0x17;
  *(undefined4 *)((int)this + 0x28c) = 1;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined2 *)((int)this + 0x2a0) = 0x1b;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined2 *)((int)this + 0x2b8) = 0x41;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined2 *)((int)this + 0x2d0) = 0x1b0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined2 *)((int)this + 0x2e8) = 0x1af;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined2 *)((int)this + 0x300) = 0x1a2;
  *(gen_code32 *)((int)this + 0x310) = ((code *)REFP(0x44d1f0));
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined2 *)((int)this + 0x318) = 0x1a3;
  *(gen_code32 *)((int)this + 0x328) = ((code *)REFP(0x44d1f0));
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined2 *)((int)this + 0x330) = 0x1a4;
  *(gen_code32 *)((int)this + 0x340) = ((code *)REFP(0x44d1f0));
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x290) = 1;
  *(undefined1 *)((int)this + 0x294) = 0xff;
  *(undefined1 *)((int)this + 0x295) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 1;
  *(undefined4 *)((int)this + 0x2a8) = 2;
  *(undefined1 *)((int)this + 0x2ac) = 0xff;
  *(undefined1 *)((int)this + 0x2ad) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 700) = 2;
  *(undefined4 *)((int)this + 0x2c0) = 2;
  *(undefined1 *)((int)this + 0x2c4) = 0xff;
  *(undefined1 *)((int)this + 0x2c5) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 2;
  *(undefined4 *)((int)this + 0x2d8) = 2;
  *(undefined1 *)((int)this + 0x2dc) = 0xff;
  *(undefined1 *)((int)this + 0x2dd) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 2;
  *(undefined4 *)((int)this + 0x2f0) = 2;
  *(undefined1 *)((int)this + 0x2f4) = 0xff;
  *(undefined1 *)((int)this + 0x2f5) = 0;
  *(undefined4 *)((int)this + 0x304) = 2;
  *(undefined4 *)((int)this + 0x308) = 2;
  *(undefined1 *)((int)this + 0x30c) = 0xff;
  *(undefined1 *)((int)this + 0x30d) = 0;
  *(undefined4 *)((int)this + 0x31c) = 2;
  *(undefined4 *)((int)this + 800) = 2;
  *(undefined1 *)((int)this + 0x324) = 0xff;
  *(undefined1 *)((int)this + 0x325) = 0;
  *(undefined4 *)((int)this + 0x334) = 2;
  *(undefined4 *)((int)this + 0x338) = 2;
  *(undefined1 *)((int)this + 0x33c) = 0xff;
  *(undefined1 *)((int)this + 0x33d) = 0;
  *(undefined2 *)((int)this + 0x348) = 0x1a5;
  *(undefined4 *)((int)this + 0x34c) = 2;
  *(undefined4 *)((int)this + 0x350) = 2;
  *(undefined1 *)((int)this + 0x354) = 0xff;
  *(undefined1 *)((int)this + 0x355) = 0;
  *(gen_code32 *)((int)this + 0x358) = ((code *)REFP(0x44d1f0));
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined2 *)((int)this + 0x360) = 0x1a7;
  *(undefined4 *)((int)this + 0x364) = 2;
  *(undefined4 *)((int)this + 0x368) = 2;
  *(undefined1 *)((int)this + 0x36c) = 0xff;
  *(undefined1 *)((int)this + 0x36d) = 0;
  *(gen_code32 *)((int)this + 0x370) = ((code *)REFP(0x44d1f0));
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined2 *)((int)this + 0x378) = 0x1a6;
  *(undefined4 *)((int)this + 0x37c) = 2;
  *(undefined4 *)((int)this + 0x380) = 2;
  *(undefined1 *)((int)this + 900) = 0xff;
  *(undefined1 *)((int)this + 0x385) = 0;
  *(gen_code32 *)((int)this + 0x388) = ((code *)REFP(0x44d1f0));
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined2 *)((int)this + 0x390) = 0x1a8;
  *(undefined4 *)((int)this + 0x394) = 2;
  *(undefined4 *)((int)this + 0x398) = 2;
  *(undefined1 *)((int)this + 0x39c) = 0xff;
  *(undefined1 *)((int)this + 0x39d) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined2 *)((int)this + 0x3a8) = 0x1a9;
  *(undefined4 *)((int)this + 0x3ac) = 2;
  *(undefined4 *)((int)this + 0x3b0) = 2;
  *(undefined1 *)((int)this + 0x3b4) = 0xff;
  *(undefined1 *)((int)this + 0x3b5) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined2 *)((int)this + 0x3c0) = 0x1aa;
  *(undefined4 *)((int)this + 0x3c4) = 2;
  *(undefined4 *)((int)this + 0x3c8) = 2;
  *(undefined1 *)((int)this + 0x3cc) = 0xff;
  *(undefined1 *)((int)this + 0x3cd) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined2 *)((int)this + 0x3d8) = 0x1ab;
  *(undefined4 *)((int)this + 0x3dc) = 2;
  *(undefined4 *)((int)this + 0x3e0) = 2;
  *(undefined1 *)((int)this + 0x3e4) = 0xff;
  *(undefined1 *)((int)this + 0x3e5) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined2 *)((int)this + 0x3f0) = 0x1ad;
  *(undefined4 *)((int)this + 0x3f4) = 2;
  *(undefined4 *)((int)this + 0x3f8) = 2;
  *(undefined1 *)((int)this + 0x3fc) = 0xff;
  *(undefined1 *)((int)this + 0x3fd) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined2 *)((int)this + 0x408) = 0x1ac;
  *(undefined4 *)((int)this + 0x40c) = 2;
  *(undefined4 *)((int)this + 0x410) = 2;
  *(undefined1 *)((int)this + 0x414) = 0xff;
  *(undefined1 *)((int)this + 0x415) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined2 *)((int)this + 0x6f0) = 0xffff;
  *(undefined4 *)((int)this + 0x6f4) = 4;
  *(undefined4 *)((int)this + 0x6f8) = 2;
  *(undefined1 *)((int)this + 0x6fc) = 0xff;
  *(undefined1 *)((int)this + 0x6fd) = 0;
  *(gen_code32 *)((int)this + 0x700) = ((code *)REFP(0x44d120));
  *(undefined4 *)((int)this + 0x704) = 0;
  *(undefined2 *)((int)this + 0x420) = 0x2d;
  *(undefined4 *)((int)this + 0x424) = 4;
  *(undefined4 *)((int)this + 0x428) = 2;
  *(undefined1 *)((int)this + 0x42c) = 0xff;
  *(undefined1 *)((int)this + 0x42d) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined2 *)((int)this + 0x438) = 0x2e;
  *(undefined4 *)((int)this + 0x43c) = 4;
  *(undefined4 *)((int)this + 0x440) = 2;
  *(undefined1 *)((int)this + 0x444) = 0xff;
  *(undefined1 *)((int)this + 0x445) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined2 *)((int)this + 0x450) = 0x2b;
  *(undefined4 *)((int)this + 0x454) = 4;
  *(undefined4 *)((int)this + 0x458) = 2;
  *(undefined1 *)((int)this + 0x45c) = 0xff;
  *(undefined1 *)((int)this + 0x45d) = 0;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined2 *)((int)this + 0x468) = 0x2c;
  *(undefined4 *)((int)this + 0x46c) = 4;
  *(undefined4 *)((int)this + 0x470) = 2;
  *(undefined1 *)((int)this + 0x474) = 0xff;
  *(undefined1 *)((int)this + 0x475) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined2 *)((int)this + 0x480) = 0x16;
  *(undefined4 *)((int)this + 0x484) = 4;
  *(undefined4 *)((int)this + 0x488) = 2;
  *(undefined1 *)((int)this + 0x48c) = 0xff;
  *(undefined1 *)((int)this + 0x48d) = 1;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined4 *)((int)this + 0x494) = 0;
  *(undefined2 *)((int)this + 0x498) = 0x26;
  *(undefined4 *)((int)this + 0x49c) = 4;
  *(undefined4 *)((int)this + 0x4a0) = 2;
  *(undefined1 *)((int)this + 0x4a4) = 0xff;
  *(undefined1 *)((int)this + 0x4a5) = 1;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined2 *)((int)this + 0x4b0) = 0x25;
  *(undefined4 *)((int)this + 0x4b4) = 4;
  *(undefined4 *)((int)this + 0x4b8) = 2;
  *(undefined1 *)((int)this + 0x4bc) = 0xff;
  *(undefined1 *)((int)this + 0x4bd) = 1;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined2 *)((int)this + 0x4c8) = 0x34;
  *(undefined4 *)((int)this + 0x4cc) = 4;
  *(undefined4 *)((int)this + 0x4d0) = 2;
  *(undefined1 *)((int)this + 0x4d4) = 0xff;
  *(undefined1 *)((int)this + 0x4d5) = 0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4dc) = 0;
  *(undefined2 *)((int)this + 0x4e0) = 0x2f;
  *(undefined4 *)((int)this + 0x4e4) = 4;
  *(undefined4 *)((int)this + 0x4e8) = 2;
  *(undefined1 *)((int)this + 0x4ec) = 0xff;
  *(undefined1 *)((int)this + 0x4ed) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined2 *)((int)this + 0x4f8) = 0x27;
  *(undefined4 *)((int)this + 0x4fc) = 4;
  *(undefined4 *)((int)this + 0x500) = 2;
  *(undefined1 *)((int)this + 0x504) = 0xff;
  *(undefined1 *)((int)this + 0x505) = 1;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x50c) = 0;
  *(undefined2 *)((int)this + 0x510) = 0x29;
  *(undefined4 *)((int)this + 0x514) = 4;
  *(undefined4 *)((int)this + 0x518) = 2;
  *(undefined1 *)((int)this + 0x51c) = 0xff;
  *(undefined1 *)((int)this + 0x51d) = 1;
  *(undefined4 *)((int)this + 0x520) = 0;
  *(undefined4 *)((int)this + 0x524) = 0;
  *(undefined2 *)((int)this + 0x528) = 0x2a;
  *(undefined4 *)((int)this + 0x52c) = 4;
  *(undefined4 *)((int)this + 0x530) = 2;
  *(undefined1 *)((int)this + 0x534) = 0xff;
  *(undefined1 *)((int)this + 0x535) = 1;
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined2 *)((int)this + 0x540) = 0x28;
  *(undefined4 *)((int)this + 0x544) = 4;
  *(undefined4 *)((int)this + 0x548) = 2;
  *(undefined1 *)((int)this + 0x54c) = 0xff;
  *(undefined1 *)((int)this + 0x54d) = 1;
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x554) = 0;
  *(undefined2 *)((int)this + 0x558) = 0x1d;
  *(undefined4 *)((int)this + 0x55c) = 4;
  *(undefined4 *)((int)this + 0x560) = 2;
  *(undefined1 *)((int)this + 0x564) = 0xff;
  *(undefined1 *)((int)this + 0x565) = 1;
  *(undefined4 *)((int)this + 0x568) = 0;
  *(undefined4 *)((int)this + 0x56c) = 0;
  *(undefined2 *)((int)this + 0x570) = 0x1e;
  *(undefined4 *)((int)this + 0x574) = 4;
  *(undefined4 *)((int)this + 0x578) = 2;
  *(undefined1 *)((int)this + 0x57c) = 0xff;
  *(undefined1 *)((int)this + 0x57d) = 1;
  *(undefined4 *)((int)this + 0x580) = 0;
  *(undefined4 *)((int)this + 0x584) = 0;
  *(undefined2 *)((int)this + 0x588) = 0x33;
  *(undefined4 *)((int)this + 0x58c) = 4;
  *(undefined4 *)((int)this + 0x590) = 2;
  *(undefined1 *)((int)this + 0x594) = 0xff;
  *(undefined1 *)((int)this + 0x595) = 0;
  *(undefined4 *)((int)this + 0x598) = 0;
  *(undefined4 *)((int)this + 0x59c) = 0;
  *(undefined2 *)((int)this + 0x5a0) = 0x24;
  *(undefined4 *)((int)this + 0x5a4) = 4;
  *(undefined4 *)((int)this + 0x5a8) = 2;
  *(undefined1 *)((int)this + 0x5ac) = 0xff;
  *(undefined1 *)((int)this + 0x5ad) = 0;
  *(undefined4 *)((int)this + 0x5b0) = 0;
  *(undefined4 *)((int)this + 0x5b4) = 0;
  *(undefined2 *)((int)this + 0x5b8) = 0x23;
  *(undefined4 *)((int)this + 0x5bc) = 4;
  *(undefined4 *)((int)this + 0x5c0) = 2;
  *(undefined1 *)((int)this + 0x5c4) = 0xff;
  *(undefined1 *)((int)this + 0x5c5) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0;
  *(undefined4 *)((int)this + 0x5cc) = 0;
  *(undefined2 *)((int)this + 0x5d0) = 0x1f;
  *(undefined4 *)((int)this + 0x5d4) = 4;
  *(undefined4 *)((int)this + 0x5d8) = 2;
  *(undefined1 *)((int)this + 0x5dc) = 0xff;
  *(undefined1 *)((int)this + 0x5dd) = 1;
  *(undefined4 *)((int)this + 0x5e0) = 0;
  *(undefined4 *)((int)this + 0x5e4) = 0;
  *(undefined2 *)((int)this + 0x5e8) = 0x20;
  *(undefined4 *)((int)this + 0x5ec) = 4;
  *(undefined4 *)((int)this + 0x5f0) = 2;
  *(undefined1 *)((int)this + 0x5f4) = 0xff;
  *(undefined1 *)((int)this + 0x5f5) = 1;
  *(undefined4 *)((int)this + 0x5f8) = 0;
  *(undefined4 *)((int)this + 0x5fc) = 0;
  *(undefined2 *)((int)this + 0x600) = 0x21;
  *(undefined4 *)((int)this + 0x604) = 4;
  *(undefined4 *)((int)this + 0x608) = 2;
  *(undefined1 *)((int)this + 0x60c) = 0xff;
  *(undefined1 *)((int)this + 0x60d) = 0;
  *(undefined4 *)((int)this + 0x610) = 0;
  *(undefined4 *)((int)this + 0x614) = 0;
  *(undefined2 *)((int)this + 0x618) = 0x35;
  *(undefined4 *)((int)this + 0x61c) = 4;
  *(undefined4 *)((int)this + 0x620) = 2;
  *(undefined1 *)((int)this + 0x624) = 0xff;
  *(undefined1 *)((int)this + 0x625) = 1;
  *(undefined4 *)((int)this + 0x628) = 0;
  *(undefined4 *)((int)this + 0x62c) = 0;
  *(undefined2 *)((int)this + 0x630) = 0x36;
  *(undefined4 *)((int)this + 0x634) = 4;
  *(undefined4 *)((int)this + 0x638) = 2;
  *(undefined1 *)((int)this + 0x63c) = 0xff;
  *(undefined1 *)((int)this + 0x63d) = 1;
  *(undefined4 *)((int)this + 0x640) = 0;
  *(undefined4 *)((int)this + 0x644) = 0;
  *(undefined2 *)((int)this + 0x648) = 0x37;
  *(undefined4 *)((int)this + 0x64c) = 4;
  *(undefined4 *)((int)this + 0x650) = 2;
  *(undefined1 *)((int)this + 0x654) = 0xff;
  *(undefined1 *)((int)this + 0x655) = 1;
  *(undefined4 *)((int)this + 0x658) = 0;
  *(undefined4 *)((int)this + 0x65c) = 0;
  *(undefined2 *)((int)this + 0x660) = 0x38;
  *(undefined4 *)((int)this + 0x664) = 4;
  *(undefined4 *)((int)this + 0x668) = 2;
  *(undefined1 *)((int)this + 0x66c) = 0xff;
  *(undefined1 *)((int)this + 0x66d) = 1;
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  *(undefined2 *)((int)this + 0x678) = 0x39;
  *(undefined4 *)((int)this + 0x67c) = 4;
  *(undefined4 *)((int)this + 0x680) = 2;
  *(undefined1 *)((int)this + 0x684) = 0xff;
  *(undefined1 *)((int)this + 0x685) = 1;
  *(undefined4 *)((int)this + 0x688) = 0;
  *(undefined4 *)((int)this + 0x68c) = 0;
  *(undefined2 *)((int)this + 0x690) = 0x3a;
  *(undefined4 *)((int)this + 0x694) = 4;
  *(undefined4 *)((int)this + 0x698) = 2;
  *(undefined1 *)((int)this + 0x69c) = 0xff;
  *(undefined1 *)((int)this + 0x69d) = 1;
  *(undefined4 *)((int)this + 0x6a0) = 0;
  *(undefined4 *)((int)this + 0x6a4) = 0;
  *(undefined2 *)((int)this + 0x6a8) = 0x3b;
  *(undefined4 *)((int)this + 0x6ac) = 4;
  *(undefined4 *)((int)this + 0x6b0) = 2;
  *(undefined1 *)((int)this + 0x6b4) = 0xff;
  *(undefined1 *)((int)this + 0x6b5) = 1;
  *(undefined4 *)((int)this + 0x6b8) = 0;
  *(undefined4 *)((int)this + 0x6bc) = 0;
  *(undefined2 *)((int)this + 0x6c0) = 0x3c;
  *(undefined4 *)((int)this + 0x6c4) = 4;
  *(undefined4 *)((int)this + 0x6c8) = 2;
  *(undefined1 *)((int)this + 0x6cc) = 0xff;
  *(undefined1 *)((int)this + 0x6cd) = 1;
  *(undefined4 *)((int)this + 0x6d0) = 0;
  *(undefined4 *)((int)this + 0x6d4) = 0;
  *(undefined2 *)((int)this + 0x6d8) = 0x3d;
  *(undefined4 *)((int)this + 0x6dc) = 4;
  *(undefined4 *)((int)this + 0x6e0) = 2;
  *(undefined1 *)((int)this + 0x6e4) = 0xff;
  *(undefined1 *)((int)this + 0x6e5) = 1;
  *(undefined4 *)((int)this + 0x6e8) = 0;
  *(undefined4 *)((int)this + 0x6ec) = 0;
  *(undefined2 *)((int)this + 0x708) = 0x18;
  *(undefined4 *)((int)this + 0x70c) = 8;
  *(undefined4 *)((int)this + 0x710) = 2;
  *(undefined1 *)((int)this + 0x714) = 0xff;
  *(undefined1 *)((int)this + 0x715) = 0;
  *(undefined4 *)((int)this + 0x718) = 0;
  *(undefined4 *)((int)this + 0x71c) = 0;
  *(undefined2 *)((int)this + 0x720) = 0x19;
  *(undefined4 *)((int)this + 0x724) = 8;
  *(undefined4 *)((int)this + 0x728) = 2;
  *(undefined1 *)((int)this + 0x72c) = 0xff;
  *(undefined1 *)((int)this + 0x72d) = 0;
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined2 *)((int)this + 0x738) = 0x66;
  *(undefined4 *)((int)this + 0x73c) = 8;
  *(undefined4 *)((int)this + 0x740) = 2;
  *(undefined1 *)((int)this + 0x744) = 0xff;
  *(undefined1 *)((int)this + 0x745) = 0;
  *(undefined4 *)((int)this + 0x748) = 0;
  *(undefined4 *)((int)this + 0x74c) = 0;
  *(undefined2 *)((int)this + 0x750) = 0x4c;
  *(undefined4 *)((int)this + 0x754) = 0x10;
  *(undefined4 *)((int)this + 0x758) = 2;
  *(undefined1 *)((int)this + 0x75c) = 0xff;
  *(undefined1 *)((int)this + 0x75d) = 0;
  *(undefined4 *)((int)this + 0x760) = 0;
  *(undefined4 *)((int)this + 0x764) = 0;
  *(undefined2 *)((int)this + 0x768) = 0x49;
  *(undefined4 *)((int)this + 0x76c) = 0x10;
  *(undefined4 *)((int)this + 0x770) = 1;
  *(undefined1 *)((int)this + 0x774) = 0xff;
  *(undefined1 *)((int)this + 0x775) = 0;
  *(undefined4 *)((int)this + 0x778) = 0;
  *(undefined4 *)((int)this + 0x77c) = 0;
  *(undefined2 *)((int)this + 0x798) = 0x4e;
  *(undefined4 *)((int)this + 0x79c) = 0x10;
  *(undefined4 *)((int)this + 0x7a0) = 1;
  *(undefined1 *)((int)this + 0x7a4) = 0xff;
  *(undefined1 *)((int)this + 0x7a5) = 0;
  *(undefined4 *)((int)this + 0x7a8) = 0;
  *(undefined4 *)((int)this + 0x7ac) = 0;
  *(undefined2 *)((int)this + 0x7b0) = 0x47;
  *(undefined4 *)((int)this + 0x7b4) = 0x10;
  *(undefined4 *)((int)this + 0x7b8) = 1;
  *(undefined1 *)((int)this + 0x7bc) = 0xff;
  *(undefined1 *)((int)this + 0x7bd) = 0;
  *(undefined4 *)((int)this + 0x7c0) = 0;
  *(undefined4 *)((int)this + 0x7c4) = 0;
  *(undefined2 *)((int)this + 0x780) = 0x4a;
  *(undefined4 *)((int)this + 0x784) = 0x10;
  *(undefined4 *)((int)this + 0x788) = 2;
  *(undefined1 *)((int)this + 0x78c) = 0xff;
  *(undefined1 *)((int)this + 0x78d) = 0;
  *(undefined4 *)((int)this + 0x790) = 0;
  *(undefined4 *)((int)this + 0x794) = 0;
  *(undefined2 *)((int)this + 0x7e0) = 0x19e;
  *(undefined4 *)((int)this + 0x7e4) = 0x20;
  *(undefined4 *)((int)this + 0x7e8) = 2;
  *(undefined1 *)((int)this + 0x7ec) = 0xff;
  *(undefined1 *)((int)this + 0x7ed) = 0;
  *(undefined4 *)((int)this + 0x7f0) = 0;
  *(undefined4 *)((int)this + 0x7f4) = 0;
  *(undefined2 *)((int)this + 0x7f8) = 0x3e;
  *(undefined4 *)((int)this + 0x7fc) = 0x20;
  *(undefined4 *)((int)this + 0x800) = 1;
  *(undefined1 *)((int)this + 0x804) = 0xff;
  *(undefined1 *)((int)this + 0x805) = 0;
  *(undefined4 *)((int)this + 0x808) = 0;
  *(undefined4 *)((int)this + 0x80c) = 0;
  *(undefined2 *)((int)this + 0x828) = 0xaf;
  *(undefined4 *)((int)this + 0x82c) = 0x40;
  *(undefined4 *)((int)this + 0x830) = 2;
  *(undefined1 *)((int)this + 0x834) = 0xff;
  *(undefined1 *)((int)this + 0x835) = 0;
  *(undefined4 *)((int)this + 0x838) = 0;
  *(undefined4 *)((int)this + 0x83c) = 0;
  *(undefined2 *)((int)this + 0x840) = 0x14c;
  *(undefined4 *)((int)this + 0x844) = 0x40;
  *(undefined4 *)((int)this + 0x848) = 2;
  *(undefined1 *)((int)this + 0x84c) = 0xff;
  *(undefined1 *)((int)this + 0x84d) = 0;
  *(undefined4 *)((int)this + 0x850) = 0;
  *(undefined4 *)((int)this + 0x854) = 0;
  *(undefined2 *)((int)this + 0x858) = 0x6e;
  *(undefined4 *)((int)this + 0x85c) = 0x40;
  *(undefined4 *)((int)this + 0x860) = 2;
  *(undefined1 *)((int)this + 0x864) = 0xff;
  *(undefined1 *)((int)this + 0x865) = 0;
  *(undefined4 *)((int)this + 0x868) = 0;
  *(undefined4 *)((int)this + 0x86c) = 0;
  *(undefined2 *)((int)this + 0x870) = 0x6d;
  *(undefined4 *)((int)this + 0x874) = 0x40;
  *(undefined4 *)((int)this + 0x878) = 2;
  *(undefined1 *)((int)this + 0x87c) = 0xff;
  *(undefined1 *)((int)this + 0x87d) = 0;
  *(undefined4 *)((int)this + 0x880) = 0;
  *(undefined4 *)((int)this + 0x884) = 0;
  *(undefined2 *)((int)this + 0x888) = 0x6c;
  *(undefined4 *)((int)this + 0x88c) = 0x40;
  *(undefined4 *)((int)this + 0x890) = 2;
  *(undefined1 *)((int)this + 0x894) = 0xff;
  *(undefined1 *)((int)this + 0x895) = 0;
  *(undefined4 *)((int)this + 0x898) = 0;
  *(undefined4 *)((int)this + 0x89c) = 0;
  *(undefined2 *)((int)this + 0x8a0) = 0x6b;
  *(undefined4 *)((int)this + 0x8a4) = 0x40;
  *(undefined4 *)((int)this + 0x8a8) = 2;
  *(undefined1 *)((int)this + 0x8ac) = 0xff;
  *(undefined1 *)((int)this + 0x8ad) = 0;
  *(undefined4 *)((int)this + 0x8b0) = 0;
  *(undefined4 *)((int)this + 0x8b4) = 0;
  *(undefined2 *)((int)this + 0x8b8) = 0x6a;
  *(undefined4 *)((int)this + 0x8bc) = 0x40;
  *(undefined4 *)((int)this + 0x8c0) = 2;
  *(undefined1 *)((int)this + 0x8c4) = 0xff;
  *(undefined1 *)((int)this + 0x8c5) = 0;
  *(undefined4 *)((int)this + 0x8c8) = 0;
  *(undefined4 *)((int)this + 0x8cc) = 0;
  *(undefined2 *)((int)this + 0x8d0) = 0x69;
  *(undefined4 *)((int)this + 0x8d4) = 0x40;
  *(undefined4 *)((int)this + 0x8d8) = 2;
  *(undefined1 *)((int)this + 0x8dc) = 0xff;
  *(undefined1 *)((int)this + 0x8dd) = 0;
  *(undefined4 *)((int)this + 0x8e0) = 0;
  *(undefined4 *)((int)this + 0x8e4) = 0;
  *(undefined2 *)((int)this + 0x8e8) = 0x68;
  *(undefined4 *)((int)this + 0x8ec) = 0x40;
  *(undefined4 *)((int)this + 0x8f0) = 2;
  *(undefined1 *)((int)this + 0x8f4) = 0xff;
  *(undefined1 *)((int)this + 0x8f5) = 0;
  *(undefined4 *)((int)this + 0x8f8) = 0;
  *(undefined4 *)((int)this + 0x8fc) = 0;
  *(undefined2 *)((int)this + 0x900) = 0x67;
  *(undefined4 *)((int)this + 0x904) = 0x40;
  *(undefined4 *)((int)this + 0x908) = 2;
  *(undefined1 *)((int)this + 0x90c) = 0xff;
  *(undefined1 *)((int)this + 0x90d) = 0;
  *(undefined4 *)((int)this + 0x910) = 0;
  *(undefined4 *)((int)this + 0x914) = 0;
  *(undefined2 *)((int)this + 0x918) = 0x61;
  *(undefined4 *)((int)this + 0x91c) = 0x40;
  *(undefined4 *)((int)this + 0x920) = 2;
  *(undefined1 *)((int)this + 0x924) = 0xff;
  *(undefined1 *)((int)this + 0x925) = 0;
  *(undefined4 *)((int)this + 0x928) = 0;
  *(undefined4 *)((int)this + 0x92c) = 0;
  *(undefined2 *)((int)this + 0x930) = 0x62;
  *(undefined4 *)((int)this + 0x934) = 0x40;
  *(undefined4 *)((int)this + 0x938) = 2;
  *(undefined1 *)((int)this + 0x93c) = 0xff;
  *(undefined1 *)((int)this + 0x93d) = 0;
  *(undefined4 *)((int)this + 0x940) = 0;
  *(undefined4 *)((int)this + 0x944) = 0;
  *(undefined2 *)((int)this + 0x948) = 0x60;
  *(undefined4 *)((int)this + 0x94c) = 0x40;
  *(undefined4 *)((int)this + 0x950) = 2;
  *(undefined1 *)((int)this + 0x954) = 0xff;
  *(undefined1 *)((int)this + 0x955) = 0;
  *(undefined4 *)((int)this + 0x958) = 0;
  *(undefined4 *)((int)this + 0x95c) = 0;
  *(undefined2 *)((int)this + 0x960) = 0x65;
  *(undefined4 *)((int)this + 0x964) = 0x40;
  *(undefined4 *)((int)this + 0x968) = 2;
  *(undefined1 *)((int)this + 0x96c) = 0xff;
  *(undefined1 *)((int)this + 0x96d) = 0;
  *(undefined4 *)((int)this + 0x970) = 0;
  *(undefined4 *)((int)this + 0x974) = 0;
  *(undefined2 *)((int)this + 0x978) = 100;
  *(undefined4 *)((int)this + 0x97c) = 0x40;
  *(undefined4 *)((int)this + 0x980) = 2;
  *(undefined1 *)((int)this + 0x984) = 0xff;
  *(undefined1 *)((int)this + 0x985) = 0;
  *(undefined4 *)((int)this + 0x988) = 0;
  *(undefined4 *)((int)this + 0x98c) = 0;
  *(undefined2 *)((int)this + 0x990) = 99;
  *(undefined4 *)((int)this + 0x994) = 0x40;
  *(undefined4 *)((int)this + 0x998) = 2;
  *(undefined1 *)((int)this + 0x99c) = 0xff;
  *(undefined1 *)((int)this + 0x99d) = 0;
  *(undefined4 *)((int)this + 0x9a0) = 0;
  *(undefined4 *)((int)this + 0x9a4) = 0;
  *(undefined2 *)((int)this + 0x9a8) = 0x6f;
  *(undefined4 *)((int)this + 0x9ac) = 0x40;
  *(undefined4 *)((int)this + 0x9b0) = 2;
  *(undefined1 *)((int)this + 0x9b4) = 0xff;
  *(undefined1 *)((int)this + 0x9b5) = 0;
  *(undefined4 *)((int)this + 0x9b8) = 0;
  *(undefined4 *)((int)this + 0x9bc) = 0;
  *(undefined2 *)((int)this + 0x9c0) = 0x70;
  *(undefined4 *)((int)this + 0x9c4) = 0x40;
  *(undefined4 *)((int)this + 0x9c8) = 2;
  *(undefined1 *)((int)this + 0x9cc) = 0xff;
  *(undefined1 *)((int)this + 0x9cd) = 0;
  *(undefined4 *)((int)this + 0x9d0) = 0;
  *(undefined4 *)((int)this + 0x9d4) = 0;
  *(undefined2 *)((int)this + 0x9d8) = 0x71;
  *(undefined4 *)((int)this + 0x9dc) = 0x40;
  *(undefined4 *)((int)this + 0x9e0) = 2;
  *(undefined1 *)((int)this + 0x9e4) = 0xff;
  *(undefined1 *)((int)this + 0x9e5) = 0;
  *(undefined4 *)((int)this + 0x9e8) = 0;
  *(undefined4 *)((int)this + 0x9ec) = 0;
  *(undefined2 *)((int)this + 0x9f0) = 0xb0;
  *(undefined4 *)((int)this + 0x9f4) = 0x40;
  *(undefined4 *)((int)this + 0x9f8) = 2;
  *(undefined1 *)((int)this + 0x9fc) = 0xff;
  *(undefined1 *)((int)this + 0x9fd) = 0;
  *(undefined4 *)((int)this + 0xa00) = 0;
  *(undefined4 *)((int)this + 0xa04) = 0;
  *(undefined2 *)((int)this + 0xa08) = 0x77;
  *(undefined4 *)((int)this + 0xa0c) = 0x80;
  *(undefined4 *)((int)this + 0xa10) = 2;
  *(undefined1 *)((int)this + 0xa14) = 0xff;
  *(undefined1 *)((int)this + 0xa15) = 0;
  *(undefined4 *)((int)this + 0xa18) = 0;
  *(undefined4 *)((int)this + 0xa1c) = 0;
  *(undefined2 *)((int)this + 0xa20) = 0x73;
  *(undefined4 *)((int)this + 0xa24) = 0x80;
  *(undefined4 *)((int)this + 0xa28) = 2;
  *(undefined1 *)((int)this + 0xa2c) = 0xff;
  *(undefined1 *)((int)this + 0xa2d) = 0;
  *(undefined4 *)((int)this + 0xa30) = 0;
  *(undefined4 *)((int)this + 0xa34) = 0;
  *(undefined2 *)((int)this + 0xa38) = 0xab;
  *(undefined4 *)((int)this + 0xa3c) = 0x80;
  *(undefined4 *)((int)this + 0xa40) = 2;
  *(undefined1 *)((int)this + 0xa44) = 0xff;
  *(undefined1 *)((int)this + 0xa45) = 0;
  *(undefined4 *)((int)this + 0xa48) = 0;
  *(undefined4 *)((int)this + 0xa4c) = 0;
  *(undefined2 *)((int)this + 0xa50) = 0xac;
  *(undefined4 *)((int)this + 0xa54) = 0x80;
  *(undefined4 *)((int)this + 0xa58) = 2;
  *(undefined1 *)((int)this + 0xa5c) = 0xff;
  *(undefined1 *)((int)this + 0xa5d) = 0;
  *(undefined4 *)((int)this + 0xa60) = 0;
  *(undefined4 *)((int)this + 0xa64) = 0;
  *(undefined2 *)((int)this + 0xa68) = 0xad;
  *(undefined4 *)((int)this + 0xa6c) = 0x80;
  *(undefined4 *)((int)this + 0xa70) = 2;
  *(undefined1 *)((int)this + 0xa74) = 0xff;
  *(undefined1 *)((int)this + 0xa75) = 0;
  *(undefined4 *)((int)this + 0xa78) = 0;
  *(undefined4 *)((int)this + 0xa7c) = 0;
  *(undefined2 *)((int)this + 0xa98) = 0x89;
  *(undefined4 *)((int)this + 0xa9c) = 0x80;
  *(undefined4 *)((int)this + 0xaa0) = 2;
  *(undefined1 *)((int)this + 0xaa4) = 0xff;
  *(undefined1 *)((int)this + 0xaa5) = 0;
  *(undefined4 *)((int)this + 0xaa8) = 0;
  *(undefined4 *)((int)this + 0xaac) = 0;
  *(undefined2 *)((int)this + 0xab0) = 0x8a;
  *(undefined4 *)((int)this + 0xab4) = 0x80;
  *(undefined4 *)((int)this + 0xab8) = 2;
  *(undefined1 *)((int)this + 0xabc) = 0xff;
  *(undefined1 *)((int)this + 0xabd) = 0;
  *(undefined4 *)((int)this + 0xac0) = 0;
  *(undefined4 *)((int)this + 0xac4) = 0;
  *(undefined2 *)((int)this + 0xac8) = 0x8b;
  *(undefined4 *)((int)this + 0xacc) = 0x80;
  *(undefined4 *)((int)this + 0xad0) = 2;
  *(undefined1 *)((int)this + 0xad4) = 0xff;
  *(undefined1 *)((int)this + 0xad5) = 0;
  *(undefined4 *)((int)this + 0xad8) = 0;
  *(undefined4 *)((int)this + 0xadc) = 0;
  *(undefined2 *)((int)this + 0xae0) = 0x8c;
  *(undefined4 *)((int)this + 0xae4) = 0x80;
  *(undefined4 *)((int)this + 0xae8) = 2;
  *(undefined1 *)((int)this + 0xaec) = 0xff;
  *(undefined1 *)((int)this + 0xaed) = 0;
  *(undefined4 *)((int)this + 0xaf0) = 0;
  *(undefined4 *)((int)this + 0xaf4) = 0;
  *(undefined2 *)((int)this + 0xaf8) = 0x8d;
  *(undefined4 *)((int)this + 0xafc) = 0x80;
  *(undefined4 *)((int)this + 0xb00) = 2;
  *(undefined1 *)((int)this + 0xb04) = 0xff;
  *(undefined1 *)((int)this + 0xb05) = 0;
  *(undefined4 *)((int)this + 0xb08) = 0;
  *(undefined4 *)((int)this + 0xb0c) = 0;
  *(undefined2 *)((int)this + 0xb10) = 0x8e;
  *(undefined4 *)((int)this + 0xb14) = 0x80;
  *(undefined4 *)((int)this + 0xb18) = 2;
  *(undefined1 *)((int)this + 0xb1c) = 0xff;
  *(undefined1 *)((int)this + 0xb1d) = 0;
  *(undefined4 *)((int)this + 0xb20) = 0;
  *(undefined4 *)((int)this + 0xb24) = 0;
  *(undefined2 *)((int)this + 0xb28) = 0x76;
  *(undefined4 *)((int)this + 0xb2c) = 0x80;
  *(undefined4 *)((int)this + 0xb30) = 2;
  *(undefined1 *)((int)this + 0xb34) = 0xff;
  *(undefined1 *)((int)this + 0xb35) = 0;
  *(undefined4 *)((int)this + 0xb38) = 0;
  *(undefined4 *)((int)this + 0xb3c) = 0;
  *(undefined2 *)((int)this + 0xb40) = 0x78;
  *(undefined4 *)((int)this + 0xb44) = 0x100;
  *(undefined4 *)((int)this + 0xb48) = 2;
  *(undefined1 *)((int)this + 0xb4c) = 0xff;
  *(undefined1 *)((int)this + 0xb4d) = 0;
  *(undefined4 *)((int)this + 0xb50) = 0;
  *(undefined4 *)((int)this + 0xb54) = 0;
  *(undefined2 *)((int)this + 0xb70) = 0x82;
  *(undefined4 *)((int)this + 0xb74) = 0x100;
  *(undefined4 *)((int)this + 0xb78) = 1;
  *(undefined1 *)((int)this + 0xb7c) = 0xff;
  *(undefined1 *)((int)this + 0xb7d) = 0;
  *(undefined4 *)((int)this + 0xb80) = 0;
  *(undefined4 *)((int)this + 0xb84) = 0;
  *(undefined2 *)((int)this + 0xb88) = 0x83;
  *(undefined4 *)((int)this + 0xb8c) = 0x100;
  *(undefined4 *)((int)this + 0xb90) = 1;
  *(undefined1 *)((int)this + 0xb94) = 0xff;
  *(undefined1 *)((int)this + 0xb95) = 0;
  *(undefined4 *)((int)this + 0xb98) = 0;
  *(undefined4 *)((int)this + 0xb9c) = 0;
  *(undefined2 *)((int)this + 0xba0) = 0x84;
  *(undefined4 *)((int)this + 0xba4) = 0x100;
  *(undefined4 *)((int)this + 0xba8) = 1;
  *(undefined1 *)((int)this + 0xbac) = 0xff;
  *(undefined1 *)((int)this + 0xbad) = 0;
  *(undefined4 *)((int)this + 0xbb0) = 0;
  *(undefined4 *)((int)this + 0xbb4) = 0;
  *(undefined2 *)((int)this + 3000) = 0x85;
  *(undefined4 *)((int)this + 0xbbc) = 0x100;
  *(undefined4 *)((int)this + 0xbc0) = 1;
  *(undefined1 *)((int)this + 0xbc4) = 0xff;
  *(undefined1 *)((int)this + 0xbc5) = 0;
  *(undefined4 *)((int)this + 0xbc8) = 0;
  *(undefined4 *)((int)this + 0xbcc) = 0;
  *(undefined2 *)((int)this + 0xbd0) = 0x86;
  *(undefined4 *)((int)this + 0xbd4) = 0x100;
  *(undefined4 *)((int)this + 0xbd8) = 1;
  *(undefined1 *)((int)this + 0xbdc) = 0xff;
  *(undefined1 *)((int)this + 0xbdd) = 0;
  *(undefined4 *)((int)this + 0xbe0) = 0;
  *(undefined4 *)((int)this + 0xbe4) = 0;
  *(undefined2 *)((int)this + 0xbe8) = 0x87;
  *(undefined4 *)((int)this + 0xbec) = 0x100;
  *(undefined4 *)((int)this + 0xbf0) = 1;
  *(undefined1 *)((int)this + 0xbf4) = 0xff;
  *(undefined1 *)((int)this + 0xbf5) = 0;
  *(undefined4 *)((int)this + 0xbf8) = 0;
  *(undefined4 *)((int)this + 0xbfc) = 0;
  *(undefined2 *)((int)this + 0xc18) = 0x7b;
  *(undefined4 *)((int)this + 0xc1c) = 0x100;
  *(undefined4 *)((int)this + 0xc20) = 1;
  *(undefined1 *)((int)this + 0xc24) = 0xff;
  *(undefined1 *)((int)this + 0xc25) = 0;
  *(undefined4 *)((int)this + 0xc28) = 0;
  *(undefined4 *)((int)this + 0xc2c) = 0;
  *(undefined2 *)((int)this + 0xc30) = 0x7c;
  *(undefined4 *)((int)this + 0xc34) = 0x100;
  *(undefined4 *)((int)this + 0xc38) = 1;
  *(undefined1 *)((int)this + 0xc3c) = 0xff;
  *(undefined1 *)((int)this + 0xc3d) = 0;
  *(undefined4 *)((int)this + 0xc40) = 0;
  *(undefined4 *)((int)this + 0xc44) = 0;
  *(undefined2 *)((int)this + 0xc48) = 0x7d;
  *(undefined4 *)((int)this + 0xc4c) = 0x100;
  *(undefined4 *)((int)this + 0xc50) = 1;
  *(undefined1 *)((int)this + 0xc54) = 0xff;
  *(undefined1 *)((int)this + 0xc55) = 0;
  *(undefined4 *)((int)this + 0xc58) = 0;
  *(undefined4 *)((int)this + 0xc5c) = 0;
  *(undefined2 *)((int)this + 0xc60) = 0x7e;
  *(undefined4 *)((int)this + 0xc64) = 0x100;
  *(undefined4 *)((int)this + 0xc68) = 1;
  *(undefined1 *)((int)this + 0xc6c) = 0xff;
  *(undefined1 *)((int)this + 0xc6d) = 0;
  *(undefined4 *)((int)this + 0xc70) = 0;
  *(undefined4 *)((int)this + 0xc74) = 0;
  *(undefined2 *)((int)this + 0xc78) = 0x7f;
  *(undefined4 *)((int)this + 0xc7c) = 0x100;
  *(undefined4 *)((int)this + 0xc80) = 1;
  *(undefined1 *)((int)this + 0xc84) = 0xff;
  *(undefined1 *)((int)this + 0xc85) = 0;
  *(undefined4 *)((int)this + 0xc88) = 0;
  *(undefined4 *)((int)this + 0xc8c) = 0;
  *(undefined2 *)((int)this + 0xc90) = 0x80;
  *(undefined4 *)((int)this + 0xc94) = 0x100;
  *(undefined4 *)((int)this + 0xc98) = 1;
  *(undefined1 *)((int)this + 0xc9c) = 0xff;
  *(undefined1 *)((int)this + 0xc9d) = 0;
  *(undefined4 *)((int)this + 0xca0) = 0;
  *(undefined4 *)((int)this + 0xca4) = 0;
  *(undefined2 *)((int)this + 0xca8) = 0x79;
  *(undefined4 *)((int)this + 0xcac) = 0x100;
  *(undefined4 *)((int)this + 0xcb0) = 2;
  *(undefined1 *)((int)this + 0xcb4) = 0xff;
  *(undefined1 *)((int)this + 0xcb5) = 0;
  *(undefined4 *)((int)this + 0xcb8) = 0;
  *(undefined4 *)((int)this + 0xcbc) = 0;
  *(undefined2 *)((int)this + 0xcc0) = 0x96;
  *(undefined4 *)((int)this + 0xcc4) = 0x100;
  *(undefined4 *)((int)this + 0xcc8) = 2;
  *(undefined1 *)((int)this + 0xccc) = 0xff;
  *(undefined1 *)((int)this + 0xccd) = 0;
  *(undefined4 *)((int)this + 0xcd0) = 0;
  *(undefined4 *)((int)this + 0xcd4) = 0;
  *(undefined2 *)((int)this + 0xcf0) = 0x97;
  *(undefined4 *)((int)this + 0xcf4) = 0x100;
  *(undefined4 *)((int)this + 0xcf8) = 1;
  *(undefined1 *)((int)this + 0xcfc) = 0xff;
  *(undefined1 *)((int)this + 0xcfd) = 0;
  *(undefined4 *)((int)this + 0xd00) = 0;
  *(undefined4 *)((int)this + 0xd04) = 0;
  *(undefined2 *)((int)this + 0xd08) = 0x98;
  *(undefined4 *)((int)this + 0xd0c) = 0x100;
  *(undefined4 *)((int)this + 0xd10) = 1;
  *(undefined1 *)((int)this + 0xd14) = 0xff;
  *(undefined1 *)((int)this + 0xd15) = 0;
  *(undefined4 *)((int)this + 0xd18) = 0;
  *(undefined4 *)((int)this + 0xd1c) = 0;
  *(undefined2 *)((int)this + 0xd20) = 0x99;
  *(undefined4 *)((int)this + 0xd24) = 0x100;
  *(undefined4 *)((int)this + 0xd28) = 1;
  *(undefined1 *)((int)this + 0xd2c) = 0xff;
  *(undefined1 *)((int)this + 0xd2d) = 0;
  *(undefined4 *)((int)this + 0xd30) = 0;
  *(undefined4 *)((int)this + 0xd34) = 0;
  *(undefined2 *)((int)this + 0xd38) = 0x9a;
  *(undefined4 *)((int)this + 0xd3c) = 0x100;
  *(undefined4 *)((int)this + 0xd40) = 1;
  *(undefined1 *)((int)this + 0xd44) = 0xff;
  *(undefined1 *)((int)this + 0xd45) = 0;
  *(undefined4 *)((int)this + 0xd48) = 0;
  *(undefined4 *)((int)this + 0xd4c) = 0;
  *(undefined2 *)((int)this + 0xd50) = 0x9b;
  *(undefined4 *)((int)this + 0xd54) = 0x100;
  *(undefined4 *)((int)this + 0xd58) = 1;
  *(undefined1 *)((int)this + 0xd5c) = 0xff;
  *(undefined1 *)((int)this + 0xd5d) = 0;
  *(undefined4 *)((int)this + 0xd60) = 0;
  *(undefined4 *)((int)this + 0xd64) = 0;
  *(undefined2 *)((int)this + 0xd68) = 0x9c;
  *(undefined4 *)((int)this + 0xd6c) = 0x100;
  *(undefined4 *)((int)this + 0xd70) = 1;
  *(undefined1 *)((int)this + 0xd74) = 0xff;
  *(undefined1 *)((int)this + 0xd75) = 0;
  *(undefined4 *)((int)this + 0xd78) = 0;
  *(undefined4 *)((int)this + 0xd7c) = 0;
  *(undefined2 *)((int)this + 0xd80) = 0x9d;
  *(undefined4 *)((int)this + 0xd84) = 0x100;
  *(undefined4 *)((int)this + 0xd88) = 2;
  *(undefined1 *)((int)this + 0xd8c) = 0xff;
  *(undefined1 *)((int)this + 0xd8d) = 0;
  *(undefined4 *)((int)this + 0xd90) = 0;
  *(undefined4 *)((int)this + 0xd94) = 0;
  *(undefined2 *)((int)this + 0xdb0) = 0x9e;
  *(undefined4 *)((int)this + 0xdb4) = 0x100;
  *(undefined4 *)((int)this + 0xdb8) = 1;
  *(undefined1 *)((int)this + 0xdbc) = 0xff;
  *(undefined1 *)((int)this + 0xdbd) = 0;
  *(undefined4 *)((int)this + 0xdc0) = 0;
  *(undefined4 *)((int)this + 0xdc4) = 0;
  *(undefined2 *)((int)this + 0xdc8) = 0x9f;
  *(undefined4 *)((int)this + 0xdcc) = 0x100;
  *(undefined4 *)((int)this + 0xdd0) = 1;
  *(undefined1 *)((int)this + 0xdd4) = 0xff;
  *(undefined1 *)((int)this + 0xdd5) = 0;
  *(undefined4 *)((int)this + 0xdd8) = 0;
  *(undefined4 *)((int)this + 0xddc) = 0;
  *(undefined2 *)((int)this + 0xde0) = 0xa0;
  *(undefined4 *)((int)this + 0xde4) = 0x100;
  *(undefined4 *)((int)this + 0xde8) = 1;
  *(undefined1 *)((int)this + 0xdec) = 0xff;
  *(undefined1 *)((int)this + 0xded) = 0;
  *(undefined4 *)((int)this + 0xdf0) = 0;
  *(undefined4 *)((int)this + 0xdf4) = 0;
  *(undefined2 *)((int)this + 0xdf8) = 0xa1;
  *(undefined4 *)((int)this + 0xdfc) = 0x100;
  *(undefined4 *)((int)this + 0xe00) = 1;
  *(undefined1 *)((int)this + 0xe04) = 0xff;
  *(undefined1 *)((int)this + 0xe05) = 0;
  *(undefined4 *)((int)this + 0xe08) = 0;
  *(undefined4 *)((int)this + 0xe0c) = 0;
  *(undefined2 *)((int)this + 0xe10) = 0xa2;
  *(undefined4 *)((int)this + 0xe14) = 0x100;
  *(undefined4 *)((int)this + 0xe18) = 1;
  *(undefined1 *)((int)this + 0xe1c) = 0xff;
  *(undefined1 *)((int)this + 0xe1d) = 0;
  *(undefined4 *)((int)this + 0xe20) = 0;
  *(undefined4 *)((int)this + 0xe24) = 0;
  *(undefined2 *)((int)this + 0xe28) = 0xa3;
  *(undefined4 *)((int)this + 0xe2c) = 0x100;
  *(undefined4 *)((int)this + 0xe30) = 1;
  *(undefined1 *)((int)this + 0xe34) = 0xff;
  *(undefined1 *)((int)this + 0xe35) = 0;
  *(undefined4 *)((int)this + 0xe38) = 0;
  *(undefined4 *)((int)this + 0xe3c) = 0;
  *(undefined2 *)((int)this + 0xe40) = 0x8f;
  *(undefined4 *)((int)this + 0xe44) = 0x100;
  *(undefined4 *)((int)this + 0xe48) = 2;
  *(undefined1 *)((int)this + 0xe4c) = 0xff;
  *(undefined1 *)((int)this + 0xe4d) = 0;
  *(undefined4 *)((int)this + 0xe50) = 0;
  *(undefined4 *)((int)this + 0xe54) = 0;
  *(undefined2 *)((int)this + 0xe70) = 0x90;
  *(undefined4 *)((int)this + 0xe74) = 0x100;
  *(undefined4 *)((int)this + 0xe78) = 1;
  *(undefined1 *)((int)this + 0xe7c) = 0xff;
  *(undefined1 *)((int)this + 0xe7d) = 0;
  *(undefined4 *)((int)this + 0xe80) = 0;
  *(undefined4 *)((int)this + 0xe84) = 0;
  *(undefined2 *)((int)this + 0xe88) = 0x91;
  *(undefined4 *)((int)this + 0xe8c) = 0x100;
  *(undefined4 *)((int)this + 0xe90) = 1;
  *(undefined1 *)((int)this + 0xe94) = 0xff;
  *(undefined1 *)((int)this + 0xe95) = 0;
  *(undefined4 *)((int)this + 0xe98) = 0;
  *(undefined4 *)((int)this + 0xe9c) = 0;
  *(undefined2 *)((int)this + 0xea0) = 0x92;
  *(undefined4 *)((int)this + 0xea4) = 0x100;
  *(undefined4 *)((int)this + 0xea8) = 1;
  *(undefined1 *)((int)this + 0xeac) = 0xff;
  *(undefined1 *)((int)this + 0xead) = 0;
  *(undefined4 *)((int)this + 0xeb0) = 0;
  *(undefined4 *)((int)this + 0xeb4) = 0;
  *(undefined2 *)((int)this + 0xeb8) = 0x93;
  *(undefined4 *)((int)this + 0xebc) = 0x100;
  *(undefined4 *)((int)this + 0xec0) = 1;
  *(undefined1 *)((int)this + 0xec4) = 0xff;
  *(undefined1 *)((int)this + 0xec5) = 0;
  *(undefined4 *)((int)this + 0xec8) = 0;
  *(undefined4 *)((int)this + 0xecc) = 0;
  *(undefined2 *)((int)this + 0xed0) = 0x94;
  *(undefined4 *)((int)this + 0xed4) = 0x100;
  *(undefined4 *)((int)this + 0xed8) = 1;
  *(undefined1 *)((int)this + 0xedc) = 0xff;
  *(undefined1 *)((int)this + 0xedd) = 0;
  *(undefined4 *)((int)this + 0xee0) = 0;
  *(undefined4 *)((int)this + 0xee4) = 0;
  *(undefined2 *)((int)this + 0xee8) = 0x95;
  *(undefined4 *)((int)this + 0xeec) = 0x100;
  *(undefined4 *)((int)this + 0xef0) = 1;
  *(undefined1 *)((int)this + 0xef4) = 0xff;
  *(undefined1 *)((int)this + 0xef5) = 0;
  *(undefined4 *)((int)this + 0xef8) = 0;
  *(undefined4 *)((int)this + 0xefc) = 0;
  *(undefined2 *)((int)this + 0xf00) = 0xa4;
  *(undefined4 *)((int)this + 0xf04) = 0x100;
  *(undefined4 *)((int)this + 0xf08) = 2;
  *(undefined1 *)((int)this + 0xf0c) = 0xff;
  *(undefined1 *)((int)this + 0xf0d) = 0;
  *(undefined4 *)((int)this + 0xf10) = 0;
  *(undefined4 *)((int)this + 0xf14) = 0;
  *(undefined2 *)((int)this + 0xf30) = 0xa5;
  *(undefined4 *)((int)this + 0xf34) = 0x100;
  *(undefined4 *)((int)this + 0xf38) = 1;
  *(undefined1 *)((int)this + 0xf3c) = 0xff;
  *(undefined1 *)((int)this + 0xf3d) = 0;
  *(undefined4 *)((int)this + 0xf40) = 0;
  *(undefined4 *)((int)this + 0xf44) = 0;
  *(undefined2 *)((int)this + 0xf48) = 0xa6;
  *(undefined4 *)((int)this + 0xf4c) = 0x100;
  *(undefined4 *)((int)this + 0xf50) = 1;
  *(undefined1 *)((int)this + 0xf54) = 0xff;
  *(undefined1 *)((int)this + 0xf55) = 0;
  *(undefined4 *)((int)this + 0xf58) = 0;
  *(undefined4 *)((int)this + 0xf5c) = 0;
  *(undefined2 *)((int)this + 0xf60) = 0xa7;
  *(undefined4 *)((int)this + 0xf64) = 0x100;
  *(undefined4 *)((int)this + 0xf68) = 1;
  *(undefined1 *)((int)this + 0xf6c) = 0xff;
  *(undefined1 *)((int)this + 0xf6d) = 0;
  *(undefined4 *)((int)this + 0xf70) = 0;
  *(undefined4 *)((int)this + 0xf74) = 0;
  *(undefined2 *)((int)this + 0xf78) = 0xa8;
  *(undefined4 *)((int)this + 0xf7c) = 0x100;
  *(undefined4 *)((int)this + 0xf80) = 1;
  *(undefined1 *)((int)this + 0xf84) = 0xff;
  *(undefined1 *)((int)this + 0xf85) = 0;
  *(undefined4 *)((int)this + 0xf88) = 0;
  *(undefined4 *)((int)this + 0xf8c) = 0;
  *(undefined2 *)((int)this + 0xf90) = 0xa9;
  *(undefined4 *)((int)this + 0xf94) = 0x100;
  *(undefined4 *)((int)this + 0xf98) = 1;
  *(undefined1 *)((int)this + 0xf9c) = 0xff;
  *(undefined1 *)((int)this + 0xf9d) = 0;
  *(undefined4 *)((int)this + 4000) = 0;
  *(undefined4 *)((int)this + 0xfa4) = 0;
  *(undefined2 *)((int)this + 0xfa8) = 0xaa;
  *(undefined4 *)((int)this + 0xfac) = 0x100;
  *(undefined4 *)((int)this + 0xfb0) = 1;
  *(undefined1 *)((int)this + 0xfb4) = 0xff;
  *(undefined1 *)((int)this + 0xfb5) = 0;
  *(undefined4 *)((int)this + 0xfb8) = 0;
  *(undefined4 *)((int)this + 0xfbc) = 0;
  *(undefined2 *)((int)this + 0xfc0) = 0xffff;
  *(undefined4 *)((int)this + 0xfc4) = 0x200;
  *(undefined4 *)((int)this + 0xfc8) = 2;
  *(undefined1 *)((int)this + 0xfcc) = 0xff;
  *(undefined1 *)((int)this + 0xfcd) = 0;
  *(gen_code32 *)((int)this + 0xfd0) = ((code *)REFP(0x44e040));
  *(undefined4 *)((int)this + 0xfd4) = 0;
  *(undefined2 *)((int)this + 0xfd8) = 0xffff;
  *(undefined4 *)((int)this + 0xfdc) = 0x200;
  *(undefined4 *)((int)this + 0xfe0) = 2;
  *(undefined1 *)((int)this + 0xfe4) = 0xff;
  *(undefined1 *)((int)this + 0xfe5) = 0;
  *(gen_code32 *)((int)this + 0xfe8) = ((code *)REFP(0x44e040));
  *(undefined4 *)((int)this + 0xfec) = 0;
  *(undefined2 *)((int)this + 0xff0) = 0x53;
  *(undefined4 *)((int)this + 0xff4) = 0x200;
  *(undefined4 *)((int)this + 0xff8) = 2;
  *(undefined1 *)((int)this + 0xffc) = 0xff;
  *(undefined1 *)((int)this + 0xffd) = 0;
  *(undefined4 *)((int)this + 0x1000) = 0;
  *(undefined4 *)((int)this + 0x1004) = 0;
  *(undefined2 *)((int)this + 0x1008) = 0x54;
  *(undefined4 *)((int)this + 0x100c) = 0x200;
  *(undefined4 *)((int)this + 0x1010) = 2;
  *(undefined1 *)((int)this + 0x1014) = 0xff;
  *(undefined1 *)((int)this + 0x1015) = 0;
  *(undefined4 *)((int)this + 0x1018) = 0;
  *(undefined4 *)((int)this + 0x101c) = 0;
  *(undefined2 *)((int)this + 0x1020) = 0xffff;
  *(undefined4 *)((int)this + 0x1024) = 0x200;
  *(undefined4 *)((int)this + 0x1028) = 2;
  *(undefined1 *)((int)this + 0x102c) = 0xff;
  *(undefined1 *)((int)this + 0x102d) = 0;
  *(gen_code32 *)((int)this + 0x1030) = ((code *)REFP(0x44e040));
  *(undefined4 *)((int)this + 0x1034) = 0;
  *(undefined2 *)((int)this + 0x1038) = 0xffff;
  *(undefined4 *)((int)this + 0x103c) = 0x200;
  *(undefined4 *)((int)this + 0x1040) = 2;
  *(undefined1 *)((int)this + 0x1044) = 0xff;
  *(undefined1 *)((int)this + 0x1045) = 0;
  *(gen_code32 *)((int)this + 0x1048) = ((code *)REFP(0x44e040));
  *(undefined4 *)((int)this + 0x104c) = 0;
  *(undefined2 *)((int)this + 0x1050) = 0xffff;
  *(undefined4 *)((int)this + 0x1054) = 0x200;
  *(undefined4 *)((int)this + 0x1058) = 2;
  *(undefined1 *)((int)this + 0x105c) = 0xff;
  *(undefined1 *)((int)this + 0x105d) = 0;
  *(gen_code32 *)((int)this + 0x1060) = ((code *)REFP(0x44e040));
  *(undefined4 *)((int)this + 0x1064) = 0;
  *(undefined2 *)((int)this + 0x1068) = 0x17d;
  *(undefined4 *)((int)this + 0x106c) = 0x200;
  *(undefined4 *)((int)this + 0x1070) = 2;
  *(undefined1 *)((int)this + 0x1074) = 0xff;
  *(undefined1 *)((int)this + 0x1075) = 0;
  *(undefined4 *)((int)this + 0x1078) = 0;
  *(undefined4 *)((int)this + 0x107c) = 0;
  *(undefined2 *)((int)this + 0x1080) = 0x17e;
  *(undefined4 *)((int)this + 0x1084) = 0x200;
  *(undefined4 *)((int)this + 0x1088) = 2;
  *(undefined1 *)((int)this + 0x108c) = 0xff;
  *(undefined1 *)((int)this + 0x108d) = 0;
  *(undefined4 *)((int)this + 0x1090) = 0;
  *(undefined4 *)((int)this + 0x1094) = 0;
  *(undefined2 *)((int)this + 0x1098) = 0x180;
  *(undefined4 *)((int)this + 0x109c) = 0x200;
  *(undefined4 *)((int)this + 0x10a0) = 2;
  *(undefined1 *)((int)this + 0x10a4) = 0xff;
  *(undefined1 *)((int)this + 0x10a5) = 0;
  *(undefined4 *)((int)this + 0x10a8) = 0;
  *(undefined4 *)((int)this + 0x10ac) = 0;
  *(undefined2 *)((int)this + 0x10b0) = 0x17f;
  *(undefined4 *)((int)this + 0x10b4) = 0x200;
  *(undefined4 *)((int)this + 0x10b8) = 2;
  *(undefined1 *)((int)this + 0x10bc) = 0xff;
  *(undefined1 *)((int)this + 0x10bd) = 0;
  *(undefined4 *)((int)this + 0x10c0) = 0;
  *(undefined4 *)((int)this + 0x10c4) = 0;
  *(undefined2 *)((int)this + 0x10c8) = 0xb1;
  *(undefined4 *)((int)this + 0x10cc) = 0x200;
  *(undefined4 *)((int)this + 0x10d0) = 2;
  *(undefined1 *)((int)this + 0x10d4) = 0xff;
  *(undefined1 *)((int)this + 0x10d5) = 0;
  *(undefined4 *)((int)this + 0x10d8) = 0;
  *(undefined4 *)((int)this + 0x10dc) = 0;
  *(undefined2 *)((int)this + 0x10e0) = 0x30;
  *(undefined4 *)((int)this + 0x10e4) = 0x200;
  *(undefined4 *)((int)this + 0x10e8) = 2;
  *(undefined1 *)((int)this + 0x10ec) = 0xff;
  *(undefined1 *)((int)this + 0x10ed) = 0;
  *(undefined4 *)((int)this + 0x10f0) = 0;
  *(undefined4 *)((int)this + 0x10f4) = 0;
  *(undefined2 *)((int)this + 0x10f8) = 0x31;
  *(undefined4 *)((int)this + 0x10fc) = 0x200;
  *(undefined4 *)((int)this + 0x1100) = 2;
  *(undefined1 *)((int)this + 0x1104) = 0xff;
  *(undefined1 *)((int)this + 0x1105) = 0;
  *(undefined4 *)((int)this + 0x1108) = 0;
  *(undefined4 *)((int)this + 0x110c) = 0;
  *(undefined2 *)((int)this + 0x1110) = 0x32;
  *(undefined4 *)((int)this + 0x1114) = 0x200;
  *(undefined4 *)((int)this + 0x1118) = 2;
  *(undefined1 *)((int)this + 0x111c) = 0xff;
  *(undefined1 *)((int)this + 0x111d) = 0;
  *(undefined4 *)((int)this + 0x1120) = 0;
  *(undefined4 *)((int)this + 0x1124) = 0;
  *(undefined2 *)((int)this + 0x1128) = 0x74;
  *(undefined4 *)((int)this + 0x112c) = 0x400;
  *(undefined4 *)((int)this + 0x1130) = 2;
  *(undefined1 *)((int)this + 0x1134) = 0xff;
  *(undefined1 *)((int)this + 0x1135) = 0;
  *(undefined4 *)((int)this + 0x1138) = 0;
  *(undefined4 *)((int)this + 0x113c) = 0;
  *(undefined2 *)((int)this + 0x1140) = 0x75;
  *(undefined4 *)((int)this + 0x1144) = 0x400;
  *(undefined4 *)((int)this + 0x1148) = 2;
  *(undefined1 *)((int)this + 0x114c) = 0xff;
  *(undefined1 *)((int)this + 0x114d) = 0;
  *(undefined4 *)((int)this + 0x1150) = 0;
  *(undefined4 *)((int)this + 0x1154) = 0;
  *(undefined2 *)((int)this + 0x1158) = 0x181;
  *(undefined4 *)((int)this + 0x115c) = 0x800;
  *(undefined4 *)((int)this + 0x1160) = 2;
  *(undefined1 *)((int)this + 0x1164) = 0xff;
  *(undefined1 *)((int)this + 0x1165) = 0;
  *(undefined4 *)((int)this + 0x1168) = 0;
  *(undefined4 *)((int)this + 0x116c) = 0;
  *(undefined2 *)((int)this + 0x1170) = 0x184;
  *(undefined4 *)((int)this + 0x1174) = 0x800;
  *(undefined4 *)((int)this + 0x1178) = 2;
  *(undefined1 *)((int)this + 0x117c) = 0xff;
  *(undefined1 *)((int)this + 0x117d) = 0;
  *(undefined4 *)((int)this + 0x1180) = 0;
  *(undefined4 *)((int)this + 0x1184) = 0;
  *(undefined2 *)((int)this + 0x1188) = 0x185;
  *(undefined4 *)((int)this + 0x118c) = 0x800;
  *(undefined4 *)((int)this + 0x1190) = 2;
  *(undefined1 *)((int)this + 0x1194) = 0xff;
  *(undefined1 *)((int)this + 0x1195) = 0;
  *(undefined4 *)((int)this + 0x1198) = 0;
  *(undefined4 *)((int)this + 0x119c) = 0;
  *(undefined2 *)((int)this + 0x11a0) = 0x186;
  *(undefined4 *)((int)this + 0x11a4) = 0x800;
  *(undefined4 *)((int)this + 0x11a8) = 2;
  *(undefined1 *)((int)this + 0x11ac) = 0xff;
  *(undefined1 *)((int)this + 0x11ad) = 0;
  *(undefined4 *)((int)this + 0x11b0) = 0;
  *(undefined4 *)((int)this + 0x11b4) = 0;
  *(undefined2 *)((int)this + 0x11b8) = 0x187;
  *(undefined4 *)((int)this + 0x11bc) = 0x800;
  *(undefined4 *)((int)this + 0x11c0) = 2;
  *(undefined1 *)((int)this + 0x11c4) = 0xff;
  *(undefined1 *)((int)this + 0x11c5) = 0;
  *(undefined4 *)((int)this + 0x11c8) = 0;
  *(undefined4 *)((int)this + 0x11cc) = 0;
  *(undefined2 *)((int)this + 0x11d0) = 0x188;
  *(undefined4 *)((int)this + 0x11d4) = 0x800;
  *(undefined4 *)((int)this + 0x11d8) = 2;
  *(undefined1 *)((int)this + 0x11dc) = 0xff;
  *(undefined1 *)((int)this + 0x11dd) = 0;
  *(undefined4 *)((int)this + 0x11e0) = 0;
  *(undefined4 *)((int)this + 0x11e4) = 0;
  *(undefined2 *)((int)this + 0x11e8) = 0x189;
  *(undefined4 *)((int)this + 0x11ec) = 0x800;
  *(undefined4 *)((int)this + 0x11f0) = 2;
  *(undefined1 *)((int)this + 0x11f4) = 0xff;
  *(undefined1 *)((int)this + 0x11f5) = 0;
  *(undefined4 *)((int)this + 0x11f8) = 0;
  *(undefined4 *)((int)this + 0x11fc) = 0;
  *(undefined2 *)((int)this + 0x1200) = 0x18a;
  *(undefined4 *)((int)this + 0x1204) = 0x800;
  *(undefined4 *)((int)this + 0x1208) = 2;
  *(undefined1 *)((int)this + 0x120c) = 0xff;
  *(undefined1 *)((int)this + 0x120d) = 0;
  *(undefined4 *)((int)this + 0x1210) = 0;
  *(undefined4 *)((int)this + 0x1214) = 0;
  *(undefined2 *)((int)this + 0x1218) = 0x18b;
  *(undefined4 *)((int)this + 0x121c) = 0x800;
  *(undefined4 *)((int)this + 0x1220) = 2;
  *(undefined1 *)((int)this + 0x1224) = 0xff;
  *(undefined1 *)((int)this + 0x1225) = 0;
  *(undefined4 *)((int)this + 0x1228) = 0;
  *(undefined4 *)((int)this + 0x122c) = 0;
  *(undefined2 *)((int)this + 0x1230) = 0x18c;
  *(undefined4 *)((int)this + 0x1234) = 0x800;
  *(undefined4 *)((int)this + 0x1238) = 2;
  *(undefined1 *)((int)this + 0x123c) = 0xff;
  *(undefined1 *)((int)this + 0x123d) = 0;
  *(undefined4 *)((int)this + 0x1240) = 0;
  *(undefined4 *)((int)this + 0x1244) = 0;
  *(undefined2 *)((int)this + 0x1248) = 0x18d;
  *(undefined4 *)((int)this + 0x124c) = 0x800;
  *(undefined4 *)((int)this + 0x1250) = 2;
  *(undefined1 *)((int)this + 0x1254) = 0xff;
  *(undefined1 *)((int)this + 0x1255) = 0;
  *(undefined4 *)((int)this + 0x1258) = 0;
  *(undefined4 *)((int)this + 0x125c) = 0;
  *(undefined2 *)((int)this + 0x1260) = 0x18e;
  *(undefined4 *)((int)this + 0x1264) = 0x800;
  *(undefined4 *)((int)this + 0x1268) = 2;
  *(undefined1 *)((int)this + 0x126c) = 0xff;
  *(undefined1 *)((int)this + 0x126d) = 0;
  *(undefined4 *)((int)this + 0x1270) = 0;
  *(undefined4 *)((int)this + 0x1274) = 0;
  *(undefined2 *)((int)this + 0x1278) = 399;
  *(undefined4 *)((int)this + 0x127c) = 0x800;
  *(undefined4 *)((int)this + 0x1280) = 2;
  *(undefined1 *)((int)this + 0x1284) = 0xff;
  *(undefined1 *)((int)this + 0x1285) = 0;
  *(undefined4 *)((int)this + 0x1288) = 0;
  *(undefined4 *)((int)this + 0x128c) = 0;
  *(undefined2 *)((int)this + 0x1290) = 400;
  *(undefined4 *)((int)this + 0x1294) = 0x800;
  *(undefined4 *)((int)this + 0x1298) = 2;
  *(undefined1 *)((int)this + 0x129c) = 0xff;
  *(undefined1 *)((int)this + 0x129d) = 0;
  *(undefined4 *)((int)this + 0x12a0) = 0;
  *(undefined4 *)((int)this + 0x12a4) = 0;
  *(undefined2 *)((int)this + 0x12a8) = 0x191;
  *(undefined4 *)((int)this + 0x12ac) = 0x800;
  *(undefined4 *)((int)this + 0x12b0) = 2;
  *(undefined1 *)((int)this + 0x12b4) = 0xff;
  *(undefined1 *)((int)this + 0x12b5) = 0;
  *(undefined4 *)((int)this + 0x12b8) = 0;
  *(undefined4 *)((int)this + 0x12bc) = 0;
  *(undefined2 *)((int)this + 0x12c0) = 0x192;
  *(undefined4 *)((int)this + 0x12c4) = 0x800;
  *(undefined4 *)((int)this + 0x12c8) = 2;
  *(undefined1 *)((int)this + 0x12cc) = 0xff;
  *(undefined1 *)((int)this + 0x12cd) = 0;
  *(undefined4 *)((int)this + 0x12d0) = 0;
  *(undefined4 *)((int)this + 0x12d4) = 0;
  *(undefined2 *)((int)this + 0x12d8) = 0x140;
  *(undefined4 *)((int)this + 0x12dc) = 0x800;
  *(undefined4 *)((int)this + 0x12e0) = 2;
  *(undefined1 *)((int)this + 0x12e4) = 0xff;
  *(undefined1 *)((int)this + 0x12e5) = 0;
  *(undefined4 *)((int)this + 0x12e8) = 0;
  *(undefined4 *)((int)this + 0x12ec) = 0;
  *(undefined2 *)((int)this + 0x12f0) = 0x193;
  *(undefined4 *)((int)this + 0x12f4) = 0x800;
  *(undefined4 *)((int)this + 0x12f8) = 2;
  *(undefined1 *)((int)this + 0x12fc) = 0xff;
  *(undefined1 *)((int)this + 0x12fd) = 0;
  *(undefined4 *)((int)this + 0x1300) = 0;
  *(undefined4 *)((int)this + 0x1304) = 0;
  *(undefined2 *)((int)this + 0x1308) = 0x19b;
  *(undefined4 *)((int)this + 0x130c) = 0x800;
  *(undefined4 *)((int)this + 0x1310) = 2;
  *(undefined1 *)((int)this + 0x1314) = 0xff;
  *(undefined1 *)((int)this + 0x1315) = 0;
  *(undefined4 *)((int)this + 0x1318) = 0;
  *(undefined4 *)((int)this + 0x131c) = 0;
  *(undefined2 *)((int)this + 0x1320) = 0x19c;
  *(undefined4 *)((int)this + 0x1324) = 0x800;
  *(undefined4 *)((int)this + 0x1328) = 2;
  *(undefined1 *)((int)this + 0x132c) = 0xff;
  *(undefined1 *)((int)this + 0x132d) = 0;
  *(undefined4 *)((int)this + 0x1330) = 0;
  *(undefined4 *)((int)this + 0x1334) = 0;
  *(undefined2 *)((int)this + 0x1338) = 0x196;
  *(undefined4 *)((int)this + 0x133c) = 0x800;
  *(undefined4 *)((int)this + 0x1340) = 2;
  *(undefined1 *)((int)this + 0x1344) = 0xff;
  *(undefined1 *)((int)this + 0x1345) = 0;
  *(undefined4 *)((int)this + 0x1348) = 0;
  *(undefined4 *)((int)this + 0x134c) = 0;
  *(undefined2 *)((int)this + 0x1350) = 0x182;
  *(undefined4 *)((int)this + 0x1354) = 0x800;
  *(undefined4 *)((int)this + 0x1358) = 2;
  *(undefined1 *)((int)this + 0x135c) = 0xff;
  *(undefined1 *)((int)this + 0x135d) = 0;
  *(undefined4 *)((int)this + 0x1360) = 0;
  *(undefined4 *)((int)this + 0x1364) = 0;
  *(undefined2 *)((int)this + 0x1368) = 0x198;
  *(undefined4 *)((int)this + 0x136c) = 0x800;
  *(undefined4 *)((int)this + 0x1370) = 2;
  *(undefined1 *)((int)this + 0x1374) = 0xff;
  *(undefined1 *)((int)this + 0x1375) = 0;
  *(undefined4 *)((int)this + 0x1378) = 0;
  *(undefined4 *)((int)this + 0x137c) = 0;
  *(undefined2 *)((int)this + 0x1380) = 0x199;
  *(undefined4 *)((int)this + 0x1384) = 0x800;
  *(undefined4 *)((int)this + 5000) = 2;
  *(undefined1 *)((int)this + 0x138c) = 0xff;
  *(undefined1 *)((int)this + 0x138d) = 0;
  *(undefined4 *)((int)this + 0x1390) = 0;
  *(undefined4 *)((int)this + 0x1394) = 0;
  *(undefined2 *)((int)this + 0x1398) = 0x19a;
  *(undefined4 *)((int)this + 0x139c) = 0x800;
  *(undefined4 *)((int)this + 0x13a0) = 2;
  *(undefined1 *)((int)this + 0x13a4) = 0xff;
  *(undefined1 *)((int)this + 0x13a5) = 0;
  *(undefined4 *)((int)this + 0x13a8) = 0;
  *(undefined4 *)((int)this + 0x13ac) = 0;
  *(undefined2 *)((int)this + 0x13b0) = 0x197;
  *(undefined4 *)((int)this + 0x13b4) = 0x800;
  *(undefined4 *)((int)this + 0x13b8) = 2;
  *(undefined1 *)((int)this + 0x13bc) = 0xff;
  *(undefined1 *)((int)this + 0x13bd) = 1;
  *(undefined4 *)((int)this + 0x13c0) = 0;
  *(undefined4 *)((int)this + 0x13c4) = 0;
  *(undefined2 *)((int)this + 0x13c8) = 0x194;
  *(undefined4 *)((int)this + 0x13cc) = 0x1000;
  *(undefined4 *)((int)this + 0x13d0) = 2;
  *(undefined1 *)((int)this + 0x13d4) = 0xff;
  *(undefined1 *)((int)this + 0x13d5) = 0;
  *(undefined4 *)((int)this + 0x13d8) = 0;
  *(undefined4 *)((int)this + 0x13dc) = 0;
  *(undefined2 *)((int)this + 0x13e0) = 0x195;
  *(undefined4 *)((int)this + 0x13e4) = 0x1000;
  *(undefined4 *)((int)this + 0x13e8) = 2;
  *(undefined1 *)((int)this + 0x13ec) = 0xff;
  *(undefined1 *)((int)this + 0x13ed) = 0;
  *(undefined4 *)((int)this + 0x13f0) = 0;
  *(undefined4 *)((int)this + 0x13f4) = 0;
  *(undefined2 *)((int)this + 0x13f8) = 0x137;
  *(undefined4 *)((int)this + 0x13fc) = 0x1000;
  *(undefined4 *)((int)this + 0x1400) = 2;
  *(undefined1 *)((int)this + 0x1404) = 0xff;
  *(undefined1 *)((int)this + 0x1405) = 0;
  *(undefined4 *)((int)this + 0x1408) = 0;
  *(undefined4 *)((int)this + 0x140c) = 0;
  *(undefined2 *)((int)this + 0x1428) = 0xf3;
  *(undefined4 *)((int)this + 0x142c) = 0x2000;
  *(undefined4 *)((int)this + 0x1430) = 2;
  *(undefined1 *)((int)this + 0x1434) = 0xff;
  *(undefined1 *)((int)this + 0x1435) = 0;
  *(undefined4 *)((int)this + 0x1438) = 0;
  *(undefined4 *)((int)this + 0x143c) = 0;
  *(undefined2 *)((int)this + 0x1440) = 0xf5;
  *(undefined4 *)((int)this + 0x1444) = 0x2000;
  *(undefined4 *)((int)this + 0x1448) = 2;
  *(undefined1 *)((int)this + 0x144c) = 0xff;
  *(undefined1 *)((int)this + 0x144d) = 0;
  *(undefined4 *)((int)this + 0x1450) = 0;
  *(undefined4 *)((int)this + 0x1454) = 0;
  *(undefined2 *)((int)this + 0x1458) = 0xf6;
  *(undefined4 *)((int)this + 0x145c) = 0x2000;
  *(undefined4 *)((int)this + 0x1460) = 2;
  *(undefined1 *)((int)this + 0x1464) = 0xff;
  *(undefined1 *)((int)this + 0x1465) = 0;
  *(undefined4 *)((int)this + 0x1468) = 0;
  *(undefined4 *)((int)this + 0x146c) = 0;
  *(undefined2 *)((int)this + 0x1470) = 0xf7;
  *(undefined4 *)((int)this + 0x1474) = 0x2000;
  *(undefined4 *)((int)this + 0x1478) = 2;
  *(undefined1 *)((int)this + 0x147c) = 0xff;
  *(undefined1 *)((int)this + 0x147d) = 0;
  *(undefined4 *)((int)this + 0x1480) = 0;
  *(undefined4 *)((int)this + 0x1484) = 0;
  *(undefined2 *)((int)this + 0x1488) = 0xf8;
  *(undefined4 *)((int)this + 0x148c) = 0x2000;
  *(undefined4 *)((int)this + 0x1490) = 2;
  *(undefined1 *)((int)this + 0x1494) = 0xff;
  *(undefined1 *)((int)this + 0x1495) = 0;
  *(undefined4 *)((int)this + 0x1498) = 0;
  *(undefined4 *)((int)this + 0x149c) = 0;
  *(undefined2 *)((int)this + 0x14a0) = 0xfa;
  *(undefined4 *)((int)this + 0x14a4) = 0x2000;
  *(undefined4 *)((int)this + 0x14a8) = 2;
  *(undefined1 *)((int)this + 0x14ac) = 0xff;
  *(undefined1 *)((int)this + 0x14ad) = 0;
  *(undefined4 *)((int)this + 0x14b0) = 0;
  *(undefined4 *)((int)this + 0x14b4) = 0;
  *(undefined2 *)((int)this + 0x14b8) = 0xfb;
  *(undefined4 *)((int)this + 0x14bc) = 0x2000;
  *(undefined4 *)((int)this + 0x14c0) = 2;
  *(undefined1 *)((int)this + 0x14c4) = 0xff;
  *(undefined1 *)((int)this + 0x14c5) = 0;
  *(undefined4 *)((int)this + 0x14c8) = 0;
  *(undefined4 *)((int)this + 0x14cc) = 0;
  *(undefined2 *)((int)this + 0x14d0) = 0xfc;
  *(undefined4 *)((int)this + 0x14d4) = 0x2000;
  *(undefined4 *)((int)this + 0x14d8) = 2;
  *(undefined1 *)((int)this + 0x14dc) = 0xff;
  *(undefined1 *)((int)this + 0x14dd) = 0;
  *(undefined4 *)((int)this + 0x14e0) = 0;
  *(undefined4 *)((int)this + 0x14e4) = 0;
  *(undefined2 *)((int)this + 0x14e8) = 0xfe;
  *(undefined4 *)((int)this + 0x14ec) = 0x2000;
  *(undefined4 *)((int)this + 0x14f0) = 2;
  *(undefined1 *)((int)this + 0x14f4) = 0xff;
  *(undefined1 *)((int)this + 0x14f5) = 0;
  *(undefined4 *)((int)this + 0x14f8) = 0;
  *(undefined4 *)((int)this + 0x14fc) = 0;
  *(undefined2 *)((int)this + 0x1500) = 0xff;
  *(undefined4 *)((int)this + 0x1504) = 0x2000;
  *(undefined4 *)((int)this + 0x1508) = 2;
  *(undefined1 *)((int)this + 0x150c) = 0xff;
  *(undefined1 *)((int)this + 0x150d) = 0;
  *(undefined4 *)((int)this + 0x1510) = 0;
  *(undefined4 *)((int)this + 0x1514) = 0;
  *(undefined2 *)((int)this + 0x1530) = 0x100;
  *(undefined4 *)((int)this + 0x1534) = 0x4000;
  *(undefined4 *)((int)this + 0x1538) = 2;
  *(undefined1 *)((int)this + 0x153c) = 0xff;
  *(undefined1 *)((int)this + 0x153d) = 0;
  *(undefined4 *)((int)this + 0x1540) = 0;
  *(undefined4 *)((int)this + 0x1544) = 0;
  *(undefined2 *)((int)this + 0x1548) = 0x102;
  *(undefined4 *)((int)this + 0x154c) = 0x4000;
  *(undefined4 *)((int)this + 0x1550) = 2;
  *(undefined1 *)((int)this + 0x1554) = 0xff;
  *(undefined1 *)((int)this + 0x1555) = 0;
  *(undefined4 *)((int)this + 0x1558) = 0;
  *(undefined4 *)((int)this + 0x155c) = 0;
  *(undefined2 *)((int)this + 0x1560) = 0x103;
  *(undefined4 *)((int)this + 0x1564) = 0x4000;
  *(undefined4 *)((int)this + 0x1568) = 2;
  *(undefined1 *)((int)this + 0x156c) = 0xff;
  *(undefined1 *)((int)this + 0x156d) = 0;
  *(undefined4 *)((int)this + 0x1570) = 0;
  *(undefined4 *)((int)this + 0x1574) = 0;
  *(undefined2 *)((int)this + 0x1578) = 0x104;
  *(undefined4 *)((int)this + 0x157c) = 0x4000;
  *(undefined4 *)((int)this + 0x1580) = 2;
  *(undefined1 *)((int)this + 0x1584) = 0xff;
  *(undefined1 *)((int)this + 0x1585) = 0;
  *(undefined4 *)((int)this + 0x1588) = 0;
  *(undefined4 *)((int)this + 0x158c) = 0;
  *(undefined2 *)((int)this + 0x1590) = 0x105;
  *(undefined4 *)((int)this + 0x1594) = 0x4000;
  *(undefined4 *)((int)this + 0x1598) = 2;
  *(undefined1 *)((int)this + 0x159c) = 0xff;
  *(undefined1 *)((int)this + 0x159d) = 0;
  *(undefined4 *)((int)this + 0x15a0) = 0;
  *(undefined4 *)((int)this + 0x15a4) = 0;
  *(undefined2 *)((int)this + 0x15a8) = 0x106;
  *(undefined4 *)((int)this + 0x15ac) = 0x4000;
  *(undefined4 *)((int)this + 0x15b0) = 2;
  *(undefined1 *)((int)this + 0x15b4) = 0xff;
  *(undefined1 *)((int)this + 0x15b5) = 0;
  *(undefined4 *)((int)this + 0x15b8) = 0;
  *(undefined4 *)((int)this + 0x15bc) = 0;
  *(undefined2 *)((int)this + 0x15c0) = 0x107;
  *(undefined4 *)((int)this + 0x15c4) = 0x4000;
  *(undefined4 *)((int)this + 0x15c8) = 2;
  *(undefined1 *)((int)this + 0x15cc) = 0xff;
  *(undefined1 *)((int)this + 0x15cd) = 0;
  *(undefined4 *)((int)this + 0x15d0) = 0;
  *(undefined4 *)((int)this + 0x15d4) = 0;
  *(undefined2 *)((int)this + 0x15d8) = 0x109;
  *(undefined4 *)((int)this + 0x15dc) = 0x4000;
  *(undefined4 *)((int)this + 0x15e0) = 2;
  *(undefined1 *)((int)this + 0x15e4) = 0xff;
  *(undefined1 *)((int)this + 0x15e5) = 0;
  *(undefined4 *)((int)this + 0x15e8) = 0;
  *(undefined4 *)((int)this + 0x15ec) = 0;
  *(undefined2 *)((int)this + 0x15f0) = 0x10a;
  *(undefined4 *)((int)this + 0x15f4) = 0x4000;
  *(undefined4 *)((int)this + 0x15f8) = 2;
  *(undefined1 *)((int)this + 0x15fc) = 0xff;
  *(undefined1 *)((int)this + 0x15fd) = 0;
  *(undefined4 *)((int)this + 0x1600) = 0;
  *(undefined4 *)((int)this + 0x1604) = 0;
  *(undefined2 *)((int)this + 0x1608) = 0x10b;
  *(undefined4 *)((int)this + 0x160c) = 0x4000;
  *(undefined4 *)((int)this + 0x1610) = 2;
  *(undefined1 *)((int)this + 0x1614) = 0xff;
  *(undefined1 *)((int)this + 0x1615) = 0;
  *(undefined4 *)((int)this + 0x1618) = 0;
  *(undefined4 *)((int)this + 0x161c) = 0;
  *(undefined2 *)((int)this + 0x1620) = 0x10c;
  *(undefined4 *)((int)this + 0x1624) = 0x4000;
  *(undefined4 *)((int)this + 0x1628) = 2;
  *(undefined1 *)((int)this + 0x162c) = 0xff;
  *(undefined1 *)((int)this + 0x162d) = 0;
  *(undefined4 *)((int)this + 0x1630) = 0;
  *(undefined4 *)((int)this + 0x1634) = 0;
  *(undefined2 *)((int)this + 0x1638) = 0x10d;
  *(undefined4 *)((int)this + 0x163c) = 0x4000;
  *(undefined4 *)((int)this + 0x1640) = 2;
  *(undefined1 *)((int)this + 0x1644) = 0xff;
  *(undefined1 *)((int)this + 0x1645) = 0;
  *(undefined4 *)((int)this + 0x1648) = 0;
  *(undefined4 *)((int)this + 0x164c) = 0;
  *(undefined2 *)((int)this + 0x1650) = 0x10e;
  *(undefined4 *)((int)this + 0x1654) = 0x4000;
  *(undefined4 *)((int)this + 0x1658) = 2;
  *(undefined1 *)((int)this + 0x165c) = 0xff;
  *(undefined1 *)((int)this + 0x165d) = 0;
  *(undefined4 *)((int)this + 0x1660) = 0;
  *(undefined4 *)((int)this + 0x1664) = 0;
  *(undefined2 *)((int)this + 0x1668) = 0x110;
  *(undefined4 *)((int)this + 0x166c) = 0x4000;
  *(undefined4 *)((int)this + 0x1670) = 2;
  *(undefined1 *)((int)this + 0x1674) = 0xff;
  *(undefined1 *)((int)this + 0x1675) = 0;
  *(undefined4 *)((int)this + 0x1678) = 0;
  *(undefined4 *)((int)this + 0x167c) = 0;
  *(undefined2 *)((int)this + 0x1680) = 0x111;
  *(undefined4 *)((int)this + 0x1684) = 0x4000;
  *(undefined4 *)((int)this + 0x1688) = 2;
  *(undefined1 *)((int)this + 0x168c) = 0xff;
  *(undefined1 *)((int)this + 0x168d) = 0;
  *(undefined4 *)((int)this + 0x1690) = 0;
  *(undefined4 *)((int)this + 0x1694) = 0;
  *(undefined2 *)((int)this + 0x1698) = 0x112;
  *(undefined4 *)((int)this + 0x169c) = 0x4000;
  *(undefined4 *)((int)this + 0x16a0) = 2;
  *(undefined1 *)((int)this + 0x16a4) = 0xff;
  *(undefined1 *)((int)this + 0x16a5) = 0;
  *(undefined4 *)((int)this + 0x16a8) = 0;
  *(undefined4 *)((int)this + 0x16ac) = 0;
  *(undefined2 *)((int)this + 0x16b0) = 0x113;
  *(undefined4 *)((int)this + 0x16b4) = 0x4000;
  *(undefined4 *)((int)this + 0x16b8) = 2;
  *(undefined1 *)((int)this + 0x16bc) = 0xff;
  *(undefined1 *)((int)this + 0x16bd) = 0;
  *(undefined4 *)((int)this + 0x16c0) = 0;
  *(undefined4 *)((int)this + 0x16c4) = 0;
  *(undefined2 *)((int)this + 0x16c8) = 0x114;
  *(undefined4 *)((int)this + 0x16cc) = 0x4000;
  *(undefined4 *)((int)this + 0x16d0) = 2;
  *(undefined1 *)((int)this + 0x16d4) = 0xff;
  *(undefined1 *)((int)this + 0x16d5) = 0;
  *(undefined4 *)((int)this + 0x16d8) = 0;
  *(undefined4 *)((int)this + 0x16dc) = 0;
  *(undefined2 *)((int)this + 0x16f8) = 0x115;
  *(undefined4 *)((int)this + 0x16fc) = 0x8000;
  *(undefined4 *)((int)this + 0x1700) = 1;
  *(undefined1 *)((int)this + 0x1704) = 0xff;
  *(undefined1 *)((int)this + 0x1705) = 0;
  *(undefined4 *)((int)this + 0x1708) = 0;
  *(undefined4 *)((int)this + 0x170c) = 0;
  *(undefined2 *)((int)this + 0x1710) = 0x117;
  *(undefined4 *)((int)this + 0x1714) = 0x8000;
  *(undefined4 *)((int)this + 0x1718) = 2;
  *(undefined1 *)((int)this + 0x171c) = 0xff;
  *(undefined1 *)((int)this + 0x171d) = 0;
  *(undefined4 *)((int)this + 0x1720) = 0;
  *(undefined4 *)((int)this + 0x1724) = 0;
  *(undefined2 *)((int)this + 0x1728) = 0x118;
  *(undefined4 *)((int)this + 0x172c) = 0x8000;
  *(undefined4 *)((int)this + 0x1730) = 2;
  *(undefined1 *)((int)this + 0x1734) = 0xff;
  *(undefined1 *)((int)this + 0x1735) = 0;
  *(undefined4 *)((int)this + 0x1738) = 0;
  *(undefined4 *)((int)this + 0x173c) = 0;
  *(undefined2 *)((int)this + 0x1740) = 0x119;
  *(undefined4 *)((int)this + 0x1744) = 0x8000;
  *(undefined4 *)((int)this + 0x1748) = 1;
  *(undefined1 *)((int)this + 0x174c) = 0xff;
  *(undefined1 *)((int)this + 0x174d) = 0;
  *(undefined4 *)((int)this + 0x1750) = 0;
  *(undefined4 *)((int)this + 0x1754) = 0;
  *(undefined2 *)((int)this + 0x1758) = 0x11b;
  *(undefined4 *)((int)this + 0x175c) = 0x8000;
  *(undefined4 *)((int)this + 0x1760) = 2;
  *(undefined1 *)((int)this + 0x1764) = 0xff;
  *(undefined1 *)((int)this + 0x1765) = 0;
  *(undefined4 *)((int)this + 0x1768) = 0;
  *(undefined4 *)((int)this + 0x176c) = 0;
  *(undefined2 *)((int)this + 6000) = 0x11c;
  *(undefined4 *)((int)this + 0x1774) = 0x8000;
  *(undefined4 *)((int)this + 0x1778) = 2;
  *(undefined1 *)((int)this + 0x177c) = 0xff;
  *(undefined1 *)((int)this + 0x177d) = 0;
  *(undefined4 *)((int)this + 0x1780) = 0;
  *(undefined4 *)((int)this + 0x1784) = 0;
  *(undefined2 *)((int)this + 0x1788) = 0x11d;
  *(undefined4 *)((int)this + 0x178c) = 0x8000;
  *(undefined4 *)((int)this + 0x1790) = 1;
  *(undefined1 *)((int)this + 0x1794) = 0xff;
  *(undefined1 *)((int)this + 0x1795) = 0;
  *(undefined4 *)((int)this + 0x1798) = 0;
  *(undefined4 *)((int)this + 0x179c) = 0;
  *(undefined2 *)((int)this + 0x17a0) = 0x11f;
  *(undefined4 *)((int)this + 0x17a4) = 0x8000;
  *(undefined4 *)((int)this + 0x17a8) = 2;
  *(undefined1 *)((int)this + 0x17ac) = 0xff;
  *(undefined1 *)((int)this + 0x17ad) = 0;
  *(undefined4 *)((int)this + 0x17b0) = 0;
  *(undefined4 *)((int)this + 0x17b4) = 0;
  *(undefined2 *)((int)this + 0x17b8) = 0x120;
  *(undefined4 *)((int)this + 0x17bc) = 0x8000;
  *(undefined4 *)((int)this + 0x17c0) = 2;
  *(undefined1 *)((int)this + 0x17c4) = 0xff;
  *(undefined1 *)((int)this + 0x17c5) = 0;
  *(undefined4 *)((int)this + 0x17c8) = 0;
  *(undefined4 *)((int)this + 0x17cc) = 0;
  *(undefined2 *)((int)this + 0x17d0) = 0x121;
  *(undefined4 *)((int)this + 0x17d4) = 0x8000;
  *(undefined4 *)((int)this + 0x17d8) = 1;
  *(undefined1 *)((int)this + 0x17dc) = 0xff;
  *(undefined1 *)((int)this + 0x17dd) = 0;
  *(undefined4 *)((int)this + 0x17e0) = 0;
  *(undefined4 *)((int)this + 0x17e4) = 0;
  *(undefined2 *)((int)this + 0x17e8) = 0x123;
  *(undefined4 *)((int)this + 0x17ec) = 0x8000;
  *(undefined4 *)((int)this + 0x17f0) = 2;
  *(undefined1 *)((int)this + 0x17f4) = 0xff;
  *(undefined1 *)((int)this + 0x17f5) = 0;
  *(undefined4 *)((int)this + 0x17f8) = 0;
  *(undefined4 *)((int)this + 0x17fc) = 0;
  *(undefined2 *)((int)this + 0x1800) = 0x124;
  *(undefined4 *)((int)this + 0x1804) = 0x8000;
  *(undefined4 *)((int)this + 0x1808) = 2;
  *(undefined1 *)((int)this + 0x180c) = 0xff;
  *(undefined1 *)((int)this + 0x180d) = 0;
  *(undefined4 *)((int)this + 0x1810) = 0;
  *(undefined4 *)((int)this + 0x1814) = 0;
  *(undefined2 *)((int)this + 0x1818) = 0x125;
  *(undefined4 *)((int)this + 0x181c) = 0x8000;
  *(undefined4 *)((int)this + 0x1820) = 1;
  *(undefined1 *)((int)this + 0x1824) = 0xff;
  *(undefined1 *)((int)this + 0x1825) = 0;
  *(undefined4 *)((int)this + 0x1828) = 0;
  *(undefined4 *)((int)this + 0x182c) = 0;
  *(undefined2 *)((int)this + 0x1830) = 0x127;
  *(undefined4 *)((int)this + 0x1834) = 0x8000;
  *(undefined4 *)((int)this + 0x1838) = 2;
  *(undefined1 *)((int)this + 0x183c) = 0xff;
  *(undefined1 *)((int)this + 0x183d) = 0;
  *(undefined4 *)((int)this + 0x1840) = 0;
  *(undefined4 *)((int)this + 0x1844) = 0;
  *(undefined2 *)((int)this + 0x1848) = 0x128;
  *(undefined4 *)((int)this + 0x184c) = 0x8000;
  *(undefined4 *)((int)this + 0x1850) = 2;
  *(undefined1 *)((int)this + 0x1854) = 0xff;
  *(undefined1 *)((int)this + 0x1855) = 0;
  *(undefined4 *)((int)this + 0x1858) = 0;
  *(undefined4 *)((int)this + 0x185c) = 0;
  *(undefined2 *)((int)this + 0x1860) = 0x129;
  *(undefined4 *)((int)this + 0x1864) = 0x8000;
  *(undefined4 *)((int)this + 0x1868) = 1;
  *(undefined1 *)((int)this + 0x186c) = 0xff;
  *(undefined1 *)((int)this + 0x186d) = 0;
  *(undefined4 *)((int)this + 0x1870) = 0;
  *(undefined4 *)((int)this + 0x1874) = 0;
  *(undefined2 *)((int)this + 0x1878) = 299;
  *(undefined4 *)((int)this + 0x187c) = 0x8000;
  *(undefined4 *)((int)this + 0x1880) = 2;
  *(undefined1 *)((int)this + 0x1884) = 0xff;
  *(undefined1 *)((int)this + 0x1885) = 0;
  *(undefined4 *)((int)this + 0x1888) = 0;
  *(undefined4 *)((int)this + 0x188c) = 0;
  *(undefined2 *)((int)this + 0x1890) = 300;
  *(undefined4 *)((int)this + 0x1894) = 0x8000;
  *(undefined4 *)((int)this + 0x1898) = 2;
  *(undefined1 *)((int)this + 0x189c) = 0xff;
  *(undefined1 *)((int)this + 0x189d) = 0;
  *(undefined4 *)((int)this + 0x18a0) = 0;
  *(undefined4 *)((int)this + 0x18a4) = 0;
  *(undefined2 *)((int)this + 0x18a8) = 0x12d;
  *(undefined4 *)((int)this + 0x18ac) = 0x8000;
  *(undefined4 *)((int)this + 0x18b0) = 1;
  *(undefined1 *)((int)this + 0x18b4) = 0xff;
  *(undefined1 *)((int)this + 0x18b5) = 0;
  *(undefined4 *)((int)this + 0x18b8) = 0;
  *(undefined4 *)((int)this + 0x18bc) = 0;
  *(undefined2 *)((int)this + 0x18c0) = 0x12f;
  *(undefined4 *)((int)this + 0x18c4) = 0x8000;
  *(undefined4 *)((int)this + 0x18c8) = 2;
  *(undefined1 *)((int)this + 0x18cc) = 0xff;
  *(undefined1 *)((int)this + 0x18cd) = 0;
  *(undefined4 *)((int)this + 0x18d0) = 0;
  *(undefined4 *)((int)this + 0x18d4) = 0;
  *(undefined2 *)((int)this + 0x18d8) = 0x130;
  *(undefined4 *)((int)this + 0x18dc) = 0x8000;
  *(undefined4 *)((int)this + 0x18e0) = 1;
  *(undefined1 *)((int)this + 0x18e4) = 0xff;
  *(undefined1 *)((int)this + 0x18e5) = 0;
  *(undefined4 *)((int)this + 0x18e8) = 0;
  *(undefined4 *)((int)this + 0x18ec) = 0;
  *(undefined2 *)((int)this + 0x18f0) = 0x132;
  *(undefined4 *)((int)this + 0x18f4) = 0x8000;
  *(undefined4 *)((int)this + 0x18f8) = 1;
  *(undefined1 *)((int)this + 0x18fc) = 0xff;
  *(undefined1 *)((int)this + 0x18fd) = 0;
  *(undefined4 *)((int)this + 0x1900) = 0;
  *(undefined4 *)((int)this + 0x1904) = 0;
  *(undefined2 *)((int)this + 0x1908) = 0xf4;
  *(undefined4 *)((int)this + 0x190c) = 0x8000;
  *(undefined4 *)((int)this + 0x1910) = 1;
  *(undefined1 *)((int)this + 0x1914) = 0xff;
  *(undefined1 *)((int)this + 0x1915) = 0;
  *(undefined4 *)((int)this + 0x1918) = 0;
  *(undefined4 *)((int)this + 0x191c) = 0;
  *(undefined2 *)((int)this + 0x1920) = 0xf9;
  *(undefined4 *)((int)this + 0x1924) = 0x8000;
  *(undefined4 *)((int)this + 0x1928) = 1;
  *(undefined1 *)((int)this + 0x192c) = 0xff;
  *(undefined1 *)((int)this + 0x192d) = 0;
  *(undefined4 *)((int)this + 0x1930) = 0;
  *(undefined4 *)((int)this + 0x1934) = 0;
  *(undefined2 *)((int)this + 0x1938) = 0xfd;
  *(undefined4 *)((int)this + 0x193c) = 0x8000;
  *(undefined4 *)((int)this + 0x1940) = 1;
  *(undefined1 *)((int)this + 0x1944) = 0xff;
  *(undefined1 *)((int)this + 0x1945) = 0;
  *(undefined4 *)((int)this + 0x1948) = 0;
  *(undefined4 *)((int)this + 0x194c) = 0;
  *(undefined2 *)((int)this + 0x1950) = 0x101;
  *(undefined4 *)((int)this + 0x1954) = 0x8000;
  *(undefined4 *)((int)this + 0x1958) = 1;
  *(undefined1 *)((int)this + 0x195c) = 0xff;
  *(undefined1 *)((int)this + 0x195d) = 0;
  *(undefined4 *)((int)this + 0x1960) = 0;
  *(undefined4 *)((int)this + 0x1964) = 0;
  *(undefined2 *)((int)this + 0x1968) = 0x108;
  *(undefined4 *)((int)this + 0x196c) = 0x8000;
  *(undefined4 *)((int)this + 0x1970) = 1;
  *(undefined1 *)((int)this + 0x1974) = 0xff;
  *(undefined1 *)((int)this + 0x1975) = 0;
  *(undefined4 *)((int)this + 0x1978) = 0;
  *(undefined4 *)((int)this + 0x197c) = 0;
  *(undefined2 *)((int)this + 0x1980) = 0x10f;
  *(undefined4 *)((int)this + 0x1984) = 0x8000;
  *(undefined4 *)((int)this + 0x1988) = 1;
  *(undefined1 *)((int)this + 0x198c) = 0xff;
  *(undefined1 *)((int)this + 0x198d) = 0;
  *(undefined4 *)((int)this + 0x1990) = 0;
  *(undefined4 *)((int)this + 0x1994) = 0;
  *(undefined2 *)((int)this + 0x1998) = 0x116;
  *(undefined4 *)((int)this + 0x199c) = 0x8000;
  *(undefined4 *)((int)this + 0x19a0) = 1;
  *(undefined1 *)((int)this + 0x19a4) = 0xff;
  *(undefined1 *)((int)this + 0x19a5) = 0;
  *(undefined4 *)((int)this + 0x19a8) = 0;
  *(undefined4 *)((int)this + 0x19ac) = 0;
  *(undefined2 *)((int)this + 0x19b0) = 0x11a;
  *(undefined4 *)((int)this + 0x19b4) = 0x8000;
  *(undefined4 *)((int)this + 0x19b8) = 1;
  *(undefined1 *)((int)this + 0x19bc) = 0xff;
  *(undefined1 *)((int)this + 0x19bd) = 0;
  *(undefined4 *)((int)this + 0x19c0) = 0;
  *(undefined4 *)((int)this + 0x19c4) = 0;
  *(undefined2 *)((int)this + 0x19c8) = 0x11e;
  *(undefined4 *)((int)this + 0x19cc) = 0x8000;
  *(undefined4 *)((int)this + 0x19d0) = 1;
  *(undefined1 *)((int)this + 0x19d4) = 0xff;
  *(undefined1 *)((int)this + 0x19d5) = 0;
  *(undefined4 *)((int)this + 0x19d8) = 0;
  *(undefined4 *)((int)this + 0x19dc) = 0;
  *(undefined2 *)((int)this + 0x19e0) = 0x122;
  *(undefined4 *)((int)this + 0x19e4) = 0x8000;
  *(undefined4 *)((int)this + 0x19e8) = 1;
  *(undefined1 *)((int)this + 0x19ec) = 0xff;
  *(undefined1 *)((int)this + 0x19ed) = 0;
  *(undefined4 *)((int)this + 0x19f0) = 0;
  *(undefined4 *)((int)this + 0x19f4) = 0;
  *(undefined2 *)((int)this + 0x19f8) = 0x126;
  *(undefined4 *)((int)this + 0x19fc) = 0x8000;
  *(undefined4 *)((int)this + 0x1a00) = 1;
  *(undefined1 *)((int)this + 0x1a04) = 0xff;
  *(undefined1 *)((int)this + 0x1a05) = 0;
  *(undefined4 *)((int)this + 0x1a08) = 0;
  *(undefined4 *)((int)this + 0x1a0c) = 0;
  *(undefined2 *)((int)this + 0x1a10) = 0x12a;
  *(undefined4 *)((int)this + 0x1a14) = 0x8000;
  *(undefined4 *)((int)this + 0x1a18) = 1;
  *(undefined1 *)((int)this + 0x1a1c) = 0xff;
  *(undefined1 *)((int)this + 0x1a1d) = 0;
  *(undefined4 *)((int)this + 0x1a20) = 0;
  *(undefined4 *)((int)this + 0x1a24) = 0;
  *(undefined2 *)((int)this + 0x1a28) = 0x12e;
  *(undefined4 *)((int)this + 0x1a2c) = 0x8000;
  *(undefined4 *)((int)this + 0x1a30) = 1;
  *(undefined1 *)((int)this + 0x1a34) = 0xff;
  *(undefined1 *)((int)this + 0x1a35) = 0;
  *(undefined4 *)((int)this + 0x1a38) = 0;
  *(undefined4 *)((int)this + 0x1a3c) = 0;
  *(undefined2 *)((int)this + 0x1a40) = 0x131;
  *(undefined4 *)((int)this + 0x1a44) = 0x8000;
  *(undefined4 *)((int)this + 0x1a48) = 1;
  *(undefined1 *)((int)this + 0x1a4c) = 0xff;
  *(undefined1 *)((int)this + 0x1a4d) = 0;
  *(undefined4 *)((int)this + 0x1a50) = 0;
  *(undefined4 *)((int)this + 0x1a54) = 0;
  *(undefined2 *)((int)this + 0x1a58) = 0x133;
  *(undefined4 *)((int)this + 0x1a5c) = 0x8000;
  *(undefined4 *)((int)this + 0x1a60) = 1;
  *(undefined1 *)((int)this + 0x1a64) = 0xff;
  *(undefined1 *)((int)this + 0x1a65) = 0;
  *(undefined4 *)((int)this + 0x1a68) = 0;
  *(undefined4 *)((int)this + 0x1a6c) = 0;
  *(undefined2 *)((int)this + 0x1a70) = 0xf2;
  *(undefined4 *)((int)this + 0x1a74) = 0x10000;
  *(undefined4 *)((int)this + 0x1a78) = 2;
  *(undefined1 *)((int)this + 0x1a7c) = 0xff;
  *(undefined1 *)((int)this + 0x1a7d) = 0;
  *(undefined4 *)((int)this + 0x1a80) = 0;
  *(undefined4 *)((int)this + 0x1a84) = 0;
  *(undefined2 *)((int)this + 0x1a88) = 0xb9;
  *(undefined4 *)((int)this + 0x1a8c) = 0x20000;
  *(undefined4 *)((int)this + 0x1a90) = 2;
  *(undefined2 *)((int)this + 0x1a94) = 0;
  *(undefined4 *)((int)this + 0x1a98) = 0;
  *(undefined4 *)((int)this + 0x1a9c) = 0;
  *(undefined2 *)((int)this + 0x1aa0) = 0xb9;
  *(undefined4 *)((int)this + 0x1aa4) = 0x20000;
  *(undefined4 *)((int)this + 0x1aa8) = 2;
  *(undefined2 *)((int)this + 0x1aac) = 1;
  *(undefined4 *)((int)this + 0x1ab0) = 0;
  *(undefined4 *)((int)this + 0x1ab4) = 0;
  *(undefined2 *)((int)this + 0x1ab8) = 0xb9;
  *(undefined4 *)((int)this + 0x1abc) = 0x20000;
  *(undefined4 *)((int)this + 0x1ac0) = 2;
  *(undefined2 *)((int)this + 0x1ac4) = 2;
  *(undefined4 *)((int)this + 0x1ac8) = 0;
  *(undefined4 *)((int)this + 0x1acc) = 0;
  *(undefined2 *)((int)this + 0x1ad0) = 0xb9;
  *(undefined4 *)((int)this + 0x1ad4) = 0x20000;
  *(undefined4 *)((int)this + 0x1ad8) = 2;
  *(undefined2 *)((int)this + 0x1adc) = 3;
  *(undefined4 *)((int)this + 0x1ae0) = 0;
  *(undefined4 *)((int)this + 0x1ae4) = 0;
  *(undefined2 *)((int)this + 0x1ae8) = 0xb9;
  *(undefined4 *)((int)this + 0x1aec) = 0x20000;
  *(undefined4 *)((int)this + 0x1af0) = 2;
  *(undefined2 *)((int)this + 0x1af4) = 4;
  *(undefined4 *)((int)this + 0x1af8) = 0;
  *(undefined4 *)((int)this + 0x1afc) = 0;
  *(undefined2 *)((int)this + 0x1b00) = 0xb9;
  *(undefined4 *)((int)this + 0x1b04) = 0x20000;
  *(undefined4 *)((int)this + 0x1b08) = 2;
  *(undefined2 *)((int)this + 0x1b0c) = 5;
  *(undefined4 *)((int)this + 0x1b10) = 0;
  *(undefined4 *)((int)this + 0x1b14) = 0;
  *(undefined2 *)((int)this + 0x1b18) = 0xb9;
  *(undefined4 *)((int)this + 0x1b1c) = 0x20000;
  *(undefined4 *)((int)this + 0x1b20) = 2;
  *(undefined2 *)((int)this + 0x1b24) = 6;
  *(undefined4 *)((int)this + 0x1b28) = 0;
  *(undefined4 *)((int)this + 0x1b2c) = 0;
  *(undefined2 *)((int)this + 0x1b30) = 0xb9;
  *(undefined4 *)((int)this + 0x1b34) = 0x20000;
  *(undefined4 *)((int)this + 0x1b38) = 2;
  *(undefined2 *)((int)this + 0x1b3c) = 7;
  *(undefined4 *)((int)this + 0x1b40) = 0;
  *(undefined4 *)((int)this + 0x1b44) = 0;
  *(undefined2 *)((int)this + 0x1b48) = 0xb9;
  *(undefined4 *)((int)this + 0x1b4c) = 0x20000;
  *(undefined4 *)((int)this + 0x1b50) = 2;
  *(undefined2 *)((int)this + 0x1b54) = 8;
  *(undefined4 *)((int)this + 7000) = 0;
  *(undefined4 *)((int)this + 0x1b5c) = 0;
  *(undefined2 *)((int)this + 0x1b60) = 0xb9;
  *(undefined4 *)((int)this + 0x1b64) = 0x20000;
  *(undefined4 *)((int)this + 0x1b68) = 2;
  *(undefined2 *)((int)this + 0x1b6c) = 9;
  *(undefined4 *)((int)this + 0x1b70) = 0;
  *(undefined4 *)((int)this + 0x1b74) = 0;
  *(undefined2 *)((int)this + 0x1b78) = 0xbb;
  *(undefined4 *)((int)this + 0x1b7c) = 0x20000;
  *(undefined4 *)((int)this + 0x1b80) = 2;
  *(undefined1 *)((int)this + 0x1b84) = 0xff;
  *(undefined1 *)((int)this + 0x1b85) = 1;
  *(undefined4 *)((int)this + 0x1b88) = 0;
  *(undefined4 *)((int)this + 0x1b8c) = 0;
  *(undefined2 *)((int)this + 0x1b90) = 0xc6;
  *(undefined4 *)((int)this + 0x1b94) = 0x40000;
  *(undefined4 *)((int)this + 0x1b98) = 1;
  *(undefined1 *)((int)this + 0x1b9c) = 0xff;
  *(undefined1 *)((int)this + 0x1b9d) = 0;
  *(undefined4 *)((int)this + 0x1ba0) = 0;
  *(undefined4 *)((int)this + 0x1ba4) = 0;
  *(undefined2 *)((int)this + 0x1ba8) = 199;
  *(undefined4 *)((int)this + 0x1bac) = 0x40000;
  *(undefined4 *)((int)this + 0x1bb0) = 1;
  *(undefined1 *)((int)this + 0x1bb4) = 0xff;
  *(undefined1 *)((int)this + 0x1bb5) = 0;
  *(undefined4 *)((int)this + 0x1bb8) = 0;
  *(undefined4 *)((int)this + 0x1bbc) = 0;
  *(undefined2 *)((int)this + 0x1bc0) = 200;
  *(undefined4 *)((int)this + 0x1bc4) = 0x40000;
  *(undefined4 *)((int)this + 0x1bc8) = 1;
  *(undefined1 *)((int)this + 0x1bcc) = 0xff;
  *(undefined1 *)((int)this + 0x1bcd) = 0;
  *(undefined4 *)((int)this + 0x1bd0) = 0;
  *(undefined4 *)((int)this + 0x1bd4) = 0;
  *(undefined2 *)((int)this + 0x1bd8) = 0xc9;
  *(undefined4 *)((int)this + 0x1bdc) = 0x40000;
  *(undefined4 *)((int)this + 0x1be0) = 1;
  *(undefined1 *)((int)this + 0x1be4) = 0xff;
  *(undefined1 *)((int)this + 0x1be5) = 0;
  *(undefined4 *)((int)this + 0x1be8) = 0;
  *(undefined4 *)((int)this + 0x1bec) = 0;
  *(undefined2 *)((int)this + 0x1bf0) = 0xca;
  *(undefined4 *)((int)this + 0x1bf4) = 0x40000;
  *(undefined4 *)((int)this + 0x1bf8) = 1;
  *(undefined1 *)((int)this + 0x1bfc) = 0xff;
  *(undefined1 *)((int)this + 0x1bfd) = 0;
  *(undefined4 *)((int)this + 0x1c00) = 0;
  *(undefined4 *)((int)this + 0x1c04) = 0;
  *(undefined2 *)((int)this + 0x1c08) = 0xcb;
  *(undefined4 *)((int)this + 0x1c0c) = 0x40000;
  *(undefined4 *)((int)this + 0x1c10) = 1;
  *(undefined1 *)((int)this + 0x1c14) = 0xff;
  *(undefined1 *)((int)this + 0x1c15) = 0;
  *(undefined4 *)((int)this + 0x1c18) = 0;
  *(undefined4 *)((int)this + 0x1c1c) = 0;
  *(undefined2 *)((int)this + 0x1c20) = 0xcc;
  *(undefined4 *)((int)this + 0x1c24) = 0x40000;
  *(undefined4 *)((int)this + 0x1c28) = 1;
  *(undefined1 *)((int)this + 0x1c2c) = 0xff;
  *(undefined1 *)((int)this + 0x1c2d) = 0;
  *(undefined4 *)((int)this + 0x1c30) = 0;
  *(undefined4 *)((int)this + 0x1c34) = 0;
  *(undefined2 *)((int)this + 0x1c38) = 0xcd;
  *(undefined4 *)((int)this + 0x1c3c) = 0x40000;
  *(undefined4 *)((int)this + 0x1c40) = 1;
  *(undefined1 *)((int)this + 0x1c44) = 0xff;
  *(undefined1 *)((int)this + 0x1c45) = 0;
  *(undefined4 *)((int)this + 0x1c48) = 0;
  *(undefined4 *)((int)this + 0x1c4c) = 0;
  *(undefined2 *)((int)this + 0x1c50) = 0xce;
  *(undefined4 *)((int)this + 0x1c54) = 0x40000;
  *(undefined4 *)((int)this + 0x1c58) = 1;
  *(undefined1 *)((int)this + 0x1c5c) = 0xff;
  *(undefined1 *)((int)this + 0x1c5d) = 0;
  *(undefined4 *)((int)this + 0x1c60) = 0;
  *(undefined4 *)((int)this + 0x1c64) = 0;
  *(undefined2 *)((int)this + 0x1c68) = 0xcf;
  *(undefined4 *)((int)this + 0x1c6c) = 0x40000;
  *(undefined4 *)((int)this + 0x1c70) = 1;
  *(undefined1 *)((int)this + 0x1c74) = 0xff;
  *(undefined1 *)((int)this + 0x1c75) = 0;
  *(undefined4 *)((int)this + 0x1c78) = 0;
  *(undefined4 *)((int)this + 0x1c7c) = 0;
  *(undefined2 *)((int)this + 0x1c80) = 0xd0;
  *(undefined4 *)((int)this + 0x1c84) = 0x40000;
  *(undefined4 *)((int)this + 0x1c88) = 1;
  *(undefined1 *)((int)this + 0x1c8c) = 0xff;
  *(undefined1 *)((int)this + 0x1c8d) = 0;
  *(undefined4 *)((int)this + 0x1c90) = 0;
  *(undefined4 *)((int)this + 0x1c94) = 0;
  *(undefined2 *)((int)this + 0x1c98) = 0xd1;
  *(undefined4 *)((int)this + 0x1c9c) = 0x40000;
  *(undefined4 *)((int)this + 0x1ca0) = 1;
  *(undefined1 *)((int)this + 0x1ca4) = 0xff;
  *(undefined1 *)((int)this + 0x1ca5) = 0;
  *(undefined4 *)((int)this + 0x1ca8) = 0;
  *(undefined4 *)((int)this + 0x1cac) = 0;
  *(undefined2 *)((int)this + 0x1cb0) = 0xd2;
  *(undefined4 *)((int)this + 0x1cb4) = 0x40000;
  *(undefined4 *)((int)this + 0x1cb8) = 1;
  *(undefined1 *)((int)this + 0x1cbc) = 0xff;
  *(undefined1 *)((int)this + 0x1cbd) = 0;
  *(undefined4 *)((int)this + 0x1cc0) = 0;
  *(undefined4 *)((int)this + 0x1cc4) = 0;
  *(undefined2 *)((int)this + 0x1cc8) = 0xd3;
  *(undefined4 *)((int)this + 0x1ccc) = 0x40000;
  *(undefined4 *)((int)this + 0x1cd0) = 1;
  *(undefined1 *)((int)this + 0x1cd4) = 0xff;
  *(undefined1 *)((int)this + 0x1cd5) = 0;
  *(undefined4 *)((int)this + 0x1cd8) = 0;
  *(undefined4 *)((int)this + 0x1cdc) = 0;
  *(undefined2 *)((int)this + 0x1ce0) = 0xd4;
  *(undefined4 *)((int)this + 0x1ce4) = 0x40000;
  *(undefined4 *)((int)this + 0x1ce8) = 1;
  *(undefined1 *)((int)this + 0x1cec) = 0xff;
  *(undefined1 *)((int)this + 0x1ced) = 0;
  *(undefined4 *)((int)this + 0x1cf0) = 0;
  *(undefined4 *)((int)this + 0x1cf4) = 0;
  *(undefined2 *)((int)this + 0x1cf8) = 0xd5;
  *(undefined4 *)((int)this + 0x1cfc) = 0x40000;
  *(undefined4 *)((int)this + 0x1d00) = 1;
  *(undefined1 *)((int)this + 0x1d04) = 0xff;
  *(undefined1 *)((int)this + 0x1d05) = 0;
  *(undefined4 *)((int)this + 0x1d08) = 0;
  *(undefined4 *)((int)this + 0x1d0c) = 0;
  *(undefined2 *)((int)this + 0x1d10) = 0xd6;
  *(undefined4 *)((int)this + 0x1d14) = 0x40000;
  *(undefined4 *)((int)this + 0x1d18) = 1;
  *(undefined1 *)((int)this + 0x1d1c) = 0xff;
  *(undefined1 *)((int)this + 0x1d1d) = 0;
  *(undefined4 *)((int)this + 0x1d20) = 0;
  *(undefined4 *)((int)this + 0x1d24) = 0;
  *(undefined2 *)((int)this + 0x1d28) = 0xd7;
  *(undefined4 *)((int)this + 0x1d2c) = 0x40000;
  *(undefined4 *)((int)this + 0x1d30) = 1;
  *(undefined1 *)((int)this + 0x1d34) = 0xff;
  *(undefined1 *)((int)this + 0x1d35) = 0;
  *(undefined4 *)((int)this + 0x1d38) = 0;
  *(undefined4 *)((int)this + 0x1d3c) = 0;
  *(undefined2 *)((int)this + 0x1d40) = 0xd8;
  *(undefined4 *)((int)this + 0x1d44) = 0x80000;
  *(undefined4 *)((int)this + 0x1d48) = 1;
  *(undefined1 *)((int)this + 0x1d4c) = 0xff;
  *(undefined1 *)((int)this + 0x1d4d) = 0;
  *(undefined4 *)((int)this + 0x1d50) = 0;
  *(undefined4 *)((int)this + 0x1d54) = 0;
  *(undefined2 *)((int)this + 0x1d58) = 0xd9;
  *(undefined4 *)((int)this + 0x1d5c) = 0x80000;
  *(undefined4 *)((int)this + 0x1d60) = 1;
  *(undefined1 *)((int)this + 0x1d64) = 0xff;
  *(undefined1 *)((int)this + 0x1d65) = 0;
  *(undefined4 *)((int)this + 0x1d68) = 0;
  *(undefined4 *)((int)this + 0x1d6c) = 0;
  *(undefined2 *)((int)this + 0x1d70) = 0xda;
  *(undefined4 *)((int)this + 0x1d74) = 0x80000;
  *(undefined4 *)((int)this + 0x1d78) = 1;
  *(undefined1 *)((int)this + 0x1d7c) = 0xff;
  *(undefined1 *)((int)this + 0x1d7d) = 0;
  *(undefined4 *)((int)this + 0x1d80) = 0;
  *(undefined4 *)((int)this + 0x1d84) = 0;
  *(undefined2 *)((int)this + 0x1d88) = 0x183;
  *(undefined4 *)((int)this + 0x1d8c) = 0x80000;
  *(undefined4 *)((int)this + 0x1d90) = 2;
  *(undefined1 *)((int)this + 0x1d94) = 0xff;
  *(undefined1 *)((int)this + 0x1d95) = 0;
  *(undefined4 *)((int)this + 0x1d98) = 0;
  *(undefined4 *)((int)this + 0x1d9c) = 0;
  *(undefined2 *)((int)this + 0x1da0) = 0xdc;
  *(undefined4 *)((int)this + 0x1da4) = 0x80000;
  *(undefined4 *)((int)this + 0x1da8) = 2;
  *(undefined1 *)((int)this + 0x1dac) = 0xff;
  *(undefined1 *)((int)this + 0x1dad) = 0;
  *(undefined4 *)((int)this + 0x1db0) = 0;
  *(undefined4 *)((int)this + 0x1db4) = 0;
  *(undefined2 *)((int)this + 0x1db8) = 0xdd;
  *(undefined4 *)((int)this + 0x1dbc) = 0x80000;
  *(undefined4 *)((int)this + 0x1dc0) = 1;
  *(undefined1 *)((int)this + 0x1dc4) = 0xff;
  *(undefined1 *)((int)this + 0x1dc5) = 0;
  *(undefined4 *)((int)this + 0x1dc8) = 0;
  *(undefined4 *)((int)this + 0x1dcc) = 0;
  *(undefined2 *)((int)this + 0x1dd0) = 0xde;
  *(undefined4 *)((int)this + 0x1dd4) = 0x80000;
  *(undefined4 *)((int)this + 0x1dd8) = 1;
  *(undefined1 *)((int)this + 0x1ddc) = 0xff;
  *(undefined1 *)((int)this + 0x1ddd) = 0;
  *(undefined4 *)((int)this + 0x1de0) = 0;
  *(undefined4 *)((int)this + 0x1de4) = 0;
  *(undefined2 *)((int)this + 0x1de8) = 0xdf;
  *(undefined4 *)((int)this + 0x1dec) = 0x80000;
  *(undefined4 *)((int)this + 0x1df0) = 1;
  *(undefined1 *)((int)this + 0x1df4) = 0xff;
  *(undefined1 *)((int)this + 0x1df5) = 0;
  *(undefined4 *)((int)this + 0x1df8) = 0;
  *(undefined4 *)((int)this + 0x1dfc) = 0;
  *(undefined2 *)((int)this + 0x1e00) = 0xe0;
  *(undefined4 *)((int)this + 0x1e04) = 0x80000;
  *(undefined4 *)((int)this + 0x1e08) = 1;
  *(undefined1 *)((int)this + 0x1e0c) = 0xff;
  *(undefined1 *)((int)this + 0x1e0d) = 0;
  *(undefined4 *)((int)this + 0x1e10) = 0;
  *(undefined4 *)((int)this + 0x1e14) = 0;
  *(undefined2 *)((int)this + 0x1e18) = 0xe1;
  *(undefined4 *)((int)this + 0x1e1c) = 0x80000;
  *(undefined4 *)((int)this + 0x1e20) = 1;
  *(undefined1 *)((int)this + 0x1e24) = 0xff;
  *(undefined1 *)((int)this + 0x1e25) = 0;
  *(undefined4 *)((int)this + 0x1e28) = 0;
  *(undefined4 *)((int)this + 0x1e2c) = 0;
  *(undefined2 *)((int)this + 0x1e30) = 0xe2;
  *(undefined4 *)((int)this + 0x1e34) = 0x80000;
  *(undefined4 *)((int)this + 0x1e38) = 1;
  *(undefined1 *)((int)this + 0x1e3c) = 0xff;
  *(undefined1 *)((int)this + 0x1e3d) = 0;
  *(undefined4 *)((int)this + 0x1e40) = 0;
  *(undefined4 *)((int)this + 0x1e44) = 0;
  *(undefined2 *)((int)this + 0x1e48) = 0xe3;
  *(undefined4 *)((int)this + 0x1e4c) = 0x80000;
  *(undefined4 *)((int)this + 0x1e50) = 1;
  *(undefined1 *)((int)this + 0x1e54) = 0xff;
  *(undefined1 *)((int)this + 0x1e55) = 0;
  *(undefined4 *)((int)this + 0x1e58) = 0;
  *(undefined4 *)((int)this + 0x1e5c) = 0;
  *(undefined2 *)((int)this + 0x1e60) = 0xe4;
  *(undefined4 *)((int)this + 0x1e64) = 0x80000;
  *(undefined4 *)((int)this + 0x1e68) = 1;
  *(undefined1 *)((int)this + 0x1e6c) = 0xff;
  *(undefined1 *)((int)this + 0x1e6d) = 0;
  *(undefined4 *)((int)this + 0x1e70) = 0;
  *(undefined4 *)((int)this + 0x1e74) = 0;
  *(undefined2 *)((int)this + 0x1e78) = 0xe5;
  *(undefined4 *)((int)this + 0x1e7c) = 0x80000;
  *(undefined4 *)((int)this + 0x1e80) = 1;
  *(undefined1 *)((int)this + 0x1e84) = 0xff;
  *(undefined1 *)((int)this + 0x1e85) = 0;
  *(undefined4 *)((int)this + 0x1e88) = 0;
  *(undefined4 *)((int)this + 0x1e8c) = 0;
  *(undefined2 *)((int)this + 0x1e90) = 0xe6;
  *(undefined4 *)((int)this + 0x1e94) = 0x80000;
  *(undefined4 *)((int)this + 0x1e98) = 1;
  *(undefined1 *)((int)this + 0x1e9c) = 0xff;
  *(undefined1 *)((int)this + 0x1e9d) = 0;
  *(undefined4 *)((int)this + 0x1ea0) = 0;
  *(undefined4 *)((int)this + 0x1ea4) = 0;
  *(undefined2 *)((int)this + 0x1ea8) = 0xe7;
  *(undefined4 *)((int)this + 0x1eac) = 0x80000;
  *(undefined4 *)((int)this + 0x1eb0) = 1;
  *(undefined1 *)((int)this + 0x1eb4) = 0xff;
  *(undefined1 *)((int)this + 0x1eb5) = 0;
  *(undefined4 *)((int)this + 0x1eb8) = 0;
  *(undefined4 *)((int)this + 0x1ebc) = 0;
  *(undefined2 *)((int)this + 0x1ec0) = 0xe8;
  *(undefined4 *)((int)this + 0x1ec4) = 0x80000;
  *(undefined4 *)((int)this + 0x1ec8) = 1;
  *(undefined1 *)((int)this + 0x1ecc) = 0xff;
  *(undefined1 *)((int)this + 0x1ecd) = 0;
  *(undefined4 *)((int)this + 0x1ed0) = 0;
  *(undefined4 *)((int)this + 0x1ed4) = 0;
  *(undefined2 *)((int)this + 0x1ed8) = 0xe9;
  *(undefined4 *)((int)this + 0x1edc) = 0x80000;
  *(undefined4 *)((int)this + 0x1ee0) = 1;
  *(undefined1 *)((int)this + 0x1ee4) = 0xff;
  *(undefined1 *)((int)this + 0x1ee5) = 0;
  *(undefined4 *)((int)this + 0x1ee8) = 0;
  *(undefined4 *)((int)this + 0x1eec) = 0;
  *(undefined2 *)((int)this + 0x1ef0) = 0xea;
  *(undefined4 *)((int)this + 0x1ef4) = 0x80000;
  *(undefined4 *)((int)this + 0x1ef8) = 1;
  *(undefined1 *)((int)this + 0x1efc) = 0xff;
  *(undefined1 *)((int)this + 0x1efd) = 0;
  *(undefined4 *)((int)this + 0x1f00) = 0;
  *(undefined4 *)((int)this + 0x1f04) = 0;
  *(undefined2 *)((int)this + 0x1f08) = 0xeb;
  *(undefined4 *)((int)this + 0x1f0c) = 0x80000;
  *(undefined4 *)((int)this + 0x1f10) = 1;
  *(undefined1 *)((int)this + 0x1f14) = 0xff;
  *(undefined1 *)((int)this + 0x1f15) = 0;
  *(undefined4 *)((int)this + 0x1f18) = 0;
  *(undefined4 *)((int)this + 0x1f1c) = 0;
  *(undefined2 *)((int)this + 0x1f20) = 0xec;
  *(undefined4 *)((int)this + 0x1f24) = 0x80000;
  *(undefined4 *)((int)this + 0x1f28) = 1;
  *(undefined1 *)((int)this + 0x1f2c) = 0xff;
  *(undefined1 *)((int)this + 0x1f2d) = 0;
  *(undefined4 *)((int)this + 0x1f30) = 0;
  *(undefined4 *)((int)this + 0x1f34) = 0;
  *(undefined2 *)((int)this + 0x1f38) = 0xed;
  *(undefined4 *)((int)this + 0x1f3c) = 0x80000;
  *(undefined4 *)((int)this + 8000) = 1;
  *(undefined1 *)((int)this + 0x1f44) = 0xff;
  *(undefined1 *)((int)this + 0x1f45) = 0;
  *(undefined4 *)((int)this + 0x1f48) = 0;
  *(undefined4 *)((int)this + 0x1f4c) = 0;
  *(undefined2 *)((int)this + 0x1f50) = 0xee;
  *(undefined4 *)((int)this + 0x1f54) = 0x80000;
  *(undefined4 *)((int)this + 0x1f58) = 1;
  *(undefined1 *)((int)this + 0x1f5c) = 0xff;
  *(undefined1 *)((int)this + 0x1f5d) = 0;
  *(undefined4 *)((int)this + 0x1f60) = 0;
  *(undefined4 *)((int)this + 0x1f64) = 0;
  *(undefined2 *)((int)this + 0x1f68) = 0x14d;
  *(undefined4 *)((int)this + 0x1f6c) = 0x100000;
  *(undefined4 *)((int)this + 0x1f70) = 1;
  *(undefined1 *)((int)this + 0x1f74) = 0xff;
  *(undefined1 *)((int)this + 0x1f75) = 0;
  *(undefined4 *)((int)this + 0x1f78) = 0;
  *(undefined4 *)((int)this + 0x1f7c) = 0;
  *(undefined2 *)((int)this + 0x1f80) = 0x144;
  *(undefined4 *)((int)this + 0x1f84) = 0x100000;
  *(undefined4 *)((int)this + 0x1f88) = 1;
  *(undefined1 *)((int)this + 0x1f8c) = 0xff;
  *(undefined1 *)((int)this + 0x1f8d) = 0;
  *(undefined4 *)((int)this + 0x1f90) = 0;
  *(undefined4 *)((int)this + 0x1f94) = 0;
  *(undefined2 *)((int)this + 0x1f98) = 0x14e;
  *(undefined4 *)((int)this + 0x1f9c) = 0x100000;
  *(undefined4 *)((int)this + 0x1fa0) = 1;
  *(undefined1 *)((int)this + 0x1fa4) = 0xff;
  *(undefined1 *)((int)this + 0x1fa5) = 0;
  *(undefined4 *)((int)this + 0x1fa8) = 0;
  *(undefined4 *)((int)this + 0x1fac) = 0;
  *(undefined2 *)((int)this + 0x1fb0) = 0x14f;
  *(undefined4 *)((int)this + 0x1fb4) = 0x100000;
  *(undefined4 *)((int)this + 0x1fb8) = 1;
  *(undefined1 *)((int)this + 0x1fbc) = 0xff;
  *(undefined1 *)((int)this + 0x1fbd) = 0;
  *(undefined4 *)((int)this + 0x1fc0) = 0;
  *(undefined4 *)((int)this + 0x1fc4) = 0;
  *(undefined2 *)((int)this + 0x1fc8) = 0x150;
  *(undefined4 *)((int)this + 0x1fcc) = 0x100000;
  *(undefined4 *)((int)this + 0x1fd0) = 1;
  *(undefined1 *)((int)this + 0x1fd4) = 0xff;
  *(undefined1 *)((int)this + 0x1fd5) = 0;
  *(undefined4 *)((int)this + 0x1fd8) = 0;
  *(undefined4 *)((int)this + 0x1fdc) = 0;
  *(undefined2 *)((int)this + 0x2028) = 0x55;
  *(undefined4 *)((int)this + 0x202c) = 0x100000;
  *(undefined4 *)((int)this + 0x2030) = 1;
  *(undefined1 *)((int)this + 0x2034) = 0xff;
  *(undefined1 *)((int)this + 0x2035) = 0;
  *(undefined4 *)((int)this + 0x2038) = 0;
  *(undefined4 *)((int)this + 0x203c) = 0;
  *(undefined2 *)((int)this + 0x1fe0) = 0x151;
  *(undefined4 *)((int)this + 0x1fe4) = 0x100000;
  *(undefined4 *)((int)this + 0x1fe8) = 1;
  *(undefined1 *)((int)this + 0x1fec) = 0xff;
  *(undefined1 *)((int)this + 0x1fed) = 0;
  *(undefined4 *)((int)this + 0x1ff0) = 0;
  *(undefined4 *)((int)this + 0x1ff4) = 0;
  *(undefined2 *)((int)this + 0x1ff8) = 0x142;
  *(undefined4 *)((int)this + 0x1ffc) = 0x100000;
  *(undefined4 *)((int)this + 0x2000) = 1;
  *(undefined1 *)((int)this + 0x2004) = 0xff;
  *(undefined1 *)((int)this + 0x2005) = 0;
  *(undefined4 *)((int)this + 0x2008) = 0;
  *(undefined4 *)((int)this + 0x200c) = 0;
  *(undefined2 *)((int)this + 0x2010) = 0x14b;
  *(undefined4 *)((int)this + 0x2014) = 0x100000;
  *(undefined4 *)((int)this + 0x2018) = 1;
  *(undefined1 *)((int)this + 0x201c) = 0xff;
  *(undefined1 *)((int)this + 0x201d) = 0;
  *(undefined4 *)((int)this + 0x2020) = 0;
  *(undefined4 *)((int)this + 0x2024) = 0;
  *(undefined2 *)((int)this + 0x810) = 0x4b;
  *(undefined4 *)((int)this + 0x814) = 0x200000;
  *(undefined4 *)((int)this + 0x818) = 0;
  *(undefined1 *)((int)this + 0x81c) = 0xff;
  *(undefined1 *)((int)this + 0x81d) = 0;
  *(undefined4 *)((int)this + 0x820) = 0;
  *(undefined4 *)((int)this + 0x824) = 0;
  *(undefined2 *)((int)this + 0x2118) = 0xffff;
  *(undefined4 *)((int)this + 0x211c) = 0x200000;
  *(undefined4 *)((int)this + 0x2120) = 2;
  *(undefined1 *)((int)this + 0x2124) = 0xff;
  *(undefined1 *)((int)this + 0x2125) = 0;
  *(gen_code32 *)((int)this + 0x2128) = ((code *)REFP(0x44e040));
  *(undefined4 *)((int)this + 0x212c) = 0;
  return 0;
}

/* ref: FUN_0045004b */
uint F_0045004b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x45004bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined4 in_edx = (undefined4)gen_a2;
  undefined4 in_ebx = (undefined4)gen_a3;
  undefined4 in_esi = (undefined4)gen_a4;
  undefined4 in_edi = (undefined4)gen_a5;
  undefined1 uVar1;
  undefined1 uVar2;
  
  *(undefined4 *)(in_ecx + 0xaa8) = in_edi;
  *(undefined4 *)(in_ecx + 0xaac) = in_edi;
  *(undefined2 *)(in_ecx + 0xab0) = 0x8a;
  *(undefined4 *)(in_ecx + 0xab4) = 0x80;
  *(undefined4 *)(in_ecx + 0xab8) = in_ebx;
  uVar1 = (undefined1)(undefined2)in_eax;
  *(undefined1 *)(in_ecx + 0xabc) = uVar1;
  uVar2 = (undefined1)in_edx;
  *(undefined1 *)(in_ecx + 0xabd) = uVar2;
  *(undefined4 *)(in_ecx + 0xac0) = 0;
  *(undefined4 *)(in_ecx + 0xac4) = 0;
  *(undefined2 *)(in_ecx + 0xac8) = 0x8b;
  *(undefined4 *)(in_ecx + 0xacc) = 0x80;
  *(undefined4 *)(in_ecx + 0xad0) = in_ebx;
  *(undefined1 *)(in_ecx + 0xad4) = uVar1;
  *(undefined1 *)(in_ecx + 0xad5) = uVar2;
  *(undefined4 *)(in_ecx + 0xad8) = 0;
  *(undefined4 *)(in_ecx + 0xadc) = 0;
  *(undefined2 *)(in_ecx + 0xae0) = 0x8c;
  *(undefined4 *)(in_ecx + 0xae4) = 0x80;
  *(undefined4 *)(in_ecx + 0xae8) = in_ebx;
  *(undefined1 *)(in_ecx + 0xaec) = uVar1;
  *(undefined1 *)(in_ecx + 0xaed) = uVar2;
  *(undefined4 *)(in_ecx + 0xaf0) = 0;
  *(undefined4 *)(in_ecx + 0xaf4) = 0;
  *(undefined2 *)(in_ecx + 0xaf8) = 0x8d;
  *(undefined4 *)(in_ecx + 0xafc) = 0x80;
  *(undefined4 *)(in_ecx + 0xb00) = in_ebx;
  *(undefined1 *)(in_ecx + 0xb04) = uVar1;
  *(undefined1 *)(in_ecx + 0xb05) = uVar2;
  *(undefined4 *)(in_ecx + 0xb08) = 0;
  *(undefined4 *)(in_ecx + 0xb0c) = 0;
  *(undefined2 *)(in_ecx + 0xb10) = 0x8e;
  *(undefined4 *)(in_ecx + 0xb14) = 0x80;
  *(undefined4 *)(in_ecx + 0xb18) = in_ebx;
  *(undefined1 *)(in_ecx + 0xb1c) = uVar1;
  *(undefined1 *)(in_ecx + 0xb1d) = uVar2;
  *(undefined4 *)(in_ecx + 0xb20) = 0;
  *(undefined4 *)(in_ecx + 0xb24) = 0;
  *(undefined2 *)(in_ecx + 0xb28) = 0x76;
  *(undefined4 *)(in_ecx + 0xb2c) = 0x80;
  *(undefined4 *)(in_ecx + 0xb30) = in_ebx;
  *(undefined1 *)(in_ecx + 0xb34) = uVar1;
  *(undefined1 *)(in_ecx + 0xb35) = uVar2;
  *(undefined4 *)(in_ecx + 0xb38) = 0;
  *(undefined4 *)(in_ecx + 0xb3c) = 0;
  *(undefined2 *)(in_ecx + 0xb40) = 0x78;
  *(undefined4 *)(in_ecx + 0xb44) = 0x100;
  *(undefined4 *)(in_ecx + 0xb48) = in_ebx;
  *(undefined1 *)(in_ecx + 0xb4c) = uVar1;
  *(undefined1 *)(in_ecx + 0xb4d) = uVar2;
  *(undefined4 *)(in_ecx + 0xb50) = 0;
  *(undefined4 *)(in_ecx + 0xb54) = 0;
  *(undefined2 *)(in_ecx + 0xb70) = 0x82;
  *(undefined4 *)(in_ecx + 0xb74) = 0x100;
  *(undefined4 *)(in_ecx + 0xb78) = in_esi;
  *(undefined1 *)(in_ecx + 0xb7c) = uVar1;
  *(undefined1 *)(in_ecx + 0xb7d) = uVar2;
  *(undefined4 *)(in_ecx + 0xb80) = 0;
  *(undefined4 *)(in_ecx + 0xb84) = 0;
  *(undefined2 *)(in_ecx + 0xb88) = 0x83;
  *(undefined4 *)(in_ecx + 0xb8c) = 0x100;
  *(undefined4 *)(in_ecx + 0xb90) = in_esi;
  *(undefined1 *)(in_ecx + 0xb94) = uVar1;
  *(undefined1 *)(in_ecx + 0xb95) = uVar2;
  *(undefined4 *)(in_ecx + 0xb98) = 0;
  *(undefined4 *)(in_ecx + 0xb9c) = 0;
  *(undefined2 *)(in_ecx + 0xba0) = 0x84;
  *(undefined4 *)(in_ecx + 0xba4) = 0x100;
  *(undefined4 *)(in_ecx + 0xba8) = in_esi;
  *(undefined1 *)(in_ecx + 0xbac) = uVar1;
  *(undefined1 *)(in_ecx + 0xbad) = uVar2;
  *(undefined4 *)(in_ecx + 0xbb0) = 0;
  *(undefined4 *)(in_ecx + 0xbb4) = 0;
  *(undefined2 *)(in_ecx + 3000) = 0x85;
  *(undefined4 *)(in_ecx + 0xbbc) = 0x100;
  *(undefined4 *)(in_ecx + 0xbc0) = in_esi;
  *(undefined1 *)(in_ecx + 0xbc4) = uVar1;
  *(undefined1 *)(in_ecx + 0xbc5) = uVar2;
  *(undefined4 *)(in_ecx + 0xbc8) = 0;
  *(undefined4 *)(in_ecx + 0xbcc) = 0;
  *(undefined2 *)(in_ecx + 0xbd0) = 0x86;
  *(undefined4 *)(in_ecx + 0xbd4) = 0x100;
  *(undefined4 *)(in_ecx + 0xbd8) = in_esi;
  *(undefined1 *)(in_ecx + 0xbdc) = uVar1;
  *(undefined1 *)(in_ecx + 0xbdd) = uVar2;
  *(undefined4 *)(in_ecx + 0xbe0) = 0;
  *(undefined4 *)(in_ecx + 0xbe4) = 0;
  *(undefined2 *)(in_ecx + 0xbe8) = 0x87;
  *(undefined4 *)(in_ecx + 0xbec) = 0x100;
  *(undefined4 *)(in_ecx + 0xbf0) = in_esi;
  *(undefined1 *)(in_ecx + 0xbf4) = uVar1;
  *(undefined1 *)(in_ecx + 0xbf5) = uVar2;
  *(undefined4 *)(in_ecx + 0xbf8) = 0;
  *(undefined4 *)(in_ecx + 0xbfc) = 0;
  *(undefined2 *)(in_ecx + 0xc18) = 0x7b;
  *(undefined4 *)(in_ecx + 0xc1c) = 0x100;
  *(undefined4 *)(in_ecx + 0xc20) = in_esi;
  *(undefined1 *)(in_ecx + 0xc24) = uVar1;
  *(undefined1 *)(in_ecx + 0xc25) = uVar2;
  *(undefined4 *)(in_ecx + 0xc28) = 0;
  *(undefined4 *)(in_ecx + 0xc2c) = 0;
  *(undefined2 *)(in_ecx + 0xc30) = 0x7c;
  *(undefined4 *)(in_ecx + 0xc34) = 0x100;
  *(undefined4 *)(in_ecx + 0xc38) = in_esi;
  *(undefined1 *)(in_ecx + 0xc3c) = uVar1;
  *(undefined1 *)(in_ecx + 0xc3d) = uVar2;
  *(undefined4 *)(in_ecx + 0xc40) = 0;
  *(undefined4 *)(in_ecx + 0xc44) = 0;
  *(undefined2 *)(in_ecx + 0xc48) = 0x7d;
  *(undefined4 *)(in_ecx + 0xc4c) = 0x100;
  *(undefined4 *)(in_ecx + 0xc50) = in_esi;
  *(undefined1 *)(in_ecx + 0xc54) = uVar1;
  *(undefined1 *)(in_ecx + 0xc55) = uVar2;
  *(undefined4 *)(in_ecx + 0xc58) = 0;
  *(undefined4 *)(in_ecx + 0xc5c) = 0;
  *(undefined2 *)(in_ecx + 0xc60) = 0x7e;
  *(undefined4 *)(in_ecx + 0xc64) = 0x100;
  *(undefined4 *)(in_ecx + 0xc68) = in_esi;
  *(undefined1 *)(in_ecx + 0xc6c) = uVar1;
  *(undefined1 *)(in_ecx + 0xc6d) = uVar2;
  *(undefined4 *)(in_ecx + 0xc70) = 0;
  *(undefined4 *)(in_ecx + 0xc74) = 0;
  *(undefined2 *)(in_ecx + 0xc78) = 0x7f;
  *(undefined4 *)(in_ecx + 0xc7c) = 0x100;
  *(undefined4 *)(in_ecx + 0xc80) = in_esi;
  *(undefined1 *)(in_ecx + 0xc84) = uVar1;
  *(undefined1 *)(in_ecx + 0xc85) = uVar2;
  *(undefined4 *)(in_ecx + 0xc88) = 0;
  *(undefined4 *)(in_ecx + 0xc8c) = 0;
  *(undefined2 *)(in_ecx + 0xc90) = 0x80;
  *(undefined4 *)(in_ecx + 0xc94) = 0x100;
  *(undefined4 *)(in_ecx + 0xc98) = in_esi;
  *(undefined1 *)(in_ecx + 0xc9c) = uVar1;
  *(undefined1 *)(in_ecx + 0xc9d) = uVar2;
  *(undefined4 *)(in_ecx + 0xca0) = 0;
  *(undefined4 *)(in_ecx + 0xca4) = 0;
  *(undefined2 *)(in_ecx + 0xca8) = 0x79;
  *(undefined4 *)(in_ecx + 0xcac) = 0x100;
  *(undefined4 *)(in_ecx + 0xcb0) = in_ebx;
  *(undefined1 *)(in_ecx + 0xcb4) = uVar1;
  *(undefined1 *)(in_ecx + 0xcb5) = uVar2;
  *(undefined4 *)(in_ecx + 0xcb8) = 0;
  *(undefined4 *)(in_ecx + 0xcbc) = 0;
  *(undefined2 *)(in_ecx + 0xcc0) = 0x96;
  *(undefined4 *)(in_ecx + 0xcc4) = 0x100;
  *(undefined4 *)(in_ecx + 0xcc8) = in_ebx;
  *(undefined1 *)(in_ecx + 0xccc) = uVar1;
  *(undefined1 *)(in_ecx + 0xccd) = uVar2;
  *(undefined4 *)(in_ecx + 0xcd0) = 0;
  *(undefined4 *)(in_ecx + 0xcd4) = 0;
  *(undefined2 *)(in_ecx + 0xcf0) = 0x97;
  *(undefined4 *)(in_ecx + 0xcf4) = 0x100;
  *(undefined4 *)(in_ecx + 0xcf8) = in_esi;
  *(undefined1 *)(in_ecx + 0xcfc) = uVar1;
  *(undefined1 *)(in_ecx + 0xcfd) = uVar2;
  *(undefined4 *)(in_ecx + 0xd00) = 0;
  *(undefined4 *)(in_ecx + 0xd04) = 0;
  *(undefined2 *)(in_ecx + 0xd08) = 0x98;
  *(undefined4 *)(in_ecx + 0xd0c) = 0x100;
  *(undefined4 *)(in_ecx + 0xd10) = in_esi;
  *(undefined1 *)(in_ecx + 0xd14) = uVar1;
  *(undefined1 *)(in_ecx + 0xd15) = uVar2;
  *(undefined4 *)(in_ecx + 0xd18) = 0;
  *(undefined4 *)(in_ecx + 0xd1c) = 0;
  *(undefined2 *)(in_ecx + 0xd20) = 0x99;
  *(undefined4 *)(in_ecx + 0xd24) = 0x100;
  *(undefined4 *)(in_ecx + 0xd28) = in_esi;
  *(undefined1 *)(in_ecx + 0xd2c) = uVar1;
  *(undefined1 *)(in_ecx + 0xd2d) = uVar2;
  *(undefined4 *)(in_ecx + 0xd30) = 0;
  *(undefined4 *)(in_ecx + 0xd34) = 0;
  *(undefined2 *)(in_ecx + 0xd38) = 0x9a;
  *(undefined4 *)(in_ecx + 0xd3c) = 0x100;
  *(undefined4 *)(in_ecx + 0xd40) = in_esi;
  *(undefined1 *)(in_ecx + 0xd44) = uVar1;
  *(undefined1 *)(in_ecx + 0xd45) = uVar2;
  *(undefined4 *)(in_ecx + 0xd48) = 0;
  *(undefined4 *)(in_ecx + 0xd4c) = 0;
  *(undefined2 *)(in_ecx + 0xd50) = 0x9b;
  *(undefined4 *)(in_ecx + 0xd54) = 0x100;
  *(undefined4 *)(in_ecx + 0xd58) = in_esi;
  *(undefined1 *)(in_ecx + 0xd5c) = uVar1;
  *(undefined1 *)(in_ecx + 0xd5d) = uVar2;
  *(undefined4 *)(in_ecx + 0xd60) = 0;
  *(undefined4 *)(in_ecx + 0xd64) = 0;
  *(undefined2 *)(in_ecx + 0xd68) = 0x9c;
  *(undefined4 *)(in_ecx + 0xd6c) = 0x100;
  *(undefined4 *)(in_ecx + 0xd70) = in_esi;
  *(undefined1 *)(in_ecx + 0xd74) = uVar1;
  *(undefined1 *)(in_ecx + 0xd75) = uVar2;
  *(undefined4 *)(in_ecx + 0xd78) = 0;
  *(undefined4 *)(in_ecx + 0xd7c) = 0;
  *(undefined2 *)(in_ecx + 0xd80) = 0x9d;
  *(undefined4 *)(in_ecx + 0xd84) = 0x100;
  *(undefined4 *)(in_ecx + 0xd88) = in_ebx;
  *(undefined1 *)(in_ecx + 0xd8c) = uVar1;
  *(undefined1 *)(in_ecx + 0xd8d) = uVar2;
  *(undefined4 *)(in_ecx + 0xd90) = 0;
  *(undefined4 *)(in_ecx + 0xd94) = 0;
  *(undefined2 *)(in_ecx + 0xdb0) = 0x9e;
  *(undefined4 *)(in_ecx + 0xdb4) = 0x100;
  *(undefined4 *)(in_ecx + 0xdb8) = in_esi;
  *(undefined1 *)(in_ecx + 0xdbc) = uVar1;
  *(undefined1 *)(in_ecx + 0xdbd) = uVar2;
  *(undefined4 *)(in_ecx + 0xdc0) = 0;
  *(undefined4 *)(in_ecx + 0xdc4) = 0;
  *(undefined2 *)(in_ecx + 0xdc8) = 0x9f;
  *(undefined4 *)(in_ecx + 0xdcc) = 0x100;
  *(undefined4 *)(in_ecx + 0xdd0) = in_esi;
  *(undefined1 *)(in_ecx + 0xdd4) = uVar1;
  *(undefined1 *)(in_ecx + 0xdd5) = uVar2;
  *(undefined4 *)(in_ecx + 0xdd8) = 0;
  *(undefined4 *)(in_ecx + 0xddc) = 0;
  *(undefined2 *)(in_ecx + 0xde0) = 0xa0;
  *(undefined4 *)(in_ecx + 0xde4) = 0x100;
  *(undefined4 *)(in_ecx + 0xde8) = in_esi;
  *(undefined1 *)(in_ecx + 0xdec) = uVar1;
  *(undefined1 *)(in_ecx + 0xded) = uVar2;
  *(undefined4 *)(in_ecx + 0xdf0) = 0;
  *(undefined4 *)(in_ecx + 0xdf4) = 0;
  *(undefined2 *)(in_ecx + 0xdf8) = 0xa1;
  *(undefined4 *)(in_ecx + 0xdfc) = 0x100;
  *(undefined4 *)(in_ecx + 0xe00) = in_esi;
  *(undefined1 *)(in_ecx + 0xe04) = uVar1;
  *(undefined1 *)(in_ecx + 0xe05) = uVar2;
  *(undefined4 *)(in_ecx + 0xe08) = 0;
  *(undefined4 *)(in_ecx + 0xe0c) = 0;
  *(undefined2 *)(in_ecx + 0xe10) = 0xa2;
  *(undefined4 *)(in_ecx + 0xe14) = 0x100;
  *(undefined4 *)(in_ecx + 0xe18) = in_esi;
  *(undefined1 *)(in_ecx + 0xe1c) = uVar1;
  *(undefined1 *)(in_ecx + 0xe1d) = uVar2;
  *(undefined4 *)(in_ecx + 0xe20) = 0;
  *(undefined4 *)(in_ecx + 0xe24) = 0;
  *(undefined2 *)(in_ecx + 0xe28) = 0xa3;
  *(undefined4 *)(in_ecx + 0xe2c) = 0x100;
  *(undefined4 *)(in_ecx + 0xe30) = in_esi;
  *(undefined1 *)(in_ecx + 0xe34) = uVar1;
  *(undefined1 *)(in_ecx + 0xe35) = uVar2;
  *(undefined4 *)(in_ecx + 0xe38) = 0;
  *(undefined4 *)(in_ecx + 0xe3c) = 0;
  *(undefined2 *)(in_ecx + 0xe40) = 0x8f;
  *(undefined4 *)(in_ecx + 0xe44) = 0x100;
  *(undefined4 *)(in_ecx + 0xe48) = in_ebx;
  *(undefined1 *)(in_ecx + 0xe4c) = uVar1;
  *(undefined1 *)(in_ecx + 0xe4d) = uVar2;
  *(undefined4 *)(in_ecx + 0xe50) = 0;
  *(undefined4 *)(in_ecx + 0xe54) = 0;
  *(undefined2 *)(in_ecx + 0xe70) = 0x90;
  *(undefined4 *)(in_ecx + 0xe74) = 0x100;
  *(undefined4 *)(in_ecx + 0xe78) = in_esi;
  *(undefined1 *)(in_ecx + 0xe7c) = uVar1;
  *(undefined1 *)(in_ecx + 0xe7d) = uVar2;
  *(undefined4 *)(in_ecx + 0xe80) = 0;
  *(undefined4 *)(in_ecx + 0xe84) = 0;
  *(undefined2 *)(in_ecx + 0xe88) = 0x91;
  *(undefined4 *)(in_ecx + 0xe8c) = 0x100;
  *(undefined4 *)(in_ecx + 0xe90) = in_esi;
  *(undefined1 *)(in_ecx + 0xe94) = uVar1;
  *(undefined1 *)(in_ecx + 0xe95) = uVar2;
  *(undefined4 *)(in_ecx + 0xe98) = 0;
  *(undefined4 *)(in_ecx + 0xe9c) = 0;
  *(undefined2 *)(in_ecx + 0xea0) = 0x92;
  *(undefined4 *)(in_ecx + 0xea4) = 0x100;
  *(undefined4 *)(in_ecx + 0xea8) = in_esi;
  *(undefined1 *)(in_ecx + 0xeac) = uVar1;
  *(undefined1 *)(in_ecx + 0xead) = uVar2;
  *(undefined4 *)(in_ecx + 0xeb0) = 0;
  *(undefined4 *)(in_ecx + 0xeb4) = 0;
  *(undefined2 *)(in_ecx + 0xeb8) = 0x93;
  *(undefined4 *)(in_ecx + 0xebc) = 0x100;
  *(undefined4 *)(in_ecx + 0xec0) = in_esi;
  *(undefined1 *)(in_ecx + 0xec4) = uVar1;
  *(undefined1 *)(in_ecx + 0xec5) = uVar2;
  *(undefined4 *)(in_ecx + 0xec8) = 0;
  *(undefined4 *)(in_ecx + 0xecc) = 0;
  *(undefined2 *)(in_ecx + 0xed0) = 0x94;
  *(undefined4 *)(in_ecx + 0xed4) = 0x100;
  *(undefined4 *)(in_ecx + 0xed8) = in_esi;
  *(undefined1 *)(in_ecx + 0xedc) = uVar1;
  *(undefined1 *)(in_ecx + 0xedd) = uVar2;
  *(undefined4 *)(in_ecx + 0xee0) = 0;
  *(undefined4 *)(in_ecx + 0xee4) = 0;
  *(undefined2 *)(in_ecx + 0xee8) = 0x95;
  *(undefined4 *)(in_ecx + 0xeec) = 0x100;
  *(undefined4 *)(in_ecx + 0xef0) = in_esi;
  *(undefined1 *)(in_ecx + 0xef4) = uVar1;
  *(undefined1 *)(in_ecx + 0xef5) = uVar2;
  *(undefined4 *)(in_ecx + 0xef8) = 0;
  *(undefined4 *)(in_ecx + 0xefc) = 0;
  *(undefined2 *)(in_ecx + 0xf00) = 0xa4;
  *(undefined4 *)(in_ecx + 0xf04) = 0x100;
  *(undefined4 *)(in_ecx + 0xf08) = in_ebx;
  *(undefined1 *)(in_ecx + 0xf0c) = uVar1;
  *(undefined1 *)(in_ecx + 0xf0d) = uVar2;
  *(undefined4 *)(in_ecx + 0xf10) = 0;
  *(undefined4 *)(in_ecx + 0xf14) = 0;
  *(undefined2 *)(in_ecx + 0xf30) = 0xa5;
  *(undefined4 *)(in_ecx + 0xf34) = 0x100;
  *(undefined4 *)(in_ecx + 0xf38) = in_esi;
  *(undefined1 *)(in_ecx + 0xf3c) = uVar1;
  *(undefined1 *)(in_ecx + 0xf3d) = uVar2;
  *(undefined4 *)(in_ecx + 0xf40) = 0;
  *(undefined4 *)(in_ecx + 0xf44) = 0;
  *(undefined2 *)(in_ecx + 0xf48) = 0xa6;
  *(undefined4 *)(in_ecx + 0xf4c) = 0x100;
  *(undefined4 *)(in_ecx + 0xf50) = in_esi;
  *(undefined1 *)(in_ecx + 0xf54) = uVar1;
  *(undefined1 *)(in_ecx + 0xf55) = uVar2;
  *(undefined4 *)(in_ecx + 0xf58) = 0;
  *(undefined4 *)(in_ecx + 0xf5c) = 0;
  *(undefined2 *)(in_ecx + 0xf60) = 0xa7;
  *(undefined4 *)(in_ecx + 0xf64) = 0x100;
  *(undefined4 *)(in_ecx + 0xf68) = in_esi;
  *(undefined1 *)(in_ecx + 0xf6c) = uVar1;
  *(undefined1 *)(in_ecx + 0xf6d) = uVar2;
  *(undefined4 *)(in_ecx + 0xf70) = 0;
  *(undefined4 *)(in_ecx + 0xf74) = 0;
  *(undefined2 *)(in_ecx + 0xf78) = 0xa8;
  *(undefined4 *)(in_ecx + 0xf7c) = 0x100;
  *(undefined4 *)(in_ecx + 0xf80) = in_esi;
  *(undefined1 *)(in_ecx + 0xf84) = uVar1;
  *(undefined1 *)(in_ecx + 0xf85) = uVar2;
  *(undefined4 *)(in_ecx + 0xf88) = 0;
  *(undefined4 *)(in_ecx + 0xf8c) = 0;
  *(undefined2 *)(in_ecx + 0xf90) = 0xa9;
  *(undefined4 *)(in_ecx + 0xf94) = 0x100;
  *(undefined4 *)(in_ecx + 0xf98) = in_esi;
  *(undefined1 *)(in_ecx + 0xf9c) = uVar1;
  *(undefined1 *)(in_ecx + 0xf9d) = uVar2;
  *(undefined4 *)(in_ecx + 4000) = 0;
  *(undefined4 *)(in_ecx + 0xfa4) = 0;
  *(undefined2 *)(in_ecx + 0xfa8) = 0xaa;
  *(undefined4 *)(in_ecx + 0xfac) = 0x100;
  *(undefined4 *)(in_ecx + 0xfb0) = in_esi;
  *(undefined1 *)(in_ecx + 0xfb4) = uVar1;
  *(undefined1 *)(in_ecx + 0xfb5) = uVar2;
  *(undefined4 *)(in_ecx + 0xfb8) = 0;
  *(undefined4 *)(in_ecx + 0xfbc) = 0;
  *(undefined2 *)(in_ecx + 0xfc0) = (undefined2)in_eax;
  *(undefined4 *)(in_ecx + 0xfc4) = 0x200;
  *(undefined4 *)(in_ecx + 0xfc8) = in_ebx;
  *(undefined1 *)(in_ecx + 0xfcc) = uVar1;
  *(undefined1 *)(in_ecx + 0xfcd) = uVar2;
  *(gen_code32 *)(in_ecx + 0xfd0) = ((code *)REFP(0x44e040));
  *(undefined4 *)(in_ecx + 0xfd4) = 0;
  *(undefined2 *)(in_ecx + 0xfd8) = (undefined2)in_eax;
  *(undefined4 *)(in_ecx + 0xfdc) = 0x200;
  *(undefined4 *)(in_ecx + 0xfe0) = in_ebx;
  *(undefined1 *)(in_ecx + 0xfe4) = uVar1;
  *(undefined1 *)(in_ecx + 0xfe5) = uVar2;
  *(gen_code32 *)(in_ecx + 0xfe8) = ((code *)REFP(0x44e040));
  *(undefined4 *)(in_ecx + 0xfec) = 0;
  *(undefined2 *)(in_ecx + 0xff0) = 0x53;
  *(undefined4 *)(in_ecx + 0xff4) = 0x200;
  *(undefined4 *)(in_ecx + 0xff8) = in_ebx;
  *(undefined1 *)(in_ecx + 0xffc) = uVar1;
  *(undefined1 *)(in_ecx + 0xffd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1000) = 0;
  *(undefined4 *)(in_ecx + 0x1004) = 0;
  *(undefined2 *)(in_ecx + 0x1008) = 0x54;
  *(undefined4 *)(in_ecx + 0x100c) = 0x200;
  *(undefined4 *)(in_ecx + 0x1010) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1014) = uVar1;
  *(undefined1 *)(in_ecx + 0x1015) = uVar2;
  *(undefined4 *)(in_ecx + 0x1018) = 0;
  *(undefined4 *)(in_ecx + 0x101c) = 0;
  *(undefined2 *)(in_ecx + 0x1020) = (undefined2)in_eax;
  *(undefined4 *)(in_ecx + 0x1024) = 0x200;
  *(undefined4 *)(in_ecx + 0x1028) = in_ebx;
  *(undefined1 *)(in_ecx + 0x102c) = uVar1;
  *(undefined1 *)(in_ecx + 0x102d) = uVar2;
  *(gen_code32 *)(in_ecx + 0x1030) = ((code *)REFP(0x44e040));
  *(undefined4 *)(in_ecx + 0x1034) = 0;
  *(undefined2 *)(in_ecx + 0x1038) = (undefined2)in_eax;
  *(undefined4 *)(in_ecx + 0x103c) = 0x200;
  *(undefined4 *)(in_ecx + 0x1040) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1044) = uVar1;
  *(undefined1 *)(in_ecx + 0x1045) = uVar2;
  *(gen_code32 *)(in_ecx + 0x1048) = ((code *)REFP(0x44e040));
  *(undefined4 *)(in_ecx + 0x104c) = 0;
  *(undefined2 *)(in_ecx + 0x1050) = (undefined2)in_eax;
  *(undefined4 *)(in_ecx + 0x1054) = 0x200;
  *(undefined4 *)(in_ecx + 0x1058) = in_ebx;
  *(undefined1 *)(in_ecx + 0x105c) = uVar1;
  *(undefined1 *)(in_ecx + 0x105d) = uVar2;
  *(gen_code32 *)(in_ecx + 0x1060) = ((code *)REFP(0x44e040));
  *(undefined4 *)(in_ecx + 0x1064) = 0;
  *(undefined2 *)(in_ecx + 0x1068) = 0x17d;
  *(undefined4 *)(in_ecx + 0x106c) = 0x200;
  *(undefined4 *)(in_ecx + 0x1070) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1074) = uVar1;
  *(undefined1 *)(in_ecx + 0x1075) = uVar2;
  *(undefined4 *)(in_ecx + 0x1078) = 0;
  *(undefined4 *)(in_ecx + 0x107c) = 0;
  *(undefined2 *)(in_ecx + 0x1080) = 0x17e;
  *(undefined4 *)(in_ecx + 0x1084) = 0x200;
  *(undefined4 *)(in_ecx + 0x1088) = in_ebx;
  *(undefined1 *)(in_ecx + 0x108c) = uVar1;
  *(undefined1 *)(in_ecx + 0x108d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1090) = 0;
  *(undefined4 *)(in_ecx + 0x1094) = 0;
  *(undefined2 *)(in_ecx + 0x1098) = 0x180;
  *(undefined4 *)(in_ecx + 0x109c) = 0x200;
  *(undefined4 *)(in_ecx + 0x10a0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x10a4) = uVar1;
  *(undefined1 *)(in_ecx + 0x10a5) = uVar2;
  *(undefined4 *)(in_ecx + 0x10a8) = 0;
  *(undefined4 *)(in_ecx + 0x10ac) = 0;
  *(undefined2 *)(in_ecx + 0x10b0) = 0x17f;
  *(undefined4 *)(in_ecx + 0x10b4) = 0x200;
  *(undefined4 *)(in_ecx + 0x10b8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x10bc) = uVar1;
  *(undefined1 *)(in_ecx + 0x10bd) = uVar2;
  *(undefined4 *)(in_ecx + 0x10c0) = 0;
  *(undefined4 *)(in_ecx + 0x10c4) = 0;
  *(undefined2 *)(in_ecx + 0x10c8) = 0xb1;
  *(undefined4 *)(in_ecx + 0x10cc) = 0x200;
  *(undefined4 *)(in_ecx + 0x10d0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x10d4) = uVar1;
  *(undefined1 *)(in_ecx + 0x10d5) = uVar2;
  *(undefined4 *)(in_ecx + 0x10d8) = 0;
  *(undefined4 *)(in_ecx + 0x10dc) = 0;
  *(undefined2 *)(in_ecx + 0x10e0) = 0x30;
  *(undefined4 *)(in_ecx + 0x10e4) = 0x200;
  *(undefined4 *)(in_ecx + 0x10e8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x10ec) = uVar1;
  *(undefined1 *)(in_ecx + 0x10ed) = uVar2;
  *(undefined4 *)(in_ecx + 0x10f0) = 0;
  *(undefined4 *)(in_ecx + 0x10f4) = 0;
  *(undefined2 *)(in_ecx + 0x10f8) = 0x31;
  *(undefined4 *)(in_ecx + 0x10fc) = 0x200;
  *(undefined4 *)(in_ecx + 0x1100) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1104) = uVar1;
  *(undefined1 *)(in_ecx + 0x1105) = uVar2;
  *(undefined4 *)(in_ecx + 0x1108) = 0;
  *(undefined4 *)(in_ecx + 0x110c) = 0;
  *(undefined2 *)(in_ecx + 0x1110) = 0x32;
  *(undefined4 *)(in_ecx + 0x1114) = 0x200;
  *(undefined4 *)(in_ecx + 0x1118) = in_ebx;
  *(undefined1 *)(in_ecx + 0x111c) = uVar1;
  *(undefined1 *)(in_ecx + 0x111d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1120) = 0;
  *(undefined4 *)(in_ecx + 0x1124) = 0;
  *(undefined2 *)(in_ecx + 0x1128) = 0x74;
  *(undefined4 *)(in_ecx + 0x112c) = 0x400;
  *(undefined4 *)(in_ecx + 0x1130) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1134) = uVar1;
  *(undefined1 *)(in_ecx + 0x1135) = uVar2;
  *(undefined4 *)(in_ecx + 0x1138) = 0;
  *(undefined4 *)(in_ecx + 0x113c) = 0;
  *(undefined2 *)(in_ecx + 0x1140) = 0x75;
  *(undefined4 *)(in_ecx + 0x1144) = 0x400;
  *(undefined4 *)(in_ecx + 0x1148) = in_ebx;
  *(undefined1 *)(in_ecx + 0x114c) = uVar1;
  *(undefined1 *)(in_ecx + 0x114d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1150) = 0;
  *(undefined4 *)(in_ecx + 0x1154) = 0;
  *(undefined2 *)(in_ecx + 0x1158) = 0x181;
  *(undefined4 *)(in_ecx + 0x115c) = 0x800;
  *(undefined4 *)(in_ecx + 0x1160) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1164) = uVar1;
  *(undefined1 *)(in_ecx + 0x1165) = uVar2;
  *(undefined4 *)(in_ecx + 0x1168) = 0;
  *(undefined4 *)(in_ecx + 0x116c) = 0;
  *(undefined2 *)(in_ecx + 0x1170) = 0x184;
  *(undefined4 *)(in_ecx + 0x1174) = 0x800;
  *(undefined4 *)(in_ecx + 0x1178) = in_ebx;
  *(undefined1 *)(in_ecx + 0x117c) = uVar1;
  *(undefined1 *)(in_ecx + 0x117d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1180) = 0;
  *(undefined4 *)(in_ecx + 0x1184) = 0;
  *(undefined2 *)(in_ecx + 0x1188) = 0x185;
  *(undefined4 *)(in_ecx + 0x118c) = 0x800;
  *(undefined4 *)(in_ecx + 0x1190) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1194) = uVar1;
  *(undefined1 *)(in_ecx + 0x1195) = uVar2;
  *(undefined4 *)(in_ecx + 0x1198) = 0;
  *(undefined4 *)(in_ecx + 0x119c) = 0;
  *(undefined2 *)(in_ecx + 0x11a0) = 0x186;
  *(undefined4 *)(in_ecx + 0x11a4) = 0x800;
  *(undefined4 *)(in_ecx + 0x11a8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x11ac) = uVar1;
  *(undefined1 *)(in_ecx + 0x11ad) = uVar2;
  *(undefined4 *)(in_ecx + 0x11b0) = 0;
  *(undefined4 *)(in_ecx + 0x11b4) = 0;
  *(undefined2 *)(in_ecx + 0x11b8) = 0x187;
  *(undefined4 *)(in_ecx + 0x11bc) = 0x800;
  *(undefined4 *)(in_ecx + 0x11c0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x11c4) = uVar1;
  *(undefined1 *)(in_ecx + 0x11c5) = uVar2;
  *(undefined4 *)(in_ecx + 0x11c8) = 0;
  *(undefined4 *)(in_ecx + 0x11cc) = 0;
  *(undefined2 *)(in_ecx + 0x11d0) = 0x188;
  *(undefined4 *)(in_ecx + 0x11d4) = 0x800;
  *(undefined4 *)(in_ecx + 0x11d8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x11dc) = uVar1;
  *(undefined1 *)(in_ecx + 0x11dd) = uVar2;
  *(undefined4 *)(in_ecx + 0x11e0) = 0;
  *(undefined4 *)(in_ecx + 0x11e4) = 0;
  *(undefined2 *)(in_ecx + 0x11e8) = 0x189;
  *(undefined4 *)(in_ecx + 0x11ec) = 0x800;
  *(undefined4 *)(in_ecx + 0x11f0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x11f4) = uVar1;
  *(undefined1 *)(in_ecx + 0x11f5) = uVar2;
  *(undefined4 *)(in_ecx + 0x11f8) = 0;
  *(undefined4 *)(in_ecx + 0x11fc) = 0;
  *(undefined2 *)(in_ecx + 0x1200) = 0x18a;
  *(undefined4 *)(in_ecx + 0x1204) = 0x800;
  *(undefined4 *)(in_ecx + 0x1208) = in_ebx;
  *(undefined1 *)(in_ecx + 0x120c) = uVar1;
  *(undefined1 *)(in_ecx + 0x120d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1210) = 0;
  *(undefined4 *)(in_ecx + 0x1214) = 0;
  *(undefined2 *)(in_ecx + 0x1218) = 0x18b;
  *(undefined4 *)(in_ecx + 0x121c) = 0x800;
  *(undefined4 *)(in_ecx + 0x1220) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1224) = uVar1;
  *(undefined1 *)(in_ecx + 0x1225) = uVar2;
  *(undefined4 *)(in_ecx + 0x1228) = 0;
  *(undefined4 *)(in_ecx + 0x122c) = 0;
  *(undefined2 *)(in_ecx + 0x1230) = 0x18c;
  *(undefined4 *)(in_ecx + 0x1234) = 0x800;
  *(undefined4 *)(in_ecx + 0x1238) = in_ebx;
  *(undefined1 *)(in_ecx + 0x123c) = uVar1;
  *(undefined1 *)(in_ecx + 0x123d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1240) = 0;
  *(undefined4 *)(in_ecx + 0x1244) = 0;
  *(undefined2 *)(in_ecx + 0x1248) = 0x18d;
  *(undefined4 *)(in_ecx + 0x124c) = 0x800;
  *(undefined4 *)(in_ecx + 0x1250) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1254) = uVar1;
  *(undefined1 *)(in_ecx + 0x1255) = uVar2;
  *(undefined4 *)(in_ecx + 0x1258) = 0;
  *(undefined4 *)(in_ecx + 0x125c) = 0;
  *(undefined2 *)(in_ecx + 0x1260) = 0x18e;
  *(undefined4 *)(in_ecx + 0x1264) = 0x800;
  *(undefined4 *)(in_ecx + 0x1268) = in_ebx;
  *(undefined1 *)(in_ecx + 0x126c) = uVar1;
  *(undefined1 *)(in_ecx + 0x126d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1270) = 0;
  *(undefined4 *)(in_ecx + 0x1274) = 0;
  *(undefined2 *)(in_ecx + 0x1278) = 399;
  *(undefined4 *)(in_ecx + 0x127c) = 0x800;
  *(undefined4 *)(in_ecx + 0x1280) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1284) = uVar1;
  *(undefined1 *)(in_ecx + 0x1285) = uVar2;
  *(undefined4 *)(in_ecx + 0x1288) = 0;
  *(undefined4 *)(in_ecx + 0x128c) = 0;
  *(undefined2 *)(in_ecx + 0x1290) = 400;
  *(undefined4 *)(in_ecx + 0x1294) = 0x800;
  *(undefined4 *)(in_ecx + 0x1298) = in_ebx;
  *(undefined1 *)(in_ecx + 0x129c) = uVar1;
  *(undefined1 *)(in_ecx + 0x129d) = uVar2;
  *(undefined4 *)(in_ecx + 0x12a0) = 0;
  *(undefined4 *)(in_ecx + 0x12a4) = 0;
  *(undefined2 *)(in_ecx + 0x12a8) = 0x191;
  *(undefined4 *)(in_ecx + 0x12ac) = 0x800;
  *(undefined4 *)(in_ecx + 0x12b0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x12b4) = uVar1;
  *(undefined1 *)(in_ecx + 0x12b5) = uVar2;
  *(undefined4 *)(in_ecx + 0x12b8) = 0;
  *(undefined4 *)(in_ecx + 0x12bc) = 0;
  *(undefined2 *)(in_ecx + 0x12c0) = 0x192;
  *(undefined4 *)(in_ecx + 0x12c4) = 0x800;
  *(undefined4 *)(in_ecx + 0x12c8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x12cc) = uVar1;
  *(undefined1 *)(in_ecx + 0x12cd) = uVar2;
  *(undefined4 *)(in_ecx + 0x12d0) = 0;
  *(undefined4 *)(in_ecx + 0x12d4) = 0;
  *(undefined2 *)(in_ecx + 0x12d8) = 0x140;
  *(undefined4 *)(in_ecx + 0x12dc) = 0x800;
  *(undefined4 *)(in_ecx + 0x12e0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x12e4) = uVar1;
  *(undefined1 *)(in_ecx + 0x12e5) = uVar2;
  *(undefined4 *)(in_ecx + 0x12e8) = 0;
  *(undefined4 *)(in_ecx + 0x12ec) = 0;
  *(undefined2 *)(in_ecx + 0x12f0) = 0x193;
  *(undefined4 *)(in_ecx + 0x12f4) = 0x800;
  *(undefined4 *)(in_ecx + 0x12f8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x12fc) = uVar1;
  *(undefined1 *)(in_ecx + 0x12fd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1300) = 0;
  *(undefined4 *)(in_ecx + 0x1304) = 0;
  *(undefined2 *)(in_ecx + 0x1308) = 0x19b;
  *(undefined4 *)(in_ecx + 0x130c) = 0x800;
  *(undefined4 *)(in_ecx + 0x1310) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1314) = uVar1;
  *(undefined1 *)(in_ecx + 0x1315) = uVar2;
  *(undefined4 *)(in_ecx + 0x1318) = 0;
  *(undefined4 *)(in_ecx + 0x131c) = 0;
  *(undefined2 *)(in_ecx + 0x1320) = 0x19c;
  *(undefined4 *)(in_ecx + 0x1324) = 0x800;
  *(undefined4 *)(in_ecx + 0x1328) = in_ebx;
  *(undefined1 *)(in_ecx + 0x132c) = uVar1;
  *(undefined1 *)(in_ecx + 0x132d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1330) = 0;
  *(undefined4 *)(in_ecx + 0x1334) = 0;
  *(undefined2 *)(in_ecx + 0x1338) = 0x196;
  *(undefined4 *)(in_ecx + 0x133c) = 0x800;
  *(undefined4 *)(in_ecx + 0x1340) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1344) = uVar1;
  *(undefined1 *)(in_ecx + 0x1345) = uVar2;
  *(undefined4 *)(in_ecx + 0x1348) = 0;
  *(undefined4 *)(in_ecx + 0x134c) = 0;
  *(undefined2 *)(in_ecx + 0x1350) = 0x182;
  *(undefined4 *)(in_ecx + 0x1354) = 0x800;
  *(undefined4 *)(in_ecx + 0x1358) = in_ebx;
  *(undefined1 *)(in_ecx + 0x135c) = uVar1;
  *(undefined1 *)(in_ecx + 0x135d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1360) = 0;
  *(undefined4 *)(in_ecx + 0x1364) = 0;
  *(undefined2 *)(in_ecx + 0x1368) = 0x198;
  *(undefined4 *)(in_ecx + 0x136c) = 0x800;
  *(undefined4 *)(in_ecx + 0x1370) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1374) = uVar1;
  *(undefined1 *)(in_ecx + 0x1375) = uVar2;
  *(undefined4 *)(in_ecx + 0x1378) = 0;
  *(undefined4 *)(in_ecx + 0x137c) = 0;
  *(undefined2 *)(in_ecx + 0x1380) = 0x199;
  *(undefined4 *)(in_ecx + 0x1384) = 0x800;
  *(undefined4 *)(in_ecx + 5000) = in_ebx;
  *(undefined1 *)(in_ecx + 0x138c) = uVar1;
  *(undefined1 *)(in_ecx + 0x138d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1390) = 0;
  *(undefined4 *)(in_ecx + 0x1394) = 0;
  *(undefined2 *)(in_ecx + 0x1398) = 0x19a;
  *(undefined4 *)(in_ecx + 0x139c) = 0x800;
  *(undefined4 *)(in_ecx + 0x13a0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x13a4) = uVar1;
  *(undefined1 *)(in_ecx + 0x13a5) = uVar2;
  *(undefined4 *)(in_ecx + 0x13a8) = 0;
  *(undefined4 *)(in_ecx + 0x13ac) = 0;
  *(undefined2 *)(in_ecx + 0x13b0) = 0x197;
  *(undefined4 *)(in_ecx + 0x13b4) = 0x800;
  *(undefined4 *)(in_ecx + 0x13b8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x13bc) = uVar1;
  *(undefined1 *)(in_ecx + 0x13bd) = 1;
  *(undefined4 *)(in_ecx + 0x13c0) = 0;
  *(undefined4 *)(in_ecx + 0x13c4) = 0;
  *(undefined2 *)(in_ecx + 0x13c8) = 0x194;
  *(undefined4 *)(in_ecx + 0x13cc) = 0x1000;
  *(undefined4 *)(in_ecx + 0x13d0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x13d4) = uVar1;
  *(undefined1 *)(in_ecx + 0x13d5) = uVar2;
  *(undefined4 *)(in_ecx + 0x13d8) = 0;
  *(undefined4 *)(in_ecx + 0x13dc) = 0;
  *(undefined2 *)(in_ecx + 0x13e0) = 0x195;
  *(undefined4 *)(in_ecx + 0x13e4) = 0x1000;
  *(undefined4 *)(in_ecx + 0x13e8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x13ec) = uVar1;
  *(undefined1 *)(in_ecx + 0x13ed) = uVar2;
  *(undefined4 *)(in_ecx + 0x13f0) = 0;
  *(undefined4 *)(in_ecx + 0x13f4) = 0;
  *(undefined2 *)(in_ecx + 0x13f8) = 0x137;
  *(undefined4 *)(in_ecx + 0x13fc) = 0x1000;
  *(undefined4 *)(in_ecx + 0x1400) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1404) = uVar1;
  *(undefined1 *)(in_ecx + 0x1405) = uVar2;
  *(undefined4 *)(in_ecx + 0x1408) = 0;
  *(undefined4 *)(in_ecx + 0x140c) = 0;
  *(undefined2 *)(in_ecx + 0x1428) = 0xf3;
  *(undefined4 *)(in_ecx + 0x142c) = 0x2000;
  *(undefined4 *)(in_ecx + 0x1430) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1434) = uVar1;
  *(undefined1 *)(in_ecx + 0x1435) = uVar2;
  *(undefined4 *)(in_ecx + 0x1438) = 0;
  *(undefined4 *)(in_ecx + 0x143c) = 0;
  *(undefined2 *)(in_ecx + 0x1440) = 0xf5;
  *(undefined4 *)(in_ecx + 0x1444) = 0x2000;
  *(undefined4 *)(in_ecx + 0x1448) = in_ebx;
  *(undefined1 *)(in_ecx + 0x144c) = uVar1;
  *(undefined1 *)(in_ecx + 0x144d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1450) = 0;
  *(undefined4 *)(in_ecx + 0x1454) = 0;
  *(undefined2 *)(in_ecx + 0x1458) = 0xf6;
  *(undefined4 *)(in_ecx + 0x145c) = 0x2000;
  *(undefined4 *)(in_ecx + 0x1460) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1464) = uVar1;
  *(undefined1 *)(in_ecx + 0x1465) = uVar2;
  *(undefined4 *)(in_ecx + 0x1468) = 0;
  *(undefined4 *)(in_ecx + 0x146c) = 0;
  *(undefined2 *)(in_ecx + 0x1470) = 0xf7;
  *(undefined4 *)(in_ecx + 0x1474) = 0x2000;
  *(undefined4 *)(in_ecx + 0x1478) = in_ebx;
  *(undefined1 *)(in_ecx + 0x147c) = uVar1;
  *(undefined1 *)(in_ecx + 0x147d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1480) = 0;
  *(undefined4 *)(in_ecx + 0x1484) = 0;
  *(undefined2 *)(in_ecx + 0x1488) = 0xf8;
  *(undefined4 *)(in_ecx + 0x148c) = 0x2000;
  *(undefined4 *)(in_ecx + 0x1490) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1494) = uVar1;
  *(undefined1 *)(in_ecx + 0x1495) = uVar2;
  *(undefined4 *)(in_ecx + 0x1498) = 0;
  *(undefined4 *)(in_ecx + 0x149c) = 0;
  *(undefined2 *)(in_ecx + 0x14a0) = 0xfa;
  *(undefined4 *)(in_ecx + 0x14a4) = 0x2000;
  *(undefined4 *)(in_ecx + 0x14a8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x14ac) = uVar1;
  *(undefined1 *)(in_ecx + 0x14ad) = uVar2;
  *(undefined4 *)(in_ecx + 0x14b0) = 0;
  *(undefined4 *)(in_ecx + 0x14b4) = 0;
  *(undefined2 *)(in_ecx + 0x14b8) = 0xfb;
  *(undefined4 *)(in_ecx + 0x14bc) = 0x2000;
  *(undefined4 *)(in_ecx + 0x14c0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x14c4) = uVar1;
  *(undefined1 *)(in_ecx + 0x14c5) = uVar2;
  *(undefined4 *)(in_ecx + 0x14c8) = 0;
  *(undefined4 *)(in_ecx + 0x14cc) = 0;
  *(undefined2 *)(in_ecx + 0x14d0) = 0xfc;
  *(undefined4 *)(in_ecx + 0x14d4) = 0x2000;
  *(undefined4 *)(in_ecx + 0x14d8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x14dc) = uVar1;
  *(undefined1 *)(in_ecx + 0x14dd) = uVar2;
  *(undefined4 *)(in_ecx + 0x14e0) = 0;
  *(undefined4 *)(in_ecx + 0x14e4) = 0;
  *(undefined2 *)(in_ecx + 0x14e8) = 0xfe;
  *(undefined4 *)(in_ecx + 0x14ec) = 0x2000;
  *(undefined4 *)(in_ecx + 0x14f0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x14f4) = uVar1;
  *(undefined1 *)(in_ecx + 0x14f5) = uVar2;
  *(undefined4 *)(in_ecx + 0x14f8) = 0;
  *(undefined4 *)(in_ecx + 0x14fc) = 0;
  *(undefined2 *)(in_ecx + 0x1500) = 0xff;
  *(undefined4 *)(in_ecx + 0x1504) = 0x2000;
  *(undefined4 *)(in_ecx + 0x1508) = in_ebx;
  *(undefined1 *)(in_ecx + 0x150c) = uVar1;
  *(undefined1 *)(in_ecx + 0x150d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1510) = 0;
  *(undefined4 *)(in_ecx + 0x1514) = 0;
  *(undefined2 *)(in_ecx + 0x1530) = 0x100;
  *(undefined4 *)(in_ecx + 0x1534) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1538) = in_ebx;
  *(undefined1 *)(in_ecx + 0x153c) = uVar1;
  *(undefined1 *)(in_ecx + 0x153d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1540) = 0;
  *(undefined4 *)(in_ecx + 0x1544) = 0;
  *(undefined2 *)(in_ecx + 0x1548) = 0x102;
  *(undefined4 *)(in_ecx + 0x154c) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1550) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1554) = uVar1;
  *(undefined1 *)(in_ecx + 0x1555) = uVar2;
  *(undefined4 *)(in_ecx + 0x1558) = 0;
  *(undefined4 *)(in_ecx + 0x155c) = 0;
  *(undefined2 *)(in_ecx + 0x1560) = 0x103;
  *(undefined4 *)(in_ecx + 0x1564) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1568) = in_ebx;
  *(undefined1 *)(in_ecx + 0x156c) = uVar1;
  *(undefined1 *)(in_ecx + 0x156d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1570) = 0;
  *(undefined4 *)(in_ecx + 0x1574) = 0;
  *(undefined2 *)(in_ecx + 0x1578) = 0x104;
  *(undefined4 *)(in_ecx + 0x157c) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1580) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1584) = uVar1;
  *(undefined1 *)(in_ecx + 0x1585) = uVar2;
  *(undefined4 *)(in_ecx + 0x1588) = 0;
  *(undefined4 *)(in_ecx + 0x158c) = 0;
  *(undefined2 *)(in_ecx + 0x1590) = 0x105;
  *(undefined4 *)(in_ecx + 0x1594) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1598) = in_ebx;
  *(undefined1 *)(in_ecx + 0x159c) = uVar1;
  *(undefined1 *)(in_ecx + 0x159d) = uVar2;
  *(undefined4 *)(in_ecx + 0x15a0) = 0;
  *(undefined4 *)(in_ecx + 0x15a4) = 0;
  *(undefined2 *)(in_ecx + 0x15a8) = 0x106;
  *(undefined4 *)(in_ecx + 0x15ac) = 0x4000;
  *(undefined4 *)(in_ecx + 0x15b0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x15b4) = uVar1;
  *(undefined1 *)(in_ecx + 0x15b5) = uVar2;
  *(undefined4 *)(in_ecx + 0x15b8) = 0;
  *(undefined4 *)(in_ecx + 0x15bc) = 0;
  *(undefined2 *)(in_ecx + 0x15c0) = 0x107;
  *(undefined4 *)(in_ecx + 0x15c4) = 0x4000;
  *(undefined4 *)(in_ecx + 0x15c8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x15cc) = uVar1;
  *(undefined1 *)(in_ecx + 0x15cd) = uVar2;
  *(undefined4 *)(in_ecx + 0x15d0) = 0;
  *(undefined4 *)(in_ecx + 0x15d4) = 0;
  *(undefined2 *)(in_ecx + 0x15d8) = 0x109;
  *(undefined4 *)(in_ecx + 0x15dc) = 0x4000;
  *(undefined4 *)(in_ecx + 0x15e0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x15e4) = uVar1;
  *(undefined1 *)(in_ecx + 0x15e5) = uVar2;
  *(undefined4 *)(in_ecx + 0x15e8) = 0;
  *(undefined4 *)(in_ecx + 0x15ec) = 0;
  *(undefined2 *)(in_ecx + 0x15f0) = 0x10a;
  *(undefined4 *)(in_ecx + 0x15f4) = 0x4000;
  *(undefined4 *)(in_ecx + 0x15f8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x15fc) = uVar1;
  *(undefined1 *)(in_ecx + 0x15fd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1600) = 0;
  *(undefined4 *)(in_ecx + 0x1604) = 0;
  *(undefined2 *)(in_ecx + 0x1608) = 0x10b;
  *(undefined4 *)(in_ecx + 0x160c) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1610) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1614) = uVar1;
  *(undefined1 *)(in_ecx + 0x1615) = uVar2;
  *(undefined4 *)(in_ecx + 0x1618) = 0;
  *(undefined4 *)(in_ecx + 0x161c) = 0;
  *(undefined2 *)(in_ecx + 0x1620) = 0x10c;
  *(undefined4 *)(in_ecx + 0x1624) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1628) = in_ebx;
  *(undefined1 *)(in_ecx + 0x162c) = uVar1;
  *(undefined1 *)(in_ecx + 0x162d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1630) = 0;
  *(undefined4 *)(in_ecx + 0x1634) = 0;
  *(undefined2 *)(in_ecx + 0x1638) = 0x10d;
  *(undefined4 *)(in_ecx + 0x163c) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1640) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1644) = uVar1;
  *(undefined1 *)(in_ecx + 0x1645) = uVar2;
  *(undefined4 *)(in_ecx + 0x1648) = 0;
  *(undefined4 *)(in_ecx + 0x164c) = 0;
  *(undefined2 *)(in_ecx + 0x1650) = 0x10e;
  *(undefined4 *)(in_ecx + 0x1654) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1658) = in_ebx;
  *(undefined1 *)(in_ecx + 0x165c) = uVar1;
  *(undefined1 *)(in_ecx + 0x165d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1660) = 0;
  *(undefined4 *)(in_ecx + 0x1664) = 0;
  *(undefined2 *)(in_ecx + 0x1668) = 0x110;
  *(undefined4 *)(in_ecx + 0x166c) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1670) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1674) = uVar1;
  *(undefined1 *)(in_ecx + 0x1675) = uVar2;
  *(undefined4 *)(in_ecx + 0x1678) = 0;
  *(undefined4 *)(in_ecx + 0x167c) = 0;
  *(undefined2 *)(in_ecx + 0x1680) = 0x111;
  *(undefined4 *)(in_ecx + 0x1684) = 0x4000;
  *(undefined4 *)(in_ecx + 0x1688) = in_ebx;
  *(undefined1 *)(in_ecx + 0x168c) = uVar1;
  *(undefined1 *)(in_ecx + 0x168d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1690) = 0;
  *(undefined4 *)(in_ecx + 0x1694) = 0;
  *(undefined2 *)(in_ecx + 0x1698) = 0x112;
  *(undefined4 *)(in_ecx + 0x169c) = 0x4000;
  *(undefined4 *)(in_ecx + 0x16a0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x16a4) = uVar1;
  *(undefined1 *)(in_ecx + 0x16a5) = uVar2;
  *(undefined4 *)(in_ecx + 0x16a8) = 0;
  *(undefined4 *)(in_ecx + 0x16ac) = 0;
  *(undefined2 *)(in_ecx + 0x16b0) = 0x113;
  *(undefined4 *)(in_ecx + 0x16b4) = 0x4000;
  *(undefined4 *)(in_ecx + 0x16b8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x16bc) = uVar1;
  *(undefined1 *)(in_ecx + 0x16bd) = uVar2;
  *(undefined4 *)(in_ecx + 0x16c0) = 0;
  *(undefined4 *)(in_ecx + 0x16c4) = 0;
  *(undefined2 *)(in_ecx + 0x16c8) = 0x114;
  *(undefined4 *)(in_ecx + 0x16cc) = 0x4000;
  *(undefined4 *)(in_ecx + 0x16d0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x16d4) = uVar1;
  *(undefined1 *)(in_ecx + 0x16d5) = uVar2;
  *(undefined4 *)(in_ecx + 0x16d8) = 0;
  *(undefined4 *)(in_ecx + 0x16dc) = 0;
  *(undefined2 *)(in_ecx + 0x16f8) = 0x115;
  *(undefined4 *)(in_ecx + 0x16fc) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1700) = in_esi;
  *(undefined1 *)(in_ecx + 0x1704) = uVar1;
  *(undefined1 *)(in_ecx + 0x1705) = uVar2;
  *(undefined4 *)(in_ecx + 0x1708) = 0;
  *(undefined4 *)(in_ecx + 0x170c) = 0;
  *(undefined2 *)(in_ecx + 0x1710) = 0x117;
  *(undefined4 *)(in_ecx + 0x1714) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1718) = in_ebx;
  *(undefined1 *)(in_ecx + 0x171c) = uVar1;
  *(undefined1 *)(in_ecx + 0x171d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1720) = 0;
  *(undefined4 *)(in_ecx + 0x1724) = 0;
  *(undefined2 *)(in_ecx + 0x1728) = 0x118;
  *(undefined4 *)(in_ecx + 0x172c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1730) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1734) = uVar1;
  *(undefined1 *)(in_ecx + 0x1735) = uVar2;
  *(undefined4 *)(in_ecx + 0x1738) = 0;
  *(undefined4 *)(in_ecx + 0x173c) = 0;
  *(undefined2 *)(in_ecx + 0x1740) = 0x119;
  *(undefined4 *)(in_ecx + 0x1744) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1748) = in_esi;
  *(undefined1 *)(in_ecx + 0x174c) = uVar1;
  *(undefined1 *)(in_ecx + 0x174d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1750) = 0;
  *(undefined4 *)(in_ecx + 0x1754) = 0;
  *(undefined2 *)(in_ecx + 0x1758) = 0x11b;
  *(undefined4 *)(in_ecx + 0x175c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1760) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1764) = uVar1;
  *(undefined1 *)(in_ecx + 0x1765) = uVar2;
  *(undefined4 *)(in_ecx + 0x1768) = 0;
  *(undefined4 *)(in_ecx + 0x176c) = 0;
  *(undefined2 *)(in_ecx + 6000) = 0x11c;
  *(undefined4 *)(in_ecx + 0x1774) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1778) = in_ebx;
  *(undefined1 *)(in_ecx + 0x177c) = uVar1;
  *(undefined1 *)(in_ecx + 0x177d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1780) = 0;
  *(undefined4 *)(in_ecx + 0x1784) = 0;
  *(undefined2 *)(in_ecx + 0x1788) = 0x11d;
  *(undefined4 *)(in_ecx + 0x178c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1790) = in_esi;
  *(undefined1 *)(in_ecx + 0x1794) = uVar1;
  *(undefined1 *)(in_ecx + 0x1795) = uVar2;
  *(undefined4 *)(in_ecx + 0x1798) = 0;
  *(undefined4 *)(in_ecx + 0x179c) = 0;
  *(undefined2 *)(in_ecx + 0x17a0) = 0x11f;
  *(undefined4 *)(in_ecx + 0x17a4) = 0x8000;
  *(undefined4 *)(in_ecx + 0x17a8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x17ac) = uVar1;
  *(undefined1 *)(in_ecx + 0x17ad) = uVar2;
  *(undefined4 *)(in_ecx + 0x17b0) = 0;
  *(undefined4 *)(in_ecx + 0x17b4) = 0;
  *(undefined2 *)(in_ecx + 0x17b8) = 0x120;
  *(undefined4 *)(in_ecx + 0x17bc) = 0x8000;
  *(undefined4 *)(in_ecx + 0x17c0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x17c4) = uVar1;
  *(undefined1 *)(in_ecx + 0x17c5) = uVar2;
  *(undefined4 *)(in_ecx + 0x17c8) = 0;
  *(undefined4 *)(in_ecx + 0x17cc) = 0;
  *(undefined2 *)(in_ecx + 0x17d0) = 0x121;
  *(undefined4 *)(in_ecx + 0x17d4) = 0x8000;
  *(undefined4 *)(in_ecx + 0x17d8) = in_esi;
  *(undefined1 *)(in_ecx + 0x17dc) = uVar1;
  *(undefined1 *)(in_ecx + 0x17dd) = uVar2;
  *(undefined4 *)(in_ecx + 0x17e0) = 0;
  *(undefined4 *)(in_ecx + 0x17e4) = 0;
  *(undefined2 *)(in_ecx + 0x17e8) = 0x123;
  *(undefined4 *)(in_ecx + 0x17ec) = 0x8000;
  *(undefined4 *)(in_ecx + 0x17f0) = in_ebx;
  *(undefined1 *)(in_ecx + 0x17f4) = uVar1;
  *(undefined1 *)(in_ecx + 0x17f5) = uVar2;
  *(undefined4 *)(in_ecx + 0x17f8) = 0;
  *(undefined4 *)(in_ecx + 0x17fc) = 0;
  *(undefined2 *)(in_ecx + 0x1800) = 0x124;
  *(undefined4 *)(in_ecx + 0x1804) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1808) = in_ebx;
  *(undefined1 *)(in_ecx + 0x180c) = uVar1;
  *(undefined1 *)(in_ecx + 0x180d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1810) = 0;
  *(undefined4 *)(in_ecx + 0x1814) = 0;
  *(undefined2 *)(in_ecx + 0x1818) = 0x125;
  *(undefined4 *)(in_ecx + 0x181c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1820) = in_esi;
  *(undefined1 *)(in_ecx + 0x1824) = uVar1;
  *(undefined1 *)(in_ecx + 0x1825) = uVar2;
  *(undefined4 *)(in_ecx + 0x1828) = 0;
  *(undefined4 *)(in_ecx + 0x182c) = 0;
  *(undefined2 *)(in_ecx + 0x1830) = 0x127;
  *(undefined4 *)(in_ecx + 0x1834) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1838) = in_ebx;
  *(undefined1 *)(in_ecx + 0x183c) = uVar1;
  *(undefined1 *)(in_ecx + 0x183d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1840) = 0;
  *(undefined4 *)(in_ecx + 0x1844) = 0;
  *(undefined2 *)(in_ecx + 0x1848) = 0x128;
  *(undefined4 *)(in_ecx + 0x184c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1850) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1854) = uVar1;
  *(undefined1 *)(in_ecx + 0x1855) = uVar2;
  *(undefined4 *)(in_ecx + 0x1858) = 0;
  *(undefined4 *)(in_ecx + 0x185c) = 0;
  *(undefined2 *)(in_ecx + 0x1860) = 0x129;
  *(undefined4 *)(in_ecx + 0x1864) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1868) = in_esi;
  *(undefined1 *)(in_ecx + 0x186c) = uVar1;
  *(undefined1 *)(in_ecx + 0x186d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1870) = 0;
  *(undefined4 *)(in_ecx + 0x1874) = 0;
  *(undefined2 *)(in_ecx + 0x1878) = 299;
  *(undefined4 *)(in_ecx + 0x187c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1880) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1884) = uVar1;
  *(undefined1 *)(in_ecx + 0x1885) = uVar2;
  *(undefined4 *)(in_ecx + 0x1888) = 0;
  *(undefined4 *)(in_ecx + 0x188c) = 0;
  *(undefined2 *)(in_ecx + 0x1890) = 300;
  *(undefined4 *)(in_ecx + 0x1894) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1898) = in_ebx;
  *(undefined1 *)(in_ecx + 0x189c) = uVar1;
  *(undefined1 *)(in_ecx + 0x189d) = uVar2;
  *(undefined4 *)(in_ecx + 0x18a0) = 0;
  *(undefined4 *)(in_ecx + 0x18a4) = 0;
  *(undefined2 *)(in_ecx + 0x18a8) = 0x12d;
  *(undefined4 *)(in_ecx + 0x18ac) = 0x8000;
  *(undefined4 *)(in_ecx + 0x18b0) = in_esi;
  *(undefined1 *)(in_ecx + 0x18b4) = uVar1;
  *(undefined1 *)(in_ecx + 0x18b5) = uVar2;
  *(undefined4 *)(in_ecx + 0x18b8) = 0;
  *(undefined4 *)(in_ecx + 0x18bc) = 0;
  *(undefined2 *)(in_ecx + 0x18c0) = 0x12f;
  *(undefined4 *)(in_ecx + 0x18c4) = 0x8000;
  *(undefined4 *)(in_ecx + 0x18c8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x18cc) = uVar1;
  *(undefined1 *)(in_ecx + 0x18cd) = uVar2;
  *(undefined4 *)(in_ecx + 0x18d0) = 0;
  *(undefined4 *)(in_ecx + 0x18d4) = 0;
  *(undefined2 *)(in_ecx + 0x18d8) = 0x130;
  *(undefined4 *)(in_ecx + 0x18dc) = 0x8000;
  *(undefined4 *)(in_ecx + 0x18e0) = in_esi;
  *(undefined1 *)(in_ecx + 0x18e4) = uVar1;
  *(undefined1 *)(in_ecx + 0x18e5) = uVar2;
  *(undefined4 *)(in_ecx + 0x18e8) = 0;
  *(undefined4 *)(in_ecx + 0x18ec) = 0;
  *(undefined2 *)(in_ecx + 0x18f0) = 0x132;
  *(undefined4 *)(in_ecx + 0x18f4) = 0x8000;
  *(undefined4 *)(in_ecx + 0x18f8) = in_esi;
  *(undefined1 *)(in_ecx + 0x18fc) = uVar1;
  *(undefined1 *)(in_ecx + 0x18fd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1900) = 0;
  *(undefined4 *)(in_ecx + 0x1904) = 0;
  *(undefined2 *)(in_ecx + 0x1908) = 0xf4;
  *(undefined4 *)(in_ecx + 0x190c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1910) = in_esi;
  *(undefined1 *)(in_ecx + 0x1914) = uVar1;
  *(undefined1 *)(in_ecx + 0x1915) = uVar2;
  *(undefined4 *)(in_ecx + 0x1918) = 0;
  *(undefined4 *)(in_ecx + 0x191c) = 0;
  *(undefined2 *)(in_ecx + 0x1920) = 0xf9;
  *(undefined4 *)(in_ecx + 0x1924) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1928) = in_esi;
  *(undefined1 *)(in_ecx + 0x192c) = uVar1;
  *(undefined1 *)(in_ecx + 0x192d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1930) = 0;
  *(undefined4 *)(in_ecx + 0x1934) = 0;
  *(undefined2 *)(in_ecx + 0x1938) = 0xfd;
  *(undefined4 *)(in_ecx + 0x193c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1940) = in_esi;
  *(undefined1 *)(in_ecx + 0x1944) = uVar1;
  *(undefined1 *)(in_ecx + 0x1945) = uVar2;
  *(undefined4 *)(in_ecx + 0x1948) = 0;
  *(undefined4 *)(in_ecx + 0x194c) = 0;
  *(undefined2 *)(in_ecx + 0x1950) = 0x101;
  *(undefined4 *)(in_ecx + 0x1954) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1958) = in_esi;
  *(undefined1 *)(in_ecx + 0x195c) = uVar1;
  *(undefined1 *)(in_ecx + 0x195d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1960) = 0;
  *(undefined4 *)(in_ecx + 0x1964) = 0;
  *(undefined2 *)(in_ecx + 0x1968) = 0x108;
  *(undefined4 *)(in_ecx + 0x196c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1970) = in_esi;
  *(undefined1 *)(in_ecx + 0x1974) = uVar1;
  *(undefined1 *)(in_ecx + 0x1975) = uVar2;
  *(undefined4 *)(in_ecx + 0x1978) = 0;
  *(undefined4 *)(in_ecx + 0x197c) = 0;
  *(undefined2 *)(in_ecx + 0x1980) = 0x10f;
  *(undefined4 *)(in_ecx + 0x1984) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1988) = in_esi;
  *(undefined1 *)(in_ecx + 0x198c) = uVar1;
  *(undefined1 *)(in_ecx + 0x198d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1990) = 0;
  *(undefined4 *)(in_ecx + 0x1994) = 0;
  *(undefined2 *)(in_ecx + 0x1998) = 0x116;
  *(undefined4 *)(in_ecx + 0x199c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x19a0) = in_esi;
  *(undefined1 *)(in_ecx + 0x19a4) = uVar1;
  *(undefined1 *)(in_ecx + 0x19a5) = uVar2;
  *(undefined4 *)(in_ecx + 0x19a8) = 0;
  *(undefined4 *)(in_ecx + 0x19ac) = 0;
  *(undefined2 *)(in_ecx + 0x19b0) = 0x11a;
  *(undefined4 *)(in_ecx + 0x19b4) = 0x8000;
  *(undefined4 *)(in_ecx + 0x19b8) = in_esi;
  *(undefined1 *)(in_ecx + 0x19bc) = uVar1;
  *(undefined1 *)(in_ecx + 0x19bd) = uVar2;
  *(undefined4 *)(in_ecx + 0x19c0) = 0;
  *(undefined4 *)(in_ecx + 0x19c4) = 0;
  *(undefined2 *)(in_ecx + 0x19c8) = 0x11e;
  *(undefined4 *)(in_ecx + 0x19cc) = 0x8000;
  *(undefined4 *)(in_ecx + 0x19d0) = in_esi;
  *(undefined1 *)(in_ecx + 0x19d4) = uVar1;
  *(undefined1 *)(in_ecx + 0x19d5) = uVar2;
  *(undefined4 *)(in_ecx + 0x19d8) = 0;
  *(undefined4 *)(in_ecx + 0x19dc) = 0;
  *(undefined2 *)(in_ecx + 0x19e0) = 0x122;
  *(undefined4 *)(in_ecx + 0x19e4) = 0x8000;
  *(undefined4 *)(in_ecx + 0x19e8) = in_esi;
  *(undefined1 *)(in_ecx + 0x19ec) = uVar1;
  *(undefined1 *)(in_ecx + 0x19ed) = uVar2;
  *(undefined4 *)(in_ecx + 0x19f0) = 0;
  *(undefined4 *)(in_ecx + 0x19f4) = 0;
  *(undefined2 *)(in_ecx + 0x19f8) = 0x126;
  *(undefined4 *)(in_ecx + 0x19fc) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1a00) = in_esi;
  *(undefined1 *)(in_ecx + 0x1a04) = uVar1;
  *(undefined1 *)(in_ecx + 0x1a05) = uVar2;
  *(undefined4 *)(in_ecx + 0x1a08) = 0;
  *(undefined4 *)(in_ecx + 0x1a0c) = 0;
  *(undefined2 *)(in_ecx + 0x1a10) = 0x12a;
  *(undefined4 *)(in_ecx + 0x1a14) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1a18) = in_esi;
  *(undefined1 *)(in_ecx + 0x1a1c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1a1d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1a20) = 0;
  *(undefined4 *)(in_ecx + 0x1a24) = 0;
  *(undefined2 *)(in_ecx + 0x1a28) = 0x12e;
  *(undefined4 *)(in_ecx + 0x1a2c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1a30) = in_esi;
  *(undefined1 *)(in_ecx + 0x1a34) = uVar1;
  *(undefined1 *)(in_ecx + 0x1a35) = uVar2;
  *(undefined4 *)(in_ecx + 0x1a38) = 0;
  *(undefined4 *)(in_ecx + 0x1a3c) = 0;
  *(undefined2 *)(in_ecx + 0x1a40) = 0x131;
  *(undefined4 *)(in_ecx + 0x1a44) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1a48) = in_esi;
  *(undefined1 *)(in_ecx + 0x1a4c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1a4d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1a50) = 0;
  *(undefined4 *)(in_ecx + 0x1a54) = 0;
  *(undefined2 *)(in_ecx + 0x1a58) = 0x133;
  *(undefined4 *)(in_ecx + 0x1a5c) = 0x8000;
  *(undefined4 *)(in_ecx + 0x1a60) = in_esi;
  *(undefined1 *)(in_ecx + 0x1a64) = uVar1;
  *(undefined1 *)(in_ecx + 0x1a65) = uVar2;
  *(undefined4 *)(in_ecx + 0x1a68) = 0;
  *(undefined4 *)(in_ecx + 0x1a6c) = 0;
  *(undefined2 *)(in_ecx + 0x1a70) = 0xf2;
  *(undefined4 *)(in_ecx + 0x1a74) = 0x10000;
  *(undefined4 *)(in_ecx + 0x1a78) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1a7c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1a7d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1a80) = 0;
  *(undefined4 *)(in_ecx + 0x1a84) = 0;
  *(undefined2 *)(in_ecx + 0x1a88) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1a8c) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1a90) = in_ebx;
  *(short *)(in_ecx + 0x1a94) = (short)in_edx;
  *(undefined4 *)(in_ecx + 0x1a98) = 0;
  *(undefined4 *)(in_ecx + 0x1a9c) = 0;
  *(undefined2 *)(in_ecx + 0x1aa0) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1aa4) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1aa8) = in_ebx;
  *(short *)(in_ecx + 0x1aac) = (short)in_esi;
  *(undefined4 *)(in_ecx + 0x1ab0) = 0;
  *(undefined4 *)(in_ecx + 0x1ab4) = 0;
  *(undefined2 *)(in_ecx + 0x1ab8) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1abc) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1ac0) = in_ebx;
  *(short *)(in_ecx + 0x1ac4) = (short)in_ebx;
  *(undefined4 *)(in_ecx + 0x1ac8) = 0;
  *(undefined4 *)(in_ecx + 0x1acc) = 0;
  *(undefined2 *)(in_ecx + 0x1ad0) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1ad4) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1ad8) = in_ebx;
  *(undefined2 *)(in_ecx + 0x1adc) = 3;
  *(undefined4 *)(in_ecx + 0x1ae0) = 0;
  *(undefined4 *)(in_ecx + 0x1ae4) = 0;
  *(undefined2 *)(in_ecx + 0x1ae8) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1aec) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1af0) = in_ebx;
  *(undefined2 *)(in_ecx + 0x1af4) = 4;
  *(undefined4 *)(in_ecx + 0x1af8) = 0;
  *(undefined4 *)(in_ecx + 0x1afc) = 0;
  *(undefined2 *)(in_ecx + 0x1b00) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1b04) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1b08) = in_ebx;
  *(undefined2 *)(in_ecx + 0x1b0c) = 5;
  *(undefined4 *)(in_ecx + 0x1b10) = 0;
  *(undefined4 *)(in_ecx + 0x1b14) = 0;
  *(undefined2 *)(in_ecx + 0x1b18) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1b1c) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1b20) = in_ebx;
  *(undefined2 *)(in_ecx + 0x1b24) = 6;
  *(undefined4 *)(in_ecx + 0x1b28) = 0;
  *(undefined4 *)(in_ecx + 0x1b2c) = 0;
  *(undefined2 *)(in_ecx + 0x1b30) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1b34) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1b38) = in_ebx;
  *(undefined2 *)(in_ecx + 0x1b3c) = 7;
  *(undefined4 *)(in_ecx + 0x1b40) = 0;
  *(undefined4 *)(in_ecx + 0x1b44) = 0;
  *(undefined2 *)(in_ecx + 0x1b48) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1b4c) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1b50) = in_ebx;
  *(undefined2 *)(in_ecx + 0x1b54) = 8;
  *(undefined4 *)(in_ecx + 7000) = 0;
  *(undefined4 *)(in_ecx + 0x1b5c) = 0;
  *(undefined2 *)(in_ecx + 0x1b60) = 0xb9;
  *(undefined4 *)(in_ecx + 0x1b64) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1b68) = in_ebx;
  *(undefined2 *)(in_ecx + 0x1b6c) = 9;
  *(undefined4 *)(in_ecx + 0x1b70) = 0;
  *(undefined4 *)(in_ecx + 0x1b74) = 0;
  *(undefined2 *)(in_ecx + 0x1b78) = 0xbb;
  *(undefined4 *)(in_ecx + 0x1b7c) = 0x20000;
  *(undefined4 *)(in_ecx + 0x1b80) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1b84) = uVar1;
  *(undefined1 *)(in_ecx + 0x1b85) = 1;
  *(undefined4 *)(in_ecx + 0x1b88) = 0;
  *(undefined4 *)(in_ecx + 0x1b8c) = 0;
  *(undefined2 *)(in_ecx + 0x1b90) = 0xc6;
  *(undefined4 *)(in_ecx + 0x1b94) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1b98) = in_esi;
  *(undefined1 *)(in_ecx + 0x1b9c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1b9d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1ba0) = 0;
  *(undefined4 *)(in_ecx + 0x1ba4) = 0;
  *(undefined2 *)(in_ecx + 0x1ba8) = 199;
  *(undefined4 *)(in_ecx + 0x1bac) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1bb0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1bb4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1bb5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1bb8) = 0;
  *(undefined4 *)(in_ecx + 0x1bbc) = 0;
  *(undefined2 *)(in_ecx + 0x1bc0) = 200;
  *(undefined4 *)(in_ecx + 0x1bc4) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1bc8) = in_esi;
  *(undefined1 *)(in_ecx + 0x1bcc) = uVar1;
  *(undefined1 *)(in_ecx + 0x1bcd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1bd0) = 0;
  *(undefined4 *)(in_ecx + 0x1bd4) = 0;
  *(undefined2 *)(in_ecx + 0x1bd8) = 0xc9;
  *(undefined4 *)(in_ecx + 0x1bdc) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1be0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1be4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1be5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1be8) = 0;
  *(undefined4 *)(in_ecx + 0x1bec) = 0;
  *(undefined2 *)(in_ecx + 0x1bf0) = 0xca;
  *(undefined4 *)(in_ecx + 0x1bf4) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1bf8) = in_esi;
  *(undefined1 *)(in_ecx + 0x1bfc) = uVar1;
  *(undefined1 *)(in_ecx + 0x1bfd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c00) = 0;
  *(undefined4 *)(in_ecx + 0x1c04) = 0;
  *(undefined2 *)(in_ecx + 0x1c08) = 0xcb;
  *(undefined4 *)(in_ecx + 0x1c0c) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1c10) = in_esi;
  *(undefined1 *)(in_ecx + 0x1c14) = uVar1;
  *(undefined1 *)(in_ecx + 0x1c15) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c18) = 0;
  *(undefined4 *)(in_ecx + 0x1c1c) = 0;
  *(undefined2 *)(in_ecx + 0x1c20) = 0xcc;
  *(undefined4 *)(in_ecx + 0x1c24) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1c28) = in_esi;
  *(undefined1 *)(in_ecx + 0x1c2c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1c2d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c30) = 0;
  *(undefined4 *)(in_ecx + 0x1c34) = 0;
  *(undefined2 *)(in_ecx + 0x1c38) = 0xcd;
  *(undefined4 *)(in_ecx + 0x1c3c) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1c40) = in_esi;
  *(undefined1 *)(in_ecx + 0x1c44) = uVar1;
  *(undefined1 *)(in_ecx + 0x1c45) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c48) = 0;
  *(undefined4 *)(in_ecx + 0x1c4c) = 0;
  *(undefined2 *)(in_ecx + 0x1c50) = 0xce;
  *(undefined4 *)(in_ecx + 0x1c54) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1c58) = in_esi;
  *(undefined1 *)(in_ecx + 0x1c5c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1c5d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c60) = 0;
  *(undefined4 *)(in_ecx + 0x1c64) = 0;
  *(undefined2 *)(in_ecx + 0x1c68) = 0xcf;
  *(undefined4 *)(in_ecx + 0x1c6c) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1c70) = in_esi;
  *(undefined1 *)(in_ecx + 0x1c74) = uVar1;
  *(undefined1 *)(in_ecx + 0x1c75) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c78) = 0;
  *(undefined4 *)(in_ecx + 0x1c7c) = 0;
  *(undefined2 *)(in_ecx + 0x1c80) = 0xd0;
  *(undefined4 *)(in_ecx + 0x1c84) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1c88) = in_esi;
  *(undefined1 *)(in_ecx + 0x1c8c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1c8d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c90) = 0;
  *(undefined4 *)(in_ecx + 0x1c94) = 0;
  *(undefined2 *)(in_ecx + 0x1c98) = 0xd1;
  *(undefined4 *)(in_ecx + 0x1c9c) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1ca0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1ca4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1ca5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1ca8) = 0;
  *(undefined4 *)(in_ecx + 0x1cac) = 0;
  *(undefined2 *)(in_ecx + 0x1cb0) = 0xd2;
  *(undefined4 *)(in_ecx + 0x1cb4) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1cb8) = in_esi;
  *(undefined1 *)(in_ecx + 0x1cbc) = uVar1;
  *(undefined1 *)(in_ecx + 0x1cbd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1cc0) = 0;
  *(undefined4 *)(in_ecx + 0x1cc4) = 0;
  *(undefined2 *)(in_ecx + 0x1cc8) = 0xd3;
  *(undefined4 *)(in_ecx + 0x1ccc) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1cd0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1cd4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1cd5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1cd8) = 0;
  *(undefined4 *)(in_ecx + 0x1cdc) = 0;
  *(undefined2 *)(in_ecx + 0x1ce0) = 0xd4;
  *(undefined4 *)(in_ecx + 0x1ce4) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1ce8) = in_esi;
  *(undefined1 *)(in_ecx + 0x1cec) = uVar1;
  *(undefined1 *)(in_ecx + 0x1ced) = uVar2;
  *(undefined4 *)(in_ecx + 0x1cf0) = 0;
  *(undefined4 *)(in_ecx + 0x1cf4) = 0;
  *(undefined2 *)(in_ecx + 0x1cf8) = 0xd5;
  *(undefined4 *)(in_ecx + 0x1cfc) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1d00) = in_esi;
  *(undefined1 *)(in_ecx + 0x1d04) = uVar1;
  *(undefined1 *)(in_ecx + 0x1d05) = uVar2;
  *(undefined4 *)(in_ecx + 0x1d08) = 0;
  *(undefined4 *)(in_ecx + 0x1d0c) = 0;
  *(undefined2 *)(in_ecx + 0x1d10) = 0xd6;
  *(undefined4 *)(in_ecx + 0x1d14) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1d18) = in_esi;
  *(undefined1 *)(in_ecx + 0x1d1c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1d1d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1d20) = 0;
  *(undefined4 *)(in_ecx + 0x1d24) = 0;
  *(undefined2 *)(in_ecx + 0x1d28) = 0xd7;
  *(undefined4 *)(in_ecx + 0x1d2c) = 0x40000;
  *(undefined4 *)(in_ecx + 0x1d30) = in_esi;
  *(undefined1 *)(in_ecx + 0x1d34) = uVar1;
  *(undefined1 *)(in_ecx + 0x1d35) = uVar2;
  *(undefined4 *)(in_ecx + 0x1d38) = 0;
  *(undefined4 *)(in_ecx + 0x1d3c) = 0;
  *(undefined2 *)(in_ecx + 0x1d40) = 0xd8;
  *(undefined4 *)(in_ecx + 0x1d44) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1d48) = in_esi;
  *(undefined1 *)(in_ecx + 0x1d4c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1d4d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1d50) = 0;
  *(undefined4 *)(in_ecx + 0x1d54) = 0;
  *(undefined2 *)(in_ecx + 0x1d58) = 0xd9;
  *(undefined4 *)(in_ecx + 0x1d5c) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1d60) = in_esi;
  *(undefined1 *)(in_ecx + 0x1d64) = uVar1;
  *(undefined1 *)(in_ecx + 0x1d65) = uVar2;
  *(undefined4 *)(in_ecx + 0x1d68) = 0;
  *(undefined4 *)(in_ecx + 0x1d6c) = 0;
  *(undefined2 *)(in_ecx + 0x1d70) = 0xda;
  *(undefined4 *)(in_ecx + 0x1d74) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1d78) = in_esi;
  *(undefined1 *)(in_ecx + 0x1d7c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1d7d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1d80) = 0;
  *(undefined4 *)(in_ecx + 0x1d84) = 0;
  *(undefined2 *)(in_ecx + 0x1d88) = 0x183;
  *(undefined4 *)(in_ecx + 0x1d8c) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1d90) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1d94) = uVar1;
  *(undefined1 *)(in_ecx + 0x1d95) = uVar2;
  *(undefined4 *)(in_ecx + 0x1d98) = 0;
  *(undefined4 *)(in_ecx + 0x1d9c) = 0;
  *(undefined2 *)(in_ecx + 0x1da0) = 0xdc;
  *(undefined4 *)(in_ecx + 0x1da4) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1da8) = in_ebx;
  *(undefined1 *)(in_ecx + 0x1dac) = uVar1;
  *(undefined1 *)(in_ecx + 0x1dad) = uVar2;
  *(undefined4 *)(in_ecx + 0x1db0) = 0;
  *(undefined4 *)(in_ecx + 0x1db4) = 0;
  *(undefined2 *)(in_ecx + 0x1db8) = 0xdd;
  *(undefined4 *)(in_ecx + 0x1dbc) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1dc0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1dc4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1dc5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1dc8) = 0;
  *(undefined4 *)(in_ecx + 0x1dcc) = 0;
  *(undefined2 *)(in_ecx + 0x1dd0) = 0xde;
  *(undefined4 *)(in_ecx + 0x1dd4) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1dd8) = in_esi;
  *(undefined1 *)(in_ecx + 0x1ddc) = uVar1;
  *(undefined1 *)(in_ecx + 0x1ddd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1de0) = 0;
  *(undefined4 *)(in_ecx + 0x1de4) = 0;
  *(undefined2 *)(in_ecx + 0x1de8) = 0xdf;
  *(undefined4 *)(in_ecx + 0x1dec) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1df0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1df4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1df5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1df8) = 0;
  *(undefined4 *)(in_ecx + 0x1dfc) = 0;
  *(undefined2 *)(in_ecx + 0x1e00) = 0xe0;
  *(undefined4 *)(in_ecx + 0x1e04) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1e08) = in_esi;
  *(undefined1 *)(in_ecx + 0x1e0c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1e0d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1e10) = 0;
  *(undefined4 *)(in_ecx + 0x1e14) = 0;
  *(undefined2 *)(in_ecx + 0x1e18) = 0xe1;
  *(undefined4 *)(in_ecx + 0x1e1c) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1e20) = in_esi;
  *(undefined1 *)(in_ecx + 0x1e24) = uVar1;
  *(undefined1 *)(in_ecx + 0x1e25) = uVar2;
  *(undefined4 *)(in_ecx + 0x1e28) = 0;
  *(undefined4 *)(in_ecx + 0x1e2c) = 0;
  *(undefined2 *)(in_ecx + 0x1e30) = 0xe2;
  *(undefined4 *)(in_ecx + 0x1e34) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1e38) = in_esi;
  *(undefined1 *)(in_ecx + 0x1e3c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1e3d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1e40) = 0;
  *(undefined4 *)(in_ecx + 0x1e44) = 0;
  *(undefined2 *)(in_ecx + 0x1e48) = 0xe3;
  *(undefined4 *)(in_ecx + 0x1e4c) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1e50) = in_esi;
  *(undefined1 *)(in_ecx + 0x1e54) = uVar1;
  *(undefined1 *)(in_ecx + 0x1e55) = uVar2;
  *(undefined4 *)(in_ecx + 0x1e58) = 0;
  *(undefined4 *)(in_ecx + 0x1e5c) = 0;
  *(undefined2 *)(in_ecx + 0x1e60) = 0xe4;
  *(undefined4 *)(in_ecx + 0x1e64) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1e68) = in_esi;
  *(undefined1 *)(in_ecx + 0x1e6c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1e6d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1e70) = 0;
  *(undefined4 *)(in_ecx + 0x1e74) = 0;
  *(undefined2 *)(in_ecx + 0x1e78) = 0xe5;
  *(undefined4 *)(in_ecx + 0x1e7c) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1e80) = in_esi;
  *(undefined1 *)(in_ecx + 0x1e84) = uVar1;
  *(undefined1 *)(in_ecx + 0x1e85) = uVar2;
  *(undefined4 *)(in_ecx + 0x1e88) = 0;
  *(undefined4 *)(in_ecx + 0x1e8c) = 0;
  *(undefined2 *)(in_ecx + 0x1e90) = 0xe6;
  *(undefined4 *)(in_ecx + 0x1e94) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1e98) = in_esi;
  *(undefined1 *)(in_ecx + 0x1e9c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1e9d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1ea0) = 0;
  *(undefined4 *)(in_ecx + 0x1ea4) = 0;
  *(undefined2 *)(in_ecx + 0x1ea8) = 0xe7;
  *(undefined4 *)(in_ecx + 0x1eac) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1eb0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1eb4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1eb5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1eb8) = 0;
  *(undefined4 *)(in_ecx + 0x1ebc) = 0;
  *(undefined2 *)(in_ecx + 0x1ec0) = 0xe8;
  *(undefined4 *)(in_ecx + 0x1ec4) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1ec8) = in_esi;
  *(undefined1 *)(in_ecx + 0x1ecc) = uVar1;
  *(undefined1 *)(in_ecx + 0x1ecd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1ed0) = 0;
  *(undefined4 *)(in_ecx + 0x1ed4) = 0;
  *(undefined2 *)(in_ecx + 0x1ed8) = 0xe9;
  *(undefined4 *)(in_ecx + 0x1edc) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1ee0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1ee4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1ee5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1ee8) = 0;
  *(undefined4 *)(in_ecx + 0x1eec) = 0;
  *(undefined2 *)(in_ecx + 0x1ef0) = 0xea;
  *(undefined4 *)(in_ecx + 0x1ef4) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1ef8) = in_esi;
  *(undefined1 *)(in_ecx + 0x1efc) = uVar1;
  *(undefined1 *)(in_ecx + 0x1efd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1f00) = 0;
  *(undefined4 *)(in_ecx + 0x1f04) = 0;
  *(undefined2 *)(in_ecx + 0x1f08) = 0xeb;
  *(undefined4 *)(in_ecx + 0x1f0c) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1f10) = in_esi;
  *(undefined1 *)(in_ecx + 0x1f14) = uVar1;
  *(undefined1 *)(in_ecx + 0x1f15) = uVar2;
  *(undefined4 *)(in_ecx + 0x1f18) = 0;
  *(undefined4 *)(in_ecx + 0x1f1c) = 0;
  *(undefined2 *)(in_ecx + 0x1f20) = 0xec;
  *(undefined4 *)(in_ecx + 0x1f24) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1f28) = in_esi;
  *(undefined1 *)(in_ecx + 0x1f2c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1f2d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1f30) = 0;
  *(undefined4 *)(in_ecx + 0x1f34) = 0;
  *(undefined2 *)(in_ecx + 0x1f38) = 0xed;
  *(undefined4 *)(in_ecx + 0x1f3c) = 0x80000;
  *(undefined4 *)(in_ecx + 8000) = in_esi;
  *(undefined1 *)(in_ecx + 0x1f44) = uVar1;
  *(undefined1 *)(in_ecx + 0x1f45) = uVar2;
  *(undefined4 *)(in_ecx + 0x1f48) = 0;
  *(undefined4 *)(in_ecx + 0x1f4c) = 0;
  *(undefined2 *)(in_ecx + 0x1f50) = 0xee;
  *(undefined4 *)(in_ecx + 0x1f54) = 0x80000;
  *(undefined4 *)(in_ecx + 0x1f58) = in_esi;
  *(undefined1 *)(in_ecx + 0x1f5c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1f5d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1f60) = 0;
  *(undefined4 *)(in_ecx + 0x1f64) = 0;
  *(undefined2 *)(in_ecx + 0x1f68) = 0x14d;
  *(undefined4 *)(in_ecx + 0x1f6c) = 0x100000;
  *(undefined4 *)(in_ecx + 0x1f70) = in_esi;
  *(undefined1 *)(in_ecx + 0x1f74) = uVar1;
  *(undefined1 *)(in_ecx + 0x1f75) = uVar2;
  *(undefined4 *)(in_ecx + 0x1f78) = 0;
  *(undefined4 *)(in_ecx + 0x1f7c) = 0;
  *(undefined2 *)(in_ecx + 0x1f80) = 0x144;
  *(undefined4 *)(in_ecx + 0x1f84) = 0x100000;
  *(undefined4 *)(in_ecx + 0x1f88) = in_esi;
  *(undefined1 *)(in_ecx + 0x1f8c) = uVar1;
  *(undefined1 *)(in_ecx + 0x1f8d) = uVar2;
  *(undefined4 *)(in_ecx + 0x1f90) = 0;
  *(undefined4 *)(in_ecx + 0x1f94) = 0;
  *(undefined2 *)(in_ecx + 0x1f98) = 0x14e;
  *(undefined4 *)(in_ecx + 0x1f9c) = 0x100000;
  *(undefined4 *)(in_ecx + 0x1fa0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1fa4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1fa5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1fa8) = 0;
  *(undefined4 *)(in_ecx + 0x1fac) = 0;
  *(undefined2 *)(in_ecx + 0x1fb0) = 0x14f;
  *(undefined4 *)(in_ecx + 0x1fb4) = 0x100000;
  *(undefined4 *)(in_ecx + 0x1fb8) = in_esi;
  *(undefined1 *)(in_ecx + 0x1fbc) = uVar1;
  *(undefined1 *)(in_ecx + 0x1fbd) = uVar2;
  *(undefined4 *)(in_ecx + 0x1fc0) = 0;
  *(undefined4 *)(in_ecx + 0x1fc4) = 0;
  *(undefined2 *)(in_ecx + 0x1fc8) = 0x150;
  *(undefined4 *)(in_ecx + 0x1fcc) = 0x100000;
  *(undefined4 *)(in_ecx + 0x1fd0) = in_esi;
  *(undefined1 *)(in_ecx + 0x1fd4) = uVar1;
  *(undefined1 *)(in_ecx + 0x1fd5) = uVar2;
  *(undefined4 *)(in_ecx + 0x1fd8) = 0;
  *(undefined4 *)(in_ecx + 0x1fdc) = 0;
  *(undefined2 *)(in_ecx + 0x2028) = 0x55;
  *(undefined4 *)(in_ecx + 0x202c) = 0x100000;
  *(undefined4 *)(in_ecx + 0x2030) = in_esi;
  *(undefined1 *)(in_ecx + 0x2034) = uVar1;
  *(undefined1 *)(in_ecx + 0x2035) = uVar2;
  *(undefined4 *)(in_ecx + 0x2038) = 0;
  *(undefined4 *)(in_ecx + 0x203c) = 0;
  *(undefined2 *)(in_ecx + 0x1fe0) = 0x151;
  *(undefined4 *)(in_ecx + 0x1fe4) = 0x100000;
  *(undefined4 *)(in_ecx + 0x1fe8) = in_esi;
  *(undefined1 *)(in_ecx + 0x1fec) = uVar1;
  *(undefined1 *)(in_ecx + 0x1fed) = uVar2;
  *(undefined4 *)(in_ecx + 0x1ff0) = 0;
  *(undefined4 *)(in_ecx + 0x1ff4) = 0;
  *(undefined2 *)(in_ecx + 0x1ff8) = 0x142;
  *(undefined4 *)(in_ecx + 0x1ffc) = 0x100000;
  *(undefined4 *)(in_ecx + 0x2000) = in_esi;
  *(undefined1 *)(in_ecx + 0x2004) = uVar1;
  *(undefined1 *)(in_ecx + 0x2005) = uVar2;
  *(undefined4 *)(in_ecx + 0x2008) = 0;
  *(undefined4 *)(in_ecx + 0x200c) = 0;
  *(undefined2 *)(in_ecx + 0x2010) = 0x14b;
  *(undefined4 *)(in_ecx + 0x2014) = 0x100000;
  *(undefined4 *)(in_ecx + 0x2018) = in_esi;
  *(undefined1 *)(in_ecx + 0x201c) = uVar1;
  *(undefined1 *)(in_ecx + 0x201d) = uVar2;
  *(undefined4 *)(in_ecx + 0x2020) = 0;
  *(undefined4 *)(in_ecx + 0x2024) = 0;
  *(undefined2 *)(in_ecx + 0x810) = 0x4b;
  *(undefined4 *)(in_ecx + 0x814) = 0x200000;
  *(undefined4 *)(in_ecx + 0x818) = in_edx;
  *(undefined1 *)(in_ecx + 0x81c) = uVar1;
  *(undefined1 *)(in_ecx + 0x81d) = uVar2;
  *(undefined4 *)(in_ecx + 0x820) = in_edx;
  *(undefined4 *)(in_ecx + 0x824) = 0;
  *(undefined2 *)(in_ecx + 0x2118) = (undefined2)in_eax;
  *(undefined4 *)(in_ecx + 0x211c) = 0x200000;
  *(undefined4 *)(in_ecx + 0x2120) = in_ebx;
  *(undefined1 *)(in_ecx + 0x2124) = uVar1;
  *(undefined1 *)(in_ecx + 0x2125) = uVar2;
  *(gen_code32 *)(in_ecx + 0x2128) = ((code *)REFP(0x44e040));
  *(undefined4 *)(in_ecx + 0x212c) = 0;
  return 0;
}

/* ref: FUN_00452f50 */
byte F_00452f50(unsigned int gen_a0)
{
  GEN_ENTER(0x452f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined * this_00;
  undefined * this_01;
  uint uVar6;
  undefined * this_02;
  undefined * this_03;
  undefined * puVar7;
  bool bVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_02 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x38))))(*(int * PTR32 *)((int)this + 4))));
  this_03 = (undefined *)F_00763050(uVar6,4);
  if (this_03 == (undefined *)0x0) {
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  bVar2 = F_00a34970(this_00,0x101);
  if (bVar2 != 0) {
    uVar6 = F_0044e570(this_02,(uint)(*(int *)((int)this_01 + 0x718) == 0));
    F_004487a0(this_01,0,0,uVar6);
  }
  bVar3 = F_00a34970(this_00,0x102);
  if (bVar3 != 0) {
    uVar6 = F_0044e570(this_02,(*(int *)((int)this_01 + 0x718) != 0) - 1);
    F_004487a0(this_01,0,0,uVar6);
  }
  bVar4 = F_00a34970(this_00,0x103);
  if (bVar4 != 0) {
    F_004487a0(this_01,1,0,&REFG(undefined * PTR32, 0x12fd328));
  }
  bVar5 = F_00a34970(this_00,0x104);
  if (bVar5 != 0) {
    F_004487a0(this_01,2,0,&REFG(undefined * PTR32, 0x12fd328));
  }
  bVar8 = bVar5 != 0 || (bVar4 != 0 || (bVar3 != 0 || bVar2 != 0));
  bVar2 = F_00a34970(this_00,0x105);
  if (bVar2 != 0) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x120))))
                      (*(int * PTR32 *)((int)this + 4),(uint)(5 < *(int *)((int)this_01 + 0x718)));
    if (-1 < (int)uVar6) {
      F_004487a0(this_01,6,uVar6,&REFG(undefined * PTR32, 0x12fd328));
      bVar8 = true;
    }
  }
  bVar2 = F_00a34970(this_00,0x106);
  if (bVar2 != 0) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x120))))
                      (*(int * PTR32 *)((int)this + 4),(*(int *)((int)this_01 + 0x718) < 6) - 1);
    if (-1 < (int)uVar6) {
      F_004487a0(this_01,6,uVar6,&REFG(undefined * PTR32, 0x12fd328));
      bVar8 = true;
    }
  }
  iVar9 = 0x107;
  do {
    bVar2 = F_00a34970(this_00,iVar9);
    if (bVar2 != 0) {
      if (*(int *)((int)this_01 + 0x770) == -2) {
        *(undefined4 *)((int)this_01 + 0x770) = *(undefined4 *)((int)this_01 + 0x718);
        uVar6 = F_00abde80(this_01);
        F_0042ccf0((undefined *)((int)this_01 + 0x774),uVar6);
        F_0042ccf0((undefined *)((int)this_01 + 0x7c8),(int)this_01 + 0x71c);
      }
      uVar6 = F_0042ce40(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10903c4),iVar9 + -0x106);
      bVar2 = F_00abe720(this_01,uVar6);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      if (bVar2 == 0) {
        *(undefined4 *)((int)this_01 + 0x770) = 0xfffffffe;
      }
      else {
        *(int *)((int)this_01 + 0x718) = iVar9 + -0x101;
      }
      bVar8 = true;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10f);
  bVar2 = F_00a34970(this_00,0x111);
  if (bVar2 != 0) {
    if (*(int *)((int)this_01 + 0x770) == -2) {
      *(undefined4 *)((int)this_01 + 0x770) = *(undefined4 *)((int)this_01 + 0x718);
      uVar6 = F_00abde80(this_01);
      F_0042ccf0((undefined *)((int)this_01 + 0x774),uVar6);
      F_0042ccf0((undefined *)((int)this_01 + 0x7c8),(int)this_01 + 0x71c);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),(*(undefined * PTR32 (*)[1])REFP(0x10903f4)),REFG(undefined4, 0x108cc50));
    bVar2 = F_00abe720(this_01,((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    if (bVar2 == 0) {
      *(undefined4 *)((int)this_01 + 0x770) = 0xfffffffe;
    }
    else {
      *(undefined4 *)((int)this_01 + 0x718) = 5;
    }
    bVar8 = true;
  }
  bVar2 = F_00a34970(this_00,0x110);
  if (bVar2 != 0) {
    if (*(int *)((int)this_01 + 0x770) == -2) {
      *(undefined4 *)((int)this_01 + 0x770) = *(undefined4 *)((int)this_01 + 0x718);
      uVar6 = F_00abde80(this_01);
      F_0042ccf0((undefined *)((int)this_01 + 0x774),uVar6);
      F_0042ccf0((undefined *)((int)this_01 + 0x7c8),(int)this_01 + 0x71c);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),"/yell",REFG(undefined4, 0x108cc50));
    bVar2 = F_00abe720(this_01,((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    if (bVar2 == 0) {
      *(undefined4 *)((int)this_01 + 0x770) = 0xfffffffe;
    }
    else {
      *(undefined4 *)((int)this_01 + 0x718) = 3;
    }
    bVar8 = true;
  }
  bVar2 = F_00a34970(this_00,0x10f);
  if (bVar2 != 0) {
    if (*(int *)((int)this_01 + 0x770) == -2) {
      *(undefined4 *)((int)this_01 + 0x770) = *(undefined4 *)((int)this_01 + 0x718);
      uVar6 = F_00abde80(this_01);
      F_0042ccf0((undefined *)((int)this_01 + 0x774),uVar6);
      F_0042ccf0((undefined *)((int)this_01 + 0x7c8),(int)this_01 + 0x71c);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),"/shout",REFG(undefined4, 0x108cc50));
    bVar2 = F_00abe720(this_01,((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    if (bVar2 == 0) {
      *(undefined4 *)((int)this_01 + 0x770) = 0xfffffffe;
    }
    else {
      *(undefined4 *)((int)this_01 + 0x718) = 4;
    }
    bVar8 = true;
  }
  bVar1 = false;
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar2 = F_00559490(uVar6);
  if (bVar2 == 0) {
    bVar2 = F_00a34970(this_00,0xff);
    if (bVar2 != 0) {
      bVar8 = true;
    }
    bVar2 = F_00a34970(this_00,0x100);
    if (bVar2 == 0) goto LAB_004533df;
    F_0076afe0(this_03);
    bVar1 = true;
    bVar8 = true;
  }
  else {
LAB_004533df: ;
    if (bVar8 == false) goto LAB_0045344d;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x108d02d),REFG(undefined4, 0x108cc50));
  puVar7 = &REFG(undefined, 0x108ecf4);
  if (!bVar1) {
    puVar7 = &REFG(undefined, 0x108d02e);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)),puVar7,REFG(undefined4, 0x108cc50));
  F_0076b020(this_03,((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00a34300(this_00);
LAB_0045344d: ;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return bVar8;
}

/* ref: FUN_00453480 */
byte F_00453480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x453480u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  if (*(char *)(iVar1 + 0x660) == '\0') {
    return 1;
  }
  F_00481810((undefined *)(iVar1 + 0x650),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  return (*(int *)&gen_args[1]) != *(int *)(iVar1 + 0x654);
}

/* ref: Client::UI::Info::InfoProxyBlacklist::vf2 */
uint F_004534c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4534c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  undefined * pIVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x10);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0xe)));
  if ((uVar2 != 0) && (piVar1 != (int *)0x0)) {
    (*(uint *)(gen_frame + 0xc)) = 0;
    if (*(int *)(this + 8) != 0) {
      pIVar3 = this + 0x10;
LAB_00453530: ;
      if ((*(int *)pIVar3 != *param_1) || (*(int *)(pIVar3 + 4) != param_1[1])) goto LAB_0045353e;
      uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)),param_1 + 2,REFG(undefined4, 0x108cc50));
      F_004842c0(this + 0x650,&(*(int *)(gen_frame + 0x10)),uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      if ((*(int *)(gen_frame + 0x10)) != *(int *)(this + 0x654)) {
        F_00484060(this + 0x650,&(*(int *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x10)));
      }
      uVar4 = (*(uint *)(gen_frame + 0xc)) + 1;
      if (uVar4 < *(uint *)(this + 8)) {
        pIVar3 = this + uVar4 * 8 + 0x10;
        (*(int *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0xc)) - uVar4;
        do {
          F_00431250(piVar1,(*(int *)(gen_frame + 0x10)) + uVar4,*(undefined4 *)(piVar1[8] + uVar4 * 4),0,1,0);
          *(undefined4 *)(pIVar3 + -8) = *(undefined4 *)pIVar3;
          *(undefined4 *)(pIVar3 + -4) = *(undefined4 *)(pIVar3 + 4);
          uVar4 = uVar4 + 1;
          pIVar3 = pIVar3 + 8;
        } while (uVar4 < *(uint *)(this + 8));
      }
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
    }
LAB_004535e5: ;
    piVar1 = *(int * PTR32 *)(uVar2 + 0x20);
    if (*piVar1 != *(int *)(this + 8)) {
      *piVar1 = *(int *)(this + 8);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)piVar1;
LAB_0045353e: ;
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
  pIVar3 = pIVar3 + 8;
  if (*(uint *)(this + 8) <= (*(uint *)(gen_frame + 0xc))) goto LAB_004535e5;
  goto LAB_00453530;
}

/* ref: FUN_00453610 */
uint F_00453610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x453610u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  int * piVar7;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int * piVar8;
  char cVar9;
  
  piVar8 = (*(int * PTR32 *)&gen_args[1]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48e))) = 0;
  iVar1 = (*(int * PTR32 *)&gen_args[1])[1];
  if (*(*(int * PTR32 *)&gen_args[1]) == 0 && iVar1 == 0) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]));
    return uVar6;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = *(*(int * PTR32 *)&gen_args[1]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (*(int * PTR32 *)&gen_args[1])[2];
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(int * PTR32 *)&gen_args[1])[3];
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = *((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x22)));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x31))) = *((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x23)));
  *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32))) = (char)(*(int * PTR32 *)&gen_args[1])[9];
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x33))) = *((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x25)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = (*(int * PTR32 *)&gen_args[1])[6];
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = (*(int * PTR32 *)&gen_args[1])[7];
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) = *((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x2a)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 0) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *(undefined4 *)(uVar6 + 0x3c);
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = *(*(int * PTR32 *)&gen_args[1]);
    *(int *)(iVar1 + 0x24) = (*(int * PTR32 *)&gen_args[1])[1];
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x494)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 1;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    ((code *)*(gen_code32 *)(*(int *)puVar3[2] + 4))((int *)puVar3[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  uVar6 = *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) - 1;
  gen_piece_set(&(*(int * PTR32 *)&gen_args[1]), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)puVar2) >> 8)));
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 0: ;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = piVar8[4];
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = piVar8[5];
    F_00441f60(piVar8[4],piVar8[5]);
    F_00441cd0();
    F_00441ba0(1);
    cVar9 = *(char *)((int)piVar8 + 0x22);
    uVar6 = CONCAT31(extraout_var,cVar9);
    if ((cVar9 == '\x01') || (cVar9 == '\x02')) {
      piVar7 = (int *)F_00436ef0((*(undefined * PTR32 *)&gen_args[0]));
      uVar6 = 0;
      if (piVar7 != (int *)0x0) {
        uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x10))(piVar7);
      }
    }
    if (*(char *)((int)piVar8 + 0x22) != '\x03') {
      return uVar6;
    }
    cVar9 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x33)));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),cVar9)));
    uVar4 = (*(int * PTR32 *)&gen_args[1]);
    while (cVar9 != '\0') {
      F_00436e50(uVar4);
      cVar9 = cVar9 + -1;
      gen_piece_set(&(*(int * PTR32 *)&gen_args[1]), 1, 3, (unsigned long long)((undefined3)((uint)uVar4 >> 8)));
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),cVar9)));
      uVar4 = (*(int * PTR32 *)&gen_args[1]);
    }
    goto LAB_004537c2;
  case 1: ;
    F_00441f60(piVar8[4],piVar8[5]);
    break;
  case 2: ;
    bVar5 = F_00441cd0();
    return CONCAT31(extraout_var_00,bVar5);
  case 3: ;
    F_00441f60(piVar8[4],piVar8[5]);
    F_00441cd0();
    cVar9 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x33)));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),cVar9)));
    uVar4 = (*(int * PTR32 *)&gen_args[1]);
    while (cVar9 != '\0') {
      F_00436e50(uVar4);
      cVar9 = cVar9 + -1;
      gen_piece_set(&(*(int * PTR32 *)&gen_args[1]), 1, 3, (unsigned long long)((undefined3)((uint)uVar4 >> 8)));
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),cVar9)));
      uVar4 = (*(int * PTR32 *)&gen_args[1]);
    }
LAB_004537c2: ;
    uVar6 = F_00a6e080(&REFG(undefined, 0x14a9e40),0x72,0,0);
    return uVar6;
  case 4: ;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = piVar8[4];
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = piVar8[5];
    F_00441cd0();
    cVar9 = *(char *)((int)piVar8 + 0x22);
    if ((cVar9 != '\x01') && (cVar9 != '\x02')) {
      return CONCAT31(extraout_var_01,cVar9);
    }
    break;
  default: ;
    goto switchD_004536f3_default;
  }
  piVar8 = (int *)F_00436ef0((*(undefined * PTR32 *)&gen_args[0]));
  uVar6 = 0;
  if (piVar8 != (int *)0x0) {
    uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x10))(piVar8);
  }
switchD_004536f3_default: ;
  return uVar6;
}

/* ref: FUN_00453830 */
unsigned int F_00453830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x453830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_1 == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
    (*(undefined1 *)(gen_frame + 0xc)) = 4;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return 0;
}

/* ref: FUN_00453890 */
uint F_00453890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x453890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  int * piVar5;
  undefined4 uVar6;
  
  uVar6 = 0x3f;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar3 = (int *)F_00763050(uVar2,uVar6);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  if (*(int *)(uVar2 + 0x48) == 0 && *(int *)(uVar2 + 0x4c) == 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 8) + 8))) == 0) {
      uVar6 = 0;
      uVar4 = 0;
    }
    else {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 0x18)));
      uVar6 = *puVar1;
      uVar4 = puVar1[1];
    }
    *(undefined4 *)(uVar2 + 0x48) = uVar6;
    *(undefined4 *)(uVar2 + 0x4c) = uVar4;
  }
  if ((param_1 == *(int *)(uVar2 + 0x48)) && (param_2 == *(int *)(uVar2 + 0x4c))) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    piVar3 = *(int * PTR32 *)((int)this + 0x494);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
    (*(undefined1 *)(gen_frame + 0xc)) = 5;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    piVar5 = (int *)*piVar3;
    if (piVar5 != piVar3) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)piVar5[2] + 4))((int *)piVar5[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar3);
      return uVar2;
    }
  }
  else if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
    if ((char)uVar2 != '\0') {
      F_00441b10();
      F_00441d60();
      uVar2 = F_0044da80(this);
    }
  }
  return uVar2;
}

/* ref: FUN_00453970 */
uint F_00453970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x453970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined2 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 uVar5;
  
  *(undefined1 *)((int)this + 0x33) = *(undefined1 *)(param_1 + 0x31);
  uVar1 = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)((int)this + 0x40) = uVar1;
  if (*(int *)((int)this + 0x10) == 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar4 + 0x3c);
  }
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2e))) = uVar1;
  }
  *(undefined2 *)((int)this + 0x42) = *(undefined2 *)(param_1 + 0x2c);
  uVar5 = 0x3f;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00763050(uVar4,uVar5);
  uVar4 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar4 = F_008d6bb0(this_00,param_1);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 2;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)puVar3[2] + 4))((int *)puVar3[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar4;
}

/* ref: FUN_00453a20 */
uint F_00453a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x453a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  *(undefined1 *)((int)this + 0x33) = *(undefined1 *)(param_1 + 0x38);
  uVar4 = 0x3f;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_008d6f10(this_00,param_1);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 3;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar3;
}

/* ref: FUN_00453aa0 */
unsigned int F_00453aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x453aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined1 *)((int)this + 0x7a) = 1;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 7;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00453af0 */
uint F_00453af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x453af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ushort * puVar6;
  undefined4 uVar7;
  
  uVar3 = param_1;
  *(char *)((int)this + 0x33) = (char)param_1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xd8))))
            (*(int * PTR32 *)((int)this + 4),0x1d4f6,1,0,*(byte *)((int)this + 0x31) + 0x19);
  uVar4 = F_00ab4190(param_1);
  uVar5 = 0;
  if (uVar4 != 0) {
    puVar6 = (ushort *)(uVar4 + 8);
    param_1 = 3;
    do {
      uVar5 = (uint)*puVar6;
      if (*puVar6 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xf0))))(*(int * PTR32 *)((int)this + 4),0xffffffff,uVar5);
        uVar5 = (uint)*puVar6;
        if (uVar5 == 1) {
          uVar7 = 0x74;
        }
        else if (uVar5 == 2) {
          uVar7 = 0x75;
        }
        else {
          uVar5 = uVar5 - 4;
          if (uVar5 != 0) goto LAB_00453b7a;
          uVar7 = 0x76;
        }
        uVar5 = F_00a6e080(&REFG(undefined, 0x14a9e40),uVar7,0,0);
      }
LAB_00453b7a: ;
      puVar6 = puVar6 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 8;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    uVar5 = ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar5;
}

/* ref: FUN_00453bd0 */
unsigned int F_00453bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x453bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 9;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00453c20 */
uint F_00453c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x453c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  *(undefined4 *)((int)this + 0x3c) = param_3;
  *(char *)((int)this + 0x31) = (char)param_1;
  *(undefined4 *)((int)this + 0x38) = param_2;
  uVar4 = 0x3f;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_0077cb50(this_00,param_2,param_3);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 6;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar3;
}

/* ref: FUN_00453cb0 */
unsigned int F_00453cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x453cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 10;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00453d00 */
unsigned int F_00453d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x453d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 0xb;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00453d50 */
unsigned int F_00453d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x453d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00453da0 */
unsigned int F_00453da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x453da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 0xd;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00453df0 */
unsigned int F_00453df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x453df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  (*(undefined1 *)(gen_frame + 0xc)) = 0xe;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 4))((int *)puVar2[2],&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00453e40 */
uint F_00453e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x453e40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * PTR32 * ppvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pvVar2 = (undefined *)F_0047bed0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(uint *)&gen_args[1]));
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 != pvVar1) {
    if ((*(undefined * PTR32 *)((int)pvVar2 + 0x14) <= (*(undefined * PTR32 *)&gen_args[2])) &&
       (((*(undefined * PTR32 *)&gen_args[2]) != *(undefined * PTR32 *)((int)pvVar2 + 0x14) || (*(uint *)((int)pvVar2 + 0x10) <= (*(uint *)&gen_args[1])))))
    {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_00453e7b;
    }
  }
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar1;
  ppvVar3 = &(*(undefined * PTR32 *)&gen_args[2]);
LAB_00453e7b: ;
  pvVar2 = *ppvVar3;
  if (pvVar2 != pvVar1) {
    pvVar2 = (undefined *)F_00481f10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)&gen_args[2]),pvVar2);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00453ea0 */
byte F_00453ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x453ea0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * PTR32 * ppvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pvVar2 = (undefined *)F_0047bed0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(uint *)&gen_args[1]));
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 != pvVar1) {
    if ((*(uint *)((int)pvVar2 + 0x14) <= (*(undefined * PTR32 *)&gen_args[2])) &&
       (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)*(uint *)((int)pvVar2 + 0x14) ||
        (*(uint *)((int)pvVar2 + 0x10) <= (*(uint *)&gen_args[1]))))) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_00453edb;
    }
  }
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar1;
  ppvVar3 = &(*(undefined * PTR32 *)&gen_args[2]);
LAB_00453edb: ;
  if (*ppvVar3 != pvVar1) {
    return *(byte *)((int)*ppvVar3 + 0x38);
  }
  return 0;
}

/* ref: FUN_00453f00 */
uint F_00453f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x453f00u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * PTR32 * ppvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pvVar2 = (undefined *)F_0047bed0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(uint *)&gen_args[1]));
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 != pvVar1) {
    if ((*(uint *)((int)pvVar2 + 0x14) <= (*(undefined * PTR32 *)&gen_args[2])) &&
       (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)*(uint *)((int)pvVar2 + 0x14) ||
        (*(uint *)((int)pvVar2 + 0x10) <= (*(uint *)&gen_args[1]))))) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_00453f3b;
    }
  }
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar1;
  ppvVar3 = &(*(undefined * PTR32 *)&gen_args[2]);
LAB_00453f3b: ;
  if (*ppvVar3 != pvVar1) {
    return (int)*ppvVar3 + 0x18;
  }
  return 0;
}

/* ref: FUN_00453fa0 */
unsigned int F_00453fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x453fa0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  
  if ((*(int *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      do {
        if (piVar2[2] == (*(int *)&gen_args[1])) break;
        piVar2 = (int *)*piVar2;
      } while (piVar2 != piVar1);
      if (piVar2 != piVar1) {
        return 0;
      }
    }
    F_00484770(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_00453fe0 */
uint F_00453fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x453fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  F_00c49908((int)this + 0x20,0xc,"ACQ.DAT");
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1091280));
  puVar1 = (undefined4 *)((int)this + 0x30);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  return (uint)this;
}

/* ref: FUN_00454060 */
uint F_00454060(unsigned int gen_a0)
{
  GEN_ENTER(0x454060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x48) = 0;
  uVar1 = F_00482650((undefined *)((int)this + 0x30));
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar1;
}

/* ref: Client::UI::Misc::AddonConfig::vf2 */
uint F_00454080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x454080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * puVar2;
  int * piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined * puVar8;
  undefined * puVar9;
  int * piVar10;
  float fVar11;
  
  if (*(int *)(this + 0x40) == 0) {
    return 0xffffffff;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  piVar1 = *(int * PTR32 *)(this + 0x3c);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  piVar10 = (int *)*piVar1;
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar1;
  if (piVar10 != piVar1) {
    do {
      uVar5 = F_0042a990(piVar10 + 3);
      F_00a4bc50(&(*(undefined * PTR32 *)(gen_frame + 0x4)),"n:%s\n",uVar5);
      iVar6 = piVar10[0x18];
      uVar5 = 0;
      if (piVar10[0x19] - iVar6 >> 3 != 0) {
        do {
          switch((unsigned int)(uintptr_t)(*(uint *)(iVar6 + uVar5 * 8) & 0xf)) {
          case 2: ;
            if ((*(byte *)(iVar6 + uVar5 * 8) & 0xf) == 0) {
              cVar4 = '\0';
            }
            else {
              cVar4 = *(char *)(iVar6 + 4 + uVar5 * 8);
            }
            F_00a4bc50(&(*(undefined * PTR32 *)(gen_frame + 0x4)),"b:%d\n",(uint)(cVar4 != '\0'));
            break;
          case 3: ;
            if ((*(byte *)(iVar6 + uVar5 * 8) & 0xf) == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined4 *)(iVar6 + 4 + uVar5 * 8);
            }
            F_00a4bc50(&(*(undefined * PTR32 *)(gen_frame + 0x4)),"i:%d\n",uVar7);
            break;
          case 4: ;
            if ((*(byte *)(iVar6 + uVar5 * 8) & 0xf) == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined4 *)(iVar6 + 4 + uVar5 * 8);
            }
            F_00a4bc50(&(*(undefined * PTR32 *)(gen_frame + 0x4)),"u:%u\n",uVar7);
            break;
          case 5: ;
            if ((*(byte *)(iVar6 + uVar5 * 8) & 0xf) == 0) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = *(float *)(iVar6 + 4 + uVar5 * 8);
            }
            (*(float *)(gen_frame + 0x18)) = fVar11;
            F_00a4bc50(&(*(undefined * PTR32 *)(gen_frame + 0x4)),"f:%f\n",(int)(ulonglong)gen_d2bits((double)fVar11),
                         (int)((ulonglong)gen_d2bits((double)fVar11) >> 0x20));
          }
          iVar6 = piVar10[0x18];
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)(piVar10[0x19] - iVar6 >> 3));
      }
      if (*(char *)((int)piVar10 + 0x71) == '\0') {
        piVar1 = (int *)piVar10[2];
        if (*(char *)((int)piVar1 + 0x71) == '\0') {
          cVar4 = *(char *)(*piVar1 + 0x71);
          piVar10 = piVar1;
          piVar1 = (int *)*piVar1;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar1 + 0x71);
            piVar10 = piVar1;
            piVar1 = (int *)*piVar1;
          }
        }
        else {
          cVar4 = *(char *)(piVar10[1] + 0x71);
          piVar3 = (int *)piVar10[1];
          piVar1 = piVar10;
          while ((piVar10 = piVar3, cVar4 == '\0' && (piVar1 == (int *)piVar10[2]))) {
            cVar4 = *(char *)(piVar10[1] + 0x71);
            piVar3 = (int *)piVar10[1];
            piVar1 = piVar10;
          }
        }
      }
    } while (piVar10 != (*(int * PTR32 *)(gen_frame + 0x14)));
  }
  puVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  puVar9 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  uVar5 = (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x4));
  if (uVar5 < 0x5000) {
    puVar8 = &REFG(undefined, 0x10e522d);
    if (uVar5 != 0) {
      puVar8 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    }
    F_00c46aa0(param_1,puVar8,uVar5);
    if (puVar9 != puVar2) {
      F_00c46e20(puVar9,puVar2,0);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = puVar9;
      puVar9 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    }
    if (puVar9 != (undefined *)0x0) {
      F_00406ad0(puVar9);
    }
    return param_2;
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) {
    F_00406ad0((*(undefined * PTR32 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00454290 */
uint F_00454290(unsigned int gen_a0)
{
  GEN_ENTER(0x454290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  char cVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int * piVar8;
  int * piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  *(undefined4 *)((int)this + 0x29c) = 0;
  if (*(int *)((int)this + 0x294) == 0) {
    do {
      uVar5 = F_00ab3c30(uVar11);
      pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x24));
      if (((uVar5 != 0) && (*(char *)(uVar5 + 0xb) != '\0')) && (*(char *)(uVar5 + 8) != '\0')) {
        puVar6 = (undefined4 *)F_004296a0(0x10,0,400);
        *puVar6 = *(undefined4 *)((int)pvVar3 + 0x290);
        puVar6[1] = *(undefined4 *)((int)pvVar3 + 0x290);
        puVar6[2] = *(undefined4 *)((int)pvVar3 + 0x290);
        *(undefined2 *)((int)puVar6 + 0xd) = 0;
        if (puVar6 + 3 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(uVar5 + 8);
        }
        F_00482f70((undefined *)((int)pvVar3 + 0x28c),((undefined1 *)(gen_frame + 0x4)),puVar6,0);
        if (*(char *)(uVar5 + 8) == '\f') {
          (*(int *)(gen_frame + 0x14)) = 0xd;
          F_00485190((undefined *)((int)pvVar3 + 0x28c),((undefined1 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x14)));
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x97);
  }
  piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar8 = (int *)0x0;
  if (piVar7 != (int *)0x0) {
    uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7);
    (*(int *)(gen_frame + 0x1c)) = (int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x30;
    piVar7 = (int *)(uVar11 + 0x980);
    (*(int *)(gen_frame + 0x14)) = 4;
    do {
      piVar8 = F_00c48350((undefined *)*piVar7,0,piVar7[-1] * 4);
      piVar7[-2] = 0;
      if (*(char *)piVar7[-0x1c6] != '\0') {
        piVar8 = ((int *)GEN_TOP(**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x290)));
        (*(int * PTR32 *)(gen_frame + 0x28)) = piVar8;
        if (piVar8 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x290)) {
          do {
            (*(int *)(gen_frame + 0x20)) = 0;
            do {
              iVar10 = 0;
              do {
                uVar11 = (uint)(ushort)(((ushort)((byte)iVar10 & 7) |
                                        (ushort)((byte)(*(int *)(gen_frame + 0x20)) & 7) << 3) << 7) |
                         *(byte *)((*(int * PTR32 *)(gen_frame + 0x28)) + 3) & 0x7f;
                puVar1 = ((uint *)GEN_TOP((*piVar7 + (uVar11 >> 5) * 4)));
                iVar10 = iVar10 + 1;
                *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
                piVar7[-2] = piVar7[-2] + 1;
              } while (iVar10 < 7);
              iVar10 = (*(int *)(gen_frame + 0x20)) + 1;
              (*(int *)(gen_frame + 0x20)) = iVar10;
            } while (iVar10 < 7);
            if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 0xe) == '\0') {
              piVar8 = (int *)(*(int * PTR32 *)(gen_frame + 0x28))[2];
              if (*(char *)((int)piVar8 + 0xe) == '\0') {
                cVar2 = *(char *)(*piVar8 + 0xe);
                piVar9 = (int *)*piVar8;
                while (cVar2 == '\0') {
                  cVar2 = *(char *)(*piVar9 + 0xe);
                  piVar8 = piVar9;
                  piVar9 = (int *)*piVar9;
                }
              }
              else {
                cVar2 = *(char *)((*(int * PTR32 *)(gen_frame + 0x28))[1] + 0xe);
                piVar4 = (int *)(*(int * PTR32 *)(gen_frame + 0x28))[1];
                piVar9 = (*(int * PTR32 *)(gen_frame + 0x28));
                while ((piVar8 = piVar4, cVar2 == '\0' && (piVar9 == (int *)piVar8[2]))) {
                  cVar2 = *(char *)(piVar8[1] + 0xe);
                  piVar4 = (int *)piVar8[1];
                  piVar9 = piVar8;
                }
              }
              (*(int * PTR32 *)(gen_frame + 0x28)) = piVar8;
            }
          } while ((*(int * PTR32 *)(gen_frame + 0x28)) != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x290));
        }
        (*(uint *)(gen_frame + 0x18)) = 0;
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x28));
        do {
          uVar11 = (*(uint *)(gen_frame + 0x18));
          if (*(char *)((*(int *)(gen_frame + 0x1c)) + (*(uint *)(gen_frame + 0x18))) != '\0') {
            piVar9 = (int *)F_00ab3c30((*(uint *)(gen_frame + 0x18)));
            (*(int * PTR32 *)(gen_frame + 0x8)) = piVar9;
            piVar8 = piVar9;
            if (((piVar9 != (int *)0x0) && (*(char *)((int)piVar9 + 0xb) != '\0')) &&
               ((char)piVar9[2] != '\0')) {
              (*(int *)(gen_frame + 0x20)) = 0;
              do {
                iVar10 = 1 << ((byte)(*(int *)(gen_frame + 0x20)) & 0x1f);
                (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x0;
                (*(int *)(gen_frame + 0x10)) = iVar10;
                do {
                  if (((*(byte *)((int)piVar9 + 9) & (byte)iVar10) != 0) &&
                     ((*(byte *)((int)piVar9 + 10) & (byte)(1 << ((byte)(*(int * PTR32 *)(gen_frame + 0x28)) & 0x1f))) != 0)) {
                    uVar12 = (uint)((byte)(*(int *)(gen_frame + 0x20)) & 7);
                    uVar11 = (uint)((byte)(*(int * PTR32 *)(gen_frame + 0x28)) & 7);
                    uVar5 = (uVar12 * 8 | uVar11) << 7 | *(byte *)(piVar9 + 2) & 0x7f;
                    puVar1 = ((uint *)GEN_TOP((*piVar7 + (uVar5 >> 5) * 4)));
                    *puVar1 = *puVar1 & ~(1 << ((byte)uVar5 & 0x1f));
                    piVar7[-2] = piVar7[-2] + -1;
                    if ((char)piVar9[2] == '\f') {
                      puVar1 = ((uint *)GEN_TOP((*piVar7 + (uVar12 * 8 | uVar11) * 0x10)));
                      *puVar1 = *puVar1 & 0xffffdfff;
                      piVar7[-2] = piVar7[-2] + -1;
                    }
                  }
                  piVar8 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 1);
                  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar8;
                } while ((int)piVar8 < 7);
                iVar10 = (*(int *)(gen_frame + 0x20)) + 1;
                (*(int *)(gen_frame + 0x20)) = iVar10;
                uVar11 = (*(uint *)(gen_frame + 0x18));
              } while (iVar10 < 7);
            }
          }
          (*(uint *)(gen_frame + 0x18)) = uVar11 + 1;
        } while (uVar11 + 1 < 0x97);
      }
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 0x97;
      piVar7 = piVar7 + 0x1d5;
      iVar10 = (*(int *)(gen_frame + 0x14)) + -1;
      (*(int *)(gen_frame + 0x14)) = iVar10;
    } while (iVar10 != 0);
  }
  return (uint)piVar8;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf3 */
byte F_004545c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4545c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined * pLVar6;
  uint local_c;
  
  uVar4 = 0;
  local_c = 0;
  while( true ) {
    uVar1 = *(ushort *)(uVar4 + param_2);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
    if (*(short *)(uVar4 + 2 + param_2) == (short)uVar2) {
      puVar5 = (undefined4 *)(uVar4 + 0x10 + param_2);
      pLVar6 = this + (uint)uVar1 * 0x97 + 0x30;
      for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pLVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        pLVar6 = pLVar6 + 4;
      }
      *(undefined2 *)pLVar6 = *(undefined2 *)puVar5;
      pLVar6[2] = *(undefined *)((int)puVar5 + 2);
    }
    else {
      F_004461b0(this,(uint)uVar1);
    }
    uVar4 = uVar4 + 0x10 + *(int *)(uVar4 + 4 + param_2);
    if (param_3 < uVar4) break;
    local_c = local_c + 1;
    if (3 < local_c) {
      F_00454290(this);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00454650 */
uint F_00454650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x454650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x7c0];
  undefined * this_00;
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte * pbVar5;
  float * pfVar6;
  undefined * pvVar7;
  undefined * this_01;
  int * piVar8;
  uint uVar9;
  undefined4 extraout_ECX = 0;
  byte * pbVar10;
  char * pcVar11;
  undefined4 uVar12;
  
  piVar8 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0x7b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7bc);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(byte * PTR32 *)(gen_frame + 0x28)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1379694);
  pbVar10 = param_1;
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    if (REFG(int, 0x14ab5bc) != -0x20000000) {
      uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18),REFG(int, 0x14ab5bc));
      (*(uint *)(gen_frame + 0x1c)) = uVar4;
    }
    uVar4 = F_00a64520(&REFG(undefined, 0x14a9a18),piVar8);
    this_00 = (undefined *)((int)this + 0x10);
    (*(uint *)(gen_frame + 0x18)) = uVar4;
    F_0042aca0(this_00);
    pbVar10 = (byte *)((int)this + 100);
    F_0042aca0(pbVar10);
    pbVar5 = (byte *)F_0042a990((*(byte * PTR32 *)(gen_frame + 0x28)));
    bVar3 = *pbVar5;
    uVar12 = CONCAT31((int3)((uint)extraout_ECX >> 8),bVar3);
    (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar5;
    while (bVar3 != 0) {
      if ((char)uVar12 == '<') {
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte * PTR32 *)(gen_frame + 0x28));
        uVar4 = F_0043a5d0((*(undefined * PTR32 *)(gen_frame + 0x20)),&(*(byte * PTR32 *)(gen_frame + 0x28)));
        pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x28));
        pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x20));
        uVar12 = REFG(undefined4, 0x1379c90);
        iVar2 = *(int *)&REFG(undefined2, 0x1379c78);
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x10));
        if (uVar4 == 0) {
          for (; pbVar10 < pbVar5; pbVar10 = pbVar10 + 1) {
            F_0042d160(this_00,(uint)*pbVar10);
          }
        }
        else if (uVar4 == 0x2b) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
          pcVar11 = "<a href=\"n:%s\"></a>";
override_prt_454774_205f6155: ;
          uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x764)),pcVar11,uVar4);
LAB_0045477c: ;
          F_0042d4d0(this_00,uVar4);
          F_0042c880(((undefined1 *)(gen_frame + 0x764)));
        }
        else if (uVar4 - 0x23 < 8) {
          uVar4 = F_00ae0850(&REFG(undefined, 0x1336e40),uVar4 - 0x23);
          if (uVar4 != 0) {
            uVar4 = uVar4 + 0x10;
            pcVar11 = "<a href=\"n:%s\"></a>";
            goto override_prt_454774_205f6155;
          }
        }
        else if (uVar4 - 0x2c < 7) {
          uVar12 = 3;
          uVar9 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x1b0) + 0x48))))
                            (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x1b0));
          uVar9 = F_00763050(uVar9,uVar12);
          if (uVar9 != 0) {
            uVar4 = F_00770440(uVar9,uVar4 - 0x2b);
            uVar4 = F_00ae0850(&REFG(undefined, 0x1336e40),uVar4);
            if (uVar4 != 0) {
              uVar4 = uVar4 + 0x10;
              pcVar11 = "<a href=\"n:%s\"></a>";
              goto override_prt_454774_205f6155;
            }
          }
        }
        else {
          switch((unsigned int)(uintptr_t)(uVar4)) {
          case 0x140: ;
            this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x1b0) + 0x38))))
                                        (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x1b0))));
            uVar4 = F_0044e520(this_01);
            F_0042ccf0((undefined *)((int)pvVar7 + 0xb8),uVar4);
            if (**(char * PTR32 *)((int)pvVar7 + 0xb8) != '\0') {
              uVar4 = F_0042a990((int)pvVar7 + 0xb8);
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x2c)),"<a href=\"n:%s\"></a>",uVar4);
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
            }
            break;
          default: ;
            if (uVar4 - 0x43 < 0x10) {
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x128)),"<a href=\"s:%d\"></a>",uVar4 - 0x43);
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x128)));
            }
            else {
              piVar8 = (int *)F_0044e770((*(undefined * PTR32 *)(gen_frame + 0x20)),uVar4);
              if (piVar8 != (int *)0x0) {
                uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 4))(piVar8);
                if (uVar4 == 1) {
                  uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
                  uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x224)),"<a href=\"n:%s\"></a>",uVar4);
                  F_0042d4d0(this_00,uVar4);
                  F_0042c880(((undefined1 *)(gen_frame + 0x224)));
                }
                else {
                  uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xa8))(piVar8);
                  if (uVar4 == 0) {
                    uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
                    uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x5c0)),"<a href=\"b:%s\"></a>",uVar4);
                    F_0042d4d0(this_00,uVar4);
                    F_0042c880(((undefined1 *)(gen_frame + 0x5c0)));
                  }
                  else {
                    uVar4 = F_0043bfd0(piVar8);
                    uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x278)),"<a href=\"o:%d\"></a>",uVar4);
                    F_0042d4d0(this_00,uVar4);
                    F_0042c880(((undefined1 *)(gen_frame + 0x278)));
                  }
                }
              }
            }
            break;
          case 0x144: ;
            uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x80)),"%d/%d",piVar8[0x5a4],piVar8[0x5a5]);
            F_0042d4d0(this_00,uVar4);
            F_0042c880(((undefined1 *)(gen_frame + 0x80)));
            break;
          case 0x146: ;
            uVar4 = F_0046e6b0(piVar8[0x5a4],piVar8[0x5a5]);
            uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x3c8)),&REFG(undefined, 0x108f4cc),uVar4);
            F_0042d4d0(this_00,uVar4);
            F_0042c880(((undefined1 *)(gen_frame + 0x3c8)));
            break;
          case 0x148: ;
            uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x710)),"%d/%d",piVar8[0x5a6],piVar8[0x5a7]);
            F_0042d4d0(this_00,uVar4);
            F_0042c880(((undefined1 *)(gen_frame + 0x710)));
            break;
          case 0x14a: ;
            uVar4 = F_0046e6b0(piVar8[0x5a6],piVar8[0x5a7]);
            uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x6bc)),&REFG(undefined, 0x108f4dc),uVar4);
            F_0042d4d0(this_00,uVar4);
            F_0042c880(((undefined1 *)(gen_frame + 0x6bc)));
            break;
          case 0x14c: ;
            uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x668)),&REFG(undefined, 0x108f4e4),(uint)*(ushort *)(piVar8 + 0x5a8));
            F_0042d4d0(this_00,uVar4);
            F_0042c880(((undefined1 *)(gen_frame + 0x668)));
            break;
          case 0x14e: ;
            if ((*(uint *)(gen_frame + 0x1c)) != 0) {
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x320)),"%d/%d",*(undefined4 *)((*(uint *)(gen_frame + 0x1c)) + 0x1690),
                                   *(undefined4 *)((*(uint *)(gen_frame + 0x1c)) + 0x1694));
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x320)));
            }
            break;
          case 0x150: ;
            if ((*(uint *)(gen_frame + 0x1c)) != 0) {
              uVar4 = F_0046e6b0(*(uint *)((*(uint *)(gen_frame + 0x1c)) + 0x1690),*(undefined4 *)((*(uint *)(gen_frame + 0x1c)) + 0x1694)
                                  );
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x17c)),&REFG(undefined, 0x108f4f0),uVar4);
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x17c)));
            }
            break;
          case 0x152: ;
            if ((*(uint *)(gen_frame + 0x1c)) != 0) {
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x614)),"%d/%d",*(undefined4 *)((*(uint *)(gen_frame + 0x1c)) + 0x1698),
                                   *(undefined4 *)((*(uint *)(gen_frame + 0x1c)) + 0x169c));
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x614)));
            }
            break;
          case 0x154: ;
            if ((*(uint *)(gen_frame + 0x1c)) != 0) {
              uVar4 = F_0046e6b0(*(uint *)((*(uint *)(gen_frame + 0x1c)) + 0x1698),*(undefined4 *)((*(uint *)(gen_frame + 0x1c)) + 0x169c)
                                  );
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x56c)),&REFG(undefined, 0x108f500),uVar4);
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x56c)));
            }
            break;
          case 0x156: ;
            if ((*(uint *)(gen_frame + 0x1c)) != 0) {
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x4c4)),&REFG(undefined, 0x108f508),(uint)*(ushort *)((*(uint *)(gen_frame + 0x1c)) + 0x16a0));
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x4c4)));
            }
            break;
          case 0x158: ;
            uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x764)),"<a href=\"j:%d,%d\"></a>",(uint)*(byte *)(piVar8 + 0x5a2)
                                 ,(uint)*(byte *)((int)piVar8 + 0x1689));
            goto LAB_0045477c;
          case 0x15a: ;
            if (*(int *)&REFG(undefined2, 0x1379c78) != 0) {
              pfVar6 = (float *)F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x14)));
              (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar6;
              uVar4 = F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x14)));
              pbVar10 = ((byte *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(uVar4 + 8) *
                                       (float10)*(double *)&REFG(undefined, 0x10912a8)))))));
              (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar10;
              F_0046e680(((float)gen_bits2f((unsigned int)(uintptr_t)(pbVar10))));
              fVar1 = *(*(float * PTR32 *)(gen_frame + 0x24));
              (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
              uVar4 = F_0046e680((float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10912a8)));
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x518)),"<a href=\"m:%d,%d,%d,%d\"></a>",iVar2,uVar12,uVar4);
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x518)));
            }
            break;
          case 0x15c: ;
            uVar12 = 0x1f;
            uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x1b0) + 0x48))))
                              (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x1b0));
            pvVar7 = (undefined *)F_00763050(uVar4,uVar12);
            if ((pvVar7 != (undefined *)0x0) &&
               (bVar3 = F_00773c60(pvVar7,0,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x4))),
               bVar3 != 0)) {
              (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x4)) * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
              F_0046e680((float)((float10)(*(float *)(gen_frame + 0x4)) * (float10)*(double *)&REFG(undefined, 0x10912a8)));
              (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0xc)) * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
              uVar4 = F_0046e680((float)((float10)(*(float *)(gen_frame + 0xc)) * (float10)*(double *)&REFG(undefined, 0x10912a8)));
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x470)),"<a href=\"m:%d,%d,%d,%d\"></a>",(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x8)),
                                   uVar4);
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x470)));
            }
            break;
          case 0x182: ;
            if ((*(uint *)(gen_frame + 0x18)) != 0) {
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x41c)),"%d/%d",*(undefined4 *)((*(uint *)(gen_frame + 0x18)) + 0x1690),
                                   *(undefined4 *)((*(uint *)(gen_frame + 0x18)) + 0x1694));
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x41c)));
            }
            break;
          case 0x184: ;
            if ((*(uint *)(gen_frame + 0x18)) != 0) {
              uVar4 = F_0046e6b0(*(uint *)((*(uint *)(gen_frame + 0x18)) + 0x1690),*(undefined4 *)((*(uint *)(gen_frame + 0x18)) + 0x1694)
                                  );
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x374)),&REFG(undefined, 0x108f514),uVar4);
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x374)));
            }
            break;
          case 0x186: ;
            if ((*(uint *)(gen_frame + 0x18)) != 0) {
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x2cc)),"%d/%d",*(undefined4 *)((*(uint *)(gen_frame + 0x18)) + 0x1698),
                                   *(undefined4 *)((*(uint *)(gen_frame + 0x18)) + 0x169c));
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x2cc)));
            }
            break;
          case 0x188: ;
            if ((*(uint *)(gen_frame + 0x18)) != 0) {
              uVar4 = F_0046e6b0(*(uint *)((*(uint *)(gen_frame + 0x18)) + 0x1698),*(undefined4 *)((*(uint *)(gen_frame + 0x18)) + 0x169c)
                                  );
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x1d0)),&REFG(undefined, 0x108f524),uVar4);
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x1d0)));
            }
            break;
          case 0x18a: ;
            if ((*(uint *)(gen_frame + 0x18)) != 0) {
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0xd4)),&REFG(undefined, 0x108f52c),(uint)*(ushort *)((*(uint *)(gen_frame + 0x18)) + 0x16a0));
              F_0042d4d0(this_00,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
            }
          }
        }
      }
      else {
        uVar4 = F_0042acc0(uVar12);
        if (0 < (int)uVar4) {
          do {
            bVar3 = *(*(byte * PTR32 *)(gen_frame + 0x28));
            (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
            F_0042d160(this_00,(uint)bVar3);
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      pbVar10 = (byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 100);
      uVar4 = F_0042a970(pbVar10);
      uVar9 = F_0042a970(this_00);
      if (param_2 < uVar4 + uVar9) break;
      F_0042e360(pbVar10,this_00);
      F_0042aca0(this_00);
      bVar3 = *(*(byte * PTR32 *)(gen_frame + 0x28));
      uVar12 = CONCAT31((int3)((uint)((undefined4)(uint)(this_00)) >> 8),bVar3);
      piVar8 = (*(int * PTR32 *)(gen_frame + 0x14));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x7b8)) ^ (uint)(uint)(gen_frame + 0x7bc));
  return (uint)pbVar10;
}

/* ref: FUN_00455070 */
uint F_00455070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x455070u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  pcVar1 = (*(char * PTR32 *)&gen_args[1]);
  uVar2 = 0;
  if (((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) || (*(*(char * PTR32 *)&gen_args[1]) == '\0')) {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      uVar2 = F_005339e0(&REFG(undefined4, 0x1375bc0));
      return uVar2;
    }
  }
  else {
    uVar3 = F_0043a5d0((*(undefined * PTR32 *)&gen_args[0]),&(*(char * PTR32 *)&gen_args[1]));
    uVar2 = F_0044e770((*(undefined * PTR32 *)&gen_args[0]),uVar3);
    if ((uVar2 == 0) && (uVar3 != 0x140)) {
      this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8)));
      F_0042e430(this_00,pcVar1);
      uVar4 = 1;
      uVar2 = F_0042a9a0(this_00,1,1,0,0);
      uVar2 = F_0042a990(uVar2);
      uVar2 = F_00a64490(&REFG(undefined, 0x14a9a18),uVar2,uVar4);
      F_0042aca0(this_00);
    }
  }
  return uVar2;
}

/* ref: FUN_00455100 */
uint F_00455100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x455100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  F_0042aca0((int)this + 0xb8);
  piVar1 = (int *)F_00455070(this,param_1,param_2);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    return uVar2;
  }
  this_00 = (undefined *)((int)this + 0xb8);
  if (**(char * PTR32 *)((int)this + 0xb8) == '\0') {
    F_0042e430(this_00,param_1);
    this_00 = (undefined *)F_0042a9a0((undefined *)((int)this + 0xb8),1,1,0,0);
  }
  uVar2 = F_0042a990(this_00);
  return uVar2;
}

/* ref: FUN_00455170 */
uint F_00455170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x455170u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  (*(undefined4 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
  uVar2 = F_004844a0(&REFG(undefined, 0x13723a4),&(*(int *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  iVar1 = (*(int *)&gen_args[3]);
  if ((*(int *)(gen_frame + 0x8)) != REFG(int, 0x13723a8)) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x8)) + 0x10) + 4))))
                      (*(int * PTR32 *)((*(int *)(gen_frame + 0x8)) + 0x10),(*(undefined4 *)&gen_args[6]),(*(int *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),
                       *(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x14));
    if (((char)uVar2 != '\0') && (iVar1 != 0)) {
      F_00406ad0(iVar1);
    }
    uVar2 = F_00481a00(&REFG(undefined, 0x13723a4),&(*(undefined4 *)&gen_args[1]),(*(int *)(gen_frame + 0x8)));
  }
  return uVar2;
}

/* ref: FUN_004551e0 */
uint F_004551e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4551e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = (*(uint *)&gen_args[2]);
  iVar1 = (*(uint *)&gen_args[1]);
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) << 0x10 | (*(uint *)&gen_args[2]) & 0xffff;
  F_004847d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcd8))),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[1]));
  if ((*(uint *)&gen_args[2]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcdc)))) {
    return (*(uint *)&gen_args[2]) + 0x10;
  }
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) & 0x30) == 0) {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) | 0x10;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc78))) = iVar1;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc7c))) = uVar2;
  }
  return (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc78;
}

/* ref: FUN_00455250 */
byte F_00455250(unsigned int gen_a0)
{
  GEN_ENTER(0x455250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_0075e990(uVar2);
  if (bVar1 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar1 = F_0075e9d0(uVar2);
    if ((bVar1 == 0) && ((*(byte *)((int)this + 0xc) & 2) != 0)) {
      bVar1 = F_00452f50(this);
      return bVar1;
    }
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyBlacklist::vf1 */
uint F_00455290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x455290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined * this_00;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x10);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0xe)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  if ((uVar3 != 0) && (piVar2 != (int *)0x0)) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    if (param_2 != 0) {
      (*(int * PTR32 *)(gen_frame + 0x20)) = param_1;
      piVar2 = param_1;
      do {
        (*(int * PTR32 *)(gen_frame + 0x20)) = piVar2;
        if (*piVar2 == 0 && piVar2[1] == 0) break;
        uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x24)),piVar2 + 2,REFG(undefined4, 0x108cc50));
        F_0042cbc0(((undefined1 *)(gen_frame + 0x78)),uVar4);
        (*(int *)(gen_frame + 0xd0)) = *piVar2;
        (*(int *)(gen_frame + 0xd4)) = piVar2[1];
        puVar5 = (undefined4 *)F_004296a0(0x78,0,400);
        *puVar5 = *(undefined4 *)(this + 0x654);
        puVar5[1] = *(undefined4 *)(this + 0x654);
        puVar5[2] = *(undefined4 *)(this + 0x654);
        *(undefined2 *)(puVar5 + 0x1c) = 0;
        if (puVar5 + 4 != (undefined4 *)0x0) {
          F_0042cbc0(puVar5 + 4,((undefined1 *)(gen_frame + 0x78)));
          puVar5[0x1a] = (*(int *)(gen_frame + 0xd0));
          puVar5[0x1b] = (*(int *)(gen_frame + 0xd4));
        }
        F_00485690(this + 0x650,((undefined1 *)(gen_frame + 0x8)),puVar5,0);
        F_0042c880(((undefined1 *)(gen_frame + 0x78)));
        F_0042c880(((undefined1 *)(gen_frame + 0x24)));
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x20)) + 2;
        do {
          iVar1 = *piVar2;
          piVar2 = (int *)((int)piVar2 + 1);
        } while ((char)iVar1 != '\0');
        if (piVar2 == (int *)((int)(*(int * PTR32 *)(gen_frame + 0x20)) + 9)) {
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4));
          if (*(int *)(uVar4 + 600) == 0) {
            uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x34) + 8))))(*(int * PTR32 *)(uVar4 + 0x34),"Addon");
            *(uint *)(uVar4 + 600) = uVar6;
          }
          piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 600) + 0x24))))
                                    (*(int * PTR32 *)(uVar4 + 600),0x3c4)));
          uVar7 = 0;
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
          piVar2 = (int *)F_00cb0950(this_00,uVar7);
          uVar7 = *(undefined4 *)(this + 8);
        }
        else {
          uVar7 = *(undefined4 *)(this + 8);
          piVar2 = (*(int * PTR32 *)(gen_frame + 0x20)) + 2;
        }
        F_00431250((*(int * PTR32 *)(gen_frame + 0x18)),uVar7,piVar2,0,1,0);
        iVar1 = *(int *)(this + 8);
        *(int *)(this + iVar1 * 8 + 0x10) = *(*(int * PTR32 *)(gen_frame + 0x20));
        *(int *)(this + iVar1 * 8 + 0x14) = (*(int * PTR32 *)(gen_frame + 0x20))[1];
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        uVar4 = (*(uint *)(gen_frame + 0x1c)) + 1;
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x20)) + 10;
        (*(uint *)(gen_frame + 0x1c)) = uVar4;
        (*(int * PTR32 *)(gen_frame + 0x20)) = piVar2;
      } while (uVar4 < param_2);
    }
    piVar2 = *(int * PTR32 *)(uVar3 + 0x20);
    if (*piVar2 != *(int *)(this + 8)) {
      *piVar2 = *(int *)(this + 8);
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)piVar2;
}

/* ref: Client::UI::Info::InfoProxyBlacklist::vf3 */
uint F_004554c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4554c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    *(undefined4 *)(this + 8) = 0;
    if (**(int * PTR32 *)(uVar2 + 0x20) != 0) {
      **(int * PTR32 *)(uVar2 + 0x20) = 0;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) != 1) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) = 1;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    F_00484840(this + 0x650,*((undefined4 *)GEN_TOP((*(int *)(this + 0x654) + 4))));
    *((int *)GEN_TOP((*(int *)(this + 0x654) + 4))) = *(int *)(this + 0x654);
    *(undefined4 *)*(undefined4 *)(this + 0x654) = *(undefined4 *)(this + 0x654);
    uVar3 = *(uint *)(this + 0x654);
    *(uint *)(uVar3 + 8) = uVar3;
    *(undefined4 *)(this + 0x658) = 0;
  }
  return uVar3;
}

/* ref: FUN_00455550 */
uint F_00455550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x455550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10912cc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x110000;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x7b) = 0;
  *(undefined1 *)((int)this + 0x7d) = 3;
  *(undefined2 *)((int)this + 0x7e) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined2 *)((int)this + 0x48c) = 0x164;
  *(undefined1 *)((int)this + 0x48e) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x490) = (*(undefined * PTR32 (*)[1])REFP(0x1091278));
  *(undefined4 *)((int)this + 0x498) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 0x494) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x494) + 4))) = *(int *)((int)this + 0x494);
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5a) = 0;
  *(undefined4 *)((int)this + 0x5e) = 0;
  *(undefined4 *)((int)this + 0x62) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  *(undefined4 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6e) = 0;
  *(undefined4 *)((int)this + 0x72) = 0;
  *(undefined4 *)((int)this + 0x76) = 0;
  F_00c48350((undefined *)((int)this + 0x88),0,0x400);
  return (uint)this;
}

/* ref: FUN_00455640 */
uint F_00455640(unsigned int gen_a0)
{
  GEN_ENTER(0x455640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10912cc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x490) = (*(undefined * PTR32 (*)[1])REFP(0x1091278));
  uVar1 = F_00484720((undefined *)((int)this + 0x494));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return uVar1;
}

/* ref: FUN_00455670 */
byte F_00455670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x455670u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  pcVar1 = (*(char * PTR32 *)&gen_args[4]);
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if ((((*(int *)&gen_args[1]) != 0 || (*(int *)&gen_args[2]) != 0) && ((*(char * PTR32 *)&gen_args[4]) != (char *)0x0)) && (*(*(char * PTR32 *)&gen_args[4]) != '\0')) {
    F_004846c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(int *)(gen_frame + 0x60)),&(*(int *)&gen_args[1]));
    if ((*(int *)(gen_frame + 0x60)) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
      (*(undefined1 *)(gen_frame + 0x58)) = (undefined1)(*(undefined4 *)&gen_args[3]);
      F_0042b630(((undefined1 *)(gen_frame + 0x64)));
      F_0042e430(((undefined1 *)(gen_frame + 0x64)),pcVar1);
      uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x64)));
      if (uVar2 < 0x20) {
        puVar3 = (undefined4 *)F_0042a990(((undefined1 *)(gen_frame + 0x64)));
        puVar5 = ((undefined4 *)(gen_frame + 0x38));
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)&gen_args[1]);
      (*(int *)(gen_frame + 0xc)) = (*(int *)&gen_args[2]);
      puVar3 = ((undefined4 *)(gen_frame + 0x38));
      puVar5 = ((undefined4 *)(gen_frame + 0x10));
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
      F_00488130(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),((undefined1 *)(gen_frame + 0x5c)),&(*(int *)(gen_frame + 0x8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
      return 1;
    }
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: FUN_00455780 */
byte F_00455780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x455780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00455670(this,param_1,param_2,param_3,param_4);
  return bVar1;
}

/* ref: FUN_004557a0 */
byte F_004557a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4557a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined * pvVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined * this_00;
  int iVar7;
  undefined * pvVar8;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x34)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x94)),&REFG(undefined, 0x108ebd8),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x40)),param_3,REFG(undefined4, 0x108cc50));
  F_00ada1b0(((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x94)),&(*(undefined * PTR32 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x40)));
  F_0042c880(((undefined1 *)(gen_frame + 0x94)));
  iVar7 = ((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) / 0x54;
  *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = 0;
  if (2 < iVar7) {
    iVar7 = 2;
  }
  (*(int *)(gen_frame + 0x24)) = 0;
  if (0 < iVar7) {
    (*(int *)(gen_frame + 0x28)) = 0;
    do {
      pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x30));
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
      if ((*(undefined * PTR32 *)(gen_frame + 0x2c)) != (*(undefined * PTR32 *)(gen_frame + 0x30))) {
        do {
          F_0042c880(this_00);
          this_00 = (undefined *)((int)this_00 + 0x54);
        } while (this_00 != pvVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar8;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x94)),&REFG(undefined, 0x108ebdc),REFG(undefined4, 0x108cc50));
      F_00ada1b0((*(int *)(gen_frame + 0x28)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x94)),&(*(undefined * PTR32 *)(gen_frame + 0x2c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x94)));
      if (((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x2c))) / 0x54 == 2) {
        uVar3 = F_00a4cf70((*(undefined * PTR32 *)(gen_frame + 0x2c)),0x10);
        (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(char)uVar3);
        uVar4 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x54,0x10);
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar4);
        uVar5 = F_00a345b0(this,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
        if ((0 < (int)uVar5) && (uVar5 != param_1)) {
          F_00a34610(this,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
        }
        *(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x24)) * 2) = (char)uVar3;
        *(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x24)) * 2 + 1) = (char)uVar4;
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x54;
      iVar6 = (*(int *)(gen_frame + 0x24)) + 1;
      (*(int *)(gen_frame + 0x24)) = iVar6;
    } while (iVar6 < iVar7);
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x30));
  (*(bool *)(gen_frame + 0x3f)) = 0 < iVar7;
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  if ((*(undefined * PTR32 *)(gen_frame + 0x2c)) != (undefined *)0x0) {
    for (; pvVar8 != pvVar1; pvVar8 = (undefined *)((int)pvVar8 + 0x54)) {
      F_0042c880(pvVar8);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x2c)),(((*(int *)(gen_frame + 0x34)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x2c))) / 0x54) * 0x54,0x35);
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x34)) = 0;
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  if ((*(undefined * PTR32 *)(gen_frame + 0x10)) != (undefined *)0x0) {
    for (; pvVar8 != pvVar1; pvVar8 = (undefined *)((int)pvVar8 + 0x54)) {
      F_0042c880(pvVar8);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x10)),(((*(int *)(gen_frame + 0x18)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) / 0x54) * 0x54,0x35);
  }
  bVar2 = (*(bool *)(gen_frame + 0x3f));
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return bVar2;
}

/* ref: FUN_00455aa0 */
byte F_00455aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x455aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined2 *)(gen_frame + 0x34)) = 0;
  (*(undefined1 *)(gen_frame + 0x36)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0x18b;
  pcVar4 = param_1;
  do {
    if (*pcVar4 == 'T') {
      uVar2 = F_00431b20(pcVar4 + 3);
      if (pcVar4 + (ushort)(*(short *)(pcVar4 + 1) + 3) < param_1 + param_2) {
        pcVar4 = pcVar4 + (ushort)(*(short *)(pcVar4 + 1) + 3);
      }
      if (-1 < (int)uVar2) {
        puVar3 = (undefined4 *)F_00a343f0(this,uVar2);
        (*(undefined4 *)(gen_frame + 0x2c)) = *puVar3;
        (*(undefined4 *)(gen_frame + 0x30)) = puVar3[1];
        (*(undefined2 *)(gen_frame + 0x34)) = *(undefined2 *)(puVar3 + 2);
        (*(undefined1 *)(gen_frame + 0x36)) = *(undefined1 *)((int)puVar3 + 10);
        bVar1 = F_004557a0(this,uVar2,&(*(undefined4 *)(gen_frame + 0x2c)),pcVar4 + 3);
        if (bVar1 != 0) {
          F_00a34390(this,uVar2,&(*(undefined4 *)(gen_frame + 0x2c)));
        }
      }
      if (pcVar4 + (ushort)(*(short *)(pcVar4 + 1) + 3) < param_1 + param_2) {
        pcVar4 = pcVar4 + (ushort)(*(short *)(pcVar4 + 1) + 3);
      }
    }
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
}

/* ref: FUN_00455b90 */
byte F_00455b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x455b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 1;
  if (((char)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) != '\0') && ((*(int *)&gen_args[2]) != 0)) {
    iVar4 = (*(int *)&gen_args[3]) + -1;
    (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
    uVar2 = F_00406bb0(iVar4,0,0);
    uVar3 = F_00407d50((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]),uVar2,iVar4);
    if (0 < (int)uVar3) {
      F_00455aa0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + -0x850))),uVar2,iVar4);
    }
    F_00406b30(uVar2);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,(int)(*(undefined * PTR32 *)&gen_args[0]) + -0x850);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  }
  return 1;
}

/* ref: FUN_00455c20 */
uint F_00455c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x455c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  char cVar1;
  char * pcVar2;
  undefined * puVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  undefined * puVar7;
  int iVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  F_0042b630(((char * PTR32 *)(gen_frame + 0x84)));
  iVar8 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x1091268));
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = (int)this + -0x850;
  do {
    uVar4 = F_00a343f0((*(int *)(gen_frame + 0x24)),iVar8);
    F_0042aca0(((char * PTR32 *)(gen_frame + 0x84)));
    iVar9 = 0;
    do {
      uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x30)),"%02X.%02X,",(uint)*(byte *)(iVar9 + uVar4),
                           (uint)*(byte *)(iVar9 + 1 + uVar4));
      F_0042d4d0(((char * PTR32 *)(gen_frame + 0x84)),uVar5);
      F_0042c880(((undefined1 *)(gen_frame + 0x30)));
      iVar9 = iVar9 + 2;
    } while (iVar9 < 4);
    if (*((char * PTR32 *)(gen_frame + 0x84))[0] != '\0') {
      pcVar2 = (&REFG(undefined * PTR32, 0x12fd5a8))[iVar8];
      pcVar6 = pcVar2;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00489460(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108ebec),pcVar2,pcVar6 + (1 - (int)(pcVar2 + 1)));
      uVar4 = F_0042a970(((char * PTR32 *)(gen_frame + 0x84)));
      iVar9 = uVar4 + 1;
      uVar4 = F_0042a990(((char * PTR32 *)(gen_frame + 0x84)));
      F_00489460(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108ebf0),uVar4,iVar9);
    }
    puVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x18b);
  iVar8 = (*(int *)(gen_frame + 0x14)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x10));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
  puVar7 = &REFG(undefined, 0x10e522d);
  if (iVar8 != 0) {
    puVar7 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  F_00407cf0((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x2c)),puVar7,iVar8,(*(undefined4 *)(gen_frame + 0x28)),iVar8 + 1U);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 (*)[3])REFP(0x109073c));
  if (puVar3 != (undefined *)0x0) {
    F_00406ad0(puVar3);
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x84)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return iVar8 + 1U;
}

/* ref: FUN_00455db0 */
uint F_00455db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x455db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined2 *)((int)this + 0x14) = 0x40;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  *(undefined4 *)((int)this + 0x10) = 0x80c0e;
  uVar1 = F_00406bb0(0x240,0,0);
  *(uint *)((int)this + 0x18) = uVar1;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10912ec));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar1 = F_004296a0(0x48,0,400);
  *(uint *)((int)this + 0x34) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x34) + 4))) = *(int *)((int)this + 0x34);
  *((int *)GEN_TOP((*(int *)((int)this + 0x34) + 8))) = *(int *)((int)this + 0x34);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x40))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x41))) = 1;
  return (uint)this;
}

/* ref: FUN_00455e50 */
uint F_00455e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x455e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  uVar4 = F_0042b790(param_1);
  piVar6 = (int *)0x0;
  if (uVar4 != 0) {
    uVar4 = *(uint *)((int)this + 0x3c);
    uVar8 = *(int *)((int)this + 0x40) + uVar4;
    (*(char *)(gen_frame + 0x1b)) = '\0';
    ((int * PTR32 *)(gen_frame + 0x8))[0] = (int *)0x0;
    piVar6 = ((int * PTR32 *)(gen_frame + 0x8))[0];
    if ((*(int * PTR32 *)((int)this + 0x30) != (int *)0x0) &&
       (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30))), puVar2 != (undefined4 *)0x0)) {
      ((int * PTR32 *)(gen_frame + 0x8))[0] = (int *)*puVar2;
      piVar6 = ((int * PTR32 *)(gen_frame + 0x8))[0];
    }
    for (; uVar4 != uVar8; uVar4 = uVar4 + 1) {
      if (((int * PTR32 *)(gen_frame + 0x8))[0] == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *((int * PTR32 *)(gen_frame + 0x8))[0];
      }
      uVar5 = uVar4;
      if (*(uint *)(iVar7 + 8) <= uVar4) {
        uVar5 = uVar4 - *(uint *)(iVar7 + 8);
      }
      bVar3 = F_0042ac50(*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar7 + 4) + uVar5 * 4))),param_1);
      piVar6 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
      if (bVar3 != 0) {
        uVar10 = 0;
        if ((((int * PTR32 *)(gen_frame + 0x8))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x8))[0])) != (undefined4 *)0x0)) {
          uVar10 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x8))[0]));
        }
        piVar6 = (int *)F_00486d50((undefined *)((int)this + 0x30),((int * PTR32 *)(gen_frame + 0x8)),uVar10,0,uVar4);
        (*(char *)(gen_frame + 0x1b)) = '\x01';
        break;
      }
    }
    if (((char)param_2 != '\0') || ((*(char *)(gen_frame + 0x1b)) != '\0')) {
      if (*(uint *)((int)this + 0x38) <= *(int *)((int)this + 0x40) + 1U) {
        F_00487750((undefined *)((int)this + 0x30),1);
      }
      iVar7 = *(int *)((int)this + 0x3c);
      if (iVar7 == 0) {
        iVar7 = *(int *)((int)this + 0x38);
      }
      iVar7 = iVar7 + -1;
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x34) + iVar7 * 4))) == 0) {
        uVar4 = F_004296a0(0x54,0,400);
        *((uint *)GEN_TOP((*(int *)((int)this + 0x34) + iVar7 * 4))) = uVar4;
      }
      piVar6 = *(int * PTR32 *)((int)this + 0x34);
      if ((undefined *)piVar6[iVar7] != (undefined *)0x0) {
        piVar6 = (int *)F_0042cbc0((undefined *)piVar6[iVar7],param_1);
      }
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
      *(int *)((int)this + 0x3c) = iVar7;
      if (0xe < *(uint *)((int)this + 0x40)) {
        piVar6 = (int *)0x0;
        if (*(int *)((int)this + 0x40) != 0) {
          uVar4 = *(int *)((int)this + 0x40) + -1 + *(int *)((int)this + 0x3c);
          if (*(uint *)((int)this + 0x38) <= uVar4) {
            uVar4 = uVar4 - *(uint *)((int)this + 0x38);
          }
          uVar9 = F_0042c880(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + uVar4 * 4))));
          piVar6 = (int *)uVar9;
          piVar1 = (int *)((int)this + 0x40);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined4 *)((int)this + 0x3c) = 0;
          }
        }
      }
      *(undefined1 *)((int)this + 0x2c) = 1;
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00455fb0 */
byte F_00455fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x455fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = param_1;
  while (uVar1 + 3 <= param_1 + param_2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar1 + 3,REFG(undefined4, 0x108cc50));
    F_00455e50(this,((undefined1 *)(gen_frame + 0x4)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (ushort)(*(short *)(uVar1 + 1) + 3) + uVar1;
    if (uVar2 < param_1 + param_2) {
      uVar1 = uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf1 */
byte F_00456040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x456040u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = (*(int *)&gen_args[3]);
  iVar1 = (*(int *)&gen_args[2]);
  (*(undefined * PTR32 *)&gen_args[0])[0x2c] = (undefined1)0x1;
  if ((char)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) == '\0') {
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
    F_00482650((*(undefined * PTR32 *)&gen_args[0]) + 0x30);
    (*(undefined * PTR32 *)&gen_args[0])[0x2c] = (undefined1)0x1;
    return 1;
  }
  if ((*(int *)&gen_args[3]) != 1) {
    if ((*(int *)&gen_args[2]) != 0) {
      (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
      uVar4 = F_00407d50((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]) + -1);
      if ((0 < (int)uVar4) && (bVar3 = F_00455fb0((*(undefined * PTR32 *)&gen_args[0]),iVar1,iVar2), bVar3 != 0)) {
        return 1;
      }
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
      F_00482650((*(undefined * PTR32 *)&gen_args[0]) + 0x30);
      (*(undefined * PTR32 *)&gen_args[0])[0x2c] = (undefined1)0x1;
    }
    return 1;
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  F_00482650((*(undefined * PTR32 *)&gen_args[0]) + 0x30);
  (*(undefined * PTR32 *)&gen_args[0])[0x2c] = (undefined1)0x1;
  return 1;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf2 */
uint F_004560e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4560e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  undefined4 in_ecx;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  int iVar7;
  undefined * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  if (*(int *)(this + 0x40) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c) ^ (uint)(uint)(gen_frame + 0x7c));
    return 1;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x24)));
  iVar5 = *(int *)(this + 0x40);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x1091268));
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  puVar2 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  while (iVar5 = iVar5 + -1, (*(undefined * PTR32 *)(gen_frame + 0x4)) = puVar2, -1 < iVar5) {
    piVar1 = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x30);
    piVar6 = (int *)0x0;
    if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
      piVar6 = *(int * PTR32 *)*piVar1;
    }
    uVar3 = *(int *)(this + 0x3c) + iVar5;
    if (((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) ||
       (piVar6 = *(int * PTR32 *)*piVar6, piVar6 == (int *)0x0)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar6;
    }
    if (*(uint *)(iVar7 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar7 + 8);
    }
    piVar6 = (int *)0x0;
    if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
      piVar6 = *(int * PTR32 *)*piVar1;
    }
    uVar4 = *(int *)(this + 0x3c) + iVar5;
    if (((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) ||
       (piVar1 = *(int * PTR32 *)*piVar6, piVar1 == (int *)0x0)) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar1;
    }
    if (*(uint *)(iVar9 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar9 + 8);
    }
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)(iVar9 + 4) + uVar4 * 4)));
    uVar3 = F_0042a970(*((undefined4 *)GEN_TOP((*(int *)(iVar7 + 4) + uVar3 * 4))));
    uVar4 = (uint)(byte)((char)uVar3 + 1);
    uVar3 = F_0042a990(in_ecx);
    F_00489460(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x108eeb4),uVar3,uVar4);
    this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    puVar2 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  }
  iVar5 = (*(int *)(gen_frame + 0x8)) - (int)puVar2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
  puVar8 = &REFG(undefined, 0x10e522d);
  if (iVar5 != 0) {
    puVar8 = puVar2;
  }
  F_00407cf0((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)),puVar8,iVar5,(*(undefined4 *)(gen_frame + 0x18)),iVar5 + 1U);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[3])REFP(0x109073c));
  if (puVar2 != (undefined *)0x0) {
    F_00406ad0(puVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return iVar5 + 1U;
}

/* ref: Client::UI::Misc::CharaConfig::vf1 */
byte F_00456240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x456240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  int iVar1;
  float fVar2;
  char cVar3;
  undefined1 * puVar4;
  uint uVar5;
  char * pcVar6;
  undefined1 * puVar7;
  undefined * this_00;
  int iVar8;
  double dVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  this_00 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10);
  if ((char)param_1 != '\0') {
    *(undefined1 *)(param_3 + -1 + param_2) = 0;
    (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)REFG(undefined4, 0x108cc50);
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = &REFG(undefined, 0x108f3ec);
    (*(undefined1 * PTR32 *)(gen_frame + 0x70)) = (undefined1 *)0x0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x74)) = (undefined1 *)0x0;
    (*(int *)(gen_frame + 0x78)) = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)0x45629f;
    F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),&REFG(undefined, 0x108f3ec),REFG(undefined4, 0x108cc50));
    (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)REFG(undefined4, 0x108cc50);
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)param_2;
    (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)0x4562b2;
    F_0042cc20(((undefined1 *)(gen_frame + 0x80)),param_2,REFG(undefined4, 0x108cc50));
    (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = &(*(undefined1 * PTR32 *)(gen_frame + 0x70));
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0xd4));
    (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)(gen_frame + 0x80));
    (*(undefined4 *)(gen_frame + 0x48)) = 0x4562c9;
    F_00ada1b0(((undefined1 *)(gen_frame + 0x80)),((undefined1 *)(gen_frame + 0xd4)),&(*(undefined1 * PTR32 *)(gen_frame + 0x70)));
    (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x4562d7;
    F_0042c880(((undefined1 *)(gen_frame + 0x80)));
    (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x4562df;
    F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
    iVar1 = ((int)(*(undefined1 * PTR32 *)(gen_frame + 0x74)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x70))) / 0x54;
    if (0 < iVar1) {
      iVar8 = 0;
      (*(int *)(gen_frame + 0x6c)) = iVar1;
      do {
        (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x456318;
        uVar5 = F_0042b790((*(undefined1 * PTR32 *)(gen_frame + 0x70)) + iVar8);
        if (2 < uVar5) {
          (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x0;
          (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x456331;
          pcVar6 = (char *)F_0042a7f0((*(undefined1 * PTR32 *)(gen_frame + 0x70)) + iVar8,0);
          if (*pcVar6 == 'n') {
            (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0xffffffff;
            (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x0;
            (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)0x2;
            (*(undefined4 *)(gen_frame + 0x48)) = 0x45634a;
            puVar7 = (undefined1 *)F_0042a7f0((*(undefined1 * PTR32 *)(gen_frame + 0x70)) + iVar8,2);
            (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = puVar7;
            (*(undefined4 *)(gen_frame + 0x48)) = 0x456356;
            this_00 = (undefined *)F_00414550((*(undefined * PTR32 *)(gen_frame + 0x64)),puVar7,(*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)));
          }
          else if (this_00 != (undefined *)0x0) {
            (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x0;
            (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x456374;
            pcVar6 = (char *)F_0042a7f0((*(undefined1 * PTR32 *)(gen_frame + 0x70)) + iVar8,0);
            cVar3 = *pcVar6;
            if (cVar3 == 'd') {
              (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x2;
              (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x4563f3;
              uVar5 = F_0042a7f0((*(undefined1 * PTR32 *)(gen_frame + 0x70)) + iVar8,2);
              (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0xa;
              (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)REFG(undefined4, 0x108cc50);
              (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)uVar5;
              (*(undefined4 *)(gen_frame + 0x48)) = 0x456405;
              uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),uVar5,REFG(undefined4, 0x108cc50));
              (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)uVar5;
              (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)0x45640b;
              puVar7 = (undefined1 *)F_00a4cf70(uVar5,(*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)));
              (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x456418;
              F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
              (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x1;
              (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = puVar7;
              (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)0x456422;
              F_00414a40(this_00,puVar7,1);
            }
            else if (cVar3 == 'f') {
              (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x2;
              (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x4563c5;
              pcVar6 = (char *)F_0042a7f0((*(undefined1 * PTR32 *)(gen_frame + 0x70)) + iVar8,2);
              (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)pcVar6;
              (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x4563cb;
              dVar9 = F_00c4acaa(pcVar6);
              fVar2 = (float)dVar9;
              (*(float *)(gen_frame + 0x68)) = fVar2;
              (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 * PTR32 *)(uintptr_t)gen_fl2bits((float)(fVar2)));
              (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x4563e1;
              F_00414ad0(this_00,fVar2);
            }
            else if (cVar3 == 's') {
              uVar10 = REFG(undefined4, 0x108cc50);
              uVar5 = F_0042a7f0((*(undefined1 * PTR32 *)(gen_frame + 0x70)) + iVar8,2);
              F_0042cc20((gen_frame + 0x4),uVar5,uVar10);
              F_00414b60(this_00,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18))
                           ,(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                           (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined1 * PTR32 *)(gen_frame + 0x4c)),
                           (*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)));
            }
            this_00 = (undefined *)0x0;
          }
        }
        iVar8 = iVar8 + 0x54;
        iVar1 = (*(int *)(gen_frame + 0x6c)) + -1;
        (*(int *)(gen_frame + 0x6c)) = iVar1;
      } while (iVar1 != 0);
    }
    puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x74));
    puVar7 = (*(undefined1 * PTR32 *)(gen_frame + 0x70));
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x70)) != (undefined1 *)0x0) {
      for (; puVar7 != puVar4; puVar7 = puVar7 + 0x54) {
        (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x456457;
        F_0042c880(puVar7);
      }
      puVar7 = ((undefined1 *)GEN_TOP(((((*(int *)(gen_frame + 0x78)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x70))) / 0x54) * 0x54)));
      (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined1 * PTR32 *)0x35;
      (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = puVar7;
      (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (*(undefined1 * PTR32 *)(gen_frame + 0x70));
      (*(undefined4 *)(gen_frame + 0x48)) = 0x456489;
      F_00429760((*(undefined1 * PTR32 *)(gen_frame + 0x70)),puVar7,0x35);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return 1;
}

/* ref: FUN_004564b0 */
uint F_004564b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4564b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1091324));
  F_00484d00((undefined *)((int)this + 0x28c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x290),
               *(undefined4 * PTR32 *)((int)this + 0x290));
  F_00429760(*(undefined4 *)((int)this + 0x290),0x10,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf2 */
uint F_00456520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x456520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * _Dst;
  gen_size32 sVar1;
  int iVar2;
  undefined * PTR32 * ppuVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  uint uVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar7 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  _Dst = (undefined *)0x0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 (*)[1])REFP(0x1091270));
  (*(char *)(gen_frame + 0x3c)) = '\0';
  (*(int *)(gen_frame + 0x14)) = 0;
  do {
    iVar2 = (*(int *)(gen_frame + 0x14)) * 0x900 + 0x1bd4c;
    (*(int *)(gen_frame + 0x18)) = 0;
    do {
      ppuVar3 = (undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) << 4);
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppuVar3;
      do {
        if (this[((int)ppuVar3 + (*(int *)(gen_frame + 0xc))) * 8 + iVar2] != (undefined1)0x0) {
          uVar5 = (int)_Dst - uVar7;
          uVar9 = uVar5 + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar5;
          uVar6 = uVar7;
          if (uVar9 < uVar5) {
            pvVar8 = (undefined *)(uVar7 + uVar9);
            if (pvVar8 != _Dst) {
              F_00c46e20(pvVar8,_Dst,0);
LAB_00456676: ;
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar8;
              _Dst = pvVar8;
              uVar7 = uVar6;
            }
          }
          else if (uVar5 < uVar9) {
            iVar4 = (uVar7 - (int)_Dst) + uVar9;
            if (-iVar4 - 1U < uVar5) goto LAB_00456aa0;
            uVar9 = (*(int *)(gen_frame + 0x34)) - uVar7;
            uVar5 = uVar5 + iVar4;
            (*(uint *)(gen_frame + 0x24)) = uVar9;
            if (uVar9 < uVar5) {
              if (-(uVar9 >> 1) - 1 < uVar9) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar9 + (uVar9 >> 1);
              }
              if (uVar10 < uVar5) {
                uVar10 = uVar5;
              }
              if (uVar9 < uVar10) {
                uVar6 = 0;
                if ((uVar10 != 0) && (uVar6 = F_004069f0(uVar10), uVar6 == 0)) goto LAB_00456aaa;
                F_00c46e20(uVar6,uVar7,(*(uint *)(gen_frame + 0x44)));
                if (uVar7 != 0) {
                  F_00406ad0(uVar7);
                }
                (*(int *)(gen_frame + 0x34)) = uVar6 + uVar10;
                _Dst = (undefined *)(uVar6 + (*(uint *)(gen_frame + 0x44)));
                (*(uint *)(gen_frame + 0x2c)) = uVar6;
              }
            }
            uVar5 = (*(uint *)(gen_frame + 0x44));
            iVar4 = (*(uint *)(gen_frame + 0x44)) + 1;
            sVar1 = (uVar6 - (int)_Dst) + iVar4;
            if (sVar1 != 0) {
              F_00c48350(_Dst,0,sVar1);
            }
            pvVar8 = (undefined *)(uVar6 + iVar4);
            goto LAB_00456676;
          }
          *(undefined1 *)(uVar7 + uVar5) = REFG(undefined1, 0x108f708);
          uVar5 = (int)_Dst - uVar7;
          (*(uint *)(gen_frame + 0x44)) = uVar5;
          uVar9 = uVar5 + 1;
          if ((*(char *)(gen_frame + 0x3c)) == '\0') {
            if (uVar9 < uVar5) {
              pvVar8 = (undefined *)(uVar9 + uVar7);
              if (pvVar8 != _Dst) {
                F_00c46e20(pvVar8,_Dst,0);
LAB_004567ac: ;
                (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar8;
                _Dst = pvVar8;
              }
            }
            else if (uVar5 < uVar9) {
              iVar4 = (uVar9 - (int)_Dst) + uVar7;
              if (-iVar4 - 1U < uVar5) goto LAB_00456aa0;
              uVar5 = uVar5 + iVar4;
              uVar6 = (*(int *)(gen_frame + 0x34)) - uVar7;
              if (uVar6 < uVar5) {
                if (-(uVar6 >> 1) - 1 < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar5) {
                  uVar6 = uVar5;
                }
                F_00481c90(&(*(uint *)(gen_frame + 0x2c)),uVar6);
                _Dst = (*(undefined * PTR32 *)(gen_frame + 0x30));
                uVar7 = (*(uint *)(gen_frame + 0x2c));
              }
              sVar1 = (uVar9 - (int)_Dst) + uVar7;
              if (sVar1 != 0) {
                F_00c48350(_Dst,0,sVar1);
              }
              pvVar8 = (undefined *)(uVar9 + uVar7);
              uVar5 = (*(uint *)(gen_frame + 0x44));
              goto LAB_004567ac;
            }
            *(undefined1 *)(uVar5 + uVar7) = 1;
          }
          else {
            if (uVar9 < uVar5) {
              pvVar8 = (undefined *)(uVar9 + uVar7);
              if (pvVar8 != _Dst) {
                F_00c46e20(pvVar8,_Dst,0);
                (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar8;
                *(undefined1 *)(uVar7 + uVar5) = 1;
                _Dst = pvVar8;
                goto LAB_004567b4;
              }
            }
            else if (uVar5 < uVar9) {
              iVar4 = (uVar9 - (int)_Dst) + uVar7;
              if (-iVar4 - 1U < uVar5) goto LAB_00456aa0;
              uVar5 = uVar5 + iVar4;
              uVar6 = (*(int *)(gen_frame + 0x34)) - uVar7;
              if (uVar6 < uVar5) {
                if (-(uVar6 >> 1) - 1 < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar5) {
                  uVar6 = uVar5;
                }
                F_00481c90(&(*(uint *)(gen_frame + 0x2c)),uVar6);
                _Dst = (*(undefined * PTR32 *)(gen_frame + 0x30));
                uVar7 = (*(uint *)(gen_frame + 0x2c));
              }
              sVar1 = (uVar9 - (int)_Dst) + uVar7;
              if (sVar1 != 0) {
                F_00c48350(_Dst,0,sVar1);
              }
              _Dst = (undefined *)(uVar9 + uVar7);
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = _Dst;
              uVar5 = (*(uint *)(gen_frame + 0x44));
            }
            *(undefined1 *)(uVar7 + uVar5) = 1;
          }
LAB_004567b4: ;
          uVar5 = (int)_Dst - uVar7;
          uVar9 = uVar5 + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar5;
          uVar6 = uVar7;
          if (uVar9 < uVar5) {
            pvVar8 = (undefined *)(uVar7 + uVar9);
            if (pvVar8 != _Dst) {
              F_00c46e20(pvVar8,_Dst,0);
LAB_00456891: ;
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar8;
              _Dst = pvVar8;
              uVar7 = uVar6;
            }
          }
          else if (uVar5 < uVar9) {
            iVar4 = (uVar7 - (int)_Dst) + uVar9;
            if (-iVar4 - 1U < uVar5) goto LAB_00456aa0;
            uVar9 = (*(int *)(gen_frame + 0x34)) - uVar7;
            uVar5 = uVar5 + iVar4;
            (*(uint *)(gen_frame + 0x24)) = uVar9;
            if (uVar9 < uVar5) {
              if (-(uVar9 >> 1) - 1 < uVar9) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar9 + (uVar9 >> 1);
              }
              if (uVar10 < uVar5) {
                uVar10 = uVar5;
              }
              if (uVar9 < uVar10) {
                uVar6 = 0;
                if ((uVar10 != 0) && (uVar6 = F_004069f0(uVar10), uVar6 == 0)) goto LAB_00456aaa;
                F_00c46e20(uVar6,uVar7,(*(uint *)(gen_frame + 0x44)));
                if (uVar7 != 0) {
                  F_00406ad0(uVar7);
                }
                (*(int *)(gen_frame + 0x34)) = uVar6 + uVar10;
                _Dst = (undefined *)(uVar6 + (*(uint *)(gen_frame + 0x44)));
                (*(uint *)(gen_frame + 0x2c)) = uVar6;
              }
            }
            uVar5 = (*(uint *)(gen_frame + 0x44));
            iVar4 = (*(uint *)(gen_frame + 0x44)) + 1;
            sVar1 = (uVar6 - (int)_Dst) + iVar4;
            if (sVar1 != 0) {
              F_00c48350(_Dst,0,sVar1);
            }
            pvVar8 = (undefined *)(uVar6 + iVar4);
            goto LAB_00456891;
          }
          *(undefined1 *)(uVar7 + uVar5) = (undefined1)(*(int *)(gen_frame + 0x14));
          uVar5 = (int)_Dst - uVar7;
          uVar9 = uVar5 + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar5;
          uVar6 = uVar7;
          if (uVar9 < uVar5) {
            pvVar8 = (undefined *)(uVar9 + uVar7);
            if (pvVar8 != _Dst) {
              F_00c46e20(pvVar8,_Dst,0);
LAB_00456979: ;
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar8;
              _Dst = pvVar8;
              uVar7 = uVar6;
            }
          }
          else if (uVar5 < uVar9) {
            iVar4 = (uVar9 - (int)_Dst) + uVar7;
            if (-iVar4 - 1U < uVar5) {
LAB_00456aa0: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar5 = uVar5 + iVar4;
            uVar9 = (*(int *)(gen_frame + 0x34)) - uVar7;
            (*(uint *)(gen_frame + 0x24)) = uVar9;
            if (uVar9 < uVar5) {
              if (-(uVar9 >> 1) - 1 < uVar9) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar9 + (uVar9 >> 1);
              }
              if (uVar10 < uVar5) {
                uVar10 = uVar5;
              }
              if (uVar9 < uVar10) {
                uVar6 = 0;
                if ((uVar10 != 0) && (uVar6 = F_004069f0(uVar10), uVar6 == 0)) {
LAB_00456aaa: ;
                  (*(undefined4 *)(gen_frame + 0x20)) = 0;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
                  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                }
                F_00c46e20(uVar6,uVar7,(*(uint *)(gen_frame + 0x44)));
                if (uVar7 != 0) {
                  F_00406ad0(uVar7);
                }
                _Dst = (undefined *)(uVar6 + (*(uint *)(gen_frame + 0x44)));
                (*(int *)(gen_frame + 0x34)) = uVar6 + uVar10;
                (*(uint *)(gen_frame + 0x2c)) = uVar6;
              }
            }
            uVar5 = (*(uint *)(gen_frame + 0x44));
            sVar1 = (((*(uint *)(gen_frame + 0x44)) + 1) - (int)_Dst) + uVar6;
            if (sVar1 != 0) {
              F_00c48350(_Dst,0,sVar1);
            }
            pvVar8 = (undefined *)(uVar5 + 1 + uVar6);
            goto LAB_00456979;
          }
          *(undefined1 *)(uVar5 + uVar7) = REFG(undefined1, 0x108f70c);
          F_00484510(&(*(uint *)(gen_frame + 0x2c)),(int)_Dst + (1 - uVar7));
          pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x30));
          uVar9 = (*(uint *)(gen_frame + 0x2c));
          *((undefined1 *)GEN_TOP(((int)_Dst + ((*(uint *)(gen_frame + 0x2c)) - uVar7)))) = 1;
          F_00484510(&(*(uint *)(gen_frame + 0x2c)),(int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + (1 - (*(uint *)(gen_frame + 0x2c))));
          *((undefined1 *)GEN_TOP(((int)pvVar8 + ((*(uint *)(gen_frame + 0x2c)) - uVar9)))) = (undefined1)(*(int *)(gen_frame + 0x18));
          (*(undefined1 *)(gen_frame + 0x43)) = (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xc)) + 0));
          F_00489560(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x28)),&REFG(undefined, 0x108f710),&(*(undefined1 *)(gen_frame + 0x43)),1);
          (*(undefined1 *)(gen_frame + 0x43)) = this[((int)ppuVar3 + (*(int *)(gen_frame + 0xc))) * 8 + iVar2];
          F_00489560(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x28)),&REFG(undefined, 0x108f714),&(*(undefined1 *)(gen_frame + 0x43)),1);
          F_00c472af(((undefined1 *)(gen_frame + 0x48)),0x10,&REFG(undefined, 0x108f718),
                     *((undefined4 *)GEN_TOP((this + ((int)ppuVar3 + (*(int *)(gen_frame + 0xc))) * 8 + iVar2 + 4))));
          F_004894f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x28)),&REFG(undefined, 0x108f720),((undefined1 *)(gen_frame + 0x48)),9);
          _Dst = (*(undefined * PTR32 *)(gen_frame + 0x30));
          ppuVar3 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10));
          uVar7 = (*(uint *)(gen_frame + 0x2c));
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      } while ((*(int *)(gen_frame + 0xc)) < 0x10);
      iVar4 = (*(int *)(gen_frame + 0x18)) + 1;
      (*(int *)(gen_frame + 0x18)) = iVar4;
    } while (iVar4 < 0x12);
    iVar2 = (*(int *)(gen_frame + 0x14)) + 1;
    (*(int *)(gen_frame + 0x14)) = iVar2;
    if (0x1c < iVar2) {
      iVar2 = (int)_Dst - uVar7;
      uVar9 = iVar2 + 1;
      if ((iVar2 != 0) && (uVar9 < param_2)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
        F_00407cf0((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)),uVar7,iVar2,(*(undefined4 *)(gen_frame + 0x20)),uVar9);
        if (uVar7 != 0) {
          F_00406ad0(uVar7);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return uVar9;
      }
      if (uVar7 != 0) {
        F_00406ad0(uVar7);
      }
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0;
    }
  } while( true );
}

/* ref: Client::UI::Misc::RaptureGearsetModule::vf2 */
uint F_00456af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x456af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined1 RVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  uint uVar6;
  int iVar7;
  undefined * pRVar8;
  int iVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)0x0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x1091270));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00c472af(&(*(undefined4 *)(gen_frame + 0x28)),0x10,&REFG(undefined, 0x108f75c),0x66);
  F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),1);
  iVar7 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
  *(*(undefined1 * PTR32 *)(gen_frame + 0x10)) = REFG(undefined1, 0x108f764);
  F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar7 + 1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10))[iVar7] = 8;
  iVar7 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
  F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar7 + 8);
  *(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + iVar7) = (*(undefined4 *)(gen_frame + 0x28));
  *(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + iVar7 + 4) = (*(undefined4 *)(gen_frame + 0x2c));
  RVar2 = this[0x71d4];
  iVar7 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
  F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar7 + 1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10))[iVar7] = REFG(undefined1, 0x108f768);
  iVar7 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
  F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar7 + 1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10))[iVar7] = 1;
  iVar7 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
  F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar7 + 1);
  *(undefined *)((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + iVar7) = RVar2;
  (*(undefined1 *)(gen_frame + 0x27)) = (undefined1)(this[0x71d8] != (undefined1)0x0);
  iVar7 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
  F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar7 + 1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10))[iVar7] = REFG(undefined1, 0x108f76c);
  iVar7 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
  F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar7 + 1);
  iVar9 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
  (*(undefined1 * PTR32 *)(gen_frame + 0x10))[iVar7] = 1;
  F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar9 + 1);
  *(undefined *)((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + iVar9) = (*(undefined1 *)(gen_frame + 0x27));
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x10));
    if (((*(int *)(gen_frame + 0x0)) < 0) || (iVar7 = (*(int *)(gen_frame + 0x0)), 100 < (*(int *)(gen_frame + 0x0)))) {
      iVar7 = 0;
    }
    pRVar8 = (*(undefined * PTR32 *)(gen_frame + 0x4)) + iVar7 * 0x120 + 0x34;
    (*(undefined1 *)(gen_frame + 0x27)) = (undefined1)((byte)pRVar8[0x39] & 1);
    uVar10 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
    uVar1 = uVar10 + 1;
    if (uVar1 < uVar10) {
      puVar5 = (*(undefined1 * PTR32 *)(gen_frame + 0x10)) + uVar1;
      if (puVar5 != (*(undefined1 * PTR32 *)(gen_frame + 0x14))) {
        F_00c46e20(puVar5,(*(undefined1 * PTR32 *)(gen_frame + 0x14)),0);
LAB_00456d12: ;
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar5;
      }
    }
    else if (uVar10 < uVar1) {
      (*(uint *)(gen_frame + 0x8)) = uVar10;
      if (-(int)((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)))) - 1U < uVar10) goto LAB_0045709a;
      puVar5 = (*(undefined1 * PTR32 *)(gen_frame + 0x10)) + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))) + uVar10;
      puVar3 = (undefined1 *)((*(int *)(gen_frame + 0x18)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10)));
      if (puVar3 < puVar5) {
        if (((undefined1 *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)puVar3) >> 1)))) < puVar3) {
          puVar3 = (undefined1 *)0x0;
        }
        else {
          puVar3 = puVar3 + ((uint)((int)(uintptr_t)puVar3) >> 1);
        }
        if (puVar3 < puVar5) {
          puVar3 = puVar5;
        }
        F_00481c90(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),puVar3);
      }
      puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x10));
      if ((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))) != (undefined1 *)0x0) {
        F_00c48350((*(undefined1 * PTR32 *)(gen_frame + 0x14)),0,(gen_size32)((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)))));
      }
      puVar5 = puVar3 + uVar1;
      goto LAB_00456d12;
    }
    uVar6 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)puVar3;
    puVar3[uVar10] = REFG(undefined1, 0x108f770);
    uVar1 = uVar6 + 1;
    if ((*(char *)(gen_frame + 0x20)) == '\0') {
      if (uVar1 < uVar6) goto LAB_00456d2f;
      if (uVar6 < uVar1) goto LAB_00456d5d;
    }
    else {
      if (uVar1 < uVar6) {
LAB_00456d2f: ;
        puVar5 = puVar3 + uVar1;
        if (puVar5 == (*(undefined1 * PTR32 *)(gen_frame + 0x14))) goto LAB_00456d85;
        F_00c46e20(puVar5,(*(undefined1 * PTR32 *)(gen_frame + 0x14)),0);
      }
      else {
        if (uVar1 <= uVar6) goto LAB_00456d85;
LAB_00456d5d: ;
        F_00482530(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))));
        puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x10));
        if ((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))) != (undefined1 *)0x0) {
          F_00c48350((*(undefined1 * PTR32 *)(gen_frame + 0x14)),0,(gen_size32)((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)))));
        }
        puVar5 = puVar3 + uVar1;
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar5;
    }
LAB_00456d85: ;
    puVar3[uVar6] = 1;
    uVar10 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)puVar3;
    uVar1 = uVar10 + 1;
    (*(uint *)(gen_frame + 0x8)) = uVar10;
    if (uVar1 < uVar10) {
      puVar5 = puVar3 + uVar1;
      if (puVar5 != (*(undefined1 * PTR32 *)(gen_frame + 0x14))) {
        F_00c46e20(puVar5,(*(undefined1 * PTR32 *)(gen_frame + 0x14)),0);
LAB_00456e11: ;
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar5;
      }
    }
    else if (uVar10 < uVar1) {
      if (-(int)(puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)))) - 1U < uVar10) goto LAB_0045709a;
      puVar4 = puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))) + uVar10;
      puVar5 = (undefined1 *)((*(int *)(gen_frame + 0x18)) - (int)puVar3);
      if (puVar5 < puVar4) {
        if (((undefined1 *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)puVar5) >> 1)))) < puVar5) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          puVar5 = puVar5 + ((uint)((int)(uintptr_t)puVar5) >> 1);
        }
        if (puVar5 < puVar4) {
          puVar5 = puVar4;
        }
        F_00481c90(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),puVar5);
        puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x10));
      }
      if (puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))) != (undefined1 *)0x0) {
        F_00c48350((*(undefined1 * PTR32 *)(gen_frame + 0x14)),0,(gen_size32)(puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)))));
      }
      puVar5 = puVar3 + uVar1;
      uVar10 = (*(uint *)(gen_frame + 0x8));
      goto LAB_00456e11;
    }
    *(undefined *)(puVar3 + uVar10) = (*(undefined1 *)(gen_frame + 0x27));
    uVar10 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)puVar3;
    uVar1 = uVar10 + 1;
    (*(undefined1 *)(gen_frame + 0x27)) = *(undefined1 *)pRVar8;
    if (uVar1 < uVar10) {
      puVar5 = puVar3 + uVar1;
      if (puVar5 != (*(undefined1 * PTR32 *)(gen_frame + 0x14))) {
        F_00c46e20(puVar5,(*(undefined1 * PTR32 *)(gen_frame + 0x14)),0);
LAB_00456ea8: ;
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar5;
      }
    }
    else if (uVar10 < uVar1) {
      (*(uint *)(gen_frame + 0x8)) = uVar10;
      if (-(int)(puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)))) - 1U < uVar10) {
LAB_0045709a: ;
                    
        F_00c4579a("vector<T> too long");
      }
      puVar4 = puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))) + uVar10;
      puVar5 = (undefined1 *)((*(int *)(gen_frame + 0x18)) - (int)puVar3);
      if (puVar5 < puVar4) {
        if (((undefined1 *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)puVar5) >> 1)))) < puVar5) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          puVar5 = puVar5 + ((uint)((int)(uintptr_t)puVar5) >> 1);
        }
        if (puVar5 < puVar4) {
          puVar5 = puVar4;
        }
        F_00481c90(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),puVar5);
        puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x10));
      }
      if (puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))) != (undefined1 *)0x0) {
        F_00c48350((*(undefined1 * PTR32 *)(gen_frame + 0x14)),0,(gen_size32)(puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)))));
      }
      puVar5 = puVar3 + uVar1;
      goto LAB_00456ea8;
    }
    uVar6 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)puVar3;
    puVar3[uVar10] = REFG(undefined1, 0x108f774);
    uVar1 = uVar6 + 1;
    if (uVar1 < uVar6) {
      puVar5 = puVar3 + uVar1;
      if (puVar5 != (*(undefined1 * PTR32 *)(gen_frame + 0x14))) {
        F_00c46e20(puVar5,(*(undefined1 * PTR32 *)(gen_frame + 0x14)),0);
LAB_00456f01: ;
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar5;
      }
    }
    else if (uVar6 < uVar1) {
      F_00482530(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),puVar3 + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))));
      puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x10));
      if ((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14))) != (undefined1 *)0x0) {
        F_00c48350((*(undefined1 * PTR32 *)(gen_frame + 0x14)),0,(gen_size32)((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + (uVar1 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)))));
      }
      puVar5 = puVar3 + uVar1;
      goto LAB_00456f01;
    }
    puVar3[uVar6] = 1;
    iVar7 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)puVar3;
    F_00484510(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar7 + 1);
    *(undefined *)((*(undefined1 * PTR32 *)(gen_frame + 0x10)) + iVar7) = (*(undefined1 *)(gen_frame + 0x27));
    (*(undefined1 *)(gen_frame + 0x27)) = pRVar8[0x34];
    F_00489560(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108f778),&(*(undefined1 *)(gen_frame + 0x27)),1);
    (*(undefined1 *)(gen_frame + 0x27)) = pRVar8[0x38];
    F_00489560(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108f77c),&(*(undefined1 *)(gen_frame + 0x27)),1);
    (*(undefined1 *)(gen_frame + 0x27)) = (undefined1)((byte)pRVar8[0x39] >> 1 & 1);
    F_00489560(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108f780),&(*(undefined1 *)(gen_frame + 0x27)),1);
    F_004894f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108f784),pRVar8 + 4,0x30);
    pRVar8 = pRVar8 + 0x40;
    iVar7 = 0xe;
    do {
      F_00c472af(&(*(undefined4 *)(gen_frame + 0x28)),0x10,&REFG(undefined, 0x108f788),*(undefined4 *)(pRVar8 + 8));
      F_004894f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108f790),&(*(undefined4 *)(gen_frame + 0x28)),8);
      F_00c472af(&(*(undefined4 *)(gen_frame + 0x28)),0x10,&REFG(undefined, 0x108f794),(uint)(byte)pRVar8[0xc]);
      F_004894f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108f79c),&(*(undefined4 *)(gen_frame + 0x28)),8);
      (*(undefined1 *)(gen_frame + 0x27)) = (undefined1)((byte)*pRVar8 & 1);
      F_00489560(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108f7a0),&(*(undefined1 *)(gen_frame + 0x27)),1);
      (*(undefined1 *)(gen_frame + 0x27)) = (undefined1)((byte)*pRVar8 >> 1 & 1);
      F_00489560(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108f7a4),&(*(undefined1 *)(gen_frame + 0x27)),1);
      (*(undefined1 *)(gen_frame + 0x27)) = (undefined1)((byte)*pRVar8 >> 2 & 1);
      F_00489560(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x108f7a8),&(*(undefined1 *)(gen_frame + 0x27)),1);
      puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x10));
      pRVar8 = pRVar8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    if (100 < (*(int *)(gen_frame + 0x0))) {
      iVar7 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10));
      if (iVar7 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[3])REFP(0x1090b70))));
        F_00407cf0((undefined *)&(*(undefined * PTR32 *)(gen_frame + 0x4)),(*(undefined1 * PTR32 *)(gen_frame + 0x10)),iVar7,param_1,iVar7 + 1U);
        if (puVar3 != (undefined1 *)0x0) {
          F_00406ad0(puVar3);
        }
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return iVar7 + 1U;
      }
      if ((*(undefined1 * PTR32 *)(gen_frame + 0x10)) != (undefined1 *)0x0) {
        F_00406ad0((*(undefined1 * PTR32 *)(gen_frame + 0x10)));
      }
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return 0;
    }
  } while( true );
}

/* ref: FUN_004570d0 */
byte F_004570d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4570d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * ppuVar4;
  uint uVar5;
  char * pcVar6;
  undefined4 * PTR32 * PTR32 * pppuVar7;
  undefined * puVar8;
  uint uVar9;
  int iVar10;
  char * pcVar11;
  undefined1 * puVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar5 = F_00b00140(this,param_1,&(*(undefined4 *)(gen_frame + 0x8)));
  ppuVar4 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0))[0];
  if (uVar5 != 0) {
    (*(uint *)(gen_frame + 0xe4)) = 0xf;
    (*(uint *)(gen_frame + 0xe0)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0))[0] = (undefined4 * PTR32 *)((uint)ppuVar4 & 0xffffff00);
    F_00484ab0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0)),uVar5,(*(undefined4 *)(gen_frame + 0x8)));
    ppuVar4 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0];
    uVar5 = ((uint *)(gen_frame + 0xb4))[0];
    (*(uint *)(gen_frame + 0x100)) = 0xf;
    (*(undefined4 *)(gen_frame + 0xfc)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] = (undefined4 * PTR32 *)((uint)ppuVar4 & 0xffffff00);
    if (param_5 != (uint *)0x0) {
      (*(uint *)(gen_frame + 0xc8)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xc4)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xb4))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0xb4))[0] = uVar5 & 0xffffff00;
      F_00482a30(((uint *)(gen_frame + 0xb4)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0)),0,8);
      F_004879f0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec)),((uint *)(gen_frame + 0xb4)));
      if (0xf < (*(uint *)(gen_frame + 0xc8))) {
        F_00429760(((uint *)(gen_frame + 0xb4))[0],(*(uint *)(gen_frame + 0xc8)) + 1,0x192);
      }
      pppuVar7 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0];
      if ((*(uint *)(gen_frame + 0x100)) < 0x10) {
        pppuVar7 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec));
      }
      uVar13 = 0x10;
      uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x60)),pppuVar7,REFG(int, 0x108cc50));
      uVar5 = F_00a4cf70(uVar5,uVar13);
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      *param_5 = uVar5;
    }
    uVar5 = ((uint *)(gen_frame + 0xb4))[0];
    (*(uint *)(gen_frame + 0xc8)) = 0xf;
    (*(undefined4 *)(gen_frame + 0xc4)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xb4))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xb4))[0] = uVar5 & 0xffffff00;
    F_00482a30(((uint *)(gen_frame + 0xb4)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0)),8,4);
    F_004879f0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec)),((uint *)(gen_frame + 0xb4)));
    if (0xf < (*(uint *)(gen_frame + 0xc8))) {
      F_00429760(((uint *)(gen_frame + 0xb4))[0],(*(uint *)(gen_frame + 0xc8)) + 1,0x192);
    }
    pppuVar7 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0];
    if ((*(uint *)(gen_frame + 0x100)) < 0x10) {
      pppuVar7 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec));
    }
    uVar13 = 0x10;
    uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x60)),pppuVar7,REFG(int, 0x108cc50));
    uVar5 = F_00a4cf70(uVar5,uVar13);
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    *param_2 = (short)uVar5;
    pcVar6 = (char *)F_0042a990(&REFG(undefined, 0x1372350));
    pcVar11 = pcVar6;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar5 = F_0047b7f0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0)),pcVar6,0xd,(int)pcVar11 - (int)(pcVar6 + 1));
    if (uVar5 != 0xffffffff) {
      if (uVar5 < 0xe) {
        bVar3 = false;
        bVar2 = true;
        puVar8 = &REFG(undefined, 0x108d17f);
        puVar12 = ((undefined1 *)(gen_frame + 0x60));
        iVar10 = REFG(int, 0x108cc50);
      }
      else {
        bVar3 = true;
        bVar2 = false;
        pppuVar7 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0))[0];
        if ((*(uint *)(gen_frame + 0xe4)) < 0x10) {
          pppuVar7 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0));
        }
        iVar10 = uVar5 - 0xd;
        puVar8 = (undefined *)((int)pppuVar7 + 0xd);
        puVar12 = ((undefined1 *)(gen_frame + 0xc));
      }
      uVar9 = F_0042cc20(puVar12,puVar8,iVar10);
      F_0042ccf0(param_3,uVar9);
      if (bVar2) {
        F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      }
      if (bVar3) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      }
      if (uVar5 + 1 < (*(uint *)(gen_frame + 0xe0))) {
        bVar3 = true;
        bVar2 = false;
        pppuVar7 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0))[0];
        if ((*(uint *)(gen_frame + 0xe4)) < 0x10) {
          pppuVar7 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0));
        }
        iVar10 = ((*(uint *)(gen_frame + 0xe0)) - uVar5) + -1;
        puVar8 = (undefined *)((int)pppuVar7 + uVar5 + 1);
        puVar12 = ((undefined1 *)(gen_frame + 0x60));
      }
      else {
        bVar3 = false;
        bVar2 = true;
        puVar8 = &REFG(undefined, 0x108d192);
        puVar12 = ((undefined1 *)(gen_frame + 0xc));
        iVar10 = REFG(int, 0x108cc50);
      }
      uVar5 = F_0042cc20(puVar12,puVar8,iVar10);
      F_0042ccf0(param_4,uVar5);
      if (bVar2) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      }
      if (bVar3) {
        F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      }
      if (0xf < (*(uint *)(gen_frame + 0x100))) {
        F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0],(*(uint *)(gen_frame + 0x100)) + 1,0x192);
      }
      ppuVar4 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0];
      (*(uint *)(gen_frame + 0x100)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xfc)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] = (undefined4 * PTR32 *)((uint)ppuVar4 & 0xffffff00);
      if (0xf < (*(uint *)(gen_frame + 0xe4))) {
        F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0))[0],(*(uint *)(gen_frame + 0xe4)) + 1,0x192);
      }
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return 1;
    }
    if (0xf < (*(uint *)(gen_frame + 0x100))) {
      F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0],(*(uint *)(gen_frame + 0x100)) + 1,0x192);
    }
    ppuVar4 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0];
    (*(uint *)(gen_frame + 0x100)) = 0xf;
    (*(undefined4 *)(gen_frame + 0xfc)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] = (undefined4 * PTR32 *)((uint)ppuVar4 & 0xffffff00);
    if (0xf < (*(uint *)(gen_frame + 0xe4))) {
      F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xd0))[0],(*(uint *)(gen_frame + 0xe4)) + 1,0x192);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: FUN_00457420 */
uint F_00457420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x457420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  char cVar1;
  ushort uVar2;
  int * piVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  undefined4 * puVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  undefined4 * puVar13;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(int *)(gen_frame + 0x30)) = param_1;
  *param_3 = -1;
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_2;
  *param_2 = -1;
  (*(int * PTR32 *)(gen_frame + 0x14)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(int * PTR32 *)(gen_frame + 0x28)) = param_7;
  (*(int *)(gen_frame + 0x24)) = param_6;
  (*(int *)(gen_frame + 0x1c)) = *(int *)((int)this + 0x271c);
  if (param_4 < *(int *)((int)this + 0x271c)) {
    do {
      iVar5 = (*(int *)(gen_frame + 0x30));
      if (param_6 < 1) break;
      piVar3 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x270c);
      iVar12 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x2718);
      piVar10 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
        piVar10 = *(int * PTR32 *)*piVar3;
      }
      uVar6 = param_4 + iVar12;
      if (((piVar10 == (int *)0x0) || ((int *)*piVar10 == (int *)0x0)) ||
         (piVar10 = *(int * PTR32 *)*piVar10, piVar10 == (int *)0x0)) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar10;
      }
      if (*(uint *)(iVar11 + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(iVar11 + 8);
      }
      uVar2 = **((ushort * PTR32 *)GEN_TOP((*(int *)(iVar11 + 4) + uVar6 * 4)));
      if ((*((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x30)) + 0x718) + (uint)(uVar2 >> 5) * 4))) &
          1 << ((byte)uVar2 & 0x1f)) == 0) {
        piVar10 = (int *)0x0;
        if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
          piVar10 = *(int * PTR32 *)*piVar3;
        }
        uVar6 = param_4 + iVar12;
        if (((piVar10 == (int *)0x0) || ((int *)*piVar10 == (int *)0x0)) ||
           (piVar10 = *(int * PTR32 *)*piVar10, piVar10 == (int *)0x0)) {
          iVar11 = 0;
        }
        else {
          iVar11 = *piVar10;
        }
        if (*(uint *)(iVar11 + 8) <= uVar6) {
          uVar6 = uVar6 - *(uint *)(iVar11 + 8);
        }
        param_5 = param_5 - (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar11 + 4) + uVar6 * 4))) + 8 +
                                           (uint)*(byte *)((*(int *)(gen_frame + 0x30)) + 0x753))));
        if (param_5 < 1) {
          piVar10 = (int *)0x0;
          if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
            piVar10 = *(int * PTR32 *)*piVar3;
          }
          uVar6 = iVar12 + param_4;
          if (((piVar10 == (int *)0x0) || ((int *)*piVar10 == (int *)0x0)) ||
             (piVar3 = *(int * PTR32 *)*piVar10, piVar3 == (int *)0x0)) {
            iVar12 = 0;
          }
          else {
            iVar12 = *piVar3;
          }
          if (*(uint *)(iVar12 + 8) <= uVar6) {
            uVar6 = uVar6 - *(uint *)(iVar12 + 8);
          }
          iVar12 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar12 + 4) + uVar6 * 4))) + 4)));
          if (*(*(int * PTR32 *)(gen_frame + 0x10)) < 0) {
            *(*(int * PTR32 *)(gen_frame + 0x10)) = iVar12;
          }
          *(*(int * PTR32 *)(gen_frame + 0x14)) = iVar12;
          puVar9 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x30)) + 0x730);
          cVar1 = *(char *)((int)puVar9[1] + 0x69);
          puVar4 = puVar9;
          puVar13 = (undefined4 *)puVar9[1];
          while (cVar1 == '\0') {
            if ((int)puVar13[3] < iVar12) {
              puVar7 = (undefined4 *)puVar13[2];
              puVar13 = puVar4;
            }
            else {
              puVar7 = (undefined4 *)*puVar13;
            }
            puVar4 = puVar13;
            puVar13 = puVar7;
            cVar1 = *(char *)((int)puVar7 + 0x69);
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar4;
          if ((puVar4 == puVar9) || (iVar12 < (int)puVar4[3])) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = puVar9;
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x2c));
          }
          else {
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
          }
          if (*ppuVar8 == puVar9) {
            (*(undefined4 *)(gen_frame + 0x34)) = 0;
            F_0042cc20(((undefined1 *)(gen_frame + 0x38)),&REFG(undefined, 0x108d193),REFG(undefined4, 0x108cc50));
            (*(int *)(gen_frame + 0x8c)) = iVar12;
            (*(undefined4 *)(gen_frame + 0x90)) = (*(undefined4 *)(gen_frame + 0x34));
            F_0042cbc0(((undefined1 *)(gen_frame + 0x94)),((undefined1 *)(gen_frame + 0x38)));
            puVar9 = (undefined4 *)F_004296a0(0x6c,0,0x192);
            *puVar9 = *(undefined4 *)(iVar5 + 0x730);
            puVar9[1] = *(undefined4 *)(iVar5 + 0x730);
            puVar9[2] = *(undefined4 *)(iVar5 + 0x730);
            *(undefined2 *)(puVar9 + 0x1a) = 0;
            if (puVar9 + 3 != (int *)0x0) {
              puVar9[3] = (*(int *)(gen_frame + 0x8c));
              puVar9[4] = (*(undefined4 *)(gen_frame + 0x90));
              F_0042cbc0(puVar9 + 5,((undefined1 *)(gen_frame + 0x94)));
            }
            F_00488480((undefined *)(iVar5 + 0x72c),((undefined1 *)(gen_frame + 0x8)),puVar9,0);
            F_0042c880(((undefined1 *)(gen_frame + 0x94)));
            F_0042c880(((undefined1 *)(gen_frame + 0x38)));
          }
          param_6 = param_6 + -1;
        }
      }
      param_4 = param_4 + 1;
    } while (param_4 < (*(int *)(gen_frame + 0x1c)));
  }
  *(*(int * PTR32 *)(gen_frame + 0x28)) = param_4;
  uVar6 = (*(int *)(gen_frame + 0x24)) - param_6;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar6;
}

/* ref: FUN_00457700 */
ushort F_00457700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x457700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  int * param_8 = (int *)(uintptr_t)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  int iVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * PTR32 * ppuVar10;
  undefined4 * puVar11;
  int * piVar12;
  int iVar13;
  int * piVar14;
  undefined4 * puVar15;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(int * PTR32 *)(gen_frame + 0x18)) = param_7;
  (*(int *)(gen_frame + 0x2c)) = param_1;
  *param_8 = -1;
  *param_3 = -1;
  (*(int * PTR32 *)(gen_frame + 0x14)) = param_2;
  *param_2 = -1;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_3;
  (*(int * PTR32 *)(gen_frame + 0x20)) = param_8;
  (*(int *)(gen_frame + 0x24)) = param_6;
  iVar1 = param_4;
  iVar6 = (*(int *)(gen_frame + 0x2c));
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x30));
  while (((*(int *)(gen_frame + 0x2c)) = iVar6, (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar7, -1 < iVar1 && (0 < param_6))) {
    piVar14 = *(int * PTR32 *)((int)this + 0x270c);
    piVar12 = (int *)0x0;
    if ((piVar14 != (int *)0x0) && ((undefined4 *)*piVar14 != (undefined4 *)0x0)) {
      piVar12 = *(int * PTR32 *)*piVar14;
    }
    uVar8 = *(int *)((int)this + 0x2718) + iVar1;
    if (((piVar12 == (int *)0x0) || ((int *)*piVar12 == (int *)0x0)) ||
       (piVar12 = *(int * PTR32 *)*piVar12, piVar12 == (int *)0x0)) {
      iVar13 = 0;
    }
    else {
      iVar13 = *piVar12;
    }
    if (*(uint *)(iVar13 + 8) <= uVar8) {
      uVar8 = uVar8 - *(uint *)(iVar13 + 8);
    }
    uVar3 = **((ushort * PTR32 *)GEN_TOP((*(int *)(iVar13 + 4) + uVar8 * 4)));
    if ((*((uint *)GEN_TOP((*(int *)(iVar6 + 0x718) + (uint)(uVar3 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) ==
        0) {
      piVar12 = (int *)0x0;
      if ((piVar14 != (int *)0x0) && ((undefined4 *)*piVar14 != (undefined4 *)0x0)) {
        piVar12 = *(int * PTR32 *)*piVar14;
      }
      uVar8 = *(int *)((int)this + 0x2718) + iVar1;
      if (((piVar12 == (int *)0x0) || ((int *)*piVar12 == (int *)0x0)) ||
         (piVar14 = *(int * PTR32 *)*piVar12, piVar14 == (int *)0x0)) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar14;
      }
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      param_5 = param_5 + (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar13 + 4) + uVar8 * 4))) + 8 +
                                         (uint)*(byte *)(iVar6 + 0x753))));
      if (-1 < param_5) {
        if (*(*(int * PTR32 *)(gen_frame + 0x20)) < 0) {
          *(*(int * PTR32 *)(gen_frame + 0x20)) = iVar1;
        }
        piVar14 = (int *)0x0;
        if ((*(int * PTR32 *)((int)pvVar7 + 0x270c) != (int *)0x0) &&
           (puVar11 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)pvVar7 + 0x270c))), puVar11 != (undefined4 *)0x0))
        {
          piVar14 = (int *)*puVar11;
        }
        uVar8 = *(int *)((int)pvVar7 + 0x2718) + iVar1;
        if (((piVar14 == (int *)0x0) || ((int *)*piVar14 == (int *)0x0)) ||
           (piVar14 = *(int * PTR32 *)*piVar14, piVar14 == (int *)0x0)) {
          iVar13 = 0;
        }
        else {
          iVar13 = *piVar14;
        }
        if (*(uint *)(iVar13 + 8) <= uVar8) {
          uVar8 = uVar8 - *(uint *)(iVar13 + 8);
        }
        iVar13 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar13 + 4) + uVar8 * 4))) + 4)));
        if (*(*(int * PTR32 *)(gen_frame + 0x10)) < 0) {
          *(*(int * PTR32 *)(gen_frame + 0x10)) = iVar13;
        }
        *(*(int * PTR32 *)(gen_frame + 0x14)) = iVar13;
        puVar11 = *(undefined4 * PTR32 *)(iVar6 + 0x730);
        cVar2 = *(char *)((int)puVar11[1] + 0x69);
        puVar5 = puVar11;
        puVar15 = (undefined4 *)puVar11[1];
        while (cVar2 == '\0') {
          if ((int)puVar15[3] < iVar13) {
            puVar9 = (undefined4 *)puVar15[2];
            puVar15 = puVar5;
          }
          else {
            puVar9 = (undefined4 *)*puVar15;
          }
          puVar5 = puVar15;
          puVar15 = puVar9;
          cVar2 = *(char *)((int)puVar9 + 0x69);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar5;
        if ((puVar5 == puVar11) || (iVar13 < (int)puVar5[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar11;
          ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
        }
        else {
          ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x28));
        }
        if (*ppuVar10 == puVar11) {
          (*(undefined4 *)(gen_frame + 0x34)) = 0;
          F_0042cc20(((undefined1 *)(gen_frame + 0x38)),&REFG(undefined, 0x108d1bf),REFG(undefined4, 0x108cc50));
          (*(int *)(gen_frame + 0x8c)) = iVar13;
          (*(undefined4 *)(gen_frame + 0x90)) = (*(undefined4 *)(gen_frame + 0x34));
          F_0042cbc0(((undefined1 *)(gen_frame + 0x94)),((undefined1 *)(gen_frame + 0x38)));
          puVar11 = (undefined4 *)F_004296a0(0x6c,0,0x192);
          *puVar11 = *(undefined4 *)(iVar6 + 0x730);
          puVar11[1] = *(undefined4 *)(iVar6 + 0x730);
          puVar11[2] = *(undefined4 *)(iVar6 + 0x730);
          *(undefined2 *)(puVar11 + 0x1a) = 0;
          if (puVar11 + 3 != (int *)0x0) {
            puVar11[3] = (*(int *)(gen_frame + 0x8c));
            puVar11[4] = (*(undefined4 *)(gen_frame + 0x90));
            F_0042cbc0(puVar11 + 5,((undefined1 *)(gen_frame + 0x94)));
          }
          F_00488480((undefined *)(iVar6 + 0x72c),((undefined1 *)(gen_frame + 0x8)),puVar11,0);
          F_0042c880(((undefined1 *)(gen_frame + 0x94)));
          F_0042c880(((undefined1 *)(gen_frame + 0x38)));
        }
        param_6 = param_6 + -1;
      }
    }
    iVar1 = iVar1 + -1;
    this = pvVar7;
    iVar6 = (*(int *)(gen_frame + 0x2c));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x30));
  }
  sVar4 = (short)(*(int *)(gen_frame + 0x24));
  *(*(int * PTR32 *)(gen_frame + 0x18)) = iVar1;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return sVar4 - (short)param_6;
}

/* ref: FUN_004579f0 */
uint F_004579f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4579f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (*(uint *)&gen_args[4]);
  iVar2 = (*(int *)&gen_args[1]);
  *(int *)((*(int *)&gen_args[1]) + 0x74c) = (*(int *)&gen_args[2]);
  *(short *)((*(int *)&gen_args[1]) + 0x750) = (short)(*(uint *)&gen_args[4]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x271c)));
  if (iVar1 != 0) {
    uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2718)));
    if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270c))) == (int *)0x0) {
      (*(int *)&gen_args[1]) = 0;
    }
    else {
      (*(int *)&gen_args[1]) = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270c)));
    }
    if (*(uint *)((*(int *)&gen_args[1]) + 8) <= uVar5) {
      uVar5 = uVar5 - *(uint *)((*(int *)&gen_args[1]) + 8);
    }
    (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) - *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 4) + uVar5 * 4))) + 4)));
    if (iVar1 < (*(int *)&gen_args[2])) {
      uVar3 = F_00457700((*(undefined * PTR32 *)&gen_args[0]),iVar2,iVar2 + 0x744,iVar2 + 0x748,iVar1 + -1,0,(*(uint *)&gen_args[4]),&(*(int *)&gen_args[1]),
                           &(*(int *)&gen_args[5]));
      *(ushort *)(iVar2 + 0x700) = uVar3;
      F_00457700((*(undefined * PTR32 *)&gen_args[0]),iVar2,iVar2 + 0x73c,&(*(int *)&gen_args[2]),(*(int *)&gen_args[1]),0,0x1e,&(*(int *)&gen_args[5]),&(*(int *)&gen_args[1]));
      *(undefined4 *)(iVar2 + 0x740) = *(undefined4 *)(iVar2 + 0x748);
      *(undefined1 *)(iVar2 + 0x752) = 1;
    }
    else if ((*(int *)&gen_args[2]) < 0) {
      uVar4 = F_00457420((*(undefined * PTR32 *)&gen_args[0]),iVar2,iVar2 + 0x744,iVar2 + 0x748,0,0,(*(uint *)&gen_args[4]),&(*(int *)&gen_args[3]));
      *(short *)(iVar2 + 0x700) = (short)uVar4;
      *(int *)(iVar2 + 0x73c) = *(int *)(iVar2 + 0x744) + -1;
      uVar4 = F_00457420((*(undefined * PTR32 *)&gen_args[0]),iVar2,&(*(int *)&gen_args[2]),iVar2 + 0x740,(*(int *)&gen_args[3]),0,0x1e,&(*(int *)&gen_args[5]));
      *(bool *)(iVar2 + 0x752) = uVar4 == 0;
    }
    else {
      if ((char)(*(int *)&gen_args[5]) != '\0') {
        uVar5 = F_00457420((*(undefined * PTR32 *)&gen_args[0]),iVar2,iVar2 + 0x744,iVar2 + 0x748,(*(int *)&gen_args[2]),(*(int *)&gen_args[3]),1,&(*(int *)&gen_args[5]));
        *(short *)(iVar2 + 0x700) = (short)uVar5;
        if ((short)uVar5 != 0) {
          (*(int *)&gen_args[2]) = (*(int *)&gen_args[5]) + -1;
          (*(int *)&gen_args[3]) = 0;
        }
      }
      uVar3 = F_00457700((*(undefined * PTR32 *)&gen_args[0]),iVar2,iVar2 + 0x744,iVar2 + 0x748,(*(int *)&gen_args[2]),(*(int *)&gen_args[3]),uVar4,&(*(int *)&gen_args[1]),
                           &(*(int *)&gen_args[3]));
      *(ushort *)(iVar2 + 0x700) = uVar3;
      if (uVar3 < uVar4) {
        uVar4 = F_00457420((*(undefined * PTR32 *)&gen_args[0]),iVar2,&(*(int *)&gen_args[5]),&(*(int *)&gen_args[2]),(*(int *)&gen_args[3]) + 1,0,uVar4 - uVar3,&(*(int *)&gen_args[3]));
        *(short *)(iVar2 + 0x700) = *(short *)(iVar2 + 0x700) + (short)uVar4;
        if (*(int *)(iVar2 + 0x744) < 0) {
          *(int *)(iVar2 + 0x744) = (*(int *)&gen_args[5]);
        }
        if (-1 < (*(int *)&gen_args[2])) {
          *(int *)(iVar2 + 0x748) = (*(int *)&gen_args[2]);
        }
      }
      else if ((*(int *)&gen_args[3]) < 0) {
        (*(int *)&gen_args[3]) = (*(int *)&gen_args[2]);
      }
      F_00457700((*(undefined * PTR32 *)&gen_args[0]),iVar2,iVar2 + 0x73c,&(*(int *)&gen_args[2]),(*(int *)&gen_args[1]),0,0x1e,&(*(int *)&gen_args[5]),&(*(int *)&gen_args[1]));
      uVar4 = F_00457420((*(undefined * PTR32 *)&gen_args[0]),iVar2,&(*(int *)&gen_args[2]),iVar2 + 0x740,(*(int *)&gen_args[3]),0,0x1e,&(*(int *)&gen_args[5]));
      *(bool *)(iVar2 + 0x752) = uVar4 == 0;
    }
    F_0042aca0(iVar2 + 0x54);
    uVar4 = F_0044ead0((*(undefined * PTR32 *)&gen_args[0]),iVar2);
    return uVar4;
  }
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x6f8) = 0;
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x6fc) = 0;
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x6e8) = 0;
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x6ec) = 0;
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x6f0) = 0;
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x6f4) = 0;
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x744) = 0xffffffff;
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x748) = 0xffffffff;
  *(undefined2 *)((*(int *)&gen_args[1]) + 0x700) = 0;
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x73c) = 0xffffffff;
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x740) = 0xffffffff;
  *(undefined1 *)((*(int *)&gen_args[1]) + 0x752) = 1;
  return 0xffffffff;
}

/* ref: Client::UI::Misc::RaptureMacroModule::vf2 */
uint F_00457cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x457cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined1 uVar6;
  int iVar1;
  uint uVar2;
  undefined * in_ecx;
  uint uVar3;
  undefined * pRVar4;
  int iVar5;
  undefined * pRVar7;
  undefined * pRVar8;
  undefined * pRVar9;
  int iVar10;
  undefined * pRVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  pRVar9 = (undefined *)0x0;
  pRVar11 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 (*)[1])REFP(0x1091268));
  (*(char *)(gen_frame + 0x40)) = '\0';
  (*(int *)(gen_frame + 0x14)) = 0;
  do {
    iVar1 = (*(int *)(gen_frame + 0x14)) * 100;
    (*(uint *)(gen_frame + 0x18)) = 0;
    do {
      (*(undefined * PTR32 *)(gen_frame + 0x48)) = (*(undefined * PTR32 *)(gen_frame + 0x10)) + (iVar1 + (*(uint *)(gen_frame + 0x18))) * 0x544;
      uVar2 = F_0042a970((*(undefined * PTR32 *)(gen_frame + 0x10)) + (iVar1 + (*(uint *)(gen_frame + 0x18))) * 0x544 + 0x40);
      in_ecx = (*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x94;
      (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (undefined *)(uVar2 + 1 & 0xffff);
      (*(undefined * PTR32 *)(gen_frame + 0x54)) = in_ecx;
      (*(undefined * PTR32 *)(gen_frame + 0x50)) = (undefined *)0xf;
      uVar2 = 0;
      do {
        uVar3 = F_0042a970((*(undefined * PTR32 *)(gen_frame + 0x54)));
        pRVar7 = (*(undefined * PTR32 *)(gen_frame + 0x48));
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (*(undefined * PTR32 *)(gen_frame + 0x54)) + 0x54;
        pRVar8 = (*(undefined * PTR32 *)(gen_frame + 0x50)) + -1;
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = pRVar8;
        uVar2 = uVar2 + 1 + uVar3;
      } while (pRVar8 != (undefined *)0x0);
      if ((uVar2 & 0xffff) + ((uint)(*(undefined * PTR32 *)(gen_frame + 0x4c)) & 0xffff) < 0xac9) {
        uVar2 = F_0042a970((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x40);
        (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (undefined *)(uVar2 + 1 & 0xffff);
        pRVar4 = (undefined *)F_0042a990(pRVar7 + 0x40);
        pRVar7 = pRVar11 - (int)pRVar9;
        pRVar8 = pRVar7 + 1;
        (*(undefined * PTR32 *)(gen_frame + 0x44)) = pRVar4;
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = pRVar7;
        if (pRVar8 < pRVar7) {
          pRVar8 = pRVar9 + (int)pRVar8;
          (*(undefined * PTR32 *)(gen_frame + 0x54)) = pRVar8;
          if (pRVar8 != pRVar11) {
            F_00c46e20(pRVar8,pRVar11,0);
            pRVar11 = (*(undefined * PTR32 *)(gen_frame + 0x54));
LAB_00457e8b: ;
            (*(undefined * PTR32 *)(gen_frame + 0x34)) = pRVar11;
          }
        }
        else if (pRVar7 < pRVar8) {
          if (((undefined *)GEN_TOP((-1 - (int)(pRVar8 + ((int)pRVar9 - (int)pRVar11))))) < pRVar7)
          goto LAB_004582de;
          pRVar4 = (*(undefined * PTR32 *)(gen_frame + 0x38)) - (int)pRVar9;
          pRVar7 = pRVar7 + (int)(pRVar8 + ((int)pRVar9 - (int)pRVar11));
          (*(undefined * PTR32 *)(gen_frame + 0x54)) = pRVar4;
          if (pRVar4 < pRVar7) {
            if (((undefined *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)pRVar4) >> 1)))) < pRVar4) {
              pRVar8 = (undefined *)0x0;
            }
            else {
              pRVar8 = pRVar4 + ((uint)((int)(uintptr_t)pRVar4) >> 1);
            }
            if (pRVar8 < pRVar7) {
              pRVar8 = pRVar7;
            }
            if (pRVar4 < pRVar8) {
              (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x0;
              if (pRVar8 != (undefined *)0x0) {
                pRVar11 = (undefined *)F_004069f0(pRVar8);
                (*(undefined * PTR32 *)(gen_frame + 0x54)) = pRVar11;
                if (pRVar11 == (undefined *)0x0) goto LAB_00457e27;
              }
              F_00c46e20((*(undefined * PTR32 *)(gen_frame + 0x54)),pRVar9,(*(undefined * PTR32 *)(gen_frame + 0x50)));
              if (pRVar9 != (undefined *)0x0) {
                F_00406ad0(pRVar9);
              }
              (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x54)) + (int)pRVar8;
              pRVar11 = (*(undefined * PTR32 *)(gen_frame + 0x54)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x50));
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)(gen_frame + 0x54));
              pRVar9 = (*(undefined * PTR32 *)(gen_frame + 0x54));
            }
          }
          pRVar7 = (*(undefined * PTR32 *)(gen_frame + 0x50));
          if ((*(undefined * PTR32 *)(gen_frame + 0x50)) + (int)(pRVar9 + (1 - (int)pRVar11)) != (undefined *)0x0) {
            F_00c48350(pRVar11,0,(gen_size32)((*(undefined * PTR32 *)(gen_frame + 0x50)) + (int)(pRVar9 + (1 - (int)pRVar11))));
          }
          pRVar11 = pRVar9 + 1 + (int)pRVar7;
          goto LAB_00457e8b;
        }
        pRVar9[(int)pRVar7] = REFG(undefined1, 0x108f854);
        pRVar7 = pRVar11 - (int)pRVar9;
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((uint)(*(undefined * PTR32 *)(gen_frame + 0x4c)) & 0xffff);
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = pRVar7;
        pRVar8 = pRVar7 + 2;
        if ((*(char *)(gen_frame + 0x40)) == '\0') {
          if (pRVar8 < pRVar7) goto LAB_00457ec5;
          if (pRVar7 < pRVar8) {
            if (((undefined *)GEN_TOP((-1 - (int)(pRVar9 + ((int)pRVar8 - (int)pRVar11))))) < pRVar7)
            goto LAB_004582de;
            pRVar7 = pRVar7 + (int)(pRVar9 + ((int)pRVar8 - (int)pRVar11));
            pRVar4 = (*(undefined * PTR32 *)(gen_frame + 0x38)) - (int)pRVar9;
            if (pRVar4 < pRVar7) {
              if (((undefined *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)pRVar4) >> 1)))) < pRVar4) {
                pRVar4 = (undefined *)0x0;
              }
              else {
                pRVar4 = pRVar4 + ((uint)((int)(uintptr_t)pRVar4) >> 1);
              }
              if (pRVar4 < pRVar7) {
                pRVar4 = pRVar7;
              }
              F_00481c90(&(*(undefined * PTR32 *)(gen_frame + 0x30)),pRVar4);
              pRVar9 = (*(undefined * PTR32 *)(gen_frame + 0x30));
              pRVar11 = (*(undefined * PTR32 *)(gen_frame + 0x34));
            }
            if (pRVar9 + ((int)pRVar8 - (int)pRVar11) != (undefined *)0x0) {
              F_00c48350(pRVar11,0,(gen_size32)(pRVar9 + ((int)pRVar8 - (int)pRVar11)));
            }
            pRVar8 = pRVar8 + (int)pRVar9;
            goto LAB_00457fac;
          }
        }
        else {
          uVar6 = (undefined1)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x4c))) >> 8);
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x28)) + 0)) = uVar6;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x28)) + 1)) = (char)(*(undefined * PTR32 *)(gen_frame + 0x4c));
          (*(ushort *)(gen_frame + 0x28)) = CONCAT11((char)(*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar6);
          (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)(uint)(*(ushort *)(gen_frame + 0x28));
          if (pRVar8 < pRVar7) {
LAB_00457ec5: ;
            pRVar8 = pRVar8 + (int)pRVar9;
            if (pRVar8 == pRVar11) goto LAB_00457fb2;
            F_00c46e20(pRVar8,pRVar11,0);
          }
          else {
            if (pRVar8 <= pRVar7) goto LAB_00457fb2;
            if (((undefined *)GEN_TOP((-1 - (int)(pRVar8 + ((int)pRVar9 - (int)pRVar11))))) < pRVar7)
            goto LAB_004582de;
            pRVar7 = pRVar7 + (int)(pRVar8 + ((int)pRVar9 - (int)pRVar11));
            pRVar4 = (*(undefined * PTR32 *)(gen_frame + 0x38)) - (int)pRVar9;
            if (pRVar4 < pRVar7) {
              if (((undefined *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)pRVar4) >> 1)))) < pRVar4) {
                pRVar4 = (undefined *)0x0;
              }
              else {
                pRVar4 = pRVar4 + ((uint)((int)(uintptr_t)pRVar4) >> 1);
              }
              if (pRVar4 < pRVar7) {
                pRVar4 = pRVar7;
              }
              F_00481c90(&(*(undefined * PTR32 *)(gen_frame + 0x30)),pRVar4);
              pRVar9 = (*(undefined * PTR32 *)(gen_frame + 0x30));
              pRVar11 = (*(undefined * PTR32 *)(gen_frame + 0x34));
            }
            if (pRVar8 + ((int)pRVar9 - (int)pRVar11) != (undefined *)0x0) {
              F_00c48350(pRVar11,0,(gen_size32)(pRVar8 + ((int)pRVar9 - (int)pRVar11)));
            }
            pRVar8 = pRVar9 + (int)pRVar8;
          }
LAB_00457fac: ;
          (*(undefined * PTR32 *)(gen_frame + 0x34)) = pRVar8;
          pRVar7 = (*(undefined * PTR32 *)(gen_frame + 0x50));
          pRVar11 = pRVar8;
        }
LAB_00457fb2: ;
        *(undefined2 *)(pRVar9 + (int)pRVar7) = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0));
        uVar2 = (uint)(*(undefined * PTR32 *)(gen_frame + 0x4c)) & 0xffff;
        pRVar7 = pRVar11 - (int)pRVar9;
        pRVar8 = pRVar7 + uVar2;
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = pRVar7;
        (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pRVar8;
        if (pRVar8 < pRVar7) {
          pRVar8 = pRVar8 + (int)pRVar9;
          if (pRVar8 != pRVar11) {
            F_00c46e20(pRVar8,pRVar11,0);
LAB_004580a5: ;
            (*(undefined * PTR32 *)(gen_frame + 0x34)) = pRVar8;
            pRVar11 = pRVar8;
          }
        }
        else if (pRVar7 < pRVar8) {
          if (((undefined *)GEN_TOP((-1 - (int)(pRVar9 + ((int)pRVar8 - (int)pRVar11))))) < pRVar7)
          goto LAB_004582de;
          pRVar4 = (*(undefined * PTR32 *)(gen_frame + 0x38)) - (int)pRVar9;
          pRVar7 = pRVar7 + (int)(pRVar9 + ((int)pRVar8 - (int)pRVar11));
          (*(undefined * PTR32 *)(gen_frame + 0x54)) = pRVar4;
          if (pRVar4 < pRVar7) {
            if (((undefined *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)pRVar4) >> 1)))) < pRVar4) {
              pRVar8 = (undefined *)0x0;
            }
            else {
              pRVar8 = pRVar4 + ((uint)((int)(uintptr_t)pRVar4) >> 1);
            }
            if (pRVar8 < pRVar7) {
              pRVar8 = pRVar7;
            }
            if (pRVar4 < pRVar8) {
              (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x0;
              if (pRVar8 != (undefined *)0x0) {
                pRVar11 = (undefined *)F_004069f0(pRVar8);
                (*(undefined * PTR32 *)(gen_frame + 0x54)) = pRVar11;
                if (pRVar11 == (undefined *)0x0) goto LAB_00457e27;
              }
              F_00c46e20((*(undefined * PTR32 *)(gen_frame + 0x54)),pRVar9,(*(undefined * PTR32 *)(gen_frame + 0x50)));
              if (pRVar9 != (undefined *)0x0) {
                F_00406ad0(pRVar9);
              }
              (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x54)) + (int)pRVar8;
              pRVar11 = (*(undefined * PTR32 *)(gen_frame + 0x54)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x50));
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)(gen_frame + 0x54));
              pRVar9 = (*(undefined * PTR32 *)(gen_frame + 0x54));
            }
          }
          if (pRVar9 + ((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) - (int)pRVar11) != (undefined *)0x0) {
            F_00c48350(pRVar11,0,(gen_size32)(pRVar9 + ((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) - (int)pRVar11)));
          }
          pRVar8 = (*(undefined * PTR32 *)(gen_frame + 0x4c)) + (int)pRVar9;
          goto LAB_004580a5;
        }
        F_00c46aa0((*(undefined * PTR32 *)(gen_frame + 0x50)) + (int)pRVar9,(*(undefined * PTR32 *)(gen_frame + 0x44)),uVar2);
        F_00c472af(&(*(undefined4 *)(gen_frame + 0x58)),0x10,&REFG(undefined, 0x108f858),*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x3c));
        uVar2 = (int)pRVar11 - (int)pRVar9;
        if (uVar2 + 1 < uVar2) {
          pRVar8 = pRVar9 + uVar2 + 1;
          (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pRVar8;
          if (pRVar8 != pRVar11) {
            F_00c46e20(pRVar8,pRVar11,0);
            pRVar11 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
LAB_004581d2: ;
            (*(undefined * PTR32 *)(gen_frame + 0x34)) = pRVar11;
          }
        }
        else if (uVar2 < uVar2 + 1) {
          if (-(int)(pRVar9 + ((uVar2 + 1) - (int)pRVar11)) - 1U < uVar2) {
LAB_004582de: ;
                    
            F_00c4579a("vector<T> too long");
          }
          pRVar7 = pRVar9 + ((uVar2 + 1) - (int)pRVar11) + uVar2;
          pRVar8 = (*(undefined * PTR32 *)(gen_frame + 0x38)) - (int)pRVar9;
          (*(undefined * PTR32 *)(gen_frame + 0x44)) = pRVar7;
          (*(undefined * PTR32 *)(gen_frame + 0x54)) = pRVar8;
          if (pRVar8 < pRVar7) {
            if (((undefined *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)pRVar8) >> 1)))) < pRVar8) {
              pRVar4 = (undefined *)0x0;
            }
            else {
              pRVar4 = pRVar8 + ((uint)((int)(uintptr_t)pRVar8) >> 1);
            }
            (*(undefined * PTR32 *)(gen_frame + 0x50)) = pRVar4;
            if (pRVar4 < pRVar7) {
              (*(undefined * PTR32 *)(gen_frame + 0x50)) = pRVar7;
            }
            if (pRVar8 < (*(undefined * PTR32 *)(gen_frame + 0x50))) {
              (*(undefined * PTR32 *)(gen_frame + 0x48)) = (undefined *)0x0;
              if ((*(undefined * PTR32 *)(gen_frame + 0x50)) != (undefined *)0x0) {
                pRVar11 = (undefined *)F_004069f0((*(undefined * PTR32 *)(gen_frame + 0x50)));
                (*(undefined * PTR32 *)(gen_frame + 0x48)) = pRVar11;
                if (pRVar11 == (undefined *)0x0) {
LAB_00457e27: ;
                  (*(undefined4 *)(gen_frame + 0x20)) = 0;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
                  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                }
              }
              F_00c46e20((*(undefined * PTR32 *)(gen_frame + 0x48)),pRVar9,uVar2);
              if (pRVar9 != (undefined *)0x0) {
                F_00406ad0(pRVar9);
              }
              (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x48)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x50));
              pRVar11 = (*(undefined * PTR32 *)(gen_frame + 0x48)) + uVar2;
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)(gen_frame + 0x48));
              pRVar9 = (*(undefined * PTR32 *)(gen_frame + 0x48));
            }
          }
          if (pRVar9 + ((uVar2 + 1) - (int)pRVar11) != (undefined *)0x0) {
            F_00c48350(pRVar11,0,(gen_size32)(pRVar9 + ((uVar2 + 1) - (int)pRVar11)));
          }
          pRVar11 = pRVar9 + uVar2 + 1;
          goto LAB_004581d2;
        }
        pRVar9[uVar2] = REFG(undefined1, 0x108f860);
        (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0x8;
        if ((*(char *)(gen_frame + 0x40)) != '\0') {
          (*(undefined2 *)(gen_frame + 0x24)) = 0x800;
          (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0x800;
        }
        F_00484510(&(*(undefined * PTR32 *)(gen_frame + 0x30)),((int)pRVar11 - (int)pRVar9) + 2);
        iVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x34)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x30));
        *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)(gen_frame + 0x30)) + ((int)pRVar11 - (int)pRVar9)))) = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0));
        F_00484510(&(*(undefined * PTR32 *)(gen_frame + 0x30)),iVar10 + 8);
        *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + iVar10) = (*(undefined4 *)(gen_frame + 0x58));
        *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + iVar10 + 4) = (*(undefined4 *)(gen_frame + 0x5c));
        iVar10 = 0xf;
        do {
          uVar2 = F_0042a970(in_ecx);
          iVar5 = uVar2 + 1;
          uVar2 = F_0042a990(in_ecx);
          F_00489460(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x2c)),&REFG(undefined, 0x108f864),uVar2,iVar5);
          in_ecx = in_ecx + 0x54;
          iVar10 = iVar10 + -1;
          pRVar9 = (*(undefined * PTR32 *)(gen_frame + 0x30));
          pRVar11 = (*(undefined * PTR32 *)(gen_frame + 0x34));
        } while (iVar10 != 0);
      }
      uVar2 = (*(uint *)(gen_frame + 0x18)) + 1;
      (*(uint *)(gen_frame + 0x18)) = uVar2;
    } while (uVar2 < 100);
    iVar1 = (*(int *)(gen_frame + 0x14)) + 1;
    (*(int *)(gen_frame + 0x14)) = iVar1;
    if (iVar1 != 0) {
      iVar1 = (int)pRVar11 - (int)pRVar9;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
      pRVar11 = (undefined *)&REFG(undefined, 0x10e522d);
      if (iVar1 != 0) {
        pRVar11 = pRVar9;
      }
      F_00407cf0((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),pRVar11,iVar1,(*(undefined4 *)(gen_frame + 0x20)),iVar1 + 1U);
      (*(undefined * PTR32 *)(gen_frame + 0x10))[0x2c] = (undefined1)0x0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x109073c));
      if (pRVar9 != (undefined *)0x0) {
        F_00406ad0(pRVar9);
      }
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return iVar1 + 1U;
    }
  } while( true );
}

/* ref: FUN_004582f0 */
uint F_004582f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4582f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x109024c),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_2,((undefined1 *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  if (((*(int *)(gen_frame + 0x4)) - (*(int *)(gen_frame + 0x0))) / 0x54 == 2) {
    uVar1 = F_00a4cf70((*(int *)(gen_frame + 0x0)),10);
    uVar2 = F_00a4cf70((*(int *)(gen_frame + 0x0)) + 0x54,10);
    if (uVar1 == 0) goto LAB_004583a9;
  }
  else {
    uVar1 = F_00a4cf70(param_2,10);
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    F_0077c260((*(undefined * PTR32 *)(gen_frame + 0x10)),uVar1,uVar2);
  }
LAB_004583a9: ;
  uVar1 = F_004876d0(&(*(int *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyPartyMember::vf5 */
uint F_00458910(unsigned int gen_a0)
{
  GEN_ENTER(0x458910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined * this_01;
  int iVar8;
  int iVar9;
  int * piVar10;
  __time64_t _Var11;
  ulonglong uVar12;
  
  iVar9 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  if (uVar2 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)(uVar2 - 1);
  }
  if (*(int *)(this + 8) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = **(int * PTR32 *)(this + 0x18);
    iVar9 = (*(int * PTR32 *)(this + 0x18))[1];
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
  if (*(int *)(uVar2 + 0x48) == 0 && *(int *)(uVar2 + 0x4c) == 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 8) + 8))) == 0) {
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 0x18)));
      uVar7 = *puVar1;
      uVar6 = puVar1[1];
    }
    *(undefined4 *)(uVar2 + 0x48) = uVar7;
    *(undefined4 *)(uVar2 + 0x4c) = uVar6;
  }
  if ((iVar8 != *(int *)(uVar2 + 0x48)) || (iVar9 != *(int *)(uVar2 + 0x4c))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
    *(undefined4 *)(uVar2 + 0x48) = 0;
    *(undefined4 *)(uVar2 + 0x4c) = 0;
    F_0042aca0(uVar2 + 0x50);
  }
  if ((*(int * PTR32 *)(gen_frame + 0x44)) == (int *)0x0) {
    iVar9 = *(int *)(this + 0x24);
    if (*(int *)(this + 0x20) != iVar9) {
      uVar2 = F_0047d100(iVar9,iVar9,*(int *)(this + 0x20),(*(int * PTR32 *)(gen_frame + 0x38)));
      *(uint *)(this + 0x24) = uVar2;
    }
    uVar2 = F_0044b730(this,1,0);
    return uVar2;
  }
  this_00 = this + 0x20;
  F_00488a40(&(*(int * PTR32 *)(gen_frame + 0x20)),this_00);
  iVar9 = *(int *)(this + 0x24);
  if (*(int *)this_00 != iVar9) {
    uVar2 = F_0047d100(iVar9,iVar9,*(int *)this_00,(*(int * PTR32 *)(gen_frame + 0x38)));
    *(uint *)(this + 0x24) = uVar2;
  }
  (*(char *)(gen_frame + 0x4b)) = '\x01';
  (*(int * PTR32 *)(gen_frame + 0x40)) = (*(int * PTR32 *)(gen_frame + 0x20));
  this_01 = this;
  if ((*(int * PTR32 *)(gen_frame + 0x20)) != (*(int * PTR32 *)(gen_frame + 0x24))) {
    do {
      (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
      if ((*(int * PTR32 *)(gen_frame + 0x44)) != (int *)0x0) {
        piVar4 = *(int * PTR32 *)(this_01 + 0x18) + 0x19;
        piVar5 = *(int * PTR32 *)(this_01 + 0x18);
        do {
          piVar10 = piVar5 + 0x12;
          piVar3 = piVar4;
          do {
            iVar9 = *piVar3;
            piVar3 = (int *)((int)piVar3 + 1);
          } while ((char)iVar9 != '\0');
          F_0040b1a0(((undefined1 *)(gen_frame + 0x30)),piVar4,(int)piVar3 - ((int)piVar4 + 1));
          if ((((*(*(int * PTR32 *)(gen_frame + 0x40)) == *piVar10) && ((*(int * PTR32 *)(gen_frame + 0x40))[1] == piVar5[0x13])) &&
              (uVar2 = F_00408810(((undefined1 *)(gen_frame + 0x30))), (*(int * PTR32 *)(gen_frame + 0x40))[4] == uVar2)) &&
             (*(byte *)((*(int * PTR32 *)(gen_frame + 0x40)) + 5) == (byte)((uint)piVar4[-3] >> 0x1c))) {
            iVar9 = piVar5[0x16];
            piVar4 = (int *)F_00408810(((undefined1 *)(gen_frame + 0x30)));
            (*(int * PTR32 *)(gen_frame + 0x38)) = piVar4;
            (*(int *)(gen_frame + 0x8)) = *piVar10;
            (*(int *)(gen_frame + 0xc)) = piVar5[0x13];
            (*(undefined1 *)(gen_frame + 0x10)) = 1;
            (*(undefined1 *)(gen_frame + 0x12)) = 0;
            _Var11 = F_00c4b7c2((__time64_t *)0x0);
            (*(undefined4 *)(gen_frame + 0x14)) = (int)_Var11;
            (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x38));
            (*(byte *)(gen_frame + 0x1c)) = (byte)((uint)iVar9 >> 0x1c);
            F_0048a100(this_00,&(*(int *)(gen_frame + 0x8)));
            *((char *)GEN_TOP((*(int *)this_00 + -0xe +
                     ((*(int *)(this + 0x24) - *(int *)this_00) / 0x18) * 0x18))) = (*(char *)(gen_frame + 0x4b));
            *((char *)GEN_TOP((*(int *)this_00 + -0xf +
                     ((*(int *)(this + 0x24) - *(int *)this_00) / 0x18) * 0x18))) = (*(char *)(gen_frame + 0x4b));
            (*(char *)(gen_frame + 0x4b)) = (*(char *)(gen_frame + 0x4b)) + '\x01';
            F_004087f0(((undefined1 *)(gen_frame + 0x30)));
            this_01 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
            break;
          }
          F_004087f0(((undefined1 *)(gen_frame + 0x30)));
          piVar3 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 1);
          piVar4 = piVar4 + 0x12;
          (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
          this_01 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
          piVar5 = piVar10;
        } while (piVar3 < (*(int * PTR32 *)(gen_frame + 0x44)));
      }
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x40)) + 6;
      (*(int * PTR32 *)(gen_frame + 0x40)) = piVar4;
    } while (piVar4 != (*(int * PTR32 *)(gen_frame + 0x24)));
  }
  if ((((int *)GEN_TOP(((*(int *)(this + 0x24) - *(int *)this_00) / 0x18))) != (*(int * PTR32 *)(gen_frame + 0x44))) &&
     ((*(int * PTR32 *)(gen_frame + 0x44)) != (int *)0x0)) {
    (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x44));
    piVar4 = *(int * PTR32 *)(this_01 + 0x18);
    do {
      piVar3 = piVar4 + 0x12;
      piVar5 = piVar4 + 0x19;
      do {
        iVar9 = *piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
      } while ((char)iVar9 != '\0');
      F_0040b1a0(((undefined1 *)(gen_frame + 0x30)),piVar4 + 0x19,(int)piVar5 - ((int)piVar4 + 0x65));
      piVar5 = *(int * PTR32 *)this_00;
      if (piVar5 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x24)) {
        do {
          if (((*piVar5 == *piVar3) && (piVar5[1] == piVar4[0x13])) &&
             ((uVar2 = F_00408810(((undefined1 *)(gen_frame + 0x30))), piVar5[4] == uVar2 &&
              (*(byte *)(piVar5 + 5) == (byte)((uint)piVar4[0x16] >> 0x1c))))) goto LAB_00458c63;
          piVar5 = piVar5 + 6;
        } while (piVar5 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x24));
      }
      iVar9 = piVar4[0x16];
      piVar5 = (int *)F_00408810(((undefined1 *)(gen_frame + 0x30)));
      (*(int * PTR32 *)(gen_frame + 0x40)) = piVar5;
      (*(int *)(gen_frame + 0x8)) = *piVar3;
      (*(int *)(gen_frame + 0xc)) = piVar4[0x13];
      (*(undefined1 *)(gen_frame + 0x10)) = 1;
      (*(undefined1 *)(gen_frame + 0x12)) = 0;
      _Var11 = F_00c4b7c2((__time64_t *)0x0);
      (*(undefined4 *)(gen_frame + 0x14)) = (int)_Var11;
      (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x40));
      (*(byte *)(gen_frame + 0x1c)) = (byte)((uint)iVar9 >> 0x1c);
      F_0048a100(this_00,&(*(int *)(gen_frame + 0x8)));
      *((char *)GEN_TOP((*(int *)this_00 + -0xe + ((*(int *)(this + 0x24) - *(int *)this_00) / 0x18) * 0x18)))
           = (*(char *)(gen_frame + 0x4b));
      *((char *)GEN_TOP((*(int *)this_00 + -0xf + ((*(int *)(this + 0x24) - *(int *)this_00) / 0x18) * 0x18)))
           = (*(char *)(gen_frame + 0x4b));
      (*(char *)(gen_frame + 0x4b)) = (*(char *)(gen_frame + 0x4b)) + '\x01';
LAB_00458c63: ;
      F_004087f0(((undefined1 *)(gen_frame + 0x30)));
      piVar5 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x38)) + -1);
      (*(int * PTR32 *)(gen_frame + 0x38)) = piVar5;
      this_01 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
      piVar4 = piVar3;
    } while (piVar5 != (int *)0x0);
  }
  uVar2 = F_0044b730(this_01,1,1);
  if ((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) {
    uVar12 = F_00429760((*(int * PTR32 *)(gen_frame + 0x20)),(((*(int *)(gen_frame + 0x28)) - (int)(*(int * PTR32 *)(gen_frame + 0x20))) / 0x18) * 0x18,400);
    uVar2 = (uint)uVar12;
  }
  return uVar2;
}

/* ref: FUN_00458cd0 */
uint F_00458cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x458cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  F_00c49908((int)this + 0x20,0xc,"LOGFLTR.DAT");
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1091324));
  iVar2 = (int)this + 0x30;
  param_1 = 3;
  do {
    F_00401500(iVar2,1,0x97,((code *)REFP(0x46f260)));
    iVar2 = iVar2 + 0x97;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x294) = 0;
  uVar1 = F_004296a0(0x10,0,400);
  *(uint *)((int)this + 0x290) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x290) + 4))) = *(int *)((int)this + 0x290);
  *((int *)GEN_TOP((*(int *)((int)this + 0x290) + 8))) = *(int *)((int)this + 0x290);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x290) + 0xd))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x290) + 0xe))) = 1;
  *(undefined4 *)((int)this + 0x29c) = 0;
  return (uint)this;
}

/* ref: FUN_00458d90 */
uint F_00458d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x458d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  *(byte *)((int)this + 8) = (byte)param_2;
  uVar3 = (uint)(byte)param_2;
  if (uVar3 == 3) {
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_3 >> 0x10);
    uVar3 = 0;
    if (pvVar5 != (undefined *)0x0) {
      uVar4 = param_3 & 0xffff;
LAB_00458e2b: ;
      pvVar5 = (undefined *)F_00a37da0(pvVar5,uVar4);
      uVar3 = 0;
      if (pvVar5 != (undefined *)0x0) {
        uVar4 = F_0046e5e0(pvVar5);
        uVar3 = 0;
        if (uVar4 != 0) {
          *(undefined1 *)((int)this + 8) = 2;
LAB_00458e48: ;
          uVar3 = F_0046e5e0(pvVar5);
          *(uint *)this = uVar3;
        }
      }
    }
  }
  else if (uVar3 == 5) {
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
    uVar3 = 0;
    if (pvVar5 != (undefined *)0x0) {
      pvVar5 = (undefined *)F_00a37da0(pvVar5,param_3);
      uVar3 = 0;
      if (pvVar5 != (undefined *)0x0) {
        uVar4 = F_0046e5e0(pvVar5);
        uVar3 = 0;
        if (uVar4 != 0) {
          *(undefined1 *)((int)this + 8) = 4;
          goto LAB_00458e48;
        }
      }
    }
  }
  else {
    uVar3 = uVar3 - 0xe;
    if (uVar3 == 0) {
      pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d1);
      uVar3 = 0;
      uVar4 = param_3;
      if (pvVar5 != (undefined *)0x0) goto LAB_00458e2b;
    }
    else {
      *(uint *)this = param_3;
    }
  }
  cVar1 = *(char *)((int)this + 8);
  uVar4 = CONCAT31((int3)(uVar3 >> 8),cVar1);
  uVar3 = *(uint *)this;
  *(char *)((int)this + 9) = cVar1;
  *(uint *)((int)this + 4) = uVar3;
  if (cVar1 != '\a') goto LAB_00458f56;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1);
  pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1)));
  uVar3 = F_00abe8a0(pvVar5,((uVar3 >> 8 & 0xff) * 100 + (uVar3 & 0xff)) * 0x544 + 0x94 + uVar4,
                       ((short *)(gen_frame + 0x8)));
  if (((uVar3 == 0) && (((short *)(gen_frame + 0x8))[0] == 0xcf)) && (-1 < (int)(*(uint *)(gen_frame + 0xc)))) {
    iVar6 = *(int *)(&REFG(undefined, 0x12fe6d4) + ((int)(*(uint *)(gen_frame + 0xc)) >> 0x18) * 4);
    uVar3 = (*(uint *)(gen_frame + 0xc)) & 0xffffff;
    if (iVar6 == 1) {
      *(undefined1 *)((int)this + 9) = 1;
      uVar4 = F_00ac1b60(uVar3);
LAB_00458f2d: ;
      *(uint *)((int)this + 4) = uVar4;
    }
    else if (iVar6 == 5) {
      if (uVar3 == 2) {
        *(undefined1 *)((int)this + 9) = 1;
        *(undefined4 *)((int)this + 4) = 0x5c;
        iVar6 = 1;
      }
      else {
        *(undefined1 *)((int)this + 9) = 10;
        *(uint *)((int)this + 4) = uVar3;
      }
    }
    else if (iVar6 == 9) {
      *(undefined1 *)((int)this + 9) = 9;
      uVar4 = F_00ac1cb0(uVar3);
      goto LAB_00458f2d;
    }
    bVar2 = F_00ac78f0(&REFG(undefined, 0x14bcf40),iVar6,uVar3);
    if (bVar2 == 0) {
      *(undefined1 *)((int)this + 9) = *(undefined1 *)((int)this + 8);
      *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
    }
  }
  uVar4 = F_004876d0(&(*(undefined4 *)(gen_frame + 0x18)));
LAB_00458f56: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_00458f70 */
uint F_00458f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x458f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = ((undefined4 *)GEN_TOP(((param_1 * 0x10 + param_2) * 0x164 + 0x48 + (int)this)));
  this_00[1] = 0;
  *this_00 = 0;
  this_00[0x2d] = 0;
  *(undefined2 *)(this_00 + 2) = 0;
  *(undefined1 *)((int)this_00 + 10) = 0xff;
  *(undefined1 *)((int)this_00 + 0xb) = 0xff;
  this_00[0x2e] = 0xfffffffe;
  F_0042aca0(this_00 + 3);
  F_0042aca0(this_00 + 0x2f);
  F_0043ab20(this_00,param_3);
  F_00458d90(this_00,*(undefined4 *)((int)this + 0x34),(uint)*(byte *)(this_00 + 2),param_4);
  uVar1 = (uint)*(byte *)((int)this + 0x39);
  if ((*(uint *)((int)this + 0x40) & 1 << ((byte)param_1 & 0x1f)) != 0) {
    uVar1 = 0;
  }
  iVar2 = (param_1 + uVar1 * 0x12) * 0x10 + param_2;
  *(undefined1 *)((int)this + iVar2 * 8 + 0x1bd4c) = *(undefined1 *)(this_00 + 2);
  uVar1 = (int)this + iVar2 * 8 + 0x1bd4c;
  *(undefined4 *)(uVar1 + 4) = *this_00;
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar1;
}

/* ref: FUN_00459030 */
uint F_00459030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x459030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = ((undefined4 *)GEN_TOP(((param_1 * 0x10 + param_2) * 0x164 + 0x48 + (int)this)));
  this_00[1] = 0;
  *this_00 = 0;
  this_00[0x2d] = 0;
  *(undefined2 *)(this_00 + 2) = 0;
  *(undefined1 *)((int)this_00 + 10) = 0xff;
  *(undefined1 *)((int)this_00 + 0xb) = 0xff;
  this_00[0x2e] = 0xfffffffe;
  F_0042aca0(this_00 + 3);
  F_0042aca0(this_00 + 0x2f);
  F_00458d90(this_00,*(undefined4 *)((int)this + 0x34),param_3,param_4);
  uVar1 = (uint)*(byte *)((int)this + 0x39);
  if ((*(uint *)((int)this + 0x40) & 1 << ((byte)param_1 & 0x1f)) != 0) {
    uVar1 = 0;
  }
  iVar2 = (param_1 + uVar1 * 0x12) * 0x10 + param_2;
  *(undefined1 *)((int)this + iVar2 * 8 + 0x1bd4c) = *(undefined1 *)(this_00 + 2);
  uVar1 = (int)this + iVar2 * 8 + 0x1bd4c;
  *(undefined4 *)(uVar1 + 4) = *this_00;
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar1;
}

/* ref: FUN_004590e0 */
uint F_004590e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4590e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00459030(this,param_1,param_2,7,
                       (uint)CONCAT11((undefined1)param_3,(undefined1)param_4));
  return uVar1;
}

/* ref: FUN_00459110 */
uint F_00459110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x459110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * this_00;
  uint uVar1;
  
  this_00 = (undefined4 *)(param_1 * 0x164 + 0x190c8 + (int)this);
  *(undefined1 *)((int)this_00 + 10) = 0xff;
  *(undefined1 *)((int)this_00 + 0xb) = 0xff;
  *(undefined2 *)(this_00 + 2) = 0;
  this_00[1] = 0;
  *this_00 = 0;
  this_00[0x2d] = 0;
  this_00[0x2e] = 0xfffffffe;
  F_0042aca0(this_00 + 3);
  F_0042aca0(this_00 + 0x2f);
  uVar1 = F_00458d90(this_00,*(undefined4 *)((int)this + 0x34),param_2,param_3);
  return uVar1;
}

/* ref: FUN_00459180 */
uint F_00459180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x459180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * this_00;
  uint uVar1;
  
  this_00 = (undefined4 *)(param_1 * 0x164 + 0x1a708 + (int)this);
  *(undefined1 *)((int)this_00 + 10) = 0xff;
  *(undefined1 *)((int)this_00 + 0xb) = 0xff;
  *(undefined2 *)(this_00 + 2) = 0;
  this_00[1] = 0;
  *this_00 = 0;
  this_00[0x2d] = 0;
  this_00[0x2e] = 0xfffffffe;
  F_0042aca0(this_00 + 3);
  F_0042aca0(this_00 + 0x2f);
  uVar1 = F_00458d90(this_00,*(undefined4 *)((int)this + 0x34),param_2,param_3);
  return uVar1;
}

/* ref: FUN_004591f0 */
uint F_004591f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4591f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  if (param_1 == *(byte *)((int)this + 0x39)) {
    uVar1 = F_00459030(this,param_2,param_3,param_4,param_5);
    F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
    return uVar1;
  }
  ((undefined4 *)(gen_frame + 0x4))[0] = 0;
  (*(undefined1 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0xe)) = 0xff;
  F_0042b630(((undefined1 *)(gen_frame + 0x10)));
  F_0042b630(((undefined1 *)(gen_frame + 0x64)));
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0xfffffffe;
  F_0042b630(((undefined1 *)(gen_frame + 0xc0)));
  F_0042b630(((undefined1 *)(gen_frame + 0x114)));
  F_00458d90(((undefined4 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x34),param_4,param_5);
  uVar1 = param_1;
  if ((*(uint *)((int)this + 0x40) & 1 << ((byte)param_2 & 0x1f)) != 0) {
    uVar1 = 0;
  }
  iVar2 = (param_2 + uVar1 * 0x12) * 0x10 + param_3;
  *(undefined1 *)((int)this + iVar2 * 8 + 0x1bd4c) = (*(undefined1 *)(gen_frame + 0xc));
  *(undefined4 *)((int)this + iVar2 * 8 + 0x1bd50) = ((undefined4 *)(gen_frame + 0x4))[0];
  *(undefined1 *)((int)this + 0x2c) = 1;
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return (uint)uVar3;
}

/* ref: FUN_00459330 */
uint F_00459330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x459330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined4 * puVar3;
  byte * pbVar4;
  
  uVar1 = CONCAT11((undefined1)param_1,(undefined1)param_2);
  uVar2 = (uint)*(byte *)((int)this + 0x39) * 0x900;
  pbVar4 = (byte *)(uVar2 + 0x1bd4c + (int)this);
  puVar3 = (undefined4 *)((int)this + 0x50);
  param_2 = 0x12;
  do {
    param_1 = 0x10;
    do {
      if ((*pbVar4 == 7) && (*(uint *)(pbVar4 + 4) == (uint)uVar1)) {
        puVar3[-1] = 0;
        puVar3[-2] = 0;
        *puVar3 = 0xffff0000;
        puVar3[0x2b] = 0;
        puVar3[0x2c] = 0xfffffffe;
        F_0042aca0(puVar3 + 1);
        F_0042aca0(puVar3 + 0x2d);
        uVar2 = F_00458d90(puVar3 + -2,*(undefined4 *)((int)this + 0x34),(uint)*pbVar4,
                             *(undefined4 *)(pbVar4 + 4));
        *(undefined1 *)((int)this + 0x2c) = 1;
      }
      puVar3 = puVar3 + 0x59;
      pbVar4 = pbVar4 + 8;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uVar2;
}

/* ref: FUN_004593f0 */
unsigned int F_004593f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4593f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  byte * pbVar2;
  int local_10;
  int local_c;
  
  pbVar2 = ((byte *)GEN_TOP(((uint)*(byte *)((int)this + 0x39) * 0x900 + 0x1bd4c + (int)this)));
  puVar1 = (undefined4 *)((int)this + 0x50);
  local_10 = 0x12;
  do {
    local_c = 0x10;
    do {
      if ((*pbVar2 == 0xf) && (*(int *)(pbVar2 + 4) == param_1)) {
        puVar1[-1] = 0;
        puVar1[-2] = 0;
        *puVar1 = 0xffff0000;
        puVar1[0x2b] = 0;
        puVar1[0x2c] = 0xfffffffe;
        F_0042aca0(puVar1 + 1);
        F_0042aca0(puVar1 + 0x2d);
        F_00458d90(puVar1 + -2,*(undefined4 *)((int)this + 0x34),(uint)*pbVar2,
                     *(undefined4 *)(pbVar2 + 4));
        *(undefined1 *)((int)this + 0x2c) = 1;
      }
      puVar1 = puVar1 + 0x59;
      pbVar2 = pbVar2 + 8;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  return 0;
}

/* ref: FUN_004594a0 */
unsigned int F_004594a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4594a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int * piVar2;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  piVar2 = (int *)((int)this + 0x1bd50);
  do {
    puVar1 = (undefined4 *)((int)this + 0x50);
    local_14 = 0x12;
    do {
      local_10 = 0x10;
      do {
        if ((char)piVar2[-1] == '\x0f') {
          if (*piVar2 == param_1) {
            *piVar2 = param_2;
          }
          else if (*piVar2 == param_2) {
            *piVar2 = param_1;
          }
          if (local_c == *(byte *)((int)this + 0x39)) {
            puVar1[-1] = 0;
            puVar1[-2] = 0;
            puVar1[0x2b] = 0;
            *puVar1 = 0xffff0000;
            puVar1[0x2c] = 0xfffffffe;
            F_0042aca0(puVar1 + 1);
            F_0042aca0(puVar1 + 0x2d);
            F_00458d90(puVar1 + -2,*(undefined4 *)((int)this + 0x34),(uint)*(byte *)(piVar2 + -1),
                         *piVar2);
            *(undefined1 *)((int)this + 0x2c) = 1;
          }
        }
        puVar1 = puVar1 + 0x59;
        piVar2 = piVar2 + 2;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_c = local_c + 1;
  } while ((int)local_c < 0x1d);
  return 0;
}

/* ref: FUN_00459590 */
uint F_00459590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x459590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  byte * pbVar4;
  
  iVar2 = param_1;
  if ((*(uint *)((int)this + 0x40) & 1 << ((byte)param_2 & 0x1f)) != 0) {
    iVar2 = 0;
  }
  pbVar4 = (byte *)((int)this + param_2 * 0x80 + iVar2 * 0x900 + 0x1bd4c);
  puVar3 = (undefined4 *)(param_2 * 0x1640 + 0x50 + (int)this);
  param_2 = 0x10;
  do {
    puVar3[-1] = 0;
    puVar3[-2] = 0;
    *puVar3 = 0xffff0000;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0xfffffffe;
    F_0042aca0(puVar3 + 1);
    F_0042aca0(puVar3 + 0x2d);
    uVar1 = F_00458d90(puVar3 + -2,*(undefined4 *)((int)this + 0x34),(uint)*pbVar4,
                         *(undefined4 *)(pbVar4 + 4));
    puVar3 = puVar3 + 0x59;
    pbVar4 = pbVar4 + 8;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uVar1;
}

/* ref: FUN_00459650 */
uint F_00459650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x459650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte * pbVar4;
  undefined4 * puVar5;
  byte * pbVar6;
  
  if ((param_1 != param_3) || (uVar2 = param_4, param_2 != param_4)) {
    bVar3 = *(byte *)((int)this + 0x39);
    if ((*(uint *)((int)this + 0x40) & 1 << ((byte)param_4 & 0x1f)) != 0) {
      bVar3 = 0;
    }
    pbVar4 = (byte *)((int)this + param_2 * 0x80 + param_1 * 0x900 + 0x1bd4c);
    pbVar6 = (byte *)((int)this + param_4 * 0x80 + param_3 * 0x900 + 0x1bd4c);
    uVar2 = param_4 * 0x1640;
    puVar5 = (undefined4 *)(uVar2 + 0x50 + (int)this);
    param_4 = 0x10;
    do {
      bVar1 = *pbVar4;
      uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
      if ((*pbVar6 != bVar1) || (*(int *)(pbVar6 + 4) != *(int *)(pbVar4 + 4))) {
        *pbVar6 = bVar1;
        uVar2 = *(uint *)(pbVar4 + 4);
        *(uint *)(pbVar6 + 4) = uVar2;
        if (bVar3 == param_3) {
          puVar5[-1] = 0;
          puVar5[-2] = 0;
          *puVar5 = 0xffff0000;
          puVar5[0x2b] = 0;
          puVar5[0x2c] = 0xfffffffe;
          F_0042aca0(puVar5 + 1);
          F_0042aca0(puVar5 + 0x2d);
          uVar2 = F_00458d90(puVar5 + -2,*(undefined4 *)((int)this + 0x34),(uint)*pbVar6,
                               *(undefined4 *)(pbVar6 + 4));
        }
        *(undefined1 *)((int)this + 0x2c) = 1;
      }
      pbVar4 = pbVar4 + 8;
      puVar5 = puVar5 + 0x59;
      pbVar6 = pbVar6 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return uVar2;
}

/* ref: FUN_00459760 */
uint F_00459760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x459760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  if ((char)param_2 != '\0') {
    *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) | uVar1;
    uVar1 = F_00459590(this,(uint)*(byte *)((int)this + 0x39),(uint)(byte)param_1);
    return uVar1;
  }
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) & ~uVar1;
  uVar1 = F_00459590(this,(uint)*(byte *)((int)this + 0x39),(uint)(byte)param_1);
  return uVar1;
}

/* ref: FUN_004597a0 */
uint F_004597a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4597a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_1 & 0xff) + 10;
  uVar2 = 1 << ((byte)iVar1 & 0x1f);
  if ((char)param_2 != '\0') {
    *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) | uVar2;
    uVar2 = F_00459590(this,(uint)*(byte *)((int)this + 0x39),iVar1);
    return uVar2;
  }
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) & ~uVar2;
  uVar2 = F_00459590(this,(uint)*(byte *)((int)this + 0x39),iVar1);
  return uVar2;
}

/* ref: FUN_004597f0 */
uint F_004597f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4597f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 * puVar5;
  int iVar6;
  uint * puVar7;
  undefined * pvVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x1;
  ((uint *)(gen_frame + 0x0))[0] = 0xd;
  ((uint *)(gen_frame + 0x0))[1] = 0xc;
  ((uint *)(gen_frame + 0x0))[2] = 3;
  ((uint *)(gen_frame + 0x0))[3] = 2;
  iVar6 = 0;
  while( true ) {
    uVar1 = ((uint *)(gen_frame + 0x0))[(int)(iVar6)];
    uVar3 = F_00ab1f30(uVar1);
    bVar2 = F_00ac2200(5,uVar1);
    pvVar4 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    if ((uVar3 != 0) && (bVar2 != 0)) break;
    iVar6 = iVar6 + 1;
    if (1 < iVar6) {
LAB_00459854: ;
      if (*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x3c) != (*(undefined * PTR32 *)(gen_frame + 0x14))) {
        puVar7 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x1bd50);
        ((uint *)(gen_frame + 0x0))[1] = 0x1d;
        do {
          puVar5 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x50);
          ((uint *)(gen_frame + 0x0))[3] = 0x12;
          do {
            ((uint *)(gen_frame + 0x0))[4] = 0x10;
            do {
              if (((char)puVar7[-1] == '\n') &&
                 ((pvVar4 = (undefined *)*puVar7, pvVar4 == (undefined *)0xc || (pvVar4 == (undefined *)0xd)))) {
                puVar5[-1] = 0;
                puVar5[-2] = 0;
                *puVar5 = 0xffff0000;
                puVar5[0x2b] = 0;
                puVar5[0x2c] = 0xfffffffe;
                F_0042aca0(puVar5 + 1);
                F_0042aca0(puVar5 + 0x2d);
                if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == (undefined *)0x1) {
                  *(undefined1 *)(puVar7 + -1) = 0;
                  *puVar7 = 0;
                }
                else if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == (undefined *)0x2) {
                  *(undefined1 *)(puVar7 + -1) = 10;
                  *puVar7 = 0xc;
                  F_00458d90(puVar5 + -2,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x34),10,0xc);
                }
                else if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == (undefined *)0x3) {
                  *(undefined1 *)(puVar7 + -1) = 10;
                  *puVar7 = 0xd;
                  F_00458d90(puVar5 + -2,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x34),10,0xd);
                }
                *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x2c) = 1;
                pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x18));
              }
              puVar5 = puVar5 + 0x59;
              puVar7 = puVar7 + 2;
              iVar6 = ((uint *)(gen_frame + 0x0))[4] + -1;
              ((uint *)(gen_frame + 0x0))[4] = iVar6;
            } while (iVar6 != 0);
            iVar6 = ((uint *)(gen_frame + 0x0))[3] + -1;
            ((uint *)(gen_frame + 0x0))[3] = iVar6;
          } while (iVar6 != 0);
          iVar6 = ((uint *)(gen_frame + 0x0))[1] + -1;
          ((uint *)(gen_frame + 0x0))[1] = iVar6;
        } while (iVar6 != 0);
        *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x3c) = (*(undefined * PTR32 *)(gen_frame + 0x14));
      }
      return (uint)pvVar4;
    }
  }
  pvVar4 = (undefined *)((uint *)(gen_frame + 0x0))[(int)(iVar6 + 2)];
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar4;
  goto LAB_00459854;
}

/* ref: FUN_00459980 */
unsigned int F_00459980(unsigned int gen_a0)
{
  GEN_ENTER(0x459980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_18;
  int local_14;
  int local_10;
  
  uVar2 = (uint)REFG(undefined1, 0x14ab29a);
  if (*(uint *)((int)this + 0x2c250) != uVar2) {
    piVar4 = (int *)((int)this + 0x1bd50);
    local_18 = 0x1d;
    do {
      puVar3 = (undefined4 *)((int)this + 0x50);
      local_14 = 0x12;
      do {
        local_10 = 0x10;
        do {
          if (((char)piVar4[-1] != '\x06') ||
             (((iVar1 = *piVar4, iVar1 != 0x37 && (iVar1 != 0x38)) && (iVar1 != 0x39))))
          goto LAB_00459ab3;
          if (uVar2 == 1) {
            bVar5 = iVar1 == 0x37;
LAB_00459a07: ;
            if (bVar5) goto LAB_00459ab3;
          }
          else {
            if (uVar2 == 2) {
              bVar5 = iVar1 == 0x38;
              goto LAB_00459a07;
            }
            if (uVar2 == 3) {
              bVar5 = iVar1 == 0x39;
              goto LAB_00459a07;
            }
          }
          puVar3[-1] = 0;
          puVar3[-2] = 0;
          *puVar3 = 0xffff0000;
          puVar3[0x2b] = 0;
          puVar3[0x2c] = 0xfffffffe;
          F_0042aca0(puVar3 + 1);
          F_0042aca0(puVar3 + 0x2d);
          switch((unsigned int)(uintptr_t)(uVar2)) {
          case 0: ;
            *(undefined1 *)(piVar4 + -1) = 0;
            *piVar4 = 0;
            goto switchD_00459a4b_default;
          case 1: ;
            uVar7 = 0x37;
            *(undefined1 *)(piVar4 + -1) = 6;
            *piVar4 = 0x37;
            uVar6 = *(undefined4 *)((int)this + 0x34);
            break;
          case 2: ;
            uVar7 = 0x38;
            *(undefined1 *)(piVar4 + -1) = 6;
            *piVar4 = 0x38;
            uVar6 = *(undefined4 *)((int)this + 0x34);
            break;
          case 3: ;
            uVar7 = 0x39;
            *(undefined1 *)(piVar4 + -1) = 6;
            *piVar4 = 0x39;
            uVar6 = *(undefined4 *)((int)this + 0x34);
            break;
          default: ;
            goto switchD_00459a4b_default;
          }
          F_00458d90(puVar3 + -2,uVar6,6,uVar7);
switchD_00459a4b_default: ;
          *(undefined1 *)((int)this + 0x2c) = 1;
LAB_00459ab3: ;
          puVar3 = puVar3 + 0x59;
          piVar4 = piVar4 + 2;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    *(uint *)((int)this + 0x2c250) = uVar2;
  }
  return 0;
}

/* ref: FUN_00459b00 */
uint F_00459b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x459b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  undefined * pLVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  undefined * this_00;
  uint uVar13;
  bool bVar14;
  __time64_t _Var15;
  undefined1 * puVar16;
  undefined * puVar17;
  undefined * this_01;
  
  ((uint *)(gen_frame + 0x290))[2] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x29c);
  uVar13 = (uint)(ushort)param_1;
  (*(int *)(gen_frame + 0x24)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(int *)(gen_frame + 0x28)) = param_2;
  uVar4 = F_0043b6e0(this,uVar13);
  if (uVar4 == 2) {
    F_00c47745(((uint *)(gen_frame + 0x290))[2] ^ (uint)(uint)(gen_frame + 0x29c));
    return 0;
  }
  this_01 = (undefined *)((int)this + 0x208);
  F_0042ccf0(this_01,(*(int *)(gen_frame + 0x24)));
  if (((ushort)((ushort)param_1 - 10) < 0x15) &&
     (F_0043be20(*(undefined * PTR32 *)((int)this + 0x5c),this_01), uVar13 == 0xd)) {
    (*(int *)(gen_frame + 0x24)) = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
    uVar4 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x142);
    (*(uint *)(gen_frame + 0x1c)) = *(int *)(uVar4 + 0x14);
    uVar4 = F_00414500((*(int *)(gen_frame + 0x24)),0x151);
    if (*(int *)(uVar4 + 0x14) != 0) {
      F_0043f8b0((*(uint *)(gen_frame + 0x1c)) + 0x25);
    }
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x184)),(*(int *)(gen_frame + 0x28)));
  if ((uVar13 != 0x3d) && (uVar13 != 0x44)) {
    F_00446ec0(this,(*(int *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x184)));
  }
  uVar4 = param_4;
  if (param_4 == 0) {
    uVar4 = F_00424810(REFG(int, 0x137104c));
    if (uVar4 == 0) {
      _Var15 = F_00c4b7c2((__time64_t *)0x0);
      uVar4 = (uint)_Var15;
    }
    else {
      uVar4 = F_00476000();
    }
  }
  this_00 = (undefined *)((int)this + 100);
  (*(uint *)(gen_frame + 0x1c)) = uVar13;
  F_0042d000(this_00,"%08X%04X",uVar4,uVar13);
  puVar16 = ((undefined1 *)(gen_frame + 0x184));
  pvVar5 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x34)),&REFG(undefined, 0x1372350));
  uVar4 = F_0042e360(pvVar5,puVar16);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x88)),uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x34)));
  puVar17 = &REFG(undefined, 0x1372350);
  pvVar5 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x238)),((undefined1 *)(gen_frame + 0x88)));
  uVar4 = F_0042e360(pvVar5,puVar17);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x130)),uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x238)));
  pvVar5 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x1dc)),((undefined1 *)(gen_frame + 0x130)));
  uVar4 = F_0042e360(pvVar5,this_01);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xdc)),uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1dc)));
  F_0042e360(this_00,((undefined1 *)(gen_frame + 0xdc)));
  F_0042c880(((undefined1 *)(gen_frame + 0xdc)));
  F_0042c880(((undefined1 *)(gen_frame + 0x130)));
  F_0042c880(((undefined1 *)(gen_frame + 0x88)));
  pLVar1 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  uVar4 = F_00b00060((*(undefined * PTR32 *)(gen_frame + 0x14)),this_00);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  (*(uint *)(gen_frame + 0x20)) = 0xffff;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  ((ushort *)(gen_frame + 0x28c))[0] = (ushort)param_1;
  ((uint *)(gen_frame + 0x290))[0] = uVar4;
  ((uint *)(gen_frame + 0x290))[1] = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pLVar1 + 0x270c;
  F_00488850(pLVar1 + 0x270c,((ushort *)(gen_frame + 0x28c)));
  pLVar1 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  while( true ) {
    uVar4 = *(uint *)(pLVar1 + 0xc);
    if (*(int * PTR32 *)pLVar1 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = **(int * PTR32 *)pLVar1;
    }
    if (*(uint *)(iVar11 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar11 + 8);
    }
    iVar11 = *((int *)GEN_TOP((*(int *)(iVar11 + 4) + uVar4 * 4)));
    uVar4 = F_00b00040((*(undefined * PTR32 *)(gen_frame + 0x14)));
    if ((int)uVar4 <= *(int *)(iVar11 + 4)) break;
    piVar10 = *(int * PTR32 *)pLVar1;
    uVar4 = *(uint *)(pLVar1 + 0xc);
    if (piVar10 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *piVar10;
    }
    uVar13 = uVar4;
    if (*(uint *)(iVar11 + 8) <= uVar4) {
      uVar13 = uVar4 - *(uint *)(iVar11 + 8);
    }
    (*(uint *)(gen_frame + 0x20)) = (uint)**((ushort * PTR32 *)GEN_TOP((*(int *)(iVar11 + 4) + uVar13 * 4)));
    iVar11 = 0;
    if (piVar10 != (int *)0x0) {
      iVar11 = *piVar10;
    }
    if (*(uint *)(iVar11 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar11 + 8);
    }
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar11 + 4) + uVar4 * 4))) + 4)));
    if (*(int *)(pLVar1 + 0x10) != 0) {
      *(int *)(pLVar1 + 0xc) = *(int *)(pLVar1 + 0xc) + 1;
      if (*(uint *)(pLVar1 + 8) <= *(uint *)(pLVar1 + 0xc)) {
        *(int *)(pLVar1 + 0xc) = 0;
      }
      iVar11 = *(int *)(pLVar1 + 0x10) + -1;
      *(int *)(pLVar1 + 0x10) = iVar11;
      if (iVar11 == 0) {
        *(int *)(pLVar1 + 0xc) = 0;
      }
    }
  }
  uVar4 = ((*(uint *)(gen_frame + 0x1c)) >> 5) * 4;
  bVar3 = (byte)(*(uint *)(gen_frame + 0x1c));
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  do {
    iVar11 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x24)) * 0x754 + 0x980);
    bVar14 = (*(uint *)(iVar11 + uVar4) & 1 << (bVar3 & 0x1f)) != 0;
    pLVar1 = (*(undefined * PTR32 *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x24)) * 0x754 + 0x268;
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pLVar1;
    (*(int *)(gen_frame + 0xc)) = iVar11;
    (*(bool *)(gen_frame + 0x33)) = bVar14;
    if ((!bVar14) || ((ushort)(*(uint *)(gen_frame + 0x20)) != -1)) {
      if ((*(short *)(pLVar1 + 0x750) == 0) || (pLVar1[0x752] == (undefined1)0x0)) goto LAB_0045a007;
      if (*(int *)(pLVar1 + 0x744) < 0) {
        *(uint *)(pLVar1 + 0x744) = (*(uint *)(gen_frame + 0x18));
        *(uint *)(pLVar1 + 0x73c) = (*(uint *)(gen_frame + 0x18));
      }
      uVar2 = *(ushort *)(pLVar1 + 0x700);
      if ((uint)uVar2 < (uint)(int)*(short *)(pLVar1 + 0x750)) {
        if (((ushort)(*(uint *)(gen_frame + 0x20)) == -1) ||
           ((*((uint *)GEN_TOP((iVar11 + (((*(uint *)(gen_frame + 0x20)) & 0xffff) >> 5) * 4))) &
            1 << ((byte)((*(uint *)(gen_frame + 0x20)) & 0xffff) & 0x1f)) != 0)) {
          if (!bVar14) {
            if (uVar2 == 0) {
              *(uint *)(pLVar1 + 0x744) = (*(uint *)(gen_frame + 0x18));
              *(uint *)(pLVar1 + 0x73c) = (*(uint *)(gen_frame + 0x18));
            }
            *(ushort *)(pLVar1 + 0x700) = uVar2 + 1;
            goto LAB_00459f39;
          }
        }
        else if (bVar14) {
          *(ushort *)(pLVar1 + 0x700) = uVar2 - 1;
          F_0042aca0(pLVar1 + 0x54);
        }
        else {
LAB_00459f39: ;
          pLVar1 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
          uVar4 = (*(uint *)(gen_frame + 0x18));
          *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x748) = (*(uint *)(gen_frame + 0x18));
          *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x740) = (*(uint *)(gen_frame + 0x18));
          (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
          F_0042cc20(((undefined1 *)(gen_frame + 0x1dc)),&REFG(undefined, 0x108d16e),REFG(undefined4, 0x108cc50));
          (*(uint *)(gen_frame + 0x230)) = uVar4;
          (*(undefined4 *)(gen_frame + 0x234)) = (*(undefined4 *)(gen_frame + 0x1d8));
          F_0042cbc0(((undefined1 *)(gen_frame + 0x238)),((undefined1 *)(gen_frame + 0x1dc)));
          puVar6 = (undefined4 *)F_004296a0(0x6c,0,0x192);
          *puVar6 = *(undefined4 *)(pLVar1 + 0x730);
          puVar6[1] = *(undefined4 *)(pLVar1 + 0x730);
          puVar6[2] = *(undefined4 *)(pLVar1 + 0x730);
          *(undefined2 *)(puVar6 + 0x1a) = 0;
          if (puVar6 + 3 != (uint *)0x0) {
            puVar6[3] = (*(uint *)(gen_frame + 0x230));
            puVar6[4] = (*(undefined4 *)(gen_frame + 0x234));
            F_0042cbc0(puVar6 + 5,((undefined1 *)(gen_frame + 0x238)));
          }
          F_00488480(pLVar1 + 0x72c,((uint *)(gen_frame + 0x290)),puVar6,0);
          F_0042c880(((undefined1 *)(gen_frame + 0x238)));
          F_0042c880(((undefined1 *)(gen_frame + 0x1dc)));
          F_0042aca0(pLVar1 + 0x54);
          *(ushort *)(pLVar1 + 0x706) = *(ushort *)(pLVar1 + 0x706) | 1;
        }
LAB_0045a007: ;
        if (((ushort)(*(uint *)(gen_frame + 0x20)) == 0xffff) ||
           ((*((uint *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x718) + (uint)((ushort)(*(uint *)(gen_frame + 0x20)) >> 5) * 4))) &
            1 << ((byte)(*(uint *)(gen_frame + 0x20)) & 0x1f)) != 0)) goto LAB_0045a426;
        if (*(short *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x700) == 0) {
          *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x744) = (*(uint *)(gen_frame + 0x18));
          *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x73c) = (*(uint *)(gen_frame + 0x18));
          *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6e8) = (*(uint *)(gen_frame + 0x18));
        }
        else {
          piVar10 = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x271c);
          iVar11 = 0;
          (*(int * PTR32 *)(gen_frame + 0x8)) = piVar10;
          if (0 < (int)piVar10) {
            iVar12 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x10)) + 0xc);
            piVar7 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x10));
            (*(int *)(gen_frame + 0x28)) = iVar12;
            do {
              piVar8 = (int *)0x0;
              if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
                piVar8 = *(int * PTR32 *)*piVar7;
              }
              uVar4 = iVar12 + iVar11;
              if (((piVar8 == (int *)0x0) || ((int *)*piVar8 == (int *)0x0)) ||
                 (piVar8 = *(int * PTR32 *)*piVar8, piVar8 == (int *)0x0)) {
                iVar9 = 0;
              }
              else {
                iVar9 = *piVar8;
              }
              if (*(uint *)(iVar9 + 8) <= uVar4) {
                uVar4 = uVar4 - *(uint *)(iVar9 + 8);
              }
              uVar2 = **((ushort * PTR32 *)GEN_TOP((*(int *)(iVar9 + 4) + uVar4 * 4)));
              if ((*((uint *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x718) + (uint)(uVar2 >> 5) * 4))) &
                  1 << ((byte)uVar2 & 0x1f)) == 0) {
                piVar10 = (int *)0x0;
                if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
                  piVar10 = *(int * PTR32 *)*piVar7;
                }
                uVar4 = iVar12 + iVar11;
                if (((piVar10 == (int *)0x0) || ((int *)*piVar10 == (int *)0x0)) ||
                   (piVar10 = *(int * PTR32 *)*piVar10, piVar10 == (int *)0x0)) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = *piVar10;
                }
                if (*(uint *)(iVar11 + 8) <= uVar4) {
                  uVar4 = uVar4 - *(uint *)(iVar11 + 8);
                }
                iVar11 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar11 + 4) + uVar4 * 4))) + 4)));
                *(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6e8) = iVar11;
                if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x73c) < iVar11) {
                  *(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x73c) = iVar11;
                }
                if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x744) < iVar11) {
                  *(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x744) = iVar11;
                }
                break;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)piVar10);
          }
          if (*(short *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6f6) != 0) {
            *(short *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6f6) = *(short *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6f6) + -1;
          }
        }
        uVar4 = (*(uint *)(gen_frame + 0x1c));
        if ((*(bool *)(gen_frame + 0x33)) != false) goto LAB_0045a091;
      }
      else {
        if (!bVar14) {
          (*(int *)(gen_frame + 0x28)) = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x271c);
          uVar4 = *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x10)) + 0xc);
          piVar10 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x10));
          (*(int * PTR32 *)(gen_frame + 0x8)) = piVar10;
          if (piVar10 == (int *)0x0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *piVar10;
          }
          uVar13 = uVar4;
          if (*(uint *)(iVar12 + 8) <= uVar4) {
            uVar13 = uVar4 - *(uint *)(iVar12 + 8);
          }
          iVar12 = *(int *)(pLVar1 + 0x73c) -
                   *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar12 + 4) + uVar13 * 4))) + 4)));
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          for (; iVar12 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x271c); iVar12 = iVar12 + 1) {
            piVar7 = (int *)0x0;
            if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
              piVar7 = *(int * PTR32 *)*piVar10;
            }
            uVar13 = uVar4 + iVar12;
            if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
               (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
              iVar9 = 0;
            }
            else {
              iVar9 = *piVar7;
            }
            if (*(uint *)(iVar9 + 8) <= uVar13) {
              uVar13 = uVar13 - *(uint *)(iVar9 + 8);
            }
            uVar2 = **((ushort * PTR32 *)GEN_TOP((*(int *)(iVar9 + 4) + uVar13 * 4)));
            if ((*((uint *)GEN_TOP((iVar11 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar2 & 0x1f)) == 0) {
              uVar4 = F_00486d00((*(undefined * PTR32 *)(gen_frame + 0x10)),iVar12);
              *(undefined4 *)(pLVar1 + 0x73c) = *(undefined4 *)(uVar4 + 4);
              break;
            }
          }
          piVar10 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x10));
          uVar4 = *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x10)) + 0xc);
          if (piVar10 == (int *)0x0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *piVar10;
          }
          uVar13 = uVar4;
          if (*(uint *)(iVar11 + 8) <= uVar4) {
            uVar13 = uVar4 - *(uint *)(iVar11 + 8);
          }
          iVar11 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x744) -
                   *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar11 + 4) + uVar13 * 4))) + 4)));
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = iVar11 + 1;
          }
          for (; iVar11 < (*(int *)(gen_frame + 0x28)); iVar11 = iVar11 + 1) {
            piVar7 = (int *)0x0;
            if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
              piVar7 = *(int * PTR32 *)*piVar10;
            }
            uVar13 = uVar4 + iVar11;
            if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
               (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
              iVar12 = 0;
            }
            else {
              iVar12 = *piVar7;
            }
            if (*(uint *)(iVar12 + 8) <= uVar13) {
              uVar13 = uVar13 - *(uint *)(iVar12 + 8);
            }
            uVar2 = **((ushort * PTR32 *)GEN_TOP((*(int *)(iVar12 + 4) + uVar13 * 4)));
            if ((*((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar2 & 0x1f)) == 0) {
              piVar7 = (int *)0x0;
              if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
                piVar7 = *(int * PTR32 *)*piVar10;
              }
              uVar4 = uVar4 + iVar11;
              if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
                 (piVar10 = *(int * PTR32 *)*piVar7, piVar10 == (int *)0x0)) {
                iVar11 = 0;
              }
              else {
                iVar11 = *piVar10;
              }
              if (*(uint *)(iVar11 + 8) <= uVar4) {
                uVar4 = uVar4 - *(uint *)(iVar11 + 8);
              }
              *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x744) =
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar11 + 4) + uVar4 * 4))) + 4)));
              break;
            }
          }
          *(short *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6f6) = *(short *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6f6) + 1;
          goto LAB_00459f39;
        }
        if ((ushort)(*(uint *)(gen_frame + 0x20)) != -1) {
          if ((*((uint *)GEN_TOP((iVar11 + (((*(uint *)(gen_frame + 0x20)) & 0xffff) >> 5) * 4))) &
              1 << ((byte)((*(uint *)(gen_frame + 0x20)) & 0xffff) & 0x1f)) == 0) {
            F_00489fa0(pLVar1 + 0x72c,&(*(undefined4 *)(gen_frame + 0x4)));
            if (*(uint *)(pLVar1 + 0x734) < (uint)(int)*(short *)(pLVar1 + 0x750)) {
              *(short *)(pLVar1 + 0x700) = (short)*(uint *)(pLVar1 + 0x734);
            }
          }
          goto LAB_0045a007;
        }
LAB_0045a426: ;
        uVar4 = (*(uint *)(gen_frame + 0x1c));
        if ((*(bool *)(gen_frame + 0x33)) != false) goto LAB_0045a091;
        *(short *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6f4) = *(short *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6f4) + 1;
      }
      *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x6ec) = (*(uint *)(gen_frame + 0x18));
      uVar4 = (*(uint *)(gen_frame + 0x1c));
    }
LAB_0045a091: ;
    iVar11 = (*(int *)(gen_frame + 0x24)) + 1;
    (*(int *)(gen_frame + 0x24)) = iVar11;
    if (3 < iVar11) {
      F_0042c880(((undefined1 *)(gen_frame + 0x184)));
      uVar4 = (*(uint *)(gen_frame + 0x18));
      F_00c47745(((uint *)(gen_frame + 0x290))[2] ^ (uint)(uint)(gen_frame + 0x29c));
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_0045a450 */
uint F_0045a450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x45a450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  bVar1 = F_004355d0(*(undefined * PTR32 *)(uVar3 + 0x18),param_4,param_5);
  if (bVar1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_2);
  if (*(char *)*param_2 != '\0') {
    F_00446ec0(this,param_2,((undefined1 *)(gen_frame + 0x4)));
  }
  uVar3 = F_00459b00(this,param_1,((undefined1 *)(gen_frame + 0x4)),param_3,param_6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_0045a500 */
uint F_0045a500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45a500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)),param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x108d16f),REFG(undefined4, 0x108cc50));
  F_00459b00(this,1,((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)uVar1;
}

/* ref: FUN_0045a580 */
unsigned int F_0045a580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x45a580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(int *)((int)this + 0x60) != 0) {
    bVar3 = *(byte *)((int)this + param_1 * 0x754 + 0x98c) != param_2;
    if (bVar3) {
      *(char *)((int)this + param_1 * 0x754 + 0x98c) = (char)param_2;
    }
    if ((-1 < (int)param_3) && (param_3 != *(byte *)((int)this + param_1 * 0x754 + 0x98d))) {
      *(char *)((int)this + param_1 * 0x754 + 0x98d) = (char)param_3;
      bVar3 = true;
    }
    if (((int)param_4 < 0) || (param_4 == *(ushort *)((int)this + param_1 * 0x754 + 0x988))) {
      if (!bVar3) {
        return 0;
      }
    }
    else {
      *(short *)((int)this + param_1 * 0x754 + 0x988) = (short)param_4;
    }
    F_0044eca0(this,param_1);
    F_00487260((undefined *)((int)this + param_1 * 0x754 + 0x994),
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + param_1 * 0x754 + 0x998) + 4))));
    iVar1 = *(int *)((int)this + param_1 * 0x754 + 0x998);
    *(int *)(iVar1 + 4) = iVar1;
    uVar2 = *(undefined4 *)((int)this + param_1 * 0x754 + 0x998);
    *(undefined4 *)uVar2 = uVar2;
    iVar1 = *(int *)((int)this + param_1 * 0x754 + 0x998);
    *(int *)(iVar1 + 8) = iVar1;
    *(undefined4 *)((int)this + param_1 * 0x754 + 0x99c) = 0;
    F_004579f0(this,(int)this + param_1 * 0x754 + 0x268,
                 *(undefined4 *)((int)this + param_1 * 0x754 + 0x9b4),0,
                 (int)*(short *)((int)this + param_1 * 0x754 + 0x9b8),0);
  }
  return 0;
}

/* ref: FUN_0045a660 */
uint F_0045a660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x45a660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 * 0x754 + 0x268 + (int)this;
  if ((*(int *)((int)this + 0x60) != 0) &&
     (((-1 < (int)param_5 && (param_5 != *(ushort *)(iVar1 + 0x720))) || ((char)param_6 != '\0'))))
  {
    *(short *)(iVar1 + 0x720) = (short)param_5;
    F_00487260((undefined *)(iVar1 + 0x72c),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x730) + 4))));
    *((int *)GEN_TOP((*(int *)(iVar1 + 0x730) + 4))) = *(int *)(iVar1 + 0x730);
    *(undefined4 *)*(undefined4 *)(iVar1 + 0x730) = *(undefined4 *)(iVar1 + 0x730);
    *((int *)GEN_TOP((*(int *)(iVar1 + 0x730) + 8))) = *(int *)(iVar1 + 0x730);
    *(undefined4 *)(iVar1 + 0x734) = 0;
    if ((char)param_6 != '\0') {
      F_0044eca0(this,param_1);
    }
  }
  uVar2 = F_004579f0(this,iVar1,param_2,param_3,param_4,param_7);
  return uVar2;
}

/* ref: FUN_0045a710 */
uint F_0045a710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45a710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  F_0044eca0(this,(uint)*(byte *)(param_1 + 0x753));
  F_00487260((undefined *)(param_1 + 0x72c),*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x730) + 4))));
  *((int *)GEN_TOP((*(int *)(param_1 + 0x730) + 4))) = *(int *)(param_1 + 0x730);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_1 + 0x730);
  *((int *)GEN_TOP((*(int *)(param_1 + 0x730) + 8))) = *(int *)(param_1 + 0x730);
  *(undefined4 *)(param_1 + 0x734) = 0;
  iVar1 = (int)*(short *)(param_1 + 0x750);
  *(ushort *)(param_1 + 0x706) = *(ushort *)(param_1 + 0x706) | 1;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  F_004579f0(this,param_1,uVar2,uVar3,iVar1,uVar4);
  uVar2 = *(ushort *)(param_1 + 0x706) & 1;
  *(undefined1 *)(param_1 + 0x752) = 1;
  *(ushort *)(param_1 + 0x706) = (*(ushort *)(param_1 + 0x706) & 0xfffe) + 2 ^ (ushort)uVar2;
  return uVar2;
}

/* ref: FUN_0045a7c0 */
uint F_0045a7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x45a7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x460];
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x458)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x45c);
  (*(undefined4 *)(gen_frame + 0x8)) = param_4;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  F_004f9bb0(((undefined1 *)(gen_frame + 0x218)));
  uVar2 = F_0043c300(((undefined1 *)(gen_frame + 0x10)),param_1,param_2,(*(undefined4 *)(gen_frame + 0xc)),1);
  F_004f84e0(((undefined1 *)(gen_frame + 0x218)),uVar2);
  F_00429fa0();
  (*(undefined * PTR32 *)(gen_frame + 0x238)) = REFG(undefined * PTR32, 0x12fdd84);
  (*(undefined4 *)(gen_frame + 0x23c)) = 0;
  (*(undefined4 *)(gen_frame + 0x240)) = 0;
  (*(gen_code32 *)(gen_frame + 0x24c)) = ((code *)REFP(0x455170));
  (*(int *)(gen_frame + 0x228)) = REFG(int, 0x137233c);
  (*(undefined4 *)(gen_frame + 0x22c)) = 0;
  F_004fc400(REFG(undefined4, 0x1375ae8),((undefined1 *)(gen_frame + 0x218)));
  iVar1 = REFG(int, 0x137233c);
  REFG(int, 0x137233c) = REFG(int, 0x137233c) + 1;
  puVar3 = (undefined4 *)F_004296a0(0x1c,0,400);
  *puVar3 = REFG(undefined4, 0x13723a8);
  puVar3[1] = REFG(undefined4, 0x13723a8);
  puVar3[2] = REFG(undefined4, 0x13723a8);
  *(undefined2 *)(puVar3 + 6) = 0;
  if (puVar3 + 3 != (int *)0x0) {
    puVar3[3] = iVar1;
    puVar3[4] = (*(undefined4 *)(gen_frame + 0x8));
    puVar3[5] = param_5;
  }
  uVar2 = F_00482e90(&REFG(undefined, 0x13723a4),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x458)) ^ (uint)(uint)(gen_frame + 0x45c));
  return uVar2;
}

/* ref: FUN_0045a8f0 */
uint F_0045a8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x45a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  
  bVar1 = F_0042b6f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdac))),(*(undefined4 *)&gen_args[1]));
  if ((bVar1 != 0) || (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe00))) != (*(int *)&gen_args[2]))) {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) | 0x40;
    F_0042ccf0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdac))),(*(undefined4 *)&gen_args[1]));
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe00))) = (*(int *)&gen_args[2]);
    F_00488e70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x964))),&(*(int *)&gen_args[2]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x964))),
                 *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x968))));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x974))) = 0;
  }
  return (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x964;
}

/* ref: FUN_0045a970 */
uint F_0045a970(unsigned int gen_a0)
{
  GEN_ENTER(0x45a970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  uVar1 = (int)_Var2 - *(int *)((int)this + 0x188);
  if (10 < uVar1) {
    *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) | 1;
    F_00488e70((undefined *)((int)this + 0x928),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x928),
                 *(undefined4 *)((int)this + 0x92c));
    F_00488e70((undefined *)((int)this + 0x93c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x93c),
                 *(undefined4 *)((int)this + 0x940));
    *(undefined1 *)((int)this + 0x938) = 0;
    *(undefined1 *)((int)this + 0x94c) = 0;
    _Var2 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x188) = (int)_Var2;
    uVar3 = F_00427d90();
    *(ulonglong *)((int)this + 400) = uVar3;
    uVar3 = F_00427e30();
    uVar1 = (uint)uVar3;
    *(ulonglong *)((int)this + 0x198) = uVar3;
  }
  return uVar1;
}

/* ref: Client::UI::Shell::RaptureShellModule::vf2 */
uint F_0045aa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x45aa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  byte bVar1;
  uint uVar2;
  undefined1 * puVar3;
  int * piVar4;
  byte * pbVar5;
  char * pcVar6;
  uint uVar7;
  undefined * pvVar8;
  uint * puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 * puVar13;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(int * PTR32 *)(gen_frame + 0xc)) = param_2;
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xc))))(*(int * PTR32 *)(this + 4))));
  if (((*piVar4 != 4) &&
      (piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xc))))(*(int * PTR32 *)(this + 4)))), *piVar4 != 5)
      ) || ((*(char *)(gen_frame + 0x17)) = '\x01', (short)*param_4 != 0x68)) {
    (*(char *)(gen_frame + 0x17)) = '\0';
  }
  if ((short)*param_4 != 0xcf) {
    pbVar5 = (byte *)F_00cb0910(param_3,10);
    if ((*(int *)(this + 0x820) != 0) && ((int)(uint)*pbVar5 < *(int *)(this + 0x820))) {
      F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
      return 10;
    }
  }
  pbVar5 = (byte *)F_00cb0910(param_3,1);
  *(ushort *)((int)param_4 + 2) = (ushort)*pbVar5;
  F_0042b630(((undefined1 *)(gen_frame + 0xc0)));
  uVar12 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  puVar9 = param_4;
  do {
    puVar9 = puVar9 + 1;
    if (((*(uint *)(gen_frame + 0x10)) < *(ushort *)((int)param_4 + 2)) &&
       ((*(uint *)(gen_frame + 0x10)) + 1 < (uint)(((*(int * PTR32 *)(gen_frame + 0xc))[1] - *(*(int * PTR32 *)(gen_frame + 0xc))) / 0x54))) {
      (*(uint *)(gen_frame + 0x4)) = 0xffffffff;
      pcVar6 = (char *)F_00cb0910(param_3,(*(uint *)(gen_frame + 0x10)) + 2);
      if (*pcVar6 == -1) {
        (*(char *)(gen_frame + 0x16)) = '\0';
        F_0042ccf0(((undefined1 *)(gen_frame + 0xc0)),*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x54 + uVar12);
        F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x10903b8),REFG(undefined4, 0x108cc50));
        uVar7 = F_0042d5d0(((undefined1 *)(gen_frame + 0xc0)),((undefined1 *)(gen_frame + 0x114)),REFG(undefined4, 0x108cc50));
        (*(bool *)(gen_frame + 0xb)) = uVar7 != REFG(undefined4, 0x108cc50);
        F_0042c880(((undefined1 *)(gen_frame + 0x114)));
        if ((*(bool *)(gen_frame + 0xb)) != false) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x18)),&REFG(undefined, 0x108d41e),REFG(undefined4, 0x108cc50));
          F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x10903bc),REFG(undefined4, 0x108cc50));
          F_0042d750(((undefined1 *)(gen_frame + 0xc0)),((undefined1 *)(gen_frame + 0x114)),((undefined1 *)(gen_frame + 0x18)));
          F_0042c880(((undefined1 *)(gen_frame + 0x114)));
          F_0042c880(((undefined1 *)(gen_frame + 0x18)));
          F_0042cc20(((undefined1 *)(gen_frame + 0x18)),&REFG(undefined, 0x10903c0),REFG(undefined4, 0x108cc50));
          uVar7 = F_0042c910(((undefined1 *)(gen_frame + 0xc0)),((undefined1 *)(gen_frame + 0x18)),REFG(undefined4, 0x108cc50));
          if (uVar7 == REFG(undefined4, 0x108cc50)) {
            F_0042aca0(((undefined1 *)(gen_frame + 0xc0)));
          }
          else {
            F_0042b9e0(((undefined1 *)(gen_frame + 0xc0)),uVar7 + 1,REFG(undefined4, 0x108cc50));
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x18)));
          (*(char *)(gen_frame + 0x16)) = '\x01';
        }
        uVar7 = F_00abe5d0(this,((undefined1 *)(gen_frame + 0xc0)),0xffffffff,&(*(uint *)(gen_frame + 0x4)));
        *puVar9 = uVar7;
        if ((-1 < (int)uVar7) && ((*(char *)(gen_frame + 0x16)) != '\0')) {
          *puVar9 = uVar7 + 1000000;
        }
      }
      else {
        uVar7 = F_00abe5d0(this,*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x54 + uVar12,(int)*pcVar6,&(*(uint *)(gen_frame + 0x4)));
        *puVar9 = uVar7;
      }
    }
    else {
      *puVar9 = 0xffffffff;
    }
    uVar12 = uVar12 + 0x54;
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
  } while (uVar12 < 0xfc);
  pbVar5 = (byte *)F_00cb0910(param_3,0);
  bVar1 = *pbVar5;
  F_0042b630(((undefined1 *)(gen_frame + 0x6c)));
  uVar12 = F_0042a990(param_1);
  uVar7 = F_00abde90(uVar12,((undefined1 *)(gen_frame + 0x6c)));
  iVar11 = uVar12 + uVar7;
  (*(uint *)(gen_frame + 0x4)) = uVar7;
  (*(uint *)(gen_frame + 0x0)) = 1;
  (*(uint *)(gen_frame + 0x10)) = 1;
  if (1 < bVar1) {
    iVar10 = 0x54;
    do {
      piVar4 = (*(int * PTR32 *)(gen_frame + 0xc));
      if ((uint)(((*(int * PTR32 *)(gen_frame + 0xc))[1] - *(*(int * PTR32 *)(gen_frame + 0xc))) / 0x54) <= (*(uint *)(gen_frame + 0x10))) break;
      uVar12 = F_00abde90(iVar11,((undefined1 *)(gen_frame + 0x6c)));
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + uVar12;
      iVar11 = iVar11 + uVar12;
      uVar12 = param_4[5];
      puVar9 = param_4 + 4;
      uVar7 = *piVar4 + iVar10;
      if ((uVar7 < uVar12) && (uVar2 = *puVar9, uVar2 <= uVar7)) {
        if (uVar12 == param_4[6]) {
          F_00488ca0(puVar9,1);
        }
        pvVar8 = (undefined *)param_4[5];
        if (pvVar8 != (undefined *)0x0) {
          uVar7 = ((int)(uVar7 - uVar2) / 0x54) * 0x54 + *puVar9;
LAB_0045ae0d: ;
          F_0042cbc0(pvVar8,uVar7);
        }
      }
      else {
        if (uVar12 == param_4[6]) {
          F_00488ca0(puVar9,1);
        }
        pvVar8 = (undefined *)param_4[5];
        if (pvVar8 != (undefined *)0x0) goto LAB_0045ae0d;
      }
      param_4[5] = param_4[5] + 0x54;
      pcVar6 = (char *)F_0042a7e0(*(*(int * PTR32 *)(gen_frame + 0xc)) + iVar10,0);
      if (*pcVar6 == '<') {
LAB_0045aebc: ;
        (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
        iVar10 = iVar10 + 0x54;
      }
      else if ((*(char *)(gen_frame + 0x17)) != '\0') {
        F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x108d41f),REFG(undefined4, 0x108cc50));
        puVar13 = (undefined1 *)param_4[5];
        if ((((undefined1 *)(gen_frame + 0x114)) < puVar13) && (puVar3 = (undefined1 *)*puVar9, puVar3 <= ((undefined1 *)(gen_frame + 0x114)))) {
          if (puVar13 == (undefined1 *)param_4[6]) {
            F_00488ca0(puVar9,1);
          }
          pvVar8 = (undefined *)param_4[5];
          if (pvVar8 != (undefined *)0x0) {
            puVar13 = ((undefined1 *)GEN_TOP(((((int)((undefined1 *)(gen_frame + 0x114)) - (int)puVar3) / 0x54) * 0x54 + *puVar9)));
LAB_0045aeab: ;
            F_0042cbc0(pvVar8,puVar13);
          }
        }
        else {
          if (puVar13 == (undefined1 *)param_4[6]) {
            F_00488ca0(puVar9,1);
          }
          pvVar8 = (undefined *)param_4[5];
          if (pvVar8 != (undefined *)0x0) {
            puVar13 = ((undefined1 *)(gen_frame + 0x114));
            goto LAB_0045aeab;
          }
        }
        param_4[5] = param_4[5] + 0x54;
        F_0042c880(((undefined1 *)(gen_frame + 0x114)));
        goto LAB_0045aebc;
      }
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      uVar12 = (*(uint *)(gen_frame + 0x10)) + 1;
      iVar10 = iVar10 + 0x54;
      (*(uint *)(gen_frame + 0x10)) = uVar12;
    } while (uVar12 < bVar1);
  }
  if ((uint)(((*(int * PTR32 *)(gen_frame + 0xc))[1] - *(*(int * PTR32 *)(gen_frame + 0xc))) / 0x54) <= (*(uint *)(gen_frame + 0x0))) goto LAB_0045afb8;
  uVar12 = F_0042d2c0(param_1,((undefined1 *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x4)),REFG(undefined4, 0x108cc50));
  F_0042ccf0(((undefined1 *)(gen_frame + 0x6c)),uVar12);
  F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  puVar13 = (undefined1 *)param_4[5];
  if ((((undefined1 *)(gen_frame + 0x6c)) < puVar13) && (puVar3 = (undefined1 *)param_4[4], puVar3 <= ((undefined1 *)(gen_frame + 0x6c)))) {
    if (puVar13 == (undefined1 *)param_4[6]) {
      F_00488ca0(param_4 + 4,1);
    }
    pvVar8 = (undefined *)param_4[5];
    if (pvVar8 != (undefined *)0x0) {
      puVar13 = ((undefined1 *)GEN_TOP(((((int)((undefined1 *)(gen_frame + 0x6c)) - (int)puVar3) / 0x54) * 0x54 + param_4[4])));
LAB_0045afaf: ;
      F_0042cbc0(pvVar8,puVar13);
    }
  }
  else {
    if (puVar13 == (undefined1 *)param_4[6]) {
      F_00488ca0(param_4 + 4,1);
    }
    pvVar8 = (undefined *)param_4[5];
    if (pvVar8 != (undefined *)0x0) {
      puVar13 = ((undefined1 *)(gen_frame + 0x6c));
      goto LAB_0045afaf;
    }
  }
  param_4[5] = param_4[5] + 0x54;
LAB_0045afb8: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return 0;
}

/* ref: FUN_0045aff0 */
byte F_0045aff0(unsigned int gen_a0)
{
  GEN_ENTER(0x45aff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  uVar5 = 0;
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 0xc;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this);
  if (REFG(int, 0x137104c) != 0) {
    F_00415250(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10),iVar1);
  }
  if (this == (undefined *)0xfffdc070) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 0x23fc0;
  }
  *(int *)((int)this + 0x924f0) = iVar1;
  F_00429f90(((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x92528) = 0;
  F_00429fa0();
  uVar6 = 0x1c;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  pvVar3 = (undefined *)F_00763050(uVar2,uVar6);
  if (pvVar3 != (undefined *)0x0) {
    F_007daf90(pvVar3,1,1);
    F_007daf90(pvVar3,2,1);
  }
  uVar6 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  do {
    uVar2 = F_00414500(uVar6,uVar5 + 0xc6);
    iVar1 = *(int *)(uVar2 + 0x14);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x30))(this)));
    uVar2 = 1 << ((byte)uVar5 & 0x1f);
    if (iVar1 == 0) {
      *(uint *)((int)pvVar3 + 0x40) = *(uint *)((int)pvVar3 + 0x40) & ~uVar2;
    }
    else {
      *(uint *)((int)pvVar3 + 0x40) = *(uint *)((int)pvVar3 + 0x40) | uVar2;
    }
    F_00459590(pvVar3,(uint)*(byte *)((int)pvVar3 + 0x39),uVar5 & 0xff);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 10);
  uVar5 = 0;
  do {
    uVar2 = F_00414500(uVar6,uVar5 + 0xd0);
    iVar1 = *(int *)(uVar2 + 0x14);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x30))(this)));
    iVar4 = (uVar5 & 0xff) + 10;
    uVar2 = 1 << ((byte)iVar4 & 0x1f);
    if (iVar1 == 0) {
      *(uint *)((int)pvVar3 + 0x40) = *(uint *)((int)pvVar3 + 0x40) & ~uVar2;
    }
    else {
      *(uint *)((int)pvVar3 + 0x40) = *(uint *)((int)pvVar3 + 0x40) | uVar2;
    }
    F_00459590(pvVar3,(uint)*(byte *)((int)pvVar3 + 0x39),iVar4);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 8);
  F_0044bb10((undefined *)((int)this + 0x575b8));
  F_0081f9d0((undefined *)((int)this + 0x63df0));
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return 1;
}

/* ref: FUN_0045b170 */
uint F_0045b170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x45b170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  
  if (9 < param_1 - 0xc6) {
    uVar3 = param_1;
    if (param_1 - 0xd0 < 8) {
      uVar4 = (uint)(*(int *)(param_2 + 0x14) != 0);
      uVar3 = (uint)(byte)((char)param_1 + 0x30);
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0xc) + 0x30))))((int *)((int)this + -0xc))));
      uVar3 = F_004597a0(pvVar2,uVar3,uVar4);
    }
    return uVar3;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0xc) + 0x30))))((int *)((int)this + -0xc))));
  uVar3 = param_1 + 0x3a & 0xff;
  uVar4 = 1 << ((byte)(param_1 + 0x3a) & 0x1f);
  if (iVar1 != 0) {
    *(uint *)((int)pvVar2 + 0x40) = *(uint *)((int)pvVar2 + 0x40) | uVar4;
    uVar3 = F_00459590(pvVar2,(uint)*(byte *)((int)pvVar2 + 0x39),uVar3);
    return uVar3;
  }
  *(uint *)((int)pvVar2 + 0x40) = *(uint *)((int)pvVar2 + 0x40) & ~uVar4;
  uVar3 = F_00459590(pvVar2,(uint)*(byte *)((int)pvVar2 + 0x39),uVar3);
  return uVar3;
}

/* ref: FUN_0045b210 */
uint F_0045b210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45b210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  char * pcVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  ulonglong uVar8;
  undefined1 * puVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  bVar3 = F_004355d0(*(undefined * PTR32 *)(uVar4 + 0x18),uVar2,uVar11);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x104)),param_1 + 0x44,REFG(undefined4, 0x108cc50));
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    *(undefined1 *)(uVar4 + 0x1b4) = 0;
    uVar5 = F_00a27410((undefined *)(uVar4 + 0x110),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x104)),uVar4,0,0xffffffff);
    F_0042ccf0((undefined *)(uVar4 + 0x10),uVar5);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    F_0042cbc0(((undefined1 *)(gen_frame + 0xb0)),(undefined *)(uVar4 + 0x10));
    F_0042c880(((undefined1 *)(gen_frame + 0x104)));
    if (*(short *)(param_1 + 0x10) == 0x1c) {
      piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x14))(this)));
      piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6)));
      if (*piVar6 - 1U < 3) {
        F_0042d190(((undefined1 *)(gen_frame + 0xb0)),0x20);
      }
    }
    pcVar1 = (char *)(param_1 + 0x24);
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),pcVar1,REFG(undefined4, 0x108cc50));
    if (*pcVar1 != '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0x104)),pcVar1,REFG(undefined4, 0x108cc50));
      puVar10 = ((undefined1 *)(gen_frame + 0x5c));
      puVar9 = ((undefined1 *)(gen_frame + 0x104));
      pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x28))(this)));
      F_00446ec0(pvVar7,puVar9,puVar10);
      F_0042c880(((undefined1 *)(gen_frame + 0x104)));
    }
    uVar11 = REFG(undefined4, 0x108cc50);
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x5c)));
    F_0042cc20(((undefined1 *)(gen_frame + 0x104)),uVar4,uVar11);
    uVar4 = (uint)*(ushort *)(param_1 + 0x10);
    uVar11 = 0;
    puVar10 = ((undefined1 *)(gen_frame + 0xb0));
    puVar9 = ((undefined1 *)(gen_frame + 0x104));
    pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x28))(this)));
    F_00459b00(pvVar7,uVar4,puVar9,puVar10,uVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x104)));
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
    uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0xb0)));
    uVar4 = (uint)uVar8;
  }
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return uVar4;
}

/* ref: FUN_0045b3b0 */
uint F_0045b3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x45b3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*param_2 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 4);
  }
  if ((param_2[0x10] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x14);
  }
  if ((param_2[0x18] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
  }
  if ((param_2[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  F_0045a580((undefined *)((int)this + 0x8f8),uVar4,uVar1,uVar3,uVar2);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_0045b410 */
uint F_0045b410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x45b410u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte * pbVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  pbVar1 = (*(byte * PTR32 *)&gen_args[2]);
  if (4 < (*(int *)&gen_args[3])) {
    bVar6 = 0;
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    if (((*(byte * PTR32 *)&gen_args[2])[8] & 0xf) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0xc)));
    }
    if (((*(byte * PTR32 *)&gen_args[2])[0x10] & 0xf) == 0) {
      local_c = 0;
    }
    else {
      local_c = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x14)));
    }
    if (((*(byte * PTR32 *)&gen_args[2])[0x18] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x1c)));
    }
    if (((*(byte * PTR32 *)&gen_args[2])[0x20] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x24)));
    }
    uVar3 = local_8 >> 8;
    local_8 = local_8 & 0xffffff00;
    (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[2]) & 0xffffff00)));
    if (6 < (*(int *)&gen_args[3])) {
      if ((pbVar1[0x28] & 0xf) != 0) {
        bVar6 = pbVar1[0x2c];
      }
      local_8 = CONCAT31((int3)uVar3,bVar6);
      gen_piece_set(&(*(byte * PTR32 *)&gen_args[2]), 1, 3, (unsigned long long)(SUB43(pbVar1,1)));
      if ((pbVar1[0x30] & 0xf) == 0) {
        (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(((uint)GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 1, 3) << 8)));
      }
      else {
        (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 1, 3),pbVar1[0x34])));
      }
    }
    F_0045a660(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8f8))),iVar7,local_10,local_c,uVar5,uVar4,local_8,(*(byte * PTR32 *)&gen_args[2]));
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))))((*(undefined * PTR32 *)&gen_args[0]))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0);
    if (uVar3 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 100 + iVar7 * 0x1c))) = 0xffffffff;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0045b510 */
uint F_0045b510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x45b510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  
  if ((((2 < param_3) && (((byte)*(undefined4 *)param_2 & 0xf) == 4)) &&
      (((byte)*(undefined4 *)(param_2 + 8) & 0xf) == 6)) &&
     (((byte)*(undefined4 *)(param_2 + 0x10) & 0xf) == 6)) {
    F_0042e430((undefined *)((int)this + 0x91bfc),*(undefined4 *)(param_2 + 0xc));
    if ((param_2[0x10] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x14);
    }
    F_0042e430((undefined *)((int)this + 0x91c50),uVar1);
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_00459b00((undefined *)((int)this + 0x8f8),uVar1,(int)this + 0x91bfc,(undefined *)((int)this + 0x91c50)
                 ,0);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_0045b5a0 */
uint F_0045b5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x45b5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  int iVar1;
  undefined4 * in_ecx;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  undefined * this_01;
  uint uVar5;
  uint in_ecx_00;
  uint in_ecx_01;
  int * piVar6;
  uint uVar7;
  undefined * this_02;
  undefined * this_03;
  undefined3 extraout_var = 0;
  int iVar8;
  undefined4 uVar9;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  in_ecx_00 = F_00763050(uVar5,3);
  in_ecx_01 = F_00763050(uVar5,0x56);
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6,6);
  cVar2 = *(char *)((int)this_00 + 0x2c24c);
  uVar5 = 0;
  if (uVar7 == 0) {
LAB_0045b826: ;
    F_00c47745(uVar4 ^ (uint)(uint)(gen_out + 0x0));
    return uVar5;
  }
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_02 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x28))(piVar6,0x2f)));
  if (this_02 != (undefined *)0x0) {
    bVar3 = *(byte *)((int)this_00 + 0x2c24c);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4));
    if (*(int *)(uVar5 + 600) == 0) {
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x34) + 8))))(*(int * PTR32 *)(uVar5 + 0x34),"Addon");
      *(uint *)(uVar5 + 600) = uVar7;
    }
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 600) + 0x24))))
                              (*(int * PTR32 *)(uVar5 + 600),((bVar3 & 0x3c) == 0) + 0xcfb)));
    uVar9 = 0;
    this_03 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6)));
    uVar5 = F_00cb0950(this_03,uVar9);
    F_00431250(this_02,2,uVar5,0,1,0);
  }
  uVar7 = F_00770c70(in_ecx_00);
  iVar8 = 0xc5;
  uVar5 = uVar7;
  do {
    if (iVar8 < 0xcd) {
      bVar3 = *(byte *)((int)this_00 + 0x2c24c) & 0x14;
    }
    else {
      bVar3 = *(byte *)((int)this_00 + 0x2c24c) & 0x28;
    }
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar3 != 0);
    if (bVar3 != 0) {
      bVar3 = F_00a34c40(this_01,iVar8);
      uVar5 = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        iVar1 = iVar8 + -0xc5;
        uVar5 = F_00770c70(in_ecx_00);
        in_ecx = ((undefined4 *)GEN_TOP(((uVar5 * 0x10 + iVar8) * 0x164 + -0x111ac + (int)this_00)));
        if (cVar2 < '\0') {
          F_00a7d290(0x1c8,0,0,0,0,REFG(float, 0x10916ec));
        }
        else {
          if (*(char *)(in_ecx + 2) == '\0') {
LAB_0045b77e: ;
            if (in_ecx[0x2d] != 0) goto LAB_0045b787;
            F_00458f70(this_00,uVar7,iVar1,*(undefined4 *)((int)this + 0x24),
                         *(undefined4 *)((int)this + 0x28));
            F_0044bd80(this_00,*(undefined4 *)((int)this + 0x2c),*(undefined4 *)((int)this + 0x1c)
                        );
          }
          else {
            if (in_ecx[0x2d] == 0) {
              uVar5 = F_00446380((uint)*(byte *)((int)in_ecx + 9),in_ecx[1]);
              in_ecx[0x2d] = uVar5;
              goto LAB_0045b77e;
            }
LAB_0045b787: ;
            if ((iVar1 == *(int *)((int)this + 0x1c)) && (uVar7 == *(uint *)((int)this + 0x2c))) {
              F_00875a00(in_ecx_01,in_ecx);
              *(undefined4 *)((int)this + 0x18) = 3;
              goto LAB_0045b81e;
            }
            uVar5 = F_0043aa60(in_ecx);
            uVar9 = *in_ecx;
            F_00458f70(this_00,uVar7,iVar1,*(undefined4 *)((int)this + 0x24),
                         *(undefined4 *)((int)this + 0x28));
            F_00458f70(this_00,*(undefined4 *)((int)this + 0x2c),*(undefined4 *)((int)this + 0x1c)
                         ,uVar5,uVar9);
          }
          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
          *(byte *)(uVar5 + 0x230bf) = *(byte *)(uVar5 + 0x230bf) | 3;
          F_00449910(this,10);
        }
LAB_0045b81e: ;
        uVar5 = F_00a34270(this_01);
        goto LAB_0045b826;
      }
    }
    iVar8 = iVar8 + 1;
    if (0xd4 < iVar8) {
      F_00c47745(uVar4 ^ (uint)(uint)(gen_out + 0x0));
      return uVar5;
    }
  } while( true );
}

/* ref: FUN_0045b840 */
uint F_0045b840(unsigned int gen_a0)
{
  GEN_ENTER(0x45b840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  undefined * this_00;
  undefined * this_01;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar7;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar4 = F_00763050(uVar3,3);
  piVar5 = (int *)F_00763050(uVar3,0x56);
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6,6);
  cVar1 = *(char *)((int)this_00 + 0x2c24c);
  if (uVar3 == 0) {
    return 0;
  }
  uVar3 = F_00770c70(uVar4);
  bVar2 = F_00a34970(this_01,2);
  uVar4 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 != 0) && ((*(byte *)((int)this_00 + 0x2c24c) & 0x3c) == 0)) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    F_0042e430((undefined *)((int)this + 0x30),&REFG(undefined, 0x108d01f));
    F_004498c0(this);
    uVar3 = F_00a34270(this_01);
    return uVar3;
  }
  iVar7 = 0xc5;
  do {
    if (iVar7 < 0xcd) {
      bVar2 = *(byte *)((int)this_00 + 0x2c24c) & 0x14;
    }
    else {
      bVar2 = *(byte *)((int)this_00 + 0x2c24c) & 0x28;
    }
    uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar2 != 0);
    if (bVar2 != 0) {
      bVar2 = F_00a34c40(this_01,iVar7);
      uVar4 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        if (-1 < cVar1) {
          F_00458f70(this_00,uVar3,iVar7 + -0xc5,*(undefined4 *)((int)this + 0x24),
                       *(undefined4 *)((int)this + 0x28));
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
          *(byte *)(uVar3 + 0x230bf) = *(byte *)(uVar3 + 0x230bf) | 3;
          ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
          F_0043f8b0(10);
          uVar3 = F_00a34270(this_01);
          *(undefined4 *)((int)this + 0x18) = 0;
          return uVar3;
        }
        F_00a7d290(0x1c8,0,0,0,0,REFG(float, 0x10916ec));
        uVar4 = F_00a34270(this_01);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xd5);
  return uVar4;
}

/* ref: FUN_0045b9d0 */
uint F_0045b9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45b9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1090760));
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  F_0042b630((int)this + 0x50);
  *(undefined1 *)((int)this + 0xb0) = 0;
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
  pvVar1 = (undefined *)F_00406b90(0x40,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00455db0(pvVar1,param_1);
  }
  *(uint *)((int)this + 8) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x78,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = param_1;
    puVar3[2] = 0;
    *puVar3 = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
    puVar3[3] = 0xb000b0d;
    uVar2 = F_00406bb0(0x58,0,0);
    puVar3[4] = uVar2;
    puVar3[5] = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 8) = 0;
    F_0042b630(puVar3 + 9);
    *puVar3 = (*(undefined * PTR32 (*)[10])REFP(0x1090944));
    puVar3[5] = (*(undefined * PTR32 (*)[1])REFP(0x109093c));
  }
  *(undefined4 * PTR32 *)((int)this + 0xc) = puVar3;
  pvVar1 = (undefined *)F_00406b90(0x150,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00438f70(pvVar1,param_1);
  }
  *(uint *)((int)this + 0x10) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x38,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = param_1;
    *(undefined2 *)(puVar3 + 5) = 0x400;
    puVar3[2] = 0;
    *(undefined2 *)(puVar3 + 3) = 0;
    *puVar3 = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
    puVar3[4] = 0x800d0f;
    uVar2 = F_00406bb0(0x2400,0,0);
    puVar3[6] = uVar2;
    *(undefined2 *)(puVar3 + 7) = 0;
    *puVar3 = (*(undefined * PTR32 (*)[13])REFP(0x1090904));
    puVar3[8] = 0;
    puVar3[9] = 0;
    *(undefined1 *)(puVar3 + 0xc) = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x14) = puVar3;
  puVar3 = (undefined4 *)F_00406b90(0x668,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = param_1;
    puVar3[2] = 0;
    *(undefined2 *)(puVar3 + 3) = 0;
    *puVar3 = (*(undefined * PTR32 (*)[8])REFP(0x10916cc));
    puVar3[0x196] = 0;
    uVar2 = F_004296a0(0x78,0,400);
    puVar3[0x195] = uVar2;
    *(uint *)uVar2 = uVar2;
    *(undefined4 *)(puVar3[0x195] + 4) = puVar3[0x195];
    *(undefined4 *)(puVar3[0x195] + 8) = puVar3[0x195];
    *(undefined1 *)(puVar3[0x195] + 0x70) = 1;
    *(undefined1 *)(puVar3[0x195] + 0x71) = 1;
    *(undefined1 *)(puVar3 + 0x198) = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x18) = puVar3;
  pvVar1 = (undefined *)F_00406b90(0x8c,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00437af0(pvVar1,param_1);
  }
  *(uint *)((int)this + 0x1c) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x51c0,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = param_1;
    puVar3[2] = 0;
    *(undefined2 *)(puVar3 + 3) = 0;
    *puVar3 = (*(undefined * PTR32 (*)[8])REFP(0x10908b4));
    puVar3[0x1458] = 0xffffffff;
    F_0042b630(puVar3 + 0x1459);
    *(undefined1 *)(puVar3 + 0x146e) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x20) = puVar3;
  pvVar1 = (undefined *)F_00406b90(0xe0,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0044ba50(pvVar1,param_1);
  }
  *(uint *)((int)this + 0x24) = uVar2;
  pvVar1 = (undefined *)F_00406b90(0x1f0,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_004406c0(pvVar1,param_1);
  }
  *(uint *)((int)this + 0x28) = uVar2;
  pvVar1 = (undefined *)F_00406b90(0x1c98,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0044b160(pvVar1,param_1);
  }
  *(uint *)((int)this + 0x2c) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x398,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = param_1;
    puVar3[2] = 0;
    *(undefined2 *)(puVar3 + 3) = 0;
    *puVar3 = (*(undefined * PTR32 (*)[8])REFP(0x1090768));
    F_0042b630(puVar3 + 6);
    puVar3[0xe3] = 0;
    puVar3[0xe4] = 0;
    puVar3[0xe5] = 100;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    F_0042e430(puVar3 + 6,&REFG(undefined, 0x108d02f));
    F_00c48350(puVar3 + 0x1b,0,800);
  }
  *(undefined4 * PTR32 *)((int)this + 0x30) = puVar3;
  pvVar1 = (undefined *)F_00406b90(0x4a0,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00455550(pvVar1,param_1);
  }
  *(uint *)((int)this + 0x34) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x78,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = param_1;
    puVar3[2] = 0;
    *puVar3 = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
    puVar3[3] = 0xb002a2e;
    uVar2 = F_00406bb0(0x58,0,0);
    puVar3[4] = uVar2;
    puVar3[5] = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 8) = 0;
    F_0042b630(puVar3 + 9);
    *puVar3 = (*(undefined * PTR32 (*)[10])REFP(0x1090ba8));
    puVar3[5] = (*(undefined * PTR32 (*)[1])REFP(0x1090ba0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x38) = puVar3;
  puVar3 = (undefined4 *)F_00406b90(0x38,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = param_1;
    *(undefined2 *)(puVar3 + 5) = 0x640;
    puVar3[2] = 0;
    *(undefined2 *)(puVar3 + 3) = 0;
    *puVar3 = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
    puVar3[4] = 0xc82427;
    uVar2 = F_00406bb0(0x3840,0,0);
    puVar3[6] = uVar2;
    *(undefined2 *)(puVar3 + 7) = 0;
    *puVar3 = (*(undefined * PTR32 (*)[13])REFP(0x10907ec));
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(undefined1 *)(puVar3 + 0xc) = 1;
  }
  *(undefined4 * PTR32 *)((int)this + 0x3c) = puVar3;
  puVar3 = (undefined4 *)F_00406b90(0x160,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
    puVar3[1] = param_1;
    puVar3[2] = 0;
    puVar3[3] = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 6) = 0;
    F_0042b630(puVar3 + 7);
    *puVar3 = (*(undefined * PTR32 (*)[7])REFP(0x10907cc));
    puVar3[3] = (*(undefined * PTR32 (*)[1])REFP(0x10907c4));
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    *(undefined1 *)(puVar3 + 0x1e) = 0;
    F_00c48350(puVar3 + 0x20,0,0x38);
    F_00c48350(puVar3 + 0x2e,0,0xa8);
  }
  *(undefined4 * PTR32 *)((int)this + 0x40) = puVar3;
  puVar3 = (undefined4 *)F_00406b90(0x180,0,0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = param_1;
    puVar3[2] = 0;
    *puVar3 = (*(undefined * PTR32 (*)[7])REFP(0x1090970));
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[4] = 0xffffffff;
    puVar3[5] = 0xffffffff;
    F_00c48350(puVar3 + 6,0,0x140);
    puVar3[0x56] = 0;
    puVar3[0x57] = 0;
    puVar3[0x58] = 0;
    puVar3[0x59] = 0;
    puVar3[0x5a] = 0;
    puVar3[0x5b] = 0;
    puVar3[0x5c] = 0;
    puVar3[0x5d] = 0;
    puVar3[0x5e] = 0;
    puVar3[0x5f] = 0;
    *(undefined4 * PTR32 *)((int)this + 0x44) = puVar3;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  return (uint)this;
}

/* ref: FUN_0045bf50 */
uint F_0045bf50(unsigned int gen_a0)
{
  GEN_ENTER(0x45bf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined * puVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  puVar1 = REFG(undefined * PTR32, 0x12fdc0c);
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  uVar4 = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  pvVar3 = this;
  uVar2 = F_0042a3f0(((undefined1 *)(gen_frame + 0x0)),puVar1,1);
  uVar2 = F_0045a7c0(*(undefined * PTR32 *)((int)this + 0x30),*(undefined4 *)((int)this + 8),
                       *(undefined4 *)((int)this + 0xc),uVar2,pvVar3,uVar4);
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar2;
}

/* ref: FUN_0045bfb0 */
uint F_0045bfb0(unsigned int gen_a0)
{
  GEN_ENTER(0x45bfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  uVar1 = 0;
  if (*(int *)((int)this + 0x30) != 0 || *(int *)((int)this + 0x34) != 0) {
    uVar3 = 0;
    pvVar2 = this;
    uVar1 = F_0042a3f0(((undefined1 *)(gen_frame + 0x0)),REFG(undefined * PTR32, 0x12fdc10),1);
    uVar1 = F_0045a7c0(*(undefined * PTR32 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x30),
                         *(undefined4 *)((int)this + 0x34),uVar1,pvVar2,uVar3);
    F_00429fa0();
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar1;
}

/* ref: FUN_0045c010 */
unsigned int F_0045c010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45c010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  byte * pbVar4;
  int local_14;
  int local_c;
  
  if (*(char *)((int)this + 0x38) != '\0') {
    if (*(byte *)((int)this + 0x39) != param_1) {
      bVar1 = 0;
      local_c = 0;
      puVar3 = (undefined4 *)((int)this + 0x50);
      do {
        local_14 = 0x10;
        uVar2 = param_1;
        if ((*(uint *)((int)this + 0x40) & 1 << (bVar1 & 0x1f)) != 0) {
          uVar2 = 0;
        }
        pbVar4 = (byte *)((int)this + local_c + uVar2 * 0x900 + 0x1bd4c);
        do {
          puVar3[-1] = 0;
          puVar3[-2] = 0;
          *puVar3 = 0xffff0000;
          puVar3[0x2b] = 0;
          puVar3[0x2c] = 0xfffffffe;
          F_0042aca0(puVar3 + 1);
          F_0042aca0(puVar3 + 0x2d);
          F_00458d90(puVar3 + -2,*(undefined4 *)((int)this + 0x34),(uint)*pbVar4,
                       *(undefined4 *)(pbVar4 + 4));
          puVar3 = puVar3 + 0x59;
          pbVar4 = pbVar4 + 8;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        bVar1 = bVar1 + 1;
        local_c = local_c + 0x80;
      } while (local_c < 0x900);
      *(byte *)((int)this + 0x39) = (byte)param_1;
    }
    return 0;
  }
  *(byte *)((int)this + 0x39) = (byte)param_1 | 0x80;
  return 0;
}

/* ref: FUN_0045c110 */
byte F_0045c110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x45c110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char * pcVar5;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xb9);
  iVar4 = -1;
  iVar3 = -1;
  if (((char)param_7 == '\0') || ((*(uint *)(uVar1 + 0x14) & 1 << ((byte)param_3 & 0x1f)) != 0)) {
    iVar2 = 0;
    pcVar5 = (char *)(param_3 * 0x1640 + 0x50 + (int)in_ecx);
    do {
      if (((*pcVar5 == (char)param_4) && (*(int *)(pcVar5 + -8) == param_5)) &&
         ((char)param_6 == '\0')) {
        return 0;
      }
      if (((iVar4 < 0) && (*pcVar5 == '\0')) &&
         (iVar3 = iVar2, iVar4 = param_3, (char)param_6 != '\0')) break;
      iVar2 = iVar2 + 1;
      pcVar5 = pcVar5 + 0x164;
    } while (iVar2 < 0xc);
    if (-1 < iVar4) {
      F_00459030(in_ecx,iVar4,iVar3,param_4,param_5);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0045c1c0 */
byte F_0045c1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x45c1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int * local_c;
  int local_8;
  
  iVar5 = -1;
  local_8 = -1;
  local_c = &REFG(undefined4, 0x108f6b0);
  do {
    iVar2 = *local_c;
    iVar4 = (param_1 * 0x10 + iVar2) * 0x164;
    cVar1 = *(char *)(iVar4 + 0xded0 + (int)this);
    if (((cVar1 == (char)param_2) && (*(int *)(iVar4 + 0xdec8 + (int)this) == param_3)) &&
       ((char)param_4 == '\0')) {
      return 0;
    }
  } while ((((-1 < iVar5) || (cVar1 != '\0')) ||
           (iVar5 = param_1, local_8 = iVar2, (char)param_4 == '\0')) &&
          (local_c = local_c + 1, (int)local_c < 0x108f6f0));
  if (iVar5 < 0) {
    return 0;
  }
  iVar5 = iVar5 + 10;
  this_00 = ((undefined4 *)GEN_TOP(((iVar5 * 0x10 + local_8) * 0x164 + 0x48 + (int)this)));
  *(undefined2 *)(this_00 + 2) = 0;
  this_00[1] = 0;
  *this_00 = 0;
  this_00[0x2d] = 0;
  *(undefined1 *)((int)this_00 + 10) = 0xff;
  *(undefined1 *)((int)this_00 + 0xb) = 0xff;
  this_00[0x2e] = 0xfffffffe;
  F_0042aca0(this_00 + 3);
  F_0042aca0(this_00 + 0x2f);
  F_00458d90(this_00,*(undefined4 *)((int)this + 0x34),param_2,param_3);
  uVar3 = (uint)*(byte *)((int)this + 0x39);
  if ((*(uint *)((int)this + 0x40) & 1 << ((byte)iVar5 & 0x1f)) != 0) {
    uVar3 = 0;
  }
  iVar5 = (iVar5 + uVar3 * 0x12) * 0x10 + local_8;
  *(undefined1 *)((int)this + iVar5 * 8 + 0x1bd4c) = *(undefined1 *)(this_00 + 2);
  *(undefined4 *)((int)this + iVar5 * 8 + 0x1bd50) = *this_00;
  *(undefined1 *)((int)this + 0x2c) = 1;
  return 1;
}

/* ref: FUN_0045c2f0 */
byte F_0045c2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x45c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  int iVar5;
  char * local_c;
  int local_8;
  
  local_c = (char *)((int)this + 0x50);
  local_8 = 0;
  do {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xb9);
    iVar5 = -1;
    iVar3 = -1;
    if (((char)param_4 == '\0') || ((*(uint *)(uVar1 + 0x14) & 1 << ((byte)local_8 & 0x1f)) != 0)) {
      iVar2 = 0;
      pcVar4 = local_c;
      do {
        if (((*pcVar4 == (char)param_1) && (*(int *)(pcVar4 + -8) == param_2)) &&
           ((char)param_3 == '\0')) goto LAB_0045c377;
        if (((iVar5 < 0) && (*pcVar4 == '\0')) &&
           (iVar3 = iVar2, iVar5 = local_8, (char)param_3 != '\0')) break;
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 0x164;
      } while (iVar2 < 0xc);
      if (-1 < iVar5) {
        F_00459030(this,iVar5,iVar3,param_1,param_2);
        return 1;
      }
    }
LAB_0045c377: ;
    local_c = local_c + 0x1640;
    local_8 = local_8 + 1;
    if (9 < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0045c3c0 */
byte F_0045c3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x45c3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  do {
    iVar4 = -1;
    local_10 = -1;
    piVar5 = &REFG(undefined4, 0x108f6b0);
    do {
      iVar3 = *piVar5;
      piVar1 = ((int *)GEN_TOP(((local_c + iVar3) * 0x164 + 0xdec8 + (int)this)));
      cVar2 = (char)piVar1[2];
      if (((cVar2 == (char)param_1) && (*piVar1 == param_2)) && ((char)param_3 == '\0'))
      goto LAB_0045c42e;
      if ((iVar4 < 0) && (cVar2 == '\0')) {
        iVar4 = local_8;
        local_10 = iVar3;
        if ((char)param_3 != '\0') break;
      }
      piVar5 = piVar5 + 1;
    } while ((int)piVar5 < 0x108f6f0);
    if (-1 < iVar4) {
      F_00459030(this,iVar4 + 10,local_10,param_1,param_2);
      return 1;
    }
LAB_0045c42e: ;
    local_8 = local_8 + 1;
    local_c = local_c + 0x10;
    if (0x7f < local_c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0045c470 */
uint F_0045c470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x45c470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  uint uVar2;
  uint local_8;
  
  bVar1 = F_0045c2f0(this,param_1,param_2,param_3,param_4);
  local_8 = (uint)(bVar1 != 0);
  bVar1 = F_0045c3c0(this,param_1,param_2,param_3,param_4);
  uVar2 = local_8;
  if (bVar1 != 0) {
    uVar2 = local_8 | 2;
  }
  return uVar2;
}

/* ref: FUN_0045c4d0 */
uint F_0045c4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x45c4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  char cVar1;
  byte bVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int * piVar9;
  
  (*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c);
  if (param_1 == *(byte *)((int)this + 0x39)) {
    bVar2 = F_0045c2f0(this,param_2,param_3,param_4,param_5);
    (*(uint *)(gen_frame + 0x10)) = (uint)(bVar2 != 0);
    bVar2 = F_0045c3c0(this,param_2,param_3,param_4,param_5);
    if (bVar2 != 0) {
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 2;
    }
    F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
    return (*(uint *)(gen_frame + 0x10));
  }
  uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xb9);
  iVar6 = -1;
  iVar5 = param_1 * 0x900 + 0x1bd4c;
  (*(uint *)(gen_frame + 0x10)) = -1;
  iVar8 = 0;
  do {
    if (((char)param_5 == '\0') || ((*(uint *)(uVar3 + 0x14) & 1 << ((byte)iVar8 & 0x1f)) != 0)) {
      iVar7 = 0;
      pcVar4 = (char *)((int)this + iVar8 * 0x80 + iVar5);
      do {
        if (((*pcVar4 == (char)param_2) && (*(int *)(pcVar4 + 4) == param_3)) &&
           ((char)param_4 == '\0')) {
          iVar8 = -1;
          (*(uint *)(gen_frame + 0x10)) = -1;
LAB_0045c602: ;
          iVar6 = iVar8;
          iVar8 = 0x12;
          break;
        }
        if (((iVar6 < 0) && (*pcVar4 == '\0')) &&
           (iVar6 = iVar8, (*(uint *)(gen_frame + 0x10)) = iVar7, (char)param_4 != '\0')) goto LAB_0045c602;
        iVar7 = iVar7 + 1;
        pcVar4 = pcVar4 + 8;
      } while (iVar7 < 0xc);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x12);
  if (-1 < iVar6) {
    ((undefined4 *)(gen_frame + 0x14))[0] = 0;
    (*(undefined1 *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)(gen_frame + 0x1e)) = 0xff;
    F_0042b630(((undefined1 *)(gen_frame + 0x20)));
    F_0042b630(((undefined1 *)(gen_frame + 0x74)));
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    (*(undefined4 *)(gen_frame + 0xcc)) = 0xfffffffe;
    F_0042b630(((undefined1 *)(gen_frame + 0xd0)));
    F_0042b630(((undefined1 *)(gen_frame + 0x124)));
    F_00458d90(((undefined4 *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x34),param_2,param_3);
    iVar8 = (iVar6 + param_1 * 0x12) * 0x10 + (*(uint *)(gen_frame + 0x10));
    *(undefined1 *)((int)this + iVar8 * 8 + 0x1bd4c) = (*(undefined1 *)(gen_frame + 0x1c));
    *(undefined4 *)((int)this + iVar8 * 8 + 0x1bd50) = ((undefined4 *)(gen_frame + 0x14))[0];
    *(undefined1 *)((int)this + 0x2c) = 1;
    F_0042c880(((undefined1 *)(gen_frame + 0x124)));
    F_0042c880(((undefined1 *)(gen_frame + 0xd0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x74)));
    F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  }
  (*(uint *)(gen_frame + 0x8)) = (uint)(-1 < iVar6);
  (*(int *)(gen_frame + 0xc)) = -1;
  (*(uint *)(gen_frame + 0x10)) = -1;
  iVar6 = 0;
  do {
    piVar9 = &REFG(undefined4, 0x108f6b0);
    do {
      iVar8 = *piVar9;
      pcVar4 = ((char *)GEN_TOP(((int)this + ((iVar6 + 10) * 0x10 + iVar8) * 8 + iVar5)));
      cVar1 = *pcVar4;
      if (((cVar1 == (char)param_2) && (*(int *)(pcVar4 + 4) == param_3)) && ((char)param_4 == '\0')
         ) {
        (*(int *)(gen_frame + 0xc)) = -1;
        (*(uint *)(gen_frame + 0x10)) = -1;
LAB_0045c785: ;
        iVar6 = 8;
        break;
      }
      if ((((*(int *)(gen_frame + 0xc)) < 0) && (cVar1 == '\0')) &&
         ((*(int *)(gen_frame + 0xc)) = iVar6, (*(uint *)(gen_frame + 0x10)) = iVar8, (char)param_4 != '\0')) goto LAB_0045c785;
      piVar9 = piVar9 + 1;
    } while ((int)piVar9 < 0x108f6f0);
    iVar6 = iVar6 + 1;
    if (7 < iVar6) {
      if (-1 < (*(int *)(gen_frame + 0xc))) {
        ((undefined4 *)(gen_frame + 0x14))[0] = 0;
        (*(undefined1 *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)(gen_frame + 0x1e)) = 0xff;
        F_0042b630(((undefined1 *)(gen_frame + 0x20)));
        F_0042b630(((undefined1 *)(gen_frame + 0x74)));
        (*(undefined4 *)(gen_frame + 0xc8)) = 0;
        (*(undefined4 *)(gen_frame + 0xcc)) = 0xfffffffe;
        F_0042b630(((undefined1 *)(gen_frame + 0xd0)));
        F_0042b630(((undefined1 *)(gen_frame + 0x124)));
        F_00458d90(((undefined4 *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x34),param_2,param_3);
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) | 2;
        iVar5 = ((*(int *)(gen_frame + 0xc)) + 10 + param_1 * 0x12) * 0x10 + (*(uint *)(gen_frame + 0x10));
        *(undefined1 *)((int)this + iVar5 * 8 + 0x1bd4c) = (*(undefined1 *)(gen_frame + 0x1c));
        *(undefined4 *)((int)this + iVar5 * 8 + 0x1bd50) = ((undefined4 *)(gen_frame + 0x14))[0];
        *(undefined1 *)((int)this + 0x2c) = 1;
        F_0042c880(((undefined1 *)(gen_frame + 0x124)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd0)));
        F_0042c880(((undefined1 *)(gen_frame + 0x74)));
        F_0042c880(((undefined1 *)(gen_frame + 0x20)));
      }
      F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
      return (*(uint *)(gen_frame + 0x8));
    }
  } while( true );
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf1 */
byte F_0045c890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x45c890u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (*(int *)&gen_args[3]);
  iVar1 = (*(int *)&gen_args[2]);
  if (((char)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) != '\0') && ((*(int *)&gen_args[2]) != 0)) {
    (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
    uVar3 = F_00407d50((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]) + -1);
    if (0 < (int)uVar3) {
      (*(undefined * PTR32 *)&gen_args[0])[0x3a] = (undefined1)0x1;
      F_0044be20((*(undefined * PTR32 *)&gen_args[0]),iVar1,iVar2);
      goto LAB_0045c8dc;
    }
  }
  (*(undefined * PTR32 *)&gen_args[0])[0x3a] = (undefined1)0x0;
  F_0043b1d0((*(undefined * PTR32 *)&gen_args[0]),1);
LAB_0045c8dc: ;
  (*(undefined * PTR32 *)&gen_args[0])[0x38] = (undefined1)0x1;
  if ((char)(*(undefined * PTR32 *)&gen_args[0])[0x39] < '\0') {
    F_0045c010((*(undefined * PTR32 *)&gen_args[0]),(byte)(*(undefined * PTR32 *)&gen_args[0])[0x39] & 0x7f);
  }
  return 1;
}

/* ref: FUN_0045c900 */
byte F_0045c900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x45c900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  if ((((param_1 < 0x1d) && (param_3 < 0x1d)) && (param_2 < 10)) && (param_4 < 10)) {
    F_00459650(this,param_1,param_2,param_3,param_4);
    return 1;
  }
  return 0;
}

/* ref: FUN_0045c940 */
byte F_0045c940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x45c940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  if ((((param_1 < 0x1d) && (param_3 < 0x1d)) && (param_2 < 8)) && (param_4 < 8)) {
    F_00459650(this,param_1,param_2 + 10,param_3,param_4 + 10);
    return 1;
  }
  return 0;
}

/* ref: FUN_0045c990 */
unsigned int F_0045c990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45c990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  bool bVar3;
  bool bVar4;
  
  *(int *)((int)this + 0x60) = param_1;
  if (param_1 != 0) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x998);
    do {
      if (*(int *)((int)this + 0x60) != 0) {
        bVar3 = (char)piVar2[-3] == '\0';
        if (!bVar3) {
          *(undefined1 *)(piVar2 + -3) = 0;
        }
        bVar4 = *(char *)((int)piVar2 + -0xb) == '\x10';
        if (!bVar4) {
          *(undefined1 *)((int)piVar2 + -0xb) = 0x10;
        }
        if ((short)piVar2[-4] == 0) {
          if (bVar4 && bVar3) goto LAB_0045ca28;
        }
        else {
          *(undefined2 *)(piVar2 + -4) = 0;
        }
        F_0044eca0(this,iVar1);
        F_00487260(piVar2 + -1,*(undefined4 *)(*piVar2 + 4));
        *(int *)(*piVar2 + 4) = *piVar2;
        *(int *)*piVar2 = *piVar2;
        *(int *)(*piVar2 + 8) = *piVar2;
        piVar2[1] = 0;
        F_004579f0(this,piVar2 + -0x1cc,piVar2[7],0,(int)(short)piVar2[8],0);
      }
LAB_0045ca28: ;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x1d5;
    } while (iVar1 < 4);
  }
  F_0045a580(this,4,0,0x10,0xffff);
  return 0;
}

/* ref: FUN_0045ca60 */
uint F_0045ca60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45ca60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_0045a710(this,param_1 * 0x754 + 0x268 + (int)this);
  return uVar1;
}

/* ref: FUN_0045ca80 */
uint F_0045ca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x45ca80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  undefined1 * puVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  piVar7 = (int *)0x0;
  if (((int *)*piVar3 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar3, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar4 = piVar3[3] + 1;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar8 + 8);
  }
  F_00490f90(*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar4 * 4))),param_1);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  piVar7 = (int *)0x0;
  if (((int *)*piVar3 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar3, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar4 = piVar3[3] + 4;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar8 + 8);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar4 * 4)));
  if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      pvVar2 = *(undefined * PTR32 *)puVar1[1];
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = param_2;
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  piVar7 = (int *)0x0;
  if (((int *)*piVar3 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar3, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar4 = piVar3[3] + 6;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar8 + 8);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar4 * 4)));
  if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      pvVar2 = *(undefined * PTR32 *)puVar1[1];
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = param_3;
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar5 = (undefined1 *)F_0042a7e0(param_1,0);
  switch((unsigned int)(uintptr_t)(*puVar5)) {
  case 0x41: ;
  case 0x45: ;
  case 0x49: ;
  case 0x4f: ;
  case 0x55: ;
    param_1 = 1;
    break;
  default: ;
    param_1 = 0;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  piVar7 = (int *)0x0;
  if (((int *)*piVar3 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar3, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar4 = piVar3[3] + 0x41;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar8 + 8);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar4 * 4)));
  puVar6 = (undefined4 *)puVar1[1];
  if (puVar6 != (undefined4 *)0x0) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      pvVar2 = (undefined *)*puVar6;
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        puVar6 = (undefined4 *)F_00406ad0(pvVar2);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = param_1;
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  return (uint)puVar6;
}

/* ref: FUN_0045ccd0 */
uint F_0045ccd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x45ccd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  undefined1 * puVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  piVar7 = (int *)0x0;
  if (((int *)*piVar3 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar3, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar4 = piVar3[3] + 2;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar8 + 8);
  }
  F_00490f90(*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar4 * 4))),param_1);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  piVar7 = (int *)0x0;
  if (((int *)*piVar3 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar3, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar4 = piVar3[3] + 5;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar8 + 8);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar4 * 4)));
  if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      pvVar2 = *(undefined * PTR32 *)puVar1[1];
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = param_2;
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  piVar7 = (int *)0x0;
  if (((int *)*piVar3 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar3, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar4 = piVar3[3] + 7;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar8 + 8);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar4 * 4)));
  if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      pvVar2 = *(undefined * PTR32 *)puVar1[1];
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = param_3;
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar5 = (undefined1 *)F_0042a7e0(param_1,0);
  switch((unsigned int)(uintptr_t)(*puVar5)) {
  case 0x41: ;
  case 0x45: ;
  case 0x49: ;
  case 0x4f: ;
  case 0x55: ;
    param_1 = 1;
    break;
  default: ;
    param_1 = 0;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  piVar7 = (int *)0x0;
  if (((int *)*piVar3 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar3, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar4 = piVar3[3] + 0x42;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar8 + 8);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar4 * 4)));
  puVar6 = (undefined4 *)puVar1[1];
  if (puVar6 != (undefined4 *)0x0) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      pvVar2 = (undefined *)*puVar6;
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        puVar6 = (undefined4 *)F_00406ad0(pvVar2);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = param_1;
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  return (uint)puVar6;
}

/* ref: FUN_0045cf20 */
uint F_0045cf20(unsigned int gen_a0)
{
  GEN_ENTER(0x45cf20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 extraout_EDX = 0;
  int * piVar7;
  int iVar8;
  undefined4 extraout_EDX_00 = 0;
  undefined4 extraout_EDX_01 = 0;
  undefined4 extraout_EDX_02 = 0;
  int * piVar9;
  ulonglong uStackY_2c;
  
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  piVar9 = (int *)(REFG(int, 0x137104c) + 0x1210);
  uVar5 = ((code *)*(gen_code32 *)(*piVar9 + 4))(piVar9,0);
  uStackY_2c = CONCAT44(extraout_EDX,uVar5);
  uVar3 = (ulonglong)REFG(undefined4, 0x10e90e8);
  piVar7 = (int *)0x0;
  if (((int *)*piVar4 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar4, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar5 = piVar4[3] + 8;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar8 + 8);
  }
  piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar5 * 4)));
  if ((undefined4 *)piVar7[1] != (undefined4 *)0x0) {
    if (((char)piVar7[2] != '\0') && ((char)piVar7[2] == '\x01')) {
      pvVar2 = *(undefined * PTR32 *)piVar7[1];
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    piVar7[1] = 0;
    *(undefined1 *)(piVar7 + 2) = 0xff;
  }
  *piVar7 = (int)((uStackY_2c / 0x15180 & 0xffffffff) / uVar3) + 1;
  piVar7[1] = (int)piVar7;
  *(undefined1 *)(piVar7 + 2) = 0;
  uVar5 = ((code *)*(gen_code32 *)(*piVar9 + 4))(piVar9,0);
  uStackY_2c = CONCAT44(extraout_EDX_00,uVar5);
  uVar3 = (ulonglong)REFG(undefined4, 0x10e90e8);
  piVar7 = (int *)0x0;
  if (((int *)*piVar4 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar4, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar5 = piVar4[3] + 9;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar8 + 8);
  }
  piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar5 * 4)));
  if ((undefined4 *)piVar7[1] != (undefined4 *)0x0) {
    if (((char)piVar7[2] != '\0') && ((char)piVar7[2] == '\x01')) {
      pvVar2 = *(undefined * PTR32 *)piVar7[1];
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    piVar7[1] = 0;
    *(undefined1 *)(piVar7 + 2) = 0xff;
  }
  *piVar7 = (int)((uStackY_2c / 0x15180) % uVar3) + 1;
  piVar7[1] = (int)piVar7;
  *(undefined1 *)(piVar7 + 2) = 0;
  uVar5 = ((code *)*(gen_code32 *)(*piVar9 + 4))(piVar9,0);
  uStackY_2c = CONCAT44(extraout_EDX_01,uVar5);
  piVar7 = (int *)0x0;
  if (((int *)*piVar4 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar4, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar5 = piVar4[3] + 10;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar8 + 8);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar5 * 4)));
  if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      pvVar2 = *(undefined * PTR32 *)puVar1[1];
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = (int)((uStackY_2c / 0xe10) % 0x18);
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  uVar5 = ((code *)*(gen_code32 *)(*piVar9 + 4))(piVar9,0);
  uStackY_2c = CONCAT44(extraout_EDX_02,uVar5);
  piVar7 = (int *)0x0;
  if (((int *)*piVar4 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar4, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar5 = piVar4[3] + 0xb;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar8 + 8);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar5 * 4)));
  puVar6 = (undefined4 *)puVar1[1];
  if (puVar6 != (undefined4 *)0x0) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      pvVar2 = (undefined *)*puVar6;
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        puVar6 = (undefined4 *)F_00406ad0(pvVar2);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = (int)((uStackY_2c / 0x3c) % 0x3c);
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  return (uint)puVar6;
}

/* ref: FUN_0045d230 */
uint F_0045d230(unsigned int gen_a0)
{
  GEN_ENTER(0x45d230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0045a970(this);
  return (int)this + 0x928;
}

/* ref: FUN_0045d240 */
uint F_0045d240(unsigned int gen_a0)
{
  GEN_ENTER(0x45d240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0045a970(this);
  return (int)this + 0x93c;
}

/* ref: FUN_0045d250 */
uint F_0045d250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45d250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar2 = (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8)) / 0x58;
  F_00488e70((undefined *)((int)this + 0x964),&(*(int *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x964),
               *(undefined4 *)((int)this + 0x968));
  if (0 < iVar2) {
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(int *)(gen_frame + 0xc)) = iVar2;
    do {
      iVar2 = *(int *)(param_1 + 0xa8) + (*(int *)(gen_frame + 0x8));
      uVar1 = *(undefined4 *)(iVar2 + 0x54);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x10)),iVar2);
      (*(undefined4 *)(gen_frame + 0x64)) = uVar1;
      F_00490cc0((undefined *)((int)this + 0x964),((undefined1 *)(gen_frame + 0x10)));
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x58;
      iVar2 = (*(int *)(gen_frame + 0xc)) + -1;
      (*(int *)(gen_frame + 0xc)) = iVar2;
    } while (iVar2 != 0);
    *(undefined1 *)((int)this + 0x974) = 1;
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)uVar3;
  }
  *(undefined1 *)((int)this + 0x974) = 1;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)this;
}

/* ref: FUN_0045d320 */
uint F_0045d320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45d320u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"&amp;",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x108fa70),REFG(undefined4, 0x108cc50));
  F_00490d90(&(*(int *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),&REFG(undefined, 0x108fa80),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x108fa7c),REFG(undefined4, 0x108cc50));
  F_00490d90(&(*(int *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),&REFG(undefined, 0x108fa8c),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x108fa88),REFG(undefined4, 0x108cc50));
  F_00490d90(&(*(int *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"&quot;",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x108fa94),REFG(undefined4, 0x108cc50));
  F_00490d90(&(*(int *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),&REFG(undefined, 0x108faa0),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x108d3d3),REFG(undefined4, 0x108cc50));
  F_00490d90(&(*(int *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"&#xD;",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x108d3f7),REFG(undefined4, 0x108cc50));
  F_00490d90(&(*(int *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042cbc0(param_1,param_2);
  iVar2 = (*(int *)(gen_frame + 0x0));
  for (iVar1 = ((*(int *)(gen_frame + 0x4)) - (*(int *)(gen_frame + 0x0))) / 0xa8; iVar1 != 0; iVar1 = iVar1 + -1) {
    F_0042d750(param_1,iVar2,iVar2 + 0x54);
    iVar2 = iVar2 + 0xa8;
  }
  F_00488f50(&(*(int *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)param_1;
}

/* ref: FUN_0045d590 */
uint F_0045d590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45d590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8)) / 0x170;
  if (0 < (int)uVar2) {
    iVar3 = 0;
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    do {
      iVar1 = *(int *)(param_1 + 0xa8);
      uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x4)),iVar1 + 0x60 + iVar3);
      F_0042ccf0((undefined *)(iVar1 + 0x60 + iVar3),uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      iVar1 = *(int *)(param_1 + 0xa8);
      uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x4)),iVar1 + 0x11c + iVar3);
      F_0042ccf0((undefined *)(iVar1 + 0x11c + iVar3),uVar2);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar2 = (uint)uVar4;
      iVar3 = iVar3 + 0x170;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
    } while ((*(uint *)(gen_frame + 0x0)) != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_0045d650 */
uint F_0045d650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45d650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int *)(gen_frame + 0x0)) = (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8)) / 0x1b8;
  uVar2 = 0;
  if ((*(int *)(gen_frame + 0x0)) != 0) {
    iVar3 = 0;
    do {
      this_00 = ((undefined *)GEN_TOP((*(int *)(param_1 + 0xa8) + iVar3)));
      uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x4)),this_00);
      F_0042ccf0(this_00,uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      iVar1 = *(int *)(param_1 + 0xa8);
      uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x4)),iVar1 + 0x54 + iVar3);
      F_0042ccf0((undefined *)(iVar1 + 0x54 + iVar3),uVar2);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar2 = (uint)uVar4;
      iVar3 = iVar3 + 0x1b8;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_0045d700 */
uint F_0045d700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45d700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int *)(gen_frame + 0x0)) = (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8)) / 0x170;
  uVar2 = 0;
  if ((*(int *)(gen_frame + 0x0)) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xa8);
      uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x4)),iVar1 + 0x60 + iVar3);
      F_0042ccf0((undefined *)(iVar1 + 0x60 + iVar3),uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      iVar1 = *(int *)(param_1 + 0xa8);
      uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x4)),iVar1 + 0x11c + iVar3);
      F_0042ccf0((undefined *)(iVar1 + 0x11c + iVar3),uVar2);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar2 = (uint)uVar4;
      iVar3 = iVar3 + 0x170;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_0045d7c0 */
uint F_0045d7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45d7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * this_00;
  int iVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int *)(gen_frame + 0x0)) = (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8)) / 0x58;
  uVar1 = 0;
  if ((*(int *)(gen_frame + 0x0)) != 0) {
    iVar2 = 0;
    do {
      this_00 = ((undefined *)GEN_TOP((*(int *)(param_1 + 0xa8) + iVar2)));
      uVar1 = F_0045d320(((undefined1 *)(gen_frame + 0x4)),this_00);
      F_0042ccf0(this_00,uVar1);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar1 = (uint)uVar3;
      iVar2 = iVar2 + 0x58;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_0045d840 */
uint F_0045d840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45d840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x30))(this)));
  F_0045c010(pvVar1,uVar3);
  pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x48))(this)));
  uVar2 = F_007630b0(pvVar1,param_1);
  return uVar2;
}

/* ref: FUN_0045d8f0 */
uint F_0045d8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x45d8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  *(undefined1 *)((int)this + 0xc74) = 0;
  if (param_1 == 1) {
    if ((uint)((*(int *)((int)this + 0x388) - *(int *)((int)this + 900)) / 0x1b8) <= param_2)
    goto LAB_0045db1f;
    iVar5 = param_2 * 0x1b8 + *(int *)((int)this + 900);
    F_0042ccf0((undefined *)((int)this + 0xbcc),iVar5);
    iVar5 = iVar5 + 0x54;
LAB_0045db0c: ;
    F_0042ccf0((undefined *)((int)this + 0xc20),iVar5);
  }
  else {
    if (param_1 != 2) {
      if ((param_1 != 3) ||
         ((uint)((*(int *)((int)this + 0x528) - *(int *)((int)this + 0x524)) / 0x170) <= param_2))
      goto LAB_0045db1f;
      iVar5 = param_2 * 0x170 + *(int *)((int)this + 0x524);
      F_0042ccf0((undefined *)((int)this + 0xbcc),iVar5 + 0x60);
      iVar5 = iVar5 + 0x11c;
      goto LAB_0045db0c;
    }
    iVar5 = *(int *)((int)this + 0x46c);
    uVar3 = (*(int *)((int)this + 0x470) - iVar5) / 0x1b8;
    if (uVar3 <= param_2) goto LAB_0045db1f;
    uVar4 = param_2;
    if ((*(int *)((int)this + 0xda8) != 0) && ((*(uint *)(gen_frame + 0x8)) = 0, 0 < (int)uVar3)) {
      (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
      (*(int *)(gen_frame + 0x4)) = 0;
      do {
        iVar1 = *(int *)((int)this + 0xda8);
        if (*(uint *)((*(int *)(gen_frame + 0x4)) + 0x1b4 + iVar5) == (uint)(byte)(&REFG(undefined, 0x1372328))[iVar1]) {
          if (iVar1 == 2) {
            bVar2 = F_0042b6a0((undefined *)((*(int *)(gen_frame + 0x4)) + 0x160 + iVar5),"Important");
LAB_0045da1a: ;
            if (bVar2 != 0) goto LAB_0045da1e;
          }
          else {
            if (iVar1 == 3) {
              bVar2 = F_0042b740((undefined *)((*(int *)(gen_frame + 0x4)) + 0x160 + iVar5),"Important");
              goto LAB_0045da1a;
            }
LAB_0045da1e: ;
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
          }
          uVar4 = (*(uint *)(gen_frame + 0x8));
          if ((*(uint *)(gen_frame + 0xc)) == param_2) break;
        }
        iVar5 = *(int *)((int)this + 0x46c);
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 0x1b8;
        uVar4 = param_2;
      } while ((int)(*(uint *)(gen_frame + 0x8)) < (*(int *)((int)this + 0x470) - iVar5) / 0x1b8);
    }
    iVar5 = uVar4 * 0x1b8 + *(int *)((int)this + 0x46c);
    uVar3 = F_0045d320(((undefined1 *)(gen_frame + 0x10)),iVar5);
    F_0042ccf0((undefined *)((int)this + 0xbcc),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    uVar3 = F_0045d320(((undefined1 *)(gen_frame + 0x64)),iVar5 + 0x54);
    F_0042ccf0((undefined *)((int)this + 0xc20),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  }
  *(undefined1 *)((int)this + 0xc74) = 1;
LAB_0045db1f: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (int)this + 0xbcc;
}

/* ref: FUN_0045db40 */
uint F_0045db40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45db40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x64)),param_1 + 0xa8);
  F_0042ccf0((undefined *)((int)this + 0x990),uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  *(uint *)((int)this + 0xa44) =
       *(int *)(param_1 + 0x100) << 0x10 | (uint)*(ushort *)(param_1 + 0x104);
  uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x64)),param_1 + 0x110);
  F_0042ccf0((undefined *)((int)this + 0x9e4),uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  (*(uint *)(gen_frame + 0x8)) = (*(int *)(param_1 + 0x168) - *(int *)(param_1 + 0x164)) / 0x58;
  F_00488e70((undefined *)((int)this + 0xa48),&(*(undefined4 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0xa48),
               *(undefined4 *)((int)this + 0xa4c));
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (0 < (int)(*(uint *)(gen_frame + 0x8))) {
    (*(int *)(gen_frame + 0x4)) = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x164) + (*(int *)(gen_frame + 0x4));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar3 + 0x54);
      uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x64)),iVar3);
      F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),uVar2);
      (*(undefined4 *)(gen_frame + 0x60)) = (*(undefined4 *)(gen_frame + 0x0));
      F_00490cc0((undefined *)((int)this + 0xa48),((undefined1 *)(gen_frame + 0xc)));
      F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      uVar2 = (uint)uVar4;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 0x58;
      uVar1 = (*(uint *)(gen_frame + 0x8)) - 1;
      (*(uint *)(gen_frame + 0x8)) = uVar1;
    } while (uVar1 != 0);
  }
  *(undefined4 *)((int)this + 0x98c) = 0xffffffff;
  *(undefined1 *)((int)this + 0xa3c) = 1;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar2;
}

/* ref: FUN_0045dcb0 */
uint F_0045dcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45dcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(int *)(gen_frame + 0x10)) = param_1;
  uVar2 = *(uint *)((int)this + 0xc7c) & 0xffff | *(int *)((int)this + 0xc78) << 0x10;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  F_004847d0((undefined *)((int)this + 0xcd8),&(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0xc)) != *(int *)((int)this + 0xcdc)) {
    uVar2 = F_0045d320(((undefined1 *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x10)) + 0xa8);
    F_0042ccf0((undefined *)((*(int *)(gen_frame + 0xc)) + 0x18),uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x24)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return (uint)uVar3;
  }
  uVar1 = F_0045d320(((undefined1 *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x10)) + 0xa8);
  F_0042ccf0((undefined *)((int)this + 0xc80),uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  *(undefined1 *)((int)this + 0xcd4) = 1;
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((int)this + 0xc7c);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 0xc78);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x20)),(int)this + 0xc80);
  (*(undefined1 *)(gen_frame + 0x74)) = *(undefined1 *)((int)this + 0xcd4);
  F_00489640((undefined *)((int)this + 0xcd8),((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x14)));
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  *(undefined1 *)((int)this + 0xcd4) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar3;
}

/* ref: FUN_0045dde0 */
uint F_0045dde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45dde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined * pvVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8)) / 0x1b8;
  if (0 < (*(int *)(gen_frame + 0x1c))) {
    iVar6 = 0;
    do {
      pvVar2 = ((undefined *)GEN_TOP((*(int *)(param_1 + 0xa8) + iVar6)));
      uVar3 = F_0045d320(((undefined1 *)(gen_frame + 0x24)),pvVar2);
      F_0042ccf0(pvVar2,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x24)));
      iVar4 = *(int *)(param_1 + 0xa8) + iVar6;
      uVar3 = F_0045d320(((undefined1 *)(gen_frame + 0x24)),iVar4 + 0x54);
      F_0042ccf0((undefined *)(iVar4 + 0x54),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x24)));
      iVar6 = iVar6 + 0x1b8;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
    } while ((*(int *)(gen_frame + 0x1c)) != 0);
  }
  iVar6 = (*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8)) / 0x68;
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (0 < iVar6) {
    (*(int *)(gen_frame + 0x20)) = 0;
    do {
      pvVar2 = ((undefined *)GEN_TOP((*(int *)(param_1 + 0xb8) + (*(int *)(gen_frame + 0x20)))));
      uVar3 = F_0045d320(((undefined1 *)(gen_frame + 0x24)),pvVar2);
      F_0042ccf0(pvVar2,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x24)));
      piVar1 = ((int *)GEN_TOP((*(int *)(param_1 + 0xb8) + 0x58 + (*(int *)(gen_frame + 0x20)))));
      iVar4 = (piVar1[1] - *piVar1) / 0x58;
      pvVar2 = (undefined *)0x0;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
      if (iVar4 != 0) {
        iVar4 = iVar4 * 0x58;
        pvVar2 = (undefined *)F_004296a0(iVar4,0,0);
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)(iVar4 + (int)pvVar2);
        iVar4 = piVar1[1];
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
        if (*piVar1 != iVar4) {
          iVar5 = *piVar1 - (int)pvVar2;
          do {
            if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
              F_0042cbc0((*(undefined * PTR32 *)(gen_frame + 0x8)),iVar5 + (int)(*(undefined * PTR32 *)(gen_frame + 0x8)));
              *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x54) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + iVar5 + 0x54);
            }
            (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x58);
          } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + iVar5 != iVar4);
        }
      }
      (*(int *)(gen_frame + 0x1c)) = ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - (int)pvVar2) / 0x58;
      pvVar7 = pvVar2;
      if (0 < (*(int *)(gen_frame + 0x1c))) {
        do {
          uVar3 = F_0045d320(((undefined1 *)(gen_frame + 0x24)),pvVar7);
          F_0042ccf0(pvVar7,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x24)));
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
          pvVar7 = (undefined *)((int)pvVar7 + 0x58);
        } while ((*(int *)(gen_frame + 0x1c)) != 0);
      }
      pvVar7 = pvVar2;
      if (pvVar2 != (undefined *)0x0) {
        for (; pvVar7 != (*(undefined * PTR32 *)(gen_frame + 0x8)); pvVar7 = (undefined *)((int)pvVar7 + 0x58)) {
          F_0042c880(pvVar7);
        }
        F_00429760(pvVar2,(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) - (int)pvVar2) / 0x58) * 0x58,0);
      }
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 0x68;
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x14)) < iVar6);
  }
  uVar3 = (*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 200)) / 0x58;
  if (0 < (int)uVar3) {
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    do {
      pvVar2 = ((undefined *)GEN_TOP((*(int *)(param_1 + 200) + (*(int *)(gen_frame + 0x18)))));
      uVar3 = F_0045d320(((undefined1 *)(gen_frame + 0x24)),pvVar2);
      F_0042ccf0(pvVar2,uVar3);
      uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x24)));
      uVar3 = (uint)uVar8;
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x58;
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) - 1;
    } while ((*(uint *)(gen_frame + 0x14)) != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar3;
}

/* ref: FUN_0045e090 */
uint F_0045e090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x45e090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  int in_ecx;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00abf120(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a4) = (*(undefined * PTR32 (*)[2])REFP(0x1090c58));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1090a98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a4) = (*(undefined * PTR32 (*)[2])REFP(0x1090a8c));
  *(undefined4 *)((int)this + 0x1a8) = param_3;
  F_00a1af40((undefined *)((int)this + 0x1b0));
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined2 *)((int)this + 0x1cc) = 0;
  *(undefined1 *)((int)this + 0x1ce) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0xffffffff;
  F_0042b630((int)this + 0x1d8);
  in_ecx = (int)this + 0x22c;
  iVar4 = 0xe;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined4 *)((int)this + 0x718) = 0xfffffffe;
  F_0042b630((int)this + 0x71c);
  *(undefined4 *)((int)this + 0x770) = 0xfffffffe;
  F_0042b630((int)this + 0x774);
  F_0042b630((int)this + 0x7c8);
  *(undefined4 *)((int)this + 0x820) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"TextCommand",REFG(undefined4, 0x108cc50));
  F_00abdd30(this,((undefined1 *)(gen_frame + 0x4)),5,8,1,2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"TextCommandParam",REFG(undefined4, 0x108cc50));
  F_00abf2e0(this,0,((undefined1 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"GeneralAction",REFG(undefined4, 0x108cc50));
  F_00abf2e0(this,1,((undefined1 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"Action",REFG(undefined4, 0x108cc50));
  F_00abf2e0(this,1,((undefined1 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"CraftAction",REFG(undefined4, 0x108cc50));
  F_00abf2e0(this,1,((undefined1 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"BuddyAction",REFG(undefined4, 0x108cc50));
  F_00abf2e0(this,1,((undefined1 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"PetAction",REFG(undefined4, 0x108cc50));
  F_00abf2e0(this,1,((undefined1 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"AddonHud",REFG(undefined4, 0x108cc50));
  F_00abf2e0(this,2,((undefined1 *)(gen_frame + 0x4)),2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"AddonHud",REFG(undefined4, 0x108cc50));
  F_00abf2e0(this,2,((undefined1 *)(gen_frame + 0x4)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"AddonHud",REFG(undefined4, 0x108cc50));
  F_00abf2e0(this,2,((undefined1 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1090388),REFG(undefined4, 0x108cc50));
  F_00abe7f0(this,0,((undefined1 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cc4));
  }
  this_00 = (undefined *)((int)this + 0xac);
  F_00ad8fb0(this_00,0xfb,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cd0));
  }
  F_00ad8fb0(this_00,0xfc,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cdc));
  }
  F_00ad8fb0(this_00,0xd1,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090ce8));
  }
  F_00ad8fb0(this_00,0x102,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cf4));
  }
  F_00ad8fb0(this_00,0x86,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d00));
  }
  F_00ad8fb0(this_00,0x101,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d0c));
  }
  F_00ad8fb0(this_00,0xfd,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d18));
  }
  F_00ad8fb0(this_00,0xfe,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d24));
  }
  F_00ad8fb0(this_00,0xff,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d30));
  }
  F_00ad8fb0(this_00,0x100,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d3c));
  }
  F_00ad8fb0(this_00,0xd0,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d48));
  }
  F_00ad8fb0(this_00,0x9c,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d54));
  }
  F_00ad8fb0(this_00,0x87,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d60));
  }
  F_00ad8fb0(this_00,0x103,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d6c));
  }
  F_00ad8fb0(this_00,0x85,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d78));
  }
  F_00ad8fb0(this_00,0x104,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d84));
  }
  F_00ad8fb0(this_00,0x105,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0x58,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cac));
    F_0042cc20(puVar2 + 1,"/target <lt>",REFG(undefined4, 0x108cc50));
  }
  F_00ad8fb0(this_00,0x106,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0x58,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cac));
    F_0042cc20(puVar2 + 1,"/target <le>",REFG(undefined4, 0x108cc50));
  }
  F_00ad8fb0(this_00,0x107,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d90));
  }
  F_00ad8fb0(this_00,0x109,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090d9c));
  }
  F_00ad8fb0(this_00,0x108,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090da8));
  }
  F_00ad8fb0(this_00,0x74,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090db4));
  }
  F_00ad8fb0(this_00,0x66,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090dc0));
  }
  F_00ad8fb0(this_00,0x75,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090dcc));
  }
  F_00ad8fb0(this_00,0x67,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090dd8));
  }
  F_00ad8fb0(this_00,0x68,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090de4));
  }
  F_00ad8fb0(this_00,0x76,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090dfc));
  }
  F_00ad8fb0(this_00,0x69,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e08));
  }
  F_00ad8fb0(this_00,0x73,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e14));
  }
  F_00ad8fb0(this_00,0x6a,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091214));
    puVar2[1] = 0;
  }
  F_00ad8fb0(this_00,0x6b,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091214));
    puVar2[1] = 1;
  }
  F_00ad8fb0(this_00,0x6c,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091214));
    puVar2[1] = 2;
  }
  F_00ad8fb0(this_00,0x6d,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091214));
    puVar2[1] = 3;
  }
  F_00ad8fb0(this_00,0x6e,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091214));
    puVar2[1] = 4;
  }
  F_00ad8fb0(this_00,0x6f,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091214));
    puVar2[1] = 5;
  }
  F_00ad8fb0(this_00,0x70,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091214));
    puVar2[1] = 6;
  }
  F_00ad8fb0(this_00,0x71,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091214));
    puVar2[1] = 7;
  }
  F_00ad8fb0(this_00,0x72,puVar2);
  puVar2 = (undefined4 *)F_00406b90(100,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c70));
    puVar2[1] = (*(undefined * PTR32 (*)[2])REFP(0x1090c64));
    F_0042b630(puVar2 + 2);
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
  }
  F_00ad8fb0(this_00,0x97,puVar2);
  puVar2 = (undefined4 *)F_00406b90(100,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c88));
    puVar2[1] = (*(undefined * PTR32 (*)[2])REFP(0x1090c7c));
    F_0042b630(puVar2 + 2);
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
  }
  F_00ad8fb0(this_00,0x98,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e20));
  }
  F_00ad8fb0(this_00,0x99,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e2c));
  }
  F_00ad8fb0(this_00,0x96,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e38));
  }
  F_00ad8fb0(this_00,0x79,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e44));
  }
  F_00ad8fb0(this_00,0x7a,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e50));
  }
  F_00ad8fb0(this_00,0x7b,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e5c));
  }
  F_00ad8fb0(this_00,0x7e,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e68));
  }
  F_00ad8fb0(this_00,0x7c,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e74));
  }
  F_00ad8fb0(this_00,0x7d,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e80));
  }
  F_00ad8fb0(this_00,0xa2,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e8c));
  }
  F_00ad8fb0(this_00,0xa1,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090e98));
  }
  F_00ad8fb0(this_00,0xe9,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090ea4));
  }
  F_00ad8fb0(this_00,0xeb,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090eb0));
  }
  F_00ad8fb0(this_00,0xc9,puVar2);
  F_00ad8fb0(this_00,0xca,(int)this + 0x1a4);
  uVar3 = F_00406b90(0x308,0,0);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_004916d0(uVar3);
  }
  F_00ad8fb0(this_00,0xcb,uVar3);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090ebc));
  }
  F_00ad8fb0(this_00,0x83,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090ec8));
  }
  F_00ad8fb0(this_00,0x84,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090ed4));
  }
  F_00ad8fb0(this_00,0x88,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090ee0));
  }
  F_00ad8fb0(this_00,0xce,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090eec));
  }
  F_00ad8fb0(this_00,0xcc,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[8])REFP(0x1091220));
  }
  F_00ad8fb0(this_00,0x13b,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[8])REFP(0x1091244));
  }
  F_00ad8fb0(this_00,0x13c,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090ef8));
  }
  F_00ad8fb0(this_00,0xcf,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x1e;
  }
  F_00ad8fb0(this_00,0x8d,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x18;
  }
  F_00ad8fb0(this_00,0x8e,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x29;
  }
  F_00ad8fb0(this_00,0x8f,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x49;
  }
  F_00ad8fb0(this_00,0x90,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x3b;
  }
  F_00ad8fb0(this_00,0x91,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x14;
  }
  F_00ad8fb0(this_00,0x92,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x13;
  }
  F_00ad8fb0(this_00,0x93,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x15;
  }
  F_00ad8fb0(this_00,0x94,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x55;
  }
  F_00ad8fb0(this_00,0x95,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x1f;
  }
  F_00ad8fb0(this_00,0x9a,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x28;
  }
  F_00ad8fb0(this_00,0x9b,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x19;
  }
  F_00ad8fb0(this_00,0x9d,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x58;
  }
  F_00ad8fb0(this_00,0x9e,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x5b;
  }
  F_00ad8fb0(this_00,0x9f,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090f04));
  }
  F_00ad8fb0(this_00,0xa0,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090ca0));
  }
  F_00ad8fb0(this_00,0xa3,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0xf;
  }
  F_00ad8fb0(this_00,0xa4,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x4a;
  }
  F_00ad8fb0(this_00,0xa5,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x51;
  }
  F_00ad8fb0(this_00,0xa6,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0xc;
  }
  F_00ad8fb0(this_00,0xa7,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 8;
  }
  F_00ad8fb0(this_00,0xa8,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0xb;
  }
  F_00ad8fb0(this_00,0xa9,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0x10;
  }
  F_00ad8fb0(this_00,0xaa,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
    puVar2[1] = 0xe;
  }
  F_00ad8fb0(this_00,0xab,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
    *puVar2 = (*(undefined * PTR32 (*)[4])REFP(0x1090f1c));
    puVar2[1] = (*(undefined * PTR32 (*)[2])REFP(0x1090f10));
  }
  F_00ad8fb0(this_00,0xac,puVar2);
  puVar2 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
    *puVar2 = (*(undefined * PTR32 (*)[4])REFP(0x1090f3c));
    puVar2[1] = (*(undefined * PTR32 (*)[2])REFP(0x1090f30));
  }
  F_00ad8fb0(this_00,0xad,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090f50));
  }
  F_00ad8fb0(this_00,0x13a,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091000));
  }
  F_00ad8fb0(this_00,0x138,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x109100c));
  }
  F_00ad8fb0(this_00,0x139,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0x58;
  }
  F_00ad8fb0(this_00,0x12d,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0x59;
  }
  F_00ad8fb0(this_00,0x12e,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0x5a;
  }
  F_00ad8fb0(this_00,0x12f,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0x5b;
  }
  F_00ad8fb0(this_00,0x130,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0x5c;
  }
  F_00ad8fb0(this_00,0x131,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0x95;
  }
  F_00ad8fb0(this_00,0x133,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0x96;
  }
  F_00ad8fb0(this_00,0x134,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0x97;
  }
  F_00ad8fb0(this_00,0x135,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0xa4;
  }
  F_00ad8fb0(this_00,0x136,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 1;
    puVar2[2] = 0xa5;
  }
  F_00ad8fb0(this_00,0x137,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 0;
    puVar2[2] = 0x76;
  }
  F_00ad8fb0(this_00,0x132,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 2;
    puVar2[2] = 2;
  }
  F_00ad8fb0(this_00,0xe8,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 2;
    puVar2[2] = 1;
  }
  F_00ad8fb0(this_00,0xe7,puVar2);
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
    puVar2[1] = 2;
    puVar2[2] = 3;
  }
  F_00ad8fb0(this_00,0xea,puVar2);
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1091018));
  }
  *(undefined4 * PTR32 *)((int)this + 0x1ac) = puVar2;
  iVar4 = 0x191;
  do {
    F_00ad8fb0(this_00,iVar4,*(undefined4 *)((int)this + 0x1ac));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1e5);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10903d4),REFG(undefined4, 0x108cc50));
  bVar1 = F_00abe720(this,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x718) = 1;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x1091024));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10903b0),REFG(undefined4, 0x108cc50));
  F_00ad90a0(this_00,((undefined1 *)(gen_frame + 0x4)),puVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_0045f5d0 */
uint F_0045f5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45f5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x760];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x758)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x75c);
  F_00b00480(this);
  F_004823a0((undefined *)((int)this + 0x270c));
  iVar2 = 0;
  puVar3 = (undefined4 *)((int)this + 0x950);
  do {
    if ((char)param_1 == '\0') {
      uVar1 = F_00491230(((undefined1 *)(gen_frame + 0x4)));
      F_00491d00(puVar3 + -0x1ba,uVar1);
      F_00488bc0(((undefined1 *)(gen_frame + 0x730)),((undefined1 *)(gen_frame + 0x0)),*(*(undefined4 * PTR32 *)(gen_frame + 0x734)),(*(undefined4 * PTR32 *)(gen_frame + 0x734)));
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x734)),0x6c,0x192);
      F_00a4b160(((undefined1 *)(gen_frame + 0x70c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x58)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      *(char *)((int)puVar3 + 0x6b) = (char)iVar2;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[3] = 0;
      *(undefined2 *)(puVar3 + 6) = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[0x17] = 0xffffffff;
      puVar3[0x18] = 0xffffffff;
      puVar3[0x15] = 0xffffffff;
      puVar3[0x16] = 0xffffffff;
      *(undefined1 *)((int)puVar3 + 0x6a) = 1;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x1d5;
  } while (iVar2 < 5);
  F_00c47745((*(uint *)(gen_frame + 0x758)) ^ (uint)(uint)(gen_frame + 0x75c));
  return 0;
}

/* ref: FUN_0045f6c0 */
uint F_0045f6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45f6c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  F_004845b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
  uVar1 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)))) {
    uVar1 = F_004923d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
  }
  return uVar1;
}

/* ref: FUN_0045f700 */
uint F_0045f700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x45f700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,0);
  if ((char)param_2 != '\0') {
    F_00492680((undefined *)((int)this + 0x38),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3c) + 4))));
    *((int *)GEN_TOP((*(int *)((int)this + 0x3c) + 4))) = *(int *)((int)this + 0x3c);
    *(undefined4 *)*(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x3c);
    uVar1 = *(uint *)((int)this + 0x3c);
    *(uint *)(uVar1 + 8) = uVar1;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined1 *)((int)this + 0x34) = 0;
  }
  return uVar1;
}

/* ref: FUN_0045f750 */
uint F_0045f750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45f750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_004845b0((undefined *)((int)this + 0x38),&(*(int *)(gen_frame + 0x20)),param_1);
  iVar1 = (*(int *)(gen_frame + 0x20));
  if ((*(int *)(gen_frame + 0x20)) == *(int *)((int)this + 0x3c)) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x24)),param_1);
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    F_00488dc0(&(*(undefined4 *)(gen_frame + 0x78)));
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_00492de0((undefined *)((int)this + 0x38),&(*(int *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x24)));
    F_00488dc0(&(*(undefined4 *)(gen_frame + 0x78)));
    F_0042c880(((undefined1 *)(gen_frame + 0x24)));
    F_00488dc0(&(*(undefined4 *)(gen_frame + 0xc)));
    iVar1 = (*(int *)(gen_frame + 0x1c));
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return iVar1 + 0x60;
}

/* ref: Client::UI::Misc::AddonConfig::vf1 */
byte F_0045f7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x45f7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  uint uVar1;
  char * pcVar2;
  undefined1 * puVar3;
  undefined4 * this_00;
  int iVar4;
  undefined * this_01;
  float fVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  F_00492680(this + 0x38,*((undefined4 *)GEN_TOP((*(int *)(this + 0x3c) + 4))));
  *((int *)GEN_TOP((*(int *)(this + 0x3c) + 4))) = *(int *)(this + 0x3c);
  *(undefined4 *)*(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x3c);
  *((int *)GEN_TOP((*(int *)(this + 0x3c) + 8))) = *(int *)(this + 0x3c);
  *(undefined4 *)(this + 0x40) = 0;
  if (((char)param_1 == '\0') || (param_2 == 0)) {
    this[0x34] = (undefined1)0x1;
  }
  else {
    *(undefined1 *)(param_2 + -1 + param_3) = 0;
    (*(int *)(gen_frame + 0x2c)) = 0;
    (*(int *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0x94)),&REFG(undefined, 0x108eef8),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x40)),param_2,REFG(undefined4, 0x108cc50));
    F_00ada1b0(((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x94)),&(*(int *)(gen_frame + 0x2c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x40)));
    F_0042c880(((undefined1 *)(gen_frame + 0x94)));
    iVar4 = (*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c)) >> 0x1f;
    this_01 = (undefined *)0x0;
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (((*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c))) / 0x54 + iVar4 != iVar4) {
      iVar4 = 0;
      do {
        uVar1 = F_0042b790((undefined *)(iVar4 + (*(int *)(gen_frame + 0x2c))));
        if (2 < uVar1) {
          pcVar2 = (char *)F_0042a7f0((*(int *)(gen_frame + 0x2c)) + iVar4,0);
          if (*pcVar2 == 'n') {
            uVar6 = REFG(undefined4, 0x108cc50);
            uVar1 = F_0042a7f0(iVar4 + (*(int *)(gen_frame + 0x2c)),2);
            uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x94)),uVar1,uVar6);
            this_01 = (undefined *)F_0045f750((*(undefined * PTR32 *)(gen_frame + 0x28)),uVar1);
            F_0042c880(((undefined1 *)(gen_frame + 0x94)));
          }
          else if (this_01 != (undefined *)0x0) {
            puVar3 = (undefined1 *)F_0042a7f0((*(int *)(gen_frame + 0x2c)) + iVar4,0);
            switch((unsigned int)(uintptr_t)(*puVar3)) {
            case 0x62: ;
              pcVar2 = (char *)F_0042a7f0(iVar4 + (*(int *)(gen_frame + 0x2c)),2);
              (*(undefined4 *)(gen_frame + 0x18)) = 2;
              (*(bool *)(gen_frame + 0x1c)) = *pcVar2 != '0';
              F_00490b70(this_01,&(*(undefined4 *)(gen_frame + 0x18)));
              this_00 = &(*(undefined4 *)(gen_frame + 0x18));
              break;
            default: ;
              goto switchD_0045f96e_caseD_63;
            case 0x66: ;
              uVar1 = F_0042a7f0(iVar4 + (*(int *)(gen_frame + 0x2c)),2);
              fVar5 = F_0046f660(uVar1);
              (*(float *)(gen_frame + 0x14)) = fVar5;
              (*(float *)(gen_frame + 0x10)) = fVar5;
              (*(undefined4 *)(gen_frame + 0xc)) = 5;
              F_00490b70(this_01,&(*(undefined4 *)(gen_frame + 0xc)));
              this_00 = &(*(undefined4 *)(gen_frame + 0xc));
              break;
            case 0x69: ;
              uVar6 = 10;
              uVar1 = F_0042a7f0(iVar4 + (*(int *)(gen_frame + 0x2c)),2);
              uVar1 = F_0046f610(uVar1,uVar6);
              (*(uint *)(gen_frame + 0x24)) = uVar1;
              (*(undefined4 *)(gen_frame + 0x20)) = 3;
              F_00490b70(this_01,&(*(undefined4 *)(gen_frame + 0x20)));
              this_00 = &(*(undefined4 *)(gen_frame + 0x20));
              break;
            case 0x75: ;
              uVar6 = 10;
              uVar1 = F_0042a7f0((*(int *)(gen_frame + 0x2c)) + iVar4,2);
              uVar1 = F_0046f610(uVar1,uVar6);
              (*(undefined4 *)(gen_frame + 0x4)) = 4;
              (*(uint *)(gen_frame + 0x8)) = uVar1;
              F_00490b70(this_01,&(*(undefined4 *)(gen_frame + 0x4)));
              this_00 = &(*(undefined4 *)(gen_frame + 0x4));
            }
            F_005a2670(this_00);
          }
        }
switchD_0045f96e_caseD_63: ;
        uVar1 = (*(uint *)(gen_frame + 0x3c)) + 1;
        (*(uint *)(gen_frame + 0x3c)) = uVar1;
        iVar4 = iVar4 + 0x54;
      } while (uVar1 < (uint)(((*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c))) / 0x54));
    }
    F_004876d0(&(*(int *)(gen_frame + 0x2c)));
    (*(undefined * PTR32 *)(gen_frame + 0x28))[0x34] = (undefined1)0x1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return 1;
}

/* ref: FUN_0045fb20 */
uint F_0045fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)this = param_1;
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_0042b630((int)this + 0x1c);
  F_0042b630((int)this + 0x70);
  *(undefined1 *)((int)this + 0xc6) = 0xff;
  *(undefined1 *)((int)this + 199) = 0xff;
  *(undefined2 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined2 *)((int)this + 0xd0) = 0;
  return (uint)this;
}

/* ref: FUN_0045fbb0 */
uint F_0045fbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x45fbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 * puVar4;
  undefined * puVar5;
  uint uVar6;
  
  *(undefined4 *)this = param_1;
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar4 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *puVar1 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_2 == (int *)0x0) {
    puVar5 = &REFG(undefined, 0x108d13f);
  }
  else {
    puVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0xc))(param_2)));
  }
  F_0042cc20((undefined *)((int)this + 0x1c),puVar5,REFG(undefined4, 0x108cc50));
  if (param_3 == (int *)0x0) {
    puVar5 = &REFG(undefined, 0x108d14a);
  }
  else {
    puVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_3 + 0xc))(param_3)));
  }
  F_0042cc20((undefined *)((int)this + 0x70),puVar5,REFG(undefined4, 0x108cc50));
  bVar2 = F_00a69970(param_2);
  *(byte *)((int)this + 0xc4) = bVar2;
  bVar2 = F_00a69970(param_3);
  *(byte *)((int)this + 0xc5) = bVar2;
  if (param_2 == (int *)0x0) {
    uVar3 = 0xff;
  }
  else {
    uVar6 = ((code *)*(gen_code32 *)(*param_2 + 0x1c))(param_2);
    uVar3 = (undefined1)uVar6;
  }
  *(undefined1 *)((int)this + 0xc6) = uVar3;
  if (param_3 == (int *)0x0) {
    uVar3 = 0xff;
  }
  else {
    uVar6 = ((code *)*(gen_code32 *)(*param_3 + 0x1c))(param_3);
    uVar3 = (undefined1)uVar6;
  }
  *(undefined1 *)((int)this + 199) = uVar3;
  uVar6 = F_0043bfd0(param_2);
  *(uint *)((int)this + 200) = uVar6;
  uVar6 = F_0043bfd0(param_3);
  *(uint *)((int)this + 0xcc) = uVar6;
  *(undefined2 *)((int)this + 0xd0) = 0;
  if (*(char *)(REFG(int, 0x137104c) + 0x1d) == '\x04') {
    if ((param_2 != (int *)0x0) && (uVar6 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2), uVar6 == 1)) {
      *(undefined1 *)((int)this + 0xd0) = 1;
    }
    if (param_3 != (int *)0x0) {
      uVar6 = ((code *)*(gen_code32 *)(*param_3 + 4))(param_3);
      if (uVar6 == 1) {
        *(undefined1 *)((int)this + 0xd1) = 1;
        return (uint)this;
      }
    }
  }
  else {
    *(undefined2 *)((int)this + 0xd0) = 0x101;
  }
  return (uint)this;
}

/* ref: FUN_0045fd10 */
uint F_0045fd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x45fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  byte bVar2;
  undefined4 * puVar3;
  undefined * puVar4;
  
  *(undefined4 *)this = param_1;
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar3 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *puVar1 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  puVar4 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar4 = &REFG(undefined, 0x108d14b);
  }
  F_0042cc20((undefined *)((int)this + 0x1c),puVar4,REFG(undefined4, 0x108cc50));
  puVar4 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar4 = &REFG(undefined, 0x108d159);
  }
  F_0042cc20((undefined *)((int)this + 0x70),puVar4,REFG(undefined4, 0x108cc50));
  bVar2 = F_00a69a10(param_2);
  *(byte *)((int)this + 0xc4) = bVar2;
  bVar2 = F_00a69a10(param_4);
  *(byte *)((int)this + 0xc5) = bVar2;
  *(byte *)((int)this + 0xc6) = (byte)param_3;
  *(byte *)((int)this + 199) = (byte)param_5;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined2 *)((int)this + 0xd0) = 0;
  if ((byte)param_3 < 2) {
    *(undefined1 *)((int)this + 0xd0) = 1;
  }
  if ((byte)param_5 < 2) {
    *(undefined1 *)((int)this + 0xd1) = 1;
  }
  return (uint)this;
}

/* ref: FUN_0045fdf0 */
uint F_0045fdf0(unsigned int gen_a0)
{
  GEN_ENTER(0x45fdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10917c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[40])REFP(0x109171c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) = (*(undefined * PTR32 (*)[2])REFP(0x109170c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) = (*(undefined * PTR32 (*)[2])REFP(0x1091700));
  F_0042c880((undefined *)((int)this + 0x484));
  F_0042c880((undefined *)((int)this + 0x430));
  F_0042c880((undefined *)((int)this + 0x3dc));
  F_0042c880((undefined *)((int)this + 0x388));
  F_0042c880((undefined *)((int)this + 0x334));
  F_00492c50((undefined *)((int)this + 0x31c));
  F_00429760(*(undefined4 *)((int)this + 0x31c),8,0x2c4);
  *(undefined4 *)((int)this + 0x31c) = 0;
  F_00492c50((undefined *)((int)this + 0x304));
  F_00429760(*(undefined4 *)((int)this + 0x304),8,0x2c4);
  *(undefined4 *)((int)this + 0x304) = 0;
  F_0042c880((undefined *)((int)this + 0x2b0));
  F_0042c880((undefined *)((int)this + 0x25c));
  F_00a29b20((undefined *)((int)this + 0x1b8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  uVar1 = F_00a29dc0(this);
  return uVar1;
}

/* ref: FUN_0045fee0 */
uint F_0045fee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x45fee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined2 * _Dst;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10909b4))
  ;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1091810));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1091804));
  *(undefined4 *)((int)this + 0x10) = param_1;
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
  *(undefined1 *)((int)this + 0x3c) = 1;
  F_0042b630((int)this + 0x40);
  F_0042b630((int)this + 0x94);
  *(undefined4 *)((int)this + 0xe8) = 1;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0x15;
  puVar2 = (undefined4 *)((int)this + 0xf4);
  *puVar2 = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *puVar2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar2 = puVar2;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  F_0042b630((int)this + 0x10c);
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined2 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
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
  *(undefined1 *)((int)this + 0x1c4) = 0;
  puVar2 = (undefined4 *)((int)this + 0x1d8);
  iVar3 = 0x14e;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  puVar2 = (undefined4 *)((int)this + 0x2130);
  iVar3 = 0x3ec;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_0042e430((undefined *)((int)this + 0x40),&REFG(undefined, 0x10902c8));
  F_0042e430((undefined *)((int)this + 0x94),&REFG(undefined, 0x10902d0));
  _Dst = (undefined2 *)((int)this + 0x1c8);
  *(undefined4 *)((int)this + 0x16a) = 0;
  *(undefined1 *)((int)this + 0x16e) = 0;
  F_00c48350(_Dst,0,0x1f68);
  iVar3 = 0x14f;
  do {
    *_Dst = 0xffff;
    _Dst = _Dst + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  F_0044ed10(this);
  *(undefined1 *)((int)this + 0x16a) = 1;
  return (uint)this;
}

/* ref: FUN_004600d0 */
uint F_004600d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4600d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * this_00;
  ulonglong uVar3;
  int local_8;
  
  puVar1 = (undefined4 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1091810));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1091804));
  if (REFG(int, 0x137104c) != 0) {
    F_00414620(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10),puVar1);
  }
  this_00 = (undefined *)((int)this + 0x4098);
  local_8 = 0x3ec;
  do {
    this_00 = (undefined *)((int)this_00 + -8);
    F_005a2670(this_00);
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  F_0042c880((undefined *)((int)this + 0x10c));
  F_00492c50((undefined *)((int)this + 0xf4));
  F_00429760(*(undefined4 *)((int)this + 0xf4),8,0x2c4);
  *(undefined4 *)((int)this + 0xf4) = 0;
  F_0042c880((undefined *)((int)this + 0x94));
  uVar3 = F_0042c880((undefined *)((int)this + 0x40));
  uVar2 = (uint)uVar3;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar2 = F_00414620(*(undefined * PTR32 *)((int)this + 0xc),puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00460190 */
uint F_00460190(unsigned int gen_a0)
{
  GEN_ENTER(0x460190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109181c));
  F_00492d20((undefined *)((int)this + 0x38),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x3c),
               *(undefined4 * PTR32 *)((int)this + 0x3c));
  F_00429760(*(undefined4 *)((int)this + 0x3c),0x74,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: FUN_004601f0 */
uint F_004601f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4601f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  F_00c49908((int)this + 0x20,0xc,"ADDON.DAT");
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109181c));
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  uVar1 = F_004296a0(0x74,0,400);
  *(uint *)((int)this + 0x3c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x3c) + 4))) = *(int *)((int)this + 0x3c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x3c) + 8))) = *(int *)((int)this + 0x3c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x70))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x71))) = 1;
  return (uint)this;
}

/* ref: FUN_00460270 */
uint F_00460270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x460270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  int in_ecx;
  undefined * pvVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = &(*(undefined4 *)(gen_frame + 0x5c));
  (*(char *)(gen_frame + 0x64)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = &(*(undefined4 *)(gen_frame + 0x5c));
  (*(char *)(gen_frame + 0x64)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  in_ecx = (int)this + 0x334;
  F_0042aca0(in_ecx);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),param_1,REFG(undefined4, 0x108cc50));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,((undefined1 *)(gen_frame + 0x8)),this_00,in_ecx);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  if (uVar2 != 1) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  uVar2 = F_0042a990(in_ecx);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_004603b0 */
uint F_004603b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4603b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  int in_ecx;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  puVar3 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108d1e2);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  puVar3 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108d1e3);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  in_ecx = (int)this + 0x334;
  F_0042aca0(in_ecx);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),param_1,REFG(undefined4, 0x108cc50));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,((undefined1 *)(gen_frame + 0x8)),this_00,in_ecx);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  if (uVar2 == 1) {
    uVar2 = F_0042a990(in_ecx);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_00460540 */
uint F_00460540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x460540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined * puVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  puVar2 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar2 = &REFG(undefined, 0x108d1f5);
  }
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar2,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar1);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      this_01 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)this_01 + 0x54) = *(int *)((int)this_01 + 0x54) + -1;
      if (*(int *)((int)this_01 + 0x54) < 1) {
        F_0042c880(this_01);
        F_00406ad0(this_01);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0043bbc0(this,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: FUN_00460620 */
uint F_00460620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x460620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  puVar3 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108d1f6);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = &(*(undefined4 *)(gen_frame + 0x5c));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = param_3;
  (*(char *)(gen_frame + 0x64)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00460740 */
uint F_00460740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x460740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  puVar3 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108d1f7);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = &(*(undefined4 *)(gen_frame + 0x5c));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = param_3;
  (*(char *)(gen_frame + 0x64)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = &(*(undefined4 *)(gen_frame + 0x5c));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = param_4;
  (*(char *)(gen_frame + 0x64)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_004608b0 */
uint F_004608b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4608b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  puVar3 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108d21d);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  puVar3 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108d21e);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar2 = F_0043bbc0(this,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00460a00 */
uint F_00460a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x460a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  puVar3 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108d21f);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  puVar3 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108d276);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  puVar3 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108d277);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar2 = F_0043bbc0(this,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00460bd0 */
uint F_00460bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x460bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0xc));
  (*(char *)(gen_frame + 0x14)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0xc)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x14)) != '\0')) && ((*(char *)(gen_frame + 0x14)) == '\x01')) {
    this_01 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *(int *)((int)this_01 + 0x54) = *(int *)((int)this_01 + 0x54) + -1;
    if (*(int *)((int)this_01 + 0x54) < 1) {
      F_0042c880(this_01);
      F_00406ad0(this_01);
    }
  }
  uVar1 = F_0043bbc0(this,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00460c80 */
uint F_00460c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x460c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0xc));
  (*(char *)(gen_frame + 0x14)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0xc)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x14)) != '\0')) && ((*(char *)(gen_frame + 0x14)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0xc));
  (*(char *)(gen_frame + 0x14)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0xc)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x14)) != '\0')) && ((*(char *)(gen_frame + 0x14)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00460d80 */
uint F_00460d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x460d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  this_00 = (undefined *)((int)this + 0x304);
  F_00492c50(this_00);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0xc));
  (*(char *)(gen_frame + 0x14)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0xc)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x14)) != '\0')) && ((*(char *)(gen_frame + 0x14)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0xc));
  (*(char *)(gen_frame + 0x14)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0xc)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x14)) != '\0')) && ((*(char *)(gen_frame + 0x14)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = param_4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0xc));
  (*(char *)(gen_frame + 0x14)) = '\0';
  F_00493bc0(this_00,&(*(undefined4 *)(gen_frame + 0xc)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x14)) != '\0')) && ((*(char *)(gen_frame + 0x14)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

