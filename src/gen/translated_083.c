#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_008f5950 */
uint F_008f5950(unsigned int gen_a0)
{
  GEN_ENTER(0x8f5950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  uint * puVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined * pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)((int)this + 0x10) != (int *)0x0) &&
     (puVar7 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10))), puVar7 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar7;
  }
  uVar2 = (*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)) - 1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar1 = uVar2 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar5 + 8);
  }
  uVar2 = F_00ab3b40(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar1 * 4))) + (uVar2 & 3) * 4))))
  ;
  pvVar9 = (undefined *)((int)this + 0x28);
  *(uint *)((int)this + 0xc) = uVar2;
  F_00492c50(pvVar9);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x20);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x4));
  (*(char *)(gen_frame + 0xc)) = '\0';
  F_00493b50(pvVar9,&(*(undefined4 *)(gen_frame + 0x4)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0xc)) != '\0')) && ((*(char *)(gen_frame + 0xc)) == '\x01')) {
    pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
    if (*(int *)((int)pvVar3 + 0x54) < 1) {
      F_0042c880(pvVar3);
      F_00406ad0(pvVar3);
    }
  }
  puVar6 = *(uint * PTR32 *)((int)this + 0xc);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  uVar2 = *puVar6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(int *)(gen_frame + 0x14)) = (uVar2 & 0xffffff) + (int)puVar6;
  uVar10 = 1;
  uVar8 = 0x34c;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar3,uVar8,uVar10,pvVar9);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  piVar4 = *(int * PTR32 *)((int)this + 4);
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  if (*(int *)((int)this + 8) == 0) {
    uVar13 = 8;
    uVar12 = 0;
    uVar11 = 0;
    puVar7 = &(*(undefined4 *)(gen_frame + 0x10));
    uVar10 = 3;
    uVar8 = 0x4c;
    pvVar9 = this;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    uVar2 = F_008668b0(pvVar3,uVar8,uVar10,puVar7,pvVar9,uVar11,uVar12,uVar13);
    *(uint *)((int)this + 8) = uVar2;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),3,&(*(undefined4 *)(gen_frame + 0x10)));
  }
  puVar6 = &(*(uint *)(gen_frame + 0x28));
  iVar5 = 2;
  do {
    puVar6 = puVar6 + -2;
    uVar2 = F_005a2670(puVar6);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_008f68a0 */
uint F_008f68a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8f68a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined * this_00;
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint * puVar6;
  undefined1 * this_01;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined * pvVar10;
  undefined * puVar11;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  if (param_1 != 0) {
    this_00 = (undefined *)((int)this + 0xda0);
    F_00492c50(this_00);
    bVar1 = 9999 < param_2;
    if (bVar1) {
      param_2 = param_2 + -10000;
    }
    uVar3 = F_00ab2660(param_2);
    F_0042cc20(((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10bdd6d),REFG(undefined4, 0x108cc50));
    if (param_3 == 0x30) {
      uVar9 = 2;
      uVar8 = 0x3f9;
      pvVar10 = this_00;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar5 = F_0043bd00(pvVar4,uVar8,uVar9,pvVar10);
      F_0042e430((undefined *)((int)this + 0xd4c),uVar5);
      puVar11 = &REFG(undefined, 0x10bfdb8);
      this_01 = ((undefined1 *)(gen_frame + 0x60));
    }
    else {
      this_01 = (undefined1 *)((int)this + 0xd4c);
      puVar11 = &REFG(undefined, 0x10bdd6e);
    }
    F_0042e430(this_01,puVar11);
    if (uVar3 != 0) {
      iVar7 = 0;
      do {
        if (*(byte *)(iVar7 + uVar3) != 0) {
          puVar6 = (uint *)F_00ab2290((uint)*(byte *)(iVar7 + uVar3));
          uVar5 = F_0042cdb0(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xc)),(*puVar6 & 0xffffff) + (int)puVar6);
          F_0042e360((undefined *)((int)this + 0xd4c),uVar5);
          F_0042c880(((undefined1 *)(gen_frame + 0xc)));
          F_00492c50(this_00);
          (*(uint *)(gen_frame + 0xcc)) = 0;
          (*(uint *)(gen_frame + 0xcc)) = (uint)*(byte *)(iVar7 + 0xf + uVar3);
          (*(uint * PTR32 *)(gen_frame + 0xd0)) = &(*(uint *)(gen_frame + 0xcc));
          (*(char *)(gen_frame + 0xd4)) = '\0';
          F_00493b50(this_00,&(*(uint *)(gen_frame + 0xcc)));
          if ((*(uint * PTR32 *)(gen_frame + 0xd0)) != (uint *)0x0) {
            if (((*(char *)(gen_frame + 0xd4)) != '\0') && ((*(char *)(gen_frame + 0xd4)) == '\x01')) {
              pvVar10 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xd0));
              *(int *)((int)pvVar10 + 0x54) = *(int *)((int)pvVar10 + 0x54) + -1;
              if (*(int *)((int)pvVar10 + 0x54) < 1) {
                F_0042c880(pvVar10);
                F_00406ad0(pvVar10);
              }
            }
            (*(uint * PTR32 *)(gen_frame + 0xd0)) = (uint *)0x0;
            (*(char *)(gen_frame + 0xd4)) = -1;
          }
          if (bVar1) {
            cVar2 = *(char *)(iVar7 + 9 + uVar3);
          }
          else {
            cVar2 = *(char *)(iVar7 + 3 + uVar3);
          }
          (*(int *)(gen_frame + 0xc0)) = 0;
          (*(int *)(gen_frame + 0xc0)) = (int)cVar2;
          (*(int * PTR32 *)(gen_frame + 0xc4)) = &(*(int *)(gen_frame + 0xc0));
          (*(char *)(gen_frame + 0xc8)) = '\0';
          F_00493b50(this_00,&(*(int *)(gen_frame + 0xc0)));
          if ((*(int * PTR32 *)(gen_frame + 0xc4)) != (int *)0x0) {
            if (((*(char *)(gen_frame + 0xc8)) != '\0') && ((*(char *)(gen_frame + 0xc8)) == '\x01')) {
              pvVar10 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xc4));
              *(int *)((int)pvVar10 + 0x54) = *(int *)((int)pvVar10 + 0x54) + -1;
              if (*(int *)((int)pvVar10 + 0x54) < 1) {
                F_0042c880(pvVar10);
                F_00406ad0(pvVar10);
              }
            }
            (*(int * PTR32 *)(gen_frame + 0xc4)) = (int *)0x0;
            (*(char *)(gen_frame + 0xc8)) = -1;
          }
          if (bVar1) {
            cVar2 = *(char *)(iVar7 + 0xc + uVar3);
          }
          else {
            cVar2 = *(char *)(iVar7 + 6 + uVar3);
          }
          (*(int * PTR32 *)(gen_frame + 0xb8)) = &(*(int *)(gen_frame + 0xb4));
          (*(int *)(gen_frame + 0xb4)) = 0;
          (*(int *)(gen_frame + 0xb4)) = (int)cVar2;
          (*(char *)(gen_frame + 0xbc)) = '\0';
          F_00493b50(this_00,&(*(int *)(gen_frame + 0xb4)));
          if ((*(int * PTR32 *)(gen_frame + 0xb8)) != (int *)0x0) {
            if (((*(char *)(gen_frame + 0xbc)) != '\0') && ((*(char *)(gen_frame + 0xbc)) == '\x01')) {
              pvVar10 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xb8));
              *(int *)((int)pvVar10 + 0x54) = *(int *)((int)pvVar10 + 0x54) + -1;
              if (*(int *)((int)pvVar10 + 0x54) < 1) {
                F_0042c880(pvVar10);
                F_00406ad0(pvVar10);
              }
            }
            (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)0x0;
            (*(char *)(gen_frame + 0xbc)) = -1;
          }
          uVar9 = 2;
          uVar8 = 0x3f8;
          pvVar10 = this_00;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))))
          ;
          uVar5 = F_0043bd00(pvVar4,uVar8,uVar9,pvVar10);
          F_0042e370((undefined *)((int)this + 0xd4c),uVar5);
          F_0042e430(((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10bfdbc));
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  }
  uVar3 = F_0042a990((int)this + 0xd4c);
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar3;
}

/* ref: FUN_008f6b90 */
uint F_008f6b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8f6b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x10bdf0d),REFG(undefined4, 0x108cc50));
  if (param_2 != (undefined *)0x0) {
    bVar1 = F_00a35fb0(param_2,((undefined1 *)(gen_frame + 0xb4)));
    if (bVar1 != 0) {
      piVar4 = *(int * PTR32 *)((int)this + 4);
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
      uVar6 = 0x207;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4)));
      uVar2 = F_00461190(this_00,uVar6,uVar2);
      F_0042e430(((undefined1 *)(gen_frame + 0xb4)),uVar2);
    }
  }
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
  uVar3 = F_00ab64e0(param_4,0,param_1);
  F_007d7480(this,0,0,0,0,(uint)*(ushort *)(param_1 + 0x1c),uVar3,uVar2);
  F_007d7520(this,param_2,*(undefined4 *)((int)this + 0x40),param_4);
  F_0042b630(((char * PTR32 *)(gen_frame + 0x60)));
  F_00492c50((undefined *)((int)this + 0xc));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)),(*(uint *)(param_1 + 8) & 0xffffff) + param_1 + 8,REFG(undefined4, 0x108cc50));
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,((undefined1 *)(gen_frame + 0xc)),(undefined *)((int)this + 0xc),((char * PTR32 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  if (*((char * PTR32 *)(gen_frame + 0x60))[0] != '\0') {
    uVar2 = F_0042a990(((char * PTR32 *)(gen_frame + 0x60)));
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xc,uVar2,0,1,0);
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 2;
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x60)));
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x80;
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar5;
}

/* ref: FUN_008f6d10 */
uint F_008f6d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f6d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_008f2750(this,param_1 + 8,(uint)*(byte *)(param_1 + 0xa0));
  }
  return uVar1;
}

/* ref: FUN_008f6d30 */
byte F_008f6d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f6d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint * puVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  uVar1 = param_1;
  puVar2 = (uint *)F_00ab1ed0(param_1);
  if (puVar2 != (uint *)0x0) {
    uVar3 = F_00ab21a0((int)*(char *)((int)puVar2 + 0x2b));
    if (uVar3 != 0) {
      puVar4 = (uint *)F_00ab1f60((uint)(byte)puVar2[7]);
      if (puVar4 != (uint *)0x0) {
        uVar5 = F_00ab21d0((uint)*(byte *)((int)puVar2 + 0x29));
        if (uVar5 != 0) {
          F_007d79e0(this,(uint)(ushort)puVar2[2],(*puVar2 & 0xffffff) + (int)puVar2,
                       (*puVar4 & 0xffffff) + (int)puVar4);
          F_008286a0(this,param_1,puVar2);
          param_1 = 0xe;
          if (*(int *)(uVar3 + 0x10) == 0x20) {
            uVar3 = F_00ac1640(1,uVar1,1);
            F_007d77f0(this,uVar3);
            param_1 = 0x16;
          }
          else if (*(int *)(uVar3 + 0x10) == 0x21) {
            param_1 = 0xf;
          }
          else {
            uVar3 = F_00ac1a20(1,uVar1);
            fVar7 = F_00ac1360(uVar3);
            F_007d7a30(this,fVar7);
            uVar3 = F_00ac1a20(1,uVar1);
            uVar3 = F_00ac1fb0(uVar3);
            F_007d7ac0(this,uVar3);
            uVar3 = F_00ac1640(1,uVar1,1);
            F_007d77f0(this,uVar3);
            uVar3 = F_00ac44e0(1,uVar1,1,0);
            F_007d78e0(this,uVar3);
          }
          if (*(char *)((int)puVar2 + 0x2b) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(char *)((int)puVar2 + 0x2b) + 0xf294;
          }
          F_007d7b60(this,iVar6,(uint)*(byte *)((int)puVar2 + 0x1f));
          F_008f2840(this,puVar2 + 1);
          F_007d7c00(this,param_1);
          F_007d7bc0(this,(uint)*(byte *)((int)puVar2 + 0x29));
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_008f6eb0 */
byte F_008f6eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f6eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  
  puVar4 = (uint *)F_00ab1f30(param_1);
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
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,&REFG(undefined, 0x10bdf3f),0,1,0);
  F_008f2840(this,puVar4 + 1);
  *(undefined4 *)((int)this + 0x1c) = 5;
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)(iVar2 + 0x20);
  if (*(int *)(iVar3 + 0x18) != 0x10) {
    *(undefined4 *)(iVar3 + 0x18) = 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = 1;
  }
  return 1;
}

/* ref: FUN_008f6f50 */
byte F_008f6f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f6f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  uint * puVar3;
  int iVar4;
  uint uVar5;
  undefined * this_00;
  undefined4 uVar6;
  
  puVar3 = (uint *)F_00ab1f90(param_1);
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  uVar5 = *puVar3;
  iVar4 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar4 + 0x20);
  if (*(uint *)(iVar2 + 4) != (uint)(ushort)puVar3[2]) {
    *(uint *)(iVar2 + 4) = (uint)(ushort)puVar3[2];
    *(undefined1 *)(iVar4 + 0x1d) = 1;
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0,(uVar5 & 0xffffff) + (int)puVar3,0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,&REFG(undefined, 0x10bdf59),0,1,0);
  F_008f2840(this,puVar3 + 1);
  bVar1 = *(byte *)((int)puVar3 + 0xe);
  if (bVar1 != 0) {
    if (bVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = bVar1 + 0xf294;
    }
    F_007d7b60(this,iVar4,(uint)*(byte *)((int)puVar3 + 0xf));
    uVar5 = (uint)(byte)puVar3[4];
    uVar6 = 0x2ce;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = F_00461bb0(this_00,uVar6,uVar5);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xe,uVar5,0,1,0);
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x80;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar4 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar4 + 0x20);
  if (*(int *)(iVar2 + 0x18) != 0x15) {
    *(undefined4 *)(iVar2 + 0x18) = 0x15;
    *(undefined1 *)(iVar4 + 0x1d) = 1;
  }
  return 1;
}

/* ref: FUN_008f7040 */
byte F_008f7040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f7040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  uint * puVar6;
  
  puVar5 = (uint *)F_00ab1ed0(param_1);
  if (puVar5 != (uint *)0x0) {
    puVar6 = (uint *)F_00ab1f60((uint)(byte)puVar5[7]);
    if (puVar6 != (uint *)0x0) {
      iVar1 = *(int *)((int)this + 0xc);
      uVar2 = *puVar6;
      uVar3 = *puVar5;
      iVar4 = *(int *)(iVar1 + 0x20);
      if (*(uint *)(iVar4 + 4) != (uint)(ushort)puVar5[2]) {
        *(uint *)(iVar4 + 4) = (uint)(ushort)puVar5[2];
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0,(uVar3 & 0xffffff) + (int)puVar5,0,1,0);
      F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,(uVar2 & 0xffffff) + (int)puVar6,0,1,0);
      F_008f2840(this,puVar5 + 1);
      *(undefined4 *)((int)this + 0x1c) = 1;
      iVar1 = *(int *)((int)this + 0xc);
      iVar4 = *(int *)(iVar1 + 0x20);
      if (*(int *)(iVar4 + 0x18) != 0xe) {
        *(undefined4 *)(iVar4 + 0x18) = 0xe;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_008f7100 */
byte F_008f7100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f7100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  
  puVar4 = (uint *)F_00ab2c30(param_1);
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
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,&REFG(undefined, 0x10bdf5b),0,1,0);
  F_008f2840(this,puVar4 + 1);
  *(undefined4 *)((int)this + 0x1c) = 6;
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)(iVar2 + 0x20);
  if (*(int *)(iVar3 + 0x18) != 0x11) {
    *(undefined4 *)(iVar3 + 0x18) = 0x11;
    *(undefined1 *)(iVar2 + 0x1d) = 1;
  }
  return 1;
}

/* ref: FUN_008f71a0 */
byte F_008f71a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f71a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  
  puVar4 = (uint *)F_00ab2870(param_1);
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *puVar4;
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)(iVar2 + 0x20);
  if (*(uint *)(iVar3 + 4) != (uint)*(ushort *)((int)puVar4 + 0x16)) {
    *(uint *)(iVar3 + 4) = (uint)*(ushort *)((int)puVar4 + 0x16);
    *(undefined1 *)(iVar2 + 0x1d) = 1;
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0,(uVar1 & 0xffffff) + (int)puVar4,0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,&REFG(undefined, 0x10bdfa7),0,1,0);
  F_008f2840(this,puVar4 + 2);
  *(undefined4 *)((int)this + 0x1c) = 8;
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)(iVar2 + 0x20);
  if (*(int *)(iVar3 + 0x18) != 0x13) {
    *(undefined4 *)(iVar3 + 0x18) = 0x13;
    *(undefined1 *)(iVar2 + 0x1d) = 1;
  }
  return 1;
}

/* ref: FUN_008f7240 */
byte F_008f7240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f7240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = F_00ab2d50(param_1);
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = F_00463610(2,param_1,0xb);
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 4) != (uint)*(ushort *)(uVar3 + 8)) {
    *(uint *)(iVar2 + 4) = (uint)*(ushort *)(uVar3 + 8);
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0,uVar4,0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,&REFG(undefined, 0x10bdfc1),0,1,0);
  F_008f2840(this,uVar3 + 4);
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar2 + 0x18) != 0x14) {
    *(undefined4 *)(iVar2 + 0x18) = 0x14;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return 1;
}

/* ref: FUN_008f72e0 */
byte F_008f72e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f72e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = F_00ab4220(param_1);
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = F_00463610(2,param_1,0xc);
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 4) != (uint)*(ushort *)(uVar3 + 0xc)) {
    *(uint *)(iVar2 + 4) = (uint)*(ushort *)(uVar3 + 0xc);
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0,uVar4,0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,&REFG(undefined, 0x10bdfc2),0,1,0);
  F_008f2840(this,uVar3 + 4);
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar2 + 0x18) != 0x18) {
    *(undefined4 *)(iVar2 + 0x18) = 0x18;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return 1;
}

/* ref: FUN_008f7380 */
byte F_008f7380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f7380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = F_00ab2840(param_1);
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = F_00463610(2,param_1,0xd);
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 4) != (uint)*(ushort *)(uVar3 + 0x9a)) {
    *(uint *)(iVar2 + 4) = (uint)*(ushort *)(uVar3 + 0x9a);
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0,uVar4,0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,&REFG(undefined, 0x10bdfc3),0,1,0);
  F_008f2840(this,uVar3 + 4);
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar2 + 0x18) != 0x19) {
    *(undefined4 *)(iVar2 + 0x18) = 0x19;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return 1;
}

/* ref: FUN_008f7820 */
uint F_008f7820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8f7820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  uint * this_00;
  int iVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined1 *)((int)this + 0x2c) = (undefined1)param_1;
  pvVar2 = (undefined *)F_00ae0850(&REFG(undefined, 0x1336e40),param_2);
  uVar3 = 0;
  if (pvVar2 != (undefined *)0x0) {
    pvVar5 = (undefined *)((int)this + 0xc);
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    F_00492c50(pvVar5);
    uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),(int)pvVar2 + 0x10,REFG(undefined4, 0x108cc50));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
    F_00490f90(&(*(uint *)(gen_frame + 0x5c)),uVar3);
    F_00493b50(pvVar5,&(*(uint *)(gen_frame + 0x5c)));
    if ((*(uint * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
      if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
        pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x60));
        *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
        if (*(int *)((int)pvVar1 + 0x54) < 1) {
          F_0042c880(pvVar1);
          F_00406ad0(pvVar1);
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
      (*(char *)(gen_frame + 0x64)) = -1;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = param_1;
    (*(char *)(gen_frame + 0x64)) = '\0';
    F_00493b50(pvVar5,&(*(uint *)(gen_frame + 0x5c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x60)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    uVar3 = F_00ae09f0(pvVar2);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      piVar4 = (int *)F_00ae09f0(pvVar2);
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4);
      uVar3 = uVar3 & 0xff;
    }
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = uVar3;
    (*(char *)(gen_frame + 0x64)) = '\0';
    F_00493b50(pvVar5,&(*(uint *)(gen_frame + 0x5c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x60)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    uVar9 = 1;
    uVar8 = 0xa6;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(pvVar2,uVar8,uVar9,pvVar5);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x68)),6);
    uVar11 = 0;
    (*(uint *)(gen_frame + 0x6c)) = uVar3;
    uVar9 = 0;
    uVar8 = 0xa8;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(pvVar2,uVar8,uVar9,uVar11);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x70)),6);
    uVar11 = 0;
    (*(uint *)(gen_frame + 0x74)) = uVar3;
    uVar9 = 0;
    uVar8 = 0xa9;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(pvVar2,uVar8,uVar9,uVar11);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x78)),6);
    (*(uint *)(gen_frame + 0x7c)) = uVar3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x80)),3);
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    if (*(int *)((int)this + 8) != 0) {
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,*(undefined4 *)((int)this + 8),0);
      *(undefined4 *)((int)this + 8) = 0;
    }
    uVar12 = 4;
    uVar10 = 0;
    uVar11 = 3;
    puVar7 = &(*(undefined4 *)(gen_frame + 0x68));
    *(undefined4 *)((int)this + 0x24) = param_3;
    *(undefined1 *)((int)this + 0x2e) = 3;
    uVar9 = 4;
    uVar8 = 9;
    pvVar2 = this;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_008668b0(pvVar5,uVar8,uVar9,puVar7,pvVar2,uVar11,uVar10,uVar12);
    *(uint *)((int)this + 8) = uVar3;
    this_00 = &(*(uint *)(gen_frame + 0x88));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      uVar3 = F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: FUN_008f7ac0 */
uint F_008f7ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8f7ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  undefined * pvVar1;
  byte bVar2;
  undefined4 uVar3;
  uint * puVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined * pvVar10;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  (*(uint *)(gen_frame + 0x0)) = param_1;
  iVar9 = 1;
  if (7 < (int)param_1) {
    (*(uint *)(gen_frame + 0x0)) = 8;
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  iVar8 = iVar9;
  if (0 < (int)(*(uint *)(gen_frame + 0x0))) {
    do {
      pvVar10 = (undefined *)((int)this + iVar8 * 8 + 0xf7c);
      iVar9 = iVar8 + 1;
      if (((*(int *)(gen_frame + 0x4)) + 0x65 < 0) ||
         (puVar4 = (uint *)F_00ab36c0((*(int *)(gen_frame + 0x4)) + 0x65), puVar4 == (uint *)0x0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = (*puVar4 & 0xffffff) + (int)puVar4;
      }
      F_005a2710(pvVar10,6);
      *(int *)((int)pvVar10 + 4) = iVar7;
      switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x4)))) {
      case 0: ;
        bVar2 = *param_2;
        pvVar10 = (undefined *)((int)this + 0xf64);
        F_00492c50(pvVar10);
        F_0042aca0((int)this + 0x2030);
        (*(int *)(gen_frame + 0x18c)) = 0;
        (*(int *)(gen_frame + 0x18c)) = param_2[2] + 1;
        (*(int * PTR32 *)(gen_frame + 0x190)) = &(*(int *)(gen_frame + 0x18c));
        (*(char *)(gen_frame + 0x194)) = '\0';
        F_00493bc0(pvVar10,&(*(int *)(gen_frame + 0x18c)));
        if ((*(int * PTR32 *)(gen_frame + 0x190)) != (int *)0x0) {
          if (((*(char *)(gen_frame + 0x194)) != '\0') && ((*(char *)(gen_frame + 0x194)) == '\x01')) {
            pvVar1 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x190));
            *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
            if (*(int *)((int)pvVar1 + 0x54) < 1) {
              F_0042c880(pvVar1);
              F_00406ad0(pvVar1);
            }
          }
          (*(int * PTR32 *)(gen_frame + 0x190)) = (int *)0x0;
          (*(char *)(gen_frame + 0x194)) = -1;
        }
        puVar4 = (uint *)F_00ab36c0((uint)bVar2 * 2 + 0x6e);
        if (puVar4 == (uint *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x6c)),iVar7,REFG(undefined4, 0x108cc50));
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,((undefined1 *)(gen_frame + 0x6c)),pvVar10,(int)this + 0x2030);
        F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf7c);
        uVar6 = F_0042a990((int)this + 0x2030);
        F_005a2710(pvVar10,6);
        *(uint *)((int)pvVar10 + 4) = uVar6;
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf84);
        iVar9 = iVar8 + 3;
        puVar4 = (uint *)F_00ab36c0((uint)bVar2 * 2 + 0x6f);
        if (puVar4 == (uint *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_005a2710(pvVar10,6);
        *(int *)((int)pvVar10 + 4) = iVar8;
        break;
      case 1: ;
        iVar7 = (param_2[1] + 0x3c + (uint)*param_2 * 2) * 2;
        goto LAB_008f7d05;
      case 2: ;
        iVar7 = (uint)param_2[3] * 2 + 0x90;
LAB_008f7d05: ;
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf7c);
        puVar4 = (uint *)F_00ab36c0(iVar7);
        if (puVar4 == (uint *)0x0) {
          (*(int *)(gen_frame + 0x10)) = 0;
        }
        else {
          (*(int *)(gen_frame + 0x10)) = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_005a2710(pvVar10,6);
        pvVar1 = (undefined *)((int)this + iVar9 * 8 + 0xf84);
        iVar9 = iVar8 + 3;
        *(int *)((int)pvVar10 + 4) = (*(int *)(gen_frame + 0x10));
        puVar4 = (uint *)F_00ab36c0(iVar7 + 1);
        if (puVar4 == (uint *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_005a2710(pvVar1,6);
        *(int *)((int)pvVar1 + 4) = iVar8;
        break;
      case 3: ;
        pvVar10 = (undefined *)((int)this + 0xf64);
        F_00492c50(pvVar10);
        bVar2 = param_2[5];
        uVar6 = param_2[4] + 1;
        (*(uint *)(gen_frame + 0x1a4)) = 0;
        (*(char *)(gen_frame + 0x1ac)) = '\0';
        (*(uint *)(gen_frame + 0x1a4)) = (uint)((uVar6 & 0x80000001) != 0);
        (*(uint * PTR32 *)(gen_frame + 0x1a8)) = &(*(uint *)(gen_frame + 0x1a4));
        F_00493bc0(pvVar10,&(*(uint *)(gen_frame + 0x1a4)));
        if ((*(uint * PTR32 *)(gen_frame + 0x1a8)) != (uint *)0x0) {
          if (((*(char *)(gen_frame + 0x1ac)) != '\0') && ((*(char *)(gen_frame + 0x1ac)) == '\x01')) {
            pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x1a8));
            *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
            if (*(int *)((int)pvVar1 + 0x54) < 1) {
              F_0042c880(pvVar1);
              F_00406ad0(pvVar1);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0x1a8)) = (uint *)0x0;
          (*(char *)(gen_frame + 0x1ac)) = -1;
        }
        (*(uint * PTR32 *)(gen_frame + 0x1c0)) = &(*(uint *)(gen_frame + 0x1bc));
        (*(uint *)(gen_frame + 0x1bc)) = 0;
        (*(uint *)(gen_frame + 0x1bc)) = uVar6;
        (*(char *)(gen_frame + 0x1c4)) = '\0';
        F_00493bc0(pvVar10,&(*(uint *)(gen_frame + 0x1bc)));
        if ((*(uint * PTR32 *)(gen_frame + 0x1c0)) != (uint *)0x0) {
          if (((*(char *)(gen_frame + 0x1c4)) != '\0') && ((*(char *)(gen_frame + 0x1c4)) == '\x01')) {
            pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x1c0));
            *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
            if (*(int *)((int)pvVar1 + 0x54) < 1) {
              F_0042c880(pvVar1);
              F_00406ad0(pvVar1);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0x1c0)) = (uint *)0x0;
          (*(char *)(gen_frame + 0x1c4)) = -1;
        }
        (*(int *)(gen_frame + 0x1b0)) = 0;
        (*(int *)(gen_frame + 0x1b0)) = bVar2 + 1;
        (*(int * PTR32 *)(gen_frame + 0x1b4)) = &(*(int *)(gen_frame + 0x1b0));
        (*(char *)(gen_frame + 0x1b8)) = '\0';
        F_00493bc0(pvVar10,&(*(int *)(gen_frame + 0x1b0)));
        if ((*(int * PTR32 *)(gen_frame + 0x1b4)) != (int *)0x0) {
          if (((*(char *)(gen_frame + 0x1b8)) != '\0') && ((*(char *)(gen_frame + 0x1b8)) == '\x01')) {
            pvVar1 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x1b4));
            *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
            if (*(int *)((int)pvVar1 + 0x54) < 1) {
              F_0042c880(pvVar1);
              F_00406ad0(pvVar1);
            }
          }
          (*(int * PTR32 *)(gen_frame + 0x1b4)) = (int *)0x0;
          (*(char *)(gen_frame + 0x1b8)) = -1;
        }
        F_0042aca0((int)this + 0x2084);
        puVar4 = (uint *)F_00ab36c0(0x35);
        if (puVar4 == (uint *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0xc0)),iVar7,REFG(undefined4, 0x108cc50));
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,((undefined1 *)(gen_frame + 0xc0)),pvVar10,(int)this + 0x2084);
        F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
        F_00492c50(pvVar10);
        (*(uint * PTR32 *)(gen_frame + 0x19c)) = &(*(uint *)(gen_frame + 0x198));
        (*(uint *)(gen_frame + 0x198)) = 0;
        (*(uint *)(gen_frame + 0x198)) = uVar6;
        (*(char *)(gen_frame + 0x1a0)) = '\0';
        F_00493bc0(pvVar10,&(*(uint *)(gen_frame + 0x198)));
        if ((*(uint * PTR32 *)(gen_frame + 0x19c)) != (uint *)0x0) {
          if (((*(char *)(gen_frame + 0x1a0)) != '\0') && ((*(char *)(gen_frame + 0x1a0)) == '\x01')) {
            pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x19c));
            *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
            if (*(int *)((int)pvVar1 + 0x54) < 1) {
              F_0042c880(pvVar1);
              F_00406ad0(pvVar1);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0x19c)) = (uint *)0x0;
          (*(char *)(gen_frame + 0x1a0)) = -1;
        }
        (*(int *)(gen_frame + 0x180)) = 0;
        (*(int *)(gen_frame + 0x180)) = bVar2 + 1;
        (*(int * PTR32 *)(gen_frame + 0x184)) = &(*(int *)(gen_frame + 0x180));
        (*(char *)(gen_frame + 0x188)) = '\0';
        F_00493bc0(pvVar10,&(*(int *)(gen_frame + 0x180)));
        if ((*(int * PTR32 *)(gen_frame + 0x184)) != (int *)0x0) {
          if (((*(char *)(gen_frame + 0x188)) != '\0') && ((*(char *)(gen_frame + 0x188)) == '\x01')) {
            pvVar1 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x184));
            *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
            if (*(int *)((int)pvVar1 + 0x54) < 1) {
              F_0042c880(pvVar1);
              F_00406ad0(pvVar1);
            }
          }
          (*(int * PTR32 *)(gen_frame + 0x184)) = (int *)0x0;
          (*(char *)(gen_frame + 0x188)) = -1;
        }
        F_0042aca0((int)this + 0x20d8);
        puVar4 = (uint *)F_00ab36c0(0x36);
        if (puVar4 == (uint *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x18)),iVar7,REFG(undefined4, 0x108cc50));
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,((undefined1 *)(gen_frame + 0x18)),pvVar10,(int)this + 0x20d8);
        F_0042c880(((undefined1 *)(gen_frame + 0x18)));
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf7c);
        uVar6 = F_0042a990((int)this + 0x2084);
        F_005a2710(pvVar10,6);
        *(uint *)((int)pvVar10 + 4) = uVar6;
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf84);
        iVar9 = iVar8 + 3;
        uVar6 = F_0042a990((int)this + 0x20d8);
        F_005a2710(pvVar10,6);
        *(uint *)((int)pvVar10 + 4) = uVar6;
        break;
      case 4: ;
        bVar2 = param_2[6];
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf7c);
        puVar4 = (uint *)F_00ab36c0((uint)bVar2 * 2 + 0x9a);
        if (puVar4 == (uint *)0x0) {
          (*(uint *)(gen_frame + 0x14)) = 0;
        }
        else {
          (*(uint *)(gen_frame + 0x14)) = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_005a2710(pvVar10,6);
        pvVar1 = (undefined *)((int)this + iVar9 * 8 + 0xf84);
        iVar9 = iVar8 + 3;
        *(uint *)((int)pvVar10 + 4) = (*(uint *)(gen_frame + 0x14));
        puVar4 = (uint *)F_00ab36c0((uint)bVar2 * 2 + 0x9b);
        if (puVar4 == (uint *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_005a2710(pvVar1,6);
        *(int *)((int)pvVar1 + 4) = iVar8;
        break;
      case 5: ;
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf7c);
        puVar4 = (uint *)F_00ab36c0(param_2[7] + 0x213);
        if (puVar4 == (uint *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_005a2710(pvVar10,6);
        *(int *)((int)pvVar10 + 4) = iVar7;
        uVar6 = F_00ab3660((uint)param_2[7]);
        if (uVar6 == 0) {
          (*(undefined4 *)(gen_frame + 0xc)) = 0;
        }
        else {
          (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(uVar6 + 0x38);
        }
        uVar6 = F_00ab21a0((*(undefined4 *)(gen_frame + 0xc)));
        if (uVar6 == 0) {
          (*(uint *)(gen_frame + 0x14)) = 0;
        }
        else {
          (*(uint *)(gen_frame + 0x14)) = (uint)*(byte *)(uVar6 + 0x40);
        }
        F_00492c50((undefined *)((int)this + 0xf64));
        (*(undefined4 *)(gen_frame + 0x168)) = 0;
        (*(undefined4 *)(gen_frame + 0x168)) = (*(undefined4 *)(gen_frame + 0xc));
        (*(undefined4 * PTR32 *)(gen_frame + 0x16c)) = &(*(undefined4 *)(gen_frame + 0x168));
        (*(char *)(gen_frame + 0x170)) = '\0';
        F_00493b50((undefined *)((int)this + 0xf64),&(*(undefined4 *)(gen_frame + 0x168)));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x16c)) != (undefined4 *)0x0) {
          if (((*(char *)(gen_frame + 0x170)) != '\0') && ((*(char *)(gen_frame + 0x170)) == '\x01')) {
            pvVar10 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x16c));
            *(int *)((int)pvVar10 + 0x54) = *(int *)((int)pvVar10 + 0x54) + -1;
            if (*(int *)((int)pvVar10 + 0x54) < 1) {
              F_0042c880(pvVar10);
              F_00406ad0(pvVar10);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x16c)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x170)) = -1;
        }
        (*(uint *)(gen_frame + 0x174)) = 0;
        (*(uint *)(gen_frame + 0x174)) = (*(uint *)(gen_frame + 0x14));
        (*(uint * PTR32 *)(gen_frame + 0x178)) = &(*(uint *)(gen_frame + 0x174));
        (*(char *)(gen_frame + 0x17c)) = '\0';
        F_00493b50((undefined *)((int)this + 0xf64),&(*(uint *)(gen_frame + 0x174)));
        if ((*(uint * PTR32 *)(gen_frame + 0x178)) != (uint *)0x0) {
          if (((*(char *)(gen_frame + 0x17c)) != '\0') && ((*(char *)(gen_frame + 0x17c)) == '\x01')) {
            pvVar10 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x178));
            *(int *)((int)pvVar10 + 0x54) = *(int *)((int)pvVar10 + 0x54) + -1;
            if (*(int *)((int)pvVar10 + 0x54) < 1) {
              F_0042c880(pvVar10);
              F_00406ad0(pvVar10);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0x178)) = (uint *)0x0;
          (*(char *)(gen_frame + 0x17c)) = -1;
        }
        F_0042aca0((int)this + 0x212c);
        puVar4 = (uint *)F_00ab36c0(0x212);
        if (puVar4 == (uint *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x114)),iVar7,REFG(undefined4, 0x108cc50));
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,((undefined1 *)(gen_frame + 0x114)),(int)this + 0xf64,(int)this + 0x212c);
        F_0042c880(((undefined1 *)(gen_frame + 0x114)));
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf84);
        iVar9 = iVar8 + 3;
        uVar6 = F_0042a990((int)this + 0x212c);
        F_005a2710(pvVar10,6);
        *(uint *)((int)pvVar10 + 4) = uVar6;
        break;
      case 6: ;
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,1);
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf7c);
        if (uVar6 == 0) {
          F_005a2710(pvVar10,6);
          *(char * PTR32 *)((int)pvVar10 + 4) = "";
        }
        else {
          uVar3 = *((undefined4 *)GEN_TOP((*(int *)(uVar6 + 0x20) + ((uint)param_2[8] + (uint)param_2[9] * 0x28) * 4)));
          F_005a2710(pvVar10,6);
          *(undefined4 *)((int)pvVar10 + 4) = uVar3;
        }
        pvVar10 = ((undefined *)GEN_TOP(((int)this + (iVar8 + 2) * 8 + 0xf7c)));
        iVar9 = iVar8 + 3;
        F_005a2710(pvVar10,6);
        *(char * PTR32 *)((int)pvVar10 + 4) = "";
        break;
      case 7: ;
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf7c);
        uVar6 = F_0042a990((int)this + 0x1fdc);
        F_005a2710(pvVar10,6);
        *(uint *)((int)pvVar10 + 4) = uVar6;
        pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf84);
        iVar9 = iVar8 + 3;
        F_005a2710(pvVar10,6);
        *(char * PTR32 *)((int)pvVar10 + 4) = "";
      }
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
      iVar8 = iVar9;
    } while ((*(int *)(gen_frame + 0x4)) < (int)(*(uint *)(gen_frame + 0x0)));
  }
  uVar6 = (*(uint *)(gen_frame + 0x0));
  if ((int)(*(uint *)(gen_frame + 0x0)) < 8) {
    pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf7c);
    if (((int)((*(uint *)(gen_frame + 0x0)) + 0x65) < 0) ||
       (puVar4 = (uint *)F_00ab36c0((*(uint *)(gen_frame + 0x0)) + 0x65), puVar4 == (uint *)0x0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*puVar4 & 0xffffff) + (int)puVar4;
    }
    F_005a2710(pvVar10,6);
    *(int *)((int)pvVar10 + 4) = iVar8;
    pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf84);
    puVar4 = (uint *)F_00ab36c0(100);
    if (puVar4 == (uint *)0x0) {
      (*(uint *)(gen_frame + 0x14)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x14)) = (*puVar4 & 0xffffff) + (int)puVar4;
    }
    F_005a2710(pvVar10,6);
    *(uint *)((int)pvVar10 + 4) = (*(uint *)(gen_frame + 0x14));
    pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf8c);
    F_005a2710(pvVar10,6);
    uVar6 = (*(uint *)(gen_frame + 0x0)) + 1;
    *(char * PTR32 *)((int)pvVar10 + 4) = "";
    if ((int)uVar6 < 8) {
      iVar8 = (*(uint *)(gen_frame + 0x0)) + 0x66;
      pvVar10 = (undefined *)((int)this + iVar9 * 8 + 0xf94);
      do {
        if ((iVar8 < 0) || (puVar4 = (uint *)F_00ab36c0(iVar8), puVar4 == (uint *)0x0)) {
          iVar9 = 0;
        }
        else {
          iVar9 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_005a2710(pvVar10,6);
        *(int *)((int)pvVar10 + 4) = iVar9;
        F_005a2710((undefined *)((int)pvVar10 + 8),6);
        *(char * PTR32 *)((int)pvVar10 + 0xc) = "";
        uVar6 = F_005a2710((undefined *)((int)pvVar10 + 0x10),6);
        iVar8 = iVar8 + 1;
        *(char * PTR32 *)((int)pvVar10 + 0x14) = "";
        pvVar10 = (undefined *)((int)pvVar10 + 0x18);
      } while (iVar8 < 0x6d);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
  return uVar6;
}

/* ref: FUN_008f8640 */
uint F_008f8640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8f8640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if ((((0 < (int)param_1) && (0 < (int)param_2)) && ((int)param_1 < 0xd)) && ((int)param_2 < 0x21))
  {
    this_00 = (undefined *)((int)this + 0x2f0);
    F_00492c50(this_00);
    uVar1 = param_1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(undefined1 *)(gen_frame + 0x64)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = (uint)(0 < (int)uVar1);
    F_00493bc0(this_00,&(*(uint *)(gen_frame + 0x5c)));
    F_004917c0(&(*(uint *)(gen_frame + 0x5c)));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = param_1;
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(undefined1 *)(gen_frame + 0x64)) = 0;
    F_00493bc0(this_00,&(*(uint *)(gen_frame + 0x5c)));
    F_004917c0(&(*(uint *)(gen_frame + 0x5c)));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = param_2;
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(undefined1 *)(gen_frame + 0x64)) = 0;
    F_00493bc0(this_00,&(*(uint *)(gen_frame + 0x5c)));
    F_004917c0(&(*(uint *)(gen_frame + 0x5c)));
    F_0042aca0((int)this + 0x404);
    uVar1 = F_00781550(*(undefined4 *)((int)this + 0x2e8),3,0x35);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)),uVar1,REFG(undefined4, 0x108cc50));
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,((undefined1 *)(gen_frame + 0x8)),this_00,(int)this + 0x404);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    F_00492c50(this_00);
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = param_1;
    (*(undefined1 *)(gen_frame + 0x64)) = 0;
    F_00493bc0(this_00,&(*(uint *)(gen_frame + 0x5c)));
    F_004917c0(&(*(uint *)(gen_frame + 0x5c)));
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = param_2;
    (*(undefined1 *)(gen_frame + 0x64)) = 0;
    F_00493bc0(this_00,&(*(uint *)(gen_frame + 0x5c)));
    F_004917c0(&(*(uint *)(gen_frame + 0x5c)));
    F_0042aca0((int)this + 0x458);
    uVar1 = F_00781550(*(undefined4 *)((int)this + 0x2e8),3,0x36);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)),uVar1,REFG(undefined4, 0x108cc50));
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,((undefined1 *)(gen_frame + 0x8)),this_00,(int)this + 0x458);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    param_1 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return param_1;
}

/* ref: FUN_008f8820 */
uint F_008f8820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8f8820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  int * piVar1;
  undefined * puVar2;
  undefined * pvVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if (param_1 - 1 < 0x1c) {
    this_00 = (undefined *)((int)this + 0x2f0);
    F_00492c50(this_00);
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = param_1;
    (*(char *)(gen_frame + 0x64)) = '\0';
    F_00493bc0(this_00,&(*(uint *)(gen_frame + 0x5c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x60)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = param_2 & 0xffff;
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(char *)(gen_frame + 0x64)) = '\0';
    F_00493b50(this_00,&(*(uint *)(gen_frame + 0x5c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x60)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    F_0042aca0((int)this + 0x4ac);
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                              (*(int * PTR32 *)((int)this + 0x2e8),0x7b6)));
    if (piVar1 == (int *)0x0) {
      puVar2 = &REFG(undefined, 0x10be54a);
    }
    else {
      uVar6 = 3;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
      puVar2 = (undefined *)F_00cb0950(pvVar3,uVar6);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar2,REFG(undefined4, 0x108cc50));
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x8)),this_00,(int)this + 0x4ac);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    F_0042aca0((int)this + 0x500);
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                              (*(int * PTR32 *)((int)this + 0x2e8),0x7b7)));
    if (piVar1 == (int *)0x0) {
      puVar2 = &REFG(undefined, 0x10be54a);
    }
    else {
      uVar6 = 3;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
      puVar2 = (undefined *)F_00cb0950(pvVar3,uVar6);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar2,REFG(undefined4, 0x108cc50));
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x8)),this_00,(int)this + 0x500);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)uVar5;
  }
  F_0042aca0((int)this + 0x4ac);
  uVar4 = F_0042aca0((int)this + 0x500);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar4;
}

/* ref: FUN_008f8a10 */
uint F_008f8a10(unsigned int gen_a0)
{
  GEN_ENTER(0x8f8a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * puVar4;
  undefined * pvVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042aca0((int)this + 0x554);
  this_00 = (undefined *)((int)this + 0x2f0);
  F_00492c50(this_00);
  uVar1 = F_00424920();
  uVar2 = F_004249a0(REFG(undefined4, 0x137104c));
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),uVar2,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar2);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar5 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
      if (*(int *)((int)pvVar5 + 0x54) < 1) {
        F_0042c880(pvVar5);
        F_00406ad0(pvVar5);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x8)),uVar1,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x64)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x5c)),uVar1);
  F_00493b50(this_00,&(*(undefined4 *)(gen_frame + 0x5c)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0x64)) != '\0') && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar5 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
      if (*(int *)((int)pvVar5 + 0x54) < 1) {
        F_0042c880(pvVar5);
        F_00406ad0(pvVar5);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x64)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0xc)));
  if (piVar3 == (int *)0x0) {
    puVar4 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar7 = 3;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    puVar4 = (undefined *)F_00cb0950(pvVar5,uVar7);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar4,REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0x8)),this_00,(int)this + 0x554);
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar6;
}

/* ref: FUN_008f8bb0 */
uint F_008f8bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8f8bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  int * piVar1;
  undefined * puVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042aca0(param_3);
  this_00 = (undefined *)((int)this + 0x2f0);
  F_00492c50(this_00);
  (*(int * PTR32 *)(gen_frame + 0x60)) = &(*(int *)(gen_frame + 0x5c));
  (*(int *)(gen_frame + 0x5c)) = 0;
  (*(int *)(gen_frame + 0x5c)) = param_2 + 1;
  (*(char *)(gen_frame + 0x64)) = '\0';
  F_00493b50(this_00,&(*(int *)(gen_frame + 0x5c)));
  if ((((*(int * PTR32 *)(gen_frame + 0x60)) != (int *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
    pvVar3 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x60));
    *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
    if (*(int *)((int)pvVar3 + 0x54) < 1) {
      F_0042c880(pvVar3);
      F_00406ad0(pvVar3);
    }
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),param_1 * 2 + 0x6e)));
  if (piVar1 == (int *)0x0) {
    puVar2 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar5 = 3;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar2 = (undefined *)F_00cb0950(pvVar3,uVar5);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar2,REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x8)),this_00,param_3);
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar4;
}

/* ref: FUN_008f8cb0 */
uint F_008f8cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8f8cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined * this_00;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  char * pcVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,2);
  uVar3 = F_00ab3ee0((uint)*((ushort *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x22 + (param_2 + param_1 * 0x28) * 4))));
  if (uVar3 == 0) {
    (*(uint *)(gen_frame + 0x0)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = (uint)*(byte *)(uVar3 + 8);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  this_00 = (undefined *)((int)this + 0x2f0);
  F_00492c50(this_00);
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x58)),"",REFG(undefined4, 0x108cc50));
  (*(uint *)(gen_frame + 0xac)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0xb0)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0xb4)) = -1;
  F_00490f90(&(*(uint *)(gen_frame + 0xac)),uVar3);
  F_00493b50(this_00,&(*(uint *)(gen_frame + 0xac)));
  if ((*(uint * PTR32 *)(gen_frame + 0xb0)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0xb4)) != '\0') && ((*(char *)(gen_frame + 0xb4)) == '\x01')) {
      pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xb0));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(uint * PTR32 *)(gen_frame + 0xb0)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0xb4)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  if ((*(uint *)(gen_frame + 0x0)) == 0) {
    (*(uint *)(gen_frame + 0x0)) = 1;
  }
  (*(uint * PTR32 *)(gen_frame + 0xb0)) = &(*(uint *)(gen_frame + 0xac));
  (*(uint *)(gen_frame + 0xac)) = 0;
  (*(uint *)(gen_frame + 0xac)) = (*(uint *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0xb4)) = '\0';
  F_00493b50(this_00,&(*(uint *)(gen_frame + 0xac)));
  if ((((*(uint * PTR32 *)(gen_frame + 0xb0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0xb4)) != '\0')) && ((*(char *)(gen_frame + 0xb4)) == '\x01')) {
    pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xb0));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  puVar4 = (uint *)F_00ab36c0(0x38);
  if (puVar4 == (uint *)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x58)),pcVar5,REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,((undefined1 *)(gen_frame + 0x58)),this_00,param_3);
  F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)uVar6;
}

/* ref: FUN_008f8e70 */
uint F_008f8e70(unsigned int gen_a0)
{
  GEN_ENTER(0x8f8e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  undefined * this_00;
  undefined1 * this_01;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  this_01 = (gen_frame + 0x1c);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4),0x40,0);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar2 + 0x234e0) = *(byte *)(uVar2 + 0x234e0) & 0xfb;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if ((*(int *)((int)this + 0x250) < 7) || (*(char *)((int)this + 0x6d0) != '\0')) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *(char *)((int)this + 0x6cc) = cVar1;
  uVar2 = (cVar1 != '\0') - 1 & 2;
  if (*(char *)((int)this + 0x5fd) == '\x01') {
    uVar2 = uVar2 | 4;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  F_008f8a10(this);
  uVar2 = F_0042a990((int)this + 0x554);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),6);
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  puVar6 = &(*(undefined4 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  uVar5 = 2;
  uVar4 = 2;
  pvVar7 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_008668b0(this_00,uVar4,uVar5,puVar6,pvVar7,uVar8,uVar9,uVar10);
  *(uint *)((int)this + 8) = uVar2;
  iVar3 = 1;
  do {
    this_01 = this_01 + -8;
    uVar2 = F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_008f8f60 */
uint F_008f8f60(unsigned int gen_a0)
{
  GEN_ENTER(0x8f8f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  short sVar1;
  byte bVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined1 * puVar6;
  undefined * puVar7;
  undefined * pvVar8;
  short sVar9;
  int iVar10;
  undefined4 * this_00;
  ulonglong uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  piVar3 = (int *)F_00884bf0((undefined *)((int)this + 0x18),*(undefined4 *)((int)this + 0x6c0),
                               *(undefined4 *)((int)this + 0x6c4));
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,1);
    F_0042cc20(((undefined1 *)(gen_frame + 0x60)),
                 *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x140 + *(char *)((int)this + 0x671) * 4))),
                 REFG(undefined4, 0x108cc50));
    if (*piVar3 == 0) {
      puVar6 = &REFG(undefined1, 0x107fc63);
    }
    else {
      puVar6 = (undefined1 *)(*piVar3 + 0x1a);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),puVar6,REFG(undefined4, 0x108cc50));
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,2);
    sVar1 = *((short *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x22 +
                      ((int)*(short *)((int)this + 0x682) + *(char *)((int)this + 0x680) * 0x28) * 4
                      )));
    if (*piVar3 == 0) {
      sVar9 = 0;
    }
    else {
      sVar9 = *(short *)(*piVar3 + 0x18);
    }
    bVar2 = F_0042b660(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xc)));
    if ((bVar2 != 0) && (sVar1 == sVar9)) {
      F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
      pvVar8 = (undefined *)((int)this + 0x2f0);
      F_00492c50(pvVar8);
      if (*piVar3 == 0) {
        puVar6 = &REFG(undefined1, 0x107fc63);
      }
      else {
        puVar6 = (undefined1 *)(*piVar3 + 0x1a);
      }
      uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x108)),puVar6,REFG(undefined4, 0x108cc50));
      (*(undefined4 *)(gen_frame + 0x15c)) = 0;
      (*(undefined4 *)(gen_frame + 0x160)) = 0;
      (*(undefined1 *)(gen_frame + 0x164)) = 0xff;
      F_00490f90(&(*(undefined4 *)(gen_frame + 0x15c)),uVar5);
      F_00493b50(pvVar8,&(*(undefined4 *)(gen_frame + 0x15c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x15c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x108)));
      uVar12 = REFG(undefined4, 0x108cc50);
      uVar5 = F_00781590(this,0x15);
      F_0042cc20(((undefined1 *)(gen_frame + 0x108)),uVar5,uVar12);
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0x108)),pvVar8,((undefined1 *)(gen_frame + 0xb4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x108)));
      puVar7 = (undefined *)F_00781590(this,0x16);
      uVar12 = *(undefined4 *)((int)this + 8);
      uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
      pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      (*(undefined4 *)(gen_frame + 0x11c)) = 0;
      (*(undefined4 *)(gen_frame + 0x124)) = 0;
      (*(undefined4 *)(gen_frame + 0x12c)) = 0;
      (*(undefined4 *)(gen_frame + 0x134)) = 0;
      (*(undefined4 *)(gen_frame + 0x13c)) = 0;
      (*(undefined4 *)(gen_frame + 0x144)) = 0;
      (*(undefined4 *)(gen_frame + 0x14c)) = 0;
      (*(undefined4 *)(gen_frame + 0x154)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x11c)),6);
      (*(uint *)(gen_frame + 0x120)) = uVar5;
      if (REFG(int, 0x148a108) == 0) {
        uVar5 = F_005593a0(pvVar8,1);
      }
      else if (REFG(int, 0x1327228) == 0) {
        uVar5 = F_005593a0(pvVar8,3);
      }
      else {
        uVar5 = 0;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x124)),6);
      (*(uint *)(gen_frame + 0x128)) = uVar5;
      if (REFG(int, 0x148a10c) == 0) {
        uVar5 = F_005593a0(pvVar8,2);
      }
      else if (REFG(int, 0x132722c) == 0) {
        uVar5 = F_005593a0(pvVar8,4);
      }
      else {
        uVar5 = 0;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x12c)),6);
      (*(uint *)(gen_frame + 0x130)) = uVar5;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x134)),3);
      (*(undefined4 *)(gen_frame + 0x138)) = 0x10001;
      if (puVar7 == (undefined *)0x0) {
        puVar7 = &REFG(undefined, 0x10bda5d);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x13c)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x140)) = puVar7;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x144)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x148)) = &REFG(undefined, 0x10bda5e);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14c)),3);
      (*(undefined4 *)(gen_frame + 0x150)) = 0x1e;
      uVar5 = F_008668b0(pvVar8,10,8,&(*(undefined4 *)(gen_frame + 0x11c)),this,5,uVar12,4);
      this_00 = &(*(undefined4 *)(gen_frame + 0x15c));
      iVar10 = 7;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
      *(uint *)((int)this + 0x684) = uVar5;
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
    }
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    uVar11 = F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    uVar5 = (uint)uVar11;
  }
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return uVar5;
}

/* ref: FUN_008f92c0 */
uint F_008f92c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f92c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  int * piVar2;
  undefined * puVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  int iVar6;
  uint uVar7;
  undefined4 * this_00;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042aca0((int)this + 0x5a8);
  F_0042e430((undefined *)((int)this + 0x5a8),param_1);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  pvVar5 = (undefined *)((int)this + 0x2f0);
  F_00492c50(pvVar5);
  uVar9 = REFG(undefined4, 0x108cc50);
  uVar1 = F_0042a990((int)this + 0x5a8);
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x58)),uVar1,uVar9);
  uVar7 = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0xb4)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0xac)),uVar1);
  F_00493b50(pvVar5,&(*(undefined4 *)(gen_frame + 0xac)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0xb4)) != '\0') && ((*(char *)(gen_frame + 0xb4)) == '\x01')) {
      pvVar4 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0xb0));
      *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
      if (*(int *)((int)pvVar4 + 0x54) < 1) {
        F_0042c880(pvVar4);
        F_00406ad0(pvVar4);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0xb4)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x1c)));
  if (piVar2 == (int *)0x0) {
    puVar3 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar9 = 3;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
    puVar3 = (undefined *)F_00cb0950(pvVar4,uVar9);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x58)),puVar3,REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,((undefined1 *)(gen_frame + 0x58)),pvVar5,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  uVar9 = *(undefined4 *)((int)this + 8);
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x6c)),6);
  (*(uint *)(gen_frame + 0x70)) = uVar1;
  if (REFG(int, 0x148a108) == 0) {
    (*(uint *)(gen_frame + 0x0)) = F_005593a0(pvVar5,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    (*(uint *)(gen_frame + 0x0)) = F_005593a0(pvVar5,3);
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x74)),6);
  (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0x0));
  if (REFG(int, 0x148a10c) == 0) {
    uVar10 = 2;
  }
  else {
    if (REFG(int, 0x132722c) != 0) goto LAB_008f94a9;
    uVar10 = 4;
  }
  uVar7 = F_005593a0(pvVar5,uVar10);
LAB_008f94a9: ;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x7c)),6);
  (*(uint *)(gen_frame + 0x80)) = uVar7;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x84)),3);
  (*(undefined4 *)(gen_frame + 0x88)) = 0x10001;
  uVar1 = F_008668b0(pvVar5,9,4,&(*(undefined4 *)(gen_frame + 0x6c)),this,8,uVar9,4);
  this_00 = &(*(undefined4 *)(gen_frame + 0xac));
  iVar6 = 7;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(uint *)((int)this + 0x684) = uVar1;
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)uVar8;
}

/* ref: FUN_008f9530 */
uint F_008f9530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f9530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  undefined * puVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  uint * this_00;
  int iVar6;
  ulonglong uVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  iVar6 = *(int *)((int)this + 0x684);
  if (iVar6 != 0) {
    *(undefined4 *)((int)this + 0x684) = 0;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,iVar6,0);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x58)));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x14))))(*(int * PTR32 *)((int)this + 4))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,"Error")));
  pvVar4 = (undefined *)((int)this + 0x2f0);
  F_00492c50(pvVar4);
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = &(*(undefined4 *)(gen_frame + 0xac));
  (*(char *)(gen_frame + 0xb4)) = '\0';
  F_00493b50(pvVar4,&(*(undefined4 *)(gen_frame + 0xac)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0xb4)) != '\0')) && ((*(char *)(gen_frame + 0xb4)) == '\x01')) {
    pvVar5 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0xb0));
    *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
    if (*(int *)((int)pvVar5 + 0x54) < 1) {
      F_0042c880(pvVar5);
      F_00406ad0(pvVar5);
    }
  }
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x3396)));
  if (piVar1 == (int *)0x0) {
    puVar2 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar9 = 0;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar2 = (undefined *)F_00cb0950(pvVar5,uVar9);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),puVar2,REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x4)),pvVar4,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x58)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xb8)),6);
  uVar12 = 0;
  (*(uint *)(gen_frame + 0xbc)) = uVar3;
  uVar10 = 0;
  uVar9 = 2;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043bd00(pvVar4,uVar9,uVar10,uVar12);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),6);
  (*(uint *)(gen_frame + 0xc4)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc8)),4);
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xd0)),4);
  uVar13 = 0xb;
  uVar11 = 0;
  uVar12 = 0x14;
  puVar8 = &(*(undefined4 *)(gen_frame + 0xb8));
  (*(undefined4 *)(gen_frame + 0xd4)) = 2;
  uVar10 = 4;
  uVar9 = 8;
  pvVar4 = this;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_008668b0(pvVar5,uVar9,uVar10,puVar8,pvVar4,uVar12,uVar11,uVar13);
  *(uint *)((int)this + 0x684) = uVar3;
  this_00 = &(*(uint *)(gen_frame + 0xd8));
  iVar6 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar7;
}

/* ref: FUN_008f9730 */
uint F_008f9730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x8f9730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  short sVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  short * psVar4;
  int iVar5;
  short sVar6;
  undefined4 uVar7;
  
  uVar7 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  F_00760260(this_00,uVar7);
  if (*(char *)((int)this + 0x6cf) != '\0') {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    *(undefined4 *)(uVar2 + 0x29250) = 0;
    if (*(char *)(uVar2 + 0x29254) != '\0') {
      if (REFG(int, 0x1370c18) != 0) {
        F_004d2690(REFG(int, 0x1370c18),REFG(float, 0x1088068));
      }
      *(undefined1 *)(uVar2 + 0x29254) = 0;
    }
    F_00882cf0(this,1);
    *(undefined1 *)((int)this + 0x68f) = 2;
    *(char *)((int)this + 0x680) = (char)param_1;
    piVar3 = (int *)F_00884bf0((undefined *)((int)this + 0x18),*(undefined4 *)((int)this + 0x678),
                                 *(undefined4 *)((int)this + 0x67c));
    if (*piVar3 == 0) {
      sVar6 = 0;
    }
    else {
      sVar6 = *(short *)(*piVar3 + 0x18);
    }
    iVar5 = (char)param_1 * 0x118;
    sVar1 = 0;
    for (psVar4 = *(short * PTR32 *)(iVar5 + 0x38 + (int)this);
        psVar4 != *(short * PTR32 *)((int)this + iVar5 + 0x3c); psVar4 = psVar4 + 0x2a) {
      if (*psVar4 == sVar6) goto LAB_008f9800;
      sVar1 = sVar1 + 1;
    }
    sVar1 = -1;
LAB_008f9800: ;
    *(short *)((int)this + 0x682) = sVar1;
    *(undefined2 *)((int)this + 0x68c) = 0x116;
    F_008f9530(this,*(undefined4 *)((int)this + 0x6b8));
  }
  F_00882980(this,param_1,param_2,param_3,param_4);
  F_008ed1a0(this,(int)*(char *)((int)this + 0x680),(int)*(short *)((int)this + 0x682));
  F_008e1600(this);
  if (param_5 == 2) {
    *(undefined1 *)((int)this + 0x68f) = 0xf;
    return 2;
  }
  if (param_5 == 1) {
    param_5 = F_00781b90(this,0);
  }
  return param_5;
}

/* ref: FUN_008f9880 */
uint F_008f9880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8f9880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)this + 0x671) < '\0') {
    *(undefined4 *)((int)this + 0x6b8) = param_1;
    *(undefined4 *)((int)this + 0x67c) = *(undefined4 *)((int)this + 0x6dc);
    *(undefined4 *)((int)this + 0x678) = *(undefined4 *)((int)this + 0x6d8);
    *(undefined1 *)((int)this + 0x6cf) = 1;
    uVar1 = F_008b8de0((undefined *)((int)this + 0x18),(int)*(char *)((int)this + 0x670),
                         *(undefined4 *)((int)this + 0x6d8),*(undefined4 *)((int)this + 0x6dc),4);
    *(undefined2 *)((int)this + 0x68c) = 0x101;
    return uVar1;
  }
  if (*(char *)((int)this + 0x6cf) == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    *(undefined4 *)(uVar1 + 0x29250) = 0;
    if (*(char *)(uVar1 + 0x29254) != '\0') {
      if (REFG(int, 0x1370c18) != 0) {
        F_004d2690(REFG(int, 0x1370c18),REFG(float, 0x1088068));
      }
      *(undefined1 *)(uVar1 + 0x29254) = 0;
    }
    F_00882cf0(this,1);
    *(undefined1 *)((int)this + 0x68f) = 2;
    *(undefined1 *)((int)this + 0x6cf) = 1;
  }
  *(undefined2 *)((int)this + 0x68c) = 0x116;
  uVar1 = F_008f9530(this,param_1);
  return uVar1;
}

/* ref: FUN_008f9960 */
uint F_008f9960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8f9960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x238) = 0x12;
  uVar1 = F_008f9880(*(undefined * PTR32 *)this,param_2);
  return uVar1;
}

/* ref: FUN_008f9980 */
uint F_008f9980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x8f9980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_008f9730(*(undefined * PTR32 *)this,*(undefined4 *)(param_1 + 0x108),param_2,param_3,param_4,
                       param_5);
  *(undefined4 *)((int)this + 0x238) = 0xe;
  return uVar1;
}

/* ref: FUN_008f99c0 */
uint F_008f99c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8f99c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint * puVar4;
  char * pcVar5;
  ulonglong uVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  if ((*(int *)((int)this + 0x39c) != 0) && (*(char *)((int)this + 0x3a3) == '\0')) {
    uVar3 = F_0055dcb0();
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)(uVar3 + 0xe0);
    bVar2 = F_0057a1d0((undefined *)(uVar3 + 0xe0),(uint)*(byte *)((int)this + 0x13a));
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      F_00560760(((uint *)(gen_frame + 0xc)));
      uVar3 = F_0055dcb0();
      piVar1 = *(int * PTR32 *)(uVar3 + 0x30);
      F_004816e0(((undefined4 *)(gen_frame + 0x18)));
      F_0042b630(((undefined1 *)(gen_frame + 0x88)));
      F_00492c50(((undefined4 *)(gen_frame + 0x18)));
      (*(uint *)(gen_frame + 0xdc)) = 0;
      (*(uint *)(gen_frame + 0xdc)) = (uint)*(byte *)((int)this + 0x3a0);
      (*(uint * PTR32 *)(gen_frame + 0xe0)) = &(*(uint *)(gen_frame + 0xdc));
      (*(undefined1 *)(gen_frame + 0xe4)) = 0;
      F_00493b50(((undefined4 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0xdc)));
      F_004917c0(&(*(uint *)(gen_frame + 0xdc)));
      (*(uint *)(gen_frame + 0xdc)) = 0;
      (*(uint *)(gen_frame + 0xdc)) = *(byte *)((int)this + 0x3a1) + 1;
      (*(uint * PTR32 *)(gen_frame + 0xe0)) = &(*(uint *)(gen_frame + 0xdc));
      (*(undefined1 *)(gen_frame + 0xe4)) = 0;
      F_00493b50(((undefined4 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0xdc)));
      F_004917c0(&(*(uint *)(gen_frame + 0xdc)));
      puVar4 = (uint *)F_00ab36c0(0x83a);
      if (puVar4 == (uint *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x34)),pcVar5,REFG(undefined4, 0x108cc50));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x34)),((undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x34)));
      ((uint *)(gen_frame + 0xc))[0] = F_0042a990(((undefined1 *)(gen_frame + 0x88)));
      F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x30)),2,(uint)*(byte *)((int)this + 0x13a),
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x39c) + 0x68))),((uint *)(gen_frame + 0xc)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)));
      F_00492c50(((undefined4 *)(gen_frame + 0x18)));
      uVar6 = F_00429760(((undefined4 *)(gen_frame + 0x18))[0],8,0x2c4);
      uVar3 = (uint)uVar6;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_008f9b70 */
uint F_008f9b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8f9b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  undefined * pvVar7;
  char * pcVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b990(uVar4);
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b9a0(uVar5);
  iVar2 = *(int *)(uVar4 + 8);
  iVar1 = param_2 + param_1 * 0x28;
  uVar4 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x20 + iVar1 * 4)));
  uVar9 = uVar4 & 0xf;
  uVar11 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar5 + 4) + 0x20))) + iVar1 * 4)));
  uVar4 = F_00ab3ee0((int)uVar4 >> 0x10 & 0xffff);
  if (uVar4 == 0) {
    (*(uint *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x8)) = (uint)*(byte *)(uVar4 + 8);
  }
  uVar4 = F_0055dcb0();
  piVar3 = *(int * PTR32 *)(uVar4 + 0x30);
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)F_004296a0(8,0,0x2c4);
  if ((*(int * PTR32 *)(gen_frame + 0xc)) != (int *)0x0) {
    *(*(int * PTR32 *)(gen_frame + 0xc)) = 0;
    (*(int * PTR32 *)(gen_frame + 0xc))[1] = 0;
  }
  *(*(int * PTR32 *)(gen_frame + 0xc)) = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x24)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x78)),uVar11,REFG(undefined4, 0x108cc50));
  (*(uint *)(gen_frame + 0xcc)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0xd0)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0xd4)) = -1;
  F_00490f90(&(*(uint *)(gen_frame + 0xcc)),uVar4);
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
  }
  uVar4 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x1c));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x14));
  }
  if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar4 * 4) == 0) {
    uVar5 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x10)) + uVar4 * 4) = uVar5;
  }
  pvVar7 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar4 * 4);
  if (pvVar7 != (undefined *)0x0) {
    F_00492f50(pvVar7,&(*(uint *)(gen_frame + 0xcc)));
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((*(uint * PTR32 *)(gen_frame + 0xd0)) != (undefined4 *)0x0) {
    if (((*(char *)(gen_frame + 0xd4)) != '\0') && ((*(char *)(gen_frame + 0xd4)) == '\x01')) {
      pvVar7 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xd0));
      *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) + -1;
      if (*(int *)((int)pvVar7 + 0x54) < 1) {
        F_0042c880(pvVar7);
        F_00406ad0(pvVar7);
      }
    }
    (*(uint * PTR32 *)(gen_frame + 0xd0)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0xd4)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x78)));
  if ((*(uint *)(gen_frame + 0x8)) == 0) {
    (*(uint *)(gen_frame + 0x8)) = 1;
  }
  (*(uint *)(gen_frame + 0xcc)) = 0;
  (*(uint *)(gen_frame + 0xcc)) = (*(uint *)(gen_frame + 0x8));
  (*(uint * PTR32 *)(gen_frame + 0xd0)) = &(*(uint *)(gen_frame + 0xcc));
  (*(char *)(gen_frame + 0xd4)) = '\0';
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
  }
  uVar4 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x1c));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x14));
  }
  if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar4 * 4) == 0) {
    uVar5 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x10)) + uVar4 * 4) = uVar5;
  }
  pvVar7 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar4 * 4);
  if (pvVar7 != (undefined *)0x0) {
    F_00492f50(pvVar7,&(*(uint *)(gen_frame + 0xcc)));
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0xd0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0xd4)) != '\0')) && ((*(char *)(gen_frame + 0xd4)) == '\x01')) {
    pvVar7 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xd0));
    *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) + -1;
    if (*(int *)((int)pvVar7 + 0x54) < 1) {
      F_0042c880(pvVar7);
      F_00406ad0(pvVar7);
    }
  }
  puVar6 = (uint *)F_00ab36c0(0x38);
  if (puVar6 == (uint *)0x0) {
    pcVar8 = "";
  }
  else {
    pcVar8 = ((char *)GEN_TOP(((*puVar6 & 0xffffff) + (int)puVar6)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x78)),pcVar8,REFG(undefined4, 0x108cc50));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0x78)),&(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x24)));
  F_0042c880(((undefined1 *)(gen_frame + 0x78)));
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x24)));
  pvVar7 = (undefined *)F_00559ba0(*param_3);
  F_00584110(pvVar7,uVar4);
  uVar4 = F_00560910(uVar9);
  pvVar7 = (undefined *)F_00559ba0(param_3[2]);
  F_00584110(pvVar7,uVar4);
  if ((int)uVar9 < *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18c)))) {
    uVar11 = 0x11;
  }
  else {
    uVar11 = 0x65;
  }
  F_0059d670((undefined *)param_3[1],uVar11);
  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  uVar10 = F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar10;
}

/* ref: FUN_008f9f10 */
uint F_008f9f10(unsigned int gen_a0)
{
  GEN_ENTER(0x8f9f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint * puVar4;
  int iVar5;
  undefined * puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  if (((*(int *)((int)this + 0x180) != 0) && (*(int *)((int)this + 0x2a4) != 0)) &&
     (*(char *)((int)this + 0x2ad) == '\0')) {
    uVar3 = F_0055dcb0();
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)(uVar3 + 0xe0);
    bVar2 = F_0057a1d0((undefined *)(uVar3 + 0xe0),(uint)*(byte *)((int)this + 0x13a));
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      iVar8 = *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x398)));
      if (iVar8 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = *(int *)(iVar8 + 0x1a4);
      }
      iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x39c)));
      if (iVar5 == 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = *(int *)(iVar5 + 0x19c);
      }
      (*(int *)(gen_frame + 0x30)) = iVar5 + 1 + iVar7 * 2;
      if (iVar8 == 0) {
        iVar8 = -1;
      }
      else {
        iVar8 = *(int *)(iVar8 + 0x1a8);
      }
      F_00560760(((uint *)(gen_frame + 0x8)));
      uVar3 = F_0055dcb0();
      piVar1 = *(int * PTR32 *)(uVar3 + 0x30);
      F_004816e0(((undefined4 *)(gen_frame + 0x14)));
      F_0042b630(((undefined1 *)(gen_frame + 0x88)));
      F_00492c50(((undefined4 *)(gen_frame + 0x14)));
      (*(int *)(gen_frame + 0xdc)) = 0;
      (*(int *)(gen_frame + 0xdc)) = (*(int *)(gen_frame + 0x30));
      (*(int * PTR32 *)(gen_frame + 0xe0)) = &(*(int *)(gen_frame + 0xdc));
      (*(undefined1 *)(gen_frame + 0xe4)) = 0;
      F_00493bc0(((undefined4 *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0xdc)));
      F_004917c0(&(*(int *)(gen_frame + 0xdc)));
      (*(int *)(gen_frame + 0xdc)) = 0;
      (*(int *)(gen_frame + 0xdc)) = iVar8 + 1;
      (*(int * PTR32 *)(gen_frame + 0xe0)) = &(*(int *)(gen_frame + 0xdc));
      (*(undefined1 *)(gen_frame + 0xe4)) = 0;
      F_00493b50(((undefined4 *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0xdc)));
      F_004917c0(&(*(int *)(gen_frame + 0xdc)));
      puVar4 = (uint *)F_00ab36c0(0x83a);
      if (puVar4 == (uint *)0x0) {
        puVar6 = &REFG(undefined, 0x10bed56);
      }
      else {
        puVar6 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x34)),puVar6,REFG(undefined4, 0x108cc50));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x34)),((undefined4 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x34)));
      ((uint *)(gen_frame + 0x8))[0] = F_0042a990(((undefined1 *)(gen_frame + 0x88)));
      F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x2c)),2,(uint)*(byte *)((int)this + 0x13a),
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2a4) + 0x68))),((uint *)(gen_frame + 0x8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)));
      F_00492c50(((undefined4 *)(gen_frame + 0x14)));
      uVar9 = F_00429760(((undefined4 *)(gen_frame + 0x14))[0],8,0x2c4);
      uVar3 = (uint)uVar9;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_008fa120 */
uint F_008fa120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8fa120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  int iVar1;
  byte bVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint * puVar8;
  undefined * pvVar9;
  char * pcVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5);
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b9a0(uVar6);
  iVar3 = *(int *)(uVar5 + 8);
  iVar1 = param_1 + *(int *)((int)this + 400) * 0x28;
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x20 + iVar1 * 4)));
  (*(uint *)(gen_frame + 0x14)) = uVar5 & 0xf;
  uVar11 = (int)uVar5 >> 4 & 0xf;
  uVar13 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar6 + 4) + 0x20))) + iVar1 * 4)));
  uVar6 = F_00ab3ee0((int)uVar5 >> 0x10 & 0xffff);
  if (uVar6 == 0) {
    (*(uint *)(gen_frame + 0x10)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x10)) = (uint)*(byte *)(uVar6 + 8);
  }
  uVar6 = F_0055dcb0();
  piVar4 = *(int * PTR32 *)(uVar6 + 0x30);
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)F_004296a0(8,0,0x2c4);
  if ((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) {
    *(*(int * PTR32 *)(gen_frame + 0x18)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x18))[1] = 0;
  }
  *(*(int * PTR32 *)(gen_frame + 0x18)) = (int)&(*(int * PTR32 *)(gen_frame + 0x18));
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x30)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x18)));
  uVar6 = F_0042cc20(((undefined1 *)(gen_frame + 0x84)),uVar13,REFG(undefined4, 0x108cc50));
  ((uint *)(gen_frame + 0xd8))[1] = 0;
  (*(uint * PTR32 *)(gen_frame + 0xe0)) = (undefined4 *)0x0;
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xe4)) + 0)) = 0xff;
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xe4)) + 0)) = -1;
  F_00490f90(((uint *)(gen_frame + 0xd8)) + 1,uVar6);
  if ((*(uint *)(gen_frame + 0x20)) <= (*(int *)(gen_frame + 0x28)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x18)),1);
  }
  uVar6 = (*(int *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x24));
  if ((*(uint *)(gen_frame + 0x20)) <= uVar6) {
    uVar6 = uVar6 - (*(uint *)(gen_frame + 0x20));
  }
  if (*(int *)((*(int *)(gen_frame + 0x1c)) + uVar6 * 4) == 0) {
    uVar7 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x1c)) + uVar6 * 4) = uVar7;
  }
  pvVar9 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x1c)) + uVar6 * 4);
  if (pvVar9 != (undefined *)0x0) {
    F_00492f50(pvVar9,((uint *)(gen_frame + 0xd8)) + 1);
  }
  (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
  if ((*(uint * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
    if (((char)(*(int *)(gen_frame + 0xe4)) != '\0') && ((char)(*(int *)(gen_frame + 0xe4)) == '\x01')) {
      pvVar9 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xe0));
      *(int *)((int)pvVar9 + 0x54) = *(int *)((int)pvVar9 + 0x54) + -1;
      if (*(int *)((int)pvVar9 + 0x54) < 1) {
        F_0042c880(pvVar9);
        F_00406ad0(pvVar9);
      }
    }
    (*(uint * PTR32 *)(gen_frame + 0xe0)) = (undefined4 *)0x0;
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xe4)) + 0)) = 0xff;
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xe4)) + 0)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x84)));
  uVar6 = (*(uint *)(gen_frame + 0x10));
  if ((int)(*(uint *)(gen_frame + 0x10)) < 1) {
    uVar6 = 1;
  }
  ((uint *)(gen_frame + 0xd8))[1] = 0;
  ((uint *)(gen_frame + 0xd8))[1] = uVar6;
  (*(uint * PTR32 *)(gen_frame + 0xe0)) = ((uint *)(gen_frame + 0xd8)) + 1;
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xe4)) + 0)) = 0;
  (*(int *)(gen_frame + 0xe4)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0xe4)), 1, 3) << 8;
  if ((*(uint *)(gen_frame + 0x20)) <= (*(int *)(gen_frame + 0x28)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x18)),1);
  }
  uVar6 = (*(int *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x24));
  if ((*(uint *)(gen_frame + 0x20)) <= uVar6) {
    uVar6 = uVar6 - (*(uint *)(gen_frame + 0x20));
  }
  if (*(int *)((*(int *)(gen_frame + 0x1c)) + uVar6 * 4) == 0) {
    uVar7 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x1c)) + uVar6 * 4) = uVar7;
  }
  pvVar9 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x1c)) + uVar6 * 4);
  if (pvVar9 != (undefined *)0x0) {
    F_00492f50(pvVar9,((uint *)(gen_frame + 0xd8)) + 1);
  }
  (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0xe0)) != (uint *)0x0) && ((char)(*(int *)(gen_frame + 0xe4)) != '\0')) && ((char)(*(int *)(gen_frame + 0xe4)) == '\x01')) {
    pvVar9 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xe0));
    *(int *)((int)pvVar9 + 0x54) = *(int *)((int)pvVar9 + 0x54) + -1;
    if (*(int *)((int)pvVar9 + 0x54) < 1) {
      F_0042c880(pvVar9);
      F_00406ad0(pvVar9);
    }
  }
  puVar8 = (uint *)F_00ab36c0(0x38);
  if (puVar8 == (uint *)0x0) {
    pcVar10 = "";
  }
  else {
    pcVar10 = ((char *)GEN_TOP(((*puVar8 & 0xffffff) + (int)puVar8)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x84)),pcVar10,REFG(undefined4, 0x108cc50));
  ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,((undefined1 *)(gen_frame + 0x84)),&(*(int * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x84)));
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x30)));
  pvVar9 = (undefined *)F_00559ba0(*param_2);
  F_00584110(pvVar9,uVar6);
  pvVar9 = (undefined *)F_00559ba0(param_2[1]);
  if (pvVar9 != (undefined *)0x0) {
    uVar6 = F_00560910((*(uint *)(gen_frame + 0x14)));
    F_00584110(pvVar9,uVar6);
  }
  if ((int)(*(uint *)(gen_frame + 0x14)) < *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x18c)))) {
    uVar13 = 0x11;
  }
  else {
    uVar13 = 0x65;
  }
  F_0059d670((undefined *)param_2[2],uVar13);
  uVar5 = ((int)uVar5 >> 8 & 0xffU) / 0x19;
  if (3 < uVar5) {
    uVar5 = 3;
  }
  ((uint *)(gen_frame + 0xd8))[0] = 0x65;
  ((uint *)(gen_frame + 0xd8))[1] = 0x66;
  (*(uint * PTR32 *)(gen_frame + 0xe0)) = (uint *)0x67;
  (*(int *)(gen_frame + 0xe4)) = 0x68;
  F_0059d670((undefined *)param_2[3],((uint *)(gen_frame + 0xd8))[uVar5]);
  uVar5 = F_0055dcb0();
  F_00560760(((char * PTR32 *)(gen_frame + 0x4)));
  F_00596b10((undefined *)(uVar5 + 0xe0),*(undefined4 *)(param_3 + 0x68));
  if (uVar11 == 4) {
    puVar8 = (uint *)F_00ab36c0(0x3e);
    if (puVar8 == (uint *)0x0) {
      ((char * PTR32 *)(gen_frame + 0x4))[0] = "";
    }
    else {
      ((char * PTR32 *)(gen_frame + 0x4))[0] = ((char *)GEN_TOP(((*puVar8 & 0xffffff) + (int)puVar8)));
    }
    uVar13 = *(undefined4 *)(param_3 + 0x68);
    bVar2 = *(byte *)((int)this + 0x13a);
  }
  else {
    if (uVar11 == 0) goto LAB_008fa5be;
    puVar8 = (uint *)F_00ab36c0(0x3f);
    if (puVar8 == (uint *)0x0) {
      ((char * PTR32 *)(gen_frame + 0x4))[0] = "";
    }
    else {
      ((char * PTR32 *)(gen_frame + 0x4))[0] = ((char *)GEN_TOP(((*puVar8 & 0xffffff) + (int)puVar8)));
    }
    uVar13 = *(undefined4 *)(param_3 + 0x68);
    bVar2 = *(byte *)((int)this + 0x13a);
  }
  F_00590ad0((undefined *)(uVar5 + 0xe0),2,(uint)bVar2,uVar13,((char * PTR32 *)(gen_frame + 0x4)));
LAB_008fa5be: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x30)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x18)));
  uVar12 = F_00429760((*(int * PTR32 *)(gen_frame + 0x18)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return (uint)uVar12;
}

/* ref: FUN_008fa600 */
uint F_008fa600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8fa600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  uVar3 = F_0055dcb0();
  piVar1 = *(int * PTR32 *)(uVar3 + 0x30);
  F_0042b630(((undefined1 *)(gen_frame + 0x78)));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)F_004296a0(8,0,0x2c4);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != (undefined4 *)0x0) {
    *(*(undefined4 * PTR32 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0xc))[1] = 0;
  }
  *(*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  uVar7 = param_2 + 1;
  uVar3 = param_1 + 1;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0xcc)) = 0;
  (*(uint *)(gen_frame + 0xcc)) = uVar3;
  (*(uint * PTR32 *)(gen_frame + 0xd0)) = &(*(uint *)(gen_frame + 0xcc));
  (*(char *)(gen_frame + 0xd4)) = '\0';
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),1);
  }
  uVar8 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar8) {
    uVar8 = uVar8 - (*(uint *)(gen_frame + 0x14));
  }
  if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4) == 0) {
    uVar4 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4) = uVar4;
  }
  pvVar2 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4);
  if (pvVar2 != (undefined *)0x0) {
    F_00492f50(pvVar2,&(*(uint *)(gen_frame + 0xcc)));
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0xd0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0xd4)) != '\0')) && ((*(char *)(gen_frame + 0xd4)) == '\x01')) {
    pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xd0));
    *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
    if (*(int *)((int)pvVar2 + 0x54) < 1) {
      F_0042c880(pvVar2);
      F_00406ad0(pvVar2);
    }
  }
  (*(uint *)(gen_frame + 0xcc)) = 0;
  (*(uint *)(gen_frame + 0xcc)) = uVar7;
  (*(uint * PTR32 *)(gen_frame + 0xd0)) = &(*(uint *)(gen_frame + 0xcc));
  (*(char *)(gen_frame + 0xd4)) = '\0';
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),1);
  }
  uVar8 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar8) {
    uVar8 = uVar8 - (*(uint *)(gen_frame + 0x14));
  }
  if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4) == 0) {
    uVar4 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4) = uVar4;
  }
  pvVar2 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4);
  if (pvVar2 != (undefined *)0x0) {
    F_00492f50(pvVar2,&(*(uint *)(gen_frame + 0xcc)));
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0xd0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0xd4)) != '\0')) && ((*(char *)(gen_frame + 0xd4)) == '\x01')) {
    pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xd0));
    *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
    if (*(int *)((int)pvVar2 + 0x54) < 1) {
      F_0042c880(pvVar2);
      F_00406ad0(pvVar2);
    }
  }
  F_0042aca0(((undefined1 *)(gen_frame + 0x78)));
  puVar5 = (uint *)F_00ab36c0(0x25);
  if (puVar5 == (uint *)0x0) {
    pcVar6 = "";
  }
  else {
    pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x24)),pcVar6,REFG(undefined4, 0x108cc50));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x24)),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x78)));
  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x78)));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x214),uVar8);
  uVar8 = F_00ab36f0(param_1);
  if (uVar8 != 0) {
    uVar3 = (uint)*(byte *)(uVar8 + param_2 * 2);
    uVar7 = (uint)*(byte *)(uVar8 + 1 + param_2 * 2);
  }
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0xcc)) = 0;
  (*(uint *)(gen_frame + 0xcc)) = uVar3;
  (*(uint * PTR32 *)(gen_frame + 0xd0)) = &(*(uint *)(gen_frame + 0xcc));
  (*(char *)(gen_frame + 0xd4)) = '\0';
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),1);
  }
  uVar3 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar3) {
    uVar3 = uVar3 - (*(uint *)(gen_frame + 0x14));
  }
  if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) == 0) {
    uVar8 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) = uVar8;
  }
  pvVar2 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4);
  if (pvVar2 != (undefined *)0x0) {
    F_00492f50(pvVar2,&(*(uint *)(gen_frame + 0xcc)));
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0xd0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0xd4)) != '\0')) && ((*(char *)(gen_frame + 0xd4)) == '\x01')) {
    pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xd0));
    *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
    if (*(int *)((int)pvVar2 + 0x54) < 1) {
      F_0042c880(pvVar2);
      F_00406ad0(pvVar2);
    }
  }
  (*(uint *)(gen_frame + 0xcc)) = 0;
  (*(uint *)(gen_frame + 0xcc)) = uVar7;
  (*(uint * PTR32 *)(gen_frame + 0xd0)) = &(*(uint *)(gen_frame + 0xcc));
  (*(char *)(gen_frame + 0xd4)) = '\0';
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),1);
  }
  uVar3 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar3) {
    uVar3 = uVar3 - (*(uint *)(gen_frame + 0x14));
  }
  if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) == 0) {
    uVar7 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) = uVar7;
  }
  pvVar2 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4);
  if (pvVar2 != (undefined *)0x0) {
    F_00492f50(pvVar2,&(*(uint *)(gen_frame + 0xcc)));
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0xd0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0xd4)) != '\0')) && ((*(char *)(gen_frame + 0xd4)) == '\x01')) {
    pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xd0));
    *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
    if (*(int *)((int)pvVar2 + 0x54) < 1) {
      F_0042c880(pvVar2);
      F_00406ad0(pvVar2);
    }
  }
  F_0042aca0(((undefined1 *)(gen_frame + 0x78)));
  puVar5 = (uint *)F_00ab36c0(0x26);
  if (puVar5 == (uint *)0x0) {
    pcVar6 = "";
  }
  else {
    pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x24)),pcVar6,REFG(undefined4, 0x108cc50));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x24)),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x78)));
  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x78)));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x218),uVar3);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x0;
  uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x78)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar9;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf2 */
uint F_008faae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8faae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  ushort uVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(uint *)(gen_frame + 0xf8)) = uVar3;
  if ((short)param_1 == 0x21) {
    if (*(int *)(this + 0x184) != 0) {
      uVar3 = F_0055dcb0();
      piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),*(undefined4 *)(this + 0x184));
      if (piVar4 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return uVar3;
      }
    }
    uVar3 = F_0055dcb0();
    piVar4 = *(int * PTR32 *)(uVar3 + 0x30);
    F_0042b630(((undefined1 *)(gen_frame + 0x80)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)0x0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)F_004296a0(8,0,0x2c4);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x14)) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x14))[1] = 0;
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0x14)) = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xd8)) = &(*(undefined4 *)(gen_frame + 0xd4));
    (*(undefined4 *)(gen_frame + 0xd4)) = 0;
    (*(undefined4 *)(gen_frame + 0xd4)) = *(undefined4 *)(this + 0x1dc);
    (*(char *)(gen_frame + 0xdc)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0xd4)));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xd8)) != (undefined4 *)0x0) {
      if (((*(char *)(gen_frame + 0xdc)) != '\0') && ((*(char *)(gen_frame + 0xdc)) == '\x01')) {
        pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0xd8));
        *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
        if (*(int *)((int)pvVar2 + 0x54) < 1) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xd8)) = (undefined4 *)0x0;
      (*(char *)(gen_frame + 0xdc)) = -1;
    }
    (*(int *)(gen_frame + 0xec)) = 0;
    (*(int *)(gen_frame + 0xec)) = *(int *)(this + 0x1e0) + 1;
    (*(int * PTR32 *)(gen_frame + 0xf0)) = &(*(int *)(gen_frame + 0xec));
    (*(char *)(gen_frame + 0xf4)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0xec)));
    if ((*(int * PTR32 *)(gen_frame + 0xf0)) != (int *)0x0) {
      if (((*(char *)(gen_frame + 0xf4)) != '\0') && ((*(char *)(gen_frame + 0xf4)) == '\x01')) {
        pvVar2 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xf0));
        *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
        if (*(int *)((int)pvVar2 + 0x54) < 1) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
        }
      }
      (*(int * PTR32 *)(gen_frame + 0xf0)) = (int *)0x0;
      (*(char *)(gen_frame + 0xf4)) = -1;
    }
    (*(int *)(gen_frame + 0xe0)) = 0;
    (*(int *)(gen_frame + 0xe0)) = *(int *)(param_4 + 8) + 1;
    (*(int * PTR32 *)(gen_frame + 0xe4)) = &(*(int *)(gen_frame + 0xe0));
    (*(char *)(gen_frame + 0xe8)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0xe0)));
    if ((*(int * PTR32 *)(gen_frame + 0xe4)) != (int *)0x0) {
      if (((*(char *)(gen_frame + 0xe8)) != '\0') && ((*(char *)(gen_frame + 0xe8)) == '\x01')) {
        pvVar2 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xe4));
        *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
        if (*(int *)((int)pvVar2 + 0x54) < 1) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
        }
      }
      (*(int * PTR32 *)(gen_frame + 0xe4)) = (int *)0x0;
      (*(char *)(gen_frame + 0xe8)) = -1;
    }
    uVar6 = REFG(undefined4, 0x108cc50);
    uVar3 = F_0042a990(this + 0x188);
    F_0042cc20(((undefined1 *)(gen_frame + 0x2c)),uVar3,uVar6);
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,((undefined1 *)(gen_frame + 0x2c)),&(*(undefined4 * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x80)));
    F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
    (*(uint *)(gen_frame + 0x10)) = F_0042a990(((undefined1 *)(gen_frame + 0x80)));
    uVar1 = *(ushort *)(this + 0xf6);
    (*(undefined4 *)(gen_frame + 0xc)) = 6;
    uVar3 = F_0055dcb0();
    uVar3 = F_0093c570(*(undefined * PTR32 *)(uVar3 + 0x14),"CharaMakeDataInputString",1,&(*(undefined4 *)(gen_frame + 0xc)),uVar1 & 0xf
                         ,0);
    *(uint *)(this + 0x184) = uVar3;
    uVar3 = F_0055dcb0();
    uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),*(undefined4 *)(this + 0x184));
    if (uVar3 != 0) {
      *(undefined * PTR32 *)(uVar3 + 0x18c) = this;
    }
    F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)0x0;
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x80)));
    uVar3 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar3;
}

/* ref: FUN_008fadc0 */
uint F_008fadc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8fadc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  undefined * pvVar6;
  char * pcVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = param_2;
  uVar3 = F_0055dcb0();
  (*(int * PTR32 *)(gen_frame + 0x20)) = *(int * PTR32 *)(uVar3 + 0x30);
  uVar3 = F_00aca810(&REFG(undefined, 0x148a590));
  if ((uVar3 != 0) && (uVar3 != 0xfffffff0)) {
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)F_004296a0(8,0,0x2c4);
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
      *(*(int * PTR32 *)(gen_frame + 0x8)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x8))[1] = 0;
    }
    *(*(int * PTR32 *)(gen_frame + 0x8)) = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
    bVar1 = *(byte *)(uVar3 + 0x14);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(bool *)(gen_frame + 0x2b)) = bVar1 != 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0x2c)),"",REFG(undefined4, 0x108cc50));
    if ((*(bool *)(gen_frame + 0x2b)) != false) {
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
      bVar2 = *(byte *)(uVar3 + 0x11);
      (*(uint *)(gen_frame + 0x17c)) = 0;
      (*(uint *)(gen_frame + 0x17c)) = (uint)bVar1;
      (*(uint * PTR32 *)(gen_frame + 0x180)) = &(*(uint *)(gen_frame + 0x17c));
      (*(char *)(gen_frame + 0x184)) = '\0';
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x17c)));
      if ((((*(uint * PTR32 *)(gen_frame + 0x180)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x184)) != '\0')) && ((*(char *)(gen_frame + 0x184)) == '\x01')) {
        pvVar6 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x180));
        *(int *)((int)pvVar6 + 0x54) = *(int *)((int)pvVar6 + 0x54) + -1;
        if (*(int *)((int)pvVar6 + 0x54) < 1) {
          F_0042c880(pvVar6);
          F_00406ad0(pvVar6);
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x180)) = &(*(uint *)(gen_frame + 0x17c));
      (*(uint *)(gen_frame + 0x17c)) = 0;
      (*(uint *)(gen_frame + 0x17c)) = bVar2 + 1;
      (*(char *)(gen_frame + 0x184)) = '\0';
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x17c)));
      if ((((*(uint * PTR32 *)(gen_frame + 0x180)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x184)) != '\0')) && ((*(char *)(gen_frame + 0x184)) == '\x01')) {
        pvVar6 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x180));
        *(int *)((int)pvVar6 + 0x54) = *(int *)((int)pvVar6 + 0x54) + -1;
        if (*(int *)((int)pvVar6 + 0x54) < 1) {
          F_0042c880(pvVar6);
          F_00406ad0(pvVar6);
        }
      }
      puVar4 = (uint *)F_00ab36c0(0x87f);
      if (puVar4 == (uint *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x128)),pcVar7,REFG(undefined4, 0x108cc50));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x128)),&(*(int * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x2c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x128)));
    }
    uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)));
    pvVar6 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)(gen_frame + 0x24))[2]);
    F_00584110(pvVar6,uVar5);
    F_0042cc20(((undefined1 *)(gen_frame + 0x80)),"",REFG(undefined4, 0x108cc50));
    if ((*(bool *)(gen_frame + 0x2b)) != false) {
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
      (*(uint *)(gen_frame + 0x17c)) = 0;
      (*(uint *)(gen_frame + 0x17c)) = *(uint *)(uVar3 + 0x2c);
      (*(uint * PTR32 *)(gen_frame + 0x180)) = &(*(uint *)(gen_frame + 0x17c));
      (*(char *)(gen_frame + 0x184)) = '\0';
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x17c)));
      if ((((*(uint * PTR32 *)(gen_frame + 0x180)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x184)) != '\0')) && ((*(char *)(gen_frame + 0x184)) == '\x01')) {
        pvVar6 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x180));
        *(int *)((int)pvVar6 + 0x54) = *(int *)((int)pvVar6 + 0x54) + -1;
        if (*(int *)((int)pvVar6 + 0x54) < 1) {
          F_0042c880(pvVar6);
          F_00406ad0(pvVar6);
        }
      }
      puVar4 = (uint *)F_00ab36c0(0x87d);
      if (puVar4 == (uint *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x128)),pcVar7,REFG(undefined4, 0x108cc50));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x128)),&(*(int * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x80)));
      F_0042c880(((undefined1 *)(gen_frame + 0x128)));
    }
    uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x80)));
    pvVar6 = (undefined *)F_00559ba0(*(*(undefined4 * PTR32 *)(gen_frame + 0x24)));
    F_00584110(pvVar6,uVar5);
    F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),"",REFG(undefined4, 0x108cc50));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
    (*(uint *)(gen_frame + 0x17c)) = 0;
    (*(uint *)(gen_frame + 0x17c)) = (int)*(char *)(uVar3 + 0x13c) + 1;
    (*(uint * PTR32 *)(gen_frame + 0x180)) = &(*(uint *)(gen_frame + 0x17c));
    (*(char *)(gen_frame + 0x184)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x17c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x180)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x184)) != '\0')) && ((*(char *)(gen_frame + 0x184)) == '\x01')) {
      pvVar6 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x180));
      *(int *)((int)pvVar6 + 0x54) = *(int *)((int)pvVar6 + 0x54) + -1;
      if (*(int *)((int)pvVar6 + 0x54) < 1) {
        F_0042c880(pvVar6);
        F_00406ad0(pvVar6);
      }
    }
    puVar4 = (uint *)F_00ab36c0(0x87e);
    if (puVar4 == (uint *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x128)),pcVar7,REFG(undefined4, 0x108cc50));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x128)),&(*(int * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xd4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x128)));
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xd4)));
    pvVar6 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)(gen_frame + 0x24))[1]);
    F_00584110(pvVar6,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x80)));
    F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
    uVar8 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
    F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
    return (uint)uVar8;
  }
  pcVar7 = "error";
  pvVar6 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)(gen_frame + 0x24))[2]);
  uVar3 = F_00584110(pvVar6,pcVar7);
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return uVar3;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf2 */
uint F_008fb230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8fb230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  char * pcVar4;
  undefined * puVar5;
  undefined1 * this_00;
  int * PTR32 * this_01;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  if ((short)param_1 != 0x21) goto LAB_008fb78b;
  uVar1 = F_00aca790(&REFG(undefined, 0x148a590),*(undefined4 *)(param_4 + 8));
  param_4 = 0;
  if (uVar1 == 0) goto LAB_008fb78b;
  uVar2 = F_0055dcb0();
  (*(int * PTR32 *)(gen_frame + 0x10)) = *(int * PTR32 *)(uVar2 + 0x30);
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)F_004296a0(8,0,0x2c4);
  if ((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) {
    *(*(int * PTR32 *)(gen_frame + 0x18)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x18))[1] = 0;
  }
  *(*(int * PTR32 *)(gen_frame + 0x18)) = (int)&(*(int * PTR32 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x1d4)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x18)));
  if (*(int *)(uVar1 + 0x138) == 0) {
    if (*(char *)(uVar1 + 0xf4) == '\0') {
      (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)F_00ab36c0(0x878);
      (*(undefined4 *)(gen_frame + 0x258)) = 0;
      (*(undefined4 *)(gen_frame + 0x258)) = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x25c)) = &(*(undefined4 *)(gen_frame + 0x258));
      (*(undefined1 *)(gen_frame + 0x260)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x258)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x258)));
      (*(int *)(gen_frame + 0x288)) = 0;
      (*(int *)(gen_frame + 0x288)) = *(char *)(uVar1 + 0x13c) + 1;
      (*(int * PTR32 *)(gen_frame + 0x28c)) = &(*(int *)(gen_frame + 0x288));
      (*(undefined1 *)(gen_frame + 0x290)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x288)));
      F_004917c0(&(*(int *)(gen_frame + 0x288)));
      (*(uint * PTR32 *)(gen_frame + 0x2b0)) = &(*(uint *)(gen_frame + 0x2ac));
      (*(uint *)(gen_frame + 0x2ac)) = 0;
      (*(uint *)(gen_frame + 0x2ac)) = (uint)*(byte *)(uVar1 + 0x14);
      (*(undefined1 *)(gen_frame + 0x2b4)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x2ac)));
      F_004917c0(&(*(uint *)(gen_frame + 0x2ac)));
      (*(int *)(gen_frame + 0x2a0)) = 0;
      (*(int *)(gen_frame + 0x2a0)) = *(byte *)(uVar1 + 0x11) + 1;
      (*(int * PTR32 *)(gen_frame + 0x2a4)) = &(*(int *)(gen_frame + 0x2a0));
      (*(undefined1 *)(gen_frame + 0x2a8)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x2a0)));
      F_004917c0(&(*(int *)(gen_frame + 0x2a0)));
      if ((*(uint * PTR32 *)(gen_frame + 0x14)) == (uint *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = ((char *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x14)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x14)))));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0xd8)),pcVar4,REFG(undefined4, 0x108cc50));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0xd8)),&(*(int * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x1d4)));
      this_00 = ((undefined1 *)(gen_frame + 0xd8));
    }
    else {
      (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)F_00ab36c0(0x877);
      uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x30)),uVar1 + 0xd4,REFG(undefined4, 0x108cc50));
      (*(undefined4 *)(gen_frame + 0x234)) = 0;
      (*(undefined4 *)(gen_frame + 0x238)) = 0;
      (*(undefined1 *)(gen_frame + 0x23c)) = 0xff;
      F_00490f90(&(*(undefined4 *)(gen_frame + 0x234)),uVar2);
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x234)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x234)));
      F_0042c880(((undefined1 *)(gen_frame + 0x30)));
      F_0042cc20(((undefined1 *)(gen_frame + 0x180)),uVar1 + 0xf4,REFG(undefined4, 0x108cc50));
      F_0042e370(((undefined1 *)(gen_frame + 0x180)),&REFG(undefined, 0x10c3840));
      F_0042e370(((undefined1 *)(gen_frame + 0x180)),uVar1 + 0x114);
      (*(undefined4 *)(gen_frame + 0x228)) = 0;
      (*(undefined4 *)(gen_frame + 0x22c)) = 0;
      (*(undefined1 *)(gen_frame + 0x230)) = 0xff;
      F_00490f90(&(*(undefined4 *)(gen_frame + 0x228)),((undefined1 *)(gen_frame + 0x180)));
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x228)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x228)));
      (*(uint *)(gen_frame + 0x24c)) = 0;
      (*(uint *)(gen_frame + 0x24c)) = (uint)*(byte *)(uVar1 + 0x14);
      (*(uint * PTR32 *)(gen_frame + 0x250)) = &(*(uint *)(gen_frame + 0x24c));
      (*(undefined1 *)(gen_frame + 0x254)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x24c)));
      F_004917c0(&(*(uint *)(gen_frame + 0x24c)));
      (*(int * PTR32 *)(gen_frame + 0x268)) = &(*(int *)(gen_frame + 0x264));
      (*(int *)(gen_frame + 0x264)) = 0;
      (*(int *)(gen_frame + 0x264)) = *(byte *)(uVar1 + 0x11) + 1;
      (*(undefined1 *)(gen_frame + 0x26c)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x264)));
      F_004917c0(&(*(int *)(gen_frame + 0x264)));
      if ((*(uint * PTR32 *)(gen_frame + 0x14)) == (uint *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = ((char *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x14)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x14)))));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x84)),pcVar4,REFG(undefined4, 0x108cc50));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x84)),&(*(int * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x1d4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x84)));
      this_00 = ((undefined1 *)(gen_frame + 0x180));
    }
LAB_008fb6c5: ;
    F_0042c880(this_00);
  }
  else if (*(int *)(uVar1 + 0x138) - 1U < 3) {
    (*(undefined4 *)(gen_frame + 0x294)) = 0;
    (*(undefined4 *)(gen_frame + 0x294)) = *(undefined4 *)(uVar1 + 0x2c);
    (*(undefined4 * PTR32 *)(gen_frame + 0x298)) = &(*(undefined4 *)(gen_frame + 0x294));
    (*(undefined1 *)(gen_frame + 0x29c)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x294)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x294)));
    (*(int *)(gen_frame + 0x27c)) = 0;
    (*(int *)(gen_frame + 0x27c)) = *(char *)(uVar1 + 0x13c) + 1;
    (*(int * PTR32 *)(gen_frame + 0x280)) = &(*(int *)(gen_frame + 0x27c));
    (*(undefined1 *)(gen_frame + 0x284)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x27c)));
    F_004917c0(&(*(int *)(gen_frame + 0x27c)));
    (*(uint * PTR32 *)(gen_frame + 0x274)) = &(*(uint *)(gen_frame + 0x270));
    (*(uint *)(gen_frame + 0x270)) = 0;
    (*(uint *)(gen_frame + 0x270)) = (uint)*(byte *)(uVar1 + 0x14);
    (*(undefined1 *)(gen_frame + 0x278)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x270)));
    F_004917c0(&(*(uint *)(gen_frame + 0x270)));
    (*(int *)(gen_frame + 0x240)) = 0;
    (*(int *)(gen_frame + 0x240)) = *(byte *)(uVar1 + 0x11) + 1;
    (*(int * PTR32 *)(gen_frame + 0x244)) = &(*(int *)(gen_frame + 0x240));
    (*(undefined1 *)(gen_frame + 0x248)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x240)));
    F_004917c0(&(*(int *)(gen_frame + 0x240)));
    puVar3 = (uint *)F_00ab36c0(0x874);
    if (puVar3 == (uint *)0x0) {
      puVar5 = &REFG(undefined, 0x10bf1f1);
    }
    else {
      puVar5 = ((undefined *)GEN_TOP(((*puVar3 & 0xffffff) + (int)puVar3)));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x12c)),puVar5,REFG(undefined4, 0x108cc50));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x12c)),&(*(int * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x1d4)));
    this_00 = ((undefined1 *)(gen_frame + 0x12c));
    goto LAB_008fb6c5;
  }
  (*(uint *)(gen_frame + 0x4)) = F_0042a990(((undefined1 *)(gen_frame + 0x1d4)));
  (*(undefined4 *)(gen_frame + 0x0)) = 6;
  (*(undefined4 *)(gen_frame + 0x8)) = 6;
  (*(int *)(gen_frame + 0xc)) = uVar1 + 0x30;
  uVar1 = F_0055dcb0();
  uVar1 = F_0093c600(*(undefined * PTR32 *)(uVar1 + 0x14),"CharaMakeDataImportDialog",2,&(*(undefined4 *)(gen_frame + 0x0)),5,0);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14),*(undefined4 *)(this + 0x184));
  if (uVar1 != 0) {
    *(undefined * PTR32 *)(uVar1 + 400) = this;
  }
  this_01 = &(*(int * PTR32 *)(gen_frame + 0x10));
  iVar6 = 1;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x1d4)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x18)));
  uVar7 = F_00429760((*(int * PTR32 *)(gen_frame + 0x18)),8,0x2c4);
  param_4 = (uint)uVar7;
LAB_008fb78b: ;
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return param_4;
}

/* ref: FUN_008fb7a0 */
uint F_008fb7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8fb7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x310];
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * puVar7;
  undefined1 * this;
  ulonglong uVar8;
  undefined4 uVar9;
  char * pcVar10;
  
  (*(uint *)(gen_frame + 0x308)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30c);
  uVar3 = F_0055dcb0();
  piVar1 = *(int * PTR32 *)(uVar3 + 0x30);
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar1;
  uVar3 = F_00aca790(&REFG(undefined, 0x148a590),param_1);
  if ((uVar3 == 0) || (uVar3 == 0xfffffff0)) {
    pcVar10 = "error";
    pvVar6 = (undefined *)F_00559ba0(param_2[2]);
    uVar3 = F_00584110(pvVar6,pcVar10);
    F_00c47745((*(uint *)(gen_frame + 0x308)) ^ (uint)(uint)(gen_frame + 0x30c));
    return uVar3;
  }
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)F_004296a0(8,0,0x2c4);
  if ((*(int * PTR32 *)(gen_frame + 0xc)) != (int *)0x0) {
    *(*(int * PTR32 *)(gen_frame + 0xc)) = 0;
    (*(int * PTR32 *)(gen_frame + 0xc))[1] = 0;
  }
  *(*(int * PTR32 *)(gen_frame + 0xc)) = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x278)),&REFG(undefined, 0x10bf1f3),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1d0)),"",REFG(undefined4, 0x108cc50));
  iVar2 = *(int *)(uVar3 + 0x138);
  if (iVar2 == 0) {
    if (*(char *)(uVar3 + 0xf4) != '\0') {
      uVar5 = uVar3 + 0xd4;
      F_0042e430(((undefined1 *)(gen_frame + 0x278)),uVar3 + 0xf4);
      F_0042e370(((undefined1 *)(gen_frame + 0x278)),&REFG(undefined, 0x10c3860));
      F_0042e370(((undefined1 *)(gen_frame + 0x278)),uVar3 + 0x114);
      goto LAB_008fbc49;
    }
    puVar4 = (uint *)F_00ab36c0(0x87a);
    uVar5 = (*puVar4 & 0xffffff) + (int)puVar4;
    (*(uint * PTR32 *)(gen_frame + 0x28)) = (uint *)F_00ab36c0(0x87e);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x2f4)) = &(*(int *)(gen_frame + 0x2f0));
    (*(int *)(gen_frame + 0x2f0)) = 0;
    (*(int *)(gen_frame + 0x2f0)) = *(char *)(uVar3 + 0x13c) + 1;
    (*(undefined1 *)(gen_frame + 0x2f8)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x2f0)));
    F_004917c0(&(*(int *)(gen_frame + 0x2f0)));
    if ((*(uint * PTR32 *)(gen_frame + 0x28)) == (uint *)0x0) {
      puVar7 = &REFG(undefined, 0x10bf209);
    }
    else {
      puVar7 = ((undefined *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x28)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x28)))));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x224)),puVar7,REFG(undefined4, 0x108cc50));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x224)),&(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x278)));
    this = ((undefined1 *)(gen_frame + 0x224));
  }
  else if (iVar2 == 1) {
    puVar4 = (uint *)F_00ab36c0(0x87b);
    uVar5 = (*puVar4 & 0xffffff) + (int)puVar4;
    (*(uint * PTR32 *)(gen_frame + 0x28)) = (uint *)F_00ab36c0(0x87e);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
    (*(int *)(gen_frame + 0x2d8)) = 0;
    (*(int *)(gen_frame + 0x2d8)) = *(char *)(uVar3 + 0x13c) + 1;
    (*(int * PTR32 *)(gen_frame + 0x2dc)) = &(*(int *)(gen_frame + 0x2d8));
    (*(undefined1 *)(gen_frame + 0x2e0)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x2d8)));
    F_004917c0(&(*(int *)(gen_frame + 0x2d8)));
    if ((*(uint * PTR32 *)(gen_frame + 0x28)) == (uint *)0x0) {
      puVar7 = &REFG(undefined, 0x10bf20a);
    }
    else {
      puVar7 = ((undefined *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x28)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x28)))));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x80)),puVar7,REFG(undefined4, 0x108cc50));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x80)),&(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x278)));
    this = ((undefined1 *)(gen_frame + 0x80));
  }
  else if (iVar2 == 2) {
    puVar4 = (uint *)F_00ab36c0(0x87c);
    uVar5 = (*puVar4 & 0xffffff) + (int)puVar4;
    (*(uint * PTR32 *)(gen_frame + 0x28)) = (uint *)F_00ab36c0(0x87e);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x2d0)) = &(*(int *)(gen_frame + 0x2cc));
    (*(int *)(gen_frame + 0x2cc)) = 0;
    (*(int *)(gen_frame + 0x2cc)) = *(char *)(uVar3 + 0x13c) + 1;
    (*(undefined1 *)(gen_frame + 0x2d4)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x2cc)));
    F_004917c0(&(*(int *)(gen_frame + 0x2cc)));
    if ((*(uint * PTR32 *)(gen_frame + 0x28)) == (uint *)0x0) {
      puVar7 = &REFG(undefined, 0x10bf20b);
    }
    else {
      puVar7 = ((undefined *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x28)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x28)))));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x2c)),puVar7,REFG(undefined4, 0x108cc50));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x2c)),&(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x278)));
    this = ((undefined1 *)(gen_frame + 0x2c));
  }
  else {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
    (*(uint *)(gen_frame + 0x2fc)) = 0;
    (*(uint *)(gen_frame + 0x2fc)) = *(uint *)(uVar3 + 0x2c);
    (*(uint * PTR32 *)(gen_frame + 0x300)) = &(*(uint *)(gen_frame + 0x2fc));
    (*(char *)(gen_frame + 0x304)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x2fc)));
    F_004917c0(&(*(uint *)(gen_frame + 0x2fc)));
    puVar4 = (uint *)F_00ab36c0(0x87d);
    if (puVar4 == (uint *)0x0) {
      puVar7 = &REFG(undefined, 0x10bf217);
    }
    else {
      puVar7 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x128)),puVar7,REFG(undefined4, 0x108cc50));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x128)),&(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x1d0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x128)));
    uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x1d0)));
    (*(uint * PTR32 *)(gen_frame + 0x28)) = (uint *)F_00ab36c0(0x87e);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
    (*(int *)(gen_frame + 0x2e4)) = 0;
    (*(int *)(gen_frame + 0x2e4)) = *(char *)(uVar3 + 0x13c) + 1;
    (*(int * PTR32 *)(gen_frame + 0x2e8)) = &(*(int *)(gen_frame + 0x2e4));
    (*(undefined1 *)(gen_frame + 0x2ec)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x2e4)));
    F_004917c0(&(*(int *)(gen_frame + 0x2e4)));
    if ((*(uint * PTR32 *)(gen_frame + 0x28)) == (uint *)0x0) {
      puVar7 = &REFG(undefined, 0x10bf222);
    }
    else {
      puVar7 = ((undefined *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x28)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x28)))));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),puVar7,REFG(undefined4, 0x108cc50));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0xd4)),&(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x278)));
    this = ((undefined1 *)(gen_frame + 0xd4));
  }
  F_0042c880(this);
LAB_008fbc49: ;
  pvVar6 = (undefined *)F_00559ba0(*param_2);
  F_00584110(pvVar6,uVar5);
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x278)));
  pvVar6 = (undefined *)F_00559ba0(param_2[1]);
  F_00584110(pvVar6,uVar5);
  F_0042cc20(((undefined1 *)(gen_frame + 0x17c)),&REFG(undefined, 0x10bf223),REFG(undefined4, 0x108cc50));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0x2fc)) = 0;
  (*(uint *)(gen_frame + 0x2fc)) = (uint)*(byte *)(uVar3 + 0x14);
  (*(uint * PTR32 *)(gen_frame + 0x28)) = (uint *)(uint)*(byte *)(uVar3 + 0x11);
  (*(uint * PTR32 *)(gen_frame + 0x300)) = &(*(uint *)(gen_frame + 0x2fc));
  (*(char *)(gen_frame + 0x304)) = '\0';
  F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x2fc)));
  if ((((*(uint * PTR32 *)(gen_frame + 0x300)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x304)) != '\0')) && ((*(char *)(gen_frame + 0x304)) == '\x01')) {
    pvVar6 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x300));
    *(int *)((int)pvVar6 + 0x54) = *(int *)((int)pvVar6 + 0x54) + -1;
    if (*(int *)((int)pvVar6 + 0x54) < 1) {
      F_0042c880(pvVar6);
      F_00406ad0(pvVar6);
    }
  }
  (*(uint * PTR32 *)(gen_frame + 0x300)) = &(*(uint *)(gen_frame + 0x2fc));
  (*(uint *)(gen_frame + 0x2fc)) = 0;
  (*(uint *)(gen_frame + 0x2fc)) = (int)(*(uint * PTR32 *)(gen_frame + 0x28)) + 1;
  (*(char *)(gen_frame + 0x304)) = '\0';
  F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x2fc)));
  if ((((*(uint * PTR32 *)(gen_frame + 0x300)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x304)) != '\0')) && ((*(char *)(gen_frame + 0x304)) == '\x01')) {
    pvVar6 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x300));
    *(int *)((int)pvVar6 + 0x54) = *(int *)((int)pvVar6 + 0x54) + -1;
    if (*(int *)((int)pvVar6 + 0x54) < 1) {
      F_0042c880(pvVar6);
      F_00406ad0(pvVar6);
    }
  }
  puVar4 = (uint *)F_00ab36c0(0x87f);
  if (puVar4 == (uint *)0x0) {
    puVar7 = &REFG(undefined, 0x10bf22b);
  }
  else {
    puVar7 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x224)),puVar7,REFG(undefined4, 0x108cc50));
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x224)),&(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x17c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x224)));
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x17c)));
  pvVar6 = (undefined *)F_00559ba0(param_2[2]);
  F_00584110(pvVar6,uVar5);
  if (*(char *)(uVar3 + 0x30) == '\0') {
    uVar9 = 0x66;
  }
  else {
    uVar9 = 0x65;
  }
  F_0059d670((undefined *)param_2[3],uVar9);
  F_0042c880(((undefined1 *)(gen_frame + 0x17c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x278)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  uVar8 = F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x308)) ^ (uint)(uint)(gen_frame + 0x30c));
  return (uint)uVar8;
}

/* ref: FUN_008fbe70 */
uint F_008fbe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8fbe70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  double dVar1;
  uint uVar2;
  uint * puVar3;
  undefined * puVar4;
  int iVar5;
  float10 fVar6;
  ulonglong uVar7;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if (((*(int *)((int)this + 0x180) == 0) || ((*(byte *)((int)this + 0xf9) & 1) == 0)) ||
     (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x38))))(*(int * PTR32 *)((int)this + 0x180)),
     uVar2 != 0xc9)) goto LAB_008fc17b;
  iVar5 = *(int *)((int)this + 0x180);
  uVar2 = F_007c6400(iVar5);
  iVar5 = *((int *)GEN_TOP((*(int *)(iVar5 + 4) + 0x180)));
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x398);
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x1a8);
    }
  }
  uVar2 = uVar2 - 1;
  (*(int *)(gen_frame + 0x2c)) = 0;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 1: ;
    (*(int *)(gen_frame + 0x2c)) = (-(uint)(iVar5 != 0) & 0xfffffff5) + 0xaf;
    break;
  case 2: ;
  case 3: ;
    (*(int *)(gen_frame + 0x2c)) = (-(uint)(iVar5 != 0) & 0xfffffff5) + 0xca;
    break;
  case 4: ;
  case 5: ;
    (*(int *)(gen_frame + 0x2c)) = 0x5c;
    goto switchD_008fbf06_default;
  case 6: ;
  case 7: ;
    (*(int *)(gen_frame + 0x2c)) = (-(uint)(iVar5 != 0) & 0xffffffed) + 0xaf;
    break;
  case 8: ;
  case 9: ;
    (*(int *)(gen_frame + 0x2c)) = (-(uint)(iVar5 != 0) & 0xffffffe2) + 0xde;
    break;
  default: ;
    goto switchD_008fbf06_default;
  }
switchD_008fbf06_default: ;
  if (REFG(int, 0x137129c) == 0) {
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  }
  else {
    fVar6 = F_006b3220(*(undefined4 *)(REFG(int, 0x137129c) + 0x24),(uVar2 >> 1) + 1,iVar5,uVar2 & 1,1,
                         param_1);
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
  }
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(int * PTR32 *)(gen_frame + 0x24)),*(undefined4 *)(uVar2 + 0x14));
  if (((*(int * PTR32 *)(gen_frame + 0x24)) == (int *)0x1) && (*(char *)(REFG(int, 0x137104c) + 0x1d) == '\x02')) {
    (*(char *)(gen_frame + 0x33)) = '\x01';
    fVar6 = ((float10)(*(int *)(gen_frame + 0x2c)) * (float10)(*(float *)(gen_frame + 0x28))) / (float10)*(double *)&REFG(undefined, 0x10da8d0);
  }
  else {
    (*(char *)(gen_frame + 0x33)) = '\0';
    fVar6 = (float10)(*(int *)(gen_frame + 0x2c)) * (float10)(*(float *)(gen_frame + 0x28));
  }
  (*(float *)(gen_frame + 0x28)) = (float)fVar6;
  dVar1 = (double)(float)fVar6 * REFG(double, 0x10944b8);
  uVar2 = F_0055dcb0();
  (*(int * PTR32 *)(gen_frame + 0x24)) = *(int * PTR32 *)(uVar2 + 0x30);
  puVar3 = (uint *)F_00ab36c0(0x10e);
  F_004816e0(((undefined4 *)(gen_frame + 0x8)));
  F_0042b630(((undefined1 *)(gen_frame + 0x88)));
  F_00492c50(((undefined4 *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0xdc)) = 0;
  (*(uint *)(gen_frame + 0xdc)) = (int)fVar6;
  (*(uint * PTR32 *)(gen_frame + 0xe0)) = &(*(uint *)(gen_frame + 0xdc));
  (*(undefined1 *)(gen_frame + 0xe4)) = 0;
  F_00493bc0(((undefined4 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0xdc)));
  F_004917c0(&(*(uint *)(gen_frame + 0xdc)));
  (*(uint *)(gen_frame + 0xdc)) = 0;
  (*(uint *)(gen_frame + 0xdc)) = (int)dVar1 % 10;
  (*(uint * PTR32 *)(gen_frame + 0xe0)) = &(*(uint *)(gen_frame + 0xdc));
  (*(undefined1 *)(gen_frame + 0xe4)) = 0;
  F_00493bc0(((undefined4 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0xdc)));
  F_004917c0(&(*(uint *)(gen_frame + 0xdc)));
  (*(uint * PTR32 *)(gen_frame + 0xe0)) = &(*(uint *)(gen_frame + 0xdc));
  (*(uint *)(gen_frame + 0xdc)) = 0;
  (*(undefined1 *)(gen_frame + 0xe4)) = 0;
  (*(uint *)(gen_frame + 0xdc)) = (uint)((*(char *)(gen_frame + 0x33)) != '\0');
  F_00493b50(((undefined4 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0xdc)));
  F_004917c0(&(*(uint *)(gen_frame + 0xdc)));
  if (puVar3 == (uint *)0x0) {
    puVar4 = &REFG(undefined, 0x10bf26e);
  }
  else {
    puVar4 = ((undefined *)GEN_TOP(((*puVar3 & 0xffffff) + (int)puVar3)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x34)),puVar4,REFG(undefined4, 0x108cc50));
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x34)),((undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x88)));
  F_0042c880(((undefined1 *)(gen_frame + 0x34)));
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x88)));
  F_00584110(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x194),uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x88)));
  F_00492c50(((undefined4 *)(gen_frame + 0x8)));
  uVar7 = F_00429760(((undefined4 *)(gen_frame + 0x8))[0],8,0x2c4);
  uVar2 = (uint)uVar7;
LAB_008fc17b: ;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar2;
}

/* ref: FUN_008fc1c0 */
uint F_008fc1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8fc1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)this + 0x3c0) != *((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x838)))) {
    if (*(int *)((int)this + 0x3b8) != 0) {
      F_00406b30(*(int *)((int)this + 0x3b8));
      *(undefined4 *)((int)this + 0x3b8) = 0;
    }
    if (*(int *)((int)this + 0x3bc) != 0) {
      F_00406b30(*(int *)((int)this + 0x3bc));
      *(undefined4 *)((int)this + 0x3bc) = 0;
    }
    *(undefined4 *)((int)this + 0x3c0) = 0xffffffff;
    uVar6 = 0;
    *(undefined4 *)((int)this + 0x3c0) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + 0x838)));
    uVar2 = F_00404270();
    lVar1 = (ulonglong)*(uint *)((int)this + 0x3c0) * 2;
    uVar2 = F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,uVar6);
    uVar6 = 0;
    *(uint *)((int)this + 0x3b8) = uVar2;
    uVar2 = F_00404270();
    lVar1 = (ulonglong)*(uint *)((int)this + 0x3c0) * 2;
    uVar2 = F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,uVar6);
    *(uint *)((int)this + 0x3bc) = uVar2;
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x3c0)) {
    do {
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x3b8) + iVar3 * 2))) = 0xffff;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x3bc) + iVar3 * 2))) = 0xffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x3c0));
  }
  uVar4 = F_00ab0410();
  iVar3 = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined2 *)(gen_frame + 0xb4)) = 0;
  (*(undefined1 *)(gen_frame + 0xb6)) = 0;
  uVar2 = uVar4;
  if (0 < (int)uVar4) {
    do {
      uVar2 = F_00ab3c90(iVar3);
      if ((uVar2 != 0) && (*(char *)(uVar2 + 10) != '\0')) {
        F_0042b630(((undefined1 *)(gen_frame + 0x58)));
        F_008f3410(this,uVar2 + 4,((undefined1 *)(gen_frame + 0x58)));
        uVar6 = REFG(undefined4, 0x108cc50);
        uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x58)));
        F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar2,uVar6);
        uVar2 = F_00433820(*(undefined * PTR32 *)((int)this + 0x28),((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xac)));
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        if (-1 < (int)uVar2) {
          *((short *)GEN_TOP((*(int *)((int)this + 0x3bc) + uVar2 * 2))) = (short)iVar3;
        }
        uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x58)));
        uVar2 = (uint)uVar5;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar2;
}

/* ref: FUN_008fc390 */
uint F_008fc390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8fc390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined * PTR32 * ppuVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  F_005d29e0((undefined *)((int)this + 0x4c),0x261);
  F_009709a0((undefined *)((int)this + 0x3c),0x1c2);
  (*(char *)(gen_frame + 0x11c)) = '\0';
  (*(undefined1 *)(gen_frame + 0x11d)) = 0;
  (*(char *)(gen_frame + 0x11e)) = '\0';
  (*(undefined1 *)(gen_frame + 0x11f)) = 0;
  (*(undefined1 *)(gen_frame + 0x120)) = 0;
  (*(undefined1 *)(gen_frame + 0x121)) = 0;
  (*(undefined1 *)(gen_frame + 0x122)) = 0;
  (*(undefined1 *)(gen_frame + 0x123)) = 0;
  (*(undefined2 *)(gen_frame + 0x124)) = 0;
  (*(undefined1 *)(gen_frame + 0x126)) = 0;
  uVar3 = F_00ab0410();
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x4c);
  F_005a2710(pvVar4,4);
  *(uint *)((int)pvVar4 + 4) = (uint)((char)param_1 != '\0');
  cVar1 = *(char *)((int)this + 0x34);
  iVar9 = *(int *)((int)this + 0x4c);
  F_005a2710((undefined *)(iVar9 + 8),4);
  *(uint *)(iVar9 + 0xc) = (uint)(cVar1 != '\0');
  cVar1 = *(char *)((int)this + 0x35);
  iVar9 = *(int *)((int)this + 0x4c);
  F_005a2710((undefined *)(iVar9 + 0x18),4);
  *(uint *)(iVar9 + 0x1c) = (uint)(cVar1 != '\0');
  cVar1 = *(char *)((int)this + 0x38);
  iVar9 = *(int *)((int)this + 0x4c);
  F_005a2710((undefined *)(iVar9 + 0x10),4);
  *(uint *)(iVar9 + 0x14) = (uint)(cVar1 != '\0');
  iVar9 = *(int *)((int)this + 0x4c);
  F_005a2710((undefined *)(iVar9 + 0x20),4);
  uVar12 = 0;
  uVar11 = 0;
  *(uint *)(iVar9 + 0x24) = (uint)((char)param_2 != '\0');
  iVar9 = *(int *)((int)this + 0x4c);
  if (*(char *)((int)this + 0x35) == '\0') {
    uVar10 = 0x144e;
  }
  else {
    uVar10 = 0x144d;
  }
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar4,uVar10,uVar11,uVar12);
  F_005a2710((undefined *)(iVar9 + 0x28),6);
  *(uint *)(iVar9 + 0x2c) = uVar5;
  iVar9 = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  if ((char)param_1 == '\0') {
    if ((*(char *)((int)this + 0x36) != '\0') || (*(char *)((int)this + 0x35) != '\0')) {
      iVar6 = *(int *)((int)this + 0x150);
      iVar2 = *(int *)((int)this + 0x4c);
      iVar9 = iVar6 * 4 + 9;
      F_005a2710((undefined *)(iVar2 + 0x30),4);
      *(int *)(iVar2 + 0x34) = iVar6;
      iVar2 = *(int *)((int)this + 0x4c);
      uVar11 = *(undefined4 *)((int)this + 0x154);
      F_005a2710((undefined *)(iVar2 + 0x38),4);
      *(undefined4 *)(iVar2 + 0x3c) = uVar11;
      pvVar4 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + 0x10 + iVar9 * 8)));
      uVar3 = F_0042a990((iVar6 * 3 + 1) * 0x54 + *(int *)((int)this + 0x3c));
      F_005a2710(pvVar4,6);
      *(uint *)((int)pvVar4 + 4) = uVar3;
      pvVar4 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + 0x18 + iVar9 * 8)));
      uVar3 = F_0042a990((iVar6 * 3 + 2) * 0x54 + *(int *)((int)this + 0x3c));
      F_005a2710(pvVar4,6);
      *(uint *)((int)pvVar4 + 4) = uVar3;
      *(undefined1 *)((int)this + 0x36) = 0;
    }
  }
  else {
    iVar6 = 0;
    if (0 < *(int *)((int)this + 0x3c0)) {
      do {
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x3b8) + iVar6 * 2))) = 0xffff;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)((int)this + 0x3c0));
    }
    (*(int *)(gen_frame + 0x4)) = 0;
    if (0 < (int)uVar3) {
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)((int)this + 0x15c);
      (*(int *)(gen_frame + 0x8)) = 0;
      (*(int *)(gen_frame + 0xc)) = 0x48;
      do {
        uVar5 = F_00ab3c90((*(int *)(gen_frame + 0x4)));
        if ((uVar5 != 0) && ((uint)*(byte *)(uVar5 + 10) == *(uint *)((int)this + 0x30))) {
          F_0042b630(((undefined1 *)(gen_frame + 0xc8)));
          F_008f3410(this,uVar5 + 4,((undefined1 *)(gen_frame + 0xc8)));
          uVar11 = REFG(undefined4, 0x108cc50);
          uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0xc8)));
          F_0042cc20(((undefined1 *)(gen_frame + 0x20)),uVar7,uVar11);
          uVar7 = F_00433820(*(undefined * PTR32 *)((int)this + 0x28),((undefined1 *)(gen_frame + 0x20)),&(*(char *)(gen_frame + 0x11c)));
          F_0042c880(((undefined1 *)(gen_frame + 0x20)));
          if (-1 < (int)uVar7) {
            F_0042b630(((undefined1 *)(gen_frame + 0x74)));
            F_008f3410(this,uVar5,((undefined1 *)(gen_frame + 0x74)));
            F_0042ccf0(((undefined *)GEN_TOP((*(int *)((int)this + 0x3c) + iVar9))),((undefined1 *)(gen_frame + 0x74)));
            if ((*(char *)(gen_frame + 0x11c)) == '\0') {
              ppuVar8 = &REFG(undefined * PTR32, 0x12fd328);
            }
            else {
              ppuVar8 = (undefined * PTR32 *)
                        F_00769260(this,CONCAT13((*(undefined1 *)(gen_frame + 0x120)),CONCAT12((*(undefined1 *)(gen_frame + 0x11f)),
                                                                     CONCAT11((*(char *)(gen_frame + 0x11e)),(*(undefined1 *)(gen_frame + 0x11d)))))
                                     ,CONCAT13((*(undefined1 *)(gen_frame + 0x11f)),
                                               CONCAT12((*(char *)(gen_frame + 0x11e)),CONCAT11((*(undefined1 *)(gen_frame + 0x11d)),(*(char *)(gen_frame + 0x11c))))));
            }
            F_0042ccf0(((undefined *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x54 + iVar9))),ppuVar8);
            if ((*(char *)(gen_frame + 0x11e)) == '\0') {
              ppuVar8 = &REFG(undefined * PTR32, 0x12fd328);
            }
            else {
              ppuVar8 = (undefined * PTR32 *)
                        F_00769260(this,CONCAT13((*(undefined1 *)(gen_frame + 0x122)),CONCAT12((*(undefined1 *)(gen_frame + 0x121)),CONCAT11((*(undefined1 *)(gen_frame + 0x120)),
                                                  (*(undefined1 *)(gen_frame + 0x11f))))),
                                     CONCAT13((*(undefined1 *)(gen_frame + 0x121)),CONCAT12((*(undefined1 *)(gen_frame + 0x120)),CONCAT11((*(undefined1 *)(gen_frame + 0x11f)),
                                                                                  (*(char *)(gen_frame + 0x11e))))));
            }
            F_0042ccf0(((undefined *)GEN_TOP((*(int *)((int)this + 0x3c) + iVar9 + 0xa8))),ppuVar8);
            pvVar4 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + (*(int *)(gen_frame + 0xc)))));
            uVar5 = F_0042a990(*(int *)((int)this + 0x3c) + iVar9);
            F_005a2710(pvVar4,6);
            *(uint *)((int)pvVar4 + 4) = uVar5;
            pvVar4 = ((undefined *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8 + *(int *)((int)this + 0x4c))));
            F_005a2710(pvVar4,4);
            *(int *)((int)pvVar4 + 4) = (*(int *)(gen_frame + 0x0));
            pvVar4 = ((undefined *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x10 + *(int *)((int)this + 0x4c))));
            uVar5 = F_0042a990(*(int *)((int)this + 0x3c) + 0x54 + (*(int *)(gen_frame + 0x8)));
            F_005a2710(pvVar4,6);
            *(uint *)((int)pvVar4 + 4) = uVar5;
            pvVar4 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + (*(int *)(gen_frame + 0xc)) + 0x18)));
            uVar5 = F_0042a990(*(int *)((int)this + 0x3c) + (*(int *)(gen_frame + 0x8)) + 0xa8);
            F_005a2710(pvVar4,6);
            (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 0x20;
            iVar9 = (*(int *)(gen_frame + 0x8)) + 0xfc;
            *(uint *)((int)pvVar4 + 4) = uVar5;
            *(*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x4));
            (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x1c)) + 1;
            *((short *)GEN_TOP((*(int *)((int)this + 0x3b8) + uVar7 * 2))) = (short)(*(int *)(gen_frame + 0x0));
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            F_0042c880(((undefined1 *)(gen_frame + 0x74)));
            (*(int *)(gen_frame + 0x8)) = iVar9;
          }
          F_0042c880(((undefined1 *)(gen_frame + 0xc8)));
        }
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
      } while ((*(int *)(gen_frame + 0x4)) < (int)uVar3);
    }
  }
  iVar9 = *(int *)((int)this + 0x4c);
  uVar3 = F_005a2710((undefined *)(iVar9 + 0x40),4);
  *(int *)(iVar9 + 0x44) = (*(int *)(gen_frame + 0x0));
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentConfigKey::vf2 */
uint F_008fc890(unsigned int gen_a0)
{
  GEN_ENTER(0x8fc890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  undefined1 AVar4;
  undefined4 uVar5;
  int iVar6;
  undefined * pAVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
    return uVar2;
  }
  F_008fc1c0(this);
  this[0x34] = (undefined1)0x0;
  *(undefined4 *)(this + 0x30) = 1;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x14c);
    AVar4 = (undefined1)(*(int *)(uVar2 + 0x14) != 0);
    this[0x37] = AVar4;
    this[0x38] = AVar4;
  }
  F_008fc390(this,1,1);
  iVar6 = *(int *)(this + 0x4c);
  iVar3 = *(int *)(this + 0x50) - iVar6 >> 3;
  if (iVar3 == 0) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  uVar5 = 0x53;
  pAVar7 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = F_008668b0(this_00,uVar5,iVar3,iVar6,pAVar7,uVar8,uVar9,uVar10);
  *(uint *)(this + 8) = uVar2;
  F_00488040(this + 0x4c,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x4c),*(undefined4 *)(this + 0x50));
  uVar2 = F_008f37f0(this);
  return uVar2;
}

/* ref: FUN_008fc960 */
uint F_008fc960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8fc960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  F_008fc390(this,param_1,param_2);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  iVar3 = *(int *)((int)this + 0x50) - *(int *)((int)this + 0x4c) >> 3;
  if (iVar3 == 0) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))
                    (piVar1,*(undefined4 *)((int)this + 8),iVar3,*(int *)((int)this + 0x4c));
  return uVar2;
}

/* ref: FUN_008fc9b0 */
uint F_008fc9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8fc9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xab0];
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  int * PTR32 * PTR32 * PTR32 * PTR32 * pppppiVar7;
  int * PTR32 * PTR32 * PTR32 * ppppiVar8;
  int * PTR32 * PTR32 * PTR32 * ppppiVar9;
  byte bVar10;
  uint uVar11;
  undefined * pvVar12;
  uint uVar13;
  uint uVar14;
  undefined * pvVar15;
  uint * puVar16;
  int * piVar17;
  undefined * PTR32 * ppuVar18;
  int * piVar19;
  undefined * pvVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 * puVar25;
  int iVar26;
  uint * puVar27;
  bool bVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  
  ((int *)(gen_frame + 0xa34))[0x1d] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xaac);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(uint *)(gen_frame + 0x28)) = 0;
  piVar19 = ((int *)(gen_frame + 0x154));
  iVar21 = 0x11b;
  do {
    *piVar19 = 0;
    piVar19 = piVar19 + 2;
    iVar21 = iVar21 + -1;
  } while (-1 < iVar21);
  bVar28 = REFG(int, 0x1379694) != 0;
  (*(bool *)(gen_frame + 0x3b)) = bVar28;
  bVar10 = F_007ce8a0(this);
  uVar24 = *(undefined4 *)((int)this + 0x28);
  ((byte *)(gen_frame + 0x0))[0xc] = bVar10;
  F_005a2710(((int *)(gen_frame + 0x154)),4);
  ((int *)(gen_frame + 0x154))[1] = uVar24;
  uVar24 = *(undefined4 *)((int)this + 0x2c);
  F_005a2710(((undefined1 *)(gen_frame + 0x15c)),4);
  (*(uint *)(gen_frame + 0x160)) = uVar24;
  (*(char *)(gen_frame + 0x53)) = '\0';
  if (bVar28) {
    uVar11 = F_00ab21a0(*(undefined4 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(uVar11 + 0x10);
    *(uint *)((int)this + 0x1c) = (uint)*(byte *)(uVar11 + 0x3e);
    *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(uVar11 + 0x45);
    uVar3 = REFG(undefined2, 0x14ab148);
    if ((REFG(undefined2, 0x14ab148) == 0) ||
       (uVar11 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0), (ushort)uVar11 <= uVar3)) {
      (*(char *)(gen_frame + 0x53)) = '\0';
    }
    else {
      (*(char *)(gen_frame + 0x53)) = '\x01';
    }
    uVar11 = (uint)((*(char *)(gen_frame + 0x53)) != '\0');
    uVar24 = *(undefined4 *)((int)this + 0x14);
    uVar30 = 0;
    uVar29 = 0x2aa;
    pvVar12 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar11 = F_00461d60(pvVar12,uVar29,uVar24,uVar30,uVar11);
    F_0042e430((undefined *)((int)this + 0x55c),uVar11);
  }
  else {
    *(undefined2 *)((int)this + 0xc) = 0x101;
    *(undefined4 *)((int)this + 0x14) = 0xffffffff;
    *(undefined4 *)((int)this + 0x18) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    *(undefined1 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    F_0042aca0((int)this + 0x55c);
    F_0042aca0((int)this + 0x5b0);
    F_0042aca0((int)this + 0x604);
  }
  uVar24 = *(undefined4 *)((int)this + 0x10);
  F_005a2710(((undefined1 *)(gen_frame + 0x16c)),3);
  (*(undefined4 *)(gen_frame + 0x170)) = uVar24;
  uVar11 = F_0042a990((int)this + 0x55c);
  F_005a2710(((undefined1 *)(gen_frame + 0x174)),6);
  (*(uint *)(gen_frame + 0x178)) = uVar11;
  uVar11 = F_0042a990((int)this + 0x5b0);
  F_005a2710(((undefined1 *)(gen_frame + 0x184)),6);
  (*(uint *)(gen_frame + 0x188)) = uVar11;
  uVar11 = F_0042a990((int)this + 0x604);
  F_005a2710(((undefined1 *)(gen_frame + 0x17c)),6);
  (*(uint *)(gen_frame + 0x180)) = uVar11;
  if (*(int *)((int)this + 0x20) == 0x20) {
    uVar24 = 2;
  }
  else if (*(int *)((int)this + 0x20) == 0x21) {
    uVar24 = 4;
  }
  else {
    uVar24 = 1;
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x18c)),4);
  (*(undefined4 *)(gen_frame + 0x190)) = uVar24;
  iVar21 = 0;
  ((int *)(gen_frame + 0xa34))[0] = 0;
  ((int *)(gen_frame + 0xa34))[1] = 0;
  ((int *)(gen_frame + 0xa34))[2] = 0;
  ((int *)(gen_frame + 0xa34))[3] = 0;
  ((int *)(gen_frame + 0xa34))[4] = 0;
  ((int *)(gen_frame + 0xa34))[5] = 0;
  ((int *)(gen_frame + 0xa34))[6] = 0;
  ((int *)(gen_frame + 0xa34))[7] = 0;
  ((int *)(gen_frame + 0xa34))[8] = 0;
  ((int *)(gen_frame + 0xa34))[9] = 0;
  ((int *)(gen_frame + 0xa34))[10] = 0;
  ((int *)(gen_frame + 0xa34))[0xb] = 0;
  ((int *)(gen_frame + 0xa34))[0xc] = 0;
  ((int *)(gen_frame + 0xa34))[0xd] = 0;
  ((int *)(gen_frame + 0xa34))[0xe] = 0;
  ((int *)(gen_frame + 0xa34))[0xf] = 0;
  ((int *)(gen_frame + 0xa34))[0x10] = 0;
  ((int *)(gen_frame + 0xa34))[0x11] = 0;
  ((int *)(gen_frame + 0xa34))[0x12] = 0;
  ((int *)(gen_frame + 0xa34))[0x13] = 0;
  ((int *)(gen_frame + 0xa34))[0x14] = 0;
  ((int *)(gen_frame + 0xa34))[0x15] = 0;
  ((int *)(gen_frame + 0xa34))[0x16] = 0;
  ((int *)(gen_frame + 0xa34))[0x17] = 0;
  ((int *)(gen_frame + 0xa34))[0x18] = 0;
  ((int *)(gen_frame + 0xa34))[0x19] = 0;
  ((int *)(gen_frame + 0xa34))[0x1a] = 0;
  ((int *)(gen_frame + 0xa34))[0x1b] = 0;
  ((int *)(gen_frame + 0xa34))[0x1c] = 0;
  uVar11 = 0;
  do {
    uVar13 = F_00ac3430(&REFG(undefined, 0x14bcf40),uVar11);
    if (uVar13 < 0x186a1) {
      if (uVar13 != 0) {
        uVar13 = F_00ab1ed0(uVar13);
        cVar1 = *(char *)(uVar13 + 0x2b);
        goto LAB_008fcc2c;
      }
    }
    else {
      uVar13 = F_00ab1f00(uVar13);
      cVar1 = *(char *)(uVar13 + 0x11);
LAB_008fcc2c: ;
      ((int *)(gen_frame + 0xa34))[cVar1] = ((int *)(gen_frame + 0xa34))[cVar1] + 1;
      iVar21 = iVar21 + 1;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 10);
  (*(uint *)(gen_frame + 0x40)) = iVar21;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)F_00ac30f0(0);
  uVar14 = F_00ac30f0(1);
  uVar23 = (uint)((*(char *)(gen_frame + 0x53)) != '\0');
  uVar24 = 0x7ff;
  uVar11 = (*(uint *)(gen_frame + 0x40));
  uVar13 = uVar14;
  pvVar12 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar11 = F_00461d60(pvVar12,uVar24,uVar11,uVar13,uVar23);
  F_0042e430((undefined *)((int)this + 0x508),uVar11);
  F_005a2710(((undefined1 *)(gen_frame + 0xa1c)),4);
  (*(int *)(gen_frame + 0xa20)) = (*(uint *)(gen_frame + 0x40));
  F_005a2710(((undefined1 *)(gen_frame + 0xa24)),4);
  (*(uint *)(gen_frame + 0xa28)) = (uint)(*(undefined * PTR32 *)(gen_frame + 0x44)) & 0xff | uVar14 << 8;
  uVar11 = F_0042a990((int)this + 0x508);
  F_005a2710(((undefined1 *)(gen_frame + 0xa2c)),6);
  (*(uint *)(gen_frame + 0xa30)) = uVar11;
  (*(uint *)(gen_frame + 0x48)) = 0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x20))) {
  case 0x1e: ;
  case 0x1f: ;
    (*(uint *)(gen_frame + 0x48)) = 3;
    break;
  case 0x20: ;
    (*(uint *)(gen_frame + 0x48)) = 2;
    break;
  case 0x21: ;
    (*(uint *)(gen_frame + 0x48)) = 6;
  }
  if (*(int *)((int)this + 0x4e0) != *(int *)((int)this + 0x4e4)) {
    *(int *)((int)this + 0x4e4) = *(int *)((int)this + 0x4e0);
  }
  (*(uint *)(gen_frame + 0x40)) = 1;
  do {
    uVar11 = (*(uint *)(gen_frame + 0x40));
    uVar13 = F_00ab21a0((*(uint *)(gen_frame + 0x40)));
    if ((uVar11 != 0x12) && (*(char *)(uVar13 + 0x45) == '\0')) {
      switch((unsigned int)(uintptr_t)(*(undefined4 *)(uVar13 + 0x10))) {
      case 0x1e: ;
      case 0x1f: ;
        bVar28 = ((*(uint *)(gen_frame + 0x48)) & 1) == 0;
        break;
      case 0x20: ;
        bVar28 = ((*(uint *)(gen_frame + 0x48)) & 2) == 0;
        break;
      case 0x21: ;
        bVar28 = ((*(uint *)(gen_frame + 0x48)) & 4) == 0;
        break;
      default: ;
        goto switchD_008fcd90_default;
      }
      if (!bVar28) {
        puVar16 = (uint *)((int)this + 0x4e0);
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x18)) + 0)) = *(undefined1 *)(uVar13 + 0x42);
        (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x18)), 1, 3),*(undefined1 *)(uVar13 + 0x42))));
        puVar27 = *(uint * PTR32 *)((int)this + 0x4e4);
        (*(uint *)(gen_frame + 0x14)) = uVar11;
        if ((&(*(uint *)(gen_frame + 0x14)) < puVar27) && (puVar4 = (uint *)*puVar16, puVar4 <= &(*(uint *)(gen_frame + 0x14)))) {
          iVar21 = (int)&(*(uint *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)puVar4) >> 3;
          if (puVar27 == *(uint * PTR32 *)((int)this + 0x4e8)) {
            iVar22 = (int)puVar27 - (int)((int)(uintptr_t)puVar4) >> 3;
            if (iVar22 == -1) {
LAB_008fd025: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar13 = iVar22 + 1;
            uVar11 = (int)*(uint * PTR32 *)((int)this + 0x4e8) - (int)((int)(uintptr_t)puVar4) >> 3;
            if (uVar11 < uVar13) {
              if (-(uVar11 >> 1) - 1 < uVar11) {
                uVar11 = 0;
              }
              else {
                uVar11 = uVar11 + (uVar11 >> 1);
              }
              if (uVar11 < uVar13) {
                uVar11 = uVar13;
              }
              F_00963350((undefined *)((int)this + 0x4e0),uVar11);
            }
          }
          puVar25 = *(undefined4 * PTR32 *)((int)this + 0x4e4);
          if (puVar25 != (undefined4 *)0x0) {
            iVar22 = *(int *)((int)this + 0x4e0);
            *puVar25 = *(undefined4 *)(iVar22 + iVar21 * 8);
            puVar25[1] = *(undefined4 *)(iVar22 + 4 + iVar21 * 8);
          }
        }
        else {
          if (puVar27 == *(uint * PTR32 *)((int)this + 0x4e8)) {
            iVar21 = (int)((int)puVar27 - *puVar16) >> 3;
            if (iVar21 == -1) goto LAB_008fd025;
            uVar14 = iVar21 + 1;
            uVar13 = (int)((int)*(uint * PTR32 *)((int)this + 0x4e8) - *puVar16) >> 3;
            if (uVar13 < uVar14) {
              if (-(uVar13 >> 1) - 1 < uVar13) {
                uVar13 = 0;
              }
              else {
                uVar13 = uVar13 + (uVar13 >> 1);
              }
              if (uVar13 < uVar14) {
                uVar13 = uVar14;
              }
              F_00963350(puVar16,uVar13);
              uVar11 = (*(uint *)(gen_frame + 0x40));
            }
          }
          puVar16 = *(uint * PTR32 *)((int)this + 0x4e4);
          (*(uint *)(gen_frame + 0x40)) = uVar11;
          if (puVar16 != (uint *)0x0) {
            *puVar16 = (*(uint *)(gen_frame + 0x14));
            puVar16[1] = (uint)(*(int * PTR32 *)(gen_frame + 0x18));
          }
        }
        *(int *)((int)this + 0x4e4) = *(int *)((int)this + 0x4e4) + 8;
        uVar11 = (*(uint *)(gen_frame + 0x40));
      }
    }
switchD_008fcd90_default: ;
    (*(uint *)(gen_frame + 0x40)) = uVar11 + 1;
  } while (uVar11 + 1 < 0x1d);
  F_0096bf10(*(int *)((int)this + 0x4e0),*(int *)((int)this + 0x4e4),
               *(int *)((int)this + 0x4e4) - *(int *)((int)this + 0x4e0) >> 3,((code *)REFP(0x90c9d0)));
  puVar25 = (undefined4 *)((int)this + 0x118);
  iVar21 = 10;
  do {
    F_0042ccf0(puVar25 + -0x16,&REFG(undefined * PTR32, 0x12fd328));
    puVar25[-1] = 0;
    *puVar25 = 0;
    puVar25[1] = 0;
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 0;
    puVar25 = puVar25 + 0x1a;
    iVar21 = iVar21 + -1;
  } while (iVar21 != 0);
  iVar21 = *(int *)((int)this + 0x4d4);
  if (*(int *)((int)this + 0x4d0) != iVar21) {
    pvVar15 = (undefined *)F_0093fe80(iVar21,iVar21,*(int *)((int)this + 0x4d0),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
    pvVar12 = *(undefined * PTR32 *)((int)this + 0x4d4);
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = pvVar15;
    for (; pvVar15 != pvVar12; pvVar15 = (undefined *)((int)pvVar15 + 0x6c)) {
      F_0042c880(pvVar15);
    }
    *(undefined * PTR32 *)((int)this + 0x4d4) = (*(undefined * PTR32 *)(gen_frame + 0x44));
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = *(int * PTR32 *)((int)this + 0x4e0);
  (*(uint *)(gen_frame + 0x48)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0x0;
  (*(uint *)(gen_frame + 0x40)) = 0xd2;
  if ((*(int * PTR32 *)(gen_frame + 0x10)) != *(int * PTR32 *)((int)this + 0x4e4)) {
    do {
      if (9 < (*(uint *)(gen_frame + 0x48))) break;
      iVar26 = (*(uint *)(gen_frame + 0x48)) * 0x54;
      iVar21 = *(*(int * PTR32 *)(gen_frame + 0x10));
      iVar22 = *(int *)((int)this + 0x658);
      (*(int *)(gen_frame + 0x30)) = iVar21;
      uVar24 = 0x2ba;
      (*(int *)(gen_frame + 0x24)) = 0;
      pvVar12 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar11 = F_00461bb0(pvVar12,uVar24,iVar21);
      F_0042e430((undefined *)(iVar22 + iVar26),uVar11);
      iVar21 = (*(uint *)(gen_frame + 0x40)) * 8;
      F_005a2710(((int *)(gen_frame + 0x154)) + (*(uint *)(gen_frame + 0x40)) * 2,4);
      *(int *)(((undefined1 *)(gen_frame + 0x15c)) + iVar21 + -4) = ((int *)(gen_frame + 0xa34))[(*(int *)(gen_frame + 0x30))];
      if ((*(int *)(gen_frame + 0x30)) == 0) {
        (*(uint *)(gen_frame + 0x34)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x30)) + 62000;
      }
      iVar21 = (*(uint *)(gen_frame + 0x40)) * 8;
      F_005a2710(((undefined1 *)(gen_frame + 0x15c)) + iVar21,4);
      iVar22 = *(int *)((int)this + 0x658);
      *(uint *)(((undefined1 *)(gen_frame + 0x164)) + iVar21 + -4) = (*(uint *)(gen_frame + 0x34));
      uVar11 = F_0042a990(iVar22 + iVar26);
      iVar21 = (*(uint *)(gen_frame + 0x40)) * 8;
      F_005a2710(((undefined1 *)(gen_frame + 0x164)) + iVar21,6);
      *(uint *)(((undefined1 *)(gen_frame + 0x16c)) + iVar21 + -4) = uVar11;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)0x0;
      do {
        piVar19 = (*(int * PTR32 *)(gen_frame + 0x54));
        puVar16 = (uint *)F_00ab1ed0((*(int * PTR32 *)(gen_frame + 0x54)));
        (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar16;
        if (puVar16 != (uint *)0x0) {
          (*(uint *)(gen_frame + 0x34)) = F_00ab21d0((uint)*(byte *)((int)puVar16 + 0x29));
          if (((((*(int *)(gen_frame + 0x30)) != *(int *)((int)this + 0x18)) &&
               ((*(int *)(gen_frame + 0x30)) != *(int *)((int)this + 0x1c))) &&
              ((*(int *)(gen_frame + 0x30)) == *(char *)((int)puVar16 + 0x2b))) &&
             ((uVar11 = F_00a68280(&REFG(undefined1, 0x14ab070),(*(int *)(gen_frame + 0x30)),1),
              (ushort)*(byte *)((int)puVar16 + 0x1f) <= (ushort)uVar11 &&
              (*((char *)GEN_TOP((*(int *)((int)this + 0x18) + 4 + (*(uint *)(gen_frame + 0x34))))) != '\0')))) {
            if (199 < (*(uint *)(gen_frame + 0x2c))) break;
            if (piVar19 != (int *)0x0) {
              (*(uint *)(gen_frame + 0x4c)) = 0;
              do {
                piVar17 = (int *)F_00ac3430(&REFG(undefined, 0x14bcf40),(*(uint *)(gen_frame + 0x4c)));
                if (piVar19 == piVar17) {
                  goto LAB_008fd165;
                }
                (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) + 1;
              } while ((*(uint *)(gen_frame + 0x4c)) < 10);
            }
            (*(uint *)(gen_frame + 0x4c)) = 0xffffffff;
LAB_008fd165: ;
            uVar24 = 0;
            uVar11 = F_00ac4750(1,piVar19,1,0);
            F_008f3b10(this,((undefined * PTR32 *)(gen_frame + 0x70)),1,piVar19,(uint)*(byte *)((int)puVar16 + 0x1f),
                         (uint)*(byte *)((int)puVar16 + 0x22),uVar11,uVar24);
            uVar11 = puVar16[2];
            (*(uint *)(gen_frame + 0x34)) = (uint)*(byte *)((int)puVar16 + 0x1f);
            F_0042cbc0(((undefined1 *)(gen_frame + 0xc4)),((undefined * PTR32 *)(gen_frame + 0x70)));
            (*(int * PTR32 *)(gen_frame + 0x118)) = piVar19;
            puVar16 = (uint *)((int)this + 0x4d0);
            (*(uint *)(gen_frame + 0x120)) = (*(uint *)(gen_frame + 0x48));
            (*(uint *)(gen_frame + 0x12c)) = (*(uint *)(gen_frame + 0x34));
            puVar5 = *(undefined1 * PTR32 *)((int)this + 0x4d4);
            (*(int * PTR32 *)(gen_frame + 0x11c)) = (int *)(uint)(ushort)uVar11;
            (*(uint *)(gen_frame + 0x124)) = (*(uint *)(gen_frame + 0x4c));
            (*(uint *)(gen_frame + 0x128)) = 0;
            if ((((undefined1 *)(gen_frame + 0xc4)) < puVar5) && (puVar6 = (undefined1 *)*puVar16, puVar6 <= ((undefined1 *)(gen_frame + 0xc4)))) {
              if (puVar5 == *(undefined1 * PTR32 *)((int)this + 0x4d8)) {
                iVar21 = (int)((int)puVar5 - *puVar16) / 0x6c;
                if (iVar21 == -1) goto LAB_008fd025;
                uVar11 = (int)((int)*(undefined1 * PTR32 *)((int)this + 0x4d8) - *puVar16) / 0x6c;
                uVar13 = iVar21 + 1;
                if (uVar11 < uVar13) {
                  if (-(uVar11 >> 1) - 1 < uVar11) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = uVar11 + (uVar11 >> 1);
                  }
                  if (uVar11 < uVar13) {
                    uVar11 = uVar13;
                  }
                  F_00969350(puVar16,uVar11);
                }
              }
              pvVar12 = *(undefined * PTR32 *)((int)this + 0x4d4);
              iVar21 = (((int)((undefined1 *)(gen_frame + 0xc4)) - (int)puVar6) / 0x6c) * 0x6c + *puVar16;
              if (pvVar12 != (undefined *)0x0) {
                F_0042cbc0(pvVar12,iVar21);
                *(undefined4 *)((int)pvVar12 + 0x54) = *(undefined4 *)(iVar21 + 0x54);
                *(undefined4 *)((int)pvVar12 + 0x58) = *(undefined4 *)(iVar21 + 0x58);
                *(undefined4 *)((int)pvVar12 + 0x5c) = *(undefined4 *)(iVar21 + 0x5c);
                *(undefined4 *)((int)pvVar12 + 0x60) = *(undefined4 *)(iVar21 + 0x60);
                *(undefined4 *)((int)pvVar12 + 100) = *(undefined4 *)(iVar21 + 100);
                *(undefined4 *)((int)pvVar12 + 0x68) = *(undefined4 *)(iVar21 + 0x68);
              }
            }
            else {
              if (puVar5 == *(undefined1 * PTR32 *)((int)this + 0x4d8)) {
                iVar21 = (int)((int)puVar5 - *puVar16) / 0x6c;
                if (iVar21 == -1) goto LAB_008fd025;
                uVar11 = (int)((int)*(undefined1 * PTR32 *)((int)this + 0x4d8) - *puVar16) / 0x6c;
                uVar13 = iVar21 + 1;
                if (uVar11 < uVar13) {
                  if (-(uVar11 >> 1) - 1 < uVar11) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = uVar11 + (uVar11 >> 1);
                  }
                  if (uVar11 < uVar13) {
                    uVar11 = uVar13;
                  }
                  F_00969350(puVar16,uVar11);
                }
              }
              pvVar12 = *(undefined * PTR32 *)((int)this + 0x4d4);
              if (pvVar12 != (undefined *)0x0) {
                F_0042cbc0(pvVar12,((undefined1 *)(gen_frame + 0xc4)));
                *(int * PTR32 *)((int)pvVar12 + 0x54) = (*(int * PTR32 *)(gen_frame + 0x118));
                *(int * PTR32 *)((int)pvVar12 + 0x58) = (*(int * PTR32 *)(gen_frame + 0x11c));
                *(uint *)((int)pvVar12 + 0x5c) = (*(uint *)(gen_frame + 0x120));
                *(uint *)((int)pvVar12 + 0x60) = (*(uint *)(gen_frame + 0x124));
                *(uint *)((int)pvVar12 + 100) = (*(uint *)(gen_frame + 0x128));
                *(uint *)((int)pvVar12 + 0x68) = (*(uint *)(gen_frame + 0x12c));
              }
            }
            *(int *)((int)this + 0x4d4) = *(int *)((int)this + 0x4d4) + 0x6c;
            F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
            uVar11 = (*(uint *)(gen_frame + 0x4c));
            if ((*(uint *)(gen_frame + 0x4c)) < 10) {
              bVar10 = *(byte *)((int)(*(uint * PTR32 *)(gen_frame + 0x20)) + 0x1f);
              uVar13 = (*(uint * PTR32 *)(gen_frame + 0x20))[2];
              F_0042cbc0(((undefined1 *)(gen_frame + 0xc8)),&REFG(undefined * PTR32, 0x12fd328));
              pvVar12 = (undefined *)(uVar11 * 0x68 + 0xc0 + (int)(*(undefined * PTR32 *)(gen_frame + 0x3c)));
              (*(int * PTR32 *)(gen_frame + 0x11c)) = (*(int * PTR32 *)(gen_frame + 0x54));
              (*(uint *)(gen_frame + 0x120)) = 0;
              (*(uint *)(gen_frame + 0x124)) = (uint)(ushort)uVar13;
              (*(uint *)(gen_frame + 0x128)) = (uint)bVar10;
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x12c)) + 0)) = 1;
              (*(uint *)(gen_frame + 0x12c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x12c)), 1, 3),1);
              F_0042ccf0(pvVar12,((undefined1 *)(gen_frame + 0xc8)));
              *(int * PTR32 *)((int)pvVar12 + 0x54) = (*(int * PTR32 *)(gen_frame + 0x11c));
              *(uint *)((int)pvVar12 + 0x58) = (*(uint *)(gen_frame + 0x120));
              *(uint *)((int)pvVar12 + 0x60) = (*(uint *)(gen_frame + 0x128));
              *(uint *)((int)pvVar12 + 0x5c) = (*(uint *)(gen_frame + 0x124));
              *(undefined1 *)((int)pvVar12 + 100) = (undefined1)(*(uint *)(gen_frame + 0x12c));
              F_0042c880(((undefined1 *)(gen_frame + 0xc8)));
            }
            (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 1;
            (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
            F_0042c880(((undefined * PTR32 *)(gen_frame + 0x70)));
            piVar19 = (*(int * PTR32 *)(gen_frame + 0x54));
            this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)piVar19 + 1);
      } while ((int *)((int)piVar19 + 1) < (int *)0x5dd);
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)0x186a1;
      iVar21 = (*(int *)(gen_frame + 0x30));
      do {
        (*(uint *)(gen_frame + 0x4c)) = F_00ab1f00((*(int * PTR32 *)(gen_frame + 0x54)));
        if (((((*(uint *)(gen_frame + 0x4c)) != 0) &&
             (uVar11 = F_00ab21d0((uint)*(byte *)((*(uint *)(gen_frame + 0x4c)) + 0xe)), uVar11 != 0)) &&
            (iVar21 != *(int *)((int)this + 0x18))) &&
           (((iVar21 != *(int *)((int)this + 0x1c) && (iVar21 == *(char *)((*(uint *)(gen_frame + 0x4c)) + 0x11))) &&
            ((uVar13 = F_00a68280(&REFG(undefined1, 0x14ab070),iVar21,1), piVar19 = (*(int * PTR32 *)(gen_frame + 0x54)),
             (ushort)*(byte *)((*(uint *)(gen_frame + 0x4c)) + 0xf) <= (ushort)uVar13 &&
             (*((char *)GEN_TOP((*(int *)((int)this + 0x18) + 4 + uVar11))) != '\0')))))) {
          if (199 < (*(uint *)(gen_frame + 0x2c))) break;
          if ((*(int * PTR32 *)(gen_frame + 0x54)) != (int *)0x0) {
            uVar11 = 0;
            do {
              piVar17 = (int *)F_00ac3430(&REFG(undefined, 0x14bcf40),uVar11);
              if (piVar19 == piVar17) {
                (*(uint *)(gen_frame + 0x34)) = uVar11;
                goto LAB_008fd559;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < 10);
          }
          (*(uint *)(gen_frame + 0x34)) = 0xffffffff;
          piVar19 = (*(int * PTR32 *)(gen_frame + 0x54));
LAB_008fd559: ;
          (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)F_00ac19f0(piVar19);
          pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
          (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (int * PTR32 * PTR32 * PTR32 *)(uint)*(byte *)((*(uint *)(gen_frame + 0x4c)) + 0xf);
          pvVar15 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x4f0);
          F_00492c50(pvVar15);
          uVar11 = F_0043c060(9,piVar19);
          (*(uint *)(gen_frame + 0x148)) = 0;
          (*(uint *)(gen_frame + 0x148)) = uVar11;
          (*(uint * PTR32 *)(gen_frame + 0x14c)) = &(*(uint *)(gen_frame + 0x148));
          (*(char *)(gen_frame + 0x150)) = '\0';
          if (*(uint *)((int)pvVar12 + 0x4f8) <= *(int *)((int)pvVar12 + 0x500) + 1U) {
            F_00486f80(pvVar15,1);
          }
          uVar11 = *(int *)((int)pvVar12 + 0x4fc) + *(int *)((int)pvVar12 + 0x500);
          if (*(uint *)((int)pvVar12 + 0x4f8) <= uVar11) {
            uVar11 = uVar11 - *(uint *)((int)pvVar12 + 0x4f8);
          }
          if (*((int *)GEN_TOP((*(int *)((int)pvVar12 + 0x4f4) + uVar11 * 4))) == 0) {
            uVar13 = F_004296a0(0xc,0,0x2c4);
            *((uint *)GEN_TOP((*(int *)((int)pvVar12 + 0x4f4) + uVar11 * 4))) = uVar13;
          }
          puVar16 = *((uint * PTR32 *)GEN_TOP((*(int *)((int)pvVar12 + 0x4f4) + uVar11 * 4)));
          if (puVar16 != (uint *)0x0) {
            *puVar16 = 0;
            puVar16[1] = 0;
            *(undefined1 *)(puVar16 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0x150)) != -1) && (puVar16 != &(*(uint *)(gen_frame + 0x148)))) {
              if ((*(char *)(gen_frame + 0x150)) == '\0') {
                (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x14c));
                *puVar16 = *(*(uint * PTR32 *)(gen_frame + 0x14c));
                *(undefined1 *)(puVar16 + 2) = 0;
              }
              else {
                if ((*(char *)(gen_frame + 0x150)) != '\x01') goto LAB_008fd6ef;
                (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x14c));
                uVar11 = *(*(uint * PTR32 *)(gen_frame + 0x14c));
                piVar19 = (int *)(uVar11 + 0x54);
                *piVar19 = *piVar19 + 1;
                *puVar16 = uVar11;
                *(undefined1 *)(puVar16 + 2) = 1;
              }
              (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x14c));
              puVar16[1] = (uint)puVar16;
            }
          }
LAB_008fd6ef: ;
          *(int *)((int)pvVar12 + 0x500) = *(int *)((int)pvVar12 + 0x500) + 1;
          if ((*(uint * PTR32 *)(gen_frame + 0x14c)) != (uint *)0x0) {
            if (((*(char *)(gen_frame + 0x150)) != '\0') && ((*(char *)(gen_frame + 0x150)) == '\x01')) {
              pvVar20 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x14c));
              *(int *)((int)pvVar20 + 0x54) = *(int *)((int)pvVar20 + 0x54) + -1;
              if (*(int *)((int)pvVar20 + 0x54) < 1) {
                F_0042c880(pvVar20);
                F_00406ad0(pvVar20);
              }
            }
            (*(uint * PTR32 *)(gen_frame + 0x14c)) = (uint *)0x0;
            (*(char *)(gen_frame + 0x150)) = -1;
          }
          (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x13c)) = (int * PTR32 * PTR32 * PTR32 *)0x0;
          (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x13c)) = (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c));
          (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x140)) = (int * PTR32 * PTR32 * PTR32 *)&(*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x13c));
          (*(char *)(gen_frame + 0x144)) = '\0';
          if (*(uint *)((int)pvVar12 + 0x4f8) <= *(int *)((int)pvVar12 + 0x500) + 1U) {
            F_00486f80(pvVar15,1);
          }
          uVar11 = *(int *)((int)pvVar12 + 0x4fc) + *(int *)((int)pvVar12 + 0x500);
          if (*(uint *)((int)pvVar12 + 0x4f8) <= uVar11) {
            uVar11 = uVar11 - *(uint *)((int)pvVar12 + 0x4f8);
          }
          if (*((int *)GEN_TOP((*(int *)((int)pvVar12 + 0x4f4) + uVar11 * 4))) == 0) {
            uVar13 = F_004296a0(0xc,0,0x2c4);
            *((uint *)GEN_TOP((*(int *)((int)pvVar12 + 0x4f4) + uVar11 * 4))) = uVar13;
          }
          pppppiVar7 = *((int * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP((*(int *)((int)pvVar12 + 0x4f4) + uVar11 * 4)));
          if (pppppiVar7 != (int * PTR32 * PTR32 * PTR32 * PTR32 *)0x0) {
            *pppppiVar7 = (int * PTR32 * PTR32 * PTR32 *)0x0;
            pppppiVar7[1] = (int * PTR32 * PTR32 * PTR32 *)0x0;
            *(undefined1 *)(pppppiVar7 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0x144)) != -1) && (pppppiVar7 != &(*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x13c)))) {
              if ((*(char *)(gen_frame + 0x144)) == '\0') {
                (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x140));
                *pppppiVar7 = (int * PTR32 * PTR32 * PTR32 *)*(*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x140));
                *(undefined1 *)(pppppiVar7 + 2) = 0;
              }
              else {
                if ((*(char *)(gen_frame + 0x144)) != '\x01') goto LAB_008fd888;
                (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x140));
                ppppiVar8 = (int * PTR32 * PTR32 * PTR32 *)*(*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x140));
                ppppiVar9 = ppppiVar8 + 0x15;
                *ppppiVar9 = (int * PTR32 * PTR32 *)((int)*ppppiVar9 + 1);
                *pppppiVar7 = ppppiVar8;
                *(undefined1 *)(pppppiVar7 + 2) = 1;
              }
              (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x140));
              pppppiVar7[1] = (int * PTR32 * PTR32 * PTR32 *)pppppiVar7;
            }
          }
LAB_008fd888: ;
          *(int *)((int)pvVar12 + 0x500) = *(int *)((int)pvVar12 + 0x500) + 1;
          if ((int * PTR32 * PTR32 * PTR32 * PTR32 *)(*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x140)) != (int * PTR32 * PTR32 * PTR32 * PTR32 *)0x0) {
            if (((*(char *)(gen_frame + 0x144)) != '\0') && ((*(char *)(gen_frame + 0x144)) == '\x01')) {
              ppppiVar9 = (int * PTR32 * PTR32 * PTR32 *)*(*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x140));
              ppppiVar9[0x15] = (int * PTR32 * PTR32 *)((int)ppppiVar9[0x15] + -1);
              if ((int)ppppiVar9[0x15] < 1) {
                F_0042c880(ppppiVar9);
                F_00406ad0(ppppiVar9);
              }
            }
            (*(int * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x140)) = (int * PTR32 * PTR32 * PTR32 *)0x0;
            (*(char *)(gen_frame + 0x144)) = -1;
          }
          (*(undefined4 *)(gen_frame + 0x130)) = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x134)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x138)) = -1;
          F_00490f30(&(*(undefined4 *)(gen_frame + 0x130)),&(*(int * PTR32 *)(gen_frame + 0x18)));
          F_00493bc0(pvVar15,&(*(undefined4 *)(gen_frame + 0x130)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x134)) != (undefined4 *)0x0) {
            if (((*(char *)(gen_frame + 0x138)) != '\0') && ((*(char *)(gen_frame + 0x138)) == '\x01')) {
              pvVar12 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x134));
              *(int *)((int)pvVar12 + 0x54) = *(int *)((int)pvVar12 + 0x54) + -1;
              if (*(int *)((int)pvVar12 + 0x54) < 1) {
                F_0042c880(pvVar12);
                F_00406ad0(pvVar12);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x134)) = (undefined4 *)0x0;
            (*(char *)(gen_frame + 0x138)) = -1;
          }
          uVar29 = 2;
          uVar24 = 0x2b8;
          pvVar12 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 4) + 0x18))))
                                      (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 4))));
          uVar11 = F_0043bd00(pvVar12,uVar24,uVar29,pvVar15);
          if (uVar11 == 0) {
            ppuVar18 = &REFG(undefined * PTR32, 0x12fd328);
          }
          else {
            F_0042cc20(((undefined * PTR32 *)(gen_frame + 0x70)),uVar11,REFG(undefined4, 0x108cc50));
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | 1;
            ppuVar18 = ((undefined * PTR32 *)(gen_frame + 0x70));
          }
          F_0042cbc0(((undefined1 *)(gen_frame + 0xdc)),ppuVar18);
          if (((*(uint *)(gen_frame + 0x28)) & 1) != 0) {
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) & 0xfffffffe;
            F_0042c880(((undefined * PTR32 *)(gen_frame + 0x70)));
          }
          bVar10 = *(byte *)((*(uint *)(gen_frame + 0x4c)) + 0xf);
          uVar3 = *(ushort *)((*(uint *)(gen_frame + 0x4c)) + 0xc);
          F_0042cbc0(((undefined1 *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0xdc)));
          uVar11 = (*(uint *)(gen_frame + 0x34));
          (*(uint *)(gen_frame + 0xb4)) = (*(uint *)(gen_frame + 0x48));
          (*(int * PTR32 *)(gen_frame + 0xb0)) = (int *)(uint)uVar3;
          (*(int * PTR32 *)(gen_frame + 0xac)) = (*(int * PTR32 *)(gen_frame + 0x54));
          (*(uint *)(gen_frame + 0xb8)) = (*(uint *)(gen_frame + 0x34));
          (*(uint *)(gen_frame + 0xbc)) = 2;
          (*(uint *)(gen_frame + 0xc0)) = (uint)bVar10;
          F_0096ea50((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x4d0),((undefined1 *)(gen_frame + 0x58)));
          F_0042c880(((undefined1 *)(gen_frame + 0x58)));
          if (uVar11 < 10) {
            bVar10 = *(byte *)((*(uint *)(gen_frame + 0x4c)) + 0xf);
            uVar3 = *(ushort *)((*(uint *)(gen_frame + 0x4c)) + 0xc);
            F_0042cbc0(((undefined1 *)(gen_frame + 0x5c)),&REFG(undefined * PTR32, 0x12fd328));
            (*(uint *)(gen_frame + 0xbc)) = (uint)bVar10;
            pvVar12 = (undefined *)((*(uint *)(gen_frame + 0x34)) * 0x68 + 0xc0 + (int)(*(undefined * PTR32 *)(gen_frame + 0x3c)));
            (*(int * PTR32 *)(gen_frame + 0xb0)) = (*(int * PTR32 *)(gen_frame + 0x54));
            (*(uint *)(gen_frame + 0xb4)) = 2;
            (*(uint *)(gen_frame + 0xb8)) = (uint)uVar3;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc0)) + 0)) = 1;
            (*(uint *)(gen_frame + 0xc0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc0)), 1, 3),1);
            F_0042ccf0(pvVar12,((undefined1 *)(gen_frame + 0x5c)));
            *(uint *)((int)pvVar12 + 0x58) = (*(uint *)(gen_frame + 0xb4));
            *(int * PTR32 *)((int)pvVar12 + 0x54) = (*(int * PTR32 *)(gen_frame + 0xb0));
            *(undefined1 *)((int)pvVar12 + 100) = (undefined1)(*(uint *)(gen_frame + 0xc0));
            *(uint *)((int)pvVar12 + 0x5c) = (*(uint *)(gen_frame + 0xb8));
            *(uint *)((int)pvVar12 + 0x60) = (*(uint *)(gen_frame + 0xbc));
            F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
          }
          (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 1;
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
          F_0042c880(((undefined1 *)(gen_frame + 0xdc)));
          iVar21 = (*(int *)(gen_frame + 0x30));
          this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
        }
        (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x54)) + 1);
      } while ((*(int * PTR32 *)(gen_frame + 0x54)) < (int *)0x18713);
      if ((iVar21 != *(int *)((int)this + 0x18)) && ((*(int *)(gen_frame + 0x24)) != 0)) {
        (*(undefined * PTR32 *)(gen_frame + 0x44)) = ((undefined *)GEN_TOP(((uint)(*(undefined * PTR32 *)(gen_frame + 0x44)) | 1 << ((byte)(*(uint *)(gen_frame + 0x48)) & 0x1f))));
      }
      (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x48)) + 1;
      (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) + 3;
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 2;
    } while ((*(int * PTR32 *)(gen_frame + 0x10)) != *(int * PTR32 *)((int)this + 0x4e4));
  }
  uVar11 = (*(uint *)(gen_frame + 0x48));
  F_005a2710(((undefined1 *)(gen_frame + 0x7dc)),4);
  (*(uint *)(gen_frame + 0x7e0)) = uVar11;
  F_005a2710(((undefined1 *)(gen_frame + 0x8d4)),4);
  (*(uint *)(gen_frame + 0x8d8)) = (uint)(*(undefined * PTR32 *)(gen_frame + 0x44));
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)((int)this + 0x4d0);
  F_0096c000(*(int *)((int)this + 0x4d0),*(int *)((int)this + 0x4d4),
               (*(int *)((int)this + 0x4d4) - *(int *)((int)this + 0x4d0)) / 0x6c,((code *)REFP(0x90c980)));
  F_008f3db0(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  F_008f4330(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  F_008f4610(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  F_008f4890(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  F_008f4b40(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  F_008f4e10(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  F_008f50c0(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  F_008f5420(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  if (*(int *)((int)this + 0x28) == 3) {
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0x0;
    pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    if ((*(uint *)((int)this + 0x2c) < 10) &&
       (iVar21 = *(*(int * PTR32 *)(gen_frame + 0x18)), iVar21 != *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x4d4))) {
      puVar16 = ((uint *)(gen_frame + 0x1a0)) + 2;
      do {
        if (*(int *)(iVar21 + 0x5c) == *(int *)((int)pvVar12 + 0x2c)) {
          uVar11 = *(uint *)(iVar21 + 0x54);
          F_005a2710(puVar16 + -3,4);
          puVar16[-2] = uVar11;
          uVar11 = F_0042a990(iVar21);
          F_005a2710(puVar16 + -1,6);
          *puVar16 = uVar11;
          uVar11 = *(uint *)(iVar21 + 0x58);
          F_005a2710(puVar16 + 1,4);
          puVar16[2] = uVar11;
          uVar2 = *(undefined1 *)(iVar21 + 100);
          iVar22 = *(int *)(iVar21 + 0x60);
          F_005a2710(puVar16 + 3,4);
          (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1);
          puVar16[4] = (int)(short)CONCAT11(uVar2,-1 < iVar22);
          puVar16 = puVar16 + 8;
          pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
        }
        iVar21 = iVar21 + 0x6c;
      } while (iVar21 != *(int *)((int)pvVar12 + 0x4d4));
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x194)),4);
    (*(int *)(gen_frame + 0x198)) = (int)(*(undefined * PTR32 *)(gen_frame + 0x44));
    puVar16 = ((uint *)(gen_frame + 0x8e0)) + 2;
    puVar27 = (uint *)((int)pvVar12 + 0x11c);
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0xa;
    do {
      uVar11 = puVar27[-2];
      F_005a2710(puVar16 + -3,4);
      puVar16[-2] = uVar11;
      uVar11 = F_0042a990(puVar27 + -0x17);
      F_005a2710(puVar16 + -1,6);
      *puVar16 = uVar11;
      uVar11 = *puVar27;
      F_005a2710(puVar16 + 1,4);
      puVar16[2] = uVar11;
      uVar11 = puVar27[-1];
      F_005a2710(puVar16 + 3,4);
      puVar16[4] = uVar11;
      puVar27 = puVar27 + 0x1a;
      puVar16 = puVar16 + 8;
      (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) - 1);
    } while ((*(undefined * PTR32 *)(gen_frame + 0x44)) != (undefined *)0x0);
    goto LAB_008fde69;
  }
  if ((*(bool *)(gen_frame + 0x3b)) != false) {
    switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x28))) {
    case 0: ;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)this + 0x30);
      break;
    case 1: ;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)this + 0x40);
      break;
    case 2: ;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)this + 0x50);
      break;
    default: ;
      goto switchD_008fdd62_caseD_3;
    case 4: ;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)this + 0x60);
      break;
    case 5: ;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)this + 0x70);
      break;
    case 6: ;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)this + 0x80);
      break;
    case 7: ;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)this + 0xb0);
      break;
    case 8: ;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)this + 0x90);
      break;
    case 9: ;
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)this + 0xa0);
    }
    if ((*(int * PTR32 *)(gen_frame + 0x54)) != (int *)0x0) {
      iVar21 = *(*(int * PTR32 *)(gen_frame + 0x54));
      if (iVar21 != (*(int * PTR32 *)(gen_frame + 0x54))[1]) {
        puVar16 = ((uint *)(gen_frame + 0x1a0)) + 2;
        do {
          iVar22 = *(int *)(iVar21 + 0x58);
          uVar11 = *(uint *)(iVar21 + 0x54);
          F_005a2710(puVar16 + -3,4);
          puVar16[-2] = iVar22 << 0x18 | uVar11;
          uVar11 = F_0042a990(iVar21);
          F_005a2710(puVar16 + -1,6);
          *puVar16 = uVar11;
          uVar11 = *(uint *)(iVar21 + 0x5c);
          F_005a2710(puVar16 + 1,4);
          puVar16[2] = uVar11;
          cVar1 = *(char *)(iVar21 + 100);
          F_005a2710(puVar16 + 3,4);
          puVar16[4] = (uint)(cVar1 != '\0');
          iVar21 = iVar21 + 0x68;
          puVar16 = puVar16 + 8;
        } while (iVar21 != (*(int * PTR32 *)(gen_frame + 0x54))[1]);
      }
      iVar21 = (*(int * PTR32 *)(gen_frame + 0x54))[1];
      iVar22 = *(*(int * PTR32 *)(gen_frame + 0x54));
      F_005a2710(((undefined1 *)(gen_frame + 0x194)),4);
      (*(int *)(gen_frame + 0x198)) = (iVar21 - iVar22) / 0x68;
      goto LAB_008fde69;
    }
  }
switchD_008fdd62_caseD_3: ;
  F_005a2710(((undefined1 *)(gen_frame + 0x194)),4);
  (*(int *)(gen_frame + 0x198)) = 0;
LAB_008fde69: ;
  pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
  uVar11 = 0;
  if ((*(bool *)(gen_frame + 0x3b)) != false) {
    iVar22 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x44) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x40);
    iVar21 = iVar22 >> 0x1f;
    uVar11 = 0x51;
    if (iVar22 / 0x68 + iVar21 != iVar21) {
      uVar11 = 0x53;
    }
    iVar22 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x4d4) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x4d0);
    iVar21 = iVar22 >> 0x1f;
    if (iVar22 / 0x6c + iVar21 != iVar21) {
      uVar11 = uVar11 | 8;
    }
    iVar22 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x54) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x50);
    iVar21 = iVar22 >> 0x1f;
    if (iVar22 / 0x68 + iVar21 != iVar21) {
      uVar11 = uVar11 | 4;
    }
    iVar22 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xb4) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xb0);
    iVar21 = iVar22 >> 0x1f;
    if (iVar22 / 0x68 + iVar21 != iVar21) {
      uVar11 = uVar11 | 0x80;
    }
    iVar22 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x94) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x90);
    iVar21 = iVar22 >> 0x1f;
    if (iVar22 / 0x68 + iVar21 != iVar21) {
      uVar11 = uVar11 | 0x100;
    }
    iVar22 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x74) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x70);
    iVar21 = iVar22 >> 0x1f;
    if (iVar22 / 0x68 + iVar21 != iVar21) {
      uVar11 = uVar11 | 0x20;
    }
    iVar22 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa4) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa0);
    iVar21 = iVar22 >> 0x1f;
    if (iVar22 / 0x68 + iVar21 != iVar21) {
      uVar11 = uVar11 | 0x200;
    }
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x164)),4);
  piVar19 = *(int * PTR32 *)((int)pvVar12 + 4);
  (*(uint *)(gen_frame + 0x168)) = uVar11;
  if (*(int *)((int)pvVar12 + 8) == 0) {
    uVar32 = 4;
    uVar31 = 0;
    uVar30 = 0;
    piVar17 = ((int *)(gen_frame + 0x154));
    uVar29 = 0x11c;
    uVar24 = 0x32;
    pvVar15 = pvVar12;
    pvVar20 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar19 + 0x1c))(piVar19)));
    uVar11 = F_008668b0(pvVar20,uVar24,uVar29,piVar17,pvVar15,uVar30,uVar31,uVar32);
    *(uint *)((int)pvVar12 + 8) = uVar11;
  }
  else {
    piVar19 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar19 + 0x1c))(piVar19)));
    ((code *)*(gen_code32 *)(*piVar19 + 0x5c))(piVar19,*(undefined4 *)((int)pvVar12 + 8),0x11c,((int *)(gen_frame + 0x154)));
  }
  piVar19 = ((int *)(gen_frame + 0xa34));
  iVar21 = 0x11b;
  do {
    piVar19 = piVar19 + -2;
    uVar11 = F_005a2670(piVar19);
    iVar21 = iVar21 + -1;
  } while (-1 < iVar21);
  F_00c47745(((int *)(gen_frame + 0xa34))[0x1d] ^ (uint)(uint)(gen_frame + 0xaac));
  return uVar11;
}

/* ref: FUN_008fe040 */
unsigned int F_008fe040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8fe040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if ((char)param_2 == '\0') {
      uVar3 = 0;
      do {
        uVar2 = F_00ac3430(&REFG(undefined, 0x14bcf40),uVar3);
        if (uVar2 == param_1) {
          param_1 = 0;
          goto LAB_008fe0aa;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 10);
    }
    else {
      uVar3 = 0xffffffff;
      uVar2 = 0;
      do {
        uVar1 = F_00ac3430(&REFG(undefined, 0x14bcf40),uVar2);
        if (((int)uVar3 < 0) && (uVar1 == 0)) {
          uVar3 = uVar2;
        }
        if (uVar1 == param_1) goto LAB_008fe0b4;
        uVar2 = uVar2 + 1;
      } while (uVar2 < 10);
      if (-1 < (int)uVar3) {
LAB_008fe0aa: ;
        F_00ac3250(&REFG(undefined, 0x14bcf40),uVar3,param_1);
      }
    }
LAB_008fe0b4: ;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if ((char)uVar3 != '\0') {
      F_008fc9b0(this);
    }
  }
  return 0;
}

/* ref: FUN_008fe0e0 */
unsigned int F_008fe0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8fe0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if (((param_1 < 10) && (param_2 < 10)) &&
     (uVar1 = F_00ac3430(&REFG(undefined, 0x14bcf40),param_1), uVar1 != 0)) {
    F_00ac3150(&REFG(undefined, 0x14bcf40),param_1,param_2);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if ((char)uVar1 != '\0') {
      F_008fc9b0(this);
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentContentsFinder::vf5 */
uint F_008fe130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8fe130u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  code * pcVar3;
  char cVar4;
  undefined * this;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte * pbVar8;
  ulonglong uVar9;
  byte * local_c;
  
  if (((char)in_ecx[0x2e5d] == '\x01') && (F_008f56e0(in_ecx), in_ecx[0x2e52] == 0x31)) {
    F_008e88a0(in_ecx,in_ebx);
  }
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this == (undefined *)0x0) {
    uVar9 = F_0046ff40();
    uVar5 = (uint)(uVar9 / 1000);
  }
  else {
    uVar5 = F_00975680(this);
  }
  if ((uVar5 != in_ecx[0x2e59]) && (in_ecx[0x2e59] = uVar5, *(char *)((int)in_ecx + 0xb972) != '\0')
     ) {
    if (in_ecx[0x2e56] == 0x69) {
      F_008dd530(in_ecx);
    }
    else if (in_ecx[0x2e56] == 0x68) {
      F_007d0b30(in_ecx,in_ebx);
    }
  }
  iVar2 = in_ecx[0x2e5a];
  if (0x1d < uVar5 - iVar2) {
    pcVar3 = *(gen_code32 *)(*in_ecx + 0x10);
    in_ecx[0x2e5a] = uVar5;
    uVar6 = (*pcVar3)(in_ecx);
    if ((char)uVar6 != '\0') {
      local_c = (byte *)0x0;
      uVar6 = F_0076bf70(in_ecx,(uint)*(ushort *)(in_ecx + 0x259c));
      if (uVar6 != 0) {
        local_c = (byte *)(uint)(*(char *)(uVar6 + 0x115) == '\x05');
      }
      pbVar8 = (byte *)(in_ecx + 0x27c2);
      do {
        if (*pbVar8 != 0) {
          iVar1 = in_ecx[0x27c3] + (uint)*pbVar8 * 0x3c;
          uVar6 = F_004351f0(iVar1,iVar2);
          uVar7 = F_004351f0(iVar1,uVar5);
          if (uVar7 == 0) {
            *(undefined2 *)((int)in_ecx + 0xb976) = 0x101;
            *pbVar8 = 0;
          }
          if ((local_c == pbVar8 + (-0x9f08 - (int)in_ecx)) && (uVar6 != uVar7)) {
            *(undefined1 *)(in_ecx + 0x2e5e) = 1;
          }
        }
        pbVar8 = pbVar8 + 1;
      } while (pbVar8 + (-0x9f08 - (int)in_ecx) < (byte *)0x2);
    }
  }
  uVar5 = ((code *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx);
  if ((((char)uVar5 != '\0') && ((char)in_ecx[0x2e5d] == '\x02')) &&
     (*(char *)((int)in_ecx + 0xb975) != '\0')) {
    cVar4 = REFG(char, 0x1338ad4);
    if (REFG(char, 0x1338ad4) == '\0') {
      cVar4 = '\x01';
    }
    if (*(char *)((int)in_ecx + 0xb96f) != cVar4) {
      *(undefined2 *)((int)in_ecx + 0xb977) = 0x101;
    }
  }
  if (((in_ecx[0x2e54] != 0) && (in_ecx[0x2e56] == 0x69)) &&
     ((REFG(int, 0x1379694) != 0 &&
      ((*(char *)(REFG(int, 0x1379694) + 0x188) == '\x02') != (bool)(char)in_ecx[0x2e5c])))) {
    F_00824400(in_ecx);
  }
  uVar5 = ((code *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx);
  if (((char)uVar5 != '\0') &&
     (((*(char *)((int)in_ecx + 0xb976) != '\0' || (*(char *)((int)in_ecx + 0xb977) != '\0')) ||
      ((char)in_ecx[0x2e5e] != '\0')))) {
    uVar5 = F_008c3830(in_ecx);
  }
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentHowToNotice::vf1 */
uint F_008fe350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8fe350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  
  if (((0 < param_3) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) == -2)) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar1 = *(int * PTR32 *)(uVar4 + 0xa0);
  piVar6 = (int *)0x0;
  if ((*(int * PTR32 *)(this + 0x10) != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(this + 0x10))), puVar2 != (undefined4 *)0x0)) {
    piVar6 = (int *)*puVar2;
  }
  uVar4 = (*(int *)(this + 0x1c) + *(int *)(this + 0x20)) - 1;
  if (((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) ||
     (piVar6 = *(int * PTR32 *)*piVar6, piVar6 == (int *)0x0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar6;
  }
  uVar5 = uVar4 >> 2;
  if (*(uint *)(iVar7 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar7 + 8);
  }
  piVar1[6] = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar5 * 4))) + (uVar4 & 3) * 4)));
  pcVar3 = *(gen_code32 *)(*piVar1 + 8);
  piVar1[7] = 0;
  *(undefined1 *)(piVar1 + 8) = 1;
  (*pcVar3)(piVar1);
  if (*(int *)(this + 0x20) != 0) {
    if ((*(int *)(this + 0x20) != 0) &&
       (iVar7 = *(int *)(this + 0x20) + -1, *(int *)(this + 0x20) = iVar7, iVar7 == 0)) {
      *(undefined4 *)(this + 0x1c) = 0;
    }
    if (*(int *)(this + 0x20) != 0) {
      F_008f5950(this);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_008fe450 */
uint F_008fe450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8fe450u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar1 = F_00ab3b40((*(int *)&gen_args[1]));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar1;
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
    ((int * PTR32 *)(gen_frame + 0xc))[0] = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    uVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + uVar3;
    for (; uVar3 != uVar1; uVar3 = uVar3 + 1) {
      if (((int * PTR32 *)(gen_frame + 0xc))[0] == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *((int * PTR32 *)(gen_frame + 0xc))[0];
      }
      uVar2 = uVar3 >> 2;
      if (*(uint *)(iVar4 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(iVar4 + 8);
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + (uVar3 & 3) * 4))) == (*(int *)&gen_args[1])) {
        uVar5 = 0;
        if ((((int * PTR32 *)(gen_frame + 0xc))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0xc))[0])) != (undefined4 *)0x0)) {
          uVar5 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0xc))[0]));
        }
        F_00962be0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x10),((int * PTR32 *)(gen_frame + 0xc)),uVar5,0,uVar3);
        (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x18));
        break;
      }
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x18));
    }
    F_00968260(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(int *)&gen_args[1]));
    uVar3 = F_008f5950((*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar3;
}

/* ref: FUN_008fe7b0 */
uint F_008fe7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8fe7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x330];
  char cVar1;
  uint uVar2;
  int * piVar3;
  byte bVar4;
  ushort uVar5;
  uint in_ecx;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  
  piVar3 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0x328)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x32c);
  in_ecx = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xd4))))(REFG(undefined4, 0x1379694));
  uVar2 = piVar3[0x1d];
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  if ((char)piVar3[0xb82] != '\0') {
    ((byte *)(gen_frame + 0x308))[0] = 1;
    if (((GEN_ISNAN(REFG(float, 0x14b4ebc)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
         ((GEN_ISNAN(REFG(float, 0x14b4ebc)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
         REFG(uint, 0x14b4ebc) == *(float *)&REFG(undefined, 0x1088114))) && (REFG(int, 0x1305d10) == 0)) {
      ((uint *)(gen_frame + 0x1f8))[0] = 0xffffffff;
      ((int *)(gen_frame + 0x270))[0] = (int)((double)REFG(float, 0x14b4ebc) + REFG(double, 0x1088108));
    }
    else {
      ((uint *)(gen_frame + 0x1f8))[0] = 0xffffffff;
      ((int *)(gen_frame + 0x270))[0] = 0;
    }
    ((uint *)(gen_frame + 0x1f8))[0] = 0xffffffff;
    (*(int *)(gen_frame + 0x14)) = 1;
  }
  (*(short * PTR32 *)(gen_frame + 0x8)) = (short *)(in_ecx + 6);
  iVar10 = 0;
  do {
    uVar6 = F_00b7ab60(in_ecx,iVar10);
    if ((uVar6 != 0) && (uVar7 = F_00ab1ff0(uVar6), uVar7 != 0)) {
      if (*(char *)(uVar7 + 0xf) == '\x01') {
        cVar1 = *(char *)(uVar7 + 0x15);
        ((uint *)(gen_frame + 0x1f8))[(*(int *)(gen_frame + 0x14))] = uVar6;
        if (cVar1 == '\0') {
          bVar4 = F_00b7ab30(uVar6);
          if (bVar4 == 0) {
            fVar12 = F_00b7aaf0(in_ecx,iVar10);
            iVar8 = (int)(fVar12 + (float10)REFG(double, 0x1088108));
          }
          else {
            uVar5 = F_00b7ab10(in_ecx,iVar10);
            iVar8 = (int)(short)uVar5;
          }
        }
        else {
          iVar8 = 0;
        }
        ((int *)(gen_frame + 0x270))[(*(int *)(gen_frame + 0x14))] = iVar8;
        ((int *)(gen_frame + 0x108))[(*(int *)(gen_frame + 0x14))] = (int)*(*(short * PTR32 *)(gen_frame + 0x8));
        uVar6 = F_00b7ab80(in_ecx,iVar10);
        ((byte *)(gen_frame + 0x308))[(*(int *)(gen_frame + 0x14))] = uVar6 == uVar2;
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
      }
      else if (*(char *)(uVar7 + 0xf) == '\x02') {
        cVar1 = *(char *)(uVar7 + 0x15);
        ((uint *)(gen_frame + 0x90))[(*(int *)(gen_frame + 0x10))] = uVar6;
        if (cVar1 == '\0') {
          bVar4 = F_00b7ab30(uVar6);
          if (bVar4 == 0) {
            fVar12 = F_00b7aaf0(in_ecx,iVar10);
            iVar8 = (int)(fVar12 + (float10)REFG(double, 0x1088108));
          }
          else {
            uVar5 = F_00b7ab10(in_ecx,iVar10);
            iVar8 = (int)(short)uVar5;
          }
        }
        else {
          iVar8 = 0;
        }
        ((int *)(gen_frame + 0x180))[(*(int *)(gen_frame + 0x10))] = iVar8;
        ((int *)(gen_frame + 0x18))[(*(int *)(gen_frame + 0x10))] = (int)*(*(short * PTR32 *)(gen_frame + 0x8));
        uVar6 = F_00b7ab80(in_ecx,iVar10);
        ((byte *)(gen_frame + 0x2e8))[(*(int *)(gen_frame + 0x10))] = uVar6 == uVar2;
        (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
      }
    }
    (*(short * PTR32 *)(gen_frame + 0x8)) = (*(short * PTR32 *)(gen_frame + 0x8)) + 6;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x1e);
  iVar10 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if (iVar10 < 0x15) {
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x5c))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x5c))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x60))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x60))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (0 < (*(int *)(gen_frame + 0x14))) {
      iVar8 = 5;
      iVar11 = 0;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x14));
      do {
        F_008fe520(this,param_1,param_2,iVar8,*(undefined4 *)((int)((uint *)(gen_frame + 0x1f8)) + iVar11),
                     *(undefined4 *)((int)((int *)(gen_frame + 0x270)) + iVar11),
                     *(undefined4 *)((int)((int *)(gen_frame + 0x108)) + iVar11),(uint)((byte *)(gen_frame + 0x303))[iVar8]);
        iVar11 = iVar11 + 4;
        iVar8 = iVar8 + 1;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    iVar8 = (*(int *)(gen_frame + 0x14)) + 5;
    if (iVar8 < 0x19 - (*(int *)(gen_frame + 0x10))) {
      iVar11 = iVar8 * 4 + 0x54;
      iVar8 = (0x19 - (*(int *)(gen_frame + 0x10))) - iVar8;
      do {
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar11))) != -1) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar11))) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x1d) = 1;
        }
        iVar11 = iVar11 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (0 < (*(int *)(gen_frame + 0x10))) {
      iVar8 = 0x18;
      iVar11 = 0;
      do {
        F_008fe520(this,param_1,param_2,iVar8,((uint *)(gen_frame + 0x90))[iVar11],((int *)(gen_frame + 0x180))[iVar11],
                     ((int *)(gen_frame + 0x18))[iVar11],(uint)((byte *)(gen_frame + 0x2e8))[iVar11]);
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar11 < (*(int *)(gen_frame + 0x10)));
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xb8))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xb8))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xbc))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xbc))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc0))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc0))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc4))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc4))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 200))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 200))) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
  }
  else {
    iVar8 = (0x1e - (*(int *)(gen_frame + 0x10))) - (*(int *)(gen_frame + 0x14)) >> 1;
    if (0 < iVar8) {
      iVar9 = 0x54;
      iVar11 = iVar8;
      do {
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar9))) != -1) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar9))) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x1d) = 1;
        }
        iVar9 = iVar9 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = 0;
    if (0 < (*(int *)(gen_frame + 0x14))) {
      iVar9 = iVar8;
      do {
        F_008fe520(this,param_1,param_2,iVar9,((uint *)(gen_frame + 0x1f8))[iVar11],((int *)(gen_frame + 0x270))[iVar11],
                     ((int *)(gen_frame + 0x108))[iVar11],(uint)((byte *)(gen_frame + 0x308))[iVar9 - iVar8]);
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar11 < (*(int *)(gen_frame + 0x14)));
    }
    iVar8 = iVar8 + (*(int *)(gen_frame + 0x14));
    iVar11 = 0;
    if (0 < (*(int *)(gen_frame + 0x10))) {
      iVar9 = iVar8;
      do {
        F_008fe520(this,param_1,param_2,iVar9,((uint *)(gen_frame + 0x90))[iVar11],((int *)(gen_frame + 0x180))[iVar11],
                     ((int *)(gen_frame + 0x18))[iVar11],(uint)((byte *)(gen_frame + 0x2e8))[iVar9 - iVar8]);
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar11 < (*(int *)(gen_frame + 0x10)));
    }
    if (iVar8 + (*(int *)(gen_frame + 0x10)) < 0x1e) {
      iVar8 = (iVar8 + (*(int *)(gen_frame + 0x10))) * 4 + 0x54;
      do {
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar8))) != -1) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar8))) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x1d) = 1;
        }
        iVar8 = iVar8 + 4;
      } while (iVar8 < 0xcc);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar2 + 0xcc) != iVar10) {
    *(int *)(uVar2 + 0xcc) = iVar10;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x328)) ^ (uint)(uint)(gen_frame + 0x32c));
  return uVar2;
}

/* ref: FUN_008feed0 */
uint F_008feed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x8feed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  int param_7 = (int)gen_a7;
  int param_8 = (int)gen_a8;
  int param_9 = (int)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar3 = param_4;
  if (0 < param_6) {
    this_00 = (undefined *)((int)this + 0xcf8);
    (*(int *)(gen_frame + 0x1c)) = (param_7 + param_9) * 4;
    do {
      puVar2 = (uint *)F_00ab1ff0(*param_5);
      uVar3 = (uint)(ushort)puVar2[2];
      if (*(char *)((int)puVar2 + 0xe) != '\0') {
        uVar3 = (uVar3 - 1) + (uint)*(ushort *)((int)param_5 + 10);
      }
      if (*(char *)((int)param_5 + 9) != '\0') {
        uVar3 = uVar3 + 0x40000000;
      }
      if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + *(int *)(param_1 + 0x20)))) != uVar3) {
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + *(int *)(param_1 + 0x20)))) = uVar3;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      iVar1 = *param_5;
      if ((iVar1 == 0x30) || (iVar1 == 0x31)) {
        uVar3 = F_008f68a0(this,param_4,(uint)*(ushort *)((int)param_5 + 10),iVar1);
        F_0042e430(this_00,uVar3);
      }
      else {
        F_0042b630(((undefined1 *)(gen_frame + 0x74)));
        F_00492c50((undefined *)((int)this + 0xda0));
        F_0042cc20(((undefined1 *)(gen_frame + 0x20)),(int)puVar2 + (puVar2[1] & 0xffffff) + 4,REFG(undefined4, 0x108cc50));
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,((undefined1 *)(gen_frame + 0x20)),(undefined *)((int)this + 0xda0),((undefined1 *)(gen_frame + 0x74)));
        F_0042c880(((undefined1 *)(gen_frame + 0x20)));
        F_0042e430(this_00,(*puVar2 & 0xffffff) + (int)puVar2);
        F_0042e370(this_00,&REFG(undefined, 0x10bfd7c));
        F_0042e360(this_00,((undefined1 *)(gen_frame + 0x74)));
        F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      }
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar3 = F_0042a990(this_00);
      uVar3 = F_00431250(param_2,param_8 + param_9 + (*(int *)(gen_frame + 0xc)),uVar3,uVar5,uVar6,uVar7);
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 4;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      param_5 = param_5 + 3;
    } while ((*(int *)(gen_frame + 0xc)) < param_6);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar3;
}

/* ref: FUN_008ffac0 */
uint F_008ffac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x8ffac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int *)(gen_frame + 0x10)) = param_5;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),*(char *)(param_4 + 0xbf));
  if (*(char *)(param_4 + 0xbf) == '\0') {
    uVar4 = F_007723a0(in_ecx,param_5,param_7);
    (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),1);
    if (0 < (int)uVar4) goto LAB_008ffb0c;
  }
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) & 0xffffff00;
LAB_008ffb0c: ;
  bVar3 = F_007c9be0(&(*(int *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x10)));
  if (bVar3 != 0) {
    iVar6 = *(int *)((int)in_ecx + 0x24);
    iVar1 = *(int *)(iVar6 + 0x20);
    if (*(int *)(iVar1 + 4) != (*(int *)(gen_frame + 0x10))) {
      *(int *)(iVar1 + 4) = (*(int *)(gen_frame + 0x10));
      *(undefined1 *)(iVar6 + 0x1d) = 1;
    }
    *(uint *)((int)in_ecx + 0x3c) = *(uint *)((int)in_ecx + 0x3c) | 0x400;
  }
  uVar4 = (uint)*(byte *)((int)in_ecx + 0x45);
  iVar6 = param_6;
  uVar10 = REFG(undefined4, 0x108cc50);
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x18))))
                             (*(int * PTR32 *)((int)in_ecx + 4),0x7e4)));
  uVar4 = F_00461c60(pvVar5,iVar6,uVar4,uVar10);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),uVar4,in_edi);
  bVar2 = param_6 - 0xf4241U < 999999;
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x10)) + 0)) = bVar2;
  (*(int *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x10)), 1, 3),bVar2);
  iVar6 = (*param_3 & 0xffffff) + (int)param_3;
  uVar10 = 0;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x18))))(*(int * PTR32 *)((int)in_ecx + 4))));
  uVar4 = F_0043bb40(pvVar5,iVar6,uVar10);
  uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
  uVar8 = F_00ab65a0(param_6,param_4);
  F_007d7480(in_ecx,(*(int *)(gen_frame + 0x10)),(uint)*(byte *)(param_4 + 0xbe),(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0xc)),uVar8,uVar7,uVar4);
  F_00431250(*(undefined * PTR32 *)((int)in_ecx + 0x28),3,&REFG(undefined, 0x10bde7e),0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)in_ecx + 0x28),4,&REFG(undefined, 0x10bde7f),0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)in_ecx + 0x28),5,&REFG(undefined, 0x10bde9b),0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)in_ecx + 0x28),9,&REFG(undefined, 0x10bdea2),0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)in_ecx + 0x28),10,&REFG(undefined, 0x10bdea3),0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)in_ecx + 0x28),0xb,&REFG(undefined, 0x10bdec1),0,1,0);
  iVar6 = *(int *)((int)in_ecx + 0x24);
  iVar1 = *(int *)(iVar6 + 0x20);
  if (*(int *)(iVar1 + 0x14) != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined1 *)(iVar6 + 0x1d) = 1;
  }
  iVar6 = *(int *)((int)in_ecx + 0x24);
  iVar1 = *(int *)(iVar6 + 0x20);
  if (*(int *)(iVar1 + 0x18) != 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar6 + 0x1d) = 1;
  }
  iVar6 = *(int *)((int)in_ecx + 0x24);
  iVar1 = *(int *)(iVar6 + 0x20);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined1 *)(iVar6 + 0x1d) = 1;
  }
  F_008f2750(in_ecx,param_4 + 8,(uint)*(byte *)(param_4 + 0xa0));
  uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar9;
}

/* ref: FUN_008ffca0 */
byte F_008ffca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x8ffca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  char cVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  char * pcVar5;
  char * pcVar6;
  uint uVar7;
  uint uVar8;
  undefined * in_edi;
  undefined4 uVar9;
  
  in_edi = (undefined *)0x0;
  if ((0 < *(int *)(param_2 + 0x78)) &&
     (in_edi = (undefined *)F_00ab6240(*(int *)(param_2 + 0x78),0,0), in_edi == (undefined *)0x0))
  {
    return 0;
  }
  uVar2 = F_00a6add0(param_4);
  if (uVar2 == 0) {
    return 0;
  }
  F_008ffac0(this,in_edi,param_1,param_2,param_3,param_4,param_5);
  F_007d7520(this,param_3,*(undefined4 *)((int)this + 0x40),param_4);
  if (in_edi == (undefined *)0x0) {
    in_edi = &REFG(undefined, 0x10bdf0e);
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x10,in_edi,0,1,0);
  uVar7 = (uint)*(byte *)(param_2 + 0x9e);
  uVar9 = 0x21e;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_00461bb0(pvVar3,uVar9,uVar7);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xf,uVar7,0,1,0);
  uVar7 = 0;
  do {
    if (param_4 == *(int *)(uVar2 + uVar7 * 4)) {
      cVar1 = *(char *)(uVar7 + 0x29 + uVar2);
      if (cVar1 != '\0') {
        uVar7 = (uint)*(byte *)((int)this + 0x45);
        iVar4 = (int)cVar1;
        uVar8 = (uint)(0 < iVar4);
        uVar2 = (uint)*(byte *)(uVar2 + 0x28);
        uVar9 = 0x20f;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        pcVar5 = (char *)F_00461ea0(pvVar3,uVar9,uVar2,uVar8,iVar4,uVar7);
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          if (pcVar6 != pcVar5 + 1) {
            F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xe,pcVar5,0,1,0);
            *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x100;
          }
        }
      }
      *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x280;
      return 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 10);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x280;
  return 1;
}

/* ref: FUN_008ffdf0 */
unsigned int F_008ffdf0(unsigned int gen_a0)
{
  GEN_ENTER(0x8ffdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (*(char *)((int)this + 0x24) == '\0') {
    return 0;
  }
  uVar5 = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x20) = 0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x14))) {
  case 0xe: ;
    bVar3 = F_008f6d30(this,uVar5);
    break;
  case 0xf: ;
    bVar3 = F_00828550(this,uVar5);
    break;
  case 0x10: ;
    bVar3 = F_008f6eb0(this,uVar5);
    break;
  case 0x11: ;
    bVar3 = F_008f7100(this,uVar5);
    break;
  case 0x12: ;
    bVar3 = F_00828780(this,uVar5);
    break;
  case 0x13: ;
    bVar3 = F_008f71a0(this,uVar5);
    break;
  case 0x14: ;
    bVar3 = F_008f7240(this,uVar5);
    break;
  case 0x15: ;
    bVar3 = F_008f6f50(this,uVar5);
    break;
  default: ;
    goto switchD_008ffe12_caseD_16;
  case 0x17: ;
    bVar3 = F_008f7040(this,uVar5);
    break;
  case 0x18: ;
    bVar3 = F_008f72e0(this,uVar5);
    break;
  case 0x19: ;
    bVar3 = F_008f7380(this,uVar5);
  }
  if (bVar3 != 0) {
switchD_008ffe12_caseD_16: ;
    iVar1 = *(int *)((int)this + 0xc);
    piVar2 = *(int * PTR32 *)(iVar1 + 0x20);
    if (*piVar2 != *(int *)((int)this + 0x20)) {
      *piVar2 = *(int *)((int)this + 0x20);
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    iVar1 = *(int *)((int)this + 0xc);
    *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10))) = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10))) | 1;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
    uVar4 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x191);
    iVar1 = *(int *)((int)this + 0xc);
    uVar11 = 4;
    uVar10 = 0;
    uVar9 = 0;
    *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x14))) = *(undefined4 *)(uVar4 + 0x14);
    *(undefined1 *)(iVar1 + 0x1d) = 1;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0x38;
    pvVar8 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_008668b0(this_00,uVar5,uVar6,uVar7,pvVar8,uVar9,uVar10,uVar11);
    *(uint *)((int)this + 8) = uVar4;
    *(undefined1 *)((int)this + 0x24) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentReturn::vf5 */
uint F_008fff30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8fff30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_008f7430(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf26 */
uint F_008fff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8fff40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  F_008f7ac0(this,param_1,param_2);
  bVar3 = F_007e3a10(this,param_2,param_3);
  if (bVar3 == 0) {
    F_005a2710(this + 0x10ec,3);
    *(undefined4 *)(this + 0x10f0) = 0;
  }
  F_007e3c50(this);
  F_007e3cc0(this);
  AVar1 = this[0x1fa8];
  F_005a2710(this + 0x105c,3);
  *(int *)(this + 0x1060) = (int)(char)AVar1;
  F_005a2710(this + 0x1dc4,3);
  *(undefined4 *)(this + 0x1dc8) = 0;
  bVar3 = *param_2;
  F_005a2710(this + 0x1064,3);
  *(uint *)(this + 0x1068) = (uint)bVar3;
  bVar3 = param_2[1];
  F_005a2710(this + 0x106c,3);
  *(uint *)(this + 0x1070) = (uint)bVar3;
  bVar3 = param_2[2];
  F_005a2710(this + 0x1074,3);
  *(uint *)(this + 0x1078) = (uint)bVar3;
  bVar3 = param_2[4];
  bVar2 = param_2[5];
  F_005a2710(this + 0x107c,3);
  *(uint *)(this + 0x1080) = (uint)bVar3 * 100 + (uint)bVar2;
  bVar3 = param_2[6];
  F_005a2710(this + 0x1084,3);
  *(uint *)(this + 0x1088) = (uint)bVar3;
  bVar3 = param_2[7];
  uVar4 = F_005a2710(this + 0x108c,3);
  *(uint *)(this + 0x1090) = (uint)bVar3;
  return uVar4;
}

/* ref: FUN_00900080 */
uint F_00900080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x900080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  int * piVar6;
  uint uVar7;
  undefined * this_00;
  uint uVar8;
  uint uVar9;
  byte * pbVar10;
  undefined1 * puVar11;
  undefined * puVar12;
  undefined * pvVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6,2);
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x28))(piVar6,1)));
  pvVar13 = this_00;
  if (((*(int *)((int)this + 0x2e8) != 0) && (uVar7 != 0)) && (this_00 != (undefined *)0x0)) {
    (*(byte *)(gen_frame + 0x1b)) = '\0';
    if (param_1 == 0xfffffffe) {
      F_007819a0(this);
      uVar9 = **(uint * PTR32 *)(uVar7 + 0x20);
      uVar8 = uVar9 | 0x10;
      if (uVar9 != uVar8) {
        **(uint * PTR32 *)(uVar7 + 0x20) = uVar8;
        *(undefined1 *)(uVar7 + 0x1d) = 1;
      }
      if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
        uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0);
        REFG(undefined4, 0x1328330) = 0xffffffff;
        REFG(undefined4, 0x148a44c) = (int *)0x0;
      }
    }
    else {
      bVar3 = 99 < (int)param_1;
      if (bVar3) {
        param_1 = param_1 - 100;
        (*(byte *)(gen_frame + 0x1b)) = 1;
      }
      (*(byte *)(gen_frame + 0x1b)) = bVar3;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)F_008d7bf0((undefined *)((int)this + 0x18),(int)*(char *)((int)this + 0x680),
                                      (int)*(short *)((int)this + 0x682),param_1);
      pvVar13 = (undefined *)0x0;
      if ((*(int * PTR32 *)(gen_frame + 0xc)) == (int *)0x0) goto LAB_0090071e;
      if (*(*(int * PTR32 *)(gen_frame + 0xc)) != 0) {
        uVar9 = F_00e3be40(*(*(int * PTR32 *)(gen_frame + 0xc)));
        if ((uVar9 != 0) && ((*(byte *)(gen_frame + 0x1a)) = *(byte *)(uVar9 + 0x56), *(byte *)(uVar9 + 0x56) != 0)) {
          F_008f8640(this,(uint)*(byte *)(uVar9 + 0x4d),(uint)*(byte *)(uVar9 + 0x4e));
          uVar14 = F_0090c230((*(int * PTR32 *)(gen_frame + 0xc)));
          bVar4 = F_008a3160((undefined *)((int)this + 0x18),(int)uVar14,(int)(uVar14 >> 0x20));
          (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x14)) + 0)) = bVar4;
          (*(int *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x14)), 1, 3),bVar4);
          uVar5 = F_00783200((*(int * PTR32 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)));
          uVar14 = (ulonglong)CONCAT24(uVar5,(*(int *)(gen_frame + 0x14))) & 0xffffffff000000ff;
          F_008f8820(this,(int)uVar14,(int)(uVar14 >> 0x20));
          (*(byte *)(gen_frame + 0x18)) = *(byte *)(uVar9 + 0x57);
          (*(int *)(gen_frame + 0x14)) = (*(byte *)(gen_frame + 0x1a)) - 1;
          (*(byte *)(gen_frame + 0x13)) = *(byte *)(uVar9 + 0x5a);
          (*(int *)(gen_frame + 0x8)) = 0;
          pbVar10 = (byte *)&(*(int *)(gen_frame + 0x14));
          if ((int)((*(byte *)(gen_frame + 0x1a)) - 1) < 1) {
            pbVar10 = (byte *)&(*(int *)(gen_frame + 0x8));
          }
          (*(byte *)(gen_frame + 0x19)) = *pbVar10;
          F_0042b630(((undefined1 *)(gen_frame + 0x70)));
          F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
          F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
          F_008f8bb0(this,(uint)(*(byte *)(gen_frame + 0x19)),(uint)(*(byte *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x70)));
          F_008f8cb0(this,(int)*(char *)((int)this + 0x680),(int)*(short *)((int)this + 0x682),
                       ((undefined1 *)(gen_frame + 0x1c)));
          (*(int *)(gen_frame + 0x8)) = (uint)(*(byte *)(gen_frame + 0x13)) + (uint)(*(byte *)(gen_frame + 0x1a)) * -2 + 1;
          (*(int *)(gen_frame + 0x14)) = 0;
          pbVar10 = (byte *)&(*(int *)(gen_frame + 0x8));
          if ((*(int *)(gen_frame + 0x8)) < 1) {
            pbVar10 = (byte *)&(*(int *)(gen_frame + 0x14));
          }
          (*(byte *)(gen_frame + 0x1a)) = *pbVar10;
          (*(int *)(gen_frame + 0x8)) = *(byte *)(uVar9 + 0x4f) - 1;
          (*(int *)(gen_frame + 0x14)) = 0;
          pbVar10 = (byte *)&(*(int *)(gen_frame + 0x8));
          if ((*(int *)(gen_frame + 0x8)) < 1) {
            pbVar10 = (byte *)&(*(int *)(gen_frame + 0x14));
          }
          (*(byte *)(gen_frame + 0x18)) = *pbVar10;
          if (*(*(int * PTR32 *)(gen_frame + 0xc)) == 0) {
            puVar11 = &REFG(undefined1, 0x107fc63);
          }
          else {
            puVar11 = (undefined1 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x1a);
          }
          F_00431250(this_00,0x58,puVar11,0,1,0);
          uVar8 = F_00781590(this,0x7df);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar17 = 0;
          uVar16 = 1;
          uVar15 = 0;
          uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x70)));
          F_00431250(this_00,0x5a,uVar8,uVar15,uVar16,uVar17);
          uVar8 = F_00781590(this,(uint)(*(byte *)(gen_frame + 0x19)) * 2 + 0x6f);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x16c)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x16c))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar8 = F_00781590(this,0x7e0);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x170)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x170))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar8 = F_00781590(this,((*(byte *)(gen_frame + 0x1a)) + 0x3c + (uint)(*(byte *)(gen_frame + 0x19)) * 2) * 2);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x174)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x174))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar8 = F_00781590(this,((uint)(*(byte *)(gen_frame + 0x1a)) + (uint)(*(byte *)(gen_frame + 0x19)) * 2) * 2 + 0x79);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x178)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x178))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar8 = F_00781590(this,0x7e3);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x17c)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x17c))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar17 = 0;
          uVar16 = 1;
          uVar15 = 0;
          uVar8 = F_0042a990((int)this + 0x4ac);
          F_00431250(this_00,0x60,uVar8,uVar15,uVar16,uVar17);
          uVar17 = 0;
          uVar16 = 1;
          uVar15 = 0;
          uVar8 = F_0042a990((int)this + 0x500);
          F_00431250(this_00,0x61,uVar8,uVar15,uVar16,uVar17);
          uVar8 = F_00781590(this,0x7e2);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x188)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x188))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar8 = F_00781590(this,(uint)(*(byte *)(gen_frame + 0x18)) * 2 + 0x9a);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18c)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18c))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar8 = F_00781590(this,(uint)(*(byte *)(gen_frame + 0x18)) * 2 + 0x9b);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 400)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 400))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar8 = F_00781590(this,0x7e1);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x194)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x194))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar17 = 0;
          uVar16 = 1;
          uVar15 = 0;
          uVar8 = F_0042a990((int)this + 0x404);
          F_00431250(this_00,0x66,uVar8,uVar15,uVar16,uVar17);
          uVar17 = 0;
          uVar16 = 1;
          uVar15 = 0;
          uVar8 = F_0042a990((int)this + 0x458);
          F_00431250(this_00,0x67,uVar8,uVar15,uVar16,uVar17);
          uVar8 = F_00781590(this,0x7e4);
          if (uVar8 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a0)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a0))) = uVar8;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          puVar12 = (undefined *)F_007815d0((int)*(short *)(uVar9 + 0x54));
          if (puVar12 == (undefined *)0x0) {
            puVar12 = &REFG(undefined, 0x10be54b);
          }
          if (puVar12 != *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a4)))) {
            *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a4))) = puVar12;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar9 = F_00781590(this,0x7e5);
          if (uVar9 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a8)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a8))) = uVar9;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          iVar1 = *(int *)((int)this_00 + 0x20);
          iVar2 = *((int *)GEN_TOP((iVar1 + ((int)*(short *)((int)this + 0x682) +
                                   *(char *)((int)this + 0x680) * 0x28) * 4)));
          if (iVar2 != *(int *)(iVar1 + 0x1ac)) {
            *(int *)(iVar1 + 0x1ac) = iVar2;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar17 = 0;
          uVar16 = 1;
          uVar15 = 0;
          uVar9 = F_0042a990(((undefined1 *)(gen_frame + 0x1c)));
          F_00431250(this_00,0x6c,uVar9,uVar15,uVar16,uVar17);
          F_007e4cb0(this,(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0xc4)));
          uVar17 = 0;
          uVar16 = 1;
          uVar15 = 0;
          uVar9 = F_0042a990(((undefined1 *)(gen_frame + 0xc4)));
          F_00431250(this_00,0x7a,uVar9,uVar15,uVar16,uVar17);
          uVar9 = **(uint * PTR32 *)(uVar7 + 0x20);
          uVar8 = uVar9 | 0x10;
          if (uVar9 != uVar8) {
            **(uint * PTR32 *)(uVar7 + 0x20) = uVar8;
            *(undefined1 *)(uVar7 + 0x1d) = 1;
          }
          if ((*(byte *)(gen_frame + 0x1b)) == '\0') {
            (*(byte *)(gen_frame + 0x1b)) = F_007e5eb0(param_1,param_2);
          }
          else {
            uVar14 = F_0090c230((*(int * PTR32 *)(gen_frame + 0xc)));
            (*(byte *)(gen_frame + 0x1b)) = F_007e6180((int)uVar14,(int)(uVar14 >> 0x20));
          }
          F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
          F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
          uVar14 = F_0042c880(((undefined1 *)(gen_frame + 0x70)));
          uVar7 = CONCAT31((int3)(uVar14 >> 8),(*(byte *)(gen_frame + 0x1b)));
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
          return uVar7;
        }
      }
      F_007819a0(this);
      uVar9 = **(uint * PTR32 *)(uVar7 + 0x20);
      uVar8 = uVar9 | 0x10;
      if (uVar9 != uVar8) {
        **(uint * PTR32 *)(uVar7 + 0x20) = uVar8;
        *(undefined1 *)(uVar7 + 0x1d) = 1;
      }
      if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0);
        REFG(undefined4, 0x1328330) = 0xffffffff;
        REFG(undefined4, 0x148a44c) = (int *)0x0;
        F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
        return CONCAT31((int3)(uVar7 >> 8),1);
      }
    }
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return CONCAT31((int3)(uVar8 >> 8),1);
  }
LAB_0090071e: ;
  if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
    pvVar13 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0)));
    REFG(undefined4, 0x1328330) = 0xffffffff;
    REFG(undefined4, 0x148a44c) = (int *)0x0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return (uint)pvVar13 & 0xffffff00;
}

/* ref: Client::UI2::Agent::AgentLobby::vf1 */
uint F_00900760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x900760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  undefined1 AVar2;
  char cVar3;
  byte bVar4;
  undefined1 AVar5;
  ushort uVar6;
  int iVar7;
  int * piVar8;
  undefined * pvVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 * puVar13;
  uint uVar14;
  uint * puVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined * pAVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  code * pcVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  
  fVar1 = REFG(float, 0x1088068);
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  if ((param_3 == 0) && ((this[0x68f] == (undefined1)0x7 || (this[0x68f] == (undefined1)0x8)))) {
LAB_00900795: ;
    this[0x68f] = (undefined1)0x9;
    this[0x6cb] = (undefined1)0x0;
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  }
  if ((param_4 != 0) || (param_3 < 1)) {
    switch((unsigned int)(uintptr_t)(param_4 & 0xff)) {
    case 1: ;
      AVar2 = this[0x670];
      if ((*param_2 & 0xf) == 0) {
        AVar5 = (undefined1)0x0;
      }
      else {
        AVar5 = SUB41(*(undefined4 *)(param_2 + 4),0);
      }
      this[0x670] = AVar5;
      if (AVar5 == AVar2) {
        this[0x6bd] = this[0x671];
      }
      else {
        F_007e5fc0();
      }
      if ((char)this[0x670] < '\0') {
        this[0x68f] = (undefined1)0x3;
        *(undefined4 *)(this + 0x698) = 0;
        *(undefined4 *)(this + 0x69c) = 0;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        this[0x68c] = (undefined1)0x7;
        this[0x68f] = (undefined1)0xb;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      break;
    case 2: ;
      if ((((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) &&
         (piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                       (int)*(short *)(this + 0x682),(int)(char)this[0x671]),
         piVar8 != (int *)0x0)) {
        uVar18 = F_0090c230(piVar8);
        F_0042b630(((undefined1 *)(gen_frame + 0xc)));
        F_0042b630(((undefined1 *)(gen_frame + 0x60)));
        if (*piVar8 == 0) {
          puVar13 = &REFG(undefined1, 0x107fc63);
        }
        else {
          puVar13 = (undefined1 *)(*piVar8 + 0x1a);
        }
        F_0042e430(((undefined1 *)(gen_frame + 0xc)),puVar13);
        if (*piVar8 == 0) {
          puVar13 = &REFG(undefined1, 0x107fc63);
        }
        else {
          puVar13 = (undefined1 *)(*piVar8 + 0x3a);
        }
        F_0042e430(((undefined1 *)(gen_frame + 0x60)),puVar13);
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)(uVar18 >> 0x20);
        (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)uVar18;
        bVar4 = F_008a3160(this + 0x18,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
        (*(uint *)(gen_frame + 0xb8)) = (uint)bVar4;
        uVar6 = F_00783200(piVar8,(uint)bVar4);
        (*(uint *)(gen_frame + 0xb4)) = (uint)uVar6;
        uVar6 = F_00783250(piVar8);
        uVar12 = 0xf;
        (*(uint *)(gen_frame + 0xbc)) = (uint)uVar6;
        pcVar25 = ((code *)REFP(0x916e20));
        uVar27 = 0x8a27a0;
        puVar13 = ((undefined1 *)(gen_frame + 0xc));
        pAVar19 = this;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_0075e840(pvVar9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),puVar13,pcVar25,pAVar19,(int)uVar27,
                     (int)((ulonglong)uVar27 >> 0x20),uVar12);
        F_007e4f40(this);
        F_0042c880(((undefined1 *)(gen_frame + 0x60)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      }
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 3: ;
      if ((((*param_2 & 0xf) == 0) || (iVar16 = *(int *)(param_2 + 4), iVar16 == 0)) ||
         (iVar16 == 7)) {
        *(undefined4 *)(this + 0x684) = 0;
        F_008f2a60(this,0xffffffff);
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        uVar12 = 4;
        if (iVar16 == 6) {
          uVar27 = 0;
          uVar22 = 0;
          uVar21 = 0;
          uVar20 = 0x92;
          pAVar19 = this;
          pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
          uVar14 = F_008668b0(pvVar9,uVar20,uVar21,uVar22,pAVar19,(int)uVar27,
                                (int)((ulonglong)uVar27 >> 0x20),uVar12);
          *(uint *)(this + 0x684) = uVar14;
          *(undefined1 *)(param_1 + 1) = 1;
        }
        else {
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(undefined4 *)(gen_frame + 0xd8)) = 0;
          (*(undefined4 *)(gen_frame + 0xe0)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),4);
          (*(undefined4 *)(gen_frame + 0xc4)) = 0;
          piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
          ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,*(undefined4 *)(this + 8),5,&(*(undefined4 *)(gen_frame + 0xc0)));
          *(undefined4 *)(this + 0x684) = 0;
          puVar15 = &(*(uint *)(gen_frame + 0xe8));
          iVar16 = 4;
          do {
            puVar15 = puVar15 + -2;
            F_005a2670(puVar15);
            iVar16 = iVar16 + -1;
          } while (-1 < iVar16);
          *(undefined1 *)(param_1 + 1) = 1;
        }
      }
      break;
    case 4: ;
      F_008f8f60(this);
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 5: ;
      if ((*param_2 & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(param_2 + 4);
      }
      switch((unsigned int)(uintptr_t)(uVar12)) {
      case 0: ;
        this[0x68c] = (undefined1)0x14;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        break;
      case 1: ;
        this[0x68c] = (undefined1)0x1;
      case 0xffffffff: ;
      case 5: ;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        break;
      default: ;
        goto switchD_009007db_caseD_9;
      }
      break;
    case 6: ;
      F_008a2730(this);
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 7: ;
      if (((((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) &&
          (piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                        (int)*(short *)(this + 0x682),(int)(char)this[0x671]),
          piVar8 != (int *)0x0)) &&
         ((*piVar8 != 0 && (uVar14 = F_00e3be40(*piVar8), uVar14 != 0)))) {
        (*(undefined4 *)(gen_frame + 0xc0)) = 0;
        (*(undefined4 *)(gen_frame + 0xc8)) = 0;
        (*(undefined4 *)(gen_frame + 0xd0)) = 0;
        (*(undefined4 *)(gen_frame + 0xd8)) = 0;
        (*(undefined4 *)(gen_frame + 0xe0)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),4);
        (*(undefined4 *)(gen_frame + 0xc4)) = 8;
        if (*piVar8 == 0) {
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = &REFG(undefined1, 0x107fc63);
        }
        else {
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)(*piVar8 + 0x1a);
        }
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xd0)),6);
        (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = (*(undefined1 * PTR32 *)(gen_frame + 0x4));
        if (*piVar8 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = F_00e3be40(*piVar8);
        }
        bVar4 = *(byte *)(uVar14 + 0x5a);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xd8)),4);
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)(uint)bVar4;
        (*(uint *)(gen_frame + 0xdc)) = (uint)(*(undefined1 * PTR32 *)(gen_frame + 0x4));
        if (*piVar8 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = F_00e3be40(*piVar8);
        }
        bVar4 = *(byte *)(uVar14 + 0x57);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xe0)),4);
        (*(uint *)(gen_frame + 0xe4)) = (uint)bVar4;
        piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,*(undefined4 *)(this + 8),5,&(*(undefined4 *)(gen_frame + 0xc0)));
        puVar15 = &(*(uint *)(gen_frame + 0xe8));
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)0x4;
        do {
          puVar15 = puVar15 + -2;
          F_005a2670(puVar15);
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)((int)(*(undefined1 * PTR32 *)(gen_frame + 0x4)) + -1);
        } while (-1 < (int)(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
      }
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 8: ;
      if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
        piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                     (int)*(short *)(this + 0x682),(int)(char)this[0x671]);
        if (piVar8 != (int *)0x0) {
          if (*piVar8 == 0) {
            (*(undefined1 *)((char *)&(*(undefined1 * PTR32 *)(gen_frame + 0x4)) + 0)) = 0;
          }
          else {
            (*(undefined1 *)((char *)&(*(undefined1 * PTR32 *)(gen_frame + 0x4)) + 0)) = *(byte *)(*piVar8 + 0x10);
          }
          pAVar19 = this + 0x5a8;
          uVar18 = F_0090c230(piVar8);
          uVar14 = F_00884af0(this + 0x18,(uint)(byte)(*(undefined1 * PTR32 *)(gen_frame + 0x4)),(int)uVar18,(int)(uVar18 >> 0x20),
                                pAVar19);
          if ((char)uVar14 != '\0') {
            F_00781b90(this,1);
            uVar12 = 2;
            pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
            F_007601d0(pvVar9,uVar12);
            *(undefined4 *)(this + 0x684) = 0;
            *(undefined1 *)(param_1 + 1) = 1;
            break;
          }
        }
      }
      else {
        piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                     (int)*(short *)(this + 0x682),(int)(char)this[0x671]);
        if (piVar8 != (int *)0x0) {
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(undefined4 *)(gen_frame + 0xd8)) = 0;
          (*(undefined4 *)(gen_frame + 0xe0)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),4);
          (*(undefined4 *)(gen_frame + 0xc4)) = 0x10;
          if (*piVar8 == 0) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = &REFG(undefined1, 0x107fc63);
          }
          else {
            (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)(*piVar8 + 0x1a);
          }
          F_005a2710(&(*(undefined4 *)(gen_frame + 0xd0)),6);
          (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = (*(undefined1 * PTR32 *)(gen_frame + 0x4));
          piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
          ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,*(undefined4 *)(this + 8),5,&(*(undefined4 *)(gen_frame + 0xc0)));
          *(undefined4 *)(this + 0x684) = 0;
          puVar15 = &(*(uint *)(gen_frame + 0xe8));
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)0x4;
          do {
            puVar15 = puVar15 + -2;
            F_005a2670(puVar15);
            (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)((int)(*(undefined1 * PTR32 *)(gen_frame + 0x4)) + -1);
          } while (-1 < (int)(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
        }
      }
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 9: ;
      F_008e18b0(this);
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 10: ;
      if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
        uVar12 = 0;
LAB_00901362: ;
        F_008f2bc0(this,uVar12);
      }
      goto LAB_00901369;
    default: ;
      goto switchD_009007db_caseD_9;
    case 0xd: ;
      if ((0 < param_3) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
        uVar12 = 1;
        goto LAB_00901362;
      }
LAB_00901369: ;
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0xe: ;
      if ((param_3 < 1) ||
         ((((*param_2 & 0xf) != 0 && (*(int *)(param_2 + 4) != 0)) ||
          (pvVar9 = (undefined *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                         (int)*(short *)(this + 0x682),(int)(char)this[0x671]),
          pvVar9 == (undefined *)0x0)))) goto LAB_00901369;
      uVar14 = param_4 >> 0x10;
      uVar18 = F_0090c230(pvVar9);
      F_008b0870(this + 0x18,(int)uVar18,(int)(uVar18 >> 0x20),uVar14);
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0x10: ;
      if ((0 < param_3) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
        uVar14 = 0xffffffff;
LAB_00900e0e: ;
        F_008f2a60(this,uVar14);
      }
    case 0xb: ;
switchD_00900e90_caseD_b: ;
      *(undefined4 *)(this + 0x684) = 0;
LAB_00900e1f: ;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0x11: ;
      if ((param_3 < 1) || (((*param_2 & 0xf) != 0 && (*(int *)(param_2 + 4) != 0)))) {
        if (*((int *)GEN_TOP((*(int *)(this + 0x6d4) + 0xc))) != 0) {
          piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x6d4) + 0xc)));
          ((code *)*(gen_code32 *)(*piVar8 + 0x60))(piVar8,0,0xffffffff);
        }
        this[0x68c] = (undefined1)0x1;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        this[0x68c] = (undefined1)0xf;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      break;
    case 0x12: ;
      (*(undefined4 *)(gen_frame + 0xc0)) = 0;
      (*(undefined4 *)(gen_frame + 0xc8)) = 0;
      (*(undefined4 *)(gen_frame + 0xd0)) = 0;
      (*(undefined4 *)(gen_frame + 0xd8)) = 0;
      (*(undefined4 *)(gen_frame + 0xe0)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),4);
      (*(undefined4 *)(gen_frame + 0xc4)) = 0;
      piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,*(undefined4 *)(this + 8),5,&(*(undefined4 *)(gen_frame + 0xc0)));
      *(undefined4 *)(this + 0x684) = 0;
      puVar15 = &(*(uint *)(gen_frame + 0xe8));
      iVar16 = 4;
      do {
        puVar15 = puVar15 + -2;
        F_005a2670(puVar15);
        iVar16 = iVar16 + -1;
      } while (-1 < iVar16);
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0x14: ;
      if (((0 < param_3) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) == -2))
      goto LAB_00900e1f;
      *(undefined4 *)(this + 0x684) = 0;
      this[0x68c] = this[0x68d];
      this[0x6cf] = (undefined1)0x0;
      *(undefined4 *)(this + 0x6a8) = 0;
      *(undefined4 *)(this + 0x6ac) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0x15: ;
      if ((param_3 < 1) || (((*param_2 & 0xf) != 0 && (*(int *)(param_2 + 4) != 0)))) {
        this[0x68f] = (undefined1)0x9;
        this[0x6cb] = (undefined1)0x0;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        F_008b06d0(this);
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      break;
    case 0x16: ;
      uVar21 = 0;
      uVar27 = 1;
      uVar20 = 10;
      uVar12 = 0;
      pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      F_00820b30(pvVar9,uVar12,uVar20,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar21);
      this[0x68c] = this[0x68d];
      *(undefined1 *)(param_1 + 1) = 1;
    }
    goto LAB_00900a69;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(uint *)(param_2 + 4);
    if (0x66 < uVar14) goto switchD_009007db_caseD_9;
  }
                    
                    
  switch((unsigned int)(uintptr_t)((&REFG(undefined1, 0x90171c))[uVar14])) {
  case 0: ;
    bVar4 = F_00414f10(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10));
    if (bVar4 != 0) goto LAB_00900795;
    F_00883580(this);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 1: ;
    if (6 < *(int *)(this + 0x250)) {
      piVar8 = (int *)F_00783840(this + 0x18);
      if ((piVar8 == (int *)0x0) || ((uint)(piVar8[1] - *piVar8 >> 2) < 2)) {
        this[0x670] = (undefined1)0x0;
        this[0x68c] = (undefined1)0x7;
        this[0x68f] = (undefined1)0xb;
      }
      else if (*(int *)(this + 0x684) == 0) {
        F_00882be0(this,piVar8);
        this[0x68f] = (undefined1)0xa;
      }
    }
    break;
  case 2: ;
    F_00882820(this,1);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 3: ;
    bVar4 = F_00414f10(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10));
    if (bVar4 == 0) {
      F_007e4f40(this);
      F_007e6500(REFG(undefined4, 0x148a454),0);
      this[0x68f] = (undefined1)0xd;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      this[0x68f] = (undefined1)0xf;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    goto LAB_00900a69;
  case 4: ;
    if (1 < param_3) {
      if (((*(uint *)(param_2 + 8) & 0xf) == 0) || (-1 < *(int *)(param_2 + 0xc))) {
        if ((*(uint *)(param_2 + 8) & 0xf) == 0) {
          AVar2 = (undefined1)0x0;
        }
        else {
          AVar2 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
        }
LAB_00900a5f: ;
        this[0x6bd] = AVar2;
      }
      else {
        this[0x6bd] = (undefined1)0xfe;
      }
    }
    break;
  case 5: ;
    F_007e4a80(this,param_1);
    goto LAB_00900a6f;
  case 6: ;
    if (2 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        (*(int *)(gen_frame + 0x8)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x8)) = *(int *)(param_2 + 0xc);
      }
      if ((char)this[0x680] < '\0') {
        this[0x680] = SUB41((*(int *)(gen_frame + 0x8)),0);
      }
      if ((char)this[0x680] == (*(int *)(gen_frame + 0x8))) {
        if ((param_2[0x10] & 0xf) == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = *(int *)(param_2 + 0x14);
        }
        if (iVar16 != *(short *)(this + 0x682)) {
          *(short *)(this + 0x682) = (short)iVar16;
        }
        F_008ed1a0(this,(int)(char)this[0x680],(int)*(short *)(this + 0x682));
        if ((char)this[0x671] < '\0') {
          F_008e1c70(this,0);
        }
        F_008e1790(this,(*(int *)(gen_frame + 0x8)),iVar16,(int)(char)this[0x671]);
        this[0x6bd] = (undefined1)((char)this[0x671] + 'd');
      }
    }
    break;
  case 7: ;
    if (2 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        (*(int *)(gen_frame + 0x8)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x8)) = *(int *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(param_2 + 0x14);
      }
      if (((*(int *)(gen_frame + 0x8)) != (char)this[0x680]) || (iVar16 != *(short *)(this + 0x682))) {
        this[0x680] = (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0));
        *(short *)(this + 0x682) = (short)iVar16;
        F_008ed1a0(this,(int)(char)(*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)),(int)(short)iVar16);
      }
      if (-1 < (char)this[0x671]) {
        F_008e1790(this,(*(int *)(gen_frame + 0x8)),iVar16,(int)(char)this[0x671]);
        AVar2 = (undefined1)((char)this[0x671] + 'd');
        goto LAB_00900a5f;
      }
    }
    break;
  case 8: ;
    if (2 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_2 + 0x14);
      }
      if ((iVar16 != (char)this[0x680]) || (iVar7 != *(short *)(this + 0x682))) {
        *(short *)(this + 0x682) = (short)iVar7;
        this[0x680] = SUB41(iVar16,0);
        F_008ed1a0(this,(int)(char)SUB41(iVar16,0),(int)(short)iVar7);
      }
      F_008e1600(this);
    }
    break;
  case 10: ;
    F_00781c20(this);
    F_007e6500(REFG(undefined4, 0x148a454),0);
    this[0x68f] = (undefined1)0xe;
    F_007e4f40(this);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 0xb: ;
    F_00781c20(this);
    F_008b0700(this);
    this[0x68f] = (undefined1)0x8;
    F_007e4f40(this);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 0xc: ;
    if (2 < param_3) {
      if (((param_2[8] & 0xf) == 0) || (*(int *)(param_2 + 0xc) == 0)) {
        if ((param_2[0x10] & 0xf) == 0) {
          AVar2 = (undefined1)0x0;
        }
        else {
          AVar2 = SUB41(*(undefined4 *)(param_2 + 0x14),0);
        }
        this[0x6bd] = AVar2;
        if ((char)AVar2 < '\0') {
          F_008a2540(this);
        }
        else {
          F_008e1c70(this,(int)(char)AVar2);
          F_008ea800(this,(int)(char)AVar2);
        }
      }
      else if (*(int *)(param_2 + 0xc) == 1) {
        if ((param_2[0x10] & 0xf) == 0) {
          cVar3 = '\0';
        }
        else {
          cVar3 = (char)*(undefined4 *)(param_2 + 0x14);
        }
        F_008e1c70(this,(int)cVar3);
        piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                     (int)*(short *)(this + 0x682),(int)cVar3);
        if ((piVar8 == (int *)0x0) || ((*piVar8 != 0 && (*piVar8 == -0x1a)))) {
          *(undefined4 *)(this + 0x6c0) = 0;
          *(undefined4 *)(this + 0x6c4) = 0;
        }
        else {
          uVar18 = F_0090c230(piVar8);
          *(ulonglong *)(this + 0x6c0) = uVar18;
          uVar14 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
          pvVar9 = *(undefined * PTR32 *)(uVar14 + 0x24);
          F_00769610(pvVar9);
          if ((*piVar8 != 0) && (bVar4 = F_00e3be70(*piVar8), bVar4 != 0)) {
            uVar20 = 0;
            uVar12 = 6;
            pAVar19 = this;
            uVar14 = F_00781590(this,0x17);
            F_00769650(pvVar9,uVar14,pAVar19,uVar12,uVar20);
          }
          if (((uint)piVar8[4] >> 2 & 1) != 0) {
            uVar20 = 0;
            uVar12 = 9;
            pAVar19 = this;
            uVar14 = F_00781590(this,0x4f);
            F_00769650(pvVar9,uVar14,pAVar19,uVar12,uVar20);
          }
          uVar20 = 0;
          uVar12 = 4;
          pAVar19 = this;
          uVar14 = F_00781590(this,0x14);
          F_00769650(pvVar9,uVar14,pAVar19,uVar12,uVar20);
          F_00869700(pvVar9,*(undefined4 *)(this + 8));
        }
      }
    }
    break;
  case 0xd: ;
    *(undefined2 *)(this + 0x68c) = 0;
    this[0x68f] = (undefined1)0x13;
    F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4),1,fVar1,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
                 REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    F_007e4f40(this);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 0xe: ;
    if (param_3 < 2) break;
    if ((param_2[8] & 0xf) == 0) {
      F_008f92c0(this,0);
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      F_008f92c0(this,*(undefined4 *)(param_2 + 0xc));
      *(undefined1 *)(param_1 + 1) = 1;
    }
    goto LAB_00900a69;
  case 0xf: ;
    if (2 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)0x0;
      }
      else {
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = *(undefined1 * PTR32 *)(param_2 + 0x14);
      }
      uVar14 = F_00ab3660(uVar12);
      if (uVar14 == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(uVar14 + 0x38);
      }
      piVar8 = *(int * PTR32 *)(this + 4);
      iVar7 = iVar16;
      uVar14 = F_00781590(this,0x49);
      pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x18))(piVar8)));
      uVar14 = F_00460270(pvVar9,uVar14,iVar7,(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
      uVar12 = *(undefined4 *)(this + 8);
      uVar28 = 0;
      uVar27 = 1;
      uVar26 = 1;
      uVar24 = 0;
      uVar23 = 0;
      uVar22 = 0;
      uVar21 = 4;
      uVar20 = 0;
      uVar17 = iVar16 << 0x10 | 0xe;
      piVar8 = *(int * PTR32 *)(this + 4);
      pAVar19 = this;
      uVar10 = F_00781590(this,0x4b);
      uVar11 = F_00781590(this,0x4a);
      pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x1c))(piVar8)));
      uVar14 = F_00866a60(pvVar9,uVar14,uVar11,uVar10,pAVar19,uVar17,uVar20,uVar12,uVar21,uVar22,
                            uVar23,uVar24,uVar26,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar28
                           );
      *(uint *)(this + 0x684) = uVar14;
    }
    break;
  case 0x10: ;
    this[0x68f] = (undefined1)0xf;
    break;
  case 0x11: ;
    if (1 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(param_2 + 0xc);
      }
      uVar14 = F_00ab3660(uVar12);
      if (uVar14 == 0) {
        F_00782910(0);
      }
      else {
        F_00782910(*(undefined4 *)(uVar14 + 0x38));
      }
    }
    break;
  case 0x12: ;
    if (param_3 < 2) break;
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 0x13: ;
    if (1 < param_3) {
      if (((*(uint *)(param_2 + 8) & 0xf) == 0) || (-1 < *(int *)(param_2 + 0xc))) {
        if ((*(uint *)(param_2 + 8) & 0xf) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(uint *)(param_2 + 0xc);
        }
        uVar14 = uVar14 & 0xffff;
        goto LAB_00900e0e;
      }
      goto switchD_00900e90_caseD_b;
    }
    goto LAB_00900e1f;
  }
switchD_009007db_caseD_9: ;
  *(undefined1 *)(param_1 + 1) = 0;
LAB_00900a69: ;
  *param_1 = 2;
LAB_00900a6f: ;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf26 */
uint F_00901800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x901800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  F_008fff40((undefined *)this,param_1,param_2,param_3);
  if (((byte)this[0x1dc4] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(this + 0x1dc8);
  }
  if (this[0x1fa8] == (undefined1)0x2) {
    uVar2 = uVar2 | 0xc00;
  }
  uVar1 = F_005a2710(this + 0x1dc4,3);
  *(uint *)(this + 0x1dc8) = uVar2;
  return uVar1;
}

/* ref: Client::UI2::Agent::LobbyUIClient::vf20 */
uint F_00901860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x901860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  F_008be320(this,*(undefined4 *)(this + 0x14));
  iVar1 = *(int *)(this + 4);
  *(undefined2 *)(iVar1 + 0x250) = 0;
  iVar2 = *(int *)(iVar1 + 0x240);
  if (iVar2 != *(int *)(iVar1 + 0x244)) {
    F_00c46e20(iVar2,*(int *)(iVar1 + 0x244),0);
    *(int *)(iVar1 + 0x244) = iVar2;
  }
  *(undefined4 *)(this + 0xfc) = 0x11;
  puVar3 = *(undefined4 * PTR32 *)(this + 4);
  puVar3[0x8e] = 0x12;
  uVar4 = F_008f9880((undefined *)*puVar3,param_1);
  return uVar4;
}

/* ref: FUN_009018e0 */
uint F_009018e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9018e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined * pvVar8;
  uint uVar9;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  pvVar8 = this;
  if ((piVar2 != (int *)0x0) && (piVar2[1] - *piVar2 >> 2 == param_2)) {
    F_009542b0((undefined *)((int)this + 0xec));
    uVar9 = 0;
    if (param_2 != 0) {
      do {
        iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + uVar9 * 4) + 4)));
        if ((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + 0xa8), cVar1 == '\0')) {
          piVar2 = *(int * PTR32 *)((int)pvVar8 + 0x14);
          if ((piVar2 != (int *)0x0) && (uVar9 < (uint)(piVar2[1] - *piVar2 >> 2))) {
            if ((uint)(piVar2[1] - *piVar2 >> 2) <= uVar9) goto LAB_00901a48;
            iVar3 = *(int *)(*piVar2 + uVar9 * 4);
            if ((iVar3 != 0) && (uVar6 = F_00e3be40(iVar3), uVar6 != 0)) {
              (*(char *)(gen_frame + 0x1b)) = *(char *)(uVar6 + 0x50);
              goto LAB_0090197f;
            }
          }
          (*(char *)(gen_frame + 0x1b)) = '\0';
        }
        else {
          (*(char *)(gen_frame + 0x1b)) = cVar1;
        }
LAB_0090197f: ;
        iVar3 = **(int * PTR32 *)((int)pvVar8 + 0x14);
        if ((uint)((*(int * PTR32 *)((int)pvVar8 + 0x14))[1] - iVar3 >> 2) <= uVar9) {
LAB_00901a48: ;
                    
          F_00c457e7("invalid vector<T> subscript");
        }
        iVar3 = *(int *)(iVar3 + uVar9 * 4);
        uVar4 = *(undefined4 *)(iVar3 + 0xc);
        uVar5 = *(undefined4 *)(iVar3 + 8);
        puVar7 = (undefined4 *)F_004296a0(0x28,0,400);
        *puVar7 = *(undefined4 *)((int)this + 0xf0);
        puVar7[1] = *(undefined4 *)((int)this + 0xf0);
        puVar7[2] = *(undefined4 *)((int)this + 0xf0);
        *(undefined2 *)(puVar7 + 8) = 0;
        if (puVar7 + 4 != (undefined4 *)0x0) {
          puVar7[5] = uVar4;
          puVar7[4] = uVar5;
          *(char *)(puVar7 + 6) = (*(char *)(gen_frame + 0x1b));
        }
        F_00956da0((undefined *)((int)this + 0xec),((undefined1 *)(gen_frame + 0xc)),puVar7,0);
        uVar9 = uVar9 + 1;
        pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      } while (uVar9 < param_2);
    }
  }
  puVar7 = *(undefined4 * PTR32 *)((int)pvVar8 + 0x110);
  if (puVar7 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
    *(undefined4 *)((int)pvVar8 + 0x110) = 0;
  }
  if (*(int *)((int)pvVar8 + 0xfc) != 8) {
    puVar7 = *(undefined4 * PTR32 *)((int)pvVar8 + 4);
    *(undefined4 *)((int)pvVar8 + 0xfc) = 0xd;
    uVar9 = F_008f9730((undefined *)*puVar7,*(undefined4 *)((int)pvVar8 + 0x108),(int)pvVar8 + 0x9c,
                         (int)pvVar8 + 0x18,*(undefined4 *)((int)pvVar8 + 0x28),
                         *(undefined4 *)((int)pvVar8 + 0x104));
    puVar7[0x8e] = 0xe;
    return uVar9;
  }
  *(undefined4 *)((int)pvVar8 + 0xfc) = 10;
  uVar9 = F_008ed740(*(undefined * PTR32 *)((int)pvVar8 + 4),pvVar8,(int)pvVar8 + 0x9c,(int)pvVar8 + 0x18,
                       *(undefined4 *)((int)pvVar8 + 0x28));
  return uVar9;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf2 */
uint F_00901aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x901aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 6) {
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x39c) + 100)))) {
      uVar2 = F_008f99c0(this);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar2;
    }
  }
  else if (uVar2 == 0xc) {
    uVar2 = param_4[3];
    (*(int *)(gen_frame + 0xc)) = param_4[2];
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    if (((char)param_4[1] == '\0') && ((*param_4 == 2 || (*param_4 == 3)))) {
      piVar1 = *(int * PTR32 *)(this + 0x398);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
      if (uVar2 == uVar3) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar2;
      }
      F_0059b390(this,*(undefined4 *)(this + 0x398),1,0);
      uVar2 = F_00557670(param_3,0);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar2;
    }
  }
  else if (uVar2 == 0x17) {
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x398) + 100)))) {
      F_00557670(param_3,0);
      F_0042b630(((undefined1 *)(gen_frame + 0x14)));
      if (this[0x3a3] == (undefined1)0x0) {
        uVar2 = F_0042a990(this + 0x180);
        F_0042e430(((undefined1 *)(gen_frame + 0x14)),uVar2);
        F_0042e370(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10c342c));
        uVar2 = F_0042a990(this + 0x1d4);
        F_0042e370(((undefined1 *)(gen_frame + 0x14)),uVar2);
      }
      else {
        F_0042ccf0(((undefined1 *)(gen_frame + 0x14)),this + 0x324);
      }
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
      (*(int *)(gen_frame + 0xc)) = 6;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
      this_00 = ((undefined1 *)(gen_frame + 0x14));
      iVar4 = 1;
      do {
        this_00 = this_00 + -8;
        F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      uVar2 = (uint)uVar5;
    }
    else {
      uVar2 = param_2;
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x39c) + 100)))) {
        uVar2 = F_0085f0d0(this);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar2;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00901c90 */
uint F_00901c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x901c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_008f9b70(this,0,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00901cb0 */
uint F_00901cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x901cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_008f9b70(this,1,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf2 */
uint F_00901cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x901cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  uint uVar2;
  int * in_ebx_00;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((byte *)(gen_frame + 0x4))[100] = (char)uVar1;
  ((byte *)(gen_frame + 0x4))[0x65] = (char)(uVar1 >> 8);
  ((byte *)(gen_frame + 0x4))[0x66] = (char)(uVar1 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0x67] = (char)(uVar1 >> 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_5;
  if ((((*(undefined * PTR32 *)((int)in_ecx + 0x180) != (undefined *)0x0) &&
       ((*(byte *)((int)in_ecx + 0xf9) & 1) != 0)) &&
      (uVar1 = *(uint *)((int)in_ecx + 0xf4) >> 0x14 & 0xf, uVar1 != 5)) && (uVar1 != 4)) {
    uVar2 = param_3 & 0xffff;
    uVar1 = uVar2 - 6;
    if (uVar2 - 6 < 0x12) {
      uVar1 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x901f08) + uVar2 + 2)));
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 6: ;
        uVar1 = *(uint *)((int)in_ecx + 0x2a4);
        if (param_4 == *(ushort *)(uVar1 + 100)) {
          uVar1 = F_008f9f10(in_ecx);
          F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
          return uVar1;
        }
        break;
      case 0xc: ;
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_6[2];
        in_ebx_00 = (int *)param_6[3];
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = in_ebx_00;
        if (((char)param_6[1] == '\0') && (*param_6 == 2)) {
          in_ebx_00 = *(int * PTR32 *)((int)in_ecx + 0x2a0);
          uVar1 = F_0055dcb0();
          uVar1 = F_0055b9e0(uVar1);
          ((byte *)(gen_frame + 0x4))[8] = (char)uVar1;
          ((byte *)(gen_frame + 0x4))[9] = (char)(uVar1 >> 8);
          ((byte *)(gen_frame + 0x4))[10] = (char)(uVar1 >> 0x10);
          ((byte *)(gen_frame + 0x4))[0xb] = (char)(uVar1 >> 0x18);
          uVar1 = ((code *)*(gen_code32 *)(*in_ebx_00 + 0x3c))(in_ebx_00);
          if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != uVar1) {
            F_0059b390(in_ecx,*(undefined4 *)((int)in_ecx + 0x2a0),1,0);
            uVar1 = F_00557670((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)),0);
            break;
          }
        }
        uVar1 = F_008a99b0(*(undefined4 *)((int)in_ecx + 0x180),in_ebx_00,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)),param_6,
                             0xffffffff);
        F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar1;
      case 0xf: ;
        uVar1 = F_0081c250(*(undefined * PTR32 *)((int)in_ecx + 0x180),param_5,param_6);
        F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar1;
      case 0x17: ;
        if (param_4 == *((ushort *)GEN_TOP((*(int *)((int)in_ecx + 0x2a0) + 100)))) {
          F_0042b630(((byte *)(gen_frame + 0x4)) + 0x10);
          if (*(char *)((int)in_ecx + 0x2ad) == '\0') {
            uVar1 = F_0042a990(*(int *)((int)in_ecx + 0x28c) + 0x9c);
            F_0042e430(((byte *)(gen_frame + 0x4)) + 0x10,uVar1);
            F_0042e370(((byte *)(gen_frame + 0x4)) + 0x10,&REFG(undefined, 0x10c3660));
            uVar1 = F_0042a990(*(int *)((int)in_ecx + 0x290) + 0x9c);
            F_0042e370(((byte *)(gen_frame + 0x4)) + 0x10,uVar1);
          }
          else {
            uVar1 = F_0042a990(*(int *)((int)in_ecx + 0x294) + 0x9c);
            F_0042e430(((byte *)(gen_frame + 0x4)) + 0x10,uVar1);
          }
          uVar1 = F_0042a990(((byte *)(gen_frame + 0x4)) + 0x10);
          F_00896ac0(*(undefined4 *)((int)in_ecx + 0x180),in_ebx,1,0,0,uVar1);
          uVar3 = F_0042c880(((byte *)(gen_frame + 0x4)) + 0x10);
          F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
          return (uint)uVar3;
        }
        uVar1 = param_4;
        if (param_4 == *((ushort *)GEN_TOP((*(int *)((int)in_ecx + 0x2a4) + 100)))) {
          uVar1 = F_0085fa00(in_ecx);
          F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
          return uVar1;
        }
      }
    }
  }
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf44 */
uint F_009024b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9024b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint * puVar4;
  char * pcVar5;
  undefined * pvVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar1 = F_0055e2f0(this,3);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 10)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x208) = uVar1;
  uVar1 = F_0055e2f0(this,0x27);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x20c) = uVar1;
  F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0xc,(uint)*(ushort *)(uVar1 + 100),this,0,0);
  uVar1 = F_0055e2f0(this,0x28);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x210) = uVar1;
  F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0xc,(uint)*(ushort *)(uVar1 + 100),this,0,0);
  pvVar3 = (undefined *)F_0055e340(this,2);
  puVar4 = (uint *)F_00ab36c0(0x7a2);
  if (puVar4 == (uint *)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
  }
  F_00584110(pvVar3,pcVar5);
  uVar1 = *(uint *)(param_2 + 0x100) & 0xf;
  if (uVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x104);
  }
  (*(int *)(gen_frame + 0x20)) = iVar7 / 100;
  iVar7 = 0;
  if (uVar1 != 0) {
    iVar7 = *(int *)(param_2 + 0x104);
  }
  *(int *)(this + 0x21c) = iVar7 % 100;
  iVar7 = 2;
  do {
    uVar1 = F_0055e2f0(this,iVar7 + 3);
    if (((uVar1 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar1), pvVar3 == (undefined *)0x0)) ||
       (uVar1 = F_005613a0(pvVar3), uVar1 != 4)) {
      pvVar3 = (undefined *)0x0;
    }
    F_0042ce40(((undefined1 *)(gen_frame + 0x24)),&REFG(undefined, 0x10c36e4),iVar7 + -1);
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x24)));
    F_00589280(pvVar3,uVar1);
    if (pvVar3 == (undefined *)0x0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
    }
    F_00568380(pvVar6,0x17,iVar7,this,0,0);
    if (pvVar3 == (undefined *)0x0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
    }
    F_00568380(pvVar6,6,iVar7,this,0,0);
    if (pvVar3 == (undefined *)0x0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
    }
    F_00568380(pvVar6,7,iVar7,this,0,0);
    *(undefined1 *)((int)pvVar3 + 0x136) = 1;
    if (iVar7 + -2 == *(int *)(this + 0x21c)) {
      F_0059dde0(pvVar3,1);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x24)));
    uVar1 = iVar7 - 1;
    iVar7 = iVar7 + 1;
  } while (uVar1 < 0x20);
  if (*(int *)(this + 0x208) != 0) {
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7c4be0));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x208) + 0x88))),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x208) + 0x88))),0xc,0,1);
    if (*((int *)GEN_TOP((*(int *)(this + 0x208) + 0x88))) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x208) + 0x88))) + 0x70)));
    }
    F_00568380(pvVar3,0x23,0,this,0,0);
    F_0059caa0(*(undefined * PTR32 *)(this + 0x208),(*(int *)(gen_frame + 0x20)));
    uVar1 = F_00561490(*(undefined * PTR32 *)(this + 0x208),3);
    *(uint *)(this + 0x98) = uVar1;
  }
  if (*(int *)(this + 0x20c) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  F_00568380(pvVar3,0x17,0,this,0,0);
  if (*(int *)(this + 0x210) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  F_00568380(pvVar3,0x17,1,this,0,0);
  uVar1 = F_0055e340(this,0x25);
  *(uint *)(this + 0x214) = uVar1;
  uVar1 = F_0055e340(this,0x26);
  *(uint *)(this + 0x218) = uVar1;
  F_008fa600(this,(*(int *)(gen_frame + 0x20)),*(undefined4 *)(this + 0x21c));
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0x32,0,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0x32,0,(float)(float10)1,1);
  *(undefined4 *)(this + 0xa0) = 0;
  uVar1 = F_005b0610(this,1,1,0);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf2 */
unsigned int F_00902840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x902840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  undefined * this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char * pcVar4;
  undefined4 uVar5;
  
  this = *(undefined * PTR32 *)((int)in_ecx + 0x180);
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = *(uint *)((int)in_ecx + 0xf4) >> 0x14 & 0xf;
  if (uVar1 == 5) {
    return 0;
  }
  if (uVar1 == 4) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)((undefined2)param_3)) {
  case 6: ;
    iVar2 = param_4 - 2;
    goto LAB_0090295e;
  case 7: ;
    iVar2 = *(int *)((int)in_ecx + 0x21c);
LAB_0090295e: ;
    uVar1 = F_00562c60(*(undefined4 *)((int)in_ecx + 0x208));
    F_008fa600(in_ecx,uVar1,iVar2);
    return 0;
  case 0xc: ;
    if ((param_4 != *((ushort *)GEN_TOP((*(int *)((int)in_ecx + 0x20c) + 100)))) &&
       (param_4 != *((ushort *)GEN_TOP((*(int *)((int)in_ecx + 0x210) + 100))))) {
      F_008a99b0(this,in_ebx,param_5,param_6,0xffffffff);
      return 0;
    }
    uVar1 = F_00557620(param_6);
    if ((char)uVar1 != '\0') {
      uVar5 = 0;
      uVar3 = 1;
      uVar1 = F_00860cb0(in_ecx);
      F_0059b390(in_ecx,uVar1,uVar3,uVar5);
      F_00557670(param_5,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 0x210) + 0x34))))(*(int * PTR32 *)((int)in_ecx + 0x210));
      return 0;
    }
    break;
  case 0xf: ;
    F_0081c250(this,param_5,param_6);
    break;
  case 0x17: ;
    if (param_4 == 0) {
      uVar3 = *(undefined4 *)((int)in_ecx + 0x21c);
      pcVar4 = "";
      uVar1 = F_00562c60(*(undefined4 *)((int)in_ecx + 0x208));
      F_00896ac0(*(undefined4 *)((int)in_ecx + 0x180),in_ebx,1,uVar1,uVar3,pcVar4);
      return 0;
    }
    if (param_4 == 1) {
      F_00896ac0(this,in_ebx,0xffffffff,0,0,"");
      return 0;
    }
    iVar2 = param_4 - 2;
    pcVar4 = "";
    *(int *)((int)in_ecx + 0x21c) = iVar2;
    uVar1 = F_00562c60(*(undefined4 *)((int)in_ecx + 0x208));
    F_00896ac0(*(undefined4 *)((int)in_ecx + 0x180),in_ebx,0,uVar1,iVar2,pcVar4);
    uVar3 = *(undefined4 *)((int)in_ecx + 0x21c);
    uVar1 = F_00562c60(*(undefined4 *)((int)in_ecx + 0x208));
    F_008fa600(in_ecx,uVar1,uVar3);
    if ((*(byte *)(param_6 + 7) & 8) != 0) {
      F_0059b390(in_ecx,*(undefined4 *)((int)in_ecx + 0x20c),1,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 0x20c) + 0x34))))(*(int * PTR32 *)((int)in_ecx + 0x20c));
      return 0;
    }
    break;
  case 0x23: ;
    uVar3 = *(undefined4 *)((int)in_ecx + 0x21c);
    uVar1 = F_00562c60(*(undefined4 *)((int)in_ecx + 0x208));
    F_008fa600(in_ecx,uVar1,uVar3);
    uVar3 = *(undefined4 *)((int)in_ecx + 0x21c);
    pcVar4 = "";
    uVar1 = F_00562c60(*(undefined4 *)((int)in_ecx + 0x208));
    F_00896ac0(*(undefined4 *)((int)in_ecx + 0x180),in_ebx,0,uVar1,uVar3,pcVar4);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf44 */
uint F_00902a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x902a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(byte * PTR32 *)(gen_frame + 0x20)) = param_2;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1493be4) + 0x14))))(REFG(undefined4, 0x1493be4));
  uVar2 = F_0055e2f0(this,7);
  uVar6 = 0;
  if (uVar2 != 0) {
    (*(uint *)(gen_frame + 0x1c)) = F_00559c20(uVar2);
    if (((*(uint *)(gen_frame + 0x1c)) != 0) && (uVar3 = F_005613a0((*(uint *)(gen_frame + 0x1c))), uVar2 = (*(uint *)(gen_frame + 0x1c)), uVar3 == 9))
    goto LAB_00902ada;
  }
  uVar2 = 0;
LAB_00902ada: ;
  *(uint *)(this + 0x180) = uVar2;
  if (uVar2 == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_00568380(pvVar4,0x21,0,this,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x180),1,1,0);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 2;
  (*(undefined4 *)(gen_frame + 0x30)) = 3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x8fadc0));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x180),&(*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x24)),3,0);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x180),uVar1,0,1);
  if (uVar1 != 0) {
    F_005623b0(*(undefined * PTR32 *)(this + 0x180),0);
  }
  F_0056d400(*(undefined * PTR32 *)(this + 0x180),1,0,0);
  if ((*(*(byte * PTR32 *)(gen_frame + 0x20)) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 4);
  }
  *(undefined4 *)(this + 0x1dc) = uVar5;
  if (((*(byte * PTR32 *)(gen_frame + 0x20))[8] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0xc);
  }
  *(undefined4 *)(this + 0x1e0) = uVar5;
  if (((*(byte * PTR32 *)(gen_frame + 0x20))[0x10] & 0xf) != 0) {
    uVar6 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0x14);
  }
  F_0042e430(this + 0x188,uVar6);
  pvVar4 = (undefined *)F_0055e340(this,2);
  uVar1 = F_00584580(pvVar4,1);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf44 */
uint F_00902bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x902bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar2 = F_0055e2f0(this,7);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 9)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x180) = uVar2;
  if (uVar2 == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_00568380(pvVar4,0x21,0,this,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x180),1,1,0);
  iVar1 = REFG(int, 0x1493bd0);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  (*(undefined4 *)(gen_frame + 0x24)) = 5;
  (*(undefined4 *)(gen_frame + 0x30)) = 6;
  (*(undefined4 *)(gen_frame + 0x3c)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x8fb7a0));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x180),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x18)),4,0);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x180),iVar1,0,1);
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0;
  }
  F_005623b0(*(undefined * PTR32 *)(this + 0x180),uVar5);
  F_0056d400(*(undefined * PTR32 *)(this + 0x180),1,0,0);
  pvVar4 = (undefined *)F_0055e340(this,2);
  uVar2 = F_00584580(pvVar4,1);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf46 */
byte F_00902d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x902d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  if (*(int *)(this + 400) == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
  F_0059dbe0(*(undefined * PTR32 *)(this + 0x18c),uVar1,uVar2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
  F_008fbe70(this,uVar1);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*((undefined1 *)GEN_TOP((*(int *)(this + 0x180) + 0x28))));
  if (*(int *)(this + 400) == 0) {
    F_0055a300((undefined *)0x0,local_8);
    return 1;
  }
  F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),local_8);
  return 1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf2 */
uint F_00902db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x902db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = (uint)(ushort)param_1;
  if (uVar1 == 0xc) {
    uVar1 = *(uint *)(this + 400);
    if (param_2 == *(ushort *)(uVar1 + 100)) {
      uVar1 = F_00557620(param_4);
      if ((char)uVar1 != '\0') {
        F_0059b390(this,*(undefined4 *)(this + 0x18c),1,0);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x200000;
        F_00557670(param_3,0);
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x34))))(*(int * PTR32 *)(this + 400));
      }
    }
  }
  else if (uVar1 == 0x17) {
    uVar1 = *(uint *)(this + 400);
    if ((param_2 == *(ushort *)(uVar1 + 100)) && ((ushort)param_1 == 0x17)) {
      uVar1 = F_00862b10(*(undefined * PTR32 *)(this + 0x180));
      return uVar1;
    }
  }
  else if (uVar1 == 0x1b) {
    F_008fbe70(this,*param_4);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180),*param_4);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00902e70 */
unsigned int F_00902e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x902e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x140);
    if (*(int *)(uVar3 + 0x14) != 0) {
      uVar3 = F_00ab3b40(param_1);
      if (uVar3 != 0) {
        if (*(char *)(uVar3 + 0x1a) != '\0') {
          F_008fe450(*(undefined * PTR32 *)((int)this + 0x23230),param_1);
          return 0;
        }
        piVar1 = *(int * PTR32 *)((int)this + 0x2322c);
        piVar1[7] = param_2;
        pcVar2 = *(gen_code32 *)(*piVar1 + 8);
        piVar1[6] = param_1;
        *(undefined1 *)(piVar1 + 8) = 0;
        (*pcVar2)(piVar1);
      }
    }
  }
  return 0;
}

/* ref: FUN_00902ee0 */
unsigned int F_00902ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x902ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + -4) != 0) {
    F_008fc390((undefined *)((int)this + -0xc),1,0);
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
    iVar2 = *(int *)((int)this + 0x44) - *(int *)((int)this + 0x40) >> 3;
    if (iVar2 == 0) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x5c))
              (piVar1,*(undefined4 *)((int)this + -4),iVar2,*(int *)((int)this + 0x40));
    F_00488040((undefined *)((int)this + 0x40),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x40),
                 *(undefined4 *)((int)this + 0x44));
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf1 */
uint F_00903750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x903750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined1 local_5;
  
  uVar1 = 0;
  local_5 = 0;
  if ((*param_2 & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 0: ;
    local_5 = 0;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x24);
    }
    F_008fe040(this,uVar5,(uint)(iVar2 != 0));
    break;
  case 1: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((param_2[0x10] & 0xf) == 0) {
      F_008fe0e0(this,uVar5,0);
      local_5 = uVar1;
    }
    else {
      F_008fe0e0(this,uVar5,*(undefined4 *)(param_2 + 0x14));
      local_5 = uVar1;
    }
    break;
  case 2: ;
    if ((param_2[8] & 0xf) == 0) {
      *(undefined4 *)(this + 0x28) = 0;
      F_008fc9b0(this);
      local_5 = uVar1;
    }
    else {
      if (*(uint *)(param_2 + 0xc) < 10) {
        *(uint *)(this + 0x28) = *(uint *)(param_2 + 0xc);
      }
      F_008fc9b0(this);
      local_5 = uVar1;
    }
    break;
  case 3: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar7 = 0;
LAB_0090383e: ;
      *(undefined4 *)(this + 0x28) = 3;
      *(uint *)(this + 0x2c) = uVar7;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0xc);
      if (uVar7 < 10) goto LAB_0090383e;
    }
    F_008fc9b0(this);
    local_5 = uVar1;
    break;
  case 4: ;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0x1c);
    }
    uVar9 = uVar7 & 0xffffff;
    if (uVar7 >> 0x18 == 5) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x118))))(*(int * PTR32 *)(this + 4),uVar9);
      local_5 = uVar1;
    }
    else {
      uVar12 = 0;
      uVar5 = 0;
      uVar10 = F_00533b60(&REFG(undefined4, 0x1375bc0));
      uVar7 = F_0076a7a0(uVar7 >> 0x18);
      F_00ac83b0(&REFG(undefined, 0x14bcf40),uVar7,uVar9,(int)uVar10,(int)(uVar10 >> 0x20),uVar5,uVar12);
      local_5 = uVar1;
    }
    break;
  case 5: ;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0x1c);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0x24);
    }
    uVar8 = uVar7 & 0xffffff;
    if ((uVar9 & 0x2000) == 0) {
      if ((uVar9 & 0x1000) != 0) {
        uVar3 = F_00ab1f00(uVar8);
        piVar6 = *(int * PTR32 *)(this + 4);
        uVar10 = CONCAT44(9,uVar7) & 0xffffffff00ffffff;
        uVar4 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
        uVar7 = (uint)*(ushort *)(uVar3 + 0xc);
        goto LAB_00903a2e;
      }
      if ((uVar9 & 0x100000) != 0) {
        uVar7 = F_00ab2cf0(uVar8);
        uVar5 = 7;
        goto LAB_009038e6;
      }
      if ((uVar9 & 0x400000) != 0) {
        uVar3 = F_00ab2870(uVar8);
        piVar6 = *(int * PTR32 *)(this + 4);
        uVar10 = CONCAT44(8,uVar7) & 0xffffffff00ffffff;
        uVar4 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
        uVar7 = (uint)*(ushort *)(uVar3 + 0x16);
        goto LAB_00903a2e;
      }
      if ((uVar9 & 0x80000) != 0) {
        uVar7 = F_00ab2c30(uVar8);
        uVar5 = 6;
        goto LAB_009038e6;
      }
      if ((uVar9 & 0x800000) == 0) {
        if ((uVar9 & 0x1000000) != 0) {
          uVar3 = F_00ab2840(uVar8);
          piVar6 = *(int * PTR32 *)(this + 4);
          uVar10 = CONCAT44(0xd,uVar7) & 0xffffffff00ffffff;
          uVar7 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
          uVar11 = CONCAT44(uVar7,(uint)*(ushort *)(uVar3 + 0x9a));
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x54))
                                      (piVar6,(uint)*(ushort *)(uVar3 + 0x9a),uVar7)));
          goto LAB_00903a3c;
        }
        local_5 = uVar1;
        if (uVar8 == 0xffffff) break;
        uVar3 = F_00ab1ed0(uVar8);
        piVar6 = *(int * PTR32 *)(this + 4);
        uVar10 = CONCAT44(1,uVar7) & 0xffffffff00ffffff;
        uVar4 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
        uVar7 = (uint)*(ushort *)(uVar3 + 8);
      }
      else {
        uVar3 = F_00ab2d50(uVar8);
        piVar6 = *(int * PTR32 *)(this + 4);
        uVar10 = CONCAT44(0xb,uVar7) & 0xffffffff00ffffff;
        uVar4 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
        uVar7 = *(uint *)(uVar3 + 8);
      }
LAB_00903a2e: ;
      uVar11 = CONCAT44(uVar4,uVar7);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6)));
    }
    else {
      uVar7 = F_00ab1f30(uVar8);
      uVar5 = 5;
LAB_009038e6: ;
      piVar6 = *(int * PTR32 *)(this + 4);
      uVar3 = F_00463610(2,uVar8,uVar5);
      uVar11 = CONCAT44(uVar3,*(undefined4 *)(uVar7 + 8));
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6,*(undefined4 *)(uVar7 + 8),uVar3)));
    }
LAB_00903a3c: ;
    F_00434720(this_00,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar9,uVar8);
    local_5 = uVar1;
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    local_5 = 1;
    *(undefined4 *)(this + 8) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = local_5;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf5 */
uint F_00903a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x903a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
  AVar1 = (undefined1)0x1;
  if ((*(byte *)(uVar2 + 0x230bf) & 0x10) == 0) {
    AVar1 = this[0xc];
  }
  this[0xc] = AVar1;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
  AVar1 = (undefined1)0x1;
  if ((*(byte *)(uVar2 + 0x230bf) & 0x20) == 0) {
    AVar1 = this[0xd];
  }
  this[0xd] = AVar1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar2 != '\0') &&
     ((this[0xc] != (undefined1)0x0 || (this[0xd] != (undefined1)0x0)))) {
    uVar2 = F_008fc9b0(this);
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf2 */
uint F_00903ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x903ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)(this + 0x28) = 4;
  *(undefined4 *)(this + 0x2c) = 10;
  uVar1 = F_008fc9b0(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf14 */
uint F_00903b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x903b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = F_008fc9b0(this);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf15 */
uint F_00903b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x903b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = F_008fc9b0(this);
  }
  return uVar1;
}

/* ref: FUN_00903b50 */
uint F_00903b50(unsigned int gen_a0)
{
  GEN_ENTER(0x903b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * in_EAX;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)((int)this + 0x34) != 0) {
    uVar3 = F_00427d90();
    uVar1 = *(uint *)((int)this + 0x30);
    iVar2 = 0;
    if (*(int * PTR32 *)((int)this + 0x24) != (int *)0x0) {
      iVar2 = **(int * PTR32 *)((int)this + 0x24);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    in_EAX = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
    if ((uint)in_EAX[1] <= (uint)((int)uVar3 - in_EAX[2])) {
      uVar4 = *in_EAX;
      uVar5 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      F_00902e70(this_00,uVar4,uVar5);
      in_EAX = *(undefined4 * PTR32 *)((int)this + 0x34);
      if (in_EAX != (undefined4 *)0x0) {
        *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
        if (*(uint *)((int)this + 0x2c) <= *(uint *)((int)this + 0x30)) {
          *(undefined4 *)((int)this + 0x30) = 0;
        }
        in_EAX = (undefined4 *)((int)in_EAX + -1);
        *(undefined4 * PTR32 *)((int)this + 0x34) = in_EAX;
        if (in_EAX == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x30) = 0;
        }
      }
      if (*(int *)((int)this + 0x34) != 0) {
        uVar1 = *(uint *)((int)this + 0x30);
        if (*(int * PTR32 *)((int)this + 0x24) == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = **(int * PTR32 *)((int)this + 0x24);
        }
        if (*(uint *)(iVar2 + 8) <= uVar1) {
          uVar1 = uVar1 - *(uint *)(iVar2 + 8);
        }
        in_EAX = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
        *(ulonglong *)(in_EAX + 2) = uVar3;
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00903c10 */
uint F_00903c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x903c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  bVar1 = F_00770240(param_1,param_2,param_4,param_6);
  (*(uint *)(gen_frame + 0x10)) = F_00770e40(((undefined1 *)(gen_frame + 0x1c)),5,param_3);
  iVar3 = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (bVar1 != 0) {
    if (4 < (int)(*(uint *)(gen_frame + 0x10))) {
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) - 1;
    }
    iVar3 = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50 + param_4 * 0x4c))) != (*(uint *)(gen_frame + 0x10)) + iVar3) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50 + param_4 * 0x4c))) = (*(uint *)(gen_frame + 0x10)) + iVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar2 = F_008feed0(this,param_1,param_2,param_3,param_5,((undefined1 *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x10)),param_4 * 0x13 + 0x15,
                       param_4 * 5 + 0x70,(*(undefined4 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00903ce0 */
uint F_00903ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x903ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar1 = F_00ab24e0((uint)*(ushort *)(param_2 + 0x90));
  if (uVar1 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  F_008ffac0(this,param_3,param_1,param_2,param_3,param_5,param_4);
  F_007d7520(this,param_3,*(undefined4 *)((int)this + 0x40),param_5);
  uVar2 = F_00ac1640(2,param_5,
                       CONCAT31((int3)(param_5 - 0xf4241U >> 8),param_5 - 0xf4241U < 999999));
  uVar2 = (uint)((double)(int)uVar2 / *(double *)&REFG(undefined, 0x10912a8));
  if (0 < (int)uVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10bde4f),REFG(undefined4, 0x108cc50));
    uVar4 = uVar2 / 0xe10;
    if (uVar4 != 0) {
      uVar5 = 0x2d;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_00461bb0(pvVar3,uVar5,uVar4);
      F_0042e430(((undefined1 *)(gen_frame + 0x54)),uVar4);
      uVar2 = uVar2 % 0xe10;
    }
    uVar4 = uVar2 / 0x3c;
    if (uVar4 != 0) {
      uVar5 = 0x2c;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_00461bb0(pvVar3,uVar5,uVar4);
      uVar4 = F_0042cdb0(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x54)),uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      uVar2 = uVar2 % 0x3c;
    }
    if (0 < (int)uVar2) {
      uVar5 = 0x31;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = F_00461bb0(pvVar3,uVar5,uVar2);
      uVar2 = F_0042cdb0(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)),uVar2);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x54)),uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
    }
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0x2be;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar3,uVar5,uVar6,uVar7);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),5,uVar2,0,1,0);
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),8,uVar2,0,1,0);
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x2000;
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  }
  uVar1 = F_00827270(this,uVar1,param_2,param_5);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x80;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: Client::UI2::Agent::AgentActionDetail::vf5 */
unsigned int F_00903f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x903f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x1f);
  *(uint *)(this + 0xc) = uVar3;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x1c);
  iVar1 = *(int *)(this + 0xc);
  *(uint *)(this + 0x10) = uVar3;
  if ((iVar1 != 0) && (uVar3 != 0)) {
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10))) = 0;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    F_007d7640(this);
    F_008ffdf0(this);
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_00904e60 */
byte F_00904e60(unsigned int gen_a0)
{
  GEN_ENTER(0x904e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  int iVar3;
  int iVar4;
  int * piVar5;
  undefined4 uVar6;
  
  if ((*(int *)((int)this + 0x110) == 0) && (*(int *)((int)this + 0x14) != 0)) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x114) = uVar2;
    if (uVar2 != 0) {
      piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)((int)this + 0x14))[1]));
      piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x14)));
      uVar6 = 0;
      iVar4 = (int)piVar1 - (int)((int)(uintptr_t)piVar5) >> 2;
      uVar2 = F_00404270();
      this_00 = (undefined4 *)F_00406bd0(0x20,0,uVar2,uVar6);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        F_00cb4700(this_00,iVar4,0);
        this_00[5] = iVar4;
        *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10d39e0));
        this_00[6] = this;
        this_00[7] = ((code *)REFP(0x9018e0));
      }
      *(undefined4 * PTR32 *)((int)this + 0x110) = this_00;
      iVar4 = 0;
      for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
        iVar3 = *piVar5;
        if (*(int *)(iVar3 + 8) == 0 && *(int *)(iVar3 + 0xc) == 0) {
          iVar3 = 0;
        }
        else {
          uVar2 = F_00e3be40(iVar3);
          if (uVar2 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(uVar2 + 0xb0);
            if (iVar3 == 0) {
              iVar3 = *(int *)(uVar2 + 0xa8);
            }
          }
        }
        F_00cb4540(*(undefined * PTR32 *)((int)this + 0x110),iVar4,iVar3);
        iVar4 = iVar4 + 1;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x114) + 0x48))))
                (*(int * PTR32 *)((int)this + 0x114),*(undefined4 *)((int)this + 0x110));
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf44 */
uint F_00904f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x904f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pAVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined * PTR32 * ppAVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  this[0xf9] = (undefined1)((byte)this[0xf9] & 0xfb);
  F_00819ff0(this);
  iVar5 = 0;
  do {
    pAVar1 = this + iVar5 * 0x14 + 0x184;
    pvVar3 = (undefined *)0x0;
    if (*(int *)pAVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_00568380(pvVar3,0x23,iVar5,this,0,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)pAVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_00568380(pvVar3,0x21,iVar5,this,0,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)pAVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_00568380(pvVar3,0x1f,iVar5,this,0,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)pAVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_00568380(pvVar3,0x20,iVar5,this,0,0);
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 2;
    (*(undefined4 *)(gen_frame + 0x30)) = 3;
    (*(undefined4 *)(gen_frame + 0x3c)) = 4;
    if (iVar5 == 0) {
      pvVar3 = *(undefined * PTR32 *)(this + 0x184);
      ppAVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x4));
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
      (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x901c90));
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      ppAVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
      pvVar3 = *(undefined * PTR32 *)pAVar1;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
      (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0x901cb0));
    }
    F_00574320(pvVar3,ppAVar6,&(*(undefined4 *)(gen_frame + 0x24)),3,0);
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b990(uVar4);
    if ((uVar4 == 0) || (*(int *)(uVar4 + 8) == 0)) {
LAB_009050eb: ;
      F_007c2fa0(this,iVar5);
    }
    else {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar4 + 8) + 0x20))) + 0x18 + iVar5 * 4)));
      if (iVar2 == 1) {
        F_0081a0c0(this,iVar5);
      }
      else {
        if (iVar2 != -1) goto LAB_009050eb;
        F_007c3030(this,iVar5);
      }
    }
    iVar5 = iVar5 + 1;
    if (1 < iVar5) {
      F_005a91d0(this,1,2);
      F_005a91d0(this,0,1);
      uVar4 = F_0055dcb0();
      uVar4 = F_0057f860(*(undefined * PTR32 *)(uVar4 + 0x14),"_CharaSelectListMenu");
      *(uint *)(this + 0x1ac) = uVar4;
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar4;
    }
  } while( true );
}

/* ref: Client::UI2::Agent::AgentHowTo::vf5 */
uint F_00905150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)(this + 0x50) == 0) {
    uVar1 = F_00903b50(this);
  }
  else {
    uVar1 = *(int *)(this + 0x50) - 1;
    if (uVar1 == 0) {
      uVar1 = F_00825120(this);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00905170 */
uint F_00905170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x905170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_007d3990(this,param_1,9,param_2,0,param_3,param_4,param_5,param_6,param_7);
  uVar4 = 0;
  uVar2 = 0;
  piVar3 = param_3;
  uVar1 = ((code *)*(gen_code32 *)(*param_3 + 0xd4))(param_3);
  F_00903c10(this,param_1,param_2,uVar1,uVar2,piVar3,uVar4);
  uVar1 = F_007702e0(param_1,param_2,(uint)param_3,0);
  return uVar1;
}

/* ref: FUN_009051e0 */
uint F_009051e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9051e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  undefined * pvVar2;
  
  F_007d3b80(this,param_1,param_4 * 0x13 + 9,param_2,param_4,param_3,param_5,param_6);
  pvVar2 = param_3;
  uVar1 = F_00ae09f0(param_3);
  F_00903c10(this,param_1,param_2,(int)param_3 + 0x6c,param_4,uVar1,pvVar2);
  uVar1 = F_00ae09f0(param_3);
  uVar1 = F_007702e0(param_1,param_2,uVar1,param_4);
  return uVar1;
}

/* ref: FUN_00905250 */
uint F_00905250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  undefined4 * puVar7;
  int * piVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  int * piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,4);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(uint *)(gen_frame + 0x3c)) = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,3);
  piVar4 = REFG(undefined4, 0x1379694);
  (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)*(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar6 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x137);
  if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1c))) != *(int *)(uVar6 + 0x14)) {
    *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1c))) = *(int *)(uVar6 + 0x14);
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar6 = F_00414500((*(int * PTR32 *)(gen_frame + 0x48)),0x195);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) = *(undefined4 *)(uVar6 + 0x14);
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x434) = 0xe0000000;
  *(undefined4 *)((int)this + 0x438) = 0xe0000000;
  *(undefined4 *)((int)this + 0x43c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x440) = 0xe0000000;
  *(undefined4 *)((int)this + 0x444) = 0xe0000000;
  *(undefined4 *)((int)this + 0x448) = 0xe0000000;
  *(undefined4 *)((int)this + 0x44c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x450) = 0xe0000000;
  *(undefined4 *)((int)this + 0x454) = 0xe0000000;
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x430) = 0;
    piVar4 = *(int * PTR32 *)(uVar5 + 0x20);
    if (*piVar4 != 0) {
      *piVar4 = 0;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return (uint)piVar4;
  }
  *(undefined4 *)((int)this + 0x4a4) = 0;
  (*(uint *)(gen_frame + 0x40)) = (uint)REFG(undefined1, 0x1338ad4);
  if (REFG(undefined1, 0x1338ad4) < 2) {
    (*(uint *)(gen_frame + 0x40)) = 1;
  }
  if (*(uint *)((int)this + 0x430) != (*(uint *)(gen_frame + 0x40))) {
    uVar10 = 0xb2;
    if ((*(uint *)(gen_frame + 0x40)) < 2) {
      uVar10 = 0xaf;
    }
    else if ((*(uint *)(gen_frame + 0x40)) < 4) {
      uVar10 = 0xb0;
    }
    else if ((*(uint *)(gen_frame + 0x40)) < 8) {
      uVar10 = 0xb1;
    }
    uVar13 = 0;
    uVar12 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar6 = F_0043bd00(this_00,uVar10,uVar12,uVar13);
    if (uVar6 != *((uint *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x3c)) + 0x20) + 0x264)))) {
      *((uint *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x3c)) + 0x20) + 0x264))) = uVar6;
      *(undefined1 *)((*(uint *)(gen_frame + 0x3c)) + 0x1d) = 1;
    }
    if (**(uint * PTR32 *)(uVar5 + 0x20) != (*(uint *)(gen_frame + 0x40))) {
      **(uint * PTR32 *)(uVar5 + 0x20) = (*(uint *)(gen_frame + 0x40));
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    *(uint *)((int)this + 0x430) = (*(uint *)(gen_frame + 0x40));
  }
  (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)F_005339e0(&REFG(undefined4, 0x1375bc0));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0xe0000000;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0;
  (*(ulonglong *)(gen_frame + 0x28)) = 0xe0000000;
  if ((((*(int * PTR32 *)(gen_frame + 0x48)) != (int *)0x0) && (uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 4))((*(int * PTR32 *)(gen_frame + 0x48))), uVar6 == 2)) &&
     ((char)(*(int * PTR32 *)(gen_frame + 0x48))[0x62] != '\x02')) {
    (*(ulonglong *)(gen_frame + 0x28)) = F_00aa1840((*(int * PTR32 *)(gen_frame + 0x48)));
  }
  (*(int * PTR32 *)(gen_frame + 0x48)) = (undefined *)(uint)REFG(undefined2, 0x14ab148);
  if (REFG(undefined2, 0x14ab148) != 0) {
    uVar6 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
    ((byte *)(gen_frame + 0xc))[0x18] = 1;
    ((byte *)(gen_frame + 0xc))[0x18] = 1;
    if ((ushort)(*(int * PTR32 *)(gen_frame + 0x48)) < (ushort)uVar6) goto LAB_00905423;
  }
  uVar10 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24));
  ((byte *)(gen_frame + 0xc))[0x18] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) = uVar10 & 0xffffff00;
LAB_00905423: ;
  (*(uint *)(gen_frame + 0x30)) = 0xffffffff;
  ((byte *)(gen_frame + 0xc))[0x10] = (byte)REFG(undefined4, 0x1338ad0);
  ((byte *)(gen_frame + 0xc))[0x11] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1338ad0) + 1));
  ((byte *)(gen_frame + 0xc))[0x12] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1338ad0) + 2));
  ((byte *)(gen_frame + 0xc))[0x13] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1338ad0) + 3));
  if ((int)(*(uint *)(gen_frame + 0x40)) < 2) {
    F_00905170(this,uVar5,(*(uint *)(gen_frame + 0x3c)),piVar4,1,0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)));
    uVar6 = ((code *)*(gen_code32 *)*piVar4)(piVar4);
    (*(uint *)(gen_frame + 0x30)) = F_007d3cd0(this,0,piVar4[0x1d],uVar6,extraout_EDX,(undefined4)(*(ulonglong *)(gen_frame + 0x28)),
                            (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),0xffffffff);
  }
  else {
    uVar10 = 0;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)F_00435440(uVar6,uVar10);
    F_009539d0((undefined *)((int)this + 0x420));
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0x0;
    if (0 < (int)(*(uint *)(gen_frame + 0x40))) {
      do {
        (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),(*(undefined * PTR32 *)(gen_frame + 0x44)));
        if (*(*(int * PTR32 *)(gen_frame + 0x34)) != piVar4[0x1d]) {
          (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)F_004458c0((*(int * PTR32 *)(gen_frame + 0x48)),(*(int * PTR32 *)(gen_frame + 0x34))[2],(*(int * PTR32 *)(gen_frame + 0x34))[3],0,0,0);
          if ((int)(*(int * PTR32 *)(gen_frame + 0x38)) < 0) {
            (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 8);
          }
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = (*(int * PTR32 *)(gen_frame + 0x34)) + 4;
          puVar7 = (undefined4 *)F_004296a0(0x18,0,400);
          *puVar7 = *(undefined4 *)((int)this + 0x424);
          puVar7[1] = *(undefined4 *)((int)this + 0x424);
          puVar7[2] = *(undefined4 *)((int)this + 0x424);
          *(undefined2 *)(puVar7 + 5) = 0;
          if (puVar7 + 3 != (undefined4 *)0x0) {
            puVar7[3] = (*(int * PTR32 *)(gen_frame + 0x38));
            puVar7[4] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12));
          }
          F_00956b70((undefined *)((int)this + 0x420),((byte *)(gen_frame + 0xc)),puVar7,0);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1);
      } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) < (int)(*(uint *)(gen_frame + 0x40)));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0x0;
    if (0 < (int)(*(uint *)(gen_frame + 0x40))) {
      do {
        (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),(*(undefined * PTR32 *)(gen_frame + 0x44)));
        if (*(*(int * PTR32 *)(gen_frame + 0x38)) == piVar4[0x1d]) {
          (*(int * PTR32 *)(gen_frame + 0x48)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1U);
          F_007d3990(this,uVar5,9,(*(uint *)(gen_frame + 0x3c)),0,piVar4,(undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1U),
                       (uint)*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0x52),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)));
          uVar12 = 0;
          uVar10 = 0;
          piVar11 = piVar4;
          uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0xd4))(piVar4);
          F_00903c10(this,uVar5,(*(uint *)(gen_frame + 0x3c)),uVar6,uVar10,piVar11,uVar12);
          F_007702e0(uVar5,(*(uint *)(gen_frame + 0x3c)),(uint)piVar4,0);
          uVar6 = ((code *)*(gen_code32 *)*piVar4)(piVar4);
          (*(uint *)(gen_frame + 0x30)) = F_007d3cd0(this,0,piVar4[0x1d],uVar6,extraout_EDX_00,(undefined4)(*(ulonglong *)(gen_frame + 0x28)),
                                  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),(*(uint *)(gen_frame + 0x30)));
          *(undefined1 *)((int)this + 0x415) = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0));
        }
        else {
          piVar11 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x424)));
          piVar8 = (int *)0x1;
          (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x1;
          if (piVar11 != *(int * PTR32 *)((int)this + 0x424)) {
            do {
              if ((int *)piVar11[4] == (*(int * PTR32 *)(gen_frame + 0x38)) + 4) break;
              piVar8 = (int *)((int)piVar8 + 1);
              if (*(char *)((int)piVar11 + 0x15) == '\0') {
                piVar2 = (int *)piVar11[2];
                if (*(char *)((int)piVar2 + 0x15) == '\0') {
                  cVar1 = *(char *)(*piVar2 + 0x15);
                  piVar11 = piVar2;
                  piVar2 = (int *)*piVar2;
                  while (cVar1 == '\0') {
                    cVar1 = *(char *)(*piVar2 + 0x15);
                    piVar11 = piVar2;
                    piVar2 = (int *)*piVar2;
                  }
                }
                else {
                  cVar1 = *(char *)(piVar11[1] + 0x15);
                  piVar3 = (int *)piVar11[1];
                  piVar2 = piVar11;
                  while ((piVar11 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar11[2]))) {
                    cVar1 = *(char *)(piVar11[1] + 0x15);
                    piVar3 = (int *)piVar11[1];
                    piVar2 = piVar11;
                  }
                }
              }
            } while (piVar11 != *(int * PTR32 *)((int)this + 0x424));
            (*(int * PTR32 *)(gen_frame + 0x34)) = piVar8;
            if (7 < (int)piVar8) break;
          }
          (*(int * PTR32 *)(gen_frame + 0x48)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1U);
          F_007d3b80(this,uVar5,(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x34))) * 0x13 + 9,(*(uint *)(gen_frame + 0x3c)),(*(int * PTR32 *)(gen_frame + 0x34)),(*(int * PTR32 *)(gen_frame + 0x38)),
                       (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1U),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)));
          piVar11 = (*(int * PTR32 *)(gen_frame + 0x38));
          uVar6 = F_00ae09f0((*(int * PTR32 *)(gen_frame + 0x38)));
          F_00903c10(this,uVar5,(*(uint *)(gen_frame + 0x3c)),(*(int * PTR32 *)(gen_frame + 0x38)) + 0x1b,(*(int * PTR32 *)(gen_frame + 0x34)),uVar6,piVar11);
          piVar11 = (*(int * PTR32 *)(gen_frame + 0x34));
          uVar6 = F_00ae09f0((*(int * PTR32 *)(gen_frame + 0x38)));
          F_007702e0(uVar5,(*(uint *)(gen_frame + 0x3c)),uVar6,(uint)piVar11);
          (*(uint *)(gen_frame + 0x30)) = F_007d3cd0(this,(*(int * PTR32 *)(gen_frame + 0x34)),*(*(int * PTR32 *)(gen_frame + 0x38)),*(*(int * PTR32 *)(gen_frame + 0x38)),0,(undefined4)(*(ulonglong *)(gen_frame + 0x28)),
                                  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),(*(uint *)(gen_frame + 0x30)));
          if ((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) == (*(undefined * PTR32 *)(gen_frame + 0x44))) {
            if (*((int * PTR32 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) != (*(int * PTR32 *)(gen_frame + 0x34))) {
              *((int * PTR32 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) = (*(int * PTR32 *)(gen_frame + 0x34));
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            ((byte *)(gen_frame + 0xc))[0x10] = 0xff;
            ((byte *)(gen_frame + 0xc))[0x11] = 0xff;
            ((byte *)(gen_frame + 0xc))[0x12] = 0xff;
            ((byte *)(gen_frame + 0xc))[0x13] = 0xff;
          }
          *(char *)((int)this + 0x415 + (int)(*(int * PTR32 *)(gen_frame + 0x34))) = (char)(*(undefined * PTR32 *)(gen_frame + 0x44));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x48));
      } while ((int)(*(int * PTR32 *)(gen_frame + 0x48)) < (int)(*(uint *)(gen_frame + 0x40)));
    }
  }
  if ((-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16))) && (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) = 0;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar9 = F_007d3710(this,uVar5,(*(uint *)(gen_frame + 0x3c)),piVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)));
  uVar6 = (*(uint *)(gen_frame + 0x30));
  if (uVar9 != 0) {
    (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(uVar9 + 0x38));
    uVar6 = F_00770e40(((undefined1 *)(gen_frame + 0x4c)),5,uVar9 + 0x44);
    if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x774))) != uVar6) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x774))) = uVar6;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    F_008feed0(this,uVar5,(*(uint *)(gen_frame + 0x3c)),uVar9 + 0x44,(*(int * PTR32 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x4c)),uVar6,0x1de,0xa1,0);
    uVar6 = F_007d3cd0(this,(*(uint *)(gen_frame + 0x40)),*(undefined4 *)(uVar9 + 0x38),*(undefined4 *)(uVar9 + 0x38),0
                         ,(undefined4)(*(ulonglong *)(gen_frame + 0x28)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),(*(uint *)(gen_frame + 0x30)));
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) != uVar6) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) = uVar6;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  F_008c4110(this,uVar5,(*(uint *)(gen_frame + 0x40)),(uint)(uVar9 != 0));
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x20))) != (uint)REFG(undefined1, 0x1338ad5)) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x20))) = (uint)REFG(undefined1, 0x1338ad5);
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar5 = F_007704b0(this,uVar5);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentHUD::vf5 */
unsigned int F_00905880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)(this + 8) != 0) {
    F_007d5840(this,param_1);
    F_008fed10(this,param_1);
    F_00905250(this,param_1);
    F_008ff820(this,param_1);
    F_008f6010(this,param_1);
    F_00826600(this,param_1);
    F_007d5030(this,param_1);
    F_007d5410(this,param_1);
    F_00770990(this,param_1);
    F_007d4ec0(this,param_1);
    F_008ddd40(this,param_1);
    F_008c4230(this,param_1);
    F_00826cd0(this,param_1);
    F_0086de20(this);
  }
  return 0;
}

/* ref: FUN_00905910 */
uint F_00905910(unsigned int gen_a0)
{
  GEN_ENTER(0x905910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined * pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar6;
  if (*(char *)((int)this + 0x44) == '\0') goto LAB_00905c71;
  (*(int *)(gen_frame + 0x38)) = *(int *)((int)this + 0x30);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x34);
  if ((*(int *)((int)this + 0x2c) != 10) && (2000000 < *(int *)((int)this + 0x30))) {
    *(undefined4 *)((int)this + 0x2c) = 10;
  }
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined1 *)(gen_frame + 0x46)) = 0;
  (*(undefined1 *)(gen_frame + 0x54)) = 0;
  (*(undefined2 *)(gen_frame + 0x52)) = 30000;
  (*(undefined4 *)(gen_frame + 0x40)) = 9999;
  (*(uint *)(gen_frame + 0x30)) = 9999;
  (*(undefined2 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined2 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6a)) = 0;
  (*(undefined2 *)(gen_frame + 0x6e)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined1 *)(gen_frame + 0x78)) = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  bVar5 = F_008281d0(this,&(*(undefined4 *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x3c)),&(*(undefined4 *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x30)),&(*(int *)(gen_frame + 0x38)),
                       *(undefined4 *)((int)this + 0x34));
  uVar3 = (*(uint *)(gen_frame + 0x30));
  uVar6 = CONCAT31(extraout_var,bVar5);
  if (bVar5 == 0) goto LAB_00905c71;
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  bVar5 = F_00772450(this,&(*(int *)(gen_frame + 0x80)),&(*(uint *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x38)));
  uVar6 = CONCAT31(extraout_var_00,bVar5);
  if (bVar5 == 0) goto LAB_00905c71;
  bVar5 = F_007d6d70(this,(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
  iVar1 = (*(int *)(gen_frame + 0x80));
  uVar4 = (*(uint *)(gen_frame + 0x34));
  uVar6 = CONCAT31(extraout_var_01,bVar5);
  if (bVar5 == 0) goto LAB_00905c71;
  *(undefined1 *)((int)this + 0x45) = 0;
  uVar6 = F_007725f0(this,(*(uint *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x80)),uVar3);
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 0: ;
    uVar6 = F_00903ce0(this,(*(undefined4 *)(gen_frame + 0x2c)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
    if ((char)uVar6 == '\0') goto LAB_00905c71;
    if (*(char *)(iVar1 + 0xa0) == '\x11') {
      uVar6 = F_00ab21d0((uint)*(byte *)(iVar1 + 0xac));
      uVar6 = F_008f2420(this,iVar1,uVar6,iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
      bVar5 = (byte)uVar6;
      goto joined_r0x00905aae;
    }
    break;
  case 1: ;
    (*(uint *)(gen_frame + 0x34)) = F_00ab21d0((uint)*(byte *)(iVar1 + 0xac));
    if (*(int *)(iVar1 + 0x74) == 0) {
      (*(uint *)(gen_frame + 0x30)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x30)) = F_00ab21a0(*(int *)(iVar1 + 0x74));
    }
    uVar6 = 0;
    if ((((*(uint *)(gen_frame + 0x34)) == 0) && (*(int *)(iVar1 + 0x74) != 0)) && ((*(uint *)(gen_frame + 0x30)) == 0)) goto LAB_00905c71;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)(gen_frame + 0x84)) = 0;
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x80)) + 0)) = 0;
    (*(int *)(gen_frame + 0x80)) = 0;
    bVar5 = F_007724f0(&(*(undefined4 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x3c)));
    uVar6 = CONCAT31(extraout_var_03,bVar5);
    if (bVar5 == 0) goto LAB_00905c71;
    F_00772640(this,iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3);
    F_008ffac0(this,iVar1,(*(undefined4 *)(gen_frame + 0x2c)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x38)),uVar3);
    F_007d7520(this,(*(undefined4 *)(gen_frame + 0x3c)),*(undefined4 *)((int)this + 0x40),(*(int *)(gen_frame + 0x38)));
    uVar6 = F_008f2420(this,iVar1,(*(uint *)(gen_frame + 0x34)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
    if ((char)uVar6 == '\0') goto LAB_00905c71;
    F_00827560(this,(*(uint *)(gen_frame + 0x30)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
    F_008277a0(this,&(*(undefined4 *)(gen_frame + 0xc)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x38)));
    uVar6 = F_007d6880(this,&(*(undefined4 *)(gen_frame + 0xc)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),&(*(int *)(gen_frame + 0x80)));
    bVar5 = (byte)uVar6;
    goto joined_r0x00905aae;
  case 2: ;
    bVar5 = F_008ffca0(this,(*(undefined4 *)(gen_frame + 0x2c)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x38)),uVar3);
    uVar6 = CONCAT31(extraout_var_02,bVar5);
joined_r0x00905aae: ;
    if (bVar5 == 0) goto LAB_00905c71;
    break;
  case 3: ;
    F_008f6b90(this,uVar4,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
  }
  F_007d6ca0(this,iVar1,uVar3,(*(int *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x20)));
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 0x20) != (uint)*(byte *)((int)this + 0x45)) {
    *(uint *)(iVar2 + 0x20) = (uint)*(byte *)((int)this + 0x45);
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar2 + 0x10) != *(int *)((int)this + 0x3c)) {
    *(int *)(iVar2 + 0x10) = *(int *)((int)this + 0x3c);
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))) = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))) | 1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  uVar6 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x191);
  iVar1 = *(int *)((int)this + 0x24);
  uVar13 = 4;
  uVar12 = 0;
  uVar11 = 0;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc))) = *(undefined4 *)(uVar6 + 0x14);
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x36;
  pvVar10 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_008668b0(this_00,uVar7,uVar8,uVar9,pvVar10,uVar11,uVar12,uVar13);
  *(uint *)((int)this + 8) = uVar6;
  *(undefined1 *)((int)this + 0x44) = 0;
LAB_00905c71: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar6;
}

/* ref: Client::UI2::Agent::LobbyUIClient::vf17 */
byte F_00905c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x905c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  *(undefined4 *)(this + 0x28) = param_4;
  *(undefined4 *)(this + 0x14) = param_2;
  F_008be3d0(this,param_3);
  F_008be320(this,*(undefined4 *)(this + 0x14));
  iVar1 = *(int *)(this + 4);
  *(undefined2 *)(iVar1 + 0x250) = 0;
  iVar2 = *(int *)(iVar1 + 0x240);
  if (iVar2 != *(int *)(iVar1 + 0x244)) {
    F_00c46e20(iVar2,*(int *)(iVar1 + 0x244),0);
    *(int *)(iVar1 + 0x244) = iVar2;
  }
  bVar3 = F_00904e60(this);
  return bVar3;
}

/* ref: Client::UI2::Agent::AgentItemDetail::vf5 */
uint F_00905d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x1d);
  *(uint *)(this + 0x24) = uVar3;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x1a);
  iVar1 = *(int *)(this + 0x24);
  *(uint *)(this + 0x28) = uVar3;
  if ((iVar1 != 0) && (uVar3 != 0)) {
    *(undefined4 *)(this + 0x3c) = 0;
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))) = 0;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    if (*(int *)(this + 8) != 0) {
      F_007d66e0(this);
      F_00827180(this);
    }
    uVar3 = F_00905910(this);
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  return uVar3;
}

/* ref: Component::GUI2::AtkMessageBoxManager::AtkMessageBoxEvent::vf0 */
uint F_00905da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3e5c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00905e70 */
uint F_00905e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0058f6c0((undefined *)((int)this + 4),param_1,6);
  return uVar1;
}

/* ref: FUN_00905e90 */
uint F_00905e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005944b0((undefined *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00905ea0 */
uint F_00905ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905ea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x110) = param_2;
  return param_2;
}

/* ref: FUN_00905ec0 */
byte F_00905ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905ec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xd) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905ee0 */
byte F_00905ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xf) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905f00 */
byte F_00905f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905f00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905f70 */
uint F_00905f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00596b90(this,param_1,1);
  return uVar1;
}

/* ref: FUN_00905f90 */
byte F_00905f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905f90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0xdc) & (byte)param_2) != 0;
}

/* ref: FUN_00905fb0 */
byte F_00905fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x18) == param_2;
}

/* ref: FUN_00905fd0 */
byte F_00905fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905fe0 */
byte F_00905fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905fe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc70) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905ff0 */
uint F_00905ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x905ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 0xc64);
  uVar1 = *(ushort *)((int)this + 0xc66);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_00906080 */
byte F_00906080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009060a0 */
uint F_009060a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9060a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x110) = param_2;
  return param_2;
}

/* ref: FUN_009060d0 */
byte F_009060d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9060d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009060f0 */
uint F_009060f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9060f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x9c) = param_2;
  return param_2;
}

/* ref: FUN_00906100 */
uint F_00906100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa4) = param_2;
  *(undefined1 *)(in_ecx + 0x13e) = 1;
  return param_2;
}

/* ref: FUN_00906120 */
byte F_00906120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 6 ^ *(byte *)(in_ecx + 0xf9)) & 0x40;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906150 */
unsigned int F_00906150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((char)param_1 != '\0') {
    *(ushort *)((int)this + 0x126) = *(ushort *)((int)this + 0x126) | 0x8000;
    return 0;
  }
  *(ushort *)((int)this + 0x126) = *(ushort *)((int)this + 0x126) & 0x7fff;
  return 0;
}

/* ref: FUN_00906180 */
uint F_00906180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906180u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x120) = param_2;
  return param_2;
}

/* ref: FUN_009061a0 */
unsigned int F_009061a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9061a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 1;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffffe;
  return 0;
}

/* ref: FUN_009061d0 */
unsigned int F_009061d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9061d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x20000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffdffff;
  return 0;
}

/* ref: FUN_00906210 */
unsigned int F_00906210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 2;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffffd;
  return 0;
}

/* ref: FUN_00906230 */
unsigned int F_00906230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 4;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffffb;
  return 0;
}

/* ref: FUN_00906250 */
unsigned int F_00906250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x10;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffffef;
  return 0;
}

/* ref: FUN_00906270 */
unsigned int F_00906270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x20;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffffdf;
  return 0;
}

/* ref: FUN_00906290 */
unsigned int F_00906290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x40;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffffbf;
  return 0;
}

/* ref: FUN_009062b0 */
unsigned int F_009062b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9062b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x80;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffff7f;
  return 0;
}

/* ref: FUN_009062e0 */
unsigned int F_009062e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9062e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x100;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffeff;
  return 0;
}

/* ref: FUN_00906310 */
unsigned int F_00906310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x200;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffdff;
  return 0;
}

/* ref: FUN_00906340 */
unsigned int F_00906340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x800;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffff7ff;
  return 0;
}

/* ref: FUN_00906370 */
unsigned int F_00906370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x4000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffbfff;
  return 0;
}

/* ref: FUN_009063a0 */
unsigned int F_009063a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9063a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x8000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffff7fff;
  return 0;
}

/* ref: FUN_009063d0 */
unsigned int F_009063d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9063d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x10000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffeffff;
  return 0;
}

/* ref: FUN_00906400 */
unsigned int F_00906400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x40000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffbffff;
  return 0;
}

/* ref: FUN_00906430 */
byte F_00906430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 5 ^ *(byte *)(in_ecx + 0xfb)) & 0x20;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906450 */
byte F_00906450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0xf9)) & 0x10;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906480 */
byte F_00906480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009064a0 */
byte F_009064a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9064a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009064c0 */
uint F_009064c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9064c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x90),param_1);
  return uVar1;
}

/* ref: FUN_009064f0 */
ushort F_009064f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9064f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00567f90(*(undefined * PTR32 *)((int)this + 0x90),param_1);
  return uVar1;
}

/* ref: FUN_00906500 */
uint F_00906500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00567ff0(*(undefined * PTR32 *)((int)this + 0x90),param_1);
  return uVar1;
}

/* ref: FUN_00906510 */
uint F_00906510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x3c))(param_1);
    *(uint *)((int)this + 0xa8) = uVar1;
    return uVar1;
  }
  *(undefined4 *)((int)this + 0xa8) = 0;
  return 0;
}

/* ref: FUN_00906540 */
byte F_00906540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00906550 */
byte F_00906550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 5 ^ *(byte *)(in_ecx + 0xf8)) & 0x20;
  *(byte *)(in_ecx + 0xf8) = *(byte *)(in_ecx + 0xf8) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906570 */
byte F_00906570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 4 ^ *(byte *)(in_ecx + 0xfb)) & 0x10;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906590 */
byte F_00906590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0xfa)) & 0x10;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009065b0 */
byte F_009065b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9065b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0xf9)) & 0x20;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009065d0 */
byte F_009065d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9065d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 5 ^ *(byte *)(in_ecx + 0xfa)) & 0x20;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009065f0 */
byte F_009065f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9065f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 6 ^ *(byte *)(in_ecx + 0xfb)) & 0x40;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906610 */
byte F_00906610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_1 == '\0') << 7 | *(byte *)((int)this + 0xf9) & 0x7f;
  *(byte *)((int)this + 0xf9) = bVar1;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x7f ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906650 */
byte F_00906650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_1 == '\0') << 7 | *(byte *)((int)this + 0xfb) & 0x7f;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) & 0x7f;
  *(byte *)((int)this + 0xfb) = bVar1;
  return bVar1;
}

/* ref: FUN_00906680 */
byte F_00906680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0xfa)) & 2;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009066a0 */
ushort F_009066a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9066a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x136) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_009066c0 */
byte F_009066c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9066c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 6 ^ *(byte *)(in_ecx + 0xfa)) & 0x40;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009066e0 */
byte F_009066e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9066e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0xfb)) & 8;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906730 */
byte F_00906730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x1b0)) & 4;
  *(byte *)(in_ecx + 0x1b0) = *(byte *)(in_ecx + 0x1b0) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906750 */
uint F_00906750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xd4) = param_2;
  return param_2;
}

/* ref: FUN_00906770 */
uint F_00906770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xd8) = param_2;
  return param_2;
}

/* ref: FUN_00906780 */
uint F_00906780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xdc) = param_2;
  return param_2;
}

/* ref: FUN_00906790 */
uint F_00906790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe0) = param_2;
  return param_2;
}

/* ref: FUN_009067a0 */
uint F_009067a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9067a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe4) = param_2;
  return param_2;
}

/* ref: FUN_009067c0 */
uint F_009067c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9067c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xec) = param_2;
  return param_2;
}

/* ref: FUN_009067d0 */
uint F_009067d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9067d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00572ff0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00906880 */
byte F_00906880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x204) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::UI2::RaptureAtkColorDataManager::vf0 */
uint F_009068e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9068e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c3e68));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00906910 */
ushort F_00906910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 6 + param_2 * 0xc);
}

/* ref: FUN_00906a50 */
ushort F_00906a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906a50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2ea4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00906a70 */
byte F_00906a70(unsigned int gen_a0)
{
  GEN_ENTER(0x906a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte * pbVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (uVar1 != 0) {
    pbVar2 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
    return *pbVar2;
  }
  return 0;
}

/* ref: FUN_00906aa0 */
uint F_00906aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x906aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    uVar1 = F_00ac1a20((uint)*(byte *)(uVar1 + 1),*(undefined4 *)(uVar1 + 4));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00906ae0 */
float F_00906ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x906ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))();
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    return *(float *)(uVar1 + 0x34);
  }
  return 0.0;
}

/* ref: FUN_00906b30 */
float F_00906b30(unsigned int gen_a0)
{
  GEN_ENTER(0x906b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))();
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    return *(float *)(uVar1 + 0x38);
  }
  return 0.0;
}

/* ref: FUN_00906cf0 */
uint F_00906cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906cf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00906d10 */
ushort F_00906d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00906d30 */
ulonglong F_00906d30(unsigned int gen_a0)
{
  GEN_ENTER(0x906d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  while( true ) {
    if (*(char *)((int)this + 6) == '\0') break;
    uVar1 = F_00a3a860(this);
    if (uVar1 == 0) break;
    this = (undefined *)F_00a3a860(this);
  }
  return *(ulonglong *)((int)this + 0x18);
}

/* ref: FUN_00906d60 */
ushort F_00906d60(unsigned int gen_a0)
{
  GEN_ENTER(0x906d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar2 = F_00a3a860(this);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00a3a860(this);
      uVar1 = F_00906d60(this_00);
      return uVar1;
    }
  }
  return *(ushort *)((int)this + 0x12);
}

/* ref: FUN_00906d90 */
unsigned int F_00906d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 == '\x01') {
    *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) | 1;
    return 0;
  }
  *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) & 0xfe;
  return 0;
}

/* ref: FUN_00906db0 */
byte F_00906db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x906db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  *(ushort *)((int)this + (uint)(byte)param_1 * 2 + 0x20) = (ushort)param_2 >> 4;
  bVar1 = (byte)(ushort)param_2 & 0xf;
  *(byte *)((byte)param_1 + 0x2a + (int)this) = bVar1;
  return bVar1;
}

/* ref: FUN_00906de0 */
uint F_00906de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: FUN_00906df0 */
uint F_00906df0(unsigned int gen_a0)
{
  GEN_ENTER(0x906df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) == '\0') {
    return *(uint *)((int)this + 8);
  }
  this_00 = (undefined *)F_00a3a860(this);
  cVar1 = *(char *)((int)this_00 + 6);
  while (cVar1 == '\0') {
    this_00 = (undefined *)F_00a3a860(this_00);
    cVar1 = *(char *)((int)this_00 + 6);
  }
  return *(uint *)((int)this_00 + 8);
}

/* ref: FUN_00906e20 */
uint F_00906e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x906e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a3bd60(this,param_1);
  *(undefined1 *)((int)this + 0x40) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x41) = (undefined1)param_3;
  *(undefined4 *)((int)this + 0x44) = 0;
  return uVar1;
}

/* ref: FUN_00906e80 */
uint F_00906e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906e80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  double dVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((int)param_2 <= param_1) {
    return 100;
  }
  dVar1 = (double)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                         (float10)(int)param_2)));
  if (dVar1 < 0.0) {
    return (int)(dVar1 - REFG(double, 0x1088108));
  }
  return (int)(dVar1 + REFG(double, 0x1088108));
}

/* ref: FUN_00906ed0 */
uint F_00906ed0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x906ed0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  double dVar1;
  
  if ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_2 == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  if ((float10)param_2 <= (float10)param_1) {
    return 100;
  }
  dVar1 = (double)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)param_2)))
  ;
  if (dVar1 < 0.0) {
    return (int)(dVar1 - REFG(double, 0x1088108));
  }
  return (int)(dVar1 + REFG(double, 0x1088108));
}

/* ref: FUN_00906f30 */
uint F_00906f30(unsigned int gen_a0)
{
  GEN_ENTER(0x906f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0x20) {
    return 2;
  }
  if (param_1 != 0x21) {
    return 1;
  }
  return 4;
}

/* ref: FUN_00906f60 */
uint F_00906f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906f60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != 0) {
    return (param_2 + 0x26c) * 100 + param_1;
  }
  return 0;
}

/* ref: FUN_00906f80 */
uint F_00906f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != 0) {
    return (param_2 + 0x26d) * 100 + param_1;
  }
  return 0;
}

/* ref: FUN_00906fa0 */
uint F_00906fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x906fa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0043f8b0(param_1 + 1000000);
  return uVar1;
}

/* ref: FUN_00906fc0 */
uint F_00906fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x906fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return CONCAT31(CONCAT21(CONCAT11((undefined1)param_4,(undefined1)param_3),(undefined1)param_2),
                  (undefined1)param_1);
}

/* ref: FUN_00906ff0 */
byte F_00906ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x906ff0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_00907000 */
uint F_00907000(unsigned int gen_a0)
{
  GEN_ENTER(0x907000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 >> 8;
}

/* ref: FUN_00907010 */
uint F_00907010(unsigned int gen_a0)
{
  GEN_ENTER(0x907010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 >> 0x10;
}

/* ref: FUN_00907020 */
uint F_00907020(unsigned int gen_a0)
{
  GEN_ENTER(0x907020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 >> 0x18;
}

/* ref: Client::UI2::Agent::AgentInterface::vf5 */
unsigned int F_00907060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00907090 */
uint F_00907090(unsigned int gen_a0)
{
  GEN_ENTER(0x907090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)((int)this + 0xc);
  *(undefined4 *)this = 0x4000000;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 10) = 0;
  F_0068e790(this_00);
  F_00c48350((undefined *)((int)this + 0x54),0,0x70);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0xe) = 1;
  F_00b88e00(this_00,this_00);
  return (uint)this;
}

/* ref: FUN_00907100 */
uint F_00907100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00907170 */
uint F_00907170(unsigned int gen_a0)
{
  GEN_ENTER(0x907170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  uVar1 = 0;
  if (*(int *)((int)this + 0x3208) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x3208));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x3208) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  return uVar1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf1 */
byte F_009071c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9071c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0x27 < param_1) {
    return 0;
  }
  return *(int *)(this + param_1 * 0x140 + 0x138) == 1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf2 */
uint F_009071f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9071f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x27 < param_2) {
    return 0;
  }
  return param_2 * 0x140 + 4 + in_ecx;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf3 */
uint F_00907210(unsigned int gen_a0)
{
  GEN_ENTER(0x907210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3204);
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf4 */
unsigned int F_00907220(unsigned int gen_a0)
{
  GEN_ENTER(0x907220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pFVar1;
  int iVar2;
  
  *(undefined4 *)(this + 0x3204) = 0;
  pFVar1 = this + 0x278;
  iVar2 = 8;
  do {
    if (*(int *)(pFVar1 + -0x140) == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    if (*(int *)pFVar1 == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    if (*(int *)(pFVar1 + 0x140) == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    if (*(int *)(pFVar1 + 0x280) == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    if (*(int *)(pFVar1 + 0x3c0) == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    pFVar1 = pFVar1 + 0x640;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf5 */
uint F_00907290(void)
{
  GEN_ENTER(0x907290u, 0u, 0u, 0u, 0u);
  return 0x28;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::ContainerInterface::vf0 */
uint F_009072c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9072c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf0 */
uint F_009072f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9072f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  if (*(int *)(this + 0x3208) != 0) {
    F_00406b30(*(int *)(this + 0x3208));
    *(undefined4 *)(this + 0x3208) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00907350 */
unsigned int F_00907350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0x2c24c) = *(byte *)(in_ecx + 0x2c24c) | 2;
    return 0;
  }
  *(byte *)(in_ecx + 0x2c24c) = *(byte *)(in_ecx + 0x2c24c) & 0xfd;
  return 0;
}

/* ref: FUN_00907370 */
unsigned int F_00907370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0x2c24c) = *(byte *)(in_ecx + 0x2c24c) | 0x40;
    return 0;
  }
  *(byte *)(in_ecx + 0x2c24c) = *(byte *)(in_ecx + 0x2c24c) & 0xbf;
  return 0;
}

/* ref: Client::UI::Misc::ConfigModule::ConfigEventInterface::vf0 */
uint F_009073f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9073f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10c3ed0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00907450 */
byte F_00907450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x907450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((*(int *)((int)this + 0x48) == param_1) && (*(int *)((int)this + 0x4c) == param_2)) {
    *(int *)((int)this + 0x4c) = param_2;
    *(int *)((int)this + 0x48) = param_1;
    return 0;
  }
  *(int *)((int)this + 0x4c) = param_2;
  *(int *)((int)this + 0x48) = param_1;
  return 1;
}

/* ref: FUN_009074a0 */
uint F_009074a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9074a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x6b90 + param_2 * 4);
}

/* ref: FUN_009074d0 */
uint F_009074d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9074d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x70f4 + param_2 * 4);
}

/* ref: FUN_00907500 */
uint F_00907500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x71d4 + param_2 * 4);
}

/* ref: FUN_00907590 */
byte F_00907590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0x230bf) & (byte)param_2) != 0;
}

/* ref: FUN_009075f0 */
uint F_009075f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9075f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042e430((undefined *)((int)this + 0xc4),&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430((undefined *)((int)this + 0x118),&REFG(undefined1, 0x107fc63));
  return uVar1;
}

/* ref: FUN_00907620 */
uint F_00907620(unsigned int gen_a0)
{
  GEN_ENTER(0x907620u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1);
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *(undefined1 *)((int)in_ecx + 0x66) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00907680 */
uint F_00907680(unsigned int gen_a0)
{
  GEN_ENTER(0x907680u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1);
  *(byte *)((int)in_ecx + 0x6d) = *(byte *)((int)in_ecx + 0x6d) & 0xfe;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *(undefined1 *)((int)in_ecx + 0x66) = 0;
  in_ecx[0x1a] = 0;
  *(undefined1 *)(in_ecx + 0x1b) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3efc));
  return (uint)in_ecx;
}

/* ref: FUN_009076d0 */
uint F_009076d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9076d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1);
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *(undefined1 *)((int)in_ecx + 0x66) = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3f0c));
  return (uint)in_ecx;
}

/* ref: Client::UI2::RaptureAtkModule::CrystalCache::vf0 */
uint F_009077c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9077c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042c880(this + 4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::UIInputData::KeyLoadInterface::vf0 */
uint F_00907850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f1c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009078f0 */
byte F_009078f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9078f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x224 + in_ecx);
}

/* ref: FUN_00907940 */
byte F_00907940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 == *((char *)GEN_TOP((*(int *)(in_ecx + 0x28) + 5)));
}

/* ref: FUN_00907960 */
uint F_00907960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x40) + 0xd + param_2)));
}

/* ref: FUN_00907980 */
uint F_00907980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x40) + 0x15 + param_2)));
}

/* ref: FUN_009079b0 */
uint F_009079b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9079b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x60 + 0x32c + in_ecx;
}

/* ref: FUN_009079d0 */
uint F_009079d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9079d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x54 + 0xe0 + in_ecx;
}

/* ref: FUN_00907a20 */
byte F_00907a20(unsigned int gen_a0)
{
  GEN_ENTER(0x907a20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 4) != 0) && (*(int *)(in_ecx + 4) != 1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00907af0 */
uint F_00907af0(unsigned int gen_a0)
{
  GEN_ENTER(0x907af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)((int)this + 100) != 0) &&
     (uVar1 = (uint)(*(int *)((int)this + 0x60) * 100) / *(uint *)((int)this + 100), 100 < uVar1)) {
    uVar1 = 100;
  }
  return uVar1;
}

/* ref: FUN_00907b30 */
uint F_00907b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x907b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if ((param_2 <= *(int *)((int)this + 0x6c)) &&
     ((param_2 < *(int *)((int)this + 0x6c) || (param_1 <= *(uint *)((int)this + 0x68))))) {
    return *(uint *)((int)this + 0x68) - param_1;
  }
  return 0;
}

/* ref: FUN_00907b60 */
uint F_00907b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x7c + param_2 * 0x18;
}

/* ref: FUN_00907bc0 */
uint F_00907bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x907bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(byte *)(in_ecx + 0x32) & 1) == 0) {
    return *(uint *)(in_ecx + 8);
  }
  return 0;
}

/* ref: FUN_00907ce0 */
uint F_00907ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x1e) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907cf0 */
uint F_00907cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x1f) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d00 */
uint F_00907d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x20) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d10 */
uint F_00907d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x21) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d20 */
uint F_00907d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x22) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d30 */
uint F_00907d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x23) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d40 */
unsigned int F_00907d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x907d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((ushort)param_1 <= (ushort)param_2) {
    puVar1 = (undefined1 *)((ushort)param_1 + 4 + (int)this);
    uVar3 = (uint)(ushort)(((ushort)param_2 - (ushort)param_1) + 1);
    do {
      *puVar1 = *((undefined1 *)GEN_TOP(((uVar2 & 0xffff) + param_3)));
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00907d90 */
uint F_00907d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x907d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  *(undefined1 *)((int)this + 2) = (undefined1)param_3;
  *(uint *)this = *(uint *)this | 0xff000000;
  return (uint)this;
}

/* ref: FUN_00907db0 */
unsigned int F_00907db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x907db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(char *)this = (char)param_1;
  *(char *)((int)this + 2) = (char)((uint)param_1 >> 0x10);
  *(char *)((int)this + 1) = (char)((uint)param_1 >> 8);
  *(undefined1 *)((int)this + 3) = (undefined1)param_2;
  return 0;
}

/* ref: FUN_009080e0 */
byte F_009080e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9080e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb0bc + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00908160 */
unsigned int F_00908160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  return 0;
}

/* ref: FUN_009081b0 */
unsigned int F_009081b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9081b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  return 0;
}

/* ref: FUN_00908310 */
uint F_00908310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x6c + 0x2d28 + in_ecx;
}

/* ref: FUN_00908340 */
uint F_00908340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x6c + 0x3238 + in_ecx;
}

/* ref: FUN_00908360 */
byte F_00908360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0x33d9) & (byte)param_2) != 0;
}

/* ref: FUN_00908380 */
byte F_00908380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x33d9) = *(byte *)(in_ecx + 0x33d9) | (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908390 */
byte F_00908390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x33d9) = *(byte *)(in_ecx + 0x33d9) & ~(byte)param_2;
  return ~(byte)param_2;
}

/* ref: FUN_009083b0 */
byte F_009083b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9083b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x338c) == param_2;
}

/* ref: FUN_009083d0 */
byte F_009083d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9083d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0x33b0) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_009083f0 */
uint F_009083f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9083f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b0) = param_2;
  return param_2;
}

/* ref: FUN_00908400 */
uint F_00908400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b0) = *(uint *)(in_ecx + 0x33b0) | param_2;
  return param_2;
}

/* ref: FUN_00908410 */
uint F_00908410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b0) = *(uint *)(in_ecx + 0x33b0) & ~param_2;
  return ~param_2;
}

/* ref: FUN_00908430 */
byte F_00908430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908430u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0x33b4) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_00908450 */
uint F_00908450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b4) = param_2;
  return param_2;
}

/* ref: FUN_00908460 */
uint F_00908460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b4) = *(uint *)(in_ecx + 0x33b4) | param_2;
  return param_2;
}

/* ref: FUN_00908470 */
uint F_00908470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b4) = *(uint *)(in_ecx + 0x33b4) & ~param_2;
  return ~param_2;
}

/* ref: FUN_009084a0 */
uint F_009084a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9084a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  return (uint)this;
}

/* ref: FUN_009084c0 */
uint F_009084c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9084c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009084d0 */
byte F_009084d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9084d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  return uVar1 == *(uint *)this;
}

/* ref: FUN_009084f0 */
byte F_009084f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9084f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(byte *)(param_1 + 0x14);
}

/* ref: Client::UI2::Agent::AgentMap::ParamFunctor::vf0 */
uint F_00908550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompare::vf0 */
uint F_00908590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009085f0 */
byte F_009085f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9085f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x61) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908600 */
byte F_00908600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0xdd6) & (byte)param_2) != 0;
}

/* ref: FUN_00908620 */
byte F_00908620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xdd6) = *(byte *)(in_ecx + 0xdd6) | (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908630 */
uint F_00908630(unsigned int gen_a0)
{
  GEN_ENTER(0x908630u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x58);
  *(undefined4 *)(in_ecx + 0xac) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00908660 */
uint F_00908660(unsigned int gen_a0)
{
  GEN_ENTER(0x908660u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined2 *)(in_ecx + 0xac) = 0;
  return in_ecx;
}

/* ref: FUN_00908690 */
unsigned int F_00908690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x908690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return 0;
}

/* ref: FUN_009086b0 */
unsigned int F_009086b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9086b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  return 0;
}

/* ref: FUN_00908700 */
uint F_00908700(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x908700u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00908720 */
uint F_00908720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x908720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  F_0042cbc0((undefined *)((int)this + 0x10),param_4);
  F_0042b630((int)this + 100);
  *(undefined1 *)((int)this + 0xb8) = (undefined1)param_5;
  *(undefined1 *)((int)this + 0xb9) = (undefined1)param_6;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  return (uint)this;
}

/* ref: FUN_009087a0 */
uint F_009087a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9087a0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 0x1c);
  F_0042b630(in_ecx + 0x70);
  F_0042b630(in_ecx + 0xc4);
  F_0042b630(in_ecx + 0x118);
  F_0042b630(in_ecx + 0x16c);
  return in_ecx;
}

/* ref: FUN_009087e0 */
uint F_009087e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9087e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x16c));
  F_0042c880((undefined *)((int)this + 0x118));
  F_0042c880((undefined *)((int)this + 0xc4));
  F_0042c880((undefined *)((int)this + 0x70));
  uVar1 = F_0042c880((undefined *)((int)this + 0x1c));
  return (uint)uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::InventoryCache::vf0 */
uint F_00908820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pIVar1;
  int iVar2;
  undefined * pIVar3;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042c880(this + 4);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    pIVar1 = this + -4;
    iVar2 = *(int *)pIVar1;
    pIVar3 = this + iVar2 * 0x70;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      *(undefined * PTR32 * PTR32 *)(pIVar3 + -0x70) = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
      F_0042c880(pIVar3 + -0x6c);
      pIVar3 = pIVar3 + -0x70;
    }
    this = pIVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(pIVar1);
      return (uint)pIVar1;
    }
  }
  return (uint)this;
}

/* ref: Client::UI2::RaptureAtkModule::ItemCache::vf0 */
uint F_009088a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9088a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pIVar1;
  int iVar2;
  undefined * pIVar3;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042c880(this + 4);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    pIVar1 = this + -4;
    iVar2 = *(int *)pIVar1;
    pIVar3 = this + iVar2 * 0x68;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      *(undefined * PTR32 * PTR32 *)(pIVar3 + -0x68) = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
      F_0042c880(pIVar3 + -100);
      pIVar3 = pIVar3 + -0x68;
    }
    this = pIVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(pIVar1);
      return (uint)pIVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00908920 */
uint F_00908920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x908920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + (char)param_1 * 4 + 0x40) = param_2;
  return (int)(char)param_1;
}

/* ref: FUN_00908940 */
uint F_00908940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  *(uint *)(in_ecx + 0x44) = param_2;
  *(uint *)(in_ecx + 0x48) = param_2;
  *(uint *)(in_ecx + 0x4c) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkManagedInterface::vf2 */
uint F_00908980(unsigned int gen_a0)
{
  GEN_ENTER(0x908980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc))(this)));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,1,0);
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkManagedInterface::vf0 */
uint F_009089a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9089a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009089e0 */
uint F_009089e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9089e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_00908a00 */
uint F_00908a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x908a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_00908a60 */
uint F_00908a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908a60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x94) = param_2;
  return param_2;
}

/* ref: FUN_00908a70 */
byte F_00908a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908a70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908a80 */
byte F_00908a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908a80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x113) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908a90 */
byte F_00908a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908aa0 */
byte F_00908aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908ab0 */
byte F_00908ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x908ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 0x121) = (byte)param_1;
  *(undefined1 *)((int)this + 0x122) = (undefined1)param_2;
  return (byte)param_1;
}

/* ref: FUN_00908ae0 */
byte F_00908ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x125) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908af0 */
uint F_00908af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe4) = param_2;
  return param_2;
}

/* ref: FUN_00908b30 */
byte F_00908b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908b30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0x188) & (*(uint *)&gen_args[1])) == (*(uint *)&gen_args[1]);
}

/* ref: FUN_00908b50 */
uint F_00908b50(unsigned int gen_a0)
{
  GEN_ENTER(0x908b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*((char *)GEN_TOP((*(int *)((int)this + 400) + 0x88))) == '\x01') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184),1);
    return uVar1;
  }
  if (*(char *)((int)this + 0x19e) == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184),0);
  }
  uVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
  *(undefined1 *)((int)this + 0x19c) = 0;
  return uVar1;
}

/* ref: FUN_00908be0 */
ushort F_00908be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x134) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00908c00 */
byte F_00908c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x136) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908c20 */
uint F_00908c20(unsigned int gen_a0)
{
  GEN_ENTER(0x908c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00561390();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,uVar1 + 0xc0);
  return uVar1;
}

/* ref: FUN_00908c40 */
byte F_00908c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) & (*(uint *)&gen_args[1])) == (*(uint *)&gen_args[1]);
}

/* ref: FUN_00908c60 */
uint F_00908c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short sVar1;
  uint in_EAX = 0;
  uint uVar2;
  short sVar3;
  int iVar4;
  
  if (param_1 <= *(uint *)((int)this + 0x188)) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x184) * 4 + 0x1a4))),0);
    *(uint *)((int)this + 0x184) = param_1;
    in_EAX = F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x1a4),1);
    if (*(undefined * PTR32 *)((int)this + 0x19c) != (undefined *)0x0) {
      sVar3 = *(short *)((int)this + 0x184) * 0x19;
      iVar4 = (int)sVar3;
      uVar2 = *(short *)((int)this + 0x180) - iVar4;
      if ((int)uVar2 < 0x19) {
        uVar2 = uVar2 & 0xffff;
      }
      else {
        uVar2 = 0x19;
      }
      F_0059ead0(*(undefined * PTR32 *)((int)this + 0x19c),uVar2,0,1);
      sVar1 = *(short *)((int)this + 400);
      if ((sVar3 <= sVar1) && ((int)sVar1 < iVar4 + 0x19)) {
        uVar2 = F_005623b0(*(undefined * PTR32 *)((int)this + 0x19c),sVar1 - iVar4);
        return uVar2;
      }
      in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x78))))(*(int * PTR32 *)((int)this + 0x19c));
    }
  }
  return in_EAX;
}

/* ref: FUN_00908d60 */
uint F_00908d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x908d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 0x144) = param_1;
  *(undefined4 *)((int)this + 0x148) = param_2;
  *(uint *)((int)this + 0x14c) = param_3;
  return param_3;
}

/* ref: FUN_00908dc0 */
uint F_00908dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908dc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2fc) = param_2;
  return param_2;
}

/* ref: FUN_00908de0 */
uint F_00908de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x194) = param_2;
  return param_2;
}

/* ref: FUN_00908e50 */
byte F_00908e50(unsigned int gen_a0)
{
  GEN_ENTER(0x908e50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(int *)(in_ecx + 0x18c) != 0) {
    pbVar4 = &REFG(undefined1, 0x107fc63);
    pbVar2 = (byte *)F_0042a990(*(int *)(in_ecx + 0x18c) + 0x9c);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00908e90: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00908e95;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00908e90;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00908e95: ;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (*(int *)(in_ecx + 400) != 0) {
    pbVar4 = &REFG(undefined1, 0x107fc63);
    pbVar2 = (byte *)F_0042a990(*(int *)(in_ecx + 400) + 0x9c);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00908ed8: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00908edd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00908ed8;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00908edd: ;
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00908ef0 */
byte F_00908ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  return (*(uint *)((int)this + 0x18c) & uVar1) == uVar1;
}

/* ref: FUN_00908f10 */
uint F_00908f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x908f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  short sVar2;
  int * piVar3;
  short sVar4;
  uint in_EAX = 0;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 <= *(uint *)((int)this + 0x188)) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x184) * 4 + 0x1ac))),0);
    *(uint *)((int)this + 0x184) = param_1;
    in_EAX = F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x1ac),1);
    if (*(undefined * PTR32 *)((int)this + 0x1a4) != (undefined *)0x0) {
      uVar1 = *(ushort *)((int)this + 0x194);
      sVar4 = *(short *)((int)this + 0x184) * uVar1;
      iVar6 = (int)sVar4;
      uVar5 = *(short *)((int)this + 0x180) - iVar6;
      iVar7 = (int)(short)uVar1;
      if ((int)uVar5 < iVar7) {
        uVar5 = uVar5 & 0xffff;
      }
      else {
        uVar5 = (uint)uVar1;
      }
      F_0059ead0(*(undefined * PTR32 *)((int)this + 0x1a4),uVar5,0,1);
      sVar2 = *(short *)((int)this + 0x198);
      if ((sVar4 <= sVar2) && ((int)sVar2 < iVar7 + iVar6)) {
        uVar5 = F_005623b0(*(undefined * PTR32 *)((int)this + 0x1a4),sVar2 - iVar6);
        *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
        return uVar5;
      }
      piVar3 = *(int * PTR32 *)((int)this + 0x1a4);
      if ((char)param_2 == '\x01') {
        in_EAX = (int)sVar2 / iVar7;
        sVar4 = (short)piVar3[0x33];
        if (sVar4 == sVar2 % (short)uVar1) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3,0xffffffff,0);
          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a4) + 0x74))))
                            (*(int * PTR32 *)((int)this + 0x1a4),(int)sVar4,0);
          *(int *)((int)this + 0x1a0) = (int)sVar4;
          return uVar5;
        }
      }
      else {
        in_EAX = ((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00909030 */
byte F_00909030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  return (*(uint *)((int)this + 0x18c) & uVar1) == uVar1;
}

/* ref: FUN_00909050 */
uint F_00909050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 <= *(uint *)((int)this + 0x188)) {
    *(uint *)((int)this + 0x184) = param_1;
    if (*(undefined * PTR32 *)((int)this + 0x1a0) != (undefined *)0x0) {
      sVar2 = (short)param_1 * 0x19;
      iVar4 = (int)sVar2;
      uVar3 = *(short *)((int)this + 0x180) - iVar4;
      if ((int)uVar3 < 0x19) {
        uVar3 = uVar3 & 0xffff;
      }
      else {
        uVar3 = 0x19;
      }
      F_0059ead0(*(undefined * PTR32 *)((int)this + 0x1a0),uVar3,0,1);
      sVar1 = *(short *)((int)this + 400);
      if ((sVar2 <= sVar1) && ((int)sVar1 < iVar4 + 0x19)) {
        iVar4 = sVar1 - iVar4;
        F_005623b0(*(undefined * PTR32 *)((int)this + 0x1a0),iVar4);
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a0) + 0x74))))
                          (*(int * PTR32 *)((int)this + 0x1a0),iVar4,0);
        return uVar3;
      }
      param_1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a0) + 0x78))))(*(int * PTR32 *)((int)this + 0x1a0));
    }
  }
  return param_1;
}

/* ref: FUN_009091b0 */
uint F_009091b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9091b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (int)(short)param_1;
}

/* ref: FUN_009091d0 */
uint F_009091d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9091d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (int)(short)param_1;
}

/* ref: FUN_00909230 */
uint F_00909230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x909230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  F_00561aa0(this,param_1);
  F_00561b40(this,param_2);
  uVar1 = F_00561b90(param_3,param_4);
  return uVar1;
}

/* ref: FUN_00909260 */
uint F_00909260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00561530(this,param_1);
  }
  *(undefined * PTR32 *)((int)this + 0x9c) = this_00;
  uVar1 = F_0057eb30(this_00,*(undefined4 *)((int)this + 0xe4),0,0,0,0);
  return uVar1;
}

/* ref: FUN_009092a0 */
uint F_009092a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9092a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  return (uint)this;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf62 */
unsigned int F_009092d0(void)
{
  GEN_ENTER(0x9092d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf64 */
unsigned int F_009092e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9092e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf65 */
byte F_009092f0(void)
{
  GEN_ENTER(0x9092f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf66 */
unsigned int F_00909300(void)
{
  GEN_ENTER(0x909300u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf0 */
uint F_00909310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00909340 */
uint F_00909340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x188) = param_2;
  return param_2;
}

/* ref: FUN_00909360 */
uint F_00909360(unsigned int gen_a0)
{
  GEN_ENTER(0x909360u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0058d480(in_ecx + 1);
  in_ecx[0xd] = 0;
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
  in_ecx[0x1b] = 0;
  in_ecx[0xe] = 4;
  in_ecx[0xf] = 0x15;
  in_ecx[0x10] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_009093b0 */
uint F_009093b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9093b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0xffffffff;
  in_ecx[1] = 0xffffffff;
  F_0042b630(in_ecx + 2);
  in_ecx[0x17] = 4;
  in_ecx[0x18] = 0x15;
  return (uint)in_ecx;
}

/* ref: FUN_00909450 */
byte F_00909450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xbc) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00909500 */
unsigned int F_00909500(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x909500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00909530 */
uint F_00909530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00909550 */
uint F_00909550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909550u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00909560 */
ushort F_00909560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x34) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00909590 */
unsigned int F_00909590(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x909590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_009095e0 */
byte F_009095e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9095e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x60)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x58));
  if ((bVar1 != (bVar1 || (float10)*(float *)(in_ecx + 0x60) == (float10)*(float *)(in_ecx + 0x58)))
     && (bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 100)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x5c)),
        bVar1 != (bVar1 || (float10)*(float *)(in_ecx + 100) == (float10)*(float *)(in_ecx + 0x5c)))
     ) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00909640 */
ushort F_00909640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x7a) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Client::UI2::AddonNaviMap::SetTargetRenderer::vf0 */
uint F_009096a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9096a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNaviMap::MaskRenderer::vf0 */
uint F_009096d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9096d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00909710 */
uint F_00909710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa0) = param_2;
  return param_2;
}

/* ref: FUN_00909720 */
byte F_00909720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0xaa)) & 2;
  *(byte *)(in_ecx + 0xaa) = *(byte *)(in_ecx + 0xaa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00909740 */
byte F_00909740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xa9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00909750 */
byte F_00909750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0xaa)) & 0x20;
  *(byte *)(in_ecx + 0xaa) = *(byte *)(in_ecx + 0xaa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00909770 */
uint F_00909770(unsigned int gen_a0)
{
  GEN_ENTER(0x909770u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0;
  return 0;
}

/* ref: FUN_00909790 */
byte F_00909790(unsigned int gen_a0)
{
  GEN_ENTER(0x909790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 < 2;
}

/* ref: FUN_009097b0 */
uint F_009097b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9097b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x198) = param_2;
  return param_2;
}

/* ref: FUN_00909820 */
uint F_00909820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: FUN_00909830 */
uint F_00909830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: FUN_00909850 */
ushort F_00909850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x909850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x28) = (ushort)param_1;
  *(undefined2 *)((int)this + 0x2a) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_00909870 */
byte F_00909870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x2c)) & 4;
  *(byte *)(in_ecx + 0x2c) = *(byte *)(in_ecx + 0x2c) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00909890 */
byte F_00909890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009098c0 */
byte F_009098c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9098c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x36) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009098f0 */
byte F_009098f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9098f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x92) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00909900 */
byte F_00909900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x94) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00909910 */
uint F_00909910(unsigned int gen_a0)
{
  GEN_ENTER(0x909910u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 1);
  F_0042b630(in_ecx + 0x16);
  F_0042b630(in_ecx + 0x2b);
  in_ecx[0x40] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_009099b0 */
uint F_009099b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9099b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)((int)this + 0x1c);
  iVar2 = 5;
  do {
    F_0055a300((undefined *)*puVar3,param_1);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x14),param_1);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x18),param_1);
  uVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x30),param_1);
  return uVar1;
}

/* ref: FUN_00909a50 */
uint F_00909a50(unsigned int gen_a0)
{
  GEN_ENTER(0x909a50u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 1);
  F_0042b630(in_ecx + 0x16);
  F_0042b630(in_ecx + 0x2b);
  F_0042b630(in_ecx + 0x40);
  F_0042b630(in_ecx + 0x55);
  in_ecx[0x6a] = 0;
  in_ecx[0x6b] = 0;
  in_ecx[0x6c] = 0;
  in_ecx[0x6d] = 0;
  in_ecx[0x6e] = 0;
  in_ecx[0x6f] = 0;
  in_ecx[0x70] = 0;
  in_ecx[0x71] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00909ac0 */
unsigned int F_00909ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x909ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[8] = 0;
  in_ecx[0x29] = 0;
  in_ecx[0x2a] = 0;
  in_ecx[0x2b] = 0;
  *in_ecx = 0;
  in_ecx[9] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x21] = 0;
  in_ecx[1] = 0;
  in_ecx[10] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x23] = 0;
  in_ecx[3] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x24] = 0;
  in_ecx[4] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x25] = 0;
  in_ecx[5] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x26] = 0;
  in_ecx[6] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x27] = 0;
  in_ecx[7] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x28] = 0;
  return 0;
}

/* ref: FUN_00909b70 */
uint F_00909b70(unsigned int gen_a0)
{
  GEN_ENTER(0x909b70u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00909bb0 */
uint F_00909bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x909bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 1);
  return (uint)in_ecx;
}

/* ref: FUN_00909c00 */
unsigned int F_00909c00(unsigned int gen_a0)
{
  GEN_ENTER(0x909c00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0x2b] = 0;
  in_ecx[0x2c] = 0;
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
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
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
  return 0;
}

/* ref: FUN_00909cb0 */
uint F_00909cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x909cb0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  return in_ecx;
}

/* ref: FUN_00909d10 */
byte F_00909d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x909d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 0x18e) = (byte)param_1;
  *(undefined1 *)((int)this + 399) = (undefined1)param_2;
  return (byte)param_1;
}

/* ref: FUN_00909dc0 */
uint F_00909dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00909dd0 */
uint F_00909dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x909dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00909e50 */
uint F_00909e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00909e60 */
unsigned int F_00909e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x909e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined2 *)this = (undefined2)param_1;
  *(uint *)this = (param_2 & 0x7fff | (param_3 & 0xff) << 0xf) << 0x10 | (uint)*(ushort *)this;
  return 0;
}

/* ref: FUN_00909ec0 */
uint F_00909ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00909ed0 */
unsigned int F_00909ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x909ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined2 *)this = (undefined2)param_1;
  *(uint *)this = (param_2 & 0x7fff | (param_3 & 0xff) << 0xf) << 0x10 | (uint)*(ushort *)this;
  return 0;
}

/* ref: FUN_00909f70 */
uint F_00909f70(unsigned int gen_a0)
{
  GEN_ENTER(0x909f70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 4 & 0xffffff;
}

/* ref: FUN_00909fe0 */
uint F_00909fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x909fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_0090a020 */
byte F_0090a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0xae) ^ (byte)param_2) & 0xf;
  *(byte *)(in_ecx + 0xae) = *(byte *)(in_ecx + 0xae) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0090a060 */
byte F_0090a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0xae) & 0x7f | (char)param_1 << 7;
  *(byte *)((int)this + 0xae) = bVar1;
  return bVar1;
}

/* ref: FUN_0090a0e0 */
uint F_0090a0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_0090a190 */
uint F_0090a190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_0090a1f0 */
uint F_0090a1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a1f0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x58);
  F_0042b630(in_ecx + 0xac);
  return in_ecx;
}

/* ref: FUN_0090a240 */
uint F_0090a240(unsigned int gen_a0)
{
  GEN_ENTER(0x90a240u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  *(undefined4 *)(in_ecx + 0x60) = 0;
  *(undefined2 *)(in_ecx + 100) = 0x100;
  return in_ecx;
}

/* ref: FUN_0090a260 */
uint F_0090a260(unsigned int gen_a0)
{
  GEN_ENTER(0x90a260u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined2 *)(in_ecx + 0xb4) = 0x100;
  return in_ecx;
}

/* ref: FUN_0090a2a0 */
uint F_0090a2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 1);
  F_0042b630(in_ecx + 0x17);
  in_ecx[0x2c] = 0;
  in_ecx[0x2d] = 0;
  *(undefined1 *)(in_ecx + 0x2e) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_0090a2e0 */
uint F_0090a2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a2e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  return in_ecx;
}

/* ref: FUN_0090a300 */
uint F_0090a300(unsigned int gen_a0)
{
  GEN_ENTER(0x90a300u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  return in_ecx;
}

/* ref: FUN_0090a320 */
uint F_0090a320(unsigned int gen_a0)
{
  GEN_ENTER(0x90a320u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  *(undefined1 *)(in_ecx + 0x60) = 0;
  *(undefined4 *)(in_ecx + 0x54) = 0xffffffff;
  return in_ecx;
}

/* ref: FUN_0090a400 */
unsigned int F_0090a400(unsigned int gen_a0)
{
  GEN_ENTER(0x90a400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
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
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x8c);
  iVar2 = 0xe;
  do {
    puVar1[-0xe] = 0;
    *puVar1 = 0;
    puVar1[0xe] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_0090a470 */
uint F_0090a470(unsigned int gen_a0)
{
  GEN_ENTER(0x90a470u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  F_0042b630(in_ecx + 2);
  return (uint)in_ecx;
}

/* ref: FUN_0090a490 */
unsigned int F_0090a490(unsigned int gen_a0)
{
  GEN_ENTER(0x90a490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  puVar1 = (undefined4 *)((int)this + 0xcc);
  iVar2 = 0x1f;
  do {
    puVar1[-0x1f] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_0090a540 */
unsigned int F_0090a540(unsigned int gen_a0)
{
  GEN_ENTER(0x90a540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  uVar1 = 0;
  do {
    *(undefined4 *)((int)this + uVar1 * 4) = 0;
    *(undefined4 *)((int)this + uVar1 * 4 + 0x4c) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x13);
  return 0;
}

/* ref: FUN_0090a610 */
byte F_0090a610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xd8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a620 */
byte F_0090a620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a660 */
byte F_0090a660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x29c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a670 */
byte F_0090a670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x278) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a690 */
byte F_0090a690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a6c0 */
uint F_0090a6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a6c0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_0090a720 */
uint F_0090a720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a720u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0090a730 */
uint F_0090a730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_0090a750 */
uint F_0090a750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_0090a770 */
unsigned int F_0090a770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a770u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  
  uVar1 = F_0055a020(param_3);
  *param_1 = (float)((float10)uVar1 * (float10)REFG(double, 0x1088108) + (float10)*param_1);
  uVar1 = F_0055a030(param_3);
  *param_2 = (float)((float10)uVar1 * (float10)REFG(double, 0x1088108) + (float10)*param_2);
  return 0;
}

/* ref: FUN_0090a820 */
uint F_0090a820(unsigned int gen_a0)
{
  GEN_ENTER(0x90a820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c40ac));
  return (uint)this;
}

/* ref: FUN_0090a840 */
uint F_0090a840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: FUN_0090a850 */
uint F_0090a850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x184) = param_2;
  return param_2;
}

/* ref: FUN_0090a980 */
uint F_0090a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 100 + 4 + in_ecx;
}

/* ref: FUN_0090a9e0 */
uint F_0090a9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a9e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x5c);
  return in_ecx;
}

/* ref: FUN_0090aa00 */
uint F_0090aa00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aa00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aa30 */
uint F_0090aa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,4);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aa60 */
uint F_0090aa60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aa60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,10);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aa90 */
uint F_0090aa90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aa90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,0xe);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aac0 */
uint F_0090aac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,0x10);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aaf0 */
uint F_0090aaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,0xf);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ab20 */
uint F_0090ab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ab20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,3);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ab50 */
uint F_0090ab50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ab50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ab80 */
uint F_0090ab80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ab80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,0x11);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090abb0 */
uint F_0090abb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90abb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,0x13);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090abe0 */
uint F_0090abe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90abe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,0x16);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ac10 */
uint F_0090ac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055a300(*(undefined * PTR32 *)this,param_1);
  return uVar1;
}

/* ref: FUN_0090ac80 */
unsigned int F_0090ac80(unsigned int gen_a0)
{
  GEN_ENTER(0x90ac80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x68);
  iVar2 = 0xd;
  do {
    puVar1[-0x1a] = 0;
    puVar1[-0xd] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  return 0;
}

/* ref: FUN_0090ad40 */
uint F_0090ad40(unsigned int gen_a0)
{
  GEN_ENTER(0x90ad40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(param_1 - 1U < 0xd);
}

/* ref: FUN_0090ad60 */
uint F_0090ad60(unsigned int gen_a0)
{
  GEN_ENTER(0x90ad60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 1;
}

/* ref: FUN_0090ad70 */
uint F_0090ad70(unsigned int gen_a0)
{
  GEN_ENTER(0x90ad70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(param_1 - 0xfU < 0x19);
}

/* ref: FUN_0090ad90 */
uint F_0090ad90(unsigned int gen_a0)
{
  GEN_ENTER(0x90ad90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0xf;
}

/* ref: FUN_0090ae00 */
uint F_0090ae00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ae00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = F_0056d300(*(undefined * PTR32 *)((int)this + 400),7);
  iVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 1;
      pvVar2 = (undefined *)F_0056d250(*(undefined * PTR32 *)((int)this + 400),7,iVar4);
      pvVar2 = (undefined *)F_00561490(pvVar2,uVar5);
      F_0055a300(pvVar2,param_1);
      iVar4 = iVar4 + 1;
    } while ((ushort)iVar4 < uVar1);
  }
  uVar1 = F_0056d300(*(undefined * PTR32 *)((int)this + 400),6);
  iVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 1;
      pvVar2 = (undefined *)F_0056d250(*(undefined * PTR32 *)((int)this + 400),6,iVar4);
      pvVar2 = (undefined *)F_00561490(pvVar2,uVar5);
      F_0055a300(pvVar2,param_1);
      iVar4 = iVar4 + 1;
    } while ((ushort)iVar4 < uVar1);
  }
  uVar1 = F_0056d300(*(undefined * PTR32 *)((int)this + 400),5);
  iVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 1;
      pvVar2 = (undefined *)F_0056d250(*(undefined * PTR32 *)((int)this + 400),5,iVar4);
      pvVar2 = (undefined *)F_00561490(pvVar2,uVar5);
      F_0055a300(pvVar2,param_1);
      iVar4 = iVar4 + 1;
    } while ((ushort)iVar4 < uVar1);
  }
  uVar1 = F_0056d300(*(undefined * PTR32 *)((int)this + 400),4);
  uVar3 = (uint)uVar1;
  iVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 1;
      pvVar2 = (undefined *)F_0056d250(*(undefined * PTR32 *)((int)this + 400),4,iVar4);
      pvVar2 = (undefined *)F_00561490(pvVar2,uVar5);
      uVar3 = F_0055a300(pvVar2,param_1);
      iVar4 = iVar4 + 1;
    } while ((ushort)iVar4 < uVar1);
  }
  return uVar3;
}

/* ref: FUN_0090b030 */
unsigned int F_0090b030(unsigned int gen_a0)
{
  GEN_ENTER(0x90b030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
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
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = 9;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 9;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 9;
  *(undefined2 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 9;
  *(undefined2 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 9;
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 9;
  *(undefined2 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 9;
  *(undefined2 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 9;
  *(undefined2 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 9;
  *(undefined2 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 9;
  *(undefined2 *)((int)this + 0x1c0) = 0;
  return 0;
}

/* ref: FUN_0090b2e0 */
unsigned int F_0090b2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x90b2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 9;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 9;
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 9;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 9;
  *(undefined2 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 9;
  *(undefined2 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 9;
  *(undefined2 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 9;
  *(undefined2 *)((int)this + 0x120) = 0;
  return 0;
}

/* ref: Client::UI2::AddonCutSceneReplay::JournalTree::vf2 */
uint F_0090b4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

