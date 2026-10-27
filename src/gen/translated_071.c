#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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

/* ref: Client::UI2::AddonRecipeNoteBook::vf56 */
unsigned int F_007a11d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a11d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined1 AVar2;
  uint uVar3;
  undefined * pAVar4;
  undefined4 * puVar5;
  
  if (this[0x1518] != (undefined1)0x0) {
    pAVar4 = this + 0x198;
    (*(int *)(gen_frame + 0x18)) = 8;
    do {
      F_00560760(((undefined4 *)(gen_frame + 0x8)));
      AVar2 = this[0x13a];
      ((undefined4 *)(gen_frame + 0x8))[0] = *(undefined4 *)(pAVar4 + 0x1350);
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
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = param_1;
  while( true ) {
    if ((char)param_2 == '\0') {
      uVar1 = uVar1 + 1;
      if (7 < (int)uVar1) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        uVar1 = 7;
      }
    }
    if ((*(uint *)((int)this + 0x1508) & 1 << ((byte)uVar1 & 0x1f)) != 0) break;
    iVar2 = iVar2 + 1;
    if (7 < iVar2) {
      return 0;
    }
  }
  return uVar1;
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
byte F_007a1420(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FishingNoteBook",0,6);
  return bVar1;
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
  int iVar1;
  undefined1 AVar2;
  uint uVar3;
  uint uVar4;
  undefined * pAVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  uVar3 = F_00560760(((uint *)(gen_frame + 0x8)));
  pAVar5 = this + 0x1a4;
  (*(int *)(gen_frame + 0x18)) = 2;
  do {
    if ((*(int *)pAVar5 != 0) && (uVar3 = *(uint *)(pAVar5 + 0xd2c), uVar3 != 0)) {
      AVar2 = this[0x13a];
      ((uint *)(gen_frame + 0x8))[0] = uVar3;
      uVar3 = F_0055dcb0();
      puVar6 = ((uint *)(gen_frame + 0x8));
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar5 + 0x38))))(*(int * PTR32 *)pAVar5);
      uVar3 = F_00590ad0((undefined *)(uVar3 + 0xe0),2,(uint)(byte)AVar2,uVar4,puVar6);
      this = (*(undefined * PTR32 *)(gen_frame + 0x14));
    }
    pAVar5 = pAVar5 + 4;
    iVar1 = (*(int *)(gen_frame + 0x18)) + -1;
    (*(int *)(gen_frame + 0x18)) = iVar1;
  } while (iVar1 != 0);
  return uVar3;
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
byte F_007a1680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a1680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((((param_1 == 1) && (iVar2 = *(int *)(param_2 + 8), -1 < iVar2)) &&
      (iVar2 < *(int *)((int)this + 0xedc))) &&
     ((*(byte *)((int)this + iVar2 * 0xc + 0x2b0) & 1) != 0)) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = iVar2;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + (iVar2 * 3 + 0xab) * 4)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
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
byte F_007a1c50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a1c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FishGuide",0,6);
  return bVar1;
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
  int iVar1;
  undefined1 AVar2;
  uint uVar3;
  uint uVar4;
  undefined * pAVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  uVar3 = F_00560760(((uint *)(gen_frame + 0x8)));
  pAVar5 = this + 0x180;
  (*(int *)(gen_frame + 0x18)) = 2;
  do {
    if ((*(int *)pAVar5 != 0) && (uVar3 = *(uint *)(pAVar5 + 0x178), uVar3 != 0)) {
      AVar2 = this[0x13a];
      ((uint *)(gen_frame + 0x8))[0] = uVar3;
      uVar3 = F_0055dcb0();
      puVar6 = ((uint *)(gen_frame + 0x8));
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar5 + 0x38))))(*(int * PTR32 *)pAVar5);
      uVar3 = F_00590ad0((undefined *)(uVar3 + 0xe0),2,(uint)(byte)AVar2,uVar4,puVar6);
      this = (*(undefined * PTR32 *)(gen_frame + 0x14));
    }
    pAVar5 = pAVar5 + 4;
    iVar1 = (*(int *)(gen_frame + 0x18)) + -1;
    (*(int *)(gen_frame + 0x18)) = iVar1;
  } while (iVar1 != 0);
  return uVar3;
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
byte F_007a1d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a1d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (((param_1 < 8) && (*(char *)((int)this + 0x308) != '\0')) &&
     (*(uint *)((int)this + 0x304) != param_1)) {
    *(uint *)((int)this + 0x304) = param_1;
    iVar2 = 0;
    puVar1 = (undefined4 *)((int)this + 0x188);
    do {
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        F_0059dde0((undefined *)*puVar1,(uint)(*(int *)((int)this + 0x304) == iVar2));
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = param_1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_007a1e40 */
byte F_007a1e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a1e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * this_00;
  int iVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 < 0x19) && (*(char *)((int)this + 0x309) != '\0')) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 7;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = param_1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar1 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_007a1ed0 */
byte F_007a1ed0(unsigned int gen_a0, unsigned int gen_a1)
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
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (0x18 < param_1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x1a8);
  if ((piVar1 == (int *)0x0) ||
     (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1), *(uint *)((int)this + 0xa4) == uVar4)) {
    if (*(int *)((int)this + param_1 * 8 + 0x230) < 1) {
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 0;
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
      F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  else {
    *(uint *)((int)this + 0xa4) = uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 1;
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
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  iVar1 = *(int *)(uVar3 + 0x138);
  if (0 < iVar1) {
    if (*(undefined * PTR32 *)((int)this + 0x214) != (undefined *)0x0) {
      uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x214),
                           *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc))));
    }
    if (*(undefined * PTR32 *)((int)this + 0x218) != (undefined *)0x0) {
      uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x218),
                           *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14))));
    }
    if (*(undefined * PTR32 *)((int)this + 0x21c) != (undefined *)0x0) {
      iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x13c)));
      bVar2 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x21c),(uint)(iVar4 != 0));
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (0 < iVar4) {
        uVar5 = 5;
        this_00 = (undefined *)F_0055dcb0();
        uVar3 = F_0055ba90(this_00,iVar4,uVar5);
        uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x21c),uVar3);
      }
    }
    if (*(undefined * PTR32 *)((int)this + 0x220) != (undefined *)0x0) {
      uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x220),
                           *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18))));
    }
    if (*(undefined * PTR32 *)((int)this + 0x224) != (undefined *)0x0) {
      uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x224),
                           *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x1c))));
    }
  }
  if (*(int *)((int)this + 0x300) != iVar1) {
    uVar3 = F_0059d6a0(this,(iVar1 < 1) + 0x65,0,0);
    *(int *)((int)this + 0x300) = iVar1;
  }
  return uVar3;
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
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x304);
  if (*param_1 == 0xf) {
    iVar4 = iVar1 + 1;
    if (7 < iVar4) {
      iVar4 = 0;
    }
    if (iVar1 < iVar4) goto LAB_007a21f6;
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    iVar4 = iVar1 + -1;
    if (iVar4 < 0) {
      iVar4 = 7;
    }
    if (iVar4 < iVar1) goto LAB_007a21f6;
  }
  if ((char)param_1[1] == '\x02') {
    return 1;
  }
LAB_007a21f6: ;
  bVar2 = F_007a1d50(this,iVar4);
  if (bVar2 != 0) {
    uVar3 = F_0055dcb0();
    *((undefined1 *)GEN_TOP((*(int *)(uVar3 + 0x1c) + 0x20))) = 1;
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
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
byte F_007a22a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a22a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FishRecords",0,6);
  return bVar1;
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
  GEN_ENTER(0x7a2500u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
byte F_007a2550(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ContentsFinder",1,6);
  return bVar1;
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
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x720) != param_1) {
    *(uint *)((int)this + 0x720) = param_1;
    (*(uint *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
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
    F_0059d670(this_00,((uint *)(gen_frame + 0x1c))[(int)((*(int *)(gen_frame + 0xc)))]);
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
byte F_007a2960(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ContentsFinderStatus",0,6);
  return bVar1;
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
byte F_007a2a60(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ContentsFinderConfirm",0,6);
  return bVar1;
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
byte F_007a2ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ContentsFinderReady",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf44 */
uint F_007a2bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a2bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pAVar5;
  uint uVar6;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  bVar1 = param_2[8];
  ((uint *)(gen_frame + 0x10))[3] = 5;
  ((uint *)(gen_frame + 0x10))[4] = 6;
  ((uint *)(gen_frame + 0x10))[5] = 7;
  ((uint *)(gen_frame + 0x10))[0] = 0x65;
  ((uint *)(gen_frame + 0x10))[1] = 0x66;
  ((uint *)(gen_frame + 0x10))[2] = 0x67;
  if ((bVar1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
  }
  pvVar3 = (undefined *)F_0055e340(this,2);
  F_00584110(pvVar3,uVar2);
  if ((*param_2 & 0xf) == 0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_2 + 4);
  }
  uVar6 = 0;
  pAVar5 = this + 0x180;
  do {
    uVar4 = F_0055e2f0(this,((uint *)(gen_frame + 0x10))[(int)(uVar6 + 3)]);
    pvVar3 = (undefined *)F_00559c20(uVar4);
    *(undefined * PTR32 *)(pAVar5 + 0xc) = pvVar3;
    uVar4 = F_00561530(pvVar3,3);
    *(uint *)pAVar5 = uVar4;
    uVar6 = uVar6 + 1;
    pAVar5 = pAVar5 + 4;
  } while (uVar6 < 3);
  if (((*(uint *)(gen_frame + 0xc)) & 2) == 0) {
    uVar2 = 0x65;
    pvVar3 = (undefined *)F_0055e2f0(this,4);
    F_0059d670(pvVar3,uVar2);
    uVar2 = 0x68;
    *(undefined4 *)(this + 0x198) = 1;
    pvVar3 = (undefined *)F_00561490(*(undefined * PTR32 *)(this + 0x18c),4);
    F_0059d670(pvVar3,uVar2);
  }
  else {
    uVar2 = 0x11;
    pvVar3 = (undefined *)F_0055e2f0(this,4);
    F_0059d670(pvVar3,uVar2);
    *(undefined4 *)(this + 0x198) = 3;
    uVar6 = 0;
    pAVar5 = this + 0x18c;
    do {
      uVar4 = ((uint *)(gen_frame + 0x10))[(int)(uVar6)];
      pvVar3 = (undefined *)F_00561490(*(undefined * PTR32 *)pAVar5,4);
      F_0059d670(pvVar3,uVar4);
      uVar6 = uVar6 + 1;
      pAVar5 = pAVar5 + 4;
    } while (uVar6 < 3);
  }
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar6;
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
byte F_007a2da0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ContentsFinderSupply",0,6);
  return bVar1;
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
byte F_007a2e30(unsigned int gen_a0)
{
  GEN_ENTER(0x7a2e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Materialize",0,6);
  return bVar1;
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
byte F_007a3090(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MaterializeDialog",0,6);
  return bVar1;
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
byte F_007a3150(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MateriaAttach",0,6);
  return bVar1;
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
byte F_007a3320(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this,"MateriaAttachDialog",0,6);
  return bVar1;
}

/* ref: FUN_007a3370 */
uint F_007a3370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a3370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  int iVar6;
  
  uVar5 = F_0055e2f0(this,0xd);
  this_00 = (undefined *)F_00559c20(uVar5);
  uVar5 = F_0055e2f0(this,0x14);
  this_01 = (undefined *)F_00559c20(uVar5);
  uVar5 = F_0055e2f0(this,0x24);
  this_02 = (undefined *)F_00559c20(uVar5);
  if ((*param_2 & 0xf) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
  }
  if ((iVar6 == 0) || (iVar6 == 2)) {
    uVar3 = *(undefined4 *)((int)this_01 + 0x78);
    uVar4 = *(undefined4 *)((int)this_01 + 0x7c);
    uVar1 = *(undefined1 *)((int)this_01 + 0x80);
    (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
    uVar2 = *(undefined1 *)((int)this_02 + 0x78);
    (*(undefined4 *)(gen_frame + 0x8)) = uVar4;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 3)) = (undefined1)((uint)uVar3 >> 0x18);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = (undefined2)uVar3;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)) = uVar2;
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x4)), 0, 3, (unsigned long long)(CONCAT12(uVar2,(undefined2)(*(undefined4 *)(gen_frame + 0x4)))));
    (*(undefined1 *)(gen_frame + 0xc)) = uVar1;
    F_00561740(this_01,&(*(undefined4 *)(gen_frame + 0x4)),0);
    uVar3 = *(undefined4 *)((int)this_02 + 0x78);
    uVar4 = *(undefined4 *)((int)this_02 + 0x7c);
    uVar1 = *(undefined1 *)((int)this_02 + 0x80);
    (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
    uVar2 = *(undefined1 *)((int)this_01 + 0x78);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
    (*(undefined1 *)(gen_frame + 0x18)) = uVar1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 2)) = (undefined2)((uint)uVar3 >> 0x10);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 1)) = uVar2;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = CONCAT11(uVar2,(char)uVar3);
    uVar5 = F_00561740(this_02,&(*(undefined4 *)(gen_frame + 0x10)),0);
  }
  else {
    uVar5 = iVar6 - 3;
    if (uVar5 == 0) {
      uVar3 = *(undefined4 *)((int)this_00 + 0x78);
      uVar1 = *(undefined1 *)((int)this_00 + 0x80);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_00 + 0x7c);
      (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
      uVar2 = *(undefined1 *)((int)this_02 + 0x78);
      (*(undefined1 *)(gen_frame + 0x18)) = uVar1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 3)) = (undefined1)((uint)uVar3 >> 0x18);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = (undefined2)uVar3;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 2)) = uVar2;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x10)), 0, 3, (unsigned long long)(CONCAT12(uVar2,(undefined2)(*(undefined4 *)(gen_frame + 0x10)))));
      F_00561740(this_00,&(*(undefined4 *)(gen_frame + 0x10)),0);
      uVar3 = *(undefined4 *)((int)this_02 + 0x78);
      uVar4 = *(undefined4 *)((int)this_02 + 0x7c);
      uVar1 = *(undefined1 *)((int)this_02 + 0x80);
      (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
      uVar2 = *(undefined1 *)((int)this_00 + 0x78);
      (*(undefined4 *)(gen_frame + 0x8)) = uVar4;
      (*(undefined1 *)(gen_frame + 0xc)) = uVar1;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)) = (undefined2)((uint)uVar3 >> 0x10);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 1)) = uVar2;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11(uVar2,(char)uVar3);
      uVar5 = F_00561740(this_02,&(*(undefined4 *)(gen_frame + 0x4)),0);
      return uVar5;
    }
  }
  return uVar5;
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
byte F_007a3760(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MateriaBroker",0,6);
  return bVar1;
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
byte F_007a3980(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MateriaBrokerDialog",0,6);
  return bVar1;
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
byte F_007a3ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MateriaAttachedRepair",0,6);
  return bVar1;
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
byte F_007a3b10(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MateriaRepair",0,6);
  return bVar1;
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
byte F_007a3cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ColorantEquipmentSelector",0,6);
  return bVar1;
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
byte F_007a3e70(unsigned int gen_a0)
{
  GEN_ENTER(0x7a3e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ColorantColoringSelector",0,6);
  return bVar1;
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
byte F_007a4010(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GrandCompanyExchange",1,6);
  return bVar1;
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
  byte bVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x318) + param_1 * 0x24)));
  iVar1 = *(int *)((int)this + 0x318) + param_1 * 0x24;
  pvVar3 = (undefined *)F_00559ba0(param_2[2]);
  F_00584110(pvVar3,uVar7);
  F_005951c0(param_3,*(undefined4 *)(iVar1 + 0x14),0,*param_2);
  F_005951c0(param_3,*(undefined4 *)(iVar1 + 0x18),0,param_2[1]);
  uVar7 = *(undefined4 *)(iVar1 + 8);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar6 = 1;
  pvVar3 = (undefined *)F_00559ba0(param_2[3]);
  F_0057eb30(pvVar3,uVar7,uVar6,uVar8,uVar9,uVar10);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar6 = 0;
  pvVar3 = (undefined *)F_00559ba0(param_2[4]);
  F_0057eb30(pvVar3,uVar7,uVar6,uVar8,uVar9,uVar10);
  bVar2 = F_0055a300((undefined *)param_2[5],(uint)(1 < *(uint *)(iVar1 + 0x10)));
  uVar4 = CONCAT31(extraout_var,bVar2);
  uVar5 = *(uint *)(iVar1 + 0x10);
  if (1 < uVar5) {
    uVar9 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar7 = 0;
    pvVar3 = (undefined *)F_00559ba0(param_2[5]);
    uVar4 = F_0057eb30(pvVar3,uVar5,uVar7,uVar6,uVar8,uVar9);
  }
  return uVar4;
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
byte F_007a42f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a42f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GrandCompanyRank",0,6);
  return bVar1;
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
byte F_007a44f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a44f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GrandCompanyRankUp",0,6);
  return bVar1;
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
byte F_007a4670(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GrandCompanySupplyList",0,6);
  return bVar1;
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
byte F_007a4d60(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GrandCompanySupplyReward",0,6);
  return bVar1;
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
byte F_007a4ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a4ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Inventory",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonInventory::vf47 */
uint F_007a4ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a4ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = param_2;
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      if (iVar3 == 4) {
        uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x448)));
        this_00 = *(undefined * PTR32 *)(this + 0x1a8);
      }
      else {
        uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x438 + iVar3 * 4)));
        this_00 = *(undefined * PTR32 *)(this + iVar3 * 4 + 0x198);
      }
      F_00589280(this_00,uVar4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    uVar2 = F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x430))));
  }
  return uVar2;
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
  GEN_ENTER(0x7a50c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
byte F_007a5710(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"InventoryGrid",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonInventoryGrid::vf38 */
uint F_007a5720(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7a5720u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
byte F_007a5910(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"InventoryGridCrystal",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf47 */
unsigned int F_007a5920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a5920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined * this_00;
  int iVar2;
  undefined * pAVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  iVar7 = *(int *)(param_1 + 0x1c);
  (*(int *)(gen_frame + 0xc)) = iVar7;
  (*(int *)(gen_frame + 0x10)) = *(int *)(param_2 + 0x18);
  if (iVar7 != 0) {
    F_00560760(&(*(undefined4 *)(gen_frame + 0x0)));
    (*(undefined1 *)(gen_frame + 0xa)) = 2;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x26;
    param_2 = 0xee0;
    param_1 = 1000;
    do {
      this_00 = *(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + param_1 + -0x220);
      if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x9e) == '\0')) {
        iVar7 = *(int *)(iVar7 + 0x20);
        uVar5 = *(uint *)(param_2 + 8 + iVar7);
        iVar2 = *(int *)(param_2 + 4 + iVar7);
        F_00595560(this_00,*(undefined4 *)(param_2 + iVar7));
        uVar5 = uVar5 & 0xffff;
        if (uVar5 == 0xffff) {
          uVar5 = 0xffffffff;
        }
        F_0056e530(this_00,2);
        uVar6 = iVar2 >> 0x10 & 0xffff;
        *(byte *)((int)this_00 + 0xaa) =
             *(byte *)((int)this_00 + 0xaa) ^
             ((uVar6 == 0) * '\x02' ^ *(byte *)((int)this_00 + 0xaa)) & 2;
        *(short *)((int)this_00 + 0x9c) = (short)uVar5;
        pvVar4 = (undefined *)F_00561530(this_00,3);
        pAVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar4;
        F_0055dcb0();
        uVar6 = F_0056a410(uVar6);
        F_00584110((*(undefined * PTR32 *)(gen_frame + 0x14)),uVar6);
        AVar1 = pAVar3[0x13a];
        (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
        (*(undefined1 *)(gen_frame + 0xb)) = (char)uVar5;
        F_005916c0(this_00,(uint)(uVar5 != 0xffffffff) * 4 + 2,(uint)(byte)AVar1,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar7 = (*(int *)(gen_frame + 0xc));
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
byte F_007a5cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a5cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"InventoryEvent",0,6);
  return bVar1;
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
  GEN_ENTER(0x7a5dc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
  iVar2 = *(int *)((int)this + 0x1b0);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (iVar2 == 8) {
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
byte F_007a61d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a61d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"InventoryGrid",0,6);
  return bVar1;
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
byte F_007a6390(unsigned int gen_a0, unsigned int gen_a1)
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
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x402;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar1 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
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
byte F_007a64e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a64e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,&REFG(undefined, 0x10c1eb8),1,6);
  return bVar1;
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
byte F_007a6910(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ShopExchangeItem",0,6);
  return bVar1;
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
  F_005951c0((*(undefined * PTR32 *)&gen_args[3]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1a4))),0,0);
  uVar7 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1a8)));
  pvVar3 = (undefined *)F_00559ba0(*(*(undefined4 * PTR32 *)&gen_args[2]));
  F_00584110(pvVar3,uVar7);
  uVar4 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1b0)));
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  pvVar3 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)&gen_args[2])[2]);
  F_0057eb30(pvVar3,uVar4,uVar7,uVar8,uVar9,uVar10);
  uVar4 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 + 0x1b2)));
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  pvVar3 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)&gen_args[2])[3]);
  F_0057eb30(pvVar3,uVar4,uVar7,uVar8,uVar9,uVar10);
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]) + 6;
  piVar6 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 0x30 + 0x564)));
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x2;
  do {
    iVar1 = piVar6[-1];
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),iVar1 != 0);
    F_0055a300((undefined *)puVar5[-2],(*(int *)&gen_args[1]));
    bVar2 = F_0055a300((undefined *)*puVar5,(*(int *)&gen_args[1]));
    uVar4 = CONCAT31(extraout_var,bVar2);
    if (iVar1 != 0) {
      if (*piVar6 != 0) {
        F_005951c0((*(undefined * PTR32 *)&gen_args[3]),*piVar6,0,puVar5[-2]);
      }
      uVar4 = (uint)*(ushort *)((int)piVar6 + 0xe);
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      pvVar3 = (undefined *)F_00559ba0(*puVar5);
      uVar4 = F_0057eb30(pvVar3,uVar4,uVar7,uVar8,uVar9,uVar10);
    }
    piVar6 = piVar6 + 6;
    puVar5 = puVar5 + 1;
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + -1)));
  } while ((*(undefined4 * PTR32 *)&gen_args[2]) != (undefined4 *)0x0);
  return uVar4;
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
byte F_007a6d90(unsigned int gen_a0)
{
  GEN_ENTER(0x7a6d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ShopExchangeCurrency",0,6);
  return bVar1;
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
byte F_007a6f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x3c));
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
      uVar4 = F_0055dcb0();
      uVar9 = 0;
      uVar8 = 0;
      puVar7 = &(*(undefined4 *)(gen_frame + 0x14));
      (*(uint *)(gen_frame + 0x10)) = uVar4;
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
      F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return 1;
  }
  F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
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

/* ref: Client::UI2::AddonTalkSubtitle::vf41 */
byte F_007a74a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a74a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TalkSubtitle",0,6);
  return bVar1;
}

/* ref: FUN_007a74b0 */
byte F_007a74b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return 1;
    }
    if ((*param_2 & 0xf) != 0) {
      F_0042aca0((int)this + 0x180);
      if ((*param_2 & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 4);
      }
      F_0042e430((undefined *)((int)this + 0x180),uVar2);
    }
    pvVar3 = (undefined *)F_0055e340(this,2);
    this_00 = (undefined *)F_0055e340(this,3);
    pvVar4 = (undefined *)F_0055e340(this,4);
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar4;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    uVar5 = F_0042a990((int)this + 0x180);
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
    uVar5 = (*(uint *)(gen_frame + 0x14));
    (*(uint *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x1d4);
    (*(uint *)(gen_frame + 0x1c)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x14));
    uVar5 = F_0055ab00(pvVar3);
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x14));
    bVar1 = F_0055ab50(pvVar3);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
    (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x14));
    uVar5 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38),((byte *)(gen_frame + 0x8)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x18)));
    F_00584110(pvVar3,-(uint)((((byte *)(gen_frame + 0x8))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0xc)));
    F_00584110(this_00,-(uint)((((byte *)(gen_frame + 0x8))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0xc)));
    F_00584110((*(undefined * PTR32 *)(gen_frame + 0x10)),-(uint)((((byte *)(gen_frame + 0x8))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0xc)));
    if ((param_2[0x10] & 0xf) != 0) {
      puVar6 = (undefined4 *)F_0055dd80(this);
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
      F_0055dda0(this,*puVar6,REFG(float, 0x1094834),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar3))));
      *(undefined1 *)((int)this + 0x1d9) = 1;
    }
    if (*(char *)((int)this + 0x1d8) == '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    }
    F_005a2670(((byte *)(gen_frame + 0x8)));
    this_01 = &(*(uint *)(gen_frame + 0x38));
    iVar7 = 3;
    do {
      this_01 = this_01 + -2;
      F_005a2670(this_01);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
}

/* ref: Client::UI2::AddonTalkSubtitle::vf40 */
uint F_007a76e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a76e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (this[0x1d9] != (undefined1)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this);
    this[0x1d9] = (undefined1)0x0;
  }
  return param_1;
}

/* ref: FUN_007a7710 */
uint F_007a7710(unsigned int gen_a0)
{
  GEN_ENTER(0x7a7710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc304));
  *(undefined4 *)((int)this + 0x18c) = 0;
  F_0042b630((int)this + 0x194);
  F_0042b630((int)this + 0x1e8);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x200;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(undefined4 *)((int)this + 0x270) = 0;
  uVar1 = REFG(float, 0x1094834);
  *(undefined2 *)((int)this + 0x250) = 3;
  *(undefined4 *)((int)this + 600) = 3;
  *(undefined4 *)((int)this + 0x278) = uVar1;
  uVar1 = REFG(float, 0x10c1f04);
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
uint F_007a7820(unsigned int gen_a0)
{
  GEN_ENTER(0x7a7820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc304));
  F_0042c880((undefined *)((int)this + 0x1e8));
  F_0042c880((undefined *)((int)this + 0x194));
  F_005a2670((undefined *)((int)this + 0x18c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonTalk::vf37 */
uint F_007a7870(unsigned int gen_a0)
{
  GEN_ENTER(0x7a7870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined * pAVar2;
  
  F_005b0510((undefined *)this);
  F_005a92d0(this,1,0x23,0);
  pAVar2 = this;
  this_00 = (undefined *)F_0055dcb0();
  uVar1 = F_00586870(this_00,pAVar2);
  this[0x280] = (undefined1)0x0;
  return uVar1;
}

/* ref: Client::UI2::AddonTalk::vf40 */
uint F_007a78a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a78a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Client::UI2::AddonTalk::vf41 */
byte F_007a78b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a78b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,&REFG(undefined, 0x10c1f08),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTalk::vf44 */
uint F_007a78c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    F_0055a500(*(int *)(this + 0x94),1);
    *(undefined4 *)(this + 0xa4) = *(undefined4 *)(this + 0x94);
  }
  F_0055a830(*(undefined * PTR32 *)(this + 0x90),4);
  uVar4 = F_0055e340(this,2);
  *(uint *)(this + 0x180) = uVar4;
  uVar4 = F_0055e340(this,3);
  *(uint *)(this + 0x184) = uVar4;
  F_00584110(*(undefined * PTR32 *)(this + 0x180),"Player Name");
  F_0055aa90(*(undefined4 *)(this + 0x180),3);
  F_0057eb00(*(undefined * PTR32 *)(this + 0x180),1);
  F_0055a3c0(*(undefined4 *)(this + 0x180),0);
  F_00584580(*(undefined * PTR32 *)(this + 0x184),0);
  F_00584110(*(undefined * PTR32 *)(this + 0x184),"");
  F_0055a3c0(*(undefined4 *)(this + 0x184),0);
  AVar2 = (undefined1)F_0055ab50(*(undefined4 *)(this + 0x184));
  this[0x252] = AVar2;
  AVar2 = (undefined1)F_0055ade0(*(undefined4 *)(this + 0x184));
  fVar1 = REFG(float, 0x10c1efc);
  this[0xf9] = (undefined1)((byte)this[0xf9] | 0x24);
  this[0x253] = AVar2;
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x20);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0,fVar1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0,REFG(float, 0x10c1efc),1);
  uVar3 = F_0055a020(*(undefined4 *)(this + 0x184));
  *(uint *)(this + 0x268) = (uint)uVar3;
  F_005a91d0(this,1,0x23);
  F_00568210(*(undefined4 *)(this + 0x90),(float)(float10)1,(float)(float10)1);
  uVar4 = F_005876a0(this);
  return uVar4;
}

/* ref: Client::UI2::AddonTalk::vf25 */
unsigned int F_007a7a30(unsigned int gen_a0)
{
  GEN_ENTER(0x7a7a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x26c] == (undefined1)0x0) {
    this[0x26c] = (undefined1)0x1;
    F_005a9110(this,0,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonTalk::vf49 */
unsigned int F_007a7a50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a7a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  
  F_005a9190((undefined *)this);
  pAVar2 = this;
  pvVar1 = (undefined *)F_0055dcb0();
  F_00586870(pvVar1,pAVar2);
  this[0x280] = (undefined1)0x0;
  pvVar1 = (undefined *)F_0055e2f0(this,4);
  F_0055a300(pvVar1,0);
  F_00577ad0(pvVar1);
  return 0;
}

/* ref: Client::UI2::AddonTalk::vf5 */
unsigned int F_007a7a90(unsigned int gen_a0, unsigned int gen_a1)
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
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x14) + 0x48))))(*(int * PTR32 *)(uVar1 + 0x14),0x12,1);
    uVar5 = 0;
    uVar3 = 0xc;
    pAVar4 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_00586850(pvVar2,uVar3,uVar5,pAVar4);
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = 0xc;
    pAVar4 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar2,uVar3,uVar5,pAVar4,uVar6,uVar7);
    uVar5 = 0;
    uVar3 = 9;
    pAVar4 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_00586850(pvVar2,uVar3,uVar5,pAVar4);
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = 9;
    pAVar4 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar2,uVar3,uVar5,pAVar4,uVar6,uVar7);
    F_005a89b0(this,param_1,1);
    uVar1 = F_0055dcb0();
    F_005aa060((undefined *)(uVar1 + 0x20c),0xf,0);
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x21c) = 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonTalk::vf6 */
uint F_007a7b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    uVar2 = F_0055aaf0(*(undefined4 *)(this + 0x180));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    uVar2 = F_0042a990(this + 0x1e8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x34,3,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    this[0x26d] = (undefined1)0x1;
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 2;
    do {
      this_01 = this_01 + -2;
      F_005a2670(this_01);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar2 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14) + 0x48))))(*(int * PTR32 *)(uVar2 + 0x14),0x12,0);
  pAVar4 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_00586870(this_00,pAVar4);
  this[0x280] = (undefined1)0x0;
  F_005b0610(this,param_1,1,param_2);
  uVar2 = F_0055dcb0();
  *(undefined1 *)(uVar2 + 0x21c) = 0;
  uVar2 = F_0055dcb0();
  uVar2 = F_005aa060((undefined *)(uVar2 + 0x20c),0,0);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_007a7c70 */
uint F_007a7c70(unsigned int gen_a0, unsigned int gen_a1)
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
  this_00 = (undefined *)F_0055e2f0(this,6);
  this_01 = (undefined *)F_0055e2f0(this,8);
  F_0055e2f0(this,9);
  F_0055e2f0(this,10);
  F_0055e2f0(this,0xb);
  this_02 = (undefined *)F_0055e2f0(this,0xc);
  F_0055e2f0(this,0xd);
  F_0055e2f0(this,0xe);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),1);
  uVar3 = 1;
  this_03 = (undefined *)F_0055e2f0(this,7);
  F_0055a300(this_03,uVar3);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
    uVar2 = F_0059d640(this_00,0x65);
    return uVar2;
  case 2: ;
    uVar3 = 0x66;
    break;
  case 3: ;
    uVar2 = F_0059d640(this_00,0x67);
    return uVar2;
  case 4: ;
    uVar2 = F_0059d640(this_00,0x68);
    return uVar2;
  case 5: ;
    F_0059d640(this_00,0x69);
    bVar1 = F_0055a1d0(this_02,100,100,100);
    return CONCAT31(extraout_var,bVar1);
  case 6: ;
    uVar2 = F_0059d640(this_00,0x6a);
    return uVar2;
  case 7: ;
    uVar3 = 0x6b;
    break;
  case 8: ;
    F_0059d640(this_00,0x69);
    bVar1 = F_0055a1d0(this_02,0,0,0);
    *(undefined4 *)((int)this + 0x188) = 0xffffffff;
    return CONCAT31(extraout_var_00,bVar1);
  default: ;
    bVar1 = F_0055a300(this_01,1);
    return CONCAT31(extraout_var_01,bVar1);
  }
  uVar2 = F_0059d640(this_00,uVar3);
  *(undefined4 *)((int)this + 0x188) = 0xffffffff;
  return uVar2;
}

/* ref: FUN_007a7df0 */
byte F_007a7df0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a7df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar1 = *(undefined4 *)((int)this + 0x240);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_0056c4c0((undefined *)((int)this + 0x18c),uVar1,&(*(undefined4 *)(gen_frame + 0x4)));
  if ((((byte)(*(undefined4 *)(gen_frame + 0x4)) & 0xf) == 6) && (*(int *)((int)this + 0x240) < 5)) {
    F_0042e430((undefined *)((int)this + 0x194),(*(undefined4 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x194);
    if (uVar2 != 0) {
      uVar2 = F_0042a990((int)this + 0x194);
      uVar2 = F_0057ed00(*(undefined * PTR32 *)((int)this + 0x184),uVar2);
      *(uint *)((int)this + 0x23c) = uVar2;
      if (0 < (int)uVar2) {
        *(int *)((int)this + 0x240) = *(int *)((int)this + 0x240) + 1;
        *(undefined1 *)((int)this + 0x248) = 0;
        *(undefined4 *)((int)this + 0x254) = 0;
        *(undefined4 *)((int)this + 0x244) = 5;
        *(undefined4 *)((int)this + 600) = 3;
        *(undefined4 *)((int)this + 0x260) = 0;
        F_0055ad30(*(undefined4 *)((int)this + 0x184),0);
        uVar2 = F_0042a990((int)this + 0x194);
        F_00584110(*(undefined * PTR32 *)((int)this + 0x184),uVar2);
        F_0055a300(*(undefined * PTR32 *)((int)this + 0x184),0);
        this_00 = (undefined *)F_0055e2f0(this,4);
        F_0055a300(this_00,1);
        F_0059d640(this_00,0x65);
        *(undefined1 *)((int)this + 0x280) = 1;
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
        return 1;
      }
    }
  }
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_007a7f20 */
byte F_007a7f20(unsigned int gen_a0)
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
    uVar2 = F_0042a990((int)this + 0x194);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x184),uVar2);
    F_0055ad30(*(undefined4 *)((int)this + 0x184),0);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x184),1);
    F_0055aa30(*(undefined4 *)((int)this + 0x184),*(undefined4 *)((int)this + 0x188));
    *(undefined4 *)((int)this + 0x254) = *(undefined4 *)((int)this + 0x23c);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  bVar1 = F_007a7df0(this);
  if ((bVar1 != 0) && (*(char *)((int)this + 0x264) == '\0')) {
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  uVar4 = 0;
  this_00 = (undefined *)F_0055e2f0(this,4);
  F_0055a300(this_00,uVar4);
  if (*(char *)((int)this + 0x26c) == '\0') {
    uVar4 = *(undefined4 *)((int)this + 0x24c);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
    uVar2 = F_0055aaf0(*(undefined4 *)((int)this + 0x180));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    uVar2 = F_0042a990((int)this + 0x1e8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x34,3,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    *(undefined2 *)((int)this + 0x26c) = 0x101;
    F_005a9110(this,0,0);
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 2;
    do {
      this_01 = this_01 + -2;
      F_005a2670(this_01);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: Client::UI2::AddonTalk::vf54 */
unsigned int F_007a80c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a80c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    F_00568210(*(undefined4 *)(this + 0x90),(float)(float10)1,(float)(float10)1);
    F_005876a0(this);
  }
  return 0;
}

/* ref: FUN_007a80f0 */
uint F_007a80f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a80f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc404));
  *(undefined1 *)((int)this + 0x180) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonEventSkip::vf37 */
uint F_007a8140(unsigned int gen_a0)
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
  F_00586850(this_00,uVar2,uVar3,pAVar4);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonEventSkip::vf41 */
byte F_007a8170(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"EventSkip",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonEventSkip::vf44 */
uint F_007a8180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  F_0056a3d0(this_00,uVar2,uVar3,pAVar4,uVar5,uVar6);
  bVar1 = F_0056b630(this,0x18ab2,2,0,8,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonEventSkip::vf46 */
byte F_007a81c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    F_0056a3d0(this_00,uVar1,uVar2,pAVar3,uVar4,uVar5);
    this[0x180] = (undefined1)0x0;
  }
  return 1;
}

/* ref: Client::UI2::AddonEventSkip::vf2 */
unsigned int F_007a81f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    F_00586850(this_00,uVar2,uVar3,pAVar4);
    this[0x180] = (undefined1)0x1;
    iVar1 = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(int *)(gen_frame + 0x8)) = (-(uint)(iVar1 != 2) & 0xb) - 1;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007a8270 */
uint F_007a8270(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
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
byte F_007a8320(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"HowTo",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonHowTo::vf25 */
uint F_007a8330(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8330u, gen_a0, 0u, 0u, 0u);
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

/* ref: Client::UI2::AddonHowTo::vf2 */
unsigned int F_007a8370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    return 0;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0xf: ;
    if (*(int *)(this + 0x180) != 0) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 3;
      cVar1 = *((char *)GEN_TOP((*(int *)(this + 0x180) + 0x88)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
      (*(uint *)(gen_frame + 0x18)) = (uint)(cVar1 != '\0');
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar2 = 1;
      do {
        this_00 = this_00 + -8;
        F_005a2670(this_00);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      return 0;
    }
    break;
  case 0x10: ;
    break;
  case 0x11: ;
    F_00557670(param_3,0);
    (*(uint *)(gen_frame + 0x18)) = 1;
    goto LAB_007a849b;
  case 0x12: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(uint *)(gen_frame + 0x18)) = param_2 + -0x12;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_01 = this_01 + -8;
      F_005a2670(this_01);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    return 0;
  case 0x17: ;
    F_00557670(param_3,0);
    (*(uint *)(gen_frame + 0x18)) = 2;
LAB_007a849b: ;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    break;
  default: ;
    goto switchD_007a8395_default;
  }
switchD_007a8395_default: ;
  return 0;
}

/* ref: Client::UI2::AddonHowTo::vf32 */
byte F_007a84e0(void)
{
  GEN_ENTER(0x7a84e0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_007a84f0 */
uint F_007a84f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a84f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0xa0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc604));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x18c) = 0;
  F_0055e2a0(this,2,1);
  *(undefined1 *)((int)this + 0x10f) = 1;
  return (uint)this;
}

/* ref: Client::UI2::AddonHowToNotice::vf41 */
byte F_007a8570(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"HowToNortice",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonHowToNotice::vf38 */
uint F_007a8580(unsigned int gen_a0, float gen_a1)
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
  F_0059d640(*(undefined * PTR32 *)(param_1 + 0x188),0x66 - (uint)(iVar3 != 0));
  uVar2 = F_0055dcb0();
  this = *(undefined * PTR32 *)(uVar2 + 0x30);
  F_00563db0(*(undefined4 *)(param_1 + 0x184),1);
  if (iVar3 == 1) {
    uVar4 = 0x34e;
LAB_007a8606: ;
    uVar2 = F_0043bd00(this,uVar4,0,0);
    F_0058bba0(*(undefined * PTR32 *)(param_1 + 0x184),uVar2);
  }
  else if (iVar3 == 2) {
    uVar4 = 0x18a8a;
    goto LAB_007a8606;
  }
  *(int *)(param_1 + 0x180) = iVar3;
LAB_007a8621: ;
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonHowToNotice::vf2 */
unsigned int F_007a8640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7a8640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    F_005a9110(this,0,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonHowToNotice::vf32 */
byte F_007a8670(void)
{
  GEN_ENTER(0x7a8670u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI2::AddonHowToNotice::vf30 */
uint F_007a8680(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  F_0056ac30((undefined *)this);
  iVar1 = *(int *)this;
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x24))(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))
                    (this,(uint)(ushort)((short)uVar2 - *(short *)(this + 0x18c)));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x2c))(this,uVar2 & 0xffff);
  return uVar2;
}

/* ref: Client::UI2::AddonChatLog::vf36 */
byte F_007a86c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a86c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this);
  bVar1 = F_00560e80(this + 0x21c,this);
  return bVar1;
}

/* ref: Client::UI2::AddonChatLog::vf41 */
byte F_007a86e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a86e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 7;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this,"ChatLog",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonChatLog::vf6 */
uint F_007a8730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0059cee0(*(undefined * PTR32 *)(this + 0x19c),0);
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonChatLog::vf29 */
byte F_007a8760(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x25b) != '\0') {
    return 0;
  }
  return *(char *)(in_ecx + 0x10d) != '\0';
}

/* ref: Client::UI2::AddonChatLog::vf39 */
unsigned int F_007a8780(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00588c10(this + 0x21c);
  F_00579170((undefined *)this);
  return 0;
}

/* ref: FUN_007a87a0 */
uint F_007a87a0(unsigned int gen_a0)
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
    uVar1 = F_00581060((undefined *)((int)this + 0x21c),**(int * PTR32 *)(*piVar4 + 0x110) + 1);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 4) + 0xb8))))(*(int * PTR32 *)(uVar1 + 4),0,0);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar2;
}

/* ref: Client::UI2::AddonChatLog::vf31 */
uint F_007a87f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a87f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a97f0((undefined *)this,param_1);
  return uVar1;
}

/* ref: FUN_007a8800 */
uint F_007a8800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c));
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xb;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x20)));
  F_007a87a0(this);
  if (param_1 != 2) {
    uVar1 = F_0055dcb0();
    F_00580230(*(undefined * PTR32 *)(uVar1 + 0x14),this,0);
    if (*(char *)((int)this + 0x259) == '\0') {
      if (param_1 == 0) {
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        pvVar2 = (undefined *)F_0055dcb0();
        F_0059b300(pvVar2,uVar5,uVar6,uVar7);
        goto LAB_007a88d4;
      }
      uVar5 = 0x11;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x38))))(*(int * PTR32 *)((int)this + 0x19c));
      pvVar2 = (undefined *)F_0055dcb0();
      F_0059b300(pvVar2,uVar1,this,uVar5);
    }
    else {
      uVar1 = F_0055dcb0();
      F_0059b9c0(*(undefined * PTR32 *)(uVar1 + 0x14));
      *(undefined1 *)((int)this + 0x259) = 0;
    }
  }
  if (param_1 != 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x38));
    iVar4 = 2;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return 0;
  }
LAB_007a88d4: ;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x14,2,&(*(undefined4 *)(gen_frame + 0x10)));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)));
  this_00 = &(*(undefined4 *)(gen_frame + 0x20));
  iVar4 = 1;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar3 = &(*(uint *)(gen_frame + 0x38));
  iVar4 = 2;
  do {
    puVar3 = puVar3 + -2;
    F_005a2670(puVar3);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
}

/* ref: FUN_007a89a0 */
uint F_007a89a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this_00,uVar2);
  return uVar1;
}

/* ref: FUN_007a89d0 */
uint F_007a89d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a89d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00581000((undefined *)((int)this + 0x21c),param_1);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x2d) = 1;
  }
  return uVar1;
}

/* ref: FUN_007a89f0 */
uint F_007a89f0(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar2 = F_00581060(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21c))),**(int * PTR32 *)(iVar1 + 0x110) + 1);
    uVar2 = F_00588cd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21c))),&(*(int *)&gen_args[1]),uVar2,0);
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cd))) = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cd))) + -1;
  }
  return uVar2;
}

/* ref: FUN_007a8a40 */
byte F_007a8a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 5;
  uVar1 = *(undefined4 *)(*param_2 + 0x14);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  uVar1 = puVar2[1];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
  uVar1 = *puVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_007a8b00 */
uint F_007a8b00(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar3 = F_00581060((undefined *)((int)this + 0x21c),*piVar1 + 1);
    if (uVar3 != 0) {
      return *(uint *)(uVar3 + 4);
    }
  }
  return 0;
}

/* ref: FUN_007a8b50 */
byte F_007a8b50(void)
{
  GEN_ENTER(0x7a8b50u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  this = *(undefined * PTR32 *)(uVar1 + 0x14);
  uVar1 = F_00560310();
  uVar1 = F_0057f860(this,uVar1);
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
byte F_007a8b90(void)
{
  GEN_ENTER(0x7a8b90u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_007a8bc0 */
uint F_007a8bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  
  uVar4 = F_0055e2f0(this,6);
  uVar2 = F_0055a020(uVar4);
  uVar3 = F_0055a030(uVar4);
  uVar5 = (uint)(ushort)-(uVar3 >> 1);
  uVar3 = F_00559d70(uVar4);
  F_0056b630(this,0x29b,6,1,4,(uint)(ushort)(uVar3 + (uVar2 >> 1)),uVar5);
  uVar4 = F_0055e2f0(this,8);
  uVar2 = F_0055a020(uVar4);
  uVar3 = F_0055a030(uVar4);
  uVar5 = (uint)(ushort)-(uVar3 >> 1);
  uVar3 = F_00559d70(uVar4);
  bVar1 = F_0056b630(this,0x29c,6,2,4,(uint)(ushort)(uVar3 + (uVar2 >> 1)),uVar5);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a8c80 */
uint F_007a8c80(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc704));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  uVar1 = F_0055dcb0();
  F_00784650((undefined *)((int)this + 0x1a0),uVar1);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) & 0xffffffbf;
  *(undefined1 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined2 *)((int)this + 0x2b8) = 0;
  *(undefined1 *)((int)this + 0x2ba) = 0;
  F_0055e2a0(this,8,1);
  F_0055e2a0(this,0x20000000,0);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x800;
  return (uint)this;
}

/* ref: FUN_007a8d20 */
uint F_007a8d20(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc704));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  F_00580e00((undefined *)((int)this + 0x218));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf41 */
byte F_007a8d50(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ChatLogPanel",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf36 */
uint F_007a8d60(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055dc60((undefined *)this);
  uVar1 = F_0055e2a0(this,8,1);
  return uVar1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf31 */
uint F_007a8d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a8d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a97f0((undefined *)this,param_1);
  return uVar1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf25 */
uint F_007a8da0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a8da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  if (((byte)this[0xfb] & 2) != 0) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_00581000((undefined *)(uVar3 + 0x21c),this);
      if (uVar2 != 0) {
        *(undefined1 *)(uVar2 + 0x2d) = 1;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_007a8df0 */
uint F_007a8df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00557640(((undefined1 *)(gen_frame + 0xc)),9);
  (*(undefined4 *)(gen_frame + 0x14)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2[1];
  uVar1 = F_00599860(*(undefined * PTR32 *)((int)this + 0x198),((undefined1 *)(gen_frame + 0xc)));
  if (uVar1 == 1) {
    uVar1 = F_00557670(param_1,0);
  }
  return uVar1;
}

/* ref: FUN_007a8ea0 */
uint F_007a8ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a8ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0055ad50(*(undefined * PTR32 *)((int)this + 0x198),0,0);
  uVar1 = F_0055dcb0();
  if ((*(char *)(uVar1 + 0x21b) != '\0') && ((char)param_1 == '\0')) {
    *(undefined1 *)(uVar1 + 0x21b) = 0;
    uVar1 = F_005aa060((undefined *)(uVar1 + 0x20c),0,0);
  }
  *(undefined1 *)((int)this + 0x2b5) = 0;
  return uVar1;
}

/* ref: FUN_007a8ef0 */
unsigned int F_007a8ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x2b5) == '\0') && ((char)param_2[3] == '\0')) {
    uVar1 = F_00577ea0(*(undefined * PTR32 *)((int)this + 0x198),(uint)*param_2,(uint)param_2[1],0);
    *(uint *)((int)this + 700) = uVar1;
    F_0055ad50(*(undefined * PTR32 *)((int)this + 0x198),uVar1 & 0xffff,uVar1 & 0xffff);
    F_0055aad0(*(undefined4 *)((int)this + 0x198),0xa000d268);
    *(undefined2 *)((int)this + 0x2b6) = 1;
  }
  return 0;
}

/* ref: FUN_007a8f60 */
uint F_007a8f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a8f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00577ea0(*(undefined * PTR32 *)((int)this + 0x198),(uint)*param_2,(uint)param_2[1],0);
  uVar2 = F_0055ad50(*(undefined * PTR32 *)((int)this + 0x198),(uint)*(ushort *)((int)this + 700),uVar1);
  *(bool *)((int)this + 0x2b7) = *(uint *)((int)this + 700) != uVar1;
  return uVar2;
}

/* ref: FUN_007a8fb0 */
byte F_007a8fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    F_0042b630(((undefined1 *)(gen_frame + 0x54)));
    F_0042b630(((undefined1 *)(gen_frame + 0x0)));
    F_00568440(*(undefined * PTR32 *)((int)this + 0x198),((undefined1 *)(gen_frame + 0x54)));
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x18) + 0xe0))) + 4))))
              (**(int * PTR32 *)(uVar1 + 0x18) + 0xe0,((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
    F_00557670(param_1,0);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    bVar2 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return bVar2;
}

/* ref: FUN_007a9060 */
unsigned int F_007a9060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    F_0056a3d0(pvVar2,uVar4,uVar5,pvVar3,uVar6,uVar7);
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0x3eb;
    uVar4 = 4;
    pvVar3 = this;
    pvVar2 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar2,uVar4,uVar5,pvVar3,uVar6,uVar7);
    ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,(int)this + 0x290,(int)this + 0x292);
    *(undefined2 *)((int)this + 0x298) = *param_2;
    *(undefined2 *)((int)this + 0x29a) = param_2[1];
    pvVar3 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x194),5);
    psVar1 = (short *)((int)this + 0x296);
    F_0055a000(pvVar3,(int)this + 0x294,psVar1);
    *psVar1 = *psVar1 + *(short *)((int)this + 0x2a2);
    F_00557670(param_1,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonChatLogPanel::vf51 */
uint F_007a9120(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7a9120u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))
                    ((int)TRUNC(REFG(double, 0x1088108) + (double)param_2) & 0xffff,
                     (int)TRUNC((double)param_3 + REFG(double, 0x1088108)) & 0xffff);
  return uVar1;
}

/* ref: FUN_007a9180 */
uint F_007a9180(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_007a91e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a91e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9e0(uVar3);
  bVar1 = F_0055de10(in_ecx,uVar3);
  bVar2 = 1;
  if (bVar1 == 0) {
    bVar2 = *(byte *)(in_ecx + 0x261);
  }
  return bVar2;
}

/* ref: Client::UI2::AddonChatLogPanel::vf32 */
byte F_007a9210(void)
{
  GEN_ENTER(0x7a9210u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_007a9260 */
uint F_007a9260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x20 + param_2 * 4);
}

/* ref: FUN_007a9270 */
uint F_007a9270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x1b0 + param_2 * 4);
}

/* ref: Client::UI2::AddonMacro::vf25 */
uint F_007a92c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a92c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_007a9300 */
uint F_007a9300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a9300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 * PTR32 *)(param_2 + 0xc);
  uVar2 = F_00562ff0(param_1);
  if (((uVar2 != 0xffffffff) &&
      (uVar2 = F_00562ff0(param_1), uVar2 != *(uint *)((int)this + 0x4cc))) &&
     ((uVar3 = F_0042b790((undefined *)(param_2 + 0x10)), uVar3 != 0 ||
      (((uVar2 = 0, puVar1 != (undefined4 *)0x0 && (((byte)*puVar1 & 0xf) == 2)) &&
       (*(char *)(puVar1 + 1) != '\0')))))) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) | 1;
    return uVar3;
  }
  *(undefined4 *)(param_2 + 100) = 0;
  return uVar2;
}

/* ref: FUN_007a9370 */
uint F_007a9370(unsigned int gen_a0)
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
  uVar2 = F_005b03e0(this_00,iVar3,uVar2);
  uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x19c),uVar2);
  return uVar2;
}

/* ref: Client::UI2::AddonMacro::vf36 */
uint F_007a93b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a93b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  *(undefined2 *)(this + 0x136) = 0x17;
  *(undefined4 *)(this + 0x4c4) = 100;
  return 0x17;
}

/* ref: Client::UI2::AddonMacro::vf41 */
byte F_007a93e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a93e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Macro",0,6);
  return bVar1;
}

/* ref: FUN_007a93f0 */
uint F_007a93f0(unsigned int gen_a0, unsigned int gen_a1)
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
      F_0059fd80(*(undefined * PTR32 *)((int)this + 0x4c0),1);
    }
    *(undefined * PTR32 *)((int)this + 0x4c0) = param_1;
    F_0059fd80(param_1,8);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c0) + 0x3c))))(*(int * PTR32 *)((int)this + 0x4c0));
    *(uint *)((int)this + 0xa4) = uVar2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 8;
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0x9c)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(uint *)(gen_frame + 0x14)) = (uint)uVar1;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 3;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_007a94c0 */
uint F_007a94c0(unsigned int gen_a0)
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
    (*(uint *)(gen_frame + 0x4)) = F_00562ff0(*(int *)((int)this + 0x4c0));
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x4));
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

/* ref: FUN_007a9590 */
byte F_007a9590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2)));
  if (*param_2 == 0) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = *param_2 + -0x84;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = 6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x8));
  uVar1 = *(undefined4 *)((*(int *)(gen_frame + 0xc)) + 0x98);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  uVar1 = puVar2[1];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar1;
  uVar1 = *puVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
  F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x10)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 4;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
}

/* ref: FUN_007a9690 */
unsigned int F_007a9690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 0) {
    F_0056b630(this,0x198,7,0,9,0,0);
  }
  return 0;
}

/* ref: FUN_007a96c0 */
uint F_007a96c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7a96c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
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
  F_0055e2a0(this,0x4000000,1);
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
uint F_007a9820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7a9820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  if ((*(byte *)(uVar1 + 0x1bc) & 8) != 0) {
    uVar1 = F_005a89b0(this,param_1,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf37 */
uint F_007a9860(unsigned int gen_a0)
{
  GEN_ENTER(0x7a9860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x1f,0);
  F_005a92d0(this,0,0x1c,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007a9890 */
byte F_007a9890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x29,3,&(*(undefined4 *)(gen_frame + 0x10)));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 2;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_007a9930 */
uint F_007a9930(unsigned int gen_a0)
{
  GEN_ENTER(0x7a9930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110((undefined *)((int)this + -0x180),1,&(*(undefined4 *)(gen_frame + 0x4)));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0x180) + 0x18))))((int)this + -0x180,1,0);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf41 */
byte F_007a9990(unsigned int gen_a0)
{
  GEN_ENTER(0x7a9990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ActionDetail",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf46 */
byte F_007a99a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7a99a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_007a99b0 */
uint F_007a99b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  F_00595190(*(undefined * PTR32 *)((int)this + 0x18c),(*(uint * PTR32 *)(param_1 + 0x20))[1],0,0);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x194),**(undefined4 * PTR32 *)(param_2 + 0x20));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x198),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))));
  if (((*(uint *)(gen_frame + 0x18)) & 1) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1f0),0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1f0),1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x19c),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc))));
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1a0),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x10))));
  }
  if (((*(uint *)(gen_frame + 0x18)) & 2) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 500),0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 500),1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1a4),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14))));
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1a8),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18))));
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
      F_0055a300((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0);
    }
    else {
      F_0055a300((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),1);
      F_00584110((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[-8],*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + *puVar6 * 4))));
      if ((char)puVar6[2] == '\0') {
        F_00584110((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[-5],*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + puVar6[1] * 4))))
        ;
      }
      else {
        uVar9 = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x14)) + 0x20) + puVar6[1] * 4)));
        F_0055dcb0();
        uVar5 = F_0056a410(uVar9);
        F_00584110((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[-5],uVar5);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 1;
    puVar6 = puVar6 + 4;
    iVar1 = (*(uint *)(gen_frame + 0x24)) + -1;
    (*(uint *)(gen_frame + 0x24)) = iVar1;
  } while (iVar1 != 0);
  if (((*(uint *)(gen_frame + 0x18)) & 0x20) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1ec),0);
  }
  else {
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x30)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),6);
    (*(undefined4 *)(gen_frame + 0x3c)) = uVar9;
    uVar4 = F_0055a020(*(undefined4 *)((int)this + 0x1fc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
    (*(uint *)(gen_frame + 0x44)) = (uint)uVar4;
    uVar5 = F_0055ab00(*(undefined4 *)((int)this + 0x1fc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),4);
    (*(uint *)(gen_frame + 0x4c)) = uVar5;
    bVar3 = F_0055ab50(*(undefined4 *)((int)this + 0x1fc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),4);
    (*(uint *)(gen_frame + 0x54)) = (uint)bVar3;
    uVar5 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38),((byte *)(gen_frame + 0x8)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x38)))
    ;
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1ec),1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1fc),-(uint)((((byte *)(gen_frame + 0x8))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0xc)));
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = REFG(undefined4, 0x108cc50);
    uVar5 = F_0055aaf0(*(undefined4 *)((int)this + 0x1fc));
    F_00577d20(*(undefined * PTR32 *)((int)this + 0x1fc),&(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x10)),uVar5,uVar8,uVar9,uVar10);
    F_0055a080(*(undefined4 *)((int)this + 0x1fc),(*(uint *)(gen_frame + 0x10)));
    fVar7 = F_00559d80(*(undefined4 *)((int)this + 0x1fc));
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x10)) & 0xffff;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = (undefined2)(*(uint *)(gen_frame + 0x10));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)) = ((undefined2)0x27f);
    (*(uint *)(gen_frame + 0x24)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x24)));
    (*(uint *)(gen_frame + 0x20)) = ((undefined2)0x27f) | 0xc00;
    uVar5 = (uint)TRUNC((float10)((*(uint *)(gen_frame + 0x10)) & 0xffff) + fVar7);
    (*(uint *)(gen_frame + 0x20)) = uVar5;
    F_0055a080(*(undefined4 *)((int)this + 0x1ec),uVar5 & 0xffff);
    F_005a2670(((byte *)(gen_frame + 0x8)));
    puVar6 = &(*(uint *)(gen_frame + 0x58));
    (*(uint *)(gen_frame + 0x24)) = 3;
    do {
      puVar6 = puVar6 + -2;
      F_005a2670(puVar6);
      iVar1 = (*(uint *)(gen_frame + 0x24)) + -1;
      (*(uint *)(gen_frame + 0x24)) = iVar1;
    } while (-1 < iVar1);
  }
  if (((*(uint *)(gen_frame + 0x18)) & 0x40) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1d8),0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1d8),1);
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x14)) + 0x20) + 8)));
    uVar5 = F_0055da10(*(undefined4 *)((int)this + 0x1e0));
    F_0058f730((undefined *)(uVar5 + 4),uVar9,0,6);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1e8),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34))));
  }
  if (((*(uint *)(gen_frame + 0x18)) & 0x80) == 0) {
    bVar3 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1dc),0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return CONCAT31(extraout_var,bVar3);
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x1dc),1);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x1e4),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x38))));
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = REFG(undefined4, 0x108cc50);
  uVar5 = F_0055aaf0(*(undefined4 *)((int)this + 0x1e4));
  F_00577d20(*(undefined * PTR32 *)((int)this + 0x1e4),&(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x14)),uVar5,uVar8,uVar9,uVar10);
  F_0055a080(*(undefined4 *)((int)this + 0x1e4),(*(uint *)(gen_frame + 0x14)));
  fVar7 = F_00559d80(*(undefined4 *)((int)this + 0x1e4));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)) = ((undefined2)0x27f);
  (*(uint *)(gen_frame + 0x24)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x24)));
  (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x14)) & 0xffff;
  (*(uint *)(gen_frame + 0x20)) = ((undefined2)0x27f) | 0xc00;
  uVar5 = (uint)TRUNC((float10)((*(uint *)(gen_frame + 0x14)) & 0xffff) + fVar7);
  (*(uint *)(gen_frame + 0x20)) = uVar5;
  uVar4 = F_0055a080(*(undefined4 *)((int)this + 0x1dc),uVar5 & 0xffff);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return CONCAT22(extraout_var_00,uVar4);
}

/* ref: FUN_007a9e00 */
uint F_007a9e00(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar1 = F_0055a030(iVar3);
    fVar4 = F_00559d80(iVar3);
    F_00559f00(param_1[0x7b],(float)(fVar4 + (float10)uVar1));
    iVar3 = param_1[0x7b];
  }
  if ((uVar2 & 0x40) != 0) {
    uVar1 = F_0055a030(iVar3);
    fVar4 = F_00559d80(iVar3);
    F_00559f00(param_1[0x76],(float)(fVar4 + (float10)uVar1));
    iVar3 = param_1[0x76];
  }
  if ((char)uVar2 < '\0') {
    uVar1 = F_0055a030(iVar3);
    fVar4 = F_00559d80(iVar3);
    F_00559f00(param_1[0x77],(float)(fVar4 + (float10)uVar1));
    iVar3 = param_1[0x77];
  }
  uVar1 = F_0055a030(iVar3);
  fVar4 = F_00559d80(iVar3);
  F_00559f00(param_1[0x80],(float)(fVar4 + (float10)uVar1));
  iVar3 = param_1[0x80];
  uVar5 = 2;
  this = (undefined *)F_0055e320(param_1);
  F_00561490(this,uVar5);
  uVar1 = F_0055a030(iVar3);
  fVar4 = F_00559d80(iVar3);
  iVar3 = *param_1;
  local_c = (uint)(longlong)TRUNC((fVar4 + (float10)uVar1) + (float10)*(double *)&REFG(undefined, 0x10944e0));
  uVar2 = local_c & 0xfffffffc;
  uVar1 = F_0055a020(param_1[0x62]);
  uVar2 = ((code *)*(gen_code32 *)(iVar3 + 0x4c))(param_1,(uint)uVar1,uVar2);
  return uVar2;
}

/* ref: FUN_007a9f90 */
ushort F_007a9f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,param_1,param_2);
  F_0056b300(this,param_3);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
  *(short *)((int)this + 0x204) = (short)uVar4 - (short)uVar2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this);
  uVar1 = (short)uVar2 - (short)uVar3;
  *(ushort *)((int)this + 0x206) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf14 */
uint F_007aa000(unsigned int gen_a0)
{
  GEN_ENTER(0x7aa000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (int)*(short *)(this + 0x12a) - (int)*(short *)(this + 0x204);
}

/* ref: Client::UI2::AddonActionDetail::vf15 */
uint F_007aa020(unsigned int gen_a0)
{
  GEN_ENTER(0x7aa020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (int)*(short *)(this + 300) - (int)*(short *)(this + 0x206);
}

/* ref: FUN_007aa110 */
unsigned int F_007aa110(unsigned int gen_a0)
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
uint F_007aa2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aa2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_0055a300(*(undefined * PTR32 *)this,param_1);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x18),param_1);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x38),param_1);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x70),param_1);
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0xdc),param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007aa330 */
uint F_007aa330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aa330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x18),param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007aa340 */
uint F_007aa340(unsigned int gen_a0)
{
  GEN_ENTER(0x7aa340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
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
  F_007aa110((int)this + 0x220);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc0;
  F_0055e2a0(this,0x4000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonItemDetail::vf5 */
uint F_007aa4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aa4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  if ((*(byte *)(uVar1 + 0x1bc) & 4) != 0) {
    uVar1 = F_005a89b0(this,param_1,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonItemDetail::vf37 */
uint F_007aa510(unsigned int gen_a0)
{
  GEN_ENTER(0x7aa510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00590210(this + 0x24,0x54,100);
  F_00590210(this + 0x24,0x50,100);
  F_00590210(this + 0x24,0x55,100);
  F_005a92d0(this,1,0x1d,0);
  F_005a92d0(this,0,0x1a,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonItemDetail::vf41 */
byte F_007aa560(unsigned int gen_a0)
{
  GEN_ENTER(0x7aa560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ItemDetail",1,6);
  return bVar1;
}

/* ref: FUN_007aa570 */
uint F_007aa570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aa570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) & 2) != 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x200),1);
    uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x200),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8)))
                        );
    return uVar2;
  }
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x200),0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007aa5c0 */
uint F_007aa5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aa5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) & 4) != 0) {
    uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x1b0),
                         *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34))));
  }
  return uVar1;
}

/* ref: FUN_007aa5f0 */
uint F_007aa5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aa5f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) & 0x80) == 0) {
    bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1fc),0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1fc),1);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_007aa620 */
uint F_007aa620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x204),0);
    return CONCAT31(extraout_var,bVar1);
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x204),1);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x208),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x38))));
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = REFG(undefined4, 0x108cc50);
  uVar3 = F_0055aaf0(*(undefined4 *)((int)this + 0x208));
  F_00577d20(*(undefined * PTR32 *)((int)this + 0x208),((undefined1 *)(gen_frame + 0x4)),((ushort *)(gen_frame + 0x8)),uVar3,uVar5,uVar6,uVar7);
  fVar4 = F_00559d80(*(undefined4 *)((int)this + 0x208));
  uVar2 = F_0055a080(*(undefined4 *)((int)this + 0x204),
                       (int)TRUNC((float10)((ushort *)(gen_frame + 0x8))[0] + fVar4) & 0xffff);
  return CONCAT22(extraout_var_00,uVar2);
}

/* ref: FUN_007aa6e0 */
uint F_007aa6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    bVar3 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x20c),0);
    return CONCAT31(extraout_var,bVar3);
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x20c),1);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x214),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x3c))));
  pcVar2 = *((char * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x40)));
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (pcVar6 == pcVar2 + 1) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x218),0);
    uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x210));
    fVar7 = F_00559d80(*(undefined4 *)((int)this + 0x210));
    fVar7 = fVar7 + (float10)uVar4;
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x218),1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x21c),pcVar2);
    uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x210));
    fVar7 = F_00559d80(*(undefined4 *)((int)this + 0x210));
    uVar5 = F_0055a030(*(undefined4 *)((int)this + 0x218));
    fVar7 = (float10)uVar5 + (float10)(double)(fVar7 + (float10)uVar4);
  }
  uVar4 = F_0055a080(*(undefined4 *)((int)this + 0x20c),(int)fVar7 & 0xffff);
  return CONCAT22(extraout_var_00,uVar4);
}

/* ref: FUN_007aa7f0 */
uint F_007aa7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x224),0);
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x22c),0);
    bVar2 = F_0055a300(*(undefined * PTR32 *)(param_1 + 600),0);
    return CONCAT31(extraout_var,bVar2);
  }
  F_0055a300(*(undefined * PTR32 *)(param_1 + 600),1);
  uVar6 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x44)));
  uVar4 = F_0055da10(*(undefined4 *)(param_1 + 0x25c));
  F_0058f730((undefined *)(uVar4 + 4),uVar6,0,6);
  uVar6 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x40)));
  F_0055dcb0();
  uVar4 = F_0056a410(uVar6);
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x260),uVar4);
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x264),*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x5c))));
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x268),*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x60))));
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x26c),*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 100))));
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x270),*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x68))));
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x278),*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x6c))));
  if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x58))) < 1) {
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x27c),0);
    uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x274));
    fVar5 = F_00559d80(*(undefined4 *)(param_1 + 0x274));
    fVar5 = fVar5 + (float10)uVar3;
  }
  else {
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x27c),1);
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x284),*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x70))));
    uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x27c));
    fVar5 = F_00559d80(*(undefined4 *)(param_1 + 0x27c));
    fVar5 = fVar5 + (float10)uVar3;
  }
  F_00559f00(*(undefined4 *)(param_1 + 0x288),(float)fVar5);
  F_00584110(*(undefined * PTR32 *)(param_1 + 0x288),*((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x74))));
  uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x288));
  fVar5 = F_00559d80(*(undefined4 *)(param_1 + 0x288));
  F_0055a080(*(undefined4 *)(param_1 + 600),(int)TRUNC(fVar5 + (float10)uVar3) & 0xffff);
  iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x48)));
  F_0055a300(*(undefined * PTR32 *)(param_1 + 0x224),1);
  if (iVar1 == 100) {
    uVar6 = 0x65;
  }
  else {
    uVar6 = 0x13;
  }
  F_0059d640(*(undefined * PTR32 *)(param_1 + 0x224),uVar6);
  F_00568250(*(undefined4 *)(param_1 + 0x228),
               (float)((float10)iVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x4c)));
  F_0055a300(*(undefined * PTR32 *)(param_1 + 0x22c),1);
  if (iVar1 == 0) {
    uVar6 = 0x66;
  }
  else if (iVar1 == 100) {
    uVar6 = 0x65;
  }
  else {
    uVar6 = 0x13;
  }
  F_0059d640(*(undefined * PTR32 *)(param_1 + 0x22c),uVar6);
  uVar4 = F_00568250(*(undefined4 *)(param_1 + 0x230),
                       (float)((float10)iVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  return uVar4;
}

/* ref: FUN_007aaa80 */
uint F_007aaa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  uVar2 = F_0055a2d0(param_1[0x72]);
  if ((char)uVar2 != '\0') {
    iVar4 = param_1[0x72];
  }
  if ((char)uVar3 < '\0') {
    if ((uVar3 & 0x8000) != 0) {
      uVar1 = F_0055a030(iVar4);
      fVar5 = F_00559d80(iVar4);
      uVar2 = F_00559f00(param_1[0x8e],(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x8e];
    }
    if ((uVar3 & 0x100) != 0) {
      uVar1 = F_0055a030(iVar4);
      fVar5 = F_00559d80(iVar4);
      uVar2 = F_00559f00(param_1[0x81],(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x81];
    }
    if ((uVar3 & 0x200) != 0) {
      uVar1 = F_0055a030(iVar4);
      fVar5 = F_00559d80(iVar4);
      uVar2 = F_00559f00(param_1[0x83],(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x83];
    }
    if ((uVar3 & 2) != 0) {
      uVar1 = F_0055a030(iVar4);
      fVar5 = F_00559d80(iVar4);
      uVar2 = F_00559f00(param_1[0x6f],(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x6f];
    }
  }
  else if ((uVar3 & 8) != 0) {
    uVar1 = F_0055a030(iVar4);
    fVar5 = F_00559d80(iVar4);
    uVar2 = F_00559f00(param_1[0x8e],(float)(fVar5 + (float10)uVar1));
    iVar4 = param_1[0x8e];
    if ((uVar3 & 2) != 0) {
      uVar1 = F_0055a030(iVar4);
      fVar5 = F_00559d80(iVar4);
      uVar2 = F_00559f00(param_1[0x6f],(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x6f];
    }
    if ((uVar3 & 0x10) != 0) {
      uVar1 = F_0055a030(iVar4);
      fVar5 = F_00559d80(iVar4);
      uVar2 = F_00559f00(param_1[0xbf],(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0xbf];
    }
    if ((uVar3 & 0x20) != 0) {
      uVar1 = F_0055a030(iVar4);
      fVar5 = F_00559d80(iVar4);
      uVar2 = F_00559f00(param_1[0xa4],(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0xa4];
    }
    if ((uVar3 & 0x40) != 0) {
      uVar1 = F_0055a030(iVar4);
      fVar5 = F_00559d80(iVar4);
      uVar2 = F_00559f00(param_1[0x96],(float)(fVar5 + (float10)uVar1));
      iVar4 = param_1[0x96];
    }
  }
  if ((uVar3 & 4) != 0) {
    uVar1 = F_0055a030(iVar4);
    fVar5 = F_00559d80(iVar4);
    uVar2 = F_00559f00(param_1[0x6d],(float)(fVar5 + (float10)uVar1));
    iVar4 = param_1[0x6d];
  }
  if ((uVar3 & 1) != 0) {
    uVar1 = F_0055a030(iVar4);
    fVar5 = F_00559d80(iVar4);
    uVar2 = F_00559f00(param_1[0x71],(float)(fVar5 + (float10)uVar1));
    iVar4 = param_1[0x71];
  }
  if (iVar4 != 0) {
    uVar1 = F_0055a030(iVar4);
    fVar5 = F_00559d80(iVar4);
    F_00559f00(param_1[100],(float)(fVar5 + (float10)uVar1));
    iVar4 = param_1[100];
    uVar1 = F_0055a030(iVar4);
    fVar5 = F_00559d80(iVar4);
    iVar4 = *param_1;
    local_c = (uint)(longlong)TRUNC((fVar5 + (float10)uVar1) + (float10)*(double *)&REFG(undefined, 0x10944e0));
    uVar3 = local_c & 0xfffffffc;
    uVar1 = F_0055a020(param_1[99]);
    uVar2 = ((code *)*(gen_code32 *)(iVar4 + 0x4c))(param_1,(uint)uVar1,uVar3);
  }
  return uVar2;
}

/* ref: FUN_007aae10 */
ushort F_007aae10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,param_1,param_2);
  F_0056b300(this,param_3);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
  *(short *)((int)this + 0x188) = (short)uVar4 - (short)uVar2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this);
  uVar1 = (short)uVar2 - (short)uVar3;
  *(ushort *)((int)this + 0x18a) = uVar1;
  return uVar1;
}

/* ref: FUN_007aae80 */
uint F_007aae80(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_007aaec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x29,4,&(*(undefined4 *)(gen_frame + 0x8)));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_007aaf60 */
uint F_007aaf60(unsigned int gen_a0)
{
  GEN_ENTER(0x7aaf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110((undefined *)((int)this + -0x180),1,&(*(undefined4 *)(gen_frame + 0x4)));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0x180) + 0x18))))((int)this + -0x180,1,0);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonItemDetail::vf14 */
uint F_007aafc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7aafc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (int)*(short *)(this + 0x12a) - (int)*(short *)(this + 0x188);
}

/* ref: Client::UI2::AddonItemDetail::vf15 */
uint F_007aafe0(unsigned int gen_a0)
{
  GEN_ENTER(0x7aafe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (int)*(short *)(this + 300) - (int)*(short *)(this + 0x18a);
}

/* ref: FUN_007ab010 */
uint F_007ab010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ab010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0057f810(*(undefined * PTR32 *)(param_1 + 0x14),param_2);
  return uVar1;
}

/* ref: FUN_007ab030 */
uint F_007ab030(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ab030u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if ((GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_3 == *(float *)&REFG(undefined, 0x1088114))) {
    uVar1 = F_00568230(param_1,param_3);
    return uVar1;
  }
  uVar1 = F_00568230(param_1,(float)((float10)param_2 / (float10)param_3));
  return uVar1;
}

/* ref: FUN_007ab070 */
uint F_007ab070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_007ab110(unsigned int gen_a0)
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
    pvVar2 = (undefined *)((int)pvVar2 + -8);
    F_005a2670(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 2000);
  iVar3 = 0xd;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x5c);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00590cc0((undefined *)((int)this + 0x284));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf36 */
byte F_007ab170(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this);
  bVar1 = F_00560e80(this + 0x284,this);
  return bVar1;
}

/* ref: Client::UI2::AddonCharacter::vf37 */
uint F_007ab190(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  F_00588e00(this + 0x284,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1b0) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
    }
    uVar1 = F_0055dcb0();
    F_00596b10((undefined *)(uVar1 + 0xe0),uVar3);
    if (*(int *)(this + 0x1b8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x70)));
    }
    uVar1 = F_0055dcb0();
    F_00596b10((undefined *)(uVar1 + 0xe0),uVar3);
    if (*(int *)(this + 0x1a8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
    }
    uVar1 = F_0055dcb0();
    F_00596b10((undefined *)(uVar1 + 0xe0),uVar3);
    uVar1 = F_0055dcb0();
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c0) + 0x38))))(*(int * PTR32 *)(this + 0x1c0));
    F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
    uVar1 = F_0055dcb0();
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c4) + 0x38))))(*(int * PTR32 *)(this + 0x1c4));
    F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
    uVar1 = F_0055dcb0();
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c8) + 0x38))))(*(int * PTR32 *)(this + 0x1c8));
    F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
  }
  F_005a92d0(this,0,2,0);
  F_005a92d0(this,1,3,0);
  F_005a92d0(this,0,7,0);
  F_005a92d0(this,1,8,0);
  F_005a92d0(this,0,0x38,0);
  F_005a92d0(this,1,0x3d,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf38 */
uint F_007ab2e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7ab2e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x284,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf39 */
unsigned int F_007ab310(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x284);
  return 0;
}

/* ref: Client::UI2::AddonCharacter::vf41 */
byte F_007ab330(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Character",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharacter::vf5 */
uint F_007ab340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ab340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0059bc90(this + 0x284);
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf6 */
uint F_007ab370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00580f10(this + 0x284,param_2,0);
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf46 */
byte F_007ab3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      F_00591c80(*(undefined * PTR32 *)(this + 0x1bc),uVar1);
    }
  }
  return 1;
}

/* ref: FUN_007ab3d0 */
uint F_007ab3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = *puVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)(gen_frame + 0x4));
  uVar1 = puVar2[1];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  uVar3 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000;
  *(undefined1 *)(param_1 + 0x15) = 1;
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_007ab4b0 */
uint F_007ab4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x2c))((int *)*param_2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2);
    bVar1 = *(byte *)(param_1 + 7);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0xc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = bVar1 & 1;
    bVar1 = *(byte *)((int)this + 0x13a);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x24,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    piVar2 = *(int * PTR32 *)((int)this + (*(int *)(gen_frame + 0xc)) * 4 + 0x1d4);
    uVar6 = 0;
    uVar5 = 1;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
    F_0059b340(this,uVar3,uVar5,uVar6);
    iVar4 = 4;
    this_00 = &(*(uint *)(gen_frame + 0x38));
    do {
      this_00 = this_00 + -2;
      uVar3 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_007ab5b0 */
uint F_007ab5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0x10;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf25 */
uint F_007ab620(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab620u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_007ab660 */
uint F_007ab660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ab660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),0);
  *(undefined4 *)((int)this + 0x7c8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_007ab690 */
uint F_007ab690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ab690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007ab6d0 */
uint F_007ab6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b9e0(uVar1);
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
unsigned int F_007ab710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    F_0056b780(this,0);
  }
  return 0;
}

/* ref: FUN_007ab730 */
byte F_007ab730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00573130((int)this + 0x24,param_1,1,0);
  if (uVar1 != 0) {
    F_0059b390(this,uVar1,1,param_2);
    return 1;
  }
  return 0;
}

/* ref: FUN_007ab770 */
byte F_007ab770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ab770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0xe) {
    F_0059b340(this,*(undefined4 *)((int)this + param_1 * 4 + 0x20c),1,param_2);
    return 1;
  }
  return 0;
}

/* ref: FUN_007ab7a0 */
uint F_007ab7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccc4c));
  F_0090a490((undefined *)((int)this + 0x180));
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterStatus::vf37 */
uint F_007ab7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  F_005a92d0(this,1,3,0);
  F_005a92d0(this,1,0x3d,0);
  pAVar3 = this + 0x1d0;
  local_8 = 0x1f;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar1 = F_0055dcb0();
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3);
      F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
    }
    pAVar3 = pAVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterStatus::vf41 */
byte F_007ab850(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharacterStatus",0,6);
  return bVar1;
}

/* ref: FUN_007ab860 */
uint F_007ab860(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xd;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007ab8a0 */
uint F_007ab8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  F_005903f0(this);
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
uint F_007ab990(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,3,0);
  F_005a92d0(this,0,0x38,0);
  F_005a92d0(this,1,0x3d,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterProfile::vf41 */
byte F_007ab9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ab9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharacterProfile",0,6);
  return bVar1;
}

/* ref: FUN_007ab9d0 */
uint F_007ab9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    bVar1 = *(byte *)(iVar3 + 0x1e0 + (int)this);
    (*(undefined4 *)(gen_frame + 0x10)) = 0xf;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(uint *)(gen_frame + 0x18)) = (uint)bVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    *(int *)((int)this + 0x6e4) = iVar3;
    iVar3 = 1;
    do {
      this_00 = this_00 + -8;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007aba60 */
uint F_007aba60(unsigned int gen_a0)
{
  GEN_ENTER(0x7aba60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cce4c));
  F_0090a540((undefined *)((int)this + 0x180));
  puVar1 = (undefined4 *)((int)this + 0x23c);
  iVar2 = 0x12;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterClass::vf37 */
uint F_007abac0(unsigned int gen_a0)
{
  GEN_ENTER(0x7abac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x3d,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterClass::vf41 */
byte F_007abae0(unsigned int gen_a0)
{
  GEN_ENTER(0x7abae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharacterClass",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharacterClass::vf47 */
uint F_007abaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    pvVar4 = (undefined *)F_00561550(*(undefined * PTR32 *)pAVar6,3);
    F_00591c00(pvVar4,*((undefined4 *)GEN_TOP((pAVar6 + *(int *)(iVar1 + 0x20) + (0x3b8 - (int)this)))),0);
    pvVar4 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar6,2);
    F_0057eb30(pvVar4,iVar2,0,0,0,0);
    pvVar4 = (undefined *)F_00561550(*(undefined * PTR32 *)pAVar6,5);
    F_0055a300(pvVar4,1);
    F_00568230(pvVar4,((float)GEN_TOF(((float10)*((int *)GEN_TOP((pAVar6 + *(int *)(iVar1 + 0x20) +
                                                           (0x49c - (int)this)))) *
                               (float10)*(double *)&REFG(undefined, 0x10928e8)))));
    *(int *)(param_1 + -8) = iVar2;
    *(undefined4 *)(param_1 + -4) =
         *((undefined4 *)GEN_TOP((pAVar6 + *(int *)(iVar1 + 0x20) + (0x450 - (int)this))));
    *(undefined4 *)param_1 = *((undefined4 *)GEN_TOP((pAVar6 + *(int *)(iVar1 + 0x20) + (0x4e8 - (int)this))));
    uVar5 = 0x11;
    if (iVar2 == 0) {
      uVar5 = 7;
    }
    F_0059d670(*(undefined * PTR32 *)(pAVar6 + 0x4c),uVar5);
    param_1 = param_1 + 0xc;
    pAVar6 = pAVar6 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar5 = 0;
  pvVar4 = (undefined *)F_0055e2f0(this,0x43);
  bVar3 = F_0055a300(pvVar4,uVar5);
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_007abc40 */
uint F_007abc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    this_00 = (undefined *)F_0055e2f0(this,0x4b);
    F_0055a300(this_00,uVar1);
    F_0057eb30(*(undefined * PTR32 *)((int)this + 0x238),*(undefined4 *)((int)this + param_3 * 0xc + 0x238),0,
                 0,0,0);
    uVar1 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x234),
                         *(undefined4 *)((int)this + param_3 * 0xc + 0x234),0,0,0,0);
  }
  return uVar1;
}

