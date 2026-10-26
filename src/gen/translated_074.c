#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_007c8a40 */
uint F_007c8a40(unsigned int gen_a0)
{
  GEN_ENTER(0x7c8a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f4c));
  piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(undefined4 *)((int)this + 0x14));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,this);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar2 = F_00cb4870(this);
  return uVar2;
}

/* ref: FUN_007c8a90 */
byte F_007c8a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c8a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x18) <= *(uint *)((int)this + 0x1c)) {
    return 0;
  }
  piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(undefined4 *)((int)this + 0x14));
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 0x1c) == 0) {
      uVar2 = 0;
      if (*(int *)((int)this + 0x18) != 0) {
        do {
          F_00cb45d0(this,0);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)((int)this + 0x18));
      }
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,this);
    }
    F_00cb4540(this,*(undefined4 *)((int)this + 0x1c),param_1);
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
    ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,this);
    return 1;
  }
  return 0;
}

/* ref: FUN_007c8b20 */
uint F_007c8b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c8b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined4 * in_ecx;
  
  if (*(char *)((int)this + 0x230e9) == '\0') {
    uVar1 = 0xcd;
  }
  else {
    uVar1 = (*(int *)((int)this + 0x230d4) - *(int *)((int)this + 0x230d0)) / 0x54;
  }
  if (((param_1 < uVar1) &&
      (param_1 < (uint)(*(int *)((int)this + 0x230c4) - *(int *)((int)this + 0x230c0) >> 5))) &&
     (in_ecx = ((undefined4 *)GEN_TOP((param_1 * 0x54 + *(int *)((int)this + 0x230d0)))),
     *(char *)*in_ecx != '\0')) {
    uVar1 = F_0042a990(in_ecx);
    uVar1 = F_0057f860((undefined *)((int)this + 0x23330),uVar1);
    if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0xfb) & 8) != 0)) {
      return (uint)*(byte *)(uVar1 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_007c8bb0 */
byte F_007c8bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c8bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * PTR32 * this_00;
  uint * this_01;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  if (param_3 == 1) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 7;
  }
  else if (param_3 == 2) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0xe;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 2;
  }
  if ((char)param_2 == '\0') {
    iVar6 = 0;
  }
  else {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))(*(int * PTR32 *)((int)this + 0xc))));
    iVar6 = *piVar1 + 2;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(int *)(gen_frame + 0x24)) = iVar6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(int *)(gen_frame + 0x2c)) = param_1;
  if (param_4 < 0) {
    iVar6 = -1;
    iVar5 = 0;
    if (REFG(int, 0x13272f8) != 0) {
      iVar4 = 0;
      iVar2 = REFG(int, 0x13272f8);
      do {
        if ((iVar2 <= param_1) && (param_1 <= *(int *)((int)&REFG(undefined4, 0x13272fc) + iVar4))) {
          iVar6 = 0xf4245;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
          goto LAB_007c8cf6;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar5 * 8;
        iVar2 = (&REFG(int, 0x13272f8))[iVar5 * 2];
      } while (iVar2 != 0);
    }
    iVar4 = 0;
    iVar5 = REFG(int, 0x1327240);
    if (REFG(int, 0x1327240) == 0) {
LAB_007c8cda: ;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
    }
    else {
      do {
        if (iVar5 == param_1) {
          iVar6 = *(int *)(iVar4 * 8 + 0x1327244) + 1000000;
          goto LAB_007c8cda;
        }
        iVar5 = (&REFG(undefined4, 0x1327248))[iVar4 * 2];
        iVar4 = iVar4 + 1;
      } while (iVar5 != 0);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
    }
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
    iVar6 = param_4 + 1000000;
  }
LAB_007c8cf6: ;
  (*(int *)(gen_frame + 0x5c)) = iVar6;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
  (*(undefined4 *)(gen_frame + 0x8)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0xc)),10);
  iVar6 = 0;
  puVar7 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0xc)),iVar6,puVar7);
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 2;
  } while (iVar6 < 10);
  uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x58))
                    ((*(int * PTR32 *)(gen_frame + 0x14)),REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x14));
  iVar6 = 1;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  this_01 = &(*(uint *)(gen_frame + 0x68));
  iVar6 = 9;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (byte)uVar3;
}

/* ref: FUN_007c8da0 */
byte F_007c8da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c8da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint * puVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = F_00ab21a0(param_1);
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  puVar3 = ((undefined4 *)(gen_frame + 0x18));
  iVar6 = 0xb;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 2;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_005a2710(((undefined4 *)(gen_frame + 0x18)),3);
  ((undefined4 *)(gen_frame + 0x18))[1] = 0xb;
  uVar4 = F_0043bd00(this_00,(*(char *)(uVar2 + 0x45) != '\0') + 0x463,0,0);
  F_005a2710(((undefined1 *)(gen_frame + 0x30)),6);
  (*(uint *)(gen_frame + 0x34)) = uVar4;
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))(*(int * PTR32 *)((int)this + 0xc))));
  if (*piVar5 == 0) {
    uVar4 = *(uint *)(uVar2 + 0xc);
    F_005a2710(((undefined1 *)(gen_frame + 0x40)),6);
    (*(uint *)(gen_frame + 0x44)) = (uVar4 & 0xffffff) + (int)(uVar2 + 0xc);
    uVar2 = F_00460bd0(this_00,0x3d5,param_1);
    F_005a2710(((undefined1 *)(gen_frame + 0x50)),6);
    (*(uint *)(gen_frame + 0x54)) = uVar2;
    iVar6 = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    ((undefined4 *)(gen_frame + 0x10))[0] = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(undefined4 *)(gen_frame + 0xc)) = 5;
    F_00594ec0(((undefined4 *)(gen_frame + 0x10)),0xc);
    puVar3 = ((undefined4 *)(gen_frame + 0x18));
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x10)),iVar6,puVar3);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar6 < 0xc);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                      (this,REFG(undefined * PTR32, 0x1328070),0xc,((undefined4 *)(gen_frame + 0x18)),0,0,0);
    bVar1 = (byte)uVar2;
    puVar3 = ((undefined4 *)(gen_frame + 0x18));
    iVar6 = 1;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar7 = &(*(uint *)(gen_frame + 0x78));
    iVar6 = 0xb;
    do {
      puVar7 = puVar7 + -2;
      F_005a2670(puVar7);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  else {
    uVar2 = F_00460bd0(this_00,0x3d5,param_1);
    F_005a2710(((undefined1 *)(gen_frame + 0x40)),6);
    (*(uint *)(gen_frame + 0x44)) = uVar2;
    iVar6 = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    ((undefined4 *)(gen_frame + 0x10))[0] = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(undefined4 *)(gen_frame + 0xc)) = 5;
    F_00594ec0(((undefined4 *)(gen_frame + 0x10)),10);
    puVar3 = ((undefined4 *)(gen_frame + 0x18));
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x10)),iVar6,puVar3);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar6 < 10);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                      (this,REFG(undefined * PTR32, 0x1328070),10,((undefined4 *)(gen_frame + 0x18)),0,0,0);
    bVar1 = (byte)uVar2;
    puVar3 = ((undefined4 *)(gen_frame + 0x18));
    iVar6 = 1;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar7 = &(*(uint *)(gen_frame + 0x78));
    iVar6 = 0xb;
    do {
      puVar7 = puVar7 + -2;
      F_005a2670(puVar7);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return bVar1;
}

/* ref: FUN_007c8fe0 */
byte F_007c8fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c8fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int * PTR32 * this_00;
  uint * this_01;
  int iVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x10)) = this;
  uVar2 = F_00ab1c90(param_1);
  if (((uVar2 != 0) && (iVar4 = *(int *)(uVar2 + 0xc), 0 < iVar4)) && (0 < *(int *)(uVar2 + 0x10)))
  {
    if ((char)param_2 == '\0') {
      if ((*(int *)((int)this + 0x29248) == iVar4) &&
         (*(int *)((int)this + 0x2924c) == *(int *)(uVar2 + 0x10))) goto LAB_007c91a2;
      *(int *)((int)this + 0x29248) = iVar4;
      *(undefined4 *)((int)this + 0x2924c) = *(undefined4 *)(uVar2 + 0x10);
    }
    (*(int *)(gen_frame + 0x14)) = *param_4;
    if (*param_4 == -1) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))(*(int * PTR32 *)((int)this + 0xc))));
      (*(int *)(gen_frame + 0x14)) = *piVar3;
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(int *)(gen_frame + 0x1c)) = (uint)((char)param_3 != '\0') * 4 + 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    iVar4 = 0;
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x14)) + 2;
    if ((*(int *)(gen_frame + 0x14)) == 0) {
      iVar4 = *(int *)(uVar2 + 0x10) + 20000;
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(int *)(gen_frame + 0x2c)) = iVar4;
    uVar1 = *(undefined4 *)(uVar2 + 0xc);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
    (*(undefined4 *)(gen_frame + 0x3c)) = uVar1;
    uVar1 = *(undefined4 *)(uVar2 + 0x10);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),3);
    (*(undefined4 *)(gen_frame + 0x4c)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
    (*(undefined4 *)(gen_frame + 0x5c)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
    (*(undefined4 *)(gen_frame + 0x4)) = 10;
    F_00594ec0(((undefined4 *)(gen_frame + 0x8)),10);
    iVar4 = 0;
    puVar5 = &(*(undefined4 *)(gen_frame + 0x18));
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x8)),iVar4,puVar5);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar4 < 10);
    uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x58))
                      ((*(int * PTR32 *)(gen_frame + 0x10)),REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
    this_00 = &(*(int * PTR32 *)(gen_frame + 0x10));
    iVar4 = 1;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    this_01 = &(*(uint *)(gen_frame + 0x68));
    iVar4 = 9;
    do {
      this_01 = this_01 + -2;
      F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (byte)uVar2;
  }
LAB_007c91a2: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_007c91c0 */
byte F_007c91c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c91c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int * PTR32 * this_01;
  uint * this_02;
  undefined4 uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(uint *)(gen_frame + 0x20)) = param_2;
  uVar1 = F_00ab3fa0(param_2);
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  if ((uVar1 == 0) || (3 < param_1)) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))(*(int * PTR32 *)((int)this + 0xc))));
  iVar5 = *piVar2;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x10;
  if (param_1 == 1) {
    uVar1 = *(uint *)((*(uint *)(gen_frame + 0x24)) + 8);
  }
  else if (param_1 == 2) {
    uVar1 = *(uint *)((*(uint *)(gen_frame + 0x24)) + 0xc);
  }
  else {
    if (param_1 != 3) goto LAB_007c926f;
    uVar1 = *(uint *)((*(uint *)(gen_frame + 0x24)) + 0x10);
  }
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
  (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x24));
LAB_007c926f: ;
  iVar3 = REFG(undefined1, 0x14ab0d1) + 1;
  uVar6 = 0x33b;
  iVar7 = param_1;
  uVar1 = (*(uint *)(gen_frame + 0x20));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(int * PTR32 *)(gen_frame + 0x1c))[0x8c61] + 0x18))((int *)(*(int * PTR32 *)(gen_frame + 0x1c))[0x8c61])));
  uVar1 = F_00461d60(this_00,uVar6,iVar7,uVar1,iVar3);
  (*(uint *)(gen_frame + 0x20)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
  (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x20));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(int *)(gen_frame + 0x34)) = iVar5 + 2;
  (*(uint *)(gen_frame + 0x20)) = *(undefined4 *)(&REFG(undefined, 0x132c54c) + param_1 * 8);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),3);
  uVar6 = *(undefined4 *)(&REFG(undefined, 0x132c550) + param_1 * 8);
  (*(undefined4 *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x20));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
  (*(undefined4 *)(gen_frame + 0x5c)) = uVar6;
  if (((iVar5 == 0) || (iVar5 == 4)) || (iVar5 == 5)) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)),3);
    (*(undefined4 *)(gen_frame + 0x64)) = 0x1d4ec;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)),3);
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
  }
  F_0043f8b0(param_3 + 1000000);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  ((undefined4 *)(gen_frame + 0x14))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
  (*(undefined4 *)(gen_frame + 0x10)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0x14)),10);
  iVar5 = 0;
  puVar4 = &(*(undefined4 *)(gen_frame + 0x28));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0x14)),iVar5,puVar4);
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 2;
  } while (iVar5 < 10);
  uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x58))
                    ((*(int * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x28)),0,0,0);
  this_01 = &(*(int * PTR32 *)(gen_frame + 0x1c));
  iVar5 = 1;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  this_02 = &(*(uint *)(gen_frame + 0x78));
  iVar5 = 9;
  do {
    this_02 = this_02 + -2;
    F_005a2670(this_02);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (byte)uVar1;
}

/* ref: FUN_007c93e0 */
unsigned int F_007c93e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c93e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2322c) + 0xc))))(*(int * PTR32 *)((int)this + 0x2322c));
  return 0;
}

/* ref: FUN_007c93f0 */
unsigned int F_007c93f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c93f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2328c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  return 0;
}

/* ref: FUN_007c9410 */
unsigned int F_007c9410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c9410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  char cVar2;
  
  cVar2 = (char)param_1;
  if (*(char *)((int)this + 0x2db66) != cVar2) {
    if (*(undefined * PTR32 *)((int)this + 0x231a8) != (undefined *)0x0) {
      F_0076b4f0(*(undefined * PTR32 *)((int)this + 0x231a8),param_1);
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x4c)));
    if (cVar2 != '\0') {
      (*pcVar1)((int)this + 0x23330,0x16,0,1);
      *(char *)((int)this + 0x2db66) = cVar2;
      return 0;
    }
    (*pcVar1)((int)this + 0x23330,0x16,1,1);
    *(undefined1 *)((int)this + 0x2db66) = 0;
  }
  return 0;
}

/* ref: FUN_007c9470 */
byte F_007c9470(unsigned int gen_a0)
{
  GEN_ENTER(0x7c9470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x231ac);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      return 1;
    }
    if (*(int *)(iVar1 + 8) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 4) + 0x1c))))(*(int * PTR32 *)(iVar1 + 4))));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2,*(undefined4 *)(iVar1 + 8));
      return uVar3 == 4;
    }
  }
  return 0;
}

/* ref: FUN_007c94c0 */
unsigned int F_007c94c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7c94c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x23298);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    return 0;
  }
  return 0;
}

/* ref: FUN_007c9500 */
byte F_007c9500(unsigned int gen_a0)
{
  GEN_ENTER(0x7c9500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x231a4);
  if ((*(int *)((int)this + 0x23530) == 1) && (iVar1 != 0)) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 4) + 0x1c))))(*(int * PTR32 *)(iVar1 + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2,*(undefined4 *)(iVar1 + 0xd0));
    if (uVar3 == 4) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007c9540 */
unsigned int F_007c9540(unsigned int gen_a0)
{
  GEN_ENTER(0x7c9540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x231a4);
  if ((*(int *)((int)this + 0x23530) == 1) && (iVar1 != 0)) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 4) + 0x1c))))(*(int * PTR32 *)(iVar1 + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2,*(undefined4 *)(iVar1 + 0xd0));
    if ((uVar3 == 4) && (*(int *)((int)this + 0x23530) == 1)) {
      piVar2 = (int *)F_0057f860((undefined *)((int)this + 0x23330),REFG(undefined * PTR32, 0x1328130));
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x104))(piVar2);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_007c95f0 */
unsigned int F_007c95f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7c95f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x23290);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    piVar1[3] = param_1;
    *(undefined2 *)(piVar1 + 4) = (undefined2)param_2;
    *(undefined1 *)((int)piVar1 + 0x12) = (undefined1)param_3;
    *(undefined1 *)((int)piVar1 + 0x13) = (undefined1)param_4;
    *(undefined1 *)(piVar1 + 5) = (undefined1)param_5;
    *(undefined1 *)((int)piVar1 + 0x15) = (undefined1)param_6;
    *(undefined1 *)((int)piVar1 + 0x16) = (undefined1)param_7;
    *(undefined1 *)((int)piVar1 + 0x17) = (undefined1)param_8;
    *(undefined1 *)(piVar1 + 6) = (undefined1)param_9;
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return 0;
}

/* ref: FUN_007c9650 */
unsigned int F_007c9650(unsigned int gen_a0)
{
  GEN_ENTER(0x7c9650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x23290);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    return 0;
  }
  return 0;
}

/* ref: FUN_007c9670 */
byte F_007c9670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c9670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  bool bVar1;
  bool bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this;
  
  pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_1);
  if ((pvVar3 == (undefined *)0x0) ||
     (pvVar3 = (undefined *)F_00a37da0(pvVar3,param_2), pvVar3 == (undefined *)0x0)) {
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
  if (uVar4 == 0) {
    return 0;
  }
  uVar4 = F_007605d0((uint)*(byte *)(uVar4 + 0xa6));
  *param_4 = uVar4;
  if ((int)uVar4 < 0) {
    return 0;
  }
  if (*param_3 == 9999) {
    *param_3 = REFG(int, 0x14a4258);
  }
  if (*param_4 != 0xb) {
    return 1;
  }
  pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),*param_3);
  if (pvVar3 == (undefined *)0x0) {
    return 1;
  }
  bVar1 = false;
  this = (undefined *)F_00a37da0(pvVar3,0xb);
  if ((this != (undefined *)0x0) && (uVar4 = F_0046e5e0(this), uVar4 != 0)) {
    bVar1 = true;
  }
  pvVar3 = (undefined *)F_00a37da0(pvVar3,0xc);
  if (pvVar3 != (undefined *)0x0) {
    uVar4 = F_0046e5e0(pvVar3);
    bVar2 = true;
    if (uVar4 != 0) goto LAB_007c9759;
  }
  bVar2 = false;
LAB_007c9759: ;
  if ((bVar1) && (!bVar2)) {
    *param_4 = 0xc;
  }
  return 1;
}

/* ref: FUN_007c9780 */
uint F_007c9780(unsigned int gen_a0)
{
  GEN_ENTER(0x7c9780u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar2 == 1) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar2 = F_00a5f290(param_1);
      if (((uVar2 != 0) && ((*(byte *)(uVar2 + 0x2dd2) & 0x10) != 0)) && (piVar3 != (int *)0x0)) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
        iVar1 = *(int *)(uVar4 + 0x18);
        param_1 = (int *)0x0;
        if (iVar1 != 0) {
          uVar4 = (uint)REFG(undefined1, 0x1338ad4);
          iVar5 = 0;
          if (uVar4 != 0) {
            while ((piVar3 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),(int)*(char *)(iVar1 + 0x415 + iVar5)
                                                ), piVar3 == (int *)0x0 ||
                   (*piVar3 != *(int *)(uVar2 + 0x74)))) {
              iVar5 = iVar5 + 1;
              if ((int)uVar4 <= iVar5) {
                return 0;
              }
            }
            param_1 = (int *)(iVar5 + 1);
          }
        }
        return (uint)param_1;
      }
    }
    else if (uVar2 == 2) {
      uVar2 = F_00a67fa0(param_1[0x1d]);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_007c9860 */
uint F_007c9860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c9860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x25d8) + 0x10)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  if (param_2 == 1) {
    if (uVar2 == 5) {
      uVar2 = F_0042d000(param_1,&REFG(undefined, 0x10bf75c),param_3);
      return uVar2;
    }
    uVar2 = F_0042d000(param_1,"%c%c%c",0xee,0x82,param_3 + 0x90);
  }
  else if (param_2 == 2) {
    if (uVar2 == 5) {
      uVar2 = F_0042d000(param_1,&REFG(undefined, 0x10bf768),param_3 + 0x41);
      return uVar2;
    }
    if (param_3 < 0xf) {
      uVar2 = F_0042d000(param_1,"%c%c%c",0xee,0x81,param_3 + 0xb1);
      return uVar2;
    }
    uVar2 = F_0042d000(param_1,"%c%c%c",0xee,0x82,param_3 + 0x71);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_007c9940 */
byte F_007c9940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c9940u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  longlong lVar1;
  byte bVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = 0xffc5e1ee;
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar3 != (int *)0x0) {
    uVar7 = 0xb;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3)));
    bVar2 = F_00435480(this,uVar7);
    if ((bVar2 == 0) && (((*(uint *)&gen_args[0]) & 0x800) != 0)) {
      if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
        *(*(undefined4 * PTR32 *)&gen_args[3]) = 0xff999999;
      }
      return 0xb;
    }
  }
  if ((*(uint *)&gen_args[2]) != 0) {
    uVar4 = (*(uint *)&gen_args[2]) >> 4 & 0xf;
    if ((uVar4 == 2) || (uVar4 == 3)) {
      if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
        *(*(undefined4 * PTR32 *)&gen_args[3]) = 0xff0099ff;
      }
      return 6;
    }
    uVar4 = (*(uint *)&gen_args[2]) >> 8 & 7;
    if (uVar4 == 4) {
      if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
        *(*(undefined4 * PTR32 *)&gen_args[3]) = 0xff0099ff;
      }
      return 7;
    }
    if (((*(uint *)&gen_args[2]) & 0xf0000000) == 0x20000000) {
      return 0x1e;
    }
    if (((uVar4 != 0) && (((*(uint *)&gen_args[2]) & 0x800) == 0)) && ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0)) {
      *(*(undefined4 * PTR32 *)&gen_args[3]) = 0xff0099ff;
    }
  }
  iVar6 = 0;
  iVar5 = 9;
  do {
    lVar1 = ((ulonglong)(((ulonglong)(byte)iVar5 < 0x40) ? ((1L << (ulonglong)(byte)iVar5)) : 0));
    if (((uint)lVar1 & (*(uint *)&gen_args[0])) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & (*(uint *)&gen_args[1])) != 0) {
      return (&REFG(undefined1, 0x10bf780))[iVar6 * 4];
    }
    iVar5 = (&REFG(undefined4, 0x10bf784))[iVar6];
    iVar6 = iVar6 + 1;
  } while (iVar5 != -1);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = 0xff999999;
  }
  return 10;
}

/* ref: FUN_007c9a80 */
uint F_007c9a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7c9a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  byte bVar1;
  uint * puVar2;
  
  bVar1 = F_007c9940(param_1,param_2,param_3,param_4);
  puVar2 = (uint *)F_00ab3bd0((uint)bVar1);
  if (puVar2 != (uint *)0x0) {
    if (param_5 != (int *)0x0) {
      *param_5 = (*puVar2 & 0xffffff) + (int)puVar2;
    }
    return puVar2[1];
  }
  return 0xffffffff;
}

/* ref: FUN_007c9ad0 */
uint F_007c9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c9ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = REFG(int, 0x1379694);
  F_0042e430(param_1,&REFG(undefined, 0x10bda7e));
  F_0042e430(param_2,&REFG(undefined, 0x10bda7f));
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    return 0;
  }
  uVar6 = (uint)*(byte *)(iVar1 + 0x1688);
  *param_4 = (uint)*(byte *)(iVar1 + 0x1689);
  if (uVar6 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = uVar6 + 62000;
  }
  *param_3 = iVar1;
  uVar2 = F_00ab21a0(uVar6);
  if (uVar2 != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3)));
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4)));
    if (*piVar4 == 0) {
      F_0042e430(param_1,(*(uint *)(uVar2 + 0xc) & 0xffffff) + uVar2 + 0xc);
      uVar7 = 0x7e7;
      uVar2 = uVar6;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
      uVar2 = F_00461bb0(pvVar5,uVar7,uVar2);
      F_0042e430(param_2,uVar2);
      return uVar6;
    }
    uVar7 = 0x7e7;
    uVar2 = uVar6;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    uVar2 = F_00461bb0(pvVar5,uVar7,uVar2);
    F_0042e430(param_1,uVar2);
    F_0042e430(param_2,&REFG(undefined, 0x10bda95));
  }
  return uVar6;
}

/* ref: FUN_007c9be0 */
byte F_007c9be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c9be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined * this;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined *)0x0) {
    if (*(char *)((int)param_2 + 6) == '\0') {
      uVar2 = *(uint *)((int)param_2 + 8);
      if ((*(byte *)((int)param_2 + 0x14) & 1) != 0) {
        uVar2 = uVar2 + 1000000;
      }
    }
    else {
      this = (undefined *)F_00a3a860(param_2);
      uVar2 = F_0046e5e0(this);
    }
    uVar2 = F_00ab24a0(uVar2);
    if (uVar2 != 0) {
      if (*(char *)(uVar2 + 0xa0) == '\x0f') {
        bVar1 = *(byte *)(uVar2 + 0x2c);
      }
      else {
        if (*(char *)(uVar2 + 0xba) != '\x01') {
          return 0;
        }
        bVar1 = F_0046e590(param_2);
      }
      puVar3 = (undefined4 *)F_00ab3c60((uint)bVar1);
      if (puVar3 == (undefined4 *)0x0) {
        *param_1 = 0;
        return 1;
      }
      *param_1 = *puVar3;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007c9c70 */
byte F_007c9c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c9c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != (int *)0x0) {
    uVar2 = F_00760a10(param_2);
    if (uVar2 == 1) {
      bVar1 = *(byte *)((int)this + 0x235b8);
    }
    else {
      if (uVar2 == 2) {
        uVar3 = (uint)*(byte *)((int)this + 0x235b9);
        uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0xc))(param_2);
        F_0043f750(param_1,uVar2,uVar3);
        return 1;
      }
      if (uVar2 != 3) goto LAB_007c9ce6;
      bVar1 = *(byte *)((int)this + 0x235ba);
    }
    uVar3 = (uint)bVar1;
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0xc))(param_2);
    F_0043f750(param_1,uVar2,uVar3);
    return 1;
  }
LAB_007c9ce6: ;
  F_0042e430(param_1,&REFG(undefined, 0x10bdab1));
  return 0;
}

/* ref: FUN_007c9d00 */
ulonglong F_007c9d00(unsigned int gen_a0)
{
  GEN_ENTER(0x7c9d00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00760a10(param_1);
  return CONCAT44(*(undefined4 *)(&REFG(undefined, 0x148a074) + uVar1 * 8),
                  *(undefined4 *)(&REFG(undefined, 0x148a070) + uVar1 * 8));
}

/* ref: FUN_007c9d30 */
uint F_007c9d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c9d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  F_00414500(in_ecx,param_1);
  uVar1 = F_00414500(in_ecx,param_2);
  return *(uint *)(uVar1 + 0x14);
}

/* ref: FUN_007c9d70 */
unsigned int F_007c9d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7c9d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  char cVar2;
  undefined4 in_ecx;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,6);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,5);
  piVar6 = (int *)F_00424750(REFG(int, 0x137104c));
  if (**(int * PTR32 *)(uVar4 + 0x20) != 0) {
    **(int * PTR32 *)(uVar4 + 0x20) = 0;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  bVar3 = F_00446c80();
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) != (uint)(bVar3 != 0)) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) = (uint)(bVar3 != 0);
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  bVar3 = F_00446cd0();
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2d3c))) != (uint)(bVar3 != 0)) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2d3c))) = (uint)(bVar3 != 0);
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar7 = F_00414500(in_ecx,0xb9);
  local_18 = *(uint *)(uVar7 + 0x14);
  if ((*((int *)GEN_TOP((*(int *)((int)this + 0x2332c) + 0x1bd48))) != 0) &&
     (uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x6c))(piVar6), (char)uVar7 == '\0')) {
    local_18 = local_18 | 0x40000;
  }
  iVar12 = 0;
  local_14 = 0;
  uVar7 = 1;
  do {
    uVar8 = F_00414500(in_ecx,iVar12 + 0xc6);
    if (*(int *)(uVar8 + 0x14) != 0) {
      local_14 = local_14 | uVar7;
    }
    iVar12 = iVar12 + 1;
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
  } while (iVar12 < 0x12);
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) != local_14) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) = local_14;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) != local_18) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) = local_18;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar7 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xbb);
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2d4c))) != *(int *)(uVar7 + 0x14)) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2d4c))) = *(int *)(uVar7 + 0x14);
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar7 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xd8);
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2d50))) != *(int *)(uVar7 + 0x14)) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2d50))) = *(int *)(uVar7 + 0x14);
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar7 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xda);
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2d54))) != *(int *)(uVar7 + 0x14)) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2d54))) = *(int *)(uVar7 + 0x14);
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_1c = 0;
  local_20 = 0x1c;
  local_24 = 4;
  do {
    local_14 = local_24;
    local_24 = local_24 + 0xc0;
    local_18 = 0;
    iVar12 = local_20;
    do {
      piVar6 = (int *)F_0043aed0(*(undefined4 *)((int)this + 0x2332c),local_1c,local_18);
      if (((char)piVar6[2] != '\0') || (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -8 + iVar12))) != 0)) {
        uVar7 = F_0044bd50(piVar6);
        cVar2 = (char)piVar6[2];
        uVar8 = F_0043aa60(piVar6);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + -8 + iVar12))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + -8 + iVar12))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar8 = F_004462f0(piVar6);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + iVar12))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + iVar12))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar8 = F_00446320(piVar6);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar12))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar12))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + iVar12))) != *piVar6) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + iVar12))) = *piVar6;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if ((int)uVar7 < 1) {
          uVar7 = 0xffffffff;
        }
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8 + iVar12))) != uVar7) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8 + iVar12))) = uVar7;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar7 = F_00446690(piVar6);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc + iVar12))) != uVar7) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc + iVar12))) = uVar7;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        bVar3 = F_004465b0(piVar6);
        puVar1 = ((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10 + iVar12)));
        if (*puVar1 != (uint)(bVar3 != 0)) {
          *puVar1 = (uint)(bVar3 != 0);
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (((cVar2 == '\x02') || (cVar2 == '\x04')) || (cVar2 == '\x0e')) {
          uVar7 = F_00446790(piVar6,(uint)(*(byte *)((int)this + 0x230bf) & 1));
          if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar12))) != uVar7) {
            *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar12))) = uVar7;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          uVar7 = F_00467410(piVar6);
          bVar9 = (*(byte *)((int)this + 0x230bf) & 3) == 0;
LAB_007ca144: ;
          iVar11 = *(int *)(uVar5 + 0x20);
          if (bVar9 == false) {
LAB_007ca14f: ;
            if (uVar7 != *(uint *)(iVar11 + local_14)) {
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            *(uint *)(iVar11 + local_14) = uVar7;
          }
          else if (uVar7 != *(uint *)(iVar11 + local_14)) {
            *(uint *)(iVar11 + local_14) = uVar7;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
        }
        else {
          if ((cVar2 == '\x01') || (cVar2 == '\t')) {
            uVar7 = F_00446790(piVar6,1);
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar12))) != uVar7) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar12))) = uVar7;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = F_00467410(piVar6);
            bVar9 = (bool)(~(*(byte *)((int)this + 0x230bf) >> 1) & 1);
            goto LAB_007ca144;
          }
          uVar7 = F_00446790(piVar6,0);
          if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar12))) != uVar7) {
            *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar12))) = uVar7;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          bVar3 = *(byte *)((int)this + 0x230bf);
          uVar7 = F_00467410(piVar6);
          iVar11 = *(int *)(uVar5 + 0x20);
          if ((~(bVar3 >> 1) & 1) == 0) goto LAB_007ca14f;
          if (uVar7 != *(uint *)(iVar11 + local_14)) {
            *(uint *)(iVar11 + local_14) = uVar7;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
        }
        uVar7 = F_00446760(piVar6);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18 + iVar12))) != uVar7) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18 + iVar12))) = uVar7;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar7 = F_004673b0(piVar6);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + -4 + local_14)))) {
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + -4 + local_14))) = uVar7;
      }
      local_14 = local_14 + 0xc;
      local_18 = local_18 + 1;
      iVar12 = iVar12 + 0x24;
    } while ((int)local_18 < 0x10);
    local_1c = local_1c + 1;
    local_20 = local_20 + 0x240;
  } while (local_1c < 0x12);
  local_1c = 0;
  iVar12 = 0x289c;
  local_14 = 0xd84;
  do {
    iVar11 = iVar12 + 0x240;
    iVar13 = local_14 + 0xc0;
    local_24 = 0;
    do {
      iVar10 = *(int *)((int)this + 0x2332c) + 0x190c8;
      if (local_1c != 0) {
        iVar10 = *(int *)((int)this + 0x2332c) + 0x1a708;
      }
      piVar6 = (int *)(iVar10 + local_24);
      if (((char)piVar6[2] != '\0') || (*((int *)GEN_TOP((iVar12 + -8 + *(int *)(uVar4 + 0x20)))) != 0)) {
        uVar7 = F_0044bd50(piVar6);
        cVar2 = (char)piVar6[2];
        uVar8 = F_0043aa60(piVar6);
        if (*((uint *)GEN_TOP((iVar12 + -8 + *(int *)(uVar4 + 0x20)))) != uVar8) {
          *((uint *)GEN_TOP((iVar12 + -8 + *(int *)(uVar4 + 0x20)))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar8 = F_004462f0(piVar6);
        if (*((uint *)GEN_TOP((iVar12 + -4 + *(int *)(uVar4 + 0x20)))) != uVar8) {
          *((uint *)GEN_TOP((iVar12 + -4 + *(int *)(uVar4 + 0x20)))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar8 = F_00446320(piVar6);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar12))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar12))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((iVar12 + 4 + *(int *)(uVar4 + 0x20)))) != *piVar6) {
          *((int *)GEN_TOP((iVar12 + 4 + *(int *)(uVar4 + 0x20)))) = *piVar6;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if ((int)uVar7 < 1) {
          uVar7 = 0xffffffff;
        }
        if (*((uint *)GEN_TOP((iVar12 + 8 + *(int *)(uVar4 + 0x20)))) != uVar7) {
          *((uint *)GEN_TOP((iVar12 + 8 + *(int *)(uVar4 + 0x20)))) = uVar7;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar7 = F_00446690(piVar6);
        if (*((uint *)GEN_TOP((iVar12 + 0xc + *(int *)(uVar4 + 0x20)))) != uVar7) {
          *((uint *)GEN_TOP((iVar12 + 0xc + *(int *)(uVar4 + 0x20)))) = uVar7;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        bVar3 = F_004465b0(piVar6);
        puVar1 = ((uint *)GEN_TOP((iVar12 + 0x10 + *(int *)(uVar4 + 0x20))));
        if (*puVar1 != (uint)(bVar3 != 0)) {
          *puVar1 = (uint)(bVar3 != 0);
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (((cVar2 == '\x02') || (cVar2 == '\x04')) || (cVar2 == '\x0e')) {
          uVar7 = F_00446790(piVar6,(uint)(*(byte *)((int)this + 0x230bf) & 1));
          if (*((uint *)GEN_TOP((iVar12 + 0x14 + *(int *)(uVar4 + 0x20)))) != uVar7) {
            *((uint *)GEN_TOP((iVar12 + 0x14 + *(int *)(uVar4 + 0x20)))) = uVar7;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          uVar7 = F_00467410(piVar6);
          bVar9 = (*(byte *)((int)this + 0x230bf) & 3) == 0;
LAB_007ca405: ;
          iVar10 = *(int *)(uVar5 + 0x20);
          if (bVar9 == false) {
LAB_007ca410: ;
            if (uVar7 != *(uint *)(iVar10 + local_14)) {
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            *(uint *)(iVar10 + local_14) = uVar7;
          }
          else if (uVar7 != *(uint *)(iVar10 + local_14)) {
            *(uint *)(iVar10 + local_14) = uVar7;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
        }
        else {
          if ((cVar2 == '\x01') || (cVar2 == '\t')) {
            uVar7 = F_00446790(piVar6,1);
            if (*((uint *)GEN_TOP((iVar12 + 0x14 + *(int *)(uVar4 + 0x20)))) != uVar7) {
              *((uint *)GEN_TOP((iVar12 + 0x14 + *(int *)(uVar4 + 0x20)))) = uVar7;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = F_00467410(piVar6);
            bVar9 = (bool)(~(*(byte *)((int)this + 0x230bf) >> 1) & 1);
            goto LAB_007ca405;
          }
          uVar7 = F_00446790(piVar6,0);
          if (*((uint *)GEN_TOP((iVar12 + 0x14 + *(int *)(uVar4 + 0x20)))) != uVar7) {
            *((uint *)GEN_TOP((iVar12 + 0x14 + *(int *)(uVar4 + 0x20)))) = uVar7;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          bVar3 = *(byte *)((int)this + 0x230bf);
          uVar7 = F_00467410(piVar6);
          iVar10 = *(int *)(uVar5 + 0x20);
          if ((~(bVar3 >> 1) & 1) == 0) goto LAB_007ca410;
          if (uVar7 != *(uint *)(iVar10 + local_14)) {
            *(uint *)(iVar10 + local_14) = uVar7;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
        }
        uVar7 = F_00446760(piVar6);
        if (*((uint *)GEN_TOP((iVar12 + 0x18 + *(int *)(uVar4 + 0x20)))) != uVar7) {
          *((uint *)GEN_TOP((iVar12 + 0x18 + *(int *)(uVar4 + 0x20)))) = uVar7;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar7 = F_004673b0(piVar6);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + -4 + local_14)))) {
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + -4 + local_14))) = uVar7;
      }
      local_14 = local_14 + 0xc;
      local_24 = local_24 + 0x164;
      iVar12 = iVar12 + 0x24;
    } while (local_24 < 0x1640);
    local_1c = local_1c + 1;
    iVar12 = iVar11;
    local_14 = iVar13;
    if (1 < local_1c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_007ca4b0 */
unsigned int F_007ca4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ca4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined * this_01;
  undefined * this_02;
  uint uVar4;
  uint uVar5;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int * local_8;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x232c8);
  if (((piVar1 != (int *)0x0) &&
      (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), (char)uVar2 != '\0')) &&
     (this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7da), this_00 != (undefined *)0x0)) {
    local_c = *(uint *)((int)this_00 + 0xc);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0x29);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0x25);
    local_10 = 0;
    if (0xa0 < local_c) {
      local_c = 0xa0;
    }
    local_14 = 0;
    if (0 < (int)local_c) {
      local_8 = (int *)((int)this + 0x29aac);
      local_18 = 0x10;
      do {
        this_01 = (undefined *)F_00a37da0(this_00,local_14);
        if ((this_01 != (undefined *)0x0) &&
           ((*(char *)((int)this_01 + 6) != '\0' || (*(int *)((int)this_01 + 8) != 0)))) {
          F_00a3a8a0(this_01);
          if (*(char *)((int)this_01 + 6) == '\0') {
            uVar4 = *(uint *)((int)this_01 + 8);
            if ((*(byte *)((int)this_01 + 0x14) & 1) != 0) {
              uVar4 = uVar4 + 1000000;
            }
          }
          else {
            this_02 = (undefined *)F_00a3a860(this_01);
            uVar4 = F_0046e5e0(this_02);
          }
          uVar5 = F_00ab24a0(uVar4);
          if (uVar5 != 0) {
            if (local_8[-1] != uVar4) {
              ((code *)*(gen_code32 *)(local_8[-0x17] + 8))(local_8 + -0x17,uVar4,uVar5);
            }
            uVar4 = F_00a3a8a0(this_01);
            if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + -8 + local_18))) != *local_8) {
              *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + -8 + local_18))) = *local_8;
              *(undefined1 *)(uVar2 + 0x1d) = 1;
            }
            if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + -4 + local_18))) != uVar4) {
              *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + -4 + local_18))) = uVar4;
              *(undefined1 *)(uVar2 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + local_18))) != local_14) {
              *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + local_18))) = local_14;
              *(undefined1 *)(uVar2 + 0x1d) = 1;
            }
            uVar4 = F_0042a990(local_8 + -0x16);
            if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_10 * 4)))) {
              *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_10 * 4))) = uVar4;
              *(undefined1 *)(uVar3 + 0x1d) = 1;
            }
            local_10 = local_10 + 1;
            local_18 = local_18 + 0xc;
          }
        }
        local_8 = local_8 + 0x1a;
        local_14 = local_14 + 1;
      } while (local_14 < (int)local_c);
    }
    uVar3 = F_00a3a180(&REFG(undefined, 0x14a4230));
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) != uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (**(int * PTR32 *)(uVar2 + 0x20) != local_10) {
      **(int * PTR32 *)(uVar2 + 0x20) = local_10;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_007ca680 */
uint F_007ca680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x7ca680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  undefined * this_00;
  undefined * puVar5;
  int * piVar6;
  byte * pbVar7;
  byte * pbVar8;
  bool bVar9;
  undefined4 uVar10;
  int local_c;
  
  local_c = 0;
  pbVar8 = &REFG(undefined, 0x10bdacb);
  if (*(char *)((int)param_4 + 0x8a) != '\x02') {
    uVar2 = ((code *)*(gen_code32 *)(*param_4 + 4))(param_4);
    if (uVar2 == 3) {
      uVar2 = F_00ab2440(param_4[0x20]);
      if (uVar2 == 0) {
        return 0xffffffff;
      }
      pbVar8 = ((byte *)GEN_TOP(((*(uint *)(uVar2 + 8) & 0xffffff) + uVar2 + 8)));
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)(*param_4 + 4))(param_4);
      if (uVar2 == 9) {
        uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),param_4[0xbb6]);
        bVar1 = F_007608a0(uVar2);
        iVar4 = (int)this + 0x22d40;
        if (bVar1 == 0) {
          F_007c9c70(this,iVar4,uVar2);
        }
        else {
          F_007608f0(this,iVar4,uVar2);
        }
        pbVar8 = (byte *)F_0042a990(iVar4);
      }
    }
  }
  pbVar3 = (byte *)F_0042a990(param_1 + 0xc4);
  pbVar7 = pbVar8;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_007ca764: ;
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_007ca769;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_007ca764;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_007ca769: ;
  if (iVar4 != 0) {
    F_0042e430((undefined *)(param_1 + 0xc4),pbVar8);
    if (pbVar8 == (byte *)0x0) {
LAB_007ca7aa: ;
      puVar5 = &REFG(undefined, 0x10bdadb);
    }
    else {
      pbVar7 = pbVar8;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      if (pbVar7 == pbVar8 + 1) goto LAB_007ca7aa;
      uVar10 = 0x25;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                  (*(int * PTR32 *)((int)this + 0x23184))));
      puVar5 = (undefined *)F_00460540(this_00,uVar10,pbVar8);
    }
    F_0042e430((undefined *)(param_1 + 0x118),puVar5);
  }
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  F_0042e430((undefined *)(param_1 + 0x70),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)(param_1 + 0x18) = 0;
  F_0042e430((undefined *)(param_1 + 0x16c),&REFG(undefined1, 0x107fc63));
  piVar6 = (int *)F_005339e0(&REFG(undefined4, 0x1375bc0));
  if (piVar6 != param_4) {
    piVar6 = (int *)F_00533a30(&REFG(undefined4, 0x1375bc0));
    iVar4 = 8;
    if (piVar6 != param_4) goto LAB_007ca80c;
  }
  iVar4 = local_c;
LAB_007ca80c: ;
  if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) != iVar4) {
    *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) = iVar4;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_007ca830 */
uint F_007ca830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7ca830u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float fVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint local_14;
  float local_10;
  int local_c;
  int iStack_8;
  
  uVar4 = 0;
  local_14 = 0;
  iStack_8 = 0;
  bVar2 = F_00ae18c0(param_4);
  if (bVar2 == 0) {
    if ((*(char *)(param_4 + 0x1e1) == '\0') || (*(char *)(param_4 + 0x1d8) == '\0'))
    goto LAB_007ca981;
    local_10 = *(float *)(param_4 + 0x184);
    if (local_10 < 0.0) {
      local_c = (int)(longlong)TRUNC((double)local_10 - REFG(double, 0x1088108));
      iStack_8 = local_c;
    }
    else {
      local_c = (int)(longlong)TRUNC((double)local_10 + REFG(double, 0x1088108));
      iStack_8 = local_c;
    }
LAB_007ca967: ;
    fVar1 = *(float *)(param_4 + 0x18c);
  }
  else {
    local_10 = *(float *)(param_4 + 0x184);
    if (local_10 < 0.0) {
      local_c = (int)(longlong)TRUNC((double)local_10 - REFG(double, 0x1088108));
      iStack_8 = local_c;
    }
    else {
      local_c = (int)(longlong)TRUNC((double)local_10 + REFG(double, 0x1088108));
      iStack_8 = local_c;
    }
    if (*(char *)(param_4 + 0x1d8) != '\0') goto LAB_007ca967;
    fVar1 = *(float *)(param_4 + 0x188);
  }
  local_14 = 2;
  uVar4 = F_00906ed0(local_10,fVar1);
LAB_007ca981: ;
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + param_5 * 4))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + param_5 * 4))) = uVar4;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  F_0042e430((undefined *)(param_1 + 0x70),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)(param_1 + 0x18) = 0;
  F_0042e430((undefined *)(param_1 + 0x16c),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)(param_1 + 0xc4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)(param_1 + 0x118),&REFG(undefined1, 0x107fc63));
  uVar4 = local_14;
  if (iStack_8 != 0) {
    uVar4 = local_14 | 0x20;
  }
  uVar3 = F_005339e0(&REFG(undefined4, 0x1375bc0));
  if ((uVar3 != param_4) && (uVar3 = F_00533a30(&REFG(undefined4, 0x1375bc0)), uVar3 != param_4)) {
    uVar4 = uVar4 | 8;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) = uVar4;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_007caa40 */
uint F_007caa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x7caa40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 gen_out[0x4];
  int * piVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined * pvVar8;
  uint uVar9;
  undefined4 uVar10;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  bVar3 = F_00ae0f80(param_4);
  bVar4 = F_00ae0f70(param_4);
  if (bVar3 == 0) {
    iVar6 = 0;
  }
  else if (bVar4 < bVar3) {
    dVar2 = (double)((float)GEN_TOF((((float10)bVar4 * (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)bVar3)));
    if (dVar2 < 0.0) {
      iVar6 = (int)(dVar2 - REFG(double, 0x1088108));
    }
    else {
      iVar6 = (int)(dVar2 + REFG(double, 0x1088108));
    }
  }
  else {
    iVar6 = 100;
  }
  if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + param_5 * 4))) != iVar6) {
    *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + param_5 * 4))) = iVar6;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  F_0042e430((undefined *)(param_1 + 0x70),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)(param_1 + 0xc4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)(param_1 + 0x118),&REFG(undefined1, 0x107fc63));
  bVar3 = F_00ae0f60(param_4);
  uVar9 = (uint)bVar3;
  if (*(uint *)(param_1 + 0x18) != uVar9) {
    uVar7 = F_00435340(uVar9);
    F_0042e430((undefined *)((int)this + 0x22d40),uVar7);
    piVar1 = *(int * PTR32 *)((int)this + 0x23184);
    uVar7 = F_0042a990((undefined *)((int)this + 0x22d40));
    uVar10 = 0x7f2;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
    uVar7 = F_00461190(pvVar8,uVar10,uVar7);
    F_0042e430((undefined *)(param_1 + 0x16c),uVar7);
  }
  *(uint *)(param_1 + 0x18) = uVar9;
  bVar3 = F_00ae0f70(param_4);
  uVar9 = 0x20;
  if (bVar3 == 0) {
    uVar9 = 0;
  }
  pvVar8 = (undefined *)F_005339e0(&REFG(undefined4, 0x1375bc0));
  if (pvVar8 != param_4) {
    pvVar8 = (undefined *)F_00533a30(&REFG(undefined4, 0x1375bc0));
    if (pvVar8 != param_4) {
      uVar9 = uVar9 | 8;
    }
  }
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) != uVar9) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) = uVar9;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  bVar3 = F_00ae0f60(param_4);
  F_00c47745(uVar5 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)bVar3 << 0x10;
}

/* ref: FUN_007cabf0 */
uint F_007cabf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7cabf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = F_005339e0(&REFG(undefined4, 0x1375bc0));
  if (uVar1 != param_4) {
    uVar1 = F_00533a30(&REFG(undefined4, 0x1375bc0));
    if (uVar1 != param_4) {
      iVar2 = 8;
    }
  }
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  F_0042e430((undefined *)(param_1 + 0x70),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)(param_1 + 0x18) = 0;
  F_0042e430((undefined *)(param_1 + 0x16c),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)(param_1 + 0xc4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)(param_1 + 0x118),&REFG(undefined1, 0x107fc63));
  if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) = iVar2;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_007cb420 */
uint F_007cb420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7cb420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined * pvVar1;
  int iVar2;
  undefined1 * puVar3;
  int * piVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if ((*param_2 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  if (iVar2 == 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x231a4) + 0x61))) = 1;
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)),"/battlemode on",REFG(undefined4, 0x108cc50));
    piVar4 = *(int * PTR32 *)((int)this + 0x23184);
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
    pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x20))()));
    F_00abefa0(pvVar1,puVar3,piVar4);
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
  }
  else {
    if (iVar2 != 1) goto LAB_007cb4cc;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x231a4) + 0x61))) = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),"/battlemode off",REFG(undefined4, 0x108cc50));
    piVar4 = *(int * PTR32 *)((int)this + 0x23184);
    puVar3 = ((undefined1 *)(gen_frame + 0x54));
    pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x20))()));
    F_00abefa0(pvVar1,puVar3,piVar4);
    puVar3 = ((undefined1 *)(gen_frame + 0x54));
  }
  F_0042c880(puVar3);
LAB_007cb4cc: ;
  *param_1 = 0;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)param_1;
}

/* ref: FUN_007cb4f0 */
uint F_007cb4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7cb4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if ((*param_2 & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4);
  }
  if ((param_2[8] & 0xf) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = param_2[0xc];
  }
  uVar3 = 0;
  if ((iVar4 < *(int *)((int)this + 0x235bc)) && (bVar2 != 0)) {
    iVar4 = *(int *)((int)this + 0x235bc) - iVar4;
    iVar1 = *(int *)((int)this + iVar4 * 8 + 0x235b8);
    if (iVar1 != -0x20000000) {
      uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar1,*(undefined4 *)((int)this + iVar4 * 8 + 0x235bc));
    }
  }
  F_00533b50(&REFG(undefined4, 0x1375bc0),uVar3);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007cb560 */
uint F_007cb560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7cb560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_2 & 0xf;
  if (((uVar4 == 0) || (uVar3 = param_2[1], uVar3 != 0xe)) &&
     ((uVar4 == 0 ||
      ((uVar3 = param_2[1], uVar3 != 0x11 &&
       ((uVar4 == 0 ||
        ((uVar3 != 0x12 &&
         ((uVar4 == 0 ||
          ((uVar3 != 0x13 &&
           ((uVar4 == 0 ||
            ((uVar3 != 0xf &&
             ((uVar4 == 0 ||
              ((uVar3 != 0x10 &&
               ((uVar4 == 0 ||
                ((uVar3 != 0x15 &&
                 ((uVar4 == 0 ||
                  ((uVar3 != 0x14 &&
                   ((uVar4 == 0 ||
                    ((uVar3 != 0x17 &&
                     ((uVar4 == 0 || ((uVar3 != 0x18 && ((uVar4 == 0 || (uVar3 != 0x19))))))))))))))
                 )))))))))))))))))))))))))) {
    iVar1 = *(int *)((int)this + 0x2326c);
    if (param_3 < 4) {
      uVar3 = 0xffffffff;
    }
    else if ((param_2[6] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_2[7];
    }
    if ((param_2[4] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[5];
    }
    if ((param_2[2] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_2[3];
    }
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_2[1];
    }
    *(uint *)(iVar1 + 0x34) = uVar5;
    *(uint *)(iVar1 + 0x38) = uVar3;
    *(uint *)(iVar1 + 0x2c) = uVar4;
    *(uint *)(iVar1 + 0x30) = uVar2;
    *(undefined1 *)(iVar1 + 0x44) = 1;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)((int)this + 0x23270);
  if ((param_2[4] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_2[5];
  }
  if ((param_2[2] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_2[3];
  }
  *(uint *)(iVar1 + 0x14) = uVar3;
  *(bool *)(iVar1 + 0x24) = -1 < (int)uVar4;
  *(uint *)(iVar1 + 0x18) = uVar5;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007cb6a0 */
uint F_007cb6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7cb6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x23230);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007cb6d0 */
uint F_007cb6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cb6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined4 in_ecx;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar4 = 0;
  ((byte *)(gen_frame + 0x78))[0x18] = 2;
  ((byte *)(gen_frame + 0x78))[0x19] = 0;
  ((byte *)(gen_frame + 0x78))[0x1a] = 0;
  ((byte *)(gen_frame + 0x78))[0x1b] = 0;
  ((byte *)(gen_frame + 0xd0))[4] = 2;
  ((byte *)(gen_frame + 0xd0))[5] = 0;
  ((byte *)(gen_frame + 0xd0))[6] = 0;
  ((byte *)(gen_frame + 0xd0))[7] = 0;
  ((byte *)(gen_frame + 0x78))[8] = 2;
  ((byte *)(gen_frame + 0x78))[9] = 0;
  ((byte *)(gen_frame + 0x78))[10] = 0;
  ((byte *)(gen_frame + 0x78))[0xb] = 0;
  ((byte *)(gen_frame + 0xd0))[0x10] = 2;
  ((byte *)(gen_frame + 0xd0))[0x11] = 0;
  ((byte *)(gen_frame + 0xd0))[0x12] = 0;
  ((byte *)(gen_frame + 0xd0))[0x13] = 0;
  ((undefined4 *)(gen_frame + 0x98))[2] = 2;
  ((undefined4 *)(gen_frame + 0x98))[9] = 2;
  ((byte *)(gen_frame + 0x78))[0x10] = 0;
  ((byte *)(gen_frame + 0x78))[0x11] = 0;
  ((byte *)(gen_frame + 0x78))[0x12] = 0;
  ((byte *)(gen_frame + 0x78))[0x13] = 0;
  ((byte *)(gen_frame + 0x78))[0x14] = 1;
  ((byte *)(gen_frame + 0x78))[0x15] = 0;
  ((byte *)(gen_frame + 0x78))[0x16] = 0;
  ((byte *)(gen_frame + 0x78))[0x17] = 0;
  ((byte *)(gen_frame + 0x78))[0x1c] = 3;
  ((byte *)(gen_frame + 0x78))[0x1d] = 0;
  ((byte *)(gen_frame + 0x78))[0x1e] = 0;
  ((byte *)(gen_frame + 0x78))[0x1f] = 0;
  ((byte *)(gen_frame + 0xd0))[0] = 0;
  ((byte *)(gen_frame + 0xd0))[1] = 0;
  ((byte *)(gen_frame + 0xd0))[2] = 0;
  ((byte *)(gen_frame + 0xd0))[3] = 0;
  ((byte *)(gen_frame + 0xd0))[8] = 3;
  ((byte *)(gen_frame + 0xd0))[9] = 0;
  ((byte *)(gen_frame + 0xd0))[10] = 0;
  ((byte *)(gen_frame + 0xd0))[0xb] = 0;
  ((byte *)(gen_frame + 0x78))[0] = 0;
  ((byte *)(gen_frame + 0x78))[1] = 0;
  ((byte *)(gen_frame + 0x78))[2] = 0;
  ((byte *)(gen_frame + 0x78))[3] = 0;
  ((byte *)(gen_frame + 0x78))[4] = 1;
  ((byte *)(gen_frame + 0x78))[5] = 0;
  ((byte *)(gen_frame + 0x78))[6] = 0;
  ((byte *)(gen_frame + 0x78))[7] = 0;
  ((byte *)(gen_frame + 0x78))[0xc] = 3;
  ((byte *)(gen_frame + 0x78))[0xd] = 0;
  ((byte *)(gen_frame + 0x78))[0xe] = 0;
  ((byte *)(gen_frame + 0x78))[0xf] = 0;
  ((byte *)(gen_frame + 0xd0))[0xc] = 0;
  ((byte *)(gen_frame + 0xd0))[0xd] = 0;
  ((byte *)(gen_frame + 0xd0))[0xe] = 0;
  ((byte *)(gen_frame + 0xd0))[0xf] = 0;
  ((byte *)(gen_frame + 0xd0))[0x14] = 3;
  ((byte *)(gen_frame + 0xd0))[0x15] = 0;
  ((byte *)(gen_frame + 0xd0))[0x16] = 0;
  ((byte *)(gen_frame + 0xd0))[0x17] = 0;
  ((undefined4 *)(gen_frame + 0x98))[0] = 0;
  ((undefined4 *)(gen_frame + 0x98))[1] = 1;
  ((undefined4 *)(gen_frame + 0x98))[3] = 3;
  ((undefined4 *)(gen_frame + 0x98))[4] = 4;
  ((undefined4 *)(gen_frame + 0x98))[5] = 7;
  ((undefined4 *)(gen_frame + 0x98))[6] = 8;
  ((undefined4 *)(gen_frame + 0x98))[7] = 0;
  ((undefined4 *)(gen_frame + 0x98))[8] = 1;
  ((undefined4 *)(gen_frame + 0x98))[10] = 3;
  ((undefined4 *)(gen_frame + 0x98))[0xb] = 4;
  ((undefined4 *)(gen_frame + 0x98))[0xc] = 5;
  ((undefined4 *)(gen_frame + 0x98))[0xd] = 6;
  ((undefined4 *)(gen_frame + 0xc))[0xe] = 0xf5;
  ((undefined4 *)(gen_frame + 0xc))[0xf] = 0xfa;
  ((undefined4 *)(gen_frame + 0xc))[0x10] = 0xfe;
  ((undefined4 *)(gen_frame + 0xc))[0x11] = 0x102;
  ((undefined4 *)(gen_frame + 0xc))[0x12] = 0x105;
  ((undefined4 *)(gen_frame + 0xc))[0x13] = 0x110;
  ((undefined4 *)(gen_frame + 0xc))[0x14] = 0x113;
  ((undefined4 *)(gen_frame + 0xc))[7] = 0x117;
  ((undefined4 *)(gen_frame + 0xc))[8] = 0x11b;
  ((undefined4 *)(gen_frame + 0xc))[9] = 0x11f;
  ((undefined4 *)(gen_frame + 0xc))[10] = 0x123;
  ((undefined4 *)(gen_frame + 0xc))[0xb] = 0x127;
  ((undefined4 *)(gen_frame + 0xc))[0xc] = 299;
  ((undefined4 *)(gen_frame + 0xc))[0xd] = 0x12f;
  ((undefined4 *)(gen_frame + 0xc))[0] = 0xf7;
  ((undefined4 *)(gen_frame + 0xc))[1] = 0xfb;
  ((undefined4 *)(gen_frame + 0xc))[2] = 0xff;
  ((undefined4 *)(gen_frame + 0xc))[3] = 0x104;
  ((undefined4 *)(gen_frame + 0xc))[4] = 0x106;
  ((undefined4 *)(gen_frame + 0xc))[5] = 0x112;
  ((undefined4 *)(gen_frame + 0xc))[6] = 0x114;
  ((undefined4 *)(gen_frame + 0xc))[0x15] = 0x118;
  ((undefined4 *)(gen_frame + 0xc))[0x16] = 0x11c;
  ((undefined4 *)(gen_frame + 0xc))[0x17] = 0x120;
  ((undefined4 *)(gen_frame + 0xc))[0x18] = 0x124;
  ((undefined4 *)(gen_frame + 0xc))[0x19] = 0x128;
  ((undefined4 *)(gen_frame + 0xc))[0x1a] = 300;
  *(undefined4 *)((int)this + 0x235a4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x235a8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x235ac) = 0xffffffff;
  *(undefined4 *)((int)this + 0x235b0) = 0xffffffff;
  do {
    uVar2 = F_00414500(in_ecx,*(undefined4 *)((int)((undefined4 *)(gen_frame + 0xc)) + uVar4 + 0x38));
    uVar2 = *(uint *)(uVar2 + 0x14);
    if (3 < uVar2) {
      uVar2 = 3;
    }
    bVar1 = (char)*(undefined4 *)((int)((undefined4 *)(gen_frame + 0x98)) + uVar4) * '\x02';
    uVar4 = uVar4 + 4;
    *(uint *)((int)this + 0x235a4) =
         (uint)*((byte *)GEN_TOP((((undefined4 *)(gen_frame + 0x98)) + (uVar2 - 4)))) << (bVar1 & 0x1f) |
         ~(3 << (bVar1 & 0x1f)) & *(uint *)((int)this + 0x235a4);
  } while (uVar4 < 0x1c);
  uVar4 = 0;
  do {
    uVar2 = F_00414500(in_ecx,*(undefined4 *)((int)((undefined4 *)(gen_frame + 0xc)) + uVar4 + 0x1c));
    uVar2 = *(uint *)(uVar2 + 0x14);
    if (2 < uVar2) {
      uVar2 = 2;
    }
    bVar1 = (char)*(undefined4 *)((int)((undefined4 *)(gen_frame + 0x98)) + uVar4 + 0x1c) * '\x02';
    uVar4 = uVar4 + 4;
    *(uint *)((int)this + 0x235a8) =
         (uint)((byte *)(gen_frame + 0xd0))[(int)(uVar2 * 4)] << (bVar1 & 0x1f) |
         ~(3 << (bVar1 & 0x1f)) & *(uint *)((int)this + 0x235a8);
  } while (uVar4 < 0x1c);
  uVar4 = 0;
  do {
    uVar2 = F_00414500(in_ecx,*(undefined4 *)((int)((undefined4 *)(gen_frame + 0xc)) + uVar4));
    uVar2 = *(uint *)(uVar2 + 0x14);
    if (3 < uVar2) {
      uVar2 = 3;
    }
    bVar1 = (char)*(undefined4 *)((int)((undefined4 *)(gen_frame + 0x98)) + uVar4) * '\x02';
    uVar4 = uVar4 + 4;
    *(uint *)((int)this + 0x235ac) =
         (uint)((byte *)(gen_frame + 0x78))[(int)(uVar2 * 4)] << (bVar1 & 0x1f) |
         ~(3 << (bVar1 & 0x1f)) & *(uint *)((int)this + 0x235ac);
  } while (uVar4 < 0x1c);
  uVar4 = 0;
  do {
    uVar2 = F_00414500(in_ecx,*(undefined4 *)((int)((undefined4 *)(gen_frame + 0xc)) + uVar4 + 0x54));
    uVar2 = *(uint *)(uVar2 + 0x14);
    if (2 < uVar2) {
      uVar2 = 2;
    }
    bVar1 = (char)*(undefined4 *)((int)((undefined4 *)(gen_frame + 0x98)) + uVar4 + 0x1c) * '\x02';
    uVar4 = uVar4 + 4;
    uVar3 = ~(3 << (bVar1 & 0x1f)) & *(uint *)((int)this + 0x235b0);
    *(uint *)((int)this + 0x235b0) = (uint)((byte *)(gen_frame + 0xd0))[(int)(uVar2 * 4 + 0xc)] << (bVar1 & 0x1f) | uVar3;
  } while (uVar4 < 0x18);
  *(undefined1 *)((int)this + 0x235bb) = 1;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_007cb9f0 */
uint F_007cb9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cb9f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x74);
  uVar1 = *(uint *)(uVar1 + 0x14);
  *(undefined4 *)(in_ecx + 0x235b4) = 0;
  if (uVar1 == 0) {
    *(undefined4 *)(in_ecx + 0x235b4) = 1;
  }
  return uVar1;
}

/* ref: FUN_007cba20 */
uint F_007cba20(unsigned int gen_a0)
{
  GEN_ENTER(0x7cba20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  in_ecx_00 = *(int *)(in_ecx + 0x23214);
  if (in_ecx_00 != 0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x193);
    iVar2 = 100 - *(int *)(uVar1 + 0x14);
    fVar3 = (float10)iVar2;
    if (iVar2 < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    in_EAX = F_00773fc0(in_ecx_00,(float)(fVar3 / (float10)*(double *)&REFG(undefined, 0x1088118)));
  }
  return in_EAX;
}

/* ref: FUN_007cba80 */
unsigned int F_007cba80(unsigned int gen_a0)
{
  GEN_ENTER(0x7cba80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ecx_00;
  char cVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  in_ecx_00 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar2 = F_00414500(in_ecx_00,0xf6);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(uVar2 + 0x14))) {
  default: ;
    cVar1 = '\0';
    break;
  case 1: ;
    cVar1 = '\x01';
    break;
  case 2: ;
    cVar1 = '\x02';
    break;
  case 3: ;
    cVar1 = '\x03';
  }
  bVar5 = *(char *)(in_ecx + 0x235b8) == cVar1;
  if (!bVar5) {
    *(char *)(in_ecx + 0x235b8) = cVar1;
  }
  uVar2 = F_00414500(in_ecx_00,0x103);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(uVar2 + 0x14))) {
  default: ;
    cVar1 = '\0';
    break;
  case 1: ;
    cVar1 = '\x01';
    break;
  case 2: ;
    cVar1 = '\x02';
    break;
  case 3: ;
    cVar1 = '\x03';
  }
  bVar6 = *(char *)(in_ecx + 0x235b9) == cVar1;
  if (!bVar6) {
    *(char *)(in_ecx + 0x235b9) = cVar1;
  }
  uVar2 = F_00414500(in_ecx_00,0x111);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(uVar2 + 0x14))) {
  default: ;
    cVar1 = '\0';
    break;
  case 1: ;
    cVar1 = '\x01';
    break;
  case 2: ;
    cVar1 = '\x02';
    break;
  case 3: ;
    cVar1 = '\x03';
  }
  if (*(char *)(in_ecx + 0x235ba) == cVar1) {
    if (bVar6 && bVar5) {
      return 0;
    }
  }
  else {
    *(char *)(in_ecx + 0x235ba) = cVar1;
  }
  puVar3 = (undefined1 *)(in_ecx + 0x23917);
  iVar4 = 0x32;
  do {
    *puVar3 = 1;
    puVar3 = puVar3 + 0x1d0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_007cbb90 */
uint F_007cbb90(unsigned int gen_a0)
{
  GEN_ENTER(0x7cbb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x2dba4) == 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  F_00424750(REFG(undefined4, 0x137104c));
  uVar1 = *(int *)((int)this + 0x2dba4) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (*(undefined * PTR32 *)((int)this + 0x2331c) != (undefined *)0x0) {
      uVar1 = F_00784150(*(undefined * PTR32 *)((int)this + 0x2331c));
      return uVar1;
    }
    break;
  case 1: ;
  case 3: ;
    if (*(undefined * PTR32 *)((int)this + 0x23318) != (undefined *)0x0) {
      uVar1 = F_007840b0(*(undefined * PTR32 *)((int)this + 0x23318));
      return uVar1;
    }
    break;
  case 2: ;
    if (*(undefined * PTR32 *)((int)this + 0x23314) != (undefined *)0x0) {
      uVar1 = F_00784040(*(undefined * PTR32 *)((int)this + 0x23314));
      return uVar1;
    }
    break;
  case 4: ;
    if (*(undefined * PTR32 *)((int)this + 0x23320) != (undefined *)0x0) {
      uVar1 = F_007841c0(*(undefined * PTR32 *)((int)this + 0x23320));
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_007cbc20 */
uint F_007cbc20(unsigned int gen_a0)
{
  GEN_ENTER(0x7cbc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = *(int *)((int)this + 0x2dba4) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    piVar1 = *(int * PTR32 *)((int)this + 0x2331c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((int)this + 0x2dba4) = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return uVar2;
    }
    break;
  case 1: ;
    piVar1 = *(int * PTR32 *)((int)this + 0x23318);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((int)this + 0x2dba4) = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return uVar2;
    }
    break;
  case 2: ;
    piVar1 = *(int * PTR32 *)((int)this + 0x23314);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((int)this + 0x2dba4) = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return uVar2;
    }
    break;
  case 3: ;
    piVar1 = *(int * PTR32 *)((int)this + 0x23318);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((int)this + 0x2dba4) = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return uVar2;
    }
    break;
  case 4: ;
    piVar1 = *(int * PTR32 *)((int)this + 0x23320);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((int)this + 0x2dba4) = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_007cbcf0 */
byte F_007cbcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cbcf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x2dba4) != 0) {
    F_00424750(REFG(undefined4, 0x137104c));
    if (((*(int *)((int)this + 0x2dba4) == 2) || (*(int *)((int)this + 0x2dba4) == 4)) &&
       (iVar1 = *(int *)((int)this + 0x23318), iVar1 != 0)) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 4) + 0x1c))))(*(int * PTR32 *)(iVar1 + 4))));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,*(undefined4 *)(iVar1 + 8),0,0);
      return (byte)(uVar3 >> 1) & 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf14 */
byte F_007cbd50(unsigned int gen_a0)
{
  GEN_ENTER(0x7cbd50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(REFG(int, 0x1379860) + 0x21d) == '\0') && (*(int *)(in_ecx + 0xd4) != 0)) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xd4) + 0x1bc)));
  }
  return 0;
}

/* ref: FUN_007cbd80 */
uint F_007cbd80(unsigned int gen_a0)
{
  GEN_ENTER(0x7cbd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = REFG(undefined * PTR32, 0x1328130);
  if (*(int *)((int)this + 0x200) != 1) {
    puVar1 = REFG(undefined * PTR32, 0x132812c);
  }
  piVar2 = (int *)F_0057f860(this,puVar1);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x100))(piVar2,0);
    if (uVar3 != 0) {
      F_005aa0f0((undefined *)(REFG(int, 0x1379860) + 0x20c),0);
      *(undefined4 *)((int)this + 0x1fc) = 0;
      if (*(char *)(REFG(int, 0x1379860) + 0xbc) != '\0') {
        F_005aa300((undefined *)(REFG(int, 0x1379860) + 0x3c),1,0,9);
      }
      return 2;
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf25 */
unsigned int F_007cbe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cbe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (((((byte)this[0x1b0] & 8) != 0) && (iVar1 = (int)*(char *)(param_1 + 0x10f), 0 < iVar1)) &&
     (iVar1 < *(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 2)) {
    *((int *)GEN_TOP((*(int *)(this + 0x1c4) + iVar1 * 4))) = param_1;
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf26 */
unsigned int F_007cbe40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cbe40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  if ((((((byte)this[0x1b0] & 8) != 0) && (iVar2 = (int)*(char *)(param_1 + 0x10f), 0 < iVar2)) &&
      (iVar1 = *(int *)(this + 0x1c4), iVar2 < *(int *)(this + 0x1c8) - iVar1 >> 2)) &&
     (*(int *)(iVar1 + iVar2 * 4) == param_1)) {
    *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_007cbe90 */
byte F_007cbe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cbe90u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    if ((*(char *)((int)param_1 + 0x10f) < '\x01') || ((char)param_2 == '\0')) {
      if ((((((*(char *)((int)param_1 + 0x10f) == '\0') && ((char)param_2 == '\0')) &&
            ((*(byte *)((int)param_1 + 0xf9) & 1) != 0)) &&
           ((bVar1 = F_005b89f0(param_1), bVar1 != 0 &&
            (uVar2 = F_005c0800(param_1), (char)uVar2 != '\0')))) &&
          (((*(byte *)(param_1 + 0x3e) & 0x80) == 0 &&
           (((char)param_1[0x4f] == '\0' || ((*(byte *)((int)param_1 + 0xfb) & 2) != 0)))))) &&
         (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x74))(param_1), (char)uVar2 == '\0')) {
        return 1;
      }
    }
    else if (((((*(byte *)((int)param_1 + 0xf9) & 1) != 0) &&
              ((bVar1 = F_005b89f0(param_1), bVar1 != 0 &&
               (uVar2 = F_005c0800(param_1), (char)uVar2 != '\0')))) &&
             (((char)param_1[0x4f] == '\0' || ((*(byte *)((int)param_1 + 0xfb) & 2) != 0)))) &&
            (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x74))(param_1), (char)uVar2 == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007cbf60 */
uint F_007cbf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7cbf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0xbc))) != '\0') {
    F_005aa300(((undefined *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x3c))),1,0,9);
  }
  F_0059b300(REFG(void * PTR32, 0x1379860),*(undefined4 *)(param_2 + 0xa4),param_2,0);
  if (param_1 != param_2) {
    F_00580230(this,param_1,0);
  }
  *(undefined4 *)((int)this + 0x1fc) = param_3;
  uVar1 = F_0043f8b0(0xd);
  return uVar1;
}

/* ref: FUN_007cbfd0 */
uint F_007cbfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cbfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 < (uint)(*(int *)((int)this + 0x1d8) - *(int *)((int)this + 0x1d4) >> 2)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1d4) + param_1 * 4)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf17 */
uint F_007cc010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cc010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    uVar2 = F_007c8b20(this_00,param_1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_007cc050 */
uint F_007cc050(unsigned int gen_a0)
{
  GEN_ENTER(0x7cc050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x34)),6,0);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x756764;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x24)) = 5000;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 2;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  piVar1 = (int *)F_00513d70(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"ui/common/UiColorData.ugd",&(*(undefined4 *)(gen_frame + 0xc)),0,0);
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1);
  F_007629e0(this,uVar2);
  F_0050c620(piVar1,0,0);
  *(undefined1 *)((int)this + 0xc) = 1;
  return 0;
}

/* ref: FUN_007cc100 */
unsigned int F_007cc100(unsigned int gen_a0)
{
  GEN_ENTER(0x7cc100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007cc140 */
uint F_007cc140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cc140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  return *(uint *)(uVar1 + 0xc + param_1 * 4);
}

/* ref: FUN_007cc180 */
uint F_007cc180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cc180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0xc);
  uVar2 = param_1;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_007cc1b0 */
uint F_007cc1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cc1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0xc);
  uVar2 = param_1;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_007cc1d0 */
uint F_007cc1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cc1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[6])REFP(0x10c3ed0));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[23])REFP(0x10d3d9c));
  in_ecx[3] = (*(undefined * PTR32 (*)[6])REFP(0x10d3d7c));
  in_ecx[6] = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  *(undefined1 *)((int)in_ecx + 0x1e) = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  *(undefined2 *)(in_ecx + 0xc) = 1;
  in_ecx[0xd] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf16 */
uint F_007cc220(unsigned int gen_a0)
{
  GEN_ENTER(0x7cc220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pAVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0x34);
  if ((piVar1 != (int *)0x0) && (piVar1[0x82] == *(int *)(this + 8))) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x34) = 0;
  }
  *(undefined4 *)(this + 8) = 0;
  pAVar3 = this + 0xc;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = F_0043d010(this_00,pAVar3);
  return uVar2;
}

/* ref: FUN_007cc270 */
unsigned int F_007cc270(void)
{
  GEN_ENTER(0x7cc270u, 0u, 0u, 0u, 0u);
  if ((REFG(void * PTR32, 0x1370b90) != (undefined *)0x0) && (REFG(int, 0x1328170) != -1)) {
    F_004dacc0(REFG(void * PTR32, 0x1370b90),REFG(int, 0x1328170));
    REFG(int, 0x1328170) = -1;
    if (REFG(int, 0x148a114) != 0) {
      *(undefined1 *)(REFG(int, 0x148a114) + 0x31) = 1;
      REFG(int, 0x148a114) = 0;
    }
  }
  return 0;
}

/* ref: FUN_007cc2b0 */
unsigned int F_007cc2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7cc2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  
  if (*(char *)((int)this + 0x30) == '\0') {
    *(undefined1 *)((int)this + 0x30) = 1;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x40))))(*(int * PTR32 *)((int)this + 4))));
    F_0043c630(this_00);
    F_007631c0(this);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf16 */
uint F_007cc2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cc2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pAVar3;
  
  this[0x38] = (undefined1)0x1;
  F_007631c0(this);
  if (*(int *)(this + 100) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 100),0);
  }
  piVar1 = *(int * PTR32 *)(this + 0x34);
  *(undefined4 *)(this + 100) = 0;
  if ((piVar1 != (int *)0x0) && (piVar1[0x82] == *(int *)(this + 8))) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x34) = 0;
  }
  *(undefined4 *)(this + 8) = 0;
  pAVar3 = this + 0xc;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = F_0043d010(this_00,pAVar3);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf22 */
uint F_007cc350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cc350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 AVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  F_007632d0((undefined *)this,param_1);
  AVar1 = this[0x38];
  F_005a2710((undefined *)(param_1 + 0x30),2);
  *(undefined *)(param_1 + 0x34) = AVar1;
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x6c))(piVar3);
  if ((char)uVar4 == '\0') {
    F_005a2710((undefined *)(param_1 + 0x38),3);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    F_005a2710((undefined *)(param_1 + 0x38),3);
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  AVar1 = this[0x44];
  F_005a2710((undefined *)(param_1 + 0x40),2);
  *(undefined *)(param_1 + 0x44) = AVar1;
  uVar2 = *(undefined4 *)(this + 0x48);
  F_005a2710((undefined *)(param_1 + 0x48),3);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = *(undefined4 *)(this + 0x50);
  F_005a2710((undefined *)(param_1 + 0x50),3);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = *(undefined4 *)(this + 0x4c);
  F_005a2710((undefined *)(param_1 + 0x58),3);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = *(undefined4 *)(this + 0x54);
  F_005a2710((undefined *)(param_1 + 0x60),3);
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar4 = (uint)(char)this[0x18];
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar4 = F_00764330(this,param_1);
    return uVar4;
  case 1: ;
    uVar4 = F_007646d0(this,param_1);
    return uVar4;
  case 2: ;
    uVar4 = F_007649c0(this,param_1);
    return uVar4;
  case 3: ;
    uVar4 = F_00765650(this,param_1);
    return uVar4;
  case 4: ;
    uVar4 = F_00765940(this,param_1);
    return uVar4;
  case 5: ;
    uVar4 = F_007659b0(this,param_1);
    return uVar4;
  case 6: ;
    uVar4 = F_00765eb0(this,param_1);
    return uVar4;
  case 8: ;
    uVar4 = F_00765f50(this,param_1);
    return uVar4;
  case 9: ;
    uVar4 = F_00766160(this,param_1);
    return uVar4;
  case 10: ;
    uVar4 = F_00766500(this,param_1);
    return uVar4;
  case 0xb: ;
    uVar4 = F_00766960(this,param_1);
    return uVar4;
  case 0xc: ;
    uVar4 = F_007669a0(this,param_1);
    return uVar4;
  case 0xd: ;
    uVar4 = F_00766bc0(this,param_1);
    return uVar4;
  case 0xe: ;
    uVar4 = F_00766f40(this,param_1);
    return uVar4;
  case 0xf: ;
    uVar4 = F_007673b0(this,param_1);
  }
  return uVar4;
}

/* ref: FUN_007cc560 */
uint F_007cc560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cc560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((*param_1 & 0xf) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == -1) {
      *(undefined4 *)((int)this + 0x58) = 0;
    }
    else if ((-1 < iVar1) && (iVar1 < 2)) goto LAB_007cc590;
    return (uint)param_1;
  }
LAB_007cc590: ;
  *(undefined4 *)((int)this + 0x58) = 0;
  if ((param_1[8] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0xc);
  }
  if ((param_1[0x20] & 0xf) == 0) {
    param_1 = (byte *)0x0;
  }
  else {
    param_1 = *(byte * PTR32 *)(param_1 + 0x24);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = F_00762c60((undefined *)(uVar3 + 0x23538),2,uVar5,0);
  uVar6 = *(undefined4 *)((int)this + 0x5c);
  uVar4 = uVar3 >> 0x10;
  uVar9 = 1;
  uVar8 = 1;
  uVar7 = 2;
  uVar3 = (((uVar4 ^ uVar3) & 0xff ^ uVar4) << 8 | uVar3 >> 8 & 0xff) << 8 | uVar4 & 0xff;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  bVar2 = F_00447870(this_00,uVar6,uVar3,uVar7,uVar8,uVar9);
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(bool *)((int)this + 0x1c) = bVar2 == 0;
  }
  if (param_1 == (byte *)0x2) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    uVar3 = F_00762c60((undefined *)(uVar3 + 0x23538),3,uVar5,0);
    uVar4 = uVar3 >> 0x10;
    F_007633a0(this,*(undefined4 *)((int)this + 0x60),
                 (((uVar4 ^ uVar3) & 0xff ^ uVar4) << 8 | uVar3 >> 8 & 0xff) << 8 | uVar4 & 0xff);
    *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  }
  *(undefined1 *)((int)this + 0x1d) = 1;
  uVar3 = F_007631c0(this);
  return uVar3;
}

/* ref: FUN_007cc6a0 */
uint F_007cc6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cc6a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 < 0x65) && (0 < *(int *)(&REFG(undefined, 0x148a118) + param_1 * 4))) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(int *)(&REFG(undefined, 0x148a118) + param_1 * 4))
    ;
    uVar1 = *(uint *)(uVar1 + 0x14);
  }
  return uVar1 | 0xff000000;
}

/* ref: FUN_007cc6e0 */
uint F_007cc6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cc6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  (*(uint *)(gen_frame + 0x398)) = uVar1;
  if (*(int *)((int)this + 100) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4));
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x72;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_00767820(this,((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x74));
    uVar1 = F_0043b840(uVar1,*(undefined4 *)((int)this + 0x74));
    uVar1 = F_0042a990(uVar1);
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),6);
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 100),0x73,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x398));
    iVar4 = 0x72;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x398)) ^ (uint)(uint)(gen_frame + 0x39c));
  return uVar1;
}

/* ref: FUN_007cc7d0 */
uint F_007cc7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cc7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3b0];
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  undefined * this_00;
  int * piVar6;
  int iVar7;
  code * pcVar8;
  uint uVar9;
  uint * this_01;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3ac);
  (*(uint *)(gen_frame + 0x3a8)) = uVar2;
  if (*(int *)((int)this + 100) == 0) goto LAB_007cca3e;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4));
  puVar3 = ((undefined4 *)(gen_frame + 0x10));
  iVar7 = 0x72;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 2;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_005a2710(((undefined4 *)(gen_frame + 0x10)),4);
  ((undefined4 *)(gen_frame + 0x10))[1] = 3;
  uVar11 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x110) * 4 + 0x114)));
  F_005a2710(((undefined1 *)(gen_frame + 0x130)),4);
  iVar7 = *(int *)((int)this + 0x110);
  (*(undefined4 *)(gen_frame + 0x134)) = uVar11;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (*(int *)((int)this + iVar7 * 4 + 0x114) != 0) {
    puVar3 = ((undefined4 *)(gen_frame + 0x23c));
    do {
      iVar4 = iVar7 * 0x20 + (*(uint *)(gen_frame + 0x4));
      iVar7 = iVar4 * 0x14;
      uVar11 = *(undefined4 *)((int)this + iVar7 + 0x148);
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) |
                  (uint)(*((char *)GEN_TOP(((int)this + *(int *)((int)this + iVar4 * 0x14 + 0x13c) + 0x78))) !=
                        '\0') << ((byte)(*(uint *)(gen_frame + 0x4)) & 0x1f);
      F_005a2710(puVar3 + -0x41,6);
      puVar3[-0x40] = uVar11;
      uVar11 = *(undefined4 *)((int)this + iVar7 + 0x14c);
      F_005a2710(puVar3 + -1,6);
      *puVar3 = uVar11;
      uVar5 = *(uint *)((int)this + iVar7 + 0x140);
      uVar9 = 0;
      if ((uVar5 < 0x65) && (0 < *(int *)(&REFG(undefined, 0x148a118) + uVar5 * 4))) {
        uVar5 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),
                             *(int *)(&REFG(undefined, 0x148a118) + uVar5 * 4));
        uVar9 = *(uint *)(uVar5 + 0x14);
      }
      F_005a2710(puVar3 + -0x83,4);
      iVar7 = *(int *)((int)this + 0x110);
      puVar3[-0x82] = uVar9 | 0xff000000;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      puVar3 = puVar3 + 2;
    } while ((*(uint *)(gen_frame + 0x4)) < *(uint *)((int)this + iVar7 * 4 + 0x114));
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
  iVar7 = *(int *)((int)this + 0x74);
  piVar6 = *(int * PTR32 *)((int)this + 4);
  uVar12 = 0;
  (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x8));
  uVar11 = 0;
  if (iVar7 == 1) {
    uVar10 = 0x1e85;
LAB_007cc99e: ;
    pcVar8 = *(gen_code32 *)(*piVar6 + 0x18);
  }
  else {
    if (iVar7 == 2) {
      uVar10 = 0x1e86;
      goto LAB_007cc99e;
    }
    pcVar8 = *(gen_code32 *)(*piVar6 + 0x18);
    if (iVar7 == 3) {
      uVar10 = 0x1e87;
    }
    else {
      uVar10 = 0x1e84;
    }
  }
  this_00 = ((undefined *)GEN_TOP((*pcVar8)(piVar6)));
  uVar5 = F_0043bd00(this_00,uVar10,uVar11,uVar12);
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  uVar2 = F_0043b840(uVar2,*(undefined4 *)((int)this + 0x74));
  uVar2 = F_0042a990(uVar2);
  F_005a2710(((undefined1 *)(gen_frame + 0x20)),6);
  cVar1 = *(char *)((int)this + 0x70);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  F_005a2710(((undefined1 *)(gen_frame + 0x3a0)),4);
  (*(uint *)(gen_frame + 0x3a4)) = (uint)(cVar1 != '\0');
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,*(undefined4 *)((int)this + 100),0x73,((undefined4 *)(gen_frame + 0x10)));
  this_01 = &(*(uint *)(gen_frame + 0x3a8));
  iVar7 = 0x72;
  do {
    this_01 = this_01 + -2;
    uVar2 = F_005a2670(this_01);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
LAB_007cca3e: ;
  F_00c47745((*(uint *)(gen_frame + 0x3a8)) ^ (uint)(uint)(gen_frame + 0x3ac));
  return uVar2;
}

/* ref: FUN_007cca50 */
uint F_007cca50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cca50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  if (param_1 < 4) {
    this_00 = (undefined *)F_0045ca60(this_00,param_1);
  }
  return (uint)this_00;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf16 */
uint F_007cca80(unsigned int gen_a0)
{
  GEN_ENTER(0x7cca80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  undefined * pAVar4;
  
  if (this[0xac] != (undefined1)0x0) {
    puVar2 = (undefined4 *)F_00424cd0();
    ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x34))((int *)*puVar2,((code *)REFP(0x768450)));
    this[0xac] = (undefined1)0x0;
  }
  if (*(int *)(this + 0x38) != -1) {
    if (REFG(void * PTR32, 0x1370b90) != (undefined *)0x0) {
      F_004dad10(REFG(void * PTR32, 0x1370b90),*(int *)(this + 0x38));
    }
    *(undefined4 *)(this + 0x38) = 0xffffffff;
  }
  this[0x3c] = (undefined1)0x0;
  REFG(undefined1, 0x148a112) = 0;
  piVar1 = *(int * PTR32 *)(this + 0x34);
  if ((piVar1 != (int *)0x0) && (piVar1[0x82] == *(int *)(this + 8))) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x34) = 0;
  }
  *(undefined4 *)(this + 8) = 0;
  pAVar4 = this + 0xc;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = F_0043d010(this_00,pAVar4);
  return uVar3;
}

/* ref: FUN_007ccb10 */
unsigned int F_007ccb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ccb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint local_8;
  
  if (REFG(int, 0x1370b90) != 0) {
    piVar3 = &REFG(undefined4, 0x13285c8);
    local_8 = 0;
    do {
      uVar2 = 0;
      if (*(uint *)((int)this + 0x4c) != 0) {
        piVar1 = (int *)((int)this + 0x6668);
        do {
          if ((*piVar1 == *piVar3) && (piVar1[1] == piVar3[1])) {
            *param_1 = *piVar1;
            *param_2 = piVar1[1];
            *param_3 = uVar2;
            return 0;
          }
          uVar2 = uVar2 + 1;
          piVar1 = piVar1 + 2;
        } while (uVar2 < *(uint *)((int)this + 0x4c));
      }
      local_8 = local_8 + 8;
      piVar3 = piVar3 + 2;
    } while (local_8 < 0x18);
    *param_1 = *(int *)((int)this + 0x6668);
    *param_2 = *(int *)((int)this + 0x666c);
    *param_3 = 0;
  }
  return 0;
}

/* ref: FUN_007ccbb0 */
unsigned int F_007ccbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ccbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *REFG(int * PTR32, 0x1488338);
  if (*(int *)(iVar1 + 0x34) != *(int *)(iVar1 + 0x38)) {
    uVar2 = 0;
    do {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x738 + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf988))[uVar2] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x739 + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf98c))[uVar2] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x73a + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf990))[uVar2] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x73b + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf994))[uVar2] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x73c + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf998))[uVar2] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x73d + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf99c))[uVar2] * 4 + 0x782c)));
      uVar2 = uVar2 + 6;
    } while (uVar2 < 0x18);
  }
  return 0;
}

/* ref: FUN_007cccc0 */
uint F_007cccc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cccc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined1 * puVar4;
  
  iVar1 = *REFG(int * PTR32, 0x1488338);
  if (*(int *)(iVar1 + 0x34) != *(int *)(iVar1 + 0x38)) {
    uVar2 = 0;
    puVar4 = (undefined1 *)((int)this + 0x7890);
    do {
      uVar2 = uVar2 + 6;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x732 + uVar2)))
           = puVar4[-4];
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x733 + uVar2)))
           = *puVar4;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x734 + uVar2)))
           = puVar4[4];
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x735 + uVar2)))
           = puVar4[8];
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x736 + uVar2)))
           = puVar4[0xc];
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x74dc) * 0x770 + *(int *)(iVar1 + 0x34) + 0x737 + uVar2)))
           = puVar4[0x10];
      puVar4 = puVar4 + 0x18;
    } while (uVar2 < 0x18);
  }
  puVar3 = (undefined4 *)F_00424cd0();
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x18))((int *)*puVar3,*(undefined4 *)((int)this + 0x74d8));
  *(undefined4 *)((int)this + 0x74dc) = *(undefined4 *)((int)this + 0x74d8);
  return uVar2;
}

/* ref: FUN_007ccdc0 */
unsigned int F_007ccdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ccdc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  
  if (REFG(int, 0x1370b90) != 0) {
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f4);
    if (param_1 == 2) {
      F_0049c1f0(this,2);
      return 0;
    }
    if (param_1 == 1) {
      F_0049b960(this,param_2,param_3,param_4);
      return 0;
    }
    if (param_1 == 0) {
      F_0049c1f0(this,0);
      F_0049b8f0(this,param_2,param_3);
    }
  }
  return 0;
}

/* ref: FUN_007cce30 */
uint F_007cce30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cce30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3dfc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x193c) = 0;
  *(undefined4 *)((int)this + 0x1940) = 0;
  *(undefined4 *)((int)this + 0x1944) = 0;
  F_00c48350((undefined *)((int)this + 0x1948),0,0x97);
  *(undefined4 *)((int)this + 0x19e0) = 0;
  *(undefined4 *)&REFG(undefined, 0x148a2d8) = 0x153;
  *(undefined4 *)&REFG(undefined, 0x148a328) = 0x166;
  *(undefined4 *)&REFG(undefined, 0x148a2dc) = 0x154;
  *(undefined4 *)&REFG(undefined, 0x148a2e0) = 0x155;
  *(undefined4 *)&REFG(undefined, 0x148a2e8) = 0x156;
  *(undefined4 *)&REFG(undefined, 0x148a310) = 0x160;
  *(undefined4 *)&REFG(undefined, 0x148a2f0) = 0x158;
  *(undefined4 *)&REFG(undefined, 0x148a2f4) = 0x159;
  *(undefined4 *)&REFG(undefined, 0x148a2f8) = 0x15a;
  *(undefined4 *)&REFG(undefined, 0x148a2fc) = 0x15b;
  *(undefined4 *)&REFG(undefined, 0x148a300) = 0x15c;
  *(undefined4 *)&REFG(undefined, 0x148a304) = 0x15d;
  *(undefined4 *)&REFG(undefined, 0x148a308) = 0x15e;
  *(undefined4 *)&REFG(undefined, 0x148a30c) = 0x15f;
  *(undefined4 *)&REFG(undefined, 0x148a324) = 0x165;
  *(undefined4 *)&REFG(undefined, 0x148a320) = 0x164;
  *(undefined4 *)&REFG(undefined, 0x148a354) = 0x16a;
  *(undefined4 *)&REFG(undefined, 0x148a358) = 0x16b;
  *(undefined4 *)&REFG(undefined, 0x148a35c) = 0x16c;
  *(undefined4 *)&REFG(undefined, 0x148a360) = 0x16d;
  *(undefined4 *)&REFG(undefined, 0x148a364) = 0x16e;
  *(undefined4 *)&REFG(undefined, 0x148a368) = 0x16f;
  *(undefined4 *)&REFG(undefined, 0x148a36c) = 0x170;
  *(undefined4 *)&REFG(undefined, 0x148a390) = 0x171;
  *(undefined4 *)&REFG(undefined, 0x148a394) = 0x172;
  *(undefined4 *)&REFG(undefined, 0x148a398) = 0x174;
  *(undefined4 *)&REFG(undefined, 0x148a39c) = 0x175;
  *(undefined4 *)&REFG(undefined, 0x148a3a0) = 0x176;
  *(undefined4 *)&REFG(undefined, 0x148a3c4) = 0x173;
  *(undefined4 *)&REFG(undefined, 0x148a3a8) = 0x178;
  *(undefined4 *)&REFG(undefined, 0x148a3b0) = 0x179;
  *(undefined4 *)&REFG(undefined, 0x148a3b4) = 0x17a;
  *(undefined4 *)&REFG(undefined, 0x148a3b8) = 0x17b;
  *(undefined4 *)&REFG(undefined, 0x148a3bc) = 0x17c;
  *(undefined4 *)&REFG(undefined, 0x148a3a4) = 0x177;
  *(undefined4 *)&REFG(undefined, 0x148a3c0) = 0x177;
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
  return (uint)this;
}

/* ref: FUN_007cd010 */
uint F_007cd010(unsigned int gen_a0)
{
  GEN_ENTER(0x7cd010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 < 0x65) && (0 < *(int *)(&REFG(undefined, 0x148a2b0) + param_1 * 4))) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(int *)(&REFG(undefined, 0x148a2b0) + param_1 * 4))
    ;
    uVar1 = *(uint *)(uVar1 + 0x14);
  }
  return uVar1 | 0xff000000;
}

/* ref: FUN_007cd050 */
uint F_007cd050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cd050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  if (param_1 < 4) {
    this_00 = (undefined *)F_0045ca60(this_00,param_1);
  }
  return (uint)this_00;
}

/* ref: FUN_007cd080 */
unsigned int F_007cd080(unsigned int gen_a0)
{
  GEN_ENTER(0x7cd080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007cd0c0 */
uint F_007cd0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cd0c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ecx_00;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  in_ecx_00 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  puVar3 = (uint *)(in_ecx + 0x20);
  iVar2 = 0x22;
  do {
    uVar1 = puVar3[-2];
    if ((uVar1 < 0x65) && (uVar1 = *(uint *)(&REFG(undefined, 0x148a2b0) + uVar1 * 4), -1 < (int)uVar1)) {
      uVar1 = F_00414500(in_ecx_00,uVar1);
      *puVar3 = *(uint *)(uVar1 + 0x14) & 0xffffff;
    }
    else {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_007cd110 */
byte F_007cd110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7cd110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    *(undefined1 *)((int)this + 0x14) = 1;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    F_0046a630(this_00,*(undefined4 *)((int)this + 0x24c));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return 1;
}

/* ref: FUN_007cd150 */
byte F_007cd150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7cd150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*param_1 & 0xf) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == -1) goto LAB_007cd1b5;
    if (iVar2 < 0) {
      return 0;
    }
    if (1 < iVar2) {
      return 0;
    }
  }
  if ((param_1[8] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = F_00762c60((undefined *)(uVar1 + 0x23538),1,uVar3,0);
  iVar2 = *(int *)((int)this + 0x10) + 2;
  if (uVar1 != *(uint *)((int)this + iVar2 * 0x10)) {
    *(uint *)((int)this + iVar2 * 0x10) = uVar1;
    *(undefined1 *)((int)this + 0x15) = 1;
    F_007690b0(this);
  }
LAB_007cd1b5: ;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 1;
}

/* ref: FUN_007cd1d0 */
uint F_007cd1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cd1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ecx_00;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  
  in_ecx_00 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  puVar3 = (uint *)(in_ecx + 0x20);
  iVar2 = 0x22;
  do {
    puVar1 = (uint *)puVar3[-2];
    if ((puVar1 < (uint *)0x65) &&
       (puVar1 = *(uint * PTR32 *)(&REFG(undefined, 0x148a2b0) + (int)((int)(uintptr_t)puVar1) * 4), -1 < (int)puVar1)) {
      puVar1 = (uint *)F_00414500(in_ecx_00,puVar1);
      *puVar3 = *puVar1 & 0xffffff;
    }
    else {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (uint)puVar1;
}

/* ref: FUN_007cd220 */
byte F_007cd220(unsigned int gen_a0)
{
  GEN_ENTER(0x7cd220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ecx;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  uint * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_8;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  puVar5 = (undefined4 *)((int)this + 0x20);
  local_8 = 0x22;
  do {
    puVar4 = puVar5 + -2;
    iVar3 = 2;
    do {
      uVar1 = *puVar4;
      if (((-1 < (int)uVar1) && (uVar1 < 0x65)) && (-1 < *(int *)(&REFG(undefined, 0x148a2b0) + uVar1 * 4))) {
        uVar6 = *puVar5;
        uVar7 = 1;
        pvVar2 = (undefined *)F_00414500(in_ecx,*(int *)(&REFG(undefined, 0x148a2b0) + uVar1 * 4));
        F_00414a40(pvVar2,uVar6,uVar7);
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = puVar5 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  F_00466080(pvVar2);
  *(undefined1 *)((int)this + 0x15) = 0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  iVar3 = 0;
  do {
    F_0045ca60(pvVar2,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  F_007690b0(this);
  return 1;
}

/* ref: FUN_007cd2d0 */
uint F_007cd2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cd2d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char * pcVar5;
  uint uVar6;
  undefined * PTR32 * ppuVar7;
  
  pcVar5 = (*(char * PTR32 *)&gen_args[1]);
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
  iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150)));
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  if (iVar3 != 0) {
    pcVar1 = (*(char * PTR32 *)&gen_args[1]) + iVar3 * 2;
    (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[1]), 1, 3),*pcVar1)));
    if (*pcVar1 == '\0') {
      ppuVar7 = &REFG(undefined * PTR32, 0x12fd328);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),pcVar5[iVar3 * 2 + 1]);
      ppuVar7 = (undefined * PTR32 *)F_00769260((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x8)),(*(char * PTR32 *)&gen_args[1]));
    }
    uVar6 = F_0042ccf0(((undefined *)GEN_TOP(((iVar4 * 3 + 2) * 0x54 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)))))),ppuVar7);
    return uVar6;
  }
  cVar2 = *(*(char * PTR32 *)&gen_args[1]);
  (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[1]), 1, 3),cVar2)));
  if (cVar2 != '\0') {
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),pcVar5[1]);
    uVar6 = F_00769260((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x8)),(*(char * PTR32 *)&gen_args[1]));
    uVar6 = F_0042ccf0(((undefined *)GEN_TOP(((iVar4 * 3 + 1) * 0x54 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)))))),uVar6);
    return uVar6;
  }
  uVar6 = F_0042ccf0(((undefined *)GEN_TOP(((iVar4 * 3 + 1) * 0x54 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)))))),
                       &REFG(undefined * PTR32, 0x12fd328));
  return uVar6;
}

/* ref: FUN_007cd380 */
uint F_007cd380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cd380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int in_ecx;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3e44));
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  in_ecx = (int)this + 0x84;
  iVar1 = 0xd;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00c48350((undefined *)((int)this + 0x14),0,0x38);
  F_00c48350((undefined *)((int)this + 0x4c),0,0x38);
  return (uint)this;
}

/* ref: FUN_007cd3e0 */
uint F_007cd3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cd3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3e44));
  this_00 = (undefined *)((int)this + 0x51c);
  iVar3 = 0xd;
  do {
    this_00 = (undefined *)((int)this_00 + -0x54);
    uVar4 = F_0042c880(this_00);
    uVar2 = (uint)uVar4;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007cd440 */
uint F_007cd440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7cd440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 * puVar4;
  
  this_00 = (undefined *)(param_1 + 0x80 + param_2 * 8);
  puVar4 = (undefined4 *)((int)this + 0x4c);
  param_2 = 0xe;
  do {
    uVar2 = *puVar4;
    F_005a2710(this_00,3);
    *(undefined4 *)((int)this_00 + 4) = uVar2;
    puVar4 = puVar4 + 1;
    this_00 = (undefined *)((int)this_00 + 8);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  cVar1 = *(char *)((int)this + 0xc);
  uVar3 = F_005a2710((undefined *)(param_1 + 8),4);
  *(uint *)(param_1 + 0xc) = (uint)(cVar1 != '\0');
  return uVar3;
}

/* ref: FUN_007cd4a0 */
unsigned int F_007cd4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cd4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  undefined4 uVar6;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar6 = 0;
    uVar1 = F_00404270();
    piVar2 = (int *)F_00406c00(0xf4,0,uVar1,uVar6);
    if (piVar2 != (int *)0x0) {
      piVar5 = piVar2 + 1;
      *piVar2 = 0x1e;
      iVar4 = 0x1d;
      piVar3 = piVar5;
      do {
        *piVar3 = 0;
        piVar3 = piVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      if (piVar5 != (int *)0x0) {
        F_005a2710(piVar5,3);
        piVar2[2] = 0;
        F_007cd440(this,piVar5,0);
        piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x1e,piVar5);
        iVar4 = *piVar2;
        piVar5 = piVar5 + iVar4 * 2;
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
          piVar5 = piVar5 + -2;
          F_005a2670(piVar5);
        }
        F_00406b30(piVar2);
      }
    }
  }
  return 0;
}

/* ref: FUN_007cd570 */
unsigned int F_007cd570(unsigned int gen_a0)
{
  GEN_ENTER(0x7cd570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  iVar6 = 0;
  piVar4 = (int *)((int)this + 0x4c);
  do {
    uVar1 = F_00447ed0(this_00,iVar6);
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar5 = *(int *)((int)&REFG(undefined4, 0x10bfb4c) + uVar3) + iVar2;
      if ((int)uVar1 < iVar5) {
        iVar2 = uVar1 - iVar2;
        goto LAB_007cd5b8;
      }
      uVar3 = uVar3 + 4;
      iVar2 = iVar5;
    } while (uVar3 < 0x14);
    iVar2 = 0;
LAB_007cd5b8: ;
    *piVar4 = iVar2;
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 1;
    if (0xd < iVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_007cd5d0 */
uint F_007cd5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cd5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  iVar6 = 0;
  piVar4 = (int *)((int)this + 0x4c);
  do {
    uVar1 = F_0043d160(iVar6);
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar5 = *(int *)((int)&REFG(undefined4, 0x10bfb4c) + uVar3) + iVar2;
      if ((int)uVar1 < iVar5) {
        iVar2 = uVar1 - iVar2;
        goto LAB_007cd618;
      }
      uVar3 = uVar3 + 4;
      iVar2 = iVar5;
    } while (uVar3 < 0x14);
    iVar2 = 0;
LAB_007cd618: ;
    *piVar4 = iVar2;
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 1;
    if (0xd < iVar6) {
      *(undefined1 *)((int)this + 0xc) = 1;
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_007cd640 */
uint F_007cd640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cd640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  in_ecx[1] = param_2;
  *(undefined2 *)(in_ecx + 3) = 1;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d3e8c));
  *(undefined1 *)((int)in_ecx + 0xe) = 0x1f;
  puVar1 = in_ecx + 4;
  iVar2 = 0x27;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  in_ecx[0x81] = 0;
  in_ecx[0x82] = 0;
  in_ecx[0x83] = 0;
  F_0042b630(in_ecx + 0x84);
  in_ecx[0x9a] = 0;
  in_ecx[0x9b] = 0;
  in_ecx[0x9d] = 0;
  in_ecx[0x9c] = 0xe0000000;
  puVar1 = in_ecx + 0x9e;
  iVar2 = 7;
  do {
    F_0042b630(puVar1);
    puVar1 = puVar1 + 0x15;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  in_ecx[0x146] = 0;
  in_ecx[0x147] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007cd730 */
uint F_007cd730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7cd730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  short sVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  int * this_00;
  int * piVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined * local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  uVar12 = 5;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  pvVar6 = (undefined *)F_00435440(uVar5,uVar12);
  if (pvVar6 != (undefined *)0x0) {
    uVar12 = 1;
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
    bVar4 = F_00437cb0(pvVar6,uVar5,uVar12);
    if (bVar4 == 0) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 8;
      sVar2 = *(short *)((int)this + 0xc);
      uVar13 = 0;
      *(short *)((int)this + 0xc) = sVar2 + 1;
      uVar10 = 0;
      pvVar6 = (undefined *)((int)this + sVar2 * 8 + 0x10);
      uVar12 = 0x3d;
      pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar5 = F_0043bd00(pvVar7,uVar12,uVar10,uVar13);
      F_005a2710(pvVar6,6);
      *(uint *)((int)pvVar6 + 4) = uVar5;
    }
  }
  uVar12 = 2;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (int *)F_00435440(uVar5,uVar12);
  uVar9 = 0;
  uVar5 = ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00);
  if (uVar5 != 0) {
    local_8 = (undefined *)((int)this + 0x278);
    do {
      piVar8 = (int *)F_00439130(this_00,uVar9);
      if (((piVar8 != (int *)0x0) && (*piVar8 != 0 || piVar8[1] != 0)) &&
         ((piVar8[4] & 0x700U) < 0x201)) {
        *((char *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = (char)uVar9 + '\t';
        piVar3 = *(int * PTR32 *)((int)this + 4);
        uVar5 = F_00439390(this_00,*piVar8,piVar8[1]);
        iVar11 = uVar9 + 1;
        uVar12 = 0xae;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
        uVar5 = F_00461060(pvVar6,uVar12,iVar11,uVar5);
        F_0042e430(local_8,uVar5);
        pvVar6 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
        *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
        uVar5 = F_0042a990(local_8);
        F_005a2710(pvVar6,6);
        *(uint *)((int)pvVar6 + 4) = uVar5;
      }
      local_8 = (undefined *)((int)local_8 + 0x54);
      uVar9 = uVar9 + 1;
      uVar5 = ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00);
    } while (uVar9 < uVar5);
  }
  if ((char)param_1[0x59b] == '\0') {
    F_00769940(this);
  }
  else {
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x19;
    sVar2 = *(short *)((int)this + 0xc);
    uVar13 = 0;
    *(short *)((int)this + 0xc) = sVar2 + 1;
    uVar10 = 0;
    pvVar6 = (undefined *)((int)this + sVar2 * 8 + 0x10);
    uVar12 = 0xaf7;
    pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = F_0043bd00(pvVar7,uVar12,uVar10,uVar13);
    F_005a2710(pvVar6,6);
    *(uint *)((int)pvVar6 + 4) = uVar5;
  }
  sVar2 = *(short *)((int)this + 0xc);
  if ((char)param_2 == '\0') {
    *(short *)((int)this + 0xc) = sVar1;
  }
  return (int)sVar2 - (int)sVar1;
}

/* ref: FUN_007cddd0 */
uint F_007cddd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cddd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d3ed4));
  in_ecx[4] = 0xe0000000;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  *(undefined2 *)((int)in_ecx + 0x1d) = 0x101;
  return (uint)in_ecx;
}

/* ref: FUN_007cde00 */
uint F_007cde00(unsigned int gen_a0)
{
  GEN_ENTER(0x7cde00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0);
  piVar1 = *(int * PTR32 *)(REFG(int, 0x137104c) + 0x20);
  if ((uVar2 != 0) && (piVar1 != (int *)0x0)) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
    uVar3 = (uint)((char)uVar3 != '\0');
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x30))) != uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x30))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar3 = (uint)(*(char *)((int)this + 0x1d) != '\0');
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x34))) != uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x34))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar3 = (uint)(*(char *)((int)this + 0x1e) != '\0');
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x38))) != uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x38))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x3c))) != *(int *)((int)this + 0x18)) {
      *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x3c))) = *(int *)((int)this + 0x18);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*(int *)((int)this + 8) == 0) {
      uVar4 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = F_007c8b20(this_00,uVar4);
      *(uint *)((int)this + 8) = uVar2;
    }
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 8),0,0);
  }
  return uVar2;
}

/* ref: FUN_007cded0 */
uint F_007cded0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cded0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3f1c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  puVar1 = (undefined4 *)((int)this + 0x14);
  iVar2 = 0x2f;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x244) = 9999;
  *(undefined4 *)((int)this + 0x254) = 9999;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  return (uint)this;
}

/* ref: FUN_007cdf80 */
uint F_007cdf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7cdf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined * this_00;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  *(undefined4 *)((int)this + 0x240) = param_4;
  *(undefined4 *)((int)this + 0x24c) = param_3;
  *(undefined4 *)((int)this + 0x244) = param_1;
  *(undefined4 *)((int)this + 0x248) = param_2;
  pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_1);
  this_00 = (undefined *)0x0;
  (*(byte *)(gen_frame + 0x1f)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (pvVar5 != (undefined *)0x0) {
    this_00 = (undefined *)F_00a37da0(pvVar5,param_2);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
    if (this_00 != (undefined *)0x0) {
      if (*(char *)((int)this_00 + 6) == '\0') {
        uVar6 = *(uint *)((int)this_00 + 8);
        if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
          uVar6 = uVar6 + 1000000;
        }
      }
      else {
        pvVar5 = (undefined *)F_00a3a860(this_00);
        uVar6 = F_0046e5e0(pvVar5);
      }
      bVar2 = F_00a37790(uVar6);
      (*(byte *)(gen_frame + 0x1f)) = bVar2;
      if (bVar2 == 0) {
        uVar6 = F_0046e5e0(this_00);
        uVar6 = F_00ab24a0(uVar6);
        (*(uint *)(gen_frame + 0xc)) = uVar6;
      }
      else {
        uVar6 = F_0046e5e0(this_00);
        uVar6 = F_00ab2510(uVar6);
        (*(uint *)(gen_frame + 0x18)) = uVar6;
      }
      uVar6 = F_00a37c50(this_00);
      if ((uVar6 != 0) ||
         ((*(char *)((int)this_00 + 6) == '\0' && (*(int *)((int)this_00 + 8) == 0)))) {
        uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar6;
      }
    }
  }
  *(undefined * PTR32 *)((int)this + 0x250) = this_00;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  iVar9 = 0;
  do {
    if (((*(byte *)(gen_frame + 0x1f)) == 0) || (3 < iVar9)) {
      if ((*(int * PTR32 *)((int)this + 0x250) != (int *)0x0) && (0 < iVar9)) {
        if (iVar9 < 4) {
          iVar1 = **(int * PTR32 *)((int)this + 0x250);
          if ((999 < iVar1) && (iVar1 < 0x3e9)) goto LAB_007ce176;
        }
        else if (iVar9 == 4) {
          F_0071d3c0(((undefined1 *)(gen_frame + 0x20)));
          bVar2 = F_00a3bef0(*(undefined * PTR32 *)((int)this + 0x250));
          (*(byte *)(gen_frame + 0x14)) = bVar2;
          F_00a3bd60(((undefined1 *)(gen_frame + 0x20)),*(undefined4 *)((int)this + 0x250));
          (*(byte *)(gen_frame + 0x60)) = (*(byte *)(gen_frame + 0x14));
          (*(undefined1 *)(gen_frame + 0x61)) = 0;
          (*(undefined4 *)(gen_frame + 0x64)) = 0;
          bVar2 = F_00b9fb30(&REFG(undefined, 0x14b0f2c),((undefined1 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x4)));
          if (bVar2 == 5) goto LAB_007ce176;
        }
      }
      if (*((int *)GEN_TOP(((int)this + (iVar9 + 0x1b) * 0x10 + 4))) != 0) {
        uVar10 = *((undefined4 *)GEN_TOP(((int)this + (iVar9 + 0x1b) * 0x10)));
        *((char *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) + 0x194))) = (char)iVar9;
        uVar12 = 0;
        uVar11 = 0;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar6 = F_0043bd00(pvVar5,uVar10,uVar11,uVar12);
        (*(uint *)(gen_frame + 0x10)) = uVar6;
        pvVar5 = ((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 8 + 0x14)));
        F_005a2710(pvVar5,6);
        *(uint *)((int)pvVar5 + 4) = (*(uint *)(gen_frame + 0x10));
        iVar1 = *(int *)((int)this + 0x10);
        if (0 < iVar1) {
          *(uint *)((int)this + 0x1ac) =
               *(uint *)((int)this + 0x1ac) & ~(1 << ((char)iVar1 - 1U & 0x1f));
        }
        *(int *)((int)this + 0x10) = iVar1 + 1;
      }
    }
LAB_007ce176: ;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
  bVar2 = F_00a366d0(*(undefined4 *)((int)this + 0x244));
  uVar6 = (*(uint *)(gen_frame + 0xc));
  if (bVar2 == 0) {
    bVar2 = F_00a366f0(*(undefined4 *)((int)this + 0x244));
    uVar6 = (*(uint *)(gen_frame + 0x18));
    if (bVar2 != 0) {
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
      (*(uint *)(gen_frame + 0x10)) = *(uint *)(uVar6 + 0xe8);
      if (*(int *)((int)this + 0x224) != 0) {
        uVar10 = *(undefined4 *)((int)this + 0x220);
        *((undefined1 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) + 0x194))) = 7;
        uVar12 = 0;
        uVar11 = 0;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar6 = F_0043bd00(pvVar5,uVar10,uVar11,uVar12);
        pvVar5 = ((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 8 + 0x14)));
        F_005a2710(pvVar5,6);
        *(uint *)((int)pvVar5 + 4) = uVar6;
        iVar9 = *(int *)((int)this + 0x10);
        if (0 < iVar9) {
          *(uint *)((int)this + 0x1ac) =
               *(uint *)((int)this + 0x1ac) & ~(1 << ((char)iVar9 - 1U & 0x1f));
        }
        *(int *)((int)this + 0x10) = iVar9 + 1;
      }
      if ((*(int *)((int)this + 0x234) != 0) && ((*(uint *)(gen_frame + 0x10)) != 0)) {
        F_0076a3e0(this,8,*(undefined4 *)((int)this + 0x230),
                     (uint)(*(int *)((*(uint *)(gen_frame + 0x10)) + 0x19b0) != 0));
      }
      uVar6 = F_00a3a8a0(*(undefined * PTR32 *)((int)this + 0x250));
      if ((1 < uVar6) && (bVar2 = F_00a367c0(*(undefined4 *)((int)this + 0x244)), bVar2 == 0)) {
        *((undefined1 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) + 0x194))) = 0xb;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0x5c;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar6 = F_0043bd00(pvVar5,uVar10,uVar11,uVar12);
        pvVar5 = ((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 8 + 0x14)));
        F_005a2710(pvVar5,6);
        *(uint *)((int)pvVar5 + 4) = uVar6;
        iVar9 = *(int *)((int)this + 0x10);
        if (0 < iVar9) {
          *(uint *)((int)this + 0x1ac) =
               *(uint *)((int)this + 0x1ac) & ~(1 << ((char)iVar9 - 1U & 0x1f));
        }
        *(int *)((int)this + 0x10) = iVar9 + 1;
      }
      goto LAB_007ce788;
    }
    if ((*(byte *)(gen_frame + 0x1f)) == 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x18)) = uVar6 & 0xffffff00;
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
      if ((*(int *)((int)this + 0x234) != 0) && (*(int *)(uVar6 + 0xe8) != 0)) {
        F_0076a3e0(this,8,*(undefined4 *)((int)this + 0x230),
                     (uint)(*((int *)GEN_TOP((*(int *)(uVar6 + 0xe8) + 0x19b0))) != 0));
      }
      if (*(int *)((int)this + 0x214) != 0) {
        uVar10 = *(undefined4 *)((int)this + 0x210);
        *((undefined1 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) + 0x194))) = 6;
        uVar12 = 0;
        uVar11 = 0;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar6 = F_0043bd00(pvVar5,uVar10,uVar11,uVar12);
        pvVar5 = ((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 8 + 0x14)));
        F_005a2710(pvVar5,6);
        *(uint *)((int)pvVar5 + 4) = uVar6;
        iVar9 = *(int *)((int)this + 0x10);
        if (0 < iVar9) {
          *(uint *)((int)this + 0x1ac) =
               *(uint *)((int)this + 0x1ac) & ~(1 << ((char)iVar9 - 1U & 0x1f));
        }
        *(int *)((int)this + 0x10) = iVar9 + 1;
        bVar2 = F_004351c0();
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = bVar2 == 0;
        (*(uint *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x18)), 1, 3),bVar2 == 0);
      }
      uVar6 = (*(uint *)(gen_frame + 0xc));
      if (((*(uint *)(gen_frame + 0xc)) != 0) && (*(short *)((*(uint *)(gen_frame + 0xc)) + 0x90) != 0)) {
        F_0076a3e0(this,10,0x5a,(*(uint *)(gen_frame + 0x18)));
      }
      (*(uint *)(gen_frame + 0x10)) = REFG(int, 0x14a4258) - 1000;
      if (uVar6 != 0) {
        if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 6) == '\0') {
          uVar7 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8);
          if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14) & 1) != 0) {
            uVar7 = uVar7 + 1000000;
          }
        }
        else {
          pvVar5 = (undefined *)F_00a3a860((*(undefined * PTR32 *)(gen_frame + 0x8)));
          uVar7 = F_0046e5e0(pvVar5);
        }
        uVar8 = F_00ab25a0((uint)*(byte *)(uVar6 + 0xa6));
        if (uVar8 != 0) {
          iVar9 = 0;
          do {
            if ('\0' < *(char *)(iVar9 + 4 + uVar8)) goto LAB_007ce634;
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0xe);
        }
        iVar9 = -1;
LAB_007ce634: ;
        uVar7 = F_00a3ef50((*(uint *)(gen_frame + 0x10)),iVar9,uVar7);
        if (uVar7 == 0) {
          F_0076a3e0(this,9,0x60,0);
        }
      }
      uVar7 = F_00a3a8a0(*(undefined * PTR32 *)((int)this + 0x250));
      if ((1 < uVar7) && (*(int *)((int)this + 0x244) != 0x7d1)) {
        F_0076a3e0(this,0xb,0x5c,0);
      }
      if (uVar6 != 0) {
        if (0 < *(int *)(uVar6 + 0x74)) {
          F_0076a3e0(this,0x10,0x6b,(*(uint *)(gen_frame + 0x18)));
        }
        if (*(char *)(uVar6 + 0xa6) != '\0') {
          if ((-1 < *(int *)((int)this + 0x244)) && (*(int *)((int)this + 0x244) < 4)) {
            F_0076a3e0(this,0x15,0x56b,0);
          }
          iVar9 = *(int *)((int)this + 0x244);
          if ((iVar9 == 0xdac) || ((0xc7f < iVar9 && (iVar9 < 0xd49)))) {
            F_0076a3e0(this,0x16,0x56c,0);
          }
        }
      }
      F_0076a460(this,uVar6,*(undefined4 *)((int)this + 0x250));
      F_0076a4e0(this,uVar6,*(undefined4 *)((int)this + 0x250));
      if (uVar6 != 0) {
        if ((REFG(undefined1, 0x14b4ec1) & 0x40) != 0) {
          if (*(char *)(uVar6 + 0xba) == '\0') {
            if (*(char *)(uVar6 + 0xa0) != '\x0f') goto LAB_007ce73f;
            uVar10 = 0x14;
          }
          else {
            uVar10 = 0x13;
          }
          F_0076a3e0(this,uVar10,0x1257,0);
        }
LAB_007ce73f: ;
        F_0076a3e0(this,0xd,0x5b,(uint)*(byte *)(uVar6 + 0xbd));
      }
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
      if ((*(byte *)(uVar6 + 0x2c24c) & 2) == 0) goto LAB_007ce788;
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4),8);
      cVar3 = (char)uVar6;
    }
    else {
      if (*(short *)((*(uint *)(gen_frame + 0x18)) + 0x1e) != 0) {
        *((undefined1 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) + 0x194))) = 10;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0x5a;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar6 = F_0043bd00(pvVar5,uVar10,uVar11,uVar12);
        pvVar5 = ((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 8 + 0x14)));
        F_005a2710(pvVar5,6);
        *(uint *)((int)pvVar5 + 4) = uVar6;
        iVar9 = *(int *)((int)this + 0x10);
        if (0 < iVar9) {
          *(uint *)((int)this + 0x1ac) =
               *(uint *)((int)this + 0x1ac) & ~(1 << ((char)iVar9 - 1U & 0x1f));
        }
        *(int *)((int)this + 0x10) = iVar9 + 1;
      }
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
      if ((*(byte *)(uVar6 + 0x2c24c) & 2) == 0) goto LAB_007ce788;
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4),8);
      cVar3 = (char)uVar6;
    }
    uVar6 = (uint)(cVar3 == '\0');
    uVar11 = 0xce7;
    uVar10 = 0x17;
  }
  else {
    if ((*(uint *)(gen_frame + 0xc)) == 0) goto LAB_007ce788;
    if (*(byte *)((*(uint *)(gen_frame + 0xc)) + 0xa6) != 0) {
      uVar7 = F_00ab25a0((uint)*(byte *)((*(uint *)(gen_frame + 0xc)) + 0xa6));
      if (uVar7 != 0) {
        iVar9 = 0;
        do {
          if ('\0' < *(char *)(uVar7 + 4 + iVar9)) {
            if (iVar9 == 0) goto LAB_007ce22c;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0xe);
      }
      *((undefined1 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) + 0x194))) = 0xf;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0x59;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar6 = F_0043bd00(pvVar5,uVar10,uVar11,uVar12);
      pvVar5 = ((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 8 + 0x14)));
      F_005a2710(pvVar5,6);
      *(uint *)((int)pvVar5 + 4) = uVar6;
      iVar9 = *(int *)((int)this + 0x10);
      if (0 < iVar9) {
        *(uint *)((int)this + 0x1ac) =
             *(uint *)((int)this + 0x1ac) & ~(1 << ((char)iVar9 - 1U & 0x1f));
      }
      *(int *)((int)this + 0x10) = iVar9 + 1;
      uVar6 = (*(uint *)(gen_frame + 0xc));
    }
LAB_007ce22c: ;
    if (0 < *(int *)(uVar6 + 0x74)) {
      *((undefined1 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) + 0x194))) = 0x10;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0x6b;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar6 = F_0043bd00(pvVar5,uVar10,uVar11,uVar12);
      pvVar5 = ((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 8 + 0x14)));
      F_005a2710(pvVar5,6);
      *(uint *)((int)pvVar5 + 4) = uVar6;
      iVar9 = *(int *)((int)this + 0x10);
      if (0 < iVar9) {
        *(uint *)((int)this + 0x1ac) =
             *(uint *)((int)this + 0x1ac) & ~(1 << ((char)iVar9 - 1U & 0x1f));
      }
      *(int *)((int)this + 0x10) = iVar9 + 1;
      uVar6 = (*(uint *)(gen_frame + 0xc));
    }
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x250) + 4))) != 0) {
      F_0076a460(this,uVar6,*(int *)((int)this + 0x250));
    }
    pvVar5 = *(undefined * PTR32 *)((int)this + 0x250);
    if (((pvVar5 != (undefined *)0x0) && (*(char *)(uVar6 + 0xa5) != '\0')) && ((REFG(undefined1, 0x14b4ec1) & 8) != 0))
    {
      bVar2 = F_00a3bef0(pvVar5);
      if (bVar2 < 5) {
        uVar4 = F_0071d2c0(pvVar5,0);
        uVar7 = (*(uint *)(gen_frame + 0x18));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x18)) = uVar7 & 0xffffff00;
        if (uVar4 == 1) goto LAB_007ce2d9;
      }
      else {
LAB_007ce2d9: ;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = 1;
        (*(uint *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x18)), 1, 3),1);
      }
      F_0076a3e0(this,0x12,0x1154,(*(uint *)(gen_frame + 0x18)));
    }
    if ((REFG(undefined1, 0x14b4ec1) & 0x40) == 0) goto LAB_007ce788;
    if (*(char *)(uVar6 + 0xba) == '\0') {
      if (*(char *)(uVar6 + 0xa0) != '\x0f') goto LAB_007ce788;
      uVar6 = 0;
      uVar11 = 0x1257;
      uVar10 = 0x14;
    }
    else {
      uVar6 = 0;
      uVar11 = 0x1257;
      uVar10 = 0x13;
    }
  }
  F_0076a3e0(this,uVar10,uVar11,uVar6);
LAB_007ce788: ;
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar6;
}

/* ref: Client::UI2::Agent::AgentInventoryContext::vf3 */
unsigned int F_007ce7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ce7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 0x254),(uint)*(ushort *)(this + 600));
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007ce820 */
uint F_007ce820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ce820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d3f64));
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf13 */
unsigned int F_007ce850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ce850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    *(undefined2 *)(in_ecx + 0xc) = 0x101;
    *(undefined4 *)(in_ecx + 0x14) = 0xffffffff;
    *(undefined4 *)(in_ecx + 0x18) = 0xffffffff;
    *(undefined4 *)(in_ecx + 0x1c) = 0xffffffff;
    *(undefined4 *)(in_ecx + 0x20) = 0xffffffff;
    *(undefined1 *)(in_ecx + 0x24) = 0;
    *(undefined4 *)(in_ecx + 0x10) = 0xffffffff;
    F_0042aca0(in_ecx + 0x55c);
    F_0042aca0(in_ecx + 0x5b0);
    F_0042aca0(in_ecx + 0x604);
  }
  return 0;
}

/* ref: FUN_007ce8a0 */
byte F_007ce8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ce8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar1 = F_007c9ad0((int)this + 0x5b0,(int)this + 0x604,(int)this + 0x10,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  bVar2 = *(uint *)((int)this + 0x18) != uVar1;
  if (bVar2) {
    *(uint *)((int)this + 0x18) = uVar1;
    *(undefined4 *)((int)this + 0x2c) = 10;
  }
  bVar3 = *(undefined * PTR32 *)((int)this + 0x14) != (*(undefined * PTR32 *)(gen_frame + 0x8));
  if (bVar3) {
    *(undefined * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  if ((*(char *)((int)this + 0xc) == '\0') && (*(char *)((int)this + 0xd) == '\0')) {
    return bVar3 || bVar2;
  }
  *(undefined2 *)((int)this + 0xc) = 0;
  return 1;
}

/* ref: FUN_007ce910 */
uint F_007ce910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ce910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3fac));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xe;
  puVar1 = (undefined4 *)((int)this + 0x24);
  param_1 = 0x144;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  puVar1 = (undefined4 *)((int)this + 0x842c);
  iVar2 = 0x144;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 7;
    *(undefined1 *)((int)puVar1 + 5) = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined1 *)((int)this + 0x8e54) = 0;
  return (uint)this;
}

/* ref: FUN_007ce9a0 */
uint F_007ce9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ce9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3fac));
  iVar3 = 0x144;
  puVar4 = (undefined4 *)((int)this + 0x842c);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 + -0x19);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007cea10 */
unsigned int F_007cea10(unsigned int gen_a0)
{
  GEN_ENTER(0x7cea10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0076a8b0(this);
  F_0076ab00(this);
  return 0;
}

/* ref: FUN_007cea20 */
byte F_007cea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cea20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(byte *)((*(int *)&gen_args[1]) + 8) & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((*(int *)&gen_args[1]) + 0xc);
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x270f;
  (*(int *)&gen_args[1]) = 0;
  uVar4 = F_00434e60(uVar1);
  bVar3 = F_007c9670(uVar4,uVar6,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
  if (bVar3 != 0) {
    if ((((*(int *)&gen_args[1]) == 0xb) || (iVar5 = (*(int *)&gen_args[1]), (*(int *)&gen_args[1]) == 0xc)) &&
       ((iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))), iVar2 == 0xb || (iVar5 = (*(int *)&gen_args[1]), iVar2 == 0xc)))) {
      iVar5 = iVar2;
    }
    F_00a47f70(&REFG(undefined, 0x14a4230),uVar4,uVar6,(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar5,1);
    F_0043f8b0(1);
  }
  F_0076a8b0((*(undefined * PTR32 *)&gen_args[0]));
  return 1;
}

/* ref: FUN_007ceac0 */
byte F_007ceac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ceac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar2 = F_00434e60(*(undefined4 *)((int)this + 0x10));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar3 + 0x78);
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 4))))(iVar1 + 0xc,uVar4,uVar2,0,0);
  }
  return 0;
}

/* ref: FUN_007ceb20 */
byte F_007ceb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ceb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar2 = F_00434e60(*(undefined4 *)((int)this + 0x10));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar3 + 0xdc);
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 4))))(iVar1 + 0xc,uVar4,uVar2,0,0);
  }
  return 0;
}

/* ref: FUN_007ceb80 */
byte F_007ceb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ceb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar2 = F_00434e60(*(undefined4 *)((int)this + 0x10));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar3 + 0xe8);
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 4))))(iVar1 + 0xc,uVar4,uVar2,0,1);
  }
  return 0;
}

/* ref: FUN_007cebe0 */
byte F_007cebe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cebe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar2 = F_00434e60(*(undefined4 *)((int)this + 0x10));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar3 + 0xe8);
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 4))))(iVar1 + 0xc,uVar4,uVar2,0,2);
  }
  return 0;
}

/* ref: FUN_007cec40 */
byte F_007cec40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cec40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar2 = F_00434e60(*(undefined4 *)((int)this + 0x10));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar3 + 0x80);
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 4))))(iVar1 + 0x10,uVar4,uVar2,0,0);
  }
  return 0;
}

/* ref: FUN_007ceca0 */
byte F_007ceca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ceca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar2 = F_00434e60(*(undefined4 *)((int)this + 0x10));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar3 + 0x120);
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 4))))(iVar1 + 0xc,uVar4,uVar2,0,0);
  }
  return 0;
}

/* ref: FUN_007ced00 */
uint F_007ced00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ced00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x28);
  if ((piVar1 != (int *)0x0) &&
     ((uVar2 = piVar1[0x90], uVar2 == *(uint *)((int)this + 8) || ((char)param_1 != '\0')))) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_007ced40 */
unsigned int F_007ced40(unsigned int gen_a0)
{
  GEN_ENTER(0x7ced40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  int local_14;
  int local_c;
  
  piVar6 = (int *)((int)this + 0x24);
  local_14 = 0;
  local_c = 0;
  do {
    uVar3 = F_00434e60(local_14);
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar3);
    if (this_00 != (undefined *)0x0) {
      iVar2 = *(int *)((int)this_00 + 0xc);
      iVar8 = 0;
      piVar7 = piVar6;
      if (0 < iVar2) {
        do {
          if (0x18 < iVar8) break;
          this_01 = (undefined *)F_00a37da0(this_00,iVar8);
          if (this_01 == (undefined *)0x0) {
LAB_007cee38: ;
            ((code *)*(gen_code32 *)(*piVar7 + 4))(piVar7);
            puVar1 = ((undefined4 *)GEN_TOP(((int)this + (local_c + iVar8) * 8 + 0x842c)));
            *puVar1 = 0;
            *(undefined2 *)(puVar1 + 1) = 7;
          }
          else {
            if (*(char *)((int)this_01 + 6) == '\0') {
              if (*(int *)((int)this_01 + 8) == 0) goto LAB_007cee38;
              uVar4 = *(uint *)((int)this_01 + 8);
              if ((*(byte *)((int)this_01 + 0x14) & 1) != 0) {
                uVar4 = uVar4 + 1000000;
              }
            }
            else {
              this_02 = (undefined *)F_00a3a860(this_01);
              uVar4 = F_0046e5e0(this_02);
            }
            if (piVar7[0x16] != uVar4) {
              ((code *)*(gen_code32 *)(*piVar7 + 4))(piVar7);
              uVar5 = F_00ab24a0(uVar4);
              if (uVar5 != 0) {
                ((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7,uVar4,uVar5);
              }
            }
            if (*(int *)((int)this + 8) != 0) {
              F_0076ace0(this,(int)this + (local_c + iVar8) * 8 + 0x842c,uVar4,uVar3,iVar8,this_01
                          );
            }
          }
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 0x1a;
        } while (iVar8 < iVar2);
      }
    }
    local_14 = local_14 + 1;
    local_c = local_c + 0x19;
    piVar6 = piVar6 + 0x28a;
    if (0x144 < local_c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_007ceea0 */
uint F_007ceea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ceea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int in_ecx;
  undefined4 * puVar1;
  int local_8;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3ffc));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d3ff0));
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0042b630((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  in_ecx = (int)this + 0x78;
  local_8 = 7;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x338) = 4;
  *(undefined2 *)((int)this + 0x33c) = 0;
  ((code *)*(gen_code32 *)(*param_1 + 0x3c))(param_1);
  F_0043cfd0(puVar1);
  return (uint)this;
}

/* ref: FUN_007cef30 */
uint F_007cef30(unsigned int gen_a0)
{
  GEN_ENTER(0x7cef30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  ulonglong uVar4;
  undefined4 * puVar5;
  int local_8;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3ffc));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d3ff0));
  puVar5 = puVar1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  F_0043cff0(puVar5);
  this_00 = (undefined *)((int)this + 0x318);
  local_8 = 7;
  do {
    this_00 = (undefined *)((int)this_00 + -0x54);
    F_0042c880(this_00);
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  uVar4 = F_0042c880((undefined *)((int)this + 0x1c));
  uVar2 = (uint)uVar4;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar2 = F_00414620(*(undefined * PTR32 *)((int)this + 0x14),puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentChatLog::vf5 */
uint F_007cefe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cefe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  uint * puVar7;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar2;
  if (*(int *)(this + 8) == 0) goto LAB_007cf17e;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x20))))(*(int * PTR32 *)(this + 4));
  uVar3 = F_0043d880(uVar2);
  if (*(uint *)(this + 0x18) == uVar3) {
    uVar2 = uVar3;
    if (uVar3 == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x20))))(*(int * PTR32 *)(this + 4));
      uVar2 = F_0043d8f0(uVar2);
      bVar1 = F_0042b6f0(this + 0x1c,uVar2);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) goto LAB_007cf043;
    }
  }
  else {
LAB_007cf043: ;
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    iVar6 = 0x16;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 2;
    uVar2 = F_0076ae50(this);
    F_005a2710(((undefined1 *)(gen_frame + 0x8)),6);
    (*(uint *)(gen_frame + 0xc)) = uVar2;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)(this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    *(uint *)(this + 0x18) = uVar3;
    puVar7 = &(*(uint *)(gen_frame + 0xb8));
    iVar6 = 0x16;
    do {
      puVar7 = puVar7 + -2;
      uVar2 = F_005a2670(puVar7);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  if (this[0x33d] != (undefined1)0x0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    piVar4 = *(int * PTR32 *)(uVar2 + 0x24);
    if (((piVar4 != (int *)0x0) &&
        (uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4), (char)uVar2 == '\0')) &&
       (uVar2 = piVar4[0x82], uVar2 == *(uint *)(this + 8))) {
      this[0x33d] = (undefined1)0x0;
      puVar5 = ((undefined4 *)(gen_frame + 0x0));
      iVar6 = 0x16;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 8;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)(this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      puVar7 = &(*(uint *)(gen_frame + 0xb8));
      iVar6 = 0x16;
      do {
        puVar7 = puVar7 + -2;
        uVar2 = F_005a2670(puVar7);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
  }
LAB_007cf17e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar2;
}

/* ref: FUN_007cf190 */
uint F_007cf190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7cf190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)this + 8) != 0) {
    puVar1 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 3;
    uVar2 = F_0042a990(param_2);
    F_005a2710(((undefined1 *)(gen_frame + 0xa0)),6);
    (*(uint *)(gen_frame + 0xa4)) = uVar2;
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)),4);
    (*(undefined4 *)(gen_frame + 0xac)) = param_1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if (*(undefined * PTR32 *)(uVar2 + 0x30) != (undefined *)0x0) {
    uVar2 = F_00768760(*(undefined * PTR32 *)(uVar2 + 0x30));
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar2;
}

/* ref: FUN_007cf270 */
uint F_007cf270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cf270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)this + 8) != 0) {
    puVar1 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)),4);
    (*(undefined4 *)(gen_frame + 0xac)) = param_1;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if (*(undefined * PTR32 *)(uVar3 + 0x30) != (undefined *)0x0) {
    uVar3 = F_00768760(*(undefined * PTR32 *)(uVar3 + 0x30));
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar3;
}

/* ref: FUN_007cf340 */
unsigned int F_007cf340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7cf340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int iVar1;
  
  if (param_1 == 0x144) {
    F_0076b5c0((undefined *)((int)this + -0xc),*(undefined4 *)(param_2 + 0x14));
  }
  if (param_1 - 0x145U < 2) {
    iVar1 = param_1 + -0x143;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x28))))(*(int * PTR32 *)((int)this + -8))));
    F_0043b820(this_00,iVar1,*(undefined4 *)(param_2 + 0x14));
    if (*((char *)GEN_TOP(**(undefined4 * PTR32 *)(param_2 + 0x14))) == '\0') {
      F_007cf270((undefined *)((int)this + -0xc),iVar1);
      return 0;
    }
    F_007cf190((undefined *)((int)this + -0xc),iVar1,*(undefined4 * PTR32 *)(param_2 + 0x14));
  }
  return 0;
}

/* ref: FUN_007cf3c0 */
uint F_007cf3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cf3c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  undefined4 in_ecx;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar4;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar2 = param_1;
  if (1 < (int)param_1) {
    in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
    if (param_1 == 2) {
      uVar4 = REFG(undefined4, 0x108cc50);
      uVar2 = F_0042a990(param_2);
      F_0042cc20((gen_out + 0x0),uVar2,uVar4);
      pvVar3 = (undefined *)F_00414500(in_ecx,0x145);
      bVar1 = F_00414b60(pvVar3,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,
                           uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,
                           uStack_2c,uStack_28,uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,
                           uStack_10);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
    }
    else {
      uVar2 = param_1 - 3;
      if (uVar2 == 0) {
        uVar4 = REFG(undefined4, 0x108cc50);
        uVar2 = F_0042a990(param_2);
        F_0042cc20((gen_out + 0x0),uVar2,uVar4);
        pvVar3 = (undefined *)F_00414500(in_ecx,0x146);
        bVar1 = F_00414b60(pvVar3,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,
                             uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,
                             uStack_2c,uStack_28,uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,
                             uStack_10);
        return CONCAT31(extraout_var,bVar1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_007cf450 */
uint F_007cf450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7cf450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  undefined4 * puVar6;
  
  piVar4 = (int *)F_00a39b80();
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4)));
  uVar5 = 0;
  if ((*param_1 != 0) && (param_3 != 0)) {
    uVar5 = F_0043bd00(this_00,0x18f58,0,0);
    param_2[1] = *param_1;
    *param_2 = 2;
    param_2[2] = 0;
    param_2[3] = 0xf01f;
    F_0042e430(param_2 + 4,uVar5);
    uVar5 = 1;
  }
  if ((param_1[1] != 0) && (uVar5 < param_3)) {
    iVar2 = *(int *)((int)this + 0x64c);
    puVar6 = param_2 + uVar5 * 0x19;
    uVar5 = uVar5 + 1;
    *(int *)((int)this + 0x64c) = iVar2 + 1;
    puVar6[1] = param_1[1];
    *puVar6 = 2;
    puVar6[2] = 1;
    *(undefined4 * PTR32 *)((int)this + iVar2 * 4 + 0x614) = puVar6;
  }
  if (((param_1[2] != 0) && ((short)param_1[3] != 0)) && (uVar5 < param_3)) {
    iVar2 = *(int *)((int)this + 0x64c);
    puVar6 = param_2 + uVar5 * 0x19;
    uVar5 = uVar5 + 1;
    *(int *)((int)this + 0x64c) = iVar2 + 1;
    iVar3 = param_1[2];
    puVar6[1] = (uint)*(ushort *)(param_1 + 3);
    puVar6[2] = iVar3;
    *puVar6 = 2;
    *(undefined4 * PTR32 *)((int)this + iVar2 * 4 + 0x614) = puVar6;
  }
  if (((param_1[4] != 0) && ((short)param_1[5] != 0)) && (uVar5 < param_3)) {
    iVar2 = *(int *)((int)this + 0x64c);
    puVar6 = param_2 + uVar5 * 0x19;
    uVar5 = uVar5 + 1;
    *(int *)((int)this + 0x64c) = iVar2 + 1;
    iVar3 = param_1[4];
    uVar1 = *(ushort *)(param_1 + 5);
    *puVar6 = 2;
    puVar6[1] = (uint)uVar1;
    puVar6[2] = iVar3;
    *(undefined4 * PTR32 *)((int)this + iVar2 * 4 + 0x614) = puVar6;
  }
  if (((param_1[6] != 0) && ((short)param_1[7] != 0)) && (uVar5 < param_3)) {
    iVar2 = *(int *)((int)this + 0x64c);
    puVar6 = param_2 + uVar5 * 0x19;
    uVar5 = uVar5 + 1;
    *(int *)((int)this + 0x64c) = iVar2 + 1;
    iVar3 = param_1[6];
    uVar1 = *(ushort *)(param_1 + 7);
    *puVar6 = 2;
    puVar6[1] = (uint)uVar1;
    puVar6[2] = iVar3;
    *(undefined4 * PTR32 *)((int)this + iVar2 * 4 + 0x614) = puVar6;
  }
  if (((param_1[8] != 0) && ((short)param_1[9] != 0)) && (uVar5 < param_3)) {
    iVar2 = *(int *)((int)this + 0x64c);
    puVar6 = param_2 + uVar5 * 0x19;
    uVar5 = uVar5 + 1;
    *(int *)((int)this + 0x64c) = iVar2 + 1;
    iVar3 = param_1[8];
    uVar1 = *(ushort *)(param_1 + 9);
    *puVar6 = 2;
    puVar6[1] = (uint)uVar1;
    puVar6[2] = iVar3;
    *(undefined4 * PTR32 *)((int)this + iVar2 * 4 + 0x614) = puVar6;
  }
  if (((param_1[10] != 0) && ((short)param_1[0xb] != 0)) && (uVar5 < param_3)) {
    iVar2 = *(int *)((int)this + 0x64c);
    puVar6 = param_2 + uVar5 * 0x19;
    *(int *)((int)this + 0x64c) = iVar2 + 1;
    iVar3 = param_1[10];
    uVar1 = *(ushort *)(param_1 + 0xb);
    *puVar6 = 2;
    puVar6[1] = (uint)uVar1;
    puVar6[2] = iVar3;
    uVar5 = uVar5 + 1;
    *(undefined4 * PTR32 *)((int)this + iVar2 * 4 + 0x614) = puVar6;
  }
  return uVar5;
}

/* ref: FUN_007cf670 */
uint F_007cf670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7cf670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0076beb0(this,param_1);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x968c) = uVar1;
    *(undefined1 *)(uVar1 + 8) = (undefined1)param_2;
    *(undefined1 *)(uVar1 + 6) = (undefined1)param_3;
  }
  return uVar1;
}

/* ref: FUN_007cf6a0 */
uint F_007cf6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cf6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  psVar2 = (short *)((int)this + 0x96a2);
  do {
    if (*psVar2 == (short)param_1) {
      uVar1 = (int)this + uVar1 * 10 + 0x96a2;
      if (uVar1 != 0) {
        *(undefined1 *)(uVar1 + 7) = 1;
      }
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 5;
  } while (uVar1 < 5);
  return uVar1;
}

/* ref: FUN_007cf6e0 */
uint F_007cf6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cf6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((short)param_1 == 0) || (REFG(char, 0x14ab070) == '\0')) {
    return 0x40;
  }
  uVar2 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
  uVar3 = F_0076bf70(this,param_1);
  uVar5 = (uint)*(ushort *)(uVar3 + 0x108);
  uVar4 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar4,uVar5);
  param_1 = (uint)(bVar1 == 0);
  uVar5 = F_00a68280(&REFG(char, 0x14ab070),0xffffffff,0);
  uVar4 = param_1;
  if ((ushort)uVar5 < *(ushort *)(uVar3 + 0x10e)) {
    uVar4 = param_1 | 2;
  }
  if (*(char *)(uVar2 + 0x3f) == '\0') {
    uVar4 = uVar4 | 4;
  }
  bVar1 = *(byte *)(uVar3 + 0x116);
  if (*(int *)((int)this + 0xb97c) == 0) {
    if (REFG(undefined1, 0x1338ad4) <= bVar1) goto LAB_007cf793;
  }
  else if (REFG(undefined1, 0x1338ad4) == bVar1) {
    return uVar4;
  }
  uVar4 = uVar4 | 0x10;
LAB_007cf793: ;
  if ((REFG(undefined1, 0x1338ad4) != bVar1) &&
     (*((char *)GEN_TOP(((*(char *)(uVar3 + 0x115) == '\x05') + 0x9f08 + (int)this))) != '\0')) {
    uVar4 = uVar4 | 0x20;
  }
  return uVar4;
}

/* ref: FUN_007cf7c0 */
unsigned int F_007cf7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7cf7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint * puVar5;
  ushort * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint local_10;
  char local_6;
  
  if (*(char *)((int)this + 0xb974) == '\x02') {
    bVar1 = REFG(undefined1, 0x1338ad4);
    if (REFG(undefined1, 0x1338ad4) == 0) {
      bVar1 = 1;
    }
    if ((*(char *)((int)this + 0x967c) != '\0') && (1 < bVar1)) {
      *(undefined1 *)((int)this + 0x967c) = 0;
    }
    cVar2 = '\0';
    local_6 = '\0';
    local_10 = 0;
    if (*(int *)((int)this + 0xb948) != 0) {
      puVar6 = (ushort *)((int)this + 0x760);
      do {
        if (*puVar6 != 0) {
          uVar3 = F_007cf6e0(this,(uint)*puVar6);
          *(uint *)(puVar6 + -4) = uVar3;
          if (*(int *)((int)this + 0xb94c) != 0) {
            uVar4 = 0;
            puVar5 = (uint *)((int)this + 0x965c);
            do {
              if (*puVar5 == (uint)*puVar6) {
                if ((int)uVar4 < 0) break;
                if (uVar3 == 0) {
                  if ((byte)puVar6[9] != bVar1) break;
                  if (bVar1 == *(byte *)((int)this + 0xb96f)) {
                    local_6 = '\x01';
                    break;
                  }
                }
                *(undefined4 *)((int)this + uVar4 * 4 + 0x965c) = 0;
                *(int *)((int)this + 0xb94c) = *(int *)((int)this + 0xb94c) + -1;
                break;
              }
              uVar4 = uVar4 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar4 < 5);
          }
        }
        local_10 = local_10 + 1;
        puVar6 = puVar6 + 0x8e;
        cVar2 = local_6;
      } while (local_10 < *(uint *)((int)this + 0xb948));
    }
    *(char *)((int)this + 0xb973) = cVar2;
    uVar8 = *(undefined4 *)((int)this + 0xb94c);
    *(byte *)((int)this + 0xb96f) = bVar1;
    iVar9 = (uint)(cVar2 == '\0') * 4 + 1;
    uVar7 = 0xade;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_00460c80(this_00,uVar7,uVar8,iVar9);
    F_0042e430((undefined *)((int)this + 0x96d4),uVar3);
  }
  return 0;
}

/* ref: FUN_007cf910 */
uint F_007cf910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cf910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  ushort uVar2;
  int in_ecx;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  undefined * this_00;
  undefined * pvVar8;
  undefined * this_01;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int * local_28;
  undefined4 local_24;
  uint local_1c;
  uint local_18;
  undefined * local_14;
  uint local_10;
  undefined * local_8;
  
  iVar4 = param_1;
  cVar3 = REFG(char, 0x1338ad4);
  if (REFG(char, 0x1338ad4) == '\0') {
    cVar3 = '\x01';
  }
  local_18 = (uint)(*(char *)((int)this + 0x967c) != '\0');
  if (cVar3 == '\x01') {
    local_18 = local_18 | 2;
  }
  F_005a2710((undefined *)(param_1 + 0x50),4);
  *(uint *)(param_1 + 0x54) = local_18;
  uVar10 = *(undefined4 *)((int)this + 0x9678);
  F_005a2710((undefined *)(param_1 + 0x48),4);
  *(undefined4 *)(param_1 + 0x4c) = uVar10;
  local_34 = 0;
  if ((*(char *)((int)this + 0xb974) == '\x02') && (*(char *)((int)this + 0xb975) != '\0')) {
    local_18 = 0;
    local_1c = 0;
    local_30 = 0;
    if (*(int *)((int)this + 0xb948) != 0) {
      local_8 = (undefined *)(param_1 + 0xd00);
      local_14 = (undefined *)(param_1 + 0xd08);
      pvVar8 = (undefined *)(param_1 + 0x100);
      this_00 = (undefined *)(param_1 + 0x110);
      this_01 = (undefined *)(param_1 + 0x108);
      local_28 = (int *)((int)this + 0x945c);
      do {
        in_ecx = *local_28;
        if (in_ecx == 0) break;
        if ((*(char *)((int)this + 0xb96e) == '\0') &&
           (uVar5 = (uint)*(byte *)(in_ecx + 0x115), local_1c != uVar5)) {
          F_005a2710(pvVar8,4);
          *(undefined4 *)((int)pvVar8 + 4) = 0x1000000;
          F_005a2710(this_01,4);
          *(undefined4 *)((int)this_01 + 4) = 0;
          F_005a2710(this_00,4);
          *(undefined4 *)((int)this_00 + 4) = 0;
          uVar6 = F_0042a990(uVar5 * 0x54 + 0x9d10 + (int)this);
          F_005a2710(local_8,8);
          *(uint *)((int)local_8 + 4) = uVar6;
          uVar6 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
          F_005a2710(local_14,8);
          local_8 = (undefined *)((int)local_8 + 0x10);
          *(uint *)((int)local_14 + 4) = uVar6;
          local_14 = (undefined *)((int)local_14 + 0x10);
          pvVar8 = (undefined *)((int)pvVar8 + 0x18);
          this_01 = (undefined *)((int)this_01 + 0x18);
          this_00 = (undefined *)((int)this_00 + 0x18);
          local_18 = local_18 + 1;
          local_1c = uVar5;
        }
        uVar5 = 0;
        local_2c = 0;
        bVar9 = *(int *)(in_ecx + 0xfc) != 0;
        if (bVar9) {
          local_2c = 0xeda5;
        }
        local_10 = (uint)bVar9;
        if (cVar3 == *(char *)(in_ecx + 0x116)) {
          local_10 = local_10 | 4;
        }
        uVar2 = *(ushort *)(in_ecx + 0x104);
        puVar7 = (uint *)((int)this + 0x965c);
        do {
          if (*puVar7 == (uint)uVar2) {
            local_10 = local_10 | 2;
            break;
          }
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar5 < 5);
        if (*(ushort *)((int)this + 0x9670) == uVar2) {
          local_34 = local_18;
        }
        F_005a2710(pvVar8,4);
        *(uint *)((int)pvVar8 + 4) = (uint)uVar2 << 8;
        F_005a2710(this_01,4);
        *(undefined4 *)((int)this_01 + 4) = local_2c;
        F_005a2710(this_00,4);
        *(uint *)((int)this_00 + 4) = local_10;
        uVar5 = F_0042a990(in_ecx + 0x54);
        F_005a2710(local_8,8);
        *(uint *)((int)local_8 + 4) = uVar5;
        uVar5 = F_0042a990(in_ecx);
        F_005a2710(local_14,8);
        local_8 = (undefined *)((int)local_8 + 0x10);
        local_18 = local_18 + 1;
        local_28 = local_28 + 1;
        *(uint *)((int)local_14 + 4) = uVar5;
        local_14 = (undefined *)((int)local_14 + 0x10);
        local_30 = local_30 + 1;
        pvVar8 = (undefined *)((int)pvVar8 + 0x18);
        this_01 = (undefined *)((int)this_01 + 0x18);
        this_00 = (undefined *)((int)this_00 + 0x18);
      } while (local_30 < *(uint *)((int)this + 0xb948));
    }
    F_005a2710((undefined *)(param_1 + 0xf8),4);
    *(uint *)(param_1 + 0xfc) = local_18;
  }
  else {
    F_005a2710((undefined *)(param_1 + 0xf8),4);
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if ((*(int *)((int)this + 0xb94c) == 5) || (param_1 = 0, *(char *)((int)this + 0xb973) != '\0')) {
    param_1 = 1;
  }
  F_005a2710((undefined *)(iVar4 + 0x80),4);
  *(int *)(iVar4 + 0x84) = param_1;
  uVar5 = F_0042a990((int)this + 0x96d4);
  F_005a2710((undefined *)(iVar4 + 0x88),6);
  *(uint *)(iVar4 + 0x8c) = uVar5;
  bVar1 = *(byte *)((int)this + 0xb96c);
  F_005a2710((undefined *)(iVar4 + 0x18),4);
  *(uint *)(iVar4 + 0x1c) = (uint)bVar1;
  uVar5 = 0;
  param_1 = 0;
  if (*(byte *)((int)this + 0xb96e) != 0) {
    do {
      if ((uint)*(byte *)((int)this + 0xb96e) == (&REFG(undefined4, 0x10bfd00))[uVar5]) {
        param_1 = uVar5 + 1;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
  }
  F_005a2710((undefined *)(iVar4 + 0xa8),4);
  *(int *)(iVar4 + 0xac) = param_1;
  F_005a2710((undefined *)(iVar4 + 0x90),4);
  *(int *)(iVar4 + 0x94) = local_34;
  param_1 = 0;
  local_28 = (int *)0x0;
  local_18 = 0;
  local_24 = 0;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0xb96c))) {
  case 0: ;
    param_1 = 5;
    local_18 = 0x9c8;
    break;
  case 1: ;
  case 2: ;
  case 3: ;
    param_1 = 6;
    local_28 = (int *)0x7;
    local_18 = 0x9ca;
    local_24 = 0x9c9;
    break;
  case 6: ;
    if (*(char *)((int)this + 0x969f) == '\x01') {
      param_1 = 7;
      local_28 = (int *)0xb;
      local_18 = 0x9cb;
      local_24 = 0x9cc;
    }
    else {
      param_1 = 0xb;
      local_18 = 0x9cc;
    }
  }
  F_005a2710((undefined *)(iVar4 + 0x20),4);
  *(int *)(iVar4 + 0x24) = param_1;
  F_005a2710((undefined *)(iVar4 + 0x28),4);
  *(int * PTR32 *)(iVar4 + 0x2c) = local_28;
  uVar11 = 0;
  uVar10 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,local_18,uVar10,uVar11);
  F_005a2710((undefined *)(iVar4 + 0x30),6);
  *(uint *)(iVar4 + 0x34) = uVar5;
  uVar11 = 0;
  uVar10 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,local_24,uVar10,uVar11);
  uVar6 = F_005a2710((undefined *)(iVar4 + 0x38),6);
  *(uint *)(iVar4 + 0x3c) = uVar5;
  return uVar6;
}

/* ref: FUN_007cfde0 */
uint F_007cfde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7cfde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  undefined * pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar6 = param_1;
  uVar7 = (uint)*(ushort *)((int)this + 0x9670);
  uVar12 = uVar7;
  if (((*(char *)((int)this + 0xb974) == '\x02') && (*(char *)((int)this + 0xb975) != '\0')) &&
     (uVar7 != 0)) {
    uVar8 = F_0076bf70(this,uVar7);
    uVar12 = 0;
    if (uVar8 != 0) {
      uVar13 = (uint)*(ushort *)(uVar8 + 0x10e);
      uVar12 = *(uint *)(uVar8 + 0xfc);
      uVar14 = 0x23;
      pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar13 = F_00460bd0(pvVar9,uVar14,uVar13);
      F_0042e430((undefined *)((int)this + 0x99c8),uVar13);
      pvVar9 = (undefined *)((int)this + 0x9c14);
      F_0042aca0(pvVar9);
      if ((uVar12 & 0x20) == 0) {
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0xb0e;
        pvVar10 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar13 = F_0043bd00(pvVar10,uVar14,uVar15,uVar16);
        F_0042e430((undefined *)((int)this + 0x9bc0),uVar13);
        uVar13 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
        F_0042e430((undefined *)((int)this + 0x9c68),uVar13);
        uVar2 = *(ushort *)(uVar8 + 0x10a);
        uVar3 = *(ushort *)(uVar8 + 0x10e);
        uVar4 = *(ushort *)(uVar8 + 0x110);
        bVar1 = *(byte *)(uVar8 + 0x116);
        uVar13 = uVar12;
      }
      else {
        iVar5 = *(int *)((int)this + 0x9f0c);
        bVar1 = *((byte *)GEN_TOP(((*(char *)(uVar8 + 0x115) == '\x05') + 0x9f08 + (int)this)));
        uVar13 = F_00476000();
        uVar13 = F_004351f0(iVar5 + (uint)bVar1 * 0x3c,uVar13);
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0x9ce;
        pvVar10 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar11 = F_0043bd00(pvVar10,uVar14,uVar15,uVar16);
        F_0042e430((undefined *)((int)this + 0x9bc0),uVar11);
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0xb0f;
        pvVar10 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar11 = F_0043bd00(pvVar10,uVar14,uVar15,uVar16);
        F_0042e430(pvVar9,uVar11);
        uVar14 = 0x2c;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar13 = F_00460bd0(pvVar9,uVar14,uVar13);
        F_0042e430((undefined *)((int)this + 0x9c68),uVar13);
        uVar2 = *(ushort *)(uVar8 + 0x10a);
        uVar3 = *(ushort *)(uVar8 + 0x10e);
        uVar4 = *(ushort *)(uVar8 + 0x110);
        pvVar9 = (undefined *)0x0;
        bVar1 = *(byte *)(uVar8 + 0x116);
        uVar13 = 0;
      }
      F_0076c5b0((int)this + 0x9b6c,(uint)bVar1,0x22,(uint)uVar4,(uint)uVar3,(uint)uVar2,uVar13,
                   pvVar9);
      uVar13 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
      F_005a2710((undefined *)(param_1 + 0x19c0),8);
      *(uint *)(param_1 + 0x19c4) = uVar13;
      uVar13 = F_0042a990((int)this + 0x9b6c);
      F_005a2710((undefined *)(param_1 + 0x19c8),8);
      *(uint *)(param_1 + 0x19cc) = uVar13;
      uVar13 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
      F_005a2710((undefined *)(param_1 + 0x19d0),8);
      *(uint *)(param_1 + 0x19d4) = uVar13;
      F_005a2710((undefined *)(param_1 + 0x1500),4);
      *(undefined4 *)(param_1 + 0x1504) = 10;
      uVar13 = F_0042a990((int)this + 0x99c8);
      F_005a2710((undefined *)(param_1 + 0x1508),8);
      *(uint *)(param_1 + 0x150c) = uVar13;
      F_005a2710((undefined *)(param_1 + 0x1510),4);
      *(undefined4 *)(param_1 + 0x1514) = 0;
      uVar13 = F_0042a990(uVar8 + 0x54);
      F_005a2710((undefined *)(param_1 + 0x1518),8);
      *(uint *)(param_1 + 0x151c) = uVar13;
      F_005a2710((undefined *)(param_1 + 0x1520),4);
      *(undefined4 *)(param_1 + 0x1524) = 0xefef;
      uVar14 = *(undefined4 *)(uVar8 + 0x100);
      F_005a2710((undefined *)(param_1 + 0x1528),4);
      *(undefined4 *)(param_1 + 0x152c) = uVar14;
      uVar13 = F_0042a990(uVar8 + 0xa8);
      F_005a2710((undefined *)(param_1 + 0x1530),8);
      *(uint *)(param_1 + 0x1534) = uVar13;
      uVar13 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
      F_005a2710((undefined *)(param_1 + 0x1538),8);
      *(uint *)(param_1 + 0x153c) = uVar13;
      F_0076bac0((undefined *)((int)this + 0xc),0xa1,param_1 + 0x1500);
      F_005a2710((undefined *)(param_1 + 0x1798),4);
      *(undefined4 *)(param_1 + 0x179c) = 0;
      uVar13 = F_00ab3900((uint)*(byte *)(uVar8 + 0x115));
      uVar14 = *(undefined4 *)(uVar13 + 4);
      F_005a2710((undefined *)(param_1 + 0x1820),4);
      *(undefined4 *)(param_1 + 0x1824) = uVar14;
      F_005a2710((undefined *)(param_1 + 0x1828),4);
      *(undefined4 *)(param_1 + 0x182c) = 1;
      uVar13 = F_0042a990(uVar8 + 0x54);
      F_005a2710((undefined *)(param_1 + 0x1838),6);
      *(uint *)(param_1 + 0x183c) = uVar13;
      param_1 = 0;
      uVar7 = F_00ab1c90(uVar7);
      if ((uVar7 != 0) && (uVar7 = (uint)*(ushort *)(uVar7 + 0x20), uVar7 != 0)) {
        uVar14 = 0x9d0;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar7 = F_00461bb0(pvVar9,uVar14,uVar7);
        F_0042e430((undefined *)((int)this + 0x9a70),uVar7);
        uVar7 = F_0042a990((int)this + 0x9a70);
        F_005a2710((undefined *)(iVar6 + 0x1920),6);
        *(uint *)(iVar6 + 0x1924) = uVar7;
        param_1 = 1;
      }
      uVar7 = (uint)*(ushort *)(uVar8 + 0x106);
      if (*(ushort *)(uVar8 + 0x106) != 0) {
        uVar14 = 0x9cf;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar7 = F_00461bb0(pvVar9,uVar14,uVar7);
        F_0042e430((undefined *)((int)this + 0x9ac4),uVar7);
        uVar7 = F_0042a990((int)this + 0x9ac4);
        F_005a2710((undefined *)(iVar6 + 0x1920 + param_1 * 8),6);
        *(uint *)(iVar6 + param_1 * 8 + 0x1924) = uVar7;
        param_1 = param_1 + 1;
      }
      if (*(char *)(uVar8 + 0x119) == '\0') {
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0x9f4;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar7 = F_0043bd00(pvVar9,uVar14,uVar15,uVar16);
        F_0042e430((undefined *)((int)this + 0x9b18),uVar7);
        uVar7 = F_0042a990((int)this + 0x9b18);
        pvVar9 = (undefined *)(iVar6 + 0x1920 + param_1 * 8);
        F_005a2710(pvVar9,6);
        param_1 = param_1 + 1;
        *(uint *)((int)pvVar9 + 4) = uVar7;
      }
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0x1ca;
      pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_0043bd00(pvVar9,uVar14,uVar15,uVar16);
      F_005a2710((undefined *)(iVar6 + 0x1540),6);
      *(uint *)(iVar6 + 0x1544) = uVar7;
      F_005a2710((undefined *)(iVar6 + 0x1918),4);
      *(int *)(iVar6 + 0x191c) = param_1;
      if (uVar12 == 0) {
        F_005a2710((undefined *)(iVar6 + 0x19d0),1);
      }
      else {
        uVar12 = F_0042a990((int)this + 0x9bc0);
        F_005a2710((undefined *)(iVar6 + 0x19d0),8);
        *(uint *)(iVar6 + 0x19d4) = uVar12;
        uVar12 = F_0042a990((int)this + 0x9c14);
        F_005a2710((undefined *)(iVar6 + 0x19d8),8);
        *(uint *)(iVar6 + 0x19dc) = uVar12;
        uVar12 = F_0042a990((int)this + 0x9c68);
        F_005a2710((undefined *)(iVar6 + 0x19e0),8);
        *(uint *)(iVar6 + 0x19e4) = uVar12;
      }
      F_005a2710((undefined *)(iVar6 + 0x1850),4);
      *(undefined4 *)(iVar6 + 0x1854) = 0;
      uVar12 = F_005a2710((undefined *)(iVar6 + 0x1818),4);
      *(undefined4 *)(iVar6 + 0x181c) = 0;
      *(undefined1 *)((int)this + 0xb978) = 0;
    }
  }
  return uVar12;
}

/* ref: FUN_007d09e0 */
byte F_007d09e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d09e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0076bf70(this,param_1);
  if (uVar1 != 0) {
    uVar2 = *(uint *)(uVar1 + 0xfc);
    if (uVar2 == 0) {
      uVar2 = F_0076bdd0(((undefined *)(uint)(this)));
      if (uVar2 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xb97c) + 4))))
                  (*(int * PTR32 *)((int)this + 0xb97c),((undefined1 *)(gen_frame + 0x4)),0,0,(uint)*(ushort *)(uVar1 + 0x108));
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        *(undefined4 *)((int)this + 8) = 0;
        F_0076bd10(this);
        return 1;
      }
    }
    F_0076c480(this,uVar2,param_1);
  }
  return 0;
}

/* ref: FUN_007d0a60 */
uint F_007d0a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d0a60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  uint in_ecx_00;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(char *)(in_ecx + 0xb96c) == '\0') {
    pvVar1 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (pvVar1 == (undefined *)0x0) {
      uVar4 = F_0046ff40();
      uVar2 = (uint)(uVar4 / 1000);
    }
    else {
      uVar2 = F_00975680(pvVar1);
    }
    *(uint *)(in_ecx + 0xb95c) = uVar2;
  }
  *(undefined1 *)(in_ecx + 0xb96d) = 0;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x1c))))(*(int * PTR32 *)(in_ecx + 4))));
  pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x32)));
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this == (undefined *)0x0) {
    uVar4 = F_0046ff40();
    uVar2 = (uint)(uVar4 / 1000);
  }
  else {
    uVar2 = F_00975680(this);
  }
  uVar2 = uVar2 - *(int *)(in_ecx + 0xb95c);
  if (59999 < uVar2) {
    uVar2 = 59999;
  }
  uVar6 = 0x21;
  in_ecx_00 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x18))))(*(int * PTR32 *)(in_ecx + 4));
  uVar2 = F_00462440(in_ecx_00,in_ebx,uVar2,uVar6);
  uVar7 = 0;
  uVar5 = 1;
  uVar6 = 0;
  uVar2 = F_0042a990(uVar2);
  uVar2 = F_00431250(pvVar1,0,uVar2,uVar6,uVar5,uVar7);
  return uVar2;
}

/* ref: FUN_007d0b30 */
unsigned int F_007d0b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d0b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  int * piVar1;
  undefined * this;
  undefined * this_00;
  uint uVar2;
  uint in_ecx_00;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(in_ecx + 0xb950) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x1c))))(*(int * PTR32 *)(in_ecx + 4))));
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x32)));
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 == (undefined *)0x0) {
      uVar3 = F_0046ff40();
      uVar2 = (uint)(uVar3 / 1000);
    }
    else {
      uVar2 = F_00975680(this_00);
    }
    uVar2 = uVar2 - *(int *)(in_ecx + 0xb95c);
    if (59999 < uVar2) {
      uVar2 = 59999;
    }
    uVar5 = 0x21;
    in_ecx_00 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x18))))(*(int * PTR32 *)(in_ecx + 4));
    uVar2 = F_00462440(in_ecx_00,in_ebx,uVar2,uVar5);
    uVar6 = 0;
    uVar4 = 1;
    uVar5 = 0;
    uVar2 = F_0042a990(uVar2);
    F_00431250(this,0,uVar2,uVar5,uVar4,uVar6);
  }
  return 0;
}

/* ref: FUN_007d0bd0 */
uint F_007d0bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d0bd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pvVar1 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (pvVar1 == (undefined *)0x0) {
    uVar5 = F_0046ff40();
    uVar2 = (uint)(uVar5 / 1000);
  }
  else {
    uVar2 = F_00975680(pvVar1);
  }
  *(uint *)(in_ecx + 0xb960) = uVar2;
  *(undefined1 *)(in_ecx + 0xb96d) = 0x2d;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x1c))))(*(int * PTR32 *)(in_ecx + 4))));
  pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x32)));
  uVar4 = (uint)*(byte *)(in_ecx + 0xb96d);
  uVar7 = 0x21;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x18))))(*(int * PTR32 *)(in_ecx + 4));
  uVar2 = F_00462440(uVar2,in_ebx,uVar4,uVar7);
  uVar8 = 0;
  uVar6 = 1;
  uVar7 = 0;
  uVar2 = F_0042a990(uVar2);
  uVar2 = F_00431250(pvVar1,0,uVar2,uVar7,uVar6,uVar8);
  return uVar2;
}

/* ref: FUN_007d0c60 */
unsigned int F_007d0c60(unsigned int gen_a0)
{
  GEN_ENTER(0x7d0c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  short * psVar3;
  int iVar4;
  short * psVar5;
  
  if (*(char *)((int)this + 0xb974) == '\x02') {
    psVar5 = (short *)((int)this + 0x96a2);
    iVar4 = 5;
    do {
      if (*psVar5 != 0) {
        uVar2 = 0;
        psVar3 = (short *)((int)this + 0x760);
        do {
          if (*psVar3 == *psVar5) {
            iVar1 = uVar2 * 0x11c + 0x65c + (int)this;
            if (iVar1 != 0) {
              if ((*(int *)((int)this + 0x9690) == 0) && (*(char *)(iVar1 + 0x115) != '\x05')) {
                *(short * PTR32 *)((int)this + 0x9690) = psVar5;
              }
              if ((*(int *)((int)this + 0x9694) == 0) && (*(char *)(iVar1 + 0x115) == '\x05')) {
                *(short * PTR32 *)((int)this + 0x9694) = psVar5;
              }
            }
            break;
          }
          uVar2 = uVar2 + 1;
          psVar3 = psVar3 + 0x8e;
        } while (uVar2 < 0x80);
      }
      psVar5 = psVar5 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentContentsFinder::vf11 */
byte F_007d0cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d0cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 1) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007d0d20 */
uint F_007d0d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d0d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4044));
  *(undefined1 *)(in_ecx + 3) = 0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x19);
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf5 */
unsigned int F_007d0d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d0d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (this[0xc] != (undefined1)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x23);
    iVar3 = REFG(int, 0x1370c18);
    if ((uVar2 != 0) && (REFG(int, 0x1370c18) != 0)) {
      uVar4 = *(uint *)(REFG(int, 0x1370c18) + 0x30);
      if (*(int *)(REFG(int, 0x1370c18) + 0x2c) != 0) {
        uVar4 = uVar4 | 0x80000000;
      }
      if (**(uint * PTR32 *)(uVar2 + 0x20) != uVar4) {
        **(uint * PTR32 *)(uVar2 + 0x20) = uVar4;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      iVar3 = *(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x30);
      if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) != iVar3) {
        *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) = iVar3;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007d0dc0 */
uint F_007d0dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d0dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  undefined * this_00;
  undefined * pvVar6;
  char * pcVar7;
  
  iVar5 = 6;
  pvVar6 = param_1;
  do {
    F_00596cd0(pvVar6,((int)param_2 - (int)param_1) + (int)pvVar6);
    pvVar6 = (undefined *)((int)pvVar6 + 8);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((*param_2 & 0xf) == 0) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar7 = *(char * PTR32 *)(param_2 + 4);
  }
  pbVar3 = param_2;
  if ((*pcVar7 == '(') && (pcVar7[1] == '-')) {
    this_00 = (undefined *)((int)this + 0x10);
    F_0042aca0(this_00);
    pvVar6 = (undefined *)((int)this + 100);
    F_0042aca0(pvVar6);
    bVar1 = pcVar7[2];
    pbVar3 = (byte *)(uint)bVar1;
    iVar5 = 2;
    while (bVar1 != 0) {
      if (((char)pbVar3 == '-') && (pcVar7[iVar5 + 1] == ')')) {
        bVar1 = pcVar7[iVar5 + 2];
        uVar4 = (uint)bVar1;
        pcVar7 = pcVar7 + iVar5 + 2;
        while (bVar1 != 0) {
          uVar4 = F_0042d160(pvVar6,uVar4);
          bVar1 = pcVar7[1];
          uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar1);
          pcVar7 = pcVar7 + 1;
        }
        uVar4 = F_0042a990(this_00);
        F_005a2710((undefined *)((int)param_1 + 8),6);
        *(uint *)((int)param_1 + 0xc) = uVar4;
        uVar4 = F_0042a990(pvVar6);
        pbVar3 = (byte *)F_005a2710(param_1,6);
        *(uint *)((int)param_1 + 4) = uVar4;
        break;
      }
      uVar4 = F_0042d160(this_00,pbVar3);
      bVar1 = pcVar7[iVar5 + 1];
      pbVar3 = ((byte *)GEN_TOP(CONCAT31((int3)(uVar4 >> 8),bVar1)));
      iVar5 = iVar5 + 1;
    }
  }
  iVar5 = REFG(int, 0x1370c18);
  if (REFG(int, 0x1370c18) != 0) {
    param_2 = *(byte * PTR32 *)(REFG(int, 0x1370c18) + 0x30);
    if (*(int *)(REFG(int, 0x1370c18) + 0x2c) != 0) {
      param_2 = (byte *)((uint)param_2 | 0x80000000);
    }
    F_005a2710((undefined *)((int)param_1 + 0x30),4);
    *(byte * PTR32 *)((int)param_1 + 0x34) = param_2;
    iVar2 = *(int *)(iVar5 + 0x38);
    iVar5 = *(int *)(iVar5 + 0x30);
    pbVar3 = (byte *)F_005a2710((undefined *)((int)param_1 + 0x38),4);
    *(int *)((int)param_1 + 0x3c) = iVar2 - iVar5;
  }
  return (uint)pbVar3;
}

/* ref: FUN_007d0ef0 */
uint F_007d0ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d0ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int * piVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar1 = 0;
  if (param_1 != 0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_007d0dc0(this,((undefined4 *)(gen_frame + 0x8)),param_3);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,param_1,param_2,((undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x48));
    iVar3 = 7;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_007d0f80 */
uint F_007d0f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d0f80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d408c));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentEmote::vf1 */
uint F_007d0fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d0fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pvVar4 = REFG(void * PTR32, 0x1379694);
  if ((*param_2 & 0xf) != 0) {
    uVar2 = *(uint *)(param_2 + 4);
    if (0x7fffffff < uVar2) {
      *(undefined4 *)(this + 8) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        if ((param_2[8] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(param_2 + 0xc);
        }
        puVar3 = (uint *)F_00ab28a0(uVar6);
        if (puVar3 != (uint *)0x0) {
          iVar5 = (*puVar3 & 0xffffff) + (int)puVar3;
          uVar7 = 0x100;
          uVar2 = (uint)(ushort)puVar3[8];
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x54))))(*(int * PTR32 *)(this + 4))));
          F_00434720(pvVar4,uVar2,iVar5,uVar7,uVar6);
        }
      }
      goto LAB_007d10de;
    }
  }
  if ((param_2[8] & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0xc);
  }
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    bVar1 = F_00aa0f40(REFG(void * PTR32, 0x1379694));
    if (bVar1 == 0) {
      uVar2 = F_00ac6e80(&REFG(undefined, 0x14bcf40),0xffffffff,uVar6,0,0,1);
      if (uVar2 != 0) {
        F_00a7d4b0(uVar2,pvVar4,0,0xffffffff,uVar6,0,0,0,0,REFG(float, 0x10916ec));
      }
    }
    else {
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = 0xe0000000;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = 0;
      (*(undefined2 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x24)) = 1;
      (*(ulonglong *)(gen_frame + 0x14)) = F_00533c20(&REFG(undefined4, 0x1375bc0));
      (*(undefined2 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x24)) = 1;
      F_00aa0ed0(pvVar4,uVar6,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
LAB_007d10de: ;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007d1100 */
uint F_007d1100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d1100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    bVar1 = *(byte *)((int)this + param_1 + 0x470);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    if ((bVar1 & 1) == 0) {
      *(byte *)((int)this + param_1 + 0x470) = bVar1 | 1;
      uVar2 = (uint)(bVar1 >> 1);
      *(int *)((int)this + 0x468) = *(int *)((int)this + 0x468) + uVar2;
    }
    *(undefined1 *)((int)this + 0x3678) = 1;
  }
  return uVar2;
}

/* ref: FUN_007d1140 */
uint F_007d1140(unsigned int gen_a0)
{
  GEN_ENTER(0x7d1140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = (*(int *)((int)this + 0x2da4) - *(int *)((int)this + 0x2da0)) / 0xc0;
  F_005a2710((undefined *)((int)this + 0x1070),4);
  *(undefined4 *)((int)this + 0x1074) = 3;
  F_005a2710((undefined *)((int)this + 0x1080),4);
  *(int *)((int)this + 0x1084) = local_10;
  uVar1 = *(undefined4 *)((int)this + 0x1c);
  F_005a2710((undefined *)((int)this + 0x1078),4);
  *(undefined4 *)((int)this + 0x107c) = uVar1;
  local_c = local_10;
  if (local_10 != 0) {
    local_8 = 0;
    puVar4 = (undefined4 *)((int)this + 0x1094);
    do {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2da0) + local_8)));
      uVar1 = *puVar3;
      F_005a2710(puVar4 + -3,4);
      puVar4[-2] = uVar1;
      uVar1 = puVar3[3];
      F_005a2710(puVar4 + -1,4);
      *puVar4 = uVar1;
      uVar2 = F_0042a990(puVar3 + 5);
      F_005a2710(puVar4 + 1,6);
      puVar4[2] = uVar2;
      uVar2 = F_0042a990(puVar3 + 0x1a);
      F_005a2710(puVar4 + 3,6);
      puVar4[4] = uVar2;
      uVar1 = puVar3[4];
      F_005a2710(puVar4 + 5,4);
      puVar4[6] = uVar1;
      uVar1 = puVar3[0x2f];
      F_005a2710(puVar4 + 7,4);
      local_8 = local_8 + 0xc0;
      puVar4[8] = uVar1;
      local_c = (uint)*(byte *)(puVar3 + 0x2f) + local_c +
                (uint)*(byte *)((int)puVar3 + 0xbf) + (uint)*(byte *)((int)puVar3 + 0xbe) +
                (uint)*(byte *)((int)puVar3 + 0xbd);
      puVar4 = puVar4 + 0xc;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  uVar2 = F_005a2710((undefined *)((int)this + 0x2ca8),4);
  *(int *)((int)this + 0x2cac) = local_c;
  return uVar2;
}

/* ref: FUN_007d12d0 */
uint F_007d12d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d12d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  uVar2 = F_00424810(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      bVar1 = F_00a6b0c0(&REFG(undefined, 0x14ab464),uVar4);
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 1) {
        bVar1 = *(byte *)((int)this + uVar4 + 0x470);
        uVar3 = CONCAT31(extraout_var,bVar1);
        if ((bVar1 & 1) == 0) {
          *(byte *)((int)this + uVar4 + 0x470) = bVar1 | 1;
          uVar3 = (uint)(bVar1 >> 1);
          *(int *)((int)this + 0x468) = *(int *)((int)this + 0x468) + uVar3;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x32c);
  }
  *(undefined1 *)((int)this + 0x464) = 1;
  return uVar3;
}

/* ref: FUN_007d1340 */
uint F_007d1340(unsigned int gen_a0)
{
  GEN_ENTER(0x7d1340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a2710((undefined *)((int)this + 0x1070),4);
  *(undefined4 *)((int)this + 0x1074) = 4;
  F_0076cad0(this);
  F_0076cbd0(this);
  F_0076cc70(this);
  uVar1 = F_0076cd00(this);
  return uVar1;
}

/* ref: FUN_007d1380 */
unsigned int F_007d1380(unsigned int gen_a0)
{
  GEN_ENTER(0x7d1380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 *)((int)this + 0x90) = &REFG(undefined, 0x10bdb8a);
  *(undefined2 *)((int)this + 0xa6) = 10;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0xa8) = 0;
  *(undefined2 *)((int)this + 0xa0) = 0;
  *(undefined2 *)((int)this + 0xa2) = 0;
  *(undefined2 *)((int)this + 0x98) = 0;
  *(undefined2 *)((int)this + 0x9a) = 0;
  *(undefined2 *)((int)this + 0x9c) = 0;
  *(undefined2 *)((int)this + 0x9e) = 0;
  *(undefined2 *)((int)this + 0xa4) = 0xffff;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 0x66) = 0;
  *(undefined2 *)((int)this + 0x62) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6a) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x6e) = 0;
  *(undefined2 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x72) = 0;
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x76) = 0;
  *(undefined2 *)((int)this + 0x78) = 0;
  *(undefined2 *)((int)this + 0x7a) = 0;
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x7e) = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined2 *)((int)this + 0x82) = 0;
  *(undefined2 *)((int)this + 0x84) = 0;
  *(undefined2 *)((int)this + 0x86) = 0;
  *(undefined2 *)((int)this + 0x88) = 0;
  *(undefined2 *)((int)this + 0x8a) = 0;
  *(undefined2 *)((int)this + 0x8c) = 0;
  *(undefined2 *)((int)this + 0x8e) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_007d14a0 */
uint F_007d14a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d14a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  bool bVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar4 = F_00ab1e70(param_1);
  if (uVar4 == 0) {
    return 0;
  }
  uVar4 = (uint)*(ushort *)(uVar4 + 0x18);
  iVar1 = uVar4 + 0x40;
  local_8 = 0;
  bVar3 = false;
  if (uVar4 != 0) {
    local_c = 0xcbc;
    iVar7 = 0xcbc;
    local_10 = uVar4;
    do {
      if (iVar1 <= (int)uVar4) {
        return local_8;
      }
      piVar5 = (int *)F_00ab1ea0(uVar4);
      if (piVar5 == (int *)0x0) {
        return local_8;
      }
      if (*(char *)((int)piVar5 + 0x16) == '\0') {
        if (bVar3) goto LAB_007d152a;
      }
      else {
        if (bVar3) {
          return local_8;
        }
        bVar3 = true;
LAB_007d152a: ;
        if (((*piVar5 == 0) && (piVar5[1] == 0)) && (piVar5[2] == 0)) {
          return local_8;
        }
        piVar2 = ((int *)GEN_TOP((*(int *)(param_2 + 0x20) + -8 + iVar7)));
        iVar7 = *(short *)((int)piVar5 + 0x12) + -0x400;
        iVar6 = (short)piVar5[5] + -0x400;
        if (*piVar2 != piVar5[2]) {
          *piVar2 = piVar5[2];
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + -4 + local_c))) != iVar7) {
          *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + -4 + local_c))) = iVar7;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + local_c))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + local_c))) = iVar6;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + local_c))) != *piVar5) {
          *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + local_c))) = *piVar5;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 8 + local_c))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8 + local_c))) = 0;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        iVar7 = local_c + 0x14;
        uVar4 = local_10 + 1;
        local_8 = local_8 + 1;
        local_10 = uVar4;
        local_c = iVar7;
      }
    } while (uVar4 != 0);
  }
  return local_8;
}

/* ref: FUN_007d15f0 */
byte F_007d15f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d15f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_2 < 0x51) {
    (*(uint *)(gen_frame + 0xc)) = *(byte *)(param_3 + 0x83) & 7;
    (*(ushort *)(gen_frame + 0x8)) = 4;
    if (3 < (*(uint *)(gen_frame + 0xc))) {
      (*(uint *)(gen_frame + 0xc)) = 3;
    }
    bVar3 = *(byte *)(param_3 + 0x83) >> 4 & 3;
    if (bVar3 != 0) {
      (*(ushort *)(gen_frame + 0x8)) = (ushort)bVar3;
    }
    (*(undefined4 *)(gen_frame + 0x20)) = 0x19000c8;
    iVar2 = (param_2 + param_1) * 5 + 0x32d;
    (*(undefined4 *)(gen_frame + 0x24)) = 0xbb80258;
    iVar4 = CONCAT22(*(undefined2 *)((int)&(*(undefined4 *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0xc)) * 2),(*(ushort *)(gen_frame + 0x8)));
    piVar1 = ((int *)GEN_TOP((*(int *)(param_4 + 0x20) + iVar2 * 4)));
    iVar6 = *(short *)(param_3 + 0x7e) + -0x400;
    iVar7 = *(short *)(param_3 + 0x80) + -0x400;
    ((int *)(gen_frame + 0x10))[0] = 0xebf9;
    ((int *)(gen_frame + 0x10))[1] = 0xebfa;
    ((int *)(gen_frame + 0x10))[2] = 0xebfb;
    ((int *)(gen_frame + 0x10))[3] = 0xec96;
    if (*piVar1 != iVar4) {
      *piVar1 = iVar4;
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 4 + iVar2 * 4))) != iVar6) {
      *((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 4 + iVar2 * 4))) = iVar6;
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 8 + iVar2 * 4))) != iVar7) {
      *((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 8 + iVar2 * 4))) = iVar7;
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    piVar1 = ((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 0xc + iVar2 * 4)));
    iVar4 = (*(char *)(param_3 + 0x84) != '\0') + 0xec31;
    if (*piVar1 != iVar4) {
      *piVar1 = iVar4;
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    piVar1 = ((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 0x10 + iVar2 * 4)));
    if (*piVar1 != ((int *)(gen_frame + 0x10))[(int)((*(uint *)(gen_frame + 0xc)))]) {
      *piVar1 = ((int *)(gen_frame + 0x10))[(int)((*(uint *)(gen_frame + 0xc)))];
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar5 = F_0042a990(param_3);
    F_00431250(param_5,param_2 + 0x110,uVar5,uVar8,uVar9,uVar10);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishingNote::vf11 */
byte F_007d17b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d17b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)((uint)**((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 0x1d) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007d17e0 */
uint F_007d17e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d17e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d40dc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d40d0));
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined2 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  puVar1 = (undefined4 *)((int)this + 0x10);
  iVar2 = 0x19;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFishGuide::vf3 */
unsigned int F_007d1840(unsigned int gen_a0)
{
  GEN_ENTER(0x7d1840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pAVar2;
  int iVar3;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined2 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  pAVar2 = this + 0x10;
  iVar3 = 0x19;
  do {
    *(undefined4 *)pAVar2 = 0;
    pAVar2[4] = (undefined1)0x0;
    pAVar2 = pAVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_007d19b0 */
ushort F_007d19b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d19b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  ushort uVar2;
  int * piVar3;
  int iVar4;
  
  uVar2 = *(ushort *)((int)this + 0xe4);
  iVar4 = 0;
  if ((uVar2 != 0) && (uVar2 != 0)) {
    piVar3 = *(int * PTR32 *)(param_1 + 4);
    while ((*piVar3 != *(int *)((int)this + 0xd8) || ((*(byte *)((int)piVar3 + 0xe) & 1) == 0))) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 5;
      if ((int)(uint)*(ushort *)((int)this + 0xe4) <= iVar4) {
        *(undefined4 *)((int)this + 0xd8) = 0;
        return (ushort)piVar3;
      }
    }
    cVar1 = ((char)(iVar4 / 0x19) + (char)(iVar4 >> 0x1f)) -
            (char)((longlong)iVar4 * 0x51eb851f >> 0x3f);
    *(char *)((int)this + 0xe7) = cVar1;
    uVar2 = cVar1 * 0x19;
    *(char *)((int)this + 0xe8) = (char)iVar4 - (char)uVar2;
    *(undefined4 *)((int)this + 0xd8) = 0;
    return uVar2;
  }
  *(undefined4 *)((int)this + 0xd8) = 0;
  return uVar2;
}

/* ref: FUN_007d1a50 */
uint F_007d1a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d1a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  int local_14;
  int local_10;
  
  iVar1 = param_2;
  iVar4 = (int)*(char *)((int)this + 0xe7);
  uVar2 = iVar4 * 0x19;
  if ((*(ushort *)((int)this + 0xe4) != 0) && (uVar2 < *(ushort *)((int)this + 0xe4))) {
    if (199 < (int)*(char *)((int)this + 0xe8) + uVar2) {
      *(char *)((int)this + 0xe8) = -0x39 - (char)uVar2;
    }
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) != iVar4) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) = iVar4;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 8))) != (int)*(char *)((int)this + 0xe8)) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 8))) = (int)*(char *)((int)this + 0xe8);
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    param_2 = uVar2 + 1;
    iVar4 = (iVar4 * 0x7d + 5) * 4;
    local_10 = 0x18;
    puVar3 = (undefined1 *)((int)this + 0x1c);
    local_14 = 5;
    do {
      uVar2 = 0;
      puVar3[-8] = 0;
      *(undefined4 *)(puVar3 + -0xc) = 0;
      if (param_2 - 1 < (uint)*(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + -0x14 + iVar4)));
        if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + -6 + iVar4))) & 1) != 0) {
          *(undefined4 *)(puVar3 + -0xc) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 + -0xc) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + -0xc + local_10))) != *(int *)(puVar3 + -0xc)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + -0xc + local_10))) = *(int *)(puVar3 + -0xc);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + -4 + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + -4 + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      uVar2 = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + -4) = 0;
      if (param_2 < *(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + iVar4)));
        if ((*(byte *)((int)puVar5 + 0xe) & 1) != 0) {
          *(undefined4 *)(puVar3 + -4) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 + -4) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + local_10))) != *(int *)(puVar3 + -4)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + local_10))) = *(int *)(puVar3 + -4);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      uVar2 = 0;
      puVar3[8] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      if (param_2 + 1 < (uint)*(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + iVar4)));
        if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x22 + iVar4))) & 1) != 0) {
          *(undefined4 *)(puVar3 + 4) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 + 4) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc + local_10))) != *(int *)(puVar3 + 4)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc + local_10))) = *(int *)(puVar3 + 4);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x14 + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x14 + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      uVar2 = 0;
      puVar3[0x10] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      if (param_2 + 2 < (uint)*(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x28 + iVar4)));
        if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x36 + iVar4))) & 1) != 0) {
          *(undefined4 *)(puVar3 + 0xc) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x18 + local_10))) != *(int *)(puVar3 + 0xc)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x18 + local_10))) = *(int *)(puVar3 + 0xc);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x20 + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x20 + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      uVar2 = 0;
      puVar3[0x18] = 0;
      *(undefined4 *)(puVar3 + 0x14) = 0;
      if (param_2 + 3 < (uint)*(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x3c + iVar4)));
        if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x4a + iVar4))) & 1) != 0) {
          *(undefined4 *)(puVar3 + 0x14) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 + 0x14) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x24 + local_10))) != *(int *)(puVar3 + 0x14)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x24 + local_10))) = *(int *)(puVar3 + 0x14);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x2c + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x2c + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      param_2 = param_2 + 5;
      iVar4 = iVar4 + 100;
      local_10 = local_10 + 0x3c;
      puVar3 = puVar3 + 0x28;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    return 2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishGuide::vf11 */
byte F_007d1d30(unsigned int gen_a0)
{
  GEN_ENTER(0x7d1d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 9) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007d1d60 */
uint F_007d1d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d1d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d412c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4120));
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x22) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3a) = 0;
  *(undefined1 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x46) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x52) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf3 */
unsigned int F_007d1de0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d1de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  this[0x58] = (undefined1)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x18] = (undefined1)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x22) = 0;
  this[0x24] = (undefined1)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x2c) = 0;
  *(undefined2 *)(this + 0x2e) = 0;
  this[0x30] = (undefined1)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x3a) = 0;
  this[0x3c] = (undefined1)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x44) = 0;
  *(undefined2 *)(this + 0x46) = 0;
  this[0x48] = (undefined1)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined2 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x52) = 0;
  this[0x54] = (undefined1)0x0;
  return 0;
}

/* ref: FUN_007d1e70 */
uint F_007d1e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d1e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d417c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4170));
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x16) = 0;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf1 */
uint F_007d1ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d1ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int * piVar2;
  undefined4 uVar3;
  
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    iVar1 = *(int *)(this + 0x24);
    if (iVar1 < 4) {
      *(undefined2 *)(this + iVar1 * 4 + 0x10) = *(undefined2 *)(this + 0x28);
      *(undefined2 *)(this + iVar1 * 4 + 0x12) = *(undefined2 *)(this + 0x2c);
    }
    if ((param_2[8] & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    *(int *)(this + 0x24) = iVar1;
    if (iVar1 < 4) {
      *(int *)(this + 0x28) = (int)*(short *)(this + iVar1 * 4 + 0x10);
      *(int *)(this + 0x2c) = (int)*(short *)(this + iVar1 * 4 + 0x12);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2,*(undefined4 *)(this + 8),1);
    F_00a73450(&REFG(undefined, 0x14ab744),this + 0xc);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 1: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)(this + 0x28) = uVar3;
    *(undefined4 *)(this + 0x2c) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2,*(undefined4 *)(this + 8),1);
    F_00a72a70(&REFG(undefined, 0x14ab744),*(undefined4 *)(this + 0x24),*(undefined4 *)(this + 0x28),
                 *(undefined4 *)(this + 0x2c));
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 2: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)(this + 0x2c) = uVar3;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2,*(undefined4 *)(this + 8),1);
    F_00a66b50(*(undefined4 *)(this + 0x2c));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xc) + 4))))(this + 0xc,4);
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    F_0076d8e0(this);
    F_00a72450(&REFG(undefined, 0x14ab744));
    *(undefined4 *)(this + 8) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007d2060 */
uint F_007d2060(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x1379694) == 0) goto LAB_007d20df;
  if (*(char *)(REFG(int, 0x1379694) + 0x1688) == '\x10') {
    if ((*(int *)((int)this + 0x24) == 0) || (*(int *)((int)this + 0x24) == 1)) goto LAB_007d20df;
  }
  else {
    if (*(char *)(REFG(int, 0x1379694) + 0x1688) == '\x11') {
      if ((*(int *)((int)this + 0x24) != 2) && (*(int *)((int)this + 0x24) != 3)) {
        *(undefined4 *)((int)this + 0x24) = 2;
      }
      goto LAB_007d20df;
    }
    if (((*(byte *)((int)this + 0x20) & 3) == 0) &&
       (uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),0x10,1), (short)uVar1 == 0)) {
      *(undefined4 *)((int)this + 0x24) = 2;
    }
    if (((*(byte *)((int)this + 0x20) & 0xc) != 0) ||
       (uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),0x11,1), (short)uVar1 != 0)) goto LAB_007d20df;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
LAB_007d20df: ;
  if (3 < *(int *)((int)this + 0x24)) {
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  uVar1 = *(uint *)((int)this + 0x24);
  if ((int)uVar1 < 4) {
    *(int *)((int)this + 0x28) = (int)*(short *)((int)this + uVar1 * 4 + 0x10);
    *(int *)((int)this + 0x2c) = (int)*(short *)((int)this + uVar1 * 4 + 0x12);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf11 */
byte F_007d2110(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 7) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007d2140 */
uint F_007d2140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  undefined4 * puVar2;
  int local_c;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d41c4));
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0xffffffff;
  puVar2 = in_ecx + 0x1d;
  local_c = 0xd;
  do {
    *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar2 + 1);
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    *(undefined2 *)(puVar2 + 0x19) = 0;
    *(undefined1 *)((int)puVar2 + 0x66) = 0;
    puVar2 = puVar2 + 0x1a;
    local_c = local_c + -1;
  } while (-1 < local_c);
  in_ecx[3] = 1;
  in_ecx[5] = 0xffffffff;
  in_ecx[6] = 1;
  in_ecx[8] = 0xffffffff;
  in_ecx[9] = 1;
  in_ecx[0xb] = 0xffffffff;
  in_ecx[0xc] = 1;
  in_ecx[0xe] = 0xffffffff;
  in_ecx[0xf] = 1;
  in_ecx[0x11] = 0xffffffff;
  in_ecx[0x12] = 1;
  in_ecx[0x14] = 0xffffffff;
  in_ecx[0x15] = 1;
  in_ecx[0x17] = 0xffffffff;
  in_ecx[4] = 5;
  in_ecx[7] = 4;
  in_ecx[10] = 7;
  in_ecx[0xd] = 8;
  in_ecx[0x10] = 9;
  in_ecx[0x13] = 2;
  in_ecx[0x16] = 0xb;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)in_ecx;
}

/* ref: FUN_007d2220 */
uint F_007d2220(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d41c4));
  iVar3 = 0xd;
  puVar4 = (undefined4 *)((int)this + 0x624);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 + -0x19);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf5 */
unsigned int F_007d2290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((*(int *)(this + 0x70) != -1) && (((byte)param_1 & 0x1f) == 1)) {
    F_0076dbd0(this);
  }
  return 0;
}

/* ref: FUN_007d22b0 */
uint F_007d22b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d22b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043b440(this_00);
  if ((param_1 == uVar1) && (uVar1 = F_0076dad0(this,param_1), uVar1 == 0)) {
    return 0;
  }
  uVar1 = F_0046bd40(this_00,param_1);
  return uVar1;
}

/* ref: FUN_007d22f0 */
uint F_007d22f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d22f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint in_ecx;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined * this_01;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x3d);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x38)));
  in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
  uVar4 = F_0043b440(in_ecx);
  uVar5 = F_0043b460(in_ecx);
  bVar1 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
  if (uVar4 == 0xffffffff) {
    if (uVar5 == 0xffffffff) goto LAB_007d237e;
  }
  else {
    uVar6 = F_0076dad0(this,uVar4);
    uVar5 = uVar4;
    (*(uint *)(gen_frame + 0xc)) = uVar4;
    if (uVar6 == 0) goto LAB_007d237e;
  }
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  bVar1 = 1;
LAB_007d237e: ;
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x70c))) != (uint)bVar1) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x70c))) = (uint)bVar1;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10bdb9e),REFG(undefined4, 0x108cc50));
  if (((*(uint *)(gen_frame + 0xc)) != 0xffffffff) &&
     (uVar5 = F_0043b3e0(in_ecx,(*(uint *)(gen_frame + 0xc))), (*(byte *)(uVar5 + 0x39) & 1) != 0)) {
    piVar2 = *(int * PTR32 *)((int)this + 4);
    iVar7 = uVar5 + 4;
    uVar5 = F_00435340((*(uint *)(gen_frame + 0xc)) + 1);
    uVar9 = 0x300;
    this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
    uVar5 = F_004608b0(this_01,uVar9,uVar5,iVar7);
    F_0042e430(((undefined1 *)(gen_frame + 0x14)),uVar5);
  }
  uVar11 = 0;
  uVar10 = 1;
  uVar9 = 0;
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
  F_00431250(this_00,0x144,uVar5,uVar9,uVar10,uVar11);
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar8;
}

/* ref: FUN_007d2430 */
uint F_007d2430(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_01;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_18;
  int local_14;
  int local_c;
  uint local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x2b);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x27)));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230));
  uVar5 = (uint)bVar1;
  local_14 = 0;
  local_8 = 0;
  if (uVar5 != 0) {
    local_18 = 0x24;
    local_c = 0x10;
    do {
      uVar6 = F_0043b3e0(uVar4,local_8);
      piVar2 = ((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + -8 + local_c)));
      if ((*(byte *)(uVar6 + 0x39) & 1) == 0) {
        if (*piVar2 != 0) {
          *piVar2 = 0;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
      }
      else {
        if (*piVar2 != 1) {
          *piVar2 = 1;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar8 = 0;
        uVar7 = F_0043b440(uVar4);
        if (local_8 == uVar7) {
          iVar8 = 1;
        }
        else {
          uVar7 = F_0043b460(uVar4);
          if (local_8 == uVar7) {
            iVar8 = 2;
          }
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + -4 + local_c))) != iVar8) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + -4 + local_c))) = iVar8;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*(int *)(uVar6 + 0x34) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(uVar6 + 0x34) + 62000;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) != iVar8) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) = iVar8;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*(int *)(uVar6 + 0x34) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(uVar6 + 0x34) + 0xf550;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_c))) != iVar8) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_c))) = iVar8;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        uVar7 = F_0076dad0(this,local_8);
        if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8 + local_c))) != uVar7) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8 + local_c))) = uVar7;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (uVar6 + 4 != *((int *)GEN_TOP((local_18 + *(int *)((int)this_00 + 0x20))))) {
          *((uint *)GEN_TOP((local_18 + *(int *)((int)this_00 + 0x20)))) = uVar6 + 4;
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        local_14 = local_14 + 1;
      }
      local_c = local_c + 0x14;
      local_18 = local_18 + 4;
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)uVar5);
  }
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if (**(uint * PTR32 *)(uVar3 + 0x20) != uVar5) {
    **(uint * PTR32 *)(uVar3 + 0x20) = uVar5;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  uVar11 = 0;
  uVar10 = 1;
  uVar9 = 0;
  uVar6 = F_00461c60(this_01,0x7fc,local_14,uVar5);
  F_00431250(this_00,0,uVar6,uVar9,uVar10,uVar11);
  uVar4 = F_0043b3e0(uVar4,100);
  bVar1 = *(byte *)(uVar4 + 0x39) & 1;
  uVar4 = (uint)(bVar1 != 0);
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4))) = uVar4;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,(uint)(bVar1 == 0) * 4 + 0x102c,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 4))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,(uint)((int)uVar5 <= local_14) * 4 + 0x102d,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 8)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 8))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x1032,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x1033,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x10)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x10))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x1109,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x110a,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x110c,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1c)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1c))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x110b,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x20)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x20))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_007d22f0(this);
  return uVar3;
}

/* ref: FUN_007d2750 */
byte F_007d2750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  F_0046c830(pvVar3,param_1);
  F_007d2430(this);
  if (*(int *)((int)this + 8) != 0) {
    bVar2 = F_00a37c00(&REFG(undefined, 0x14a4230));
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
    (*(int *)(gen_frame + 0x18)) = -1;
    iVar6 = param_1;
    iVar1 = param_1;
    if (param_1 < (int)(uint)bVar2) {
      do {
        uVar4 = F_0043b3e0(pvVar3,iVar6);
        if ((*(byte *)(uVar4 + 0x39) & 1) != 0) {
          (*(int *)(gen_frame + 0x18)) = iVar6;
          if (-1 < iVar6) goto LAB_007d27d9;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(*(uint *)(gen_frame + 0x14)));
    }
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) goto LAB_007d27d9;
      uVar4 = F_0043b3e0(pvVar3,iVar1);
    } while ((*(byte *)(uVar4 + 0x39) & 1) == 0);
    (*(int *)(gen_frame + 0x18)) = iVar1;
LAB_007d27d9: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x18));
    piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0xc)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
  }
  if ((*(int *)((int)this + 0x70) != -1) && (*(int *)((int)this + 0x70) == param_1)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_0043b110(pvVar3,param_1);
  return 0;
}

/* ref: FUN_007d2870 */
byte F_007d2870(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x24) + 0xc))))(*(int * PTR32 *)(uVar1 + 0x24));
  if (*(int *)((int)this + 0x6c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x6c),0);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  return 1;
}

/* ref: FUN_007d28c0 */
byte F_007d28c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d28c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043b440(this_00);
  if ((param_1 == uVar1) && (uVar1 = F_0076dad0(this,param_1), uVar1 == 0)) {
    return 0;
  }
  F_0046bd40(this_00,param_1);
  return 0;
}

/* ref: FUN_007d2900 */
byte F_007d2900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0046c950(pvVar1,param_1);
  F_007d2430(this);
  if (*(int *)((int)this + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004593f0(pvVar1,uVar2);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar2 + 0x230bf) = *(byte *)(uVar2 + 0x230bf) | 2;
  return 0;
}

/* ref: FUN_007d29a0 */
byte F_007d29a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d29a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0046cac0(pvVar1,param_2,param_1);
  F_007d2430(this);
  if (*(int *)((int)this + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  iVar5 = param_1;
  uVar4 = uVar2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004594a0(pvVar1,iVar5,uVar4);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar4 + 0x230bf) = *(byte *)(uVar4 + 0x230bf) | 2;
  if ((*(int *)((int)this + 0x70) != -1) && (*(int *)((int)this + 0x70) == param_1)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  if ((*(uint *)((int)this + 0x70) != 0xffffffff) && (*(uint *)((int)this + 0x70) == uVar2)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  return 0;
}

/* ref: FUN_007d2ab0 */
byte F_007d2ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d2ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),param_2,REFG(undefined4, 0x108cc50));
  bVar1 = F_0046cc00(pvVar2,param_1,((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  if (bVar1 != 0) {
    F_007d2430(this);
    if (*(int *)((int)this + 8) != 0) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = param_1;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0xc)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
    }
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004593f0(pvVar2,param_1);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar4 + 0x230bf) = *(byte *)(uVar4 + 0x230bf) | 2;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_007d2b80 */
uint F_007d2b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d420c));
  *(undefined1 *)(in_ecx + 3) = 0;
  puVar1 = in_ecx + 4;
  param_2 = 1;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1b;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  puVar1 = in_ecx + 0x3a;
  param_2 = 7;
  do {
    F_0042b630(puVar1);
    puVar1 = puVar1 + 0x15;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  puVar1 = in_ecx + 0xe2;
  param_2 = 2;
  do {
    F_0042b630(puVar1);
    puVar1 = puVar1 + 0x15;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  puVar1 = in_ecx + 0x121;
  param_2 = 0x1d;
  do {
    F_0042b630(puVar1);
    puVar1 = puVar1 + 0x15;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  F_0042b630(in_ecx + 0x397);
  in_ecx[0x3ad] = 0;
  in_ecx[0x3ae] = 0;
  in_ecx[0x3ac] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_007d2c60 */
uint F_007d2c60(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d420c));
  F_0042c880((undefined *)((int)this + 0xe5c));
  pvVar4 = (undefined *)((int)this + 0xe5c);
  iVar3 = 0x1d;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x484);
  iVar3 = 2;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x388);
  iVar3 = 7;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 1;
  puVar5 = (undefined4 *)((int)this + 0xe8);
  do {
    puVar5[-0x1b] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar6 = F_0042c880(puVar5 + -0x1a);
    uVar2 = (uint)uVar6;
    iVar3 = iVar3 + -1;
    puVar5 = puVar5 + -0x1b;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentBuddy::vf11 */
uint F_007d2d30(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((REFG(undefined1, 0x14b4ec2) & 2) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    in_EAX = 0;
    if (*(int *)(uVar1 + 0x18) != 0) {
      return ~(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 10) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_007d2d60 */
byte F_007d2d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d2d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  uVar2 = F_00a6b470(1);
  bVar1 = F_0076df70(param_2 + 0x50,param_2 + 0x48,param_2 + 0x40,(int)this + 0x10,uVar2);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = F_00a6b4b0(1);
  if (-1 < (int)uVar2) {
    F_0076e060(param_2 + 0x78,uVar2);
  }
  piVar3 = &REFG(undefined4, 0x132818c);
  iVar4 = param_2 + 0x98;
  do {
    if (-1 < *piVar3) {
      F_0076e0c0(this,iVar4,*piVar3);
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 0x20;
  } while ((int)piVar3 < 0x13281a4);
  return 1;
}

/* ref: FUN_007d2df0 */
byte F_007d2df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d2df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  undefined * this_01;
  int iVar4;
  int iVar5;
  uint * puVar6;
  undefined4 uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x31);
  this_01 = (undefined *)((int)this + 0x388);
  (*(int *)(gen_frame + 0x18)) = 0;
  puVar6 = (uint *)(param_2 + 0x174);
  param_2 = param_2 + 0x188;
  do {
    bVar2 = F_00a6b380(param_1,(*(int *)(gen_frame + 0x18)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
    uVar7 = 0x136d;
    uVar3 = (uint)bVar2;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_00460bd0(this_00,uVar7,uVar3);
    F_0042e430(this_01,uVar3);
    F_005a2710(puVar6 + -7,3);
    puVar6[-6] = (uint)bVar2;
    uVar3 = F_0042a990(this_01);
    F_005a2710(puVar6 + -1,6);
    *puVar6 = uVar3;
    iVar5 = 0;
    iVar4 = param_2;
    do {
      F_0076e150(this,iVar4,(*(int *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x8)),iVar5,(uint)bVar1);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x38;
    } while (iVar5 < 10);
    this_01 = (undefined *)((int)this_01 + 0x54);
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
    puVar6 = puVar6 + 2;
    param_2 = param_2 + 0x230;
  } while ((*(int *)(gen_frame + 0x18)) < 3);
  return 1;
}

/* ref: FUN_007d2fa0 */
uint F_007d2fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x670];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x668)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x66c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0xcc;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0076e660(this,((undefined4 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0xeb0));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 0xeb8),0xcd,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x668));
  iVar4 = 0xcc;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x668)) ^ (uint)(uint)(gen_frame + 0x66c));
  return uVar3;
}

/* ref: FUN_007d3030 */
unsigned int F_007d3030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0x4b) {
    piVar1 = (int *)((int)this + -0xc);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0xc) + 0x10))))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  return 0;
}

/* ref: FUN_007d3060 */
byte F_007d3060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d3060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,*(undefined4 *)((int)this + 8));
  if (((char)uVar4 != '\0') && (param_1 < *(uint *)((int)this + 0x40))) {
    *(uint *)((int)this + 0x3c) = param_1;
    uVar4 = F_0076ea40(*(undefined4 *)((int)this + 0x4c),param_1,(uint)*(byte *)((int)this + 0x44)
                        );
    if (uVar4 != 0) {
      uVar2 = *(undefined4 *)((int)this + 0x40);
      ((undefined4 *)(gen_frame + 0x0))[0] = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      uVar2 = *(undefined4 *)((int)this + 0x3c);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      bVar1 = *(byte *)(uVar4 + 0x10);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
      uVar5 = F_0076ea90(uVar4,(uint)REFG(undefined1, 0x14ab14f),(uint)REFG(undefined1, 0x14ab29a));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(uint *)(gen_frame + 0x24)) = uVar5;
      iVar6 = *(int *)((int)this + 0x48);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(int *)(gen_frame + 0x2c)) = iVar6 + 2;
      uVar4 = F_0076eae0(uVar4,(uint)REFG(undefined1, 0x14ab14f),(uint)REFG(undefined1, 0x14ab29a));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
      (*(uint *)(gen_frame + 0x34)) = uVar4;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),9,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0x48));
      iVar6 = 8;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
    *(undefined4 *)((int)this + 0x50) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_007d31d0 */
byte F_007d31d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d31d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  uint * puVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  undefined * puVar5;
  uint uVar6;
  undefined4 * this_00;
  undefined1 * this_01;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  if ((*(char *)((int)this + 0x60) == '\0') && (param_1 != 0)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc) ^ (uint)(uint)(gen_frame + 0x1dc));
    return 0;
  }
  piVar3 = ((int *)(gen_frame + 0x8));
  iVar4 = 0x36;
  do {
    *piVar3 = 0;
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((int *)(gen_frame + 0x8)),4);
  ((int *)(gen_frame + 0x8))[1] = param_1;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = param_2;
  puVar5 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar5 = &REFG(undefined, 0x10bdbc2);
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = puVar5;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = param_3;
  if (param_1 == 0) {
    uVar6 = 1;
    this_01 = ((undefined1 *)(gen_frame + 0x20));
    do {
      puVar1 = (uint *)F_00ab2cf0(uVar6 & 0xffff);
      if (puVar1 == (uint *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
      }
      F_005a2710(this_01,6);
      *(int *)(this_01 + 4) = iVar4;
      uVar6 = uVar6 + 1;
      this_01 = this_01 + 8;
    } while ((int)uVar6 < 0x2c);
  }
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar7 = 0x3c;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar6 = F_007c8b20(pvVar2,uVar7);
    *(uint *)((int)this + 0xcc) = uVar6;
    if (uVar6 != 0) goto LAB_007d32fa;
  }
  else {
LAB_007d32fa: ;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 0xcc),0x37,((int *)(gen_frame + 0x8)));
    (*(byte *)(gen_frame + 0x7)) = 1;
  }
  if (param_1 != 2) goto LAB_007d33cf;
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
  (*(uint *)(gen_frame + 0x1cc)) = param_2 & 0xffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
  (*(uint *)(gen_frame + 0x1d4)) = param_2 >> 0x10 & 1;
  if (*(int *)((int)this + 0xd0) == 0) {
    uVar7 = 0x80;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar6 = F_007c8b20(pvVar2,uVar7);
    *(uint *)((int)this + 0xd0) = uVar6;
    if (uVar6 != 0) goto LAB_007d3393;
  }
  else {
LAB_007d3393: ;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    (*(byte *)(gen_frame + 0x7)) = 1;
  }
  puVar1 = &(*(uint *)(gen_frame + 0x1d8));
  iVar4 = 2;
  do {
    puVar1 = puVar1 + -2;
    F_005a2670(puVar1);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
LAB_007d33cf: ;
  this_00 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar4 = 0x36;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
  return (*(byte *)(gen_frame + 0x7));
}

/* ref: FUN_007d3410 */
byte F_007d3410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  uint uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  uVar9 = 1 << ((byte)param_1 & 0x1f);
  uVar7 = param_1 >> 5;
  if (((*((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + uVar7 * 4))) & uVar9) == 0) == (bool)(char)param_2) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc) ^ (uint)(uint)(gen_frame + 0x1dc));
    return 1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar1 + 0x230bf) = *(byte *)(uVar1 + 0x230bf) | 0x20;
  if ((char)param_2 == '\0') {
    puVar8 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + uVar7 * 4)));
    *puVar8 = *puVar8 | uVar9;
    *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
    uVar7 = param_1;
  }
  else {
    puVar8 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + uVar7 * 4)));
    *puVar8 = *puVar8 & ~uVar9;
    *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + -1;
    uVar7 = param_1 | 0x10000;
  }
  if (*(char *)((int)this + 0x60) == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
    return 0;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  iVar5 = 0x36;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
  ((undefined4 *)(gen_frame + 0x8))[1] = 2;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = uVar7;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar10 = 0x3c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar9 = F_007c8b20(pvVar3,uVar10);
    *(uint *)((int)this + 0xcc) = uVar9;
    if (uVar9 != 0) goto LAB_007d3546;
  }
  else {
LAB_007d3546: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    (*(byte *)(gen_frame + 0x7)) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
  (*(uint *)(gen_frame + 0x1cc)) = uVar7 & 0xffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
  (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10 & 1;
  if (*(int *)((int)this + 0xd0) == 0) {
    uVar10 = 0x80;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_007c8b20(pvVar3,uVar10);
    *(uint *)((int)this + 0xd0) = uVar7;
    bVar6 = (*(byte *)(gen_frame + 0x7));
    if (uVar7 == 0) goto LAB_007d35ff;
  }
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
  bVar6 = 1;
LAB_007d35ff: ;
  puVar8 = &(*(uint *)(gen_frame + 0x1d8));
  iVar5 = 2;
  do {
    puVar8 = puVar8 + -2;
    F_005a2670(puVar8);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar5 = 0x36;
  do {
    puVar2 = puVar2 + -2;
    F_005a2670(puVar2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
  return bVar6;
}

/* ref: FUN_007d3660 */
byte F_007d3660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d3660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 7: ;
    iVar3 = 0x13;
    break;
  case 8: ;
    iVar3 = 0x3b;
    break;
  case 9: ;
    iVar3 = 0x14;
    break;
  default: ;
    goto switchD_007d3676_caseD_a;
  case 0x1d: ;
    iVar3 = 0x15;
    break;
  case 0x1f: ;
    iVar3 = 0x5b;
    break;
  case 0x29: ;
    iVar3 = 0x16;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0xc + iVar3 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return (byte)uVar2;
  }
switchD_007d3676_caseD_a: ;
  return 1;
}

/* ref: FUN_007d3b80 */
unsigned int F_007d3b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7d3b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  if (param_5 != (undefined4 *)0x0) {
    uVar6 = 1;
    uVar4 = F_00ab21a0((uint)*(byte *)((int)param_5 + 0x51));
    if (uVar4 != 0) {
      if (*(int *)(uVar4 + 0x10) == 0x20) {
        uVar6 = 2;
      }
      else if (*(int *)(uVar4 + 0x10) == 0x21) {
        uVar6 = 4;
      }
    }
    (*(undefined4 *)(gen_frame + 0x14)) = param_2;
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = param_5 + 4;
    bVar1 = *(byte *)(param_5 + 0x15);
    (*(undefined4 *)(gen_frame + 0x10)) = param_3;
    (*(undefined4 *)(gen_frame + 0x18)) = param_4;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_6;
    (*(undefined4 *)(gen_frame + 0x24)) = *param_5;
    if ((bVar1 == 0) || (bVar5 = *(byte *)((int)param_5 + 0x53), bVar2 = bVar1, bVar5 <= bVar1)) {
      bVar5 = *(byte *)((int)param_5 + 0x53);
      bVar2 = bVar5;
    }
    (*(uint *)(gen_frame + 0x28)) = (uint)bVar2;
    (*(undefined4 *)(gen_frame + 0x2c)) = param_5[0x16];
    (*(undefined4 *)(gen_frame + 0x30)) = param_5[0x17];
    (*(int *)(gen_frame + 0x34)) = (int)*(short *)(param_5 + 0x18);
    (*(int *)(gen_frame + 0x38)) = (int)*(short *)((int)param_5 + 0x62);
    (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_5 + 0x19);
    (*(undefined4 *)(gen_frame + 0x40)) = 1000;
    (*(uint *)(gen_frame + 0x44)) = (*(char *)(param_5 + 0x1a) == '\x03') - 1 & uVar6;
    uVar6 = (uint)*(byte *)((int)param_5 + 0x51);
    (*(uint *)(gen_frame + 0x48)) = uVar6;
    if (*(char *)(param_5 + 0x1a) == '\x03') {
      (*(int *)(gen_frame + 0x4c)) = 0xf2b1;
    }
    else if (uVar6 == 0) {
      (*(int *)(gen_frame + 0x4c)) = 0;
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = uVar6 + 0xf294;
    }
    if ((bVar1 == 0) || (bVar5 <= bVar1)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    (*(undefined1 *)(gen_frame + 0x54)) = *(undefined1 *)((int)param_5 + 0x52);
    (*(uint *)(gen_frame + 0x50)) = (uint)bVar1;
    if ((param_5[0xe2] & 0x10000) == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x10';
    }
    (*(char *)(gen_frame + 0x55)) = cVar3;
    (*(bool *)(gen_frame + 0x57)) = cVar3 == '\x10';
    (*(undefined1 *)(gen_frame + 0x56)) = (undefined1)param_7;
    F_0076fc90((*(undefined * PTR32 *)(gen_frame + 0x58)),&(*(undefined4 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: FUN_007d3cd0 */
uint F_007d3cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7d3cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  uint param_7 = (uint)gen_a7;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if ((param_5 == -0x20000000) && (param_6 == 0)) {
    *(undefined4 *)((int)this + param_1 * 8 + 0x45c) = 0;
    *(uint *)((int)this + param_1 * 8 + 0x460) = param_1;
  }
  else {
    *(undefined4 *)((int)this + param_1 * 8 + 0x45c) = 0;
    *(uint *)((int)this + param_1 * 8 + 0x460) = param_1;
    if (0 < REFG(int, 0x14aa744)) {
      piVar2 = &REFG(undefined4, 0x14a9e84);
      do {
        if (*piVar2 == param_2) {
          iVar1 = (&REFG(undefined4, 0x14a9e88))[iVar1 * 0x12];
          *(int *)((int)this + param_1 * 8 + 0x45c) = iVar1;
          if (*(int *)((int)this + 0x4a4) < iVar1) {
            *(int *)((int)this + 0x4a4) = iVar1;
          }
          break;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x12;
      } while (iVar1 < REFG(int, 0x14aa744));
    }
    if ((param_5 == param_3) && (param_6 == param_4)) {
      return param_1;
    }
  }
  return param_7;
}

/* ref: FUN_007d3ee0 */
byte F_007d3ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  char * this_00;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar4;
  if ((REFG(int, 0x14b11f8) == 0) || (REFG(char, 0x14b1251) == '\0')) {
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) != 0) {
      *(undefined1 *)((int)this + 0xc) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x8c));
    return 0;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x34)));
  if (REFG(char, 0x14b1250) == '\0') {
    bVar3 = F_00a698b0(&REFG(int, 0x14b11f8));
    if (bVar3 != 0) {
      piVar7 = *(int * PTR32 *)((int)this + 4);
      uVar10 = 0x21;
      uVar4 = F_00a6dfd0(&REFG(int, 0x14b11f8));
      uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7);
      uVar4 = F_00462440(uVar6,piVar7,uVar4,uVar10);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),uVar4);
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 1;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      uVar12 = 0;
      uVar11 = 1;
      uVar10 = 0;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
      F_00431250(param_2,0x9e,uVar4,uVar10,uVar11,uVar12);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x34)));
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) != 1) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) = 1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar8 = 0;
  bVar3 = F_004351e0();
  if (bVar3 == 0) {
    pvVar5 = (undefined *)F_00b070f0();
    bVar3 = F_00b07930(pvVar5);
    if (bVar3 != 0) {
      iVar8 = 0x10000;
    }
  }
  else {
    iVar8 = 0x10001;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1a0))) != iVar8) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1a0))) = iVar8;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar4 = F_00a69790(&REFG(int, 0x14b11f8));
  uVar4 = F_0042a990(uVar4);
  iVar8 = *(int *)((int)param_2 + 0x20);
  if (uVar4 != *(uint *)(iVar8 + 0x26c)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(uint *)(iVar8 + 0x26c) = uVar4;
  uVar4 = F_00a697b0(&REFG(int, 0x14b11f8));
  uVar4 = F_0042a990(uVar4);
  iVar8 = *(int *)((int)param_2 + 0x20);
  if (uVar4 != *(uint *)(iVar8 + 0x270)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  uVar13 = 0;
  *(uint *)(iVar8 + 0x270) = uVar4;
  piVar7 = *(int * PTR32 *)((int)this + 4);
  uVar12 = 1;
  uVar11 = 0;
  uVar4 = F_00a697f0(&REFG(int, 0x14b11f8));
  uVar10 = 0x23;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7)));
  uVar4 = F_00461bb0(pvVar5,uVar10,uVar4);
  F_00431250(param_2,0x9d,uVar4,uVar11,uVar12,uVar13);
  uVar4 = F_00a697a0(&REFG(int, 0x14b11f8));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x164))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x164))) = uVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  bVar3 = F_00a698b0(&REFG(int, 0x14b11f8));
  if (bVar3 == 0) {
    if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x278))) != 0) {
      if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x278))) != 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x278))));
        *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x278))) = 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x278))) = 0;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  else {
    piVar7 = *(int * PTR32 *)((int)this + 4);
    uVar10 = 0x21;
    uVar4 = F_00a6dfd0(&REFG(int, 0x14b11f8));
    uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7);
    uVar4 = F_00462440(uVar6,piVar7,uVar4,uVar10);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),uVar4);
    uVar12 = 0;
    uVar11 = 1;
    uVar10 = 0;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
    F_00431250(param_2,0x9e,uVar4,uVar10,uVar11,uVar12);
  }
  piVar7 = (int *)F_00a698a0(&REFG(int, 0x14b11f8));
  (*(int *)(gen_frame + 0x18)) = (piVar7[1] - *piVar7) / 0x140;
  if (9 < (*(int *)(gen_frame + 0x18))) {
    (*(int *)(gen_frame + 0x18)) = 10;
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 1;
  if (0 < (*(int *)(gen_frame + 0x18))) {
    (*(int *)(gen_frame + 0x1c)) = 0x9f;
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x168;
    do {
      piVar2 = (*(int * PTR32 *)(gen_frame + 0x30));
      this_00 = (char *)(*piVar7 + (*(int *)(gen_frame + 0x8)));
      if (*this_00 == '\0') break;
      switch((unsigned int)(uintptr_t)(*(undefined4 *)(this_00 + 4))) {
      case 1: ;
        uVar10 = *(undefined4 *)(this_00 + 100);
        uVar11 = *(undefined4 *)(this_00 + 0x60);
        (*(int * PTR32 *)(gen_frame + 0x30)) = *(int * PTR32 *)((int)this + 4);
        uVar4 = F_0042a990(this_00 + 8);
        goto LAB_007d417f;
      case 2: ;
        piVar1 = *(int * PTR32 *)((int)this + 4);
        uVar10 = *(undefined4 *)(this_00 + 0x60);
        uVar4 = F_0042a990(this_00 + 8);
        uVar12 = 0;
        uVar11 = 0x47b;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
        uVar4 = F_00462160(pvVar5,uVar11,uVar10,uVar12,uVar4);
        F_0042e430(((undefined1 *)(gen_frame + 0x34)),uVar4);
        goto LAB_007d42ed;
      case 3: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),this_00 + 8);
        if (*((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x30)) + *(int *)(param_1 + 0x20)))) == *(int *)(this_00 + 0x60)) break;
        *((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x30)) + *(int *)(param_1 + 0x20)))) = *(int *)(this_00 + 0x60);
        goto LAB_007d42fd;
      case 4: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),this_00 + 8);
        piVar1 = *(int * PTR32 *)((int)this + 4);
        uVar10 = 0x21;
        uVar4 = F_00476000();
        uVar4 = F_00907b30(this_00,uVar4,0);
        uVar6 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
        uVar4 = F_00462440(uVar6,piVar1,uVar4,uVar10);
        uVar12 = 0;
        uVar11 = 1;
        uVar10 = 0;
        uVar4 = F_0042a990(uVar4);
        F_00431250(param_2,(*(int *)(gen_frame + 0x1c)) + 10,uVar4,uVar10,uVar11,uVar12);
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | (*(uint *)(gen_frame + 0x24)) << 10 | (*(uint *)(gen_frame + 0x24)) >> 0x16;
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) != -1) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) = 0xffffffff;
          goto LAB_007d42fd;
        }
        break;
      case 5: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),this_00 + 8);
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) | (*(uint *)(gen_frame + 0x24));
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) != *(int *)(this_00 + 0x60)) {
          *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) = *(int *)(this_00 + 0x60);
          goto LAB_007d42fd;
        }
        break;
      case 6: ;
        uVar10 = *(undefined4 *)(this_00 + 100);
        uVar11 = *(undefined4 *)(this_00 + 0x60);
        (*(int * PTR32 *)(gen_frame + 0x30)) = *(int * PTR32 *)((int)this + 4);
        uVar4 = F_0042a990(this_00 + 8);
LAB_007d417f: ;
        uVar12 = 0x47a;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x30)))));
        uVar4 = F_00462160(pvVar5,uVar12,uVar11,uVar10,uVar4);
        F_0042e430(((undefined1 *)(gen_frame + 0x34)),uVar4);
        if (*((int *)GEN_TOP(((int)piVar2 + *(int *)(param_1 + 0x20)))) != -1) {
          *((undefined4 *)GEN_TOP(((int)piVar2 + *(int *)(param_1 + 0x20)))) = 0xffffffff;
LAB_007d42fd: ;
          *(undefined1 *)(param_1 + 0x1d) = 1;
        }
        break;
      default: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),this_00 + 8);
LAB_007d42ed: ;
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) == -1) break;
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) = 0xffffffff;
        goto LAB_007d42fd;
      }
      uVar12 = 0;
      uVar11 = 1;
      uVar10 = 0;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
      F_00431250(param_2,(*(int *)(gen_frame + 0x1c)),uVar4,uVar10,uVar11,uVar12);
      if (((*(int *)(this_00 + 4) == 1) || (*(int *)(this_00 + 4) == 6)) && (this_00[0x5d] != '\0'))
      {
        cVar9 = *(uint *)(this_00 + 100) <= *(uint *)(this_00 + 0x60);
      }
      else {
        cVar9 = this_00[0x5c];
      }
      if (cVar9 != '\0') {
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | (*(uint *)(gen_frame + 0x24));
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x140;
      (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)((int)piVar2 + 4);
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x24)) < 0);
      iVar8 = (*(int *)(gen_frame + 0x1c)) + -0x9e;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
    } while (iVar8 < (*(int *)(gen_frame + 0x18)));
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 400))) != (*(int *)(gen_frame + 0x10))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 400))) = (*(int *)(gen_frame + 0x10));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x194))) != (*(uint *)(gen_frame + 0x28))) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x194))) = (*(uint *)(gen_frame + 0x28));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x198))) != (*(uint *)(gen_frame + 0x14))) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x198))) = (*(uint *)(gen_frame + 0x14));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00a69760(&REFG(int, 0x14b11f8));
  F_0042c880(((undefined1 *)(gen_frame + 0x34)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 1;
}

/* ref: FUN_007d44e0 */
byte F_007d44e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d44e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  char * this_00;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(uint *)(gen_frame + 0x98)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = param_2;
  if ((REFG(int, 0x14b119c) == 0) || (REFG(char, 0x14b11f5) == '\0')) {
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) != 0) {
      *(undefined1 *)((int)this + 0xc) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x9c));
    return 0;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x44)));
  if (REFG(char, 0x14b11f4) == '\0') {
    bVar1 = F_00a698b0(&REFG(int, 0x14b119c));
    if (bVar1 != 0) {
      piVar5 = *(int * PTR32 *)((int)this + 4);
      uVar9 = 0x21;
      uVar2 = F_00a6dfd0(&REFG(int, 0x14b119c));
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5);
      uVar2 = F_00462440(uVar4,param_2,uVar2,uVar9);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),uVar2);
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = 1;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x44)));
      F_00431250(param_2,0x76,uVar2,uVar9,uVar10,uVar11);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x44)));
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return 1;
  }
  uVar2 = F_00a697a0(&REFG(int, 0x14b119c));
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  else {
    uVar2 = F_00a697a0(&REFG(int, 0x14b119c));
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) = uVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  bVar1 = F_00a69950(&REFG(int, 0x14b119c));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x15c))) != (uint)bVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x15c))) = (uint)bVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00a69840(&REFG(int, 0x14b119c),&(*(int *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x10)));
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x114))) != (*(int *)(gen_frame + 0x8))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x114))) = (*(int *)(gen_frame + 0x8));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x118))) != (*(int *)(gen_frame + 0xc))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x118))) = (*(int *)(gen_frame + 0xc));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x11c))) != (*(int *)(gen_frame + 0x10))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x11c))) = (*(int *)(gen_frame + 0x10));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar2 = F_00a69790(&REFG(int, 0x14b119c));
  uVar2 = F_0042a990(uVar2);
  iVar6 = *(int *)((int)param_2 + 0x20);
  if (uVar2 != *(uint *)(iVar6 + 0x1cc)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(uint *)(iVar6 + 0x1cc) = uVar2;
  uVar2 = F_00a697b0(&REFG(int, 0x14b119c));
  uVar2 = F_0042a990(uVar2);
  iVar6 = *(int *)((int)param_2 + 0x20);
  if (uVar2 != *(uint *)(iVar6 + 0x1d0)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(uint *)(iVar6 + 0x1d0) = uVar2;
  uVar2 = F_00a697f0(&REFG(int, 0x14b119c));
  if ((int)uVar2 < 0) {
    uVar2 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
    if (uVar2 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d4)))) {
      *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d4))) = uVar2;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  else {
    piVar5 = *(int * PTR32 *)((int)this + 4);
    uVar12 = 0;
    uVar11 = 1;
    uVar10 = 0;
    uVar2 = F_00a697f0(&REFG(int, 0x14b119c));
    uVar9 = 0x24;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5)));
    uVar2 = F_00461bb0(pvVar3,uVar9,uVar2);
    F_00431250(param_2,0x75,uVar2,uVar10,uVar11,uVar12);
    this = (*(undefined * PTR32 *)(gen_frame + 0x30));
  }
  bVar1 = F_00a698b0(&REFG(int, 0x14b119c));
  if (bVar1 == 0) {
    if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d8))) != 0) {
      if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x1d8))) != 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x1d8))));
        *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x1d8))) = 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d8))) = 0;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  else {
    piVar5 = *(int * PTR32 *)((int)this + 4);
    uVar9 = 0x21;
    uVar2 = F_00a6dfd0(&REFG(int, 0x14b119c));
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5);
    uVar2 = F_00462440(uVar4,param_2,uVar2,uVar9);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),uVar2);
    uVar11 = 0;
    uVar10 = 1;
    uVar9 = 0;
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x44)));
    F_00431250(param_2,0x76,uVar2,uVar9,uVar10,uVar11);
  }
  uVar2 = F_00a697d0(&REFG(int, 0x14b119c));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x120))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x120))) = uVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar2 = F_00a697e0(&REFG(int, 0x14b119c));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x124))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x124))) = uVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar2 = F_00a697c0(&REFG(int, 0x14b119c));
  uVar2 = F_0042a990(uVar2);
  iVar6 = *(int *)((int)param_2 + 0x20);
  if (uVar2 != *(uint *)(iVar6 + 0x1dc)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(uint *)(iVar6 + 0x1dc) = uVar2;
  piVar5 = (int *)F_00a698a0(&REFG(int, 0x14b119c));
  iVar6 = (piVar5[1] - *piVar5) / 0x140;
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar5;
  (*(int *)(gen_frame + 0x24)) = iVar6;
  if (9 < iVar6) {
    (*(int *)(gen_frame + 0x24)) = 10;
  }
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 1;
  if (0 < (*(int *)(gen_frame + 0x24))) {
    (*(int *)(gen_frame + 0x28)) = 0x78;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x3c)) = 0x128;
    pvVar3 = param_2;
    do {
      this_00 = (char *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x18)));
      if (*this_00 == '\0') break;
      switch((unsigned int)(uintptr_t)(*(undefined4 *)(this_00 + 4))) {
      case 1: ;
        piVar5 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this_00 + 100);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this_00 + 0x60);
        uVar2 = F_0042a990(this_00 + 8);
        uVar11 = 0x47a;
        uVar9 = (*(undefined4 *)(gen_frame + 0x34));
        uVar10 = (*(undefined4 *)(gen_frame + 0x20));
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5)));
        uVar2 = F_00462160(pvVar3,uVar11,uVar9,uVar10,uVar2);
        F_0042e430(((undefined1 *)(gen_frame + 0x44)),uVar2);
        uVar2 = F_00907af0(this_00);
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        goto LAB_007d4877;
      case 2: ;
        piVar5 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this_00 + 0x60);
        uVar2 = F_0042a990(this_00 + 8);
        uVar11 = 0;
        uVar10 = 0x47b;
        uVar9 = (*(undefined4 *)(gen_frame + 0x34));
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5)));
        uVar2 = F_00462160(pvVar3,uVar10,uVar9,uVar11,uVar2);
        F_0042e430(((undefined1 *)(gen_frame + 0x44)),uVar2);
        iVar6 = *(int *)(param_1 + 0x20);
        iVar7 = (*(int *)(gen_frame + 0x3c));
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        break;
      case 3: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),this_00 + 8);
        uVar2 = *(uint *)(this_00 + 0x60);
LAB_007d4877: ;
        if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + (*(int *)(gen_frame + 0x3c))))) != uVar2) {
          *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + (*(int *)(gen_frame + 0x3c))))) = uVar2;
          goto LAB_007d49b0;
        }
        goto LAB_007d49b4;
      case 4: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),this_00 + 8);
        piVar5 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        uVar9 = 0x21;
        uVar2 = F_00476000();
        uVar2 = F_00907b30(this_00,uVar2,0);
        uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5);
        uVar2 = F_00462440(uVar4,piVar5,uVar2,uVar9);
        uVar11 = 0;
        uVar10 = 1;
        uVar9 = 0;
        uVar2 = F_0042a990(uVar2);
        F_00431250((*(undefined * PTR32 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x28)) + 10,uVar2,uVar9,uVar10,uVar11);
        iVar6 = *(int *)(param_1 + 0x20);
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) | (*(uint *)(gen_frame + 0x2c)) << 10 | (*(uint *)(gen_frame + 0x2c)) >> 0x16;
        iVar7 = (*(int *)(gen_frame + 0x3c));
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        break;
      default: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),this_00 + 8);
        goto LAB_007d499d;
      case 6: ;
        piVar5 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this_00 + 100);
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this_00 + 0x60);
        uVar2 = F_0042a990(this_00 + 8);
        uVar11 = 0x47a;
        uVar9 = (*(undefined4 *)(gen_frame + 0x20));
        uVar10 = (*(undefined4 *)(gen_frame + 0x34));
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5)));
        uVar2 = F_00462160(pvVar3,uVar11,uVar9,uVar10,uVar2);
        F_0042e430(((undefined1 *)(gen_frame + 0x44)),uVar2);
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x40));
LAB_007d499d: ;
        iVar7 = *(int *)(param_1 + 0x20);
        iVar6 = (*(int *)(gen_frame + 0x3c));
      }
      if (*(int *)(iVar6 + iVar7) != -1) {
        *(undefined4 *)(iVar6 + iVar7) = 0xffffffff;
LAB_007d49b0: ;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
LAB_007d49b4: ;
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x44)));
      F_00431250(pvVar3,(*(int *)(gen_frame + 0x28)),uVar2,uVar9,uVar10,uVar11);
      iVar6 = (*(int *)(gen_frame + 0x28));
      if (((*(int *)(this_00 + 4) == 1) || (*(int *)(this_00 + 4) == 6)) && (this_00[0x5d] != '\0'))
      {
        cVar8 = *(uint *)(this_00 + 100) <= *(uint *)(this_00 + 0x60);
      }
      else {
        cVar8 = this_00[0x5c];
      }
      if (cVar8 != '\0') {
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) | (*(uint *)(gen_frame + 0x2c));
      }
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 4;
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x140;
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x2c)) < 0);
    } while (iVar6 + -0x77 < (*(int *)(gen_frame + 0x24)));
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x150))) != (*(int *)(gen_frame + 0x1c))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x150))) = (*(int *)(gen_frame + 0x1c));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x154))) != (*(uint *)(gen_frame + 0x38))) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x154))) = (*(uint *)(gen_frame + 0x38));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x158))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x158))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00a69760(&REFG(int, 0x14b119c));
  F_0042c880(((undefined1 *)(gen_frame + 0x44)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return 1;
}

/* ref: FUN_007d4b70 */
byte F_007d4b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d4b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint * puVar1;
  int iVar2;
  int iVar3;
  ushort * puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int in_ecx;
  int * piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_30;
  int local_2c;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_c;
  uint local_8;
  
  iVar3 = param_1;
  puVar4 = (ushort *)F_00a69df0(&REFG(undefined, 0x14b0d04));
  if (((char)puVar4[0x8e] == '\0') &&
     ((*(char *)((int)this + 0xc) == '\0' || (REFG(char, 0x14b0ed8) != '\0')))) {
    return 0;
  }
  uVar7 = (uint)puVar4[1] + (uint)*puVar4;
  if (5 < uVar7) {
    uVar7 = 5;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) != uVar7) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) = uVar7;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  local_14 = 0x1c;
  local_18 = 0x2b;
  local_30 = 0x8c;
  local_20 = 0;
  if (uVar7 != 0) {
    iVar8 = uVar7 * 0x2624;
    local_2c = 0x5c;
    param_1 = uVar7;
    uVar5 = uVar7;
    do {
      local_24 = uVar5 - 1;
      iVar8 = iVar8 + -0x2624;
      uVar13 = 0;
      in_ecx = *(int *)(puVar4 + 0x90) + iVar8;
      uVar12 = 1;
      uVar11 = 0;
      uVar5 = F_0042a990(in_ecx);
      F_00431250(param_2,local_20,uVar5,uVar11,uVar12,uVar13);
      local_8 = *(uint *)(in_ecx + 0x25e8);
      if (10 < local_8) {
        local_8 = 10;
      }
      if (*((uint *)GEN_TOP((local_2c + -0x50 + *(int *)(iVar3 + 0x20)))) != local_8) {
        *((uint *)GEN_TOP((local_2c + -0x50 + *(int *)(iVar3 + 0x20)))) = local_8;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      iVar6 = *(int *)(in_ecx + 0xac);
      if (*(short *)(in_ecx + 0xa8) == 0xff) {
        iVar6 = iVar6 + 2;
      }
      local_c = iVar6 << 0x18;
      local_1c = (uint)*(ushort *)(in_ecx + 0x25e0);
      if (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_2c))) != local_1c) {
        *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_2c))) = local_1c;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      if (local_1c != 0) {
        piVar10 = (int *)(in_ecx + 0x25d4);
        do {
          uVar9 = 0;
          uVar5 = F_00ab2510(*piVar10);
          if (uVar5 != 0) {
            uVar9 = (uint)*(ushort *)(uVar5 + 0x1c);
          }
          if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_14 * 4))) != *piVar10) {
            *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_14 * 4))) = *piVar10;
            *(undefined1 *)(iVar3 + 0x1d) = 1;
          }
          local_14 = local_14 + 1;
          if (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_18 * 4))) != uVar9) {
            *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_18 * 4))) = uVar9;
            *(undefined1 *)(iVar3 + 0x1d) = 1;
          }
          local_18 = local_18 + 1;
          uVar13 = 0;
          uVar12 = 1;
          uVar11 = 0;
          uVar5 = F_00ab64e0(*piVar10,0,uVar5);
          F_00431250(param_2,local_30,uVar5,uVar11,uVar12,uVar13);
          local_30 = local_30 + 1;
          piVar10 = piVar10 + 1;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
      }
      iVar6 = 0;
      local_1c = 1;
      if (0 < (int)local_8) {
        do {
          uVar13 = 0;
          iVar2 = (*((int *)GEN_TOP((local_24 * 0x2624 + 0x25e4 + *(int *)(puVar4 + 0x90)))) + iVar6) * 0x18c +
                  0xb0 + in_ecx;
          uVar12 = 1;
          uVar11 = 0;
          uVar5 = F_0042a990(iVar2 + 8);
          F_00431250(param_2,param_1,uVar5,uVar11,uVar12,uVar13);
          uVar13 = 0;
          uVar12 = 1;
          uVar11 = 0;
          uVar5 = F_0042a990(iVar2 + 0x60);
          F_00431250(param_2,param_1 + 0x32,uVar5,uVar11,uVar12,uVar13);
          param_1 = param_1 + 1;
          if (*(char *)(iVar2 + 4) != '\0') {
            local_c = local_c | local_1c;
          }
          iVar6 = iVar6 + 1;
          local_1c = local_1c << 1 | (uint)((int)local_1c < 0);
        } while (iVar6 < (int)local_8);
      }
      if (*((int *)GEN_TOP((local_2c + 0x8c + *(int *)(iVar3 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((local_2c + 0x8c + *(int *)(iVar3 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      puVar1 = ((uint *)GEN_TOP((local_2c + -0x28 + *(int *)(iVar3 + 0x20))));
      if (*puVar1 != local_c) {
        *puVar1 = local_c;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_2c + -0x14 + *(int *)(iVar3 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_2c + -0x14 + *(int *)(iVar3 + 0x20)))) = 0;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      local_20 = local_20 + 1;
      local_2c = local_2c + 4;
      uVar5 = local_24;
    } while (local_20 < (int)uVar7);
  }
  if (uVar7 < 5) {
    iVar8 = uVar7 * 4 + 0xe8;
    do {
      if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar8))) != -1) {
        *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar8))) = 0xffffffff;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      iVar8 = iVar8 + 4;
    } while (iVar8 < 0xfc);
  }
  F_00a69e00(&REFG(undefined, 0x14b0d04),0);
  *(undefined1 *)((int)this + 0xc) = 0;
  return 1;
}

/* ref: FUN_007d4ec0 */
byte F_007d4ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d4ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x1b);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x18);
  uVar6 = (uint)(*(char *)((int)this + 0xd) == '\x01');
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1a8))) != uVar6) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1a8))) = uVar6;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*(char *)((int)this + 0xd) == '\0') {
    F_007d3ee0(this,uVar4,uVar5);
    F_007d44e0(this,uVar4,uVar5);
    F_007d3d70(this,uVar4,uVar5);
    bVar1 = F_007d4b70(this,uVar4,uVar5);
    return bVar1;
  }
  bVar2 = F_007d3ee0(this,uVar4,uVar5);
  bVar1 = 1;
  if (bVar2 != 1) {
    bVar2 = F_007d44e0(this,uVar4,uVar5);
    bVar1 = 1;
    if (bVar2 != 1) {
      bVar2 = F_007d3d70(this,uVar4,uVar5);
      bVar1 = 1;
      if (bVar2 != 1) {
        bVar1 = F_007d4b70(this,uVar4,uVar5);
      }
    }
  }
  return bVar1;
}

/* ref: FUN_007d4f80 */
byte F_007d4f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d4f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  
  iVar1 = param_1;
  if ((*(byte *)(param_1 + 0x33d9) & 1) == 0) {
    uVar2 = (uint)(*(char *)(param_1 + 0x32a0) != '\0');
    if (*(char *)(param_1 + 0x330c) != '\0') {
      uVar2 = uVar2 + 1;
    }
    if (*(char *)(param_1 + 0x3378) != '\0') {
      uVar2 = uVar2 + 1;
    }
    *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + uVar2;
    cVar4 = *(char *)(param_1 + 0x32a0) != '\0';
    if (*(char *)(param_1 + 0x330c) != '\0') {
      cVar4 = cVar4 + '\x01';
    }
    if (*(char *)(param_1 + 0x3378) != '\0') {
      cVar4 = cVar4 + '\x01';
    }
    return cVar4 != '\0';
  }
  iVar3 = param_1 + 0x328c;
  param_1 = 3;
  do {
    if (*(char *)(iVar3 + 0x14) != '\0') {
      F_00915a30(param_2,*(undefined4 *)((int)this + 0x1af0),iVar3);
      *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + 1;
    }
    iVar3 = iVar3 + 0x6c;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(byte *)(iVar1 + 0x33d9) = *(byte *)(iVar1 + 0x33d9) & 0xfe;
  return 1;
}

/* ref: FUN_007d5030 */
unsigned int F_007d5030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined * this_00;
  uint uVar7;
  uint uVar8;
  uint3 extraout_var = 0;
  uint3 extraout_var_00 = 0;
  int iVar9;
  uint3 uVar11;
  char * pcVar10;
  ulonglong uVar12;
  undefined4 uVar13;
  
  if ((*(char *)((int)this + 0x60) != '\0') &&
     (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4)),
     *(char *)(uVar4 + 0x29254) == '\0')) {
    piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,9);
    piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,8);
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar13 = 1;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_00435440(uVar7,uVar13);
    if (uVar7 != 0) {
      uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14));
      if ((int)uVar8 < 1) {
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
          uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
          if (*(undefined * PTR32 *)(uVar7 + 200) != (undefined *)0x0) {
            F_009218a0(*(undefined * PTR32 *)(uVar7 + 200));
          }
        }
      }
      else {
        uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14));
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar7 = F_0042a990(uVar7 + 0x24);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x110)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x110))) = uVar7;
        uVar7 = F_0043bd00(this_00,0xaa,0,0);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x10c)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x10c))) = uVar7;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
    }
    uVar13 = 5;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_00435440(uVar7,uVar13);
    if (uVar7 != 0) {
      iVar9 = *(int *)(uVar7 + 0x24);
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x140))) != iVar9) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x140))) = iVar9;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (iVar9 != 0) {
        uVar7 = F_0042a990(uVar7 + 0x30);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x118)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x118))) = uVar7;
        uVar7 = F_0043bd00(this_00,0xab,0,0);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x114)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x114))) = uVar7;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
    }
    uVar13 = 2;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_00435440(uVar7,uVar13);
    if (uVar7 != 0) {
      iVar9 = *(int *)(uVar7 + 0x10);
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x144))) != iVar9) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x144))) = iVar9;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (iVar9 != 0) {
        uVar8 = F_0042a990(uVar7 + 0x1c);
        if (uVar8 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x120)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x120))) = uVar8;
        uVar8 = F_0043bd00(this_00,0xac,0,0);
        if (uVar8 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x11c)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x11c))) = uVar8;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
      bVar3 = F_004393f0(uVar7);
      uVar11 = extraout_var;
      if ((bVar3 == 0) || (bVar3 = F_004351d0(), uVar11 = extraout_var_00, bVar3 != 0)) {
        iVar9 = (uint)uVar11 << 8;
      }
      else {
        iVar9 = CONCAT31(extraout_var_00,1);
      }
      F_007d3410(this,0x1c,iVar9);
    }
    if (0 < *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c)))) {
      uVar12 = F_00427d90();
      uVar7 = (uint)uVar12 - *(uint *)((int)this + 0x1b10);
      uVar8 = 0;
      if (((int)(uVar12 >> 0x20) - *(int *)((int)this + 0x1b14) ==
           (uint)((uint)uVar12 < *(uint *)((int)this + 0x1b10))) &&
         (uVar7 < *(uint *)((int)this + 0x1b00))) {
        uVar8 = ((*(uint *)((int)this + 0x1b00) - uVar7) + 999) / 1000;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c))) != uVar8) {
        *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c))) = uVar8;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c))) == 0) {
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
        if (*(undefined * PTR32 *)(uVar7 + 0x10c) != (undefined *)0x0) {
          F_0077e2e0(*(undefined * PTR32 *)(uVar7 + 0x10c));
        }
      }
    }
    uVar13 = 0xc;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_00435440(uVar7,uVar13);
    if (uVar7 != 0) {
      uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14));
      if ((int)uVar8 < 1) {
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
          if (*(undefined * PTR32 *)(uVar4 + 0x118) != (undefined *)0x0) {
            F_009218d0(*(undefined * PTR32 *)(uVar4 + 0x118));
          }
        }
      }
      else {
        uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14));
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar4 = F_0042a990(uVar7 + 0x24);
        if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x128)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x128))) = uVar4;
        uVar4 = F_0043bd00(this_00,0xb6a,0,0);
        if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x124)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x124))) = uVar4;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
    }
    pcVar1 = (char *)((int)this + 0x1b20);
    pcVar10 = pcVar1;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    if (pcVar10 != (char *)((int)this + 0x1b21)) {
      F_00771260(this,pcVar1,*(undefined4 *)((int)this + 0x1b38));
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      *(undefined4 *)((int)this + 0x1b24) = 0;
      *(undefined4 *)((int)this + 0x1b28) = 0;
      *(undefined4 *)((int)this + 0x1b2c) = 0;
      *(undefined4 *)((int)this + 0x1b30) = 0;
      *(undefined2 *)((int)this + 0x1b34) = 0;
      *(undefined4 *)((int)this + 0x1b38) = 0;
    }
  }
  return 0;
}

/* ref: FUN_007d5410 */
uint F_007d5410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined * this_01;
  uint uVar4;
  uint in_ecx;
  uint uVar5;
  uint in_ecx_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  __time64_t _Var10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_1c;
  uint local_18;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,9);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,8)));
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar11 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar4 = F_00414500(uVar11,0xb5);
  uVar4 = *(uint *)(uVar4 + 0x14);
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x130))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x130))) = uVar4;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x134))) != (uint)(REFG(char, 0x14c0a66) != '\0')) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x134))) = (uint)(REFG(char, 0x14c0a66) != '\0');
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  in_ecx = F_00424810(REFG(int, 0x137104c));
  if ((param_1 & 0x1f) == 0) {
    if (in_ecx == 0) {
      local_1c = 0;
      local_18 = 0;
    }
    else {
      local_1c = F_00975090(in_ecx);
      local_18 = F_009750b0(in_ecx);
    }
    uVar13 = 6;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    in_ecx_00 = F_00435440(uVar5,uVar13);
    uVar5 = *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124)));
    if (in_ecx_00 == 0) {
      iVar9 = 0;
    }
    else {
      uVar6 = F_00438ce0(in_ecx_00);
      uVar7 = F_00438c80(in_ecx_00);
      uVar8 = F_00438c90(in_ecx_00);
      iVar9 = (uVar5 & 0xff000000) + (uVar8 & 0xff) + (uVar7 + uVar6 * 0x100) * 0x100;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124))) != iVar9) {
      *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124))) = iVar9;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if (*(char *)(in_ecx_00 + 0x51b8) != '\0') {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      bVar1 = F_0075ee20(uVar5);
      if (bVar1 == 0) {
        uVar5 = *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124)));
        uVar6 = uVar5 | 0x1000000;
        if (uVar5 != uVar6) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124))) = uVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        *(undefined1 *)(in_ecx_00 + 0x51b8) = 0;
      }
    }
    if (in_ecx == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_009750d0(in_ecx);
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x128))) != uVar5) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x128))) = uVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if ((*(uint *)((int)this + 0xcec) != local_1c) || (*(uint *)((int)this + 0xcf0) != local_18)) {
      uVar14 = 0;
      uVar12 = 1;
      uVar13 = 0;
      *(uint *)((int)this + 0xcec) = local_1c;
      *(uint *)((int)this + 0xcf0) = local_18;
      uVar5 = F_00461c60(this_01,0x466,local_1c,local_18);
      F_00431250(this_00,0x5b,uVar5,uVar13,uVar12,uVar14);
    }
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x138))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x138))) = 0;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
  }
  uVar3 = 0x1f;
  if (uVar4 == 1) {
    uVar3 = 7;
  }
  if ((uVar4 != *(byte *)((int)this + 0x1b44)) || ((param_1 & uVar3) == 0)) {
    *(char *)((int)this + 0x1b44) = (char)uVar4;
    if (uVar4 == 1) {
      uVar4 = F_00461bb0(this_01,0x22,1);
      F_0042e430((undefined *)((int)this + 0xaa0),uVar4);
      uVar4 = F_0042a990((int)this + 0xc44);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar4 = F_0042a990((int)this + 0xc98);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
    }
    else if (uVar4 == 2) {
      if (in_ecx == 0) {
        _Var10 = F_00c4b7c2((__time64_t *)0x0);
        uVar4 = (uint)_Var10;
      }
      else {
        uVar4 = F_00476000();
      }
      if (uVar4 != *(uint *)((int)this + 0xcf4)) {
        uVar3 = F_00414500(uVar11,0xb6);
        uVar3 = F_00461bb0(this_01,*(int *)(uVar3 + 0x14) + 0x1c,uVar4);
        F_0042e430((undefined *)((int)this + 0xaa0),uVar3);
        *(uint *)((int)this + 0xcf4) = uVar4;
      }
      uVar4 = F_0042a990((int)this + 0xb9c);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar4 = F_0042a990((int)this + 0xbf0);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
    }
    else if (uVar4 == 3) {
      if (in_ecx == 0) {
        *(undefined4 *)((int)this + 0xcf4) = 0xffffffff;
        F_0042e430((undefined *)((int)this + 0xaa0),"--:--");
      }
      else {
        uVar4 = F_00476000();
        uVar3 = F_00a1ae70();
        iVar9 = uVar4 + uVar3;
        if (iVar9 != *(int *)((int)this + 0xcf4)) {
          uVar4 = F_00414500(uVar11,0xb6);
          uVar4 = F_00461bb0(this_01,*(int *)(uVar4 + 0x14) + 0x1c,iVar9);
          F_0042e430((undefined *)((int)this + 0xaa0),uVar4);
          *(int *)((int)this + 0xcf4) = iVar9;
        }
      }
      uVar4 = F_0042a990((int)this + 0xaf4);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar4 = F_0042a990((int)this + 0xb48);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
    }
    else {
      F_0042e430((undefined *)((int)this + 0xaa0),"--:--");
    }
    uVar12 = 0;
    uVar13 = 1;
    uVar11 = 0;
    uVar4 = F_0042a990((int)this + 0xaa0);
    in_ecx = F_00431250(this_00,0x42,uVar4,uVar11,uVar13,uVar12);
  }
  return in_ecx;
}

/* ref: FUN_007d5920 */
unsigned int F_007d5920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d5920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (2 < param_2) {
    if (((((byte)*param_1 & 0xf) == 4) && (((byte)param_1[2] & 0xf) == 4)) &&
       (((byte)param_1[4] & 0xf) == 4)) {
      uVar1 = F_00475fa0(param_1[3],param_1[1]);
      F_00543ca0(&REFG(undefined4, 0x1375bc0),uVar1,0,0);
    }
  }
  return 0;
}

/* ref: FUN_007d5980 */
uint F_007d5980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d5980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  
  if ((*param_1 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
  }
  if ((param_1[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  if (((int)uVar1 < *(int *)((int)this + 0x1a68)) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + uVar1 * 0xc + 0x18ec) + 0x40))), uVar1 != 0xe0000000)) {
    uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),uVar1,0);
    if (uVar1 != 0) {
      if (iVar2 == 0) {
        uVar1 = F_005476b0(&REFG(undefined4, 0x1375bc0),uVar1,0);
      }
      else if (iVar2 == 1) {
        uVar1 = F_00547560(&REFG(undefined4, 0x1375bc0),uVar1,0);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007d5a00 */
uint F_007d5a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d5a00u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  undefined4 extraout_EDX = 0;
  int iVar3;
  
  if ((*param_1 & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
  }
  pbVar1 = param_1;
  if (REFG(undefined4 * PTR32, 0x1375c40) != (undefined4 *)0x0) {
    pbVar1 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c40))))(REFG(undefined4 * PTR32, 0x1375c40))));
    if (pbVar1 != (byte *)0xe0000000) {
      pbVar1 = (byte *)F_00a354d0(&REFG(undefined4, 0x14a31f0),pbVar1,extraout_EDX);
      if (pbVar1 != (byte *)0x0) {
        if (iVar3 == 0) {
          pbVar1 = (byte *)F_005476b0(&REFG(undefined4, 0x1375bc0),pbVar1,0);
        }
        else if (iVar3 == 1) {
          uVar2 = F_00547560(&REFG(undefined4, 0x1375bc0),pbVar1,0);
          return uVar2;
        }
      }
    }
  }
  return (uint)pbVar1;
}

/* ref: FUN_007d5a70 */
uint F_007d5a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d5a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_007d5a90 */
uint F_007d5a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d5a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x54);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_007d5ab0 */
uint F_007d5ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar3 = *(int * PTR32 *)(uVar2 + 0x24);
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if (((char)uVar2 != '\0') && (uVar2 = piVar3[0x82], uVar2 == *(uint *)((int)this + 0x18))) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  }
  if (*(int *)((int)this + 0x18) != 0) {
    if (param_1 < 0) {
      uVar1 = 9;
    }
    else {
      uVar1 = (ushort)param_1 & (9 < param_1) - 1;
    }
    *(ushort *)((int)this + 0x1c) = uVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
    (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 0x18),1,&(*(undefined4 *)(gen_frame + 0x4)));
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar2;
}

/* ref: FUN_007d5b50 */
byte F_007d5b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte in_AL = 0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x20) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar3 = *(int * PTR32 *)(uVar1 + 0x24);
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
    if (((char)uVar1 != '\0') && (piVar3[0x82] == *(int *)((int)this + 0x20))) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
    if (param_1 < 10) {
      iVar2 = 0x11;
    }
    else {
      iVar2 = param_1;
      if (0x11 < param_1) {
        iVar2 = 10;
      }
    }
    *(int *)((int)this + 0x24) = iVar2;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,6);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,5);
    if ((uVar4 != 0) && (uVar1 != 0)) {
      uVar1 = *(uint *)(uVar4 + 0x20);
      if (*(int *)(uVar1 + 0x2d14) != *(int *)((int)this + 0x24)) {
        *(int *)(uVar1 + 0x2d14) = *(int *)((int)this + 0x24);
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
    }
    in_AL = (byte)uVar1;
  }
  return in_AL;
}

/* ref: FUN_007d5c00 */
byte F_007d5c00(unsigned int gen_a0)
{
  GEN_ENTER(0x7d5c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 in_ecx;
  char cVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  ((uint *)(gen_frame + 0x8))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  cVar1 = REFG(char, 0x14ab058);
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar3 = F_00414500(in_ecx,(-(uint)(REFG(char, 0x14ab058) != '\0') & 9) + 0xdd);
  if (*(int *)(uVar3 + 0x14) == 0) {
    iVar4 = 1;
    while( true ) {
      iVar5 = *(int *)((int)this + 0x24) + iVar4;
      if (0x11 < iVar5) {
        iVar5 = iVar5 + -8;
      }
      bVar2 = F_0043aef0(this_00,iVar5);
      if (bVar2 == 0) break;
      iVar4 = iVar4 + 1;
      if (7 < iVar4) {
        F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c));
        return bVar2;
      }
    }
LAB_007d5d53: ;
    bVar2 = F_007d5b50(this,iVar5);
    F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c));
    return bVar2;
  }
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
  iVar4 = 1;
  do {
    iVar5 = *(int *)((int)this + 0x24) + iVar4;
    if (0x11 < iVar5) {
      iVar5 = iVar5 + -8;
    }
    uVar3 = F_00414500(in_ecx,((uint *)(gen_frame + 0x8))[(int)(iVar5 + -10 + (uint)(cVar1 != '\0') * 8)]);
    if (*(int *)(uVar3 + 0x14) != 0) {
      bVar2 = F_0043aef0(this_00,iVar5);
      uVar3 = (uint)bVar2;
      if (bVar2 == 0) goto LAB_007d5d53;
    }
    iVar4 = iVar4 + 1;
    if (7 < iVar4) {
      F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c));
      return (byte)uVar3;
    }
  } while( true );
}

/* ref: FUN_007d5d70 */
byte F_007d5d70(unsigned int gen_a0)
{
  GEN_ENTER(0x7d5d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x1b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  if (*(char *)((int)this + 0x60) == '\0') goto LAB_007d5e5e;
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x36;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
  ((undefined4 *)(gen_frame + 0x0))[1] = 7;
  F_005a2710(((undefined1 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x1a8)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1ac)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),3);
  (*(undefined4 *)(gen_frame + 0x1b4)) = 0xffffffff;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar5 = 0x3c;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_007c8b20(this_00,uVar5);
    *(uint *)((int)this + 0xcc) = uVar2;
    if (uVar2 != 0) goto LAB_007d5e22;
  }
  else {
LAB_007d5e22: ;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x0)));
  }
  this_01 = &(*(uint *)(gen_frame + 0x1b8));
  iVar4 = 0x36;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
LAB_007d5e5e: ;
  F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc));
  return 1;
}

/* ref: FUN_007d5e70 */
byte F_007d5e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x7d5e70u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  double dVar1;
  undefined1 * puVar2;
  undefined4 local_c;
  
  puVar2 = (undefined1 *)F_00771060(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    dVar1 = (double)param_4 * *(double *)&REFG(undefined, 0x10912a8);
    *puVar2 = 1;
    local_c = (undefined4)(longlong)TRUNC(dVar1);
    *(undefined4 *)(puVar2 + 0xac) = local_c;
    F_0042e430(puVar2 + 4,param_2);
    F_0042e430(puVar2 + 0x58,param_3);
    return 1;
  }
  return 0;
}

/* ref: FUN_007d5ee0 */
unsigned int F_007d5ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * in_ecx;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != (int *)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f290(param_1);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    in_ecx = *(int * PTR32 *)(uVar3 + 0x24);
    if ((in_ecx != (int *)0x0) && (bVar1 = F_0076a220(uVar2), bVar1 != 0)) {
      F_00769610(in_ecx);
      F_007cd910(((undefined *)(uint)(in_ecx)),uVar2);
      ((code *)*(gen_code32 *)(*in_ecx + 8))(in_ecx);
    }
  }
  return 0;
}

/* ref: FUN_007d5f50 */
uint F_007d5f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4254));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007d5f70 */
uint F_007d5f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d429c));
  in_ecx[3] = 0xe0000000;
  in_ecx[4] = 0xe0000000;
  in_ecx[5] = 0xe0000000;
  in_ecx[6] = 0xe0000000;
  F_0042b630(in_ecx + 7);
  F_0042b630(in_ecx + 0x1c);
  *(undefined1 *)((int)in_ecx + 0x142) = 0;
  F_0042b630(in_ecx + 0x57);
  in_ecx[0x6c] = 0;
  in_ecx[0x6d] = 0;
  in_ecx[0x6e] = 0;
  in_ecx[0x6f] = 0;
  in_ecx[0x70] = 0;
  in_ecx[0x71] = 0;
  in_ecx[0x72] = 0;
  in_ecx[0x73] = 0;
  iVar1 = 0;
  puVar2 = in_ecx + 0x3f;
  do {
    puVar2[-0xe] = 0;
    *puVar2 = 0;
    *(undefined1 *)((int)in_ecx + iVar1 + 0x134) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xe);
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentInspect::vf3 */
uint F_007d6010(unsigned int gen_a0)
{
  GEN_ENTER(0x7d6010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  
  F_00ae0cd0(&REFG(undefined, 0x14c0920),0x2a);
  piVar2 = *(int * PTR32 *)(this + 0x1cc);
  *(undefined4 *)(this + 0x1c8) = 0;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 8) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,uVar1,0);
  return uVar3;
}

/* ref: FUN_007d6070 */
uint F_007d6070(unsigned int gen_a0)
{
  GEN_ENTER(0x7d6070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x1b4) - 2;
  if ((uVar1 == 0) && (*(char *)((int)this + 0x142) != '\0')) {
    uVar1 = F_00771ca0(this);
    *(undefined4 *)((int)this + 0x1b4) = 0;
  }
  return uVar1;
}

/* ref: FUN_007d60a0 */
uint F_007d60a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d60a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x1b8) - 2;
  if ((uVar1 == 0) && (*(char *)((int)this + 0x142) != '\0')) {
    uVar1 = F_00771d50(this);
    *(undefined4 *)((int)this + 0x1b8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007d60d0 */
byte F_007d60d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d60d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(byte *)(gen_frame + 0x1b)) = 1;
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d9);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar2;
  if (pvVar2 == (undefined *)0x0) {
    return 1;
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  puVar6 = (uint *)((int)this + 0xc4);
  do {
    iVar5 = (*(int *)(gen_frame + 0x14));
    pvVar2 = (undefined *)F_00a37da0((*(undefined * PTR32 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)));
    if (pvVar2 == (undefined *)0x0) {
LAB_007d61f3: ;
      *puVar6 = 0;
      puVar6[0xe] = 0;
      *(undefined1 *)(iVar5 + 0x134 + (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) = 0;
    }
    else {
      if (*(char *)((int)pvVar2 + 6) == '\0') {
        if (*(int *)((int)pvVar2 + 8) == 0) goto LAB_007d61f3;
        uVar4 = *(uint *)((int)pvVar2 + 8);
        if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
          uVar4 = uVar4 + 1000000;
        }
      }
      else {
        pvVar3 = (undefined *)F_00a3a860(pvVar2);
        uVar4 = F_0046e5e0(pvVar3);
      }
      uVar4 = F_00ab65a0(uVar4,0);
      *puVar6 = uVar4;
      if (*(char *)((int)pvVar2 + 6) == '\0') {
        uVar4 = *(uint *)((int)pvVar2 + 8);
        if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
          uVar4 = uVar4 + 1000000;
        }
      }
      else {
        pvVar3 = (undefined *)F_00a3a860(pvVar2);
        uVar4 = F_0046e5e0(pvVar3);
      }
      uVar4 = F_00ab24a0(uVar4);
      if ((*puVar6 == 0) || (uVar4 == 0)) {
        (*(byte *)(gen_frame + 0x1b)) = 0;
      }
      else {
        bVar1 = F_007c9be0(&(*(int *)(gen_frame + 0x8)),pvVar2);
        puVar6[0xe] = (uint)(bVar1 != 0) | (*(int *)(gen_frame + 0x8)) * 2;
        if (((REFG(undefined1, 0x14ab408) != 0) && (REFG(undefined1, 0x14ab408) < REFG(undefined1, 0x14ab407))) &&
           (REFG(undefined1, 0x14ab408) < *(byte *)(uVar4 + 0x9f))) {
          *(undefined1 *)((*(int *)(gen_frame + 0x14)) + 0x134 + (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) = 1;
        }
      }
    }
    iVar5 = (*(int *)(gen_frame + 0x14)) + 1;
    puVar6 = puVar6 + 1;
    (*(int *)(gen_frame + 0x14)) = iVar5;
    if (0xd < iVar5) {
      return (*(byte *)(gen_frame + 0x1b));
    }
  } while( true );
}

/* ref: FUN_007d6230 */
byte F_007d6230(unsigned int gen_a0)
{
  GEN_ENTER(0x7d6230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (REFG(int, 0x14ab3b0) == -0x20000000) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),REFG(int, 0x14ab3b0));
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  iVar3 = 0;
  do {
    ((byte *)(gen_frame + 0x8c))[(int)(iVar3)] = *(byte *)(uVar2 + 0x2db8 + iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1a);
  ((byte *)(gen_frame + 0x8c))[3] = 0x32;
  (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(uVar2 + 0x2d90);
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(uVar2 + 0x2d94);
  (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)(uVar2 + 0x2d98);
  (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)(uVar2 + 0x2d9c);
  (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(uVar2 + 0x2da0);
  (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(uVar2 + 0x2da4);
  (*(undefined4 *)(gen_frame + 0x7c)) = *(undefined4 *)(uVar2 + 0x2da8);
  (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(uVar2 + 0x2dac);
  (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(uVar2 + 0x2db0);
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(uVar2 + 0x2db4);
  F_00aa39d0(*(undefined * PTR32 *)((int)this + 0x1c8),(uint)(*(byte *)(uVar2 + 0x2dd3) >> 5 & 1));
  F_00aa9000(*(undefined * PTR32 *)((int)this + 0x1c8),(uint)(*(byte *)(uVar2 + 0x2dd3) >> 6 & 1));
  F_00a9fa40(*(undefined4 *)((int)this + 0x1c8),1);
  F_00aaa640(*(undefined * PTR32 *)((int)this + 0x1c8),((byte *)(gen_frame + 0x8c)),&(*(undefined4 *)(gen_frame + 0x64)));
  ((undefined4 *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[2], REFG(float, 0x10c44a0));
  ((undefined4 *)(gen_frame + 0xc))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[4], REFG(float, 0x10c449c));
  ((undefined4 *)(gen_frame + 0xc))[7] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[7], REFG(float, 0x10c449c));
  ((undefined4 *)(gen_frame + 0xc))[9] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[9], REFG(float, 0x10c449c));
  ((undefined4 *)(gen_frame + 0xc))[10] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[10], REFG(float, 0x10adbc4));
  ((undefined4 *)(gen_frame + 0xc))[0xb] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xb], REFG(float, 0x10adbc4));
  ((undefined4 *)(gen_frame + 0xc))[0xc] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xc], REFG(float, 0x10adbc4));
  ((undefined4 *)(gen_frame + 0xc))[0xd] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xd], REFG(float, 0x10adbc4));
  uVar1 = (uint)((byte *)(gen_frame + 0x8c))[1] + (uint)((byte *)(gen_frame + 0x8c))[4] * 2;
  ((undefined4 *)(gen_frame + 0xc))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[3], REFG(float, 0x10c44a8));
  ((undefined4 *)(gen_frame + 0xc))[5] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[5], REFG(float, 0x10c44a4));
  ((undefined4 *)(gen_frame + 0xc))[0xe] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xe], REFG(float, 0x10c44a8));
  ((undefined4 *)(gen_frame + 0xc))[0xf] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xf], REFG(float, 0x10c4498));
  ((undefined4 *)(gen_frame + 0xc))[0x10] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x10], REFG(float, 0x10c44a8));
  ((undefined4 *)(gen_frame + 0xc))[0x11] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x11], REFG(float, 0x10c4498));
  ((undefined4 *)(gen_frame + 0xc))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0], REFG(float, 0x1087f04));
  ((undefined4 *)(gen_frame + 0xc))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[1], REFG(float, 0x1087f04));
  ((undefined4 *)(gen_frame + 0xc))[6] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[6], REFG(float, 0x10c4494));
  ((undefined4 *)(gen_frame + 0xc))[8] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[8], REFG(float, 0x10c4494));
  ((undefined4 *)(gen_frame + 0xc))[0x12] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x12], REFG(float, 0x10ac108));
  ((undefined4 *)(gen_frame + 0xc))[0x13] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x13], REFG(float, 0x10c4490));
  ((undefined4 *)(gen_frame + 0xc))[0x14] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x14], REFG(float, 0x10ac108));
  ((undefined4 *)(gen_frame + 0xc))[0x15] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x15], REFG(float, 0x10c4490));
  if (uVar1 < 0x16) {
    (*(undefined4 *)(gen_frame + 0x8)) = ((undefined4 *)(gen_frame + 0xc))[(int)(uVar1)];
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c8) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c8),(*(undefined4 *)(gen_frame + 0x8)));
  F_00aa1d10(*(undefined * PTR32 *)((int)this + 0x1c8),(uint)*(byte *)(uVar2 + 0x1680));
  F_00aa1cc0(*(undefined * PTR32 *)((int)this + 0x1c8),*(undefined4 *)(uVar2 + 0x1678),
               *(undefined4 *)(uVar2 + 0x167c));
  iVar3 = 0;
  puVar4 = (undefined4 *)(uVar2 + 0x16b0);
  do {
    F_00aa80c0(*(undefined * PTR32 *)((int)this + 0x1c8),iVar3,*puVar4,puVar4[1]);
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0x1e8;
  } while (iVar3 < 2);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 1;
}

/* ref: FUN_007d64e0 */
uint F_007d64e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d64e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d42e4));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 6;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentInventory::vf5 */
unsigned int F_007d6510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d6510u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  if ((param_4 & 0x1f) != 0) {
    F_00772170(in_ecx,in_esi,in_edi,*(undefined4 *)(in_ecx + 0xc),0);
  }
  return 0;
}

/* ref: FUN_007d6530 */
uint F_007d6530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d6530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x28);
  if ((piVar1 != (int *)0x0) &&
     ((uVar2 = piVar1[0x90], uVar2 == *(uint *)((int)this + 8) || ((char)param_1 != '\0')))) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_007d6570 */
uint F_007d6570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0x78) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x78) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d65a0 */
uint F_007d65a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d65a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0xdc) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0xdc) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d65e0 */
uint F_007d65e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d65e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0xe8) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0xe8) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,1);
  }
  return uVar3;
}

/* ref: FUN_007d6620 */
uint F_007d6620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0xe8) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0xe8) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,2);
  }
  return uVar3;
}

/* ref: FUN_007d6660 */
uint F_007d6660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0x80) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x80) + 0x10)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d66a0 */
uint F_007d66a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d66a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0x120) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x120) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d66e0 */
uint F_007d66e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d66e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined1 * puVar4;
  uint uVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = *(undefined4 *)((int)this + 0x30);
  bVar3 = F_00ac2f60(&REFG(undefined, 0x14bcf40),2,uVar1);
  uVar5 = CONCAT31(extraout_var,bVar3);
  if (bVar3 != 0) {
    fVar7 = F_00ac3090(&REFG(undefined, 0x14bcf40),2,uVar1);
    dVar6 = F_00ac3060(&REFG(undefined, 0x14bcf40),2,uVar1);
    dVar6 = (double)((float)GEN_TOF((((float10)fVar7 - (float10)dVar6) * (float10)REFG(double, 0x10944b8))));
    if (dVar6 < 0.0) {
      dVar6 = dVar6 - REFG(double, 0x1088108);
    }
    else {
      dVar6 = dVar6 + REFG(double, 0x1088108);
    }
    uVar5 = (uint)dVar6;
    if (0 < (int)uVar5) {
      if ((int)uVar5 < 10) {
        (*(undefined4 *)(gen_frame + 0x9)) = 0;
        (*(undefined4 *)(gen_frame + 0xd)) = 0;
        (*(undefined4 *)(gen_frame + 0x11)) = 0;
        (*(undefined4 *)(gen_frame + 0x15)) = 0;
        (*(undefined4 *)(gen_frame + 0x19)) = 0;
        (*(undefined4 *)(gen_frame + 0x1d)) = 0;
        (*(undefined4 *)(gen_frame + 0x21)) = 0;
        (*(undefined2 *)(gen_frame + 0x25)) = 0;
        (*(undefined1 *)(gen_frame + 0x27)) = 0;
        (*(undefined1 *)(gen_frame + 0x8)) = 0;
        dVar6 = (double)(float)((float10)(int)uVar5 / (float10)REFG(double, 0x10944b8));
        F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x20,"%2.1f",(int)(ulonglong)gen_d2bits(dVar6),
                   (int)((ulonglong)gen_d2bits(dVar6) >> 0x20));
        puVar4 = &(*(undefined1 *)(gen_frame + 0x8));
      }
      else {
        iVar8 = (int)uVar5 / 10;
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        puVar4 = (undefined1 *)F_00462880(this_00,iVar8);
      }
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28),2,puVar4,0,1,0);
      iVar8 = *(int *)((int)this + 0x24);
      iVar2 = *(int *)(iVar8 + 0x20);
      uVar5 = *(uint *)(iVar2 + 8) | 2;
      *(uint *)(iVar2 + 8) = uVar5;
      *(undefined1 *)(iVar8 + 0x1d) = 1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar5;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: FUN_007d6840 */
unsigned int F_007d6840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d6840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != param_1 + 1) {
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xe,param_1,0,1,0);
      *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x100;
    }
  }
  return 0;
}

/* ref: FUN_007d6880 */
byte F_007d6880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d6880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined * puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  bVar1 = *(byte *)((int)this + 0x45);
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x60) != -2) {
    *(undefined4 *)(iVar11 + 0x60) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 100) != -2) {
    *(undefined4 *)(iVar11 + 100) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x68) != -2) {
    *(undefined4 *)(iVar11 + 0x68) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x6c) != -2) {
    *(undefined4 *)(iVar11 + 0x6c) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x70) != -2) {
    *(undefined4 *)(iVar11 + 0x70) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (*(char *)(param_2 + 0xa3) != '\a') {
    uVar10 = 0;
    do {
      if (*(int *)(param_1 + uVar10 * 4) != 0) {
        if ((*(char *)((int)param_3 + 6) == '\0') || (uVar6 = F_00a3a860(param_3), uVar6 == 0)) {
          uVar5 = *((ushort *)GEN_TOP(((int)param_3 + (uVar10 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar6 = uVar10;
          pvVar7 = (undefined *)F_00a3a860(param_3);
          uVar5 = F_0071d2c0(pvVar7,uVar6);
        }
        if (uVar5 != 0) {
          uVar6 = F_00a3ba20((uint)*((byte *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 0x28))),param_3,0);
          ((uint *)(gen_frame + 0x20))[(int)(*((byte *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 0x28))))] = uVar6;
          if ((int)uVar6 < 0) {
            F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
            return 0;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
    uVar10 = 0;
    (*(int *)(gen_frame + 0x14)) = 0x33;
    (*(int *)(gen_frame + 0x8)) = 0x60;
    do {
      if (*(int *)(param_1 + uVar10 * 4) != 0) {
        if ((*(char *)((int)param_3 + 6) == '\0') || (uVar6 = F_00a3a860(param_3), uVar6 == 0)) {
          uVar5 = *((ushort *)GEN_TOP(((int)param_3 + (uVar10 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar6 = uVar10 & 0xff;
          pvVar7 = (undefined *)F_00a3a860(param_3);
          uVar5 = F_0071d2c0(pvVar7,uVar6);
        }
        if (uVar5 != 0) {
          iVar12 = *(int *)((int)this + 0x24);
          iVar11 = *(int *)(iVar12 + 0x20);
          if (*(uint *)(iVar11 + (*(int *)(gen_frame + 0x8))) != (uint)*(byte *)(param_4 + uVar10)) {
            *(uint *)(iVar11 + (*(int *)(gen_frame + 0x8))) = (uint)*(byte *)(param_4 + uVar10);
            *(undefined1 *)(iVar12 + 0x1d) = 1;
          }
          uVar6 = (uint)bVar1;
          uVar13 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + (uint)*(byte *)(param_4 + uVar10) * 4)));
          uVar14 = 0x201;
          pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))))
          ;
          uVar6 = F_00461c60(pvVar7,uVar14,uVar13,uVar6);
          F_00431250(*(undefined * PTR32 *)((int)this + 0x28),(*(int *)(gen_frame + 0x14)) + -6,uVar6,0,1,0);
          if ((*(char *)((int)param_3 + 6) == '\0') || (uVar6 = F_00a3a860(param_3), uVar6 == 0))
          {
            bVar4 = *((byte *)GEN_TOP(((uVar10 & 0xff) + 0x2a + (int)param_3)));
          }
          else {
            uVar6 = uVar10 & 0xff;
            pvVar7 = (undefined *)F_00a3a860(param_3);
            bVar4 = F_0071d300(pvVar7,uVar6);
          }
          iVar12 = *(int *)(param_1 + uVar10 * 4);
          iVar11 = (int)*(char *)(bVar4 + 0x29 + iVar12);
          if (iVar11 < 1) {
            puVar9 = &REFG(undefined, 0x10bded6);
          }
          else {
            bVar4 = *(byte *)(iVar12 + 0x28);
            ((uint *)(gen_frame + 0x20))[(int)(bVar4)] = ((uint *)(gen_frame + 0x20))[(int)(bVar4)] + iVar11;
            uVar6 = F_00a6ad20((uint)bVar4,param_2);
            if ((int)uVar6 < (int)((uint *)(gen_frame + 0x20))[(int)(*(byte *)(iVar12 + 0x28))]) {
              iVar11 = iVar11 + (uVar6 - ((uint *)(gen_frame + 0x20))[(int)(*(byte *)(iVar12 + 0x28))]);
              if (iVar11 < 0) {
                iVar11 = 0;
              }
              (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 1 << ((byte)(*(uint *)(gen_frame + 0x10)) & 0x1f);
            }
            uVar6 = (uint)bVar1;
            uVar8 = (uint)*((byte *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 0x28)));
            uVar14 = 1;
            uVar13 = 0x20f;
            pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            puVar9 = (undefined *)F_00461ea0(pvVar7,uVar13,uVar8,uVar14,iVar11,uVar6);
          }
          F_00431250(*(undefined * PTR32 *)((int)this + 0x28),(*(int *)(gen_frame + 0x14)),puVar9,0,1,0);
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 4;
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
          (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
  }
  if ((*(uint *)(gen_frame + 0x10)) < *(byte *)(param_2 + 0xa5)) {
    iVar12 = (*(uint *)(gen_frame + 0x10)) * 4 + 0x60;
    iVar11 = (*(uint *)(gen_frame + 0x10)) + 0x33;
    do {
      iVar2 = *(int *)((int)this + 0x24);
      iVar3 = *(int *)(iVar2 + 0x20);
      if (*(int *)(iVar3 + iVar12) != -1) {
        *(undefined4 *)(iVar3 + iVar12) = 0xffffffff;
        *(undefined1 *)(iVar2 + 0x1d) = 1;
      }
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28),iVar11 + -6,&REFG(undefined, 0x10bded7),0,1,0);
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28),iVar11,&REFG(undefined, 0x10bdeff),0,1,0);
      uVar10 = iVar11 - 0x32;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 1;
    } while (uVar10 < *(byte *)(param_2 + 0xa5));
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(uint *)(iVar11 + 0x5c) != (*(uint *)(gen_frame + 0x0))) {
    *(uint *)(iVar11 + 0x5c) = (*(uint *)(gen_frame + 0x0));
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(uint *)(iVar11 + 0x58) != (uint)*(byte *)(param_2 + 0xa5)) {
    *(uint *)(iVar11 + 0x58) = (uint)*(byte *)(param_2 + 0xa5);
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  if (((*(uint *)(gen_frame + 0x10)) != 0) || (*(char *)(param_2 + 0xa5) != '\0')) {
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x20;
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return 1;
}

/* ref: FUN_007d6ca0 */
uint F_007d6ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d6ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x2c) == 6) {
      uVar1 = F_006d5ef0(*(undefined4 *)((int)this + 0x30));
    }
    else if (param_2 == 9999) {
      if (*(int *)(param_1 + 0x34) == 0) goto LAB_007d6d18;
      uVar1 = F_006c0940(*(undefined4 *)(param_1 + 0x30),(uint)*(byte *)(param_1 + 0xae),
                           CONCAT31((int3)(param_3 - 0xf4241U >> 8),param_3 - 0xf4241U < 999999));
    }
    else {
      uVar1 = F_006c0a30(*(undefined4 *)(param_1 + 0x30),(uint)*(byte *)(param_1 + 0xae),param_2,
                           param_4);
    }
    if (uVar1 != 0) {
      uVar3 = 0x1e4;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_00461bb0(pvVar2,uVar3,uVar1);
      goto LAB_007d6d4b;
    }
  }
LAB_007d6d18: ;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x1f7;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(pvVar2,uVar3,uVar4,uVar5);
LAB_007d6d4b: ;
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x14,uVar1,0,1,0);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 4;
  return uVar1;
}

/* ref: FUN_007d6d70 */
byte F_007d6d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_1 != 0 || param_2 != 0) {
    uVar1 = F_00aae060(&REFG(undefined, 0x14b5ef0),param_1,param_2);
    if (uVar1 == 0) {
      return 0;
    }
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 1;
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x15,uVar1,0,1,0);
  }
  return 1;
}

/* ref: FUN_007d6dc0 */
uint F_007d6dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = 0;
  if (param_1 != (undefined *)0x0) {
    iVar1 = *(int *)((int)this + 0x2c);
    if ((((iVar1 != 2) || (param_2 == 0x7d9)) && (iVar1 != 6)) && (iVar1 != 0xd)) {
      uVar6 = 100;
      goto LAB_007d6e80;
    }
    bVar2 = F_00a36000(param_1);
    uVar6 = (uint)bVar2;
    if (bVar2 != 0) {
      if (uVar6 != 100) goto LAB_007d6e80;
      if (*(char *)((int)param_1 + 6) == '\0') {
LAB_007d6e64: ;
        uVar3 = *(ushort *)((int)param_1 + 0x12);
      }
      else {
        uVar5 = F_00a3a860(param_1);
        if (uVar5 == 0) goto LAB_007d6e64;
        pvVar4 = (undefined *)F_00a3a860(param_1);
        uVar3 = F_00906d60(pvVar4);
      }
      if (uVar3 != 30000) {
        uVar6 = 99;
      }
      goto LAB_007d6e80;
    }
    if (*(char *)((int)param_1 + 6) == '\0') {
LAB_007d6e2b: ;
      uVar3 = *(ushort *)((int)param_1 + 0x12);
    }
    else {
      uVar5 = F_00a3a860(param_1);
      if (uVar5 == 0) goto LAB_007d6e2b;
      pvVar4 = (undefined *)F_00a3a860(param_1);
      uVar3 = F_00906d60(pvVar4);
    }
    if (uVar3 != 0) {
      uVar6 = 1;
      goto LAB_007d6e80;
    }
  }
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x4000;
LAB_007d6e80: ;
  uVar7 = 0x1e3;
  uVar5 = uVar6;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_00461bb0(pvVar4,uVar7,uVar5);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x17,uVar5,0,1,0);
  uVar5 = *(uint *)((int)this + 0x24);
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x4c))) != uVar6) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x4c))) = uVar6;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  return uVar5;
}

/* ref: FUN_007d6ed0 */
uint F_007d6ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = F_007723a0(this,param_1,param_2);
  uVar4 = 0x1e3;
  uVar3 = uVar2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_00461bb0(this_00,uVar4,uVar3);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x18,uVar3,0,1,0);
  iVar1 = *(int *)((int)this + 0x24);
  uVar3 = *(uint *)(iVar1 + 0x20);
  if (*(uint *)(uVar3 + 0x48) != uVar2) {
    *(uint *)(uVar3 + 0x48) = uVar2;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return uVar3;
}

/* ref: FUN_007d6f30 */
uint F_007d6f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  bVar1 = *(byte *)((int)this + 0x45);
  uVar8 = 0;
  uVar7 = 0;
  do {
    if ((*(int *)(param_1 + uVar7 * 4) == 0) || (uVar4 = F_00ab2290(uVar7), uVar4 == 0))
    goto LAB_007d6fe1;
    bVar2 = *(byte *)(param_2 + 0xa0);
    if (bVar2 == 0) {
LAB_007d6f93: ;
      if ((uVar7 != 0x15) && (uVar7 != 0x18)) {
LAB_007d6f9d: ;
        uVar5 = (uint)bVar1;
        iVar10 = *(int *)(param_1 + uVar7 * 4);
        uVar6 = (uint)(0 < iVar10);
        uVar9 = 0x200;
        uVar4 = uVar7;
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar4 = F_00461ea0(this_00,uVar9,uVar4,uVar6,iVar10,uVar5);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),uVar8 + 0x1e,uVar4,0,1,0);
        uVar8 = uVar8 + 1;
        if (5 < uVar8) break;
      }
    }
    else if (bVar2 < 3) {
      if (((uVar7 != 0xc) && (uVar7 != 0xe)) && (uVar7 != 0xd)) goto LAB_007d6f9d;
    }
    else {
      if (bVar2 != 3) goto LAB_007d6f93;
      if ((uVar7 != 0x11) && (uVar7 != 0x12)) goto LAB_007d6f9d;
    }
LAB_007d6fe1: ;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x4a);
  iVar10 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar10 + 0x20);
  if (*(uint *)(iVar3 + 0x50) != uVar8) {
    *(uint *)(iVar3 + 0x50) = uVar8;
    *(undefined1 *)(iVar10 + 0x1d) = 1;
  }
  return uVar8;
}

/* ref: FUN_007d72e0 */
byte F_007d72e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7d72e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    uVar2 = F_00ab25a0((uint)*(byte *)((*(int *)&gen_args[2]) + 0xa6));
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        if (*(char *)(uVar2 + 4 + uVar4) == '\x01') break;
        uVar4 = uVar4 + 1;
        uVar3 = 0;
      } while (uVar4 < 0xe);
    }
    (*(uint *)&gen_args[8]) = (*(uint *)&gen_args[8]) & 0xffffff;
    bVar1 = F_00772840((int)&(*(uint *)&gen_args[8]) + 3,(*(undefined4 *)&gen_args[3]),uVar3);
    if (bVar1 != 0) {
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
        uVar3 = F_00a3bca0(0xc,REFG(undefined4, 0x14a4258),uVar3,0);
        if (-1 < (int)uVar3) {
          if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[8]) + 3)) == '\0') {
            return 1;
          }
          *(*(int * PTR32 *)&gen_args[7]) = ((*(uint *)&gen_args[6]) & 0xffff) - uVar3;
          return 1;
        }
      }
      else {
        uVar3 = F_00a3bca0(0xd,REFG(undefined4, 0x14a4258),uVar3,0);
        if (-1 < (int)uVar3) {
          if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[8]) + 3)) == '\0') {
            return 1;
          }
          *(*(int * PTR32 *)&gen_args[4]) = ((*(uint *)&gen_args[5]) & 0xffff) - uVar3;
          return 1;
        }
      }
    }
  }
  else if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
    if (((char)(*(uint *)&gen_args[8]) == '\0') && ((*(int *)&gen_args[9]) == 0)) {
      uVar3 = F_00a3bca0(0xc,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
    }
    else {
      uVar3 = F_00a3ba20(0xc,(*(int *)&gen_args[9]),1);
    }
    if (-1 < (int)uVar3) {
      *(*(int * PTR32 *)&gen_args[7]) = uVar3 - ((*(uint *)&gen_args[6]) & 0xffff);
      return 1;
    }
  }
  else {
    if (((char)(*(uint *)&gen_args[8]) == '\0') && ((*(int *)&gen_args[9]) == 0)) {
      uVar3 = F_00a3bca0(0xd,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
    }
    else {
      uVar3 = F_00a3ba20(0xd,(*(int *)&gen_args[9]),1);
    }
    if (-1 < (int)uVar3) {
      *(*(int * PTR32 *)&gen_args[4]) = uVar3 - ((*(uint *)&gen_args[5]) & 0xffff);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007d7450 */
uint F_007d7450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x24);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 4))) != param_1) {
    *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 4))) = param_1;
    *(undefined1 *)(uVar1 + 0x1d) = 1;
  }
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x400;
  return uVar1;
}

/* ref: FUN_007d7480 */
uint F_007d7480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7d7480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0,param_6,0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),1,param_7,0,1,0);
  iVar1 = *(int *)((int)this + 0x24);
  piVar2 = *(int * PTR32 *)(iVar1 + 0x20);
  if (*piVar2 != param_5) {
    *piVar2 = param_5;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar3 + 0x28) != (param_2 & 0xff)) {
    *(uint *)(iVar3 + 0x28) = param_2 & 0xff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar3 + 0x30) != (param_4 & 0xff)) {
    *(uint *)(iVar3 + 0x30) = param_4 & 0xff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar3 + 0x2c) != (param_3 & 0xff)) {
    *(uint *)(iVar3 + 0x2c) = param_3 & 0xff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  uVar4 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xd,&REFG(undefined, 0x10bdf2e),0,1,0);
  return uVar4;
}

/* ref: FUN_007d7520 */
uint F_007d7520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d7520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  if (param_1 == (undefined *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = F_00a3a8a0(param_1);
    uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),param_3,0,1,1);
  }
  if (param_3 - 0x17U < 4) {
    uVar3 = F_00a3c240(&REFG(undefined, 0x14a4230),param_3);
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (param_2 < 2) {
    uVar5 = 0x238;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
    uVar2 = F_00461bb0(pvVar4,uVar5,uVar3);
  }
  else {
    uVar5 = 0x239;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
    uVar2 = F_00461d60(pvVar4,uVar5,uVar2,param_2,uVar3);
  }
  uVar2 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xd,uVar2,0,1,0);
  return uVar2;
}

/* ref: FUN_007d75c0 */
uint F_007d75c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d75c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_4 & 0xff;
  uVar3 = (uint)(-1 < param_3);
  iVar2 = ((char)param_2 != '\0') + 0x1f8;
  iVar4 = param_3;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_00461d60(this_00,iVar2,uVar3,iVar4,uVar1);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),param_1 + 9,uVar1,0,1,0);
  uVar1 = 0;
  if (param_3 < 1) {
    if (param_3 < 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  iVar4 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(iVar4 + 0x20);
  if (*(uint *)(iVar2 + 0x14 + param_1 * 4) != uVar1) {
    *(uint *)(iVar2 + 0x14 + param_1 * 4) = uVar1;
    *(undefined1 *)(iVar4 + 0x1d) = 1;
  }
  return uVar1;
}

/* ref: FUN_007d7640 */
uint F_007d7640(unsigned int gen_a0)
{
  GEN_ENTER(0x7d7640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined1 * puVar4;
  float fVar5;
  double dVar6;
  int iVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  if (*(int *)((int)this + 8) != 0) {
    uVar3 = 0;
    if (*(int *)((int)this + 0x1c) != 0) {
      bVar2 = F_00ac2f60(&REFG(undefined, 0x14bcf40),*(int *)((int)this + 0x1c),
                           *(undefined4 *)((int)this + 0x18));
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        fVar5 = F_00ac3090(&REFG(undefined, 0x14bcf40),*(undefined4 *)((int)this + 0x1c),
                             *(undefined4 *)((int)this + 0x18));
        dVar6 = F_00ac3060(&REFG(undefined, 0x14bcf40),*(undefined4 *)((int)this + 0x1c),
                             *(undefined4 *)((int)this + 0x18));
        dVar6 = (double)((float)GEN_TOF((((float10)fVar5 - (float10)dVar6) * (float10)REFG(double, 0x10944b8))));
        if (dVar6 < 0.0) {
          dVar6 = dVar6 - REFG(double, 0x1088108);
        }
        else {
          dVar6 = dVar6 + REFG(double, 0x1088108);
        }
        uVar3 = (uint)dVar6;
        if (0 < (int)uVar3) {
          if ((int)uVar3 < 10) {
            (*(undefined4 *)(gen_frame + 0x9)) = 0;
            (*(undefined4 *)(gen_frame + 0xd)) = 0;
            (*(undefined4 *)(gen_frame + 0x11)) = 0;
            (*(undefined4 *)(gen_frame + 0x15)) = 0;
            (*(undefined4 *)(gen_frame + 0x19)) = 0;
            (*(undefined4 *)(gen_frame + 0x1d)) = 0;
            (*(undefined4 *)(gen_frame + 0x21)) = 0;
            (*(undefined2 *)(gen_frame + 0x25)) = 0;
            (*(undefined1 *)(gen_frame + 0x27)) = 0;
            (*(undefined1 *)(gen_frame + 0x8)) = 0;
            dVar6 = (double)(float)((float10)(int)uVar3 / (float10)REFG(double, 0x10944b8));
            F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x20,"%2.1f",(int)(ulonglong)gen_d2bits(dVar6),
                       (int)((ulonglong)gen_d2bits(dVar6) >> 0x20));
            puVar4 = &(*(undefined1 *)(gen_frame + 0x8));
          }
          else {
            iVar7 = (int)uVar3 / 10;
            this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                        (*(int * PTR32 *)((int)this + 4))));
            puVar4 = (undefined1 *)F_00462880(this_00,iVar7);
          }
          F_00431250(*(undefined * PTR32 *)((int)this + 0x10),2,puVar4,0,1,0);
          iVar7 = *(int *)((int)this + 0xc);
          iVar1 = *(int *)(iVar7 + 0x20);
          uVar3 = *(uint *)(iVar1 + 0x10) | 2;
          *(uint *)(iVar1 + 0x10) = uVar3;
          *(undefined1 *)(iVar7 + 0x1d) = 1;
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar3;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_007d77b0 */
uint F_007d77b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d77b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),7,param_1,0,1,0);
  uVar1 = *(uint *)((int)this + 0xc);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0xc))) != param_2) {
    *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0xc))) = param_2;
    *(undefined1 *)(uVar1 + 0x1d) = 1;
  }
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 4;
  return uVar1;
}

/* ref: FUN_007d77f0 */
uint F_007d77f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d77f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar1;
  if (param_1 != 0) {
    (*(undefined1 *)(gen_frame + 0x8)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x9)),0,0x7f);
    F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x80,"%d.%02d",param_1 / 1000,((param_1 % 1000) * 100) / 1000);
    puVar5 = &(*(undefined1 *)(gen_frame + 0x8));
    uVar3 = 0x2ca;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_00461190(pvVar2,uVar3,puVar5);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x10),9,uVar1,0,1,0);
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0x2be;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(pvVar2,uVar3,uVar4,uVar6);
    uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),8,uVar1,0,1,0);
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 8;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar1;
}

/* ref: FUN_007d78e0 */
uint F_007d78e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d78e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (param_1 == 0) {
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 699;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar6);
  }
  else {
    (*(undefined1 *)(gen_frame + 0x8)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x9)),0,0x7f);
    F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x80,"%d.%02d",param_1 / 1000,((param_1 % 1000) * 100) / 1000);
    puVar5 = &(*(undefined1 *)(gen_frame + 0x8));
    uVar3 = 0x2ca;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_00461190(pvVar1,uVar3,puVar5);
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xb,uVar2,0,1,0);
  uVar6 = 0;
  uVar4 = 0;
  uVar3 = 0x2bd;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar6);
  uVar2 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),10,uVar2,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x10;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: FUN_007d79e0 */
uint F_007d79e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d79e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 4) != (param_1 & 0xffff)) {
    *(uint *)(iVar2 + 4) = param_1 & 0xffff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0,param_2,0,1,0);
  uVar3 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,param_3,0,1,0);
  return uVar3;
}

/* ref: FUN_007d7a30 */
uint F_007d7a30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7d7a30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  double dVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0x2c5;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x18))))(*(int * PTR32 *)(param_1 + 4))));
  uVar3 = F_0043bd00(pvVar2,uVar4,uVar5,uVar6);
  F_00431250(*(undefined * PTR32 *)(param_1 + 0x10),3,uVar3,0,1,0);
  if (param_2 < 0.0) {
    dVar1 = (double)param_2 - REFG(double, 0x1088108);
  }
  else {
    dVar1 = (double)param_2 + REFG(double, 0x1088108);
  }
  iVar7 = (int)dVar1;
  uVar4 = 0x2c9;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x18))))(*(int * PTR32 *)(param_1 + 4))));
  uVar3 = F_00461bb0(pvVar2,uVar4,iVar7);
  uVar3 = F_00431250(*(undefined * PTR32 *)(param_1 + 0x10),4,uVar3,0,1,0);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  return uVar3;
}

/* ref: FUN_007d7ac0 */
uint F_007d7ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x2c6;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),5,uVar2,0,1,0);
  uVar3 = 0x2c9;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_00461bb0(pvVar1,uVar3,param_1);
  uVar2 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),6,uVar2,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 2;
  return uVar2;
}

/* ref: FUN_007d7b30 */
uint F_007d7b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xc,param_1,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x20;
  return uVar1;
}

/* ref: FUN_007d7b60 */
unsigned int F_007d7b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d7b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if ((byte)param_2 != 0) {
    iVar1 = *(int *)((int)this + 0xc);
    iVar2 = *(int *)(iVar1 + 0x20);
    if (*(int *)(iVar2 + 8) != param_1) {
      *(int *)(iVar2 + 8) = param_1;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    uVar3 = (uint)(byte)param_2;
    uVar4 = 0x2cc;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_00461bb0(this_00,uVar4,uVar3);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xd,uVar3,0,1,0);
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x40;
  }
  return 0;
}

/* ref: FUN_007d7bc0 */
uint F_007d7bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = param_1 & 0xff;
  uVar2 = 0x2ce;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_00461bb0(this_00,uVar2,uVar1);
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xe,uVar1,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x80;
  return uVar1;
}

/* ref: FUN_007d7c00 */
uint F_007d7c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xe: ;
    *(undefined4 *)((int)this + 0x1c) = 1;
    break;
  case 0xf: ;
    *(undefined4 *)((int)this + 0x1c) = 9;
    break;
  case 0x10: ;
    *(undefined4 *)((int)this + 0x1c) = 5;
    break;
  case 0x11: ;
    *(undefined4 *)((int)this + 0x1c) = 6;
    break;
  case 0x12: ;
    *(undefined4 *)((int)this + 0x1c) = 7;
    break;
  case 0x13: ;
    *(undefined4 *)((int)this + 0x1c) = 8;
    break;
  default: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  iVar1 = *(int *)((int)this + 0xc);
  uVar2 = *(uint *)(iVar1 + 0x20);
  if (*(int *)(uVar2 + 0x18) != param_1) {
    *(int *)(uVar2 + 0x18) = param_1;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentLoot::vf5 */
uint F_007d7c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*(int *)(this + 0x68) == 1) {
    bVar1 = F_00772d30();
    if (bVar1 != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    }
  }
  F_00772c00(this);
  uVar2 = F_00ae1d40(&REFG(undefined * PTR32, 0x1338d48));
  uVar3 = uVar2;
  if (*(uint *)(this + 0x20) != uVar2) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar3 = F_00760130(this_00,uVar3);
    *(uint *)(this + 0x20) = uVar2;
  }
  return uVar3;
}

/* ref: FUN_007d7cd0 */
uint F_007d7cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d432c));
  F_0042b630((int)this + 0x10);
  iVar2 = (int)this + 100;
  iVar1 = 0xe;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x554) = 0;
  *(undefined4 *)((int)this + 0x558) = 0;
  F_0042b630((int)this + 0x55c);
  F_0042b630((int)this + 0x5b0);
  *(undefined4 *)((int)this + 0x604) = 0;
  *(undefined4 *)((int)this + 0x9f0) = 0;
  iVar2 = (int)this + 0xa20;
  iVar1 = 0x10;
  do {
    F_00401500(iVar2,0x544,2,((code *)REFP(0x471130)));
    iVar2 = iVar2 + 0xa98;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)this;
}

/* ref: FUN_007d7d80 */
uint F_007d7d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar6 = *(int *)((int)this + 0x554);
  iVar1 = *(int *)((int)this + 0x558);
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  iVar5 = *param_1;
  (*(int *)(gen_frame + 0x14)) = iVar6 * 100 + iVar1;
  if (iVar5 == 0) {
    iVar5 = -1;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(int *)(gen_frame + 0x2c)) = iVar5;
  uVar3 = F_0042a990(param_1 + 1);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
  (*(uint *)(gen_frame + 0x34)) = uVar3;
  bVar2 = F_0043b930(param_1);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),2);
  (*(byte *)(gen_frame + 0x3c)) = bVar2;
  F_00772ea0(this,param_1,((undefined4 *)(gen_frame + 0x0)));
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),9,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar6 = 8;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_007d7e70 */
uint F_007d7e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if ((*(int *)(uVar1 + 0x48) != 0) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x48) + 0xc))), piVar2 != (int *)0x0)) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,param_1)));
    if (piVar2 != (int *)0x0) {
      uVar3 = 5;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
      uVar1 = F_00cb0950(this_00,uVar3);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_007d8100 */
uint F_007d8100(unsigned int gen_a0)
{
  GEN_ENTER(0x7d8100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_0043b900(in_ecx + 0xc);
  *(undefined1 *)(in_ecx + 0xa1c) = 0;
  *(undefined4 *)(in_ecx + 0xbe38) = 1;
  puVar2 = (undefined4 *)(in_ecx + 0x14a8);
  iVar3 = 0x11;
  do {
    *(undefined1 *)(puVar2 + 3) = 0;
    *puVar2 = 9;
    puVar2[1] = 0;
    puVar2[2] = 0;
    F_0043b900(puVar2 + -0x2a2);
    uVar1 = F_0043b900(puVar2 + -0x151);
    puVar2 = puVar2 + 0x2a6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_007d8170 */
uint F_007d8170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d8170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (0x10 < *(uint *)((int)this + 0xbe38)) {
    iVar2 = 0xf;
    this_00 = (undefined *)((int)this + 0x14b8);
    do {
      F_0090d740(this_00,(undefined *)((int)this_00 + 0xa98));
      iVar2 = iVar2 + -1;
      this_00 = (undefined *)((int)this_00 + 0xa98);
    } while (iVar2 != 0);
    *(undefined4 *)((int)this + 0xbe38) = 0x10;
  }
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbe38) * 0xa98 + 0xa20 + (int)this)));
  *(int *)((int)this + 0xbe38) = *(int *)((int)this + 0xbe38) + 1;
  puVar4[0x2a2] = param_1;
  *(undefined1 *)(puVar4 + 0x2a5) = 1;
  puVar4[0x2a3] = *(undefined4 *)((int)this + 0x554);
  puVar4[0x2a4] = *(undefined4 *)((int)this + 0x558);
  *puVar4 = *param_2;
  F_0042ccf0(puVar4 + 1,param_2 + 1);
  iVar2 = (int)param_2 - (int)puVar4;
  puVar3 = puVar4 + 0x16;
  param_2 = (undefined4 *)0xf;
  do {
    F_0042ccf0(puVar3,iVar2 + (int)puVar3);
    puVar3 = puVar3 + 0x15;
    param_2 = (undefined4 *)((int)param_2 + -1);
  } while (param_2 != (undefined4 *)0x0);
  if ((char)param_3 == '\0') {
    F_0043b900(puVar4 + 0x151);
  }
  else {
    puVar4[0x151] = *(undefined4 *)((int)this + 0xc);
    F_0042ccf0(puVar4 + 0x152,(int)this + 0x10);
    puVar4 = puVar4 + 0x167;
    iVar2 = (int)this + 100;
    param_3 = 0xf;
    do {
      F_0042ccf0(puVar4,iVar2);
      iVar2 = iVar2 + 0x54;
      puVar4 = puVar4 + 0x15;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  uVar1 = *(uint *)((int)this + 0xbe38);
  if (uVar1 < 0x11) {
    puVar3 = (undefined4 *)(uVar1 * 0xa98 + 0x14a8 + (int)this);
    iVar2 = 0x11 - uVar1;
    do {
      *(undefined1 *)(puVar3 + 3) = 0;
      *puVar3 = 9;
      puVar3[1] = 0;
      puVar3[2] = 0;
      F_0043b900(puVar3 + -0x2a2);
      uVar1 = F_0043b900(puVar3 + -0x151);
      puVar3 = puVar3 + 0x2a6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentMacro::vf13 */
unsigned int F_007d82e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d82e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    F_007d8100(in_ecx);
  }
  return 0;
}

/* ref: FUN_007d8300 */
uint F_007d8300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  if (*(char *)((int)this + 0x33d4) != '\0') {
    iVar3 = (int)this + 0x438;
    do {
      if ((0xff < *(int *)((int)this + 0x33c8)) || (0xf < uVar2)) break;
      if (*(short *)(iVar3 + 0x18) != 0) {
        F_00915a30(param_1,*(int *)((int)this + 0x33c8),iVar3);
        *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
        uVar2 = uVar2 + 1;
        *(int *)((int)this + 0x33c4) = *(int *)((int)this + 0x33c4) + 1;
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x74;
    } while (local_8 < *(byte *)((int)this + 0x33d4));
  }
  F_0042e430((undefined *)((int)this + 0x40f4),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x4148) = 0;
  *(undefined4 *)((int)this + 0x414c) = 0;
  *(undefined4 *)((int)this + 0x4150) = 0;
  *(undefined4 *)((int)this + 0x4154) = 0;
  *(undefined4 *)((int)this + 0x4158) = 0;
  uVar1 = F_0042a990((int)this + 0x40f4);
  *(uint *)((int)this + 0x4158) = uVar1;
  *(undefined1 *)((int)this + 0x415c) = 0;
  uVar1 = uVar2;
  while ((uVar2 < 0x10 && (*(int *)((int)this + 0x33c8) < 0x100))) {
    F_00915a30(param_1,*(int *)((int)this + 0x33c8),(int)this + 0x4148);
    *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
    *(int *)((int)this + 0x33c4) = *(int *)((int)this + 0x33c4) + 1;
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_007d8410 */
uint F_007d8410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  local_8 = 0;
  local_c = 0;
  if (*(char *)((int)this + 0x33d4) == '\0') {
    return 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x438);
  do {
    iVar1 = *(int *)((int)this + 0x33c8);
    if (0xff < iVar1) {
      return uVar3;
    }
    if (*(short *)(puVar4 + 6) == 0) {
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) == 0) {
        uVar5 = 0;
        uVar3 = F_00404270();
        puVar2 = (undefined4 *)F_00406bd0(0x14,0,uVar3,uVar5);
        uVar3 = local_8;
        if (puVar2 == (undefined4 *)0x0) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = 0;
        }
        else {
          *puVar2 = *puVar4;
          puVar2[1] = puVar4[1];
          puVar2[2] = puVar4[2];
          puVar2[3] = puVar4[3];
          puVar2[4] = puVar4[4];
          *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = puVar2;
        }
      }
      else {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4)));
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2[2] = puVar4[2];
        puVar2[3] = puVar4[3];
        puVar2[4] = puVar4[4];
      }
      *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
      uVar3 = uVar3 + 1;
      *(int *)((int)this + 0x33c0) = *(int *)((int)this + 0x33c0) + 1;
      local_8 = uVar3;
    }
    local_c = local_c + 1;
    puVar4 = puVar4 + 0x1d;
  } while (local_c < *(byte *)((int)this + 0x33d4));
  return uVar3;
}

/* ref: FUN_007d8520 */
byte F_007d8520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8520u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  double dVar2;
  float * pfVar3;
  
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  pfVar3 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x80;
  if (fVar1 < 0.0) {
    dVar2 = (double)fVar1 - REFG(double, 0x1088108);
  }
  else {
    dVar2 = (double)fVar1 + REFG(double, 0x1088108);
  }
  fVar1 = pfVar3[2];
  (*(undefined2 *)(gen_frame + 0x8)) = (short)(int)dVar2;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  if (fVar1 < 0.0) {
    dVar2 = (double)fVar1 - REFG(double, 0x1088108);
  }
  else {
    dVar2 = REFG(double, 0x1088108) + (double)fVar1;
  }
  (*(undefined2 *)(gen_frame + 0xa)) = (short)(int)dVar2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0xec1b;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x10be002);
  F_00915a30(param_1,param_2,&(*(undefined4 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_007d85d0 */
uint F_007d85d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d85d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * in_EAX = 0;
  uint uVar1;
  short sVar2;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0x33d5) != '\0') {
    in_EAX = (short *)((int)this + 0x2890);
    while( true ) {
      if (*(int *)(in_EAX + 2) == 1) {
        sVar2 = *in_EAX;
      }
      else {
        sVar2 = 0;
      }
      if (sVar2 == (short)param_1) break;
      uVar1 = uVar1 + 1;
      in_EAX = in_EAX + 0x3a;
      if (*(byte *)((int)this + 0x33d5) <= uVar1) {
        return (uint)in_EAX;
      }
    }
    *(undefined1 *)((int)this + 0x33d5) = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_007d8630 */
unsigned int F_007d8630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  uint uVar2;
  short sVar3;
  
  uVar2 = 0;
  if (*(char *)((int)this + 0x33d5) != '\0') {
    psVar1 = (short *)((int)this + 0x2890);
    while( true ) {
      if (*(int *)(psVar1 + 2) == 2) {
        sVar3 = *psVar1;
      }
      else {
        sVar3 = 0;
      }
      if (sVar3 == (short)param_1) break;
      uVar2 = uVar2 + 1;
      psVar1 = psVar1 + 0x3a;
      if (*(byte *)((int)this + 0x33d5) <= uVar2) {
        return 0;
      }
    }
    *(undefined1 *)((int)this + 0x33d5) = 0;
  }
  return 0;
}

/* ref: FUN_007d8690 */
uint F_007d8690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  if (*(char *)((int)this + 0x33d7) == '\0') {
    return 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x2d00);
  do {
    iVar1 = *(int *)((int)this + 0x33c8);
    if (0xff < iVar1) {
      return local_8;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) == 0) {
      uVar5 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(0x14,0,uVar2,uVar5);
      if (puVar3 == (undefined4 *)0x0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = 0;
      }
      else {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[4] = puVar4[4];
        *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = puVar3;
      }
    }
    else {
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4)));
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar3[3] = puVar4[3];
      puVar3[4] = puVar4[4];
    }
    *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
    puVar4 = puVar4 + 0x1f;
  } while (local_c < *(byte *)((int)this + 0x33d7));
  return local_8;
}

/* ref: FUN_007d8790 */
uint F_007d8790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  if ((*(int *)((int)this + 0x3398) == *(int *)((int)this + 0x3388)) &&
     ((*(int *)(gen_frame + 0x1c)) = REFG(int, 0x1379694), REFG(int, 0x1379694) != 0)) {
    uVar3 = (uint)REFG(undefined1, 0x1338ad4);
    (*(uint *)(gen_frame + 0x18)) = uVar3;
    if (1 < uVar3) {
      if (REFG(int, 0x14a73a0) == 0) {
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x339c);
      }
      (*(int *)(gen_frame + 0x24)) = 0;
      if (uVar3 != 0) {
        do {
          piVar4 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),(*(int *)(gen_frame + 0x24)));
          if (((piVar4 != (int *)0x0) && (*piVar4 != *(int *)((*(int *)(gen_frame + 0x1c)) + 0x74))) &&
             ((char)piVar4[0x78] != '\0')) {
            bVar2 = F_00773f00(this,(*(undefined4 *)(gen_frame + 0x20)),*piVar4,0,piVar4 + 0x7c);
            uVar6 = (*(uint *)(gen_frame + 0x28));
            if (bVar2 != 0) {
              if (0xff < *(int *)((int)this + 0x33c8)) {
                return (*(uint *)(gen_frame + 0x28));
              }
              fVar1 = gen_bits2f(piVar4[0x7c]);
              (*(undefined4 *)(gen_frame + 0x4)) = 9;
              uVar6 = F_0046e680(fVar1);
              (*(undefined2 *)(gen_frame + 0x8)) = (short)uVar6;
              uVar6 = F_0046e680(GEN_TOF(gen_bits2f(piVar4[0x7e])));
              (*(undefined2 *)(gen_frame + 0xa)) = (short)uVar6;
              (*(undefined4 *)(gen_frame + 0xc)) = 0xec05;
              (*(undefined4 *)(gen_frame + 0x10)) = 1;
              (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4 + 4;
              F_00915a30(param_1,*(undefined4 *)((int)this + 0x33c8),&(*(undefined4 *)(gen_frame + 0x4)));
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
              *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
              uVar6 = (*(uint *)(gen_frame + 0x28));
            }
          }
          iVar5 = (*(int *)(gen_frame + 0x24)) + 1;
          (*(int *)(gen_frame + 0x24)) = iVar5;
        } while (iVar5 < (int)(*(uint *)(gen_frame + 0x18)));
        return uVar6;
      }
    }
  }
  return 0;
}

/* ref: FUN_007d88e0 */
uint F_007d88e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d88e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * this_00;
  float * pfVar3;
  int iVar4;
  
  if ((*(int *)((int)this + 0x3398) == *(int *)((int)this + 0x3388)) && (REFG(int, 0x1379694) != 0)) {
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = (uint)REFG(undefined1, 0x1338ad4);
    if (REFG(int, 0x14a73a0) == 0) {
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x339c);
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    if (REFG(undefined1, 0x1338ad4) != 0) {
      do {
        uVar2 = F_00ae0850(&REFG(undefined, 0x1336e40),(*(int *)(gen_frame + 0x20)));
        if ((uVar2 != 0) &&
           (this_00 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(uVar2 + 0x208)),
           this_00 != (int *)0x0)) {
          iVar4 = this_00[0x1d];
          uVar2 = F_00a5feb0(this_00);
          bVar1 = F_00773f00(this,(*(undefined4 *)(gen_frame + 0x24)),iVar4,0,uVar2);
          if (bVar1 != 0) {
            if (0xff < *(int *)((int)this + 0x33c8)) {
              return (*(uint *)(gen_frame + 0x28));
            }
            (*(undefined4 *)(gen_frame + 0x8)) = 9;
            pfVar3 = (float *)F_00a5feb0(this_00);
            uVar2 = F_0046e680(*pfVar3);
            (*(undefined2 *)(gen_frame + 0xc)) = (short)uVar2;
            uVar2 = F_00a5feb0(this_00);
            uVar2 = F_0046e680(*(float *)(uVar2 + 8));
            (*(undefined2 *)(gen_frame + 0xe)) = (short)uVar2;
            (*(undefined4 *)(gen_frame + 0x10)) = 0xec05;
            (*(undefined4 *)(gen_frame + 0x14)) = 1;
            uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
            (*(uint *)(gen_frame + 0x18)) = uVar2;
            F_00915a30(param_1,*(undefined4 *)((int)this + 0x33c8),&(*(undefined4 *)(gen_frame + 0x8)));
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
            *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
          }
        }
        iVar4 = (*(int *)(gen_frame + 0x20)) + 1;
        (*(int *)(gen_frame + 0x20)) = iVar4;
      } while (iVar4 < (int)(*(uint *)(gen_frame + 0x1c)));
    }
    return (*(uint *)(gen_frame + 0x28));
  }
  return 0;
}

/* ref: FUN_007d8a40 */
uint F_007d8a40(unsigned int gen_a0)
{
  GEN_ENTER(0x7d8a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)((int)this + 0x33b0) >> 0xd & 1) != 0) {
    uVar2 = 9;
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xffffdfff;
  }
  if (*(char *)((int)this + 0x33e0) == '\0') {
    if (*(char *)((int)this + 0x33e2) != '\0') {
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x197);
      if (*(int *)(uVar1 + 0x14) == 1) {
        uVar2 = uVar2 | 1;
        *(undefined1 *)((int)this + 0x33e2) = 0;
      }
    }
  }
  else {
    uVar2 = uVar2 | 2;
  }
  if (*(char *)((int)this + 0x33e1) != '\0') {
    uVar2 = uVar2 | 4;
    *(undefined1 *)((int)this + 0x33e1) = 0;
  }
  return uVar2;
}

/* ref: FUN_007d8ac0 */
uint F_007d8ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0xffff;
  iVar2 = 0xffff;
  if ((*(uint *)((int)this + 0x33b0) >> 9 & 1) != 0) {
    iVar3 = 0;
    iVar2 = 0;
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xfffffdff;
  }
  if ((*(uint *)((int)this + 0x33b0) >> 10 & 1) != 0) {
    uVar1 = F_00ab1ea0(*(undefined4 *)((int)this + 0x33bc));
    if (uVar1 != 0) {
      iVar3 = (int)(((float10)GEN_TOD((*(short *)(uVar1 + 0x12) + -0x400))) /
                   (float10)*(float *)((int)this + 0x337c));
      iVar2 = (int)(((float10)GEN_TOD((*(short *)(uVar1 + 0x14) + -0x400))) /
                   (float10)*(float *)((int)this + 0x337c));
    }
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xfffffbff;
    *(undefined4 *)((int)this + 0x33bc) = 0;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) != iVar3) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) = iVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return param_1;
}

/* ref: Client::UI2::Agent::AgentMap::vf3 */
uint F_007d8ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d8ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined2 *)(this + 0x33d5) = 0;
  this[0x33d7] = (undefined1)0x0;
  *(undefined4 *)(this + 0x33a8) = 0;
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x3384) = 0;
  *(undefined4 *)(this + 0x339c) = 0;
  *(undefined4 *)(this + 0x3398) = 0;
  *(undefined4 *)(this + 0x33a0) = 0;
  F_0042e430(this + 0xf0,&REFG(undefined, 0x10be015));
  *(undefined4 *)(this + 0x337c) = REFG(float, 0x1094884);
  F_0042e430(this + 0x144,&REFG(undefined, 0x10be016));
  *(undefined4 *)(this + 0x33a4) = 0;
  *(undefined4 *)(this + 0x33a8) = 0;
  *(undefined4 *)(this + 0x33b4) = 0;
  *(undefined4 *)(this + 0x33b0) = 0;
  *(undefined2 *)(this + 0x33d5) = 0;
  this[0x33d4] = (undefined1)0x0;
  this[0x33d7] = (undefined1)0x0;
  *(undefined2 *)(this + 0x33de) = 0;
  this[0x33d9] = (undefined1)0x0;
  this[0x33e3] = (undefined1)0x0;
  F_00773d70(this);
  F_0042aca0(this + 0x33c);
  uVar2 = F_0042aca0(this + 0x390);
  return uVar2;
}

/* ref: FUN_007d8c80 */
ushort F_007d8c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7d8c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined * this_00;
  byte bVar1;
  ushort uVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  bVar1 = *(byte *)((int)this + 0x33d4);
  uVar2 = (ushort)CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (bVar1 < 0x50) {
    this_00 = (undefined *)((uint)bVar1 * 0x74 + 0x3e4 + (int)this);
    *(byte *)((int)this + 0x33d4) = bVar1 + 1;
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    uVar3 = F_0042a990(this_00);
    *(uint *)((int)this_00 + 100) = uVar3;
    *(undefined1 *)((int)this_00 + 0x68) = 0;
    *(undefined4 *)((int)this_00 + 0x6c) = 0;
    *(undefined4 *)((int)this_00 + 0x70) = 0;
    F_0042ccf0(this_00,param_6);
    *(short *)((int)this_00 + 0x5a) = (short)param_3 + -0x400;
    *(short *)((int)this_00 + 0x58) = (short)param_2 + -0x400;
    *(undefined4 *)((int)this_00 + 0x60) = param_5;
    *(undefined4 *)((int)this_00 + 0x54) = param_1;
    *(undefined4 *)((int)this_00 + 0x5c) = param_4;
    uVar3 = F_0042a990(this_00);
    *(uint *)((int)this_00 + 100) = uVar3;
    *(ushort *)((int)this_00 + 0x6c) = (ushort)(byte)param_7;
    *(ushort *)((int)this_00 + 0x6e) = (ushort)param_8;
    *(undefined4 *)((int)this_00 + 0x70) = param_9;
    uVar2 = (ushort)param_8;
  }
  return uVar2;
}

/* ref: FUN_007d8d40 */
uint F_007d8d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  cVar1 = *(char *)((int)this + 0x33da);
  *(char *)((int)this + 0x33da) = (char)param_1;
  if (cVar1 != (char)param_1) {
    uVar2 = F_00774820(this);
  }
  return uVar2;
}

/* ref: FUN_007d8d70 */
byte F_007d8d70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x7d8d70u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  if ((*param_1 == 0xebf9) &&
     ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))) {
    bVar1 = F_007743e0(param_1,param_2,param_3,0);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_007d8db0 */
byte F_007d8db0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x7d8db0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  if ((*param_1 == 0xec69) &&
     ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))) {
    bVar1 = F_007743e0(param_1,param_2,param_3,1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_007d8df0 */
byte F_007d8df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d8df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*param_2 != 0) {
    bVar1 = F_00b070e0();
    if (bVar1 != 0) {
      uVar3 = (uint)*param_2;
      pvVar2 = (undefined *)F_00b070f0();
      uVar3 = F_00b084c0(pvVar2,uVar3);
      if (uVar3 != 0) {
        uVar4 = (uint)*param_2;
        pvVar2 = (undefined *)F_00b070f0();
        bVar1 = F_00b08860(pvVar2,uVar4);
        uVar4 = (uint)bVar1;
        uVar7 = 0x23;
        pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar4 = F_00461bb0(pvVar2,uVar7,uVar4);
        uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s %s",uVar4,param_3);
        F_0042ccf0(param_1,uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        bVar1 = F_00b07f50(uVar3);
        if (bVar1 != 0) {
          uVar3 = (uint)*param_2;
          pvVar2 = (undefined *)F_00b070f0();
          uVar6 = F_00b08810(pvVar2,uVar3);
          uVar3 = F_00476000();
          iVar5 = (int)uVar6 - uVar3;
          uVar7 = 0x21;
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4));
          uVar3 = F_00462440(uVar3,param_1,iVar5,uVar7);
          uVar3 = F_0042a990(uVar3);
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),(*(undefined * PTR32 (*)[1])REFP(0x10c01f4)),uVar3);
          F_0042e360(param_1,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_007d8f20 */
uint F_007d8f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8f20u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  iVar4 = 0;
  if (param_2 != 0) {
    local_c = 0;
    local_8 = 0;
    do {
      uVar3 = 1 << ((byte)iVar4 & 0x1f);
      if ((param_2 & uVar3) != 0) {
        bVar1 = F_00ab5430(&REFG(undefined, 0x14b5268),param_1 & 0xffff,iVar4);
        if (bVar1 != 0) {
          local_c = local_c | uVar3;
          local_8 = local_8 + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    uVar2 = 0;
    uVar3 = 1;
    iVar4 = 0x20;
    do {
      if ((param_2 & uVar3) != 0) {
        uVar2 = uVar2 + 1;
      }
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (local_8 < uVar2) {
      return local_c;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_007d8fa0 */
uint F_007d8fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d8fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x339c) = *(undefined4 *)((int)this + 0x338c);
  uVar1 = F_00ab1e70(*(undefined4 *)((int)this + 0x338c));
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x33ac) = (uint)*(byte *)(uVar1 + 0x20);
  }
  *(undefined4 *)((int)this + 0x3398) = *(undefined4 *)((int)this + 0x3388);
  *(undefined4 *)((int)this + 0x33a0) = *(undefined4 *)((int)this + 0x3390);
  F_0042ccf0((undefined *)((int)this + 0xf0),(int)this + 0x9c);
  *(undefined4 *)((int)this + 0x337c) = *(undefined4 *)((int)this + 0x3380);
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x144),(int)this + 0x198);
  *(undefined4 *)((int)this + 0x33a4) = *(undefined4 *)((int)this + 0x3394);
  return uVar1;
}

/* ref: FUN_007d9020 */
unsigned int F_007d9020(unsigned int gen_a0)
{
  GEN_ENTER(0x7d9020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x1370b90) != 0) && (param_1 != 0)) && (*(int *)(param_1 + 0x4078) != -1)) {
    *(undefined1 *)(param_1 + 0x33e1) = 1;
  }
  return 0;
}

/* ref: FUN_007d9050 */
uint F_007d9050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d9050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4374));
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentMarker::vf1 */
uint F_007d9070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d9070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * puVar1;
  undefined * this_00;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    break;
  case 1: ;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    puVar1 = (uint *)F_00ab28d0(uVar2);
    if (puVar1 != (uint *)0x0) {
      iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
      uVar4 = puVar1[1];
      uVar5 = 0x800;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x54))))(*(int * PTR32 *)(this + 4))));
      F_00434720(this_00,uVar4,iVar3,uVar5,uVar2);
    }
  default: ;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)(this + 8) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((param_2[0x18] & 0xf) != 0) {
    F_00774ac0(*(undefined4 *)(param_2 + 0x1c));
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  F_00774ac0(0);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentMonsterNote::vf11 */
byte F_007d9160(unsigned int gen_a0)
{
  GEN_ENTER(0x7d9160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)((uint)**((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 8) & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007d9190 */
uint F_007d9190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d9190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 uVar1;
  char cVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  char cVar4;
  int iVar5;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  *(char *)((int)this + 0x21) = (char)param_1;
  cVar4 = (char)param_2;
  cVar2 = (char)param_1;
  do {
    if (cVar2 < '\b') {
      *(undefined1 *)((int)this + 0x20) =
           *(undefined1 *)(&REFG(undefined4, 0x10c0218) + *(char *)((int)this + 0x21));
      *(char *)((int)this + 0x22) = (char)uVar3;
      return uVar3;
    }
    *(char *)((int)this + 0x20) = cVar4;
    uVar3 = F_00ab3960((int)cVar4);
    if (uVar3 != 0) {
      uVar1 = *(undefined1 *)(uVar3 + 0x14);
      *(undefined1 *)((int)this + 0x22) = uVar1;
      return CONCAT31((int3)(uVar3 >> 8),uVar1);
    }
    uVar3 = F_00435250((uint)REFG(undefined1, 0x14ab0d4),0);
    iVar5 = 0;
    do {
      if ((&REFG(undefined4, 0x10c0218))[iVar5] == uVar3) {
        uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)iVar5);
        if (-1 < (char)iVar5) goto LAB_007d91f8;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    uVar3 = F_00774d60((uint)REFG(undefined1, 0x14ab14e),0);
LAB_007d91f8: ;
    cVar4 = '\0';
    cVar2 = (char)uVar3;
    *(char *)((int)this + 0x21) = cVar2;
  } while( true );
}

/* ref: FUN_007d9230 */
uint F_007d9230(unsigned int gen_a0)
{
  GEN_ENTER(0x7d9230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = *(char *)((int)this + 0x21);
  if ('\a' < cVar3) {
    cVar3 = '\x01';
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),REFG(undefined1, 0x14ab29a));
    if (REFG(undefined1, 0x14ab29a) != 0) {
      iVar2 = 0;
      do {
        if (*(uint *)(&REFG(undefined1, 0x10c0244) + iVar2 * 4) == (uint)REFG(undefined1, 0x14ab29a)) {
          cVar3 = (char)iVar2 + '\b';
          (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar3);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
    F_007d9190(this,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)));
    uVar1 = (('\a' < cVar3) - 1 & 0xfff0e4d0) + 1000000;
    *(uint *)((int)this + 0x1c) = uVar1;
    return uVar1;
  }
  uVar1 = F_00435250((uint)REFG(undefined1, 0x14ab0d4),0);
  if ((&REFG(undefined4, 0x10c0218))[*(char *)((int)this + 0x21)] != uVar1) {
    iVar2 = 0;
    do {
      if ((&REFG(undefined4, 0x10c0218))[iVar2] == uVar1) {
        cVar3 = (char)iVar2;
        if (-1 < cVar3) goto LAB_007d928f;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    uVar1 = F_00774d60((uint)REFG(undefined1, 0x14ab14e),0);
    cVar3 = (char)uVar1;
  }
LAB_007d928f: ;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar3);
  uVar1 = F_007d9190(this,(*(undefined4 *)(gen_frame + 0x8)),0);
  *(undefined4 *)((int)this + 0x1c) = 10000;
  return uVar1;
}

/* ref: FUN_007d9310 */
uint F_007d9310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d9310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  in_ecx[4] = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d43d4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d43c4));
  in_ecx[4] = (*(undefined * PTR32 (*)[2])REFP(0x10d43b8));
  in_ecx[5] = 0;
  in_ecx[6] = 4;
  F_0042b630(in_ecx + 7);
  F_0042b630(in_ecx + 0x1c);
  in_ecx[0x31] = 0;
  *(undefined1 *)(in_ecx + 0x32) = 0xff;
  *(undefined2 *)((int)in_ecx + 0xca) = 0;
  in_ecx[0x33] = 0;
  puVar1 = in_ecx + 0x98;
  param_2 = 4;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  *(undefined1 *)(in_ecx + 0x11a) = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentNpcTrade::vf3 */
uint F_007d93d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d93d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_0042aca0(this + 0x1c);
  uVar2 = F_0042aca0(this + 0x70);
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x14) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,iVar1,0);
  }
  *(undefined4 *)(this + 0xcc) = 0;
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_007d9440 */
uint F_007d9440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d9440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 != 0) && (*(byte *)(uVar2 + 0xa6) != 0)) {
    uVar2 = F_00ab25a0((uint)*(byte *)(uVar2 + 0xa6));
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        if ('\0' < *(char *)(uVar2 + 4 + iVar4)) goto LAB_007d9484;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xe);
    }
    iVar4 = -1;
LAB_007d9484: ;
    uVar2 = F_00434e40(iVar4);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    if (*(undefined * PTR32 *)(uVar3 + 0x130) != (undefined *)0x0) {
      bVar1 = F_0076a850(*(undefined * PTR32 *)(uVar3 + 0x130),param_1,uVar2);
      if (bVar1 != 0) {
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_007d94d0 */
uint F_007d94d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d94d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * this_01;
  int * piVar7;
  int iVar8;
  ulonglong uVar9;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[2]);
  iVar8 = (*(int *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  uVar2 = F_00b9f960(&REFG(undefined, 0x14b0f2c));
  F_009222f0(((byte *)(gen_frame + 0x10)),uVar2);
  uVar2 = (uint)((byte *)(gen_frame + 0x10))[0];
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = uVar2;
  if (*((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xdc))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xdc))) = uVar2;
    *(undefined1 *)(iVar8 + 0x1d) = 1;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4)))) {
    (*(int *)(gen_frame + 0xc)) = 0x1ac;
    (*(int *)(gen_frame + 0x8)) = 0xec;
    piVar7 = ((int *)(gen_frame + 0x14));
    do {
      iVar1 = piVar7[2];
      if ((char)piVar7[0x18] == '\0') {
        iVar3 = *piVar7;
      }
      else {
        iVar3 = *piVar7 + 1000000;
      }
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) == 2) {
        uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),iVar3,0,1,1);
      }
      else {
        uVar2 = piVar7[1];
      }
      uVar6 = -(uint)(*(char *)((int)piVar7 + 0x72) != '\0') & 5;
      uVar4 = F_0042a990(piVar7 + 3);
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -0xc + *(int *)(iVar8 + 0x20)))) != iVar1) {
        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -0xc + *(int *)(iVar8 + 0x20)))) = iVar1;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -8 + *(int *)(iVar8 + 0x20)))) != uVar2) {
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -8 + *(int *)(iVar8 + 0x20)))) = uVar2;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + *(int *)(iVar8 + 0x20)))) != uVar6) {
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + *(int *)(iVar8 + 0x20)))) = uVar6;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      F_00431250(this_00,(*(int *)(gen_frame + 0x0)) + 0xc,uVar4,0,1,0);
      piVar5 = ((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + (*(int *)(gen_frame + 0xc)))));
      if (*piVar5 != iVar3) {
        *piVar5 = iVar3;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 4;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x14;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      piVar7 = piVar7 + 0x1d;
    } while ((*(int *)(gen_frame + 0x0)) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))));
  }
  iVar8 = 4;
  this_01 = &(*(int *)&gen_args[1]);
  do {
    this_01 = this_01 + -0x1d;
    uVar9 = F_0042c880(this_01);
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
  return (uint)uVar9;
}

/* ref: FUN_007d96b0 */
uint F_007d96b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d96b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d442c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d441c));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xb;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x48) = 0x101;
  return (uint)this;
}

/* ref: FUN_007d9710 */
uint F_007d9710(unsigned int gen_a0)
{
  GEN_ENTER(0x7d9710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)((int)this + 0x24) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x24),0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if (*(int *)((int)this + 0x28) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x28),0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x2c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x2c),0);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar1 = F_00a70580(*(undefined * PTR32 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar1;
}

/* ref: FUN_007d97c0 */
uint F_007d97c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d97c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  ushort * puVar6;
  uint * puVar7;
  undefined * pvVar8;
  undefined * puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint * puVar13;
  int * piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_10;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x1a);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x17)));
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3,0);
  if ((((*(int *)((int)this + 0x10) == 0) || (uVar4 == 0)) || (this_00 == (undefined *)0x0)) ||
     (uVar5 == 0)) {
    return 0;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar5 != '\0') {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar3 = *(int * PTR32 *)(uVar5 + 0x24);
    if (((piVar3 != (int *)0x0) &&
        (uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3), (char)uVar5 != '\0')) &&
       (piVar3[0x82] == *(int *)((int)this + 8))) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
  }
  piVar3 = (int *)F_00a67930(*(undefined4 *)((int)this + 0x10));
  puVar6 = (ushort *)F_00a67950(*(undefined4 *)((int)this + 0x10));
  puVar7 = (uint *)F_00a67940(*(undefined4 *)((int)this + 0x10));
  local_24 = 0;
  if (*puVar6 != 0) {
    local_24 = *puVar6 - 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12e8))) != *piVar3) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12e8))) = *piVar3;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = F_00775040(this);
  *(uint *)((int)this + 0x20) = uVar5;
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1220))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1220))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1224))) != (uint)*(ushort *)(piVar3 + 0x45)) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1224))) = (uint)*(ushort *)(piVar3 + 0x45);
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = (uint)*(ushort *)(piVar3 + 0x45);
  if (*(ushort *)(piVar3 + 0x45) == 0) {
    puVar9 = &REFG(undefined, 0x10be087);
  }
  else {
    uVar15 = 0x23;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    puVar9 = (undefined *)F_00461bb0(pvVar8,uVar15,uVar5);
  }
  F_00431250(this_00,0x361,puVar9,0,1,0);
  uVar5 = (uint)((char)piVar3[0x4f] != '\0');
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1228))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1228))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = F_0042a990(piVar3 + 1);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc80)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc80))) = uVar5;
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1234))) != piVar3[0x4e]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1234))) = piVar3[0x4e];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1238))) != piVar3[0xac]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1238))) = piVar3[0xac];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12ec))) != piVar3[0xad]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12ec))) = piVar3[0xad];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f8))) != piVar3[0xab]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f8))) = piVar3[0xab];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = F_0042a990(puVar6 + local_24 * 0x2c + 2);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc88)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc88))) = uVar5;
  uVar5 = F_0042a990(piVar3 + 0x16);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc84)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc84))) = uVar5;
  if (piVar3[0x4d] == 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) == piVar3[0x4c]) goto LAB_007d9ac4;
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) = piVar3[0x4c];
  }
  else {
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) != piVar3[0x4c]) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) = piVar3[0x4c];
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar5 = F_00a67ce0(piVar3[0x4d],(uint)*(byte *)(piVar3 + 0xb3),
                         (uint)*(byte *)((int)piVar3 + 0x12e));
    if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) == uVar5) goto LAB_007d9ac4;
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) = uVar5;
  }
  *(undefined1 *)(uVar4 + 0x1d) = 1;
LAB_007d9ac4: ;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0x1ca;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,uVar15,uVar16,uVar17);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc8c)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc8c))) = uVar5;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  iVar11 = piVar3[0x46];
  iVar2 = piVar3[0x47] - iVar11 >> 0x1f;
  uVar5 = 0;
  if ((piVar3[0x47] - iVar11) / 0x54 + iVar2 != iVar2) {
    local_18 = 0;
    local_1c = 0xd64;
    do {
      uVar10 = F_0042a990(local_18 + iVar11);
      puVar13 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c)));
      if (uVar10 != *puVar13) {
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      *puVar13 = uVar10;
      iVar11 = piVar3[0x46];
      local_18 = local_18 + 0x54;
      local_1c = local_1c + 4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((piVar3[0x47] - iVar11) / 0x54));
  }
  iVar11 = (piVar3[0x47] - piVar3[0x46]) / 0x54;
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f4))) != iVar11) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f4))) = iVar11;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0x1d3;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,uVar15,uVar16,uVar17);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd54)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd54))) = uVar5;
  uVar16 = 0;
  iVar11 = (-(uint)(*(int *)((int)this + 0x20) != 7) & 0xffffffc7) + 0x20e;
  uVar15 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,iVar11,uVar15,uVar16);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd58)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd58))) = uVar5;
  if (*(int *)((int)this + 0x20) == 6) {
    iVar11 = 0x1d6;
  }
  else {
    iVar11 = (-(uint)(*(int *)((int)this + 0x20) != 7) & 0xffffffc7) + 0x20d;
  }
  uVar16 = 0;
  uVar15 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,iVar11,uVar15,uVar16);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd5c)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd5c))) = uVar5;
  local_1c = 0;
  if (*(int *)((int)this + 0x30) == 0) {
    uVar5 = *puVar7;
  }
  else {
    uVar5 = 0;
  }
  local_18 = 0;
  if (uVar5 != 0) {
    uVar10 = 0xc90;
    puVar13 = puVar7 + 3;
    do {
      if (puVar13[0x15] == puVar7[1]) {
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5b0 + uVar10))) != (uint)(byte)puVar13[-1]) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5b0 + uVar10))) = (uint)(byte)puVar13[-1];
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar12 = F_0042a990(puVar13);
        if (uVar12 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + uVar10)))) {
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + uVar10))) = uVar12;
        uVar12 = F_0042a990(puVar13 + 0x16);
        puVar1 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14 + uVar10)));
        if (uVar12 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14 + uVar10)))) {
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        local_1c = local_1c + 1;
        uVar10 = uVar10 + 4;
        *puVar1 = uVar12;
        if (0xca3 < uVar10) break;
      }
      local_18 = local_18 + 1;
      puVar13 = puVar13 + 99;
    } while (local_18 < uVar5);
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x123c))) != local_1c) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x123c))) = local_1c;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_20 = 0;
  uVar5 = local_24;
  if (*(int *)((int)this + 0x30) != 0) {
    uVar5 = (uint)*puVar6;
  }
  if (1 < uVar5) {
    puVar6 = puVar6 + 0x2e;
    local_20 = uVar5 - 1;
    iVar11 = 0xcf4;
    local_28 = local_20;
    do {
      uVar5 = F_0042a990(puVar6);
      if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar11)))) {
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar11))) = uVar5;
      iVar11 = iVar11 + 4;
      puVar6 = puVar6 + 0x2c;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f0))) != local_20) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f0))) = local_20;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*(int *)((int)this + 0x30) == 0) {
    uVar5 = (uint)*(byte *)(piVar3 + 0xb4);
  }
  else {
    uVar5 = 0;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1254))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1254))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_24 = 0;
  if (uVar5 != 0) {
    iVar11 = 0x126c;
    piVar14 = piVar3 + 0xcd;
    do {
      if (*((int *)GEN_TOP((iVar11 + -0x14 + *(int *)(uVar4 + 0x20)))) != piVar14[1]) {
        *((int *)GEN_TOP((iVar11 + -0x14 + *(int *)(uVar4 + 0x20)))) = piVar14[1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) != *piVar14) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) = *piVar14;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar10 = F_0042a990(piVar14 + -0x17);
      F_00431250(this_00,local_24 + 0x333,uVar10,uVar15,uVar16,uVar17);
      if (*((int *)GEN_TOP((iVar11 + 0x28 + *(int *)(uVar4 + 0x20)))) != piVar14[-2]) {
        *((int *)GEN_TOP((iVar11 + 0x28 + *(int *)(uVar4 + 0x20)))) = piVar14[-2];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar11 + 0x14 + *(int *)(uVar4 + 0x20)))) != piVar14[-1]) {
        *((int *)GEN_TOP((iVar11 + 0x14 + *(int *)(uVar4 + 0x20)))) = piVar14[-1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      local_24 = local_24 + 1;
      piVar14 = piVar14 + 0x1b;
      iVar11 = iVar11 + 4;
    } while (local_24 < uVar5);
  }
  if (*(int *)((int)this + 0x30) == 0) {
    local_10 = (uint)*(byte *)((int)piVar3 + 0x2d1);
  }
  else {
    local_10 = 0;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12a8))) != local_10) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12a8))) = local_10;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_24 = 0;
  if (local_10 != 0) {
    iVar11 = 0x12c0;
    piVar14 = piVar3 + 0x152;
    do {
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0x14 + iVar11))) != piVar14[2]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0x14 + iVar11))) = piVar14[2];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) != *piVar14) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) = *piVar14;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar11))) != piVar14[1]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar11))) = piVar14[1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar5 = F_0042a990(piVar14 + -0x15);
      F_00431250(this_00,local_24 + 0x338,uVar5,uVar15,uVar16,uVar17);
      local_24 = local_24 + 1;
      piVar14 = piVar14 + 0x1b;
      iVar11 = iVar11 + 4;
    } while (local_24 < local_10);
  }
  if (*(int *)((int)this + 0x30) == 0) {
    uVar5 = (uint)*(byte *)((int)piVar3 + 0x2d2);
  }
  else {
    uVar5 = 0;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12fc))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12fc))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_24 = 0;
  if (uVar5 != 0) {
    iVar11 = 0x1310;
    piVar3 = piVar3 + 0x1db;
    do {
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0x10 + iVar11))) != piVar3[1]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0x10 + iVar11))) = piVar3[1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) != *piVar3) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) = *piVar3;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10 + iVar11))) != piVar3[-2]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10 + iVar11))) = piVar3[-2];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20 + iVar11))) != piVar3[-1]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20 + iVar11))) = piVar3[-1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar10 = F_0042a990(piVar3 + -0x17);
      F_00431250(this_00,local_24 + 0x362,uVar10,uVar15,uVar16,uVar17);
      local_24 = local_24 + 1;
      piVar3 = piVar3 + 0x1b;
      iVar11 = iVar11 + 4;
    } while (local_24 < uVar5);
  }
  return 8;
}

/* ref: FUN_007da030 */
uint F_007da030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7da030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    piVar2 = (int *)F_00a74510(*(undefined * PTR32 *)((int)this + 0x10));
    piVar6 = (int *)piVar2[4];
    uVar3 = piVar2[5] - (int)((int)(uintptr_t)piVar6) >> 2;
    if ((piVar2[1] - *piVar2) / 0x54 == uVar3) {
      uVar7 = 0;
      iVar4 = 0;
      if (uVar3 != 0) {
        do {
          iVar1 = *piVar6;
          iVar5 = iVar4;
          if (((iVar1 != 0x17) && (iVar1 != 0x19)) && ((iVar1 != 0x1a || ((REFG(undefined1, 0x14ab150) & 1) != 0)))
             ) {
            iVar5 = iVar4 + 1;
            if (iVar4 == param_1) {
              return iVar1 - 1;
            }
          }
          uVar7 = uVar7 + 1;
          piVar6 = piVar6 + 1;
          iVar4 = iVar5;
        } while (uVar7 < uVar3);
      }
    }
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentQuestJournal::vf11 */
byte F_007da0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7da0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 4) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007da110 */
unsigned int F_007da110(unsigned int gen_a0)
{
  GEN_ENTER(0x7da110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0xf6) != '\0') {
    if (*(int *)((int)this + 0x18) != 0) {
      F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x10),
                   (uint)*(ushort *)((int)this + 0x14));
    }
    *(undefined4 *)((int)this + 0x10) = 9999;
    *(undefined2 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf3 */
uint F_007da150(unsigned int gen_a0)
{
  GEN_ENTER(0x7da150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  F_00a712e0(&REFG(undefined, 0x14ab790));
  uVar1 = F_007752e0(this);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007da190 */
uint F_007da190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7da190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar3 = (uint)*(byte *)(REFG(int, 0x1379694) + 0x1689);
  (*(int *)(gen_frame + 0x4)) = (int)this + 0x128;
  F_007c9ad0((int)this + 0x128,(int)this + 0x17c,&(*(uint *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x8)) = (uint)REFG(undefined2, 0x14ab148);
  if (REFG(undefined2, 0x14ab148) != 0) {
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
    if ((ushort)(*(uint *)(gen_frame + 0x8)) < (ushort)uVar2) {
      bVar1 = 1;
      goto LAB_007da1f9;
    }
  }
  bVar1 = 0;
LAB_007da1f9: ;
  uVar2 = (uint)bVar1;
  uVar5 = 0;
  uVar4 = 0x178;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_00461d60(this_00,uVar4,uVar3,uVar5,uVar2);
  F_005aa640((undefined *)(param_1 + 0x50),uVar3);
  uVar3 = F_0042a990((int)this + 0x17c);
  F_005a2710((undefined *)(param_1 + 0x58),6);
  *(uint *)(param_1 + 0x5c) = uVar3;
  uVar3 = F_0042a990((*(int *)(gen_frame + 0x4)));
  F_005a2710((undefined *)(param_1 + 0x60),6);
  *(uint *)(param_1 + 100) = uVar3;
  F_005a2710((undefined *)(param_1 + 0x48),4);
  *(uint *)(param_1 + 0x4c) = (*(uint *)(gen_frame + 0x0));
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_007da270 */
uint F_007da270(unsigned int gen_a0)
{
  GEN_ENTER(0x7da270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint * puVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x19)));
  if (this_00 != (undefined *)0x0) {
    iVar4 = 0;
    do {
      puVar2 = (uint *)F_00ab2e40(iVar4);
      if (puVar2 == (uint *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*puVar2 & 0xffffff) + (int)puVar2;
      }
      F_00431250(this_00,iVar4 + 0x94,iVar3,0,1,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    return 0x10;
  }
  return 0;
}

/* ref: FUN_007da2e0 */
uint F_007da2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7da2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x1c);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x19)));
  if (((uVar3 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x22c) != 0)) {
    uVar5 = (uint)*((byte *)GEN_TOP((REFG(int, 0x14ab7d0) + 0xd + *(int *)((int)this + 0x230))));
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) != uVar5) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) = uVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    iVar8 = 0;
    if (uVar5 != 0) {
      local_8 = 0x10;
      do {
        puVar4 = (uint *)F_00ab2f00(iVar8);
        if (puVar4 == (uint *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_00431250(this_00,iVar8,iVar6,0,1,0);
        bVar1 = F_00a690e0(*(undefined4 *)((int)this + 0x230),iVar8);
        if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) != (uint)bVar1) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) = (uint)bVar1;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        local_8 = local_8 + 4;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar5);
    }
    uVar7 = 0;
    if (uVar5 != 0) {
      local_8 = (uint)*((byte *)GEN_TOP((REFG(int, 0x14ab7d0) + 0x15 + *(int *)((int)this + 0x230))));
      if (4 < local_8) {
        local_8 = 4;
      }
      uVar7 = local_8;
      if (local_8 != 0) {
        iVar8 = 0x9d;
        uVar9 = local_8;
        do {
          puVar4 = (uint *)F_00ab2f00(iVar8 + 0x34b);
          if (puVar4 == (uint *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (*puVar4 & 0xffffff) + (int)puVar4;
          }
          F_00431250(this_00,iVar8,iVar6,0,1,0);
          iVar8 = iVar8 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x7ec))) != uVar7) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x7ec))) = uVar7;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    return (uint)(uVar5 != 0);
  }
  return 0;
}

/* ref: FUN_007da470 */
uint F_007da470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7da470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  byte * pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0xe07;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043bd00(this_00,uVar8,uVar9,uVar10);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x288)))) {
    *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x288))) = uVar3;
    *(undefined1 *)(param_3 + 0x1d) = 1;
  }
  uVar3 = (uint)*(byte *)((int)this + 0x104) << 0x10 | 1;
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) = uVar3;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  bVar2 = F_00775500(this,param_1,0);
  if (bVar2 == 0) {
    return 0;
  }
  uVar3 = F_00a68de0(param_1);
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x708))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x708))) = uVar3;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  if (**(int * PTR32 *)((int)param_1 + 0x40) == 0) {
    return 8;
  }
  iVar6 = 0;
  iVar7 = 0x1cd;
  pbVar4 = ((byte *)GEN_TOP((*(int *)((int)this + 0x238) * 0x444 + **(int * PTR32 *)((int)param_1 + 0x40) + 0x6e)));
  do {
    if (*(int *)(pbVar4 + -10) != 0) {
      if ((*pbVar4 & 1) != 0) {
        if (*(char *)((int)this + 0x106) == '\0') {
          return 8;
        }
        if (*(int *)(pbVar4 + -10) < 1) {
          return 8;
        }
        iVar6 = *(int *)((int)this + 0x28);
        if (iVar6 - 1000000U < 1000000) {
          iVar6 = iVar6 + -1000000;
        }
        if (iVar6 != *(int *)(pbVar4 + -10)) {
          return 8;
        }
        puVar1 = (uint *)((int)this + 0x20);
        if (puVar1 == (uint *)0x0) {
          return 8;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar7 * 4))) != *(int *)((int)this + 0x28)) {
          *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar7 * 4))) = *(int *)((int)this + 0x28);
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        uVar3 = F_00775290((undefined *)((int)this + 0x10),puVar1);
        if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + iVar7 * 4))) != uVar3) {
          *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + iVar7 * 4))) = uVar3;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        uVar3 = *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14 + iVar7 * 4)));
        uVar5 = uVar3 | 2;
        if (uVar3 != uVar5) {
          *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14 + iVar7 * 4))) = uVar5;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        uVar3 = (int)*(short *)((int)this + 0x24) << 0x10 | *puVar1;
        puVar1 = ((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + iVar7 * 4)));
        if (*puVar1 == uVar3) {
          return 8;
        }
        *puVar1 = uVar3;
        *(undefined1 *)(param_2 + 0x1d) = 1;
        return 8;
      }
      iVar7 = iVar7 + 7;
    }
    iVar6 = iVar6 + 1;
    pbVar4 = pbVar4 + 0x70;
    if (5 < iVar6) {
      return 8;
    }
  } while( true );
}

/* ref: FUN_007da600 */
unsigned int F_007da600(unsigned int gen_a0)
{
  GEN_ENTER(0x7da600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(REFG(int, 0x1379694) + 0x1688))) {
    case 8: ;
      *(undefined4 *)((int)this + 0x230) = 0;
      break;
    case 9: ;
      *(undefined4 *)((int)this + 0x230) = 1;
      break;
    case 10: ;
      *(undefined4 *)((int)this + 0x230) = 2;
      break;
    case 0xb: ;
      *(undefined4 *)((int)this + 0x230) = 3;
      break;
    case 0xc: ;
      *(undefined4 *)((int)this + 0x230) = 4;
      break;
    case 0xd: ;
      *(undefined4 *)((int)this + 0x230) = 5;
      break;
    case 0xe: ;
      *(undefined4 *)((int)this + 0x230) = 6;
      break;
    case 0xf: ;
      *(undefined4 *)((int)this + 0x230) = 7;
      break;
    default: ;
      if ((*(uint *)((int)this + 0x22c) & 1 << ((byte)*(undefined4 *)((int)this + 0x230) & 0x1f)) ==
          0) {
        uVar2 = 0;
        do {
          if ((*(uint *)((int)this + 0x22c) & 1 << ((byte)uVar2 & 0x1f)) != 0) {
            *(uint *)((int)this + 0x230) = uVar2;
            break;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 8);
      }
    }
  }
  if (7 < *(int *)((int)this + 0x230)) {
    *(undefined4 *)((int)this + 0x230) = 0;
  }
  iVar1 = *(int *)((int)this + 0x230);
  if (iVar1 < 8) {
    *(int *)((int)this + 0x234) = (int)*(short *)((int)this + iVar1 * 4 + 0x108);
    *(int *)((int)this + 0x238) = (int)*(short *)((int)this + iVar1 * 4 + 0x10a);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf11 */
byte F_007da720(unsigned int gen_a0)
{
  GEN_ENTER(0x7da720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) == 0) ||
     ((~(byte)(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 9) & 1) != 0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if (((char)uVar1 == '\0') && (REFG(char, 0x14a7365) != '\0')) {
      return 0;
    }
    if (REFG(char, 0x14a7378) == '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007da780 */
uint F_007da780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7da780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  if (*(char *)((int)this + 0xc) == '\0') {
    uVar4 = F_005a2710((undefined *)(param_1 + 0x670),4);
    *(undefined4 *)(param_1 + 0x674) = 0;
    return uVar4;
  }
  uVar4 = F_007c9ad0((int)this + 0x7c,(int)this + 0xd0,&(*(undefined4 *)(gen_frame + 0x8)),(undefined4 *)((int)this + 0xaac))
  ;
  if (0 < (int)uVar4) {
    uVar1 = *(undefined4 *)((int)this + 0xaac);
    F_005a2710((undefined *)(param_1 + 0x670),4);
    *(undefined4 *)(param_1 + 0x674) = uVar1;
    F_005a2710((undefined *)(param_1 + 0x678),4);
    *(undefined4 *)(param_1 + 0x67c) = (*(undefined4 *)(gen_frame + 0x8));
    uVar4 = F_0042a990((int)this + 0x7c);
    F_005a2710((undefined *)(param_1 + 0x680),6);
    *(uint *)(param_1 + 0x684) = uVar4;
    uVar4 = F_0042a990((int)this + 0xd0);
    F_005a2710((undefined *)(param_1 + 0x688),6);
    *(uint *)(param_1 + 0x68c) = uVar4;
    uVar3 = REFG(undefined2, 0x14ab148);
    if ((REFG(undefined2, 0x14ab148) == 0) ||
       (uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0), (ushort)uVar4 <= uVar3)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    uVar4 = F_005a2710((undefined *)(param_1 + 0x690),3);
    *(uint *)(param_1 + 0x694) = (uint)bVar2;
    return uVar4;
  }
  return uVar4;
}

/* ref: FUN_007da890 */
uint F_007da890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7da890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d447c));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4470));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 9999;
  in_ecx[10] = 0xffffffff;
  in_ecx[0xb] = 9999;
  in_ecx[0xc] = 0xffffffff;
  in_ecx[0xd] = 0xffffffff;
  in_ecx[0xe] = 0xffffffff;
  in_ecx[0xf] = 0xffffffff;
  in_ecx[0x10] = 0xffffffff;
  in_ecx[0x11] = 0;
  puVar1 = in_ecx + 0x12;
  param_2 = 0x18;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  in_ecx[0x2a3] = 0;
  in_ecx[0x2a4] = 0;
  in_ecx[0x2a5] = 0;
  in_ecx[0x2a6] = 0;
  in_ecx[0x2a7] = 0xffffffff;
  in_ecx[0x2a8] = 0;
  param_2 = 0x13;
  puVar1 = in_ecx + 0x2c1;
  do {
    F_0042b630(puVar1 + -0x16);
    F_0042b630(puVar1);
    puVar1 = puVar1 + 0x30;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  *(undefined1 *)(in_ecx + 0x669) = 0;
  in_ecx[0x66a] = 0;
  in_ecx[0x66b] = 0;
  in_ecx[0x66c] = 0;
  *(undefined1 *)((int)in_ecx + 0x19b6) = 0;
  in_ecx[0x66e] = 0;
  *(undefined2 *)(in_ecx + 0x66d) = 1;
  in_ecx[0x29c] = 0;
  in_ecx[0x29d] = 0;
  in_ecx[0x29e] = 0;
  in_ecx[0x29f] = 0;
  in_ecx[0x2a0] = 0;
  in_ecx[0x2a1] = 0;
  *(undefined1 *)(in_ecx + 0x2a2) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007da9e0 */
byte F_007da9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7da9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  if ((((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) && (iVar1 = param_1[1], 0 < iVar1)) &&
     ((*(int *)((int)this + 0x24) != 9999 && (-1 < *(int *)((int)this + 0x28))))) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(int *)((int)this + 0x24),(uint)*(ushort *)((int)this + 0x28));
    if ((*(int *)((int)this + 0x2c) == 9999) || (*(int *)((int)this + 0x30) < 0)) {
      iVar2 = *(int *)((int)this + 0x24);
      if ((iVar2 < 10000) || (0x2716 < *(int *)((int)this + 0x28))) {
        F_00a41810(&REFG(undefined, 0x14a4230),iVar2,(uint)*(ushort *)((int)this + 0x28),iVar1);
      }
      else {
        F_00a418c0(&REFG(undefined, 0x14a4230),iVar2,(uint)*(ushort *)((int)this + 0x28),iVar1);
      }
    }
    else {
      F_00a493a0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x24),
                   (uint)*(ushort *)((int)this + 0x28),*(int *)((int)this + 0x2c),
                   (uint)*(ushort *)((int)this + 0x30),iVar1);
    }
  }
  *(undefined4 *)((int)this + 0x19a8) = 0;
  F_007759b0(this);
  return 1;
}

/* ref: FUN_007daab0 */
byte F_007daab0(unsigned int gen_a0)
{
  GEN_ENTER(0x7daab0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00ab24a0(*param_1);
  if (uVar2 != 0) {
    this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x2ee2);
    if (this != (undefined *)0x0) {
      uVar3 = F_00a37da0(this,(int)*(short *)(param_1 + 0x2d));
      if (uVar3 != 0) {
        uVar4 = F_00ab65a0(*param_1,uVar2);
        param_1[1] = uVar4;
        uVar4 = F_00ab6240(*param_1,0,uVar2);
        F_0042e430(param_1 + 2,uVar4);
        uVar2 = F_00760640((uint)*(byte *)(uVar2 + 0xa6),uVar3,*(undefined4 *)(uVar2 + 0x28));
        *(short *)((int)param_1 + 0xb6) = (short)uVar2;
        bVar1 = F_007c9be0(param_1 + 0x2e,uVar3);
        *(byte *)(param_1 + 0x2f) = bVar1;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007dab60 */
uint F_007dab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dab60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  uint uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(uint *)(gen_frame + 0x138)) = uVar1;
  if (0 < *(int *)((int)in_ecx + 0x19b0)) {
    if ((*(uint *)((int)in_ecx + 0xa94) == 0) ||
       (*(uint *)((int)in_ecx + 0xa90) < *(uint *)((int)in_ecx + 0xa94))) {
      *(undefined4 *)((int)in_ecx + 0xa94) = 1;
    }
    uVar1 = 0;
    pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)in_ecx + 0x24));
    if (pvVar2 != (undefined *)0x0) {
      pvVar2 = (undefined *)F_00a37da0(pvVar2,*(undefined4 *)((int)in_ecx + 0x28));
      if ((pvVar2 != (undefined *)0x0) &&
         ((*(char *)((int)pvVar2 + 6) != '\0' || (*(int *)((int)pvVar2 + 8) != 0)))) {
        uVar1 = F_00a3a8a0(pvVar2);
      }
    }
    if ((*(uint *)((int)in_ecx + 0xa98) == 0) || (uVar1 < *(uint *)((int)in_ecx + 0xa98))) {
      *(uint *)((int)in_ecx + 0xa98) = uVar1;
    }
    uVar1 = *(uint *)((int)in_ecx + 0xa90) / *(uint *)((int)in_ecx + 0xa98);
    if (uVar1 < *(uint *)((int)in_ecx + 0xa94)) {
      *(uint *)((int)in_ecx + 0xa94) = uVar1;
    }
    uVar6 = *(int *)((int)in_ecx + 0xa94) * *(uint *)((int)in_ecx + 0xa98);
    F_0042b630(((undefined1 *)(gen_frame + 0x5c)));
    F_00775a60(in_ecx,((undefined1 *)(gen_frame + 0x5c)),5,((uVar6 / 10) * 5) / 10);
    uVar8 = REFG(undefined4, 0x108cc50);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x18))))
                               (*(int * PTR32 *)((int)in_ecx + 4),0x39f)));
    uVar6 = F_00461bb0(pvVar2,uVar6,uVar8);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)),uVar6,in_ebx);
    puVar3 = ((undefined4 *)(gen_frame + 0xb0));
    iVar5 = 0x10;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    uVar8 = *(undefined4 *)((int)in_ecx + 0xa94);
    F_005a2710(((undefined1 *)(gen_frame + 0xd8)),3);
    (*(undefined4 *)(gen_frame + 0xdc)) = uVar8;
    F_005a2710(((undefined1 *)(gen_frame + 0xe8)),3);
    uVar8 = *(undefined4 *)((int)in_ecx + 0xa98);
    (*(uint *)(gen_frame + 0xec)) = uVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0xf0)),3);
    (*(undefined4 *)(gen_frame + 0xf4)) = uVar8;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x5c)));
    F_005a2710(((undefined1 *)(gen_frame + 0x118)),6);
    (*(uint *)(gen_frame + 0x11c)) = uVar1;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x8)));
    F_005a2710(((undefined1 *)(gen_frame + 0x120)),6);
    (*(uint *)(gen_frame + 0x124)) = uVar1;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x1c))))(*(int * PTR32 *)((int)in_ecx + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)in_ecx + 0x19b0),0x11,((undefined4 *)(gen_frame + 0xb0)));
    this = &(*(uint *)(gen_frame + 0x138));
    iVar5 = 0x10;
    do {
      this = this + -2;
      F_005a2670(this);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
    uVar1 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar1;
}

/* ref: FUN_007dad90 */
uint F_007dad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dad90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  uint uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar7 = *(int *)(uVar1 + 0x18);
  if (iVar7 == 0) goto LAB_007daf43;
  uVar6 = (param_1 & 0xff) << 0x10;
  if (*(char *)(iVar7 + 0x60) == '\0') goto LAB_007daf43;
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  iVar5 = 0x36;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
  ((undefined4 *)(gen_frame + 0x8))[1] = 2;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = uVar6 | 0x24;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
  if (*(int *)(iVar7 + 0xcc) == 0) {
    uVar8 = 0x3c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4))));
    uVar1 = F_007c8b20(pvVar3,uVar8);
    *(uint *)(iVar7 + 0xcc) = uVar1;
    if (uVar1 != 0) goto LAB_007dae5e;
  }
  else {
LAB_007dae5e: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)(iVar7 + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
  }
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
  (*(undefined4 *)(gen_frame + 0x1cc)) = 0x24;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
  (*(uint *)(gen_frame + 0x1d4)) = (uVar6 & 0x10000) >> 0x10;
  if (*(int *)(iVar7 + 0xd0) == 0) {
    uVar8 = 0x80;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4))));
    uVar1 = F_007c8b20(pvVar3,uVar8);
    *(uint *)(iVar7 + 0xd0) = uVar1;
    if (uVar1 != 0) goto LAB_007daef3;
  }
  else {
LAB_007daef3: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)(iVar7 + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
  }
  this_00 = &(*(uint *)(gen_frame + 0x1d8));
  iVar7 = 2;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar7 = 0x36;
  do {
    puVar2 = puVar2 + -2;
    uVar1 = F_005a2670(puVar2);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
LAB_007daf43: ;
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentReturn::vf11 */
uint F_007daf60(unsigned int gen_a0)
{
  GEN_ENTER(0x7daf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if (*(int *)(uVar1 + 0x18) != 0) {
    return ~(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 4) & 1;
  }
  return 1;
}

/* ref: FUN_007daf90 */
uint F_007daf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7daf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | param_1;
    return param_1;
  }
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & ~param_1;
  uVar1 = param_1;
  if (param_1 == 1) {
    uVar1 = F_00776230(this);
  }
  return uVar1;
}

/* ref: FUN_007dafc0 */
uint F_007dafc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dafc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d44c4));
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[0xe] = 0;
  *(undefined1 *)(in_ecx + 0xf) = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007db040 */
unsigned int F_007db040(unsigned int gen_a0)
{
  GEN_ENTER(0x7db040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x17c);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentStatus::vf3 */
uint F_007db070(unsigned int gen_a0)
{
  GEN_ENTER(0x7db070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  F_00ae0cd0(&REFG(undefined, 0x14c0920),0x28);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  piVar3 = *(int * PTR32 *)(this + 0x38);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)(this + 0x38) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x130) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x130));
  if (*(int *)(this + 0xc) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14c) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x14c));
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = 0;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar1,0);
  return uVar2;
}

/* ref: FUN_007db120 */
byte F_007db120(unsigned int gen_a0)
{
  GEN_ENTER(0x7db120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  iVar3 = REFG(int, 0x1379694);
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (REFG(int, 0x1379694) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  iVar4 = 0;
  do {
    ((byte *)(gen_frame + 0x8c))[(int)(iVar4)] = *(byte *)(REFG(int, 0x1379694) + 0x2db8 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1a);
  ((byte *)(gen_frame + 0x8c))[3] = 0x32;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 88)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d90);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 92)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d94);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 96)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d98);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 100)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d9c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 104)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2da0);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 108)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2da4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 112)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2da8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 116)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2dac);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 120)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2db0);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 124)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2db4);
  F_00a9fa40(*(undefined4 *)((int)this + 0x18),1);
  F_00aaa640(*(undefined * PTR32 *)((int)this + 0x18),((byte *)(gen_frame + 0x8c)),((byte *)(gen_frame + 0xc)) + 0x58);
  ((byte *)(gen_frame + 0xc))[8] = (byte)REFG(float, 0x10c44a0);
  ((byte *)(gen_frame + 0xc))[9] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a0) + 1));
  ((byte *)(gen_frame + 0xc))[10] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a0) + 2));
  ((byte *)(gen_frame + 0xc))[0xb] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a0) + 3));
  ((byte *)(gen_frame + 0xc))[0x10] = (byte)REFG(float, 0x10c449c);
  ((byte *)(gen_frame + 0xc))[0x11] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 1));
  ((byte *)(gen_frame + 0xc))[0x12] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 2));
  ((byte *)(gen_frame + 0xc))[0x13] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 3));
  ((byte *)(gen_frame + 0xc))[0x1c] = (byte)REFG(float, 0x10c449c);
  ((byte *)(gen_frame + 0xc))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 1));
  ((byte *)(gen_frame + 0xc))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 2));
  ((byte *)(gen_frame + 0xc))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 3));
  ((byte *)(gen_frame + 0xc))[0x24] = (byte)REFG(float, 0x10c449c);
  ((byte *)(gen_frame + 0xc))[0x25] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 1));
  ((byte *)(gen_frame + 0xc))[0x26] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 2));
  ((byte *)(gen_frame + 0xc))[0x27] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 3));
  ((byte *)(gen_frame + 0xc))[0x28] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x29] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x2a] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x2b] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  ((byte *)(gen_frame + 0xc))[0x2c] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x2d] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x2e] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x2f] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  ((byte *)(gen_frame + 0xc))[0x30] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x31] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x32] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x33] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  ((byte *)(gen_frame + 0xc))[0x34] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x35] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x36] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x37] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  uVar6 = (uint)((byte *)(gen_frame + 0x8c))[1] + (uint)((byte *)(gen_frame + 0x8c))[4] * 2;
  ((byte *)(gen_frame + 0xc))[0xc] = (byte)REFG(float, 0x10c44a8);
  ((byte *)(gen_frame + 0xc))[0xd] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 1));
  ((byte *)(gen_frame + 0xc))[0xe] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 2));
  ((byte *)(gen_frame + 0xc))[0xf] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 3));
  ((byte *)(gen_frame + 0xc))[0x14] = (byte)REFG(float, 0x10c44a4);
  ((byte *)(gen_frame + 0xc))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a4) + 1));
  ((byte *)(gen_frame + 0xc))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a4) + 2));
  ((byte *)(gen_frame + 0xc))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a4) + 3));
  ((byte *)(gen_frame + 0xc))[0x38] = (byte)REFG(float, 0x10c44a8);
  ((byte *)(gen_frame + 0xc))[0x39] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 1));
  ((byte *)(gen_frame + 0xc))[0x3a] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 2));
  ((byte *)(gen_frame + 0xc))[0x3b] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 3));
  ((byte *)(gen_frame + 0xc))[0x3c] = (byte)REFG(float, 0x10c4498);
  ((byte *)(gen_frame + 0xc))[0x3d] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 1));
  ((byte *)(gen_frame + 0xc))[0x3e] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 2));
  ((byte *)(gen_frame + 0xc))[0x3f] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 3));
  ((byte *)(gen_frame + 0xc))[0x40] = (byte)REFG(float, 0x10c44a8);
  ((byte *)(gen_frame + 0xc))[0x41] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 1));
  ((byte *)(gen_frame + 0xc))[0x42] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 2));
  ((byte *)(gen_frame + 0xc))[0x43] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 3));
  ((byte *)(gen_frame + 0xc))[0x44] = (byte)REFG(float, 0x10c4498);
  ((byte *)(gen_frame + 0xc))[0x45] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 1));
  ((byte *)(gen_frame + 0xc))[0x46] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 2));
  ((byte *)(gen_frame + 0xc))[0x47] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 3));
  ((byte *)(gen_frame + 0xc))[0] = (byte)REFG(float, 0x1087f04);
  ((byte *)(gen_frame + 0xc))[1] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
  ((byte *)(gen_frame + 0xc))[2] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
  ((byte *)(gen_frame + 0xc))[3] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
  ((byte *)(gen_frame + 0xc))[4] = (byte)REFG(float, 0x1087f04);
  ((byte *)(gen_frame + 0xc))[5] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
  ((byte *)(gen_frame + 0xc))[6] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
  ((byte *)(gen_frame + 0xc))[7] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
  ((byte *)(gen_frame + 0xc))[0x18] = (byte)REFG(float, 0x10c4494);
  ((byte *)(gen_frame + 0xc))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 1));
  ((byte *)(gen_frame + 0xc))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 2));
  ((byte *)(gen_frame + 0xc))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 3));
  ((byte *)(gen_frame + 0xc))[0x20] = (byte)REFG(float, 0x10c4494);
  ((byte *)(gen_frame + 0xc))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 1));
  ((byte *)(gen_frame + 0xc))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 2));
  ((byte *)(gen_frame + 0xc))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 3));
  ((byte *)(gen_frame + 0xc))[0x48] = (byte)REFG(float, 0x10ac108);
  ((byte *)(gen_frame + 0xc))[0x49] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 1));
  ((byte *)(gen_frame + 0xc))[0x4a] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 2));
  ((byte *)(gen_frame + 0xc))[0x4b] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 3));
  ((byte *)(gen_frame + 0xc))[0x4c] = (byte)REFG(float, 0x10c4490);
  ((byte *)(gen_frame + 0xc))[0x4d] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 1));
  ((byte *)(gen_frame + 0xc))[0x4e] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 2));
  ((byte *)(gen_frame + 0xc))[0x4f] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 3));
  ((byte *)(gen_frame + 0xc))[0x50] = (byte)REFG(float, 0x10ac108);
  ((byte *)(gen_frame + 0xc))[0x51] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 1));
  ((byte *)(gen_frame + 0xc))[0x52] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 2));
  ((byte *)(gen_frame + 0xc))[0x53] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 3));
  ((byte *)(gen_frame + 0xc))[0x54] = (byte)REFG(float, 0x10c4490);
  ((byte *)(gen_frame + 0xc))[0x55] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 1));
  ((byte *)(gen_frame + 0xc))[0x56] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 2));
  ((byte *)(gen_frame + 0xc))[0x57] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 3));
  if (uVar6 < 0x16) {
    (*(int *)(gen_frame + 0x8)) = *(int *)(((byte *)(gen_frame + 0xc)) + uVar6 * 4);
  }
  else {
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = (byte)REFG(float, 0x1087f04);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 1)) = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)) = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x4c))))(*(int * PTR32 *)((int)this + 0x18),(*(int *)(gen_frame + 0x8)));
  F_00aa1d10(*(undefined * PTR32 *)((int)this + 0x18),(uint)*(byte *)(iVar3 + 0x1680));
  F_00aa1cc0(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)(iVar3 + 0x1678),
               *(undefined4 *)(iVar3 + 0x167c));
  (*(int *)(gen_frame + 0x8)) = 0;
  puVar7 = (undefined4 *)((int)this + 0x20);
  puVar8 = (undefined4 *)(iVar3 + 0x16b0);
  do {
    uVar1 = *puVar8;
    *puVar7 = uVar1;
    uVar2 = puVar8[1];
    puVar7[1] = uVar2;
    F_00aa80c0(*(undefined * PTR32 *)((int)this + 0x18),(*(int *)(gen_frame + 0x8)),uVar1,uVar2);
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
    puVar7 = puVar7 + 2;
    puVar8 = puVar8 + 0x1e8;
  } while ((*(int *)(gen_frame + 0x8)) < 2);
  *(undefined1 *)((int)this + 0x3c) = 0;
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,0x3d);
  if ((uVar6 != 0) && (*((int *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x710))) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x710))) = 0;
    *(undefined1 *)(uVar6 + 0x1d) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 1;
}

/* ref: FUN_007db3c0 */
byte F_007db3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7db3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x70))))(REFG(int * PTR32, 0x1379694));
    if ((char)uVar1 != '\0') {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xec)));
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0xc,0x10);
      if (uVar1 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_0061f4a0(uVar1);
      }
      *(uint *)((int)this + 0x38) = uVar1;
      F_0061f4d0(uVar1,0);
      this_00 = REFG(void * PTR32, 0x1487c60);
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      uVar1 = F_0056a740(uVar1 + 0x2db98);
      F_0061f550(this_00,0,uVar1);
      ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2,*(undefined4 *)((int)this + 0x38));
      iVar3 = 0;
      do {
        piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x16c0 + iVar3)));
        if (piVar2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2,*(undefined4 *)((int)this + 0x38));
        }
        iVar3 = iVar3 + 0x7a0;
      } while (iVar3 < 0xf40);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      uVar1 = F_0062c750(0);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),10);
      (*(uint *)(gen_frame + 0x8)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007db4d0 */
uint F_007db4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7db4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d450c));
  *(undefined1 *)(in_ecx + 3) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_007db4f0 */
uint F_007db4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7db4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4554));
  F_00a1af40((undefined *)((int)this + 0x10));
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xac) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x10) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x18) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x20) = uVar2;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xe0000000;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0xe0000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xe0000000;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0xe0000000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xe0000000;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xe0000000;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & 0xfffffffe;
  return (uint)this;
}

/* ref: FUN_007db710 */
uint F_007db710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7db710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  ulonglong uVar9;
  
  uVar4 = F_00533a30(&REFG(undefined4, 0x1375bc0));
  if (uVar4 == 0) {
    iVar6 = -0x20000000;
  }
  else {
    iVar6 = *(int *)(uVar4 + 0x74);
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) != iVar6) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) = iVar6;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  (*(int *)(gen_frame + 0x4c)) = 0;
  if ((*(byte *)((int)this + 0x58) & 8) != 0) {
    uVar9 = F_005339f0(&REFG(undefined4, 0x1375bc0));
    iVar6 = (int)uVar9;
    (*(ulonglong *)(gen_frame + 0x28)) = uVar9;
    uVar9 = (*(ulonglong *)(gen_frame + 0x28));
    if ((uVar9 == 0xe0000000) &&
       (((param_2[1] != 0 || (param_2[2] != -0x20000000)) || (param_2[3] != 0)))) {
      *(undefined4 *)((int)this + 0x40) = 0xe0000000;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    else {
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = (int)(uVar9 >> 0x20);
      iVar2 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4));
      (*(ulonglong *)(gen_frame + 0x28)) = uVar9;
      if ((((iVar6 != *(int *)((int)this + 0x40)) ||
           (bVar7 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) != *(int *)((int)this + 0x44), bVar7)) &&
          ((*(int *)((int)this + 0x40) != -0x20000000 || (*(int *)((int)this + 0x44) != 0)))) &&
         ((iVar6 != -0x20000000 && (uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar6,iVar2), uVar4 != 0))))
      {
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x60);
        *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 100);
        *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x68);
        puVar5 = (undefined4 *)F_0043e0f0(((undefined1 *)(gen_frame + 0x30)),uVar4);
        *(undefined4 *)((int)this + 0x80) = *puVar5;
        *(undefined4 *)((int)this + 0x84) = puVar5[1];
        *(undefined4 *)((int)this + 0x88) = puVar5[2];
        puVar5 = (undefined4 *)
                 F_0046f4a0(((undefined1 *)(gen_frame + 0x30)),(undefined4 *)((int)this + 0x80),(int)this + 0x70);
        *(undefined4 *)((int)this + 0x90) = *puVar5;
        *(undefined4 *)((int)this + 0x94) = puVar5[1];
        *(undefined4 *)((int)this + 0x98) = puVar5[2];
        F_00427f00((undefined *)((int)this + 0x10));
      }
      uVar9 = F_00427d90();
      uVar4 = (uint)uVar9 - *(uint *)((int)this + 0x18);
      if ((((*(int *)((int)this + 0x40) == -0x20000000) && (*(int *)((int)this + 0x44) == 0)) ||
          ((int)(uVar9 >> 0x20) - *(int *)((int)this + 0x1c) !=
           (uint)((uint)uVar9 < *(uint *)((int)this + 0x18)))) || (0x95 < uVar4)) {
        if ((int)(*(ulonglong *)(gen_frame + 0x28)) != -0x20000000) {
          uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0),(int)(*(ulonglong *)(gen_frame + 0x28)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)));
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = gen_bits2f(uVar4);
          if (uVar4 != 0) {
            puVar5 = (undefined4 *)F_0043e0f0(((undefined1 *)(gen_frame + 0x0)),uVar4);
            *(undefined4 *)((int)this + 0x60) = *puVar5;
            *(undefined4 *)((int)this + 100) = puVar5[1];
            *(undefined4 *)((int)this + 0x68) = puVar5[2];
            bVar3 = F_0043dea0(((undefined1 *)(gen_frame + 0x10)),*param_2,(undefined4 *)((int)this + 0x60));
            if (bVar3 != 0) {
              (*(ulonglong *)(gen_frame + 0x38)) = F_007c9d00((undefined4)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4))));
              (*(int *)(gen_frame + 0x4c)) = 1;
              uVar4 = F_00431490(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_2 + 4),
                                   (uint)*(ushort *)(param_2 + 5));
              if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) != uVar4) {
                *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) = uVar4;
                *(undefined1 *)(param_1 + 0x1d) = 1;
              }
              if (gen_bits2f(*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50)))) != (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4))) {
                *((float *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50))) = (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4));
                *(undefined1 *)(param_1 + 0x1d) = 1;
              }
              if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) != (uint)(*(ulonglong *)(gen_frame + 0x38))) {
                *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) = (uint)(*(ulonglong *)(gen_frame + 0x38));
                *(undefined1 *)(param_1 + 0x1d) = 1;
              }
            }
          }
        }
      }
      else {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) = uVar4;
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = 0.0;
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = 0.0;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) = 0;
        fVar1 = ((float)GEN_TOF((((-(float10)0 + (float10)uVar4) / (float10)*(double *)&REFG(undefined, 0x10d4598)) *
                       (float10)*(double *)&REFG(undefined, 0x1094620))));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = fVar1;
        fVar8 = ((float10)GEN_TOD(fsin((float10)fVar1)));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (float)fVar8;
        uVar4 = F_004bd7b0(((undefined1 *)(gen_frame + 0x30)),(int)this + 0x90,(float)fVar8);
        puVar5 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x70,uVar4);
        *(undefined4 *)((int)this + 0x60) = *puVar5;
        *(undefined4 *)((int)this + 100) = puVar5[1];
        *(undefined4 *)((int)this + 0x68) = puVar5[2];
        bVar3 = F_0043dea0(((undefined1 *)(gen_frame + 0x10)),*param_2,(int)this + 0x60);
        if (bVar3 != 0) {
          (*(int *)(gen_frame + 0x4c)) = 1;
          uVar4 = F_00431490(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_2 + 4),
                               (uint)*(ushort *)(param_2 + 5));
          if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) != uVar4) {
            *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) = uVar4;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
        }
      }
      *(int *)((int)this + 0x40) = (int)(*(ulonglong *)(gen_frame + 0x28));
      *(int *)((int)this + 0x44) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4));
    }
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) != (*(int *)(gen_frame + 0x4c))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) = (*(int *)(gen_frame + 0x4c));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return param_1;
}

/* ref: FUN_007dba40 */
uint F_007dba40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dba40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  uVar2 = F_005339e0(&REFG(undefined4, 0x1375bc0));
  if ((*(char *)((int)this + 0xa0) == '\0') && (uVar2 != 0)) {
    iVar4 = *(int *)(uVar2 + 0x74);
  }
  else {
    iVar4 = -0x20000000;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x40))) != iVar4) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x40))) = iVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar4 = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  if ((*(byte *)((int)this + 0x58) & 4) != 0) {
    uVar5 = F_00538780(&REFG(undefined4, 0x1375bc0));
    iVar4 = (int)uVar5;
    (*(ulonglong *)(gen_frame + 0x20)) = uVar5;
    if (*(char *)((int)this + 0xa0) != '\0') {
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0xe0000000;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = -0x20000000;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = 0;
      (*(ulonglong *)(gen_frame + 0x20)) = 0xe0000000;
      iVar4 = (int)(*(ulonglong *)(gen_frame + 0x20));
    }
    if ((((param_2[1] != 0) || (iVar4 != param_2[2])) || ((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) != param_2[3])) &&
       (iVar4 != -0x20000000)) {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar4,(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)));
      if (uVar2 != 0) {
        uVar3 = F_0043df60(((undefined1 *)(gen_frame + 0x10)),uVar2,*param_2);
        bVar1 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar3);
        if (bVar1 != 0) {
          uVar2 = F_00760a10(uVar2);
          iVar4 = *(int *)(&REFG(undefined, 0x148a074) + uVar2 * 8);
          (*(int *)(gen_frame + 0x18)) = *(int *)(&REFG(undefined, 0x148a070) + uVar2 * 8);
          if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x38) == (int)(*(ulonglong *)(gen_frame + 0x20))) &&
             (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x3c) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) {
            (*(int *)(gen_frame + 0x28)) = 1;
          }
          else {
            (*(int *)(gen_frame + 0x28)) = 2;
          }
          uVar2 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),
                               (uint)*(ushort *)(param_2 + 5));
          if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x34))) != uVar2) {
            *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x34))) = uVar2;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x38))) != iVar4) {
            *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x38))) = iVar4;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3c))) != (*(int *)(gen_frame + 0x18))) {
            *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3c))) = (*(int *)(gen_frame + 0x18));
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x90))) != (uint)(REFG(char, 0x14ab068) != '\0')) {
            *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x90))) = (uint)(REFG(char, 0x14ab068) != '\0');
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
        }
      }
      iVar4 = (int)(*(ulonglong *)(gen_frame + 0x20));
      this = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    }
    *(int *)((int)this + 0x3c) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
    *(int *)((int)this + 0x38) = iVar4;
    iVar4 = (*(int *)(gen_frame + 0x28));
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar2 + 0x30) != iVar4) {
    *(int *)(uVar2 + 0x30) = iVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: FUN_007dbd80 */
uint F_007dbd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dbd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x2c)) = 0;
  if ((*(byte *)((int)this + 0x58) & 0x10) != 0) {
    bVar1 = F_00532990(&REFG(undefined4, 0x1375bc0));
    if (bVar1 != 0) {
      uVar6 = F_00533c20(&REFG(undefined4, 0x1375bc0));
      iVar4 = (int)(uVar6 >> 0x20);
      iVar5 = (int)uVar6;
      (*(ulonglong *)(gen_frame + 0x20)) = uVar6;
      if ((((param_2[1] != 0) || (iVar5 != param_2[2])) || (iVar4 != param_2[3])) &&
         (iVar5 != -0x20000000)) {
        uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar5,iVar4);
        if (uVar2 != 0) {
          uVar3 = F_0043e0f0(((undefined1 *)(gen_frame + 0x10)),uVar2);
          bVar1 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar3);
          if (bVar1 != 0) {
            uVar6 = F_007c9d00(uVar2);
            iVar5 = (int)(uVar6 >> 0x20);
            (*(int *)(gen_frame + 0x18)) = (int)uVar6;
            if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x48) == (int)(*(ulonglong *)(gen_frame + 0x20))) &&
               (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x4c) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) {
              (*(int *)(gen_frame + 0x2c)) = 1;
            }
            else {
              (*(int *)(gen_frame + 0x2c)) = 2;
            }
            uVar2 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),
                                 (uint)*(ushort *)(param_2 + 5));
            if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) != uVar2) {
              *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) = uVar2;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) != iVar5) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) = iVar5;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) != (*(int *)(gen_frame + 0x18))) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) = (*(int *)(gen_frame + 0x18));
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
          }
        }
        iVar5 = (int)(*(ulonglong *)(gen_frame + 0x20));
      }
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x48) = iVar5;
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x4c) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
      iVar5 = (*(int *)(gen_frame + 0x2c));
    }
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar2 + 0x60) != iVar5) {
    *(int *)(uVar2 + 0x60) = iVar5;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: FUN_007dbed0 */
uint F_007dbed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dbed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x2c)) = 0;
  if ((*(byte *)((int)this + 0x58) & 0x20) != 0) {
    bVar1 = F_00532990(&REFG(undefined4, 0x1375bc0));
    if (bVar1 != 0) {
      uVar6 = F_00533c20(&REFG(undefined4, 0x1375bc0));
      iVar4 = (int)(uVar6 >> 0x20);
      iVar5 = (int)uVar6;
      (*(ulonglong *)(gen_frame + 0x20)) = uVar6;
      if ((((param_2[1] != 0) || (iVar5 != param_2[2])) || (iVar4 != param_2[3])) &&
         (iVar5 != -0x20000000)) {
        uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar5,iVar4);
        if (uVar2 != 0) {
          uVar3 = F_0043e0f0(((undefined1 *)(gen_frame + 0x10)),uVar2);
          bVar1 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar3);
          if (bVar1 != 0) {
            uVar6 = F_007c9d00(uVar2);
            iVar5 = (int)(uVar6 >> 0x20);
            (*(int *)(gen_frame + 0x18)) = (int)uVar6;
            if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x50) == (int)(*(ulonglong *)(gen_frame + 0x20))) &&
               (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x54) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) {
              (*(int *)(gen_frame + 0x2c)) = 1;
            }
            else {
              (*(int *)(gen_frame + 0x2c)) = 2;
            }
            uVar2 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),
                                 (uint)*(ushort *)(param_2 + 5));
            if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x7c))) != uVar2) {
              *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x7c))) = uVar2;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x80))) != iVar5) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x80))) = iVar5;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x84))) != (*(int *)(gen_frame + 0x18))) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x84))) = (*(int *)(gen_frame + 0x18));
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
          }
        }
        iVar5 = (int)(*(ulonglong *)(gen_frame + 0x20));
      }
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x50) = iVar5;
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x54) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
      iVar5 = (*(int *)(gen_frame + 0x2c));
    }
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar2 + 0x78) != iVar5) {
    *(int *)(uVar2 + 0x78) = iVar5;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf5 */
uint F_007dc030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_EDX = 0;
  ulonglong uVar6;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x17);
  uVar5 = 0;
  if (uVar4 != 0) {
    if (REFG(int, 0x1375bbc) != -1) {
      iVar1 = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
      (*(int *)(gen_frame + 0x38)) = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xd0) != 0)) {
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        if (REFG(int, 0x1375bbc) == 0) {
          (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar1 + 0xe0);
        }
        (*(uint *)(gen_frame + 0x2c)) = 0xe0000000;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        if (REFG(undefined4 * PTR32, 0x1379694) != (undefined4 *)0x0) {
          uVar5 = ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1379694))))(REFG(undefined4 * PTR32, 0x1379694));
          (*(uint *)(gen_frame + 0x2c)) = uVar5;
          (*(undefined4 *)(gen_frame + 0x30)) = extraout_EDX;
        }
        if (this[0xa0] != (undefined1)0x0) {
          uVar6 = F_00538780(&REFG(undefined4, 0x1375bc0));
          (*(undefined4 *)(gen_frame + 0x28)) = (int)(uVar6 >> 0x20);
          if ((uVar6 != *(ulonglong *)(this + 0xa8)) ||
             (((*(int *)(this + 0xa8) == -0x20000000 && (*(int *)(this + 0xac) == 0)) ||
              (uVar6 == 0xe0000000)))) {
            this[0xa0] = (undefined1)0x0;
          }
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x34));
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x2c));
        (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x30));
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
        (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)(uVar5 + 0x22d18);
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
        (*(uint *)(gen_frame + 0x20)) = (uint)*(ushort *)(uVar5 + 0x22d1a);
        F_007db590(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007db710(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dba40(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dbc10(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dbd80(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dbed0(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_00776e40(uVar4,&(*(int *)(gen_frame + 0xc)));
        iVar1 = *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x40)));
        iVar2 = *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x58)));
        piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,4);
        if (uVar5 != 0) {
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x794))) != iVar1) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x794))) = iVar1;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x798))) != iVar2) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x798))) = iVar2;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
        }
        piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x14);
        if (uVar5 == 0) {
          return 0;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) != iVar1) {
          *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = iVar1;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) == iVar2) {
          return uVar5;
        }
        *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) = iVar2;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
        return uVar5;
      }
    }
    *(undefined4 *)(this + 0x28) = 0xe0000000;
    *(undefined4 *)(this + 0x2c) = 0;
    if (**(int * PTR32 *)(uVar4 + 0x20) != 0) {
      **(int * PTR32 *)(uVar4 + 0x20) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x30) = 0xe0000000;
    *(undefined4 *)(this + 0x34) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x38) = 0xe0000000;
    *(undefined4 *)(this + 0x3c) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x40) = 0xe0000000;
    *(undefined4 *)(this + 0x44) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x48) = 0xe0000000;
    *(undefined4 *)(this + 0x4c) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x60))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x60))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x50) = 0xe0000000;
    *(undefined4 *)(this + 0x54) = 0;
    uVar5 = *(uint *)(uVar4 + 0x20);
    if (*(int *)(uVar5 + 0x78) != 0) {
      *(undefined4 *)(uVar5 + 0x78) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentTeleport::vf11 */
uint F_007dc3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7dc3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if (*(int *)(uVar1 + 0x18) != 0) {
    return ~(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 3) & 1;
  }
  return 1;
}

/* ref: FUN_007dc3f0 */
uint F_007dc3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d45b4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d45a4));
  puVar1 = in_ecx + 4;
  param_2 = 9;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  in_ecx[0x108] = 0;
  in_ecx[0x109] = 0;
  *(undefined1 *)(in_ecx + 0x10a) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dc470 */
unsigned int F_007dc470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dc470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x414) != 0) {
    return 0;
  }
  iVar4 = 0;
  do {
    pvVar1 = (undefined *)F_00a3af20(&REFG(undefined, 0x14a4230),iVar4);
    if (pvVar1 != (undefined *)0x0) {
      if (*(char *)((int)pvVar1 + 6) == '\0') {
        uVar2 = *(uint *)((int)pvVar1 + 8);
        if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        pvVar1 = (undefined *)F_00a3a860(pvVar1);
        uVar2 = F_0046e5e0(pvVar1);
      }
      if (uVar2 == 0) {
        if (iVar4 < 0) {
          return 0;
        }
        if (*(int *)((int)this + 0x414) != 0) {
          piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))
                                    (*(int * PTR32 *)((int)this + -8))));
          ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0x414),0);
          *(undefined4 *)((int)this + 0x414) = 0;
        }
        *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this + -4);
        F_00a47f70(&REFG(undefined, 0x14a4230),param_2,param_1,0x7d5,iVar4,1);
        return 0;
      }
    }
    iVar4 = iVar4 + 1;
    if (4 < iVar4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_007dc540 */
uint F_007dc540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d4640));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d45fc));
  *(undefined2 *)((int)this + 0x108) = 1;
  *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  F_0043cfd0(puVar1);
  return (uint)this;
}

/* ref: FUN_007dc5a0 */
uint F_007dc5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7dc5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d45fc));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d4640));
  puVar4 = puVar1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  uVar2 = F_0043cff0(puVar4);
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar2 = F_00414620(*(undefined * PTR32 *)((int)this + 0x14),puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dc610 */
uint F_007dc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x6c))))(*(int * PTR32 *)((int)this + 4));
  *(char *)((int)this + 0x109) = (char)uVar1;
  (*(byte *)(gen_frame + 0xb)) = 1;
  puVar4 = (uint *)((int)this + 0x1c);
  do {
    uVar1 = F_00ab3b40(uVar3);
    if (((uVar1 != 0) && (*(char *)(uVar1 + 0x19) == *(char *)((int)this + 0x108))) &&
       (((&REFG(undefined1, 0x14b4edc))[uVar3 >> 3] & (*(byte *)(gen_frame + 0xb))) != 0)) {
      puVar4[-1] = uVar1;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
      *puVar4 = uVar3;
      puVar4 = puVar4 + 2;
      if (0x1d < (*(int *)(gen_frame + 0x4))) break;
    }
    uVar3 = uVar3 + 1;
    (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) << 1 | (char)(*(byte *)(gen_frame + 0xb)) < '\0';
  } while ((int)uVar3 < 0x101);
  F_007777b0(this,0,(*(int *)(gen_frame + 0x4)) + -1);
  if (0 < (*(int *)(gen_frame + 0x4))) {
    pvVar5 = (undefined *)((int)param_1 + 0x110);
    piVar2 = (int *)((int)this + 0x18);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x4));
    do {
      puVar4 = (uint *)*piVar2;
      uVar1 = *puVar4;
      F_005a2710(pvVar5,6);
      *(uint *)((int)pvVar5 + 4) = (uVar1 & 0xffffff) + (int)puVar4;
      piVar2 = piVar2 + 2;
      pvVar5 = (undefined *)((int)pvVar5 + 8);
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  F_005a2710((undefined *)((int)param_1 + 0x108),4);
  *(int *)((int)param_1 + 0x10c) = (*(int *)(gen_frame + 0x4));
  uVar8 = 0;
  uVar7 = 0;
  if (*(char *)((int)this + 0x109) == '\0') {
    uVar6 = 0xd40;
  }
  else {
    uVar6 = 0xd41;
  }
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(pvVar5,uVar6,uVar7,uVar8);
  uVar3 = F_005a2710(param_1,6);
  *(uint *)((int)param_1 + 4) = uVar1;
  return uVar3;
}

/* ref: FUN_007dc740 */
uint F_007dc740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d464c));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[7] = 0;
  *(undefined2 *)(in_ecx + 8) = 0x100;
  *(undefined1 *)((int)in_ecx + 0x22) = 1;
  puVar1 = in_ecx + 9;
  param_2 = 0x31;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  return (uint)in_ecx;
}

/* ref: FUN_007dc7b0 */
uint F_007dc7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dc7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00777b50(param_1,0,3,param_2,param_3);
  *param_4 = 7;
  if (uVar1 == 0) {
    uVar1 = F_00777b50(param_1,1000,1000,param_2,param_3);
    *param_4 = 1;
    if (uVar1 == 0) {
      uVar1 = F_00777b50(param_1,0xdac,0xdac,param_2,param_3);
      *param_4 = 2;
      if (uVar1 == 0) {
        uVar1 = F_00777b50(param_1,0xc80,0xc80,param_2,param_3);
        *param_4 = 2;
        if (uVar1 == 0) {
          uVar1 = F_00777b50(param_1,0xc81,0xc83,param_2,param_3);
          *param_4 = 3;
          if (uVar1 == 0) {
            uVar1 = F_00777b50(param_1,0xc84,0xc86,param_2,param_3);
            *param_4 = 4;
            if (uVar1 == 0) {
              uVar1 = F_00777b50(param_1,0xc87,0xc88,param_2,param_3);
              *param_4 = 5;
              if (uVar1 == 0) {
                uVar1 = F_00777b50(param_1,0xc89,0xc89,param_2,param_3);
                *param_4 = 6;
                if (uVar1 == 0) {
                  uVar1 = F_00777b50(param_1,0xce4,0xce4,param_2,param_3);
                  *param_4 = 6;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007dc920 */
uint F_007dc920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4694));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentLegacyItemStorage::vf3 */
unsigned int F_007dc950(unsigned int gen_a0)
{
  GEN_ENTER(0x7dc950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007dc9b0 */
byte F_007dc9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7dc9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint * puVar11;
  int * piVar12;
  int local_8;
  
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  if (pvVar3 == (undefined *)0x0) {
    return 0;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = pvVar3;
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
  *(*(uint * PTR32 *)&gen_args[2]) = uVar4;
  if (uVar4 == 0) {
    return 0;
  }
  piVar12 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 1;
  uVar4 = F_007782c0(*(*(undefined4 * PTR32 *)&gen_args[1]));
  local_8 = 0;
  if (0 < (int)uVar4) {
    iVar5 = (*(int *)&gen_args[4]) - (int)(*(uint * PTR32 *)&gen_args[3]);
    iVar6 = (*(int *)&gen_args[5]) - (int)(*(uint * PTR32 *)&gen_args[3]);
    puVar11 = (*(uint * PTR32 *)&gen_args[3]);
    do {
      piVar12 = piVar12 + 1;
      if (*piVar12 == 0) {
        uVar7 = F_00778330(*(*(undefined4 * PTR32 *)&gen_args[1]),local_8);
        pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
        if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar8 = F_00a3a860(pvVar3), uVar8 == 0)) {
          uVar2 = *((ushort *)GEN_TOP(((int)pvVar3 + (uVar7 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar8 = uVar7;
          pvVar3 = (undefined *)F_00a3a860(pvVar3);
          uVar2 = F_0071d2c0(pvVar3,uVar8);
        }
        if (uVar2 != 0) {
          uVar8 = F_00ab20e0((uint)uVar2);
          *puVar11 = uVar8;
          if ((*(uint * PTR32 *)&gen_args[3]) != (uint *)0x0) {
            pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
            if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar8 = F_00a3a860(pvVar3), uVar8 == 0))
            {
              bVar1 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)pvVar3)));
            }
            else {
              pvVar3 = (undefined *)F_00a3a860(pvVar3);
              bVar1 = F_0071d300(pvVar3,uVar7);
            }
            uVar9 = *(undefined4 *)(*puVar11 + (uint)bVar1 * 4);
            goto LAB_007dcb16;
          }
        }
LAB_007dcb2f: ;
        (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 0;
      }
      else {
        uVar7 = F_00a6add0(*piVar12);
        *puVar11 = uVar7;
        if (uVar7 == 0) goto LAB_007dcb2f;
        iVar10 = 0;
        do {
          if (*(int *)(uVar7 + iVar10 * 4) == *piVar12) goto LAB_007dca7d;
          iVar10 = iVar10 + 1;
        } while (iVar10 < 10);
        iVar10 = 0;
LAB_007dca7d: ;
        uVar9 = *(undefined4 *)(uVar7 + iVar10 * 4);
LAB_007dcb16: ;
        *(undefined4 *)(iVar5 + (int)puVar11) = uVar9;
        uVar7 = F_00ab24a0(uVar9);
        *(uint *)(iVar6 + (int)puVar11) = uVar7;
        if (uVar7 == 0) goto LAB_007dcb2f;
      }
      (*(uint * PTR32 *)&gen_args[3]) = (*(uint * PTR32 *)&gen_args[3]) + 5;
      local_8 = local_8 + 1;
      puVar11 = puVar11 + 1;
    } while (local_8 < (int)uVar4);
  }
  if ((*(int *)&gen_args[8]) != -1) {
    uVar4 = F_00778330(*(*(undefined4 * PTR32 *)&gen_args[1]),(*(int *)&gen_args[8]));
    pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
    if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar7 = F_00a3a860(pvVar3), uVar7 == 0)) {
      bVar1 = *((byte *)GEN_TOP(((uVar4 & 0xff) + 0x2a + (int)pvVar3)));
    }
    else {
      pvVar3 = (undefined *)F_00a3a860(pvVar3);
      bVar1 = F_0071d300(pvVar3,uVar4);
    }
    iVar5 = 0;
    puVar11 = (*(uint * PTR32 *)&gen_args[7]);
    do {
      uVar4 = F_00ab20e0(iVar5 + 2);
      uVar9 = *(undefined4 *)(uVar4 + (uint)bVar1 * 4);
      *((undefined4 *)GEN_TOP((((*(int *)&gen_args[6]) - (int)(*(uint * PTR32 *)&gen_args[7])) + (int)puVar11))) = uVar9;
      uVar4 = F_00ab24a0(uVar9);
      *puVar11 = uVar4;
      if (uVar4 == 0) {
        (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 0;
      }
      iVar5 = iVar5 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar5 < 0x18);
  }
  return (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3))));
}

/* ref: FUN_007dcbf0 */
byte F_007dcbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7dcbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  int param_8 = (int)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  int * piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  uVar4 = F_007782c0(param_4);
  F_005a2710((undefined *)(param_1 + 0x30),3);
  *(uint *)(param_1 + 0x34) = uVar4;
  F_00c48350(((int *)(gen_frame + 0x30)),-1,0x128);
  bVar2 = 0;
  (*(byte *)(gen_frame + 0x27)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < (int)uVar4) {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_3;
    puVar11 = (uint *)(param_1 + 100);
    piVar12 = param_6;
    do {
      uVar5 = F_00778330(param_4,(*(int *)(gen_frame + 0x8)));
      if ((*(char *)((int)param_4 + 6) == '\0') || (uVar6 = F_00a3a860(param_4), uVar6 == 0)) {
        uVar3 = *((ushort *)GEN_TOP(((int)param_4 + (uVar5 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar6 = uVar5;
        pvVar7 = (undefined *)F_00a3a860(param_4);
        uVar3 = F_0071d2c0(pvVar7,uVar6);
      }
      if (uVar3 != 0) {
        if ((*(char *)((int)param_4 + 6) == '\0') || (uVar6 = F_00a3a860(param_4), uVar6 == 0)) {
          bVar2 = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)param_4)));
        }
        else {
          uVar6 = uVar5;
          pvVar7 = (undefined *)F_00a3a860(param_4);
          bVar2 = F_0071d300(pvVar7,uVar6);
        }
        if (bVar2 != 0xffffffff) {
          if ((*(char *)((int)param_4 + 6) == '\0') || (uVar6 = F_00a3a860(param_4), uVar6 == 0))
          {
            (*(byte *)(gen_frame + 0x2f)) = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)param_4)));
          }
          else {
            pvVar7 = (undefined *)F_00a3a860(param_4);
            (*(byte *)(gen_frame + 0x2f)) = F_0071d300(pvVar7,uVar5);
          }
          puVar1 = ((undefined4 *)GEN_TOP(((int)piVar12 + (param_8 - (int)param_6))));
          uVar5 = F_00ab65a0(0,*((undefined4 *)GEN_TOP(((int)piVar12 + (param_8 - (int)param_6)))));
          F_005a2710(puVar11 + -0xb,3);
          pvVar7 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + (param_2 - (int)param_3))));
          uVar6 = (uint)(*(byte *)(gen_frame + 0x2f));
          puVar11[-10] = uVar5;
          uVar5 = F_00ab6240(*(undefined4 *)(*piVar12 + uVar6 * 4),1,*puVar1);
          F_0042e430(pvVar7,uVar5);
          uVar5 = F_0042a990(pvVar7);
          F_005a2710(puVar11 + -1,6);
          *puVar11 = uVar5;
          uVar5 = *((uint *)GEN_TOP(((int)puVar1 + (param_7 - param_8))));
          F_005a2710(puVar11 + 9,3);
          puVar11[10] = uVar5;
          (*(byte *)(gen_frame + 0x2f)) = *(byte *)(*piVar12 + 0x28);
          uVar5 = (uint)(*(byte *)(gen_frame + 0x2f));
          if (((int *)(gen_frame + 0x30))[(int)(uVar5)] == -1) {
            uVar8 = F_00a6ad20((uint)*(byte *)(*piVar12 + 0x28),param_5);
            uVar9 = F_00a3ba20(uVar5,param_4,0);
            (*(byte *)(gen_frame + 0x2f)) = *(byte *)(*piVar12 + 0x28);
            uVar5 = (uint)(*(byte *)(gen_frame + 0x2f));
            ((int *)(gen_frame + 0x30))[(int)(uVar5)] = uVar8 - uVar9;
          }
          if (((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] < (int)*(char *)(*piVar12 + 0x29 + uVar6)) {
            iVar10 = ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))];
            ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] = 0;
          }
          else {
            iVar10 = (int)*(char *)(*piVar12 + 0x29 + uVar6);
            ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] = ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] - iVar10;
          }
          if ((*(byte *)(gen_frame + 0x2f)) != 0) {
            uVar14 = 1;
            uVar13 = 0x20f;
            iVar15 = iVar10;
            pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar5 = F_00461d60(pvVar7,uVar13,uVar5,uVar14,iVar15);
            F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x18)),uVar5);
          }
          uVar5 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x18)));
          F_005a2710(puVar11 + 0x13,6);
          puVar11[0x14] = uVar5;
          if (iVar10 == *(char *)(uVar6 + 0x29 + *piVar12)) {
            F_005a2710(puVar11 + 0x1d,3);
            puVar11[0x1e] = 0;
          }
          else {
            F_005a2710(puVar11 + 0x1d,3);
            puVar11[0x1e] = 1;
            (*(byte *)(gen_frame + 0x27)) = 1;
          }
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x54);
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
      puVar11 = puVar11 + 2;
      piVar12 = piVar12 + 1;
      bVar2 = (*(byte *)(gen_frame + 0x27));
    } while ((*(int *)(gen_frame + 0x8)) < (int)uVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return bVar2;
}

/* ref: FUN_007dcff0 */
uint F_007dcff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dcff0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  byte bVar2;
  byte * pbVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  if ((((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) && ((*(int *)&gen_args[1]) != 0)) && (*(char *)((*(int *)&gen_args[1]) + 0xa3) != '\a')) {
    bVar2 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[0]));
    pbVar3 = (byte *)(iVar1 + 0xa5);
    if (*pbVar3 <= bVar2) {
      pbVar3 = ((byte *)GEN_TOP(((int)&(*(undefined * PTR32 *)&gen_args[0]) + 3)));
    }
    return (uint)*pbVar3;
  }
  return 0;
}

/* ref: FUN_007dd030 */
uint F_007dd030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7dd030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = *(undefined4 *)((int)this + 0x44);
  uVar3 = *(undefined4 *)((int)this + 0x48);
  uVar1 = *(undefined1 *)((int)this + 0x92);
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar4 = F_00a3d520(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x40),param_1,param_2,param_3);
    if (uVar4 != 0) {
      F_00a369d0();
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      return uVar4;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  uVar5 = F_007784e0(this);
  *(undefined4 *)((int)this + 0x44) = uVar2;
  *(int *)((int)this + 0x38) = param_1;
  *(int *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0xc) = 6;
  *(undefined4 *)((int)this + 0x10) = 5;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x48) = uVar3;
  *(undefined1 *)((int)this + 0x92) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  return CONCAT31((int3)((uint)uVar5 >> 8),uVar1);
}

/* ref: FUN_007dd0f0 */
uint F_007dd0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dd0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  byte bVar1;
  
  if (param_2 != 0) {
    if (param_3 != *(int *)(param_2 + 0x74)) {
      return 0x1165;
    }
    if (param_4 < (int)(uint)*(byte *)(param_2 + 0x9f)) {
      return 0x1166;
    }
    if ((char)param_5 == '\0') {
      bVar1 = F_00778a20(param_1);
      if (bVar1 != 0) {
        return 0x1167;
      }
    }
  }
  return 0;
}

/* ref: FUN_007dd150 */
uint F_007dd150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd150u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  byte bVar2;
  byte * pbVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) && ((*(int *)&gen_args[1]) != 0)) {
    bVar2 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[0]));
    pbVar3 = (byte *)(iVar1 + 0xa5);
    if (*pbVar3 <= bVar2) {
      pbVar3 = ((byte *)GEN_TOP(((int)&(*(undefined * PTR32 *)&gen_args[0]) + 3)));
    }
    return (uint)*pbVar3;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCrossEditor::vf1 */
uint F_007dd190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dd190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  
  bVar2 = 0;
  if (0 < param_3) {
    if (param_4 == 1) {
      if ((*param_2 & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 4);
      }
      bVar2 = F_00778c80(this,uVar3);
    }
    else if (param_4 == 2) {
      if ((*param_2 & 0xf) != 0) {
        iVar1 = *(int *)(param_2 + 4);
        if ((iVar1 < 0) || (iVar1 == 1)) {
          *(undefined4 *)(this + 0x6c) = 2;
        }
        else if (iVar1 == 0) goto LAB_007dd1bc;
        *(undefined4 *)(this + 0x68) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return (uint)param_1;
      }
LAB_007dd1bc: ;
      *(undefined4 *)(this + 0x6c) = 1;
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(byte *)(param_1 + 1) = bVar2;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007dd230 */
uint F_007dd230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d46dc));
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cc20((undefined *)((int)this + 0x14),&REFG(undefined, 0x10be323),REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_007dd280 */
uint F_007dd280(unsigned int gen_a0)
{
  GEN_ENTER(0x7dd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d46dc));
  uVar3 = F_0042c880((undefined *)((int)this + 0x14));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dd2d0 */
byte F_007dd2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x7dd2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 * this_01;
  undefined * pvVar4;
  int iVar5;
  uint * puVar6;
  uint uVar7;
  int iVar8;
  uint * puVar9;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  uVar7 = 0;
  if (((int)param_3 < 0) || (7 < param_3)) {
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = *(undefined * PTR32 *)(&REFG(undefined, 0x10c4510) + param_3 * 4);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x28)),0,0x1e0);
  do {
    uVar3 = F_00ab3c60(uVar7);
    if ((uVar3 != 0) && ((undefined *)(uint)*(byte *)(uVar3 + 8) == (*(undefined * PTR32 *)(gen_frame + 0x1c)))) {
      iVar8 = *(int *)((int)this + 0x28);
      *(uint *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 + -4) = uVar7;
      *(int *)((int)this + 0x28) = iVar8 + 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x79);
  iVar8 = 0;
  bVar2 = true;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      uVar7 = F_00ab3c60(*(undefined4 *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 + -4));
      if ((uVar7 != 0) && (uVar7 = F_00ab24a0(*(undefined4 *)(uVar7 + 4)), uVar7 == 0)) {
        bVar2 = false;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)this + 0x28));
    if (!bVar2) {
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
      return 0;
    }
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(*(int *)(gen_frame + 0xc)));
    if ((this_00 != (undefined *)0x0) && ((*(int *)(gen_frame + 0x20)) = 0, 0 < *(int *)((int)this_00 + 0xc))) {
      do {
        this_01 = (undefined4 *)F_00a37da0(this_00,(*(int *)(gen_frame + 0x20)));
        if (this_01 != (undefined4 *)0x0) {
          if (*(char *)((int)this_01 + 6) == '\0') {
            uVar7 = this_01[2];
            if ((*(byte *)(this_01 + 5) & 1) != 0) {
              uVar7 = uVar7 + 1000000;
            }
          }
          else {
            pvVar4 = (undefined *)F_00a3a860(this_01);
            uVar7 = F_0046e5e0(pvVar4);
          }
          if (uVar7 != 0) {
            if (*(char *)((int)this_01 + 6) == '\0') {
              uVar7 = this_01[2];
              if ((*(byte *)(this_01 + 5) & 1) != 0) {
                uVar7 = uVar7 + 1000000;
              }
            }
            else {
              pvVar4 = (undefined *)F_00a3a860(this_01);
              uVar7 = F_0046e5e0(pvVar4);
            }
            uVar7 = F_00ab24a0(uVar7);
            if ((((uVar7 != 0) && (*(char *)(uVar7 + 0xa0) == '\x0f')) &&
                (uVar3 = F_00ab3c60(*(undefined4 *)(uVar7 + 0x2c)), uVar3 != 0)) &&
               ((undefined *)(uint)*(byte *)(uVar3 + 8) == (*(undefined * PTR32 *)(gen_frame + 0x1c)))) {
              iVar8 = *(int *)((int)this + 0x28);
              iVar5 = 0;
              if (0 < iVar8) {
                do {
                  if (*(int *)(((undefined1 *)(gen_frame + 0x28)) + iVar5 * 4 + -4) == *(int *)(uVar7 + 0x2c)) break;
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar8);
              }
              if ((iVar5 != iVar8) && (*((int *)GEN_TOP((*(int *)((int)this + 0x30) + iVar5 * 4))) == 0)) {
                *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x30) + iVar5 * 4))) = this_01;
                F_00a3d750(&REFG(undefined, 0x14a4230),*this_01,(uint)*(ushort *)(this_01 + 1));
              }
            }
          }
        }
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      } while ((*(int *)(gen_frame + 0x20)) < *(int *)((int)this_00 + 0xc));
    }
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  } while ((*(int *)(gen_frame + 0xc)) < 4);
  F_005a2710((undefined *)(param_2 + 0x28),3);
  *(uint *)(param_2 + 0x2c) = param_3;
  uVar1 = *(undefined4 *)((int)this + 0x28);
  F_005a2710((undefined *)(param_2 + 0x30),4);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  if (param_5 == -1) {
    if ((*(int *)((int)this + 0x2c) == -1) && (0 < *(int *)((int)this + 0x28))) {
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
  }
  else {
    iVar8 = 0;
    if (0 < *(int *)((int)this + 0x28)) {
      do {
        if (param_5 == *(int *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 + -4)) {
          *(int *)((int)this + 0x2c) = iVar8;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int)this + 0x28));
    }
  }
  uVar1 = *(undefined4 *)((int)this + 0x2c);
  F_005a2710((undefined *)(param_2 + 0x38),3);
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  (*(int *)(gen_frame + 0x20)) = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = param_4;
    puVar9 = (uint *)(param_2 + 0x104);
    do {
      uVar7 = (uint)(*((int *)GEN_TOP((*(int *)((int)this + 0x30) + (*(int *)(gen_frame + 0x20)) * 4))) == 0);
      if (((byte)param_6 != 0) && ((uint)(byte)param_6 == *(uint *)(((undefined1 *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x20)) * 4 + -4))
         ) {
        uVar7 = uVar7 + 2;
      }
      F_005a2710(puVar9 + -0x31,3);
      uVar1 = *(undefined4 *)(((undefined1 *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x20)) * 4 + -4);
      puVar9[-0x30] = uVar7;
      puVar6 = (uint *)F_00ab3c60(uVar1);
      if ((puVar6 != (uint *)0x0) && (uVar7 = F_00ab24a0(puVar6[1]), uVar7 != 0)) {
        uVar3 = F_00ab65a0(puVar6[1],uVar7);
        F_005a2710(puVar9 + -1,3);
        *puVar9 = uVar3;
        uVar3 = *puVar6;
        F_005a2710(puVar9 + 0x2f,4);
        puVar9[0x30] = uVar3;
        uVar7 = F_00ab6240(puVar6[1],1,uVar7);
        F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x1c)),uVar7);
        uVar7 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x1c)));
        F_005a2710(puVar9 + 0x5f,6);
        puVar9[0x60] = uVar7;
        uVar7 = puVar6[1];
        F_005a2710(puVar9 + 0x8f,4);
        puVar9[0x90] = uVar7;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x54);
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      puVar9 = puVar9 + 2;
    } while ((*(int *)(gen_frame + 0x20)) < *(int *)((int)this + 0x28));
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return 1;
}

/* ref: FUN_007dd6f0 */
uint F_007dd6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d472c));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4720));
  puVar2 = in_ecx + 4;
  iVar1 = 1;
  do {
    F_0042b630(puVar2);
    puVar2 = puVar2 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  puVar2 = in_ecx + 0x2e;
  iVar1 = 10;
  do {
    F_0042b630(puVar2);
    puVar2 = puVar2 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined2 *)(in_ecx + 0x115) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dd760 */
uint F_007dd760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4774));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dd780 */
unsigned int F_007dd780(unsigned int gen_a0)
{
  GEN_ENTER(0x7dd780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007dd7c0 */
uint F_007dd7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d47bc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_007dd800 */
uint F_007dd800(unsigned int gen_a0)
{
  GEN_ENTER(0x7dd800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa40];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xa38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa3c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x146;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00779150(this,((undefined4 *)(gen_frame + 0x0)));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x147,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0xa38));
  iVar4 = 0x146;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0xa38)) ^ (uint)(uint)(gen_frame + 0xa3c));
  return uVar3;
}

/* ref: FUN_007dd890 */
uint F_007dd890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  F_005a2710(param_1,4);
  *(undefined4 *)((int)param_1 + 4) = 2;
  pvVar1 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (pvVar1 == (undefined *)0x0) {
    uVar4 = F_0046ff40();
    uVar2 = (uint)(uVar4 / 1000);
  }
  else {
    uVar2 = F_00975680(pvVar1);
  }
  uVar5 = *(undefined4 *)((int)this + 0x20);
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_00462810(pvVar1,0x11e5,uVar5,uVar2);
  uVar2 = F_0042a990(uVar2);
  uVar3 = F_005a2710((undefined *)((int)param_1 + 8),6);
  *(uint *)((int)param_1 + 0xc) = uVar2;
  return uVar3;
}

/* ref: FUN_007dd910 */
uint F_007dd910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4804));
  in_ecx[3] = 0;
  *(undefined2 *)(in_ecx + 4) = 0;
  *(undefined1 *)((int)in_ecx + 0x12) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dd940 */
unsigned int F_007dd940(unsigned int gen_a0)
{
  GEN_ENTER(0x7dd940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007dd980 */
uint F_007dd980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d484c));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007ddb00 */
uint F_007ddb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ddb00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4894));
  return (uint)in_ecx;
}

/* ref: FUN_007ddb20 */
unsigned int F_007ddb20(unsigned int gen_a0)
{
  GEN_ENTER(0x7ddb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007ddb60 */
uint F_007ddb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ddb60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d48dc));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007ddb80 */
unsigned int F_007ddb80(unsigned int gen_a0)
{
  GEN_ENTER(0x7ddb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007ddd00 */
uint F_007ddd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ddd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4924));
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
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
  return (uint)this;
}

/* ref: FUN_007ddd50 */
unsigned int F_007ddd50(unsigned int gen_a0)
{
  GEN_ENTER(0x7ddd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4924));
  piVar2 = (int *)((int)this + 0x1c);
  iVar3 = 10;
  do {
    puVar1 = (undefined4 *)*piVar2;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf11 */
uint F_007dddb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7dddb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((REFG(undefined1, 0x14b4ec1) & 2) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    in_EAX = 0;
    if (*(int *)(uVar1 + 0x18) != 0) {
      return ~(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 0x1f) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_007ddde0 */
uint F_007ddde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ddde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = F_00435250((uint)REFG(undefined1, 0x14ab0d4),0);
  uVar4 = F_00ab21a0(uVar3);
  uVar1 = (*(uint *)&gen_args[3]);
  if ((uVar4 != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) < 10)) {
    if ((REFG(undefined1, 0x14b4ec2) & 0x20) != 0) {
      bVar2 = F_00779a50(&REFG(undefined1, 0x14ab070),uVar3,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
      uVar4 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        uVar4 = F_00779b90((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar1,0,uVar3,10000,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
      }
    }
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) < 10) && ((REFG(undefined1, 0x14b4ec2) & 0x40) != 0)) {
      bVar2 = F_00779ae0(&REFG(undefined1, 0x14ab070),(int)&(*(uint *)&gen_args[3]) + 3,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
      uVar4 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        uVar4 = F_00779b90((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar1,1,(*(uint *)&gen_args[3]) >> 0x18,1000000,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),
                             (*(undefined4 *)(gen_frame + 0x8)));
      }
    }
  }
  return uVar4;
}

/* ref: FUN_007dded0 */
byte F_007dded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dded0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 * local_c;
  int local_8;
  
  uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 < 4) {
    do {
      iVar1 = *(int *)(&REFG(undefined, 0x10c046c) + *(int *)((int)this + 0x14) * 0xc);
      iVar2 = *(int *)(&REFG(undefined, 0x10c0468) + *(int *)((int)this + 0x14) * 0xc);
      iVar9 = *(int *)((int)this + 0x18);
      while (iVar9 < iVar1 - iVar2) {
        iVar9 = *(int *)((int)this + 0x14);
        if (*(int *)((int)this + 0x18) <
            *(int *)(&REFG(undefined, 0x10c046c) + iVar9 * 0xc) - *(int *)(&REFG(undefined, 0x10c0468) + iVar9 * 0xc)) {
          local_8 = *(int *)(&REFG(undefined, 0x10c0468) + iVar9 * 0xc) + *(int *)((int)this + 0x18);
        }
        else {
          local_8 = 0;
        }
        puVar6 = (uint *)F_00ab38a0(local_8);
        if (puVar6 == (uint *)0x0) {
          return 0;
        }
        iVar9 = local_8;
        uVar7 = F_00a4ffd0();
        bVar4 = F_00b8de30(uVar7,iVar9);
        if (((bVar4 != 0) && ((ushort)*(byte *)((int)puVar6 + 0x31) <= (ushort)uVar5)) &&
           ((ushort)uVar5 <= (ushort)*(byte *)((int)puVar6 + 0x32))) {
          uVar7 = F_00ab3900((uint)(byte)puVar6[0xc]);
          uVar10 = 0;
          uVar8 = F_00404270();
          local_c = (undefined4 *)F_00406bd0(100,0,uVar8,uVar10);
          if (local_c == (undefined4 *)0x0) {
            local_c = (undefined4 *)0x0;
          }
          else {
            *local_c = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
            local_c[1] = 5;
            local_c[2] = 0;
            F_0042b630(local_c + 3);
            *local_c = (*(undefined * PTR32 (*)[1])REFP(0x10c4404));
            local_c[0x18] = 0;
          }
          uVar8 = *puVar6;
          iVar9 = *(int *)(uVar7 + 4);
          iVar3 = *(int *)((int)this + 0x10);
          local_c[2] = iVar9;
          F_0042e430(local_c + 3,(uVar8 & 0xffffff) + (int)puVar6);
          if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar3 * 4))) != iVar9) {
            *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar3 * 4))) = iVar9;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          uVar7 = F_0042a990(local_c + 3);
          if (uVar7 != *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3 * 4)))) {
            *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3 * 4))) = uVar7;
            *(undefined1 *)(param_2 + 0x1d) = 1;
          }
          if (*((undefined * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + iVar3 * 4))) != &REFG(undefined, 0x10be333)) {
            *((undefined * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + iVar3 * 4))) = &REFG(undefined, 0x10be333);
            *(undefined1 *)(param_2 + 0x1d) = 1;
          }
          local_c[0x18] = local_8;
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 4 + 0x1c))) = local_c;
          *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
          if (9 < *(int *)((int)this + 0x10)) {
            return 0;
          }
        }
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
        iVar9 = *(int *)((int)this + 0x18);
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      *(undefined4 *)((int)this + 0x18) = 0;
    } while (*(int *)((int)this + 0x14) < 4);
    iVar1 = *(int *)((int)this + 0x14);
  }
  return 3 < iVar1;
}

/* ref: FUN_007de0d0 */
uint F_007de0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d496c));
  in_ecx[7] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007de0f0 */
unsigned int F_007de0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d49b4));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = &REFG(undefined, 0x10be336);
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 1;
  *(undefined2 *)((int)in_ecx + 0x49) = 0;
  *(undefined2 *)((int)in_ecx + 0x53) = 0;
  *(undefined4 *)((int)in_ecx + 0x4b) = 0;
  *(undefined4 *)((int)in_ecx + 0x4f) = 0;
  return 0;
}

/* ref: FUN_007de150 */
unsigned int F_007de150(unsigned int gen_a0)
{
  GEN_ENTER(0x7de150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007de190 */
uint F_007de190(unsigned int gen_a0)
{
  GEN_ENTER(0x7de190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11960];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x11958)) = 0x7de19d;
  (*(uint *)(gen_frame + 0x11958)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  puVar1 = ((undefined4 *)(gen_frame + 0x10000));
  iVar4 = 0x32a;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined1 *)(gen_frame + 0x10018)),4);
  (*(undefined4 *)(gen_frame + 0x1001c)) = 1;
  F_0077a0b0(this,((undefined4 *)(gen_frame + 0x10000)));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x32b,((undefined4 *)(gen_frame + 0x10000)));
  this_00 = &(*(uint *)(gen_frame + 0x11958));
  iVar4 = 0x32a;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x11958)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar3;
}

/* ref: FUN_007de230 */
uint F_007de230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11970];
  bool bVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x11968)) = 0x7de23d;
  (*(uint *)(gen_frame + 0x11968)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  *(uint *)((int)this + 0x3c) = param_1;
  puVar2 = ((undefined4 *)(gen_frame + 0x10010));
  iVar5 = 0x32a;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_005a2710(((undefined1 *)(gen_frame + 0x10028)),4);
  (*(undefined4 *)(gen_frame + 0x1002c)) = 2;
  F_0077a4b0(this,((undefined4 *)(gen_frame + 0x10010)),param_1);
  iVar5 = 0;
  bVar1 = false;
  (*(uint *)(gen_frame + 0x10008)) = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    do {
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0xac + iVar5)));
      iVar6 = *(int *)((int)this + 0x20) + iVar5;
      if (uVar3 == 0) {
        uVar3 = 99;
      }
      else {
        uVar3 = param_1 / uVar3;
      }
      if (*(uint *)(iVar6 + 0xc0) < uVar3) {
        uVar3 = *(uint *)(iVar6 + 0xc0);
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      if (*(uint *)(iVar6 + 0xc4) != uVar3) {
        *(uint *)(iVar6 + 0xc4) = uVar3;
        bVar1 = true;
      }
      (*(uint *)(gen_frame + 0x10008)) = (*(uint *)(gen_frame + 0x10008)) + 1;
      iVar5 = iVar5 + 0xcc;
    } while ((*(uint *)(gen_frame + 0x10008)) < *(uint *)((int)this + 0x28));
    if (bVar1) {
      F_0077a0b0(this,((undefined4 *)(gen_frame + 0x10010)));
      F_005a2710(((undefined1 *)(gen_frame + 0x10028)),4);
      (*(undefined4 *)(gen_frame + 0x1002c)) = 3;
    }
  }
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),0x32b,((undefined4 *)(gen_frame + 0x10010)));
  this_00 = &(*(uint *)(gen_frame + 0x11968));
  iVar5 = 0x32a;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x11968)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar3;
}

/* ref: FUN_007de390 */
unsigned int F_007de390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7de390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * this_01;
  undefined4 uVar3;
  
  if (param_1 < *(uint *)((int)this + 0x28)) {
    this_01 = ((undefined *)GEN_TOP((param_1 * 0xcc + *(int *)((int)this + 0x20))));
    *(int *)((int)this_01 + 0xb8) = param_2;
    *(undefined4 *)((int)this_01 + 0xac) = param_4;
    *(uint *)((int)this_01 + 0xb0) = param_3 & 0xffff;
    uVar3 = 0x12;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_00461bb0(this_00,uVar3,param_4);
    F_0042e430((undefined *)((int)this_01 + 0x54),uVar1);
    *(undefined1 *)((int)this_01 + 0xbc) = (undefined1)param_5;
    *(undefined4 *)((int)this_01 + 0xa8) = 0xffffffff;
    uVar1 = F_00ab24a0(*(undefined4 *)((int)this_01 + 0xb8));
    if (uVar1 == 0) {
      *(undefined1 *)((int)this + 0x54) = 1;
    }
    else {
      uVar2 = F_00ab6240(*(undefined4 *)((int)this_01 + 0xb8),0,uVar1);
      F_0042e430(this_01,uVar2);
      uVar2 = F_00ab25d0((uint)*(byte *)(uVar1 + 0xa1));
      if (uVar2 == 0) {
        uVar2 = F_00ab65a0(param_2,uVar1);
      }
      else {
        uVar2 = *(uint *)(uVar2 + 4);
      }
      *(uint *)((int)this_01 + 0xa8) = uVar2;
      *(undefined1 *)((int)this_01 + 200) = *(undefined1 *)(uVar1 + 0xbe);
      uVar1 = *(uint *)(uVar1 + 0x28);
      *(uint *)((int)this_01 + 0xc0) = uVar1;
      if (99 < uVar1) {
        *(undefined4 *)((int)this_01 + 0xc0) = 99;
      }
      *(undefined4 *)((int)this_01 + 0xc4) = *(undefined4 *)((int)this_01 + 0xc0);
    }
    if (param_2 - 0x17U < 4) {
      uVar1 = F_00a3c240(&REFG(undefined, 0x14a4230),param_2);
      *(uint *)((int)this_01 + 0xb4) = uVar1;
      return 0;
    }
    uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),param_2,1,1,1);
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_2,0,1,1);
    *(uint *)((int)this_01 + 0xb4) = uVar1 + uVar2;
  }
  return 0;
}

/* ref: FUN_007de4e0 */
uint F_007de4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4a04));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d49f8));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *(undefined1 *)(in_ecx + 8) = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007de530 */
uint F_007de530(unsigned int gen_a0)
{
  GEN_ENTER(0x7de530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  uint in_EAX = 0;
  int iVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar1 != (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0xffffffff;
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    *(undefined4 *)((int)this + 0x34) = 0;
    in_EAX = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    in_EAX = F_00a70580(*(undefined * PTR32 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar2 = *(int *)((int)this + 0x30);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    iVar4 = iVar3 + -1;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(iVar2 + -4);
    if (-1 < iVar4) {
      this_00 = (undefined *)(iVar3 * 0x58 + 4 + iVar2);
      do {
        this_00 = (undefined *)((int)this_00 + -0x58);
        F_0042c880(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    uVar5 = F_00406b30((*(int * PTR32 *)(gen_frame + 0x18)));
    in_EAX = (uint)uVar5;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  return in_EAX;
}

/* ref: FUN_007de5d0 */
unsigned int F_007de5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7de5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x10);
  if (this_00 != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    if (*(int *)((int)this + 0x30) != 0) {
      F_00a7b630(this_00,(int)this + 0xc,
                   *((int *)GEN_TOP((*(int *)((int)this + 0x18) * 0x58 + *(int *)((int)this + 0x30)))) + -1);
      return 0;
    }
    F_00a7b630(this_00,(int)this + 0xc,1);
  }
  return 0;
}

/* ref: FUN_007de620 */
unsigned int F_007de620(unsigned int gen_a0)
{
  GEN_ENTER(0x7de620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x10);
  if ((this_00 != (undefined *)0x0) && (iVar1 = *(int *)((int)this + 0x24), 0 < iVar1)) {
    if (*(int *)((int)this + 0x30) != 0) {
      F_00a7e300(this_00,(int)this + 0xc,
                   *((int *)GEN_TOP((*(int *)((int)this + 0x18) * 0x58 + *(int *)((int)this + 0x30)))) + -1,
                   iVar1);
      return 0;
    }
    F_00a7e300(this_00,(int)this + 0xc,1,iVar1);
  }
  return 0;
}

/* ref: FUN_007de670 */
uint F_007de670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7de670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint * puVar3;
  ushort * puVar4;
  uint uVar5;
  undefined * pvVar6;
  uint * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_10;
  int local_c;
  
  iVar2 = (int)param_2;
  if ((*(byte *)((int)this + 0x28) & 0x10) == 0) {
    return 0;
  }
  puVar3 = (uint *)F_00a67930(*(undefined4 *)((int)this + 0x10));
  puVar4 = (ushort *)F_00a67950(*(undefined4 *)((int)this + 0x10));
  if ((puVar3[0x4d] < 0x39) || (0x3c < puVar3[0x4d])) {
    F_005a2710((undefined *)((int)param_2 + 0x10d0),4);
    *(undefined4 *)((int)param_2 + 0x10d4) = 1;
    local_10 = 0;
    if ((*puVar4 != 0) && (local_10 = *puVar4 - 1, local_10 != 0)) {
      pvVar6 = (undefined *)((int)param_2 + 0x1110);
      param_2 = puVar4 + 0x2e;
      local_c = local_10;
      do {
        uVar5 = F_0042a990(param_2);
        F_005a2710(pvVar6,8);
        param_2 = param_2 + 0x2c;
        *(uint *)((int)pvVar6 + 4) = uVar5;
        pvVar6 = (undefined *)((int)pvVar6 + 8);
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    F_005a2710((undefined *)(iVar2 + 0x1108),4);
    *(int *)(iVar2 + 0x110c) = local_10;
  }
  else {
    F_005a2710((undefined *)((int)param_2 + 0x10d0),4);
    *(undefined4 *)((int)param_2 + 0x10d4) = 2;
    uVar5 = F_0042a990(puVar4 + 0x2e);
    F_005a2710((undefined *)((int)param_2 + 0x1100),8);
    *(uint *)((int)param_2 + 0x1104) = uVar5;
    F_005a2710((undefined *)((int)param_2 + 0x1108),4);
    *(undefined4 *)((int)param_2 + 0x110c) = 0;
    uVar5 = F_0042a990(puVar3 + 0x51);
    F_005a2710((undefined *)((int)param_2 + 0x1220),8);
    *(uint *)((int)param_2 + 0x1224) = uVar5;
  }
  uVar5 = (uint)(ushort)puVar3[0x45];
  uVar8 = 0x23;
  pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_00461bb0(pvVar6,uVar8,uVar5);
  F_005a2710((undefined *)(iVar2 + 0x10d8),6);
  *(uint *)(iVar2 + 0x10dc) = uVar5;
  uVar5 = puVar3[0x4c];
  F_005a2710((undefined *)(iVar2 + 0x10e0),4);
  *(uint *)(iVar2 + 0x10e4) = uVar5;
  uVar5 = F_00a67ce0(puVar3[0x4d],(uint)(byte)puVar3[0xb3],(uint)*(byte *)((int)puVar3 + 0x12e));
  F_005a2710((undefined *)(iVar2 + 0x10e8),4);
  *(uint *)(iVar2 + 0x10ec) = uVar5;
  uVar5 = puVar3[0x4e];
  F_005a2710((undefined *)(iVar2 + 0x10f0),4);
  *(uint *)(iVar2 + 0x10f4) = uVar5;
  uVar5 = F_0042a990(puVar3 + 1);
  F_005a2710((undefined *)(iVar2 + 0x10f8),8);
  *(uint *)(iVar2 + 0x10fc) = uVar5;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0x1ca;
  pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar6,uVar8,uVar9,uVar10);
  F_005a2710((undefined *)(iVar2 + 0x11d0),8);
  *(uint *)(iVar2 + 0x11d4) = uVar5;
  iVar1 = (int)(puVar3[0x47] - puVar3[0x46]) / 0x54;
  if (iVar1 != 0) {
    param_2 = (ushort *)(iVar2 + 0x11e0);
    local_10 = 0;
    local_c = iVar1;
    do {
      uVar5 = F_0042a990(puVar3[0x46] + local_10);
      F_005a2710(param_2,8);
      local_10 = local_10 + 0x54;
      *(uint *)((int)param_2 + 4) = uVar5;
      param_2 = (ushort *)((int)param_2 + 8);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  F_005a2710((undefined *)(iVar2 + 0x11d8),4);
  *(int *)(iVar2 + 0x11dc) = iVar1;
  uVar8 = 0;
  puVar7 = (uint *)F_00a67920(*(undefined4 *)((int)this + 0x10));
  uVar5 = 0;
  if (*puVar7 != 0) {
    puVar4 = (ushort *)puVar7[2];
    do {
      if (*puVar3 == (uint)*puVar4) {
        uVar8 = *(undefined4 *)((ushort *)puVar7[2] + uVar5 * 0x8e + 0x8c);
        goto LAB_007de97c;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x8e;
    } while (uVar5 < *puVar7);
    uVar8 = 0;
  }
LAB_007de97c: ;
  F_005a2710((undefined *)(iVar2 + 0x1228),4);
  *(undefined4 *)(iVar2 + 0x122c) = uVar8;
  uVar8 = *(undefined4 *)((int)this + 0x1c);
  F_005a2710((undefined *)(iVar2 + 0x1230),4);
  *(undefined4 *)(iVar2 + 0x1234) = uVar8;
  return 0x10;
}

/* ref: FUN_007de9e0 */
uint F_007de9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4a4c));
  in_ecx[3] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_007dea10 */
uint F_007dea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dea10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4a94));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 4);
  in_ecx[0x19] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentBlacklist::vf3 */
unsigned int F_007dea50(unsigned int gen_a0)
{
  GEN_ENTER(0x7dea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 100) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 100),0);
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007deab0 */
uint F_007deab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7deab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4adc));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 4);
  in_ecx[0x19] = 0;
  *(undefined1 *)(in_ecx + 0x1a) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007deaf0 */
uint F_007deaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7deaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4b24));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 4);
  in_ecx[0x1a] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007deb30 */
uint F_007deb30(unsigned int gen_a0)
{
  GEN_ENTER(0x7deb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)((int)this + 0x68) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x68),0);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  return uVar1;
}

/* ref: FUN_007deb90 */
uint F_007deb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7deb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4b74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4b68));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined1 *)((int)this + 0xa52) = 0;
  *(undefined4 *)((int)this + 0xa54) = 0;
  puVar1 = (undefined1 *)((int)this + 0xa58);
  iVar5 = 0x1c;
  do {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1 = puVar1 + 8;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(undefined2 *)((int)this + 0xb40) = 0;
  puVar2 = (undefined4 *)((int)this + 0xb44);
  iVar5 = 0x31;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(undefined4 *)((int)this + 0xd9c) = 0;
  *(undefined4 *)((int)this + 0xda0) = 0;
  *(undefined4 *)((int)this + 0xda4) = 0;
  *(undefined2 *)((int)this + 0xda8) = 0;
  *(undefined1 *)((int)this + 0xdaa) = 0;
  *(undefined4 *)((int)this + 0xdac) = 0;
  *(undefined4 *)((int)this + 0xdb0) = 0;
  *(undefined4 *)((int)this + 0xdb4) = 0;
  *(undefined4 *)((int)this + 0xdb8) = 0;
  *(undefined4 *)((int)this + 0xdc0) = 9999;
  *(undefined1 *)((int)this + 0xdc6) = 0;
  *(undefined4 *)((int)this + 0xdc8) = 0;
  *(undefined4 *)((int)this + 0xdcc) = 0;
  *(undefined4 *)((int)this + 0xdd8) = 0;
  *(undefined4 *)((int)this + 0xddc) = 0;
  *(undefined1 *)((int)this + 0xdd4) = 0;
  *(undefined4 *)((int)this + 0xdd0) = 0x75300000;
  *(undefined1 *)((int)this + 0xdef) = 0;
  *(undefined4 *)((int)this + 0xdf0) = 0;
  *(undefined4 *)((int)this + 0xdfc) = 0;
  *(undefined2 *)((int)this + 0xdc4) = 0;
  *(undefined4 *)((int)this + 0xde0) = 0;
  *(undefined4 *)((int)this + 0xde4) = 0;
  *(undefined2 *)((int)this + 0xde8) = 0;
  *(undefined4 *)((int)this + 0xdea) = 0;
  *(undefined1 *)((int)this + 0xdee) = 0;
  *(undefined4 *)((int)this + 0xdf4) = 0;
  *(undefined1 *)((int)this + 0xdf8) = 0;
  *(undefined4 *)((int)this + 0xe00) = 0;
  *(undefined4 *)((int)this + 0xe04) = 0;
  puVar2 = (undefined4 *)((int)this + 0xe08);
  param_1 = 5;
  do {
    *puVar2 = 0;
    F_0042b630(puVar2 + 1);
    puVar2 = puVar2 + 0x16;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined2 *)((int)this + 0x1018) = 0;
  *(undefined4 *)((int)this + 0x101c) = 0;
  *(undefined4 *)((int)this + 0x1020) = 0;
  F_00c48350((undefined *)((int)this + 0x28),0,0x3a8);
  F_00c48350((undefined *)((int)this + 0xa18),0,0x3a);
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  F_00c48350((undefined *)((int)this + 0x3d4),0,400);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x24);
  if (uVar4 != 0) {
    if (**(int * PTR32 *)(uVar4 + 0x20) != *(int *)((int)this + 0x564)) {
      **(int * PTR32 *)(uVar4 + 0x20) = *(int *)((int)this + 0x564);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  uVar4 = 0;
  puVar2 = (undefined4 *)((int)this + 0x568);
  do {
    *(short *)(puVar2 + 2) = (short)uVar4;
    *puVar2 = 0;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 3;
  } while (uVar4 < 100);
  iVar5 = (int)this + 0xc;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  F_0043cfd0(iVar5);
  return (uint)this;
}

/* ref: FUN_007dedc0 */
uint F_007dedc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7dedc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  ulonglong uVar4;
  undefined4 * puVar5;
  int local_8;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4b74));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d4b68));
  puVar5 = puVar1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  F_0043cff0(puVar5);
  local_8 = 5;
  this_00 = (undefined *)((int)this + 0x101c);
  do {
    this_00 = (undefined *)((int)this_00 + -0x58);
    uVar4 = F_0042c880(this_00);
    uVar2 = (uint)uVar4;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar2 = F_00414620(*(undefined * PTR32 *)((int)this + 0x14),puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dee60 */
byte F_007dee60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dee60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if (param_2 < 1) {
    return 1;
  }
  if (((byte)*param_1 & 0xf) != 3) {
    return 1;
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    F_0077b8f0(this);
    F_0077b9f0(this,*(undefined4 *)((int)this + 0xda4),(int)this + 0x1018);
  }
  else {
    if (iVar1 == 1) {
      if (param_2 < 2) {
        return 0;
      }
      if (((byte)param_1[2] & 0xf) != 3) {
        return 0;
      }
      *(char *)((int)this + 0x1018) = (char)param_1[3];
      return 0;
    }
    if (iVar1 == 2) {
      if (param_2 < 2) {
        return 0;
      }
      if (((byte)param_1[2] & 0xf) != 3) {
        return 0;
      }
      iVar1 = param_1[3];
      if (iVar1 < 0) {
        return 0;
      }
      if (*(int *)((int)this + 0xe04) <= iVar1) {
        return 0;
      }
      *(char *)((int)this + 0x1019) = (char)iVar1;
      return 0;
    }
  }
  *(undefined4 *)((int)this + 0xe00) = 0;
  F_0077ba50(this);
  return 1;
}

/* ref: FUN_007def30 */
byte F_007def30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7def30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if ((param_2 < 1) || (((byte)*param_1 & 0xf) != 3)) {
    *(undefined4 *)((int)this + 0x1020) = 0;
  }
  else {
    iVar1 = param_1[1];
    *(undefined4 *)((int)this + 0x1020) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0xdb4) = 4;
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_007def80 */
byte F_007def80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7def80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  if (((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) && (param_1[1] == 0)) {
    if (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0) {
      F_00438970(*(undefined * PTR32 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0xdac));
      F_00443e00(*(undefined * PTR32 *)((int)this + 0x1c));
    }
    *(undefined4 *)((int)this + 0xdb4) = 5;
  }
  *(undefined4 *)((int)this + 0x1020) = 0;
  return 1;
}

/* ref: FUN_007defe0 */
uint F_007defe0(unsigned int gen_a0)
{
  GEN_ENTER(0x7defe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x3d1) = 1;
  if (*(int *)((int)this + 0x20) == 0) {
    return in_EAX;
  }
  bVar1 = *(byte *)((int)this + 0xb41);
  if ((bVar1 < 0x32) && (uVar2 = (uint)bVar1, uVar2 < *(byte *)((int)this + 0xb40) + 1)) {
    if (bVar1 == 0) {
      *(undefined4 *)((int)this + 0xb44) = 0;
    }
    else {
      *(undefined4 *)((int)this + uVar2 * 0xc + 0xb44) =
           *(undefined4 *)((int)this + uVar2 * 0xc + 0xb3c);
    }
    uVar2 = F_00435730(*(undefined4 *)((int)this + 0x20));
    *((uint *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xb41) * 0xc + 0xb48))) = uVar2;
    if (*(byte *)((int)this + 0xb41) < 0x32) {
      uVar2 = F_00435740(*(undefined4 *)((int)this + 0x20));
      *((uint *)GEN_TOP(((int)this + ((uint)*(byte *)((int)this + 0xb41) * 3 + 0x2d3) * 4))) = uVar2;
      *(char *)((int)this + 0xb41) = *(char *)((int)this + 0xb41) + '\x01';
      uVar2 = F_0077b010(this);
      return uVar2;
    }
    *((undefined4 *)GEN_TOP(((int)this + ((uint)*(byte *)((int)this + 0xb41) * 3 + 0x2d3) * 4))) = 0;
    *(char *)((int)this + 0xb41) = *(char *)((int)this + 0xb41) + '\x01';
  }
  uVar2 = F_0077b010(this);
  return uVar2;
}

/* ref: FUN_007df0b0 */
uint F_007df0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7df0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0077b1a0(this,1);
  return uVar1;
}

/* ref: FUN_007df0c0 */
uint F_007df0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7df0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0043f8b0(0x14);
  uVar1 = F_0077adb0(this);
  return uVar1;
}

/* ref: FUN_007df0e0 */
uint F_007df0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7df0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (0 < *(int *)((int)this + 0xd9c)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xd9c),0);
    *(undefined4 *)((int)this + 0xd9c) = 0;
    if (*(int *)((int)this + 0xda0) != *(int *)((int)this + 8)) {
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  *(undefined4 *)((int)this + 0xda0) = 0;
  uVar2 = F_0077b8f0(this);
  if (0 < *(int *)((int)this + 0x101c)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x101c),0);
    *(undefined4 *)((int)this + 0x101c) = 0;
  }
  *(undefined4 *)((int)this + 0xda4) = 0;
  *(undefined2 *)((int)this + 0xda8) = 0;
  *(undefined1 *)((int)this + 0xdaa) = 0;
  *(undefined4 *)((int)this + 0xdac) = 0;
  *(undefined4 *)((int)this + 0xdb4) = 0;
  *(undefined4 *)((int)this + 0xdb8) = 0;
  return uVar2;
}

/* ref: FUN_007df180 */
uint F_007df180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7df180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * this_00;
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  ushort * puVar4;
  byte * pbVar5;
  ulonglong uVar6;
  ushort * local_8;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    bVar2 = F_00438840(*(int *)((int)this + 0x1c));
    if (param_1 < bVar2) {
      uVar3 = F_00438850(*(undefined4 *)((int)this + 0x1c),param_1);
      if (uVar3 != 0) {
        this_00 = (undefined4 *)((int)this + 0xdc0);
        F_00a35f30(this_00);
        F_00a35ee0(this_00,*(undefined4 *)(uVar3 + 0x24),0);
        *this_00 = 9999;
        *(undefined2 *)((int)this + 0xdc4) = (undefined2)param_1;
        *(undefined2 *)((int)this + 0xdd0) = *(undefined2 *)(uVar3 + 0x2c);
        *(undefined2 *)((int)this + 0xdd2) = *(undefined2 *)(uVar3 + 0x2a);
        if (*(char *)(uVar3 + 0x38) == '\x01') {
          *(byte *)((int)this + 0xdd4) = *(byte *)((int)this + 0xdd4) | 1;
        }
        else {
          *(byte *)((int)this + 0xdd4) = *(byte *)((int)this + 0xdd4) & 0xfe;
        }
        F_00a35f80(this_00,*(undefined4 *)(uVar3 + 0x20));
        *(undefined1 *)((int)this + 0xdef) = *(undefined1 *)(uVar3 + 0x3b);
        uVar6 = F_0077ae80(this,param_1);
        *(ulonglong *)((int)this + 0xdd8) = uVar6;
        bVar2 = 0;
        local_8 = (ushort *)(uVar3 + 0x2e);
        pbVar5 = (byte *)((int)this + 0xdea);
        puVar4 = (ushort *)((int)this + 0xde0);
        do {
          if (bVar2 < *(byte *)(uVar3 + 0x39)) {
            uVar1 = *local_8;
            *puVar4 = uVar1 >> 4;
            *pbVar5 = (byte)uVar1 & 0xf;
          }
          else {
            *puVar4 = 0;
            *pbVar5 = 0;
          }
          local_8 = local_8 + 1;
          bVar2 = bVar2 + 1;
          puVar4 = puVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (bVar2 < 5);
        return (uint)this_00;
      }
    }
  }
  return 0;
}

/* ref: FUN_007df2a0 */
uint F_007df2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7df2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined * this_01;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_c;
  uint local_8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x24);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x21)));
  if ((uVar2 != 0) || (uVar3 = 0, this_00 != (undefined *)0x0)) {
    local_8 = 0;
    uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xb5);
    if (*(int *)(uVar3 + 0x14) == 3) {
      local_8 = F_00a1ae70();
    }
    uVar3 = *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x968)));
    if (0 < (int)uVar3) {
      iVar6 = 0x2c2;
      iVar5 = 0x978;
      local_c = uVar3;
      do {
        iVar4 = *((int *)GEN_TOP((iVar5 + *(int *)(uVar2 + 0x20)))) + local_8;
        uVar7 = 0x7cc;
        this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar3 = F_00461bb0(this_01,uVar7,iVar4);
        uVar3 = F_00431250(this_00,iVar6,uVar3,0,1,0);
        iVar5 = iVar5 + 0x18;
        iVar6 = iVar6 + 5;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
  }
  return uVar3;
}

/* ref: FUN_007df7b0 */
uint F_007df7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7df7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  F_00c48350((undefined *)((int)this + 0x3d4),0,400);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x24);
  if (uVar2 != 0) {
    if (**(int * PTR32 *)(uVar2 + 0x20) != *(int *)((int)this + 0x564)) {
      **(int * PTR32 *)(uVar2 + 0x20) = *(int *)((int)this + 0x564);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x21);
  if (uVar2 != 0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar6 = 0x7c2;
      break;
    case 1: ;
      uVar6 = 0x7c3;
      break;
    case 2: ;
      uVar6 = 0x7c4;
      break;
    case 3: ;
      uVar6 = 0x7c5;
      break;
    default: ;
      uVar6 = 0x799;
    }
    uVar7 = 0;
    uVar4 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(this_00,uVar6,uVar4,uVar7);
    if (uVar3 != **(uint * PTR32 *)(uVar2 + 0x20)) {
      **(uint * PTR32 *)(uVar2 + 0x20) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  if ((int)param_2 < 0) {
    uVar2 = F_0077af30(this,0xffffffff,&REFG(undefined, 0x10be423));
    return uVar2;
  }
  uVar6 = 0;
  uVar4 = 0;
  if (param_2 < 0x48) {
    iVar5 = param_2 + ((int)param_2 / 0x18) * 0x36;
    uVar6 = *(undefined4 *)((int)this + iVar5 * 4 + 0x88);
    uVar4 = *(undefined4 *)((int)this + iVar5 * 4 + 0x100);
  }
  uVar2 = F_0077af30(this,uVar6,uVar4);
  return uVar2;
}

/* ref: FUN_007df900 */
uint F_007df900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7df900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  ushort uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc3c);
  (*(uint *)(gen_frame + 0xc38)) = uVar2;
  if ((*(int *)((int)this + 8) != 0) && ('\0' < (char)param_1)) {
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0x186;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),3);
    ((undefined4 *)(gen_frame + 0x0))[1] = 2;
    uVar1 = F_0077b300(this,param_1);
    F_005a2710(((undefined1 *)(gen_frame + 0x658)),3);
    (*(uint *)(gen_frame + 0x65c)) = (uint)uVar1;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),0x187,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xc38));
    iVar5 = 0x186;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc38)) ^ (uint)(uint)(gen_frame + 0xc3c));
  return uVar2;
}

/* ref: FUN_007df9d0 */
uint F_007df9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x7df9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0x8)) = param_6;
  uVar4 = param_6;
  if (*(int *)((int)this + 0x20) == 0) goto LAB_007dfb63;
  *(undefined2 *)((int)this + 0xb40) = 0;
  F_00c48350((undefined *)((int)this + 0xb44),0,600);
  if (param_1 < 0) {
    F_0042cc20(((char * PTR32 *)(gen_frame + 0x64)),param_2,REFG(undefined4, 0x108cc50));
    uVar4 = F_0042b790(((char * PTR32 *)(gen_frame + 0x64)));
    if (0x28 < uVar4) {
      uVar4 = F_0042d2f0(((char * PTR32 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),0,0x28);
      F_0042ccf0(((char * PTR32 *)(gen_frame + 0x64)),uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    }
    if (*((char * PTR32 *)(gen_frame + 0x64))[0] != '\0') {
      F_0077aec0(this,1);
      uVar4 = F_0042a990(((char * PTR32 *)(gen_frame + 0x64)));
      F_00435810(*(undefined * PTR32 *)((int)this + 0x20),uVar4);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x10))))(*(int * PTR32 *)((int)this + 0x20));
    }
    F_0042c880(((char * PTR32 *)(gen_frame + 0x64)));
  }
  else {
    uVar4 = F_0077b260(this,param_1,((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0xc)));
    if (uVar4 != 0) {
      F_0077aec0(this,1);
      uVar3 = (*(uint *)(gen_frame + 0xc));
      iVar2 = param_1 >> 0x1f;
      iVar6 = param_1 / 0x18 + iVar2;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
      (*(uint *)(gen_frame + 0xc)) = uVar3 & 0xffffff00;
      if (iVar6 == iVar2) {
        uVar9 = 0;
        uVar8 = param_4;
LAB_007dfaab: ;
        uVar7 = 1;
      }
      else {
        if (iVar6 - iVar2 == 1) {
          uVar8 = param_5;
          uVar9 = (*(uint *)(gen_frame + 0xc));
          if ((-1 < (int)(*(uint *)(gen_frame + 0x8))) && ((int)(*(uint *)(gen_frame + 0x8)) < *(int *)((int)this + 0xa54))) {
            uVar1 = *(undefined1 *)((int)this + (*(uint *)(gen_frame + 0x8)) * 8 + 0xa58);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = uVar1;
            uVar9 = CONCAT31((int3)(uVar3 >> 8),uVar1);
            (*(uint *)(gen_frame + 0xc)) = uVar9;
          }
          goto LAB_007dfaab;
        }
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
      }
      F_004357e0(*(undefined * PTR32 *)((int)this + 0x20),uVar4,uVar7,uVar8,uVar9);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x10))))(*(int * PTR32 *)((int)this + 0x20));
    }
  }
  F_0077b450(this,param_1);
  uVar4 = 0;
  puVar5 = (undefined4 *)((int)this + 0x568);
  do {
    *(short *)(puVar5 + 2) = (short)uVar4;
    *puVar5 = 0;
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 3;
  } while (uVar4 < 100);
LAB_007dfb63: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar4;
}

/* ref: FUN_007dfb80 */
unsigned int F_007dfb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x20) != 0) {
    *(undefined4 *)((int)this + 0x564) = 0;
    *(undefined2 *)((int)this + 0x3d0) = 0;
    F_00c48350((undefined *)((int)this + 0x3d4),0,400);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x24);
    if (uVar3 != 0) {
      if (**(int * PTR32 *)(uVar3 + 0x20) != *(int *)((int)this + 0x564)) {
        **(int * PTR32 *)(uVar3 + 0x20) = *(int *)((int)this + 0x564);
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
    }
    uVar3 = 0;
    puVar4 = (undefined4 *)((int)this + 0x568);
    do {
      *(short *)(puVar4 + 2) = (short)uVar3;
      *puVar4 = 0;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar3 < 100);
    uVar3 = (uint)*(byte *)((int)this + 0xb40);
    if (param_1 == 1) {
      iVar1 = *((int *)GEN_TOP(((int)this + (uVar3 * 3 + 0x2d3) * 4)));
      if (iVar1 != 0) {
        F_0043fe60(*(undefined * PTR32 *)((int)this + 0x20),iVar1,100);
        *(char *)((int)this + 0xb40) = *(char *)((int)this + 0xb40) + '\x01';
        return 0;
      }
    }
    else {
      iVar1 = *(int *)((int)this + uVar3 * 0xc + 0xb44);
      if (iVar1 != *(int *)((int)this + uVar3 * 0xc + 0xb48)) {
        F_0043fe60(*(undefined * PTR32 *)((int)this + 0x20),iVar1,100);
        *(char *)((int)this + 0xb40) = *(char *)((int)this + 0xb40) + -1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007dfc60 */
unsigned int F_007dfc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dfc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    F_007df0e0(this);
    if (*(int *)((int)this + 0x1c) == 0) {
      uVar2 = 9;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      uVar1 = F_00435440(uVar1,uVar2);
      *(uint *)((int)this + 0x1c) = uVar1;
    }
    *(undefined4 *)((int)this + 0xda4) = param_1;
    if (*(int *)((int)this + 0x1c) != 0) {
      F_00443df0(*(int *)((int)this + 0x1c));
      F_00438870(*(undefined4 *)((int)this + 0x1c),param_1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x10))))(*(int * PTR32 *)((int)this + 0x1c));
    }
    *(undefined2 *)((int)this + 0xda8) = 1;
    *(undefined1 *)((int)this + 0xdaa) = 0;
    *(int *)((int)this + 0xda0) = param_2;
    *(undefined2 *)((int)this + 0x1018) = 0;
  }
  return 0;
}

/* ref: FUN_007dfce0 */
uint F_007dfce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4bbc));
  in_ecx[3] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dfd10 */
uint F_007dfd10(unsigned int gen_a0)
{
  GEN_ENTER(0x7dfd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return uVar1;
}

/* ref: FUN_007dfd70 */
uint F_007dfd70(unsigned int gen_a0)
{
  GEN_ENTER(0x7dfd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4c0c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4c00));
  F_0042c880((undefined *)((int)this + 0x110));
  F_0042c880((undefined *)((int)this + 0x74));
  uVar3 = F_0042c880((undefined *)((int)this + 0x20));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dfde0 */
uint F_007dfde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((char)param_1 != '\0') {
    F_00a3a100();
    iVar3 = 0;
    do {
      switch((unsigned int)(uintptr_t)(iVar3)) {
      case 0: ;
        puVar2 = (undefined4 *)((int)this + 200);
        break;
      case 1: ;
        puVar2 = (undefined4 *)((int)this + 0xd4);
        break;
      case 2: ;
        puVar2 = (undefined4 *)((int)this + 0xe0);
        break;
      case 3: ;
        puVar2 = (undefined4 *)((int)this + 0xec);
        break;
      case 4: ;
        puVar2 = (undefined4 *)((int)this + 0xf8);
        break;
      default: ;
        puVar2 = (undefined4 *)0x0;
      }
      F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d2,iVar3,1);
      iVar3 = iVar3 + 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    } while (iVar3 < 5);
  }
  pvVar1 = F_00c48350((undefined *)((int)this + 200),0,0x48);
  return (uint)pvVar1;
}

/* ref: Client::UI2::Agent::AgentLetterEdit::vf3 */
uint F_007dfe90(unsigned int gen_a0)
{
  GEN_ENTER(0x7dfe90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x16c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x16c),0);
    *(undefined4 *)(this + 0x16c) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  uVar2 = F_0042aca0(this + 0x20);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return uVar2;
}

/* ref: FUN_007dfef0 */
uint F_007dfef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * this_01;
  undefined4 * puVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  uint * puVar8;
  undefined4 * in_ecx;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(uint *)(gen_frame + 0xd8)) = uVar2;
  if (*(int *)((int)this + 8) != 0) {
    pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d2);
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x8)))) {
      case 0: ;
        puVar8 = (uint *)((int)this + 200);
        break;
      case 1: ;
        puVar8 = (uint *)((int)this + 0xd4);
        break;
      case 2: ;
        puVar8 = (uint *)((int)this + 0xe0);
        break;
      case 3: ;
        puVar8 = (uint *)((int)this + 0xec);
        break;
      case 4: ;
        puVar8 = (uint *)((int)this + 0xf8);
        break;
      default: ;
        puVar8 = (uint *)0x0;
      }
      this_00 = (undefined *)F_00a363c0(pvVar3,(*(int *)(gen_frame + 0x8)));
      if (*(char *)((int)this_00 + 6) == '\0') {
        uVar2 = *(uint *)((int)this_00 + 8);
        if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        this_01 = (undefined *)F_00a3a860(this_00);
        uVar2 = F_0046e5e0(this_01);
      }
      *puVar8 = uVar2;
      uVar2 = F_00a3a8a0(this_00);
      puVar8[1] = uVar2;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
    } while ((*(int *)(gen_frame + 0x8)) < 5);
    puVar4 = ((undefined4 *)(gen_frame + 0x10));
    iVar7 = 0x18;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    uVar10 = 0;
    uVar2 = F_00404270();
    puVar4 = (undefined4 *)F_00406c00(0x1a8,0,uVar2,uVar10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 5;
      puVar4 = puVar4 + 1;
      iVar7 = 4;
      in_ecx = puVar4;
      do {
        F_0042b630(in_ecx);
        in_ecx = in_ecx + 0x15;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    *(undefined4 * PTR32 *)((int)this + 0x164) = puVar4;
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 200));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 200),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x20)),4);
      (*(uint *)(gen_frame + 0x24)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 200),0,uVar2);
      F_0042e430(*(undefined * PTR32 *)((int)this + 0x164),uVar5);
      uVar5 = F_0042a990(*(undefined4 *)((int)this + 0x164));
      F_005a2710(((undefined1 *)(gen_frame + 0xa0)),6);
      (*(uint *)(gen_frame + 0xa4)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xcc);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x48)),3);
      (*(undefined4 *)(gen_frame + 0x4c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x78)),4);
      (*(undefined4 *)(gen_frame + 0x7c)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xd4));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xd4),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
      (*(uint *)(gen_frame + 0x2c)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xd4),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0x54))),uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0x54);
      F_005a2710(((undefined1 *)(gen_frame + 0xa8)),6);
      (*(uint *)(gen_frame + 0xac)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xd8);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x50)),3);
      (*(undefined4 *)(gen_frame + 0x54)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x80)),4);
      (*(undefined4 *)(gen_frame + 0x84)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xe0));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xe0),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xe0),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0xa8))),uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0xa8);
      F_005a2710(((undefined1 *)(gen_frame + 0xb0)),6);
      (*(uint *)(gen_frame + 0xb4)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xe4);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x58)),3);
      (*(undefined4 *)(gen_frame + 0x5c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x88)),4);
      (*(undefined4 *)(gen_frame + 0x8c)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xec));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xec),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x38)),4);
      (*(uint *)(gen_frame + 0x3c)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xec),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0xfc))),uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0xfc);
      F_005a2710(((undefined1 *)(gen_frame + 0xb8)),6);
      (*(uint *)(gen_frame + 0xbc)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xf0);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x60)),3);
      (*(undefined4 *)(gen_frame + 0x64)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x90)),4);
      (*(undefined4 *)(gen_frame + 0x94)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xf8));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xf8),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xf8),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0x150))),uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0x150);
      F_005a2710(((undefined1 *)(gen_frame + 0xc0)),6);
      (*(uint *)(gen_frame + 0xc4)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xfc);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x68)),3);
      (*(undefined4 *)(gen_frame + 0x6c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x98)),4);
      (*(undefined4 *)(gen_frame + 0x9c)) = 0x7d2;
    }
    uVar10 = *(undefined4 *)((int)this + 0x108);
    uVar9 = 0x14;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_00461bb0(pvVar3,uVar9,uVar10);
    F_0042e430((undefined *)((int)this + 0x110),uVar2);
    uVar2 = F_0042a990((int)this + 0x110);
    F_005a2710(((undefined1 *)(gen_frame + 0x70)),6);
    (*(uint *)(gen_frame + 0x74)) = uVar2;
    F_005a2710(((undefined1 *)(gen_frame + 0xc8)),4);
    uVar10 = *(undefined4 *)((int)this + 0x16c);
    (*(uint *)(gen_frame + 0xcc)) = (uint)((char)param_1 != '\0');
    F_005a2710(((undefined1 *)(gen_frame + 0xd0)),4);
    (*(undefined4 *)(gen_frame + 0xd4)) = uVar10;
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,*(undefined4 *)((int)this + 8),0x19,((undefined4 *)(gen_frame + 0x10)));
    iVar7 = *(int *)((int)this + 0x164);
    if (iVar7 != 0) {
      iVar1 = *(int *)(iVar7 + -4);
      pvVar3 = (undefined *)(iVar1 * 0x54 + iVar7);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        pvVar3 = (undefined *)((int)pvVar3 + -0x54);
        F_0042c880(pvVar3);
      }
      F_00406b30(iVar7 + -4);
    }
    puVar8 = &(*(uint *)(gen_frame + 0xd8));
    iVar7 = 0x18;
    do {
      puVar8 = puVar8 + -2;
      uVar2 = F_005a2670(puVar8);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar2;
}

/* ref: FUN_007e04c0 */
uint F_007e04c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e04c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined * pvVar2;
  undefined4 * this_00;
  uint uVar3;
  undefined * this_01;
  uint * puVar4;
  
  if (*(int *)((int)this + 0x16c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x16c),0);
    *(undefined4 *)((int)this + 0x16c) = 0;
  }
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_3);
  this_00 = (undefined4 *)F_00a37da0(pvVar2,param_2);
  uVar3 = F_00a37c50(this_00);
  if (uVar3 == 0) {
    F_0077bd50(this,param_2,param_3,0);
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      puVar4 = (uint *)((int)this + 200);
      break;
    case 1: ;
      puVar4 = (uint *)((int)this + 0xd4);
      break;
    case 2: ;
      puVar4 = (uint *)((int)this + 0xe0);
      break;
    case 3: ;
      puVar4 = (uint *)((int)this + 0xec);
      break;
    case 4: ;
      puVar4 = (uint *)((int)this + 0xf8);
      break;
    default: ;
      puVar4 = (uint *)0x0;
    }
    F_00a47f70(&REFG(undefined, 0x14a4230),*this_00,(uint)*(ushort *)(this_00 + 1),0x7d2,param_1,1);
    *(undefined2 *)(puVar4 + 2) = (undefined2)param_3;
    *(undefined2 *)((int)puVar4 + 10) = (undefined2)param_2;
    pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d2);
    pvVar2 = (undefined *)F_00a363c0(pvVar2,param_1);
    *(undefined * PTR32 *)((int)this + 0x168) = pvVar2;
    if (*(char *)((int)pvVar2 + 6) != '\0') {
      this_01 = (undefined *)F_00a3a860(pvVar2);
      uVar3 = F_0046e5e0(this_01);
      *puVar4 = uVar3;
      uVar3 = F_00a3a8a0(pvVar2);
      puVar4[1] = uVar3;
      return uVar3;
    }
    uVar3 = *(uint *)((int)pvVar2 + 8);
    if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
      uVar3 = uVar3 + 1000000;
    }
    *puVar4 = uVar3;
    uVar3 = F_00a3a8a0(pvVar2);
    puVar4[1] = uVar3;
  }
  return uVar3;
}

/* ref: FUN_007e0610 */
uint F_007e0610(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = *(uint *)(uVar1 + 0x28);
  if ((((*(int *)((int)this + 200) != 0) && (*(int *)((int)this + 0xd4) != 0)) &&
      (*(int *)((int)this + 0xe0) != 0)) &&
     ((*(int *)((int)this + 0xec) != 0 && (*(int *)((int)this + 0xf8) != 0)))) {
    *(undefined4 *)(uVar1 + 0x1d0) = 0;
    *(undefined4 *)(uVar1 + 0x1d4) = 0;
    *(undefined1 *)(uVar1 + 0x1dc) = 0;
    *(undefined4 *)(uVar1 + 0x1d8) = 0;
    return uVar1;
  }
  *(undefined4 *)(uVar1 + 0x1d0) = 0x5e;
  *(int *)(uVar1 + 0x1d4) = (int)this + 0xc;
  *(undefined1 *)(uVar1 + 0x1dc) = 1;
  *(undefined4 *)(uVar1 + 0x1d8) = 0;
  return uVar1;
}

/* ref: FUN_007e0690 */
uint F_007e0690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4c54));
  in_ecx[3] = 0;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined1 *)(in_ecx + 7) = 1;
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e06d0 */
byte F_007e06d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e06d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined * this_00;
  int * piVar5;
  int iVar6;
  undefined4 * in_ecx;
  undefined4 uVar7;
  
  if (*(int *)((int)this + 0x18) == 0) {
    uVar7 = 0;
    uVar3 = F_00404270();
    puVar4 = (undefined4 *)F_00406c00(0x1a8,0,uVar3,uVar7);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 5;
      puVar4 = puVar4 + 1;
      iVar6 = 4;
      in_ecx = puVar4;
      do {
        F_0042b630(in_ecx);
        in_ecx = in_ecx + 0x15;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    *(undefined4 * PTR32 *)((int)this + 0x18) = puVar4;
  }
  uVar7 = 6;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00435440(uVar3,uVar7);
  *(undefined * PTR32 *)((int)this + 0xc) = this_00;
  if ((this_00 != (undefined *)0x0) && (bVar2 = F_00444300(this_00,param_1), bVar2 != 0)) {
    if ((*(int *)((int)this + 0x10) != param_1) && (*(int *)((int)this + 0x20) != 0)) {
      piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5,*(undefined4 *)((int)this + 0x20),0);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 8);
    *(int *)((int)this + 0x10) = param_1;
    *(undefined1 *)((int)this + 0x1c) = 0;
    (*pcVar1)(this);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentLetterView::vf3 */
uint F_007e07a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e07a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  iVar1 = *(int *)(this + 0x18);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x54);
      F_0042c880(this_00);
    }
    uVar5 = F_00406b30(iVar1 + -4);
    uVar4 = (uint)uVar5;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 0x20),0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar4;
}

/* ref: FUN_007e0840 */
uint F_007e0840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4ca4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4c98));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  F_0042b630(in_ecx + 6);
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x1c] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_007e0890 */
uint F_007e0890(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4ca4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4c98));
  if (*(int *)((int)this + 0x84) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x84),0);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  uVar3 = F_0042c880((undefined *)((int)this + 0x18));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentLinkshell::vf3 */
unsigned int F_007e0920(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0x84) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x84),0);
    *(undefined4 *)(this + 0x84) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentLinkshell::vf11 */
uint F_007e0980(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_004351d0();
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar4 = 2;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
    uVar2 = F_00435440(uVar2,uVar4);
    if (uVar2 != 0) {
      bVar1 = F_004393f0(uVar2);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 == 0) goto LAB_007e09d1;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    uVar2 = 0;
    if (*(int *)(uVar3 + 0x18) != 0) {
      return ~(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x18) + 0xe4))) >> 0x1c) & 1;
    }
  }
LAB_007e09d1: ;
  return uVar2 & 0xffffff00;
}

/* ref: FUN_007e09e0 */
uint F_007e09e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e09e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d4cec));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 5);
  in_ecx[0x1a] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e0a20 */
uint F_007e0a20(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d4cec));
  uVar3 = F_0042c880((undefined *)((int)this + 0x14));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentPartyInvite::vf3 */
unsigned int F_007e0a70(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  iVar1 = *(int *)(this + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x68) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_007e0ad0 */
uint F_007e0ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4d44));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4d34));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  F_0042b630(in_ecx + 6);
  return (uint)in_ecx;
}

/* ref: FUN_007e0b10 */
uint F_007e0b10(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d44));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d34));
  uVar3 = F_0042c880((undefined *)((int)this + 0x18));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e0b70 */
uint F_007e0b70(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e0bd0 */
uint F_007e0bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d94));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d88));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2)));
  iVar1 = *piVar2;
  F_0042b630((int)this + 0x18);
  F_0042aca0((int)this + 0x18);
  bVar3 = REFG(undefined1, 0x132814a) & 0x1f;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(int *)((int)this + 0x74) = (1 << bVar3) + -1;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x7c) = 0x32;
  *(undefined4 *)((int)this + 0x80) = 1;
  *(undefined2 *)((int)this + 0x84) = 0;
  if (-1 < iVar1) {
    bVar3 = (byte)iVar1;
    *(byte *)((int)this + 0x86) = bVar3;
    *(char *)((int)this + 0x84) = '\x01' << (bVar3 & 0x1f);
  }
  return (uint)this;
}

/* ref: FUN_007e0c80 */
uint F_007e0c80(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d94));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d88));
  uVar3 = F_0042c880((undefined *)((int)this + 0x18));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

