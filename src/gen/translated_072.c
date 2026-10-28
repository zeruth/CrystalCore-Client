#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::UI2::AddonShop::vf52 */
GEN_FRAME byte GEN_THISCALL F_007a6390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a6390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * this_00;
  int iVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((*param_1 == 5) && ((char)param_1[1] == '\0')) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x402;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar1 = 2;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI2::AddonShop::vf25 */
GEN_FRAME uint GEN_THISCALL F_007a6420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a6420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,(uint)(byte)AVar1,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonShop::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007a6470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a6470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,(uint)(byte)AVar1,0);
  if (*(int *)(this + 0x290) != 0) {
    F_00406810(*(int *)(this + 0x290));
    *(undefined4 *)(this + 0x290) = 0;
  }
  if (*(int *)(this + 0x294) != 0) {
    F_00406810(*(int *)(this + 0x294));
    *(undefined4 *)(this + 0x294) = 0;
  }
  F_005b0510((undefined *)this GEN_EDX_ARG);
  uVar2 = F_005a92d0(this GEN_EDX_ARG,0,0x20,0);
  return uVar2;
}

/* ref: Client::UI2::AddonShop::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a64e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a64e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,&REFG(undefined, 0x10c1eb8),1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonShop::vf47 */
GEN_FRAME uint GEN_THISCALL F_007a64f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a64f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x80) + 0x20))));
  return uVar1;
}

/* ref: FUN_007a6520 */
GEN_FRAME uint GEN_THISCALL F_007a6520(unsigned int gen_a0 GEN_EDX_PARAM)
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
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x400;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x78))))(*(int * PTR32 *)((int)this + 0x180) GEN_EDX_ARG);
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a65b0 */
GEN_FRAME uint GEN_THISCALL F_007a65b0(unsigned int gen_a0 GEN_EDX_PARAM)
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
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x401;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
    F_0058d980(*(undefined4 *)((int)this + 0x184) GEN_EDX_ARG,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x78))))(*(int * PTR32 *)((int)this + 0x184) GEN_EDX_ARG);
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonShop::vf60 */
GEN_FRAME byte GEN_THISCALL F_007a6660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1 GEN_EDX_ARG,uVar2 + 0xc0);
      }
      F_007a65b0(this GEN_EDX_ARG);
    }
    else {
      piVar1 = *(int * PTR32 *)(this + 0x18c);
      if (piVar1 != (int *)0x0) {
        uVar2 = F_00561390();
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1 GEN_EDX_ARG,uVar2 + 0xc0);
      }
      F_007a6520(this GEN_EDX_ARG);
    }
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: FUN_007a6710 */
GEN_FRAME uint GEN_THISCALL F_007a6710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  pvVar2 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_FWD);
  F_00584110(pvVar2 GEN_EDX_ARG,uVar4);
  F_005951c0(param_3 GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x18),0,*param_2);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
  F_0057eb30(pvVar2 GEN_EDX_ARG,uVar4,uVar5,uVar6,uVar7,uVar8);
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[3] GEN_EDX_ARG);
  F_0057eb30(pvVar2 GEN_EDX_ARG,uVar4,uVar5,uVar6,uVar7,uVar8);
  F_0055a300((undefined *)param_2[4] GEN_EDX_ARG,0);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[5] GEN_EDX_ARG);
  F_0057eb30(pvVar2 GEN_EDX_ARG,uVar4,uVar5,uVar6,uVar7,uVar8);
  if (*(int *)(iVar1 + 0x14) == 0) {
    uVar3 = F_0059d670((undefined *)param_2[6] GEN_EDX_ARG,7);
    return uVar3;
  }
  F_0059d670((undefined *)param_2[6] GEN_EDX_ARG,0x11);
  uVar4 = *(undefined4 *)(iVar1 + 0x14);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[7] GEN_EDX_ARG);
  uVar3 = F_0057eb30(pvVar2 GEN_EDX_ARG,uVar4,uVar5,uVar6,uVar7,uVar8);
  return uVar3;
}

/* ref: FUN_007a67f0 */
GEN_NOFRAME uint GEN_THISCALL F_007a67f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a67f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
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
GEN_FRAME uint GEN_THISCALL F_007a6870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a6870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007a68a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a68a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007a68d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a68d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  F_00596cb0((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a6910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a6910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ShopExchangeItem",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf46 */
GEN_FRAME byte GEN_THISCALL F_007a6920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
      if ((*(byte *)(puVar11 - 0x51) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar11[-0x50];
      }
      *(undefined4 *)(local_c + 4) = uVar10;
      if ((*(byte *)(puVar11 - 1) & 0xf) == 0) {
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
      *(undefined4 *)(local_c - 4) = uVar10;
      if ((*(byte *)(puVar11 + 0x1df) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar11[0x1e0];
      }
      *(undefined4 *)(local_c + 0x10) = uVar10;
      if ((*(byte *)(puVar5 - 0xa3) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar5[-0xa2];
      }
      *(undefined4 *)(pAVar7 - 0x14) = uVar10;
      if ((*(byte *)(puVar5 - 3) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar5[-2];
      }
      *(undefined4 *)(pAVar7 - 0x18) = uVar10;
      if ((*(byte *)(puVar5 + 0x13d) & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (undefined2)puVar5[0x13e];
      }
      *(undefined2 *)(pAVar7 - 0xc) = uVar9;
      if ((*(byte *)(puVar5 + 0x1dd) & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (undefined2)puVar5[0x1de];
      }
      *(undefined2 *)(pAVar7 - 10) = uVar9;
      if ((*(byte *)(puVar5 + 0x27d) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar5[0x27e];
      }
      *(undefined4 *)(pAVar7 - 0x1c) = uVar10;
      if ((*(byte *)(puVar5 - 0xa1) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar5[-0xa0];
      }
      *(undefined4 *)(pAVar7 + 4) = uVar10;
      if ((*(byte *)(puVar5 - 1) & 0xf) == 0) {
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
      *(undefined4 *)(pAVar7 - 4) = uVar10;
      local_c = local_c + 0x18;
      param_2 = param_2 + 1;
      puVar11 = puVar11 + 2;
      puVar5 = puVar5 + 4;
      pAVar7 = pAVar7 + 0x30;
    } while (param_2 < *(uint *)(this + 0xce0));
  }
  F_0058d980(*(undefined4 *)(this + 0x180) GEN_EDX_FWD,(uint)*(ushort *)(this + 0xce0));
  uVar3 = 0;
  if (*(int *)(this + 0xce0) != 0) {
    pAVar7 = this + 0x570;
    do {
      uVar1 = param_2 >> 8;
      param_2 = param_2 & 0xffffff00;
      uVar8 = 0;
      pAVar6 = pAVar7;
      do {
        if ((*(int *)(pAVar6 - 0x10) != 0) && (*(ushort *)pAVar6 < *(ushort *)(pAVar6 + 2))) {
          param_2 = CONCAT31((int3)uVar1,1);
          break;
        }
        uVar8 = uVar8 + 1;
        pAVar6 = pAVar6 + 0x18;
      } while (uVar8 < 2);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x54))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar3,param_2);
      uVar3 = uVar3 + 1;
      pAVar7 = pAVar7 + 0x30;
    } while (uVar3 < *(uint *)(this + 0xce0));
  }
  return 1;
}

/* ref: FUN_007a6b70 */
GEN_FRAME uint GEN_THISCALL F_007a6b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a6b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined4 * puVar5;
  int * piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar1 = (*(int *)&gen_args[1]) * 0x18;
  F_005951c0((*(undefined * PTR32 *)&gen_args[3]) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1a4))),0,0);
  uVar7 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1a8)));
  pvVar3 = (undefined *)F_00559ba0(*(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  F_00584110(pvVar3 GEN_EDX_ARG,uVar7);
  uVar4 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1b0)));
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  pvVar3 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)&gen_args[2])[2] GEN_EDX_ARG);
  F_0057eb30(pvVar3 GEN_EDX_ARG,uVar4,uVar7,uVar8,uVar9,uVar10);
  uVar4 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1b2)));
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  pvVar3 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)&gen_args[2])[3] GEN_EDX_ARG);
  F_0057eb30(pvVar3 GEN_EDX_ARG,uVar4,uVar7,uVar8,uVar9,uVar10);
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]) + 6;
  piVar6 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 0x30 + 0x564)));
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x2;
  do {
    iVar1 = piVar6[-1];
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),iVar1 != 0);
    F_0055a300((undefined *)puVar5[-2] GEN_EDX_ARG,(*(int *)&gen_args[1]));
    bVar2 = F_0055a300((undefined *)*puVar5 GEN_EDX_ARG,(*(int *)&gen_args[1]));
    uVar4 = CONCAT31(extraout_var,bVar2);
    if (iVar1 != 0) {
      if (*piVar6 != 0) {
        F_005951c0((*(undefined * PTR32 *)&gen_args[3]) GEN_EDX_ARG,*piVar6,0,puVar5[-2]);
      }
      uVar4 = (uint)*(ushort *)((int)piVar6 + 0xe);
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      pvVar3 = (undefined *)F_00559ba0(*puVar5 GEN_EDX_ARG);
      uVar4 = F_0057eb30(pvVar3 GEN_EDX_ARG,uVar4,uVar7,uVar8,uVar9,uVar10);
    }
    piVar6 = piVar6 + 6;
    puVar5 = puVar5 + 1;
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) - 1)));
  } while ((*(undefined4 * PTR32 *)&gen_args[2]) != (undefined4 *)0x0);
  return uVar4;
}

/* ref: FUN_007a6c70 */
GEN_NOFRAME uint GEN_THISCALL F_007a6c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a6c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
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
GEN_FRAME uint GEN_THISCALL F_007a6ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a6ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007a6d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a6d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 0x100;
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007a6d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a6d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  F_00596cb0((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a6d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a6d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ShopExchangeCurrency",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf46 */
GEN_FRAME byte GEN_THISCALL F_007a6da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
    F_00584110(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_FWD,uVar1);
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
        if ((*(byte *)(puVar3 - 0x51) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[-0x50];
        }
        *(undefined4 *)(pAVar4 + 4) = uVar1;
        if ((*(byte *)(puVar3 - 1) & 0xf) == 0) {
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
        *(undefined4 *)(pAVar4 - 4) = uVar1;
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
      F_0058d980(*(int *)(this + 0x1a8) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x614));
      if (*(int *)(this + 0x614) == 0) {
        F_0059d6a0(this GEN_EDX_ARG,0x65,1,0);
        return 1;
      }
      F_0059d6a0(this GEN_EDX_ARG,0x11,1,0);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf60 */
GEN_FRAME byte GEN_THISCALL F_007a6f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a6f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar4;
  AVar1 = this[0x1b1];
  if ((byte)AVar1 < 2) {
LAB_007a6f2e: ;
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_FWD);
    return 0;
  }
  if (param_1 == 0xf) {
    if (((char)param_2 != '\0') && ((uint)(byte)this[0x1b0] == (byte)AVar1 - 1)) goto LAB_007a6f2e;
    this[0x1b0] = SUB81((ulonglong)((byte)this[0x1b0] + 1) %
                        (ulonglong)(longlong)(int)(uint)(byte)AVar1,0);
  }
  else if (param_1 == 0x10) {
    if (this[0x1b0] == (undefined1)0x0) {
      if ((char)param_2 != '\0') goto LAB_007a6f2e;
      this[0x1b0] = (undefined1)((char)AVar1 - 1);
    }
    else {
      this[0x1b0] = (undefined1)((char)this[0x1b0] - 1);
    }
  }
  if (*(undefined * PTR32 *)(this + 0x1a8) != (undefined *)0x0) {
    F_0059ec00(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
    AVar1 = this[0x1b0];
    (*(undefined4 *)(gen_frame + 0x24)) = 0x403;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x34)) = (uint)(byte)AVar1;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x20)));
    uVar4 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    iVar6 = *((int *)GEN_TOP((*(int *)(this + 0x1a8) + 0xcc)));
    if (iVar6 < 0) {
      AVar1 = this[0x13a];
      uVar4 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar4 + 0xe0) GEN_EDX_ARG,(uint)(byte)AVar1,0);
    }
    else {
      F_00560760(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
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
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x50))))(*(int * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,iVar6)));
      AVar1 = this[0x13a];
      uVar4 = F_0055dcb0();
      uVar9 = 0;
      uVar8 = 0;
      puVar7 = &(*(undefined4 *)(gen_frame + 0x14));
      (*(uint *)(gen_frame + 0x10)) = uVar4;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x38))(piVar5 GEN_EDX_ARG);
      F_00588780((undefined *)((*(uint *)(gen_frame + 0x10)) + 0xe0) GEN_EDX_ARG,4,(uint)(byte)AVar1,uVar4,puVar7,uVar8,uVar9);
    }
    piVar5 = *(int * PTR32 *)(this + (uint)(byte)this[0x1b0] * 4 + 0x188);
    uVar4 = F_00561390();
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x60))(piVar5 GEN_EDX_ARG,uVar4 + 0xc0);
    this_00 = &(*(uint *)(gen_frame + 0x38));
    iVar6 = 2;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf2 */
GEN_FRAME uint GEN_THISCALL F_007a7140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0x403;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x24)) = param_2;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
    break;
  default: ;
    goto switchD_007a7180_caseD_18;
  case 0x19: ;
    if (((undefined2 *)param_4[1] != (undefined2 *)0x0) && (-1 < param_4[2])) {
      *(undefined2 *)(this + param_4[2] * 0x1c + 0x1cc) = *(undefined2 *)param_4[1];
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x6c))))(*(int * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,param_4[2],0,0);
    }
    break;
  case 0x1f: ;
    pAVar1 = this + param_4[2] * 0x1c + 0x1b4;
    F_00560760(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
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
    F_00588780((undefined *)(uVar5 + 0xe0) GEN_EDX_ARG,4,(uint)(byte)AVar2,uVar6,((undefined1 *)(gen_frame + 0x0)),0,0);
    goto switchD_007a7180_caseD_18;
  case 0x20: ;
    uVar5 = F_0055dcb0();
    F_00594d90((undefined *)(uVar5 + 0xe0) GEN_EDX_ARG,0);
    goto switchD_007a7180_caseD_18;
  case 0x21: ;
    uVar6 = *(undefined4 *)(this + param_4[2] * 0x1c + 0x1c8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar6;
    sVar3 = *(short *)(this + param_4[2] * 0x1c + 0x1cc);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x1c)) = (int)sVar3;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
  }
  F_00557670((*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
switchD_007a7180_caseD_18: ;
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar7 = 2;
  do {
    this_00 = this_00 - 2;
    uVar5 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_007a7340 */
GEN_FRAME uint GEN_THISCALL F_007a7340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  F_005951c0(param_3 GEN_EDX_FWD,*(undefined4 *)((int)this + param_1 * 0x1c + 0x1b8),0,0);
  F_005951c0(param_3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x618),0,param_2[3]);
  uVar4 = *(undefined4 *)((int)this + iVar1 + 0x1bc);
  pvVar2 = (undefined *)F_00559ba0(*param_2 GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,uVar4);
  uVar3 = (uint)*(ushort *)((int)this + iVar1 + 0x1c4);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
  F_0057eb30(pvVar2 GEN_EDX_ARG,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar4 = *(undefined4 *)((int)this + iVar1 + 0x1c0);
  pvVar2 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,uVar4);
  uVar3 = (uint)*(ushort *)((int)this + iVar1 + 0x1c6);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[4] GEN_EDX_ARG);
  uVar3 = F_0057eb30(pvVar2 GEN_EDX_ARG,uVar3,uVar4,uVar5,uVar6,uVar7);
  return uVar3;
}

/* ref: FUN_007a73f0 */
GEN_NOFRAME uint GEN_THISCALL F_007a73f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a73f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc204));
  F_0042b630((int)this + 0x180 GEN_EDX_ARG);
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
GEN_NOFRAME uint GEN_THISCALL F_007a7460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a7460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc204));
  F_0042c880((undefined *)((int)this + 0x180) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonTalkSubtitle::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a74a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a74a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TalkSubtitle",0,6);
  return bVar1;
}

/* ref: FUN_007a74b0 */
GEN_FRAME byte GEN_THISCALL F_007a74b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a74b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (param_2 != (byte *)0x0) {
    if (((param_2[8] & 0xf) != 0) && (*(int *)(param_2 + 0xc) == 1)) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return 1;
    }
    if ((*param_2 & 0xf) != 0) {
      F_0042aca0((int)this + 0x180 GEN_EDX_ARG);
      if ((*param_2 & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 4);
      }
      F_0042e430((undefined *)((int)this + 0x180) GEN_EDX_ARG,uVar2);
    }
    pvVar3 = (undefined *)F_0055e340(this GEN_EDX_ARG,2);
    this_00 = (undefined *)F_0055e340(this GEN_EDX_ARG,3);
    pvVar4 = (undefined *)F_0055e340(this GEN_EDX_ARG,4);
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar4;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    uVar5 = F_0042a990((int)this + 0x180 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
    uVar5 = (*(uint *)(gen_frame + 0x14));
    (*(uint *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x1d4);
    (*(uint *)(gen_frame + 0x1c)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x14));
    uVar5 = F_0055ab00(pvVar3 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x14));
    bVar1 = F_0055ab50(pvVar3 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x14));
    uVar5 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38) GEN_EDX_ARG,((byte *)(gen_frame + 0x8)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x18)));
    F_00584110(pvVar3 GEN_EDX_ARG,-(uint)((((byte *)(gen_frame + 0x8))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0xc)));
    F_00584110(this_00 GEN_EDX_ARG,-(uint)((((byte *)(gen_frame + 0x8))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0xc)));
    F_00584110((*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,-(uint)((((byte *)(gen_frame + 0x8))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0xc)));
    if ((param_2[0x10] & 0xf) != 0) {
      puVar6 = (undefined4 *)F_0055dd80(this GEN_EDX_ARG);
      puVar6[1] = (undefined4)gen_fl2bits(REFG(float, 0x1094834));
      if ((param_2[0x28] & 0xf) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_2 + 0x2c);
      }
      pvVar3 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)iVar7)));
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar3;
      puVar6[2] = pvVar3;
      F_0055dda0(this GEN_EDX_ARG,*puVar6,REFG(float, 0x1094834),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar3))));
      *(undefined1 *)((int)this + 0x1d9) = 1;
    }
    if (*(char *)((int)this + 0x1d8) == '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG,0);
    }
    F_005a2670(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
    this_01 = &(*(uint *)(gen_frame + 0x38));
    iVar7 = 3;
    do {
      this_01 = this_01 - 2;
      F_005a2670(this_01 GEN_EDX_ARG);
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::UI2::AddonTalkSubtitle::vf40 */
GEN_FRAME uint GEN_THISCALL F_007a76e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a76e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (this[0x1d9] != (undefined1)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_FWD);
    this[0x1d9] = (undefined1)0x0;
  }
  return param_1;
}

/* ref: FUN_007a7710 */
GEN_NOFRAME uint GEN_THISCALL F_007a7710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a7710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc304));
  *(undefined4 *)((int)this + 0x18c) = 0;
  F_0042b630((int)this + 0x194 GEN_EDX_ARG);
  F_0042b630((int)this + 0x1e8 GEN_EDX_ARG);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x200;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(undefined4 *)((int)this + 0x270) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094834)));
  *(undefined2 *)((int)this + 0x250) = 3;
  *(undefined4 *)((int)this + 600) = 3;
  *(undefined4 *)((int)this + 0x278) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10c1f04)));
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined1 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 0x25c) = 1;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined2 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined1 *)((int)this + 0x280) = 0;
  *(undefined2 *)((int)this + 0x26c) = 0x100;
  *(undefined4 *)((int)this + 0x274) = 7;
  *(undefined4 *)((int)this + 0x27c) = uVar1;
  *(undefined1 *)((int)this + 0x10f) = 0xff;
  uVar1 = REFG(undefined4, 0x1302e20);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = uVar1;
  return (uint)this;
}

/* ref: FUN_007a7820 */
GEN_NOFRAME uint GEN_THISCALL F_007a7820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a7820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc304));
  F_0042c880((undefined *)((int)this + 0x1e8) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x194) GEN_EDX_ARG);
  F_005a2670((undefined *)((int)this + 0x18c) GEN_EDX_ARG);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonTalk::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007a7870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a7870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined * pAVar2;
  
  F_005b0510((undefined *)this GEN_EDX_FWD);
  F_005a92d0(this GEN_EDX_ARG,1,0x23,0);
  pAVar2 = this;
  this_00 = (undefined *)F_0055dcb0();
  uVar1 = F_00586870(this_00 GEN_EDX_ARG,pAVar2);
  this[0x280] = (undefined1)0x0;
  return uVar1;
}

/* ref: Client::UI2::AddonTalk::vf40 */
GEN_FRAME uint GEN_THISCALL F_007a78a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a78a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Client::UI2::AddonTalk::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a78b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a78b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,&REFG(undefined, 0x10c1f08),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTalk::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_007a78c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a78c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  undefined1 AVar2;
  ushort uVar3;
  uint uVar4;
  
  if (*(int *)(this + 0x94) != 0) {
    F_0055a500(*(int *)(this + 0x94) GEN_EDX_FWD,1);
    *(undefined4 *)(this + 0xa4) = *(undefined4 *)(this + 0x94);
  }
  F_0055a830(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,4);
  uVar4 = F_0055e340(this GEN_EDX_ARG,2);
  *(uint *)(this + 0x180) = uVar4;
  uVar4 = F_0055e340(this GEN_EDX_ARG,3);
  *(uint *)(this + 0x184) = uVar4;
  F_00584110(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,"Player Name");
  F_0055aa90(*(undefined4 *)(this + 0x180) GEN_EDX_ARG,3);
  F_0057eb00(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,1);
  F_0055a3c0(*(undefined4 *)(this + 0x180) GEN_EDX_ARG,0);
  F_00584580(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,0);
  F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,"");
  F_0055a3c0(*(undefined4 *)(this + 0x184) GEN_EDX_ARG,0);
  AVar2 = (undefined1)F_0055ab50(*(undefined4 *)(this + 0x184) GEN_EDX_ARG);
  this[0x252] = AVar2;
  AVar2 = (undefined1)F_0055ade0(*(undefined4 *)(this + 0x184) GEN_EDX_ARG);
  fVar1 = REFG(float, 0x10c1efc);
  this[0xf9] = (undefined1)((byte)this[0xf9] | 0x24);
  this[0x253] = AVar2;
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x20);
  F_0055e1c0(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x109feac),0,0,fVar1,1);
  F_0055e220(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x109feac),0,0,REFG(float, 0x10c1efc),1);
  uVar3 = F_0055a020(*(undefined4 *)(this + 0x184) GEN_EDX_ARG);
  *(uint *)(this + 0x268) = (uint)uVar3;
  F_005a91d0(this GEN_EDX_ARG,1,0x23);
  F_00568210(*(undefined4 *)(this + 0x90) GEN_EDX_ARG,(float)(float10)1,(float)(float10)1);
  uVar4 = F_005876a0(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: Client::UI2::AddonTalk::vf25 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007a7a30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a7a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x26c] == (undefined1)0x0) {
    this[0x26c] = (undefined1)0x1;
    F_005a9110(this GEN_EDX_FWD,0,0);
  }
  return;
}

/* ref: Client::UI2::AddonTalk::vf49 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007a7a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a7a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  
  F_005a9190((undefined *)this GEN_EDX_FWD);
  pAVar2 = this;
  pvVar1 = (undefined *)F_0055dcb0();
  F_00586870(pvVar1 GEN_EDX_ARG,pAVar2);
  this[0x280] = (undefined1)0x0;
  pvVar1 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,4);
  F_0055a300(pvVar1 GEN_EDX_ARG,0);
  F_00577ad0(pvVar1 GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::AddonTalk::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_007a7a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a7a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x14) + 0x48))))(*(int * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,0x12,1);
    uVar5 = 0;
    uVar3 = 0xc;
    pAVar4 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_00586850(pvVar2 GEN_EDX_ARG,uVar3,uVar5,pAVar4);
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = 0xc;
    pAVar4 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar2 GEN_EDX_ARG,uVar3,uVar5,pAVar4,uVar6,uVar7);
    uVar5 = 0;
    uVar3 = 9;
    pAVar4 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_00586850(pvVar2 GEN_EDX_ARG,uVar3,uVar5,pAVar4);
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = 9;
    pAVar4 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar2 GEN_EDX_ARG,uVar3,uVar5,pAVar4,uVar6,uVar7);
    F_005a89b0(this GEN_EDX_ARG,param_1,1);
    uVar1 = F_0055dcb0();
    F_005aa060((undefined *)(uVar1 + 0x20c) GEN_EDX_ARG,0xf,0);
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x21c) = 1;
  }
  return;
}

/* ref: Client::UI2::AddonTalk::vf6 */
GEN_FRAME uint GEN_THISCALL F_007a7b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a7b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  uint * this_01;
  undefined * pAVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (this[0x26d] == (undefined1)0x0) {
    uVar1 = *(undefined4 *)(this + 0x24c);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    uVar2 = F_0055aaf0(*(undefined4 *)(this + 0x180) GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    uVar2 = F_0042a990(this + 0x1e8 GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x34,3,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    this[0x26d] = (undefined1)0x1;
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 2;
    do {
      this_01 = this_01 - 2;
      F_005a2670(this_01 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar2 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14) + 0x48))))(*(int * PTR32 *)(uVar2 + 0x14) GEN_EDX_ARG,0x12,0);
  pAVar4 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_00586870(this_00 GEN_EDX_ARG,pAVar4);
  this[0x280] = (undefined1)0x0;
  F_005b0610(this GEN_EDX_ARG,param_1,1,param_2);
  uVar2 = F_0055dcb0();
  *(undefined1 *)(uVar2 + 0x21c) = 0;
  uVar2 = F_0055dcb0();
  uVar2 = F_005aa060((undefined *)(uVar2 + 0x20c) GEN_EDX_ARG,0,0);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007a7c70 */
GEN_FRAME uint GEN_THISCALL F_007a7c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a7c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  undefined * this_03;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined4 uVar3;
  
  *(undefined4 *)((int)this + 0x188) = REFG(undefined4, 0x1302e20);
  this_00 = (undefined *)F_0055e2f0(this GEN_EDX_FWD,6);
  this_01 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,8);
  F_0055e2f0(this GEN_EDX_ARG,9);
  F_0055e2f0(this GEN_EDX_ARG,10);
  F_0055e2f0(this GEN_EDX_ARG,0xb);
  this_02 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,0xc);
  F_0055e2f0(this GEN_EDX_ARG,0xd);
  F_0055e2f0(this GEN_EDX_ARG,0xe);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x180) GEN_EDX_ARG,1);
  uVar3 = 1;
  this_03 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,7);
  F_0055a300(this_03 GEN_EDX_ARG,uVar3);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
    uVar2 = F_0059d640(this_00 GEN_EDX_ARG,0x65);
    return uVar2;
  case 2: ;
    uVar3 = 0x66;
    break;
  case 3: ;
    uVar2 = F_0059d640(this_00 GEN_EDX_ARG,0x67);
    return uVar2;
  case 4: ;
    uVar2 = F_0059d640(this_00 GEN_EDX_ARG,0x68);
    return uVar2;
  case 5: ;
    F_0059d640(this_00 GEN_EDX_ARG,0x69);
    bVar1 = F_0055a1d0(this_02 GEN_EDX_ARG,100,100,100);
    return CONCAT31(extraout_var,bVar1);
  case 6: ;
    uVar2 = F_0059d640(this_00 GEN_EDX_ARG,0x6a);
    return uVar2;
  case 7: ;
    uVar3 = 0x6b;
    break;
  case 8: ;
    F_0059d640(this_00 GEN_EDX_ARG,0x69);
    bVar1 = F_0055a1d0(this_02 GEN_EDX_ARG,0,0,0);
    *(undefined4 *)((int)this + 0x188) = 0xffffffff;
    return CONCAT31(extraout_var_00,bVar1);
  default: ;
    bVar1 = F_0055a300(this_01 GEN_EDX_ARG,1);
    return CONCAT31(extraout_var_01,bVar1);
  }
  uVar2 = F_0059d640(this_00 GEN_EDX_ARG,uVar3);
  *(undefined4 *)((int)this + 0x188) = 0xffffffff;
  return uVar2;
}

/* ref: FUN_007a7df0 */
GEN_FRAME byte GEN_THISCALL F_007a7df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a7df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar1 = *(undefined4 *)((int)this + 0x240);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_0056c4c0((undefined *)((int)this + 0x18c) GEN_EDX_FWD,uVar1,&(*(undefined4 *)(gen_frame + 0x4)));
  if ((((byte)(*(undefined4 *)(gen_frame + 0x4)) & 0xf) == 6) && (*(int *)((int)this + 0x240) < 5)) {
    F_0042e430((undefined *)((int)this + 0x194) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x194 GEN_EDX_ARG);
    if (uVar2 != 0) {
      uVar2 = F_0042a990((int)this + 0x194 GEN_EDX_ARG);
      uVar2 = F_0057ed00(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,uVar2);
      *(uint *)((int)this + 0x23c) = uVar2;
      if (0 < (int)uVar2) {
        *(int *)((int)this + 0x240) = *(int *)((int)this + 0x240) + 1;
        *(undefined1 *)((int)this + 0x248) = 0;
        *(undefined4 *)((int)this + 0x254) = 0;
        *(undefined4 *)((int)this + 0x244) = 5;
        *(undefined4 *)((int)this + 600) = 3;
        *(undefined4 *)((int)this + 0x260) = 0;
        F_0055ad30(*(undefined4 *)((int)this + 0x184) GEN_EDX_ARG,0);
        uVar2 = F_0042a990((int)this + 0x194 GEN_EDX_ARG);
        F_00584110(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,uVar2);
        F_0055a300(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,0);
        this_00 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,4);
        F_0055a300(this_00 GEN_EDX_ARG,1);
        F_0059d640(this_00 GEN_EDX_ARG,0x65);
        *(undefined1 *)((int)this + 0x280) = 1;
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        return 1;
      }
    }
  }
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007a7f20 */
GEN_FRAME byte GEN_THISCALL F_007a7f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a7f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  uint * this_01;
  int iVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((*(int *)((int)this + 0x254) < *(int *)((int)this + 0x23c)) &&
     (*(char *)((int)this + 0x264) == '\0')) {
    uVar2 = F_0042a990((int)this + 0x194 GEN_EDX_FWD);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,uVar2);
    F_0055ad30(*(undefined4 *)((int)this + 0x184) GEN_EDX_ARG,0);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,1);
    F_0055aa30(*(undefined4 *)((int)this + 0x184) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x188));
    *(undefined4 *)((int)this + 0x254) = *(undefined4 *)((int)this + 0x23c);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
  bVar1 = F_007a7df0(this GEN_EDX_ARG);
  if ((bVar1 != 0) && (*(char *)((int)this + 0x264) == '\0')) {
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
  uVar4 = 0;
  this_00 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,4);
  F_0055a300(this_00 GEN_EDX_ARG,uVar4);
  if (*(char *)((int)this + 0x26c) == '\0') {
    uVar4 = *(undefined4 *)((int)this + 0x24c);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
    uVar2 = F_0055aaf0(*(undefined4 *)((int)this + 0x180) GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    uVar2 = F_0042a990((int)this + 0x1e8 GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x34,3,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    *(undefined2 *)((int)this + 0x26c) = 0x101;
    F_005a9110(this GEN_EDX_ARG,0,0);
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 2;
    do {
      this_01 = this_01 - 2;
      F_005a2670(this_01 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI2::AddonTalk::vf54 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007a80c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a80c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    F_00568210(*(undefined4 *)(this + 0x90) GEN_EDX_FWD,(float)(float10)1,(float)(float10)1);
    F_005876a0(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007a80f0 */
GEN_NOFRAME uint GEN_THISCALL F_007a80f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a80f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc404));
  *(undefined1 *)((int)this + 0x180) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonEventSkip::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007a8140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  
  uVar3 = 0;
  uVar2 = 0xc;
  this[0x180] = (undefined1)0x0;
  pAVar4 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_00586850(this_00 GEN_EDX_ARG,uVar2,uVar3,pAVar4);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonEventSkip::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a8170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"EventSkip",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonEventSkip::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_007a8180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0xc;
  pAVar4 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_0056a3d0(this_00 GEN_EDX_ARG,uVar2,uVar3,pAVar4,uVar5,uVar6);
  bVar1 = F_0056b630(this GEN_EDX_ARG,0x18ab2,2,0,8,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonEventSkip::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_007a81c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a81c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (this[0x180] != (undefined1)0x0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = 0;
    uVar1 = 0xc;
    pAVar3 = this;
    this_00 = (undefined *)F_0055dcb0();
    F_0056a3d0(this_00 GEN_EDX_ARG,uVar1,uVar2,pAVar3,uVar4,uVar5);
    this[0x180] = (undefined1)0x0;
  }
  return 1;
}

/* ref: Client::UI2::AddonEventSkip::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_007a81f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a81f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  
  if ((((short)param_1 == 0xc) && ((char)param_4[1] == '\0')) &&
     ((iVar1 = *param_4, iVar1 == 3 || ((iVar1 == 2 || (iVar1 == 1)))))) {
    uVar3 = 0;
    uVar2 = 0xc;
    pAVar4 = this;
    this_00 = (undefined *)F_0055dcb0();
    F_00586850(this_00 GEN_EDX_ARG,uVar2,uVar3,pAVar4);
    this[0x180] = (undefined1)0x1;
    iVar1 = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(int *)(gen_frame + 0x8)) = (-(uint)(iVar1 != 2) & 0xb) - 1;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007a8270 */
GEN_NOFRAME uint GEN_THISCALL F_007a8270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) & 0xf7;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined1 *)((int)this + 0x1ac) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc504));
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined1 *)((int)this + 0x10f) = 2;
  return (uint)this;
}

/* ref: Client::UI2::AddonHowTo::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a8320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"HowTo",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonHowTo::vf25 */
GEN_FRAME uint GEN_THISCALL F_007a8330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonHowTo::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_007a8370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a8370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  if ((short)param_1 != 0x17) {
    return;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0xf: ;
    if (*(int *)(this + 0x180) != 0) {
      F_00557670(param_3 GEN_EDX_FWD,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x10)) = 3;
      cVar1 = *((char *)GEN_TOP((*(int *)(this + 0x180) + 0x88)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x18)) = (uint)(cVar1 != '\0');
      F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar2 = 1;
      do {
        this_00 = this_00 - 8;
        F_005a2670(this_00 GEN_EDX_ARG);
        iVar2 = iVar2 - 1;
      } while (-1 < iVar2);
      return;
    }
    break;
  case 0x10: ;
    break;
  case 0x11: ;
    F_00557670(param_3 GEN_EDX_ARG,0);
    (*(uint *)(gen_frame + 0x18)) = 1;
    goto LAB_007a849b;
  case 0x12: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
    F_00557670(param_3 GEN_EDX_ARG,0);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x18)) = param_2 - 0x12;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_01 = this_01 - 8;
      F_005a2670(this_01 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    return;
  case 0x17: ;
    F_00557670(param_3 GEN_EDX_ARG,0);
    (*(uint *)(gen_frame + 0x18)) = 2;
LAB_007a849b: ;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    break;
  default: ;
    goto switchD_007a8395_default;
  }
switchD_007a8395_default: ;
  return;
}

/* ref: Client::UI2::AddonHowTo::vf32 */
GEN_NOFRAME byte F_007a84e0(void)
{
  GEN_ENTER(0x7a84e0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_007a84f0 */
GEN_NOFRAME uint GEN_THISCALL F_007a84f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a84f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0xa0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc604));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x18c) = 0;
  F_0055e2a0(this GEN_EDX_ARG,2,1);
  *(undefined1 *)((int)this + 0x10f) = 1;
  return (uint)this;
}

/* ref: Client::UI2::AddonHowToNotice::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a8570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"HowToNortice",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonHowToNotice::vf38 */
GEN_FRAME uint GEN_THISCALL F_007a8580(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7a8580u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * this;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0xf9) & 1) == 0) goto LAB_007a8621;
  iVar3 = 0;
  bVar1 = F_0056c7e0();
  if (bVar1 != 0) {
    uVar2 = F_0055dcb0();
    iVar3 = (*((int *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) + 1;
  }
  if (*(int *)(param_1 + 0x180) == iVar3) goto LAB_007a8621;
  F_0059d640(*(undefined * PTR32 *)(param_1 + 0x188) GEN_EDX_ARG,0x66 - (uint)(iVar3 != 0));
  uVar2 = F_0055dcb0();
  this = *(undefined * PTR32 *)(uVar2 + 0x30);
  F_00563db0(*(undefined4 *)(param_1 + 0x184) GEN_EDX_ARG,1);
  if (iVar3 == 1) {
    uVar4 = 0x34e;
LAB_007a8606: ;
    uVar2 = F_0043bd00(this GEN_EDX_ARG,uVar4,0,0);
    F_0058bba0(*(undefined * PTR32 *)(param_1 + 0x184) GEN_EDX_ARG,uVar2);
  }
  else if (iVar3 == 2) {
    uVar4 = 0x18a8a;
    goto LAB_007a8606;
  }
  *(int *)(param_1 + 0x180) = iVar3;
LAB_007a8621: ;
  uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonHowToNotice::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_007a8640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a8640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    F_005a9110(this GEN_EDX_ARG,0,0);
  }
  return;
}

/* ref: Client::UI2::AddonHowToNotice::vf32 */
GEN_NOFRAME byte F_007a8670(void)
{
  GEN_ENTER(0x7a8670u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI2::AddonHowToNotice::vf30 */
GEN_NOFRAME uint GEN_THISCALL F_007a8680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  F_0056ac30((undefined *)this GEN_EDX_FWD);
  iVar1 = *(int *)this;
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x24))(this);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))
                    (this GEN_EDX_ARG,(uint)(ushort)((short)uVar2 - *(short *)(this + 0x18c)));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x2c))(this,uVar2 & 0xffff);
  return uVar2;
}

/* ref: Client::UI2::AddonChatLog::vf36 */
GEN_NOFRAME byte GEN_THISCALL F_007a86c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a86c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  bVar1 = F_00560e80(this + 0x21c GEN_EDX_ARG,this);
  return bVar1;
}

/* ref: Client::UI2::AddonChatLog::vf41 */
GEN_FRAME byte GEN_THISCALL F_007a86e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a86e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 7;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this GEN_EDX_ARG,"ChatLog",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonChatLog::vf6 */
GEN_FRAME uint GEN_THISCALL F_007a8730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0059cee0(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_FWD,0);
  uVar1 = F_005b0610(this GEN_EDX_ARG,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonChatLog::vf29 */
GEN_NOFRAME byte GEN_THISCALL F_007a8760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x25b) != '\0') {
    return 0;
  }
  return *(char *)(in_ecx + 0x10d) != '\0';
}

/* ref: Client::UI2::AddonChatLog::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007a8780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00588c10(this + 0x21c GEN_EDX_FWD);
  F_00579170((undefined *)this GEN_EDX_ARG);
  return;
}

/* ref: FUN_007a87a0 */
GEN_NOFRAME uint GEN_THISCALL F_007a87a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a87a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = (int *)((int)this + 0x1a4);
  iVar3 = 5;
  do {
    uVar1 = F_00581060((undefined *)((int)this + 0x21c) GEN_EDX_FWD,**(int * PTR32 *)(*piVar4 + 0x110) + 1);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 4) + 0xb8))))(*(int * PTR32 *)(uVar1 + 4) GEN_EDX_ARG,0,0);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar2;
}

/* ref: Client::UI2::AddonChatLog::vf31 */
GEN_FRAME uint GEN_THISCALL F_007a87f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a87f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a97f0((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_007a8800 */
GEN_FRAME uint GEN_THISCALL F_007a8800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a8800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined * pvVar2;
  undefined4 * this_00;
  uint * puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (param_1 == 3) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_FWD);
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xb;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x20)));
  F_007a87a0(this GEN_EDX_ARG);
  if (param_1 != 2) {
    uVar1 = F_0055dcb0();
    F_00580230(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,this,0);
    if (*(char *)((int)this + 0x259) == '\0') {
      if (param_1 == 0) {
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        pvVar2 = (undefined *)F_0055dcb0();
        F_0059b300(pvVar2 GEN_EDX_ARG,uVar5,uVar6,uVar7);
        goto LAB_007a88d4;
      }
      uVar5 = 0x11;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x38))))(*(int * PTR32 *)((int)this + 0x19c) GEN_EDX_ARG);
      pvVar2 = (undefined *)F_0055dcb0();
      F_0059b300(pvVar2 GEN_EDX_ARG,uVar1,this,uVar5);
    }
    else {
      uVar1 = F_0055dcb0();
      F_0059b9c0(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG);
      *(undefined1 *)((int)this + 0x259) = 0;
    }
  }
  if (param_1 != 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x38));
    iVar4 = 2;
    do {
      puVar3 = puVar3 - 2;
      F_005a2670(puVar3 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 0;
  }
LAB_007a88d4: ;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x14,2,&(*(undefined4 *)(gen_frame + 0x10)));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  this_00 = &(*(undefined4 *)(gen_frame + 0x20));
  iVar4 = 1;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar3 = &(*(uint *)(gen_frame + 0x38));
  iVar4 = 2;
  do {
    puVar3 = puVar3 - 2;
    F_005a2670(puVar3 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007a89a0 */
GEN_FRAME uint GEN_THISCALL F_007a89a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a89a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d4) + param_1 * 4)));
  this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
  uVar1 = F_00584110(this_00 GEN_EDX_ARG,uVar2);
  return uVar1;
}

/* ref: FUN_007a89d0 */
GEN_FRAME uint GEN_THISCALL F_007a89d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a89d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00581000((undefined *)((int)this + 0x21c) GEN_EDX_FWD,param_1);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x2d) = 1;
  }
  return uVar1;
}

/* ref: FUN_007a89f0 */
GEN_FRAME uint GEN_THISCALL F_007a89f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a89f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x1a4)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = F_00581060(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21c))) GEN_EDX_FWD,**(int * PTR32 *)(iVar1 + 0x110) + 1);
    uVar2 = F_00588cd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21c))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),uVar2,0);
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cd))) = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cd))) - 1;
  }
  return uVar2;
}

/* ref: FUN_007a8a40 */
GEN_FRAME byte GEN_THISCALL F_007a8a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2 GEN_EDX_FWD)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 5;
  uVar1 = *(undefined4 *)(*param_2 + 0x14);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  uVar1 = puVar2[1];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
  uVar1 = *puVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 3;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007a8b00 */
GEN_FRAME uint GEN_THISCALL F_007a8b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a8b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1;
  if ((((-1 < param_1) || (iVar2 = (int)*(char *)((int)this + 0x1cc), -1 < iVar2)) &&
      (iVar2 = *(int *)((int)this + iVar2 * 4 + 0x1a4), iVar2 != 0)) &&
     (piVar1 = *(int * PTR32 *)(iVar2 + 0x110), piVar1 != (int *)0x0)) {
    uVar3 = F_00581060((undefined *)((int)this + 0x21c) GEN_EDX_FWD,*piVar1 + 1);
    if (uVar3 != 0) {
      return *(uint *)(uVar3 + 4);
    }
  }
  return 0;
}

/* ref: FUN_007a8b50 */
GEN_NOFRAME byte F_007a8b50(void)
{
  GEN_ENTER(0x7a8b50u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  this = *(undefined * PTR32 *)(uVar1 + 0x14);
  uVar1 = F_00560310();
  uVar1 = F_0057f860(this GEN_EDX_ARG,uVar1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(uVar1 + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 != 3) && (uVar1 != 2)) {
    return 0;
  }
  return 1;
}

/* ref: Client::UI2::AddonChatLog::vf32 */
GEN_NOFRAME byte F_007a8b90(void)
{
  GEN_ENTER(0x7a8b90u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_007a8bc0 */
GEN_NOFRAME uint GEN_THISCALL F_007a8bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  
  uVar4 = F_0055e2f0(this GEN_EDX_FWD,6);
  uVar2 = F_0055a020(uVar4 GEN_EDX_ARG);
  uVar3 = F_0055a030(uVar4 GEN_EDX_ARG);
  uVar5 = (uint)(ushort)-(uVar3 >> 1);
  uVar3 = F_00559d70(uVar4 GEN_EDX_ARG);
  F_0056b630(this GEN_EDX_ARG,0x29b,6,1,4,(uint)(ushort)(uVar3 + (uVar2 >> 1)),uVar5);
  uVar4 = F_0055e2f0(this GEN_EDX_ARG,8);
  uVar2 = F_0055a020(uVar4 GEN_EDX_ARG);
  uVar3 = F_0055a030(uVar4 GEN_EDX_ARG);
  uVar5 = (uint)(ushort)-(uVar3 >> 1);
  uVar3 = F_00559d70(uVar4 GEN_EDX_ARG);
  bVar1 = F_0056b630(this GEN_EDX_ARG,0x29c,6,2,4,(uint)(ushort)(uVar3 + (uVar2 >> 1)),uVar5);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a8c80 */
GEN_NOFRAME uint GEN_THISCALL F_007a8c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc704));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  uVar1 = F_0055dcb0();
  F_00784650((undefined *)((int)this + 0x1a0) GEN_EDX_ARG,uVar1);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) & 0xffffffbf;
  *(undefined1 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined2 *)((int)this + 0x2b8) = 0;
  *(undefined1 *)((int)this + 0x2ba) = 0;
  F_0055e2a0(this GEN_EDX_ARG,8,1);
  F_0055e2a0(this GEN_EDX_ARG,0x20000000,0);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x800;
  return (uint)this;
}

/* ref: FUN_007a8d20 */
GEN_NOFRAME uint GEN_THISCALL F_007a8d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc704));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  F_00580e00((undefined *)((int)this + 0x218) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a8d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ChatLogPanel",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007a8d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  uVar1 = F_0055e2a0(this GEN_EDX_ARG,8,1);
  return uVar1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf31 */
GEN_FRAME uint GEN_THISCALL F_007a8d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a8d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a97f0((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_007a8da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a8da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,0,0);
  if (((byte)this[0xfb] & 2) != 0) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14) GEN_EDX_ARG,(uint)(byte)AVar1);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_00581000((undefined *)(uVar3 + 0x21c) GEN_EDX_ARG,this);
      if (uVar2 != 0) {
        *(undefined1 *)(uVar2 + 0x2d) = 1;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_007a8df0 */
GEN_FRAME uint GEN_THISCALL F_007a8df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00557640(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,9);
  (*(undefined4 *)(gen_frame + 0x14)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2[1];
  uVar1 = F_00599860(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  if (uVar1 == 1) {
    uVar1 = F_00557670(param_1 GEN_EDX_ARG,0);
  }
  return uVar1;
}

/* ref: FUN_007a8e40 */
GEN_FRAME ushort GEN_THISCALL F_007a8e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort in_AX = 0;
  
  if ((*(char *)((int)this + 0x2b4) != '\0') && (*(int *)((int)this + 0x198) != 0)) {
    F_00557640(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,5);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + 2);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)param_2;
    F_00599860(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
    in_AX = *param_2;
    *(ushort *)((int)this + 0x2b0) = in_AX;
    *(ushort *)((int)this + 0x2b2) = param_2[1];
  }
  return in_AX;
}

/* ref: FUN_007a8ea0 */
GEN_FRAME uint GEN_THISCALL F_007a8ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a8ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0055ad50(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_FWD,0,0);
  uVar1 = F_0055dcb0();
  if ((*(char *)(uVar1 + 0x21b) != '\0') && ((char)param_1 == '\0')) {
    *(undefined1 *)(uVar1 + 0x21b) = 0;
    uVar1 = F_005aa060((undefined *)(uVar1 + 0x20c) GEN_EDX_ARG,0,0);
  }
  *(undefined1 *)((int)this + 0x2b5) = 0;
  return uVar1;
}

/* ref: FUN_007a8ef0 */
GEN_FRAME unsigned int GEN_THISCALL F_007a8ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x2b5) == '\0') && ((char)param_2[3] == '\0')) {
    uVar1 = F_00577ea0(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_FWD,(uint)*param_2,(uint)param_2[1],0);
    *(uint *)((int)this + 700) = uVar1;
    F_0055ad50(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,uVar1 & 0xffff,uVar1 & 0xffff);
    F_0055aad0(*(undefined4 *)((int)this + 0x198) GEN_EDX_ARG,0xa000d268);
    *(undefined2 *)((int)this + 0x2b6) = 1;
  }
  return;
}

/* ref: FUN_007a8f60 */
GEN_FRAME uint GEN_THISCALL F_007a8f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00577ea0(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_FWD,(uint)*param_2,(uint)param_2[1],0);
  uVar2 = F_0055ad50(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 700),uVar1);
  *(bool *)((int)this + 0x2b7) = *(uint *)((int)this + 700) != uVar1;
  return uVar2;
}

/* ref: FUN_007a8fb0 */
GEN_FRAME byte GEN_THISCALL F_007a8fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  byte bVar2;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  bVar2 = 0;
  if ((((char)param_2[1] == '\0') && (*param_2 == 0x13)) && (*(char *)((int)this + 0x2b7) != '\0'))
  {
    F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_FWD);
    F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00568440(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x18) + 0xe0))) + 4))))
              (**(int * PTR32 *)(uVar1 + 0x18) + 0xe0,((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
    F_00557670(param_1 GEN_EDX_ARG,0);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    bVar2 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return bVar2;
}

/* ref: FUN_007a9060 */
GEN_FRAME unsigned int GEN_THISCALL F_007a9060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a9060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  short * psVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_2 + 3) == '\0') {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0x3ea;
    uVar4 = 5;
    *(undefined1 *)((int)this + 0x29c) = 1;
    pvVar3 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar2 GEN_EDX_ARG,uVar4,uVar5,pvVar3,uVar6,uVar7);
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0x3eb;
    uVar4 = 4;
    pvVar3 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar2 GEN_EDX_ARG,uVar4,uVar5,pvVar3,uVar6,uVar7);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,(int)this + 0x290,(int)this + 0x292);
    *(undefined2 *)((int)this + 0x298) = *param_2;
    *(undefined2 *)((int)this + 0x29a) = param_2[1];
    pvVar3 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,5);
    psVar1 = (short *)((int)this + 0x296);
    F_0055a000(pvVar3 GEN_EDX_ARG,(int)this + 0x294,psVar1);
    *psVar1 = *psVar1 + *(short *)((int)this + 0x2a2);
    F_00557670(param_1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: Client::UI2::AddonChatLogPanel::vf51 */
GEN_FRAME uint GEN_THISCALL F_007a9120(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7a9120u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x4c))
                    (param_1 GEN_EDX_ARG,(int)TRUNC(REFG(double, 0x1088108) + (double)param_2) & 0xffff,
                     (int)TRUNC((double)param_3 + REFG(double, 0x1088108)) & 0xffff);
  return uVar1;
}

/* ref: FUN_007a9180 */
GEN_FRAME uint GEN_THISCALL F_007a9180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 < 5) {
    *(byte *)((int)this + 0x1bc) = (byte)param_1;
    *(undefined1 *)((int)this + 0x208) = 0;
    *(undefined1 *)((int)this + 0x20a) = 0;
    *(ushort *)((int)this + 0x1be) = (ushort)(byte)param_1 * 400;
    uVar1 = (uint)(byte)param_1 * 2 + 1;
    *(ushort *)((int)this + 0x1c0) = (ushort)(byte)param_1 * 7 + 0x13;
    *(short *)((int)this + 0x1c2) = (short)uVar1;
  }
  return uVar1;
}

/* ref: FUN_007a91e0 */
GEN_NOFRAME byte GEN_THISCALL F_007a91e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a91e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9e0(uVar3 GEN_EDX_ARG);
  bVar1 = F_0055de10(in_ecx GEN_EDX_ARG,uVar3);
  bVar2 = 1;
  if (bVar1 == 0) {
    bVar2 = *(byte *)(in_ecx + 0x261);
  }
  return bVar2;
}

/* ref: Client::UI2::AddonChatLogPanel::vf32 */
GEN_NOFRAME byte F_007a9210(void)
{
  GEN_ENTER(0x7a9210u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_007a9260 */
GEN_FRAME uint GEN_THISCALL F_007a9260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x20 + param_2 * 4);
}

/* ref: FUN_007a9270 */
GEN_FRAME uint GEN_THISCALL F_007a9270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x1b0 + param_2 * 4);
}

/* ref: Client::UI2::AddonMacro::vf25 */
GEN_FRAME uint GEN_THISCALL F_007a92c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a92c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a9300 */
GEN_FRAME uint GEN_THISCALL F_007a9300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a9300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 * PTR32 *)(param_2 + 0xc);
  uVar2 = F_00562ff0(param_1 GEN_EDX_FWD);
  if (((uVar2 != 0xffffffff) &&
      (uVar2 = F_00562ff0(param_1 GEN_EDX_ARG), uVar2 != *(uint *)((int)this + 0x4cc))) &&
     ((uVar3 = F_0042b790((undefined *)(param_2 + 0x10) GEN_EDX_ARG), uVar3 != 0 ||
      (((uVar2 = 0, puVar1 != (undefined4 *)0x0 && (((byte)*puVar1 & 0xf) == 2)) &&
       (*(char *)(puVar1 + 1) != '\0')))))) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) | 1;
    return uVar3;
  }
  *(undefined4 *)(param_2 + 100) = 0;
  return uVar2;
}

/* ref: FUN_007a9370 */
GEN_NOFRAME uint GEN_THISCALL F_007a9370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a9370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)this + 0x4c4);
  iVar3 = 0;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if ((*(byte *)((int)this + uVar1 + 0x25a0) & 1) != 0) {
        iVar3 = iVar3 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  this_00 = (undefined *)F_0055dcb0();
  uVar2 = F_005b03e0(this_00 GEN_EDX_ARG,iVar3,uVar2);
  uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x19c) GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: Client::UI2::AddonMacro::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007a93b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a93b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  *(undefined2 *)(this + 0x136) = 0x17;
  *(undefined4 *)(this + 0x4c4) = 100;
  return 0x17;
}

/* ref: Client::UI2::AddonMacro::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a93e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a93e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Macro",0,6);
  return bVar1;
}

/* ref: FUN_007a93f0 */
GEN_FRAME uint GEN_THISCALL F_007a93f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a93f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (param_1 != (undefined *)0x0) {
    if (*(undefined * PTR32 *)((int)this + 0x4c0) != (undefined *)0x0) {
      F_0059fd80(*(undefined * PTR32 *)((int)this + 0x4c0) GEN_EDX_FWD,1);
    }
    *(undefined * PTR32 *)((int)this + 0x4c0) = param_1;
    F_0059fd80(param_1 GEN_EDX_ARG,8);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c0) + 0x3c))))(*(int * PTR32 *)((int)this + 0x4c0) GEN_EDX_ARG);
    *(uint *)((int)this + 0xa4) = uVar2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = 8;
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0x9c)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x14)) = (uint)uVar1;
    F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 3;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007a94c0 */
GEN_FRAME uint GEN_THISCALL F_007a94c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a94c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (*(int *)((int)this + 0x4c0) != 0) {
    uVar1 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0x9c)));
    (*(uint *)(gen_frame + 0x4)) = F_00562ff0(*(int *)((int)this + 0x4c0) GEN_EDX_FWD);
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x4));
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a9590 */
GEN_FRAME byte GEN_THISCALL F_007a9590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a9590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (*(int *)((int)this + 0x4c0) != 0) {
    (*(uint *)(gen_frame + 0x8)) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0x9c)));
  }
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2 GEN_EDX_FWD)));
  if (*param_2 == 0) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = *param_2 - 0x84;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = 6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x8));
  uVar1 = *(undefined4 *)((*(int *)(gen_frame + 0xc)) + 0x98);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  uVar1 = puVar2[1];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar1;
  uVar1 = *puVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x10)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 4;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007a9690 */
GEN_FRAME unsigned int GEN_THISCALL F_007a9690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 0) {
    F_0056b630(this GEN_EDX_FWD,0x198,7,0,9,0,0);
  }
  return;
}

/* ref: FUN_007a96c0 */
GEN_NOFRAME uint GEN_THISCALL F_007a96c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a96c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(undefined4 *)((int)this + 0x204) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc914));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10cc900));
  *(undefined4 *)((int)this + 0x184) = 0x10001;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
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
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc0;
  F_0055e2a0(this GEN_EDX_ARG,0x4000000,1);
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonActionDetail::vf5 */
GEN_FRAME uint GEN_THISCALL F_007a9820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  if ((*(byte *)(uVar1 + 0x1bc) & 8) != 0) {
    uVar1 = F_005a89b0(this GEN_EDX_ARG,param_1,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007a9860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a9860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x1f,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x1c,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a9890 */
GEN_FRAME byte GEN_THISCALL F_007a9890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a9890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int *)(gen_frame + 0x14)) = (int)*(char *)(param_2 + 10);
  uVar2 = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0xb);
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 3;
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = 3;
  (*(int *)(gen_frame + 0x24)) = (int)cVar1;
  uVar3 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x29,3,&(*(undefined4 *)(gen_frame + 0x10)));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 2;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007a9930 */
GEN_FRAME uint GEN_THISCALL F_007a9930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a9930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110((undefined *)((int)this - 0x180) GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 0x180) + 0x18))))((int)this - 0x180,1,0);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007a9990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a9990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ActionDetail",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_007a99a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a99a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_007a99b0 */
GEN_FRAME uint GEN_THISCALL F_007a99b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a99b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 extraout_var_00 = 0;
  undefined3 extraout_var = 0;
  uint * puVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x14)) = param_1;
  (*(uint *)(gen_frame + 0x18)) = **(uint * PTR32 *)(param_1 + 0x20);
  F_00595190(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_FWD,(*(uint * PTR32 *)(param_1 + 0x20))[1],0,0);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,**(undefined4 * PTR32 *)(param_2 + 0x20));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))));
  if (((*(uint *)(gen_frame + 0x18)) & 1) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1f0) GEN_EDX_ARG,0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1f0) GEN_EDX_ARG,1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x19c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc))));
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1a0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x10))));
  }
  if (((*(uint *)(gen_frame + 0x18)) & 2) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 500) GEN_EDX_ARG,0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 500) GEN_EDX_ARG,1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1a4) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14))));
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1a8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18))));
  }
  uVar2 = (*(uint *)(gen_frame + 0x54));
  uVar5 = (*(uint *)(gen_frame + 0x44));
  (*(undefined4 *)(gen_frame + 0x38)) = 8;
  (*(undefined4 *)(gen_frame + 0x3c)) = 8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((int)this + 0x1cc);
  ((uint *)(gen_frame + 0x28))[0] = 4;
  ((uint *)(gen_frame + 0x28))[1] = 7;
  ((uint *)(gen_frame + 0x28))[2] = 3;
  ((undefined1 *)(gen_frame + 0x34))[0] = 1;
  (*(undefined4 *)(gen_frame + 0x40)) = 9;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x44)) = uVar5 & 0xffffff00;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x10;
  (*(uint *)(gen_frame + 0x4c)) = 10;
  (*(undefined4 *)(gen_frame + 0x50)) = 0xb;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x54)) = uVar2 & 0xffffff00;
  puVar6 = ((uint *)(gen_frame + 0x28)) + 1;
  (*(uint *)(gen_frame + 0x24)) = 3;
  do {
    if ((puVar6[-1] & (*(uint *)(gen_frame + 0x18))) == 0) {
      F_0055a300((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,0);
    }
    else {
      F_0055a300((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,1);
      F_00584110((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[-8] GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + *puVar6 * 4))));
      if ((char)puVar6[2] == '\0') {
        F_00584110((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[-5] GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + puVar6[1] * 4))))
        ;
      }
      else {
        uVar9 = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x14)) + 0x20) + puVar6[1] * 4)));
        F_0055dcb0();
        uVar5 = F_0056a410(uVar9);
        F_00584110((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[-5] GEN_EDX_ARG,uVar5);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 1;
    puVar6 = puVar6 + 4;
    iVar1 = (*(uint *)(gen_frame + 0x24)) - 1;
    (*(uint *)(gen_frame + 0x24)) = iVar1;
  } while (iVar1 != 0);
  if (((*(uint *)(gen_frame + 0x18)) & 0x20) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1ec) GEN_EDX_ARG,0);
  }
  else {
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x30)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)) GEN_EDX_ARG,6);
    (*(undefined4 *)(gen_frame + 0x3c)) = uVar9;
    uVar4 = F_0055a020(*(undefined4 *)((int)this + 0x1fc) GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x44)) = (uint)uVar4;
    uVar5 = F_0055ab00(*(undefined4 *)((int)this + 0x1fc) GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x4c)) = uVar5;
    bVar3 = F_0055ab50(*(undefined4 *)((int)this + 0x1fc) GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x54)) = (uint)bVar3;
    uVar5 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38) GEN_EDX_ARG,((byte *)(gen_frame + 0x8)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x38)))
    ;
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1ec) GEN_EDX_ARG,1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1fc) GEN_EDX_ARG,-(uint)((((byte *)(gen_frame + 0x8))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0xc)));
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = REFG(undefined4, 0x108cc50);
    uVar5 = F_0055aaf0(*(undefined4 *)((int)this + 0x1fc) GEN_EDX_ARG);
    F_00577d20(*(undefined * PTR32 *)((int)this + 0x1fc) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x10)),uVar5,uVar8,uVar9,uVar10);
    F_0055a080(*(undefined4 *)((int)this + 0x1fc) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x10)));
    fVar7 = F_00559d80(*(undefined4 *)((int)this + 0x1fc) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x10)) & 0xffff;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = (undefined2)(*(uint *)(gen_frame + 0x10));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)) = gen_x87_cw;
    (*(uint *)(gen_frame + 0x24)) = CONCAT22(gen_x87_cw,(undefined2)(*(uint *)(gen_frame + 0x24)));
    (*(uint *)(gen_frame + 0x20)) = gen_x87_cw | 0xc00;
    uVar5 = (uint)TRUNC((float10)((*(uint *)(gen_frame + 0x10)) & 0xffff) + fVar7);
    (*(uint *)(gen_frame + 0x20)) = uVar5;
    F_0055a080(*(undefined4 *)((int)this + 0x1ec) GEN_EDX_ARG,uVar5 & 0xffff);
    F_005a2670(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
    puVar6 = &(*(uint *)(gen_frame + 0x58));
    (*(uint *)(gen_frame + 0x24)) = 3;
    do {
      puVar6 = puVar6 - 2;
      F_005a2670(puVar6 GEN_EDX_ARG);
      iVar1 = (*(uint *)(gen_frame + 0x24)) - 1;
      (*(uint *)(gen_frame + 0x24)) = iVar1;
    } while (-1 < iVar1);
  }
  if (((*(uint *)(gen_frame + 0x18)) & 0x40) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1d8) GEN_EDX_ARG,0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1d8) GEN_EDX_ARG,1);
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x14)) + 0x20) + 8)));
    uVar5 = F_0055da10(*(undefined4 *)((int)this + 0x1e0));
    F_0058f730((undefined *)(uVar5 + 4) GEN_EDX_ARG,uVar9,0,6);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1e8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34))));
  }
  if (((*(uint *)(gen_frame + 0x18)) & 0x80) == 0) {
    bVar3 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1dc) GEN_EDX_ARG,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return CONCAT31(extraout_var,bVar3);
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x1dc) GEN_EDX_ARG,1);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x1e4) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x38))));
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = REFG(undefined4, 0x108cc50);
  uVar5 = F_0055aaf0(*(undefined4 *)((int)this + 0x1e4) GEN_EDX_ARG);
  F_00577d20(*(undefined * PTR32 *)((int)this + 0x1e4) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x14)),uVar5,uVar8,uVar9,uVar10);
  F_0055a080(*(undefined4 *)((int)this + 0x1e4) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)));
  fVar7 = F_00559d80(*(undefined4 *)((int)this + 0x1e4) GEN_EDX_ARG);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)) = gen_x87_cw;
  (*(uint *)(gen_frame + 0x24)) = CONCAT22(gen_x87_cw,(undefined2)(*(uint *)(gen_frame + 0x24)));
  (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x14)) & 0xffff;
  (*(uint *)(gen_frame + 0x20)) = gen_x87_cw | 0xc00;
  uVar5 = (uint)TRUNC((float10)((*(uint *)(gen_frame + 0x14)) & 0xffff) + fVar7);
  (*(uint *)(gen_frame + 0x20)) = uVar5;
  uVar4 = F_0055a080(*(undefined4 *)((int)this + 0x1dc) GEN_EDX_ARG,uVar5 & 0xffff);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return CONCAT22(extraout_var_00,uVar4);
}

/* ref: FUN_007a9e00 */
GEN_FRAME uint GEN_THISCALL F_007a9e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9e00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  ushort uVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  uint local_c;
  
  uVar2 = **(uint * PTR32 *)(param_2 + 0x20);
  iVar3 = param_1[0x72];
  if ((uVar2 & 0x1c) == 0) {
    iVar3 = param_1[0x7e];
  }
  if ((uVar2 & 0x20) != 0) {
    uVar1 = F_0055a030(iVar3 GEN_EDX_FWD);
    fVar4 = F_00559d80(iVar3 GEN_EDX_ARG);
    F_00559f00(param_1[0x7b] GEN_EDX_ARG,(float)(fVar4 + (float10)uVar1));
    iVar3 = param_1[0x7b];
  }
  if ((uVar2 & 0x40) != 0) {
    uVar1 = F_0055a030(iVar3 GEN_EDX_ARG);
    fVar4 = F_00559d80(iVar3 GEN_EDX_ARG);
    F_00559f00(param_1[0x76] GEN_EDX_ARG,(float)(fVar4 + (float10)uVar1));
    iVar3 = param_1[0x76];
  }
  if ((char)uVar2 < '\0') {
    uVar1 = F_0055a030(iVar3 GEN_EDX_ARG);
    fVar4 = F_00559d80(iVar3 GEN_EDX_ARG);
    F_00559f00(param_1[0x77] GEN_EDX_ARG,(float)(fVar4 + (float10)uVar1));
    iVar3 = param_1[0x77];
  }
  uVar1 = F_0055a030(iVar3 GEN_EDX_ARG);
  fVar4 = F_00559d80(iVar3 GEN_EDX_ARG);
  F_00559f00(param_1[0x80] GEN_EDX_ARG,(float)(fVar4 + (float10)uVar1));
  iVar3 = param_1[0x80];
  uVar5 = 2;
  this = (undefined *)F_0055e320(param_1 GEN_EDX_ARG);
  F_00561490(this GEN_EDX_ARG,uVar5);
  uVar1 = F_0055a030(iVar3 GEN_EDX_ARG);
  fVar4 = F_00559d80(iVar3 GEN_EDX_ARG);
  iVar3 = *param_1;
  local_c = (uint)(longlong)TRUNC((fVar4 + (float10)uVar1) + (float10)*(double *)&REFG(undefined, 0x10944e0));
  uVar2 = local_c & 0xfffffffc;
  uVar1 = F_0055a020(param_1[0x62] GEN_EDX_ARG);
  uVar2 = ((code *)*(gen_code32 *)(iVar3 + 0x4c))(param_1,(uint)uVar1,uVar2);
  return uVar2;
}

/* ref: FUN_007a9f90 */
GEN_FRAME ushort GEN_THISCALL F_007a9f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7a9f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG,param_1,param_2);
  F_0056b300(this GEN_EDX_ARG,param_3);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG);
  *(short *)((int)this + 0x204) = (short)uVar4 - (short)uVar2;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG);
  uVar1 = (short)uVar2 - (short)uVar3;
  *(ushort *)((int)this + 0x206) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_007aa000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aa000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (int)*(short *)(this + 0x12a) - (int)*(short *)(this + 0x204);
}

/* ref: Client::UI2::AddonActionDetail::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_007aa020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aa020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (int)*(short *)(this + 300) - (int)*(short *)(this + 0x206);
}

/* ref: FUN_007aa110 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007aa110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aa110u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[0x23] = 0;
  in_ecx[0x24] = 0;
  in_ecx[0x25] = 0;
  in_ecx[0x26] = 0;
  in_ecx[0x27] = 0;
  in_ecx[0x28] = 0;
  in_ecx[0x29] = 0;
  in_ecx[0x2a] = 0;
  in_ecx[0x2b] = 0;
  in_ecx[0x2c] = 0;
  in_ecx[0x2d] = 0;
  in_ecx[0x2e] = 0;
  in_ecx[0x2f] = 0;
  in_ecx[0x30] = 0;
  in_ecx[0x31] = 0;
  in_ecx[0x32] = 0;
  in_ecx[0x33] = 0;
  in_ecx[0x34] = 0;
  in_ecx[0x35] = 0;
  in_ecx[0x36] = 0;
  in_ecx[0x37] = 0;
  in_ecx[0x38] = 0;
  in_ecx[0x39] = 0;
  in_ecx[0x3a] = 0;
  in_ecx[0x3b] = 0;
  in_ecx[0x3c] = 0;
  in_ecx[0x3d] = 0;
  in_ecx[0x3e] = 0;
  in_ecx[0x3f] = 0;
  in_ecx[0x40] = 0;
  in_ecx[0x41] = 0;
  in_ecx[0x42] = 0;
  in_ecx[0x43] = 0;
  in_ecx[0x44] = 0;
  in_ecx[0x45] = 0;
  in_ecx[0x46] = 0;
  in_ecx[0x47] = 0;
  in_ecx[0x48] = 0;
  in_ecx[0x49] = 0;
  in_ecx[0x4a] = 0;
  in_ecx[0x4b] = 0;
  in_ecx[0x4c] = 0;
  in_ecx[0x4d] = 0;
  in_ecx[0x4e] = 0;
  in_ecx[0x4f] = 0;
  in_ecx[0x50] = 0;
  in_ecx[0x51] = 0;
  in_ecx[0x52] = 0;
  in_ecx[0x53] = 0;
  in_ecx[0x54] = 0;
  in_ecx[0x55] = 0;
  in_ecx[0x56] = 0;
  in_ecx[0x57] = 0;
  in_ecx[0x58] = 0;
  in_ecx[0x59] = 0;
  in_ecx[0x5a] = 0;
  in_ecx[0x5b] = 0;
  in_ecx[0x5c] = 0;
  return 0;
}

/* ref: FUN_007aa2f0 */
GEN_FRAME uint GEN_THISCALL F_007aa2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7aa2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_0055a300(*(undefined * PTR32 *)this GEN_EDX_FWD,param_1);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,param_1);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x38) GEN_EDX_ARG,param_1);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG,param_1);
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0xdc) GEN_EDX_ARG,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007aa330 */
GEN_FRAME uint GEN_THISCALL F_007aa330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7aa330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_FWD,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007aa340 */
GEN_NOFRAME uint GEN_THISCALL F_007aa340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aa340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cca24));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10cca10));
  *(undefined4 *)((int)this + 0x184) = 0x10001;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
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
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
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
  F_007aa110((int)this + 0x220 GEN_EDX_ARG);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc0;
  F_0055e2a0(this GEN_EDX_ARG,0x4000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonItemDetail::vf5 */
GEN_FRAME uint GEN_THISCALL F_007aa4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7aa4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  if ((*(byte *)(uVar1 + 0x1bc) & 4) != 0) {
    uVar1 = F_005a89b0(this GEN_EDX_ARG,param_1,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonItemDetail::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007aa510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aa510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00590210(this + 0x24 GEN_EDX_FWD,0x54,100);
  F_00590210(this + 0x24 GEN_EDX_ARG,0x50,100);
  F_00590210(this + 0x24 GEN_EDX_ARG,0x55,100);
  F_005a92d0(this GEN_EDX_ARG,1,0x1d,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x1a,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonItemDetail::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007aa560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aa560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ItemDetail",1,6);
  return bVar1;
}

/* ref: FUN_007aa570 */
GEN_FRAME uint GEN_THISCALL F_007aa570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aa570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) & 2) != 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x200) GEN_EDX_FWD,1);
    uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x200) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8)))
                        );
    return uVar2;
  }
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x200) GEN_EDX_ARG,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007aa5c0 */
GEN_FRAME uint GEN_THISCALL F_007aa5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aa5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) & 4) != 0) {
    uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x1b0) GEN_EDX_FWD,
                         *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34))));
  }
  return uVar1;
}

/* ref: FUN_007aa5f0 */
GEN_FRAME uint GEN_THISCALL F_007aa5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aa5f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) & 0x80) == 0) {
    bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1fc) GEN_EDX_FWD,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1fc) GEN_EDX_ARG,1);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_007aa620 */
GEN_FRAME uint GEN_THISCALL F_007aa620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aa620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  ushort uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined2 extraout_var_00 = 0;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) & 0x100) == 0) {
    bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x204) GEN_EDX_FWD,0);
    return CONCAT31(extraout_var,bVar1);
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x204) GEN_EDX_ARG,1);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x208) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x38))));
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = REFG(undefined4, 0x108cc50);
  uVar3 = F_0055aaf0(*(undefined4 *)((int)this + 0x208) GEN_EDX_ARG);
  F_00577d20(*(undefined * PTR32 *)((int)this + 0x208) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),((ushort *)(gen_frame + 0x8)),uVar3,uVar5,uVar6,uVar7);
  fVar4 = F_00559d80(*(undefined4 *)((int)this + 0x208) GEN_EDX_ARG);
  uVar2 = F_0055a080(*(undefined4 *)((int)this + 0x204) GEN_EDX_ARG,
                       (int)TRUNC((float10)((ushort *)(gen_frame + 0x8))[0] + fVar4) & 0xffff);
  return CONCAT22(extraout_var_00,uVar2);
}

/* ref: FUN_007aa6e0 */
GEN_FRAME uint GEN_THISCALL F_007aa6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aa6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  char * pcVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined3 extraout_var = 0;
  char * pcVar6;
  undefined2 extraout_var_00 = 0;
  float10 fVar7;
  
  if ((*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) & 0x200) == 0) {
    bVar3 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x20c) GEN_EDX_FWD,0);
    return CONCAT31(extraout_var,bVar3);
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x20c) GEN_EDX_ARG,1);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x214) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x3c))));
  pcVar2 = *((char * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x40)));
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (pcVar6 == pcVar2 + 1) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x218) GEN_EDX_ARG,0);
    uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x210) GEN_EDX_ARG);
    fVar7 = F_00559d80(*(undefined4 *)((int)this + 0x210) GEN_EDX_ARG);
    fVar7 = fVar7 + (float10)uVar4;
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x218) GEN_EDX_ARG,1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x21c) GEN_EDX_ARG,pcVar2);
    uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x210) GEN_EDX_ARG);
    fVar7 = F_00559d80(*(undefined4 *)((int)this + 0x210) GEN_EDX_ARG);
    uVar5 = F_0055a030(*(undefined4 *)((int)this + 0x218) GEN_EDX_ARG);
    fVar7 = (float10)uVar5 + (float10)(double)(fVar7 + (float10)uVar4);
  }
  uVar4 = F_0055a080(*(undefined4 *)((int)this + 0x20c) GEN_EDX_ARG,(int)fVar7 & 0xffff);
  return CONCAT22(extraout_var_00,uVar4);
}

/* ref: FUN_007aa7f0 */
GEN_FRAME uint GEN_THISCALL F_007aa7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aa7f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  if ((*((byte *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x10))) & 0x40) == 0) {
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x224) GEN_EDX_FWD,0);
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x22c) GEN_EDX_ARG,0);
    bVar2 = F_0055a300(*(undefined * PTR32 *)(param_1 + 600) GEN_EDX_ARG,0);
    return CONCAT31(extraout_var,bVar2);
  }
  F_0055a300(*(undefined * PTR32 *)(param_1 + 600) GEN_EDX_ARG,1);
  uVar6 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x44)));
  uVar4 = F_0055da10(*(undefined4 *)(param_1 + 0x25c));
  F_0058f730((undefined *)(uVar4 + 4) GEN_EDX_ARG,uVar6,0,6);
  uVar6 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x40)));
  F_0055dcb0();
  uVar4 = F_0056a410(uVar6);
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x260) GEN_EDX_ARG,uVar4);
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x264) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x5c))));
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x268) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x60))));
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x26c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 100))));
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x270) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x68))));
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x278) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x6c))));
  if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x58))) < 1) {
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x27c) GEN_EDX_ARG,0);
    uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x274) GEN_EDX_ARG);
    fVar5 = F_00559d80(*(undefined4 *)(param_1 + 0x274) GEN_EDX_ARG);
    fVar5 = fVar5 + (float10)uVar3;
  }
  else {
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x27c) GEN_EDX_ARG,1);
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x284) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x70))));
    uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x27c) GEN_EDX_ARG);
    fVar5 = F_00559d80(*(undefined4 *)(param_1 + 0x27c) GEN_EDX_ARG);
    fVar5 = fVar5 + (float10)uVar3;
  }
  F_00559f00(*(undefined4 *)(param_1 + 0x288) GEN_EDX_ARG,(float)fVar5);
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x288) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x74))));
  uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x288) GEN_EDX_ARG);
  fVar5 = F_00559d80(*(undefined4 *)(param_1 + 0x288) GEN_EDX_ARG);
  F_0055a080(*(undefined4 *)(param_1 + 600) GEN_EDX_ARG,(int)TRUNC(fVar5 + (float10)uVar3) & 0xffff);
  iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x48)));
  F_0055a300(*(undefined * PTR32 *)(param_1 + 0x224) GEN_EDX_ARG,1);
  if (iVar1 == 100) {
    uVar6 = 0x65;
  }
  else {
    uVar6 = 0x13;
  }
  F_0059d640(*(undefined * PTR32 *)(param_1 + 0x224) GEN_EDX_ARG,uVar6);
  F_00568250(*(undefined4 *)(param_1 + 0x228) GEN_EDX_ARG,
               (float)((float10)iVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x4c)));
  F_0055a300(*(undefined * PTR32 *)(param_1 + 0x22c) GEN_EDX_ARG,1);
  if (iVar1 == 0) {
    uVar6 = 0x66;
  }
  else if (iVar1 == 100) {
    uVar6 = 0x65;
  }
  else {
    uVar6 = 0x13;
  }
  F_0059d640(*(undefined * PTR32 *)(param_1 + 0x22c) GEN_EDX_ARG,uVar6);
  uVar4 = F_00568250(*(undefined4 *)(param_1 + 0x230) GEN_EDX_ARG,
                       (float)((float10)iVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  return uVar4;
}

/* ref: FUN_007aaa80 */
GEN_FRAME uint GEN_THISCALL F_007aaa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aaa80u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  uint local_c;
  
  uVar3 = *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x10)));
  iVar4 = param_1[0x65];
  uVar2 = F_0055a2d0(param_1[0x72] GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    iVar4 = param_1[0x72];
  }
  if ((char)uVar3 < '\0') {
    if ((uVar3 & 0x8000) != 0) {
      uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
      fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
      uVar2 = F_00559f00(param_1[0x8e] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x8e];
    }
    if ((uVar3 & 0x100) != 0) {
      uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
      fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
      uVar2 = F_00559f00(param_1[0x81] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x81];
    }
    if ((uVar3 & 0x200) != 0) {
      uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
      fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
      uVar2 = F_00559f00(param_1[0x83] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x83];
    }
    if ((uVar3 & 2) != 0) {
      uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
      fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
      uVar2 = F_00559f00(param_1[0x6f] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x6f];
    }
  }
  else if ((uVar3 & 8) != 0) {
    uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
    fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
    uVar2 = F_00559f00(param_1[0x8e] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
    iVar4 = param_1[0x8e];
    if ((uVar3 & 2) != 0) {
      uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
      fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
      uVar2 = F_00559f00(param_1[0x6f] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x6f];
    }
    if ((uVar3 & 0x10) != 0) {
      uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
      fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
      uVar2 = F_00559f00(param_1[0xbf] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0xbf];
    }
    if ((uVar3 & 0x20) != 0) {
      uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
      fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
      uVar2 = F_00559f00(param_1[0xa4] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0xa4];
    }
    if ((uVar3 & 0x40) != 0) {
      uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
      fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
      uVar2 = F_00559f00(param_1[0x96] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x96];
    }
  }
  if ((uVar3 & 4) != 0) {
    uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
    fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
    uVar2 = F_00559f00(param_1[0x6d] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
    iVar4 = param_1[0x6d];
  }
  if ((uVar3 & 1) != 0) {
    uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
    fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
    uVar2 = F_00559f00(param_1[0x71] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
    iVar4 = param_1[0x71];
  }
  if (iVar4 != 0) {
    uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
    fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
    F_00559f00(param_1[100] GEN_EDX_ARG,(float)(fVar5 + (float10)uVar1));
    iVar4 = param_1[100];
    uVar1 = F_0055a030(iVar4 GEN_EDX_ARG);
    fVar5 = F_00559d80(iVar4 GEN_EDX_ARG);
    iVar4 = *param_1;
    local_c = (uint)(longlong)TRUNC((fVar5 + (float10)uVar1) + (float10)*(double *)&REFG(undefined, 0x10944e0));
    uVar3 = local_c & 0xfffffffc;
    uVar1 = F_0055a020(param_1[99] GEN_EDX_ARG);
    uVar2 = ((code *)*(gen_code32 *)(iVar4 + 0x4c))(param_1,(uint)uVar1,uVar3);
  }
  return uVar2;
}

/* ref: FUN_007aae10 */
GEN_FRAME ushort GEN_THISCALL F_007aae10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7aae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG,param_1,param_2);
  F_0056b300(this GEN_EDX_ARG,param_3);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG);
  *(short *)((int)this + 0x188) = (short)uVar4 - (short)uVar2;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG);
  uVar1 = (short)uVar2 - (short)uVar3;
  *(ushort *)((int)this + 0x18a) = uVar1;
  return uVar1;
}

/* ref: FUN_007aae80 */
GEN_FRAME uint GEN_STDCALL F_007aae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aae80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  if (param_1 < 0) {
    return 0x6a;
  }
  iVar1 = param_1;
  if (4 < param_1) {
    iVar1 = 4;
  }
  if ((char)param_2 == '\x01') {
    return *(uint *)(&REFG(undefined, 0x10ccb30) + iVar1 * 4);
  }
  return *(uint *)(&REFG(undefined, 0x10ccb1c) + iVar1 * 4);
}

/* ref: FUN_007aaec0 */
GEN_FRAME byte GEN_THISCALL F_007aaec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7aaec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  short sVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int *)(gen_frame + 0xc)) = (int)*(char *)(param_2 + 10);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0xb);
  sVar2 = *(short *)(param_2 + 8);
  iVar4 = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 3;
  (*(int *)(gen_frame + 0x1c)) = (int)cVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = 3;
  (*(int *)(gen_frame + 0x24)) = (int)sVar2;
  uVar3 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x29,4,&(*(undefined4 *)(gen_frame + 0x8)));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007aaf60 */
GEN_FRAME uint GEN_THISCALL F_007aaf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aaf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110((undefined *)((int)this - 0x180) GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 0x180) + 0x18))))((int)this - 0x180,1,0);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonItemDetail::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_007aafc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aafc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (int)*(short *)(this + 0x12a) - (int)*(short *)(this + 0x188);
}

/* ref: Client::UI2::AddonItemDetail::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_007aafe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aafe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (int)*(short *)(this + 300) - (int)*(short *)(this + 0x18a);
}

/* ref: FUN_007ab010 */
GEN_FRAME uint F_007ab010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ab010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0057f810(*(undefined * PTR32 *)(param_1 + 0x14) GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_007ab030 */
GEN_FRAME uint F_007ab030(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ab030u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if ((GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_3 == *(float *)&REFG(undefined, 0x1088114))) {
    uVar1 = F_00568230(param_1 GEN_EDX_ARG,param_3);
    return uVar1;
  }
  uVar1 = F_00568230(param_1 GEN_EDX_ARG,(float)((float10)param_2 / (float10)param_3));
  return uVar1;
}

/* ref: FUN_007ab070 */
GEN_FRAME uint F_007ab070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab070u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x70);
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 7: ;
    if ((((char)param_3 == '\0') || (iVar1 == 0)) || ((*(byte *)(iVar1 + 0x88) & 0x20) == 0)) {
      return (uint)*(byte *)(param_1 + 0x7b);
    }
    break;
  case 8: ;
    if ((((char)param_3 == '\0') || (iVar1 == 0)) || ((*(byte *)(iVar1 + 0x88) & 0x40) == 0))
    goto switchD_007ab08c_default;
    break;
  case 9: ;
    if ((((char)param_3 == '\0') || (iVar1 == 0)) || ((*(byte *)(iVar1 + 0x88) & 8) == 0)) {
      return (uint)*(byte *)(param_1 + 0x79);
    }
    break;
  case 10: ;
    if ((((char)param_3 == '\0') || (iVar1 == 0)) || ((*(byte *)(iVar1 + 0x88) & 0x10) == 0)) {
      return (uint)*(byte *)(param_1 + 0x7a);
    }
    break;
  default: ;
switchD_007ab08c_default: ;
    return (uint)*(byte *)(param_1 + 0x7c);
  }
  return 0xffffffff;
}

/* ref: FUN_007ab110 */
GEN_NOFRAME uint GEN_THISCALL F_007ab110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccb4c));
  pvVar2 = (undefined *)((int)this + 0x9c4);
  iVar3 = 0x3d;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 8);
    F_005a2670(pvVar2 GEN_EDX_FWD);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 2000);
  iVar3 = 0xd;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x5c);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00590cc0((undefined *)((int)this + 0x284) GEN_EDX_ARG);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf36 */
GEN_NOFRAME byte GEN_THISCALL F_007ab170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  bVar1 = F_00560e80(this + 0x284 GEN_EDX_ARG,this);
  return bVar1;
}

/* ref: Client::UI2::AddonCharacter::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007ab190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  F_00588e00(this + 0x284 GEN_EDX_FWD,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1b0) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
    }
    uVar1 = F_0055dcb0();
    F_00596b10((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,uVar3);
    if (*(int *)(this + 0x1b8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x70)));
    }
    uVar1 = F_0055dcb0();
    F_00596b10((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,uVar3);
    if (*(int *)(this + 0x1a8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
    }
    uVar1 = F_0055dcb0();
    F_00596b10((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,uVar3);
    uVar1 = F_0055dcb0();
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c0) + 0x38))))(*(int * PTR32 *)(this + 0x1c0) GEN_EDX_ARG);
    F_00596b10((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,uVar2);
    uVar1 = F_0055dcb0();
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c4) + 0x38))))(*(int * PTR32 *)(this + 0x1c4) GEN_EDX_ARG);
    F_00596b10((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,uVar2);
    uVar1 = F_0055dcb0();
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c8) + 0x38))))(*(int * PTR32 *)(this + 0x1c8) GEN_EDX_ARG);
    F_00596b10((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,uVar2);
  }
  F_005a92d0(this GEN_EDX_ARG,0,2,0);
  F_005a92d0(this GEN_EDX_ARG,1,3,0);
  F_005a92d0(this GEN_EDX_ARG,0,7,0);
  F_005a92d0(this GEN_EDX_ARG,1,8,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x38,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x3d,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf38 */
GEN_FRAME uint GEN_THISCALL F_007ab2e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7ab2e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x284 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007ab310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this GEN_EDX_FWD);
  F_00588c10(this + 0x284 GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::AddonCharacter::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007ab330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Character",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharacter::vf5 */
GEN_FRAME uint GEN_THISCALL F_007ab340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ab340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0059bc90(this + 0x284 GEN_EDX_FWD);
  uVar1 = F_005a89b0(this GEN_EDX_ARG,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf6 */
GEN_FRAME uint GEN_THISCALL F_007ab370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00580f10(this + 0x284 GEN_EDX_FWD,param_2,0);
  uVar1 = F_005b0610(this GEN_EDX_ARG,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf46 */
GEN_FRAME byte GEN_THISCALL F_007ab3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (0 < param_1) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 2000) = uVar1;
    if (*(undefined * PTR32 *)(this + 0x1bc) != (undefined *)0x0) {
      F_00591c80(*(undefined * PTR32 *)(this + 0x1bc) GEN_EDX_FWD,uVar1);
    }
  }
  return 1;
}

/* ref: FUN_007ab3d0 */
GEN_FRAME uint GEN_THISCALL F_007ab3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ab3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2 GEN_EDX_FWD)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = *puVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)(gen_frame + 0x4));
  uVar1 = puVar2[1];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  uVar3 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000;
  *(undefined1 *)(param_1 + 0x15) = 1;
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007ab4b0 */
GEN_FRAME uint GEN_THISCALL F_007ab4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ab4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0xc)) = param_3;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x2c))((int *)*param_2 GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2 GEN_EDX_ARG);
    bVar1 = *(byte *)(param_1 + 7);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0xc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x24)) = bVar1 & 1;
    bVar1 = *(byte *)((int)this + 0x13a);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x2c)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x24,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    piVar2 = *(int * PTR32 *)((int)this + (*(int *)(gen_frame + 0xc)) * 4 + 0x1d4);
    uVar6 = 0;
    uVar5 = 1;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2 GEN_EDX_ARG);
    F_0059b340(this GEN_EDX_ARG,uVar3,uVar5,uVar6);
    iVar4 = 4;
    this_00 = &(*(uint *)(gen_frame + 0x38));
    do {
      this_00 = this_00 - 2;
      uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007ab5b0 */
GEN_FRAME uint GEN_THISCALL F_007ab5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ab5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0x10;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf25 */
GEN_FRAME uint GEN_THISCALL F_007ab620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007ab660 */
GEN_NOFRAME uint GEN_THISCALL F_007ab660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ab660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,0);
  *(undefined4 *)((int)this + 0x7c8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_007ab690 */
GEN_FRAME uint GEN_THISCALL F_007ab690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ab690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007ab6d0 */
GEN_NOFRAME uint GEN_THISCALL F_007ab6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b9e0(uVar1 GEN_EDX_ARG);
  puVar3 = (uint *)((int)this + 0x20c);
  uVar2 = 0;
  do {
    if (uVar1 == *puVar3) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)uVar2 < 0xe);
  return 0xffffffff;
}

/* ref: FUN_007ab710 */
GEN_FRAME unsigned int GEN_THISCALL F_007ab710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    F_0056b780(this GEN_EDX_FWD,0);
  }
  return;
}

/* ref: FUN_007ab730 */
GEN_FRAME byte GEN_THISCALL F_007ab730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00573130((int)this + 0x24,param_1,1,0);
  if (uVar1 != 0) {
    F_0059b390(this GEN_EDX_ARG,uVar1,1,param_2);
    return 1;
  }
  return 0;
}

/* ref: FUN_007ab770 */
GEN_FRAME byte GEN_THISCALL F_007ab770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0xe) {
    F_0059b340(this GEN_EDX_FWD,*(undefined4 *)((int)this + param_1 * 4 + 0x20c),1,param_2);
    return 1;
  }
  return 0;
}

/* ref: FUN_007ab7a0 */
GEN_NOFRAME uint GEN_THISCALL F_007ab7a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccc4c));
  F_0090a490((undefined *)((int)this + 0x180) GEN_EDX_ARG);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterStatus::vf37 */
GEN_FRAME uint GEN_THISCALL F_007ab7e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  F_005a92d0(this GEN_EDX_FWD,1,3,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x3d,0);
  pAVar3 = this + 0x1d0;
  local_8 = 0x1f;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar1 = F_0055dcb0();
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3 GEN_EDX_ARG);
      F_00596b10((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,uVar2);
    }
    pAVar3 = pAVar3 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterStatus::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007ab850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CharacterStatus",0,6);
  return bVar1;
}

/* ref: FUN_007ab860 */
GEN_FRAME uint GEN_THISCALL F_007ab860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xd;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007ab8a0 */
GEN_NOFRAME uint GEN_THISCALL F_007ab8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccd4c));
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
  iVar1 = 0;
  *(undefined2 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x6e4) = 0;
  puVar2 = (undefined4 *)((int)this + 0x2e4);
  do {
    *(undefined1 *)((int)this + iVar1 + 0x1e0) = 0;
    *puVar2 = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x100);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterProfile::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007ab990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,3,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x38,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x3d,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterProfile::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007ab9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ab9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CharacterProfile",0,6);
  return bVar1;
}

/* ref: FUN_007ab9d0 */
GEN_FRAME uint GEN_THISCALL F_007ab9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  iVar3 = *(int *)(param_2 + 8);
  uVar2 = 0;
  if ((-1 < iVar3) && (*(int *)((int)this + 0x6e4) != iVar3)) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    bVar1 = *(byte *)(iVar3 + 0x1e0 + (int)this);
    (*(undefined4 *)(gen_frame + 0x10)) = 0xf;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x18)) = (uint)bVar1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    *(int *)((int)this + 0x6e4) = iVar3;
    iVar3 = 1;
    do {
      this_00 = this_00 - 8;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007aba60 */
GEN_NOFRAME uint GEN_THISCALL F_007aba60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aba60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cce4c));
  F_0090a540((undefined *)((int)this + 0x180) GEN_EDX_ARG);
  puVar1 = (undefined4 *)((int)this + 0x23c);
  iVar2 = 0x12;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterClass::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007abac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7abac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x3d,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterClass::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007abae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7abae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CharacterClass",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharacterClass::vf47 */
GEN_FRAME uint GEN_THISCALL F_007abaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7abaf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  undefined * pAVar6;
  int local_8;
  
  iVar1 = *(int *)((int)param_1 + 0xf4);
  pAVar6 = this + 0x180;
  local_8 = 0x13;
  param_1 = this + 0x244;
  do {
    iVar2 = *((int *)GEN_TOP((pAVar6 + *(int *)(iVar1 + 0x20) + (0x404 - (int)this))));
    pvVar4 = (undefined *)F_00561550(*(undefined * PTR32 *)pAVar6 GEN_EDX_FWD,3);
    F_00591c00(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((pAVar6 + *(int *)(iVar1 + 0x20) + (0x3b8 - (int)this)))),0);
    pvVar4 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar6 GEN_EDX_ARG,2);
    F_0057eb30(pvVar4 GEN_EDX_ARG,iVar2,0,0,0,0);
    pvVar4 = (undefined *)F_00561550(*(undefined * PTR32 *)pAVar6 GEN_EDX_ARG,5);
    F_0055a300(pvVar4 GEN_EDX_ARG,1);
    F_00568230(pvVar4 GEN_EDX_ARG,((float)GEN_TOF(((float10)*((int *)GEN_TOP((pAVar6 + *(int *)(iVar1 + 0x20) +
                                                           (0x49c - (int)this)))) *
                               (float10)*(double *)&REFG(undefined, 0x10928e8)))));
    *(int *)(param_1 - 8) = iVar2;
    *(undefined4 *)(param_1 - 4) =
         *((undefined4 *)GEN_TOP((pAVar6 + *(int *)(iVar1 + 0x20) + (0x450 - (int)this))));
    *(undefined4 *)param_1 = *((undefined4 *)GEN_TOP((pAVar6 + *(int *)(iVar1 + 0x20) + (0x4e8 - (int)this))));
    uVar5 = 0x11;
    if (iVar2 == 0) {
      uVar5 = 7;
    }
    F_0059d670(*(undefined * PTR32 *)(pAVar6 + 0x4c) GEN_EDX_ARG,uVar5);
    param_1 = param_1 + 0xc;
    pAVar6 = pAVar6 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar5 = 0;
  pvVar4 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,0x43);
  bVar3 = F_0055a300(pvVar4 GEN_EDX_ARG,uVar5);
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_007abc40 */
GEN_FRAME uint GEN_THISCALL F_007abc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7abc40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_3;
  if (param_3 - 1 < 0x13) {
    uVar1 = (uint)(0 < *(int *)((int)this + param_3 * 0xc + 0x230));
    this_00 = (undefined *)F_0055e2f0(this GEN_EDX_FWD,0x4b);
    F_0055a300(this_00 GEN_EDX_ARG,uVar1);
    F_0057eb30(*(undefined * PTR32 *)((int)this + 0x238) GEN_EDX_ARG,*(undefined4 *)((int)this + param_3 * 0xc + 0x238),0,
                 0,0,0);
    uVar1 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x234) GEN_EDX_ARG,
                         *(undefined4 *)((int)this + param_3 * 0xc + 0x234),0,0,0,0);
  }
  return uVar1;
}

/* ref: FUN_007abcd0 */
GEN_FRAME byte GEN_THISCALL F_007abcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7abcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((param_1 < 0x13) && ((*(byte *)((int)this + 0xf9) & 1) != 0)) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x180);
    uVar3 = 1;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_FWD);
    F_0059b340(this GEN_EDX_ARG,uVar2,uVar3,param_2);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonCharacterCurrency::vf37 */
GEN_FRAME uint GEN_THISCALL F_007abd30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7abd30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  int local_8;
  
  F_005a92d0(this GEN_EDX_FWD,0,0x38,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x3d,0);
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)(uVar2 + 0xe0);
  if (*(int *)(this + 0x184) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x38))))(*(int * PTR32 *)(this + 0x184) GEN_EDX_ARG);
    F_00596b10(this_00 GEN_EDX_ARG,uVar2);
  }
  pAVar4 = this + 400;
  local_8 = 2;
  do {
    piVar1 = *(int * PTR32 *)pAVar4;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1 GEN_EDX_ARG);
      F_00596b10(this_00 GEN_EDX_ARG,uVar2);
    }
    pAVar4 = pAVar4 + 0x10;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pAVar4 = this + 0x1b4;
  iVar3 = 3;
  do {
    piVar1 = *(int * PTR32 *)pAVar4;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1 GEN_EDX_ARG);
      F_00596b10(this_00 GEN_EDX_ARG,uVar2);
    }
    pAVar4 = pAVar4 + 0xc;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonCharacterCurrency::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007abdf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7abdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CharacterCurrency",1,6);
  return bVar1;
}

/* ref: FUN_007abe00 */
GEN_FRAME uint GEN_THISCALL F_007abe00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7abe00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  char * pcVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar3 = *(int *)((int)this + 400);
  uVar4 = *(undefined4 *)(iVar3 + 0x78);
  uVar5 = *(undefined4 *)(iVar3 + 0x7c);
  uVar1 = *(undefined1 *)(iVar3 + 0x80);
  (*(char * PTR32 *)(gen_frame + 0x14)) = &(*(char *)(gen_frame + 0x24));
  (*(int *)(gen_frame + 0x18)) = 1;
  do {
    F_0055b060((*(char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_FWD);
    (*(char * PTR32 *)(gen_frame + 0x14)) = (*(char * PTR32 *)(gen_frame + 0x14)) + 9;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) - 1;
  } while (-1 < (*(int *)(gen_frame + 0x18)));
  (*(char *)(gen_frame + 0x8)) = (char)uVar4;
  (*(char *)(gen_frame + 0x27)) = (char)((uint)uVar4 >> 0x18);
  (*(char *)(gen_frame + 0x24)) = (*(char *)(gen_frame + 0x8));
  (*(undefined1 *)(gen_frame + 0x2c)) = uVar1;
  (*(undefined1 *)(gen_frame + 0x35)) = uVar1;
  (*(char *)(gen_frame + 0x25)) = (*(char *)(gen_frame + 0x8)) - 1;
  (*(char *)(gen_frame + 0x26)) = (*(char *)(gen_frame + 0x8)) + '\x01';
  (*(char *)(gen_frame + 0x2d)) = (*(char *)(gen_frame + 0x8)) + '\x01';
  (*(undefined4 *)(gen_frame + 0x28)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x31)) = uVar5;
  (*(char *)(gen_frame + 0x2e)) = (*(char *)(gen_frame + 0x8));
  (*(char *)(gen_frame + 0x2f)) = (*(char *)(gen_frame + 0x8)) + '\x02';
  (*(char *)(gen_frame + 0x25)) = *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x78)));
  (*(char *)(gen_frame + 0x2f)) = *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x78)));
  pcVar9 = &(*(char *)(gen_frame + 0x24));
  puVar11 = (undefined4 *)((int)this + 400);
  (*(int *)(gen_frame + 0x18)) = 2;
  (*(char *)(gen_frame + 0x30)) = (*(char *)(gen_frame + 0x27));
  do {
    F_00561740((undefined *)*puVar11 GEN_EDX_ARG,pcVar9,0);
    puVar11 = puVar11 + 4;
    pcVar9 = pcVar9 + 9;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) - 1;
  } while ((*(int *)(gen_frame + 0x18)) != 0);
  iVar3 = *(int *)((int)this + 0x1b4);
  uVar4 = *(undefined4 *)(iVar3 + 0x78);
  uVar5 = *(undefined4 *)(iVar3 + 0x7c);
  cVar2 = *(char *)(iVar3 + 0x80);
  (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)&(*(undefined4 *)(gen_frame + 0x1c));
  (*(int *)(gen_frame + 0x18)) = 2;
  do {
    F_0055b060((*(char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x14)) + 9);
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) - 1;
  } while (-1 < (*(int *)(gen_frame + 0x18)));
  (*(char *)(gen_frame + 0x8)) = (char)uVar4;
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar4;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1c)) + 0)) = (*(char *)(gen_frame + 0x8));
  uVar6 = (undefined1)((uint)uVar4 >> 0x18);
  (*(char *)(gen_frame + 0x24)) = cVar2;
  cVar7 = (*(char *)(gen_frame + 0x8)) + '\x01';
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1c)) + 1)) = (*(char *)(gen_frame + 0x8)) - 1;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1c)) + 2)) = cVar7;
  (*(char *)(gen_frame + 0x25)) = cVar7;
  (*(char *)(gen_frame + 0x2d)) = cVar2;
  (*(char *)(gen_frame + 0x36)) = cVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = uVar5;
  (*(char *)(gen_frame + 0x27)) = (*(char *)(gen_frame + 0x8)) + '\x02';
  (*(char *)(gen_frame + 0x2e)) = (*(char *)(gen_frame + 0x8)) + '\x02';
  (*(char *)(gen_frame + 0x26)) = (*(char *)(gen_frame + 0x8));
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x28)), 1, 3, (unsigned long long)((undefined3)uVar5));
  (*(undefined4 *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x28)), 1, 3),uVar6);
  (*(undefined1 *)(gen_frame + 0x2c)) = (undefined1)((uint)uVar5 >> 0x18);
  (*(undefined4 *)(gen_frame + 0x31)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x28)), 1, 3),uVar6);
  (*(char *)(gen_frame + 0x2f)) = cVar7;
  iVar3 = *(int *)((int)this + 0x184);
  (*(char *)(gen_frame + 0x30)) = (*(char *)(gen_frame + 0x8)) + '\x03';
  uVar1 = *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x78)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1c)) + 1)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x1c)) = CONCAT22(CONCAT11(uVar6,cVar7),CONCAT11(uVar1,(*(char *)(gen_frame + 0x8))));
  (*(char *)(gen_frame + 0x30)) = *(undefined1 *)(iVar3 + 0x78);
  puVar11 = &(*(undefined4 *)(gen_frame + 0x1c));
  puVar10 = (undefined4 *)((int)this + 0x1b4);
  (*(int *)(gen_frame + 0x18)) = 3;
  (*(undefined1 *)(gen_frame + 0x35)) = (*(undefined1 *)(gen_frame + 0x2c));
  do {
    uVar8 = F_00561740((undefined *)*puVar10 GEN_EDX_ARG,puVar11,0);
    puVar11 = (undefined4 *)((int)puVar11 + 9);
    puVar10 = puVar10 + 3;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) - 1;
  } while ((*(int *)(gen_frame + 0x18)) != 0);
  if ((*(int *)((int)this + 0x1cc) != 0) &&
     (uVar8 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1cc) + 0x70))), uVar8 != 0)) {
    *(uint *)(uVar8 + 0x88) = *(uint *)(uVar8 + 0x88) | 0x10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar8;
}

/* ref: FUN_007abfc0 */
GEN_NOFRAME uint GEN_THISCALL F_007abfc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7abfc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd04c));
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1b8);
  iVar2 = 0xe;
  do {
    puVar1[-0xe] = 0;
    *puVar1 = 0;
    puVar1[0xe] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterInspect::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007ac0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ac0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CharacterInspect",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharacterInspect::vf2 */
GEN_FRAME uint GEN_THISCALL F_007ac0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ac0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 6) {
    if (param_2 != 6) {
      return 0;
    }
    F_0055a300(*(undefined * PTR32 *)(this + 0x24c) GEN_EDX_FWD,1);
    uVar2 = 1;
  }
  else {
    if (uVar1 != 7) {
      if (uVar1 - 0x17 != 0) {
        return uVar1 - 0x17;
      }
      if (param_2 != 0x1b) {
        return 0;
      }
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
      F_00557670(param_3 GEN_EDX_ARG,0);
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      return uVar1;
    }
    if (param_2 != 6) {
      return 0;
    }
    F_0055a300(*(undefined * PTR32 *)(this + 0x24c) GEN_EDX_ARG,0);
    uVar2 = 0;
  }
  F_0055a300(*(undefined * PTR32 *)(this + 0x250) GEN_EDX_ARG,uVar2);
  uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterInspect::vf25 */
GEN_FRAME uint GEN_THISCALL F_007ac160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ac160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007ac190 */
GEN_FRAME uint GEN_THISCALL F_007ac190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ac190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x268) GEN_EDX_FWD,1);
  if (((*(byte *)(param_1 + 0xe8) & 0xf) != 0) && (*(int *)(param_1 + 0xec) != 0)) {
    uVar3 = F_0055dcb0();
    F_00560760(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x274) GEN_EDX_ARG,1);
    if ((*(byte *)(param_1 + 0xf8) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0xfc);
    }
    F_005600b0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
    if ((*(byte *)(param_1 + 0x100) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x104);
    }
    F_00560080(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
    F_005959f0(*(undefined * PTR32 *)((int)this + 0x274) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    if ((*(byte *)(param_1 + 0x108) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x10c);
    }
    bVar2 = F_005842e0(*(undefined * PTR32 *)((int)this + 0x26c) GEN_EDX_ARG,uVar4,0);
    if (bVar2 != 0) {
      if ((*(byte *)(param_1 + 0x108) & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x10c);
      }
      uVar1 = *(undefined4 *)((int)this + 0x278);
      ((undefined4 *)(gen_frame + 0x8))[0] = uVar4;
      F_00590ad0((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,2,(uint)*(byte *)((int)this + 0x13a),uVar1,((undefined4 *)(gen_frame + 0x8)));
    }
    if ((*(byte *)(param_1 + 0x110) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x114);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x270) GEN_EDX_ARG,uVar4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x27c) + 0x28))))(*(int * PTR32 *)((int)this + 0x27c) GEN_EDX_ARG,1);
    uVar3 = F_0059d670(*(undefined * PTR32 *)((int)this + 0x268) GEN_EDX_ARG,0x11);
    return uVar3;
  }
  uVar3 = F_0059d670(*(undefined * PTR32 *)((int)this + 0x268) GEN_EDX_ARG,0x65);
  return uVar3;
}

/* ref: FUN_007ac2e0 */
GEN_NOFRAME uint GEN_THISCALL F_007ac2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ac2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar2;
  
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x284) GEN_EDX_FWD,1);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x268) GEN_EDX_ARG,0);
  uVar2 = 0;
  this_00 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,0xf);
  bVar1 = F_0055a300(this_00 GEN_EDX_ARG,uVar2);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007ac320 */
GEN_FRAME uint GEN_THISCALL F_007ac320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ac320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x204);
  *(uint *)((int)this + 0x28c) = uVar1;
  if (*(undefined * PTR32 *)((int)this + 0x280) != (undefined *)0x0) {
    uVar1 = F_00591c80(*(undefined * PTR32 *)((int)this + 0x280) GEN_EDX_FWD,uVar1);
  }
  return uVar1;
}

/* ref: FUN_007ac350 */
GEN_NOFRAME uint GEN_THISCALL F_007ac350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ac350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd14c));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
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
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
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
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterBonus::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007ac480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ac480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CharacterBonus",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharacterBonus::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_007ac490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ac490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonCharacterBonus::vf25 */
GEN_FRAME uint GEN_THISCALL F_007ac4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ac4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007ac4e0 */
GEN_FRAME uint GEN_THISCALL F_007ac4e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ac4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_14;
  
  iVar6 = 0;
  piVar4 = (int *)((int)this + 0x1d8);
  iVar7 = 6;
  do {
    piVar4[0xe] = *piVar4;
    if (piVar4[-9] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar4[-9] + 0x178);
    }
    *piVar4 = iVar5;
    iVar6 = iVar6 + iVar5;
    piVar4 = piVar4 + 1;
    iVar7 = iVar7 - 1;
  } while (iVar7 != 0);
  uVar3 = *(int *)((int)this + 0x1f0) - iVar6;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d4) + 0x28))))(*(int * PTR32 *)((int)this + 0x1d4) GEN_EDX_FWD,0);
  piVar4 = (int *)((int)this + 0x1f8);
  local_14 = 6;
  do {
    this_00 = (undefined *)piVar4[-0x11];
    if (this_00 != (undefined *)0x0) {
      uVar2 = *(uint *)((int)this_00 + 0x178);
      uVar8 = *(int *)((int)this + 500) - *piVar4;
      uVar1 = uVar2 + uVar3;
      if (uVar2 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d4) + 0x28))))(*(int * PTR32 *)((int)this + 0x1d4) GEN_EDX_ARG,1);
      }
      if (piVar4[6] == uVar2) {
        if ((uVar1 <= uVar8) && (uVar8 = uVar2, 0 < (int)uVar3)) goto LAB_007ac5ae;
      }
      else if (uVar1 <= uVar8) {
LAB_007ac5ae: ;
        uVar8 = uVar1;
      }
      F_0059d070(this_00 GEN_EDX_ARG,uVar8,1,1);
    }
    piVar4 = piVar4 + 1;
    local_14 = local_14 - 1;
    if (local_14 == 0) {
      uVar3 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x180) GEN_EDX_ARG,((int)uVar3 < 0) - 1 & uVar3,0,0,0,0);
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_007ac630 */
GEN_FRAME unsigned int GEN_THISCALL F_007ac630(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7ac630u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return;
}

/* ref: FUN_007ac660 */
GEN_FRAME unsigned int GEN_THISCALL F_007ac660(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7ac660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x14) = param_2;
  *(undefined1 *)(in_ecx + 0x1c) = 1;
  return;
}

/* ref: FUN_007ac6e0 */
GEN_FRAME unsigned int GEN_THISCALL F_007ac6e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ac6e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 8) = param_2;
  *(float *)(in_ecx + 0xc) = param_3;
  return;
}

/* ref: FUN_007ac700 */
GEN_FRAME unsigned int GEN_THISCALL F_007ac700(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ac700u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x10) = param_2;
  *(float *)(in_ecx + 0x14) = param_3;
  return;
}

/* ref: FUN_007ac720 */
GEN_FRAME unsigned int GEN_THISCALL F_007ac720(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ac720u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x20) = param_2;
  *(float *)(in_ecx + 0x24) = param_3;
  return;
}

/* ref: FUN_007ac740 */
GEN_FRAME byte GEN_THISCALL F_007ac740(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7ac740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte in_AL = 0;
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x1c)) || GEN_ISNAN((float10)param_2);
  if (bVar1 == (bVar1 || (float10)*(float *)(in_ecx + 0x1c) == (float10)param_2)) {
    *(float *)(in_ecx + 0x1c) = param_2;
  }
  return in_AL;
}

/* ref: FUN_007ac770 */
GEN_FRAME ushort GEN_THISCALL F_007ac770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ac770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x30) = (ushort)param_1;
  *(undefined2 *)((int)this + 0x32) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_007ac790 */
GEN_FRAME unsigned int GEN_THISCALL F_007ac790(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ac790u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x28) = param_2;
  *(float *)(in_ecx + 0x2c) = param_3;
  return;
}

/* ref: FUN_007ac7d0 */
GEN_NOFRAME uint GEN_THISCALL F_007ac7d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ac7d0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*in_ecx != 0) {
    uVar1 = F_005647e0(*in_ecx GEN_EDX_FWD);
    uVar1 = F_0055a2d0(uVar1 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      switch((unsigned int)(uintptr_t)((short)in_ecx[3])) {
      case 1: ;
        return 2;
      case 2: ;
        return 1;
      case 3: ;
        return 3;
      case 4: ;
        uVar2 = 4;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_007ac840 */
GEN_NOFRAME uint GEN_THISCALL F_007ac840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ac840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 2;
  switch((unsigned int)(uintptr_t)(*(undefined2 *)(in_ecx + 0xc))) {
  case 1: ;
    return 1;
  case 3: ;
    return 3;
  case 4: ;
    uVar1 = 4;
  }
  return uVar1;
}

/* ref: FUN_007ac880 */
GEN_FRAME byte GEN_THISCALL F_007ac880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ac880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined4 uVar2;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    uVar2 = 2;
    if (*(short *)((int)this + 0xc) != 5) {
      uVar2 = param_3;
    }
    bVar1 = F_00576160(*(undefined * PTR32 *)this GEN_EDX_FWD,param_1,param_2,uVar2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_007ac8c0 */
GEN_FRAME uint GEN_THISCALL F_007ac8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ac8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    uVar1 = param_1 & 0xffff;
    this_00 = (undefined *)F_0057e1b0(*(undefined * PTR32 *)this GEN_EDX_FWD);
    in_EAX = F_0059d640(this_00 GEN_EDX_ARG,uVar1);
  }
  return in_EAX;
}

/* ref: FUN_007ac8e0 */
GEN_FRAME uint GEN_THISCALL F_007ac8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ac8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  pvVar1 = (undefined *)F_00564700(param_2 GEN_EDX_FWD);
  F_0055a300(pvVar1 GEN_EDX_ARG,uVar4);
  uVar4 = 0;
  uVar2 = F_00564700(param_2 GEN_EDX_ARG);
  F_0055a3c0(uVar2 GEN_EDX_ARG,uVar4);
  fVar5 = (float)(float10)1;
  fVar3 = (float)(float10)1;
  uVar2 = F_00564700(param_2 GEN_EDX_ARG);
  F_00568210(uVar2 GEN_EDX_ARG,fVar3,fVar5);
  uVar4 = 0;
  uVar2 = F_00564760(param_2 GEN_EDX_ARG);
  F_0055a4b0(uVar2 GEN_EDX_ARG,uVar4);
  fVar5 = (float)(float10)0;
  fVar3 = (float)(float10)0;
  uVar2 = F_0057e1b0(param_2 GEN_EDX_ARG);
  F_00559da0(uVar2 GEN_EDX_ARG,fVar3,fVar5);
  *(undefined * PTR32 *)this = param_2;
  uVar2 = (-(uint)(*(char *)((int)this + 0x19) != '\0') & 0xfffffffa) + 7 & 0xffff;
  if (param_2 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_0057e1b0(param_2 GEN_EDX_ARG);
    uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,uVar2);
  }
  return uVar2;
}

/* ref: FUN_007ac9a0 */
GEN_FRAME unsigned int GEN_THISCALL F_007ac9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x7ac9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float param_6 = (float)gen_a5;
  undefined * this;
  
  if (*param_1 != 0) {
    param_1[3] = param_2;
    if (((param_2 & 0xffff) == 0) || (4 < (param_2 & 0xffff))) {
      *(short *)(param_1 + 5) = (short)(int)((float10)param_6 * (float10)param_4);
      *(short *)((int)param_1 + 0x16) = (short)(int)((float10)param_6 * (float10)param_5);
    }
    else {
      *(undefined2 *)(param_1 + 5) = (undefined2)param_4;
      *(undefined2 *)((int)param_1 + 0x16) = (undefined2)param_5;
    }
    this = (undefined *)F_00564700(*param_1 GEN_EDX_FWD);
    F_0055a300(this GEN_EDX_ARG,1);
    F_00568350(this GEN_EDX_ARG,(float)(float10)0);
    F_005957c0((undefined *)*param_1 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_007aca30 */
GEN_FRAME uint GEN_THISCALL F_007aca30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7aca30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint in_EAX = 0;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint3 uVar7;
  byte * pbVar8;
  uint uVar9;
  undefined1 * this_00;
  bool bVar10;
  float10 fVar11;
  
  if (*(int *)(*(undefined * PTR32 *)&gen_args[0]) == 0) {
    return in_EAX;
  }
  if ((*(uint *)&gen_args[3]) < 2) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  else {
    fVar11 = (float10)(int)(*(uint *)&gen_args[3]);
    if ((int)(*(uint *)&gen_args[3]) < 0) {
      fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (float)(fVar11 / (float10)*(double *)&REFG(undefined, 0x1088118));
  }
  uVar9 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) & 0xffff;
  (*(uint *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[3]), 1, 3),(char)(*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) >> 0x11)) & 0xffffff01;
  if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0) {
    pbVar8 = &REFG(undefined1, 0x10be9df);
    pbVar3 = (*(byte * PTR32 *)&gen_args[2]);
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_007acab0: ;
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_007acab5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_007acab0;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_007acab5: ;
    if ((iVar4 != 0) && (uVar9 - 1 < 4)) {
      uVar5 = 1;
      goto LAB_007acaca;
    }
  }
  uVar5 = 0;
LAB_007acaca: ;
  *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (char)uVar5;
  if ((char)uVar5 == '\0') {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar9 != 9) - 1 & (uint)(*(byte * PTR32 *)&gen_args[2]);
  }
  else {
    (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[4]);
    piVar2 = *(int * PTR32 *)((*(int *)&gen_args[1]) + 0x38);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    (*(byte * PTR32 *)(gen_frame + 0x8)) = (*(byte * PTR32 *)&gen_args[2]);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    pbVar3 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x14)),0x2a,2,&(*(undefined4 *)(gen_frame + 0x4)))));
    if ((*pbVar3 & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(pbVar3 + 4);
    }
    F_0058c140(*(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar6);
    F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    uVar9 = F_007ac7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar5 = F_005647e0(*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    F_0057e2a0(*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar5,uVar9);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
    this_00 = ((undefined1 *)(gen_frame + 0x14));
    iVar4 = 1;
    do {
      this_00 = this_00 - 8;
      uVar5 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar7 = (uint3)(uVar5 >> 8);
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == '\0') || ((char)(*(undefined4 *)&gen_args[5]) == '\0')) {
    iVar4 = (uint)uVar7 << 8;
  }
  else {
    iVar4 = CONCAT31(uVar7,1);
  }
  F_0056f120(*(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar4);
  uVar9 = F_0057e1f0(*(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)&gen_args[3]));
  return uVar9;
}

/* ref: FUN_007acc60 */
GEN_NOFRAME uint GEN_THISCALL F_007acc60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7acc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10cd248));
  uVar1 = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x74));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  return uVar1;
}

/* ref: FUN_007acc90 */
GEN_FRAME uint GEN_THISCALL F_007acc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7acc90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  *(int *)(in_ecx + 0x70) = param_2;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x94);
    *(uint *)(in_ecx + 8) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007accb0 */
GEN_FRAME uint GEN_THISCALL F_007accb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7accb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 0x74) != 0) && ((*(uint *)&gen_a1) < *(ushort *)((int)this + 0x78))) {
    return *(int *)((int)this + 0x74) + (*(uint *)&gen_a1) * 0x1c;
  }
  return 0;
}

/* ref: FUN_007acce0 */
GEN_FRAME uint GEN_THISCALL F_007acce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7acce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  if (((*(int *)((int)this + 0x74) != 0) && ((*(uint *)&gen_a1) < *(ushort *)((int)this + 0x78))) &&
     (puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x74) + (*(uint *)&gen_a1) * 0x1c))), puVar1 != (uint *)0x0)) {
    return *puVar1;
  }
  return 0;
}

/* ref: FUN_007acd20 */
GEN_FRAME unsigned int GEN_THISCALL F_007acd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7acd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  undefined * this;
  undefined4 * this_00;
  int iVar2;
  int iVar3;
  uint * puVar4;
  uint * puVar5;
  
  if ((*(int *)((*(int *)&gen_args[0]) + 0x70) != 0) && (iVar3 = 0, 0 < (*(int *)&gen_args[2]))) {
    iVar2 = (*(uint *)&gen_args[1]) * 0x1c;
    do {
      if ((((*(int *)((*(int *)&gen_args[0]) + 0x74) != 0) && ((*(uint *)&gen_args[1]) + iVar3 < (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x78))
           ) && (this_00 = ((undefined4 *)GEN_TOP((iVar2 + *(int *)((*(int *)&gen_args[0]) + 0x74)))),
                this_00 != (undefined4 *)0x0)) &&
         ((uVar1 = F_005644f0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70) GEN_EDX_FWD,(*(uint *)&gen_args[3]),iVar3), uVar1 != 0 &&
          (F_007ac8e0(this_00 GEN_EDX_ARG,(*(uint *)&gen_args[3]),uVar1), (*(uint *)&gen_args[3]) == 1)))) {
        uVar1 = (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x7e);
        this = (undefined *)F_00564700(*this_00 GEN_EDX_ARG);
        F_0059d640(this GEN_EDX_ARG,uVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 < (*(int *)&gen_args[2]));
    if (((0 < (*(int *)&gen_args[2])) && (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0x74) != (int *)0x0)) &&
       ((*(short *)((*(int *)&gen_args[0]) + 0x78) != 0 && (iVar3 = **(int * PTR32 *)((*(int *)&gen_args[0]) + 0x74), iVar3 != 0)))) {
      puVar5 = &(*(uint *)&gen_args[1]);
      puVar4 = &(*(uint *)&gen_args[3]);
      uVar1 = F_00564700(iVar3 GEN_EDX_ARG);
      F_0055a730(uVar1 GEN_EDX_ARG,puVar4,puVar5);
      *(uint *)((*(int *)&gen_args[0]) + 0x2c) = (*(uint *)&gen_args[3]);
      *(uint *)((*(int *)&gen_args[0]) + 0x30) = (*(uint *)&gen_args[1]);
    }
  }
  return;
}

/* ref: FUN_007ace00 */
GEN_FRAME unsigned int GEN_THISCALL F_007ace00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7ace00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[10];
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
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) != (undefined *)0x0) {
    F_005aefb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[9]));
  }
  return;
}

/* ref: FUN_007ace50 */
GEN_FRAME uint GEN_THISCALL F_007ace50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ace50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((int)param_1 < 4) {
    *(undefined2 *)((int)this + param_1 * 2 + 0x7c) = (undefined2)param_2;
  }
  return param_1;
}

/* ref: FUN_007ace70 */
GEN_FRAME uint GEN_THISCALL F_007ace70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ace70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  int local_10;
  uint local_c;
  float local_8;
  
  local_c = 0;
  if (*(short *)((int)this + 0x38) != 0) {
    local_10 = 0;
    do {
      if ((((*(int *)((int)this + 0x74) != 0) && (local_c < *(ushort *)((int)this + 0x78))) &&
          (piVar9 = ((int *)GEN_TOP((local_10 + *(int *)((int)this + 0x74)))), piVar9 != (int *)0x0)) &&
         (*piVar9 != 0)) {
        uVar7 = F_00564700(*piVar9 GEN_EDX_FWD);
        sVar3 = *(short *)((int)this + 0x34);
        fVar10 = F_0055a750(uVar7 GEN_EDX_ARG);
        sVar4 = *(short *)((int)this + 0x36);
        fVar11 = F_0055a760(uVar7 GEN_EDX_ARG);
        uVar8 = F_0055a2d0(uVar7 GEN_EDX_ARG);
        if ((char)uVar8 != '\0') {
          local_8 = REFG(float, 0x1087f04);
          fVar1 = gen_bits2f(piVar9[2]);
          if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
              ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
            local_8 = ((float)GEN_TOF((((float10)*(float *)((int)this + 0x20) * (float10)fVar1) *
                             (float10)*(float *)((int)this + 0x1c))));
          }
          F_00559da0(uVar7 GEN_EDX_ARG,((float)GEN_TOF((((float10)(int)(short)piVar9[5] -
                                     (float10)*(float *)((int)this + 0x14)) *
                                     (float10)*(float *)((int)this + 0x20) +
                                    (float10)(float)((float10)(int)sVar3 - fVar10)))),
                       ((float)GEN_TOF(((float10)(float)((float10)(int)sVar4 - fVar11) +
                              (float10)*(float *)((int)this + 0x20) *
                              ((float10)(int)*(short *)((int)piVar9 + 0x16) -
                              (float10)*(float *)((int)this + 0x18))))));
          F_00568210(uVar7 GEN_EDX_ARG,local_8,local_8);
        }
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x1c;
    } while ((int)local_c < (int)(uint)*(ushort *)((int)this + 0x38));
  }
  F_00568350(*(undefined4 *)((int)this + 4) GEN_EDX_ARG,
               ((float)GEN_TOF(-(float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x24) +
                                       (float10)*(double *)&REFG(undefined, 0x1080220)))))));
  F_00568350(*(undefined4 *)((int)this + 8) GEN_EDX_ARG,
               ((float)GEN_TOF((-(float10)*(float *)((int)this + 0x28) - (float10)*(double *)&REFG(undefined, 0x10947e8)))));
  sVar3 = *(short *)((int)this + 0x34);
  fVar10 = F_0055a750(*(undefined4 *)((int)this + 8) GEN_EDX_ARG);
  sVar4 = *(short *)((int)this + 0x36);
  fVar11 = F_0055a760(*(undefined4 *)((int)this + 8) GEN_EDX_ARG);
  sVar5 = *(short *)((int)this + 0x34);
  fVar12 = F_0055a750(*(undefined4 *)((int)this + 4) GEN_EDX_ARG);
  sVar6 = *(short *)((int)this + 0x36);
  fVar13 = F_0055a760(*(undefined4 *)((int)this + 4) GEN_EDX_ARG);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) *
                 ((float10)*(float *)((int)this + 0xc) - (float10)*(float *)((int)this + 0x14)))));
  fVar2 = ((float)GEN_TOF((((float10)*(float *)((int)this + 0x10) - (float10)*(float *)((int)this + 0x18)) *
                 (float10)*(float *)((int)this + 0x20))));
  F_00559da0(*(undefined4 *)((int)this + 4) GEN_EDX_ARG,
               ((float)GEN_TOF(((float10)fVar1 + (float10)(float)((float10)(int)sVar5 - fVar12)))),
               ((float)GEN_TOF(((float10)fVar2 + (float10)(float)((float10)(int)sVar6 - fVar13)))));
  uVar7 = F_00559da0(*(undefined4 *)((int)this + 8) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)fVar1 + (float10)(float)((float10)(int)sVar3 - fVar10)))),
                       ((float)GEN_TOF(((float10)fVar2 + (float10)(float)((float10)(int)sVar4 - fVar11)))));
  return uVar7;
}

/* ref: FUN_007ad100 */
GEN_FRAME byte GEN_THISCALL F_007ad100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  fVar1 = *(float *)((int)this + 0x68);
  if (((float10)fVar1 < (float10)*(float *)((int)this + 0x40)) ||
     (fVar1 = ((float)GEN_TOF(-(float10)fVar1)), (float10)*(float *)((int)this + 0x40) < (float10)fVar1)) {
    *(float *)((int)this + 0x40) = fVar1;
  }
  fVar1 = *(float *)((int)this + 0x6c);
  if (((float10)fVar1 < (float10)*(float *)((int)this + 0x44)) ||
     (fVar1 = ((float)GEN_TOF(-(float10)fVar1)), (float10)*(float *)((int)this + 0x44) < (float10)fVar1)) {
    *(float *)((int)this + 0x44) = fVar1;
  }
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x44);
  if (*(int *)((int)this + 0x70) != 0) {
    F_0057e130(*(int *)((int)this + 0x70) GEN_EDX_FWD,*(float *)((int)this + 0x40),
                 *(float *)((int)this + 0x44));
  }
  return 1;
}

/* ref: FUN_007ad1b0 */
GEN_FRAME uint GEN_THISCALL F_007ad1b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7ad1b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*(float *)(param_1 + 0x3c);
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5);
  bVar3 = bVar2 || fVar4 == fVar5;
  if (bVar2 == bVar3) {
    *(float *)(param_1 + 0x3c) = param_2;
    *(float *)(param_1 + 0x1c) = param_2;
    if (*(int *)(param_1 + 0x70) != 0) {
      uVar1 = F_0056f070(*(int *)(param_1 + 0x70) GEN_EDX_FWD,param_2);
      return uVar1;
    }
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),
                  CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar5 <= fVar4),(char)in_EAX));
}

/* ref: FUN_007ad1f0 */
GEN_FRAME unsigned int GEN_THISCALL F_007ad1f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  float10 fVar2;
  
  fVar2 = (float10)*(float *)((int)this + 0x48);
  bVar1 = GEN_ISNAN((float10)*(float *)((int)this + 0x20)) || GEN_ISNAN(fVar2);
  if (bVar1 == (bVar1 || (float10)*(float *)((int)this + 0x20) == fVar2)) {
    *(float *)((int)this + 0x20) = *(float *)((int)this + 0x48);
  }
  if (*(int *)((int)this + 0x70) != 0) {
    F_0057e0a0(*(int *)((int)this + 0x70) GEN_EDX_FWD,*(float *)((int)this + 0x48));
  }
  return;
}

/* ref: FUN_007ad230 */
GEN_FRAME unsigned int GEN_THISCALL F_007ad230(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad230u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x58) = param_2;
  *(float *)(in_ecx + 0x5c) = param_3;
  return;
}

/* ref: FUN_007ad250 */
GEN_FRAME byte GEN_THISCALL F_007ad250(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad250u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)((int)param_1 + 0x58);
  *(float *)((int)param_1 + 0x40) = param_2;
  *(undefined4 *)((int)param_1 + 100) = *(undefined4 *)((int)param_1 + 0x5c);
  *(float *)((int)param_1 + 0x44) = param_3;
  bVar1 = F_007ad100(param_1 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_007ad280 */
GEN_FRAME unsigned int GEN_THISCALL F_007ad280(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad280u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x50) = param_2;
  *(float *)(in_ecx + 0x54) = param_3;
  return;
}

/* ref: FUN_007ad2a0 */
GEN_FRAME float10 GEN_THISCALL F_007ad2a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad2a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = *(float *)(in_ecx + 0x50);
  *(float *)(in_ecx + 0x50) = param_2;
  fVar2 = *(float *)(in_ecx + 0x54);
  *(float *)(in_ecx + 0x54) = param_3;
  fVar3 = (float10)(float)((float10)param_2 - (float10)fVar1);
  *(float *)(in_ecx + 0x40) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x40) - fVar3)));
  fVar4 = (float10)(float)((float10)param_3 - (float10)fVar2);
  *(float *)(in_ecx + 0x44) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x44) - fVar4)));
  return (float10)(float)(fVar4 * fVar4 + fVar3 * fVar3);
}

/* ref: FUN_007ad300 */
GEN_FRAME unsigned int GEN_THISCALL F_007ad300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x48) *
                                  (float10)*(double *)&REFG(undefined, 0x10ac2d0)))) *
                 (float10)*(float *)(in_ecx + 0x4c))));
  *(float *)(in_ecx + 0x68) = fVar1;
  *(float *)(in_ecx + 0x6c) = fVar1;
  return;
}

/* ref: FUN_007ad330 */
GEN_FRAME unsigned int GEN_THISCALL F_007ad330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x70) != (undefined *)0x0) {
    F_00592ee0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_007ad350 */
GEN_FRAME unsigned int GEN_THISCALL F_007ad350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ad350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x70) != (undefined *)0x0) {
    F_00592fc0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,param_1,param_2,(uint)(param_3 != 0));
  }
  return;
}

/* ref: Client::UI2::AddonAreaMap::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007ad390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"AreaMap",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonAreaMap::vf7 */
GEN_FRAME uint GEN_THISCALL F_007ad3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_005a9130(this GEN_EDX_FWD,10);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonAreaMap::vf25 */
GEN_FRAME uint GEN_THISCALL F_007ad3d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  uint uVar2;
  int * piVar3;
  
  F_00587960(this GEN_EDX_FWD,(uint)(byte)this[0x4f9],0);
  if (this[0x4fa] != (undefined1)0x0) {
    uVar2 = F_0055dcb0();
    piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14) GEN_EDX_ARG,(uint)(byte)this[0x4fa]);
    if (piVar3 != (int *)0x0) {
      if (((*(byte *)((int)piVar3 + 0xf9) & 4) == 0) && ((*(byte *)(piVar3 + 0x3e) & 1) == 0)) {
        uVar2 = F_0055dcb0();
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14) + 0x3c))))(*(int * PTR32 *)(uVar2 + 0x14) GEN_EDX_ARG);
        if ((char)uVar2 != '\0') {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3 GEN_EDX_ARG,0);
        }
      }
      else {
        uVar2 = (uint)piVar3[0x3d] >> 0x14 & 0xf;
        if ((uVar2 == 3) || (uVar2 == 2)) {
          pcVar1 = *(gen_code32 *)(*piVar3 + 0x8c);
          *(byte *)(piVar3 + 0x3e) = *(byte *)(piVar3 + 0x3e) & 0x7f;
          (*pcVar1)(piVar3);
        }
      }
    }
    this[0x4fa] = (undefined1)0x0;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonAreaMap::vf51 */
GEN_FRAME uint GEN_THISCALL F_007ad4b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad4b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x4c))(param_1 GEN_EDX_FWD,(int)param_2 & 0xffff,(int)param_3 & 0xffff);
  param_1[0x120] = (int)gen_fl2bits(param_2);
  param_1[0x121] = (int)gen_fl2bits(param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonAreaMap::vf56 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007ad4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad4f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x4f3) = 1;
  return;
}

/* ref: Client::UI2::AddonAreaMap::vf57 */
GEN_NOFRAME uint GEN_THISCALL F_007ad500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  this[0x4f3] = (undefined1)0x0;
  bVar1 = F_0055a300(*(undefined * PTR32 *)(this + 0x1ec) GEN_EDX_FWD,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007ad520 */
GEN_FRAME uint GEN_THISCALL F_007ad520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007ad570 */
GEN_FRAME uint GEN_THISCALL F_007ad570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 5;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007ad5a0 */
GEN_FRAME uint GEN_THISCALL F_007ad5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007ad5f0 */
GEN_FRAME uint GEN_THISCALL F_007ad5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ad5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  undefined * this_00;
  undefined * pvVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined1 *)((int)this + 0x4ec) = 1;
  fVar4 = F_0055df60(this GEN_EDX_FWD);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,((short *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)));
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,((ushort *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0xc)),0);
  uVar2 = F_0055dcb0();
  sVar1 = *((short *)GEN_TOP((*(int *)(uVar2 + 0x18) + 0xc5e)));
  *(float *)((int)this + 0x470) =
       (float)(int)(((int)*((short *)GEN_TOP((*(int *)(uVar2 + 0x18) + 0xc5c))) - (uint)((ushort *)(gen_frame + 0x10))[0]) -
                   (int)((short *)(gen_frame + 0x18))[0]);
  *(float *)((int)this + 0x474) = (float)(int)(((int)sVar1 - (uint)((ushort *)(gen_frame + 0xc))[0]) - (int)((short *)(gen_frame + 0x14))[0]);
  uVar2 = F_0055dcb0();
  fVar5 = (float10)*(int *)(uVar2 + 0x234);
  if (*(int *)(uVar2 + 0x234) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 0x478) =
       ((float)GEN_TOF(((fVar5 - (float10)(int)((short *)(gen_frame + 0x18))[0]) * (float10)(float)((float10)1 / fVar4))));
  uVar2 = F_0055dcb0();
  fVar5 = (float10)*(int *)(uVar2 + 0x238);
  if (*(int *)(uVar2 + 0x238) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0xf;
  uVar6 = 4;
  *(float *)((int)this + 0x47c) =
       ((float)GEN_TOF(((fVar5 - (float10)(int)((short *)(gen_frame + 0x14))[0]) * (float10)(float)((float10)1 / fVar4))));
  pvVar3 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_0056a3d0(this_00 GEN_EDX_ARG,uVar6,uVar7,pvVar3,uVar8,uVar9);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0xd;
  uVar6 = 5;
  pvVar3 = (undefined *)F_0055dcb0();
  uVar2 = F_0056a3d0(pvVar3 GEN_EDX_ARG,uVar6,uVar7,this,uVar8,uVar9);
  return uVar2;
}

/* ref: FUN_007ad720 */
GEN_FRAME uint GEN_THISCALL F_007ad720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if ((short)param_1 == 6) {
    uVar1 = F_0055dcb0();
    F_005aa060((undefined *)(uVar1 + 0x20c) GEN_EDX_ARG,9,0);
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x21b) = 1;
    return uVar1;
  }
  if (((short)param_1 == 7) && (*(char *)((int)this + 0x4ec) == '\0')) {
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x21b) = 0;
    uVar1 = F_0055dcb0();
    uVar1 = F_005aa060((undefined *)(uVar1 + 0x20c) GEN_EDX_ARG,0,0);
  }
  return uVar1;
}

/* ref: FUN_007ad790 */
GEN_FRAME uint GEN_THISCALL F_007ad790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 < 0x10) &&
     (uVar1 = *(uint *)((int)this + uVar1 * 4 + 0x298), *(uint *)((int)this + 0x490) != uVar1)) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    *(uint *)((int)this + 0x490) = uVar1;
    *(undefined4 *)((int)this + 0x494) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007ad810 */
GEN_FRAME uint GEN_THISCALL F_007ad810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(uint *)(param_1 + 8);
  if (*(uint *)((int)this + 0x494) != uVar1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    *(uint *)((int)this + 0x494) = uVar1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007ad870 */
GEN_FRAME uint GEN_THISCALL F_007ad870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  byte * pbVar7;
  bool bVar8;
  
  piVar6 = param_1;
  if ((((param_1 != (int *)0xffffffff) && (*(int *)((int)this + 0x278) != 0)) &&
      (param_1 < (int *)(uint)*(ushort *)((int)this + 0x27c))) &&
     ((piVar6 = ((int *)GEN_TOP((*(int *)((int)this + 0x278) + (int)((int)(uintptr_t)param_1) * 0x1c))), piVar6 != (int *)0x0 &&
      (*piVar6 != 0)))) {
    pbVar2 = (byte *)piVar6[1];
    if (pbVar2 != (byte *)0x0) {
      pbVar7 = &REFG(undefined1, 0x10be9fb);
      pbVar3 = pbVar2;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_007ad8f0: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_007ad8f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_007ad8f0;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_007ad8f5: ;
      piVar6 = (int *)0x0;
      if (iVar4 != 0) {
        pbVar3 = (byte *)((int)this + 0x370);
        pbVar7 = pbVar2;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_007ad924: ;
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_007ad929;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_007ad924;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_007ad929: ;
        if (iVar4 == 0) {
          return 0;
        }
        uVar5 = F_00c49908((byte *)((int)this + 0x370),0x100,pbVar2);
        return uVar5;
      }
    }
    *(undefined1 *)((int)this + 0x370) = 0;
  }
  return (uint)piVar6;
}

/* ref: FUN_007ad950 */
GEN_FRAME uint GEN_THISCALL F_007ad950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ad950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  code * pcVar7;
  undefined4 uVar8;
  
  uVar3 = param_1;
  if (param_1 != 0xffffffff) {
    if ((*(int *)((int)this + 0x278) == 0) || (*(ushort *)((int)this + 0x27c) <= param_1)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x278) + param_1 * 0x1c)));
    }
    uVar3 = F_00564760(*puVar5 GEN_EDX_FWD);
    (*(uint *)(gen_frame + 0x18)) = uVar3;
    if (*(char *)((int)this + 0x4f7) != '\0') {
      (*(uint *)(gen_frame + 0x18)) = *(uint *)((int)this + 0x200);
    }
    uVar3 = F_0055dcb0();
    if ((*(uint *)(uVar3 + 0xf8) == (*(uint *)(gen_frame + 0x18))) || ((char)param_2 != '\0')) {
      F_007ad870(this GEN_EDX_ARG,param_1);
      F_00560760(((int *)(gen_frame + 0xc)) GEN_EDX_ARG);
      cVar1 = *(char *)((int)this + 0x4f7);
      ((int *)(gen_frame + 0xc))[0] = (int)this + 0x370;
      piVar6 = ((int *)(gen_frame + 0xc));
      if (cVar1 == '\0') {
        bVar2 = *(byte *)((int)this + 0x13a);
        uVar8 = 1;
        pcVar7 = (code *)0x0;
        uVar4 = F_00564760(*puVar5 GEN_EDX_ARG);
      }
      else {
        uVar4 = *(uint *)((int)this + 0x200);
        bVar2 = *(byte *)((int)this + 0x13a);
        uVar8 = 0;
        pcVar7 = ((code *)REFP(0x90a770));
      }
      uVar3 = F_00588780((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,2,(uint)bVar2,uVar4,piVar6,pcVar7,uVar8);
    }
  }
  return uVar3;
}

/* ref: FUN_007ada30 */
GEN_FRAME unsigned int GEN_THISCALL F_007ada30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ada30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float10 fVar5;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x180) GEN_EDX_FWD);
    uVar3 = F_0055a030(*(undefined4 *)((int)this + 0x180) GEN_EDX_ARG);
    bVar1 = F_0056c7e0();
    if (bVar1 == 0) {
      uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x1e0) GEN_EDX_ARG);
      fVar5 = (float10)uVar3 - (float10)uVar4 * (float10)REFG(double, 0x1088108);
    }
    else {
      uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x1e0) GEN_EDX_ARG);
      fVar5 = (float10)uVar3 - (float10)uVar4;
    }
    uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x1e0) GEN_EDX_ARG);
    F_00559e70(*(undefined4 *)((int)this + 0x1e0) GEN_EDX_ARG,
                 ((float)GEN_TOF(((float10)(int)((uint)uVar2 - (uint)uVar3) * (float10)REFG(double, 0x1088108)))));
    F_00559f00(*(undefined4 *)((int)this + 0x1e0) GEN_EDX_ARG,(float)fVar5);
  }
  return;
}

/* ref: FUN_007adb00 */
GEN_FRAME unsigned int GEN_THISCALL F_007adb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7adb00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  float fVar1;
  int in_ecx;
  float10 fVar2;
  
  in_ecx = *(int *)(param_1 + 0x200);
  if (in_ecx != 0) {
    fVar1 = *(float *)(in_ecx + 0x30);
    fVar2 = F_0055a750(in_ecx GEN_EDX_FWD);
    *(short *)param_2 = (short)(int)(fVar2 + (float10)fVar1);
    fVar1 = *(float *)(in_ecx + 0x34);
    fVar2 = F_0055a760(in_ecx GEN_EDX_ARG);
    *param_3 = (short)(int)(fVar2 + (float10)fVar1);
  }
  return;
}

/* ref: FUN_007adb80 */
GEN_FRAME uint F_007adb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7adb80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = param_2;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case (undefined4 *)0x0: ;
    param_1[1] = 3;
    param_1[2] = 4;
    param_1[3] = 5;
    param_1[4] = 6;
    *param_1 = 2;
    return (uint)param_1;
  case (undefined4 *)0x1: ;
    param_1[1] = 3;
    param_1[2] = 6;
    break;
  case (undefined4 *)0x2: ;
    param_1[1] = 5;
    param_1[2] = 3;
    param_1[4] = 6;
    param_1[5] = 8;
    param_1[3] = 4;
    *param_1 = 2;
    return (uint)param_1;
  case (undefined4 *)0x3: ;
    param_1[2] = 3;
    param_1[1] = 6;
    param_1[6] = 8;
    break;
  default: ;
    goto switchD_007adb93_default;
  }
  param_1[5] = 7;
  param_1[4] = 5;
  param_1[3] = 4;
  *param_1 = 2;
  puVar1 = param_1;
switchD_007adb93_default: ;
  return (uint)puVar1;
}

/* ref: FUN_007adc40 */
GEN_FRAME uint GEN_THISCALL F_007adc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7adc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * this;
  char cVar2;
  ushort uVar3;
  undefined * pvVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined * pvVar9;
  uint in_ecx;
  byte * pbVar10;
  undefined1 * this_00;
  bool bVar11;
  float10 fVar12;
  
  this = (undefined *)*param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)param_1;
  if (this == (undefined *)0x0) {
    return (uint)param_2;
  }
  pvVar4 = (undefined *)F_005647a0(this GEN_EDX_FWD);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar4;
  if (param_3 != 0) {
    pbVar10 = &REFG(undefined1, 0x10bea11);
    pbVar5 = (byte *)param_3;
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_007adc93: ;
        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_007adc98;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_007adc93;
      pbVar5 = pbVar5 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_007adc98: ;
    if ((iVar6 != 0) && (*(short *)(param_2 + 3) != 8)) {
      cVar2 = '\x01';
      goto LAB_007adcaf;
    }
  }
  cVar2 = '\0';
LAB_007adcaf: ;
  *(char *)(param_2 + 6) = cVar2;
  if (cVar2 != '\0') {
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    (*(uint *)(gen_frame + 0x8)) = param_3;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xc)) + 0)) = 4;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = 0x800;
    (*(double *)(gen_frame + 0xc)) = 4.34584737989885e-311;
    uVar7 = F_0055dcb0();
    pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar7 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar7 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x2a,2,&(*(undefined4 *)(gen_frame + 0x4)))));
    if ((*pbVar5 & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(pbVar5 + 4);
    }
    F_0058c140(this GEN_EDX_ARG,uVar8);
    F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    this_00 = ((undefined1 *)(gen_frame + 0x14));
    iVar6 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  uVar7 = F_00577bc0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
  F_0055a060(pvVar4 GEN_EDX_ARG,uVar7 + 5);
  uVar7 = F_00564700(this GEN_EDX_ARG);
  pvVar9 = (undefined *)F_005647e0(this GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar9;
  in_ecx = F_00564820(this GEN_EDX_ARG);
  fVar12 = F_0055a750(uVar7 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x28)) = (float)fVar12;
  fVar12 = F_0055a760(uVar7 GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
  (*(double *)(gen_frame + 0x20)) = (double)(*(float *)(gen_frame + 0x28));
  uVar3 = F_0055a020(pvVar4 GEN_EDX_ARG);
  param_3 = (uint)gen_fl2bits((float)((float10)(*(double *)(gen_frame + 0x20)) - (float10)uVar3 * (float10)REFG(double, 0x1088108)));
  (*(double *)(gen_frame + 0xc)) = (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x1c)))));
  uVar3 = F_0055a030(pvVar4 GEN_EDX_ARG);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)uVar3);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)uVar3);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) =
       ((float)GEN_TOF(((float10)(*(double *)(gen_frame + 0xc)) -
              (float10)(int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4))) * (float10)REFG(double, 0x1088108))));
  switch((unsigned int)(uintptr_t)(*(undefined2 *)(param_2 + 3))) {
  case 5: ;
    break;
  case 6: ;
    uVar3 = F_0055a020(uVar7 GEN_EDX_ARG);
    param_3 = (uint)gen_fl2bits((float)((float10)uVar3 * (float10)REFG(double, 0x1088108)));
    break;
  case 7: ;
    (*(double *)(gen_frame + 0xc)) = (double)(*(float *)(gen_frame + 0x28));
    uVar3 = F_0055a020(pvVar4 GEN_EDX_ARG);
    param_3 = (uint)gen_fl2bits((float)((float10)(*(double *)(gen_frame + 0xc)) - (float10)uVar3));
    break;
  case 8: ;
    F_0055a300((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,0);
    uVar3 = F_0055a020(in_ecx GEN_EDX_ARG);
    param_3 = (uint)gen_fl2bits((float)((float10)uVar3 * (float10)REFG(double, 0x1088108) + (float10)(*(float *)(gen_frame + 0x28))));
    (*(double *)(gen_frame + 0xc)) = (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x1c)))));
    uVar3 = F_0055a030(in_ecx GEN_EDX_ARG);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = (float)((float10)(*(double *)(gen_frame + 0xc)) - (float10)uVar3 * (float10)REFG(double, 0x1088108));
    break;
  default: ;
    uVar3 = F_0055a030((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = (float)uVar3;
  }
  F_00559e70(pvVar4 GEN_EDX_ARG,GEN_TOF(gen_bits2f(param_3)));
  uVar7 = F_00559f00(pvVar4 GEN_EDX_ARG,(*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)));
  return uVar7;
}

/* ref: FUN_007adeb0 */
GEN_FRAME uint GEN_THISCALL F_007adeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7adeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * this_00;
  char cVar2;
  undefined * pvVar3;
  byte * pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte * pbVar9;
  undefined * PTR32 * this_01;
  bool bVar10;
  
  this_00 = (undefined *)*param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (this_00 == (undefined *)0x0) {
    return (uint)param_1;
  }
  pvVar3 = (undefined *)F_005647a0(this_00 GEN_EDX_FWD);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar3;
  if (param_2 != (byte *)0x0) {
    pbVar9 = &REFG(undefined1, 0x10bea12);
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_007adf03: ;
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_007adf08;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_007adf03;
      pbVar4 = pbVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_007adf08: ;
    if ((iVar5 != 0) && (*(short *)(param_1 + 3) != 8)) {
      cVar2 = '\x01';
      goto LAB_007adf1f;
    }
  }
  cVar2 = '\0';
LAB_007adf1f: ;
  *(char *)(param_1 + 6) = cVar2;
  if (cVar2 != '\0') {
    (*(undefined4 *)(gen_frame + 0x0)) = 6;
    (*(byte * PTR32 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 4;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x800;
    uVar6 = F_0055dcb0();
    pbVar4 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar6 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x2a,2,&(*(undefined4 *)(gen_frame + 0x0)))));
    if ((*pbVar4 & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(pbVar4 + 4);
    }
    F_0058c140(this_00 GEN_EDX_ARG,uVar7);
    F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    uVar6 = F_007ac7d0(param_1 GEN_EDX_ARG);
    uVar8 = F_005647e0(this_00 GEN_EDX_ARG);
    F_0057e2a0(this_00 GEN_EDX_ARG,uVar8,uVar6);
    this_01 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
    iVar5 = 1;
    do {
      this_01 = this_01 - 2;
      F_005a2670(this_01 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  uVar6 = F_00577bc0((*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
  F_0055a060(pvVar3 GEN_EDX_ARG,uVar6);
  uVar6 = F_0057e1f0(this_00 GEN_EDX_ARG,0);
  return uVar6;
}

/* ref: FUN_007adfe0 */
GEN_FRAME uint GEN_THISCALL F_007adfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7adfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xffffff0f;
  *(char *)((int)this + 0x13f) = (char)param_1;
  if ((char)uVar2 == '\x03') {
    F_0055a200(*(undefined4 *)((int)this + 0x90) GEN_EDX_FWD,param_1);
    bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,(uint)((char)param_1 == -1));
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_007ae070 */
GEN_FRAME uint GEN_THISCALL F_007ae070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar3 = *(uint *)((int)this + 0x4ac);
  bVar1 = 0;
  if (uVar3 != 0xffffffff) {
    if ((*(int *)((int)this + 0x278) == 0) || (*(ushort *)((int)this + 0x27c) <= uVar3)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x278) + uVar3 * 0x1c;
    }
    if (*(char *)(iVar2 + 0x19) != '\0') {
      bVar1 = 1;
    }
  }
  if (*(uint *)((int)this + 0x4b0) < 2) {
    uVar3 = (-(uint)bVar1 & 0x59) + 0x2a5;
  }
  else {
    uVar3 = (-(uint)bVar1 & 0x59) + 0x2a6;
  }
  if (*(uint *)((int)this + 0x4b8) != uVar3) {
    *(uint *)((int)this + 0x4b8) = uVar3;
    bVar1 = F_0056b630(this GEN_EDX_FWD,uVar3,7,0,9,0,0);
    uVar3 = CONCAT31(extraout_var,bVar1);
  }
  return uVar3;
}

/* ref: FUN_007ae110 */
GEN_FRAME uint GEN_THISCALL F_007ae110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(char *)((int)this + 0x4ef) = (char)param_1;
  this_00 = *(undefined * PTR32 *)((int)this + 0x1a0);
  uVar1 = param_1;
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x88) != (char)param_1)) {
    uVar1 = F_0059dde0(this_00 GEN_EDX_FWD,param_1);
  }
  return uVar1;
}

/* ref: FUN_007ae140 */
GEN_FRAME uint GEN_THISCALL F_007ae140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(bool *)((int)this + 0x4f1) = (char)param_1 == '\0';
  this_00 = *(undefined * PTR32 *)((int)this + 0x1a4);
  uVar1 = param_1;
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x88) != (char)param_1)) {
    uVar1 = F_0059dde0(this_00 GEN_EDX_FWD,param_1);
  }
  return uVar1;
}

/* ref: FUN_007ae170 */
GEN_FRAME uint GEN_THISCALL F_007ae170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  *(uint *)((int)this + 0x4b4) = param_1;
  uVar1 = param_1;
  if (*(int *)((int)this + 0x4b0) != 0) {
    puVar2 = (undefined4 *)((int)this + 0x1c4);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        uVar1 = F_0059dde0((undefined *)*puVar2 GEN_EDX_FWD,(uint)(*(uint *)((int)this + 0x4b4) == uVar3));
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x4b0));
  }
  return uVar1;
}

/* ref: FUN_007ae1c0 */
GEN_FRAME byte GEN_THISCALL F_007ae1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ae1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (((*(int *)((int)this + 0x278) != 0) && ((*(uint *)&gen_a1) < *(ushort *)((int)this + 0x27c))) &&
     (puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x278) + (*(uint *)&gen_a1) * 0x1c))),
     puVar1 != (undefined4 *)0x0)) {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      uVar3 = param_4;
      if (*(short *)(puVar1 + 3) == 5) {
        uVar3 = 2;
      }
      bVar2 = F_00576160((undefined *)*puVar1 GEN_EDX_FWD,param_2,param_3,uVar3);
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_007ae220 */
GEN_FRAME byte GEN_THISCALL F_007ae220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined * this_00;
  undefined1 * this_01;
  int iVar2;
  undefined4 uVar3;
  
  this_01 = (gen_frame + 0x1c);
  if (((((*(uint *)&gen_a1) != 0xffffffff) && (*(int *)((int)this + 0x278) != 0)) &&
      ((*(uint *)&gen_a1) < *(ushort *)((int)this + 0x27c))) &&
     ((puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x278) + (*(uint *)&gen_a1) * 0x1c))),
      puVar1 != (undefined4 *)0x0 && (*(char *)((int)puVar1 + 0x19) != '\0')))) {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      uVar3 = 1;
      this_00 = (undefined *)F_0057e1b0((undefined *)*puVar1 GEN_EDX_FWD);
      F_0059d640(this_00 GEN_EDX_ARG,uVar3);
    }
    uVar3 = puVar1[4];
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    (*(undefined4 *)(gen_frame + 0x14)) = 4;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar3;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_01 = this_01 - 8;
      F_005a2670(this_01 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    return 1;
  }
  return 0;
}

/* ref: FUN_007ae2d0 */
GEN_FRAME unsigned int GEN_THISCALL F_007ae2d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7ae2d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int in_ecx;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x4bc) != 0) {
    iVar3 = 0;
    do {
      if ((((*(int *)(param_1 + 0x278) != 0) && (uVar4 < *(ushort *)(param_1 + 0x27c))) &&
          (piVar1 = ((int *)GEN_TOP((*(int *)(param_1 + 0x278) + iVar3))), piVar1 != (int *)0x0)) &&
         (in_ecx = *piVar1, in_ecx != 0)) {
        fVar5 = param_2;
        fVar6 = param_2;
        uVar2 = F_005647e0(in_ecx GEN_EDX_FWD);
        F_00568210(uVar2 GEN_EDX_ARG,fVar5,fVar6);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (uVar4 < *(uint *)(param_1 + 0x4bc));
  }
  return;
}

/* ref: FUN_007ae340 */
GEN_NOFRAME byte GEN_THISCALL F_007ae340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x4f0) == '\0') &&
     ((!GEN_ISNAN(*(float *)(in_ecx + 0x24c)) && !GEN_ISNAN(REFG(float, 0x1088068))) &&
      !(*(float *)(in_ecx + 0x24c) <= REFG(float, 0x1088068)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007ae3c0 */
GEN_FRAME uint GEN_THISCALL F_007ae3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint * this_00;
  short sVar6;
  int iVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(char *)((int)this + 0x4f7) == '\0') {
    uVar3 = F_0055dcb0();
    sVar6 = *((short *)GEN_TOP((*(int *)(uVar3 + 0x18) + 0xc5c)));
    sVar5 = *((short *)GEN_TOP((*(int *)(uVar3 + 0x18) + 0xc5e)));
  }
  else {
    iVar7 = *(int *)((int)this + 0x200);
    sVar6 = (*(short *)(gen_frame + 0xc));
    sVar5 = (*(short *)(gen_frame + 0xc));
    if (iVar7 != 0) {
      fVar1 = *(float *)(iVar7 + 0x30);
      fVar8 = F_0055a750(iVar7 GEN_EDX_ARG);
      fVar2 = *(float *)(iVar7 + 0x34);
      sVar6 = (short)(int)(fVar8 + (float10)fVar1);
      fVar8 = F_0055a760(iVar7 GEN_EDX_ARG);
      sVar5 = (short)(int)(fVar8 + (float10)fVar2);
    }
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = 8;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,0);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG);
  fVar1 = *(float *)((int)this + 0x250);
  fVar2 = *(float *)((int)this + 0x244);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,5);
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)(int)(((int)sVar6 - ((uVar3 & 0xffff) >> 1)) - (int)(short)uVar4) *
                     (float10)fVar1 + (float10)fVar2)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,0);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
  fVar1 = *(float *)((int)this + 0x250);
  fVar2 = *(float *)((int)this + 0x248);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,5);
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(int)(((int)sVar5 - ((uVar3 & 0xffff) >> 1)) - (int)(short)uVar4) *
                    (float10)fVar1 + (float10)fVar2)));
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar7 = 2;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007ae520 */
GEN_NOFRAME byte GEN_THISCALL F_007ae520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  return *((int *)GEN_TOP((*(int *)(uVar1 + 0x14) + 0xcc))) == in_ecx;
}

/* ref: FUN_007ae540 */
GEN_NOFRAME uint GEN_THISCALL F_007ae540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  uVar2 = (int)((double)*(float *)((int)this + 0x35c) * *(double *)&REFG(undefined, 0x1088118)) << 8 |
          (int)(*(double *)&REFG(undefined, 0x1088118) * (double)*(float *)((int)this + 0x358));
  if (*(char *)((int)this + 0x4f1) != '\0') {
    uVar2 = uVar2 | 0x10000;
  }
  if (*(char *)((int)this + 0x4f0) != '\0') {
    uVar2 = uVar2 | 0x20000;
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x7c);
  *(uint *)((int)this + 0xfc) = uVar2;
  uVar2 = (*pcVar1)(this,1);
  return uVar2;
}

/* ref: FUN_007ae5a0 */
GEN_FRAME float10 GEN_THISCALL F_007ae5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae5a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((char)param_2 != '\0') {
    return (float10)((float)GEN_TOF((((float10)GEN_TOD((*(int *)(in_ecx + 0xfc) >> 8 & 0xff))) /
                           (float10)*(double *)&REFG(undefined, 0x1088118))));
  }
  return (float10)((float)GEN_TOF((((float10)GEN_TOD((*(uint *)(in_ecx + 0xfc) & 0xff))) /
                         (float10)*(double *)&REFG(undefined, 0x1088118))));
}

/* ref: FUN_007ae610 */
GEN_NOFRAME uint GEN_THISCALL F_007ae610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * in_EAX = 0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x4fa) != '\0') {
    uVar1 = F_0055dcb0();
    in_EAX = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x14) + 0x3c))))(*(int * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG)));
    if ((char)in_EAX != '\0') {
      uVar1 = F_0055dcb0();
      in_EAX = (int *)F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,(uint)*(byte *)((int)this + 0x4fa));
      if (((in_EAX != (int *)0x0) && ((*(byte *)((int)in_EAX + 0xf9) & 4) == 0)) &&
         ((*(byte *)(in_EAX + 0x3e) & 1) == 0)) {
        in_EAX = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*in_EAX + 0x10))(in_EAX GEN_EDX_ARG,1)));
      }
    }
    *(undefined1 *)((int)this + 0x4fa) = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_007ae680 */
GEN_FRAME uint GEN_THISCALL F_007ae680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ae680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_1 != 0) {
    F_00c49908((int)this + 0x360,8,param_1);
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = F_00c49908((int)this + 0x368,8,param_2);
  }
  return uVar1;
}

/* ref: FUN_007ae6c0 */
GEN_NOFRAME uint GEN_THISCALL F_007ae6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 8;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd254));
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc4;
  F_0055e2a0(this GEN_EDX_ARG,0x8000000,1);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined1 *)((int)this + 400) = 0;
  return (uint)this;
}

/* ref: FUN_007ae760 */
GEN_FRAME uint GEN_THISCALL F_007ae760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18c) = param_2;
  return param_2;
}

/* ref: Client::UI2::AddonScreenLog::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007ae770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  
  pAVar3 = this + 0x180;
  iVar4 = 3;
  do {
    piVar1 = *(int * PTR32 *)pAVar3;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_FWD,1,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x10))))(*(int * PTR32 *)pAVar3 GEN_EDX_ARG,1);
    }
    *(int *)pAVar3 = 0;
    pAVar3 = pAVar3 + 4;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonScreenLog::vf38 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007ae7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  
  if (this[400] == (undefined1)0x0) {
    bVar1 = true;
    if ((*(int *)(this + 0x180) != 0) && ((*((byte *)GEN_TOP((*(int *)(this + 0x180) + 0xf9))) & 1) == 0)) {
      bVar1 = false;
    }
    if ((*(int *)(this + 0x184) != 0) && ((*((byte *)GEN_TOP((*(int *)(this + 0x184) + 0xf9))) & 1) == 0)) {
      bVar1 = false;
    }
    if (((*(int *)(this + 0x188) == 0) || ((*((byte *)GEN_TOP((*(int *)(this + 0x188) + 0xf9))) & 1) != 0)) &&
       (bVar1)) {
      this[400] = (undefined1)0x1;
    }
  }
  return;
}

/* ref: Client::UI2::AddonScreenLog::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_007ae820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ae820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonScreenLog::vf46 */
GEN_FRAME byte GEN_THISCALL F_007ae830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ae830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == (byte *)0x0)) {
    return 0;
  }
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if (iVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0xb8))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD,param_1,param_2);
  }
  else {
    if (iVar1 == 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0xb8))))(*(int * PTR32 *)(this + 0x184) GEN_EDX_ARG,param_1,param_2);
      return 1;
    }
    if (iVar1 == 2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0xb8))))(*(int * PTR32 *)(this + 0x188) GEN_EDX_ARG,param_1,param_2);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_007ae8b0 */
GEN_FRAME uint F_007ae8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ae8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005a9110(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_007ae8d0 */
GEN_NOFRAME uint GEN_THISCALL F_007ae8d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd354));
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  F_0055e2a0(this GEN_EDX_ARG,4,1);
  F_0055e2a0(this GEN_EDX_ARG,0x20000000,0);
  return (uint)this;
}

/* ref: Client::UI2::AddonMiniTalk::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007ae960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  pvVar1 = F_00c48350(this + 0x188,0,0x11c);
  *(undefined4 *)(this + 0x2a4) = 0x660065;
  return (uint)pvVar1;
}

/* ref: Client::UI2::AddonMiniTalk::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007ae990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ae990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x22,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x1f,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonMiniTalk::vf38 */
GEN_FRAME uint GEN_THISCALL F_007ae9c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7ae9c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  bool bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  
  bVar1 = true;
  pbVar3 = (byte *)((int)param_1 + 0x1a7);
  iVar4 = 10;
  do {
    if ((*pbVar3 & 1) == 0) {
LAB_007aea03: ;
      uVar2 = F_0055a2d0(*(undefined4 *)(pbVar3 - 0x1b) GEN_EDX_FWD);
      if ((char)uVar2 != '\0') {
        bVar1 = false;
      }
    }
    else if ((*((int *)GEN_TOP((*(int *)(pbVar3 - 0x17) + 0x1c))) == 0) ||
            (-1 < *((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(pbVar3 - 0x17) + 0x1c))) + 0x22))))) {
      *pbVar3 = *pbVar3 & 0xfe;
      F_0055a300(*(undefined * PTR32 *)(pbVar3 - 0x1b) GEN_EDX_ARG,0);
      goto LAB_007aea03;
    }
    pbVar3 = pbVar3 + 0x1c;
    iVar4 = iVar4 - 1;
    if (iVar4 == 0) {
      if (((bVar1) && (uVar2 = (uint)param_1[0x3d] >> 0x14 & 0xf, uVar2 != 5)) && (uVar2 != 4)) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG,0,0);
      }
      uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
      return uVar2;
    }
  } while( true );
}

/* ref: Client::UI2::AddonMiniTalk::vf41 */
GEN_FRAME byte GEN_THISCALL F_007aea70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aea70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(undefined4 *)(gen_frame + 0x10)) = 9;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this GEN_EDX_ARG,"MiniTalk",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMiniTalk::vf44 */
GEN_FRAME uint GEN_THISCALL F_007aeac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aeac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  undefined * pAVar3;
  float10 fVar4;
  
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  *(undefined4 *)(this + 0x94) = 0;
  uVar2 = F_0055e2f0(this GEN_EDX_FWD,1);
  *(uint *)(this + 0x188) = uVar2;
  (*(uint *)(gen_frame + 0x8)) = 0;
  pAVar3 = this + 0x194;
  do {
    uVar2 = F_00578f50(this + 0x24 GEN_EDX_ARG,2,(*(uint *)(gen_frame + 0x8)),0);
    if (uVar2 != 0) {
      this_00 = *(undefined * PTR32 *)(uVar2 + 0x8c);
      *(uint *)(pAVar3 - 8) = uVar2;
      uVar2 = F_00561490(this_00 GEN_EDX_ARG,1);
      *(uint *)(pAVar3 - 4) = uVar2;
      uVar2 = F_00561530(this_00 GEN_EDX_ARG,3);
      *(uint *)pAVar3 = uVar2;
      uVar2 = F_00561490(this_00 GEN_EDX_ARG,5);
      uVar2 = F_00559bb0(uVar2 GEN_EDX_ARG);
      *(uint *)(pAVar3 + 4) = uVar2;
      uVar2 = F_00561550(this_00 GEN_EDX_ARG,4);
      *(uint *)(pAVar3 + 8) = uVar2;
      F_0055a300(*(undefined * PTR32 *)(pAVar3 - 8) GEN_EDX_ARG,0);
      *(uint *)(pAVar3 + 0xc) = 0;
      pAVar3[0x12] = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0));
    }
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    pAVar3 = pAVar3 + 0x1c;
  } while ((*(uint *)(gen_frame + 0x8)) < 10);
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x194) GEN_EDX_ARG);
  *(ushort *)(this + 0x2a8) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x194) GEN_EDX_ARG);
  *(ushort *)(this + 0x2aa) = uVar1;
  fVar4 = F_00559d60(*(undefined4 *)(this + 0x194) GEN_EDX_ARG);
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2ac) = (*(undefined2 *)(gen_frame + 0x4));
  fVar4 = F_00559d80(*(undefined4 *)(this + 0x194) GEN_EDX_ARG);
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2ae) = (*(undefined2 *)(gen_frame + 0x4));
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x198) GEN_EDX_ARG);
  *(ushort *)(this + 0x2b0) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x198) GEN_EDX_ARG);
  *(ushort *)(this + 0x2b2) = uVar1;
  fVar4 = F_00559d60(*(undefined4 *)(this + 0x198) GEN_EDX_ARG);
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2b4) = (*(undefined2 *)(gen_frame + 0x4));
  fVar4 = F_00559d80(*(undefined4 *)(this + 0x198) GEN_EDX_ARG);
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2b6) = (*(undefined2 *)(gen_frame + 0x4));
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x19c) GEN_EDX_ARG);
  *(ushort *)(this + 0x2b8) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x19c) GEN_EDX_ARG);
  *(ushort *)(this + 0x2ba) = uVar1;
  fVar4 = F_00559d60(*(undefined4 *)(this + 0x19c) GEN_EDX_ARG);
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 700) = (*(undefined2 *)(gen_frame + 0x4));
  fVar4 = F_00559d80(*(undefined4 *)(this + 0x19c) GEN_EDX_ARG);
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2be) = (*(undefined2 *)(gen_frame + 0x4));
  F_005a91d0(this GEN_EDX_ARG,1,0x22);
  uVar2 = F_005a91d0(this GEN_EDX_ARG,0,0x1f);
  return uVar2;
}

/* ref: Client::UI2::AddonPopUpText::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007aed10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aed10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"PopUpText",1,6);
  return bVar1;
}

/* ref: FUN_007aed20 */
GEN_FRAME unsigned int GEN_STDCALL F_007aed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aed20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  uint uVar1;
  
  if (*param_1 != 0) {
    param_1[2] = param_2;
    this = (undefined *)F_00559c20(*param_1 GEN_EDX_ARG);
    switch((unsigned int)(uintptr_t)(param_1[2])) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
    case 5: ;
      uVar1 = F_00561490(this GEN_EDX_ARG,1);
      param_1[1] = uVar1;
      uVar1 = F_00561530(this GEN_EDX_ARG,2);
      param_1[3] = uVar1;
    }
  }
  return;
}

/* ref: FUN_007aed80 */
GEN_FRAME uint GEN_STDCALL F_007aed80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aed80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if ((undefined *)*param_1 != (undefined *)0x0) {
    uVar1 = F_00568410((undefined *)*param_1 GEN_EDX_ARG);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 2: ;
    case 5: ;
    case 6: ;
    case 7: ;
    case 8: ;
    case 9: ;
    case 0xe: ;
    case 0xf: ;
    case 0x10: ;
      return 0x65;
    case 3: ;
      return *(uint *)(&REFG(undefined, 0x10cd4b0) + param_2 * 4);
    case 4: ;
      return *(uint *)(&REFG(undefined, 0x10cd49c) + param_2 * 4);
    case 10: ;
      return *(uint *)(&REFG(undefined, 0x10cd488) + param_2 * 4);
    case 0xb: ;
      return *(uint *)(&REFG(undefined, 0x10cd474) + param_2 * 4);
    case 0xc: ;
      return *(uint *)(&REFG(undefined, 0x10cd460) + param_2 * 4);
    case 0xd: ;
      return *(uint *)(&REFG(undefined, 0x10cd44c) + param_2 * 4);
    }
  }
  return 0;
}

/* ref: FUN_007aee40 */
GEN_FRAME uint GEN_STDCALL F_007aee40(unsigned int gen_a0)
{
  GEN_ENTER(0x7aee40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 8))) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
    return 0x65;
  default: ;
    return 0;
  }
}

/* ref: FUN_007aee80 */
GEN_FRAME uint GEN_THISCALL F_007aee80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7aee80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  pcVar1 = *(gen_code32 *)((int)this + 0x180);
  uVar3 = 0;
  if (pcVar1 != (code *)0x0) {
    uVar2 = *(undefined4 *)((int)this + 0x184);
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 4;
    (*pcVar1)(uVar2,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_00 = this_00 - 8;
      uVar3 = F_005a2670(this_00 GEN_EDX_FWD);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar3;
}

/* ref: FUN_007aeef0 */
GEN_FRAME unsigned int GEN_THISCALL F_007aeef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7aeef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = F_00568410((undefined *)*param_1 GEN_EDX_FWD);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 3: ;
    case 4: ;
    case 10: ;
    case 0xb: ;
    case 0xc: ;
    case 0xd: ;
      F_00568380((undefined *)param_1[1] GEN_EDX_ARG,0x41,(int)*(short *)(param_1 + 2),this,0,0);
    }
  }
  return;
}

/* ref: FUN_007aef50 */
GEN_FRAME uint GEN_THISCALL F_007aef50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7aef50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_005840a0(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_FWD,0x41,(int)*(short *)(param_1 + 8),this,0);
  }
  return uVar1;
}

/* ref: FUN_007aef70 */
GEN_FRAME unsigned int GEN_STDCALL F_007aef70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aef70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  uVar1 = *param_2;
  uVar2 = F_00568410((undefined *)*param_1 GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 3: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
switchD_007aeff8_caseD_65: ;
      puVar3 = param_1 + 0x13;
      break;
    case 0x66: ;
switchD_007aeff8_caseD_66: ;
      puVar3 = param_1 + 0xf;
      break;
    case 0x67: ;
switchD_007aeff8_caseD_67: ;
      puVar3 = param_1 + 0xb;
      break;
    case 0x68: ;
switchD_007aeff8_caseD_68: ;
      puVar3 = param_1 + 7;
      break;
    case 0x69: ;
switchD_007aeff8_caseD_69: ;
      puVar3 = param_1 + 3;
      break;
    default: ;
      goto LAB_007af025;
    }
LAB_007af016: ;
    if (puVar3 != (undefined4 *)0x0) {
      F_00559c60((undefined *)puVar3[1] GEN_EDX_ARG,1);
    }
LAB_007af025: ;
    return;
  case 4: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    case 0x6a: ;
switchD_007aefda_caseD_6a: ;
      puVar3 = param_1 + 0x17;
      goto LAB_007af016;
    default: ;
      goto LAB_007af025;
    }
  default: ;
    goto LAB_007af025;
  case 10: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    default: ;
      goto LAB_007af025;
    }
  case 0xb: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    case 0x6a: ;
      goto switchD_007aefda_caseD_6a;
    default: ;
      goto LAB_007af025;
    }
  case 0xc: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    default: ;
      goto LAB_007af025;
    }
  case 0xd: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    default: ;
      goto LAB_007af025;
    }
  }
}

/* ref: FUN_007af0e0 */
GEN_FRAME unsigned int GEN_STDCALL F_007af0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7af0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

/* ref: Client::UI2::AddonFlyText::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007af100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7af100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FlyText",1,6);
  return bVar1;
}

/* ref: FUN_007af110 */
GEN_FRAME uint GEN_STDCALL F_007af110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7af110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  F_0055a300((undefined *)*param_1 GEN_EDX_ARG,0);
  this = (undefined *)F_00559c20(*param_1 GEN_EDX_ARG);
  uVar1 = F_00568410((undefined *)*param_1 GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(uVar1 - 2)) {
  case 0: ;
  case 5: ;
  case 10: ;
  case 0x15: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,4);
    param_1[5] = uVar1;
    return uVar1;
  case 1: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[3] = uVar1;
    return uVar1;
  case 2: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[3] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,4);
    param_1[4] = uVar1;
    return uVar1;
  case 3: ;
  case 0x10: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[6] = uVar1;
    uVar2 = 4;
    goto LAB_007af188;
  case 4: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,5);
    param_1[7] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,4);
    param_1[3] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,6);
    param_1[4] = uVar1;
    return uVar1;
  case 6: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,4);
    uVar2 = 3;
    break;
  case 7: ;
  case 8: ;
  case 0x11: ;
  case 0x12: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,6);
    param_1[5] = uVar1;
    uVar2 = 4;
    goto LAB_007af188;
  case 9: ;
  case 0xb: ;
  case 0x13: ;
  case 0x14: ;
  case 0x16: ;
  case 0x17: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[5] = uVar1;
    return uVar1;
  case 0xc: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[3] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,5);
    param_1[4] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,4);
    param_1[7] = uVar1;
    return uVar1;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,6);
    uVar2 = 4;
    break;
  case 0x18: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,3);
    param_1[6] = uVar1;
    return uVar1;
  case 0x19: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,4);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,5);
    param_1[5] = uVar1;
    uVar1 = F_00561550(this GEN_EDX_ARG,3);
    param_1[8] = uVar1;
    return uVar1;
  case 0x1a: ;
  case 0x1d: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,4);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,5);
    param_1[5] = uVar1;
    uVar1 = F_00561550(this GEN_EDX_ARG,3);
    param_1[8] = uVar1;
    return uVar1;
  case 0x1b: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,4);
    param_1[6] = uVar1;
    uVar1 = F_00561550(this GEN_EDX_ARG,3);
    param_1[8] = uVar1;
    return uVar1;
  case 0x1c: ;
    uVar1 = F_00561490(this GEN_EDX_ARG,1);
    param_1[2] = uVar1;
    uVar1 = F_00561550(this GEN_EDX_ARG,3);
    param_1[8] = uVar1;
    uVar1 = F_00561530(this GEN_EDX_ARG,4);
    param_1[6] = uVar1;
    return uVar1;
  default: ;
    return uVar1 - 2;
  }
  param_1[7] = uVar1;
LAB_007af188: ;
  uVar1 = F_00561530(this GEN_EDX_ARG,uVar2);
  param_1[3] = uVar1;
  uVar1 = F_00561530(this GEN_EDX_ARG,5);
  param_1[4] = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonFlyText::vf54 */
GEN_FRAME unsigned int GEN_THISCALL F_007af450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7af450u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)(int)param_3;
  if ((int)param_3 < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar3 = (float10)REFG(double, 0x1088108);
  fVar1 = (float)(fVar2 * fVar3);
  *(float *)(param_1 + 0x11a8) = fVar1;
  *(float *)(param_1 + 0x11c8) = fVar1;
  *(float *)(param_1 + 0x11e8) = fVar1;
  *(float *)(param_1 + 0x1208) = fVar1;
  *(float *)(param_1 + 0x1228) = fVar1;
  *(float *)(param_1 + 0x1248) = fVar1;
  *(float *)(param_1 + 0x1268) = fVar1;
  *(float *)(param_1 + 0x1288) = fVar1;
  *(float *)(param_1 + 0x12a8) = fVar1;
  *(float *)(param_1 + 0x12c8) = fVar1;
  fVar2 = (float10)param_2;
  if (param_2 < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = (float10)(float)fVar2;
  fVar3 = (float10)(float)(fVar2 * fVar3);
  *(float *)(param_1 + 0x11a4) =
       ((float)GEN_TOF((fVar3 - (float10)(float)(fVar2 * (float10)*(double *)&REFG(undefined, 0x10928e8)))));
  *(float *)(param_1 + 0x11c4) =
       ((float)GEN_TOF((fVar3 + (float10)(float)(fVar2 * (float10)*(double *)&REFG(undefined, 0x10a1b58)))));
  return 0;
}

/* ref: FUN_007af500 */
GEN_FRAME uint GEN_THISCALL F_007af500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7af500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  undefined * this_00;
  uint uVar2;
  byte * pbVar3;
  
  if (0x25 < param_1) {
    return 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + (param_1 * 9 + 99) * 4)));
  uVar2 = 0;
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  pbVar3 = (byte *)((int)this + 0x6e8);
  while ((*pbVar3 & 2) != 0) {
    uVar2 = uVar2 + 1;
    pbVar3 = pbVar3 + 0x24;
    if (0x4b < uVar2) {
      return 0;
    }
  }
  puVar1 = ((uint *)GEN_TOP(((int)this + (uVar2 * 9 + 0x1b9) * 4)));
  if (puVar1 != (uint *)0x0) {
    uVar2 = F_00568410(this_00 GEN_EDX_FWD);
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24) GEN_EDX_ARG,uVar2,1,(uint)*(ushort *)((int)puVar1 + 6));
    if (uVar2 != 0) {
      *(ushort *)(puVar1 + 1) = (ushort)puVar1[1] | 2;
      *puVar1 = uVar2;
      F_007af110(puVar1,param_1);
      return (uint)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_007af590 */
GEN_FRAME unsigned int GEN_THISCALL F_007af590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7af590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = F_00568410((undefined *)*param_1 GEN_EDX_FWD);
    F_00590210((undefined *)((int)this + 0x24) GEN_EDX_ARG,uVar1,(uint)*(ushort *)((int)param_1 + 6));
    *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffd;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return;
}

/* ref: FUN_007af5e0 */
GEN_FRAME unsigned int GEN_THISCALL F_007af5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7af5e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = F_0055a2a0(*param_2 GEN_EDX_FWD);
    if ((short)uVar1 != (short)param_3) {
      *(undefined1 *)(in_ecx + 0x12f8) = 1;
      F_0055a2b0(*param_2 GEN_EDX_ARG,param_3);
    }
  }
  return;
}

/* ref: FUN_007af620 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007af620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7af620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x12f8) != '\0') {
    F_00591da0((undefined *)((int)this + 0x24) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x12f8) = 0;
  }
  return;
}

/* ref: FUN_007af640 */
GEN_NOFRAME uint GEN_THISCALL F_007af640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7af640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd4cc));
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
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesis::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007af6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7af6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  return 0;
}

/* ref: Client::UI2::AddonSynthesis::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007af700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7af700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Synthesis",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSynthesis::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_007af710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7af710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (((short)param_1 == 0x17) && ((*(int *)&gen_a2) == 0)) {
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::UI2::AddonSynthesis::vf46 */
GEN_FRAME byte GEN_THISCALL F_007af750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7af750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  uint uVar5;
  undefined * this_00;
  
  if (param_2 != (byte *)0x0) {
    if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
      if ((param_2[8] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0xc);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_FWD,uVar1);
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      F_00595190(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar1,0,0);
      F_0055a410(*(undefined4 *)(this + 0x188) GEN_EDX_ARG,1);
      F_00561990(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*(undefined4 *)(this + 0x188));
      F_005a2870(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,0);
      if ((param_2[0x28] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x2c);
      }
      F_005a28a0(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,uVar1);
      if ((param_2[0x28] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x2c);
      }
      F_0055dcb0();
      uVar2 = F_0056a410(uVar1);
      F_00584110(*(undefined * PTR32 *)(this + 0x1b0) GEN_EDX_ARG,uVar2);
      F_005a2870(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,0);
      if ((param_2[0x70] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x74);
      }
      F_005a28a0(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,uVar1);
      if ((param_2[0x70] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x74);
      }
      F_0055dcb0();
      uVar2 = F_0056a410(uVar1);
      F_00584110(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,uVar2);
      if ((param_2[0x38] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x3c);
      }
      F_0055dcb0();
      uVar2 = F_0056a410(uVar1);
      F_00584110(*(undefined * PTR32 *)(this + 0x1b8) GEN_EDX_ARG,uVar2);
      if (((param_2[0x18] & 0xf) == 0) || (uVar2 = *(uint *)(param_2 + 0x1c), uVar2 < 2)) {
        this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0xb8)));
        puVar3 = &REFG(undefined1, 0x10bea13);
      }
      else {
        this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0xb8)));
        F_0055dcb0();
        puVar3 = (undefined1 *)F_0056a410(uVar2);
      }
      F_00584110(this_00 GEN_EDX_ARG,puVar3);
      uVar1 = 1;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x38))))(*(int * PTR32 *)(this + 0x184) GEN_EDX_ARG);
      F_0055a3c0(uVar2 GEN_EDX_ARG,uVar1);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    *(undefined4 *)(this + 0x1bc) = uVar1;
    F_005a04e0(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,uVar1,0);
    uVar1 = *(undefined4 *)(this + 0x1bc);
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x1ac) GEN_EDX_ARG,uVar2);
    if ((param_2[0x40] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x44);
    }
    *(undefined4 *)(this + 0x1c0) = uVar1;
    F_005a04e0(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,uVar1,0);
    uVar1 = *(undefined4 *)(this + 0x1c0);
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,uVar2);
    if ((param_2[0x30] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x34);
    }
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x1b4) GEN_EDX_ARG,uVar2);
    if ((param_2[0x60] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 100);
    }
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,uVar2);
    if ((param_2[0x48] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x4c);
    }
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_ARG,uVar2);
    if ((param_2[0x58] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x5c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,uVar1);
    if ((param_2[0x50] & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x54);
    }
    uVar2 = 0;
    if (iVar4 == 0) {
      uVar2 = 0xffffffff;
    }
    else if (iVar4 == 1) {
      uVar2 = 0xff5185fb;
    }
    else if (iVar4 == 2) {
      uVar2 = 0xff5680ff;
    }
    uVar5 = F_0055aa80(*(undefined4 *)(this + 400) GEN_EDX_ARG);
    if (uVar2 != uVar5) {
      uVar2 = F_005612d0(uVar2);
      F_0055aa30(*(undefined4 *)(this + 400) GEN_EDX_ARG,uVar2);
    }
    return 1;
  }
  return 1;
}

/* ref: Client::UI2::AddonSynthesis::vf38 */
GEN_FRAME uint GEN_THISCALL F_007afa60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7afa60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0xf9) & 1) != 0) {
    iVar3 = 1;
    bVar1 = F_0056c7e0();
    if (bVar1 != 0) {
      uVar2 = F_0055dcb0();
      iVar3 = (*((int *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) + 2;
    }
    if (*(int *)(param_1 + 0x1c4) != iVar3) {
      F_0059d670(*(undefined * PTR32 *)(param_1 + 0x1cc) GEN_EDX_ARG,(iVar3 != 3) + 0x65);
      *(int *)(param_1 + 0x1c4) = iVar3;
    }
  }
  uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: FUN_007afae0 */
GEN_NOFRAME uint GEN_THISCALL F_007afae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7afae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd5cc));
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
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007afb70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7afb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x1ac) = 0;
  return uVar1;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007afb90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7afb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SynthesisSimple",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf46 */
GEN_FRAME byte GEN_THISCALL F_007afba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7afba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 4);
    }
    uVar1 = F_0055dcb0();
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x30);
    if (iVar3 == 0) {
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      F_00584110(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,uVar2);
      F_005a2870(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,0);
      if ((param_2[0x20] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x24);
      }
      F_005a28a0(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar2);
      if ((param_2[0x20] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x24);
      }
      F_0055dcb0();
      uVar1 = F_0056a410(uVar2);
      F_00584110(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,uVar1);
      if ((param_2[0x10] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x14);
      }
      F_00595190(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,uVar2,0,0);
      uVar2 = 1;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x38))))(*(int * PTR32 *)(this + 0x188) GEN_EDX_ARG);
      F_0055a3c0(uVar1 GEN_EDX_ARG,uVar2);
      F_0055a410(*(undefined4 *)(this + 0x18c) GEN_EDX_ARG,1);
      F_00561990(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,*(undefined4 *)(this + 0x18c));
      uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0xde,0,0);
      F_00589280(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar1);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x1c);
    }
    if (iVar3 == *(int *)(this + 0x1a8)) {
      F_005a04e0(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*(int *)(this + 0x1a8),1);
    }
    else {
      F_005a04e0(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,iVar3,1);
      *(int *)(this + 0x1a8) = iVar3;
      if (*((int *)GEN_TOP((*(int *)(this + 0x184) + 0xe0))) == iVar3) {
        uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x283,0,0);
        F_00589280(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar1);
      }
    }
    uVar2 = *(undefined4 *)(this + 0x1a8);
    F_0055dcb0();
    uVar1 = F_0056a410(uVar2);
    F_00584110(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,uVar1);
    if ((param_2[0x28] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_0055dcb0();
    uVar1 = F_0056a410(uVar2);
    F_00584110(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_ARG,uVar1);
    if ((param_2[0x30] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x34);
    }
    F_0055dcb0();
    uVar1 = F_0056a410(uVar2);
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,uVar1);
    if ((param_2[0x40] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x44);
    }
    F_0055dcb0();
    uVar1 = F_0056a410(uVar2);
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,uVar1);
  }
  return 1;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_007afdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7afdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf47 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007afe00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7afe00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf38 */
GEN_FRAME uint GEN_THISCALL F_007afe10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7afe10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0xf9) & 1) != 0) {
    iVar3 = 1;
    bVar1 = F_0056c7e0();
    if (bVar1 != 0) {
      uVar2 = F_0055dcb0();
      iVar3 = (*((int *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) + 2;
    }
    if (*(int *)(param_1 + 0x1ac) != iVar3) {
      F_0059d670(*(undefined * PTR32 *)(param_1 + 0x1b4) GEN_EDX_ARG,(iVar3 != 3) + 0x65);
      *(int *)(param_1 + 0x1ac) = iVar3;
    }
  }
  uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: FUN_007afe90 */
GEN_NOFRAME uint GEN_THISCALL F_007afe90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7afe90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd6cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesisSimpleDialog::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007afef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7afef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SynthesisSimpleDialog",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSynthesisSimpleDialog::vf25 */
GEN_FRAME uint GEN_THISCALL F_007aff00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aff00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007aff30 */
GEN_NOFRAME uint GEN_THISCALL F_007aff30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7aff30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd7cc));
  *(undefined4 *)((int)this + 0x854) = 0;
  *(undefined4 *)((int)this + 0x8f8) = 0;
  *(undefined4 *)((int)this + 0x8fc) = 0;
  *(undefined4 *)((int)this + 0x910) = 0;
  *(undefined2 *)((int)this + 0x914) = 0;
  *(undefined4 *)((int)this + 0x94c) = 0;
  *(undefined4 *)((int)this + 0x950) = 0;
  *(undefined4 *)((int)this + 0x954) = 0;
  *(undefined4 *)((int)this + 0x958) = 0;
  *(undefined4 *)((int)this + 0x95c) = 0;
  *(undefined4 *)((int)this + 0x960) = 0;
  *(undefined4 *)((int)this + 0x964) = 0;
  *(undefined4 *)((int)this + 0x968) = 0;
  *(undefined4 *)((int)this + 0x96c) = 0;
  *(undefined4 *)((int)this + 0x970) = 0;
  *(undefined4 *)((int)this + 0x974) = 0;
  *(undefined4 *)((int)this + 0x978) = 0;
  *(undefined4 *)((int)this + 0x97c) = 0;
  *(undefined4 *)((int)this + 0x980) = 0;
  *(undefined4 *)((int)this + 0x984) = 0;
  *(undefined4 *)((int)this + 0x988) = 0;
  *(undefined4 *)((int)this + 0x98c) = 0;
  *(undefined4 *)((int)this + 0x990) = 0;
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
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this GEN_EDX_ARG,0x1000000,1);
  *(undefined4 *)((int)this + 0x954) = 0;
  *(undefined4 *)((int)this + 0x94c) = 0x40;
  *(undefined4 *)((int)this + 0x95c) = 0x1000;
  *(undefined4 *)((int)this + 0x964) = 0x2000;
  *(undefined4 *)((int)this + 0x96c) = 0x80000;
  *(undefined4 *)((int)this + 0x974) = 0x100000;
  *(undefined4 *)((int)this + 0x984) = 0x800000;
  *(undefined4 *)((int)this + 0x97c) = 0x400000;
  *(undefined4 *)((int)this + 0x98c) = 0x1000000;
  *(undefined4 *)((int)this + 0x950) = 0xe;
  *(undefined4 *)((int)this + 0x958) = 0x15;
  *(undefined4 *)((int)this + 0x960) = 0xf;
  *(undefined4 *)((int)this + 0x968) = 0x10;
  *(undefined4 *)((int)this + 0x970) = 0x11;
  *(undefined4 *)((int)this + 0x978) = 0x12;
  *(undefined4 *)((int)this + 0x988) = 0x14;
  *(undefined4 *)((int)this + 0x980) = 0x13;
  *(undefined4 *)((int)this + 0x990) = 0x19;
  return (uint)this;
}

/* ref: Client::UI2::AddonActionMenu::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007b0110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonActionMenu::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b0140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ActionMenu",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonActionMenu::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b0150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 4;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007b01c0 */
GEN_FRAME uint GEN_THISCALL F_007b01c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b01c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  uint uVar1;
  char * pcVar2;
  
  if (param_2 < 1) {
    F_00584110(*(undefined * PTR32 *)((int)this + 0x948) GEN_EDX_FWD,"");
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x938) GEN_EDX_ARG,0);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x93c) GEN_EDX_ARG,"");
    pcVar2 = "";
  }
  else {
    F_00584110(*(undefined * PTR32 *)((int)this + 0x948) GEN_EDX_ARG,param_1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x938) GEN_EDX_ARG,1);
    F_00591c00(*(undefined * PTR32 *)((int)this + 0x938) GEN_EDX_ARG,param_2,0);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x93c) GEN_EDX_ARG,param_3);
    pcVar2 = param_4;
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x940) GEN_EDX_ARG,pcVar2);
  uVar1 = F_007851d0(*(undefined4 *)((int)this + 0x934),*(undefined4 *)((int)this + 0x938),
                       *(undefined4 *)((int)this + 0x93c),*(undefined4 *)((int)this + 0x940),
                       *(undefined4 *)((int)this + 0x944),*(undefined4 *)((int)this + 0x948),
                       (uint)*(ushort *)((int)this + 0x910),(uint)*(ushort *)((int)this + 0x912),
                       (uint)*(ushort *)((int)this + 0x914));
  return uVar1;
}

/* ref: FUN_007b02a0 */
GEN_FRAME uint GEN_THISCALL F_007b02a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b02a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_1;
  if (param_1 < *(uint *)((int)this + 0x854)) {
    uVar4 = *(undefined4 *)((int)this + param_1 * 0x1c + 0x2dc);
    pvVar1 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_FWD);
    F_00584110(pvVar1 GEN_EDX_ARG,uVar4);
    F_005951c0(param_3 GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 0x1c + 0x2e8),0,0);
    if (*(char *)((int)this + param_1 * 0x1c + 0x2f4) == '\0') {
      uVar4 = 0x65;
    }
    else {
      uVar4 = 0x17;
    }
    uVar3 = 3;
    pvVar1 = (undefined *)F_00559c20(*param_2 GEN_EDX_ARG);
    pvVar1 = (undefined *)F_00561490(pvVar1 GEN_EDX_ARG,uVar3);
    uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,uVar4);
  }
  return uVar2;
}

/* ref: FUN_007b0320 */
GEN_FRAME uint GEN_THISCALL F_007b0320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  uint3 uVar2;
  int iVar1;
  int * piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  local_8 = (undefined4 *)((int)this + 400);
  uVar5 = 0;
  do {
    piVar3 = (int *)*local_8;
    if (piVar3 != (int *)0x0) {
      F_0059dde0(piVar3 GEN_EDX_FWD,(uint)(uVar5 == *(uint *)((int)this + 0x8f8)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,(uint)*(byte *)(uVar5 + 0x230 + (int)this));
    }
    local_8 = local_8 + 1;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 10);
  puVar6 = (undefined4 *)((int)this + 0x1bc);
  local_8 = (undefined4 *)0x0;
  piVar3 = (int *)((int)this + 0x240);
  do {
    this_00 = (int *)puVar6[-1];
    if (piVar3[-1] == 0) {
      F_00584110((undefined *)puVar6[1] GEN_EDX_ARG,"");
    }
    else {
      F_0057eb30((undefined *)puVar6[1] GEN_EDX_ARG,piVar3[-1],0,0,0,0);
    }
    F_00589280(this_00 GEN_EDX_ARG,piVar3[1]);
    uVar5 = F_0059dde0(this_00 GEN_EDX_ARG,(uint)(local_8 == (undefined4 *)*(uint *)((int)this + 0x8fc)));
    uVar2 = (uint3)(uVar5 >> 8);
    if (((char)piVar3[2] == '\0') || (*(char *)((int)this + 0x233) == '\0')) {
      iVar1 = (uint)uVar2 << 8;
    }
    else {
      iVar1 = CONCAT31(uVar2,1);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x28))(this_00 GEN_EDX_ARG,iVar1);
    F_0055a300((undefined *)*puVar6 GEN_EDX_ARG,(uint)(*piVar3 != 0));
    F_00591c00((undefined *)*puVar6 GEN_EDX_ARG,*piVar3,0);
    local_8 = (undefined4 *)((int)local_8 + 1);
    puVar6 = puVar6 + 3;
    piVar3 = piVar3 + 4;
  } while (local_8 < 10);
  iVar1 = *(int *)((int)this + 0x900);
  uVar4 = 0;
  if (iVar1 == 0) {
    uVar4 = 0x65;
  }
  else if (iVar1 == 1) {
    uVar4 = 0x66;
  }
  else if (iVar1 == 2) {
    uVar4 = 0x67;
  }
  F_0059d670(*(undefined * PTR32 *)((int)this + 0x918) GEN_EDX_ARG,uVar4);
  uVar5 = F_0059d670(*(undefined * PTR32 *)((int)this + 0x920) GEN_EDX_ARG,uVar4);
  return uVar5;
}

/* ref: FUN_007b0480 */
GEN_FRAME uint GEN_THISCALL F_007b0480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if ((param_2 < 10) && (*(char *)((int)this + param_2 * 0x10 + 0x248) != '\0')) {
    *(uint *)((int)this + 0x8fc) = param_2;
  }
  else {
    *(undefined4 *)((int)this + 0x8fc) = 10;
  }
  if (param_1 < 10) {
    *(uint *)((int)this + 0x8f8) = param_1;
  }
  else {
    *(undefined4 *)((int)this + 0x8f8) = 0;
  }
  uVar1 = *(uint *)((int)this + 0x8f8);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 1: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x924) GEN_EDX_FWD,0x65);
    uVar1 = F_0059ead0(*(undefined * PTR32 *)((int)this + 0x180) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x854),0,1);
    return uVar1;
  case 2: ;
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x924) GEN_EDX_ARG,0x66);
    uVar1 = F_0059ead0(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x854),0,1);
    return uVar1;
  case 3: ;
    F_0059ead0(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x908),0,1);
    if (*(uint *)((int)this + 0x8fc) < 10) {
      F_0059d670(*(undefined * PTR32 *)((int)this + 0x924) GEN_EDX_ARG,0x68);
      uVar1 = F_0059ead0(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x854),0,1);
      return uVar1;
    }
    uVar1 = F_0059d670(*(undefined * PTR32 *)((int)this + 0x924) GEN_EDX_ARG,0x67);
  }
  return uVar1;
}

/* ref: FUN_007b05b0 */
GEN_FRAME unsigned int GEN_THISCALL F_007b05b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b05b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (param_1 < 10) {
    if ((char)param_3 != '\0') {
      if ((param_1 == 3) && (*(uint *)((int)this + 0x8fc) < 10)) {
        F_0059b390(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + *(uint *)((int)this + 0x8fc) * 0xc + 0x1b8))),1,
                     0);
        return;
      }
      F_0059b390(this GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 4 + 400),1,0);
      return;
    }
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
    case 1: ;
    case 4: ;
    case 5: ;
    case 6: ;
    case 7: ;
    case 8: ;
    case 9: ;
      F_0059b390(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x180),1,0);
      return;
    case 2: ;
      F_0059b390(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x184),1,0);
      return;
    case 3: ;
      if (-1 < param_2) {
        F_0059b390(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18c),1,0);
        return;
      }
      F_0059b390(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x188),1,0);
    }
  }
  return;
}

/* ref: FUN_007b0690 */
GEN_FRAME uint GEN_THISCALL F_007b0690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  
  F_0056b780(this GEN_EDX_FWD,0);
  uVar2 = param_1;
  if (param_1 != 0) {
    if (param_1 == *(uint *)((int)this + 0x180)) {
      bVar1 = F_0056b630(this GEN_EDX_ARG,0x2a7,7,0,9,0,0);
      return CONCAT31(extraout_var,bVar1);
    }
    if (param_1 == *(uint *)((int)this + 0x18c)) {
      bVar1 = F_0056b630(this GEN_EDX_ARG,0x18aa6,7,0,9,0,0);
      return CONCAT31(extraout_var_00,bVar1);
    }
    if (param_1 == *(uint *)((int)this + 0x188)) {
      if ((char)param_2 == '\0') {
        uVar2 = F_0055dcb0();
        if (*(char *)(uVar2 + 0xbc) == '\0') {
          bVar1 = F_0056b630(this GEN_EDX_ARG,0x18aa7,7,0,9,0,0);
          return CONCAT31(extraout_var_01,bVar1);
        }
      }
      bVar1 = F_0056b630(this GEN_EDX_ARG,0x18ae9,7,0,9,0,0);
      uVar2 = CONCAT31(extraout_var_02,bVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_007b0780 */
GEN_NOFRAME uint GEN_THISCALL F_007b0780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd8cc));
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
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonGathering::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b0810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGathering::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b0850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Gathering",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGathering::vf45 */
GEN_FRAME uint GEN_THISCALL F_007b0860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x80;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007b0890 */
GEN_FRAME uint GEN_THISCALL F_007b0890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b0890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = param_3;
  if (*(char *)(param_3 + 6) == '\0') {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
    uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_007b08e0 */
GEN_FRAME uint GEN_THISCALL F_007b08e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b08e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 < 8) && (pvVar1 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x180), pvVar1 != (undefined *)0x0)
     ) {
    pvVar1 = (undefined *)F_00561490(pvVar1 GEN_EDX_FWD,3);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      if ((char)param_2 != '\0') {
        uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,1);
        return uVar2;
      }
      uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,0x11);
    }
  }
  return uVar2;
}

/* ref: FUN_007b0920 */
GEN_FRAME uint GEN_THISCALL F_007b0920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 < 8) && (pvVar1 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x180), pvVar1 != (undefined *)0x0)
     ) {
    pvVar1 = (undefined *)F_00561490(pvVar1 GEN_EDX_FWD,8);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      if ((char)param_2 != '\0') {
        uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,1);
        return uVar2;
      }
      uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,0x11);
    }
  }
  return uVar2;
}

/* ref: FUN_007b0960 */
GEN_FRAME uint GEN_THISCALL F_007b0960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 < 8) && (pvVar1 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x180), pvVar1 != (undefined *)0x0)
     ) {
    pvVar1 = (undefined *)F_00561490(pvVar1 GEN_EDX_FWD,2);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      if (param_2 == 0) {
        uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,0x11);
        return uVar2;
      }
      if (param_2 == 1) {
        uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,0x65);
        return uVar2;
      }
      uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,0x66);
    }
  }
  return uVar2;
}

/* ref: FUN_007b09b0 */
GEN_FRAME byte GEN_THISCALL F_007b09b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b09b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  if (((*(uint *)((int)this + 0x1a8) & uVar1) != 0) && ((*(uint *)((int)this + 0x1ac) & uVar1) == 0)
     ) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007b09e0 */
GEN_NOFRAME uint GEN_THISCALL F_007b09e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b09e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd9cc));
  F_0042c880((undefined *)((int)this + 0x2e4) GEN_EDX_FWD);
  iVar2 = 2;
  this_00 = (undefined *)((int)this + 0x2e0);
  do {
    this_00 = (undefined *)((int)this_00 - 100);
    F_0042c880(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFateReward::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b0a20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFateReward::vf38 */
GEN_FRAME uint GEN_THISCALL F_007b0a60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7b0a60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if ((*(byte *)((int)param_1 + 0xf9) & 1) != 0) {
    if (((float10)GEN_TOD(gen_bits2f(param_1[0xd0]))) <= (float10)*(double *)&REFG(undefined, 0x10944c8)) {
      param_1[0xd0] =
           (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0xd0]))) + (float10)param_2));
    }
    else {
      uVar1 = F_0055dcb0();
      F_00594d90((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,1);
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 100))(param_1 GEN_EDX_ARG);
      param_1[0xd0] = 0;
    }
  }
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonFateReward::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b0ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FateReward",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFateReward::vf46 */
GEN_FRAME byte GEN_THISCALL F_007b0ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined1 AVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined * pvVar6;
  byte * pbVar7;
  undefined * pAVar8;
  undefined4 uVar9;
  uint local_10;
  int local_c;
  
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (*(undefined * PTR32 *)(this + 0x33c) != (undefined *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x33c) GEN_EDX_FWD,uVar3);
  }
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    if ((param_2[0x18] & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x1c);
    }
    F_0059d670(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,iVar4 + 0x65);
    if (*(int *)(this + 0x188) != 0) {
      uVar5 = F_00559b90(*(int *)(this + 0x188) GEN_EDX_ARG);
      F_00559c20(*(undefined4 *)(this + 0x180) GEN_EDX_ARG);
      uVar5 = F_0055da10(uVar5);
      if (uVar5 != 0) {
        if ((param_2[8] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_2 + 0xc);
        }
        F_0058f730((undefined *)(uVar5 + 4) GEN_EDX_ARG,uVar3,0,6);
      }
    }
  }
  if (((param_2[0x10] & 0xf) == 0) || (*(int *)(param_2 + 0x14) < 1)) {
    pvVar6 = *(undefined * PTR32 *)(this + 0x18c);
    if (pvVar6 != (undefined *)0x0) {
      uVar3 = 0x66;
      goto LAB_007b0b9b;
    }
  }
  else {
    pvVar6 = *(undefined * PTR32 *)(this + 0x18c);
    if (pvVar6 != (undefined *)0x0) {
      uVar3 = 0x65;
LAB_007b0b9b: ;
      F_0059d640(pvVar6 GEN_EDX_ARG,uVar3);
    }
  }
  if (*(int *)(this + 0x1a0) == 0) {
    return 1;
  }
  uVar3 = 0x65;
  if ((param_2[0x98] & 0xf) == 0) {
    AVar1 = (undefined1)0x0;
  }
  else {
    AVar1 = SUB41(*(undefined4 *)(param_2 + 0x9c),0);
  }
  this[0x344] = AVar1;
  switch((unsigned int)(uintptr_t)(AVar1)) {
  case (undefined1)0x1: ;
    uVar9 = 0xe;
    break;
  case (undefined1)0x2: ;
    uVar3 = 0x67;
    goto LAB_007b0bf4;
  case (undefined1)0x3: ;
    uVar3 = 0x66;
    uVar9 = 0xf;
    break;
  case (undefined1)0x4: ;
    uVar3 = 0x68;
LAB_007b0bf4: ;
    uVar9 = 0x10;
    break;
  default: ;
    goto switchD_007b0bd4_default;
  }
  uVar5 = F_0055e2f0(this GEN_EDX_ARG,uVar9);
  *(uint *)(uVar5 + 0x88) = *(uint *)(uVar5 + 0x88) | 0x40;
switchD_007b0bd4_default: ;
  F_0059d670(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,uVar3);
  bVar2 = 3 - ((byte)this[0x344] < 3);
  if (bVar2 != 0) {
    local_10 = (uint)bVar2;
    pbVar7 = param_2 + 0x44;
    local_c = 0;
    pAVar8 = this + 0x1ac;
    do {
      if ((*(int *)(pAVar8 - 4) != 0) && (*(int *)pAVar8 != 0)) {
        F_00563db0(*(int *)(pAVar8 - 4) GEN_EDX_ARG,1);
        if ((pbVar7[-0x24] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar7 - 0x20);
        }
        F_0058bba0(*(undefined * PTR32 *)(pAVar8 - 4) GEN_EDX_ARG,uVar3);
        uVar5 = F_00559b90(*(int *)pAVar8 GEN_EDX_ARG);
        F_00559c20(*(undefined4 *)(this + 0x1a0) GEN_EDX_ARG);
        uVar5 = F_0055da10(uVar5);
        if (uVar5 != 0) {
          if ((pbVar7[-4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)pbVar7;
          }
          F_0058f730((undefined *)(uVar5 + 4) GEN_EDX_ARG,uVar3,0,6);
        }
        if ((pbVar7[0x34] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar7 + 0x38);
        }
        F_0042e430(pAVar8 + 8 GEN_EDX_ARG,uVar3);
        F_00568380(*(undefined * PTR32 *)pAVar8 GEN_EDX_ARG,6,local_c,this,0,0);
        F_00568380(*(undefined * PTR32 *)pAVar8 GEN_EDX_ARG,7,local_c,this,0,0);
      }
      local_c = local_c + 1;
      pbVar7 = pbVar7 + 8;
      pAVar8 = pAVar8 + 100;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  if ((this[0x344] == (undefined1)0x2) || (this[0x344] == (undefined1)0x4)) {
    if ((param_2[0x58] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x5c);
    }
    F_00595190(*(undefined * PTR32 *)(this + 0x2dc) GEN_EDX_ARG,uVar3,0,0);
    if ((param_2[0x60] & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 100);
    }
    *(int *)(this + 0x2d4) = iVar4;
    if (1 < iVar4) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2dc) + 0xbc)));
      uVar5 = F_00560910(iVar4);
      F_00584110(pvVar6 GEN_EDX_ARG,uVar5);
    }
    if ((param_2[0x68] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x6c);
    }
    *(undefined4 *)(this + 0x2d0) = uVar3;
    if ((param_2[0x70] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x74);
    }
    F_0042e430(this + 0x2e4 GEN_EDX_ARG,uVar3);
    F_00568380(*(undefined * PTR32 *)(this + 0x2e0) GEN_EDX_ARG,6,10,this,0,0);
    F_00568380(*(undefined * PTR32 *)(this + 0x2e0) GEN_EDX_ARG,7,10,this,0,0);
  }
  return 1;
}

/* ref: FUN_007b0de0 */
GEN_FRAME uint F_007b0de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0de0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  
  uVar1 = F_0055a020(param_3 GEN_EDX_ARG);
  *param_1 = ((float)GEN_TOF(((float10)(uVar1 >> 1) + (float10)*param_1)));
  *param_2 = (float)((float10)*param_2 + (float10)*(double *)&REFG(undefined, 0x10cdac8));
  return (uint)param_2;
}

/* ref: Client::UI2::AddonRepair::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007b0e10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00c48350(this + 0x1b8,0,0x47e0);
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonRepair::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b0e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Repair",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonRepair::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b0e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b0e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonRepair::vf47 */
GEN_FRAME uint GEN_THISCALL F_007b0e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_2 + 0x80);
  uVar2 = param_2;
  if (iVar1 != 0) {
    uVar2 = F_0055a2d0(*(undefined4 *)(this + 0x184) GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      uVar2 = F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,**(undefined4 * PTR32 *)(iVar1 + 0x20));
    }
  }
  return uVar2;
}

/* ref: FUN_007b0ed0 */
GEN_FRAME uint GEN_THISCALL F_007b0ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b0ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)(param_1 * 0xb8 + 0x1b8 + (int)this);
  uVar2 = F_00559b90(*param_2 GEN_EDX_FWD);
  if (uVar2 != 0) {
    F_005951c0(param_3 GEN_EDX_ARG,*puVar1,0,uVar2);
  }
  F_00568230(param_2[1] GEN_EDX_ARG,GEN_TOF(gen_bits2f(puVar1[0x16])));
  pvVar3 = (undefined *)F_00559ba0(param_2[5] GEN_EDX_ARG);
  uVar2 = F_0042a990(puVar1 + 1 GEN_EDX_ARG);
  F_00584110(pvVar3 GEN_EDX_ARG,uVar2);
  pvVar3 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
  uVar2 = F_0042a990(puVar1 + 0x17 GEN_EDX_ARG);
  uVar2 = F_00584110(pvVar3 GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: FUN_007b0f50 */
GEN_FRAME uint GEN_THISCALL F_007b0f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7b0f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (0 < param_1) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_FWD,1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,1);
    uVar2 = F_0055dcb0();
    uVar2 = F_00461d60(*(undefined * PTR32 *)(uVar2 + 0x30) GEN_EDX_ARG,0x364,param_1,0,param_5);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,uVar2);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,(uint)(0 < param_2));
    if (0 < param_2) {
      F_00591c00(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,param_2,0);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,param_3);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,param_4);
    uVar2 = (uint)*(ushort *)((int)this + 0x1b4);
    uVar5 = (uint)*(ushort *)((int)this + 0x1b2);
    uVar6 = (uint)*(ushort *)((int)this + 0x1b0);
    uVar10 = *(undefined4 *)((int)this + 0x188);
    uVar3 = F_0055e2f0(this GEN_EDX_ARG,4);
    uVar9 = *(undefined4 *)((int)this + 0x194);
    uVar8 = *(undefined4 *)((int)this + 400);
    uVar7 = *(undefined4 *)((int)this + 0x18c);
    uVar4 = F_0055e2f0(this GEN_EDX_ARG,6);
    uVar2 = F_007851d0(uVar4,uVar7,uVar8,uVar9,uVar3,uVar10,uVar6,uVar5,uVar2);
    return uVar2;
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,0);
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007b1100 */
GEN_FRAME byte GEN_THISCALL F_007b1100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_007b1110 */
GEN_FRAME unsigned int GEN_THISCALL F_007b1110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b1110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  byte bVar1;
  
  bVar1 = F_0055a1f0(*(undefined4 *)((int)this + 0x18) GEN_EDX_FWD);
  F_0055a120(*(undefined4 *)((int)this + 0x18) GEN_EDX_ARG,(uint)bVar1 << 0x18 | param_1 & 0xffffff);
  bVar1 = F_0055a1f0(*(undefined4 *)((int)this + 0x1c) GEN_EDX_ARG);
  F_0055a120(*(undefined4 *)((int)this + 0x1c) GEN_EDX_ARG,(uint)bVar1 << 0x18 | param_2 & 0xffffff);
  bVar1 = F_0055a1f0(*(undefined4 *)((int)this + 0x14) GEN_EDX_ARG);
  F_0055a120(*(undefined4 *)((int)this + 0x14) GEN_EDX_ARG,(uint)bVar1 << 0x18 | param_3 & 0xffffff);
  return;
}

/* ref: FUN_007b1190 */
GEN_FRAME uint GEN_THISCALL F_007b1190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined3 extraout_var = 0;
  uint uVar1;
  
  if (0 < param_1) {
    F_00591c00(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD,param_1,0);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_ARG,1);
    uVar1 = F_0055a3c0(*(undefined4 *)((int)this + 0x24) GEN_EDX_ARG,
                         CONCAT31(extraout_var,*(char *)((int)this + 0x2e) == '\0'));
    return uVar1;
  }
  F_0058f5b0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_ARG,0);
  uVar1 = F_0055a3c0(*(undefined4 *)((int)this + 0x24) GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_007b1200 */
GEN_FRAME uint GEN_THISCALL F_007b1200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1200u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xfe))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xfe))) & 0x7f;
  F_00577d20((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined * PTR32 *)&gen_args[1]),0,0,REFG(undefined4, 0x108cc50),0);
  *(byte *)((int)this_00 + 0xfe) = *(byte *)((int)this_00 + 0xfe) | 0x80;
  uVar3 = F_00577bc0(this_00 GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uVar3 & 0xffff);
  uVar1 = F_0055a020(this_00 GEN_EDX_ARG);
  uVar3 = (uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xffff;
  uVar2 = F_0055a020(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG);
  uVar3 = F_00559eb0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,
                       (uint)(ushort)(((short)((int)(uVar1 - uVar3) >> 1) - uVar2) + 6));
  return uVar3;
}

/* ref: FUN_007b1290 */
GEN_FRAME uint GEN_THISCALL F_007b1290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b1290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (param_1 != 0) {
    F_0055a060(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD,param_1);
    uVar1 = F_0055a020(*(undefined4 *)this GEN_EDX_ARG);
    F_00559eb0(*(undefined4 *)((int)this + 0x20) GEN_EDX_ARG,(int)((uint)uVar1 - param_1) >> 1);
    F_0055a080(*(undefined4 *)((int)this + 0x20) GEN_EDX_ARG,param_2);
    F_00559f40(*(undefined4 *)((int)this + 0x20) GEN_EDX_ARG,param_3);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,1);
    uVar2 = F_0055a3c0(*(undefined4 *)((int)this + 0x20) GEN_EDX_ARG,
                         CONCAT31(extraout_var,*(char *)((int)this + 0x2e) == '\0'));
    return uVar2;
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,0);
  uVar2 = F_0055a3c0(*(undefined4 *)((int)this + 0x20) GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: FUN_007b1310 */
GEN_FRAME uint GEN_THISCALL F_007b1310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = F_0055a690(*(undefined4 *)this GEN_EDX_FWD);
  if ((char)uVar1 != (char)param_1) {
    F_0055a6b0(*(undefined4 *)this GEN_EDX_ARG,param_1);
    uVar2 = F_00559c20(*(undefined4 *)this GEN_EDX_ARG);
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = *(uint *)(uVar2 + 0xc);
      if (uVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(ushort *)(uVar2 + 0x1a) + *(int *)(uVar1 + 4);
      }
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          uVar1 = F_00578ee0((undefined *)(uVar2 + 4) GEN_EDX_ARG,uVar3);
          uVar1 = F_0055a6b0(uVar1 GEN_EDX_ARG,param_1);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007b1380 */
GEN_NOFRAME uint GEN_THISCALL F_007b1380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdad4));
  *(undefined4 *)((int)this + 0x180) = 0;
  puVar2 = (undefined4 *)((int)this + 0x184);
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x68;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x800;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xef | 0x40;
  F_0055e2a0(this GEN_EDX_ARG,4,1);
  F_0055e2a0(this GEN_EDX_ARG,0x20000000,0);
  return (uint)this;
}

/* ref: Client::UI2::AddonNamePlate::vf36 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007b1410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  uVar6 = 0;
  uVar7 = 0;
  uVar1 = F_00404270();
  puVar2 = (undefined4 *)F_00406c00(0x964,0,uVar1,uVar7);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = 0x32;
    iVar5 = 0x31;
    puVar2 = puVar3;
    do {
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
      *(undefined2 *)(puVar2 + 10) = 0;
      *(undefined4 *)((int)puVar2 + 0x2a) = 0;
      *(undefined2 *)((int)puVar2 + 0x2e) = 0;
      puVar2 = puVar2 + 0xc;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  *(undefined4 * PTR32 *)(this + 0x180) = puVar3;
  pAVar4 = this + 0x184;
  do {
    *(uint *)pAVar4 = *(int *)(this + 0x180) + uVar6;
    uVar6 = uVar6 + 0x30;
    pAVar4 = pAVar4 + 4;
  } while (uVar6 < 0x960);
  return 0;
}

/* ref: Client::UI2::AddonNamePlate::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007b14b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b14b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  *(undefined1 *)(uVar1 + 0x21b) = 0;
  uVar1 = F_0055dcb0();
  F_005aa060((undefined *)(uVar1 + 0x20c) GEN_EDX_ARG,0,0);
  F_005a92d0(this GEN_EDX_ARG,1,5,0);
  F_005a92d0(this GEN_EDX_ARG,0,4,0);
  if (*(int *)(this + 0x180) != 0) {
    F_00406b30(*(int *)(this + 0x180) - 4);
    *(undefined4 *)(this + 0x180) = 0;
  }
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonNamePlate::vf41 */
GEN_FRAME byte GEN_THISCALL F_007b1520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x31;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this GEN_EDX_ARG,"NamePlate",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonNamePlate::vf54 */
GEN_FRAME uint GEN_THISCALL F_007b1570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7b1570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_007b1590 */
GEN_FRAME uint GEN_THISCALL F_007b1590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = F_0055dcb0();
  *(undefined1 *)(uVar2 + 0x21b) = 0;
  iVar3 = param_1 * 0x30 + *(int *)((int)this + 0x180);
  if (iVar3 == 0) {
switchD_007b15c4_default: ;
    uVar4 = 0xb;
  }
  else {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(iVar3 + 0x2c))) {
    case 0: ;
      if (*(char *)(iVar3 + 0x2f) == '\0') {
        uVar4 = 2;
      }
      else {
        uVar4 = 5;
      }
      break;
    case 1: ;
    case 2: ;
      uVar4 = 3;
      break;
    case 3: ;
      uVar4 = 5;
      break;
    case 4: ;
    case 5: ;
    case 6: ;
    case 7: ;
      uVar4 = 4;
      break;
    default: ;
      goto switchD_007b15c4_default;
    }
  }
  F_005aa060((undefined *)(uVar2 + 0x20c) GEN_EDX_ARG,uVar4,1);
  *(undefined1 *)(uVar2 + 0x21b) = 1;
  uVar1 = *(ushort *)(iVar3 + 0x2a);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(undefined1 *)(gen_frame + 0x10)) = 1;
  uVar2 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x28,2,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  this_00 = ((undefined1 *)(gen_frame + 0x14));
  iVar3 = 1;
  do {
    this_00 = this_00 - 8;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007b1680 */
GEN_FRAME uint GEN_THISCALL F_007b1680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined1 * this_00;
  
  uVar2 = F_0055dcb0();
  *(undefined1 *)(uVar2 + 0x21b) = 0;
  F_005aa060((undefined *)(uVar2 + 0x20c) GEN_EDX_ARG,0,0);
  iVar3 = param_1 * 0x30 + *(int *)((int)this + 0x180);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar1 = *(ushort *)(iVar3 + 0x2a);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    (*(undefined1 *)(gen_frame + 0x10)) = 0;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x28,2,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    this_00 = ((undefined1 *)(gen_frame + 0x14));
    iVar3 = 1;
    do {
      this_00 = this_00 - 8;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007b1730 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007b1730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
    iVar1 = *(int *)(uVar2 + 0x14);
    iVar3 = 0xc;
    iVar5 = 0x32;
    do {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + iVar3))) = 7;
      iVar3 = iVar3 + 0x40;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    iVar1 = *(int *)this;
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9a0(uVar4 GEN_EDX_ARG);
    ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar2,uVar4);
  }
  return;
}

/* ref: Client::UI2::AddonNeedGreed::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b17a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b17a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"NeedGreed",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonNeedGreed::vf38 */
GEN_FRAME uint GEN_THISCALL F_007b17b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7b17b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonNeedGreed::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b17d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b17d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x1f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007b1830 */
GEN_FRAME uint GEN_THISCALL F_007b1830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b1830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)((int)this + 0x210);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
  if (param_1 == 1) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x1f,2,&(*(undefined4 *)(gen_frame + 0x4)));
    puVar3 = ((undefined1 *)(gen_frame + 0x14));
  }
  else if (param_1 == 2) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)),0x1f,2,&(*(undefined4 *)(gen_frame + 0x4)));
    puVar3 = ((undefined1 *)(gen_frame + 0x1c));
  }
  else {
    if (param_1 != 3) goto LAB_007b1901;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)),0x1f,2,&(*(undefined4 *)(gen_frame + 0x4)));
    puVar3 = ((undefined1 *)(gen_frame + 0x24));
  }
  F_005a2670(puVar3 GEN_EDX_ARG);
LAB_007b1901: ;
  puVar3 = ((undefined1 *)(gen_frame + 0x14));
  iVar4 = 1;
  do {
    puVar3 = puVar3 - 8;
    uVar2 = F_005a2670(puVar3 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar2;
}

/* ref: FUN_007b1940 */
GEN_FRAME unsigned int GEN_THISCALL F_007b1940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = 0;
  if (*(int *)((int)this + 0x1fc) != 0) {
    puVar3 = (undefined4 *)((int)this + 0x230);
    do {
      puVar3[-1] = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + uVar2 * 4)));
      *puVar3 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x104 + uVar2 * 4)));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 8;
    } while (uVar2 < *(uint *)((int)this + 0x1fc));
  }
  return 0;
}

/* ref: FUN_007b1990 */
GEN_FRAME uint GEN_THISCALL F_007b1990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = *(uint *)((int)this + 0x210);
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)((int)this + 0x1fc))) &&
     (uVar1 = *(uint *)(uVar1 * 0x20 + 0x230 + (int)this), *(uint *)((int)this + 0x208) != uVar1)) {
    *(uint *)((int)this + 0x208) = uVar1;
    uVar1 = F_00560910(uVar1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,uVar1);
    if (*(int *)((int)this + 0x20c) < 1) {
      fVar2 = (float10)0;
    }
    else {
      fVar2 = (float10)*(int *)((int)this + 0x208) / (float10)*(int *)((int)this + 0x20c);
    }
    uVar1 = F_00568230(*(undefined4 *)((int)this + 0x180) GEN_EDX_ARG,(float)fVar2);
  }
  return uVar1;
}

/* ref: FUN_007b1a10 */
GEN_NOFRAME uint GEN_THISCALL F_007b1a10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdbd4));
  F_0090ac80((undefined *)((int)this + 0x180) GEN_EDX_ARG);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 1;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined1 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x1000000,1);
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonArmouryBoard::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b1ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ArmouryBoard",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonArmouryBoard::vf45 */
GEN_FRAME uint GEN_THISCALL F_007b1ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b1ae0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xd;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonArmouryBoard::vf5 */
GEN_FRAME uint GEN_THISCALL F_007b1b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
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
    F_0059b300(this_00 GEN_EDX_ARG,uVar2,pAVar3,uVar4);
    if (this[0x2a4] != (undefined1)0x0) {
      uVar1 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
  }
  uVar1 = F_005a89b0(this GEN_EDX_ARG,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonArmouryBoard::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b1bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonArmouryBoard::vf48 */
GEN_NOFRAME uint GEN_THISCALL F_007b1c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b1c20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(uint *)(in_ecx + 0x29c);
}

/* ref: FUN_007b1c30 */
GEN_FRAME uint GEN_THISCALL F_007b1c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1c30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != *(uint *)(in_ecx + 0x298)) {
    *(uint *)(in_ecx + 0x298) = param_2;
  }
  return param_2;
}

/* ref: FUN_007b1c50 */
GEN_FRAME uint GEN_THISCALL F_007b1c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b1c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      this_00 = *(undefined * PTR32 *)((int)this + iVar2 + 0x1e8);
      uVar1 = F_00560910(*((undefined4 *)GEN_TOP((iVar2 + 4 + *(int *)(param_1 + 0x20)))));
      in_EAX = F_00584110(this_00 GEN_EDX_ARG,uVar1);
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x34);
  }
  return in_EAX;
}

/* ref: FUN_007b1ca0 */
GEN_FRAME uint GEN_THISCALL F_007b1ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  if (param_1 != *(int *)((int)this + 0x298)) {
    *(int *)((int)this + 0x298) = param_1;
  }
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b1d10 */
GEN_FRAME uint GEN_THISCALL F_007b1d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = 0;
  if (*(int *)((int)this + 0x29c) == 0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x10)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007b1d80 */
GEN_FRAME uint GEN_THISCALL F_007b1d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  undefined2 extraout_var = 0;
  char cVar3;
  uint uVar4;
  char local_5;
  
  cVar3 = '\0';
  uVar2 = F_00559cf0(*(undefined4 *)((int)this + 0x284) GEN_EDX_FWD);
  local_5 = '\x01';
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x29c))) {
  case 1: ;
    uVar4 = 0x6a;
    break;
  default: ;
    local_5 = '\0';
    uVar4 = uVar2 & 0xffff;
    break;
  case 3: ;
    cVar3 = '\x01';
    uVar4 = 0x69;
    break;
  case 4: ;
  case 8: ;
    cVar3 = '\x01';
    uVar4 = 0x65;
    break;
  case 5: ;
    cVar3 = '\x01';
    uVar4 = 0x68;
    break;
  case 6: ;
    cVar3 = '\x01';
    uVar4 = 0x66;
    break;
  case 7: ;
    cVar3 = '\x01';
    uVar4 = 0x67;
    break;
  case 9: ;
    cVar3 = '\x01';
    uVar4 = 0x6b;
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x2a0));
  if ((uVar2 & 0xffff) != uVar4) {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x284) GEN_EDX_ARG,uVar4);
    F_00577ad0(*(undefined * PTR32 *)((int)this + 0x280) GEN_EDX_ARG);
  }
  uVar1 = F_00559c40(*(undefined4 *)((int)this + 0x280) GEN_EDX_ARG);
  uVar2 = CONCAT22(extraout_var,uVar1);
  if ((char)uVar1 != local_5) {
    if (local_5 == '\0') {
      uVar2 = F_0059d670(*(undefined * PTR32 *)((int)this + 0x280) GEN_EDX_ARG,0x11);
    }
    else {
      uVar2 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x280) GEN_EDX_ARG,0x65);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    uVar2 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG,(cVar3 == '\0') + 0x65);
  }
  *(char *)((int)this + 0x2a4) = cVar3;
  return uVar2;
}

/* ref: FUN_007b1ea0 */
GEN_FRAME uint GEN_THISCALL F_007b1ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar2 = 0;
  if (*(char *)((int)this + 0x2a4) != '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    uVar1 = *(undefined4 *)((int)this + 0x2b0);
    (*(undefined4 *)(gen_frame + 0x10)) = 9;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar3 = 1;
    do {
      this_00 = this_00 - 8;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007b1f10 */
GEN_FRAME byte GEN_THISCALL F_007b1f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0;
  if ((*(char *)((int)this + 0x2a6) == '\0') &&
     ((iVar1 = *(int *)((int)this + 0x298), iVar1 != 0xc || ((char)param_1 != '\x02')))) {
    if (iVar1 == 0xc) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar1 + 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x180);
    this_01 = *(undefined * PTR32 *)((int)this + iVar3 * 4 + 0x180);
    if ((this_00 != (undefined *)0x0) && (this_01 != (undefined *)0x0)) {
      F_0059dde0(this_00 GEN_EDX_FWD,0);
      F_0059dde0(this_01 GEN_EDX_ARG,1);
      F_007b1ca0(this GEN_EDX_ARG,iVar3);
      bVar2 = 1;
      *(undefined1 *)((int)this + 0x2a8) = 1;
    }
  }
  return bVar2;
}

/* ref: FUN_007b1f80 */
GEN_FRAME byte GEN_THISCALL F_007b1f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0;
  if ((*(char *)((int)this + 0x2a6) == '\0') &&
     ((iVar1 = *(int *)((int)this + 0x298), iVar1 != 0 || ((char)param_1 != '\x02')))) {
    iVar3 = 0xc;
    if (iVar1 != 0) {
      iVar3 = iVar1 - 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x180);
    this_01 = *(undefined * PTR32 *)((int)this + iVar3 * 4 + 0x180);
    if ((this_00 != (undefined *)0x0) && (this_01 != (undefined *)0x0)) {
      F_0059dde0(this_00 GEN_EDX_FWD,0);
      F_0059dde0(this_01 GEN_EDX_ARG,1);
      F_007b1ca0(this GEN_EDX_ARG,iVar3);
      bVar2 = 1;
      *(undefined1 *)((int)this + 0x2a8) = 1;
    }
  }
  return bVar2;
}

/* ref: FUN_007b1ff0 */
GEN_FRAME uint GEN_THISCALL F_007b1ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b1ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined3 extraout_var_07 = 0;
  uint uVar5;
  
  if (*(char *)((int)this + 0x2a4) == '\0') {
    F_0056b780(this GEN_EDX_FWD,3);
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0x28c);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_0055e3d0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),uVar2);
    uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x28c) GEN_EDX_ARG);
    sVar1 = (short)(*(undefined4 *)(gen_frame + 0x8)) + (uVar4 >> 1);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = sVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)),sVar1);
    F_0056b630(this GEN_EDX_ARG,0x18a89,0,3,4,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  F_0056b780(this GEN_EDX_ARG,0);
  uVar5 = *(uint *)((int)this + 0x29c);
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 0: ;
  case 2: ;
    bVar3 = F_0056b630(this GEN_EDX_ARG,0x18ac6,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var,bVar3);
  case 1: ;
    bVar3 = F_0056b630(this GEN_EDX_ARG,0x18aa8,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_00,bVar3);
  case 3: ;
    bVar3 = F_0056b630(this GEN_EDX_ARG,0x18ac8,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_01,bVar3);
  case 4: ;
    bVar3 = F_0056b630(this GEN_EDX_ARG,0x18acb,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_02,bVar3);
  case 5: ;
    bVar3 = F_0056b630(this GEN_EDX_ARG,0x18acd,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_03,bVar3);
  case 6: ;
    bVar3 = F_0056b630(this GEN_EDX_ARG,0x18ac9,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_04,bVar3);
  case 7: ;
    bVar3 = F_0056b630(this GEN_EDX_ARG,0x18aca,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_05,bVar3);
  case 8: ;
    bVar3 = F_0056b630(this GEN_EDX_ARG,0x18acc,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_06,bVar3);
  case 9: ;
    bVar3 = F_0056b630(this GEN_EDX_ARG,0x18ae1,7,0,9,0,0);
    uVar5 = CONCAT31(extraout_var_07,bVar3);
  }
  *(undefined1 *)((int)this + 0x2a5) = 0;
  return uVar5;
}

/* ref: FUN_007b21e0 */
GEN_FRAME unsigned int GEN_THISCALL F_007b21e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b21e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((*(char *)((int)this + 0x2a6) == '\0') &&
     ((*(char *)((int)this + 0x2a5) != (char)param_1 || ((char)param_2 != '\0')))) {
    *(char *)((int)this + 0x2a5) = (char)param_1;
    F_0056b780(this GEN_EDX_FWD,0);
    if (*(char *)((int)this + 0x2a5) != '\0') {
      F_0056b630(this GEN_EDX_ARG,0x18ac7,7,0,9,0,0);
      return;
    }
    F_0056b630(this GEN_EDX_ARG,0x18ac6,7,0,9,0,0);
  }
  return;
}

/* ref: FUN_007b2240 */
GEN_FRAME uint GEN_THISCALL F_007b2240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b2240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  int * piVar3;
  
  *(undefined1 *)((int)this + 0x2a6) = 1;
  *(byte *)((int)this + 0x2a7) = *(byte *)((int)param_1 + 0xaa) >> 4 & 1;
  *(undefined * PTR32 *)((int)this + 0x2ac) = param_1;
  F_0056e4d0(param_1 GEN_EDX_FWD,0);
  piVar3 = (int *)((int)this + 0x180);
  iVar2 = 0xd;
  do {
    if (*piVar3 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)*piVar3 + 0x28))((int *)*piVar3 GEN_EDX_ARG,0);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  bVar1 = F_0056b630(this GEN_EDX_ARG,0x18ab8,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007b22b0 */
GEN_FRAME uint GEN_THISCALL F_007b22b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b22b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  ushort uVar2;
  undefined3 extraout_var = 0;
  int iVar4;
  int * piVar5;
  undefined4 uVar6;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a6))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2ac))) = 0;
  F_0056e4d0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a7))));
  piVar5 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180)));
  iVar4 = 0xd;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)*piVar5 + 0x28))((int *)*piVar5 GEN_EDX_ARG,1);
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a4))) == '\0') {
    F_0056b780((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,3);
  }
  else {
    uVar6 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28c)));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)0x0;
    F_0055e3d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined * PTR32 *)&gen_args[1]),uVar6);
    uVar2 = F_0055a030(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28c))) GEN_EDX_ARG);
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(CONCAT22((*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 2)))),(short)(*(undefined * PTR32 *)&gen_args[1]) + (uVar2 >> 1))));
    F_0056b630((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x18a89,0,3,4,(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined * PTR32 *)&gen_args[1]));
  }
  F_0056b780((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0);
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x29c)));
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 2: ;
    uVar6 = 0x18ac6;
    break;
  case 1: ;
    uVar6 = 0x18aa8;
    break;
  case 3: ;
    uVar6 = 0x18ac8;
    break;
  case 4: ;
    uVar6 = 0x18acb;
    break;
  case 5: ;
    uVar6 = 0x18acd;
    break;
  case 6: ;
    uVar6 = 0x18ac9;
    break;
  case 7: ;
    uVar6 = 0x18aca;
    break;
  case 8: ;
    uVar6 = 0x18acc;
    break;
  case 9: ;
    uVar6 = 0x18ae1;
    break;
  default: ;
    goto switchD_007b236f_default;
  }
  bVar1 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar6,7,0,9,0,0);
  uVar3 = CONCAT31(extraout_var,bVar1);
switchD_007b236f_default: ;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a5))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a8))) = 1;
  return uVar3;
}

/* ref: Client::UI2::AddonArmouryBoard::vf52 */
GEN_FRAME byte GEN_THISCALL F_007b2460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b2460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined1 * this_00;
  int iVar5;
  
  this_00 = (gen_frame + 0x1c);
  bVar2 = 0;
  if (*param_1 == 2) {
    if (this[0x2a6] == (undefined1)0x0) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
      uVar1 = *(undefined4 *)(this + 0x2b0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0xc;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
      F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
      if (*(int *)(this + 0x2b0) != 0) {
        uVar3 = F_0055dcb0();
        piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14) GEN_EDX_ARG,*(undefined4 *)(this + 0x2b0));
        if (piVar4 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4 GEN_EDX_ARG);
        }
      }
      iVar5 = 1;
      do {
        this_00 = this_00 - 8;
        F_005a2670(this_00 GEN_EDX_ARG);
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
      return 1;
    }
    if (*(int *)(this + 0x2ac) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x2ac) + 0x84))) + 0x30))))(*(int *)(this + 0x2ac) + 0x84);
    }
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: FUN_007b2540 */
GEN_NOFRAME uint GEN_THISCALL F_007b2540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b2540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_0059b860(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,this,0);
  *(undefined1 *)((int)this + 0x2a8) = 1;
  return uVar1;
}

/* ref: FUN_007b2560 */
GEN_FRAME uint GEN_THISCALL F_007b2560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00557670(param_2 GEN_EDX_FWD,0);
  uVar1 = param_1 - 1;
  if (uVar1 < 0xd) {
    uVar1 = F_007b1ca0(this GEN_EDX_ARG,param_1 - 1);
  }
  if (param_1 == 0x29) {
    uVar1 = F_007b1ea0(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_007b25a0 */
GEN_FRAME uint GEN_THISCALL F_007b25a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b25a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0x14)) = param_2;
  F_00557670(param_2 GEN_EDX_FWD,0);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  uVar4 = param_1 - 0xf;
  if (uVar4 < 0x19) {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3 GEN_EDX_ARG)));
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x10));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3 GEN_EDX_ARG);
    uVar1 = *(undefined4 *)(uVar3 + 4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
    iVar5 = *(int *)((int)this + 0x298);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0x2c)) = iVar5 + 0x31;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x34)) = uVar4;
    uVar3 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x18)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  *(uint *)((*(int *)(gen_frame + 0x14)) + 0x14) = *(uint *)((*(int *)(gen_frame + 0x14)) + 0x14) | 0x80000;
  *(bool *)((*(int *)(gen_frame + 0x14)) + 0x15) = uVar4 < 0x19;
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 3;
  do {
    this_00 = this_00 - 2;
    uVar4 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_007b26a0 */
GEN_FRAME uint GEN_THISCALL F_007b26a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b26a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  
  F_00557670(param_2 GEN_EDX_FWD,0);
  if (*param_3 != 0) {
    uVar1 = F_007b22b0(this GEN_EDX_ARG,*param_3 - 0x84);
    return uVar1;
  }
  uVar1 = F_007b22b0(this GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_007b26e0 */
GEN_FRAME uint GEN_THISCALL F_007b26e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b26e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b2750 */
GEN_FRAME uint GEN_THISCALL F_007b2750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b2750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,4);
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonAchievement::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b27b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b27b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonAchievement::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b27f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b27f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Achievement",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonAchievement::vf52 */
GEN_FRAME byte GEN_THISCALL F_007b2800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b2800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if (((char)param_1[1] != '\0') || (*param_1 != 2)) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x198);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2 GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG);
  if (uVar2 != uVar3) {
    piVar1 = *(int * PTR32 *)(this + 0x188);
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2 GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG);
    if (uVar2 != uVar3) {
      F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x188),1,0);
      return 1;
    }
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x7c))))(*(int * PTR32 *)(this + 400) GEN_EDX_ARG);
  if (uVar2 != 0) {
    F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 400),1,0);
    return 1;
  }
  F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x188),1,0);
  return 1;
}

/* ref: FUN_007b28e0 */
GEN_FRAME uint GEN_THISCALL F_007b28e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b28e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00584110(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 4 + 0x1ec));
  }
  return uVar1;
}

/* ref: FUN_007b2910 */
GEN_FRAME uint GEN_THISCALL F_007b2910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b2910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_FWD,0);
    return uVar1;
  }
  uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4));
  return uVar1;
}

/* ref: FUN_007b2940 */
GEN_FRAME ushort GEN_THISCALL F_007b2940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7b2940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ushort * puVar2;
  
  iVar1 = 0;
  puVar2 = (ushort *)((int)this + 0x1a0);
  do {
    if ((puVar2[-2] <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < *puVar2)) goto LAB_007b296d;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 0x13);
  iVar1 = 0x13;
LAB_007b296d: ;
  return (ushort)iVar1;
}

/* ref: FUN_007b2980 */
GEN_NOFRAME uint GEN_THISCALL F_007b2980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b2980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdce4));
  iVar2 = (int)this + 0x180;
  iVar1 = 0x1d;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar2 = (int)this + 0xb58;
  iVar1 = 0x1d;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined1 *)((int)this + 0x1540) = 0;
  return (uint)this;
}

/* ref: FUN_007b29f0 */
GEN_NOFRAME uint GEN_THISCALL F_007b29f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b29f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdce4));
  pvVar2 = (undefined *)((int)this + 0x1530);
  iVar3 = 0x1d;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_FWD);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0xb58);
  iVar3 = 0x1d;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonHowtoList::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b2a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b2a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"HowToList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonHowtoList::vf2 */
GEN_FRAME uint GEN_THISCALL F_007b2a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b2a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  uint * puVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 & 0xffff) == 0x21) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    uVar1 = *(undefined4 *)(param_4 + 8);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    bVar3 = *(byte *)(param_4 + 0x11) >> 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,2);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = bVar3 & 1;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),bVar3) & 0xffffff01;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar4 = &(*(uint *)(gen_frame + 0x18));
    iVar5 = 2;
    do {
      puVar4 = puVar4 - 2;
      uVar2 = F_005a2670(puVar4 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  else {
    uVar2 = (param_1 & 0xffff) - 0x23;
    if (uVar2 == 0) {
      F_00557670(param_3 GEN_EDX_ARG,0);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      uVar1 = *(undefined4 *)(param_4 + 8);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x8)));
      puVar4 = &(*(uint *)(gen_frame + 0x18));
      iVar5 = 1;
      do {
        puVar4 = puVar4 - 2;
        uVar2 = F_005a2670(puVar4 GEN_EDX_ARG);
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonHowtoList::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b2b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b2b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007b2ba0 */
GEN_FRAME uint GEN_THISCALL F_007b2ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
  uVar1 = F_0042a990(param_1 * 0x54 + 0x180 + (int)this GEN_EDX_ARG);
  uVar1 = F_00584110(this_00 GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_007b2be0 */
GEN_FRAME uint GEN_THISCALL F_007b2be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
  uVar1 = F_0042a990(param_1 * 0x54 + 0xb58 + (int)this GEN_EDX_ARG);
  uVar1 = F_00584110(this_00 GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_007b2c20 */
GEN_NOFRAME uint GEN_THISCALL F_007b2c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b2c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdde4));
  pvVar2 = (undefined *)((int)this + 0x181c);
  iVar3 = 6;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_FWD);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x15d0);
  iVar3 = 0x31;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x68);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCabinet::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b2c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b2c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CabinetStore",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCabinet::vf47 */
GEN_FRAME uint GEN_THISCALL F_007b2c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b2c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  undefined * pAVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  uVar5 = *(uint *)(param_2 + 0xa4);
  iVar7 = 0;
  if ((iVar1 != 0) && (uVar5 != 0)) {
    uVar2 = **(uint * PTR32 *)(iVar1 + 0x20);
    param_1 = 0;
    if (uVar2 != 0) {
      pAVar6 = this + 0x1d4;
      do {
        iVar3 = *((int *)GEN_TOP((iVar7 + 0xc + *(int *)(iVar1 + 0x20))));
        F_0042e430(pAVar6 - 0x54 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + param_1 * 4))));
        fVar4 = (float10)*(double *)&REFG(undefined, 0x10cdee0);
        *(undefined4 *)pAVar6 = *((undefined4 *)GEN_TOP((iVar7 + 8 + *(int *)(iVar1 + 0x20))));
        *(undefined4 *)(pAVar6 + 4) = *((undefined4 *)GEN_TOP((iVar7 + 0x14 + *(int *)(iVar1 + 0x20))));
        *(undefined4 *)(pAVar6 + 8) = *((undefined4 *)GEN_TOP((iVar7 + 0x10 + *(int *)(iVar1 + 0x20))));
        param_1 = param_1 + 1;
        *(undefined4 *)(pAVar6 + 0xc) = *((undefined4 *)GEN_TOP((iVar7 + 0x18 + *(int *)(iVar1 + 0x20))));
        iVar7 = iVar7 + 0x14;
        *(float *)(pAVar6 + 0x10) = (float)((float10)iVar3 / fVar4);
        pAVar6 = pAVar6 + 0x68;
      } while (param_1 < uVar2);
    }
    F_0059ead0(*(undefined * PTR32 *)(this + 0x181c) GEN_EDX_ARG,uVar2,0,1);
    if (uVar2 != 0) {
      uVar5 = F_0059d670(*(undefined * PTR32 *)(this + 0x1824) GEN_EDX_ARG,0x11);
      return uVar5;
    }
    uVar5 = F_0055dcb0();
    F_00594d90((undefined *)(uVar5 + 0xe0) GEN_EDX_ARG,1);
    uVar5 = F_0059d670(*(undefined * PTR32 *)(this + 0x1824) GEN_EDX_ARG,0x65);
  }
  return uVar5;
}

/* ref: Client::UI2::AddonCabinet::vf2 */
GEN_FRAME uint GEN_THISCALL F_007b2db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    F_00560760(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD);
    iVar4 = param_4[2];
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 2)) = 2;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + iVar4 * 0x68 + 0x1dc);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 3)) = this[iVar4 * 0x68 + 0x1d8];
    (*(int *)(gen_frame + 0x18)) = CONCAT13(this[iVar4 * 0x68 + 0x1d8],CONCAT12(2,(undefined2)(*(int *)(gen_frame + 0x18))));
    if (*param_4 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(undefined4 *)(*param_4 + 0x70);
    }
    AVar1 = this[0x13a];
    uVar3 = F_0055dcb0();
    uVar3 = F_00588780((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,4,(uint)(byte)AVar1,param_1,&(*(undefined4 *)(gen_frame + 0x10)),0,0);
    return uVar3;
  case 1: ;
    uVar3 = F_0055dcb0();
    uVar3 = F_00594d90((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,0);
switchD_007b2dca_caseD_22: ;
    return uVar3;
  case 2: ;
    F_00557670(param_3 GEN_EDX_ARG,0);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
    iVar4 = param_4[2];
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    uVar2 = *(undefined4 *)(this + iVar4 * 0x68 + 0x1e0);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0x18)) = uVar2;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    uVar3 = F_0055dcb0();
    F_00594d90((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,1);
    iVar4 = 1;
    do {
      this_01 = this_01 - 8;
      uVar3 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    return uVar3;
  case 3: ;
    goto switchD_007b2dca_caseD_22;
  case 4: ;
    F_00557670(param_3 GEN_EDX_ARG,0);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
    iVar4 = param_4[2];
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x18)) = iVar4;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_00 = this_00 - 8;
      uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    return uVar3;
  default: ;
    return uVar3;
  }
}

/* ref: FUN_007b2f50 */
GEN_FRAME uint GEN_THISCALL F_007b2f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_FWD);
  uVar1 = F_00559b90(*param_2 GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_005951c0(param_3 GEN_EDX_ARG,*(undefined4 *)(param_1 * 0x68 + 0x1d4 + (int)this),0,uVar1);
  }
  uVar1 = F_0042a990(param_1 * 0x68 + 0x180 + (int)this GEN_EDX_ARG);
  F_00584110(this_00 GEN_EDX_ARG,uVar1);
  uVar1 = F_00568230(param_2[2] GEN_EDX_ARG,*(float *)(param_1 * 0x68 + 0x1e4 + (int)this));
  return uVar1;
}

/* ref: Client::UI2::AddonCabinet::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b2fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b2fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007b2ff0 */
GEN_FRAME uint GEN_THISCALL F_007b2ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
  uVar1 = F_0042a990(param_1 * 0x54 + 0x15d0 + (int)this GEN_EDX_ARG);
  uVar1 = F_00584110(this_00 GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007b3070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b3070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CabinetWithdraw",0,6);
  return bVar1;
}

/* ref: FUN_007b3080 */
GEN_FRAME uint GEN_THISCALL F_007b3080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_FWD);
  uVar1 = F_00559b90(*param_2 GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_005951c0(param_3 GEN_EDX_ARG,*(undefined4 *)(param_1 * 0x60 + 0x1d8 + (int)this),0,uVar1);
  }
  uVar1 = F_0042a990(param_1 * 0x60 + 0x184 + (int)this GEN_EDX_ARG);
  uVar1 = F_00584110(this_00 GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf25 */
GEN_FRAME uint GEN_THISCALL F_007b30e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7b30e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

