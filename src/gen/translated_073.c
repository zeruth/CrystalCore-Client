#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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
      iVar4 = *(int *)(this + 0x208);
      if (iVar4 == 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar2;
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      if (iVar4 == 0x19) {
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
        iVar4 = *(int *)(this + 0x208);
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        if (iVar4 == 0) {
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
        if (iVar4 == 0x19) {
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
  iVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x14))[2];
  if (iVar7 != 0) {
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    uVar4 = F_0043bd00(this_00,iVar7,0,0);
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
  short sVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  F_0056b630(this,0x18aae,7,0,9,0,0);
  if (*(char *)((int)this + 0x215) != '\0') {
    this_00 = (undefined *)F_0055e2f0(this,0x13);
    F_00559d30(this_00,((short *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)));
    sVar1 = *(short *)((int)this + 0x216);
    (*(short *)(gen_frame + 0xc)) = *(short *)((int)this + 0x21a) + ((short *)(gen_frame + 0x14))[0];
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
    (*(undefined2 *)(gen_frame + 0x8)) = 0x4001;
    (*(short *)(gen_frame + 0xa)) = sVar1 + ((short *)(gen_frame + 0x18))[0];
    F_0056b6e0(this,&(*(undefined2 *)(gen_frame + 0x8)));
    (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x8)) + 1)) = 0x40;
    sVar1 = *(short *)((int)this + 0x218);
    (*(short *)(gen_frame + 0xc)) = *(short *)((int)this + 0x21c) + ((short *)(gen_frame + 0x14))[0];
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
    (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x8)) + 0)) = 2;
    (*(undefined2 *)(gen_frame + 0x8)) = 0x4002;
    (*(short *)(gen_frame + 0xa)) = sVar1 + ((short *)(gen_frame + 0x18))[0];
    uVar3 = F_0056b6e0(this,&(*(undefined2 *)(gen_frame + 0x8)));
    return uVar3;
  }
  F_0056b780(this,1);
  bVar2 = F_0056b780(this,2);
  return CONCAT31(extraout_var,bVar2);
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
  GEN_ENTER(0x7bb3a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((int *)(gen_frame + 0xc))[3] = uVar3;
  iVar1 = *(int *)((int)this + 0x180);
  ((int *)(gen_frame + 0xc))[0] = 8;
  ((int *)(gen_frame + 0xc))[1] = 0x2b;
  ((int *)(gen_frame + 0xc))[2] = 0x43;
  if ((iVar1 != 0) && (uVar3 = *(uint *)((int)this + 900), ((int *)(gen_frame + 0xc))[(int)(uVar3)] != -1)) {
    uVar5 = 0;
    uVar3 = F_0055e2f0(this,0x68);
    uVar4 = F_0055e2f0(this,((int *)(gen_frame + 0xc))[(int)(*(int *)((int)this + 900))]);
    F_0058e3c0(*(undefined * PTR32 *)((int)this + 0x180),uVar4,uVar3,uVar5);
    F_00574c80(*(undefined4 *)((int)this + 0x180),
                 *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 900) * 4 + 0x388))),1,1);
    uVar3 = F_0055e2f0(this,0x47);
    uVar2 = F_0055a030(uVar3);
    uVar3 = (uint)uVar2;
    *((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc2))) = uVar2;
  }
  F_00c47745(((int *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
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
  int iVar1;
  ushort uVar2;
  uint in_EAX = 0;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)((int)this + 0x180);
  ((undefined4 *)(gen_frame + 0x4))[0] = 7;
  ((undefined4 *)(gen_frame + 0x4))[1] = 0x36;
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar3 = F_0055e2f0(this,0x3e);
    uVar4 = F_0055e2f0(this,((undefined4 *)(gen_frame + 0x4))[(int)(*(int *)((int)this + 0x2b4))]);
    F_0058e3c0(*(undefined * PTR32 *)((int)this + 0x180),uVar4,uVar3,uVar5);
    F_00574c80(*(undefined4 *)((int)this + 0x180),
                 *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x2b4) * 4 + 0x2b8))),1,1);
    uVar3 = F_0055e2f0(this,0x16);
    uVar2 = F_0055a030(uVar3);
    in_EAX = (uint)uVar2;
    *((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc2))) = uVar2;
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
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[3] = uVar3;
  iVar1 = *(int *)((int)this + 0x180);
  ((uint *)(gen_frame + 0xc))[0] = 0xd;
  ((uint *)(gen_frame + 0xc))[1] = 0x29;
  ((uint *)(gen_frame + 0xc))[2] = 0x5d;
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar3 = F_0055e2f0(this,0x95);
    uVar4 = F_0055e2f0(this,((uint *)(gen_frame + 0xc))[(int)(*(int *)((int)this + 0x444))]);
    F_0058e3c0(*(undefined * PTR32 *)((int)this + 0x180),uVar4,uVar3,uVar5);
    F_00574c80(*(undefined4 *)((int)this + 0x180),
                 *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x444) * 4 + 0x448))),1,1);
    uVar3 = F_0055e2f0(this,0xf);
    uVar2 = F_0055a030(uVar3);
    uVar3 = (uint)uVar2;
    *((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc2))) = uVar2;
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
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
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x4))[5] = uVar3;
  iVar1 = *(int *)((int)this + 0x180);
  ((uint *)(gen_frame + 0x4))[0] = 10;
  ((uint *)(gen_frame + 0x4))[1] = 0x3e;
  ((uint *)(gen_frame + 0x4))[2] = 0x54;
  ((uint *)(gen_frame + 0x4))[3] = 0x91;
  ((uint *)(gen_frame + 0x4))[4] = 0xb9;
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar3 = F_0055e2f0(this,0xbe);
    uVar4 = F_0055e2f0(this,((uint *)(gen_frame + 0x4))[(int)(*(int *)((int)this + 0x57c))]);
    F_0058e3c0(*(undefined * PTR32 *)((int)this + 0x180),uVar4,uVar3,uVar5);
    F_00574c80(*(undefined4 *)((int)this + 0x180),
                 *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x57c) * 4 + 0x580))),1,1);
    uVar3 = F_0055e2f0(this,0x18);
    uVar2 = F_0055a030(uVar3);
    uVar3 = (uint)uVar2;
    *((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc2))) = uVar2;
  }
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
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
  GEN_ENTER(0x7c07b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
  GEN_ENTER(0x7c0d70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
  GEN_ENTER(0x7c1a70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
  GEN_ENTER(0x7c1d70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
  GEN_ENTER(0x7c1f70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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

/* ref: Client::UI2::AddonCharaSelectListMenu::vf38 */
uint F_007c2360(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c2360u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) == 0) ||
     ((uVar1 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c2406;
  uVar1 = F_0055dcb0();
  if ((*(short *)(uVar1 + 0x1e8) == 0) && (*(short *)(uVar1 + 0x1ea) == 0)) {
    uVar1 = F_0055dcb0();
    if (*(char *)(param_1 + 0x1bc) != *(char *)(uVar1 + 0x21d)) goto LAB_007c2406;
    uVar1 = F_0055dcb0();
    bVar2 = *(char *)(uVar1 + 0x21d) == '\0';
    this = *(undefined * PTR32 *)(param_1 + 0x1a0);
    *(bool *)(param_1 + 0x1bc) = bVar2;
    if (this == (undefined *)0x0) goto LAB_007c2406;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*(char *)(param_1 + 0x1bc) == '\0') goto LAB_007c2406;
    this = *(undefined * PTR32 *)(param_1 + 0x1a0);
    *(undefined1 *)(param_1 + 0x1bc) = 0;
    if (this == (undefined *)0x0) goto LAB_007c2406;
    iVar3 = 0x66;
  }
  F_0059d640(this,iVar3);
LAB_007c2406: ;
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf41 */
byte F_007c2420(unsigned int gen_a0)
{
  GEN_ENTER(0x7c2420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaSelect_ListMenu",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf46 */
byte F_007c2430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c2430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (((byte)this[0xf9] & 1) == 0) {
    return 0;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 4);
  }
  if ((uVar3 & 2) == 0) {
    if (((uVar3 & 4) != 0) && (-1 < *(int *)(this + 0x1b4))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x54))))(*(int * PTR32 *)(this + 400),*(int *)(this + 0x1b4),0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x6c))))
                (*(int * PTR32 *)(this + 400),*(undefined4 *)(this + 0x1b4),0,0);
      *(undefined4 *)(this + 0x1b4) = 0xffffffff;
    }
  }
  else {
    piVar1 = *(int * PTR32 *)(this + 400);
    iVar2 = piVar1[0x30];
    *(int *)(this + 0x1b4) = iVar2;
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,iVar2,1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x6c))))
              (*(int * PTR32 *)(this + 400),*(undefined4 *)(this + 0x1b4),0,0);
  }
  if ((uVar3 & 0x20) != 0) {
    piVar1 = *(int * PTR32 *)(this + 400);
    iVar2 = piVar1[0x30];
    *(int *)(this + 0x1b8) = iVar2;
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,iVar2,1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x6c))))
              (*(int * PTR32 *)(this + 400),*(undefined4 *)(this + 0x1b8),0,0);
    return 1;
  }
  if (((uVar3 & 0x40) != 0) && (-1 < *(int *)(this + 0x1b8))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x54))))(*(int * PTR32 *)(this + 400),*(int *)(this + 0x1b8),0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x6c))))
              (*(int * PTR32 *)(this + 400),*(undefined4 *)(this + 0x1b8),0,0);
    *(undefined4 *)(this + 0x1b8) = 0xffffffff;
  }
  return 1;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf5 */
uint F_007c2560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c2560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  int * piVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  AVar1 = this[0xf9];
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),AVar1);
  if (((byte)AVar1 & 1) != 0) {
    if (((byte)AVar1 & 0x40) == 0) {
      piVar2 = *(int * PTR32 *)(this + 400);
      if (piVar2 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2);
        if (uVar3 == 0) {
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c));
          *(uint *)(this + 0xa4) = uVar3;
        }
      }
      F_005a89b0(this,param_1,1);
    }
    else {
      F_005a89b0(this,param_1,1);
      uVar3 = F_0055dcb0();
      F_00587d80(*(undefined * PTR32 *)(uVar3 + 0x14),this);
      this[0xf9] = (undefined1)((byte)this[0xf9] & 0xbf);
    }
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 5;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar3;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf6 */
uint F_007c2610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c2610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf2 */
uint F_007c2630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c2630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint * puVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x1c)) = param_3;
  uVar3 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar3 != 5) && (uVar3 != 4)) {
    uVar3 = (param_1 & 0xffff) - 0xc;
    switch((unsigned int)(uintptr_t)(param_1 & 0xffff)) {
    case 0xc: ;
      if (((char)param_4[1] == '\0') && ((*param_4 == 2 || (*param_4 == 3)))) {
        if (*(int *)(this + 0x1b0) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b0) + 0x88))))(*(int * PTR32 *)(this + 0x1b0),this,0);
        }
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x14)),3);
        F_005a2670(((undefined1 *)(gen_frame + 0x14)));
        uVar3 = F_00557670((*(uint *)(gen_frame + 0x1c)),0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar3;
      }
      break;
    case 0xd: ;
    case 0xe: ;
    case 0x10: ;
    case 0x11: ;
    case 0x12: ;
    case 0x13: ;
    case 0x14: ;
    case 0x15: ;
    case 0x16: ;
    case 0x18: ;
    case 0x19: ;
    case 0x1a: ;
    case 0x1b: ;
    case 0x1c: ;
    case 0x1d: ;
    case 0x1e: ;
      break;
    case 0xf: ;
      bVar2 = F_00a34970((undefined *)param_4[2],0x16d);
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        if (*(int *)(this + 0x1b0) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b0) + 0x88))))(*(int * PTR32 *)(this + 0x1b0),this,0);
        }
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0xc)));
        uVar3 = F_00557670((*(uint *)(gen_frame + 0x1c)),0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar3;
      }
      break;
    case 0x17: ;
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x188) + 100)))) {
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
        (*(undefined4 *)(gen_frame + 0x24)) = 0xd;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
        (*(uint *)(gen_frame + 0x2c)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
        (*(int *)(gen_frame + 0x34)) = 0xffffffff;
        uVar3 = F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x20)));
        if ((char)uVar3 != '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x18))))(*(int * PTR32 *)(this + 0x1a8),0,0);
        }
        puVar4 = &(*(uint *)(gen_frame + 0x38));
        iVar5 = 2;
        do {
          puVar4 = puVar4 + -2;
          uVar3 = F_005a2670(puVar4);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar3;
      }
      uVar3 = param_2;
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x18c) + 100)))) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1ac) + 0x14))))(*(int * PTR32 *)(this + 0x1ac),0);
      }
      break;
    case 0x1f: ;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
      iVar5 = param_4[2];
      (*(uint *)(gen_frame + 0x2c)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
      (*(int *)(gen_frame + 0x34)) = iVar5;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x28)));
      puVar4 = &(*(uint *)(gen_frame + 0x38));
      iVar5 = 1;
      do {
        puVar4 = puVar4 + -2;
        uVar3 = F_005a2670(puVar4);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar3;
    case 0x20: ;
      if (*(int *)(this + 0x1a8) != 0) {
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
        (*(uint *)(gen_frame + 0x2c)) = 4;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0xc0)));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
        (*(int *)(gen_frame + 0x34)) = uVar1;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x28)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x14))))(*(int * PTR32 *)(this + 0x1a8),0);
        puVar4 = &(*(uint *)(gen_frame + 0x38));
        iVar5 = 1;
        do {
          puVar4 = puVar4 + -2;
          uVar3 = F_005a2670(puVar4);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar3;
      }
      break;
    case 0x21: ;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x58))))(*(int * PTR32 *)(this + 400),param_4[2]);
      if ((char)uVar3 == '\0') {
        iVar5 = param_4[4];
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = (uint)((char)iVar5 == '\x01');
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
        (*(undefined4 *)(gen_frame + 0x24)) = 0xd;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
        iVar5 = param_4[2];
        (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x1c));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
        (*(int *)(gen_frame + 0x34)) = iVar5;
        uVar3 = F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x20)));
        if ((char)uVar3 != '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x18))))(*(int * PTR32 *)(this + 0x1a8),0,0);
        }
        puVar4 = &(*(uint *)(gen_frame + 0x38));
        iVar5 = 2;
        do {
          puVar4 = puVar4 + -2;
          uVar3 = F_005a2670(puVar4);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar3;
      }
      break;
    default: ;
      goto switchD_007c2683_default;
    }
  }
switchD_007c2683_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_007c2a10 */
uint F_007c2a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c2a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  undefined4 uVar7;
  
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5);
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b9a0(uVar6);
  iVar2 = *(int *)(uVar5 + 8);
  iVar3 = *param_3;
  iVar4 = *(int *)(uVar6 + 4);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x58))))(*(int * PTR32 *)((int)this + 400),param_1);
  ((code *)*(gen_code32 *)(iVar3 + 0x28))(param_3,(uint)((char)uVar5 == '\0'));
  if (iVar4 != 0) {
    uVar7 = *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x20) + 0x140 + param_1 * 4)));
    this_00 = (undefined *)F_00559ba0(*param_2);
    F_00584110(this_00,uVar7);
  }
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x160 + param_1 * 4)));
    if ((uVar1 & 2) != 0) {
      uVar5 = F_0059d670((undefined *)param_2[1],0x66);
      return uVar5;
    }
    if ((uVar1 & 8) != 0) {
      uVar5 = F_0059d670((undefined *)param_2[1],0x68);
      return uVar5;
    }
    if ((-1 < (char)uVar1) && ((uVar1 & 0x100) == 0)) {
      uVar5 = F_0059d670((undefined *)param_2[1],0x65);
      return uVar5;
    }
    uVar5 = F_0059d670((undefined *)param_2[1],0x67);
  }
  return uVar5;
}

/* ref: FUN_007c2b00 */
byte F_007c2b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c2b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_1 == '\0') << 7 | *(byte *)((int)this + 0xfb) & 0x7f;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) & 0x7f;
  *(byte *)((int)this + 0xfb) = bVar1;
  return bVar1;
}

/* ref: FUN_007c2b30 */
uint F_007c2b30(unsigned int gen_a0)
{
  GEN_ENTER(0x7c2b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
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
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0a8c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf37 */
uint F_007c2c00(unsigned int gen_a0)
{
  GEN_ENTER(0x7c2c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,2,0);
  F_005a92d0(this,0,1,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf41 */
byte F_007c2c30(unsigned int gen_a0)
{
  GEN_ENTER(0x7c2c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaSelect_Detail",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf6 */
uint F_007c2c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c2c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,param_2);
  if (*(undefined * PTR32 *)(this + 0x1d4) != (undefined *)0x0) {
    uVar1 = F_005b0610(*(undefined * PTR32 *)(this + 0x1d4),param_1,1,param_2);
  }
  return uVar1;
}

/* ref: FUN_007c2cc0 */
uint F_007c2cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c2cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0b8c));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 400) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a4) = 0xffffffff;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf37 */
uint F_007c2d60(unsigned int gen_a0)
{
  GEN_ENTER(0x7c2d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,2,0);
  F_005a92d0(this,0,1,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf38 */
uint F_007c2d90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c2d90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf41 */
byte F_007c2db0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c2db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaSelect_WorldServer",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf6 */
uint F_007c2dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c2dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf46 */
byte F_007c2de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c2de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_007c2df0 */
uint F_007c2df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c2df0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
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

/* ref: FUN_007c2e80 */
uint F_007c2e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c2e80u, gen_a0, gen_a1, gen_a2, 0u);
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
  (*(undefined4 *)(gen_frame + 0x4)) = 7;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
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

/* ref: FUN_007c2f10 */
uint F_007c2f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c2f10u, gen_a0, gen_a1, gen_a2, 0u);
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
  (*(undefined4 *)(gen_frame + 0x4)) = 8;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
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

/* ref: FUN_007c2fa0 */
uint F_007c2fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c2fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  char * pcVar4;
  
  iVar1 = param_1 * 5 + 100;
  uVar3 = param_1;
  if (*(int *)((int)this + iVar1 * 4) != 0) {
    *(undefined4 *)((int)this + iVar1 * 4) = 0;
    F_0059d670(*(undefined * PTR32 *)((int)this + param_1 * 0x14 + 0x180),
                 *(undefined4 *)(&REFG(undefined, 0x10c34ac) + param_1 * 4));
    puVar2 = (uint *)F_00ab36c0(0x39);
    if (puVar2 == (uint *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    }
    F_00584110(*(undefined * PTR32 *)((int)this + param_1 * 0x14 + 0x18c),pcVar4);
    uVar3 = F_00560910(0);
    this_00 = (undefined *)F_00559ba0(*(undefined4 *)((int)this + param_1 * 0x14 + 0x188));
    F_00584110(this_00,uVar3);
    uVar3 = F_0059b3f0(this,1,0);
  }
  return uVar3;
}

/* ref: FUN_007c3030 */
uint F_007c3030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c3030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  char * pcVar4;
  
  iVar1 = param_1 * 5 + 100;
  uVar3 = param_1;
  if (*(int *)((int)this + iVar1 * 4) != -1) {
    *(undefined4 *)((int)this + iVar1 * 4) = 0xffffffff;
    F_0059d670(*(undefined * PTR32 *)((int)this + param_1 * 0x14 + 0x180),
                 *(undefined4 *)(&REFG(undefined, 0x10c34ac) + param_1 * 4));
    puVar2 = (uint *)F_00ab36c0(0x3a);
    if (puVar2 == (uint *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    }
    F_00584110(*(undefined * PTR32 *)((int)this + param_1 * 0x14 + 0x18c),pcVar4);
    uVar3 = F_00560910(0);
    this_00 = (undefined *)F_00559ba0(*(undefined4 *)((int)this + param_1 * 0x14 + 0x188));
    F_00584110(this_00,uVar3);
    uVar3 = F_0059b3f0(this,1,0);
  }
  return uVar3;
}

/* ref: FUN_007c30c0 */
uint F_007c30c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c30c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  *(int *)((int)this + 0x1b0) = param_1;
  iVar1 = 0;
  puVar2 = (undefined4 *)((int)this + 0x184);
  do {
    if ((undefined *)*puVar2 != (undefined *)0x0) {
      uVar3 = param_2;
      if (iVar1 != param_1) {
        uVar3 = 0xffffffff;
      }
      in_EAX = F_005623b0((undefined *)*puVar2,uVar3);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 5;
  } while (iVar1 < 2);
  return in_EAX;
}

/* ref: FUN_007c3100 */
uint F_007c3100(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
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
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0c8c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMake::vf38 */
unsigned int F_007c31a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c31a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((((*(int *)(this + 0x1b8) == 0) && (*(int *)(this + 0x180) != 0)) &&
      ((*((byte *)GEN_TOP((*(int *)(this + 0x180) + 0xf9))) & 1) != 0)) &&
     ((*(int *)(this + 0x184) != 0 && ((*((byte *)GEN_TOP((*(int *)(this + 0x184) + 0xf9))) & 1) != 0)))) {
    *(undefined4 *)(this + 0x1b8) = 1;
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffec;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeSubMenuBase::vf45 */
uint F_007c3210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c3210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0xe0) & 0xf;
  if (((uVar2 != 0) && (*(int *)(param_2 + 0xe4) == 2)) ||
     ((uVar1 = param_2, uVar2 != 0 && (*(int *)(param_2 + 0xe4) == 3)))) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this);
  }
  return uVar1;
}

/* ref: FUN_007c3250 */
uint F_007c3250(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0d8c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeTitle::vf41 */
byte F_007c32c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c32c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Title",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeTitle::vf38 */
uint F_007c32d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c32d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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

/* ref: FUN_007c3350 */
uint F_007c3350(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x800;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0e8c));
  *(undefined4 *)((int)this + 0x180) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeShadow::vf41 */
byte F_007c33c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c33c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Shadow",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeShadow::vf44 */
uint F_007c33d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c33d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x180) = uVar2;
  *(undefined4 *)(this + 0xa0) = 0;
  uVar2 = F_0055dcb0();
  uVar1 = *(undefined4 *)(uVar2 + 0x238);
  uVar2 = F_0055dcb0();
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,*(undefined4 *)(uVar2 + 0x234),uVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeShadow::vf54 */
unsigned int F_007c3420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c3420u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1[0x60] != 0) {
    fVar2 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar2 = fVar2 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,0);
    fVar1 = (float)param_3;
    if (param_3 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1,0);
    F_00568230(param_1[0x60],((float)GEN_TOF(((float10)fVar2 / (float10)(uVar3 & 0xffff)))));
    F_00568250(param_1[0x60],((float)GEN_TOF(((float10)fVar1 / (float10)(uVar4 & 0xffff)))));
  }
  return 0;
}

/* ref: FUN_007c34c0 */
uint F_007c34c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c34c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0f8c));
  iVar2 = (int)this + 0x180;
  iVar1 = 2;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar2 = (int)this + 0x27c;
  iVar1 = 2;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  return (uint)this;
}

/* ref: FUN_007c3530 */
uint F_007c3530(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0f8c));
  pvVar2 = (undefined *)((int)this + 0x378);
  iVar3 = 2;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x27c);
  iVar3 = 2;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeCity::vf41 */
byte F_007c35a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c35a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_City",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeCity::vf44 */
uint F_007c35b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c35b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  
  this_00 = this + 0x27c;
  puVar3 = (undefined4 *)(param_2 + 0xe1c);
  param_2 = 3;
  do {
    if ((*(byte *)(puVar3 + 5) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = puVar3[6];
    }
    F_0042e430(this_00 + -0xfc,uVar1);
    if ((*(byte *)(puVar3 + -1) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *puVar3;
    }
    F_0042e430(this_00,uVar1);
    puVar3 = puVar3 + 2;
    this_00 = this_00 + 0x54;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0xffffff9c,0,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0xffffff9c,0,(float)(float10)1,1);
  *(undefined4 *)(this + 0xa0) = 0;
  uVar2 = F_0055e360(this,3);
  uVar2 = F_0055da10(uVar2);
  *(uint *)(this + 0x378) = uVar2;
  uVar2 = F_0055e340(this,2);
  *(uint *)(this + 0x37c) = uVar2;
  uVar2 = F_005b0610(this,1,1,0);
  return uVar2;
}

/* ref: FUN_007c3690 */
uint F_007c3690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c3690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = (undefined *)F_0055e2f0(this,1);
  if (((this_00 != (undefined *)0x0) && (*(int *)((int)this + 0x378) != 0)) &&
     (*(int *)((int)this + 0x37c) != 0)) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
    F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar1 + 0x14));
    iVar2 = (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2;
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x37c),1);
    if (param_1 == 1) {
      F_0059d640(this_00,0x66);
      F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x378) + 4))),0x1edc1,iVar2,6);
      iVar2 = (int)this + 0x180;
    }
    else if (param_1 == 2) {
      F_0059d640(this_00,0x65);
      F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x378) + 4))),0x1edc2,iVar2,6);
      iVar2 = (int)this + 0x1d4;
    }
    else {
      if (param_1 - 3U != 0) {
        return param_1 - 3U;
      }
      F_0059d640(this_00,0x67);
      F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x378) + 4))),0x1edc3,iVar2,6);
      iVar2 = (int)this + 0x228;
    }
    uVar1 = F_0042a990(iVar2);
    this_00 = (undefined *)F_00584110(*(undefined * PTR32 *)((int)this + 0x37c),uVar1);
  }
  return (uint)this_00;
}

/* ref: FUN_007c3790 */
uint F_007c3790(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d108c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf37 */
uint F_007c37f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c37f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf41 */
byte F_007c3820(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Return",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf2 */
unsigned int F_007c3830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c3830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007c3880 */
uint F_007c3880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7c3880u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)((int)this + 0x184) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))
                      (*(int * PTR32 *)((int)this + 0x184),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf38 */
uint F_007c38a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c38a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) == 0) ||
     ((uVar1 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c3946;
  uVar1 = F_0055dcb0();
  if ((*(short *)(uVar1 + 0x1e8) == 0) && (*(short *)(uVar1 + 0x1ea) == 0)) {
    uVar1 = F_0055dcb0();
    if (*(char *)(param_1 + 0x188) != *(char *)(uVar1 + 0x21d)) goto LAB_007c3946;
    uVar1 = F_0055dcb0();
    bVar2 = *(char *)(uVar1 + 0x21d) == '\0';
    this = *(undefined * PTR32 *)(param_1 + 0x180);
    *(bool *)(param_1 + 0x188) = bVar2;
    if (this == (undefined *)0x0) goto LAB_007c3946;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*(char *)(param_1 + 0x188) == '\0') goto LAB_007c3946;
    this = *(undefined * PTR32 *)(param_1 + 0x180);
    *(undefined1 *)(param_1 + 0x188) = 0;
    if (this == (undefined *)0x0) goto LAB_007c3946;
    iVar3 = 0x66;
  }
  F_0059d640(this,iVar3);
LAB_007c3946: ;
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: FUN_007c3960 */
uint F_007c3960(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d118c));
  F_0042cc20((undefined *)((int)this + 0x188),"",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x1dc),"",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x230),"",REFG(undefined4, 0x108cc50));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x800;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined2 *)((int)this + 0x2ac) = 0;
  return (uint)this;
}

/* ref: FUN_007c3a30 */
uint F_007c3a30(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d118c));
  F_0042c880((undefined *)((int)this + 0x230));
  F_0042c880((undefined *)((int)this + 0x1dc));
  F_0042c880((undefined *)((int)this + 0x188));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf41 */
byte F_007c3a90(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_CharName",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf38 */
uint F_007c3aa0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c3aa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(byte *)((int)param_1 + 0xf9) & 1) == 0) ||
     ((uVar2 = *(uint *)((int)param_1 + 0xf4) >> 0x14 & 0xf, uVar2 != 3 && (uVar2 != 2))))
  goto LAB_007c3b99;
  if (*(char *)((int)param_1 + 0x2ad) == '\0') {
    if (*(char *)((int)param_1 + 0x2ac) == '\0') {
      if (*((char *)GEN_TOP((*(int *)((int)param_1 + 0x28c) + 0x84))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*(int *)((int)param_1 + 0x290) + 0x84)));
        goto LAB_007c3b6a;
      }
      goto LAB_007c3b6c;
    }
    if (*((char *)GEN_TOP((*(int *)((int)param_1 + 0x28c) + 0x84))) == '\0') {
      iVar3 = *(int *)((int)param_1 + 0x290);
      goto LAB_007c3b14;
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x2ac) == '\0') {
      cVar1 = *((char *)GEN_TOP((*(int *)((int)param_1 + 0x294) + 0x84)));
LAB_007c3b6a: ;
      if (cVar1 == '\0') goto LAB_007c3b99;
LAB_007c3b6c: ;
      uVar2 = F_0055dcb0();
      if (*(char *)(uVar2 + 0x21d) == '\0') {
        *(undefined1 *)((int)param_1 + 0x2ac) = 1;
        F_0056b630(param_1,0x11a,7,0,9,0,0);
      }
      goto LAB_007c3b99;
    }
    iVar3 = *(int *)((int)param_1 + 0x294);
LAB_007c3b14: ;
    if (*(char *)(iVar3 + 0x84) == '\0') goto LAB_007c3b2b;
  }
  uVar2 = F_0055dcb0();
  if (*(char *)(uVar2 + 0x21d) != '\0') {
LAB_007c3b2b: ;
    *(undefined1 *)((int)param_1 + 0x2ac) = 0;
    F_0056b780(param_1,0);
    uVar2 = F_005a2370(param_1,param_2);
    return uVar2;
  }
LAB_007c3b99: ;
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: FUN_007c3bb0 */
uint F_007c3bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar1;
  if ((*(byte *)((int)this + 0xf9) & 1) == 0) goto LAB_007c3d23;
  if (*(char *)((int)this + 0x2ad) != '\0') {
    F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)),*(int *)((int)this + 0x294) + 0x9c);
    uVar1 = F_0042b790(((undefined1 *)(gen_frame + 0xb4)));
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),uVar1 != 0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a0) + 0x28))))(*(int * PTR32 *)((int)this + 0x2a0),(*(uint *)(gen_frame + 0x8)));
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return (uint)uVar4;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)),*(int *)((int)this + 0x28c) + 0x9c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x290) + 0x9c);
  uVar1 = F_0042b790(((undefined1 *)(gen_frame + 0xc)));
  uVar2 = F_0042b790(((undefined1 *)(gen_frame + 0xb4)));
  uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xc)));
  if (uVar3 < 2) {
LAB_007c3c99: ;
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  }
  else {
    uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xb4)));
    if ((uVar3 < 2) || ((*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),1), 0x14 < uVar1 + uVar2))
    goto LAB_007c3c99;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a0) + 0x28))))(*(int * PTR32 *)((int)this + 0x2a0),(*(uint *)(gen_frame + 0x8)));
  if (*(int *)((int)this + 0x288) != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x60)));
    uVar1 = F_00560910(uVar1 + uVar2);
    F_0042e430(((undefined1 *)(gen_frame + 0x60)),uVar1);
    F_0042e370(((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10c3664));
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x60)));
    F_00584110(*(undefined * PTR32 *)((int)this + 0x288),uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  uVar1 = (uint)uVar4;
LAB_007c3d23: ;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf52 */
byte F_007c3d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c3d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (((char)param_1[1] == '\0') && ((*param_1 == 2 || (*param_1 == 3)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007c3d70 */
unsigned int F_007c3d70(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x2ad) == '\0') {
    uVar1 = F_0055dcb0();
    F_00596b90((undefined *)(uVar1 + 0xe0),(uint)*(byte *)((int)this + 0x13a),1);
  }
  return 0;
}

/* ref: FUN_007c3da0 */
uint F_007c3da0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined1 *)((int)this + 0x194) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d128c));
  *(undefined4 *)((int)this + 400) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeHelp::vf37 */
uint F_007c3e20(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,2,0);
  F_005a92d0(this,0,1,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeHelp::vf41 */
byte F_007c3e50(unsigned int gen_a0)
{
  GEN_ENTER(0x7c3e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Help",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeHelp::vf47 */
unsigned int F_007c3e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c3e60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  undefined * puVar4;
  
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != 0) {
    iVar1 = *(int *)((*(int *)&gen_args[1]) + 8);
    iVar2 = *(int *)((*(int *)&gen_args[2]) + 4);
    if ((**(uint * PTR32 *)(iVar1 + 0x20) & 0x20) != 0) {
      **(uint * PTR32 *)(iVar1 + 0x20) = **(uint * PTR32 *)(iVar1 + 0x20) & 0xffffffdf;
      iVar1 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x180)));
      if (iVar1 < 1) {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]),1,0);
        return 0;
      }
      if ((*(undefined * PTR32 *)&gen_args[0])[0x194] != (undefined1)0x0) {
        uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
        F_004142d0(&(*(int *)&gen_args[1]),*(undefined4 *)(uVar3 + 0x14));
        if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != 0) {
          F_0058f730(((undefined *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + 4))),iVar1,(*(int *)&gen_args[1]) + 2,6);
        }
        switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))))) {
        case 0: ;
        case 1: ;
        case 5: ;
          F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1e0))));
          this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188)));
          puVar4 = &REFG(undefined, 0x10bed77);
          break;
        case 3: ;
          F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1e0))));
          F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),"");
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),0);
        default: ;
          (*(undefined * PTR32 *)&gen_args[0])[0x194] = (undefined1)0x0;
          return 0;
        case 4: ;
          F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1e0))));
          F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1e4))));
          F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),"");
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),0);
          (*(undefined * PTR32 *)&gen_args[0])[0x194] = (undefined1)0x0;
          return 0;
        case 6: ;
          F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1dc))));
          puVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1e0)));
          this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184)));
        }
        F_00584110(this_00,puVar4);
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),0);
        (*(undefined * PTR32 *)&gen_args[0])[0x194] = (undefined1)0x0;
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_007c4030 */
uint F_007c4030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c4030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(uint *)((int)this + 400) = param_1;
  uVar1 = param_1;
  if ((*(int *)((int)this + 0x184) != 0) && (*(int *)((int)this + 0x188) != 0)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
    case 1: ;
    case 3: ;
      uVar1 = F_0059d6a0(this,0x13,1,0);
      return uVar1;
    case 4: ;
      uVar1 = F_0059d6a0(this,0x66,1,0);
      return uVar1;
    case 5: ;
      uVar1 = F_0059d6a0(this,0x65,1,0);
      return uVar1;
    case 6: ;
      uVar1 = F_0059d6a0(this,0x67,1,0);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeHelp::vf54 */
uint F_007c40c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c40c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  ushort uVar1;
  uint in_ecx;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  
  in_ecx = F_0055e2f0(param_1,6);
  uVar2 = 0;
  if (in_ecx != 0) {
    fVar3 = (float10)(int)param_3;
    if ((int)param_3 < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar1 = F_0055a030(in_ecx);
    fVar4 = F_0055dfd0(param_1);
    uVar2 = F_00568250(in_ecx,((float)GEN_TOF((((float10)1 / fVar4) *
                                       (float10)((float)fVar3 / (float)uVar1)))));
  }
  return uVar2;
}

/* ref: FUN_007c4130 */
uint F_007c4130(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined1 *)((int)this + 0x1b0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d138c));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeBgSelector::vf37 */
uint F_007c41c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c41c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeBgSelector::vf41 */
byte F_007c41f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c41f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_BgSelector",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeBgSelector::vf38 */
uint F_007c4200(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c4200u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) == 0) ||
     ((uVar1 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c42a6;
  uVar1 = F_0055dcb0();
  if ((*(short *)(uVar1 + 0x1e8) == 0) && (*(short *)(uVar1 + 0x1ea) == 0)) {
    uVar1 = F_0055dcb0();
    if (*(char *)(param_1 + 0x1b0) != *(char *)(uVar1 + 0x21d)) goto LAB_007c42a6;
    uVar1 = F_0055dcb0();
    bVar2 = *(char *)(uVar1 + 0x21d) == '\0';
    this = *(undefined * PTR32 *)(param_1 + 0x1a8);
    *(bool *)(param_1 + 0x1b0) = bVar2;
    if (this == (undefined *)0x0) goto LAB_007c42a6;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*(char *)(param_1 + 0x1b0) == '\0') goto LAB_007c42a6;
    this = *(undefined * PTR32 *)(param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    if (this == (undefined *)0x0) goto LAB_007c42a6;
    iVar3 = 0x66;
  }
  F_0059d640(this,iVar3);
LAB_007c42a6: ;
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: FUN_007c42c0 */
uint F_007c42c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c42c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  undefined * this;
  uint uVar2;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = 0x81b;
  ((undefined4 *)(gen_frame + 0x4))[1] = 0x81c;
  puVar1 = (uint *)F_00ab36c0(((undefined4 *)(gen_frame + 0x4))[(int)(param_1)]);
  this = (undefined *)F_00559ba0(*param_2);
  uVar2 = 0;
  if (this != (undefined *)0x0) {
    if (puVar1 != (uint *)0x0) {
      uVar2 = F_00584110(this,(*puVar1 & 0xffffff) + (int)puVar1);
      return uVar2;
    }
    uVar2 = F_00584110(this,"");
  }
  return uVar2;
}

/* ref: FUN_007c4330 */
uint F_007c4330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c4330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  undefined4 uVar4;
  
  this_00 = (gen_frame + 0x1c);
  if (param_1 < 5) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x180);
    uVar2 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar2 + 0xc0);
    if ((param_1 == 0) || (param_1 == 4)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x28))))(*(int * PTR32 *)((int)this + 0x198),uVar4);
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffed;
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(uint *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar3 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007c43c0 */
uint F_007c43c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c43c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)((int)this + 0x184);
  iVar2 = 4;
  do {
    ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x28))((int *)*puVar3,param_1);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x194) + 0x28))))(*(int * PTR32 *)((int)this + 0x194),param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x28))))(*(int * PTR32 *)((int)this + 0x198),param_1);
  return uVar1;
}

/* ref: FUN_007c4410 */
uint F_007c4410(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d148c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakePose::vf37 */
uint F_007c4490(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakePose::vf41 */
byte F_007c44c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c44c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Pose",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakePose::vf38 */
uint F_007c44d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c44d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) == 0) ||
     ((uVar1 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c4576;
  uVar1 = F_0055dcb0();
  if ((*(short *)(uVar1 + 0x1e8) == 0) && (*(short *)(uVar1 + 0x1ea) == 0)) {
    uVar1 = F_0055dcb0();
    if (*(char *)(param_1 + 0x19c) != *(char *)(uVar1 + 0x21d)) goto LAB_007c4576;
    uVar1 = F_0055dcb0();
    bVar2 = *(char *)(uVar1 + 0x21d) == '\0';
    this = *(undefined * PTR32 *)(param_1 + 0x198);
    *(bool *)(param_1 + 0x19c) = bVar2;
    if (this == (undefined *)0x0) goto LAB_007c4576;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*(char *)(param_1 + 0x19c) == '\0') goto LAB_007c4576;
    this = *(undefined * PTR32 *)(param_1 + 0x198);
    *(undefined1 *)(param_1 + 0x19c) = 0;
    if (this == (undefined *)0x0) goto LAB_007c4576;
    iVar3 = 0x66;
  }
  F_0059d640(this,iVar3);
LAB_007c4576: ;
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: FUN_007c4590 */
uint F_007c4590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c4590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 3) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x18c);
    uVar2 = F_00561390();
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar2 + 0xc0);
  }
  return uVar2;
}

/* ref: FUN_007c45d0 */
uint F_007c45d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c45d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff0;
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 0x110);
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c4630 */
uint F_007c4630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c4630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffef;
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 0x110);
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::vf41 */
byte F_007c46d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c46d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_ClassSelector",0,6);
  return bVar1;
}

/* ref: FUN_007c46e0 */
uint F_007c46e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c46e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1a4) = param_2;
  return param_2;
}

/* ref: FUN_007c46f0 */
uint F_007c46f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c46f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = F_00ab3660(param_1);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar1 + 0x38);
  }
  uVar1 = F_00ab21a0(uVar2);
  if (uVar1 != 0) {
    return (uint)*(byte *)(uVar1 + 0x40);
  }
  return 0;
}

/* ref: FUN_007c4730 */
uint F_007c4730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c4730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff6;
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

/* ref: FUN_007c47a0 */
uint F_007c47a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c47a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1a8) = param_2;
  return param_2;
}

/* ref: FUN_007c47b0 */
uint F_007c47b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c47b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  uVar2 = *(undefined4 *)((int)this + 0x194);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  uVar1 = F_00ab3660(*(undefined4 *)((int)this + 0x194));
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar1 + 0x38);
  }
  uVar1 = F_00ab21a0(uVar2);
  if (uVar1 != 0) {
    uVar3 = (uint)*(byte *)(uVar1 + 0x40);
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007c4860 */
uint F_007c4860(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x11;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007c48a0 */
uint F_007c48a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c48a0u, gen_a0, gen_a1, 0u, 0u);
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
  (*(undefined4 *)(gen_frame + 0x10)) = 0x12;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
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

/* ref: FUN_007c4910 */
uint F_007c4910(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d159c));
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  F_0042b630((int)this + 0x1c4);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_007c49c0 */
uint F_007c49c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c49c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d159c));
  F_0042c880((undefined *)((int)this + 0x1c4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf37 */
uint F_007c4a00(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  F_005a92d0(this,1,2,0);
  F_005a92d0(this,0,1,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf41 */
byte F_007c4a40(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_WorldServer",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf62 */
uint F_007c4a50(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_0055e2f0(this,0xc);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0059d670(this_00,0x65);
  }
  return uVar1;
}

/* ref: FUN_007c4a70 */
uint F_007c4a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c4a70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < 0) {
    return 0;
  }
  return param_1 * 0x100 + param_2;
}

/* ref: FUN_007c4a90 */
uint F_007c4a90(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0055dcb0();
  F_00560760(((uint *)(gen_frame + 0x0)));
  uVar3 = F_0042a990((int)this + 0x1c4);
  iVar1 = *(int *)((int)this + 0x1ac);
  ((uint *)(gen_frame + 0x0))[0] = uVar3;
  uVar2 = F_00590ad0((undefined *)(uVar2 + 0xe0),2,(uint)*(byte *)((int)this + 0x13a),
                       *(undefined4 *)(iVar1 + 0x68),((uint *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_007c4ae0 */
uint F_007c4ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_00596b10((undefined *)(uVar1 + 0xe0),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x68))));
  return uVar1;
}

/* ref: FUN_007c4b00 */
uint F_007c4b00(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1ac) + 0x28))))(*(int * PTR32 *)((int)this + 0x1ac),0);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff8;
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 400);
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c4b70 */
uint F_007c4b70(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d169c));
  return (uint)this;
}

/* ref: FUN_007c4be0 */
uint F_007c4be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c4be0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 in_ecx;
  undefined * this;
  uint * puVar1;
  char * pcVar2;
  
  ((uint *)(gen_frame + 0x8))[0xc] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  in_ecx = *param_2;
  ((uint *)(gen_frame + 0x8))[0] = 0x28;
  ((uint *)(gen_frame + 0x8))[1] = 0x29;
  ((uint *)(gen_frame + 0x8))[2] = 0x2a;
  ((uint *)(gen_frame + 0x8))[3] = 0x2b;
  ((uint *)(gen_frame + 0x8))[4] = 0x2c;
  ((uint *)(gen_frame + 0x8))[5] = 0x2d;
  ((uint *)(gen_frame + 0x8))[6] = 0x2e;
  ((uint *)(gen_frame + 0x8))[7] = 0x2f;
  ((uint *)(gen_frame + 0x8))[8] = 0x30;
  ((uint *)(gen_frame + 0x8))[9] = 0x31;
  ((uint *)(gen_frame + 0x8))[10] = 0x32;
  ((uint *)(gen_frame + 0x8))[0xb] = 0x33;
  this = (undefined *)F_00559ba0(in_ecx);
  if ((this != (undefined *)0x0) && (param_1 < 0xc)) {
    puVar1 = (uint *)F_00ab36c0(((uint *)(gen_frame + 0x8))[(int)(param_1)]);
    if (puVar1 == (uint *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = ((char *)GEN_TOP(((*puVar1 & 0xffffff) + (int)puVar1)));
    }
    this = (undefined *)F_00584110(this,pcVar2);
  }
  F_00c47745(((uint *)(gen_frame + 0x8))[0xc] ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf41 */
byte F_007c4cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_BirthDay",0,6);
  return bVar1;
}

/* ref: FUN_007c4cd0 */
uint F_007c4cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d179c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeGuardian::vf41 */
byte F_007c4d40(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Guardian",0,6);
  return bVar1;
}

/* ref: FUN_007c4d50 */
uint F_007c4d50(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x28c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x290) = 0xffffffff;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d189c));
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  F_00c48350((undefined *)((int)this + 0x194),0,0x70);
  F_00c48350((undefined *)((int)this + 0x21c),0,0x70);
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf36 */
uint F_007c4e10(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this);
  this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf41 */
byte F_007c4e30(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf54 */
uint F_007c4e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c4e40u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = F_0055dfd0(param_1);
  fVar5 = (float10)(int)param_3;
  if ((int)param_3 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar2 = F_0055a030(param_1[0x86]);
  F_00568250(param_1[0x86],
               ((float)GEN_TOF(((float10)(float)fVar5 /
                      (float10)((float)GEN_TOF(((float10)uVar2 * (float10)(double)((float10)1 / fVar4))))))));
  iVar1 = *param_1;
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x50))(param_1,0,param_3);
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x4c))(param_1,uVar3 & 0xffff);
  return uVar3;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf59 */
uint F_007c4ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c4ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b1020((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf62 */
uint F_007c4ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c4ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_0055e2f0(this,0x24);
  uVar1 = F_0059d640(this_00,0x65);
  return uVar1;
}

/* ref: FUN_007c4f00 */
unsigned int F_007c4f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c4f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (((-1 < param_1) && (param_1 < *(int *)((int)this + 0x294))) &&
     (iVar1 = *(int *)((int)this + 0x28c), param_1 != iVar1)) {
    if ((-1 < iVar1) && (iVar1 < 0x1c)) {
      piVar2 = *(int * PTR32 *)((int)this + iVar1 * 4 + 0x21c);
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
    }
    *(int *)((int)this + 0x28c) = param_1;
    piVar2 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x21c);
    ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,0,0);
  }
  return 0;
}

/* ref: FUN_007c4f60 */
uint F_007c4f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c4f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  undefined1 * this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this_01 = (gen_frame + 0x1c);
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x294))) {
    iVar4 = *(int *)((int)this + 0x28c);
    if (param_1 == iVar4) {
      piVar1 = *(int * PTR32 *)((int)this + iVar4 * 4 + 0x21c);
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
    }
    else {
      if ((-1 < iVar4) && (iVar4 < 0x1c)) {
        piVar1 = *(int * PTR32 *)((int)this + iVar4 * 4 + 0x21c);
        ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
        if (*(int *)((int)this + 0x28c) + 1 < *(int *)((int)this + 0x294)) {
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x28c) * 4 + 0x220)));
          ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
        }
      }
      *(int *)((int)this + 0x28c) = param_1;
      piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x194);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      *(uint *)((int)this + 0xa4) = uVar2;
      this_00 = (undefined *)F_0055dcb0();
      F_0059b300(this_00,uVar5,uVar6,uVar7);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x28c) * 4 + 0x21c)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,1,1);
      if (*(int *)((int)this + 0x28c) + 1 < *(int *)((int)this + 0x294)) {
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x28c) * 4 + 0x220)));
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
    }
    *(int *)((int)this + 0x290) = param_1;
    iVar4 = 0;
    puVar3 = (undefined4 *)((int)this + 0x194);
    do {
      F_0059dde0((undefined *)*puVar3,(uint)(iVar4 == *(int *)((int)this + 0x290)));
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 0x1c);
    *(undefined4 *)((int)this + 0x298) = *(undefined4 *)((int)this + 0x28c);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 0x28c);
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff3;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_01 = this_01 + -8;
      in_EAX = F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return in_EAX;
}

/* ref: FUN_007c50d0 */
uint F_007c50d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c50d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x28c);
  if ((-1 < iVar1) && (iVar1 < 0x1c)) {
    piVar2 = *(int * PTR32 *)((int)this + iVar1 * 4 + 0x21c);
    ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x28c) * 4 + 0x194))),0);
    if (*(int *)((int)this + 0x28c) + 1 < *(int *)((int)this + 0x294)) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x28c) * 4 + 0x220)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
    }
  }
  *(undefined4 *)((int)this + 0x290) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28c) = 0xffffffff;
  return 0xffffffff;
}

/* ref: FUN_007c5140 */
uint F_007c5140(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff7;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c5190 */
uint F_007c5190(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d199c));
  *(undefined4 *)((int)this + 0x1a0) = 0;
  in_ecx = (int)this + 0x1c8;
  iVar1 = 8;
  do {
    F_0058d480(in_ecx);
    in_ecx = in_ecx + 0x30;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x378) = 0xffffffff;
  *(undefined4 *)((int)this + 0x37c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x380) = 0xffffffff;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined2 *)((int)this + 0x3b8) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x40;
  *(undefined1 *)((int)this + 900) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf41 */
byte F_007c5260(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Progress",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf45 */
uint F_007c5270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c5270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180));
  *(uint *)(this + 0xa4) = uVar1;
  return uVar1;
}

/* ref: FUN_007c5290 */
uint F_007c5290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7c5290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint param_7 = (uint)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  *(undefined4 *)((int)this + 0x398) = param_1;
  *(undefined4 *)((int)this + 0x39c) = param_2;
  *(undefined4 *)((int)this + 0x3a0) = param_3;
  *(undefined4 *)((int)this + 0x3a4) = param_4;
  *(undefined4 *)((int)this + 0x3a8) = param_5;
  *(undefined4 *)((int)this + 0x3ac) = param_6;
  *(uint *)((int)this + 0x3b0) = param_7;
  *(undefined4 *)((int)this + 0x3b4) = param_8;
  return param_7;
}

/* ref: FUN_007c52e0 */
uint F_007c52e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c52e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = 0;
  if (*(int *)((int)this + 0x388) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x388) + 0x194))) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x14)) = param_2;
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 0xfffffff1;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
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

/* ref: FUN_007c5360 */
unsigned int F_007c5360(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x388) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x388) + 0x18))))(*(int * PTR32 *)((int)this + 0x388),0,0);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x388) + 0x194))) = 0;
  }
  return 0;
}

/* ref: FUN_007c5390 */
unsigned int F_007c5390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c5390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x388) != (undefined *)0x0) {
    F_007c4030(*(undefined * PTR32 *)((int)this + 0x388),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_007c5410 */
uint F_007c5410(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  undefined * this_00;
  
  iVar1 = 0;
  if (-1 < *(int *)((int)this + 0x378)) {
    this_00 = (undefined *)((int)this + 0x1c8);
    do {
      if (8 < iVar1) {
        return in_EAX;
      }
      F_0056c5f0(this_00);
      F_0056c5f0(this_00);
      F_00588f80(this_00,0x3d,1,this,0);
      in_EAX = F_00588f80(this_00,0x3d,0,this,0);
      iVar1 = iVar1 + 1;
      this_00 = (undefined *)((int)this_00 + 0x30);
    } while (iVar1 <= *(int *)((int)this + 0x378));
  }
  return in_EAX;
}

/* ref: FUN_007c5470 */
uint F_007c5470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c5470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x398);
  uVar2 = param_1;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,0,0);
  }
  return uVar2;
}

/* ref: FUN_007c5490 */
uint F_007c5490(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x37c) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00861b90(this,2,*(undefined4 *)((int)this + 0x380));
    return uVar1;
  default: ;
    return uVar1;
  case 2: ;
    uVar1 = F_00861b90(this,0,*(undefined4 *)((int)this + 0x380));
    return uVar1;
  case 3: ;
    *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + 1;
    uVar1 = F_00861b90(this,0,*(undefined4 *)((int)this + 0x380));
    return uVar1;
  case 4: ;
    *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + 1;
    break;
  case 6: ;
    break;
  }
  uVar1 = F_00861b90(this,6,*(undefined4 *)((int)this + 0x380));
  return uVar1;
}

/* ref: FUN_007c5520 */
uint F_007c5520(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x378))) {
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x378) * 4 + 0x398)));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xf8))(piVar1);
    }
  }
  *(int *)((int)this + 0x378) = *(int *)((int)this + 0x378) + 1;
  if ((*(int *)((int)this + 0x378) == 5) && (*(int *)((int)this + 0x390) != 0)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x390) + 400)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
  }
  if (*(int *)((int)this + 0x378) < 8) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x378) * 4 + 0x180)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    *(uint *)((int)this + 0xa4) = uVar2;
    return uVar2;
  }
  this_00 = (undefined *)F_0055e2f0(this,10);
  uVar2 = F_0059d670(this_00,0x65);
  return uVar2;
}

/* ref: FUN_007c55c0 */
uint F_007c55c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c55c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  undefined4 unaff_ESI = 0;
  undefined4 unaff_EDI = 0;
  
  if ((*(char *)((int)this + 900) == '\x02') || (*(char *)((int)this + 900) == '\x03')) {
    iVar4 = 0;
    if ((char)param_1 == '\0') {
      piVar3 = (int *)((int)this + 0x180);
      do {
        piVar1 = (int *)*piVar3;
        if (iVar4 == *(int *)((int)this + 0x378)) {
          F_0055a3c0(piVar1[0x1a],0);
        }
        else {
          ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < 8);
      goto LAB_007c5739;
    }
    do {
      if (iVar4 != 6) {
        if (iVar4 == 5) {
          if (*(char *)((int)this + 0x3b8) == '\0') goto LAB_007c56ba;
          F_0055a3c0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x194) + 0x68))),1);
          piVar3 = *(int * PTR32 *)((int)this + 0x194);
        }
        else if (iVar4 == 7) {
          if (*(char *)((int)this + 0x3b9) == '\0') goto LAB_007c56ba;
          F_0055a3c0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x68))),1);
          piVar3 = *(int * PTR32 *)((int)this + 0x19c);
        }
        else {
          F_0055a3c0(*((undefined4 *)GEN_TOP((*(int *)((int)this + iVar4 * 4 + 0x180) + 0x68))),1);
          piVar3 = *(int * PTR32 *)((int)this + iVar4 * 4 + 0x180);
        }
        ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1);
      }
LAB_007c56ba: ;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
  }
  else {
    if ((char)param_1 == '\0') {
      iVar4 = 0;
      piVar3 = (int *)((int)this + 0x180);
      do {
        piVar1 = (int *)*piVar3;
        if (iVar4 == *(int *)((int)this + 0x378)) {
          F_0055a3c0(piVar1[0x1a],0);
        }
        else {
          ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < 8);
LAB_007c5739: ;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a0) + 0x28))))(*(int * PTR32 *)((int)this + 0x1a0),0);
      *(undefined1 *)((int)this + 0x10d) = 1;
      return uVar2;
    }
    piVar3 = (int *)((int)this + 0x180);
    iVar4 = 8;
    do {
      F_0055a3c0(*(undefined4 *)(*piVar3 + 0x68),1);
      ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x28))((int *)*piVar3,1);
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a0) + 0x28))))(*(int * PTR32 *)((int)this + 0x1a0),1);
  *(undefined1 *)((int)this + 0x10d) = 0;
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  if (uVar2 != 0) {
    return uVar2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a0) + 0x3c))))(*(int * PTR32 *)((int)this + 0x1a0),0,0);
  this_00 = (undefined *)F_0055dcb0();
  uVar2 = F_0059b300(this_00,uVar2,unaff_EDI,unaff_ESI);
  return uVar2;
}

/* ref: FUN_007c5760 */
uint F_007c5760(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * this_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x38c);
  if (pvVar3 != (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)pvVar3 + 0x180);
    uVar2 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar2 + 0xc0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x198) + 0x28))))(*(int * PTR32 *)((int)pvVar3 + 0x198),0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffed;
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a9110(pvVar3,2,&(*(undefined4 *)(gen_frame + 0x4)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x14));
    iVar4 = 1;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 8;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar3 = (undefined *)F_0055dcb0();
  F_0059b300(pvVar3,uVar5,uVar6,uVar7);
  uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar2;
}

/* ref: FUN_007c5820 */
uint F_007c5820(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d1a9c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubRaceGender::vf41 */
byte F_007c58a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c58a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_ProgressSub",0,6);
  return bVar1;
}

/* ref: FUN_007c58b0 */
uint F_007c58b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c58b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((-1 < param_1) && (-1 < param_2)) {
    return param_1 + param_2 * 10;
  }
  return 0;
}

/* ref: FUN_007c58e0 */
uint F_007c58e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c58e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d1b9c));
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubTribe::vf41 */
byte F_007c5970(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_ProgressSub",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubTribe::vf46 */
byte F_007c5980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c5980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  undefined * this_01;
  uint * puVar3;
  int iVar4;
  char * pcVar5;
  uint uVar6;
  undefined * pAVar7;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((int *)(gen_frame + 0x14))[5] = uVar2;
  if ((*(int *)(this + 0x18c) == 0) || (*(int *)(this + 0x180) == 0)) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x2c));
    return 0;
  }
  if ((*(byte *)(param_2 + 0x170) & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x174);
  }
  if ((uVar6 & 0xffffff00) == 0) {
    iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x180) + 0x398)));
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x1a4);
    }
    uVar1 = *(undefined4 *)(this + 0x19c);
    ((int *)(gen_frame + 0x14))[0] = 0x78;
    ((int *)(gen_frame + 0x14))[1] = 0x7c;
    ((int *)(gen_frame + 0x14))[2] = 0x80;
    ((int *)(gen_frame + 0x14))[3] = 0x84;
    ((int *)(gen_frame + 0x14))[4] = 0x88;
    (*(int *)(gen_frame + 0x10)) = ((int *)(gen_frame + 0x14))[(int)(iVar4)];
    *(undefined4 *)(this + 0x184) = uVar1;
    (*(int *)(gen_frame + 0xc)) = 0;
    pAVar7 = this + 0x194;
    do {
      F_0059dde0(*(undefined * PTR32 *)pAVar7,(uint)((*(int *)(gen_frame + 0xc)) == *(int *)(this + 0x19c)));
      this_00 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar7,2);
      this_01 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar7,3);
      puVar3 = (uint *)F_00ab36c0((*(int *)(gen_frame + 0x10)));
      if (puVar3 == (uint *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = ((char *)GEN_TOP(((*puVar3 & 0xffffff) + (int)puVar3)));
      }
      F_00584110(this_00,pcVar5);
      puVar3 = (uint *)F_00ab36c0((*(int *)(gen_frame + 0x10)) + 1);
      if (puVar3 == (uint *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = ((char *)GEN_TOP(((*puVar3 & 0xffffff) + (int)puVar3)));
      }
      F_00584110(this_01,pcVar5);
      uVar2 = F_00577bc0(this_00,0,0,REFG(undefined4, 0x108cc50),0);
      uVar6 = F_00561490(*(undefined * PTR32 *)pAVar7,5);
      F_0055a060(uVar6,uVar2 + 0x14 & 0xffff);
      F_00559eb0(uVar6,(uint)(ushort)(*(short *)(this + 0x188) - (short)(uVar2 + 0x14)));
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 2;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      pAVar7 = pAVar7 + 4;
    } while ((*(int *)(gen_frame + 0xc)) < 2);
    F_00c47745(((int *)(gen_frame + 0x14))[5] ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_007c5b50 */
uint F_007c5b50(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1c9c));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  F_0042b630((int)this + 0x188);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  return (uint)this;
}

/* ref: FUN_007c5ba0 */
uint F_007c5ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1c9c));
  F_0042c880((undefined *)((int)this + 0x188));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf41 */
byte F_007c5be0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_DataExport",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf5 */
uint F_007c5bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c5bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf6 */
uint F_007c5c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c5c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf25 */
uint F_007c5c30(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = 0x65;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(char * PTR32 *)(gen_frame + 0x24)) = "";
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x8)),3);
  F_005a2670(((undefined1 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_007c5ce0 */
uint F_007c5ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c5ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *(undefined4 *)((int)this + 0x184) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x65;
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc0)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
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

/* ref: FUN_007c5d90 */
uint F_007c5d90(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1d9c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf41 */
byte F_007c5df0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_DataImport",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf5 */
uint F_007c5e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c5e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 4;
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf6 */
uint F_007c5e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c5e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: FUN_007c5e40 */
uint F_007c5e40(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5e40u, gen_a0, 0u, 0u, 0u);
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
  (*(undefined4 *)(gen_frame + 0x10)) = 0x66;
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc0)));
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

/* ref: FUN_007c5eb0 */
uint F_007c5eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0x66;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c5f20 */
uint F_007c5f20(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 4;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined1 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1e9c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf41 */
byte F_007c5fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_DataInputString",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf25 */
uint F_007c5fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c5fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf38 */
uint F_007c5ff0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c5ff0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (((*(byte *)((int)param_1 + 0xf9) & 1) == 0) ||
     ((uVar2 = (uint)param_1[0x3d] >> 0x14 & 0xf, uVar2 != 3 && (uVar2 != 2)))) goto LAB_007c60a8;
  if ((char)param_1[100] == '\0') {
    if (*(char *)(param_1[0x62] + 0x84) != '\0') {
      uVar2 = F_0055dcb0();
      if (*(char *)(uVar2 + 0x21d) == '\0') {
        *(undefined1 *)(param_1 + 100) = 1;
        F_0056b630(param_1,0x11a,7,0,9,0,0);
      }
    }
  }
  else {
    if (*(char *)(param_1[0x62] + 0x84) != '\0') {
      uVar2 = F_0055dcb0();
      if (*(char *)(uVar2 + 0x21d) == '\0') goto LAB_007c6091;
    }
    *(undefined1 *)(param_1 + 100) = 0;
    F_0056b780(param_1,0);
  }
LAB_007c6091: ;
  bVar1 = F_0055dce0(param_1);
  if (bVar1 == 0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x8c))(param_1);
  }
LAB_007c60a8: ;
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: FUN_007c60c0 */
uint F_007c60c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c60c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf5 */
uint F_007c60d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c60d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  *(undefined1 *)(uVar1 + 0x1fa) = 1;
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf6 */
uint F_007c6100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c6100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  *(undefined1 *)(uVar1 + 0x1fa) = 0;
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf2 */
unsigned int F_007c6130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c6130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  uint uVar1;
  
  if ((short)param_1 == 0x17) {
    uVar1 = F_0042a990(*(int *)(this + 0x188) + 0x9c);
    this_00 = *(undefined * PTR32 *)(this + 0x18c);
    if (this_00 != (undefined *)0x0) {
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x180) + 100)))) {
        F_007c5ce0(this_00,uVar1);
        ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
        return 0;
      }
      *(undefined4 *)((int)this_00 + 0x184) = 0;
      ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
    }
  }
  return 0;
}

/* ref: FUN_007c61a0 */
uint F_007c61a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c61a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1f9c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf41 */
byte F_007c6210(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_DataImportDialog",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf5 */
uint F_007c6220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c6220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 4;
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf25 */
uint F_007c6240(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf2 */
unsigned int F_007c6280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c6280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((((byte)this[0xf9] & 1) != 0) && ((short)param_1 == 0x17)) &&
     (*(undefined * PTR32 *)(this + 400) != (undefined *)0x0)) {
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x180) + 100)))) {
      F_007c5e40(*(undefined * PTR32 *)(this + 400));
      ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
      return 0;
    }
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x184) + 100)))) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
    }
  }
  return 0;
}

/* ref: FUN_007c62f0 */
unsigned int F_007c62f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c62f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf3 */
unsigned int F_007c6320(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,0);
    uVar2 = F_0055dcb0();
    uVar1 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),uVar1);
    if (uVar1 != 0) {
      *(uint *)(this + 8) = uVar1;
      *(undefined * PTR32 *)(uVar1 + 0x180) = this;
      *((undefined1 *)GEN_TOP((*(int *)(this + 8) + 0x188))) = 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf5 */
unsigned int F_007c6360(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  this[0x28] = (undefined1)0x0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007c6380 */
uint F_007c6380(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x180)));
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else if (*(int *)(iVar1 + 0x398) == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x398) + 0x1a4)));
  }
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else if (*(int *)(iVar1 + 0x39c) == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x39c) + 0x19c)));
  }
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x398) != 0) {
      return *((int *)GEN_TOP((*(int *)(iVar1 + 0x398) + 0x1a8))) + (iVar2 + iVar3 * 2) * 2;
    }
    return (iVar2 + iVar3 * 2) * 2 - 1;
  }
  return (iVar2 + iVar3 * 2) * 2;
}

/* ref: FUN_007c6400 */
uint F_007c6400(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 4) + 0x180)));
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else if (*(int *)(iVar1 + 0x398) == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x398) + 0x1a4)));
  }
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x39c) != 0) {
      return *((int *)GEN_TOP((*(int *)(iVar1 + 0x39c) + 0x19c))) + 1 + iVar2 * 2;
    }
    return iVar2 * 2;
  }
  return iVar2 * 2 + 1;
}

/* ref: FUN_007c6480 */
uint F_007c6480(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf3 */
byte F_007c64e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c64e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  
  this[0xf9] = (undefined1)
               ((byte)this[0xf9] ^ ((param_2 != 0) << 6 ^ (byte)this[0xf9]) & 0x40);
  bVar1 = F_0058ca00((undefined *)this,param_1,param_2);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf44 */
uint F_007c6540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c6540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  undefined2 extraout_var = 0;
  uint uVar2;
  
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  uVar1 = F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  uVar2 = CONCAT22(extraout_var,uVar1);
  if (this[0x188] != (undefined1)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf45 */
uint F_007c65a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c65a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x180);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x28) != '\0')) {
    uVar1 = F_0059b340(this,*(undefined4 *)(this + 0xa4),1,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf25 */
uint F_007c65d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c65d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180));
  }
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf5 */
uint F_007c6620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c6620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: FUN_007c6640 */
uint F_007c6640(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[65])REFP(0x10d2234));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf37 */
uint F_007c66c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c66c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  
  uVar3 = 0;
  uVar2 = 4;
  pAVar4 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_00586850(this_00,uVar2,uVar3,pAVar4);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf25 */
uint F_007c66e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c66e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar1 = **(int * PTR32 *)(this + 0x180);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0))))
    ;
    ((code *)*(gen_code32 *)(iVar1 + 0x40))(*(undefined4 *)(this + 0x180),uVar2);
  }
  if (*(int *)(this + 0x180) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180));
  }
  uVar2 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
  uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_007c6760 */
unsigned int F_007c6760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c6760u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]));
  F_0055a170(this_00,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) >> 8 & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) >> 0x10 & 0xff);
  F_0055a200(this_00,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) >> 0x18);
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf63 */
uint F_007c67c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7c67c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))
                    (*(int * PTR32 *)(this + 0x180),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf64 */
uint F_007c67d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c67d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorL::vf41 */
byte F_007c67e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c67e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Color_L",0,6);
  return bVar1;
}

/* ref: FUN_007c67f0 */
uint F_007c67f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c67f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[65])REFP(0x10d233c));
  *(undefined1 *)((int)this + 0x1a8) = 1;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf41 */
byte F_007c6860(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Color_FacePaint",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf63 */
uint F_007c6870(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
  if ((uVar1 & 0x80) != 0) {
    uVar1 = (uint)(byte)((char)uVar1 + 0x80);
  }
  return uVar1 & 0xff;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf64 */
uint F_007c6890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c6890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar1 = param_2;
  if (*(char *)(in_ecx + 0x1a8) == '\0') {
    uVar1 = param_2 + 0x80;
  }
  return uVar1;
}

/* ref: FUN_007c68b0 */
uint F_007c68b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c68b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[65])REFP(0x10d2444));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf41 */
byte F_007c6920(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Color_Lip",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf63 */
uint F_007c6930(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
  if ((uVar1 & 0x80) != 0) {
    uVar1 = (uint)(byte)((char)uVar1 + 0x80);
  }
  return uVar1 & 0xff;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf64 */
uint F_007c6950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c6950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar1 = param_2;
  if (*(int *)(in_ecx + 0x1ac) != 0) {
    if (*(int *)(in_ecx + 0x1ac) != 1) {
      return param_2;
    }
    uVar1 = param_2 + 0x80;
  }
  return uVar1 | 0x100;
}

/* ref: FUN_007c6980 */
uint F_007c6980(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x1ac) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10d254c));
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorDouble::vf37 */
uint F_007c6a10(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  
  uVar3 = 0;
  uVar2 = 4;
  pAVar4 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_00586850(this_00,uVar2,uVar3,pAVar4);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorDouble::vf38 */
uint F_007c6a30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7c6a30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorDouble::vf25 */
uint F_007c6a50(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))
                      (this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0))),
                       *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0xc0))));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x40))))(*(int * PTR32 *)(this + 0x180),uVar1);
  }
  if (*(int *)(this + 0x180) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180));
  }
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007c6ad0 */
unsigned int F_007c6ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c6ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]));
  F_0055a170(this_00,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) >> 8 & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) >> 0x10 & 0xff);
  F_0055a200(this_00,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) >> 0x18);
  return 0;
}

/* ref: FUN_007c6b30 */
unsigned int F_007c6b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c6b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]));
  F_0055a170(this_00,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) >> 8 & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) >> 0x10 & 0xff);
  F_0055a200(this_00,(uint)(*(undefined4 * PTR32 *)&gen_args[2]) >> 0x18);
  return 0;
}

/* ref: FUN_007c6bb0 */
uint F_007c6bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007c6980(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10d2664));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf41 */
byte F_007c6bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Color_Hair",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf64 */
uint F_007c6be0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))
                    (this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0))),
                     *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0xc0))));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf66 */
uint F_007c6c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c6c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((int)param_1 < 0) {
    uVar2 = 0;
  }
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = 0;
  }
  return ((uint)(*((char *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) != '\0') << 8 | uVar1 & 0xff) << 0x10 |
         uVar2 & 0xff;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf67 */
uint F_007c6c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c6c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
  if (param_1 == 1) {
    uVar1 = uVar1 >> 0x10;
  }
  return uVar1;
}

/* ref: FUN_007c6c80 */
uint F_007c6c80(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007c6980(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10d277c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf41 */
byte F_007c6ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Color_Eye",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf63 */
uint F_007c6cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c6cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this,param_1,param_2);
  return param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf64 */
uint F_007c6cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))
                    (this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0))),
                     *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0xc0))));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf66 */
uint F_007c6d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c6d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = 0;
  }
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = 0;
  }
  if (*((char *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) != '\0') {
    uVar1 = (uVar1 & 0xff | 0x100) << 0x10 | uVar2 & 0xff;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf67 */
uint F_007c6d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c6d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*((char *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) != '\0') && (param_1 == 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
    return uVar1 >> 0x10;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
  return uVar1;
}

/* ref: FUN_007c6d90 */
uint F_007c6d90(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2894));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf41 */
byte F_007c6e10(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Slider",0,6);
  return bVar1;
}

/* ref: FUN_007c6e30 */
uint F_007c6e30(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2994));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton::vf25 */
uint F_007c6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x180) == 0) goto LAB_007c6eec;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x40))))(*(int * PTR32 *)(this + 0x180),uVar1);
  }
  if (*(int *)(this + 0x180) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180));
  }
LAB_007c6eec: ;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007c6f10 */
uint F_007c6f10(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2a94));
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton2::vf41 */
byte F_007c6f60(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Option2",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton2::vf62 */
uint F_007c6f70(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((in_ecx + 400 + *(int *)(in_ecx + 0x184) * 4)));
}

/* ref: FUN_007c6f80 */
uint F_007c6f80(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2b94));
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton3::vf41 */
byte F_007c6fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Option3",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton3::vf62 */
uint F_007c6fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((in_ecx + 400 + *(int *)(in_ecx + 0x184) * 4)));
}

/* ref: FUN_007c6ff0 */
uint F_007c6ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c6ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2c94));
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton4::vf41 */
byte F_007c7050(unsigned int gen_a0)
{
  GEN_ENTER(0x7c7050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Option4",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton4::vf62 */
uint F_007c7060(unsigned int gen_a0)
{
  GEN_ENTER(0x7c7060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((in_ecx + 400 + *(int *)(in_ecx + 0x184) * 4)));
}

/* ref: FUN_007c7070 */
uint F_007c7070(unsigned int gen_a0)
{
  GEN_ENTER(0x7c7070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2d94));
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton5::vf41 */
byte F_007c70d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c70d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CharaMake_Feature_Option5",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton5::vf62 */
uint F_007c70e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c70e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((in_ecx + 400 + *(int *)(in_ecx + 0x184) * 4)));
}

