#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0070c7d0 */
uint F_0070c7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70c7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  bool bVar2;
  int * piVar3;
  undefined * this_00;
  undefined * pvVar4;
  byte * pbVar5;
  undefined4 * puVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  byte * pbVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 uVar13;
  byte * PTR32 * ppbVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int * PTR32 * ppiVar17;
  undefined4 * PTR32 * ppuVar18;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  piVar8 = param_1;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    pbVar5 = *(byte * PTR32 *)(*param_1 + 4);
    pbVar10 = pbVar5;
    puVar6 = (undefined4 *)((int)this + 0x128);
    for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      puVar6 = puVar6 + 1;
    }
    (*(byte * PTR32 *)(gen_frame + 0x38)) = pbVar5;
    puVar6 = (undefined4 *)F_00ab2ed0((uint)pbVar5[0x3e]);
    *(undefined4 *)((int)this + 0x178) = *puVar6;
    *(undefined4 *)((int)this + 0x17c) = puVar6[1];
    (*(byte * PTR32 *)(gen_frame + 0x38)) = *(byte * PTR32 *)((*(byte * PTR32 *)(gen_frame + 0x38)) + 4);
    uVar7 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
    *(uint *)((int)this + 0x10c) = uVar7;
    puVar6 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar6,1,1);
      puVar6[5] = 1;
      *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
      puVar6[6] = (*(undefined * PTR32 *)(gen_frame + 0x34));
      puVar6[7] = ((code *)REFP(0x70c7d0));
    }
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x34));
    *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xfc) = puVar6;
    F_00cb4540(puVar6,0,(*(byte * PTR32 *)(gen_frame + 0x38)));
    piVar8 = *(int * PTR32 *)((int)pvVar4 + 0x10c);
    uVar7 = ((code *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8,*(undefined4 *)((int)pvVar4 + 0xfc));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return uVar7;
  case 1: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)*(undefined4 *)(*param_1 + 4);
    if (*(byte *)((int)this + 0x167) == 1) {
      uVar16 = 1;
      ppbVar14 = &(*(byte * PTR32 *)(gen_frame + 0x38));
      (*(byte * PTR32 *)(gen_frame + 0x38)) = *(byte * PTR32 *)((int)this + 300);
      uVar13 = 0x47e;
    }
    else {
      uVar16 = 2;
      ppbVar14 = &(*(byte * PTR32 *)(gen_frame + 0x8));
      (*(byte * PTR32 *)(gen_frame + 0x8)) = *(byte * PTR32 *)((int)this + 300);
      (*(uint *)(gen_frame + 0xc)) = (uint)*(byte *)((int)this + 0x167);
      uVar13 = 0x47f;
    }
    F_007047e0(uVar13,ppbVar14,uVar16);
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x34));
    bVar2 = false;
    if ((0 < REFG(int, 0x14ab834)) && (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x170) != '\0')) {
      bVar2 = true;
    }
    if ((0 < REFG(int, 0x14ab838)) && (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x171) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab7dc) != '\0') || (REFG(char, 0x14ab7dd) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab7e8) != '\0') || (REFG(char, 0x14ab7e9) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab7f4) != '\0') || (REFG(char, 0x14ab7f5) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab800) != '\0') || (REFG(char, 0x14ab801) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab80c) != '\0') || (REFG(char, 0x14ab80d) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab818) != '\0') || (REFG(char, 0x14ab819) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab824) != '\0') || (REFG(char, 0x14ab825) != '\0')) {
      bVar2 = true;
    }
    if (((REFG(char, 0x14ab830) != '\0') || (REFG(char, 0x14ab831) != '\0')) || (bVar2)) {
      piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
      if (piVar8 != (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
        piVar3 = (int *)F_004296a0(8,0,0x2c4);
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
        if (piVar3 != (int *)0x0) {
          *piVar3 = 0;
          piVar3[1] = 0;
        }
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
        *piVar3 = (int)ppiVar17;
        uVar15 = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        uVar16 = 0x491;
        uVar13 = REFG(undefined4, 0x1379694);
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
        F_0046abb0(this_00,uVar16,uVar13,uVar15,ppiVar17);
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
        F_00429760((*(int * PTR32 *)(gen_frame + 0x1c)),8,0x2c4);
      }
      *(byte *)((int)pvVar4 + 0x184) = *(byte *)((int)pvVar4 + 0x184) | 4;
    }
    (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)0x0;
    (*(byte * PTR32 *)(gen_frame + 0x38)) = (byte *)&REFG(int, 0x14ab834);
    do {
      iVar9 = *(int *)(*(byte * PTR32 *)(gen_frame + 0x38));
      bVar1 = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + (int)(*(uint * PTR32 *)(gen_frame + 0x18)) + 0x170);
      if ((0 < iVar9) && (bVar1 != 0)) {
        (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
        piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar8 != (int *)0x0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = (undefined4 *)0x0;
          puVar6 = (undefined4 *)F_004296a0(8,0,0x2c4);
          (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = puVar6;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
          }
          *puVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x48));
          (*(int *)(gen_frame + 0x6c)) = 0;
          (*(undefined4 *)(gen_frame + 0x4c)) = 0;
          (*(undefined4 *)(gen_frame + 0x50)) = 0;
          (*(undefined4 *)(gen_frame + 0x54)) = 0;
          (*(undefined4 *)(gen_frame + 0x58)) = 0;
          (*(int *)(gen_frame + 0x6c)) = iVar9;
          (*(int * PTR32 *)(gen_frame + 0x70)) = &(*(int *)(gen_frame + 0x6c));
          (*(undefined1 *)(gen_frame + 0x74)) = 0;
          F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x48)),&(*(int *)(gen_frame + 0x6c)));
          F_004917c0(&(*(int *)(gen_frame + 0x6c)));
          (*(uint *)(gen_frame + 0x60)) = 0;
          (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0xc));
          (*(uint * PTR32 *)(gen_frame + 0x64)) = &(*(uint *)(gen_frame + 0x60));
          (*(undefined1 *)(gen_frame + 0x68)) = 0;
          F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x48)),&(*(uint *)(gen_frame + 0x60)));
          F_004917c0(&(*(uint *)(gen_frame + 0x60)));
          ppuVar18 = &(*(undefined4 * PTR32 *)(gen_frame + 0x48));
          uVar15 = 0;
          uVar16 = 0x490;
          uVar13 = REFG(undefined4, 0x1379694);
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
          F_0046abb0(pvVar4,uVar16,uVar13,uVar15,ppuVar18);
          F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x48)));
          F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x48)),8,0x2c4);
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x18)) + 1);
      pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x38)) + 4;
      (*(byte * PTR32 *)(gen_frame + 0x38)) = pbVar5;
    } while ((int)pbVar5 < 0x14ab83c);
    (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x130);
    (*(byte * PTR32 *)(gen_frame + 0x38)) = (byte *)&REFG(char, 0x14ab7dd);
    do {
      (*(uint *)(gen_frame + 0x10)) = (uint)(*(byte * PTR32 *)(gen_frame + 0x38))[-1];
      if ((*(byte * PTR32 *)(gen_frame + 0x38))[-1] != 0) {
        uVar7 = *(*(uint * PTR32 *)(gen_frame + 0x18));
        piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar8 != (int *)0x0) {
          (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
          piVar3 = (int *)F_004296a0(8,0,0x2c4);
          (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
          if (piVar3 != (int *)0x0) {
            *piVar3 = 0;
            piVar3[1] = 0;
          }
          *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x1c));
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(uint *)(gen_frame + 0xc)) = uVar7;
          (*(uint *)(gen_frame + 0x60)) = 0;
          (*(uint * PTR32 *)(gen_frame + 0x64)) = (uint *)0x0;
          (*(undefined1 *)(gen_frame + 0x68)) = 0xff;
          F_00490f30(&(*(uint *)(gen_frame + 0x60)),&(*(uint *)(gen_frame + 0xc)));
          F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x60)));
          F_004917c0(&(*(uint *)(gen_frame + 0x60)));
          (*(int *)(gen_frame + 0x6c)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
          (*(undefined1 *)(gen_frame + 0x74)) = 0xff;
          F_00490f30(&(*(int *)(gen_frame + 0x6c)),&(*(uint *)(gen_frame + 0x10)));
          F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x6c)));
          F_004917c0(&(*(int *)(gen_frame + 0x6c)));
          ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
          uVar15 = 0;
          uVar16 = 0x490;
          uVar13 = REFG(undefined4, 0x1379694);
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
          F_0046abb0(pvVar4,uVar16,uVar13,uVar15,ppiVar17);
          F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
          F_00429760((*(int * PTR32 *)(gen_frame + 0x1c)),8,0x2c4);
        }
      }
      (*(uint *)(gen_frame + 0xc)) = (uint)*(*(byte * PTR32 *)(gen_frame + 0x38));
      if (*(*(byte * PTR32 *)(gen_frame + 0x38)) != 0) {
        uVar7 = *(*(uint * PTR32 *)(gen_frame + 0x18));
        piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar8 != (int *)0x0) {
          (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
          piVar3 = (int *)F_004296a0(8,0,0x2c4);
          (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
          if (piVar3 != (int *)0x0) {
            *piVar3 = 0;
            piVar3[1] = 0;
          }
          *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x1c));
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(uint *)(gen_frame + 0x10)) = uVar7 + 1000000;
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          (*(undefined1 *)(gen_frame + 0x44)) = 0xff;
          F_00490f30(&(*(undefined4 *)(gen_frame + 0x3c)),&(*(uint *)(gen_frame + 0x10)));
          F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x3c)));
          F_004917c0(&(*(undefined4 *)(gen_frame + 0x3c)));
          (*(undefined4 *)(gen_frame + 0x54)) = 0;
          (*(undefined4 *)(gen_frame + 0x58)) = 0;
          (*(undefined1 *)(gen_frame + 0x5c)) = 0xff;
          F_00490f30(&(*(undefined4 *)(gen_frame + 0x54)),&(*(uint *)(gen_frame + 0xc)));
          F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x54)));
          F_004917c0(&(*(undefined4 *)(gen_frame + 0x54)));
          ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
          uVar15 = 0;
          uVar16 = 0x490;
          uVar13 = REFG(undefined4, 0x1379694);
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
          F_0046abb0(pvVar4,uVar16,uVar13,uVar15,ppiVar17);
          F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
          F_00429760((*(int * PTR32 *)(gen_frame + 0x1c)),8,0x2c4);
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x18)) = (*(uint * PTR32 *)(gen_frame + 0x18)) + 1;
      pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x38)) + 0xc;
      (*(byte * PTR32 *)(gen_frame + 0x38)) = pbVar5;
    } while ((int)pbVar5 < 0x14ab83d);
    break;
  case 2: ;
    puVar6 = *(undefined4 * PTR32 *)(*param_1 + 4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar6;
    puVar11 = puVar6;
    puVar12 = (undefined4 *)((int)this + 0x128);
    for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar6 = (undefined4 *)F_00ab2ed0((uint)*(byte *)((int)puVar6 + 0x3e));
    *(undefined4 *)((int)this + 0x178) = *puVar6;
    *(undefined4 *)((int)this + 0x17c) = puVar6[1];
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x14))[1];
    uVar7 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
    *(uint *)((int)this + 0x114) = uVar7;
    puVar6 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar6,1,3);
      puVar6[5] = 1;
      *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
      puVar6[6] = (*(undefined * PTR32 *)(gen_frame + 0x34));
      puVar6[7] = ((code *)REFP(0x70c7d0));
    }
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x34));
    *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x104) = puVar6;
    F_00cb4540(puVar6,0,(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
    piVar8 = *(int * PTR32 *)((int)pvVar4 + 0x114);
    uVar7 = ((code *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8,*(undefined4 *)((int)pvVar4 + 0x104));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return uVar7;
  case 3: ;
    F_006bf170(this,*(undefined4 *)(*param_1 + 4));
    *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) & 0xfe;
    piVar8 = (int *)F_006f49b0((*(undefined * PTR32 *)(gen_frame + 0x34)),0xd,0,0,0);
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return (uint)piVar8;
  }
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x172))) {
  case 1: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x49c;
    break;
  case 2: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x49d;
    goto LAB_0070cef6;
  case 3: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x49e;
    break;
  case 4: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x49f;
    goto LAB_0070cef6;
  case 5: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x4a0;
    break;
  case 6: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x4a1;
LAB_0070cef6: ;
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
    uVar15 = 0;
    uVar16 = REFG(undefined4, 0x1379694);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
    F_0046abb0(pvVar4,uVar13,uVar16,uVar15,ppiVar17);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    goto LAB_0070cf19;
  default: ;
    goto switchD_0070cdb0_default;
  }
  ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
  uVar15 = 0;
  uVar16 = REFG(undefined4, 0x1379694);
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
  F_0046abb0(pvVar4,uVar13,uVar16,uVar15,ppiVar17);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
LAB_0070cf19: ;
  F_00429760((*(int * PTR32 *)(gen_frame + 0x1c)),8,0x2c4);
switchD_0070cdb0_default: ;
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x34));
  F_006d0230((*(undefined * PTR32 *)(gen_frame + 0x34)),(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  uVar7 = F_00a4a760(&REFG(undefined, 0x14a7360),0x18,0);
  *(byte *)((int)pvVar4 + 0x184) = *(byte *)((int)pvVar4 + 0x184) & 0xfe;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar7;
}

/* ref: Client::Game::Event::JournalCallback::vf1 */
byte F_0070d090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70d090u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_3 == 0x13) {
    if ((*((byte *)GEN_TOP((*(int *)(in_ecx + 4) + 800))) & 0x10) != 0) {
      F_00a73a90(&REFG(undefined, 0x14afd38));
      return 1;
    }
    F_006bf760(*(int *)(in_ecx + 4),in_ebx);
    return 1;
  }
  if (param_3 != 0x14) {
    return 0;
  }
  F_00705560(*(undefined * PTR32 *)(in_ecx + 4));
  return 1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf1 */
uint F_0070d0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x70d0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if (((char)uVar3 == '\0') &&
     (uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this), iVar1 = REFG(int, 0x1379694), (char)uVar3 == '\0')) {
    bVar2 = F_005d4e70();
    uVar3 = CONCAT31(extraout_var,bVar2);
    if ((bVar2 != 0) || (iVar1 != 0)) {
      bVar2 = F_00a505f0();
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        bVar2 = F_00a50610();
        uVar3 = CONCAT31(extraout_var_01,bVar2);
        if (bVar2 != 0) {
          this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
          uVar3 = F_007054c0(this);
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::ShopEventHandler::vf34 */
uint F_0070d140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70d140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined1 SVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  int * piVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined * pSVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0x20)) = param_1;
  if (((byte)this[0x1c] & 1) == 0) {
LAB_0070d2de: ;
    (*(uint *)(gen_frame + 0x24)) = 0;
    if (param_2 != 0) {
      pSVar11 = this + 0x16c;
      piVar7 = param_1;
      do {
        iVar8 = *(int *)(piVar7[(*(uint *)(gen_frame + 0x24))] + 4);
        *(undefined4 *)(pSVar11 + 4) = *(undefined4 *)(iVar8 + 0x30);
        *pSVar11 = *(undefined *)(iVar8 + 0xae);
        if (pSVar11[0x6c] == (undefined1)0x0) {
          iVar10 = *(int *)(pSVar11 + -8);
        }
        else {
          iVar10 = *(int *)(pSVar11 + -8) + 1000000;
        }
        uVar4 = F_00ab6240(iVar10,0,iVar8);
        F_0042e430(pSVar11 + 0x18,uVar4);
        *(undefined4 *)(pSVar11 + 0xc) = *(undefined4 *)(iVar8 + 0x28);
        uVar4 = F_00ab25d0((uint)*(byte *)(iVar8 + 0xa1));
        if (uVar4 != 0) {
          uVar4 = F_00ab25d0((uint)*(byte *)(iVar8 + 0xa1));
          *(undefined4 *)(pSVar11 + 0x10) = *(undefined4 *)(uVar4 + 4);
        }
        uVar4 = (*(uint *)(gen_frame + 0x24)) + 1;
        pSVar11 = pSVar11 + 0x7c;
        (*(uint *)(gen_frame + 0x24)) = uVar4;
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x20));
      } while (uVar4 < param_2);
    }
    this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
    SVar1 = this[0x1c];
    uVar4 = CONCAT31((int3)(uVar4 >> 8),SVar1);
    if (((byte)SVar1 & 1) == 0) {
      this[0x1c] = (undefined1)((byte)SVar1 | 1);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    }
    goto LAB_0070d685;
  }
  puVar9 = *(undefined4 * PTR32 *)(this + 0xe8);
  if (puVar9 != *(undefined4 * PTR32 *)(this + 0xec)) {
    do {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)*puVar9 + 8))((int *)*puVar9);
      if ((char)uVar4 == '\0') goto LAB_0070d2de;
      puVar9 = puVar9 + 1;
    } while (puVar9 != *(undefined4 * PTR32 *)(this + 0xec));
  }
  if (this[0x1bec] == (undefined1)0x0) {
    if (this[0x1bed] == (undefined1)0x0) {
      if (this[0x1bee] != (undefined1)0x0) {
        this[0x1bee] = (undefined1)0x0;
        (*(uint *)(gen_frame + 0x24)) = 0;
        if (param_2 != 0) {
          pSVar11 = this + 0x1538;
          piVar7 = param_1;
          do {
            iVar8 = *(int *)(piVar7[(*(uint *)(gen_frame + 0x24))] + 4);
            if (pSVar11[0x10] == (undefined1)0x0) {
              iVar10 = *(int *)pSVar11;
            }
            else {
              iVar10 = *(int *)pSVar11 + 1000000;
            }
            uVar4 = F_00ab6240(iVar10,0,iVar8);
            F_0042e430(pSVar11 + 0x14,uVar4);
            uVar4 = (uint)*(byte *)(iVar8 + 0xa1);
            (*(uint *)(gen_frame + 0x1c)) = uVar4;
            iVar8 = 0;
            uVar4 = F_00ab25d0(uVar4);
            if (uVar4 != 0) {
              uVar4 = F_00ab25d0((*(uint *)(gen_frame + 0x1c)));
              iVar8 = *(int *)(uVar4 + 4);
            }
            uVar4 = (*(uint *)(gen_frame + 0x24)) + 1;
            *(int *)(pSVar11 + 0x6c) = iVar8;
            pSVar11 = pSVar11 + 0xa8;
            (*(uint *)(gen_frame + 0x24)) = uVar4;
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x20));
          } while (uVar4 < param_2);
        }
        uVar4 = F_006d0fd0();
      }
      goto LAB_0070d685;
    }
    this[0x1bed] = (undefined1)0x0;
    this[0x1bfa] = *((undefined *)GEN_TOP((*(int *)(*param_1 + 4) + 0xbe)));
    uVar4 = F_006c1f90(this);
    if (uVar4 == 0) {
      if (this[0x1bf2] == (undefined1)0x0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x28)));
        if (this[0x1bf2] == (undefined1)0x0) {
          iVar6 = *(int *)(this + 0x1bd8) * 0x7c;
          iVar8 = *(int *)(this + iVar6 + 0x168);
          iVar10 = *(int *)(this + iVar6 + 0x164);
          SVar1 = this[iVar6 + 0x1d8];
        }
        else {
          iVar6 = *(int *)(this + 0x1bd8) * 0xa8;
          iVar8 = *(int *)(this + iVar6 + 0x1540);
          iVar10 = *(int *)(this + iVar6 + 0x1538);
          SVar1 = (undefined1)((byte)this[iVar6 + 0x1548] & 1);
        }
        if (SVar1 != (undefined1)0x0) {
          iVar10 = iVar10 + 1000000;
        }
        this[0x1bf3] = this[0x1bf2];
        F_004816e0(((undefined1 *)(gen_frame + 0x4)));
        (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
        (*(int *)(gen_frame + 0x7c)) = 0;
        (*(int *)(gen_frame + 0x7c)) = iVar10;
        (*(undefined1 *)(gen_frame + 0x84)) = 0;
        F_00493bc0(((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x7c)));
        F_004917c0(&(*(int *)(gen_frame + 0x7c)));
        (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
        (*(int *)(gen_frame + 0x7c)) = 0;
        (*(int *)(gen_frame + 0x7c)) = *(int *)(this + 0x1bcc);
        (*(undefined1 *)(gen_frame + 0x84)) = 0;
        F_00493bc0(((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x7c)));
        F_004917c0(&(*(int *)(gen_frame + 0x7c)));
        (*(int *)(gen_frame + 0x7c)) = 0;
        (*(int *)(gen_frame + 0x7c)) = *(int *)(this + 0x1bcc) * iVar8;
        (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
        (*(undefined1 *)(gen_frame + 0x84)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x7c)));
        F_004917c0(&(*(int *)(gen_frame + 0x7c)));
        if (this[0x1bf2] == (undefined1)0x0) {
          uVar13 = 0xd4e;
        }
        else {
          uVar13 = 0xf20;
        }
        F_00ab3200(uVar13,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x28)));
        F_006c1210(this,((undefined1 *)(gen_frame + 0x28)));
        F_00493180(((undefined1 *)(gen_frame + 0x4)));
        uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x28)));
        uVar4 = (uint)uVar12;
        *(undefined4 *)(this + 0x1bdc) = 0;
      }
      else {
        uVar4 = F_006f5200(this);
        *(undefined4 *)(this + 0x1bdc) = 0;
      }
      goto LAB_0070d685;
    }
    uVar4 = F_006c1f90(this);
  }
  else {
    this[0x1bec] = (undefined1)0x0;
    iVar8 = *(int *)(*param_1 + 4);
    *(undefined4 *)(this + 0x14c4) = *(undefined4 *)(iVar8 + 0x34);
    *(undefined4 *)(this + 0x14d0) = *(undefined4 *)(iVar8 + 0x30);
    *(undefined4 *)(this + 0x14d4) = *(undefined4 *)(iVar8 + 0x28);
    SVar1 = *(undefined *)(iVar8 + 0xae);
    this[0x14cc] = SVar1;
    uVar4 = F_006c0a30(*(undefined4 *)(this + 0x14d0),(uint)(byte)SVar1,
                         *(undefined4 *)(this + 0x104),*(undefined4 *)(this + 0x100));
    *(uint *)(this + 0x14c8) = uVar4;
    this[0x1bfa] = *(undefined *)(iVar8 + 0xbe);
    this[0x14d8] = *(undefined *)(iVar8 + 0xbf);
    *(uint *)(this + 0x1530) = (uint)*(byte *)(iVar8 + 0xa3);
    uVar4 = F_00ab6240(*(undefined4 *)(this + 0xfc),0,iVar8);
    F_0042e430(this + 0x14dc,uVar4);
    *(undefined2 *)(this + 0x1bfb) = 0;
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 0x104));
    if ((pvVar5 != (undefined *)0x0) &&
       (pvVar5 = (undefined *)F_00a37da0(pvVar5,*(undefined4 *)(this + 0x100)), pvVar5 != (undefined *)0x0))
    {
      if ((*(char *)(iVar8 + 0xa5) != '\0') && (bVar2 = F_00a3bef0(pvVar5), bVar2 != 0)) {
        this[0x1bfb] = (undefined1)0x1;
      }
      uVar3 = F_0071d210(pvVar5);
      if (9999 < uVar3) {
        this[0x1bfc] = (undefined1)0x1;
      }
    }
    uVar4 = F_006c20a0(this);
    if (uVar4 == 0) {
      if (((this[0x1bf0] == (undefined1)0x1) && (1 < *(int *)(this + 0x108))) ||
         (*(int *)(this + 0x104) == 0x7d1)) {
        if (1 < *(uint *)(this + 0x14d4)) {
          F_00a3d750(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 0x104),(uint)*(ushort *)(this + 0x100));
          uVar4 = F_006c0600(this);
          *(undefined4 *)(this + 0x1bdc) = 0;
          goto LAB_0070d685;
        }
        F_00a3d750(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 0x104),(uint)*(ushort *)(this + 0x100));
        uVar13 = *(undefined4 *)(this + 0x108);
      }
      else {
        uVar13 = *(undefined4 *)(this + 0x108);
      }
      uVar4 = F_00706560(this,uVar13);
      *(undefined4 *)(this + 0x1bdc) = 0;
      goto LAB_0070d685;
    }
    uVar4 = F_006c20a0(this);
  }
  *(uint *)(this + 0x1bdc) = uVar4;
  uVar4 = F_006c1e80(this);
  *(undefined4 *)(this + 0x1bdc) = 0;
LAB_0070d685: ;
  puVar9 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar9 != (undefined4 *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar4;
}

/* ref: FUN_0070d6b0 */
uint F_0070d6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x70d6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = (*(uint *)(gen_frame + 0x404));
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x404)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x404)) = uVar3 & 0xffffff00;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0xc)),0,0x3f8);
  uVar2 = *(ushort *)((int)this + 0x54);
  uVar3 = (uint)uVar2;
  if (uVar3 == 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x404)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x404)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x404)), 1, 3),1);
  }
  else if (uVar3 == 0x28) {
    if (*(char *)((int)this + 0x1bf2) == '\0') {
      if (*(char *)((int)this + 0x1bef) == '\0') {
        uVar3 = F_006c1620(this);
      }
      else {
        F_006c1270(this);
        uVar3 = F_006c2100(this,0);
      }
    }
    else {
      uVar3 = F_006c1990(this);
    }
    if (*(char *)((int)this + 0x1bc8) != '\0') {
      if (*(int *)((int)this + 0x1be0) == 1) {
        uVar3 = F_006f5080(this,*(undefined4 *)((int)this + 0x1bcc));
      }
      *(undefined1 *)((int)this + 0x1bc8) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
      return uVar3;
    }
    goto LAB_0070d79c;
  }
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  if (uVar2 != 0xffff) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar3 = (uint)CONCAT11((char)(uVar2 >> 8),bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x404)));
    }
  }
LAB_0070d79c: ;
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar3;
}

/* ref: FUN_0070d7b0 */
uint F_0070d7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x70d7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(300,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00706ff0(this,param_1 & 0xffff | 0x160000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0070d7e0 */
byte F_0070d7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x70d7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  if ((param_1 == 0xffffffff) || (param_1 == 0xfffffffe)) {
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 1;
    if ((*(int *)((int)this_00 + 0x24) != 0) &&
       (((piVar4 = (int *)F_007512b0((undefined *)((int)this_00 + 0x14)), *piVar4 != 0 &&
         (*(short *)((int)this + 0x54) != -1)) && ((*(byte *)((int)this + 0x5c) & 4) == 0)))) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(this_00,&(*(undefined4 *)(gen_frame + 0x0)),6);
    }
    REFG(undefined4, 0x1488768) = 0;
    return 1;
  }
  if ((param_1 != 0x400) && (REFG(int, 0x1324204) == 0)) {
    *(uint *)((int)this + 0x124) = param_1;
    uVar3 = F_0075ae90((undefined *)((int)this + 0xfc),(int)this + 0x10d);
    F_00754bb0(&(*(int *)(gen_frame + 0x8)),uVar3);
    iVar1 = (*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8)) >> 0x1f;
    iVar5 = ((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8))) / 0x140 + iVar1;
    uVar3 = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    if (iVar5 != iVar1) {
      do {
        if (0x31 < (ushort)(*(uint *)(gen_frame + 0x18))) break;
        if (*(char *)((int)this + 0x10e) == *((char *)GEN_TOP(((uVar3 & 0xffff) * 0x140 + 0x12 + (*(int *)(gen_frame + 0x8)))))) {
          if (((*(uint *)(gen_frame + 0x18)) & 0xffff) == param_1) {
            *(uint *)((int)this + 0x124) = uVar3 & 0xffff;
            break;
          }
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffff) < (uint)(iVar5 - iVar1));
    }
    uVar3 = F_00700e00(this);
    bVar2 = F_006c2e90(this,uVar3);
    if (bVar2 != 0) {
      F_007070f0(this);
    }
    F_00752390(&(*(int *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf24 */
uint F_0070d930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x70d930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 SVar1;
  uint uVar2;
  
  if ((short)param_2 == 0) {
    if ((char)param_4 == '\x01') {
      F_00707610(this,*param_3);
      if ((*param_3 != 0) && (*(int *)(this + 0x198) == 2)) {
        F_00a48ae0(&REFG(undefined, 0x14a4230));
      }
    }
    this[0x1a0] = (undefined1)0x0;
    uVar2 = F_006eaed0(this);
  }
  else {
    uVar2 = 0xffff;
    if (*(short *)(this + 0x54) != -1) {
      SVar1 = this[0x5c];
      uVar2 = CONCAT31(0xff,SVar1);
      if (((byte)SVar1 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)SVar1 | 4);
        uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0070d9b0 */
uint F_0070d9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70d9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(uint *)(gen_frame + 0x168)) = uVar2;
  if (*(char *)((int)this + 0x1a0) == '\0') {
    if ((int)param_1 < 0) {
      uVar2 = 0xffff;
      (*(undefined4 *)(gen_frame + 0x0)) = 1;
      if (*(short *)((int)this + 0x54) != -1) {
        bVar1 = *(byte *)((int)this + 0x5c);
        uVar2 = CONCAT31(0xff,bVar1);
        if ((bVar1 & 4) == 0) {
          *(byte *)((int)this + 0x5c) = bVar1 | 4;
          uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),1);
          F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
          return uVar2;
        }
      }
    }
    else {
      uVar2 = (*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x1b0;
      if (param_1 < uVar2) {
        uVar2 = *(uint *)((int)this + 0x198);
        iVar5 = param_1 * 0x1b0 + *(int *)((int)this + 0xf8);
        *(uint *)((int)this + 0x19c) = param_1;
        if (uVar2 == 2) {
          (*(undefined4 *)(gen_frame + 0x156)) = 0;
          (*(undefined4 *)(gen_frame + 0x15a)) = 0;
          (*(undefined1 *)(gen_frame + 0x160)) = 0;
          (*(undefined4 *)(gen_frame + 0x161)) = 0;
          (*(undefined2 *)(gen_frame + 0x154)) = 0;
          F_00ba0800(&REFG(undefined, 0x14b0f2c),0,*(undefined4 *)(iVar5 + 0xec),*(undefined4 *)(iVar5 + 0xdc),0
                       ,&(*(undefined2 *)(gen_frame + 0x154)),&(*(undefined1 *)(gen_frame + 0x160)),0);
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 1;
          (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),1);
          if (*(int *)(iVar5 + 0xf0) != 0) {
            F_00ba0800(&REFG(undefined, 0x14b0f2c),1,*(int *)(iVar5 + 0xf0),*(undefined4 *)(iVar5 + 0xe0),0,
                         &(*(undefined2 *)(gen_frame + 0x154)),&(*(undefined1 *)(gen_frame + 0x160)),0);
            (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 2;
            (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),2);
          }
          F_00b9f940(&REFG(undefined, 0x14b0f2c),(*(undefined4 *)(gen_frame + 0x0)),this);
          bVar1 = F_00ba05d0(&REFG(undefined, 0x14b0f2c));
          if (bVar1 != 0) {
            uVar2 = F_00a40f50(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xe4),0);
            if (*(uint *)(iVar5 + 0xd8) <= uVar2) {
              F_0042cc20(((undefined1 *)(gen_frame + 0xac)),&REFG(undefined, 0x10b3a72),REFG(undefined4, 0x108cc50));
              F_0042cc20(((undefined1 *)(gen_frame + 0x100)),&REFG(undefined, 0x10b3a73),REFG(undefined4, 0x108cc50));
              F_00ab0230(0xd53,((undefined1 *)(gen_frame + 0xac)));
              F_00ab0230(0xd54,((undefined1 *)(gen_frame + 0x100)));
              uVar7 = REFG(undefined4, 0x108cc50);
              uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x100)));
              F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar2,uVar7);
              uVar7 = REFG(undefined4, 0x108cc50);
              uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xac)));
              F_0042cc20(((undefined1 *)(gen_frame + 0x58)),uVar2,uVar7);
              piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              uVar7 = 0x1d;
              uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
              piVar3 = (int *)F_00763050(uVar2,uVar7);
              ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,0,((undefined1 *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0x4)),1);
              F_0042c880(((undefined1 *)(gen_frame + 0x58)));
              F_0042c880(((undefined1 *)(gen_frame + 0x4)));
              F_0042c880(((undefined1 *)(gen_frame + 0x100)));
              uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0xac)));
              F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
              return (uint)uVar6;
            }
LAB_0070dc6f: ;
            uVar2 = F_00707610(this,0x18);
            F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
            return uVar2;
          }
        }
        else {
          if (uVar2 != 1) {
            if (uVar2 == 0) {
              uVar2 = F_00a3ded0(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xec),2000,0);
              if (uVar2 < *(uint *)(iVar5 + 0xdc)) goto LAB_0070dcd3;
              uVar2 = F_00a40f50(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xe4),0);
              if (uVar2 < *(uint *)(iVar5 + 0xd8)) {
                uVar2 = F_00707610(this,0x18);
                F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
                return uVar2;
              }
              uVar2 = F_006f65e0(this,param_1);
            }
            goto LAB_0070dd2e;
          }
          uVar4 = *(int *)(iVar5 + 0xdc) * param_2;
          uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xec),0,1,1);
          if (uVar4 <= uVar2) {
            uVar2 = F_00a40f50(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xe4),0);
            if ((uint)(*(int *)(iVar5 + 0xd8) * param_2) <= uVar2) {
              uVar2 = F_00a36a40(*(undefined4 *)(iVar5 + 0xe4),uVar4);
              F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
              return uVar2;
            }
            goto LAB_0070dc6f;
          }
        }
LAB_0070dcd3: ;
        uVar2 = F_00707610(this,8);
        F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
        return uVar2;
      }
    }
  }
LAB_0070dd2e: ;
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return uVar2;
}

/* ref: FUN_0070dd40 */
uint F_0070dd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70dd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  byte bVar2;
  uint * puVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = *(undefined4 * PTR32 *)(*param_1 + 4);
  puVar6 = puVar1;
  puVar7 = (undefined4 *)((int)this + 0x350);
  for (iVar5 = 0x68; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar3 = (uint *)F_00ab3450(puVar1[0x66]);
  uVar4 = 0;
  if (puVar3 != (uint *)0x0) {
    F_0042e430((undefined *)((int)this + 0x118),(*puVar3 & 0xffffff) + (int)puVar3);
    F_00709190(this,puVar3);
    bVar2 = F_006d8320(this);
    uVar4 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      F_006c3d50(this);
      uVar4 = F_00754440((undefined *)((int)this + 0xfc),REFG(undefined * PTR32, 0x1323764),
                           (*puVar3 & 0xffffff) + (int)puVar3,0);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x34c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x34c) = 0;
  }
  *(undefined4 *)((int)this + 0x348) = 0;
  return uVar4;
}

/* ref: FUN_0070ddf0 */
uint F_0070ddf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70ddf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  F_0042cc20(this,(*(uint *)(param_1 + 4) & 0xffffff) + param_1 + 4,REFG(undefined4, 0x108cc50));
  puVar1 = (uint *)F_00ab3480(*(undefined4 *)(param_1 + 0x24));
  F_0042cc20((undefined *)((int)this + 0x54),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
  puVar1 = (uint *)F_00ab21d0((uint)*(byte *)(param_1 + 0x55));
  if (puVar1 == (uint *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
  }
  F_0042cc20((undefined *)((int)this + 0xa8),iVar4,REFG(undefined4, 0x108cc50));
  F_0042b630((int)this + 0xfc);
  F_0042b630((int)this + 0x150);
  *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1b0) = uVar3;
  *(undefined1 *)((int)this + 0x1bc) = *(undefined1 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)(param_1 + 0x48);
  *(undefined1 *)((int)this + 0x1c8) = *(undefined1 *)(param_1 + 0x54);
  *(undefined1 *)((int)this + 0x1c9) = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)((int)this + 0x1ca) = *(undefined1 *)(param_1 + 0x59);
  F_00720450((undefined *)((int)this + 0x1cc),param_2);
  F_00709540(*(undefined4 *)(param_1 + 0x34),(int)this + 0xfc);
  F_00709660(this,(uint)*(byte *)((int)this + 0x1c8),(int)this + 0x150);
  uVar2 = F_00ab3390((uint)*(byte *)(param_1 + 0x56));
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar2 + 4);
  }
  *(undefined4 *)((int)this + 0x1a8) = uVar3;
  uVar2 = F_00ab3390((uint)*(byte *)(param_1 + 0x57));
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar2 + 4);
  }
  *(undefined4 *)((int)this + 0x1ac) = uVar3;
  uVar2 = F_00ab32a0(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(uVar2 + 4);
  uVar2 = F_00ab37e0(*(undefined4 *)(param_1 + 0x1c));
  if (uVar2 != 0) {
    *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)(uVar2 + 0x14);
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x1b8) = 0;
  return (uint)this;
}

/* ref: FUN_0070e450 */
unsigned int F_0070e450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70e450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int * piVar5;
  undefined3 uVar6;
  int * piVar7;
  uint uVar8;
  ushort * puVar9;
  undefined4 * this_00;
  int * piVar10;
  undefined * this_01;
  uint uVar11;
  
  uVar2 = *(ushort *)(param_1 + 4);
  uVar3 = *(ushort *)(param_2 + 4);
  uVar8 = (uint)uVar3;
  if ((ushort)param_3 < 0x10) {
    puVar9 = ((ushort *)GEN_TOP((*(int *)((int)this + 0x7ac) + (uint)(ushort)param_3 * 0x10)));
    if (*puVar9 != uVar2) {
      *puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(undefined1 *)(puVar9 + 6) = 0;
      *((ushort *)GEN_TOP(((uint)(ushort)param_3 * 0x10 + *(int *)((int)this + 0x7ac)))) = uVar2;
    }
  }
  if (((uVar2 != 0) || (uVar3 != 0)) &&
     (piVar10 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30))), piVar10 != *(int * PTR32 *)((int)this + 0x30))) {
    do {
      sVar4 = *(short *)(piVar10[4] + 10);
      uVar11 = 0;
      do {
        if (sVar4 == *(short *)((int)&REFG(undefined2, 0x10b4200) + uVar11)) {
          ((code *)*(gen_code32 *)(*(int *)piVar10[4] + 0x22c))((int *)piVar10[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar10[4] + 0x1c8))((int *)piVar10[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar10[4] + 0x1f8))((int *)piVar10[4]);
        }
        uVar11 = uVar11 + 2;
      } while (uVar11 < 4);
      if (*(char *)((int)piVar10 + 0x15) == '\0') {
        piVar5 = (int *)piVar10[2];
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x15);
          piVar10 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar10 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar10[1] + 0x15);
          piVar7 = (int *)piVar10[1];
          piVar5 = piVar10;
          while ((piVar10 = piVar7, cVar1 == '\0' && (piVar5 == (int *)piVar10[2]))) {
            cVar1 = *(char *)(piVar10[1] + 0x15);
            piVar7 = (int *)piVar10[1];
            piVar5 = piVar10;
          }
        }
      }
    } while (piVar10 != *(int * PTR32 *)((int)this + 0x30));
  }
  uVar6 = SUB43((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)),1);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) & 0xffffff00;
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      if ((ushort)param_3 < 0x10) {
        F_00a84160(&REFG(undefined, 0x14b1258),(uint)(ushort)param_3);
      }
      F_006ffa10(*(undefined * PTR32 *)((int)this + 0x50),uVar8);
      ((byte *)(gen_frame + 0x0))[0xd] = (char)uVar6;
      ((byte *)(gen_frame + 0x0))[0xe] = (char)((uint3)uVar6 >> 8);
      ((byte *)(gen_frame + 0x0))[0xf] = (char)((uint3)uVar6 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0xc] = 1;
    }
  }
  else {
    if (uVar3 == uVar2) {
      if (*(char *)(param_1 + 6) == *(char *)(param_2 + 6)) goto LAB_0070e671;
      F_00a84160(&REFG(undefined, 0x14b1258),(uint)(ushort)param_3);
    }
    if (*(int *)((int)this + 0x748) == 0) {
      uVar11 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3c);
      *(uint *)((int)this + 0x748) = uVar11;
    }
    uVar11 = (uint)(ushort)param_3;
    if (*(int *)((int)this + uVar11 * 4 + 0x74c) == 0) {
      this_00 = (undefined4 *)F_00406b90(0x20,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        F_00cb4700(this_00,1,uVar11);
        this_00[5] = 1;
        *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b90a8));
        this_00[6] = this;
        this_00[7] = ((code *)REFP(0x70ac90));
      }
      *(undefined4 * PTR32 *)((int)this + uVar11 * 4 + 0x74c) = this_00;
      F_00cb4540(this_00,0,(uint)uVar2);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x748) + 0x48))))
                (*(int * PTR32 *)((int)this + 0x748),*(undefined4 *)((int)this + uVar11 * 4 + 0x74c));
    }
  }
LAB_0070e671: ;
  piVar10 = (int *)F_00424750(REFG(int, 0x137104c));
  this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar10 + 0x1c))(piVar10)));
  F_008229c0(this_01,uVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  return 0;
}

/* ref: FUN_0070e6a0 */
uint F_0070e6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x70e6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  char cVar2;
  short sVar3;
  int * piVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * PTR32 * ppuVar9;
  undefined4 * puVar10;
  ushort * puVar11;
  int * piVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  uVar7 = F_00a4ffd0();
  puVar11 = (ushort *)(uVar7 + 0x13b8);
  (*(int *)(gen_frame + 0x18)) = 0x1e;
  do {
    if (*puVar11 != 0) {
      puVar10 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x30))[1]));
      uVar7 = *puVar11 | 0x10000;
      cVar2 = *(char *)((int)puVar10 + 0x15);
      puVar5 = *(undefined4 * PTR32 *)((int)this + 0x30);
      while (cVar2 == '\0') {
        if ((uint)puVar10[3] < uVar7) {
          puVar8 = (undefined4 *)puVar10[2];
          puVar10 = puVar5;
        }
        else {
          puVar8 = (undefined4 *)*puVar10;
        }
        puVar5 = puVar10;
        puVar10 = puVar8;
        cVar2 = *(char *)((int)puVar8 + 0x15);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar5;
      if ((puVar5 == *(undefined4 * PTR32 *)((int)this + 0x30)) || (uVar7 < (uint)puVar5[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)((int)this + 0x30);
        ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      }
      else {
        ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      puVar10 = *ppuVar9;
      if (puVar10 != *(undefined4 * PTR32 *)((int)this + 0x30)) {
        ((code *)*(gen_code32 *)(*(int *)puVar10[4] + 0x22c))((int *)puVar10[4]);
        ((code *)*(gen_code32 *)(*(int *)puVar10[4] + 0x1f8))((int *)puVar10[4]);
      }
    }
    puVar11 = puVar11 + 8;
    iVar1 = (*(int *)(gen_frame + 0x18)) + -1;
    (*(int *)(gen_frame + 0x18)) = iVar1;
  } while (iVar1 != 0);
  piVar12 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar12 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar3 = *(short *)(piVar12[4] + 10);
      uVar7 = 0;
      do {
        if (sVar3 == *(short *)((int)&REFG(undefined2, 0x10b4200) + uVar7)) {
          ((code *)*(gen_code32 *)(*(int *)piVar12[4] + 0x22c))((int *)piVar12[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar12[4] + 0x1c8))((int *)piVar12[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar12[4] + 0x1f8))((int *)piVar12[4]);
        }
        uVar7 = uVar7 + 2;
      } while (uVar7 < 4);
      if (*(char *)((int)piVar12 + 0x15) == '\0') {
        piVar4 = (int *)piVar12[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar2 = *(char *)(*piVar4 + 0x15);
          piVar12 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar4 + 0x15);
            piVar12 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar2 = *(char *)(piVar12[1] + 0x15);
          piVar6 = (int *)piVar12[1];
          piVar4 = piVar12;
          while ((piVar12 = piVar6, cVar2 == '\0' && (piVar4 == (int *)piVar12[2]))) {
            cVar2 = *(char *)(piVar12[1] + 0x15);
            piVar6 = (int *)piVar12[1];
            piVar4 = piVar12;
          }
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0x14));
    } while (piVar12 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x30));
  }
  uVar7 = F_0070aea0(this);
  return uVar7;
}

/* ref: FUN_0070e7f0 */
uint F_0070e7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x70e7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x12c20];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  short sVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x12c18)) = 0x70e7fd;
  (*(uint *)(gen_frame + 0x12c18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  sVar5 = (short)param_3;
  if (sVar5 == 0) goto LAB_0070e892;
  if (param_1 != 2) {
    if (param_1 != 1) goto LAB_0070e892;
    if (param_2 != 2) {
      if ((*(int *)((int)this + 0x528) == 0) || (*(short *)((int)this + 0x52c) != sVar5)) {
        uVar1 = F_006e01a0(this,1,param_2,param_3,param_4);
        F_00c47745((*(uint *)(gen_frame + 0x12c18)) ^ (uint)(uint)(gen_frame + 0x0));
        return uVar1;
      }
      goto LAB_0070e892;
    }
  }
  if ((*(uint * PTR32 *)((int)this + 0x270) == (uint *)0x0) ||
     (**(uint * PTR32 *)((int)this + 0x270) != (param_3 & 0xffff))) {
    uVar1 = F_006e94d0(this,param_1,param_2,param_3,param_4);
    F_00c47745((*(uint *)(gen_frame + 0x12c18)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar1;
  }
LAB_0070e892: ;
  if (*(int *)((int)this + 0x228) == param_1) {
    uVar1 = param_4;
    if (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x228) * 4 + 0x22c))) != param_2) {
      uVar1 = param_4 | 1;
    }
  }
  else {
    uVar1 = param_4 | 3;
  }
  if (*(short *)((int)this + 0x52e) != sVar5) {
    uVar1 = uVar1 | 4;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x10008));
  iVar4 = 0x581;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0070b040(this,uVar1,param_1,param_2,param_3,((undefined4 *)(gen_frame + 0x10008)));
  *(int *)((int)this + 0x228) = param_1;
  if ((uVar1 & 4) != 0) {
    *(short *)((int)this + 0x52e) = sVar5;
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  *(int *)((int)this + param_1 * 4 + 0x22c) = param_2;
  *(undefined2 *)((int)this + param_1 * 2 + 0x248) = *(undefined2 *)((int)this + 0x52e);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,REFG(undefined4, 0x1324110),0x582,((undefined4 *)(gen_frame + 0x10008)));
  this_00 = &(*(uint *)(gen_frame + 0x12c18));
  iVar4 = 0x581;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x12c18)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_0070e980 */
uint F_0070e980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70e980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x12c20];
  undefined4 * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x12c18)) = 0x70e98d;
  (*(uint *)(gen_frame + 0x12c18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  REFG(void * PTR32, 0x132410c) = this;
  F_00a4ffd0();
  puVar1 = ((undefined4 *)(gen_frame + 0x10008));
  iVar4 = 0x581;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0070b040(this,0xff,param_1,param_2,0,((undefined4 *)(gen_frame + 0x10008)));
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x1324108);
  puVar1 = ((undefined4 *)(gen_frame + 0x10008));
  uVar6 = 0x582;
  uVar5 = 0x27;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  REFG(undefined4, 0x1324110) = F_008668b0(this_00,uVar5,uVar6,puVar1,ppuVar7,uVar8,uVar9,uVar10);
  *(int *)((int)this + 0x228) = param_1;
  *(undefined4 *)((int)this + param_1 * 4 + 0x22c) = param_2;
  F_00a6e080(&REFG(undefined, 0x14a9e40),0x21,0,0);
  this_01 = &(*(uint *)(gen_frame + 0x12c18));
  iVar4 = 0x581;
  do {
    this_01 = this_01 + -2;
    uVar3 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x12c18)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar3;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf24 */
uint F_0070ea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x70ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 GVar1;
  int * piVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined * pvVar6;
  uint uVar7;
  float * pfVar8;
  undefined4 * puVar9;
  undefined1 * puVar10;
  int iVar11;
  float fVar12;
  
  pvVar6 = REFG(void * PTR32, 0x1379694);
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  if ((short)param_2 == 1) {
    if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
      pvVar6 = param_1;
      if (*(short *)(this + 0x54) != -1) {
        GVar1 = this[0x5c];
        pvVar6 = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)param_1) >> 8),GVar1)));
        if (((byte)GVar1 & 4) == 0) {
          this[0x5c] = (undefined1)((byte)GVar1 | 4);
          pvVar6 = (undefined *)F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        }
      }
    }
    else {
      fVar12 = gen_bits2f(param_3[1]);
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x2dd5))) = (char)*param_3;
      iVar11 = REFG(int, 0x1488344);
      F_00aa4270(pvVar6,(undefined4)gen_fl2bits(fVar12),0,0);
      uVar7 = (*(uint *)(gen_frame + 0x2c));
      (*(float *)(gen_frame + 0x20)) = fVar12;
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar6;
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = this + 0x28;
      (*(float *)(gen_frame + 0x28)) = 1.4013e-45;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x2c)) = uVar7 & 0xffff0000;
      pvVar6 = (undefined *)F_00746770((undefined4 *)(iVar11 + 0x6f0),*(undefined4 *)(iVar11 + 0x6f0),
                                    &(*(undefined * PTR32 *)(gen_frame + 0x1c)));
    }
    goto LAB_0070eefd;
  }
  if (*param_3 == 0) {
    iVar11 = *(int *)(this + 0x10c);
    (*(float * PTR32 *)(gen_frame + 0x38)) = (float *)iVar11;
    if (iVar11 != 0) {
      (*(int *)(gen_frame + 0x4)) = 7;
      pvVar6 = (undefined *)(iVar11 + 0x3b0);
      do {
        pvVar6 = (undefined *)((int)pvVar6 + -0x74);
        F_0042c880(pvVar6);
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
      } while (-1 < (*(int *)(gen_frame + 0x4)));
      F_00406ad0((*(float * PTR32 *)(gen_frame + 0x38)));
      *(undefined4 *)(this + 0x10c) = 0;
    }
    pvVar6 = (undefined *)F_00406b90(0x3b8,0,0);
    if (pvVar6 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = F_0072dfe0(pvVar6);
    }
    *(uint *)(this + 0x10c) = uVar7;
    pvVar6 = REFG(void * PTR32, 0x1379694);
    pfVar8 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar8;
    pfVar8 = (float *)F_00a5feb0(param_1);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar8 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)pfVar8[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]))));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar8[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
    fVar12 = F_00aae900(&(*(float *)(gen_frame + 0x20)));
    F_00a9f870(pvVar6,fVar12);
    bVar5 = F_006be920(this);
    if (bVar5 != 0) {
      F_00a6e080(&REFG(undefined, 0x14a9e40),0x36,0,0);
    }
  }
  *((int *)GEN_TOP((*(int *)(this + 0x10c) + 0x3a8))) = *param_3;
  *((undefined2 *)GEN_TOP((*(int *)(this + 0x10c) + 0x3b6))) = *(undefined2 *)((int)param_3 + 0xe);
  *((int *)GEN_TOP((*(int *)(this + 0x10c) + 0x3ac))) = param_3[1];
  *((int *)GEN_TOP((*(int *)(this + 0x10c) + 0x3b0))) = param_3[2];
  this[0x148] = *(undefined *)((int)param_3 + 0xe);
  this[0x149] = *(undefined *)(param_3 + 3);
  this[0x144] = *(undefined *)(param_3 + 0x24);
  if ((param_3[2] & 0x80000000U) != 0) {
    ((char *)(gen_frame + 0x34))[0] = -1;
    ((char *)(gen_frame + 0x34))[1] = -1;
    ((char *)(gen_frame + 0x34))[2] = -1;
    ((char *)(gen_frame + 0x34))[3] = -1;
    (*(float * PTR32 *)(gen_frame + 0x38)) = (float *)0xffffffff;
    uVar7 = 0;
    (*(int *)(gen_frame + 0xc)) = 0;
    ((int *)(gen_frame + 0x10))[0] = 0;
    ((int *)(gen_frame + 0x10))[1] = 0;
    ((int *)(gen_frame + 0x10))[2] = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    (*(uint *)(gen_frame + 0x2c)) = 0;
    bVar4 = false;
    cVar3 = '\0';
    puVar10 = (undefined1 *)((int)param_3 + 0x1a);
    do {
      iVar11 = *(int *)(puVar10 + -10);
      if (0 < iVar11) {
        ((int *)(gen_frame + 0x10))[(int)((*(int *)(gen_frame + 0xc)))] = iVar11;
        ((char *)(gen_frame + 0x34))[(int)((*(int *)(gen_frame + 0xc)))] = cVar3;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        if (iVar11 != *((int *)GEN_TOP((*(int *)(this + 0x10c) + 100 + uVar7)))) {
          bVar4 = true;
        }
      }
      *((int *)GEN_TOP((*(int *)(this + 0x10c) + 100 + uVar7))) = iVar11;
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x72 + uVar7))) = *puVar10;
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x73 + uVar7))) = puVar10[1];
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x74 + uVar7))) = puVar10[2];
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x75 + uVar7))) = puVar10[3];
      cVar3 = cVar3 + '\x01';
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x76 + uVar7))) = puVar10[4];
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x77 + uVar7))) = puVar10[5];
      *((undefined2 *)GEN_TOP((*(int *)(this + 0x10c) + 0x70 + uVar7))) = *(undefined2 *)(puVar10 + -6);
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x78 + uVar7))) = puVar10[-1];
      uVar7 = uVar7 + 0x74;
      puVar10 = puVar10 + 0x10;
    } while (uVar7 < 0x3a0);
    if ((*(int *)(gen_frame + 0xc)) < 1) {
      if (REFG(int, 0x1324130) == 0) {
        F_006fb010(this);
        goto LAB_0070eef6;
      }
    }
    else if (bVar4) {
      **(undefined1 * PTR32 *)(this + 0x10c) = ((char *)(gen_frame + 0x34))[0];
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 1))) = ((char *)(gen_frame + 0x34))[1];
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 2))) = ((char *)(gen_frame + 0x34))[2];
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 3))) = ((char *)(gen_frame + 0x34))[3];
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 4))) = (char)(*(float * PTR32 *)(gen_frame + 0x38));
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 5))) = (char)((uint)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x38))) >> 8);
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 6))) = (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x38)) + 2));
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 7))) = (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x38)) + 3));
      if (*(int *)(this + 0x114) != 0) {
        piVar2 = *(int * PTR32 *)(this + 0x11c);
        if (piVar2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*(int *)(this + 0x114));
        }
        puVar9 = *(undefined4 * PTR32 *)(this + 0x114);
        if (puVar9 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
          *(undefined4 *)(this + 0x114) = 0;
        }
      }
      if (*(int *)(this + 0x11c) == 0) {
        this[0x14a] = (undefined1)((char)this[0x14a] + '\x01');
        if (100 < (byte)this[0x14a]) {
          this[0x14a] = (undefined1)0x0;
        }
        uVar7 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb);
        *(uint *)(this + 0x11c) = uVar7;
      }
      puVar9 = (undefined4 *)F_00406b90(0x28,0,0);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        F_00cb4700(puVar9,(*(int *)(gen_frame + 0xc)),1);
        puVar9[5] = (*(int *)(gen_frame + 0xc));
        *puVar9 = (*(undefined * PTR32 (*)[2])REFP(0x10b91b4));
        puVar9[6] = this;
        puVar9[8] = ((code *)REFP(0x6d58f0));
        puVar9[9] = 0;
      }
      *(undefined4 * PTR32 *)(this + 0x114) = puVar9;
      iVar11 = 0;
      if (0 < (*(int *)(gen_frame + 0xc))) {
        do {
          F_00cb4540(*(undefined * PTR32 *)(this + 0x114),iVar11,((int *)(gen_frame + 0x10))[(int)(iVar11)]);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (*(int *)(gen_frame + 0xc)));
      }
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x11c) + 0x48))))
                                 (*(int * PTR32 *)(this + 0x11c),*(undefined4 *)(this + 0x114))));
      goto LAB_0070eefd;
    }
    F_006ce950(this);
  }
LAB_0070eef6: ;
  pvVar6 = (undefined *)F_0070baa0(this);
LAB_0070eefd: ;
  F_00c47745((*(uint *)(gen_frame + 0x3c)) ^ (uint)(uint)(gen_frame + 0x40));
  return (uint)pvVar6;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf34 */
uint F_0070ef20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70ef20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)(byte)this[0x14a];
  if (uVar3 == param_3) {
    param_3 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + param_3 * 4) + 4)));
        if (iVar1 != 0) {
          iVar4 = *((char *)GEN_TOP((*(int *)(this + 0x10c) + param_3))) * 0x74;
          uVar3 = F_00ab6240(*((undefined4 *)GEN_TOP((iVar4 + 0x68 + *(int *)(this + 0x10c)))),0,iVar1);
          F_0042e430(((undefined *)GEN_TOP((*(int *)(this + 0x10c) + 0x10 + iVar4))),uVar3);
          *((uint *)GEN_TOP((*(int *)(this + 0x10c) + 0x6c + iVar4))) = (uint)*(ushort *)(iVar1 + 0x7c);
        }
        param_3 = param_3 + 1;
      } while (param_3 < param_2);
    }
    if (REFG(int, 0x1324130) == 0) {
      F_006fb010(this);
    }
    else {
      F_006ce950(this);
    }
    uVar3 = F_0070baa0(this);
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  return uVar3;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf35 */
uint F_0070efe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70efe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)(byte)this[0x14a];
  if (uVar3 == param_3) {
    param_3 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + param_3 * 4) + 4)));
        if (iVar1 != 0) {
          iVar4 = *((char *)GEN_TOP((*(int *)(this + 0x10c) + param_3))) * 0x74;
          uVar3 = F_00ab64e0(*((undefined4 *)GEN_TOP((iVar4 + 0x68 + *(int *)(this + 0x10c)))),0,iVar1);
          F_0042e430(((undefined *)GEN_TOP((*(int *)(this + 0x10c) + 0x10 + iVar4))),uVar3);
          *((uint *)GEN_TOP((*(int *)(this + 0x10c) + 0x6c + iVar4))) = (uint)*(ushort *)(iVar1 + 0x1c);
        }
        param_3 = param_3 + 1;
      } while (param_3 < param_2);
    }
    if (REFG(int, 0x1324130) == 0) {
      F_006fb010(this);
    }
    else {
      F_006ce950(this);
    }
    uVar3 = F_0070baa0(this);
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0x6c);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  *(undefined4 *)(this + 0x70) = 0;
  return uVar3;
}

/* ref: Client::Game::Event::ShopEventHandler::vf24 */
uint F_0070f0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x70f0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = param_3;
  *(undefined * PTR32 *)&REFG(undefined, 0x1488764) = param_1;
  F_0042b630(((undefined1 *)(gen_frame + 0x60)));
  if (((short)param_2 == 0) && (param_1 != (undefined *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
    (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_00aa0000(param_1,0x2ff,0,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
    F_006df030(*(undefined * PTR32 *)(this + 4),param_1,REFG(undefined4, 0x1379694),1);
  }
  if ((short)param_2 == 0) {
    if ((char)param_4 != '\0') {
      *(undefined4 *)(this + 0x1bd4) = *(*(undefined4 * PTR32 *)(gen_frame + 0x5c));
    }
    *(undefined4 *)(this + 0x1bdc) = 0;
    this[0x1bf8] = (undefined1)0x0;
    REFG(undefined4, 0x1488760) = this;
    this[0x1bf9] = (undefined1)0x0;
  }
  else if ((short)param_2 == 0x28) {
    this[0x1bef] = (undefined1)0x0;
    if ((char)param_4 != '\0') {
      F_006d1050(this,(*(undefined4 * PTR32 *)(gen_frame + 0x5c)),param_4);
    }
    REFG(undefined4, 0x1488760) = this;
    F_006c1e80(this);
    this[0x1bf9] = (undefined1)0x0;
  }
  F_0070d6b0(this);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return (uint)uVar1;
}

/* ref: FUN_0070f230 */
uint F_0070f230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x70f230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x34c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xfc);
  *(uint *)((int)this + 0x348) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b92bc))
      ;
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x70dd40));
    }
    *(undefined4 * PTR32 *)((int)this + 0x34c) = puVar3;
    F_00cb4540(puVar3,0,param_1);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x348),*(undefined4 *)((int)this + 0x34c));
  }
  return uVar4;
}

/* ref: FUN_0070f340 */
uint F_0070f340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x70f340u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5ac))) = 0xffffffff;
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4 + 0x22c)));
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538))) + (*(uint *)&gen_args[1]) * 0x10)));
  if (*(int *)(iVar1 + uVar2 * 0x14) == *(int *)(iVar1 + 4 + uVar2 * 0x14)) {
    (*(uint *)&gen_args[1]) = ((*(uint *)&gen_args[1]) << 8 | uVar2) << 0x10;
    if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 1) == 0) {
      uVar2 = F_00a50880(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),0,
                           &(*(uint *)&gen_args[1]),1);
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 1;
      return uVar2;
    }
  }
  else {
    (*(uint *)&gen_args[1]) = F_0070e7f0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),uVar2,(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 2 + 0x248))),0);
  }
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_0070f3d0 */
byte F_0070f3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x70f3d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 1) == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228)));
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538))) + iVar1 * 0x10)));
    if (*(int *)(iVar2 + (*(uint *)&gen_args[1]) * 0x14) == *(int *)(iVar2 + 4 + (*(uint *)&gen_args[1]) * 0x14)) {
      (*(uint *)&gen_args[1]) = (iVar1 << 8 | (*(uint *)&gen_args[1])) << 0x10;
      F_00a50880(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),0,&(*(uint *)&gen_args[1]),1);
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 1;
      return 0;
    }
    F_0070e7f0((*(undefined * PTR32 *)&gen_args[0]),iVar1,(*(uint *)&gen_args[1]),0,0);
  }
  return 0;
}

/* ref: FUN_0070f450 */
byte F_0070f450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70f450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0070e7f0(this,*(int *)((int)this + 0x228),
               *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x228) * 4 + 0x22c))),param_2,0);
  return 0;
}

/* ref: FUN_0070f480 */
uint F_0070f480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70f480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (REFG(int, 0x132410c) == 0) {
    uVar1 = F_0070e980(this,param_1,param_2);
    return uVar1;
  }
  F_0070e7f0(this,param_1,param_2,0,0);
  uVar1 = *(uint *)((int)this + 0x5ac);
  if (uVar1 != 0xffffffff) {
    if (param_1 != uVar1) {
      uVar1 = F_0070f340(this,uVar1);
      return uVar1;
    }
    *(undefined4 *)((int)this + 0x5ac) = 0xffffffff;
  }
  return uVar1;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf157 */
uint F_0070f4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70f4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_0070f230(this,*((undefined4 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x48))));
  uVar1 = F_006fc830((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_0070f520 */
uint F_0070f520(unsigned int gen_a0)
{
  GEN_ENTER(0x70f520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 8)));
  }
  if ((uint)((int)(uintptr_t)this_00) >> 0x10 == 6) {
    this_00 = (undefined *)F_006dda70(this,this_00);
    if (REFG(int, 0x132410c) != 0) {
      F_00a4ffd0();
      this_00 = (undefined *)F_0070e7f0(this_00,*(int *)((int)this_00 + 0x228),
                                     *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this_00 + 0x228) * 4 + 0x22c))),
                                     (uint)*(ushort *)((int)this_00 + 0x52e),8);
    }
  }
  return (uint)this_00;
}

/* ref: FUN_0070f5a0 */
uint F_0070f5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x70f5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar1 = REFG(int, 0x1379694);
  bVar2 = F_005d4e70();
  piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
  if ((iVar1 != 0) && ((REFG(char, 0x14ab070) != '\0' || (bVar2 != 0)))) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if ((*(uint *)&REFG(undefined, 0x1489f6c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x1489f6c) = *(uint *)&REFG(undefined, 0x1489f6c) | 1;
      F_0042b630(&REFG(undefined, 0x1489f18));
      F_00c47de6(((code *)REFP(0x107be90)));
    }
    piVar4 = *(int * PTR32 *)((int)this + 0x6e4);
    piVar5 = (int *)*piVar4;
    if (piVar5 != piVar4) {
      do {
        if ((*(byte *)(piVar5 + 0x1f) & 3) == 0) {
          F_0042aca0(&REFG(undefined, 0x1489f18));
          piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
          piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xc))
                                    (piVar4,piVar5 + 2,piVar5 + 0x17,&REFG(undefined, 0x1489f18))));
          if (piVar4 == (int *)0xffffffff) {
LAB_0070f674: ;
            F_0042e430(&REFG(undefined, 0x1489f18),&REFG(undefined, 0x10b3a1e));
            piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar5[0x1d] + 4))
                                      ((int *)piVar5[0x1d],0,&REFG(undefined, 0x1489f18),piVar5[0x1e])));
          }
          else {
            if (piVar4 == (int *)0x0) goto LAB_0070f69c;
            if (piVar4 != (int *)0x1) goto LAB_0070f674;
            piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar5[0x1d] + 4))
                                      ((int *)piVar5[0x1d],1,&REFG(undefined, 0x1489f18),piVar5[0x1e])));
          }
          *(byte *)(piVar5 + 0x1f) = *(byte *)(piVar5 + 0x1f) | 1;
        }
LAB_0070f69c: ;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)((int)this + 0x6e4));
    }
    iVar1 = *(int *)((int)this + 0x6e8);
    while ((iVar1 != 0 &&
           (piVar4 = *(int * PTR32 *)((int)this + 0x6e4), (*(byte *)(*piVar4 + 0x7c) & 3) != 0))) {
      piVar3 = (int *)*piVar4;
      if (piVar3 != piVar4) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        F_00492c50(piVar3 + 0x17);
        F_00429760(piVar3[0x17],8,0x2c4);
        piVar3[0x17] = 0;
        F_0042c880(piVar3 + 2);
        F_00429760(piVar3,0x80,800);
        *(int *)((int)this + 0x6e8) = *(int *)((int)this + 0x6e8) + -1;
        piVar4 = this;
      }
      iVar1 = *(int *)((int)this + 0x6e8);
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_0070f730 */
byte F_0070f730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70f730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if (((*(char *)((int)this + 0x265) != '\0') || (*(char *)((int)this + 0x266) != '\0')) ||
     (iVar1 = param_1, *(char *)((int)this + 0x267) != '\0')) {
    iVar1 = param_1 + 4;
  }
  if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
    F_0070f340(this,iVar1);
    return 0;
  }
  *(int *)((int)this + 0x5ac) = iVar1;
  return 0;
}

/* ref: FUN_0070f780 */
uint F_0070f780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70f780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x770];
  uint * puVar1;
  undefined2 * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 * puVar6;
  undefined4 * puVar7;
  undefined3 extraout_var = 0;
  undefined * pvVar8;
  uint * this_00;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x768)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x76c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = param_1;
  uVar9 = param_3 >> 8 & 0xff;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  ((byte *)(gen_frame + 0x8))[0xc] = (char)uVar9;
  ((byte *)(gen_frame + 0x8))[0xd] = (char)(uVar9 >> 8);
  ((byte *)(gen_frame + 0x8))[0xe] = (char)(uVar9 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0xf] = (char)(uVar9 >> 0x18);
  (*(uint *)(gen_frame + 0x34)) = param_3 & 0xff;
  ((byte *)(gen_frame + 0x8))[0x18] = REFG(undefined1, 0x14b4ec1) & 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = CONCAT31(GEN_PIECE(((byte *)(gen_frame + 0x8)), 25, 3),REFG(undefined1, 0x14b4ec1)) & 0xffffff01;
  F_00a4ffd0();
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (param_2 != 0) {
    iVar10 = uVar9 << 4;
    ((byte *)(gen_frame + 0x8))[0x10] = (char)iVar10;
    ((byte *)(gen_frame + 0x8))[0x11] = (char)((uint)iVar10 >> 8);
    ((byte *)(gen_frame + 0x8))[0x12] = (char)((uint)iVar10 >> 0x10);
    ((byte *)(gen_frame + 0x8))[0x13] = (char)((uint)iVar10 >> 0x18);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) = (*(uint *)(gen_frame + 0x34)) * 0x14;
    (*(int *)(gen_frame + 0x2c)) = 0;
    pvVar8 = this;
    do {
      (*(uint *)(gen_frame + 0x24)) = (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + *((int *)GEN_TOP((*(int *)((int)pvVar8 + 0x570) + 0xc))))));
      puVar1 = *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + (*(uint *)(gen_frame + 0x28)) * 4))) + 4)));
      uVar4 = F_00ab32a0(puVar1[0xe]);
      (*(undefined2 * PTR32 *)(gen_frame + 0x40)) = (undefined2 *)uVar4;
      uVar9 = (ushort)puVar1[0x14] / 5;
      if (0x13 < uVar9) {
        uVar9 = 0x13;
      }
      (*(uint *)(gen_frame + 0x3c)) = puVar1[0xd];
      (*(undefined2 * PTR32 *)(gen_frame + 0x40)) = (undefined2 *)(uint)(ushort)puVar1[0x14];
      (*(undefined2 * PTR32 *)(gen_frame + 0x38)) = *(undefined2 * PTR32 *)(uVar4 + 4);
      ((undefined2 *)(gen_frame + 0x5c0))[0] = (undefined2)(*(uint *)(gen_frame + 0x24));
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c4)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
      F_0042b630(((undefined1 *)(gen_frame + 0x618)));
      (*(undefined2 *)(gen_frame + 0x66c)) = (*(undefined2 *)((char *)&(*(undefined2 * PTR32 *)(gen_frame + 0x40)) + 0));
      (*(undefined2 * PTR32 *)(gen_frame + 0x670)) = (*(undefined2 * PTR32 *)(gen_frame + 0x38));
      (*(uint *)(gen_frame + 0x674)) = (*(uint *)(gen_frame + 0x3c));
      F_00709420(((undefined2 *)(gen_frame + 0x5c0)));
      this_00 = ((uint *)GEN_TOP((uVar9 * 0x10 +
                        *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x538)))) +
                                (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20))))))));
      puVar2 = (undefined2 *)this_00[1];
      if (((undefined2 *)(gen_frame + 0x5c0)) < puVar2) {
        if (((undefined2 *)(gen_frame + 0x5c0)) < (undefined2 *)*this_00) goto LAB_0070fa60;
        uVar9 = (int)((undefined2 *)(gen_frame + 0x5c0)) - (int)*this_00;
        (*(uint *)(gen_frame + 0x3c)) = uVar9;
        puVar6 = (undefined2 *)((int)uVar9 / 0xb8);
        (*(undefined2 * PTR32 *)(gen_frame + 0x40)) = puVar6;
        if (puVar2 == (undefined2 *)this_00[2]) {
          iVar10 = (int)((int)puVar2 - *this_00) / 0xb8;
          if (iVar10 == -1) goto LAB_0070fddc;
          (*(uint *)(gen_frame + 0x3c)) = this_00[2] - *this_00;
          uVar4 = iVar10 + 1;
          uVar9 = (int)(this_00[2] - *this_00) / 0xb8;
          puVar6 = (*(undefined2 * PTR32 *)(gen_frame + 0x40));
          if (uVar9 < uVar4) {
            (*(uint *)(gen_frame + 0x3c)) = uVar9;
            uVar5 = uVar9 >> 1;
            (*(undefined2 * PTR32 *)(gen_frame + 0x38)) = (undefined2 *)uVar5;
            if (-uVar5 - 1 < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + uVar5;
            }
            if (uVar9 < uVar4) {
              uVar9 = uVar4;
            }
            F_0074f1b0(this_00,uVar9);
            puVar6 = (*(undefined2 * PTR32 *)(gen_frame + 0x40));
          }
        }
        puVar2 = (undefined2 *)this_00[1];
        puVar6 = (undefined2 *)((int)((int)(uintptr_t)puVar6) * 0xb8 + *this_00);
        (*(undefined2 * PTR32 *)(gen_frame + 0x38)) = puVar2;
        (*(undefined2 * PTR32 *)(gen_frame + 0x40)) = puVar6;
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = *puVar6;
          F_0042cbc0(puVar2 + 2,puVar6 + 2);
          F_0042cbc0((*(undefined2 * PTR32 *)(gen_frame + 0x38)) + 0x2c,(*(undefined2 * PTR32 *)(gen_frame + 0x40)) + 0x2c);
          (*(undefined2 * PTR32 *)(gen_frame + 0x38))[0x56] = (*(undefined2 * PTR32 *)(gen_frame + 0x40))[0x56];
          *(undefined4 *)((*(undefined2 * PTR32 *)(gen_frame + 0x38)) + 0x58) = *(undefined4 *)((*(undefined2 * PTR32 *)(gen_frame + 0x40)) + 0x58);
          *(undefined4 *)((*(undefined2 * PTR32 *)(gen_frame + 0x38)) + 0x5a) = *(undefined4 *)((*(undefined2 * PTR32 *)(gen_frame + 0x40)) + 0x5a);
        }
      }
      else {
LAB_0070fa60: ;
        if (puVar2 == (undefined2 *)this_00[2]) {
          iVar10 = (int)((int)puVar2 - *this_00) / 0xb8;
          if (iVar10 == -1) {
LAB_0070fddc: ;
                    
            F_00c4579a("vector<T> too long");
          }
          (*(uint *)(gen_frame + 0x3c)) = this_00[2] - *this_00;
          uVar4 = iVar10 + 1;
          uVar9 = (int)(this_00[2] - *this_00) / 0xb8;
          if (uVar9 < uVar4) {
            (*(uint *)(gen_frame + 0x3c)) = uVar9;
            uVar5 = uVar9 >> 1;
            (*(undefined2 * PTR32 *)(gen_frame + 0x40)) = (undefined2 *)uVar5;
            if (-uVar5 - 1 < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + uVar5;
            }
            if (uVar9 < uVar4) {
              uVar9 = uVar4;
            }
            F_0074f1b0(this_00,uVar9);
          }
        }
        puVar2 = (undefined2 *)this_00[1];
        (*(undefined2 * PTR32 *)(gen_frame + 0x40)) = puVar2;
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = ((undefined2 *)(gen_frame + 0x5c0))[0];
          F_0042cbc0(puVar2 + 2,((undefined1 *)(gen_frame + 0x5c4)));
          F_0042cbc0((*(undefined2 * PTR32 *)(gen_frame + 0x40)) + 0x2c,((undefined1 *)(gen_frame + 0x618)));
          (*(undefined2 * PTR32 *)(gen_frame + 0x40))[0x56] = (*(undefined2 *)(gen_frame + 0x66c));
          *(undefined2 * PTR32 *)((*(undefined2 * PTR32 *)(gen_frame + 0x40)) + 0x58) = (*(undefined2 * PTR32 *)(gen_frame + 0x670));
          *(uint *)((*(undefined2 * PTR32 *)(gen_frame + 0x40)) + 0x5a) = (*(uint *)(gen_frame + 0x674));
        }
      }
      this_00[1] = this_00[1] + 0xb8;
      F_0042c880(((undefined1 *)(gen_frame + 0x618)));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c4)));
      (*(undefined4 *)(gen_frame + 0x688)) = 0;
      (*(undefined2 *)(gen_frame + 0x6ac)) = 0;
      (*(undefined4 *)(gen_frame + 0x678)) = 0;
      (*(undefined4 *)(gen_frame + 0x67c)) = 0;
      (*(undefined4 *)(gen_frame + 0x680)) = 0;
      (*(undefined4 *)(gen_frame + 0x684)) = 0;
      (*(undefined4 *)(gen_frame + 0x68c)) = 0;
      (*(undefined4 *)(gen_frame + 0x690)) = 0;
      (*(undefined4 *)(gen_frame + 0x694)) = 0;
      (*(undefined4 *)(gen_frame + 0x698)) = 0;
      (*(undefined4 *)(gen_frame + 0x69c)) = 0;
      (*(undefined4 *)(gen_frame + 0x6a0)) = 0;
      (*(undefined1 *)(gen_frame + 0x6a4)) = 0;
      (*(undefined4 *)(gen_frame + 0x6a8)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x6b0)));
      (*(undefined4 *)(gen_frame + 0x704)) = 0;
      (*(undefined4 *)(gen_frame + 0x708)) = 0;
      (*(undefined4 *)(gen_frame + 0x70c)) = 0;
      (*(undefined4 *)(gen_frame + 0x710)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x714)));
      uVar9 = (*(uint *)(gen_frame + 0x24));
      F_006d6580((*(uint *)(gen_frame + 0x24)),(uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x530),(uint)(ushort)puVar1[0x14],
                   (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)),(uint)REFG(undefined1, 0x14ab29a),&(*(undefined4 *)(gen_frame + 0x678)),0,0,0,0,0,0,0,0);
      uVar4 = F_0070ddf0(((undefined1 *)(gen_frame + 0x44)),puVar1,&(*(undefined4 *)(gen_frame + 0x678)));
      ((undefined2 *)(gen_frame + 0x300))[0] = (short)uVar9;
      F_0072cbb0(((undefined1 *)(gen_frame + 0x304)),uVar4);
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x30));
      puVar7 = (undefined4 *)F_004296a0(0x2d0,0,800);
      *puVar7 = *(undefined4 *)((int)pvVar8 + 0x54c);
      puVar7[1] = *(undefined4 *)((int)pvVar8 + 0x54c);
      puVar7[2] = *(undefined4 *)((int)pvVar8 + 0x54c);
      *(undefined2 *)(puVar7 + 0xb3) = 0;
      F_007481e0((int)pvVar8 + 0x555,puVar7 + 3,((undefined2 *)(gen_frame + 0x300)));
      F_007503b0((undefined *)((int)pvVar8 + 0x548),((byte *)(gen_frame + 0x8)),puVar7,0);
      F_0042c880(((undefined1 *)(gen_frame + 0x56c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x508)));
      F_0042c880(((undefined1 *)(gen_frame + 0x454)));
      F_0042c880(((undefined1 *)(gen_frame + 0x400)));
      F_0042c880(((undefined1 *)(gen_frame + 0x3ac)));
      F_0042c880(((undefined1 *)(gen_frame + 0x358)));
      F_0042c880(((undefined1 *)(gen_frame + 0x304)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2ac)));
      F_0042c880(((undefined1 *)(gen_frame + 0x248)));
      F_0042c880(((undefined1 *)(gen_frame + 0x194)));
      F_0042c880(((undefined1 *)(gen_frame + 0x140)));
      F_0042c880(((undefined1 *)(gen_frame + 0xec)));
      F_0042c880(((undefined1 *)(gen_frame + 0x98)));
      F_0042c880(((undefined1 *)(gen_frame + 0x44)));
      F_0042c880(((undefined1 *)(gen_frame + 0x714)));
      F_0042c880(((undefined1 *)(gen_frame + 0x6b0)));
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0x10;
      uVar4 = (*(uint *)(gen_frame + 0x28)) + 1;
      (*(uint *)(gen_frame + 0x28)) = uVar4;
      this = (*(undefined * PTR32 *)(gen_frame + 0x30));
      uVar9 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
    } while (uVar4 < param_2);
  }
  puVar7 = *(undefined4 * PTR32 *)((int)this + 0x570);
  if (puVar7 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  bVar3 = F_0070ff10(this,uVar9,(*(uint *)(gen_frame + 0x34)));
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    *(undefined4 *)((int)this + 0x56c) = 0;
    if (*(int *)((int)this + 0x550) != 0) {
      uVar9 = F_006db770(this,uVar9,(*(uint *)(gen_frame + 0x34)));
      F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c));
      return uVar9;
    }
    if (REFG(int, 0x132410c) == 0) {
      uVar9 = F_0070e980(this,uVar9,(*(uint *)(gen_frame + 0x34)));
      F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c));
      return uVar9;
    }
    F_0070e7f0(this,uVar9,(*(uint *)(gen_frame + 0x34)),0,0);
    uVar4 = *(uint *)((int)this + 0x5ac);
    if (uVar4 != 0xffffffff) {
      if (uVar9 != uVar4) {
        uVar9 = F_0070f340(this,uVar4);
        F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c));
        return uVar9;
      }
      *(undefined4 *)((int)this + 0x5ac) = 0xffffffff;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c));
  return uVar4;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf34 */
uint F_0070fe70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70fe70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x570);
  uVar3 = param_3 >> 8 & 0xff;
  *(undefined4 *)(this + 0x56c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x570) = 0;
  }
  if (REFG(int, 0x132410c) == 0) {
    uVar3 = F_0070e980(this,uVar3,param_3 & 0xff);
    return uVar3;
  }
  F_0070e7f0(this,uVar3,param_3 & 0xff,0,0);
  uVar2 = *(uint *)(this + 0x5ac);
  if (uVar2 != 0xffffffff) {
    if (uVar3 != uVar2) {
      uVar3 = F_0070f340(this,uVar2);
      return uVar3;
    }
    *(undefined4 *)(this + 0x5ac) = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_0070ff10 */
byte F_0070ff10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70ff10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * this_00;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 0x55c) - *(int *)((int)this + 0x558) >> 1) -
          *(int *)((int)this + 0x568);
  if (uVar1 != 0) {
    this_00 = (undefined4 *)F_00406b90(0x20,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      if (9 < uVar1) {
        uVar1 = 10;
      }
      F_00cb4700(this_00,uVar1,(param_1 & 0xff) << 8 | param_2 & 0xff);
      this_00[5] = uVar1;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0x70f780));
    }
    uVar1 = 0;
    *(undefined4 * PTR32 *)((int)this + 0x570) = this_00;
    if (this_00[5] != 0) {
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570),uVar1,
                     (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x558) + *(int *)((int)this + 0x568) * 2))));
        *(int *)((int)this + 0x568) = *(int *)((int)this + 0x568) + 1;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *((uint *)GEN_TOP((*(int *)((int)this + 0x570) + 0x14))));
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x56c) + 0x48))))
              (*(int * PTR32 *)((int)this + 0x56c),*(undefined4 *)((int)this + 0x570));
    return 1;
  }
  return 0;
}

/* ref: FUN_0070fff0 */
uint F_0070fff0(unsigned int gen_a0)
{
  GEN_ENTER(0x70fff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  REFG(undefined4, 0x1323874) = 0;
  REFG(undefined4, 0x13238f8) = 0;
  REFG(undefined1, 0x13238fc) = 0;
  REFG(undefined4, 0x1323900) = 0;
  REFG(undefined4, 0x1323904) = 0;
  piVar6 = (int *)((int)this + 0x74c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x10;
  do {
    if (*piVar6 != 0) {
      piVar5 = *(int * PTR32 *)((int)this + 0x748);
      if (piVar5 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar5 + 0x4c))(piVar5,*piVar6);
      }
      puVar2 = (undefined4 *)*piVar6;
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *piVar6 = 0;
      }
    }
    piVar6 = piVar6 + 1;
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  *(undefined4 *)((int)this + 0x748) = 0;
  F_004d1660(REFG(undefined4, 0x1370c18));
  F_006e68e0((undefined *)((int)this + 0x100));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5c) + 8))))((int)this + 0x5c);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc4) + 8))))((int)this + 0xc4);
  iVar3 = *(int *)((int)this + 0x7ac);
  if (iVar3 != 0) {
    F_00429760(iVar3,*(int *)((int)this + 0x7b4) - iVar3 & 0xfffffff0,800);
  }
  *(undefined4 *)((int)this + 0x7ac) = 0;
  *(undefined4 *)((int)this + 0x7b0) = 0;
  *(undefined4 *)((int)this + 0x7b4) = 0;
  F_0075b000((undefined *)((int)this + 0x78c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x790),
               *(undefined4 * PTR32 *)((int)this + 0x790));
  F_00429760(*(undefined4 *)((int)this + 0x790),0x90,800);
  F_007452a0((undefined *)((int)this + 0x728));
  F_00429760(*(undefined4 *)((int)this + 0x728),8,800);
  *(undefined4 *)((int)this + 0x728) = 0;
  F_00746080((undefined *)((int)this + 0x70c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x710),
               *(undefined4 * PTR32 *)((int)this + 0x710));
  F_00429760(*(undefined4 *)((int)this + 0x710),0x20,800);
  F_00745550((undefined *)((int)this + 0x6fc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x700),
               *(undefined4 * PTR32 *)((int)this + 0x700));
  F_00429760(*(undefined4 *)((int)this + 0x700),0x1c,800);
  piVar6 = *(int * PTR32 *)((int)this + 0x6f0);
  piVar5 = (int *)*piVar6;
  *piVar6 = (int)piVar6;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6f0) + 4))) = *(int *)((int)this + 0x6f0);
  *(undefined4 *)((int)this + 0x6f4) = 0;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x6f0)) {
    do {
      piVar6 = (int *)*piVar5;
      F_00429760(piVar5,0x1c,800);
      piVar5 = piVar6;
    } while (piVar6 != (int *)*(int *)((int)this + 0x6f0));
  }
  F_00429760(*(undefined4 *)((int)this + 0x6f0),0x1c,800);
  F_0075c7c0((undefined *)((int)this + 0x6e4));
  F_00429760(*(undefined4 *)((int)this + 0x6e4),0x80,800);
  F_00749d30((undefined *)((int)this + 0x6d0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6d4),
               *(undefined4 * PTR32 *)((int)this + 0x6d4));
  F_00429760(*(undefined4 *)((int)this + 0x6d4),0x38,800);
  F_00744a50((undefined *)((int)this + 0x6c0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6c4),
               *(undefined4 * PTR32 *)((int)this + 0x6c4));
  F_00429760(*(undefined4 *)((int)this + 0x6c4),0x14,800);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x280) = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
  F_00752850((undefined *)((int)this + 0x264),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x268),
               *(undefined4 * PTR32 *)((int)this + 0x268));
  F_00429760(*(undefined4 *)((int)this + 0x268),0x18,800);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
  F_007452a0((undefined *)((int)this + 0x214));
  F_00429760(*(undefined4 *)((int)this + 0x214),8,800);
  *(undefined4 *)((int)this + 0x214) = 0;
  F_00a02240((int)this + 0x1e8);
  F_006e6680((undefined *)((int)this + 0x100));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[6])REFP(0x10ba994));
  F_00744fa0((undefined *)((int)this + 0xf0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xf4),
               *(undefined4 * PTR32 *)((int)this + 0xf4));
  F_00429760(*(undefined4 *)((int)this + 0xf4),0x28,0x322);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  F_00757fb0((undefined *)((int)this + 0xcc));
  F_006fe980((undefined *)((int)this + 0x5c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10bb9b4));
  F_00749bf0((undefined *)((int)this + 0x3c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x40),
               *(undefined4 * PTR32 *)((int)this + 0x40));
  F_00429760(*(undefined4 *)((int)this + 0x40),0x1c,800);
  F_00744dc0((undefined *)((int)this + 0x2c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  F_00429760(*(undefined4 *)((int)this + 0x30),0x18,800);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  uVar4 = F_00757fb0((undefined *)((int)this + 8));
  return uVar4;
}

/* ref: FUN_007103a0 */
uint F_007103a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7103a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  undefined3 extraout_var_02 = 0;
  int * piVar5;
  undefined * this_00;
  undefined4 uVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar2 = *(uint *)((int)this + 0x1e0);
  (*(int * PTR32 *)(gen_frame + 0x14)) = REFG(int * PTR32, 0x1379694);
  piVar5 = REFG(int * PTR32, 0x1379694);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    break;
  case 1: ;
    goto switchD_007103d5_caseD_1;
  case 2: ;
    goto switchD_007103d5_caseD_2;
  case 3: ;
    goto switchD_007103d5_caseD_3;
  case 4: ;
    goto switchD_007103d5_caseD_4;
  case 5: ;
    goto switchD_007103d5_caseD_5;
  default: ;
    return uVar2;
  }
  bVar1 = F_00ab01e0();
  if (bVar1 == 0) {
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_00ab0190();
  if (bVar1 == 0) {
    return CONCAT31(extraout_var_00,bVar1);
  }
  bVar1 = F_00ab0320();
  if (bVar1 == 0) {
    return CONCAT31(extraout_var_01,bVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  *(undefined4 *)((int)this + 0x1e0) = 1;
switchD_007103d5_caseD_1: ;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  F_006eb2d0(this,0xa0001,0);
  F_006eb2d0(this,0x140001,0);
  F_006eb2d0(this,0x150001,0);
  piVar5 = *(int * PTR32 *)((int)this + 0x50);
  ((undefined4 *)(gen_frame + 0xc))[0] = 0xe;
  (*(bool *)(gen_frame + 0x1f)) = false;
  if (piVar5 == (int *)0x0) {
    F_00748f10((undefined *)((int)this + 0x3c),&(*(int *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0xc)));
    if (((*(int *)(gen_frame + 0x18)) != *(int *)((int)this + 0x40)) &&
       (piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x18)) + 0x10))(0))), piVar5 != (int *)0x0)) {
      bVar1 = F_006e54c0(this,0xe0000,piVar5);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x18)) + 0x14))(piVar5);
      }
      *(int * PTR32 *)((int)this + 0x50) = piVar5;
LAB_007104c6: ;
      (*(bool *)(gen_frame + 0x1f)) = true;
      goto LAB_007104ca;
    }
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
    if (((char)uVar2 == '\0') && (uVar2 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5), (char)uVar2 == '\0')
       ) goto LAB_007104c6;
LAB_007104ca: ;
    ((code *)*(gen_code32 *)(*piVar5 + 0x234))(piVar5,0);
    if ((*(bool *)(gen_frame + 0x1f)) != false) {
      ((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5);
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5c) + 4))))((int)this + 0x5c);
  *(undefined4 *)((int)this + 0x1e0) = 2;
switchD_007103d5_caseD_2: ;
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x14));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5c) + 0xc))))((int)this + 0x5c);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc4) + 4))))((int)this + 0xc4);
  *(undefined4 *)((int)this + 0x1e0) = 3;
switchD_007103d5_caseD_3: ;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc4) + 0xc))))((int)this + 0xc4);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  *(undefined4 *)((int)this + 0x1e0) = 4;
switchD_007103d5_caseD_4: ;
  if (piVar5 == (int *)0x0) {
    return uVar2;
  }
  *(undefined4 *)((int)this + 0x1e0) = 5;
switchD_007103d5_caseD_5: ;
  bVar1 = F_005d4e10(&REFG(undefined, 0x1379c6c));
  if (bVar1 != 0) {
    F_0070f5a0(this);
    F_006f6f30((undefined *)((int)this + 0x5c));
    if ((piVar5 != (int *)0x0) &&
       ((uVar2 = ((code *)*(gen_code32 *)(*piVar5 + 0x68))(piVar5), (char)uVar2 != '\0' ||
        ((*(uint *)((int)this + 0x16c) & 0x400) != 0)))) {
      F_006ec1b0((undefined *)((int)this + 0x100));
    }
    uVar2 = F_006da470(this);
    return uVar2;
  }
  (*(bool *)(gen_frame + 0x1f)) = *(int *)((int)this + 0x224) == 0;
  uVar7 = F_00427d90();
  uVar6 = (undefined4)(uVar7 >> 0x20);
  uVar3 = (undefined4)uVar7;
  ((undefined4 *)(gen_frame + 0xc))[0] = uVar6;
  F_006da2e0(this,uVar3,uVar6);
  F_006c5280(this,uVar3,((undefined4 *)(gen_frame + 0xc))[0]);
  F_0070f5a0(this);
  F_006dedc0(this);
  if ((*(bool *)(gen_frame + 0x1f)) == false) {
    F_006ec1b0((undefined *)((int)this + 0x100));
  }
  F_006f92d0(this);
  F_006dee90(this,uVar3,((undefined4 *)(gen_frame + 0xc))[0]);
  F_006f6f30((undefined *)((int)this + 0x5c));
  uVar2 = REFG(undefined4, 0x1323874);
  if (REFG(int, 0x13238f8) == 0) {
    uVar2 = F_006d9de0(this);
    if ((uVar2 == 0) || (bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30), bVar1 == 0)) goto LAB_00710691;
    uVar2 = F_006de750(this);
  }
  if ((uVar2 != 0) && ((*(int * PTR32 *)(gen_frame + 0x14)) != (int *)0x0)) {
    uVar2 = F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x14)));
    pvVar4 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x1c0,uVar2);
    fVar8 = F_004bd280(pvVar4);
    if ((float10)REFG(float, 0x10928e4) <= (float10)fVar8) {
      F_006e3100(this,0x32,1);
    }
  }
LAB_00710691: ;
  F_006b8ef0(this);
  F_006da470(this);
  bVar1 = F_00b070e0();
  uVar2 = CONCAT31(extraout_var_02,bVar1);
  if (bVar1 != 0) {
    pvVar4 = (undefined *)F_00b070f0();
    uVar2 = F_00b0b720(pvVar4);
  }
  if (((*(char *)((int)this + 0x724) != '\0') || (*(char *)((int)this + 0x725) != '\0')) &&
     (uVar2 = F_006c5190(this), (char)uVar2 == '\0')) {
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0;
    uVar2 = ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5);
    this_00 = (undefined *)F_00763050(uVar2,uVar3);
    uVar2 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_007e4b80(this_00,(uint)*(byte *)((int)this + 0x724),0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf27 */
uint F_00710730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x710730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  ushort * puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int * piVar5;
  undefined * pvVar6;
  ushort * puVar7;
  int iVar8;
  undefined3 extraout_var = 0;
  uint uVar9;
  uint uVar10;
  ushort * puVar11;
  int iVar12;
  short * psVar13;
  bool bVar14;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  cVar2 = (char)param_4;
  if (cVar2 == '\0') {
    (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x0;
    (*(uint * PTR32 *)(gen_frame + 0xbc)) = param_3;
    (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)param_2;
LAB_00710b97: ;
    (*(int *)(gen_frame + 0xb4)) = param_1;
  }
  else {
    uVar10 = param_2 & 0xff;
    if (uVar10 == 0) {
      if (cVar2 != '\0') {
        uVar10 = *param_3 >> 7 & 0x1ff;
        uVar9 = *param_3 >> 0x18;
        (*(uint *)(gen_frame + 0x100)) = uVar10;
        (*(uint *)(gen_frame + 0x104)) = (uint)*(byte *)((int)param_3 + 2);
        iVar8 = uVar9 * 0x10;
        (*(int *)(gen_frame + 0xf0)) = iVar8;
        iVar12 = (uint)*(byte *)((int)param_3 + 2) * 0x14;
        (*(uint *)(gen_frame + 0xfc)) = uVar9;
        (*(int *)(gen_frame + 0xf8)) = iVar12;
        *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar8 + *(int *)(this + 0x538)))) + 0x10 + iVar12))) = uVar10;
        if (uVar10 != 0) {
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x710a90;
          F_00749490(this + 0x558);
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)uVar10;
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x710a9c;
          F_007516d0(this + 0x558,uVar10);
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x710aa1;
          uVar10 = F_00a4ffd0();
          uVar9 = 0;
          if ((*(uint *)(gen_frame + 0x100)) != 0) {
            (*(short * PTR32 *)(gen_frame + 0xe8)) = (short *)(uVar10 + 0x1688);
            do {
              uVar10 = param_3[(uVar9 >> 1) + 2] >> (sbyte)((uVar9 - 1 & 1) << 4);
              (*(uint *)(gen_frame + 0xec)) = uVar10 & 0xffff;
              iVar12 = 0;
              psVar13 = (*(short * PTR32 *)(gen_frame + 0xe8));
              do {
                if (*psVar13 == (short)uVar10) goto LAB_00710aed;
                iVar12 = iVar12 + 1;
                psVar13 = psVar13 + 8;
              } while (iVar12 < 0x10);
              (*(uint * PTR32 *)(gen_frame + 0xc0)) = &(*(uint *)(gen_frame + 0xec));
              (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x710aed;
              F_007549b0(this + 0x558,&(*(uint *)(gen_frame + 0xec)));
LAB_00710aed: ;
              uVar9 = uVar9 + 1;
            } while (uVar9 < (*(uint *)(gen_frame + 0x100)));
          }
          if (*(int *)(this + 0x55c) - *(int *)(this + 0x558) >> 1 != 0) {
            *(ushort *)(this + 0x530) = (ushort)param_3[1];
            pvVar6 = ((undefined *)GEN_TOP(((*(int *)(gen_frame + 0xf8)) + *((int *)GEN_TOP(((*(int *)(gen_frame + 0xf0)) + *(int *)(this + 0x538)))))));
            if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0xf8)) + *((int *)GEN_TOP(((*(int *)(gen_frame + 0xf0)) + *(int *)(this + 0x538))))))) ==
                *(int *)((int)pvVar6 + 4)) {
              (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x14;
              (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x710b2e;
              F_0075b510(pvVar6,0x14);
            }
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x3c;
            (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x710b40;
            uVar10 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3c);
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)(*(uint *)(gen_frame + 0x104));
            (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)(*(uint *)(gen_frame + 0xfc));
            *(uint *)(this + 0x56c) = uVar10;
            *(undefined4 *)(this + 0x568) = 0;
            (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)0x710b5f;
            bVar3 = F_0070ff10(this,(*(uint *)(gen_frame + 0xfc)),(*(uint *)(gen_frame + 0x104)));
            F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
            return CONCAT31(extraout_var,bVar3);
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)(*(uint *)(gen_frame + 0x104));
        (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)(*(uint *)(gen_frame + 0xfc));
        (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)0x710b81;
        uVar10 = F_0070f480(this,(*(uint *)(gen_frame + 0xfc)),(*(uint *)(gen_frame + 0x104)));
        F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
        return uVar10;
      }
      (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)param_4;
      (*(uint * PTR32 *)(gen_frame + 0xbc)) = param_3;
      (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)param_2;
      goto LAB_00710b97;
    }
    uVar9 = param_4;
    if (uVar10 != 1) {
      if (uVar10 == 2) {
        bVar14 = *param_3 != 0;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xfc)) + 0)) = bVar14;
        (*(uint *)(gen_frame + 0xfc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xfc)), 1, 3),bVar14);
        if (bVar14) {
          uVar10 = param_3[1] >> 0x10;
          (*(uint *)(gen_frame + 0x104)) = param_3[1] & 0xffff;
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x71079e;
          F_004816e0(((undefined4 *)(gen_frame + 0xd0)));
          if (uVar10 != 0) {
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = &(*(uint *)(gen_frame + 0x114));
            (*(uint *)(gen_frame + 0x114)) = 0;
            (*(uint *)(gen_frame + 0x114)) = uVar10;
            (*(uint * PTR32 *)(gen_frame + 0x118)) = &(*(uint *)(gen_frame + 0x114));
            (*(undefined1 *)(gen_frame + 0x11c)) = 0;
            (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x7107c1;
            F_00493b50(((undefined4 *)(gen_frame + 0xd0)),&(*(uint *)(gen_frame + 0x114)));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x7107c9;
            F_004917c0(&(*(uint *)(gen_frame + 0x114)));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = &(*(uint *)(gen_frame + 0x108));
            (*(uint *)(gen_frame + 0x108)) = 0;
            (*(uint *)(gen_frame + 0x108)) = (*(uint *)(gen_frame + 0x104));
            (*(uint * PTR32 *)(gen_frame + 0x10c)) = &(*(uint *)(gen_frame + 0x108));
            (*(undefined1 *)(gen_frame + 0x110)) = 0;
            (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x7107eb;
            F_00493b50(((undefined4 *)(gen_frame + 0xd0)),&(*(uint *)(gen_frame + 0x108)));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x7107f3;
            F_004917c0(&(*(uint *)(gen_frame + 0x108)));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = ((undefined4 *)(gen_frame + 0xd0));
            (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x554;
            (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)0x710804;
            F_006c5ef0(0x554,((undefined4 *)(gen_frame + 0xd0)));
          }
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x71080f;
          piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
          if (param_3[2] != 0) {
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)param_3[2];
            (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x645;
            (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)0x710825;
            pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
            (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)0x71082c;
            F_0046a6b0(pvVar6,(*(uint * PTR32 *)(gen_frame + 0xbc)),(*(uint * PTR32 *)(gen_frame + 0xc0)));
          }
          puVar11 = *(ushort * PTR32 *)(this + 0x574);
          puVar7 = puVar11 + *(int *)(this + 0x5a4) * 2;
          (*(uint *)(gen_frame + 0x104)) = (uint)*puVar7;
          if (puVar11 != *(ushort * PTR32 *)(this + 0x578)) {
LAB_00710847: ;
            if (*puVar11 != *puVar7) goto code_r0x0071084c;
            puVar1 = *(ushort * PTR32 *)(this + 0x578);
            puVar7 = puVar11 + 2;
            if (puVar7 != puVar1) {
              iVar12 = (int)puVar11 - (int)puVar7;
              do {
                *(undefined4 *)(iVar12 + (int)puVar7) = *(undefined4 *)puVar7;
                puVar7 = puVar7 + 2;
              } while (puVar7 != puVar1);
            }
            *(int *)(this + 0x578) = *(int *)(this + 0x578) + -4;
          }
LAB_0071087b: ;
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = &(*(uint *)(gen_frame + 0x104));
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = &(*(undefined4 *)(gen_frame + 0xf4));
          (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)0x71088e;
          F_0073dcb0(this + 0x584,&(*(undefined4 *)(gen_frame + 0xf4)),&(*(uint *)(gen_frame + 0x104)));
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)(*(int *)(gen_frame + 0xf8));
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)(*(undefined4 *)(gen_frame + 0xf4));
          (*(int * PTR32 *)(gen_frame + 0xb8)) = &(*(int *)(gen_frame + 0xf8));
          (*(int *)(gen_frame + 0xb4)) = 0x7108a5;
          F_00752160(this + 0x584,&(*(int *)(gen_frame + 0xf8)),(*(undefined4 *)(gen_frame + 0xf4)),(*(int *)(gen_frame + 0xf8)));
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x7108ad;
          F_00492c50(((undefined4 *)(gen_frame + 0xd0)));
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x2c4;
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x8;
          (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)((undefined4 *)(gen_frame + 0xd0))[0];
          (*(int *)(gen_frame + 0xb4)) = 0x7108bd;
          F_00429760(((undefined4 *)(gen_frame + 0xd0))[0],8,0x2c4);
        }
        (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x0;
        (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x0;
        (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)(*(uint *)(gen_frame + 0xfc));
        (*(int *)(gen_frame + 0xb4)) = 0x7108d3;
        uVar10 = F_00a03ae0(*(undefined * PTR32 *)(this + 0x1d0),(*(uint *)(gen_frame + 0xfc)),0,0);
        uVar9 = 1;
        if (uVar10 != 1) {
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)uVar10;
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x7108ea;
          bVar3 = F_00a02270(uVar10);
          if (bVar3 != 0) {
            *(uint *)(this + 0x60) = uVar10;
          }
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x7108f8;
          uVar10 = F_006f4000(this);
          F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
          return uVar10;
        }
      }
      goto LAB_00710ba2;
    }
    if (cVar2 == '\x02') {
      uVar10 = *param_3;
      if (param_3[1] != 0) {
        (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x710928;
        F_004816e0(((undefined4 *)(gen_frame + 0xd0)));
        iVar12 = *(int *)(this + 0x228);
        (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)(uint)(ushort)uVar10;
        (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)*(undefined4 *)(this + iVar12 * 4 + 0x22c);
        (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)iVar12;
        (*(int *)(gen_frame + 0xb4)) = 0x71093f;
        puVar7 = (ushort *)
                 F_006d8510(this,iVar12,*(undefined4 *)(this + iVar12 * 4 + 0x22c),
                              (uint)(ushort)uVar10);
        if (puVar7 != (ushort *)0x0) {
          (*(undefined4 *)(gen_frame + 0x120)) = 0;
          (*(undefined4 *)(gen_frame + 0x120)) = *(undefined4 *)(puVar7 + 0x5a);
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = &(*(undefined4 *)(gen_frame + 0x120));
          (*(undefined4 * PTR32 *)(gen_frame + 0x124)) = &(*(undefined4 *)(gen_frame + 0x120));
          (*(undefined1 *)(gen_frame + 0x128)) = 0;
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x71096b;
          F_00493b50(((undefined4 *)(gen_frame + 0xd0)),&(*(undefined4 *)(gen_frame + 0x120)));
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x710973;
          F_004917c0(&(*(undefined4 *)(gen_frame + 0x120)));
          (*(uint * PTR32 *)(gen_frame + 0x130)) = &(*(uint *)(gen_frame + 0x12c));
          (*(uint *)(gen_frame + 0x12c)) = 0;
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = &(*(uint *)(gen_frame + 0x12c));
          (*(uint *)(gen_frame + 0x12c)) = (uint)*puVar7;
          (*(undefined1 *)(gen_frame + 0x134)) = 0;
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x710990;
          F_00493b50(((undefined4 *)(gen_frame + 0xd0)),&(*(uint *)(gen_frame + 0x12c)));
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x710998;
          F_004917c0(&(*(uint *)(gen_frame + 0x12c)));
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = ((undefined4 *)(gen_frame + 0xd0));
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x552;
          (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)0x7109a9;
          F_006c5ef0(0x552,((undefined4 *)(gen_frame + 0xd0)));
          F_0071fd20((gen_frame + 0xc),puVar7);
          uVar4 = F_006edcf0(this,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                               (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                               (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                               (*(undefined4 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68))
                               ,(*(undefined4 *)(gen_frame + 0x6c)),(*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),
                               (*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),(*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x98)),(*(undefined4 *)(gen_frame + 0x9c))
                               ,(*(undefined4 *)(gen_frame + 0xa0)),(*(undefined4 *)(gen_frame + 0xa4)),(*(undefined4 *)(gen_frame + 0xa8)),(*(undefined4 *)(gen_frame + 0xac)),(*(undefined4 *)(gen_frame + 0xb0)),(*(int *)(gen_frame + 0xb4)),
                               (*(int * PTR32 *)(gen_frame + 0xb8)),(*(uint * PTR32 *)(gen_frame + 0xbc)),(*(uint * PTR32 *)(gen_frame + 0xc0)));
          iVar12 = *(int *)(this + 0x228);
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0xd;
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)(uint)uVar4;
          (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)*(int *)(this + iVar12 * 4 + 0x22c);
          (*(int *)(gen_frame + 0xb4)) = iVar12;
          (*(undefined4 *)(gen_frame + 0xb0)) = 0x7109da;
          F_0070e7f0(this,iVar12,*(int *)(this + iVar12 * 4 + 0x22c),(uint)uVar4,0xd);
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x6;
          (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)0x7109e4;
          F_006c6500(6);
          if ((short)param_1 == 3) {
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x7109f6;
            piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x7109ff;
            piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5)));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x0;
            (*(uint * PTR32 *)(gen_frame + 0xbc)) = (uint *)REFG(undefined4, 0x1324110);
            (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)0x710a10;
            ((code *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5,REFG(undefined4, 0x1324110),0);
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x710a18;
        uVar10 = F_00493180(((undefined4 *)(gen_frame + 0xd0)));
        F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
        return uVar10;
      }
      goto LAB_00710ba2;
    }
    (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)param_4;
    (*(uint * PTR32 *)(gen_frame + 0xbc)) = param_3;
    (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)param_2;
    (*(int *)(gen_frame + 0xb4)) = param_1;
  }
  (*(uint * PTR32 *)(gen_frame + 0xbc)) = param_3;
  (*(int * PTR32 *)(gen_frame + 0xb8)) = (int *)param_2;
  (*(int *)(gen_frame + 0xb4)) = param_1;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0x710ba2;
  uVar9 = F_006fab30((undefined *)this,param_1,param_2,param_3,(*(uint * PTR32 *)(gen_frame + 0xc0)));
LAB_00710ba2: ;
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar9;
code_r0x0071084c: ;
  puVar11 = puVar11 + 2;
  if (puVar11 == *(ushort * PTR32 *)(this + 0x578)) goto LAB_0071087b;
  goto LAB_00710847;
}

/* ref: FUN_00710bc0 */
unsigned int F_00710bc0(void)
{
  GEN_ENTER(0x710bc0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = REFG(void * PTR32, 0x1488344);
  if (REFG(void * PTR32, 0x1488344) != (undefined *)0x0) {
    F_0070fff0(REFG(void * PTR32, 0x1488344));
    F_00406ad0(pvVar1);
    REFG(void * PTR32, 0x1488344) = (undefined *)0x0;
  }
  F_00b0a9d0();
  return 0;
}

/* ref: FUN_00710bf0 */
uint F_00710bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x710bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)),param_1);
  F_004949f0(((undefined4 *)(gen_frame + 0x54)),param_2);
  iVar1 = *(int *)((int)this + 0x6e4);
  (*(byte *)(gen_frame + 0x74)) = (*(byte *)(gen_frame + 0x74)) & 0xfc;
  (*(undefined4 *)(gen_frame + 0x70)) = param_4;
  (*(undefined4 *)(gen_frame + 0x6c)) = param_3;
  uVar2 = F_0075cdb0(iVar1,*(undefined4 *)(iVar1 + 4),((undefined1 *)(gen_frame + 0x0)));
  if (*(int *)((int)this + 0x6e8) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 0x6e8) = *(int *)((int)this + 0x6e8) + 1;
  *(uint *)(iVar1 + 4) = uVar2;
  **(uint * PTR32 *)(uVar2 + 4) = uVar2;
  F_00492c50(((undefined4 *)(gen_frame + 0x54)));
  F_00429760(((undefined4 *)(gen_frame + 0x54))[0],8,0x2c4);
  ((undefined4 *)(gen_frame + 0x54))[0] = 0;
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar3;
}

/* ref: FUN_00710cb0 */
uint F_00710cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0x710cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_10 = (undefined4)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  undefined4 * puVar1;
  uint uVar2;
  
  if (REFG(int, 0x1323910) == 0) {
    if (*(int *)((int)this + 0x24) == 0) {
      REFG(undefined4, 0x132390c) = 0;
    }
    else {
      puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
      REFG(undefined4, 0x132390c) = *puVar1;
    }
  }
  REFG(undefined4, 0x132393e) = (char)param_5 == '\0';
  REFG(undefined4, 0x132393f) = (char)param_8 == '\0';
  *(undefined4 *)&REFG(undefined, 0x1323924) = param_4;
  *(undefined4 *)&REFG(undefined, 0x1323920) = param_6;
  *(undefined4 *)&REFG(undefined, 0x132392c) = param_7;
  *(undefined4 *)&REFG(undefined, 0x1323930) = param_9;
  *(undefined4 *)&REFG(undefined, 0x1323934) = param_10;
  *(undefined4 *)&REFG(undefined, 0x1323938) = param_11;
  REFG(undefined4, 0x132393c) = (undefined1)param_12;
  REFG(undefined4, 0x132393d) = (undefined1)param_13;
  if (!(bool)REFG(undefined4, 0x132393f)) {
    *(int *)&REFG(undefined, 0x1323928) = *(int *)&REFG(undefined, 0x1323928) + 1;
  }
  uVar2 = F_00710bf0(REFG(void * PTR32, 0x1488344),param_2,param_3,&REFG(undefined * PTR32, 0x1323918),0);
  return uVar2;
}

/* ref: FUN_00710d70 */
uint F_00710d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x710d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x1323950) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x1323950) = *puVar1;
  }
  F_00487650(&REFG(int, 0x1323964),((undefined1 *)(gen_frame + 0x18)),REFG(int, 0x1323964),REFG(int, 0x1323968));
  F_0048a040(&REFG(int, 0x1323964),param_2);
  F_0048a040(&REFG(int, 0x1323964),param_3);
  *(undefined4 *)&REFG(undefined, 0x1323974) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323978) = param_4;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  iVar3 = REFG(int, 0x1323964);
  if (REFG(int, 0x1323964) != REFG(int, 0x1323968)) {
    do {
      F_00710bf0(REFG(void * PTR32, 0x1488344),iVar3,&(*(int * PTR32 *)(gen_frame + 0x0)),&REFG(undefined * PTR32, 0x132395c),iVar3);
      iVar3 = iVar3 + 0x54;
    } while (iVar3 != REFG(int, 0x1323968));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
  uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar4;
}

/* ref: FUN_00710e70 */
uint F_00710e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x710e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x1323980) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x1323980) = *puVar1;
  }
  F_00487650(&REFG(int, 0x1323994),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(int, 0x1323994),REFG(int, 0x1323998));
  F_0048a040(&REFG(int, 0x1323994),param_2);
  F_0048a040(&REFG(int, 0x1323994),param_4);
  F_0048a040(&REFG(int, 0x1323994),param_5);
  *(undefined4 *)&REFG(undefined, 0x13239a4) = 0;
  *(uint *)&REFG(undefined, 0x13239a8) = param_6;
  *(undefined4 *)&REFG(undefined, 0x13239b0) = param_7;
  *(undefined4 *)&REFG(undefined, 0x13239ac) = param_8;
  uVar2 = param_6;
  iVar3 = REFG(int, 0x1323994);
  if (REFG(int, 0x1323994) != REFG(int, 0x1323998)) {
    do {
      uVar2 = F_00710bf0(REFG(void * PTR32, 0x1488344),iVar3,param_3,&REFG(undefined * PTR32, 0x132398c),iVar3);
      iVar3 = iVar3 + 0x54;
    } while (iVar3 != REFG(int, 0x1323998));
  }
  return uVar2;
}

/* ref: FUN_00710f40 */
uint F_00710f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0x710f40u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_10 = (undefined4)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  uint param_12 = (uint)gen_a12;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x13239b8) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x13239b8) = *puVar1;
  }
  F_00487650(&REFG(int, 0x13239cc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(int, 0x13239cc),REFG(int, 0x13239d0));
  F_0048a040(&REFG(int, 0x13239cc),param_2);
  F_0048a040(&REFG(int, 0x13239cc),param_4);
  F_0048a040(&REFG(int, 0x13239cc),param_5);
  *(undefined4 *)&REFG(undefined, 0x13239e0) = param_6;
  *(undefined4 *)&REFG(undefined, 0x13239e4) = param_7;
  REFG(undefined4, 0x13239e8) = (undefined1)param_8;
  REFG(undefined4, 0x13239e9) = (undefined1)param_9;
  REFG(undefined4, 0x13239ea) = (undefined1)param_10;
  *(undefined4 *)&REFG(undefined, 0x13239c0) = param_11;
  *(uint *)&REFG(undefined, 0x13239ec) = param_12;
  uVar2 = param_12;
  iVar3 = REFG(int, 0x13239cc);
  if (REFG(int, 0x13239cc) != REFG(int, 0x13239d0)) {
    do {
      uVar2 = F_00710bf0(REFG(void * PTR32, 0x1488344),iVar3,param_3,&REFG(undefined * PTR32, 0x13239c4),iVar3);
      iVar3 = iVar3 + 0x54;
    } while (iVar3 != REFG(int, 0x13239d0));
  }
  return uVar2;
}

/* ref: FUN_00711020 */
uint F_00711020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x711020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint param_9 = (uint)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x13239f4) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x13239f4) = *puVar1;
  }
  F_00487650(&REFG(int, 0x1323a08),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(int, 0x1323a08),REFG(int, 0x1323a0c));
  F_0048a040(&REFG(int, 0x1323a08),param_2);
  F_0048a040(&REFG(int, 0x1323a08),param_4);
  F_0048a040(&REFG(int, 0x1323a08),param_5);
  F_0048a040(&REFG(int, 0x1323a08),param_7);
  *(undefined4 *)&REFG(undefined, 0x1323a1c) = param_6;
  REFG(undefined4, 0x1323a20) = (undefined1)param_8;
  *(uint *)&REFG(undefined, 0x13239fc) = param_9;
  *(undefined4 *)&REFG(undefined, 0x1323a24) = param_10;
  uVar2 = param_9;
  iVar3 = REFG(int, 0x1323a08);
  if (REFG(int, 0x1323a08) != REFG(int, 0x1323a0c)) {
    do {
      uVar2 = F_00710bf0(REFG(void * PTR32, 0x1488344),iVar3,param_3,&REFG(undefined * PTR32, 0x1323a00),iVar3);
      iVar3 = iVar3 + 0x54;
    } while (iVar3 != REFG(int, 0x1323a0c));
  }
  return uVar2;
}

/* ref: FUN_00711100 */
uint F_00711100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x711100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  undefined * pvVar3;
  int iVar4;
  undefined * pvVar5;
  ulonglong uVar6;
  
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x1323a2c) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x1323a2c) = *puVar1;
  }
  F_00487650(&REFG(void * PTR32, 0x1323a40),((undefined1 *)(gen_frame + 0x18)),REFG(void * PTR32, 0x1323a40),REFG(void * PTR32, 0x1323a44));
  F_0048a040(&REFG(void * PTR32, 0x1323a40),param_2);
  pvVar5 = (undefined *)*param_3;
  if (pvVar5 != (undefined *)param_3[1]) {
    do {
      if ((pvVar5 < REFG(void * PTR32, 0x1323a44)) && (REFG(void * PTR32, 0x1323a40) <= pvVar5)) {
        iVar4 = (int)pvVar5 - (int)REFG(void * PTR32, 0x1323a40);
        if (REFG(void * PTR32, 0x1323a44) == REFG(void * PTR32, 0x1323a48)) {
          F_00488ca0(&REFG(void * PTR32, 0x1323a40),1);
        }
        pvVar3 = REFG(void * PTR32, 0x1323a44);
        if (REFG(void * PTR32, 0x1323a44) != (undefined *)0x0) {
          F_0042cbc0(REFG(void * PTR32, 0x1323a44),((undefined *)GEN_TOP(((iVar4 / 0x54) * 0x54 + (int)REFG(void * PTR32, 0x1323a40)))));
          pvVar3 = REFG(void * PTR32, 0x1323a44);
        }
      }
      else {
        if (REFG(void * PTR32, 0x1323a44) == REFG(void * PTR32, 0x1323a48)) {
          F_00488ca0(&REFG(void * PTR32, 0x1323a40),1);
        }
        pvVar3 = REFG(void * PTR32, 0x1323a44);
        if (REFG(void * PTR32, 0x1323a44) != (undefined *)0x0) {
          F_0042cbc0(REFG(void * PTR32, 0x1323a44),pvVar5);
          pvVar3 = REFG(void * PTR32, 0x1323a44);
        }
      }
      REFG(void * PTR32, 0x1323a44) = (undefined *)((int)pvVar3 + 0x54);
      pvVar5 = (undefined *)((int)pvVar5 + 0x54);
    } while (pvVar5 != (undefined *)param_3[1]);
  }
  *(undefined4 *)&REFG(undefined, 0x1323a54) = param_4;
  *(undefined4 *)&REFG(undefined, 0x1323a50) = 0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  pvVar5 = REFG(void * PTR32, 0x1323a40);
  if (REFG(void * PTR32, 0x1323a40) != REFG(void * PTR32, 0x1323a44)) {
    do {
      F_00710bf0(REFG(void * PTR32, 0x1488344),pvVar5,&(*(int * PTR32 *)(gen_frame + 0x0)),&REFG(undefined * PTR32, 0x1323a38),pvVar5);
      pvVar5 = (undefined *)((int)pvVar5 + 0x54);
    } while (pvVar5 != REFG(void * PTR32, 0x1323a44));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
  uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar6;
}

/* ref: FUN_007112a0 */
uint F_007112a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7112a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  undefined * pvVar3;
  int iVar4;
  undefined * pvVar5;
  ulonglong uVar6;
  
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x1323aac) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x1323aac) = *puVar1;
  }
  F_00487650(&REFG(void * PTR32, 0x1323ac0),((undefined1 *)(gen_frame + 0x18)),REFG(void * PTR32, 0x1323ac0),REFG(void * PTR32, 0x1323ac4));
  F_0048a040(&REFG(void * PTR32, 0x1323ac0),param_3);
  F_0048a040(&REFG(void * PTR32, 0x1323ac0),param_4);
  pvVar5 = (undefined *)*param_2;
  if (pvVar5 != (undefined *)param_2[1]) {
    do {
      if ((pvVar5 < REFG(void * PTR32, 0x1323ac4)) && (REFG(void * PTR32, 0x1323ac0) <= pvVar5)) {
        iVar4 = (int)pvVar5 - (int)REFG(void * PTR32, 0x1323ac0);
        if (REFG(void * PTR32, 0x1323ac4) == REFG(void * PTR32, 0x1323ac8)) {
          F_00488ca0(&REFG(void * PTR32, 0x1323ac0),1);
        }
        pvVar3 = REFG(void * PTR32, 0x1323ac4);
        if (REFG(void * PTR32, 0x1323ac4) != (undefined *)0x0) {
          F_0042cbc0(REFG(void * PTR32, 0x1323ac4),((undefined *)GEN_TOP(((iVar4 / 0x54) * 0x54 + (int)REFG(void * PTR32, 0x1323ac0)))));
          pvVar3 = REFG(void * PTR32, 0x1323ac4);
        }
      }
      else {
        if (REFG(void * PTR32, 0x1323ac4) == REFG(void * PTR32, 0x1323ac8)) {
          F_00488ca0(&REFG(void * PTR32, 0x1323ac0),1);
        }
        pvVar3 = REFG(void * PTR32, 0x1323ac4);
        if (REFG(void * PTR32, 0x1323ac4) != (undefined *)0x0) {
          F_0042cbc0(REFG(void * PTR32, 0x1323ac4),pvVar5);
          pvVar3 = REFG(void * PTR32, 0x1323ac4);
        }
      }
      REFG(void * PTR32, 0x1323ac4) = (undefined *)((int)pvVar3 + 0x54);
      pvVar5 = (undefined *)((int)pvVar5 + 0x54);
    } while (pvVar5 != (undefined *)param_2[1]);
  }
  *(undefined4 *)&REFG(undefined, 0x1323ad0) = 0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  pvVar5 = REFG(void * PTR32, 0x1323ac0);
  if (REFG(void * PTR32, 0x1323ac0) != REFG(void * PTR32, 0x1323ac4)) {
    do {
      F_00710bf0(REFG(void * PTR32, 0x1488344),pvVar5,&(*(int * PTR32 *)(gen_frame + 0x0)),&REFG(undefined * PTR32, 0x1323ab8),pvVar5);
      pvVar5 = (undefined *)((int)pvVar5 + 0x54);
    } while (pvVar5 != REFG(void * PTR32, 0x1323ac4));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
  uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar6;
}

/* ref: FUN_00711450 */
uint F_00711450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x711450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  int iVar2;
  char * pcVar3;
  int * piVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar2 = REFG(int, 0x1488344);
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  iVar5 = 0;
  if (REFG(char, 0x14887a2) != '\0') {
    pcVar3 = &REFG(char, 0x14887a2);
    do {
      pcVar3 = pcVar3 + 0x24;
      iVar5 = iVar5 + 1;
    } while (*pcVar3 != '\0');
  }
  (&REFG(undefined4, 0x1488798))[iVar5 * 9] = param_4;
  *(undefined1 *)(&REFG(undefined2, 0x14887a0) + iVar5 * 0x12) = (undefined1)param_5;
  (&REFG(undefined4, 0x148879c))[iVar5 * 9] = param_6;
  *(undefined1 *)((int)&REFG(undefined2, 0x14887a0) + iVar5 * 0x24 + 1) = (undefined1)param_7;
  (&REFG(char, 0x14887a2))[iVar5 * 0x24] = 1;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)),param_2);
  F_004949f0(((undefined4 *)(gen_frame + 0x54)),param_3);
  iVar1 = *(int *)(iVar2 + 0x6e4);
  (*(byte *)(gen_frame + 0x74)) = (*(byte *)(gen_frame + 0x74)) & 0xfc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = &REFG(undefined4, 0x1488790) + iVar5 * 9;
  (*(int *)(gen_frame + 0x70)) = 0;
  iVar5 = *(int *)(iVar1 + 4);
  piVar4 = (int *)F_004296a0(0x80,0,800);
  piVar4[1] = iVar5;
  *piVar4 = iVar1;
  if (piVar4 + 2 != (int *)0x0) {
    F_0042cbc0(piVar4 + 2,((undefined1 *)(gen_frame + 0x0)));
    F_004949f0(piVar4 + 0x17,((undefined4 *)(gen_frame + 0x54)));
    piVar4[0x1d] = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c));
    piVar4[0x1e] = (*(int *)(gen_frame + 0x70));
    *(byte *)(piVar4 + 0x1f) = *(byte *)(piVar4 + 0x1f) ^ (*(byte *)(piVar4 + 0x1f) ^ (*(byte *)(gen_frame + 0x74))) & 1;
    *(byte *)(piVar4 + 0x1f) = (*(byte *)(piVar4 + 0x1f) ^ (*(byte *)(gen_frame + 0x74))) & 2 ^ *(byte *)(piVar4 + 0x1f);
  }
  if (*(int *)(iVar2 + 0x6e8) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)(iVar2 + 0x6e8) = *(int *)(iVar2 + 0x6e8) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar4;
  *(int * PTR32 *)piVar4[1] = piVar4;
  F_00492c50(((undefined4 *)(gen_frame + 0x54)));
  F_00429760(((undefined4 *)(gen_frame + 0x54))[0],8,0x2c4);
  ((undefined4 *)(gen_frame + 0x54))[0] = 0;
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar6;
}

/* ref: FUN_007115c0 */
uint F_007115c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7115c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  char * pcVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  iVar4 = 0;
  if (REFG(char, 0x1488c70) != '\0') {
    pcVar2 = &REFG(char, 0x1488c70);
    do {
      pcVar2 = pcVar2 + 0x74;
      iVar4 = iVar4 + 1;
    } while (*pcVar2 != '\0');
  }
  iVar5 = iVar4 * 0x74;
  if (param_4 == 0) {
    F_0042aca0(&REFG(undefined, 0x1488c18) + iVar5);
  }
  else {
    F_0042e430(&REFG(undefined, 0x1488c18) + iVar5,param_4);
  }
  iVar1 = REFG(int, 0x1488344);
  *(undefined4 *)(iVar5 + 0x1488c6c) = param_5;
  (&REFG(char, 0x1488c70))[iVar5] = 1;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)),param_2);
  F_004949f0(((undefined4 *)(gen_frame + 0x54)),param_3);
  iVar5 = *(int *)(iVar1 + 0x6e4);
  (*(byte *)(gen_frame + 0x74)) = (*(byte *)(gen_frame + 0x74)) & 0xfc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = &REFG(undefined4, 0x1488c10) + iVar4 * 0x1d;
  (*(int *)(gen_frame + 0x70)) = 0;
  iVar4 = *(int *)(iVar5 + 4);
  piVar3 = (int *)F_004296a0(0x80,0,800);
  piVar3[1] = iVar4;
  *piVar3 = iVar5;
  if (piVar3 + 2 != (int *)0x0) {
    F_0042cbc0(piVar3 + 2,((undefined1 *)(gen_frame + 0x0)));
    F_004949f0(piVar3 + 0x17,((undefined4 *)(gen_frame + 0x54)));
    piVar3[0x1d] = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c));
    piVar3[0x1e] = (*(int *)(gen_frame + 0x70));
    *(byte *)(piVar3 + 0x1f) = *(byte *)(piVar3 + 0x1f) ^ (*(byte *)(piVar3 + 0x1f) ^ (*(byte *)(gen_frame + 0x74))) & 1;
    *(byte *)(piVar3 + 0x1f) = (*(byte *)(piVar3 + 0x1f) ^ (*(byte *)(gen_frame + 0x74))) & 2 ^ *(byte *)(piVar3 + 0x1f);
  }
  if (*(int *)(iVar1 + 0x6e8) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)(iVar1 + 0x6e8) = *(int *)(iVar1 + 0x6e8) + 1;
  *(int * PTR32 *)(iVar5 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  F_00492c50(((undefined4 *)(gen_frame + 0x54)));
  F_00429760(((undefined4 *)(gen_frame + 0x54))[0],8,0x2c4);
  ((undefined4 *)(gen_frame + 0x54))[0] = 0;
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar6;
}

/* ref: FUN_00711740 */
uint F_00711740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x711740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pvVar10;
  ulonglong uVar11;
  undefined * pvVar12;
  
  if (*(int *)((int)this + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323a5c) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323a5c) = *puVar1;
  }
  F_00487650(&REFG(void * PTR32, 0x1323a70),((undefined1 *)(gen_frame + 0x18)),REFG(void * PTR32, 0x1323a70),REFG(void * PTR32, 0x1323a74));
  puVar1 = REFG(undefined4 * PTR32, 0x1323a80);
  if (REFG(undefined4 * PTR32, 0x1323a80) != REFG(undefined4 * PTR32, 0x1323a84)) {
    F_00c46e20(REFG(undefined4 * PTR32, 0x1323a80),REFG(undefined4 * PTR32, 0x1323a84),0);
    REFG(undefined4 * PTR32, 0x1323a84) = puVar1;
  }
  puVar1 = REFG(undefined4 * PTR32, 0x1323a90);
  if (REFG(undefined4 * PTR32, 0x1323a90) != REFG(undefined4 * PTR32, 0x1323a94)) {
    F_00c46e20(REFG(undefined4 * PTR32, 0x1323a90),REFG(undefined4 * PTR32, 0x1323a94),0);
    REFG(undefined4 * PTR32, 0x1323a94) = puVar1;
  }
  F_0048a040(&REFG(void * PTR32, 0x1323a70),param_2);
  pvVar10 = (undefined *)*param_4;
  if (pvVar10 != (undefined *)param_4[1]) {
    do {
      if ((pvVar10 < REFG(void * PTR32, 0x1323a74)) && (REFG(void * PTR32, 0x1323a70) <= pvVar10)) {
        iVar7 = (int)pvVar10 - (int)REFG(void * PTR32, 0x1323a70);
        if (REFG(void * PTR32, 0x1323a74) == REFG(void * PTR32, 0x1323a78)) {
          F_00488ca0(&REFG(void * PTR32, 0x1323a70),1);
        }
        pvVar5 = REFG(void * PTR32, 0x1323a74);
        if (REFG(void * PTR32, 0x1323a74) != (undefined *)0x0) {
          pvVar12 = ((undefined *)GEN_TOP(((iVar7 / 0x54) * 0x54 + (int)REFG(void * PTR32, 0x1323a70))));
LAB_00711850: ;
          F_0042cbc0(REFG(void * PTR32, 0x1323a74),pvVar12);
          pvVar5 = REFG(void * PTR32, 0x1323a74);
        }
      }
      else {
        if (REFG(void * PTR32, 0x1323a74) == REFG(void * PTR32, 0x1323a78)) {
          F_00488ca0(&REFG(void * PTR32, 0x1323a70),1);
        }
        pvVar5 = REFG(void * PTR32, 0x1323a74);
        pvVar12 = pvVar10;
        if (REFG(void * PTR32, 0x1323a74) != (undefined *)0x0) goto LAB_00711850;
      }
      REFG(void * PTR32, 0x1323a74) = (undefined *)((int)pvVar5 + 0x54);
      pvVar10 = (undefined *)((int)pvVar10 + 0x54);
    } while (pvVar10 != (undefined *)param_4[1]);
  }
  puVar1 = (undefined4 *)*param_3;
  puVar9 = REFG(undefined4 * PTR32, 0x1323a80);
  if (puVar1 != (undefined4 *)param_3[1]) {
    do {
      if ((puVar1 < REFG(undefined4 * PTR32, 0x1323a84)) && (puVar9 <= puVar1)) {
        iVar7 = (int)puVar1 - (int)puVar9;
        if (REFG(undefined4 * PTR32, 0x1323a84) == REFG(undefined4 * PTR32, 0x1323a88)) {
          iVar2 = (int)REFG(undefined4 * PTR32, 0x1323a84) - (int)((int)(uintptr_t)puVar9) >> 2;
          if (iVar2 == -1) goto LAB_007119d6;
          uVar3 = iVar2 + 1;
          uVar6 = (int)REFG(undefined4 * PTR32, 0x1323a88) - (int)((int)(uintptr_t)puVar9) >> 2;
          if (uVar6 < uVar3) {
            if (-(uVar6 >> 1) - 1 < uVar6) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar6 + (uVar6 >> 1);
            }
            if (uVar6 < uVar3) {
              uVar6 = uVar3;
            }
            F_0074cbd0(&REFG(undefined4 * PTR32, 0x1323a80),uVar6);
            puVar9 = REFG(undefined4 * PTR32, 0x1323a80);
          }
        }
        puVar8 = REFG(undefined4 * PTR32, 0x1323a84);
        if (REFG(undefined4 * PTR32, 0x1323a84) != (undefined4 *)0x0) {
          *REFG(undefined4 * PTR32, 0x1323a84) = puVar9[iVar7 >> 2];
          puVar8 = REFG(undefined4 * PTR32, 0x1323a84);
          puVar9 = REFG(undefined4 * PTR32, 0x1323a80);
        }
      }
      else {
        if (REFG(undefined4 * PTR32, 0x1323a84) == REFG(undefined4 * PTR32, 0x1323a88)) {
          iVar7 = (int)REFG(undefined4 * PTR32, 0x1323a84) - (int)((int)(uintptr_t)puVar9) >> 2;
          if (iVar7 == -1) goto LAB_007119d6;
          uVar3 = iVar7 + 1;
          uVar6 = (int)REFG(undefined4 * PTR32, 0x1323a88) - (int)((int)(uintptr_t)puVar9) >> 2;
          if (uVar6 < uVar3) {
            if (-(uVar6 >> 1) - 1 < uVar6) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar6 + (uVar6 >> 1);
            }
            if (uVar6 < uVar3) {
              uVar6 = uVar3;
            }
            F_0074cbd0(&REFG(undefined4 * PTR32, 0x1323a80),uVar6);
            puVar9 = REFG(undefined4 * PTR32, 0x1323a80);
          }
        }
        puVar8 = REFG(undefined4 * PTR32, 0x1323a84);
        if (REFG(undefined4 * PTR32, 0x1323a84) != (undefined4 *)0x0) {
          *REFG(undefined4 * PTR32, 0x1323a84) = *puVar1;
          puVar8 = REFG(undefined4 * PTR32, 0x1323a84);
          puVar9 = REFG(undefined4 * PTR32, 0x1323a80);
        }
      }
      REFG(undefined4 * PTR32, 0x1323a84) = puVar8 + 1;
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)param_3[1]);
  }
  puVar1 = (undefined4 *)*param_5;
  puVar9 = REFG(undefined4 * PTR32, 0x1323a90);
  if (puVar1 != (undefined4 *)param_5[1]) {
    do {
      if ((puVar1 < REFG(undefined4 * PTR32, 0x1323a94)) && (puVar9 <= puVar1)) {
        iVar7 = (int)puVar1 - (int)puVar9;
        if (REFG(undefined4 * PTR32, 0x1323a94) == REFG(undefined4 * PTR32, 0x1323a98)) {
          iVar2 = (int)REFG(undefined4 * PTR32, 0x1323a94) - (int)((int)(uintptr_t)puVar9) >> 2;
          if (iVar2 == -1) goto LAB_007119d6;
          uVar3 = iVar2 + 1;
          uVar6 = (int)REFG(undefined4 * PTR32, 0x1323a98) - (int)((int)(uintptr_t)puVar9) >> 2;
          if (uVar6 < uVar3) {
            if (-(uVar6 >> 1) - 1 < uVar6) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar6 + (uVar6 >> 1);
            }
            if (uVar6 < uVar3) {
              uVar6 = uVar3;
            }
            F_0074cbd0(&REFG(undefined4 * PTR32, 0x1323a90),uVar6);
            puVar9 = REFG(undefined4 * PTR32, 0x1323a90);
          }
        }
        puVar8 = REFG(undefined4 * PTR32, 0x1323a94);
        if (REFG(undefined4 * PTR32, 0x1323a94) != (undefined4 *)0x0) {
          *REFG(undefined4 * PTR32, 0x1323a94) = puVar9[iVar7 >> 2];
          puVar8 = REFG(undefined4 * PTR32, 0x1323a94);
          puVar9 = REFG(undefined4 * PTR32, 0x1323a90);
        }
      }
      else {
        if (REFG(undefined4 * PTR32, 0x1323a94) == REFG(undefined4 * PTR32, 0x1323a98)) {
          iVar7 = (int)REFG(undefined4 * PTR32, 0x1323a94) - (int)((int)(uintptr_t)puVar9) >> 2;
          if (iVar7 == -1) {
LAB_007119d6: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar3 = iVar7 + 1;
          uVar6 = (int)REFG(undefined4 * PTR32, 0x1323a98) - (int)((int)(uintptr_t)puVar9) >> 2;
          if (uVar6 < uVar3) {
            if (-(uVar6 >> 1) - 1 < uVar6) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar6 + (uVar6 >> 1);
            }
            if (uVar6 < uVar3) {
              uVar6 = uVar3;
            }
            F_0074cbd0(&REFG(undefined4 * PTR32, 0x1323a90),uVar6);
            puVar9 = REFG(undefined4 * PTR32, 0x1323a90);
          }
        }
        puVar8 = REFG(undefined4 * PTR32, 0x1323a94);
        if (REFG(undefined4 * PTR32, 0x1323a94) != (undefined4 *)0x0) {
          *REFG(undefined4 * PTR32, 0x1323a94) = *puVar1;
          puVar8 = REFG(undefined4 * PTR32, 0x1323a94);
          puVar9 = REFG(undefined4 * PTR32, 0x1323a90);
        }
      }
      REFG(undefined4 * PTR32, 0x1323a94) = puVar8 + 1;
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)param_5[1]);
  }
  *(undefined4 *)&REFG(undefined, 0x1323aa4) = param_6;
  *(undefined4 *)&REFG(undefined, 0x1323aa0) = 0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  piVar4 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar4;
  if (piVar4 != (int *)0x0) {
    *piVar4 = 0;
    piVar4[1] = 0;
  }
  *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  pvVar10 = REFG(void * PTR32, 0x1323a70);
  if (REFG(void * PTR32, 0x1323a70) != REFG(void * PTR32, 0x1323a74)) {
    do {
      F_00710bf0(REFG(void * PTR32, 0x1488344),pvVar10,&(*(int * PTR32 *)(gen_frame + 0x0)),&REFG(undefined * PTR32, 0x1323a68),pvVar10);
      pvVar10 = (undefined *)((int)pvVar10 + 0x54);
    } while (pvVar10 != REFG(void * PTR32, 0x1323a74));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
  uVar11 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar11;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf1 */
uint F_00711b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x711b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar5);
  iVar1 = *piVar6;
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),3);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3,uVar5);
  iVar2 = *piVar6;
  F_0042b630(((undefined1 *)(gen_frame + 0x54)));
  F_006e3770(((byte *)(gen_frame + 0x8)),iVar2,4,((undefined1 *)(gen_frame + 0x54)));
  uVar5 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  (*(byte *)(gen_frame + 0x53)) = 0;
  if ((4 < (int)uVar5) && (bVar4 = F_00a01f20(((byte *)(gen_frame + 0x8)),5), bVar4 == 0)) {
    bVar4 = F_00a01e10(((byte *)(gen_frame + 0x8)),5);
    (*(byte *)(gen_frame + 0x53)) = bVar4;
  }
  (*(uint *)(gen_frame + 0x40)) = 0;
  if ((5 < (int)uVar5) && (bVar4 = F_00a01f20(((byte *)(gen_frame + 0x8)),6), bVar4 == 0)) {
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),6);
    (*(uint *)(gen_frame + 0x40)) = uVar7;
  }
  (*(uint *)(gen_frame + 0x4c)) = 0;
  if ((6 < (int)uVar5) && (bVar4 = F_00a01f20(((byte *)(gen_frame + 0x8)),7), bVar4 == 0)) {
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),7);
    (*(uint *)(gen_frame + 0x4c)) = uVar7;
  }
  (*(uint *)(gen_frame + 0x48)) = 0;
  if ((7 < (int)uVar5) && (bVar4 = F_00a01f20(((byte *)(gen_frame + 0x8)),8), bVar4 == 0)) {
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),8);
    (*(uint *)(gen_frame + 0x48)) = uVar7;
  }
  (*(uint *)(gen_frame + 0x44)) = 0x279;
  if ((8 < (int)uVar5) && (bVar4 = F_00a01f20(((byte *)(gen_frame + 0x8)),9), bVar4 == 0)) {
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),9);
    (*(uint *)(gen_frame + 0x44)) = uVar7;
  }
  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x0;
  piVar6 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
  if (piVar6 != (int *)0x0) {
    *piVar6 = 0;
    piVar6[1] = 0;
  }
  *piVar6 = (int)&(*(int * PTR32 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if (9 < (int)uVar5) {
    F_00703a80(((byte *)(gen_frame + 0x8)),10,uVar5,&(*(int * PTR32 *)(gen_frame + 0x28)));
  }
  if (iVar2 == 0) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x28)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x28)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x0;
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    F_00a02240(((byte *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  uVar3 = *(undefined4 *)(iVar1 + 4);
  if (REFG(int, 0x1323910) == 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      REFG(undefined4, 0x132390c) = 0;
    }
    else {
      puVar8 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      REFG(undefined4, 0x132390c) = *puVar8;
    }
  }
  REFG(undefined4, 0x132393e) = (*(byte *)(gen_frame + 0x53)) != 0;
  *(uint *)&REFG(undefined, 0x1323920) = (*(uint *)(gen_frame + 0x40));
  *(uint *)&REFG(undefined, 0x1323930) = (*(uint *)(gen_frame + 0x44));
  *(uint *)&REFG(undefined, 0x1323934) = (*(uint *)(gen_frame + 0x48));
  *(uint *)&REFG(undefined, 0x1323938) = (*(uint *)(gen_frame + 0x4c));
  *(undefined4 *)&REFG(undefined, 0x132392c) = 0x3d;
  *(undefined2 *)&REFG(undefined, 0x132393c) = 0;
  REFG(undefined4, 0x132393f) = 1;
  *(undefined4 *)&REFG(undefined, 0x1323924) = uVar3;
  F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0x54)),&(*(int * PTR32 *)(gen_frame + 0x28)),&REFG(undefined * PTR32, 0x1323918),0);
  uVar5 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x28)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x28)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_00a02240(((byte *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar5;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf2 */
uint F_00711e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x711e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_00a02210(((undefined1 *)(gen_frame + 0x18)),param_1);
  uVar5 = F_00a01d20(((undefined1 *)(gen_frame + 0x18)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x20)),1,uVar5);
  iVar1 = *piVar6;
  uVar5 = F_00a01d20(((undefined1 *)(gen_frame + 0x18)),3);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x20)),3,uVar5);
  iVar2 = *piVar6;
  F_0042b630(((undefined1 *)(gen_frame + 0x54)));
  F_006e3770(((undefined1 *)(gen_frame + 0x18)),iVar2,4,((undefined1 *)(gen_frame + 0x54)));
  uVar5 = F_00a019d0(((undefined1 *)(gen_frame + 0x18)));
  (*(byte *)(gen_frame + 0x53)) = 0;
  if (4 < (int)uVar5) {
    bVar4 = F_00a01f20(((undefined1 *)(gen_frame + 0x18)),5);
    if (bVar4 == 0) {
      bVar4 = F_00a01e10(((undefined1 *)(gen_frame + 0x18)),5);
      (*(byte *)(gen_frame + 0x53)) = bVar4;
    }
  }
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x44)) = 0;
  if (5 < (int)uVar5) {
    bVar4 = F_00a01f20(((undefined1 *)(gen_frame + 0x18)),6);
    if (bVar4 == 0) {
      uVar7 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x20)),6);
      (*(uint *)(gen_frame + 0x44)) = uVar7;
    }
  }
  (*(uint *)(gen_frame + 0x40)) = 0;
  if (6 < (int)uVar5) {
    bVar4 = F_00a01f20(((undefined1 *)(gen_frame + 0x18)),7);
    if (bVar4 == 0) {
      uVar7 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x20)),7);
      (*(uint *)(gen_frame + 0x40)) = uVar7;
    }
  }
  (*(uint *)(gen_frame + 0x48)) = 0;
  if (7 < (int)uVar5) {
    bVar4 = F_00a01f20(((undefined1 *)(gen_frame + 0x18)),8);
    if (bVar4 == 0) {
      uVar7 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x20)),8);
      (*(uint *)(gen_frame + 0x48)) = uVar7;
    }
  }
  if (8 < (int)uVar5) {
    bVar4 = F_00a01f20(((undefined1 *)(gen_frame + 0x18)),9);
    if (bVar4 == 0) {
      uVar8 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x20)),9);
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x3c));
  uVar7 = (*(uint *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = uVar3 & 0xffffff00;
  if (uVar8 == 1) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x3c)) = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else if (uVar8 == 2) {
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x278;
  }
  else if (uVar8 == 3) {
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x279;
  }
  else if (uVar8 == 4) {
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x27a;
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x38)) = uVar7 & 0xffffff00;
  if (9 < (int)uVar5) {
    bVar4 = F_00a01f20(((undefined1 *)(gen_frame + 0x18)),10);
    if (bVar4 == 0) {
      bVar4 = F_00a01e10(((undefined1 *)(gen_frame + 0x18)),10);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = bVar4;
      (*(uint *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x38)), 1, 3),bVar4);
    }
  }
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  piVar6 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar6;
  if (piVar6 != (int *)0x0) {
    *piVar6 = 0;
    piVar6[1] = 0;
  }
  *piVar6 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (10 < (int)uVar5) {
    F_00703a80(((undefined1 *)(gen_frame + 0x18)),0xb,uVar5,&(*(int * PTR32 *)(gen_frame + 0x0)));
  }
  if (iVar2 != 0) {
    F_00710cb0(*(undefined * PTR32 *)(this + 4),iVar2,((undefined1 *)(gen_frame + 0x54)),&(*(int * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)(iVar1 + 4),
                 (uint)((*(byte *)(gen_frame + 0x53)) == 0),(*(uint *)(gen_frame + 0x44)),0x3d,0,(*(undefined4 *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)))
    ;
    uVar5 = F_00a02290(((undefined1 *)(gen_frame + 0x18)),0);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    F_00a02240(((undefined1 *)(gen_frame + 0x18)));
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return uVar5;
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_00a02240(((undefined1 *)(gen_frame + 0x18)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf3 */
uint F_007121b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7121b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  float fVar1;
  int iVar2;
  float fVar3;
  undefined * pEVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  float * pfVar8;
  uint uVar9;
  undefined * pvVar10;
  undefined4 * puVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x150);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x68)),param_1);
  uVar6 = F_00a01d20(((undefined1 *)(gen_frame + 0x68)),1);
  piVar7 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x70)),1,uVar6);
  iVar2 = *piVar7;
  uVar6 = F_00a01d20(((undefined1 *)(gen_frame + 0x68)),3);
  pfVar8 = (float *)F_00b9c710((*(undefined4 *)(gen_frame + 0x70)),3,uVar6);
  fVar3 = *pfVar8;
  (*(float *)(gen_frame + 0xa0)) = fVar3;
  fVar12 = F_00a01dd0(((undefined1 *)(gen_frame + 0x68)),5);
  (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF(((fVar12 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                    (float10)*(double *)&REFG(undefined, 0x1080220))));
  uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x70)),6);
  (*(uint *)(gen_frame + 0x88)) = uVar6;
  uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x70)),7);
  (*(uint *)(gen_frame + 0x94)) = uVar6;
  fVar12 = (float10)(int)uVar6;
  if ((int)uVar6 < 0) {
    fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x8c)) = (float)(fVar12 * (float10)*(double *)&REFG(undefined, 0x10ba6f8));
  F_0042b630(((undefined1 *)(gen_frame + 0xa8)));
  F_006e3770(((undefined1 *)(gen_frame + 0x68)),(undefined4)gen_fl2bits(fVar3),4,((undefined1 *)(gen_frame + 0xa8)));
  uVar6 = F_00a019d0(((undefined1 *)(gen_frame + 0x68)));
  (*(byte *)(gen_frame + 0xa6)) = 0;
  if ((7 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x68)),8), bVar5 == 0)) {
    bVar5 = F_00a01e10(((undefined1 *)(gen_frame + 0x68)),8);
    (*(byte *)(gen_frame + 0xa6)) = bVar5;
  }
  (*(uint *)(gen_frame + 0x90)) = 0;
  if ((8 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x68)),9), bVar5 == 0)) {
    uVar9 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x70)),9);
    (*(uint *)(gen_frame + 0x90)) = uVar9;
  }
  (*(uint *)(gen_frame + 0x94)) = 0;
  if ((9 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x68)),10), bVar5 == 0)) {
    uVar9 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x70)),10);
    (*(uint *)(gen_frame + 0x94)) = uVar9;
  }
  uVar9 = 0;
  (*(uint *)(gen_frame + 0x9c)) = 0;
  if ((10 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x68)),0xb), uVar9 = (*(uint *)(gen_frame + 0x9c)), bVar5 == 0)) {
    uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x70)),0xb);
    (*(uint *)(gen_frame + 0x9c)) = uVar6;
    uVar9 = (*(uint *)(gen_frame + 0x9c));
  }
  (*(uint *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)(gen_frame + 0xa7)) = 0;
  if (uVar9 == 1) {
    (*(undefined1 *)(gen_frame + 0xa7)) = 1;
  }
  else if (uVar9 == 2) {
    (*(uint *)(gen_frame + 0x9c)) = 0x278;
  }
  else if (uVar9 == 3) {
    (*(uint *)(gen_frame + 0x9c)) = 0x279;
  }
  else if (uVar9 == 4) {
    (*(uint *)(gen_frame + 0x9c)) = 0x27a;
  }
  if ((*(float *)(gen_frame + 0xa0)) == 0.0) {
    F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
    F_00a02240(((undefined1 *)(gen_frame + 0x68)));
    uVar6 = 0;
  }
  else {
    if (((REFG(int, 0x1375bbc) == 0) && (REFG(void * PTR32, 0x1375b90) != (undefined *)0x0)) &&
       (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1375b90) + 0x220))) == '\0')) {
      F_00b6b010(REFG(void * PTR32, 0x1375b90));
      F_009d53f0(REFG(void * PTR32, 0x1487c90),1);
      piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      if (piVar7 != (int *)0x0) {
        uVar13 = 0x11;
        uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x48))(piVar7);
        pvVar10 = (undefined *)F_00763050(uVar6,uVar13);
        if (pvVar10 != (undefined *)0x0) {
          F_00776f30(pvVar10,1);
        }
      }
    }
    (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x10adbc4);
    if ((*(uint *)(gen_frame + 0x88)) == 1) {
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x10adb9c);
    }
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x8c)) + (float10)REFG(double, 0x1088130)) * (float10)(*(float *)(gen_frame + 0xa0)))));
    fVar12 = ((float10)GEN_TOD(fsin((float10)(*(float *)(gen_frame + 0x98)))));
    fVar3 = (float)fVar12;
    (*(float *)(gen_frame + 0xa0)) = fVar3;
    fVar12 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0x98)))));
    fVar1 = (float)fVar12;
    (*(float *)(gen_frame + 0x98)) = fVar1;
    pvVar10 = *(undefined * PTR32 *)(iVar2 + 0x60);
    ((float *)(gen_frame + 0x100))[0] = fVar1;
    ((float *)(gen_frame + 0x100))[2] = ((float)GEN_TOF(-(float10)fVar3));
    (*(float *)(gen_frame + 0x120)) = fVar3;
    ((float *)(gen_frame + 0x100))[1] = 0.0;
    (*(undefined4 *)(gen_frame + 0x110)) = 0;
    (*(float *)(gen_frame + 0x128)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x114)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x118)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = 0;
    (*(undefined4 *)(gen_frame + 0x130)) = 0;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x138)) = 0;
    pfVar8 = (float *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x10)),(uint)((float *)(gen_frame + 0x100)));
    (*(float *)(gen_frame + 0x50)) = *pfVar8;
    (*(float *)(gen_frame + 0x54)) = pfVar8[1];
    (*(float *)(gen_frame + 0x58)) = pfVar8[2];
    pfVar8 = (float *)F_00a5feb0(pvVar10);
    pEVar4 = (*(undefined * PTR32 *)(gen_frame + 0x34));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar8 + (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar8[1] + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar8[2] + (float10)(*(float *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x50)) = (float)((float10)*pfVar8 + (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar8[1] + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar8[2] + (float10)(*(float *)(gen_frame + 0x58)));
    F_006c5980(*(undefined4 *)(iVar2 + 0x60),&(*(float *)(gen_frame + 0x50)),(*(uint *)(gen_frame + 0x88)));
    F_006f2310(*(undefined4 *)(pEVar4 + 4),*(undefined4 *)(iVar2 + 0x60),(*(float *)(gen_frame + 0x8c)));
    (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
    piVar7 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar7;
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      piVar7[1] = 0;
    }
    *piVar7 = (int)&(*(int * PTR32 *)(gen_frame + 0x38));
    uVar13 = *(undefined4 *)(iVar2 + 4);
    iVar2 = *(int *)(pEVar4 + 4);
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    if (REFG(int, 0x1323910) == 0) {
      if (*(int *)(iVar2 + 0x24) == 0) {
        REFG(undefined4, 0x132390c) = 0;
      }
      else {
        puVar11 = (undefined4 *)F_007512b0((undefined *)(iVar2 + 0x14));
        REFG(undefined4, 0x132390c) = *puVar11;
      }
    }
    REFG(undefined4, 0x132393e) = (*(byte *)(gen_frame + 0xa6)) != 0;
    *(uint *)&REFG(undefined, 0x1323920) = (*(uint *)(gen_frame + 0x90));
    *(undefined4 *)&REFG(undefined, 0x1323938) = 0;
    REFG(undefined4, 0x132393c) = 0;
    *(uint *)&REFG(undefined, 0x1323934) = (*(uint *)(gen_frame + 0x94));
    *(undefined4 *)&REFG(undefined, 0x1323930) = (*(uint *)(gen_frame + 0x9c));
    *(undefined4 *)&REFG(undefined, 0x132392c) = 0x3d;
    REFG(undefined4, 0x132393d) = (*(undefined1 *)(gen_frame + 0xa7));
    REFG(undefined4, 0x132393f) = 1;
    *(undefined4 *)&REFG(undefined, 0x1323924) = uVar13;
    F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0xa8)),&(*(int * PTR32 *)(gen_frame + 0x38)),&REFG(undefined * PTR32, 0x1323918),0);
    uVar6 = F_00a02290(((undefined1 *)(gen_frame + 0x68)),0);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x38)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x38)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
    F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
    F_00a02240(((undefined1 *)(gen_frame + 0x68)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x150));
  return uVar6;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf4 */
uint F_00712780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x712780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar5);
  iVar1 = *piVar6;
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0xc)),3);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3,uVar5);
  iVar2 = *piVar6;
  F_0042b630(((undefined1 *)(gen_frame + 0x54)));
  F_006e3770(((byte *)(gen_frame + 0xc)),iVar2,4,((undefined1 *)(gen_frame + 0x54)));
  uVar5 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0x4c)) = 0;
  if ((4 < (int)uVar5) && (bVar4 = F_00a01f20(((byte *)(gen_frame + 0xc)),5), bVar4 == 0)) {
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),5);
    (*(uint *)(gen_frame + 0x4c)) = uVar7;
  }
  (*(uint *)(gen_frame + 0x50)) = 0;
  if ((5 < (int)uVar5) && (bVar4 = F_00a01f20(((byte *)(gen_frame + 0xc)),6), bVar4 == 0)) {
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),6);
    (*(uint *)(gen_frame + 0x50)) = uVar7;
  }
  (*(uint *)(gen_frame + 0x48)) = 0;
  if ((6 < (int)uVar5) && (bVar4 = F_00a01f20(((byte *)(gen_frame + 0xc)),7), bVar4 == 0)) {
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),7);
    (*(uint *)(gen_frame + 0x48)) = uVar7;
  }
  (*(uint *)(gen_frame + 0x44)) = 0x279;
  if ((7 < (int)uVar5) && (bVar4 = F_00a01f20(((byte *)(gen_frame + 0xc)),8), bVar4 == 0)) {
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),8);
    (*(uint *)(gen_frame + 0x44)) = uVar7;
  }
  (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x0;
  piVar6 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar6;
  if (piVar6 != (int *)0x0) {
    *piVar6 = 0;
    piVar6[1] = 0;
  }
  *piVar6 = (int)&(*(int * PTR32 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  if (8 < (int)uVar5) {
    F_00703a80(((byte *)(gen_frame + 0xc)),9,uVar5,&(*(int * PTR32 *)(gen_frame + 0x2c)));
  }
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 4);
    if (REFG(int, 0x1323910) == 0) {
      if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
        REFG(undefined4, 0x132390c) = 0;
      }
      else {
        puVar8 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
        REFG(undefined4, 0x132390c) = *puVar8;
      }
    }
    *(int *)&REFG(undefined, 0x1323928) = *(int *)&REFG(undefined, 0x1323928) + 1;
    *(uint *)&REFG(undefined, 0x1323930) = (*(uint *)(gen_frame + 0x44));
    *(uint *)&REFG(undefined, 0x1323934) = (*(uint *)(gen_frame + 0x48));
    *(uint *)&REFG(undefined, 0x1323920) = (*(uint *)(gen_frame + 0x4c));
    *(undefined4 *)&REFG(undefined, 0x132392c) = 0x3d;
    *(uint *)&REFG(undefined, 0x1323938) = (*(uint *)(gen_frame + 0x50));
    *(undefined4 *)&REFG(undefined, 0x132393c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1323924) = uVar3;
    F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0x54)),&(*(int * PTR32 *)(gen_frame + 0x2c)),&REFG(undefined * PTR32, 0x1323918),0);
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x2c)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x2c)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf5 */
uint F_00712a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x712a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  F_0042b630(((undefined1 *)(gen_frame + 0x44)));
  F_006e3770(((byte *)(gen_frame + 0x4)),iVar1,2,((undefined1 *)(gen_frame + 0x44)));
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  (*(byte *)(gen_frame + 0x43)) = 0;
  if ((2 < (int)uVar3) && (bVar2 = F_00a01f20(((byte *)(gen_frame + 0x4)),3), bVar2 == 0)) {
    bVar2 = F_00a01e10(((byte *)(gen_frame + 0x4)),3);
    (*(byte *)(gen_frame + 0x43)) = bVar2;
  }
  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x0;
  piVar4 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar4;
  if (piVar4 != (int *)0x0) {
    *piVar4 = 0;
    piVar4[1] = 0;
  }
  *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if (3 < (int)uVar3) {
    F_00703a80(((byte *)(gen_frame + 0x4)),4,uVar3,&(*(int * PTR32 *)(gen_frame + 0x28)));
  }
  if (iVar1 == 0) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x28)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x28)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x0;
    F_0042c880(((undefined1 *)(gen_frame + 0x44)));
    F_00a02240(((byte *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return 0;
  }
  if (REFG(int, 0x1323910) == 0) {
    if (*((int *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 4) + 0x24))) == 0) {
      REFG(undefined4, 0x132390c) = 0;
    }
    else {
      puVar5 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 4) + 0x14))));
      REFG(undefined4, 0x132390c) = *puVar5;
    }
  }
  REFG(undefined4, 0x132393e) = (*(byte *)(gen_frame + 0x43)) != 0;
  *(undefined4 *)&REFG(undefined, 0x1323924) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323920) = 7;
  *(undefined4 *)&REFG(undefined, 0x132392c) = 0x39;
  *(undefined4 *)&REFG(undefined, 0x1323930) = 0x279;
  *(undefined4 *)&REFG(undefined, 0x1323934) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323938) = 0;
  *(undefined2 *)&REFG(undefined, 0x132393c) = 0;
  REFG(undefined4, 0x132393f) = 1;
  F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0x44)),&(*(int * PTR32 *)(gen_frame + 0x28)),&REFG(undefined * PTR32, 0x1323918),0);
  uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x28)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x28)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x44)));
  F_00a02240(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar3;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf7 */
uint F_00712c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x712c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  F_00a02210(((byte *)(gen_frame + 0x0)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x0)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar2);
  uVar1 = *puVar3;
  F_0042b630(((undefined1 *)(gen_frame + 0x20)));
  F_006e3770(((byte *)(gen_frame + 0x0)),uVar1,2,((undefined1 *)(gen_frame + 0x20)));
  F_0042b630(((undefined1 *)(gen_frame + 0x74)));
  F_006e3770(((byte *)(gen_frame + 0x0)),uVar1,3,((undefined1 *)(gen_frame + 0x74)));
  F_00710d70(*(undefined * PTR32 *)(this + 4),uVar1,((undefined1 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x74)),0);
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x0)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  F_00a02240(((byte *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf8 */
uint F_00712d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x712d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  F_00a02210(((byte *)(gen_frame + 0x0)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x0)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar2);
  uVar1 = *puVar3;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x0)));
  F_0042b630(((undefined1 *)(gen_frame + 0x3c)));
  F_006e3770(((byte *)(gen_frame + 0x0)),uVar1,2,((undefined1 *)(gen_frame + 0x3c)));
  F_0042b630(((undefined1 *)(gen_frame + 0xe4)));
  F_006e3770(((byte *)(gen_frame + 0x0)),uVar1,3,((undefined1 *)(gen_frame + 0xe4)));
  F_0042b630(((undefined1 *)(gen_frame + 0x90)));
  F_006e3770(((byte *)(gen_frame + 0x0)),uVar1,4,((undefined1 *)(gen_frame + 0x90)));
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),5);
  (*(uint *)(gen_frame + 0x20)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
  piVar5 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar5;
  if (piVar5 != (int *)0x0) {
    *piVar5 = 0;
    piVar5[1] = 0;
  }
  *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x24));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  if (5 < (int)uVar2) {
    F_00703a80(((byte *)(gen_frame + 0x0)),6,uVar2,&(*(int * PTR32 *)(gen_frame + 0x24)));
  }
  F_00710e70(*(undefined * PTR32 *)(this + 4),uVar1,((undefined1 *)(gen_frame + 0x3c)),&(*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0xe4)),((undefined1 *)(gen_frame + 0x90)),(*(uint *)(gen_frame + 0x20)),0,0);
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x0)),0);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x24)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x24)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x90)));
  F_0042c880(((undefined1 *)(gen_frame + 0xe4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x3c)));
  F_00a02240(((byte *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf9 */
uint F_00712ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x712ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  F_00a02210(((byte *)(gen_frame + 0x0)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x0)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar4);
  iVar1 = *piVar5;
  if (iVar1 != 0) {
    uVar6 = F_00a019d0(((byte *)(gen_frame + 0x0)));
    F_0042b630(((undefined1 *)(gen_frame + 0xf4)));
    F_0042b630(((undefined1 *)(gen_frame + 0xa0)));
    F_0042b630(((undefined1 *)(gen_frame + 0x4c)));
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),5);
    uVar2 = (*(uint *)(gen_frame + 0x44));
    uVar4 = (*(uint *)(gen_frame + 0x3c));
    (*(uint *)(gen_frame + 0x48)) = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x40)) + 0)) = 1;
    (*(undefined4 *)(gen_frame + 0x40)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x40)), 1, 3),1);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x3c)) = uVar4 & 0xffffff00;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x44)) = uVar2 & 0xffffff00;
    F_006e3770(((byte *)(gen_frame + 0x0)),iVar1,2,((undefined1 *)(gen_frame + 0xf4)));
    F_006e3770(((byte *)(gen_frame + 0x0)),iVar1,3,((undefined1 *)(gen_frame + 0xa0)));
    F_006e3770(((byte *)(gen_frame + 0x0)),iVar1,4,((undefined1 *)(gen_frame + 0x4c)));
    if (5 < (int)uVar6) {
      uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),6);
      (*(uint *)(gen_frame + 0x48)) = uVar4;
    }
    if (6 < (int)uVar6) {
      bVar3 = F_00a01e10(((byte *)(gen_frame + 0x0)),7);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 0)) = bVar3;
      (*(uint *)(gen_frame + 0x3c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x3c)), 1, 3),bVar3);
    }
    if (7 < (int)uVar6) {
      bVar3 = F_00a01e10(((byte *)(gen_frame + 0x0)),8);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x40)) + 0)) = bVar3;
      (*(undefined4 *)(gen_frame + 0x40)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x40)), 1, 3),bVar3);
    }
    if (8 < (int)uVar6) {
      bVar3 = F_00a01e10(((byte *)(gen_frame + 0x0)),9);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = bVar3;
      (*(uint *)(gen_frame + 0x44)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x44)), 1, 3),bVar3);
    }
    (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
    piVar5 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar5;
    if (piVar5 != (int *)0x0) {
      *piVar5 = 0;
      piVar5[1] = 0;
    }
    *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x24));
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    if (9 < (int)uVar6) {
      F_00703a80(((byte *)(gen_frame + 0x0)),10,uVar6,&(*(int * PTR32 *)(gen_frame + 0x24)));
    }
    F_00710f40(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4),iVar1,((undefined1 *)(gen_frame + 0xf4)),&(*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0xa0)),((undefined1 *)(gen_frame + 0x4c)),uVar7,
                 (*(uint *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x44)),0,0);
    uVar4 = F_00a02290(((byte *)(gen_frame + 0x0)),0);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x24)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x24)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
    F_0042c880(((undefined1 *)(gen_frame + 0x4c)));
    F_0042c880(((undefined1 *)(gen_frame + 0xa0)));
    F_0042c880(((undefined1 *)(gen_frame + 0xf4)));
    F_00a02240(((byte *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
    return uVar4;
  }
  F_00a02240(((byte *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf10 */
uint F_00713190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x713190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    uVar5 = F_00a019d0(((byte *)(gen_frame + 0x4)));
    F_0042b630(((undefined1 *)(gen_frame + 0x144)));
    F_0042b630(((undefined1 *)(gen_frame + 0xf0)));
    F_0042b630(((undefined1 *)(gen_frame + 0x9c)));
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),5);
    (*(uint *)(gen_frame + 0x24)) = uVar3;
    F_0042b630(((undefined1 *)(gen_frame + 0x48)));
    uVar3 = (*(uint *)(gen_frame + 0x44));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x44)) = uVar3 & 0xffffff00;
    F_006e3770(((byte *)(gen_frame + 0x4)),iVar1,2,((undefined1 *)(gen_frame + 0x144)));
    F_006e3770(((byte *)(gen_frame + 0x4)),iVar1,3,((undefined1 *)(gen_frame + 0xf0)));
    F_006e3770(((byte *)(gen_frame + 0x4)),iVar1,4,((undefined1 *)(gen_frame + 0x9c)));
    if (5 < (int)uVar5) {
      F_006e3770(((byte *)(gen_frame + 0x4)),iVar1,6,((undefined1 *)(gen_frame + 0x48)));
    }
    if (6 < (int)uVar5) {
      bVar2 = F_00a01e10(((byte *)(gen_frame + 0x4)),7);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = bVar2;
      (*(uint *)(gen_frame + 0x44)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x44)), 1, 3),bVar2);
    }
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x0;
    piVar4 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar4;
    if (piVar4 != (int *)0x0) {
      *piVar4 = 0;
      piVar4[1] = 0;
    }
    *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x2c));
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    if (7 < (int)uVar5) {
      F_00703a80(((byte *)(gen_frame + 0x4)),8,uVar5,&(*(int * PTR32 *)(gen_frame + 0x2c)));
    }
    F_00711020(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 4),iVar1,((undefined1 *)(gen_frame + 0x144)),&(*(int * PTR32 *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0xf0)),((undefined1 *)(gen_frame + 0x9c)),(*(uint *)(gen_frame + 0x24)),
                 ((undefined1 *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x44)),0,0);
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x2c)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x2c)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x0;
    F_0042c880(((undefined1 *)(gen_frame + 0x48)));
    F_0042c880(((undefined1 *)(gen_frame + 0x9c)));
    F_0042c880(((undefined1 *)(gen_frame + 0xf0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x144)));
    F_00a02240(((byte *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf11 */
uint F_007133f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7133f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  F_00a02210(((byte *)(gen_frame + 0x0)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x0)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar2);
  uVar1 = *puVar3;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x0)));
  F_0042b630(((undefined1 *)(gen_frame + 0x3c)));
  F_006c5b80(((byte *)(gen_frame + 0x0)),3,0,((undefined1 *)(gen_frame + 0x3c)));
  F_0042b630(((undefined1 *)(gen_frame + 0xe4)));
  F_006c5b80(((byte *)(gen_frame + 0x0)),4,0,((undefined1 *)(gen_frame + 0xe4)));
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),5);
  (*(uint *)(gen_frame + 0x20)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
  piVar5 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar5;
  if (piVar5 != (int *)0x0) {
    *piVar5 = 0;
    piVar5[1] = 0;
  }
  *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x24));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  if (5 < (int)uVar2) {
    F_00703a80(((byte *)(gen_frame + 0x0)),6,uVar2,&(*(int * PTR32 *)(gen_frame + 0x24)));
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x90)));
  F_006c5b80(((byte *)(gen_frame + 0x0)),2,&(*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x90)));
  F_00710e70(*(undefined * PTR32 *)(this + 4),uVar1,((undefined1 *)(gen_frame + 0x90)),&(*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0xe4)),(*(uint *)(gen_frame + 0x20)),0,0);
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x0)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x90)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x24)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x24)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0xe4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x3c)));
  F_00a02240(((byte *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf12 */
uint F_007135e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7135e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  undefined * puVar7;
  undefined4 * PTR32 * ppuVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined4 * puVar11;
  int iVar12;
  undefined1 * this_00;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  uVar5 = F_00a01d20(((undefined1 *)(gen_frame + 0xc)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x14)),1,uVar5);
  iVar2 = *piVar6;
  uVar5 = F_00a019d0(((undefined1 *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0x38)) = uVar5;
  F_0042b630(((undefined1 *)(gen_frame + 0x50)));
  F_006e3770(((undefined1 *)(gen_frame + 0xc)),iVar2,2,((undefined1 *)(gen_frame + 0x50)));
  this_00 = (undefined1 *)0x0;
  iVar12 = 3;
  (*(undefined1 * PTR32 *)(gen_frame + 0x40)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x44)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x48)) = (undefined1 *)0x0;
  (*(int *)(gen_frame + 0x3c)) = 3;
  if (2 < (int)(*(uint *)(gen_frame + 0x38))) {
    do {
      bVar4 = F_00a01f20(((undefined1 *)(gen_frame + 0xc)),iVar12);
      if (bVar4 != 0) break;
      F_0042b630(((undefined1 *)(gen_frame + 0xa4)));
      bVar4 = F_00a01f60(((undefined1 *)(gen_frame + 0xc)),iVar12);
      if (bVar4 == 0) {
        bVar4 = F_00a01f40(((undefined1 *)(gen_frame + 0xc)),iVar12);
        if (bVar4 != 0) {
          uVar5 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),iVar12);
          puVar11 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(iVar2 + 0x1c4))[1]));
          cVar1 = *(char *)((int)puVar11 + 0xbd);
          puVar3 = *(undefined4 * PTR32 *)(iVar2 + 0x1c4);
          while (cVar1 == '\0') {
            if ((uint)puVar11[3] < uVar5) {
              puVar9 = (undefined4 *)puVar11[2];
              puVar11 = puVar3;
            }
            else {
              puVar9 = (undefined4 *)*puVar11;
            }
            puVar3 = puVar11;
            puVar11 = puVar9;
            cVar1 = *(char *)((int)puVar9 + 0xbd);
          }
          puVar11 = *(undefined4 * PTR32 *)(iVar2 + 0x1c4);
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar3;
          if ((puVar3 == puVar11) || (uVar5 < (uint)puVar3[3])) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = puVar11;
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x2c));
          }
          else {
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x30));
          }
          if ((*ppuVar8 == puVar11) ||
             (puVar7 = (undefined *)F_0042a990(*ppuVar8 + 0x19), puVar7 == (undefined *)0x0)) {
            puVar7 = &REFG(undefined, 0x10b3a1f);
          }
          goto LAB_00713757;
        }
      }
      else {
        puVar7 = (undefined *)F_00a01e40(((undefined1 *)(gen_frame + 0xc)),iVar12);
LAB_00713757: ;
        F_0042e430(((undefined1 *)(gen_frame + 0xa4)),puVar7);
      }
      if ((((undefined1 *)(gen_frame + 0xa4)) < this_00) && ((*(undefined1 * PTR32 *)(gen_frame + 0x40)) <= ((undefined1 *)(gen_frame + 0xa4)))) {
        iVar10 = (int)((undefined1 *)(gen_frame + 0xa4)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x40));
        if (this_00 == (*(undefined1 * PTR32 *)(gen_frame + 0x48))) {
          F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x40)),1);
          this_00 = (*(undefined1 * PTR32 *)(gen_frame + 0x44));
        }
        iVar12 = (*(int *)(gen_frame + 0x3c));
        if (this_00 != (undefined1 *)0x0) {
          F_0042cbc0(this_00,(*(undefined1 * PTR32 *)(gen_frame + 0x40)) + (iVar10 / 0x54) * 0x54);
          iVar12 = (*(int *)(gen_frame + 0x3c));
        }
      }
      else {
        if (this_00 == (*(undefined1 * PTR32 *)(gen_frame + 0x48))) {
          F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x40)),1);
          this_00 = (*(undefined1 * PTR32 *)(gen_frame + 0x44));
        }
        if (this_00 != (undefined1 *)0x0) {
          F_0042cbc0(this_00,((undefined1 *)(gen_frame + 0xa4)));
        }
      }
      this_00 = this_00 + 0x54;
      iVar12 = iVar12 + 1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x44)) = this_00;
      (*(int *)(gen_frame + 0x3c)) = iVar12;
      F_0042c880(((undefined1 *)(gen_frame + 0xa4)));
    } while (iVar12 <= (int)(*(uint *)(gen_frame + 0x38)));
  }
  F_00711100(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x34)) + 4),iVar2,((undefined1 *)(gen_frame + 0x50)),&(*(undefined1 * PTR32 *)(gen_frame + 0x40)),0);
  uVar5 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
  F_004876d0(&(*(undefined1 * PTR32 *)(gen_frame + 0x40)));
  F_0042c880(((undefined1 *)(gen_frame + 0x50)));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar5;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf13 */
uint F_00713870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x713870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  undefined * puVar7;
  undefined4 * PTR32 * ppuVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined4 * puVar11;
  int iVar12;
  undefined1 * this_00;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x8)),param_1);
  uVar5 = F_00a01d20(((undefined1 *)(gen_frame + 0x8)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x10)),1,uVar5);
  iVar2 = *piVar6;
  F_0042b630(((undefined1 *)(gen_frame + 0xa0)));
  F_006e3770(((undefined1 *)(gen_frame + 0x8)),iVar2,2,((undefined1 *)(gen_frame + 0xa0)));
  F_0042b630(((undefined1 *)(gen_frame + 0x4c)));
  F_006e3770(((undefined1 *)(gen_frame + 0x8)),iVar2,3,((undefined1 *)(gen_frame + 0x4c)));
  this_00 = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x3c)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x40)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x44)) = (undefined1 *)0x0;
  uVar5 = F_00a019d0(((undefined1 *)(gen_frame + 0x8)));
  iVar12 = 4;
  (*(uint *)(gen_frame + 0x30)) = uVar5;
  (*(int *)(gen_frame + 0x38)) = 4;
  if (3 < (int)uVar5) {
    do {
      bVar4 = F_00a01f20(((undefined1 *)(gen_frame + 0x8)),iVar12);
      if (bVar4 != 0) break;
      F_0042b630(((undefined1 *)(gen_frame + 0xf4)));
      bVar4 = F_00a01f60(((undefined1 *)(gen_frame + 0x8)),iVar12);
      if (bVar4 == 0) {
        bVar4 = F_00a01f40(((undefined1 *)(gen_frame + 0x8)),iVar12);
        if (bVar4 != 0) {
          uVar5 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x10)),iVar12);
          puVar11 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(iVar2 + 0x1c4))[1]));
          cVar1 = *(char *)((int)puVar11 + 0xbd);
          puVar3 = *(undefined4 * PTR32 *)(iVar2 + 0x1c4);
          while (cVar1 == '\0') {
            if ((uint)puVar11[3] < uVar5) {
              puVar9 = (undefined4 *)puVar11[2];
              puVar11 = puVar3;
            }
            else {
              puVar9 = (undefined4 *)*puVar11;
            }
            puVar3 = puVar11;
            puVar11 = puVar9;
            cVar1 = *(char *)((int)puVar9 + 0xbd);
          }
          puVar11 = *(undefined4 * PTR32 *)(iVar2 + 0x1c4);
          (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = puVar3;
          if ((puVar3 == puVar11) || (uVar5 < (uint)puVar3[3])) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar11;
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x28));
          }
          else {
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x2c));
          }
          if ((*ppuVar8 == puVar11) ||
             (puVar7 = (undefined *)F_0042a990(*ppuVar8 + 0x19), puVar7 == (undefined *)0x0)) {
            puVar7 = &REFG(undefined, 0x10b3a1f);
          }
          goto LAB_00713a07;
        }
      }
      else {
        puVar7 = (undefined *)F_00a01e40(((undefined1 *)(gen_frame + 0x8)),iVar12);
LAB_00713a07: ;
        F_0042e430(((undefined1 *)(gen_frame + 0xf4)),puVar7);
      }
      if ((((undefined1 *)(gen_frame + 0xf4)) < this_00) && ((*(undefined1 * PTR32 *)(gen_frame + 0x3c)) <= ((undefined1 *)(gen_frame + 0xf4)))) {
        iVar10 = (int)((undefined1 *)(gen_frame + 0xf4)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x3c));
        if (this_00 == (*(undefined1 * PTR32 *)(gen_frame + 0x44))) {
          F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x3c)),1);
          this_00 = (*(undefined1 * PTR32 *)(gen_frame + 0x40));
        }
        iVar12 = (*(int *)(gen_frame + 0x38));
        if (this_00 != (undefined1 *)0x0) {
          F_0042cbc0(this_00,(*(undefined1 * PTR32 *)(gen_frame + 0x3c)) + (iVar10 / 0x54) * 0x54);
          iVar12 = (*(int *)(gen_frame + 0x38));
        }
      }
      else {
        if (this_00 == (*(undefined1 * PTR32 *)(gen_frame + 0x44))) {
          F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x3c)),1);
          this_00 = (*(undefined1 * PTR32 *)(gen_frame + 0x40));
        }
        if (this_00 != (undefined1 *)0x0) {
          F_0042cbc0(this_00,((undefined1 *)(gen_frame + 0xf4)));
        }
      }
      this_00 = this_00 + 0x54;
      iVar12 = iVar12 + 1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x40)) = this_00;
      (*(int *)(gen_frame + 0x38)) = iVar12;
      F_0042c880(((undefined1 *)(gen_frame + 0xf4)));
    } while (iVar12 <= (int)(*(uint *)(gen_frame + 0x30)));
  }
  F_007112a0(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x34)) + 4),iVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0xa0)),((undefined1 *)(gen_frame + 0x4c)));
  uVar5 = F_00a02290(((undefined1 *)(gen_frame + 0x8)),0);
  F_004876d0(&(*(undefined1 * PTR32 *)(gen_frame + 0x3c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4c)));
  F_0042c880(((undefined1 *)(gen_frame + 0xa0)));
  F_00a02240(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return uVar5;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf26 */
uint F_00713b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x713b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * puVar6;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar4);
  iVar1 = *piVar5;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x4)),2);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2,uVar4);
  iVar2 = *piVar5;
  F_0042b630(((undefined1 *)(gen_frame + 0x44)));
  F_006e3770(((byte *)(gen_frame + 0x4)),iVar1,3,((undefined1 *)(gen_frame + 0x44)));
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),4);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x0;
  piVar5 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar5;
  if (piVar5 != (int *)0x0) {
    *piVar5 = 0;
    piVar5[1] = 0;
  }
  *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  if (4 < (int)uVar3) {
    F_00703a80(((byte *)(gen_frame + 0x4)),5,uVar3,&(*(int * PTR32 *)(gen_frame + 0x2c)));
  }
  if (iVar1 != 0) {
    if (iVar2 == 0) {
      puVar6 = &REFG(undefined, 0x10b3a36);
    }
    else {
      piVar5 = *(int * PTR32 *)(iVar2 + 4);
      puVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5)));
    }
    F_007115c0(iVar1,((undefined1 *)(gen_frame + 0x44)),&(*(int * PTR32 *)(gen_frame + 0x2c)),puVar6,(*(uint *)(gen_frame + 0x24)));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x2c)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x2c)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x44)));
  F_00a01890(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf45 */
uint F_00713cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x713cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  char cVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  int iVar8;
  uint uVar9;
  undefined * puVar10;
  undefined4 * PTR32 * ppuVar11;
  undefined4 * puVar12;
  undefined4 * PTR32 * ppuVar13;
  int iVar14;
  undefined4 * PTR32 * ppuVar15;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar5);
  iVar14 = *piVar6;
  (*(int *)(gen_frame + 0x30)) = iVar14;
  uVar5 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x34)) = uVar5;
  F_0042b630(((undefined1 *)(gen_frame + 0x70)));
  F_006e3770(((byte *)(gen_frame + 0x8)),iVar14,2,((undefined1 *)(gen_frame + 0x70)));
  ppuVar15 = (undefined4 * PTR32 *)0x0;
  ppuVar13 = (undefined4 * PTR32 *)0x0;
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58)) = (undefined4 * PTR32 *)0x0;
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 * PTR32 *)0x0;
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x60)) = (undefined4 * PTR32 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x48)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x0;
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x38)) = (undefined4 * PTR32 *)0x0;
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 * PTR32 *)0x0;
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x40)) = (undefined4 * PTR32 *)0x0;
  (*(int *)(gen_frame + 0x68)) = 3;
  if (2 < (int)(*(uint *)(gen_frame + 0x34))) {
    do {
      puVar7 = (undefined4 *)F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(*(int *)(gen_frame + 0x68)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = puVar7;
      ppuVar11 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c));
      if ((&(*(undefined4 * PTR32 *)(gen_frame + 0x6c)) < (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c))) && ((*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58)) <= &(*(undefined4 * PTR32 *)(gen_frame + 0x6c)))) {
        iVar14 = (int)&(*(undefined4 * PTR32 *)(gen_frame + 0x6c)) - (int)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58));
        if ((*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c)) == (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x60))) {
          iVar8 = (int)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58))) >> 2;
          if (iVar8 == -1) goto LAB_007141e1;
          uVar9 = iVar8 + 1;
          uVar5 = (int)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x60)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58))) >> 2;
          if (uVar5 < uVar9) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar9) {
              uVar5 = uVar9;
            }
            F_0074cbd0(&(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58)),uVar5);
            ppuVar11 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c));
            ppuVar13 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x38));
          }
        }
        if (ppuVar11 != (undefined4 * PTR32 *)0x0) {
          *ppuVar11 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58))[iVar14 >> 2];
        }
      }
      else {
        if ((*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c)) == (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x60))) {
          iVar14 = (int)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58))) >> 2;
          if (iVar14 == -1) goto LAB_007141e1;
          uVar9 = iVar14 + 1;
          uVar5 = (int)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x60)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58))) >> 2;
          if (uVar5 < uVar9) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar9) {
              uVar5 = uVar9;
            }
            F_0074cbd0(&(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58)),uVar5);
            ppuVar11 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c));
            ppuVar13 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x38));
          }
        }
        if (ppuVar11 != (undefined4 * PTR32 *)0x0) {
          *ppuVar11 = puVar7;
        }
      }
      iVar14 = (*(int *)(gen_frame + 0x68)) + 1;
      (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c)) = ppuVar11 + 1;
      (*(int *)(gen_frame + 0x68)) = iVar14;
      F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
      bVar4 = F_00a01f60(((byte *)(gen_frame + 0x8)),iVar14);
      if (bVar4 == 0) {
        bVar4 = F_00a01f40(((byte *)(gen_frame + 0x8)),iVar14);
        if (bVar4 != 0) {
          uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar14);
          puVar7 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x30)) + 0x1c4))[1]));
          cVar1 = *(char *)((int)puVar7 + 0xbd);
          puVar2 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x30)) + 0x1c4);
          while (cVar1 == '\0') {
            if ((uint)puVar7[3] < uVar5) {
              puVar12 = (undefined4 *)puVar7[2];
              puVar7 = puVar2;
            }
            else {
              puVar12 = (undefined4 *)*puVar7;
            }
            puVar2 = puVar7;
            puVar7 = puVar12;
            cVar1 = *(char *)((int)puVar12 + 0xbd);
          }
          puVar7 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x30)) + 0x1c4);
          (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = puVar2;
          if ((puVar2 == puVar7) || (uVar5 < (uint)puVar2[3])) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar7;
            ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x28));
          }
          else {
            ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x6c));
          }
          if ((*ppuVar11 == puVar7) ||
             (puVar10 = (undefined *)F_0042a990(*ppuVar11 + 0x19), puVar10 == (undefined *)0x0)) {
            puVar10 = &REFG(undefined, 0x10b3a1f);
          }
          goto LAB_00713f5b;
        }
      }
      else {
        puVar10 = (undefined *)F_00a01e40(((byte *)(gen_frame + 0x8)),iVar14);
LAB_00713f5b: ;
        F_0042e430(((undefined1 *)(gen_frame + 0xc4)),puVar10);
      }
      if ((((undefined1 *)(gen_frame + 0xc4)) < (*(undefined1 * PTR32 *)(gen_frame + 0x4c))) && ((*(undefined1 * PTR32 *)(gen_frame + 0x48)) <= ((undefined1 *)(gen_frame + 0xc4)))) {
        iVar14 = (int)((undefined1 *)(gen_frame + 0xc4)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x48));
        if ((*(undefined1 * PTR32 *)(gen_frame + 0x4c)) == (*(undefined1 * PTR32 *)(gen_frame + 0x50))) {
          F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x48)),1);
        }
        if ((*(undefined1 * PTR32 *)(gen_frame + 0x4c)) != (undefined1 *)0x0) {
          F_0042cbc0((*(undefined1 * PTR32 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x48)) + (iVar14 / 0x54) * 0x54);
        }
        (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) + 0x54;
      }
      else {
        if ((*(undefined1 * PTR32 *)(gen_frame + 0x4c)) == (*(undefined1 * PTR32 *)(gen_frame + 0x50))) {
          F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x48)),1);
        }
        puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x4c));
        if ((*(undefined1 * PTR32 *)(gen_frame + 0x4c)) != (undefined1 *)0x0) {
          F_0042cbc0((*(undefined1 * PTR32 *)(gen_frame + 0x4c)),((undefined1 *)(gen_frame + 0xc4)));
        }
        (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = puVar3 + 0x54;
      }
      iVar14 = (*(int *)(gen_frame + 0x68)) + 1;
      (*(int *)(gen_frame + 0x68)) = iVar14;
      puVar7 = (undefined4 *)F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar14);
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = puVar7;
      if ((&(*(undefined4 * PTR32 *)(gen_frame + 0x6c)) < ppuVar15) && (ppuVar13 <= &(*(undefined4 * PTR32 *)(gen_frame + 0x6c)))) {
        iVar14 = (int)&(*(undefined4 * PTR32 *)(gen_frame + 0x6c)) - (int)ppuVar13;
        if (ppuVar15 == (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x40))) {
          iVar8 = (int)ppuVar15 - (int)((int)(uintptr_t)ppuVar13) >> 2;
          if (iVar8 == -1) {
LAB_007141e1: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar9 = iVar8 + 1;
          uVar5 = (int)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x40)) - (int)((int)(uintptr_t)ppuVar13) >> 2;
          if (uVar5 < uVar9) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar9) {
              uVar5 = uVar9;
            }
            F_0074cbd0(&(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x38)),uVar5);
            ppuVar13 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x38));
            ppuVar15 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c));
          }
        }
        if (ppuVar15 != (undefined4 * PTR32 *)0x0) {
          *ppuVar15 = ppuVar13[iVar14 >> 2];
        }
      }
      else {
        if (ppuVar15 == (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x40))) {
          iVar14 = (int)ppuVar15 - (int)((int)(uintptr_t)ppuVar13) >> 2;
          if (iVar14 == -1) goto LAB_007141e1;
          uVar9 = iVar14 + 1;
          uVar5 = (int)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x40)) - (int)((int)(uintptr_t)ppuVar13) >> 2;
          if (uVar5 < uVar9) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar9) {
              uVar5 = uVar9;
            }
            F_0074cbd0(&(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x38)),uVar5);
            ppuVar13 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x38));
            ppuVar15 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c));
          }
        }
        if (ppuVar15 != (undefined4 * PTR32 *)0x0) {
          *ppuVar15 = puVar7;
        }
      }
      ppuVar15 = ppuVar15 + 1;
      iVar8 = (*(int *)(gen_frame + 0x68)) + 1;
      (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c)) = ppuVar15;
      (*(int *)(gen_frame + 0x68)) = iVar8;
      F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
      iVar14 = (*(int *)(gen_frame + 0x30));
    } while (iVar8 <= (int)(*(uint *)(gen_frame + 0x34)));
  }
  F_00711740(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 4),iVar14,((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58)),&(*(undefined1 * PTR32 *)(gen_frame + 0x48)),&(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x38)),0);
  uVar5 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
  if (ppuVar13 != (undefined4 * PTR32 *)0x0) {
    F_00429760(ppuVar13,((int)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x40)) - (int)((int)(uintptr_t)ppuVar13) >> 2) * 4,800);
  }
  F_004876d0(&(*(undefined1 * PTR32 *)(gen_frame + 0x48)));
  if ((*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58)) != (undefined4 * PTR32 *)0x0) {
    F_00429760((*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58)),((int)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x60)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x58))) >> 2) * 4,800);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x70)));
  F_00a02240(((byte *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar5;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf46 */
uint F_007141f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7141f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int * PTR32 * ppiVar7;
  int iVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  uVar5 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0x4c)) = uVar3;
  F_00748d80((undefined *)(iVar1 + 0x1c0),&(*(int *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x4c)));
  if ((*(int *)(gen_frame + 0x50)) != *(int *)(iVar1 + 0x1c4)) {
    uVar3 = F_0042a990((*(int *)(gen_frame + 0x50)) + 100);
    (*(uint *)(gen_frame + 0x40)) = uVar3;
    if (uVar3 != 0) {
      (*(uint *)(gen_frame + 0x4c)) = 0;
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x50)) + 0)) = 1;
      (*(int *)(gen_frame + 0x50)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x50)), 1, 3),1);
      (*(uint *)(gen_frame + 0x48)) = 0;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x44)) + 0)) = 1;
      (*(undefined4 *)(gen_frame + 0x44)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x44)), 1, 3),1);
      if (2 < (int)uVar5) {
        uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
        (*(uint *)(gen_frame + 0x4c)) = uVar3;
      }
      if (3 < (int)uVar5) {
        bVar2 = F_00a01e10(((byte *)(gen_frame + 0x4)),4);
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x50)) + 0)) = bVar2;
        (*(int *)(gen_frame + 0x50)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x50)), 1, 3),bVar2);
      }
      if (4 < (int)uVar5) {
        uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),5);
        (*(uint *)(gen_frame + 0x48)) = uVar3;
      }
      if (5 < (int)uVar5) {
        bVar2 = F_00a01e10(((byte *)(gen_frame + 0x4)),6);
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x44)) + 0)) = bVar2;
        (*(undefined4 *)(gen_frame + 0x44)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x44)), 1, 3),bVar2);
      }
      (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
      piVar4 = (int *)F_004296a0(8,0,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar4;
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar4[1] = 0;
      }
      *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x24));
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      if (6 < (int)uVar5) {
        F_00703a80(((byte *)(gen_frame + 0x4)),7,uVar5,&(*(int * PTR32 *)(gen_frame + 0x24)));
      }
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x24));
      uVar3 = (*(uint *)(gen_frame + 0x4c));
      iVar8 = (*(int *)(gen_frame + 0x50));
      uVar5 = (*(uint *)(gen_frame + 0x48));
      uVar9 = (*(undefined4 *)(gen_frame + 0x44));
      uVar6 = F_0042cc20(((undefined1 *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x40)),REFG(undefined4, 0x108cc50));
      F_00711450(iVar1,uVar6,ppiVar7,uVar3,iVar8,uVar5,uVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x54)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x24)));
      F_00429760((*(int * PTR32 *)(gen_frame + 0x24)),8,0x2c4);
    }
  }
  F_00a01890(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: FUN_007143e0 */
uint F_007143e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7143e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00710bf0(REFG(void * PTR32, 0x1488344),param_1,param_2,(int)this + 0x20,param_3);
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf30 */
uint F_00714410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x714410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x24)) = param_2;
  F_00748d80(this + 0x1c0,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x24)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) == *(undefined4 * PTR32 *)(this + 0x1c4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x19);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x28)),uVar2,REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  piVar3 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  if ((byte)param_5 != 0) {
    (*(uint *)(gen_frame + 0x24)) = (uint)(byte)param_5;
    puVar5 = param_4;
    do {
      (*(undefined4 *)(gen_frame + 0x7c)) = 0;
      (*(undefined4 *)(gen_frame + 0x7c)) = *puVar5;
      (*(undefined4 * PTR32 *)(gen_frame + 0x80)) = &(*(undefined4 *)(gen_frame + 0x7c));
      (*(char *)(gen_frame + 0x84)) = '\0';
      if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
      }
      uVar2 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
      if ((*(uint *)(gen_frame + 0x14)) <= uVar2) {
        uVar2 = uVar2 - (*(uint *)(gen_frame + 0x14));
      }
      if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar2 * 4) == 0) {
        uVar4 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x10)) + uVar2 * 4) = uVar4;
      }
      puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x84)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x7c)))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
          (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x80));
          if ((*(char *)(gen_frame + 0x84)) == '\0') {
            F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
          }
          else if ((*(char *)(gen_frame + 0x84)) == '\x01') {
            F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
          }
        }
      }
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x80)) != (undefined4 *)0x0) {
        if (((*(char *)(gen_frame + 0x84)) != '\0') && ((*(char *)(gen_frame + 0x84)) == '\x01')) {
          this_00 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x80));
          *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
          if (*(int *)((int)this_00 + 0x54) < 1) {
            F_0042c880(this_00);
            F_00406ad0(this_00);
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x80)) = (undefined4 *)0x0;
        (*(char *)(gen_frame + 0x84)) = -1;
      }
      puVar5 = puVar5 + 1;
      uVar2 = (*(uint *)(gen_frame + 0x24)) - 1;
      (*(uint *)(gen_frame + 0x24)) = uVar2;
    } while (uVar2 != 0);
  }
  F_007115c0(this,((undefined1 *)(gen_frame + 0x28)),&(*(int * PTR32 *)(gen_frame + 0xc)),param_1,param_3);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x28)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)uVar6;
}

/* ref: FUN_00714620 */
uint F_00714620(unsigned int gen_a0)
{
  GEN_ENTER(0x714620u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint * puVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00a02210(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),1,uVar4);
  iVar7 = *piVar5;
  (*(int *)(gen_frame + 0x20)) = iVar7;
  F_0042b630(((undefined1 *)(gen_frame + 0x9c)));
  F_006e3770(((undefined1 *)(gen_frame + 0x0)),iVar7,2,((undefined1 *)(gen_frame + 0x9c)));
  uVar4 = F_00a019d0(((undefined1 *)(gen_frame + 0x0)));
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x0;
  piVar5 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x30)) = piVar5;
  if (piVar5 != (int *)0x0) {
    *piVar5 = 0;
    piVar5[1] = 0;
  }
  *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x30));
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(int *)(gen_frame + 0x40)) = 0;
  if (2 < (int)uVar4) {
    iVar8 = 3;
    do {
      bVar3 = F_00a01f40(((undefined1 *)(gen_frame + 0x0)),iVar8);
      if (bVar3 == 0) {
        bVar3 = F_00a01f60(((undefined1 *)(gen_frame + 0x0)),iVar8);
        if (bVar3 == 0) {
          F_00a01a20(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10b5f48),iVar8 + -2);
        }
        else {
          uVar4 = F_00a01e40(((undefined1 *)(gen_frame + 0x0)),iVar8);
          uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x48)),uVar4,REFG(undefined4, 0x108cc50));
          (*(undefined4 *)(gen_frame + 0xf0)) = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0xf4)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0xf8)) = -1;
          F_00490f90(&(*(undefined4 *)(gen_frame + 0xf0)),uVar4);
          F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0xf0)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0xf4)) != (undefined4 *)0x0) {
            if (((*(char *)(gen_frame + 0xf8)) != '\0') && ((*(char *)(gen_frame + 0xf8)) == '\x01')) {
              pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0xf4));
              *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
              if (*(int *)((int)pvVar2 + 0x54) < 1) {
                F_0042c880(pvVar2);
                F_00406ad0(pvVar2);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0xf4)) = (undefined4 *)0x0;
            (*(char *)(gen_frame + 0xf8)) = -1;
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x48)));
        }
      }
      else {
        uVar4 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),iVar8);
        (*(uint *)(gen_frame + 0xfc)) = 0;
        (*(uint *)(gen_frame + 0xfc)) = uVar4;
        (*(uint * PTR32 *)(gen_frame + 0x100)) = &(*(uint *)(gen_frame + 0xfc));
        (*(char *)(gen_frame + 0x104)) = '\0';
        if ((*(uint *)(gen_frame + 0x38)) <= (*(int *)(gen_frame + 0x40)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x30)),1);
        }
        uVar4 = (*(int *)(gen_frame + 0x40)) + (*(int *)(gen_frame + 0x3c));
        if ((*(uint *)(gen_frame + 0x38)) <= uVar4) {
          uVar4 = uVar4 - (*(uint *)(gen_frame + 0x38));
        }
        if (*(int *)((*(int *)(gen_frame + 0x34)) + uVar4 * 4) == 0) {
          uVar6 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x34)) + uVar4 * 4) = uVar6;
        }
        puVar1 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x34)) + uVar4 * 4);
        if (puVar1 != (uint *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 *)(puVar1 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x104)) != -1) && (puVar1 != &(*(uint *)(gen_frame + 0xfc)))) {
            (*(uint * PTR32 *)(gen_frame + 0x28)) = puVar1;
            (*(uint * PTR32 *)(gen_frame + 0x2c)) = (*(uint * PTR32 *)(gen_frame + 0x100));
            if ((*(char *)(gen_frame + 0x104)) == '\0') {
              F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x28)));
            }
            else if ((*(char *)(gen_frame + 0x104)) == '\x01') {
              F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x28)));
            }
          }
        }
        (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
        if ((*(uint * PTR32 *)(gen_frame + 0x100)) != (uint *)0x0) {
          if (((*(char *)(gen_frame + 0x104)) != '\0') && ((*(char *)(gen_frame + 0x104)) == '\x01')) {
            pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x100));
            *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
            if (*(int *)((int)pvVar2 + 0x54) < 1) {
              F_0042c880(pvVar2);
              F_00406ad0(pvVar2);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0x100)) = (uint *)0x0;
          (*(char *)(gen_frame + 0x104)) = -1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = (*(int *)(gen_frame + 0x20));
    } while (iVar8 <= (int)(*(uint *)(gen_frame + 0x24)));
  }
  if (iVar7 == 0) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x30)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x30)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x0;
    F_0042c880(((undefined1 *)(gen_frame + 0x9c)));
    F_00a02240(((undefined1 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0x9c)),&(*(int * PTR32 *)(gen_frame + 0x30)),iVar7 + 0x20,0);
  uVar4 = F_00a02290(((undefined1 *)(gen_frame + 0x0)),0);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x30)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x30)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x9c)));
  F_00a02240(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar4;
}

/* ref: FUN_007149b0 */
byte F_007149b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7149b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint * puVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x35))) == '\0') {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x32))) != '\0') {
    puVar2 = (uint *)F_00ab31d0(0x18fae);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
    F_0049f6d0(&(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)));
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  }
  if (REFG(char, 0x14ab29e) == *(char *)((int)this + 0x1d4)) {
    puVar2 = (uint *)F_00ab31d0(0x18fa7);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
  }
  else {
    puVar2 = (uint *)F_00ab31d0(0x18fa8);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
  }
  F_0049f6d0(&(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  bVar1 = F_00a68770(&REFG(undefined1, 0x14ab070),(uint)*(byte *)((int)this + 0x1d4));
  if (bVar1 == 0) {
    puVar2 = (uint *)F_00ab31d0(0x18faa);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
  }
  else {
    puVar2 = (uint *)F_00ab31d0(0x18fa9);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
  }
  F_0049f6d0(&(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (uint *)F_00ab31d0(0x18fb7);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
  F_0049f6d0(&(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00711100(*(undefined * PTR32 *)((int)this + 4),this,(int)this + 0x22c,&(*(undefined4 *)(gen_frame + 0x4)),1);
  F_004876d0(&(*(undefined4 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 1;
}

/* ref: FUN_00714b90 */
uint F_00714b90(unsigned int gen_a0)
{
  GEN_ENTER(0x714b90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_007149b0((undefined *)*puVar3);
    if (bVar1 != 0) {
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_00714c00 */
uint F_00714c00(unsigned int gen_a0)
{
  GEN_ENTER(0x714c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  int iVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined1 * this_00;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  puVar6 = (undefined1 *)0x0;
  this_00 = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x20)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x28)) = (undefined1 *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x30)));
  (*(int *)(gen_frame + 0x1c)) = 0;
  do {
    iVar5 = (*(int *)(gen_frame + 0x1c));
    uVar2 = F_00ab2690((uint)(byte)(&REFG(undefined1, 0x14ab29f))[(*(int *)(gen_frame + 0x1c))]);
    if (uVar2 == 0) {
      F_0042aca0(((undefined1 *)(gen_frame + 0x30)));
    }
    else {
      F_00ab9240(0x18fb2,(uint)*(ushort *)(uVar2 + 0x24),((undefined1 *)(gen_frame + 0x30)));
    }
    if ((((undefined1 *)(gen_frame + 0x30)) < this_00) && (puVar6 <= ((undefined1 *)(gen_frame + 0x30)))) {
      iVar4 = (int)((undefined1 *)(gen_frame + 0x30)) - (int)puVar6;
      if (this_00 == (*(undefined1 * PTR32 *)(gen_frame + 0x28))) {
        F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x20)),1);
        puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
        this_00 = (*(undefined1 * PTR32 *)(gen_frame + 0x24));
      }
      iVar5 = (*(int *)(gen_frame + 0x1c));
      if (this_00 != (undefined1 *)0x0) {
        F_0042cbc0(this_00,puVar6 + (iVar4 / 0x54) * 0x54);
        iVar5 = (*(int *)(gen_frame + 0x1c));
      }
    }
    else {
      if (this_00 == (*(undefined1 * PTR32 *)(gen_frame + 0x28))) {
        F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x20)),1);
        puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
        this_00 = (*(undefined1 * PTR32 *)(gen_frame + 0x24));
      }
      if (this_00 != (undefined1 *)0x0) {
        F_0042cbc0(this_00,((undefined1 *)(gen_frame + 0x30)));
      }
    }
    this_00 = this_00 + 0x54;
    (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = this_00;
    (*(int *)(gen_frame + 0x1c)) = iVar5 + 1;
  } while (iVar5 + 1 < 3);
  puVar3 = (uint *)F_00ab31d0(0x18fa6);
  F_0042cc20(((undefined1 *)(gen_frame + 0x84)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
  if ((((undefined1 *)(gen_frame + 0x84)) < this_00) && (puVar6 <= ((undefined1 *)(gen_frame + 0x84)))) {
    iVar5 = (int)((undefined1 *)(gen_frame + 0x84)) - (int)puVar6;
    if (this_00 == (*(undefined1 * PTR32 *)(gen_frame + 0x28))) {
      F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x20)),1);
      puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
      this_00 = (*(undefined1 * PTR32 *)(gen_frame + 0x24));
    }
    if (this_00 == (undefined1 *)0x0) goto LAB_00714e31;
    puVar7 = puVar6 + (iVar5 / 0x54) * 0x54;
  }
  else {
    if (this_00 == (*(undefined1 * PTR32 *)(gen_frame + 0x28))) {
      F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x20)),1);
      puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
      this_00 = (*(undefined1 * PTR32 *)(gen_frame + 0x24));
    }
    if (this_00 == (undefined1 *)0x0) goto LAB_00714e31;
    puVar7 = ((undefined1 *)(gen_frame + 0x84));
  }
  F_0042cbc0(this_00,puVar7);
LAB_00714e31: ;
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = this_00 + 0x54;
  F_0042c880(((undefined1 *)(gen_frame + 0x84)));
  puVar3 = (uint *)F_00ab31d0(0x18fa5);
  F_0042cc20(((undefined1 *)(gen_frame + 0x84)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
  F_00711100(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4),(*(undefined * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x84)),&(*(undefined1 * PTR32 *)(gen_frame + 0x20)),2);
  F_0042c880(((undefined1 *)(gen_frame + 0x84)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
  uVar8 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  uVar2 = (uint)uVar8;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  puVar7 = puVar6;
  if (puVar6 != (undefined1 *)0x0) {
    for (; puVar7 != this_00 + 0x54; puVar7 = puVar7 + 0x54) {
      F_0042c880(puVar7);
    }
    uVar8 = F_00429760(puVar6,(((int)(*(undefined1 * PTR32 *)(gen_frame + 0x28)) - (int)puVar6) / 0x54) * 0x54,0x35);
    uVar2 = (uint)uVar8;
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar2;
}

/* ref: FUN_00714f20 */
uint F_00714f20(unsigned int gen_a0)
{
  GEN_ENTER(0x714f20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    F_00714c00((undefined *)*puVar2);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_00714f80 */
byte F_00714f80(unsigned int gen_a0)
{
  GEN_ENTER(0x714f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  uint * this_00;
  char cVar1;
  byte bVar2;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  uint uVar10;
  undefined * pvVar11;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x32)));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(char *)(gen_frame + 0x32)) = cVar1;
  if (cVar1 == '\0') {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec) ^ (uint)(uint)(gen_frame + 0xec));
    return 0;
  }
  (*(uint *)(gen_frame + 0x20)) = 0;
  F_00aafe10();
  this_00 = (uint *)((int)this + 0x2d8);
  F_00487650(this_00,&(*(byte * PTR32 *)(gen_frame + 0x2c)),*(undefined4 *)((int)this + 0x2d8),
               *(undefined4 *)((int)this + 0x2dc));
  iVar3 = *(int *)((int)this + 0x2e8);
  this_01 = (uint *)((int)this + 0x2e8);
  if (iVar3 != *(int *)((int)this + 0x2ec)) {
    (*(byte * PTR32 *)(gen_frame + 0x2c)) = (byte *)0x0;
    F_00c46e20(iVar3,*(int *)((int)this + 0x2ec),0);
    *(byte * PTR32 *)((int)this + 0x2ec) = (*(byte * PTR32 *)(gen_frame + 0x2c)) + iVar3;
  }
  (*(byte * PTR32 *)(gen_frame + 0x2c)) = *(byte * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x2f8);
  if ((*(byte * PTR32 *)(gen_frame + 0x2c)) != *(byte * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x2fc)) {
    do {
      bVar2 = *(*(byte * PTR32 *)(gen_frame + 0x2c));
      ((byte *)(gen_frame + 0x33))[0] = bVar2;
      uVar8 = F_00ab2690((uint)bVar2);
      (*(uint *)(gen_frame + 0x20)) = uVar8;
      if ((((uVar8 != 0) && (((byte *)(gen_frame + 0x33))[0] != *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x1d4))) &&
          (*(char *)(uVar8 + 0x32) == (*(char *)(gen_frame + 0x32)))) &&
         (((&REFG(undefined1, 0x14b4ed0))[bVar2 >> 3] & (byte)(1 << (bVar2 & 7))) != 0)) {
        uVar8 = F_0042cc20(((undefined1 *)(gen_frame + 0x88)),&REFG(undefined, 0x10b3a4b),REFG(undefined4, 0x108cc50));
        F_0049f6d0(this_00,uVar8);
        F_0042c880(((undefined1 *)(gen_frame + 0x88)));
        F_00ab9240(0x18fb3,(uint)*(ushort *)((*(uint *)(gen_frame + 0x20)) + 0x26),
                     ((int)(*(int *)((int)this + 0x2dc) - *this_00) / 0x54) * 0x54 + -0x54 +
                     *this_00);
        F_00756760(this_01,((byte *)(gen_frame + 0x33)));
      }
      (*(byte * PTR32 *)(gen_frame + 0x2c)) = (*(byte * PTR32 *)(gen_frame + 0x2c)) + 1;
    } while ((*(byte * PTR32 *)(gen_frame + 0x2c)) != *(byte * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x2fc));
  }
  (*(byte * PTR32 *)(gen_frame + 0x2c)) = *(byte * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x308);
  if ((*(byte * PTR32 *)(gen_frame + 0x2c)) != *(byte * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x30c)) {
    do {
      bVar2 = *(*(byte * PTR32 *)(gen_frame + 0x2c));
      ((byte *)(gen_frame + 0x33))[0] = bVar2;
      uVar8 = F_00ab2690((uint)bVar2);
      (*(uint *)(gen_frame + 0x20)) = uVar8;
      if (((uVar8 != 0) && (*(char *)(uVar8 + 0x32) == (*(char *)(gen_frame + 0x32)))) &&
         (((&REFG(undefined1, 0x14b4ed0))[bVar2 >> 3] & (byte)(1 << (bVar2 & 7))) != 0)) {
        uVar8 = F_0042cc20(((undefined1 *)(gen_frame + 0x88)),&REFG(undefined, 0x10b3a4e),REFG(undefined4, 0x108cc50));
        F_0049f6d0(this_00,uVar8);
        F_0042c880(((undefined1 *)(gen_frame + 0x88)));
        F_00ab9240(0x18fb3,(uint)*(ushort *)((*(uint *)(gen_frame + 0x20)) + 0x26),
                     ((int)(*(int *)((int)this + 0x2dc) - *this_00) / 0x54) * 0x54 + -0x54 +
                     *this_00);
        pbVar4 = *(byte * PTR32 *)((int)this + 0x2ec);
        if (((byte *)(gen_frame + 0x33)) < pbVar4) {
          pbVar5 = (byte *)*this_01;
          if (((byte *)(gen_frame + 0x33)) < pbVar5) goto LAB_00715249;
          if (pbVar4 == *(byte * PTR32 *)((int)this + 0x2f0)) {
            F_00754e90(this_01,1);
          }
          if (*(byte * PTR32 *)((int)this + 0x2ec) != (byte *)0x0) {
            **(byte * PTR32 *)((int)this + 0x2ec) = ((byte *)(gen_frame + 0x33))[(int)(*this_01 - (int)pbVar5)];
          }
        }
        else {
LAB_00715249: ;
          if (pbVar4 == *(byte * PTR32 *)((int)this + 0x2f0)) {
            F_00754e90(this_01,1);
          }
          if (*(byte * PTR32 *)((int)this + 0x2ec) != (byte *)0x0) {
            **(byte * PTR32 *)((int)this + 0x2ec) = ((byte *)(gen_frame + 0x33))[0];
          }
        }
        *(int *)((int)this + 0x2ec) = *(int *)((int)this + 0x2ec) + 1;
      }
      (*(byte * PTR32 *)(gen_frame + 0x2c)) = (*(byte * PTR32 *)(gen_frame + 0x2c)) + 1;
    } while ((*(byte * PTR32 *)(gen_frame + 0x2c)) != *(byte * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x30c));
  }
  F_0042b630(((byte *)(gen_frame + 0x33)) + 1);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar9 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar9;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 0;
    piVar9[1] = 0;
  }
  *piVar9 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0xdc)) = 0;
  (*(byte * PTR32 *)(gen_frame + 0xe0)) = (byte *)0x0;
  (*(char *)(gen_frame + 0xe4)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0xdc)),(int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x280);
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x8)),1);
  }
  uVar8 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar8) {
    uVar8 = uVar8 - (*(uint *)(gen_frame + 0x10));
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar8 * 4) == 0) {
    uVar10 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0xc)) + uVar8 * 4) = uVar10;
  }
  puVar6 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar8 * 4);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 2) = 0xff;
    if (((*(char *)(gen_frame + 0xe4)) != -1) && (puVar6 != &(*(undefined4 *)(gen_frame + 0xdc)))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar6;
      (*(byte * PTR32 *)(gen_frame + 0x2c)) = (*(byte * PTR32 *)(gen_frame + 0xe0));
      if ((*(char *)(gen_frame + 0xe4)) == '\0') {
        *puVar6 = *(undefined4 *)(*(byte * PTR32 *)(gen_frame + 0xe0));
        puVar6[1] = puVar6;
        *(undefined1 *)(puVar6 + 2) = 0;
      }
      else if ((*(char *)(gen_frame + 0xe4)) == '\x01') {
        F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x28)));
      }
    }
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(byte * PTR32 *)(gen_frame + 0xe0)) != (byte *)0x0) && ((*(char *)(gen_frame + 0xe4)) != '\0')) && ((*(char *)(gen_frame + 0xe4)) == '\x01')) {
    pvVar11 = *(undefined * PTR32 *)(*(byte * PTR32 *)(gen_frame + 0xe0));
    *(int *)((int)pvVar11 + 0x54) = *(int *)((int)pvVar11 + 0x54) + -1;
    if (*(int *)((int)pvVar11 + 0x54) < 1) {
      F_0042c880(pvVar11);
      F_00406ad0(pvVar11);
    }
  }
  F_00ab3200(0x18fb4,&(*(int * PTR32 *)(gen_frame + 0x8)),((byte *)(gen_frame + 0x33)) + 1);
  if (*this_00 == *(uint *)((int)this + 0x2dc)) {
    F_0042b630(((undefined1 *)(gen_frame + 0x88)));
    F_00ab0230(0x18fb5,((undefined1 *)(gen_frame + 0x88)));
    F_0042e360(((byte *)(gen_frame + 0x33)) + 1,((undefined1 *)(gen_frame + 0x88)));
    F_0042c880(((undefined1 *)(gen_frame + 0x88)));
  }
  uVar10 = F_0042cc20(((undefined1 *)(gen_frame + 0x88)),&REFG(undefined, 0x10b3a4f),REFG(undefined4, 0x108cc50));
  uVar8 = *(uint *)((int)this + 0x2dc);
  if ((uVar10 < uVar8) && (uVar7 = *this_00, uVar7 <= uVar10)) {
    if (uVar8 == *(uint *)((int)this + 0x2e0)) {
      F_00488ca0(this_00,1);
    }
    pvVar11 = *(undefined * PTR32 *)((int)this + 0x2dc);
    if (pvVar11 == (undefined *)0x0) goto LAB_007154f0;
    uVar10 = ((int)(uVar10 - uVar7) / 0x54) * 0x54 + *this_00;
  }
  else {
    if (uVar8 == *(uint *)((int)this + 0x2e0)) {
      F_00488ca0(this_00,1);
    }
    pvVar11 = *(undefined * PTR32 *)((int)this + 0x2dc);
    if (pvVar11 == (undefined *)0x0) goto LAB_007154f0;
  }
  F_0042cbc0(pvVar11,uVar10);
LAB_007154f0: ;
  *(int *)((int)this + 0x2dc) = *(int *)((int)this + 0x2dc) + 0x54;
  F_0042c880(((undefined1 *)(gen_frame + 0x88)));
  F_00ab9240(0x18fb6,(uint)*(ushort *)((*(uint *)(gen_frame + 0x20)) + 0x26),
               ((int)(*(int *)((int)this + 0x2dc) - *this_00) / 0x54) * 0x54 + -0x54 + *this_00);
  F_00711100(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4),(*(undefined * PTR32 *)(gen_frame + 0x24)),((byte *)(gen_frame + 0x33)) + 1,this_00,3);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  F_0042c880(((byte *)(gen_frame + 0x33)) + 1);
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return 1;
}

/* ref: FUN_007155a0 */
uint F_007155a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7155a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_00714f80((undefined *)*puVar3);
    if (bVar1 != 0) {
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_00715610 */
byte F_00715610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x715610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  short * psVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 * PTR32 * ppuVar11;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  uVar1 = F_00a4ffd0();
  iVar7 = 0;
  psVar2 = (short *)(uVar1 + 0x1688);
  do {
    if (*psVar2 == 0) {
      uVar1 = F_00a4ffd0();
      if (*(char *)(uVar1 + 0x18b8) == '\0') {
        uVar1 = F_00a6cf10();
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x0;
        puVar6 = (undefined4 *)F_004296a0(8,0,0x2c4);
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar6;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        *puVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
        (*(uint *)(gen_frame + 0xcc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(uint *)(gen_frame + 0xcc)) = uVar1 / 0x3c;
        (*(uint * PTR32 *)(gen_frame + 0xd0)) = &(*(uint *)(gen_frame + 0xcc));
        (*(char *)(gen_frame + 0xd4)) = '\0';
        F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0xcc)));
        if ((((*(uint * PTR32 *)(gen_frame + 0xd0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0xd4)) != '\0')) && ((*(char *)(gen_frame + 0xd4)) == '\x01')) {
          pvVar4 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xd0));
          *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
          if (*(int *)((int)pvVar4 + 0x54) < 1) {
            F_0042c880(pvVar4);
            F_00406ad0(pvVar4);
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0xd0)) = &(*(uint *)(gen_frame + 0xcc));
        (*(uint *)(gen_frame + 0xcc)) = 0;
        (*(uint *)(gen_frame + 0xcc)) = uVar1 % 0x3c;
        (*(char *)(gen_frame + 0xd4)) = '\0';
        F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0xcc)));
        if ((((*(uint * PTR32 *)(gen_frame + 0xd0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0xd4)) != '\0')) && ((*(char *)(gen_frame + 0xd4)) == '\x01')) {
          pvVar4 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xd0));
          *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
          if (*(int *)((int)pvVar4 + 0x54) < 1) {
            F_0042c880(pvVar4);
            F_00406ad0(pvVar4);
          }
        }
        piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
        uVar8 = 0x598;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
        F_0046aa70(pvVar4,uVar8,ppuVar11);
        F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
        F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
      }
      else if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
        (*(uint *)(gen_frame + 0x8)) = param_1 & 0xffff;
        F_00a50880(*(undefined4 *)((int)this + 8),(uint)*(ushort *)((int)this + 0x54),1,&(*(uint *)(gen_frame + 0x8)),
                     1);
        *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 1;
      }
      goto LAB_0071586f;
    }
    iVar7 = iVar7 + 1;
    psVar2 = psVar2 + 8;
  } while (iVar7 < 0x10);
  if (REFG(int, 0x1323950) == 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x24c;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    uVar1 = F_0043bd00(pvVar4,uVar8,uVar9,uVar10);
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    uVar5 = F_0043bd00(pvVar4,uVar8,uVar9,uVar10);
    uVar8 = REFG(undefined4, 0x1324110);
    F_0042cc20(((undefined1 *)(gen_frame + 0x78)),uVar5,REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x24)),uVar1,REFG(undefined4, 0x108cc50));
    F_00710d70(*(undefined * PTR32 *)((int)this + 4),this,((undefined1 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x78)),uVar8);
    F_0042c880(((undefined1 *)(gen_frame + 0x24)));
    F_0042c880(((undefined1 *)(gen_frame + 0x78)));
  }
LAB_0071586f: ;
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return 0;
}

/* ref: FUN_00715890 */
uint F_00715890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x715890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined1 uVar1;
  undefined * pvVar2;
  uint * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined4 *)((int)this + 0x138) = param_1;
  *(undefined4 *)((int)this + 0x13c) = *param_2;
  *(undefined1 *)((int)this + 0x146) = *(undefined1 *)((int)param_2 + 0x16);
  *(undefined1 *)((int)this + 0x148) = *((undefined1 *)GEN_TOP((*(int *)(param_3 + 0x1a8) + 8)));
  *(undefined1 *)((int)this + 0x149) = *(undefined1 *)((int)param_2 + 0x17);
  *(undefined4 *)((int)this + 0x130) = param_2[1];
  *(undefined2 *)((int)this + 0x140) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)((int)this + 0x134) = param_2[2];
  *(undefined2 *)((int)this + 0x142) = *(undefined2 *)((int)param_2 + 0x12);
  if (*((char *)GEN_TOP((*(int *)(param_3 + 0x1a8) + 0xc))) == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = *((char *)GEN_TOP((*(int *)(param_3 + 0x1a8) + 0xd))) != '\0';
  }
  *(byte *)((int)this + 0x14c) =
       *(byte *)((int)this + 0x14c) ^ (bVar6 * '\x02' ^ *(byte *)((int)this + 0x14c)) & 2;
  uVar1 = *((undefined1 *)GEN_TOP((*(int *)(param_3 + 0x1a8) + 0xe)));
  *(byte *)((int)this + 0x14c) = *(byte *)((int)this + 0x14c) & 0xfe;
  *(undefined1 *)((int)this + 0x14b) = uVar1;
  *(undefined1 *)((int)this + 0x144) = 0;
  *(int *)((int)this + 0x128) = param_3;
  (*(uint * PTR32 *)(gen_frame + 0x24)) = *(uint * PTR32 *)((int)this + 0x13c);
  F_006d5a00(this,0,1,&(*(uint * PTR32 *)(gen_frame + 0x24)));
  uVar5 = *(uint *)((int)this + 0x130);
  if ((uVar5 != 0) && (*(int *)((int)this + 0x134) != 0)) {
    puVar3 = (uint *)F_00ab2f60(uVar5);
    (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar3;
    if (puVar3 != (uint *)0x0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x0;
      puVar4 = (undefined4 *)F_004296a0(8,0,0x2c4);
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      *puVar4 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x7c)) = 0;
      (*(uint *)(gen_frame + 0x7c)) = (uint)*(ushort *)((int)this + 0x140);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(uint * PTR32 *)(gen_frame + 0x80)) = &(*(uint *)(gen_frame + 0x7c));
      (*(char *)(gen_frame + 0x84)) = '\0';
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x7c)));
      if ((((*(uint * PTR32 *)(gen_frame + 0x80)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x84)) != '\0')) && ((*(char *)(gen_frame + 0x84)) == '\x01')) {
        pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x80));
        *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
        puVar3 = (*(uint * PTR32 *)(gen_frame + 0x24));
        if (*(int *)((int)pvVar2 + 0x54) < 1) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
          puVar3 = (*(uint * PTR32 *)(gen_frame + 0x24));
        }
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x28)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
      F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(int)this + 0x20,(int)this + 0x130);
      F_0042c880(((undefined1 *)(gen_frame + 0x28)));
      F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
    }
    puVar3 = (uint *)F_00ab2f90(*(undefined4 *)((int)this + 0x134));
    (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar3;
    uVar5 = 0;
    if (puVar3 != (uint *)0x0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x0;
      puVar4 = (undefined4 *)F_004296a0(8,0,0x2c4);
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      *puVar4 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x7c)) = 0;
      (*(uint *)(gen_frame + 0x7c)) = (uint)*(ushort *)((int)this + 0x142);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(uint * PTR32 *)(gen_frame + 0x80)) = &(*(uint *)(gen_frame + 0x7c));
      (*(char *)(gen_frame + 0x84)) = '\0';
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x7c)));
      if ((((*(uint * PTR32 *)(gen_frame + 0x80)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x84)) != '\0')) && ((*(char *)(gen_frame + 0x84)) == '\x01')) {
        pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x80));
        *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
        puVar3 = (*(uint * PTR32 *)(gen_frame + 0x24));
        if (*(int *)((int)pvVar2 + 0x54) < 1) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
          puVar3 = (*(uint * PTR32 *)(gen_frame + 0x24));
        }
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x28)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
      F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(int)this + 0x20,(int)this + 0x134);
      F_0042c880(((undefined1 *)(gen_frame + 0x28)));
      F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
      uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
      uVar5 = (uint)uVar7;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar5;
}

/* ref: FUN_00716020 */
uint F_00716020(unsigned int gen_a0)
{
  GEN_ENTER(0x716020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  ushort * puVar1;
  int iVar2;
  uint * puVar3;
  char cVar4;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  float * pfVar8;
  uint uVar9;
  undefined4 * puVar10;
  uint uVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  (*(uint *)(gen_frame + 0xbc)) = uVar5;
  if ((uint)*(byte *)((int)this + 0x108) == *(uint *)((int)this + 0x104)) {
    *(undefined4 *)((int)this + 0xf8) = 0;
    F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0xc0));
    return 0;
  }
  puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 0xf8) + 0x18 + (uint)*(byte *)((int)this + 0x108) * 4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x0;
  piVar6 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x30)) = piVar6;
  if (piVar6 != (int *)0x0) {
    *piVar6 = 0;
    piVar6[1] = 0;
  }
  *piVar6 = (int)&(*(int * PTR32 *)(gen_frame + 0x30));
  piVar6 = *(int * PTR32 *)((int)this + 0x58);
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xb8))(piVar6);
  if ((char)uVar5 == '\0') goto LAB_0071635a;
  if (*(char *)((int)this + 0x108) == '\0') {
    pvVar7 = (undefined *)F_00a5f290(piVar6);
    F_00aa05b0(pvVar7);
  }
  (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)0x0;
  (*(bool *)(gen_frame + 0x5f)) = false;
  (*(float *)(gen_frame + 0x48)) = 0.0;
  cVar4 = *((char *)GEN_TOP((*(int *)((int)this + 0xf8) + 4 + (uint)*(byte *)((int)this + 0x108) * 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = REFG(undefined4 * PTR32, 0x1379694);
  if (cVar4 == '\x01') {
    (*(bool *)(gen_frame + 0x5f)) = true;
  }
  else if (cVar4 == '\x02') {
    (*(bool *)(gen_frame + 0x5f)) = true;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    pfVar8 = (float *)F_00a5feb0(piVar6);
    (*(float * PTR32 *)(gen_frame + 0x54)) = pfVar8;
    pfVar8 = (float *)F_00a5feb0((*(undefined4 * PTR32 *)(gen_frame + 0x4c)));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar8 - (float10)*(*(float * PTR32 *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar8[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x54))[1]);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar8[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x54))[2]);
    (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar8 - (float10)*(*(float * PTR32 *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x4)) = (float)((float10)pfVar8[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x54))[1]);
    (*(float *)(gen_frame + 0x8)) = (float)((float10)pfVar8[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x54))[2]);
    pvVar7 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00aae7a0(&(*(float *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10))))));
    (*(float * PTR32 *)(gen_frame + 0x54)) = pvVar7;
    (*(float *)(gen_frame + 0x58)) = gen_bits2f(piVar6[8]);
    fVar13 = ((float10)GEN_TOD(gen_bits2f(piVar6[8])));
    fVar14 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar7)));
    if (fVar13 < fVar14) {
      (*(float *)(gen_frame + 0x58)) = (float)(fVar14 - fVar13);
      fVar17 = ((float)GEN_TOF((((float10)(float)(fVar14 - fVar13) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                      (float10)*(double *)&REFG(undefined, 0x1080228))));
      (*(float *)(gen_frame + 0x58)) = fVar17;
      if (!((float10)REFG(float, 0x10946b8) < (float10)fVar17)) goto LAB_0071622c;
LAB_0071625c: ;
      fVar17 = F_00a5ffa0(piVar6,(*(undefined4 * PTR32 *)(gen_frame + 0x4c)));
      (*(float *)(gen_frame + 0x48)) = fVar17;
      (*(float * PTR32 *)(gen_frame + 0x50)) = &(*(float *)(gen_frame + 0x48));
    }
    else {
LAB_0071622c: ;
      if (fVar14 < fVar13) {
        (*(float *)(gen_frame + 0x58)) = (float)(fVar13 - fVar14);
        fVar17 = ((float)GEN_TOF((((float10)(float)(fVar13 - fVar14) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                        (float10)*(double *)&REFG(undefined, 0x1080228))));
        (*(float *)(gen_frame + 0x58)) = fVar17;
        if ((float10)REFG(float, 0x10946b8) < (float10)fVar17) goto LAB_0071625c;
      }
    }
  }
  if (*((short *)GEN_TOP((*(int *)((int)this + 0xf8) + (uint)*(byte *)((int)this + 0x108) * 8))) == 0) {
    if ((*(float * PTR32 *)(gen_frame + 0x50)) != (float *)0x0) {
      uVar11 = 0;
      uVar5 = 0x30f;
      goto LAB_007162e6;
    }
  }
  else {
    if ((*((char *)GEN_TOP((*(int *)((int)this + 0xf8) + (uint)*(byte *)((int)this + 0x108) * 8 + 7))) == '\0')
       && (pvVar7 = (undefined *)F_00a5f290(piVar6), pvVar7 != (undefined *)0x0)) {
      F_00aa0600(pvVar7,0);
    }
    puVar1 = ((ushort *)GEN_TOP((*(int *)((int)this + 0xf8) + (uint)*(byte *)((int)this + 0x108) * 8)));
    uVar11 = (uint)*(byte *)((int)puVar1 + 7);
    uVar5 = (uint)*puVar1;
LAB_007162e6: ;
    uVar18 = 1;
    pfVar8 = (*(float * PTR32 *)(gen_frame + 0x50));
    uVar9 = F_00a5f290(piVar6);
    F_006d4be0(uVar9,uVar5,pfVar8,uVar18,uVar11);
  }
  if ((*(bool *)(gen_frame + 0x5f)) != false) {
    pvVar7 = (undefined *)F_00a5f290(piVar6);
    (*(float * PTR32 *)(gen_frame + 0x54)) = pvVar7;
    (*(float *)(gen_frame + 0x58)) = *(float *)((int)this + 4);
    F_006d7550(&(*(float * PTR32 *)(gen_frame + 0x50)),pvVar7);
    if ((*(float * PTR32 *)(gen_frame + 0x50)) != *(float * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x58))) + 0x30)) {
      uVar15 = ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x4c)))();
      *(undefined8 *)((*(float * PTR32 *)(gen_frame + 0x50)) + 0x1c) = uVar15;
      (*(float * PTR32 *)(gen_frame + 0x50))[0x1e] = gen_bits2f((uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x22));
      *(undefined1 *)((*(float * PTR32 *)(gen_frame + 0x50)) + 0x1f) = 1;
      uVar19 = 0;
      uVar18 = 0xffffffff;
      uVar15 = ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x4c)))();
      F_00aa7a30((*(float * PTR32 *)(gen_frame + 0x54)),(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar18,uVar19);
    }
  }
LAB_0071635a: ;
  puVar10 = (undefined4 *)
            F_00ab3f40((uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf8) + 5 +
                                        (uint)*(byte *)((int)this + 0x108) * 8))));
  (*(float *)(gen_frame + 0x58)) = gen_bits2f(*puVar10);
  iVar2 = *(int *)((int)this + 0xf8) + (uint)*(byte *)((int)this + 0x108) * 8;
  uVar5 = (uint)*(byte *)(iVar2 + 6);
  bVar12 = uVar5 != 7;
  (*(bool *)(gen_frame + 0x5f)) = bVar12;
  (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)uVar5;
  F_00710cb0(*(undefined * PTR32 *)((int)this + 4),this,((undefined1 *)(gen_frame + 0x60)),&(*(int * PTR32 *)(gen_frame + 0x30)),-(uint)bVar12 & (uint)piVar6,
               (uint)(*(byte *)((int)this + 0x108) + 1 != *(int *)((int)this + 0x104)),uVar5,
               (uint)bVar12 * 4 + 0x39,0,*puVar10,(uint)*(ushort *)(iVar2 + 2),0,0,
               (uint)(*(char *)(iVar2 + 5) == '\x01'));
  *(char *)((int)this + 0x108) = *(char *)((int)this + 0x108) + '\x01';
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x30)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x30)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x0;
  uVar16 = F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return CONCAT31((int3)(uVar16 >> 8),1);
}

/* ref: Client::Game::Event::QuestEventHandler::vf29 */
uint F_00716450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x716450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 * PTR32 * ppuVar8;
  
  uVar1 = (*(uint *)(gen_frame + 0x48));
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(byte *)(gen_frame + 0x53)) = 0;
  (*(byte *)(gen_frame + 0x52)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x48)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x48)) = uVar1 & 0xffffff00;
  (*(int *)(gen_frame + 0x40)) = 0;
  if ((byte)param_3 < 2) {
    if ((byte)param_3 == 1) {
      iVar5 = *(int *)param_2;
    }
  }
  else {
    (*(byte *)(gen_frame + 0x53)) = *param_2;
    (*(byte *)(gen_frame + 0x52)) = param_2[4];
    if (2 < (byte)param_3) {
      iVar5 = *(int *)(param_2 + 8);
    }
  }
  (*(int *)(gen_frame + 0xc)) = (param_1 & 0xff) + 0x18;
  F_00748d80(this + 0x1c0,&(*(uint *)(gen_frame + 0x44)),&(*(int *)(gen_frame + 0xc)));
  uVar1 = (*(uint *)(gen_frame + 0x44));
  if ((*(uint *)(gen_frame + 0x44)) == *(uint *)(this + 0x1c4)) goto LAB_00716815;
  uVar1 = (*(uint *)(gen_frame + 0x44)) + 100;
  (*(byte *)(gen_frame + 0x51)) = (*(byte *)(gen_frame + 0x53));
  (*(uint *)(gen_frame + 0x44)) = uVar1;
  F_0042cbc0(((undefined1 *)(gen_frame + 0xa8)),uVar1);
  if ((*(byte *)(gen_frame + 0x52)) == 0) {
    if (iVar5 != 0) {
      (*(int *)(gen_frame + 0x40)) = iVar5;
    }
LAB_00716570: ;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x48)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x48)), 1, 3),1);
    iVar5 = 0xeab1;
  }
  else {
    if ((*(byte *)(gen_frame + 0x52)) <= (*(byte *)(gen_frame + 0x53))) {
      if (iVar5 != 0) {
        (*(int *)(gen_frame + 0x40)) = iVar5;
      }
      (*(byte *)(gen_frame + 0x53)) = (*(byte *)(gen_frame + 0x52)) - 1;
      goto LAB_00716570;
    }
    uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x54))," %u/%u",(uint)(*(byte *)(gen_frame + 0x53)),(uint)(*(byte *)(gen_frame + 0x52)));
    F_0042e360(((undefined1 *)(gen_frame + 0xa8)),uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x28));
  (*(uint *)(gen_frame + 0xfc)) = 0;
  (*(uint *)(gen_frame + 0xfc)) = (uint)(*(byte *)(gen_frame + 0x53));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x100)) = &(*(uint *)(gen_frame + 0xfc));
  (*(char *)(gen_frame + 0x104)) = '\0';
  F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x28)),&(*(uint *)(gen_frame + 0xfc)));
  if ((((*(uint * PTR32 *)(gen_frame + 0x100)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x104)) != '\0')) && ((*(char *)(gen_frame + 0x104)) == '\x01')) {
    pvVar4 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x100));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    this = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
      this = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    }
  }
  (*(uint * PTR32 *)(gen_frame + 0x100)) = &(*(uint *)(gen_frame + 0xfc));
  (*(uint *)(gen_frame + 0xfc)) = 0;
  (*(uint *)(gen_frame + 0xfc)) = (uint)(*(byte *)(gen_frame + 0x52));
  (*(char *)(gen_frame + 0x104)) = '\0';
  F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x28)),&(*(uint *)(gen_frame + 0xfc)));
  if ((((*(uint * PTR32 *)(gen_frame + 0x100)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x104)) != '\0')) && ((*(char *)(gen_frame + 0x104)) == '\x01')) {
    pvVar4 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x100));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    this = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
      this = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    }
  }
  F_00711450(this,((undefined1 *)(gen_frame + 0xa8)),&(*(undefined4 * PTR32 *)(gen_frame + 0x28)),iVar5,(*(uint *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)),0);
  if (((*(byte *)(gen_frame + 0x52)) == 0) || ((*(byte *)(gen_frame + 0x52)) <= (*(byte *)(gen_frame + 0x51)))) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
    puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    (*(uint *)(gen_frame + 0xfc)) = 0;
    (*(uint *)(gen_frame + 0xfc)) = *(uint *)(this + 8);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x100)) = &(*(uint *)(gen_frame + 0xfc));
    (*(char *)(gen_frame + 0x104)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0xfc)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x100)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x104)) != '\0')) && ((*(char *)(gen_frame + 0x104)) == '\x01')) {
      pvVar4 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x100));
      *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
      if (*(int *)((int)pvVar4 + 0x54) < 1) {
        F_0042c880(pvVar4);
        F_00406ad0(pvVar4);
      }
    }
    (*(uint *)(gen_frame + 0xfc)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x100)) = (uint *)0x0;
    (*(char *)(gen_frame + 0x104)) = -1;
    F_00490f90(&(*(uint *)(gen_frame + 0xfc)),(*(uint *)(gen_frame + 0x44)));
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0xfc)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x100)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x104)) != '\0')) && ((*(char *)(gen_frame + 0x104)) == '\x01')) {
      pvVar4 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x100));
      *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
      if (*(int *)((int)pvVar4 + 0x54) < 1) {
        F_0042c880(pvVar4);
        F_00406ad0(pvVar4);
      }
    }
    ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    uVar7 = 0x643;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
    F_0046aa70(pvVar4,uVar7,ppuVar8);
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x10)),8,0x2c4);
  }
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x28)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x28)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
  uVar1 = (uint)uVar6;
LAB_00716815: ;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00716830 */
uint F_00716830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x716830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  F_0042b630(((undefined1 *)(gen_frame + 0x20)));
  F_0042b630(((undefined1 *)(gen_frame + 0x74)));
  F_0042b630(((undefined1 *)(gen_frame + 0xc8)));
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x11c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x120)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x124)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x11c)),(int)this + 0x1d8);
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x8)),1);
  }
  uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x11c)));
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x120)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x124)) != '\0')) && ((*(char *)(gen_frame + 0x124)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x120));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x11c)) = 0;
  (*(undefined4 *)(gen_frame + 0x11c)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x120)) = &(*(undefined4 *)(gen_frame + 0x11c));
  (*(char *)(gen_frame + 0x124)) = '\0';
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x8)),1);
  }
  uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x11c)));
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x120)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x124)) != '\0')) && ((*(char *)(gen_frame + 0x124)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x120));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  puVar4 = (uint *)F_00ab31d0(0x19015);
  F_0042e430(((undefined1 *)(gen_frame + 0x20)),(*puVar4 & 0xffffff) + (int)puVar4);
  F_00ab0230(0x19016,((undefined1 *)(gen_frame + 0x74)));
  F_00ab0230(0x19017,((undefined1 *)(gen_frame + 0xc8)));
  F_00710e70(*(undefined * PTR32 *)((int)this + 4),this,((undefined1 *)(gen_frame + 0x20)),&(*(int * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x74)),((undefined1 *)(gen_frame + 0xc8)),1,0,0);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0xc8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return (uint)uVar6;
}

/* ref: FUN_00716af0 */
uint F_00716af0(unsigned int gen_a0)
{
  GEN_ENTER(0x716af0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  if (this != (undefined *)0x0) {
    F_00716830(this,uVar1);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_00716b60 */
uint F_00716b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x716b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323728);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323728));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"QuestOffer",((code *)REFP(0x6d09f0)));
    F_00a01cc0(param_1,iVar7,"QuestReward",((code *)REFP(0x6d0a90)));
    F_00a01cc0(param_1,iVar7,"QuestUnqualified",((code *)REFP(0x6d0b30)));
    F_00a01cc0(param_1,iVar7,"YesNoQuestBattle",((code *)REFP(0x716af0)));
    F_00a01cc0(param_1,iVar7,"GetQuestId",((code *)REFP(0x6d0ba0)));
    F_00a01cc0(param_1,iVar7,"QuestAccepted",((code *)REFP(0x6ba100)));
    F_00a01cc0(param_1,iVar7,"QuestCompleted",((code *)REFP(0x6ba120)));
    F_00a01cc0(param_1,iVar7,"IsBattleNpcOwner",((code *)REFP(0x6d9390)));
    F_00a01cc0(param_1,iVar7,"IsBattleNpcTriggerOwner",((code *)REFP(0x6dcc40)));
    F_00a01cc0(param_1,iVar7,"IsBattleNpcTrigger",((code *)REFP(0x6d94f0)));
    uVar3 = F_00ab0170();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab30e0(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    F_00a01c80(this,iVar7,"QUALIFICATION_EQUIP",0x1000);
    F_00a01c80(this,iVar7,"QUALIFICATION_ITEM",0x800);
    F_00a01c80(this,iVar7,"QUALIFICATION_MOUNT",0x4000);
    F_00a01c80(this,iVar7,"QUALIFICATION_BUDDY",0x8000);
    F_00a01c80(this,iVar7,"LEGACY_EPIC_QUEST_WEAPON_PLD",1);
    F_00a01c80(this,iVar7,"LEGACY_EPIC_QUEST_WEAPON_MNK",2);
    F_00a01c80(this,iVar7,"LEGACY_EPIC_QUEST_WEAPON_WAR",3);
    F_00a01c80(this,iVar7,"LEGACY_EPIC_QUEST_WEAPON_DRG",4);
    F_00a01c80(this,iVar7,"LEGACY_EPIC_QUEST_WEAPON_BRD",5);
    F_00a01c80(this,iVar7,"LEGACY_EPIC_QUEST_WEAPON_WHM",6);
    F_00a01c80(this,iVar7,"LEGACY_EPIC_QUEST_WEAPON_BLM",7);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132372c),REFG(undefined * PTR32, 0x1323728),0);
  return 1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf36 */
byte F_00716eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x716eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  bVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if (bVar1 != 0) {
    return 1;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) != 0) {
    iVar4 = 0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        if (**((char * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 100))) != '\0') {
          F_00710bf0(REFG(void * PTR32, 0x1488344),(int)(*(int * PTR32 *)&gen_args[3]) + 100,&(*(int * PTR32 *)(gen_frame + 0x4)),(*(undefined * PTR32 *)&gen_args[0]) + 0x20,
                       *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc))));
          *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x368))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x368))) + 1;
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == 0x18) break;
        F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
      } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x368))) == 0) {
    F_006e9ff0((*(undefined * PTR32 *)&gen_args[0]));
    uVar5 = 0;
    uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x280);
    F_00754440((*(undefined * PTR32 *)&gen_args[0]) + 0xfc,REFG(undefined * PTR32, 0x132372c),uVar3,uVar5);
  }
  return 0;
}

/* ref: FUN_00717440 */
uint F_00717440(unsigned int gen_a0)
{
  GEN_ENTER(0x717440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  if (this != (undefined *)0x0) {
    F_00716fd0(this,uVar1);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_007174b0 */
uint F_007174b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7174b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323730);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323730));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"CraftLeveTalk",((code *)REFP(0x717440)));
    F_00a01cc0(param_1,iVar7,"CraftLeveNpcTrade",((code *)REFP(0x6e1c70)));
    F_00a01cc0(param_1,iVar7,"CraftLeveRewardMenu",((code *)REFP(0x6e1cf0)));
    F_00a01cc0(param_1,iVar7,"FinishAdditionalTrade",((code *)REFP(0x6d1960)));
    F_00a01cc0(param_1,iVar7,"HaveAdditionalRewards",((code *)REFP(0x6e1e00)));
    F_00a01cc0(param_1,iVar7,"GetRemainingAdditionalTradeNum",((code *)REFP(0x6e1f10)));
    F_00a01cc0(param_1,iVar7,"LeveCompleted",((code *)REFP(0x6ba160)));
    uVar3 = F_00ab02a0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3300(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323734),REFG(undefined * PTR32, 0x1323730),0);
  return 1;
}

/* ref: FUN_00717720 */
uint F_00717720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x717720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  char cVar1;
  ushort uVar2;
  undefined * pvVar3;
  byte bVar4;
  uint * PTR32 * PTR32 * pppuVar5;
  int iVar6;
  uint uVar7;
  uint * puVar8;
  uint * PTR32 * PTR32 * pppuVar9;
  uint uVar10;
  uint uVar11;
  uint * PTR32 * PTR32 * pppuVar12;
  undefined1 * puVar13;
  int iVar14;
  undefined1 * puVar15;
  uint * PTR32 * ppuVar16;
  ushort * puVar17;
  undefined1 * puVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x10)) = (uint * PTR32 *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  F_007519b0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)),*(int *)((int)this + 0x338) - *(int *)((int)this + 0x334) >> 1);
  puVar17 = *(ushort * PTR32 *)((int)this + 0x334);
  if (puVar17 != *(ushort * PTR32 *)((int)this + 0x338)) {
    do {
      pppuVar9 = ((uint * PTR32 * PTR32 *)GEN_TOP((*(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x348))[1]));
      cVar1 = *(char *)((int)pppuVar9 + 0x9d);
      pppuVar12 = *(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x348);
      while (cVar1 == '\0') {
        if (*(ushort *)(pppuVar9 + 3) < *puVar17) {
          pppuVar5 = (uint * PTR32 * PTR32 *)pppuVar9[2];
          pppuVar9 = pppuVar12;
        }
        else {
          pppuVar5 = (uint * PTR32 * PTR32 *)*pppuVar9;
        }
        pppuVar12 = pppuVar9;
        pppuVar9 = pppuVar5;
        cVar1 = *(char *)((int)pppuVar5 + 0x9d);
      }
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x4)) = (uint * PTR32 *)pppuVar12;
      if ((pppuVar12 == *(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x348)) ||
         (*puVar17 < *(ushort *)(pppuVar12 + 3))) {
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)) = (uint * PTR32 *)*(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x348);
        pppuVar9 = &(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c));
      }
      else {
        pppuVar9 = &(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4));
      }
      ppuVar16 = *pppuVar9;
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) = ppuVar16 + 4;
      pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0xc));
      if ((&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0xc))) && ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)) <= &(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)))) {
        iVar14 = (int)&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) - (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8));
        if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x10))) {
          iVar6 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8))) >> 2;
          if (iVar6 == -1) goto LAB_00717e64;
          uVar7 = iVar6 + 1;
          uVar10 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8))) >> 2;
          if (uVar10 < uVar7) {
            if (-(uVar10 >> 1) - 1 < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar7) {
              uVar10 = uVar7;
            }
            F_007519b0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar10);
            pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
          *pppuVar9 = (uint * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8))[iVar14 >> 2];
        }
      }
      else {
        if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x10))) {
          iVar14 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8))) >> 2;
          if (iVar14 == -1) goto LAB_00717e64;
          uVar7 = iVar14 + 1;
          uVar10 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8))) >> 2;
          if (uVar10 < uVar7) {
            if (-(uVar10 >> 1) - 1 < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar7) {
              uVar10 = uVar7;
            }
            F_007519b0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar10);
            pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
          *pppuVar9 = ppuVar16 + 4;
        }
      }
      puVar17 = puVar17 + 1;
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)) = (uint * PTR32 *)(pppuVar9 + 1);
    } while (puVar17 != *(ushort * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x338));
  }
  uVar10 = F_00a4ffd0();
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  iVar14 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x334);
  if (iVar14 != *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x338)) {
    F_00c46e20(iVar14,*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x338),0);
    *(int *)((int)pvVar3 + 0x338) = iVar14;
  }
  puVar13 = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x20)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = (undefined1 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) = (uint * PTR32 *)0x0;
  if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)) != (*(uint * PTR32 * PTR32 *)(gen_frame + 0xc))) {
    while( true ) {
      pppuVar12 = (uint * PTR32 * PTR32 *)0xffff;
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x4)) = (uint * PTR32 *)0xffff;
      pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8));
      if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)) != (*(uint * PTR32 * PTR32 *)(gen_frame + 0xc))) {
        do {
          if (*(ushort *)(*pppuVar9 + 0xb) < (ushort)pppuVar12) {
            pppuVar12 = (uint * PTR32 * PTR32 *)(uint)*(ushort *)(*pppuVar9 + 0xb);
          }
          pppuVar9 = pppuVar9 + 1;
        } while (pppuVar9 != (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)));
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x4)) = (uint * PTR32 *)pppuVar12;
      }
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)) = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x8));
      if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0xc))) break;
      do {
        if (*(short *)(*(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)) + 0xb) == (short)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4))) {
          uVar20 = REFG(undefined4, 0x108cc50);
          uVar7 = F_0042a990(*(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)) + 0xc);
          F_0042cc20(((undefined1 *)(gen_frame + 0x54)),uVar7,uVar20);
          if ((((undefined1 *)(gen_frame + 0x54)) < (*(undefined1 * PTR32 *)(gen_frame + 0x20))) && (puVar13 <= ((undefined1 *)(gen_frame + 0x54)))) {
            iVar14 = (int)((undefined1 *)(gen_frame + 0x54)) - (int)puVar13;
            if ((*(undefined1 * PTR32 *)(gen_frame + 0x20)) == (*(undefined1 * PTR32 *)(gen_frame + 0x24))) {
              iVar6 = ((int)(*(undefined1 * PTR32 *)(gen_frame + 0x20)) - (int)puVar13) / 0x54;
              if (iVar6 == -1) goto LAB_00717e64;
              uVar7 = ((int)(*(undefined1 * PTR32 *)(gen_frame + 0x24)) - (int)puVar13) / 0x54;
              uVar11 = iVar6 + 1;
              if (uVar7 < uVar11) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar11) {
                  uVar7 = uVar11;
                }
                F_00487da0(&(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),uVar7);
                puVar13 = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
              }
            }
            puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
            if ((*(undefined1 * PTR32 *)(gen_frame + 0x20)) != (undefined1 *)0x0) {
              puVar15 = puVar13 + (iVar14 / 0x54) * 0x54;
LAB_00717b0a: ;
              puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
              F_0042cbc0((*(undefined1 * PTR32 *)(gen_frame + 0x20)),puVar15);
            }
          }
          else {
            if ((*(undefined1 * PTR32 *)(gen_frame + 0x20)) == (*(undefined1 * PTR32 *)(gen_frame + 0x24))) {
              iVar14 = ((int)(*(undefined1 * PTR32 *)(gen_frame + 0x20)) - (int)puVar13) / 0x54;
              if (iVar14 == -1) goto LAB_00717e64;
              uVar7 = ((int)(*(undefined1 * PTR32 *)(gen_frame + 0x24)) - (int)puVar13) / 0x54;
              uVar11 = iVar14 + 1;
              if (uVar7 < uVar11) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar11) {
                  uVar7 = uVar11;
                }
                F_00487da0(&(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),uVar7);
                puVar13 = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
              }
            }
            puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
            if ((*(undefined1 * PTR32 *)(gen_frame + 0x20)) != (undefined1 *)0x0) {
              puVar15 = ((undefined1 *)(gen_frame + 0x54));
              goto LAB_00717b0a;
            }
          }
          (*(undefined1 * PTR32 *)(gen_frame + 0x20)) = puVar18 + 0x54;
          F_0042c880(((undefined1 *)(gen_frame + 0x54)));
          if (*(byte *)(uVar10 + 0x168a + (int)(*(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)))[0x21] * 0x10) < 10) {
            bVar4 = F_006dd140((*(undefined * PTR32 *)(gen_frame + 0x18)),(uint)*(ushort *)*(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)));
            ppuVar16 = (uint * PTR32 *)0xee1b;
            if (bVar4 != 0) goto LAB_00717b57;
          }
          else {
LAB_00717b57: ;
            ppuVar16 = (uint * PTR32 *)0xee11;
          }
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) = ppuVar16;
          pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
          if ((&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40))) && ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) <= &(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)))) {
            iVar14 = (int)&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) - (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c));
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44))) {
              iVar6 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2;
              if (iVar6 == -1) goto LAB_00717e64;
              uVar11 = iVar6 + 1;
              uVar7 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2;
              if (uVar7 < uVar11) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar11) {
                  uVar7 = uVar11;
                }
                F_0074cbd0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),uVar7);
                pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
              }
            }
            if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
              *pppuVar9 = (uint * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))[iVar14 >> 2];
            }
          }
          else {
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44))) {
              iVar14 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2;
              if (iVar14 == -1) goto LAB_00717e64;
              uVar11 = iVar14 + 1;
              uVar7 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2;
              if (uVar7 < uVar11) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar11) {
                  uVar7 = uVar11;
                }
                F_0074cbd0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),uVar7);
                pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
              }
            }
            if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
              *pppuVar9 = ppuVar16;
            }
          }
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) = (uint * PTR32 *)(pppuVar9 + 1);
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) = (uint * PTR32 *)0x0;
          pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
          if ((&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30))) && ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c)) <= &(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)))) {
            iVar14 = (int)&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) - (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c));
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34))) {
              iVar6 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))) >> 2;
              if (iVar6 == -1) goto LAB_00717e64;
              uVar11 = iVar6 + 1;
              uVar7 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))) >> 2;
              if (uVar7 < uVar11) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar11) {
                  uVar7 = uVar11;
                }
                F_0074cbd0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c)),uVar7);
                pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
              }
            }
            if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
              *pppuVar9 = (uint * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))[iVar14 >> 2];
            }
          }
          else {
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34))) {
              iVar14 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))) >> 2;
              if (iVar14 == -1) goto LAB_00717e64;
              uVar11 = iVar14 + 1;
              uVar7 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))) >> 2;
              if (uVar7 < uVar11) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar11) {
                  uVar7 = uVar11;
                }
                F_0074cbd0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c)),uVar7);
                pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
              }
            }
            if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
              *pppuVar9 = (uint * PTR32 *)0x0;
            }
          }
          pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
          uVar2 = *(ushort *)*(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c));
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = (uint * PTR32 *)(pppuVar9 + 1);
          pppuVar9 = *(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x338);
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) = (uint * PTR32 *)(uint)uVar2;
          if ((&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) < pppuVar9) &&
             (pppuVar12 = *(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x334), pppuVar12 <= &(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)))) {
            if (pppuVar9 == *(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x33c)) {
              iVar14 = (int)pppuVar9 - (int)((int)(uintptr_t)pppuVar12) >> 1;
              if (iVar14 == -1) goto LAB_00717e64;
              uVar11 = iVar14 + 1;
              uVar7 = (int)*(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x33c) - (int)((int)(uintptr_t)pppuVar12) >> 1;
              if (uVar7 < uVar11) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar11) {
                  uVar7 = uVar11;
                }
                F_007516d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x334),uVar7);
                puVar13 = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
              }
            }
            if (*(undefined2 * PTR32 *)((int)pvVar3 + 0x338) != (undefined2 *)0x0) {
              **(undefined2 * PTR32 *)((int)pvVar3 + 0x338) =
                   *((undefined2 *)GEN_TOP((*(int *)((int)pvVar3 + 0x334) + ((int)&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) - (int)((int)(uintptr_t)pppuVar12) >> 1) * 2)));
            }
          }
          else {
            if (pppuVar9 == *(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x33c)) {
              iVar14 = (int)pppuVar9 - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x334) >> 1;
              if (iVar14 == -1) goto LAB_00717e64;
              uVar11 = iVar14 + 1;
              uVar7 = (int)*(uint * PTR32 * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x33c) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x334) >>
                      1;
              if (uVar7 < uVar11) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar11) {
                  uVar7 = uVar11;
                }
                F_007516d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x334),uVar7);
                puVar13 = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
              }
            }
            if (*(ushort * PTR32 *)((int)pvVar3 + 0x338) != (ushort *)0x0) {
              **(ushort * PTR32 *)((int)pvVar3 + 0x338) = uVar2;
            }
          }
          pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c));
          ppuVar16 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0xc));
          *(int *)((int)pvVar3 + 0x338) = *(int *)((int)pvVar3 + 0x338) + 2;
          F_00c46e20((*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)) + 1,((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)) - (int)((*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)) + 1) >> 2) * 4);
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)) = ppuVar16 + -1;
        }
        else {
          pppuVar9 = (uint * PTR32 * PTR32 *)((*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)) + 1);
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0x4c)) = (uint * PTR32 *)pppuVar9;
        }
      } while (pppuVar9 != (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0xc)));
      if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0xc))) break;
    }
  }
  puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) = (uint * PTR32 *)0x0;
  pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
  if ((&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40))) && ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) <= &(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)))) {
    iVar14 = (int)&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) - (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c));
    if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44))) {
      iVar6 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2;
      if (iVar6 == -1) {
LAB_00717e64: ;
                    
        F_00c4579a("vector<T> too long");
      }
      uVar7 = iVar6 + 1;
      uVar10 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2;
      if (uVar10 < uVar7) {
        if (-(uVar10 >> 1) - 1 < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar7) {
          uVar10 = uVar7;
        }
        F_0074cbd0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),uVar10);
        pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
      }
    }
    puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
    if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
      *pppuVar9 = (uint * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))[iVar14 >> 2];
    }
  }
  else {
    if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44))) {
      iVar14 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2;
      if (iVar14 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar7 = iVar14 + 1;
      uVar10 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2;
      if (uVar10 < uVar7) {
        if (-(uVar10 >> 1) - 1 < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar7) {
          uVar10 = uVar7;
        }
        F_0074cbd0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),uVar10);
        pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
      }
    }
    if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
      *pppuVar9 = (uint * PTR32 *)0x0;
    }
  }
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) = (uint * PTR32 *)(pppuVar9 + 1);
  puVar8 = (uint *)F_00ab31d0(2);
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)),(*puVar8 & 0xffffff) + (int)puVar8,REFG(undefined4, 0x108cc50));
  if ((((undefined1 *)(gen_frame + 0x54)) < puVar18) && (puVar13 <= ((undefined1 *)(gen_frame + 0x54)))) {
    iVar14 = (int)((undefined1 *)(gen_frame + 0x54)) - (int)puVar13;
    if (puVar18 == (*(undefined1 * PTR32 *)(gen_frame + 0x24))) {
      iVar6 = ((int)puVar18 - (int)puVar13) / 0x54;
      if (iVar6 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar10 = ((int)(*(undefined1 * PTR32 *)(gen_frame + 0x24)) - (int)puVar13) / 0x54;
      uVar7 = iVar6 + 1;
      if (uVar10 < uVar7) {
        if (-(uVar10 >> 1) - 1 < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar7) {
          uVar10 = uVar7;
        }
        F_00487da0(&(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),uVar10);
        puVar13 = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
        puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
      }
    }
    if (puVar18 == (undefined1 *)0x0) goto LAB_00718071;
    puVar15 = puVar13 + (iVar14 / 0x54) * 0x54;
  }
  else {
    if (puVar18 == (*(undefined1 * PTR32 *)(gen_frame + 0x24))) {
      iVar14 = ((int)puVar18 - (int)puVar13) / 0x54;
      if (iVar14 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar10 = ((int)(*(undefined1 * PTR32 *)(gen_frame + 0x24)) - (int)puVar13) / 0x54;
      uVar7 = iVar14 + 1;
      if (uVar10 < uVar7) {
        if (-(uVar10 >> 1) - 1 < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar7) {
          uVar10 = uVar7;
        }
        F_00487da0(&(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),uVar10);
        puVar13 = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
        puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
      }
    }
    if (puVar18 == (undefined1 *)0x0) goto LAB_00718071;
    puVar15 = ((undefined1 *)(gen_frame + 0x54));
  }
  F_0042cbc0(puVar18,puVar15);
LAB_00718071: ;
  puVar18 = puVar18 + 0x54;
  (*(undefined1 * PTR32 *)(gen_frame + 0x20)) = puVar18;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) = (uint * PTR32 *)0x0;
  if ((&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30))) && ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c)) <= &(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)))) {
    iVar14 = (int)&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x50)) - (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c));
    pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
    if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34))) {
      iVar6 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))) >> 2;
      if (iVar6 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar7 = iVar6 + 1;
      uVar10 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))) >> 2;
      if (uVar10 < uVar7) {
        if (-(uVar10 >> 1) - 1 < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar7) {
          uVar10 = uVar7;
        }
        F_0074cbd0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c)),uVar10);
        pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
        puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x20));
      }
    }
    if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
      *pppuVar9 = (uint * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))[iVar14 >> 2];
    }
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = (uint * PTR32 *)(pppuVar9 + 1);
  }
  else {
    pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
    if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34))) {
      iVar14 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))) >> 2;
      if (iVar14 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar7 = iVar14 + 1;
      uVar10 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c))) >> 2;
      if (uVar10 < uVar7) {
        if (-(uVar10 >> 1) - 1 < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar7) {
          uVar10 = uVar7;
        }
        F_0074cbd0(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c)),uVar10);
        pppuVar9 = (uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
      }
    }
    if (pppuVar9 != (uint * PTR32 * PTR32 *)0x0) {
      *pppuVar9 = (uint * PTR32 *)0x0;
    }
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = (uint * PTR32 *)(pppuVar9 + 1);
  }
  ppuVar16 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10b3a6e),REFG(undefined4, 0x108cc50));
  F_00711740(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4),(*(undefined * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x54)),&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x2c)),0);
  uVar19 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  uVar10 = (uint)uVar19;
  if ((uint * PTR32 * PTR32 *)ppuVar16 != (uint * PTR32 * PTR32 *)0x0) {
    uVar19 = F_00429760(ppuVar16,((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) - (int)((int)(uintptr_t)ppuVar16) >> 2) * 4,800);
    uVar10 = (uint)uVar19;
  }
  if ((uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) != (uint * PTR32 * PTR32 *)0x0) {
    uVar19 = F_00429760((*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2) * 4,800);
    uVar10 = (uint)uVar19;
  }
  puVar15 = puVar13;
  if (puVar13 != (undefined1 *)0x0) {
    for (; puVar15 != puVar18; puVar15 = puVar15 + 0x54) {
      F_0042c880(puVar15);
    }
    uVar19 = F_00429760(puVar13,(((int)(*(undefined1 * PTR32 *)(gen_frame + 0x24)) - (int)puVar13) / 0x54) * 0x54,0x35);
    uVar10 = (uint)uVar19;
  }
  if ((uint * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)) != (uint * PTR32 * PTR32 *)0x0) {
    uVar19 = F_00429760((*(uint * PTR32 * PTR32 *)(gen_frame + 0x8)),((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x8))) >> 2) * 4,800);
    uVar10 = (uint)uVar19;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar10;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf24 */
uint F_00718270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x718270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined1 GVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  if ((short)param_2 == 0) {
    this[0x120] = (undefined1)0x0;
    *(undefined4 *)(this + 0x124) = 0xffffffff;
    REFG(undefined4, 0x1488768) = this;
    if ((REFG(undefined1, 0x14ab29a) != this[0x10c]) || (REFG(undefined1, 0x14ab29a) == (undefined1)0x0)) {
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
      piVar3 = (int *)F_004296a0(8,0,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0;
        piVar3[1] = 0;
      }
      *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x24)));
      F_00ab9240(0xcdc,(uint)(byte)this[0x10c],((undefined1 *)(gen_frame + 0x24)));
      if (REFG(int, 0x1323910) == 0) {
        if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
          REFG(undefined4, 0x132390c) = 0;
        }
        else {
          puVar4 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
          REFG(undefined4, 0x132390c) = *puVar4;
        }
      }
      *(undefined4 *)&REFG(undefined, 0x1323924) = param_1;
      *(undefined4 *)&REFG(undefined, 0x1323920) = 0;
      *(undefined4 *)&REFG(undefined, 0x132392c) = 0x3d;
      *(undefined4 *)&REFG(undefined, 0x1323930) = 0x279;
      *(undefined4 *)&REFG(undefined, 0x1323934) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323938) = 0;
      *(undefined4 *)&REFG(undefined, 0x132393c) = 0x1010000;
      F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0x24)),&(*(int * PTR32 *)(gen_frame + 0xc)),&REFG(undefined * PTR32, 0x1323918),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x24)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
      uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
      uVar2 = (uint)uVar5;
      goto LAB_00718416;
    }
  }
  else if ((short)param_2 == 10) {
    if (this[0x120] != (undefined1)0x0) {
      F_006c2e90(this,*param_3);
    }
    uVar2 = F_00700910(this);
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return uVar2;
  }
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    GVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,GVar1);
    if (((byte)GVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)GVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return uVar2;
    }
  }
LAB_00718416: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: FUN_00718430 */
uint F_00718430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x718430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  ushort uVar1;
  uint uVar2;
  uint * puVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = param_1;
  if ((param_1 < 3) &&
     (uVar1 = *(ushort *)((int)this + param_1 * 2 + 0x4ec), uVar2 = (uint)uVar1, uVar1 != 0)) {
    puVar3 = (uint *)F_00ab33c0(uVar2);
    uVar2 = 0;
    if (puVar3 != (uint *)0x0) {
      F_004816e0(((undefined4 *)(gen_frame + 0x0)));
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = param_2;
      (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
      (*(undefined1 *)(gen_frame + 0x74)) = 0;
      F_00493b50(((undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x6c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x6c)));
      F_0042cc20(((undefined1 *)(gen_frame + 0x18)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
      F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0x0)),(int)this + 0x20,0);
      F_0042c880(((undefined1 *)(gen_frame + 0x18)));
      F_00492c50(((undefined4 *)(gen_frame + 0x0)));
      uVar4 = F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
      uVar2 = (uint)uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: FUN_00718510 */
uint F_00718510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x718510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  puVar1 = (uint *)F_00ab33c0(param_1);
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    F_00710bf0(REFG(void * PTR32, 0x1488344),((undefined1 *)(gen_frame + 0x4)),param_2,(int)this + 0x20,1);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00718930 */
byte F_00718930(unsigned int gen_a0)
{
  GEN_ENTER(0x718930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  ushort * puVar4;
  int iVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  uint uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  uVar2 = F_00ab3e80(**(undefined4 * PTR32 *)((int)this + 0x1d4));
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  *(undefined4 *)((int)this + 0x22c) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = (undefined1 *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x38)) = (undefined1 *)0x0;
  F_0042b630(((undefined1 *)(gen_frame + 0x40)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  piVar3 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  (*(ushort * PTR32 *)(gen_frame + 0x28)) = (ushort *)(uVar2 + 4);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 8;
  do {
    uVar2 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x28));
    if ((uVar2 != 0) && (uVar8 = uVar2, uVar2 < 0x70)) {
      while (puVar4 = (ushort *)F_00ab3e50(uVar8), puVar4 != (ushort *)0x0) {
        if (*(int *)puVar4 != 0) {
          if ((((&REFG(undefined, 0x14b4f0c))[*puVar4 >> 3] & (byte)(1 << ((byte)*puVar4 & 7))) != 0) &&
             (uVar8 = F_00ab3e80(*(undefined4 *)puVar4), uVar8 != 0)) {
            F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
            (*(undefined4 *)(gen_frame + 0xac)) = 0;
            (*(undefined4 *)(gen_frame + 0xac)) = *(undefined4 *)puVar4;
            (*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = &(*(undefined4 *)(gen_frame + 0xac));
            (*(char *)(gen_frame + 0xb4)) = '\0';
            F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0xac)));
            if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) != (undefined4 *)0x0) {
              if (((*(char *)(gen_frame + 0xb4)) != '\0') && ((*(char *)(gen_frame + 0xb4)) == '\x01')) {
                pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0xb0));
                *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
                if (*(int *)((int)pvVar1 + 0x54) < 1) {
                  F_0042c880(pvVar1);
                  F_00406ad0(pvVar1);
                }
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = (undefined4 *)0x0;
              (*(char *)(gen_frame + 0xb4)) = -1;
            }
            (*(uint * PTR32 *)(gen_frame + 0xa4)) = &(*(uint *)(gen_frame + 0xa0));
            (*(uint *)(gen_frame + 0xa0)) = 0;
            (*(uint *)(gen_frame + 0xa0)) = (uint)puVar4[6];
            (*(char *)(gen_frame + 0xa8)) = '\0';
            F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0xa0)));
            if ((*(uint * PTR32 *)(gen_frame + 0xa4)) != (uint *)0x0) {
              if (((*(char *)(gen_frame + 0xa8)) != '\0') && ((*(char *)(gen_frame + 0xa8)) == '\x01')) {
                pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xa4));
                *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
                if (*(int *)((int)pvVar1 + 0x54) < 1) {
                  F_0042c880(pvVar1);
                  F_00406ad0(pvVar1);
                }
              }
              (*(uint * PTR32 *)(gen_frame + 0xa4)) = (uint *)0x0;
              (*(char *)(gen_frame + 0xa8)) = -1;
            }
            (*(uint *)(gen_frame + 0x94)) = 0;
            (*(uint *)(gen_frame + 0x94)) = (uint)(byte)puVar4[7];
            (*(uint * PTR32 *)(gen_frame + 0x98)) = &(*(uint *)(gen_frame + 0x94));
            (*(char *)(gen_frame + 0x9c)) = '\0';
            F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x94)));
            if ((*(uint * PTR32 *)(gen_frame + 0x98)) != (uint *)0x0) {
              if (((*(char *)(gen_frame + 0x9c)) != '\0') && ((*(char *)(gen_frame + 0x9c)) == '\x01')) {
                pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x98));
                *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
                if (*(int *)((int)pvVar1 + 0x54) < 1) {
                  F_0042c880(pvVar1);
                  F_00406ad0(pvVar1);
                }
              }
              (*(uint * PTR32 *)(gen_frame + 0x98)) = (uint *)0x0;
              (*(char *)(gen_frame + 0x9c)) = -1;
            }
            F_0042aca0(((undefined1 *)(gen_frame + 0x40)));
            F_00ab3200(0x18fef,&(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x40)));
            F_0048a040(&(*(undefined1 * PTR32 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x40)));
            *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x22c) + 0x23) * 0x10))) = uVar2;
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x22c) * 0x10 + 0x234))) =
                 *(undefined4 *)puVar4;
            *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x22c) * 0x10 + 0x238))) =
                 (uint)puVar4[6];
            *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x22c) * 0x10 + 0x23c))) =
                 (uint)(byte)puVar4[7];
            *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x22c) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x22c) + 1;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        if (0x6f < uVar8) break;
      }
    }
    (*(ushort * PTR32 *)(gen_frame + 0x28)) = (*(ushort * PTR32 *)(gen_frame + 0x28)) + 1;
    iVar5 = (*(int *)(gen_frame + 0x2c)) + -1;
    (*(int *)(gen_frame + 0x2c)) = iVar5;
  } while (iVar5 != 0);
  F_0042aca0(((undefined1 *)(gen_frame + 0x40)));
  F_00ab3200(0x18ff0,&(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x40)));
  if ((((undefined1 *)(gen_frame + 0x40)) < (*(undefined1 * PTR32 *)(gen_frame + 0x34))) && ((*(undefined1 * PTR32 *)(gen_frame + 0x30)) <= ((undefined1 *)(gen_frame + 0x40)))) {
    iVar5 = (int)((undefined1 *)(gen_frame + 0x40)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x30));
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x34)) == (*(undefined1 * PTR32 *)(gen_frame + 0x38))) {
      F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x30)),1);
    }
    puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x30));
    puVar9 = (*(undefined1 * PTR32 *)(gen_frame + 0x34));
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x34)) == (undefined1 *)0x0) goto LAB_00718cca;
    puVar7 = (*(undefined1 * PTR32 *)(gen_frame + 0x30)) + (iVar5 / 0x54) * 0x54;
  }
  else {
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x34)) == (*(undefined1 * PTR32 *)(gen_frame + 0x38))) {
      F_00488ca0(&(*(undefined1 * PTR32 *)(gen_frame + 0x30)),1);
    }
    puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x30));
    puVar9 = (*(undefined1 * PTR32 *)(gen_frame + 0x34));
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x34)) == (undefined1 *)0x0) goto LAB_00718cca;
    puVar7 = ((undefined1 *)(gen_frame + 0x40));
  }
  puVar9 = (*(undefined1 * PTR32 *)(gen_frame + 0x34));
  puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x30));
  F_0042cbc0((*(undefined1 * PTR32 *)(gen_frame + 0x34)),puVar7);
LAB_00718cca: ;
  (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = puVar9 + 0x54;
  F_0042aca0(((undefined1 *)(gen_frame + 0x40)));
  F_00ab0230(0x18fee,((undefined1 *)(gen_frame + 0x40)));
  F_00711100(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4),(*(undefined * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x40)),&(*(undefined1 * PTR32 *)(gen_frame + 0x30)),1);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x40)));
  puVar7 = puVar6;
  if (puVar6 != (undefined1 *)0x0) {
    for (; puVar7 != puVar9 + 0x54; puVar7 = puVar7 + 0x54) {
      F_0042c880(puVar7);
    }
    F_00429760(puVar6,(((int)(*(undefined1 * PTR32 *)(gen_frame + 0x38)) - (int)puVar6) / 0x54) * 0x54,0x35);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 1;
}

/* ref: FUN_00718d90 */
uint F_00718d90(unsigned int gen_a0)
{
  GEN_ENTER(0x718d90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_00718930((undefined *)*puVar3);
    if (bVar1 != 0) {
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_00718e00 */
uint F_00718e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x718e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323780);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323780));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetChocoboTaxiStandId",((code *)REFP(0x6d4680)));
    F_00a01cc0(param_1,iVar5,"GetFare",((code *)REFP(0x6d46e0)));
    F_00a01cc0(param_1,iVar5,"ChocoboTaxiMenu",((code *)REFP(0x718d90)));
    F_00a01c80(param_1,iVar5,"HOWTO_ABOUT_CHOCOBO_TAXI",0x53);
    F_00a01c80(param_1,iVar5,"LOGMSG_CHOCOBO_SUMMON_FAIL_FOR_BUDDY",0x539);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323784),REFG(undefined * PTR32, 0x1323780),0);
  return 1;
}

/* ref: FUN_00718ff0 */
uint F_00718ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x718ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  int * this_00;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  this_00 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  uVar2 = F_006e4240((undefined *)((int)this + 0xc4),*(undefined4 *)((int)this + 0x1e4),param_1);
  uVar5 = 0;
  if (uVar2 != 0) {
    param_1[0x5d] = uVar2;
  }
  uVar2 = param_1[0x20];
  ((uint *)(gen_frame + 0x0))[1] = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x7c);
  param_1 = (int *)0x0;
  F_005d4e70();
  F_00ae2460(this_00);
  uVar3 = *(byte *)((int)this_00 + 0x8a) - 2;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if (param_2 == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 4) != 0) {
      uVar2 = F_006eb2d0((*(undefined * PTR32 *)(gen_frame + 0x88)),*(int *)(param_2 + 4),this_00);
      ((uint *)(gen_frame + 0x0))[1] = uVar2;
      if (uVar2 != 0) {
        param_1 = (int *)0x1;
      }
      goto LAB_007190df;
    }
    break;
  case 1: ;
    if (param_2 == 0) {
      return uVar3;
    }
    uVar2 = 0;
    do {
      iVar1 = *(int *)(param_2 + uVar2 * 4);
      if (iVar1 != 0) {
        uVar3 = F_006eb2d0((*(undefined * PTR32 *)(gen_frame + 0x88)),iVar1,this_00);
        *(uint *)(((undefined1 *)(gen_frame + 0x8)) + uVar5 * 4 + -4) = uVar3;
        if (uVar3 != 0) {
          uVar5 = uVar5 + 1;
        }
      }
      uVar2 = uVar2 + 1;
      param_1 = (int *)uVar5;
    } while (uVar2 < 0x20);
    break;
  case 3: ;
    uVar3 = uVar2 & 0xffff | 0x50000;
    uVar5 = F_006eb2d0((*(undefined * PTR32 *)(gen_frame + 0x88)),uVar3,this_00);
    if (uVar5 != 0) {
      if (this_00[0x60] == 0) {
        this_00[0x60] = uVar5;
      }
      else {
        F_006e5450((*(undefined * PTR32 *)(gen_frame + 0x88)),uVar3,this_00);
      }
    }
    uVar2 = F_00ab2690(uVar2);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 0x20) != 0)) {
      uVar2 = F_006eb2d0((*(undefined * PTR32 *)(gen_frame + 0x88)),*(int *)(uVar2 + 0x20),this_00);
      ((uint *)(gen_frame + 0x0))[1] = uVar2;
      if (uVar2 != 0) {
        param_1 = (int *)0x1;
      }
      goto LAB_007190df;
    }
    break;
  case 4: ;
    uVar5 = uVar2 & 0xffff | 0x30000;
    pvVar4 = (undefined *)F_006eb2d0((*(undefined * PTR32 *)(gen_frame + 0x88)),uVar5,this_00);
    (*(undefined * PTR32 *)(gen_frame + 0x84)) = pvVar4;
    if (pvVar4 != (undefined *)0x0) {
      if (*(int *)(this_00[0x6a] + 4) == 0) {
        F_00ae0fc0((undefined *)this_00[0x6a],pvVar4);
        F_00715890((*(undefined * PTR32 *)(gen_frame + 0x84)),uVar2,param_2,this_00);
      }
      else {
        F_006e5450((*(undefined * PTR32 *)(gen_frame + 0x88)),uVar5,this_00);
      }
    }
    break;
  case 5: ;
    uVar2 = F_00ab2470(uVar2);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
      uVar2 = F_006eb2d0((*(undefined * PTR32 *)(gen_frame + 0x88)),*(int *)(uVar2 + 0x10),this_00);
      ((uint *)(gen_frame + 0x0))[1] = uVar2;
      if (uVar2 != 0) {
        param_1 = (int *)0x1;
      }
      goto LAB_007190df;
    }
  }
LAB_007190df: ;
  uVar2 = ((uint *)(gen_frame + 0x0))[1];
  uVar5 = ((code *)*(gen_code32 *)(*this_00 + 0xb8))(this_00);
  if ((char)uVar5 == '\0') {
    if (uVar2 != 0) {
      if (this_00[0x5e] == 0) {
        this_00[0x5e] = uVar2;
      }
      else {
        F_006e5450((*(undefined * PTR32 *)(gen_frame + 0x88)),*(undefined4 *)(uVar2 + 8),this_00);
      }
    }
  }
  else {
    pvVar4 = (undefined *)F_00a5f290(this_00);
    uVar2 = 0;
    if (param_1 != (int *)0x0) {
      do {
        iVar1 = *(int *)(((undefined1 *)(gen_frame + 0x8)) + uVar2 * 4 + -4);
        uVar5 = F_00aa0e00(pvVar4,iVar1);
        if ((int)uVar5 < 0) {
          F_006e5450((*(undefined * PTR32 *)(gen_frame + 0x88)),*(undefined4 *)(iVar1 + 8),pvVar4);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_1);
    }
  }
  uVar5 = ((code *)*(gen_code32 *)(*this_00 + 4))(this_00);
  uVar2 = 1;
  if (uVar5 != 1) {
    uVar5 = F_00a5f3d0(this_00,((uint *)(gen_frame + 0x0)));
    uVar3 = 0;
    uVar2 = 0;
    if (uVar5 != 0) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)((uint *)(gen_frame + 0x0))[(int)(uVar3)] + 8))((int *)((uint *)(gen_frame + 0x0))[(int)(uVar3)]);
        if ((char)uVar2 != '\0') {
          uVar2 = ((code *)*(gen_code32 *)(*(int *)((uint *)(gen_frame + 0x0))[(int)(uVar3)] + 0xb0))((int *)((uint *)(gen_frame + 0x0))[(int)(uVar3)],this_00);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
  }
  return uVar2;
}

/* ref: FUN_007192e0 */
uint F_007192e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7192e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  ulonglong uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00710e70(this,param_1,param_2,&(*(int * PTR32 *)(gen_frame + 0x4)),param_3,param_4,param_5,param_6,param_7);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  uVar2 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_00719370 */
uint F_00719370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x719370u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  char * pcVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar2 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323700));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar3 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar3 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar6 = uVar2 + 2;
    F_00a01c40(param_1,iVar6,"className",puVar1);
    F_00a01c80(param_1,iVar6,"referenceCount",1);
    F_00a01cc0(param_1,iVar6,"AddNestEventHandler",((code *)REFP(0x6edac0)));
    F_00a01cc0(param_1,iVar6,"SystemTalk",((code *)REFP(0x6b9ee0)));
    F_00a01cc0(param_1,iVar6,&REFG(undefined, 0x10b4f2c),((code *)REFP(0x6b9f20)));
    F_00a01cc0(param_1,iVar6,"YesNo",((code *)REFP(0x6b9f40)));
    F_00a01cc0(param_1,iVar6,"YesNoCount",((code *)REFP(0x6b9f60)));
    F_00a01cc0(param_1,iVar6,"YesNoCheck",((code *)REFP(0x6b9f80)));
    F_00a01cc0(param_1,iVar6,"YesNoAddon",((code *)REFP(0x6b9fa0)));
    F_00a01cc0(param_1,iVar6,&REFG(undefined, 0x10b4f5c),((code *)REFP(0x6b9fc0)));
    F_00a01cc0(param_1,iVar6,&REFG(undefined, 0x10b4f64),((code *)REFP(0x6b9fe0)));
    F_00a01cc0(param_1,iVar6,"Letter",((code *)REFP(0x6ba000)));
    F_00a01cc0(param_1,iVar6,"NpcTrade",((code *)REFP(0x6ba0a0)));
    F_00a01cc0(param_1,iVar6,"CancelNpcTrade",((code *)REFP(0x6ba0c0)));
    F_00a01cc0(param_1,iVar6,&REFG(undefined, 0x10b4f90),((code *)REFP(0x6ba6b0)));
    F_00a01cc0(param_1,iVar6,"CreateCharacter",((code *)REFP(0x6ba6d0)));
    F_00a01cc0(param_1,iVar6,"CreateObject",((code *)REFP(0x6ba6f0)));
    F_00a01cc0(param_1,iVar6,"BindCharacter",((code *)REFP(0x6ba710)));
    F_00a01cc0(param_1,iVar6,"BindRetainer",((code *)REFP(0x6ba730)));
    F_00a01cc0(param_1,iVar6,"PlayCamera",((code *)REFP(0x6ba750)));
    F_00a01cc0(param_1,iVar6,"UpdownPan",((code *)REFP(0x6ba770)));
    F_00a01cc0(param_1,iVar6,"SidePan",((code *)REFP(0x6ba790)));
    F_00a01cc0(param_1,iVar6,"WaitForPan",((code *)REFP(0x6ba7b0)));
    F_00a01cc0(param_1,iVar6,"UpdownDolly",((code *)REFP(0x6ba910)));
    F_00a01cc0(param_1,iVar6,"SideDolly",((code *)REFP(0x6ba930)));
    F_00a01cc0(param_1,iVar6,"WaitForDolly",((code *)REFP(0x6ba950)));
    F_00a01cc0(param_1,iVar6,"FollowLookAt",((code *)REFP(0x6ba9b0)));
    F_00a01cc0(param_1,iVar6,&REFG(undefined, 0x10b503c),((code *)REFP(0x6ba970)));
    F_00a01cc0(param_1,iVar6,"WaitForZoom",((code *)REFP(0x6ba990)));
    F_00a01cc0(param_1,iVar6,"PlayTwoShotCamera",((code *)REFP(0x6ba7d0)));
    F_00a01cc0(param_1,iVar6,"FadeIn",((code *)REFP(0x6ba810)));
    F_00a01cc0(param_1,iVar6,"FadeOut",((code *)REFP(0x6ba830)));
    F_00a01cc0(param_1,iVar6,"WaitForFade",((code *)REFP(0x6ba850)));
    F_00a01cc0(param_1,iVar6,"LoadMovePosition",((code *)REFP(0x6ba870)));
    F_00a01cc0(param_1,iVar6,"PlayCutScene",((code *)REFP(0x6ba890)));
    F_00a01cc0(param_1,iVar6,"Prompt",((code *)REFP(0x6ba240)));
    F_00a01cc0(param_1,iVar6,"PromptOld",((code *)REFP(0x6ba260)));
    F_00a01cc0(param_1,iVar6,&REFG(undefined, 0x10b50b8),((code *)REFP(0x6ba9d0)));
    F_00a01cc0(param_1,iVar6,"WaitForGyro",((code *)REFP(0x6ba9f0)));
    F_00a01cc0(param_1,iVar6,"PlayScreenShake",((code *)REFP(0x6baa10)));
    F_00a01cc0(param_1,iVar6,"StopScreenShake",((code *)REFP(0x6baa30)));
    F_00a01cc0(param_1,iVar6,"PlayHandShake",((code *)REFP(0x6baa50)));
    F_00a01cc0(param_1,iVar6,"StopHandShake",((code *)REFP(0x6baa70)));
    F_00a01cc0(param_1,iVar6,"PlayBGM",((code *)REFP(0x6baa90)));
    F_00a01cc0(param_1,iVar6,"PlaySE",((code *)REFP(0x6baab0)));
    F_00a01cc0(param_1,iVar6,"FormatString",((code *)REFP(0x714620)));
    F_00a01cc0(param_1,iVar6,"NpcRepair",((code *)REFP(0x6ba280)));
    F_00a01cc0(param_1,iVar6,"CompanyChest",((code *)REFP(0x6ba2c0)));
    F_00a01cc0(param_1,iVar6,"FreeCompanyExchange",((code *)REFP(0x6ba2e0)));
    F_00a01cc0(param_1,iVar6,"FreeCompanyCrestEditor",((code *)REFP(0x6ba300)));
    F_00a01cc0(param_1,iVar6,"FreeCompanyCrestDecal",((code *)REFP(0x6ba320)));
    F_00a01cc0(param_1,iVar6,"Materialize",((code *)REFP(0x6ba340)));
    F_00a01cc0(param_1,iVar6,"SuspendedMateriaExchange",((code *)REFP(0x6ba360)));
    F_00a01cc0(param_1,iVar6,"SuspendedMateriaSell",((code *)REFP(0x6ba380)));
    F_00a01cc0(param_1,iVar6,"LegacyItemStorage",((code *)REFP(0x6ba3a0)));
    F_00a01cc0(param_1,iVar6,"Cabinet",((code *)REFP(0x6ba3c0)));
    F_00a01cc0(param_1,iVar6,"RetainerBag",((code *)REFP(0x6ba3e0)));
    F_00a01cc0(param_1,iVar6,"ItemSearchWidget",((code *)REFP(0x6ba400)));
    F_00a01cc0(param_1,iVar6,"HowTo",((code *)REFP(0x6ba420)));
    F_00a01cc0(param_1,iVar6,"CloseHowTo",((code *)REFP(0x6ba440)));
    F_00a01cc0(param_1,iVar6,"ScreenImage",((code *)REFP(0x6ba1e0)));
    F_00a01cc0(param_1,iVar6,"LearningAction",((code *)REFP(0x6ba200)));
    F_00a01cc0(param_1,iVar6,&REFG(undefined, 0x10b5238),((code *)REFP(0x6baaf0)));
    F_00a01cc0(param_1,iVar6,"ResetSkip",((code *)REFP(0x6bab10)));
    F_00a01cc0(param_1,iVar6,"NotifyMainCommand",((code *)REFP(0x6ba460)));
    F_00a01cc0(param_1,iVar6,"Logout",((code *)REFP(0x6bab30)));
    F_00a01cc0(param_1,iVar6,"Shutdown",((code *)REFP(0x6bab50)));
    F_00a01cc0(param_1,iVar6,"IconMenu",((code *)REFP(0x6ba480)));
    F_00a01cc0(param_1,iVar6,"ScenarioMessage",((code *)REFP(0x6ba4a0)));
    F_00a01cc0(param_1,iVar6,"LogMessage",((code *)REFP(0x6ba4c0)));
    F_00a01cc0(param_1,iVar6,"BattleTalk",((code *)REFP(0x6ba220)));
    F_00a01cc0(param_1,iVar6,"BeginCutScene",((code *)REFP(0x6bab70)));
    F_00a01cc0(param_1,iVar6,"EndCutScene",((code *)REFP(0x6bab90)));
    F_00a01cc0(param_1,iVar6,"InvisibleStandCharacter",((code *)REFP(0x6babb0)));
    F_00a01cc0(param_1,iVar6,"PlayLandscopeCamera",((code *)REFP(0x6ba7f0)));
    F_00a01cc0(param_1,iVar6,"ChangeBGMVolume",((code *)REFP(0x6baad0)));
    F_00a01cc0(param_1,iVar6,(*(undefined * PTR32 (*)[1])REFP(0x10b5300)),((code *)REFP(0x6babd0)));
    F_00a01cc0(param_1,iVar6,"Weather",((code *)REFP(0x6babf0)));
    F_00a01cc0(param_1,iVar6,"WorldTime",((code *)REFP(0x6bac10)));
    F_00a01cc0(param_1,iVar6,"ContinueBattleBGM",((code *)REFP(0x6bac30)));
    F_00a01cc0(param_1,iVar6,"ContinueEventBGM",((code *)REFP(0x6bac50)));
    F_00a01cc0(param_1,iVar6,"SetPadMode",((code *)REFP(0x6bac70)));
    F_00a01cc0(param_1,iVar6,"ScreenGC",((code *)REFP(0x6ba4e0)));
    F_00a01cc0(param_1,iVar6,"Inventory",((code *)REFP(0x6ba500)));
    F_00a01cc0(param_1,iVar6,"CloseInventory",((code *)REFP(0x6ba520)));
    F_00a01cc0(param_1,iVar6,"CancelEventScene",((code *)REFP(0x6bac90)));
    F_00a01cc0(param_1,iVar6,"GrandCompanyRankUp",((code *)REFP(0x6ba540)));
    F_00a01cc0(param_1,iVar6,"SetNpcTradeItem",((code *)REFP(0x6ba0e0)));
    F_00a01cc0(param_1,iVar6,"FCOrganizeSheet",((code *)REFP(0x6ba020)));
    F_00a01cc0(param_1,iVar6,"GCSupply",((code *)REFP(0x6ba040)));
    F_00a01cc0(param_1,iVar6,"GCSupplyReward",((code *)REFP(0x6ba060)));
    F_00a01cc0(param_1,iVar6,"InputNumeric",((code *)REFP(0x6ba080)));
    F_00a01cc0(param_1,iVar6,"GetInfoLogMessageId",((code *)REFP(0x6cdbc0)));
    F_00a01cc0(param_1,iVar6,"GrandCompanyAssignment",((code *)REFP(0x6cdc30)));
    F_00a01cc0(param_1,iVar6,"GetTerritoryType",((code *)REFP(0x6cdce0)));
    F_00a01cc0(param_1,iVar6,"SetMyChocoboName",((code *)REFP(0x6cdd20)));
    F_00a01cc0(param_1,iVar6,"MakeRetainer",((code *)REFP(0x6bacb0)));
    F_00a01cc0(param_1,iVar6,"Dismount",((code *)REFP(0x6cdda0)));
    F_00a01cc0(param_1,iVar6,"CheckInnCondition",((code *)REFP(0x6bd420)));
    F_00a01cc0(param_1,iVar6,"PlayStaffRoll",((code *)REFP(0x6ba8b0)));
    F_00a01cc0(param_1,iVar6,"PlayToBeContinued",((code *)REFP(0x6ba8d0)));
    F_00a01cc0(param_1,iVar6,"CutSceneReplay",((code *)REFP(0x6ba2a0)));
    F_00a01cc0(param_1,iVar6,"BeginCutSceneReplay",((code *)REFP(0x6ba8f0)));
    F_00a01cc0(param_1,iVar6,"ContentFinder",((code *)REFP(0x6ba560)));
    uVar2 = F_00ab01c0();
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        puVar4 = (uint *)F_00ab3140(uVar3);
        if ((puVar4 != (uint *)0x0) &&
           (pcVar5 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4))), *pcVar5 != '\0')) {
          F_00a01c80(param_1,iVar6,pcVar5,puVar4[1]);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    F_00a01c80(param_1,iVar6,"UI_RESULT_SYSTEM_CLOSED",0xfffffffe);
    F_00a01c80(param_1,iVar6,"UI_RESULT_CLOSED",0xffffffff);
    F_00a01c80(param_1,iVar6,"UI_RESULT_OK",0);
    F_00a01c80(param_1,iVar6,"UI_RESULT_CANCEL",1);
    F_00a01c80(param_1,iVar6,"UI_RESULT_YES",0);
    F_00a01c80(param_1,iVar6,"UI_RESULT_NO",1);
    F_00a01c80(param_1,iVar6,"DIRECTOR_TYPE_LEVE_BATTLE",0x8001);
    F_00a01c80(param_1,iVar6,"DIRECTOR_TYPE_LEVE_GATHERING",0x8002);
    F_00a01c80(param_1,iVar6,"EXD_EVENT_NEST",7);
    F_00a01c80(param_1,iVar6,"ARRANGE_TYPE_FRONT",0);
    F_00a01c80(param_1,iVar6,"ARRANGE_TYPE_BACK",1);
    F_00a01c80(param_1,iVar6,"ARRANGE_TYPE_RIGHT",2);
    F_00a01c80(param_1,iVar6,"ARRANGE_TYPE_LEFT",3);
    F_00a01c80(param_1,iVar6,"ARRANGE_TYPE_BASE_FRONT",4);
    F_00a01c80(param_1,iVar6,"TWOSHOT_TYPE_FRONT",0);
    F_00a01c80(param_1,iVar6,"TWOSHOT_TYPE_RIGHT_45",1);
    F_00a01c80(param_1,iVar6,"TWOSHOT_TYPE_LEFT_45",2);
    F_00a01c80(param_1,iVar6,"TWOSHOT_TYPE_RIGHT_70",3);
    F_00a01c80(param_1,iVar6,"TWOSHOT_TYPE_LEFT_70",4);
    F_00a01c80(param_1,iVar6,"TWOSHOT_TYPE_RIGHT_ZOOM",5);
    F_00a01c80(param_1,iVar6,"TWOSHOT_TYPE_LEFT_ZOOM",6);
    F_00a01c80(param_1,iVar6,"TRANS_TYPE_FADE_IN",0);
    F_00a01c80(param_1,iVar6,"TRANS_TYPE_FADE_OUT",1);
    F_00a01c80(param_1,iVar6,"TRANS_TYPE_SHOW",2);
    F_00a01c80(param_1,iVar6,"TRANS_TYPE_HIDE",3);
    F_00a01c80(param_1,iVar6,"DOF_TYPE_NONE",0);
    F_00a01c80(param_1,iVar6,"DOF_TYPE_TWOSHOT",1);
    F_00a01c80(param_1,iVar6,"DOF_TYPE_MIDDLESHOT",2);
    F_00a01c80(param_1,iVar6,"LIP_TYPE_NONE",0);
    F_00a01c80(param_1,iVar6,"LIP_TYPE_AUTO",1);
    F_00a01c80(param_1,iVar6,"LIP_TYPE_SHORT",2);
    F_00a01c80(param_1,iVar6,"LIP_TYPE_MIDDLE",3);
    F_00a01c80(param_1,iVar6,"LIP_TYPE_LONG",4);
    F_00a01c80(param_1,iVar6,"ROLLBACK_POSITION",0);
    F_00a01c80(param_1,iVar6,"ROLLBACK_DIRECTION",1);
    F_00a01c80(param_1,iVar6,"ROLLBACK_IDLE",2);
    F_00a01c80(param_1,iVar6,"ROLLBACK_LOOKAT",3);
    F_00a01c80(param_1,iVar6,"ROLLBACK_ACTIONTIMELINE",4);
    F_00a01c80(param_1,iVar6,"ROLLBACK_SGTIMELINE",5);
    F_00a01c80(param_1,iVar6,"AUTO_SHAKE_DISABLE",0);
    F_00a01c80(param_1,iVar6,"AUTO_SHAKE_ENABLE",1);
    F_00a01c80(param_1,iVar6,"SKIP_NCUT",0);
    F_00a01c80(param_1,iVar6,"SKIP_FINALIZE_AUTO_FADEIN",1);
    F_00a01c80(param_1,iVar6,"SPEAK_NONE",0);
    F_00a01c80(param_1,iVar6,"SPEAK_WHISPER_SHORT",0x272);
    F_00a01c80(param_1,iVar6,"SPEAK_WHISPER_MIDDLE",0x273);
    F_00a01c80(param_1,iVar6,"SPEAK_WHISPER_LONG",0x274);
    F_00a01c80(param_1,iVar6,"SPEAK_NORMAL_SHORT",0x275);
    F_00a01c80(param_1,iVar6,"SPEAK_NORMAL_MIDDLE",0x276);
    F_00a01c80(param_1,iVar6,"SPEAK_NORMAL_LONG",0x277);
    F_00a01c80(param_1,iVar6,"SPEAK_SHOUT_SHORT",0x278);
    F_00a01c80(param_1,iVar6,"SPEAK_SHOUT_MIDDLE",0x279);
    F_00a01c80(param_1,iVar6,"SPEAK_SHOUT_LONG",0x27a);
    F_00a01c80(param_1,iVar6,"SHARED_GROUP_TIMELINE_STATE_0",1);
    F_00a01c80(param_1,iVar6,"SHARED_GROUP_TIMELINE_STATE_1",2);
    F_00a01c80(param_1,iVar6,"SHARED_GROUP_TIMELINE_STATE_2",4);
    F_00a01c80(param_1,iVar6,"SHARED_GROUP_TIMELINE_STATE_3",8);
    F_00a01c80(param_1,iVar6,"SHARED_GROUP_TIMELINE_STATE_4",0x10);
    F_00a01c80(param_1,iVar6,"SHARED_GROUP_TIMELINE_STATE_5",0x20);
    F_00a01c80(param_1,iVar6,"EVENT_ICON_PRIORITY_MIN",1);
    F_00a01c80(param_1,iVar6,"INVALID_EVENT_HANDLER_ID",0);
    F_00a01c80(param_1,iVar6,"INVALID_CUT_SCENE_ID",0);
    F_00a01c80(param_1,iVar6,"INVALID_BASE_ID",0);
    F_00a01c80(param_1,iVar6,"INVALID_LAYOUT_ID",0);
    F_00a01c80(param_1,iVar6,"INVALID_LAYER_SET_ID",0);
    F_00a01c80(param_1,iVar6,"INVALID_GRAND_COMPANY_ID",0);
    F_00a01c80(param_1,iVar6,"EXIT_RANGE_EVENT_HANDLER_ID",0x140001);
    F_00a01c80(param_1,iVar6,"CUT_SKIP_ENABLE",0);
    F_00a01c80(param_1,iVar6,"CUT_SKIP_DISABLE",1);
    F_00a01c80(param_1,iVar6,"EQUIP_TYPE_WEAPON",0);
    F_00a01c80(param_1,iVar6,"EQUIP_TYPE_ARMOR",1);
    F_00a01c80(param_1,iVar6,"EQUIP_TYPE_ACCESSORY",2);
    F_00a01c80(param_1,iVar6,"WEAPON_SLOT_MAIN",0);
    F_00a01c80(param_1,iVar6,"WEAPON_SLOT_SUB",1);
    F_00a01c80(param_1,iVar6,"ARMOR_SLOT_HEAD",0);
    F_00a01c80(param_1,iVar6,"ARMOR_SLOT_BODY",1);
    F_00a01c80(param_1,iVar6,"ARMOR_SLOT_HAND",2);
    F_00a01c80(param_1,iVar6,"ARMOR_SLOT_LEG",3);
    F_00a01c80(param_1,iVar6,"ARMOR_SLOT_FOOT",4);
    F_00a01c80(param_1,iVar6,"ACCESSORY_SLOT_EAR",5);
    F_00a01c80(param_1,iVar6,"ACCESSORY_SLOT_NECK",6);
    F_00a01c80(param_1,iVar6,"ACCESSORY_SLOT_WRIST",7);
    F_00a01c80(param_1,iVar6,"ACCESSORY_SLOT_R_FINGER",8);
    F_00a01c80(param_1,iVar6,"ACCESSORY_SLOT_L_FINGER",9);
    F_00a01c80(param_1,iVar6,"JINGLE_GC_IN_GRI",0x18);
    F_00a01c80(param_1,iVar6,"JINGLE_GC_IN_LIM",0x17);
    F_00a01c80(param_1,iVar6,"JINGLE_GC_IN_URU",0x19);
    F_00a01c80(param_1,iVar6,"JINGLE_GC_UP_GRI",0x1b);
    F_00a01c80(param_1,iVar6,"JINGLE_GC_UP_LIM",0x1a);
    F_00a01c80(param_1,iVar6,"JINGLE_GC_UP_URU",0x1c);
    F_00a01c80(param_1,iVar6,"GEN_LPANY",0);
    F_00a01c80(param_1,iVar6,"GEN_LPANY",1);
    F_00a01c80(param_1,iVar6,"GEN_LPANY",2);
    F_00a01c80(param_1,iVar6,"GEN_LPANY",0);
    F_00a01c80(param_1,iVar6,"GEN_LPANY",1);
    F_00a01c80(param_1,iVar6,"GEN_LPANY",(uint)REFG(undefined2, 0x10be21c));
    F_00a01c80(param_1,iVar6,"GEN_LPANY",(uint)REFG(undefined2, 0x10be31c));
    F_00a01c80(param_1,iVar6,"GEN_LPANY",(uint)REFG(undefined2, 0x10be324));
    F_00a01c80(param_1,iVar6,"GEN_LPANY",(uint)REFG(undefined2, 0x10be328));
    F_00a01c80(param_1,iVar6,"GEN_LPANY",(uint)REFG(undefined2, 0x10be32c));
    F_00a01c80(param_1,iVar6,"GEN_LPANY",(uint)REFG(undefined2, 0x10be320));
    F_00a01c80(param_1,iVar6,"GEN_LPANY",(uint)REFG(undefined2, 0x10be330));
    F_00a01c80(param_1,iVar6,"WARP_TYPE_NORMAL",1);
    F_00a01c80(param_1,iVar6,"WARP_TYPE_RENTAL_CHOCOBO",9);
    F_00a01c80(param_1,iVar6,"WARP_TYPE_CHOCOBO_TAXI",10);
    F_00a01c80(param_1,iVar6,"WARP_TYPE_TOWN_TRANSLATE",0xe);
    F_00a01c80(param_1,iVar6,"ENV_SOUND_CONTROL_TYPE_NONE",0);
    F_00a01c80(param_1,iVar6,"ENV_SOUND_CONTROL_TYPE_MUTE",1);
    F_00a01c80(param_1,iVar6,"ENV_SOUND_CONTROL_TYPE_RESUME",2);
    F_00a01c80(param_1,iVar6,"DEFAULT_YES",0);
    F_00a01c80(param_1,iVar6,"DEFAULT_NO",1);
    F_00a01c80(param_1,iVar6,"ACTION_KIND_NORMAL",1);
    F_00a01c80(param_1,iVar6,"ACTION_KIND_GENERAL",5);
    F_00a01c80(param_1,iVar6,"ACTION_KIND_COMPANION",8);
    F_00a01c80(param_1,iVar6,"ACTION_KIND_PET",0xb);
    F_00a01c80(param_1,iVar6,"ACTION_KIND_BUDDY",6);
    F_00a01c80(param_1,iVar6,"NUM_OF_ITEMS_FILTER_NQ",0);
    F_00a01c80(param_1,iVar6,"NUM_OF_ITEMS_FILTER_HQ",1);
    F_00a01c80(param_1,iVar6,"NUM_OF_ITEMS_FILTER_NQ_OR_HQ",2);
    F_00a01c80(param_1,iVar6,"NUM_OF_ITEMS_FILTER_NQ_AND_HQ",3);
    uVar2 = 0;
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,"SHARED_GROUP_TIMELINE_%u",uVar2);
      F_00a01c80(param_1,iVar6,((undefined1 *)(gen_frame + 0x8)),uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 6);
    F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar6);
    F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323704),REFG(undefined * PTR32, 0x1323700),0);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: FUN_0071a380 */
uint F_0071a380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71a380u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323708);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323708));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"GetAetheryteId",((code *)REFP(0x6cde10)));
    F_00a01cc0(param_1,iVar7,"IsFieldAetheryte",((code *)REFP(0x6cde60)));
    F_00a01cc0(param_1,iVar7,"IsTownAetheryte",((code *)REFP(0x6cdee0)));
    F_00a01cc0(param_1,iVar7,"IsAethernet",((code *)REFP(0x6cdf50)));
    F_00a01cc0(param_1,iVar7,"AetheryteMenu",((code *)REFP(0x714b90)));
    F_00a01cc0(param_1,iVar7,"OverrideFavoriteMenu",((code *)REFP(0x714f20)));
    F_00a01cc0(param_1,iVar7,"AethernetMenu",((code *)REFP(0x7155a0)));
    F_00a01cc0(param_1,iVar7,"GetAethernetTownId",((code *)REFP(0x6cdfb0)));
    F_00a01c80(param_1,iVar7,"AETHERYTE_MENU_AETHERNET",1);
    F_00a01c80(param_1,iVar7,"AETHERYTE_MENU_HOME_POINT",2);
    F_00a01c80(param_1,iVar7,"AETHERYTE_MENU_FAVORITE_POINT",3);
    F_00a01c80(param_1,iVar7,"INVALID_AETHERYTE_ID",0);
    F_00a01c80(param_1,iVar7,"MAX_FAVORITE_POINT",4);
    uVar3 = F_00aafe30();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab26c0(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132370c),REFG(undefined * PTR32, 0x1323708),0);
  return 1;
}

/* ref: FUN_0071a650 */
uint F_0071a650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71a650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar5 = (uint)REFG(undefined1, 0x14ab14f);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar3 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *puVar3 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar5 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar5 * 4) == 0) {
    uVar4 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar5 * 4) = uVar4;
  }
  pvVar2 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar5 * 4);
  if (pvVar2 != (undefined *)0x0) {
    F_00492f50(pvVar2,&(*(uint *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
    if (*(int *)((int)pvVar2 + 0x54) < 1) {
      F_0042c880(pvVar2);
      F_00406ad0(pvVar2);
    }
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x268) + 0x3c + param_1 * 4)));
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x268) + param_1 * 0xc)));
  F_00718590(this,(*puVar1 & 0xffffff) + (int)puVar1,GEN_TOF(&(*(undefined4 * PTR32 *)(gen_frame + 0x4))),*puVar3,puVar3[1],
               (uint)*(byte *)(puVar3 + 2));
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar6 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar6;
}

/* ref: FUN_0071a7a0 */
uint F_0071a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x71a7a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  if (this != (undefined *)0x0) {
    F_0071a650(this,uVar1);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf53 */
uint F_0071a810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71a810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 DVar1;
  uint uVar2;
  
  if (((param_1 != -2) && (param_1 != -1)) && (uVar2 = F_00716020(this), (char)uVar2 != '\0')) {
    return uVar2;
  }
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    DVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,DVar1);
    if (((byte)DVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)DVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_0071a860 */
uint F_0071a860(unsigned int gen_a0)
{
  GEN_ENTER(0x71a860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00716020(this);
  if (((char)uVar2 == '\0') && (uVar2 = 0xffff, *(short *)((int)this + 0x54) != -1)) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar2 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf24 */
uint F_0071a8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71a8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((short)param_2 == 7) {
    uVar1 = F_00717720(this,param_1);
    return uVar1;
  }
  uVar1 = F_006fe310(this);
  return uVar1;
}

/* ref: FUN_0071a8f0 */
uint F_0071a8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x71a8f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  F_007192e0(*(undefined * PTR32 *)(iVar1 + 4),iVar1,iVar1 + 0x264,iVar1 + 0x2b8,iVar1 + 0x30c,1,0,0);
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf159 */
uint F_0071a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71a960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint * puVar6;
  undefined3 extraout_var = 0;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined * pBVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  puVar1 = *(undefined4 * PTR32 *)(*param_1 + 4);
  puVar9 = puVar1;
  pBVar10 = this + 0x350;
  for (iVar8 = 0x6a; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pBVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    pBVar10 = pBVar10 + 4;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x4e8))) {
  case 5: ;
    iVar8 = *(int *)(this + 0x380);
    F_00718430(this,0,iVar8);
    if (this[0x4f6] == (undefined1)0x1) {
      uVar11 = 0x23;
LAB_0071a9c9: ;
      F_006c3af0(this,uVar11);
    }
    else if (this[0x4f6] == (undefined1)0x2) {
      uVar11 = 0x17;
      goto LAB_0071a9c9;
    }
    *(uint *)(this + 0x50c) = (iVar8 != 0) + 0x72d;
    break;
  default: ;
    if ((*(ushort *)(this + 0x4ec) != 0) &&
       (puVar6 = (uint *)F_00ab33c0((uint)*(ushort *)(this + 0x4ec)), puVar6 != (uint *)0x0)) {
      F_0042e430(this + 0x23c,(*puVar6 & 0xffffff) + (int)puVar6);
    }
    break;
  case 7: ;
    iVar8 = *(int *)(this + 0x380);
    uVar11 = *(undefined4 *)(this + 0x360);
    F_00718430(this,0,iVar8);
    if (iVar8 == 0) {
      *(undefined4 *)(this + 0x50c) = 0x72a;
    }
    else {
      F_004816e0(((undefined4 *)(gen_frame + 0xc)));
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined4 *)(gen_frame + 0x54)) = uVar11;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
      (*(undefined1 *)(gen_frame + 0x5c)) = 0;
      F_00493b50(((undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x54)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x54)));
      (*(int * PTR32 *)(gen_frame + 0x34)) = &(*(int *)(gen_frame + 0x30));
      (*(int *)(gen_frame + 0x30)) = 0;
      (*(int *)(gen_frame + 0x30)) = iVar8;
      (*(undefined1 *)(gen_frame + 0x38)) = 0;
      F_00493b50(((undefined4 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x30)));
      F_004917c0(&(*(int *)(gen_frame + 0x30)));
      F_00718510(this,0x18,((undefined4 *)(gen_frame + 0xc)));
      *(undefined4 *)(this + 0x50c) = 0x72b;
      F_00493180(((undefined4 *)(gen_frame + 0xc)));
    }
    break;
  case 9: ;
    uVar11 = *(undefined4 *)(this + 0x360);
    F_00718430(this,0,uVar11);
    F_004816e0(((undefined4 *)(gen_frame + 0xc)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = uVar11;
    (*(undefined1 *)(gen_frame + 0x74)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x6c)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x6c)));
    F_00718510(this,0x19,((undefined4 *)(gen_frame + 0xc)));
    *(uint *)(this + 0x50c) = (*(int *)(this + 0x380) != 0) + 0x72f;
    F_00492c50(((undefined4 *)(gen_frame + 0xc)));
    F_00429760(((undefined4 *)(gen_frame + 0xc))[0],8,0x2c4);
    break;
  case 0xb: ;
    uVar11 = *(undefined4 *)(this + 0x390);
    uVar2 = *(undefined4 *)(this + 0x37c);
    uVar3 = *(undefined4 *)(this + 0x3c0);
    uVar4 = *(undefined4 *)(this + 0x3e0);
    F_004816e0(((undefined4 *)(gen_frame + 0xc)));
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = uVar3;
    (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = &(*(undefined4 *)(gen_frame + 0x60));
    (*(undefined1 *)(gen_frame + 0x68)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x60)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x60)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = &(*(undefined4 *)(gen_frame + 0x3c));
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = uVar4;
    (*(undefined1 *)(gen_frame + 0x44)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x3c)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x3c)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = &(*(undefined4 *)(gen_frame + 0x24));
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x24)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x24)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = &(*(undefined4 *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = uVar11;
    (*(undefined1 *)(gen_frame + 0x50)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x48)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x48)));
    if ((*(ushort *)(this + 0x4ec) != 0) &&
       (puVar6 = (uint *)F_00ab33c0((uint)*(ushort *)(this + 0x4ec)), puVar6 != (uint *)0x0)) {
      F_0042e430(this + 0x23c,(*puVar6 & 0xffffff) + (int)puVar6);
    }
    F_00718510(this,0x22,((undefined4 *)(gen_frame + 0xc)));
    F_00492c50(((undefined4 *)(gen_frame + 0xc)));
    F_00429760(((undefined4 *)(gen_frame + 0xc))[0],8,0x2c4);
  }
  puVar6 = (uint *)F_00ab3360(puVar1[0x66]);
  uVar7 = 0;
  if (puVar6 != (uint *)0x0) {
    F_0042e430(this + 0x118,(*puVar6 & 0xffffff) + (int)puVar6);
    bVar5 = F_006d8320((undefined *)this);
    uVar7 = CONCAT31(extraout_var,bVar5);
    if (bVar5 == 0) {
      F_006f6940(this);
      uVar7 = F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x1323754),(*puVar6 & 0xffffff) + (int)puVar6,0);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x34c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar7 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x34c) = 0;
  }
  *(undefined4 *)(this + 0x348) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar7;
}

/* ref: FUN_0071ad00 */
uint F_0071ad00(unsigned int gen_a0)
{
  GEN_ENTER(0x71ad00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[143])REFP(0x10bd6dc));
  if (*(int *)((int)this + 0x570) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x56c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x570));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x570);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x570) = 0;
    }
  }
  F_0074d8a0((undefined *)((int)this + 0x594));
  F_00752160((undefined *)((int)this + 0x584),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x588),
               *(undefined4 * PTR32 *)((int)this + 0x588));
  F_00429760(*(undefined4 *)((int)this + 0x588),0x104,800);
  iVar4 = *(int *)((int)this + 0x574);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x57c) - iVar4 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x574) = 0;
  *(undefined4 *)((int)this + 0x578) = 0;
  *(undefined4 *)((int)this + 0x57c) = 0;
  iVar4 = *(int *)((int)this + 0x558);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x560) - iVar4 >> 1) * 2,800);
  }
  *(undefined4 *)((int)this + 0x558) = 0;
  *(undefined4 *)((int)this + 0x55c) = 0;
  *(undefined4 *)((int)this + 0x560) = 0;
  F_00752000((undefined *)((int)this + 0x548),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x54c),
               *(undefined4 * PTR32 *)((int)this + 0x54c));
  F_00429760(*(undefined4 *)((int)this + 0x54c),0x2d0,800);
  if (*(int *)((int)this + 0x538) != 0) {
    F_0075ce80(*(int *)((int)this + 0x538),*(undefined4 *)((int)this + 0x53c),(int)this + 0x544,
                 (*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_00429760(*(int *)((int)this + 0x538),
                 *(int *)((int)this + 0x540) - *(int *)((int)this + 0x538) & 0xfffffff0,800);
  }
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  this_00 = (undefined *)((int)this + 0x520);
  iVar4 = 3;
  do {
    this_00 = (undefined *)((int)this_00 + -0xa8);
    F_0042c880(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0042c880((undefined *)((int)this + 0x1d4));
  uVar3 = F_006fd580(this);
  return uVar3;
}

/* ref: FUN_0071aec0 */
uint F_0071aec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71aec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323710);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323710));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"GuildleveAssignmentList",((code *)REFP(0x7017c0)));
    F_00a01cc0(param_1,iVar7,"LeveAccepted",((code *)REFP(0x6ba140)));
    F_00a01cc0(param_1,iVar7,"GuildleveAssignmentTalk",((code *)REFP(0x71a7a0)));
    F_00a01cc0(param_1,iVar7,"GuildleveRewardMenu",((code *)REFP(0x6e4700)));
    F_00a01cc0(param_1,iVar7,"HasNextReward",((code *)REFP(0x6d56b0)));
    F_00a01cc0(param_1,iVar7,"HaveAdditionalRewards",((code *)REFP(0x6d5730)));
    F_00a01cc0(param_1,iVar7,"GetRewardPenalty",((code *)REFP(0x6d5890)));
    F_00a01cc0(param_1,iVar7,"AdvanceReward",((code *)REFP(0x6ce1b0)));
    F_00a01cc0(param_1,iVar7,"ResetReward",((code *)REFP(0x6ce200)));
    F_00a01cc0(param_1,iVar7,"SetReward",((code *)REFP(0x6d5800)));
    F_00a01cc0(param_1,iVar7,"HaveCompanyLeve",((code *)REFP(0x6ce380)));
    F_00a01cc0(param_1,iVar7,"HaveMaelstromLeve",((code *)REFP(0x6ce3f0)));
    F_00a01cc0(param_1,iVar7,"HaveTwinAdderLeve",((code *)REFP(0x6ce440)));
    F_00a01cc0(param_1,iVar7,"HaveImmortalLeve",((code *)REFP(0x6ce490)));
    F_00a01cc0(param_1,iVar7,"LeveCompleted",((code *)REFP(0x6ba160)));
    F_00a01c80(param_1,iVar7,"GATHERING_LEVE_EVALUATION_RANK_C",3);
    F_00a01c80(param_1,iVar7,"GATHERING_LEVE_EVALUATION_RANK_A",5);
    F_00a01c80(param_1,iVar7,"GATHERING_LEVE_EVALUATION_RANK_B",4);
    F_00a01c80(param_1,iVar7,"GATHERING_LEVE_EVALUATION_RANK_D",2);
    F_00a01c80(param_1,iVar7,"GATHERING_LEVE_EVALUATION_RANK_E",1);
    F_00a01c80(param_1,iVar7,"GATHERING_LEVE_EVALUATION_RANK_NONE",0);
    F_00a01c80(param_1,iVar7,"EXD_HOWTO_CRAFT_LEVE_ACCEPT",0x43);
    F_00a01c80(param_1,iVar7,"EXD_HOWTO_GATHERING_LEVE_ACCEPT",0x45);
    F_00a01c80(param_1,iVar7,"TOP_MENU_CLOSE",0);
    F_00a01c80(param_1,iVar7,"TOP_MENU_BATTLE",1);
    F_00a01c80(param_1,iVar7,"TOP_MENU_GATHERING",2);
    F_00a01c80(param_1,iVar7,"TOP_MENU_CRAFT",3);
    F_00a01c80(param_1,iVar7,"TOP_MENU_FACTION",4);
    F_00a01c80(param_1,iVar7,"TOP_MENU_MAELSTROM",5);
    F_00a01c80(param_1,iVar7,"TOP_MENU_ORDER_OF_TWIN_ADDER",6);
    F_00a01c80(param_1,iVar7,"TOP_MENU_IMMORTAL_FLAMES",7);
    F_00a01c80(param_1,iVar7,"TOP_MEMU_GC_SUPPLY_DUTY",8);
    F_00a01c80(param_1,iVar7,"TOP_MENU_TUTORIAL",9);
    F_00a01c80(param_1,iVar7,"TOP_MENU_EXPLAIN",10);
    F_00a01c80(param_1,iVar7,"TOP_MENU_REWARD",0xb);
    uVar3 = F_00ab02a0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3300(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323714),REFG(undefined * PTR32, 0x1323710),0);
  return 1;
}

/* ref: FUN_0071b2f0 */
uint F_0071b2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71b2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 * puVar4;
  char * pcVar5;
  uint uVar6;
  
  iVar3 = *(int *)(*param_1 + 4);
  *(int *)((int)this + 0xf8) = iVar3;
  *(undefined1 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  pcVar5 = ((char *)GEN_TOP(((*(uint *)(iVar3 + 0x18) & 0xffffff) + iVar3 + 0x18)));
  if (((pcVar5 != (char *)0x0) && (cVar1 = *pcVar5, cVar1 != '\0')) && (cVar1 != '0')) {
    *(int *)((int)this + 0x104) = *(int *)((int)this + 0x104) + 1;
  }
  pcVar5 = ((char *)GEN_TOP(((*(uint *)(iVar3 + 0x1c) & 0xffffff) + iVar3 + 0x1c)));
  if (((pcVar5 != (char *)0x0) && (cVar1 = *pcVar5, cVar1 != '\0')) && (cVar1 != '0')) {
    *(int *)((int)this + 0x104) = *(int *)((int)this + 0x104) + 1;
  }
  pcVar5 = ((char *)GEN_TOP(((*(uint *)(iVar3 + 0x20) & 0xffffff) + iVar3 + 0x20)));
  if (((pcVar5 != (char *)0x0) && (cVar1 = *pcVar5, cVar1 != '\0')) && (cVar1 != '0')) {
    *(int *)((int)this + 0x104) = *(int *)((int)this + 0x104) + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0xfc);
  if (puVar4 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    *(undefined4 *)((int)this + 0xfc) = 0;
  }
  uVar6 = F_00716020(this);
  if (((char)uVar6 == '\0') && (uVar6 = 0xffff, *(short *)((int)this + 0x54) != -1)) {
    bVar2 = *(byte *)((int)this + 0x5c);
    uVar6 = CONCAT31(0xff,bVar2);
    if ((bVar2 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar2 | 4;
      uVar6 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    }
  }
  return uVar6;
}

/* ref: FUN_0071b3c0 */
uint F_0071b3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71b3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323738);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323738));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"IsQualified",((code *)REFP(0x6d1e40)));
    F_00a01cc0(param_1,iVar5,"IsGilQualified",((code *)REFP(0x6d1ec0)));
    F_00a01cc0(param_1,iVar5,"IsClassLevelQualified",((code *)REFP(0x6d1f60)));
    F_00a01cc0(param_1,iVar5,"IsQuestQualified",((code *)REFP(0x6d2050)));
    F_00a01cc0(param_1,iVar5,"IsRewardQualified",((code *)REFP(0x6d2100)));
    F_00a01cc0(param_1,iVar5,"GetGil",((code *)REFP(0x6d21b0)));
    F_00a01cc0(param_1,iVar5,"GetClassLevel",((code *)REFP(0x6d2200)));
    F_00a01cc0(param_1,iVar5,"GetQuest",((code *)REFP(0x6d2250)));
    F_00a01cc0(param_1,iVar5,"GetReward",((code *)REFP(0x6d22a0)));
    F_00a01cc0(param_1,iVar5,"GetReward",((code *)REFP(0x6d22a0)));
    F_00a01cc0(param_1,iVar5,"WarpYesNo",((code *)REFP(0x71a8f0)));
    F_00a01cc0(param_1,iVar5,"GetPreCutSceneId",((code *)REFP(0x6d22f0)));
    F_00a01cc0(param_1,iVar5,"GetPostCutSceneId",((code *)REFP(0x6d2340)));
    F_00a01cc0(param_1,iVar5,"IsPreCutSceneExist",((code *)REFP(0x6d2390)));
    F_00a01cc0(param_1,iVar5,"IsPostCutSceneExist",((code *)REFP(0x6d23f0)));
    F_00a01cc0(param_1,iVar5,"IsPopRangeOutOfTerritory",((code *)REFP(0x6d2450)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132373c),REFG(undefined * PTR32, 0x1323738),0);
  return 1;
}

/* ref: FUN_0071b680 */
uint F_0071b680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71b680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)this + 8;
  uVar2 = F_00719370(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_00716b60(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_0071b3c0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ee120(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_0071aec0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006edf30(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_007174b0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006efc70(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006efed0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_00718e00(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_00b92ef0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_0071a380(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006eebe0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  return uVar2;
}

/* ref: Client::Game::Event::EventHandlerModule::vf4 */
unsigned int F_0071b740(unsigned int gen_a0)
{
  GEN_ENTER(0x71b740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  F_0071b680(this,1);
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x30)));
  if (piVar5 != *(int * PTR32 *)(this + 0x30)) {
    do {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 8))((int *)piVar5[4]);
      if ((char)uVar4 != '\0') {
        ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x84))((int *)piVar5[4]);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(this + 0x30));
  }
  return 0;
}

/* ref: FUN_0071b7c0 */
uint F_0071b7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71b7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined2 * puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[143])REFP(0x10bd6dc));
  F_0042b630((int)this + 0x1d4);
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  uVar1 = F_00ab3110(5);
  *(uint *)((int)this + 0x26c) = uVar1;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  this_00 = (undefined *)((int)this + 0x280);
  (*(uint *)(gen_frame + 0xc)) = 3;
  do {
    F_0071dbc0(this_00);
    this_00 = (undefined *)((int)this_00 + 0xa8);
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + -1;
  } while (-1 < (int)(*(uint *)(gen_frame + 0xc)));
  *(undefined4 *)((int)this + 0x520) = 0;
  *(undefined4 *)((int)this + 0x52c) = 0;
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined2 *)((int)this + 0x530) = 0;
  *(undefined4 *)((int)this + 0x534) = 0;
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  F_0075d5f0((undefined4 *)((int)this + 0x538),7);
  *(undefined4 *)((int)this + 0x550) = 0;
  uVar1 = F_004296a0(0x2d0,0,800);
  *(uint *)((int)this + 0x54c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x54c) + 4))) = *(int *)((int)this + 0x54c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x54c) + 8))) = *(int *)((int)this + 0x54c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x54c) + 0x2cc))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x54c) + 0x2cd))) = 1;
  *(undefined4 *)((int)this + 0x558) = 0;
  *(undefined4 *)((int)this + 0x55c) = 0;
  *(undefined4 *)((int)this + 0x560) = 0;
  *(undefined4 *)((int)this + 0x56c) = 0;
  *(undefined4 *)((int)this + 0x570) = 0;
  *(undefined4 *)((int)this + 0x574) = 0;
  *(undefined4 *)((int)this + 0x578) = 0;
  *(undefined4 *)((int)this + 0x57c) = 0;
  *(undefined4 *)((int)this + 0x58c) = 0;
  uVar1 = F_004296a0(0x104,0,800);
  *(uint *)((int)this + 0x588) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x588) + 4))) = *(int *)((int)this + 0x588);
  *((int *)GEN_TOP((*(int *)((int)this + 0x588) + 8))) = *(int *)((int)this + 0x588);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x588) + 0x100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x588) + 0x101))) = 1;
  *(undefined4 *)((int)this + 0x594) = 0;
  *(undefined4 *)((int)this + 0x598) = 0;
  *(undefined4 *)((int)this + 0x59c) = 0;
  *(undefined4 *)((int)this + 0x5a4) = 0;
  *(undefined1 *)((int)this + 0x5a8) = 0;
  *(undefined4 *)((int)this + 0x5ac) = 0xffffffff;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323710));
  F_00754550((undefined *)((int)this + 0x594),0x15);
  F_0042b630(((undefined1 *)(gen_frame + 0x10)));
  F_00ab0230(600,((undefined1 *)(gen_frame + 0x10)));
  iVar6 = *(int *)((int)this + 0x598) - *(int *)((int)this + 0x594);
  iVar7 = iVar6 >> 0x1f;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (iVar6 / 0x54 + iVar7 != iVar7) {
    do {
      if ((*(uint *)(gen_frame + 0xc)) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = (*(uint *)(gen_frame + 0xc)) * 5 & 0xffff;
      }
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x10)));
      F_00c472af(((undefined1 *)(gen_frame + 0x64)),0x32,"%s %u",uVar2,uVar1);
      F_0042e430(((undefined *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) * 0x54 + *(int *)((int)this + 0x594)))),((undefined1 *)(gen_frame + 0x64)));
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
    } while ((*(uint *)(gen_frame + 0xc)) < (uint)((*(int *)((int)this + 0x598) - *(int *)((int)this + 0x594)) / 0x54));
  }
  puVar4 = (undefined2 *)((int)this + 0x248);
  puVar3 = (undefined4 *)((int)this + 0x22c);
  iVar7 = 7;
  do {
    uVar1 = 0;
    *puVar3 = 0;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (REFG(int, 0x1488744) == 0) {
    do {
      uVar2 = F_00ab3510(uVar1);
      uVar5 = 0;
      do {
        if (*(int *)(uVar2 + uVar5 * 4) == 0) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 8);
      (&REFG(int, 0x1488744))[uVar1] = uVar5;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 7);
  }
  F_0075cc20(*(undefined * PTR32 *)((int)this + 0x538),REFG(int, 0x1488744));
  F_0075cc20(((undefined *)GEN_TOP((*(int *)((int)this + 0x538) + 0x10))),REFG(undefined4, 0x1488748));
  F_0075cc20(((undefined *)GEN_TOP((*(int *)((int)this + 0x538) + 0x20))),REFG(undefined4, 0x148874c));
  F_0075cc20(((undefined *)GEN_TOP((*(int *)((int)this + 0x538) + 0x30))),REFG(undefined4, 0x1488750));
  F_0075cc20(((undefined *)GEN_TOP((*(int *)((int)this + 0x538) + 0x40))),REFG(undefined4, 0x1488754));
  F_0075cc20(((undefined *)GEN_TOP((*(int *)((int)this + 0x538) + 0x50))),REFG(undefined4, 0x1488758));
  F_0075cc20(((undefined *)GEN_TOP((*(int *)((int)this + 0x538) + 0x60))),REFG(undefined4, 0x148875c));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (uint)this;
}

/* ref: FUN_0071bb60 */
uint F_0071bb60(unsigned int gen_a0)
{
  GEN_ENTER(0x71bb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * this_00;
  uint uVar1;
  
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b91cc));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x71b2f0));
  }
  *(undefined4 * PTR32 *)((int)this + 0xfc) = this_00;
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x32);
  *(uint *)((int)this + 0x100) = uVar1;
  F_00cb4540(*(undefined * PTR32 *)((int)this + 0xfc),0,*(undefined4 *)((int)this + 8));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x100) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x100),*(undefined4 *)((int)this + 0xfc));
  return uVar1;
}

/* ref: Client::Game::Event::EventHandlerModule::vf1 */
uint F_0071bbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x71bbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0071b680(this,0);
  return uVar1;
}

/* ref: FUN_0071bc00 */
uint F_0071bc00(unsigned int gen_a0)
{
  GEN_ENTER(0x71bc00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x5b0,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_0071b7c0(this,param_1 & 0xffff | 0x60000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf24 */
uint F_0071bc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71bc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_0071bb60(this);
  return uVar1;
}

/* ref: FUN_0071bc40 */
uint F_0071bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71bc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  
  F_006fd230(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10bb9b4));
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 0x30) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 4))) = *(int *)((int)this + 0x30);
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 8))) = *(int *)((int)this + 0x30);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x44) = 0;
  uVar1 = F_004296a0(0x1c,0,800);
  *(uint *)((int)this + 0x40) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x40) + 4))) = *(int *)((int)this + 0x40);
  *((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) = *(int *)((int)this + 0x40);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x18))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x19))) = 1;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 1;
    puVar2[4] = ((code *)REFP(0x705490));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 2;
    puVar2[4] = ((code *)REFP(0x6ffae0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 3;
    puVar2[4] = ((code *)REFP(0x6e97d0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 4;
    puVar2[4] = ((code *)REFP(0x6ea3f0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 5;
    puVar2[4] = ((code *)REFP(0x6ff3e0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 6;
    puVar2[4] = ((code *)REFP(0x71bc00));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 9;
    puVar2[4] = ((code *)REFP(0x6e9d70));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 10;
    puVar2[4] = ((code *)REFP(0x6e9e30));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0xb;
    puVar2[4] = ((code *)REFP(0x6ff710));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0xc;
    puVar2[4] = ((code *)REFP(0x6ff670));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0xd;
    puVar2[4] = ((code *)REFP(0x6e9230));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0xe;
    puVar2[4] = ((code *)REFP(0x6ff9d0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0xf;
    puVar2[4] = ((code *)REFP(0x721900));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x10;
    puVar2[4] = ((code *)REFP(0x721930));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x11;
    puVar2[4] = ((code *)REFP(0x721980));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x12;
    puVar2[4] = ((code *)REFP(0x6fffd0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x13;
    puVar2[4] = ((code *)REFP(0x6fff40));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x14;
    puVar2[4] = ((code *)REFP(0x6fff70));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x15;
    puVar2[4] = ((code *)REFP(0x6e52f0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x16;
    puVar2[4] = ((code *)REFP(0x70d7b0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x17;
    puVar2[4] = ((code *)REFP(0x7219b0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x18;
    puVar2[4] = ((code *)REFP(0x7219e0));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,800);
  *puVar2 = *(undefined4 *)((int)this + 0x40);
  puVar2[1] = *(undefined4 *)((int)this + 0x40);
  puVar2[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar2 + 3) = 0x19;
    puVar2[4] = ((code *)REFP(0x721a10));
    puVar2[5] = ((code *)REFP(0x6c3670));
  }
  F_00746e00((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x721a40));
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x6c3670));
  ((undefined2 *)(gen_frame + 0x8))[0] = 0x1c;
  F_0074fc20((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x8)));
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x6ffb10));
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x6c3670));
  ((undefined2 *)(gen_frame + 0x8))[0] = 0x1a;
  F_0074fc20((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x8)));
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x6fc4a0));
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x6c3670));
  ((undefined2 *)(gen_frame + 0x8))[0] = 0x1b;
  F_0074fc20((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x8)));
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb8f830));
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x6c3670));
  ((undefined2 *)(gen_frame + 0x8))[0] = 0x1d;
  F_0074fc20((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x8)));
  return (uint)this;
}

/* ref: FUN_0071c4e0 */
uint F_0071c4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x71c4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 * puVar1;
  char cVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint * puVar5;
  undefined2 * puVar6;
  uint uVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  F_0071bc40(this,REFG(int, 0x137104c) + 0x2620);
  F_00701060((undefined *)((int)this + 0x5c),REFG(int, 0x137104c) + 0x2620);
  F_006fd230((undefined *)((int)this + 0xc4),REFG(int, 0x137104c) + 0x2620);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[6])REFP(0x10ba994));
  *(undefined4 *)((int)this + 0xf8) = 0;
  uVar3 = F_004296a0(0x28,0,0x322);
  *(uint *)((int)this + 0xf4) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0xf4) + 4))) = *(int *)((int)this + 0xf4);
  *((int *)GEN_TOP((*(int *)((int)this + 0xf4) + 8))) = *(int *)((int)this + 0xf4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf4) + 0x21))) = 1;
  F_006ec060((undefined *)((int)this + 0x100));
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(int *)((int)this + 0x1e4) = REFG(int, 0x137104c) + 0x2620;
  F_00a02250((int)this + 0x1e8);
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined2 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  puVar1 = (undefined4 *)((int)this + 0x214);
  *puVar1 = 0;
  puVar4 = (undefined4 *)F_004296a0(8,0,800);
  *puVar1 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x240) = 0xe0000000;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined1 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined1 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined1 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  uVar3 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 0x268) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x268) + 4))) = *(int *)((int)this + 0x268);
  *((int *)GEN_TOP((*(int *)((int)this + 0x268) + 8))) = *(int *)((int)this + 0x268);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x268) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x268) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x280) = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x290) = 0xe0000000;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined1 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined1 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined1 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0xe0000000;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined2 *)((int)this + 0x2b8) = 0xffff;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined1 *)((int)this + 0x6bc) = 0;
  F_00c48350((undefined *)((int)this + 0x2c0),0,0x3fc);
  *(undefined4 *)((int)this + 0x6c8) = 0;
  uVar3 = F_004296a0(0x14,0,800);
  *(uint *)((int)this + 0x6c4) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 4))) = *(int *)((int)this + 0x6c4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 8))) = *(int *)((int)this + 0x6c4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c4) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c4) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0x6d8) = 0;
  uVar3 = F_004296a0(0x38,0,800);
  *(uint *)((int)this + 0x6d4) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6d4) + 4))) = *(int *)((int)this + 0x6d4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6d4) + 8))) = *(int *)((int)this + 0x6d4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6d4) + 0x30))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6d4) + 0x31))) = 1;
  *(undefined4 *)((int)this + 0x6e0) = 0;
  *(undefined4 *)((int)this + 0x6e8) = 0;
  uVar3 = F_004296a0(0x80,0,800);
  *(uint *)((int)this + 0x6e4) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6e4) + 4))) = *(int *)((int)this + 0x6e4);
  *(undefined4 *)((int)this + 0x6f4) = 0;
  uVar3 = F_004296a0(0x1c,0,800);
  *(uint *)((int)this + 0x6f0) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6f0) + 4))) = *(int *)((int)this + 0x6f0);
  *(undefined4 *)((int)this + 0x704) = 0;
  uVar3 = F_004296a0(0x1c,0,800);
  *(uint *)((int)this + 0x700) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x700) + 4))) = *(int *)((int)this + 0x700);
  *((int *)GEN_TOP((*(int *)((int)this + 0x700) + 8))) = *(int *)((int)this + 0x700);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x700) + 0x18))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x700) + 0x19))) = 1;
  *(undefined4 *)((int)this + 0x714) = 0;
  uVar3 = F_004296a0(0x20,0,800);
  *(uint *)((int)this + 0x710) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x710) + 4))) = *(int *)((int)this + 0x710);
  *((int *)GEN_TOP((*(int *)((int)this + 0x710) + 8))) = *(int *)((int)this + 0x710);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x710) + 0x1c))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x710) + 0x1d))) = 1;
  *(undefined1 *)((int)this + 0x71c) = 0;
  *(undefined4 *)((int)this + 0x720) = 0;
  *(undefined2 *)((int)this + 0x724) = 0;
  *(undefined4 *)((int)this + 0x728) = 0;
  puVar4 = (undefined4 *)F_004296a0(8,0,800);
  puVar1 = (undefined4 *)((int)this + 0x728);
  *puVar1 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x72c) = 0;
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined4 *)((int)this + 0x738) = 0;
  *(undefined4 *)((int)this + 0x740) = 0xe0000000;
  *(undefined4 *)((int)this + 0x744) = 0;
  *(undefined4 *)((int)this + 0x748) = 0;
  *(undefined4 *)((int)this + 0x794) = 0;
  uVar3 = F_004296a0(0x90,0,800);
  *(uint *)((int)this + 0x790) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x790) + 4))) = *(int *)((int)this + 0x790);
  *((int *)GEN_TOP((*(int *)((int)this + 0x790) + 8))) = *(int *)((int)this + 0x790);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x790) + 0x88))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x790) + 0x89))) = 1;
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0;
  *(undefined1 *)((int)this + 0x7a8) = 0;
  *(undefined4 *)((int)this + 0x7ac) = 0;
  *(undefined4 *)((int)this + 0x7b0) = 0;
  *(undefined4 *)((int)this + 0x7b4) = 0;
  F_00a02040(*(undefined * PTR32 *)((int)this + 0x1e4),(int)this + 0x1e8);
  *(undefined4 *)((int)this + 0x74c) = 0;
  *(undefined4 *)((int)this + 0x750) = 0;
  *(undefined4 *)((int)this + 0x754) = 0;
  *(undefined4 *)((int)this + 0x758) = 0;
  *(undefined4 *)((int)this + 0x75c) = 0;
  *(undefined4 *)((int)this + 0x760) = 0;
  *(undefined4 *)((int)this + 0x764) = 0;
  *(undefined4 *)((int)this + 0x768) = 0;
  *(undefined4 *)((int)this + 0x76c) = 0;
  *(undefined4 *)((int)this + 0x770) = 0;
  *(undefined4 *)((int)this + 0x774) = 0;
  *(undefined4 *)((int)this + 0x778) = 0;
  *(undefined4 *)((int)this + 0x77c) = 0;
  *(undefined4 *)((int)this + 0x780) = 0;
  *(undefined4 *)((int)this + 0x784) = 0;
  *(undefined4 *)((int)this + 0x788) = 0;
  F_00c48350(((char *)(gen_frame + 0x90)),0xff,0x65);
  (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x14)) = ((uint *)(gen_frame + 0x20));
  do {
    puVar5 = (uint *)F_00ab3110((*(uint * PTR32 *)(gen_frame + 0x18)));
    *(*(uint * PTR32 *)(gen_frame + 0x14)) = *puVar5;
    (*(uint * PTR32 *)(gen_frame + 0x14))[1] = puVar5[1];
    uVar3 = puVar5[3];
    (*(uint * PTR32 *)(gen_frame + 0x14))[2] = puVar5[2];
    (*(uint * PTR32 *)(gen_frame + 0x14))[3] = uVar3;
    puVar5 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x18)) + 1);
    (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar5;
    (*(uint * PTR32 *)(gen_frame + 0x14)) = (*(uint * PTR32 *)(gen_frame + 0x14)) + 4;
  } while (puVar5 < (uint *)0x7);
  (*(uint *)(gen_frame + 0x10)) = 0;
  do {
    puVar5 = (uint *)F_00ab3170((*(uint *)(gen_frame + 0x10)));
    if (puVar5 != (uint *)0x0) {
      (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar5;
      (*(int *)(gen_frame + 0x0)) = 0x10;
      do {
        (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar5;
        if (*puVar5 != 0) {
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xc)) + 0)) = (char)(*(uint *)(gen_frame + 0x10));
          (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)(gen_frame + 0x90)) + (*(uint *)(gen_frame + 0x10));
          cVar2 = ((char *)(gen_frame + 0x90))[(int)((*(uint *)(gen_frame + 0x10)))];
          (*(char *)(gen_frame + 0x1f)) = cVar2;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xc)) + 1)) = cVar2;
          (*(undefined2 *)(gen_frame + 0xc)) = CONCAT11(cVar2,(char)(*(uint *)(gen_frame + 0x10)));
          puVar6 = (undefined2 *)F_00754710((undefined *)((int)this + 0x264),puVar5);
          *puVar6 = (*(undefined2 *)(gen_frame + 0xc));
          if ((*(char *)(gen_frame + 0x1f)) != '\0') {
            *(*(char * PTR32 *)(gen_frame + 0x8)) = (*(char *)(gen_frame + 0x1f)) + -1;
          }
          uVar3 = *(*(uint * PTR32 *)(gen_frame + 0x14));
          uVar7 = 0;
          (*(uint * PTR32 *)(gen_frame + 0x18)) = ((uint *)(gen_frame + 0x20));
          do {
            if ((*(*(uint * PTR32 *)(gen_frame + 0x18)) <= uVar3) &&
               (uVar8 = (uint)(byte)(*(uint * PTR32 *)(gen_frame + 0x18))[3] + *(*(uint * PTR32 *)(gen_frame + 0x18)), (*(uint *)(gen_frame + 0x4)) = uVar8, uVar3 <= uVar8)) {
              (*(uint *)(gen_frame + 0x4)) = (((uint *)(gen_frame + 0x20))[(int)(uVar7 * 4 + 1)] - ((uint *)(gen_frame + 0x20))[(int)(uVar7 * 4)]) + uVar3;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xe)) + 0)) = (undefined1)(*(uint *)(gen_frame + 0x10));
              cVar2 = *(*(char * PTR32 *)(gen_frame + 0x8));
              (*(char *)(gen_frame + 0x1f)) = cVar2;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xe)) + 1)) = cVar2;
              (*(undefined2 *)(gen_frame + 0xe)) = CONCAT11(cVar2,(undefined1)(*(uint *)(gen_frame + 0x10)));
              puVar6 = (undefined2 *)F_00754710((undefined *)((int)this + 0x264),&(*(uint *)(gen_frame + 0x4)));
              *puVar6 = (*(undefined2 *)(gen_frame + 0xe));
              if ((*(char *)(gen_frame + 0x1f)) != '\0') {
                *(*(char * PTR32 *)(gen_frame + 0x8)) = (*(char *)(gen_frame + 0x1f)) + -1;
              }
              break;
            }
            (*(uint * PTR32 *)(gen_frame + 0x18)) = (*(uint * PTR32 *)(gen_frame + 0x18)) + 4;
            uVar7 = uVar7 + 1;
          } while (uVar7 < 7);
        }
        puVar5 = (*(uint * PTR32 *)(gen_frame + 0x14)) + 1;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
        (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar5;
      } while ((*(int *)(gen_frame + 0x0)) != 0);
    }
    uVar3 = (*(uint *)(gen_frame + 0x10)) + 1;
    (*(uint *)(gen_frame + 0x10)) = uVar3;
    if (100 < uVar3) {
      F_00754800((undefined *)((int)this + 0x7ac),0x10);
      F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_0071cbd0 */
unsigned int F_0071cbd0(void)
{
  GEN_ENTER(0x71cbd0u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (REFG(undefined4, 0x1488344) == 0) {
    this = (undefined *)F_00406b90(0x7c0,0,0);
    if (this != (undefined *)0x0) {
      REFG(undefined4, 0x1488344) = F_0071c4e0(this);
      F_00b0a580();
      return 0;
    }
    REFG(undefined4, 0x1488344) = 0;
  }
  F_00b0a580();
  return 0;
}

/* ref: FUN_0071cc30 */
uint F_0071cc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cc30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *(int *)(in_ecx + 0xc);
}

/* ref: Client::Game::Object::GameObject::vf1 */
uint F_0071cc50(unsigned int gen_a0)
{
  GEN_ENTER(0x71cc50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x8a);
}

/* ref: FUN_0071cc70 */
byte F_0071cc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cc70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x8e)) & 2;
  *(byte *)(in_ecx + 0x8e) = *(byte *)(in_ecx + 0x8e) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0071ccb0 */
uint F_0071ccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ccb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x174) = param_2;
  return param_2;
}

/* ref: FUN_0071ccd0 */
uint F_0071ccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ccd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x178) = param_2;
  return param_2;
}

/* ref: FUN_0071cd30 */
uint F_0071cd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cd30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x11c) = (uint)(ushort)param_2;
  return (uint)(ushort)param_2;
}

/* ref: FUN_0071cd80 */
byte F_0071cd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cd80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x198) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071cda0 */
unsigned int F_0071cda0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x71cda0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  return 0;
}

/* ref: FUN_0071cdc0 */
unsigned int F_0071cdc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x71cdc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_0071cde0 */
byte F_0071cde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cde0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x27) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071cdf0 */
byte F_0071cdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cdf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x28) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071ce20 */
byte F_0071ce20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ce20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x2dd3)) & 4;
  *(byte *)(in_ecx + 0x2dd3) = *(byte *)(in_ecx + 0x2dd3) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0071ce50 */
byte F_0071ce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ce50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0x2dd2)) & 8;
  *(byte *)(in_ecx + 0x2dd2) = *(byte *)(in_ecx + 0x2dd2) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0071ce90 */
uint F_0071ce90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ce90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
  if (uVar2 != 0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
    bVar1 = F_00b7aac0(this_00,param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_0071cee0 */
uint F_0071cee0(unsigned int gen_a0)
{
  GEN_ENTER(0x71cee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar1 != 2) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if (((char)uVar1 != '\x02') &&
     (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this), (char)uVar1 != '\x03')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_0071cf20 */
byte F_0071cf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cf20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2dd5) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071cf30 */
uint F_0071cf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71cf30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x2dd8) = param_2;
  return param_2;
}

/* ref: FUN_0071cf50 */
uint F_0071cf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cf50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x2dd8 + param_2 * 4);
}

/* ref: FUN_0071cf70 */
byte F_0071cf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cf70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2ea7) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071cf80 */
byte F_0071cf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cf80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2ebc) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071cfa0 */
unsigned int F_0071cfa0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x71cfa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2ec8) = param_2;
  return 0;
}

/* ref: FUN_0071cfd0 */
uint F_0071cfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(param_1 * 0x7a0 + 0x16b0 + (int)this);
}

/* ref: FUN_0071cff0 */
uint F_0071cff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71cff0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x2d90 + param_2 * 4);
}

/* ref: FUN_0071d020 */
uint F_0071d020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + param_1 * 4) = 0;
  *(undefined4 *)((int)this + param_1 * 4 + 0x28) = 0;
  *(undefined4 *)((int)this + param_1 * 4 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x78 + (int)this) = 0;
  *(undefined1 *)(param_1 + 0x82 + (int)this) = 0;
  return param_1;
}

/* ref: FUN_0071d0b0 */
uint F_0071d0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ae0fc0(*(undefined * PTR32 *)((int)this + 0x1a8),param_1);
  return uVar1;
}

/* ref: FUN_0071d130 */
uint F_0071d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x71d130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00536cc0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_0071d160 */
uint F_0071d160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x71d160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_00536d10(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_0071d1a0 */
uint F_0071d1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x71d1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 9999;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x12) = 30000;
  *(undefined1 *)((int)this + 0x2f) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  return (uint)this;
}

/* ref: FUN_0071d1f0 */
uint F_0071d1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return param_1;
}

/* ref: FUN_0071d210 */
ushort F_0071d210(unsigned int gen_a0)
{
  GEN_ENTER(0x71d210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar2 = F_00a3a860(this);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00a3a860(this);
      uVar1 = F_0071d210(this_00);
      return uVar1;
    }
  }
  return *(ushort *)((int)this + 0x10);
}

/* ref: FUN_0071d240 */
ushort F_0071d240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x10) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0071d250 */
ushort F_0071d250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x12) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0071d260 */
byte F_0071d260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071d270 */
uint F_0071d270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_0071d280 */
byte F_0071d280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x14) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071d2a0 */
unsigned int F_0071d2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) | 1;
    return 0;
  }
  *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) & 0xfe;
  return 0;
}

/* ref: FUN_0071d2c0 */
ushort F_0071d2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar2 = F_00a3a860(this);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00a3a860(this);
      uVar1 = F_0071d2c0(this_00,param_1);
      return uVar1;
    }
  }
  return *((ushort *)GEN_TOP(((int)this + (param_1 & 0xff) * 2 + 0x20)));
}

/* ref: FUN_0071d300 */
byte F_0071d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar2 = F_00a3a860(this);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00a3a860(this);
      bVar1 = F_0071d300(this_00,param_1);
      return bVar1;
    }
  }
  return *((byte *)GEN_TOP(((param_1 & 0xff) + 0x2a + (int)this)));
}

/* ref: FUN_0071d340 */
uint F_0071d340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + (uint)(byte)param_1 * 2 + 0x20) = (undefined2)param_2;
  return (uint)(byte)param_1;
}

/* ref: FUN_0071d360 */
uint F_0071d360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((byte)param_1 + 0x2a + (int)this) = (undefined1)param_2;
  return (uint)(byte)param_1;
}

/* ref: FUN_0071d3a0 */
uint F_0071d3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x71d3a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 6) == '\0') && (*(int *)(in_ecx + 8) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0071d3c0 */
uint F_0071d3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x71d3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 9999;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x75300000;
  *(undefined1 *)((int)this + 0x2f) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  F_00a35f30(this);
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentInventoryContext::InventoryContextEvent::vf0 */
uint F_0071d430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071d490 */
byte F_0071d490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2db64) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::UI::GameEventCallback::vf0 */
uint F_0071d500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::FormatStringCallbackInterface::vf0 */
uint F_0071d550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::ActionTimelineCallbackInterface::vf0 */
uint F_0071d5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8184));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::ListenItemCallbackInterface::vf0 */
uint F_0071d5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandler::vf112 */
uint F_0071d730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf116 */
uint F_0071d760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (byte)~*(byte *)(param_1 + 0x70) & 1;
}

/* ref: Client::Game::Event::EventHandler::vf128 */
uint F_0071d780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71d780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf127 */
uint F_0071d790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_1[0x20];
  iVar2 = param_1[0x1e];
  iVar3 = *(int *)this;
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar1,iVar2,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(iVar3 + 0x200))(this,uVar4);
  return uVar4;
}

/* ref: FUN_0071d7e0 */
uint F_0071d7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_0071d7f0 */
uint F_0071d7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042e430((undefined *)((int)this + 0x7c),param_1);
  return uVar1;
}

/* ref: FUN_0071d820 */
uint F_0071d820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x38) = param_2;
  return param_2;
}

/* ref: FUN_0071d830 */
uint F_0071d830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: FUN_0071d860 */
uint F_0071d860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x54),param_2,REFG(undefined4, 0x108cc50));
  *(undefined1 *)((int)this + 0xa8) = 1;
  return (uint)this;
}

/* ref: FUN_0071d8b0 */
uint F_0071d8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71d8b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: FUN_0071d900 */
uint F_0071d900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cb4700(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b81a4));
  return (uint)this;
}

/* ref: FUN_0071d950 */
unsigned int F_0071d950(unsigned int gen_a0)
{
  GEN_ENTER(0x71d950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 * puVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_0042e430((undefined *)((int)this + 0xc),&REFG(undefined1, 0x107fc63));
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 0x71) = 0;
  iVar1 = 0;
  puVar2 = (undefined2 *)((int)this + 0x62);
  do {
    *puVar2 = 0;
    *(undefined1 *)((int)this + iVar1 + 0x6c) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 5);
  *(undefined2 *)((int)this + 0x72) = 1;
  return 0;
}

/* ref: FUN_0071d9a0 */
unsigned int F_0071d9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x71d9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 * puVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)this = 0;
  iVar3 = (int)this + 0x77;
  iVar4 = 5;
  do {
    *(undefined4 *)(iVar3 + -0x73) = 0;
    *(undefined4 *)(iVar3 + -0x6f) = 0;
    *(undefined4 *)(iVar3 + -0x6b) = 0;
    F_0042e430((undefined *)(iVar3 + -0x67),&REFG(undefined1, 0x107fc63));
    *(undefined1 *)(iVar3 + -0x13) = 0;
    *(undefined1 *)(iVar3 + -2) = 0;
    iVar1 = 0;
    puVar2 = (undefined2 *)(iVar3 + -0x11);
    do {
      *puVar2 = 0;
      *(undefined1 *)(iVar3 + -7 + iVar1) = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < 5);
    *(undefined2 *)(iVar3 + -1) = 1;
    iVar3 = iVar3 + 0x74;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_0071da40 */
byte F_0071da40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71da40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(byte *)((int)this + 8) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_0071db00 */
byte F_0071db00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71db00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x22f + in_ecx);
}

/* ref: FUN_0071db40 */
byte F_0071db40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71db40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x9ec) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071db50 */
uint F_0071db50(unsigned int gen_a0)
{
  GEN_ENTER(0x71db50u, gen_a0, 0u, 0u, 0u);
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
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  F_0042b630((int)this + 0x38);
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  F_0042b630((int)this + 0x9c);
  return (uint)this;
}

/* ref: FUN_0071dbc0 */
uint F_0071dbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x71dbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630(this);
  *(undefined4 *)((int)this + 0x58) = 9999;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x5e) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x75300000;
  *(undefined1 *)((int)this + 0x87) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined1 *)((int)this + 0x86) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  F_00a35f30((undefined *)((int)this + 0x58));
  *(undefined2 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return (uint)this;
}

/* ref: FUN_0071dc90 */
uint F_0071dc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71dc90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3aa4) = param_2;
  return param_2;
}

/* ref: FUN_0071dca0 */
uint F_0071dca0(unsigned int gen_a0)
{
  GEN_ENTER(0x71dca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x9c));
  uVar1 = F_0042c880((undefined *)((int)this + 0x38));
  return (uint)uVar1;
}

/* ref: FUN_0071dcf0 */
uint F_0071dcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x71dcf0u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  F_0042b630(in_ecx + 8);
  *(undefined4 *)(in_ecx + 0x70) = 0;
  *(undefined4 *)(in_ecx + 0x74) = 0;
  *(undefined4 *)(in_ecx + 0x78) = 0;
  *(undefined2 *)(in_ecx + 0x5c) = 0x100;
  *(undefined4 *)(in_ecx + 0x7c) = 0;
  *(undefined4 *)(in_ecx + 0x80) = 0;
  *(undefined4 *)(in_ecx + 0x94) = 0;
  *(undefined4 *)(in_ecx + 0x98) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 200) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  *(undefined4 *)(in_ecx + 0xf4) = 0;
  *(undefined4 *)(in_ecx + 0xf8) = 0;
  *(undefined4 *)(in_ecx + 0x10c) = 0;
  *(undefined4 *)(in_ecx + 0x110) = 0;
  *(undefined4 *)(in_ecx + 0x124) = 0;
  *(undefined4 *)(in_ecx + 0x128) = 0;
  *(undefined4 *)(in_ecx + 0x84) = 0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(undefined4 *)(in_ecx + 0x8c) = 0;
  *(undefined4 *)(in_ecx + 0x90) = 0;
  *(undefined4 *)(in_ecx + 0x9c) = 0;
  *(undefined4 *)(in_ecx + 0xa0) = 0;
  *(undefined4 *)(in_ecx + 0xa4) = 0;
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xb4) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 0xcc) = 0;
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  *(undefined4 *)(in_ecx + 0xd4) = 0;
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  *(undefined4 *)(in_ecx + 0xe4) = 0;
  *(undefined4 *)(in_ecx + 0xe8) = 0;
  *(undefined4 *)(in_ecx + 0xec) = 0;
  *(undefined4 *)(in_ecx + 0xf0) = 0;
  *(undefined4 *)(in_ecx + 0xfc) = 0;
  *(undefined4 *)(in_ecx + 0x100) = 0;
  *(undefined4 *)(in_ecx + 0x104) = 0;
  *(undefined4 *)(in_ecx + 0x108) = 0;
  *(undefined4 *)(in_ecx + 0x114) = 0;
  *(undefined4 *)(in_ecx + 0x118) = 0;
  *(undefined4 *)(in_ecx + 0x11c) = 0;
  *(undefined4 *)(in_ecx + 0x120) = 0;
  *(undefined4 *)(in_ecx + 300) = 0;
  *(undefined4 *)(in_ecx + 0x130) = 0;
  *(undefined4 *)(in_ecx + 0x134) = 0;
  *(undefined4 *)(in_ecx + 0x138) = 0;
  *(undefined4 *)(in_ecx + 0x13c) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0071de90 */
byte F_0071de90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71de90u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071deb0 */
uint F_0071deb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71deb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_0071dec0 */
uint F_0071dec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71dec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0((undefined *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_0071ded0 */
uint F_0071ded0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ded0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_0071dee0 */
uint F_0071dee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71dee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 100) = param_2;
  return param_2;
}

/* ref: FUN_0071def0 */
uint F_0071def0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71def0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_0071df00 */
uint F_0071df00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71df00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_0071df10 */
uint F_0071df10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71df10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  *(uint *)((int)this + 0x60) = param_3;
  uVar1 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
  *(uint *)((int)this + 0x68) = param_1 + param_3;
  *(int *)((int)this + 100) = param_4;
  *(uint *)((int)this + 0x6c) = uVar1;
  return uVar1;
}

/* ref: FUN_0071df50 */
uint F_0071df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71df50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x70) = param_2;
  return param_2;
}

/* ref: FUN_0071df60 */
uint F_0071df60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71df60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x74) = param_2;
  return param_2;
}

/* ref: FUN_0071df70 */
uint F_0071df70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71df70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x78) = param_2;
  return param_2;
}

/* ref: FUN_0071df80 */
byte F_0071df80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x71df80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = *(uint *)(param_1 + 0x13c);
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar3 = (int *)(param_1 + 0x7c);
    do {
      if (*piVar3 == param_2) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 6;
    } while (uVar2 < uVar1);
  }
  if (7 < uVar1) {
    return 0;
  }
  *(int *)(param_1 + 0x7c + uVar1 * 0x18) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x80 + *(int *)(param_1 + 0x13c) * 0x18))) = param_3;
  *((float *)GEN_TOP((param_1 + 0x84 + *(int *)(param_1 + 0x13c) * 0x18))) = param_4;
  *((float *)GEN_TOP((param_1 + 0x88 + *(int *)(param_1 + 0x13c) * 0x18))) = param_5;
  *((float *)GEN_TOP((param_1 + 0x8c + *(int *)(param_1 + 0x13c) * 0x18))) = param_6;
  *((float *)GEN_TOP((param_1 + (*(int *)(param_1 + 0x13c) * 3 + 0x12) * 8))) = param_7;
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  return 1;
}

/* ref: FUN_0071e040 */
byte F_0071e040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  uVar1 = *(uint *)((int)this + 0x13c);
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar4 = (int *)((int)this + 0x7c);
    do {
      if (*piVar4 == param_1) {
        if (uVar2 < uVar1 - 1) {
          puVar3 = (undefined4 *)((int)this + uVar2 * 0x18 + 0x7c);
          do {
            *puVar3 = puVar3[6];
            puVar3[1] = puVar3[7];
            puVar3[2] = puVar3[8];
            puVar3[3] = puVar3[9];
            puVar3[4] = puVar3[10];
            puVar3[5] = puVar3[0xb];
            uVar2 = uVar2 + 1;
            puVar3 = puVar3 + 6;
          } while (uVar2 < *(int *)((int)this + 0x13c) - 1U);
        }
        *(int *)((int)this + 0x13c) = *(int *)((int)this + 0x13c) + -1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 6;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: Client::Game::Event::Director::vf153 */
unsigned int F_0071e150(void)
{
  GEN_ENTER(0x71e150u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0071e160 */
uint F_0071e160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042e430((undefined *)((int)this + 0x23c),param_1);
  return uVar1;
}

/* ref: FUN_0071e170 */
uint F_0071e170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042e430((undefined *)((int)this + 0x290),param_1);
  return uVar1;
}

/* ref: FUN_0071e180 */
uint F_0071e180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71e180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  *(uint *)((int)this + 0x2e8) = param_3;
  uVar1 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
  *(uint *)((int)this + 0x2f0) = param_1 + param_3;
  *(int *)((int)this + 0x2ec) = param_4;
  *(uint *)((int)this + 0x2f4) = uVar1;
  return uVar1;
}

/* ref: FUN_0071e1d0 */
uint F_0071e1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_0071e240 */
uint F_0071e240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cc20(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_0071e290 */
uint F_0071e290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 8 + in_ecx;
}

/* ref: FUN_0071e340 */
uint F_0071e340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1074 + in_ecx;
}

/* ref: FUN_0071e360 */
uint F_0071e360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x113c + in_ecx;
}

/* ref: FUN_0071e380 */
uint F_0071e380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1164 + in_ecx;
}

/* ref: FUN_0071e3a0 */
uint F_0071e3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x11a0 + in_ecx;
}

/* ref: FUN_0071e3c0 */
uint F_0071e3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x11f0 + in_ecx;
}

/* ref: FUN_0071e3e0 */
uint F_0071e3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e3e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x12ea + in_ecx;
}

/* ref: FUN_0071e400 */
uint F_0071e400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x13b4 + param_2 * 0x10;
}

/* ref: FUN_0071e420 */
uint F_0071e420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1594 + in_ecx;
}

/* ref: FUN_0071e440 */
uint F_0071e440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x1684 + param_2 * 0x10;
}

/* ref: FUN_0071e460 */
uint F_0071e460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x113c + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_0071e480 */
uint F_0071e480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x11a0 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_0071e4a0 */
uint F_0071e4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x1594 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_0071e4c0 */
uint F_0071e4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x13b4 + param_2 * 0x10;
}

/* ref: FUN_0071e4e0 */
uint F_0071e4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x1684 + param_2 * 0x10;
}

/* ref: FUN_0071e500 */
uint F_0071e500(unsigned int gen_a0)
{
  GEN_ENTER(0x71e500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x1000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 0x18),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x6c) = 0;
  return uVar1;
}

/* ref: FUN_0071e540 */
uint F_0071e540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e540u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((int)*in_ecx < (int)param_2) {
    *in_ecx = param_2;
  }
  return param_2;
}

/* ref: FUN_0071e600 */
byte F_0071e600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb090 + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0071e630 */
byte F_0071e630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb0cc + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0071e660 */
byte F_0071e660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb09c + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0071e690 */
uint F_0071e690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_0071e6b0 */
uint F_0071e6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: Client::Game::Event::EventSceneModuleImplInterface::vf0 */
uint F_0071e790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071e7c0 */
uint F_0071e7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[136])REFP(0x10b83dc));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf0 */
uint F_0071e7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071e820 */
uint F_0071e820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[136])REFP(0x10b8604));
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf0 */
uint F_0071e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071e880 */
uint F_0071e880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[136])REFP(0x10b882c));
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf1 */
uint F_0071e8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf2 */
uint F_0071e8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf4 */
uint F_0071e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf5 */
uint F_0071e8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf6 */
uint F_0071e8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf14 */
uint F_0071e900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf19 */
uint F_0071e910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf20 */
uint F_0071e920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf21 */
uint F_0071e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf22 */
uint F_0071e940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf23 */
uint F_0071e950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf24 */
uint F_0071e960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf25 */
uint F_0071e970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf26 */
uint F_0071e980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf27 */
uint F_0071e990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf28 */
uint F_0071e9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf29 */
uint F_0071e9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf30 */
uint F_0071e9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf31 */
uint F_0071e9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf32 */
uint F_0071e9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf33 */
uint F_0071e9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf34 */
uint F_0071ea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf35 */
uint F_0071ea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf36 */
uint F_0071ea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf37 */
uint F_0071ea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf38 */
uint F_0071ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf39 */
uint F_0071ea50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf40 */
uint F_0071ea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf41 */
uint F_0071ea70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf44 */
uint F_0071ea80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf46 */
uint F_0071ea90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf47 */
uint F_0071eaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf48 */
uint F_0071eab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf49 */
uint F_0071eac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf50 */
uint F_0071ead0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ead0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf51 */
uint F_0071eae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf53 */
uint F_0071eaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf54 */
uint F_0071eb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf55 */
uint F_0071eb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf56 */
uint F_0071eb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf57 */
uint F_0071eb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf58 */
uint F_0071eb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf66 */
uint F_0071eb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf71 */
uint F_0071eb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf73 */
uint F_0071eb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf76 */
uint F_0071eb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf78 */
uint F_0071eb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf81 */
uint F_0071eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf82 */
uint F_0071ebb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf83 */
uint F_0071ebc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf87 */
uint F_0071ebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf93 */
uint F_0071ebe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf94 */
uint F_0071ebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf103 */
uint F_0071ec00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf69 */
uint F_0071ec10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf70 */
uint F_0071ec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf91 */
uint F_0071ec30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf92 */
uint F_0071ec40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf52 */
uint F_0071ec50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf104 */
uint F_0071ec60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf105 */
uint F_0071ec70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf115 */
uint F_0071ec80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf117 */
uint F_0071ec90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf120 */
uint F_0071eca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71eca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf122 */
uint F_0071ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf125 */
uint F_0071ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf127 */
uint F_0071ecd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ecd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf16 */
uint F_0071ece0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ece0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf135 */
uint F_0071ecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf0 */
uint F_0071ed00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ed00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071ed40 */
uint F_0071ed40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ed40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xc0) = *param_2;
  *(undefined4 *)(in_ecx + 0xc4) = param_2[1];
  *(undefined4 *)(in_ecx + 200) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0071ed70 */
uint F_0071ed70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ed70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_0071ed90 */
byte F_0071ed90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71ed90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0xd4 + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071edb0 */
byte F_0071edb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71edb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0xd4 + in_ecx);
}

/* ref: FUN_0071edd0 */
byte F_0071edd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71edd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xd3) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071edf0 */
unsigned int F_0071edf0(unsigned int gen_a0)
{
  GEN_ENTER(0x71edf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 4;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x7e) = 0x1010101;
  *(undefined2 *)((int)this + 0x82) = 0x101;
  *(undefined1 *)((int)this + 0x84) = 1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
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
  *(undefined4 *)((int)this + 0x54) = 0;
  return 0;
}

/* ref: FUN_0071ee90 */
uint F_0071ee90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x71ee90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  return (uint)this;
}

/* ref: FUN_0071eec0 */
uint F_0071eec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71eec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined2 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_0071eef0 */
uint F_0071eef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71eef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_0071ef10 */
uint F_0071ef10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ef10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  *(undefined1 *)(in_ecx + 1) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_0071ef80 */
unsigned int F_0071ef80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0x71ef80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_10 = (undefined4)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined2 *)((int)this + 0xe) = (undefined2)param_6;
  *(undefined1 *)((int)this + 0xc) = 3;
  *(byte *)((int)this + 0x10) =
       (((((((byte)param_13 & 1) * '\x02' | (byte)param_12 & 1) * '\x02' | (byte)param_11 & 1) *
          '\x02' | (byte)param_10 & 1) * '\x02' | (byte)param_9 & 1) * '\x02' | (byte)param_8 & 1) *
       '\x02' | *(byte *)((int)this + 0x10) & 0x80 | (byte)param_7 & 1;
  return 0;
}

/* ref: FUN_0071f000 */
uint F_0071f000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  *(undefined1 *)this = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0x24) = 0;
  puVar3 = param_1;
  puVar5 = this;
  for (iVar2 = 8; puVar5 = puVar5 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  uVar4 = 0;
  piVar6 = this;
  while( true ) {
    piVar6 = piVar6 + 1;
    if (*piVar6 == 0) {
      return (uint)this;
    }
    uVar1 = F_00ab37e0(*piVar6);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x24) == 0x33)) break;
    uVar4 = uVar4 + 1;
    if (7 < uVar4) {
      return (uint)this;
    }
  }
  *(undefined1 *)((int)this + 0x24) = 1;
  return (uint)this;
}

/* ref: FUN_0071f0b0 */
byte F_0071f0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x148) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071f0c0 */
uint F_0071f0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x71f0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 8),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x68) = 0xffff;
  return uVar1;
}

/* ref: FUN_0071f160 */
uint F_0071f160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71f160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined1 *)((int)this + 2) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_0071f180 */
uint F_0071f180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71f180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined2 *)((int)this + 0x2c) = (undefined2)param_2;
  F_0042cc20((undefined *)((int)this + 0x30),param_3,REFG(undefined4, 0x108cc50));
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x84) = param_4;
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
  return (uint)this;
}

/* ref: Client::Game::Event::SelectEventListCallback::vf0 */
uint F_0071f250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f280 */
uint F_0071f280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x18) = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  return (uint)this;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf4 */
unsigned int F_0071f330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf5 */
byte F_0071f340(void)
{
  GEN_ENTER(0x71f340u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf0 */
uint F_0071f350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForFadeTask::vf0 */
uint F_0071f3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCameraPanTask::vf0 */
uint F_0071f3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCameraDollyTask::vf0 */
uint F_0071f440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCameraZoomTask::vf0 */
uint F_0071f490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCameraGyroTask::vf0 */
uint F_0071f4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f510 */
uint F_0071f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x71f510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b0c));
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_4;
  return (uint)this;
}

/* ref: Client::Game::Event::AutoShakeInvokeTask::vf0 */
uint F_0071f550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f580 */
uint F_0071f580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x71f580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b28));
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_6;
  return (uint)this;
}

/* ref: Client::Game::Event::EquipChangeTask::vf0 */
uint F_0071f5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f600 */
uint F_0071f600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71f600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b44));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0xd) = 0;
  return (uint)this;
}

/* ref: Client::Game::Event::IsItemObtainableTask::vf0 */
uint F_0071f640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f6b0 */
byte F_0071f6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x71f6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_6;
  *(byte *)((int)this + 0x15) = (byte)param_7;
  return (byte)param_7;
}

/* ref: FUN_0071f6e0 */
uint F_0071f6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008e9c10(this);
  *(uint *)((int)this + 0x18) = param_1;
  return param_1;
}

/* ref: Client::Game::Event::TalkCallback::TalkEventImpl::vf0 */
uint F_0071f730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8b7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::TalkCallback::TalkAsyncEventImpl::vf1 */
uint F_0071f780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71f780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char cVar1;
  
  cVar1 = *(char *)((int)param_2 + 0x36);
  if (((cVar1 != '\0') || (*(int *)(param_2[1] + 0x60) == 0x34)) ||
     (*(int *)(param_2[1] + 0x60) != 0)) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  *(char *)(param_1 + 1) = cVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::TalkCallback::TalkAsyncEventImpl::vf0 */
uint F_0071f7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8b7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f820 */
uint F_0071f820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)((int)this + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
  *(undefined1 *)((int)this + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
  *(undefined1 *)((int)this + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  F_0042cbc0((undefined *)((int)this + 0x18),param_1 + 6);
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  return (uint)this;
}

/* ref: FUN_0071f880 */
uint F_0071f880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71f880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004adca0(this,7,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0071f8a0 */
uint F_0071f8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f8a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0xb3) == (char)param_2) {
    return in_ecx + 0x18;
  }
  return 0;
}

/* ref: FUN_0071f900 */
uint F_0071f900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)(uintptr_t)this) << 0xb ^ *(uint *)this;
  *(undefined4 *)this = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = (uVar1 >> 0xb ^ uVar2) >> 8 ^ uVar1 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar2;
  *(uint *)((int)this + 8) = uVar1;
  return uVar2 % param_1;
}

/* ref: FUN_0071f970 */
uint F_0071f970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71f970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)(uintptr_t)this) << 0xb ^ *(uint *)this;
  *(undefined4 *)this = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = (uVar1 >> 0xb ^ uVar2) >> 8 ^ uVar1 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar2;
  *(uint *)((int)this + 8) = uVar1;
  iVar3 = ((int)(short)param_2 - (int)(short)param_1) * (uVar2 & 0xffff);
  return ((int)(iVar3 + (iVar3 >> 0x1f & 0xffffU)) >> 0x10) + (int)(short)param_1;
}

/* ref: Client::Game::Event::PostCutSceneTask::vf5 */
byte F_0071f9f0(void)
{
  GEN_ENTER(0x71f9f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::FinalizeSceneTask::vf5 */
byte F_0071fa00(void)
{
  GEN_ENTER(0x71fa00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::CharacterTaskBase::vf6 */
uint F_0071fa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71fa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_0071fa20 */
uint F_0071fa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71fa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(char *)((int)this + 0x40) = (char)param_3;
  if ((char)param_3 != '\0') {
    uVar2 = param_1 * 0x3c + param_2;
    iVar3 = ((((((int)param_1 >> 0x1f) << 4 | param_1 >> 0x1c) - ((int)param_1 >> 0x1f)) -
             (uint)(param_1 * 0x10 < param_1)) * 4 | param_1 * 0xf >> 0x1e) + ((int)param_2 >> 0x1f)
            + (uint)CARRY4(param_1 * 0x3c,param_2);
    uVar1 = (((iVar3 * 0x10 | uVar2 >> 0x1c) - iVar3) - (uint)(uVar2 * 0x10 < uVar2)) * 4 |
            uVar2 * 0xf >> 0x1e;
    *(uint *)((int)this + 0x38) = uVar2 * 0x3c;
    *(uint *)((int)this + 0x3c) = uVar1;
    return uVar1;
  }
  uVar2 = (param_2 + param_1 * 0x3c) * 0x3c;
  uVar1 = (uint)(*(ulonglong *)((int)this + 8) % 0x15180);
  *(uint *)((int)this + 0x3c) = ((int)uVar2 >> 0x1f) - (uint)(uVar2 < uVar1);
  *(uint *)((int)this + 0x38) = uVar2 - uVar1;
  return uVar1;
}

/* ref: FUN_0071fac0 */
uint F_0071fac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71fac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  return param_1;
}

/* ref: FUN_0071fb00 */
uint F_0071fb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71fb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x1c2;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  return (uint)this;
}

/* ref: FUN_0071fb30 */
uint F_0071fb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71fb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)this = 0x1c3;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_4;
  return (uint)this;
}

/* ref: FUN_0071fb60 */
uint F_0071fb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x71fb60u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  param_1[8] = (undefined4)gen_fl2bits(param_4);
  param_1[9] = (undefined4)gen_fl2bits(param_5);
  *param_1 = 0x1c4;
  param_1[1] = 0x28;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[10] = (undefined4)gen_fl2bits(param_6);
  return (uint)param_1;
}

/* ref: FUN_0071fba0 */
uint F_0071fba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x71fba0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  param_1[8] = (undefined4)gen_fl2bits(param_4);
  param_1[9] = (undefined4)gen_fl2bits(param_5);
  *param_1 = 0x1c5;
  param_1[1] = 0x28;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[10] = (undefined4)gen_fl2bits(param_6);
  return (uint)param_1;
}

/* ref: FUN_0071fbe0 */
uint F_0071fbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71fbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x1c6;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0071fc00 */
uint F_0071fc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x71fc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)this = 0x1c7;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined1 *)((int)this + 0x28) = (undefined1)param_5;
  return (uint)this;
}

/* ref: FUN_0071fc50 */
uint F_0071fc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71fc50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0071fcb0 */
uint F_0071fcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x71fcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0071fd20 */
uint F_0071fd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71fd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 2);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x2c);
  *(undefined2 *)((int)this + 0xac) = param_1[0x56];
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0x5a);
  return (uint)this;
}

/* ref: FUN_0071fd80 */
uint F_0071fd80(unsigned int gen_a0)
{
  GEN_ENTER(0x71fd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_0071fda0 */
uint F_0071fda0(unsigned int gen_a0)
{
  GEN_ENTER(0x71fda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x268));
  F_0042c880((undefined *)((int)this + 0x204));
  F_0042c880((undefined *)((int)this + 0x150));
  F_0042c880((undefined *)((int)this + 0xfc));
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0071fe40 */
uint F_0071fe40(unsigned int gen_a0)
{
  GEN_ENTER(0x71fe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa0));
  uVar1 = F_0042c880((undefined *)((int)this + 0x3c));
  return (uint)uVar1;
}

/* ref: FUN_0071ff70 */
uint F_0071ff70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ff70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
  F_0042cbc0((undefined *)((int)this + 0x14),param_1 + 5);
  *(undefined1 *)((int)this + 0x68) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined4 *)((int)this + 0x70) = param_1[0x1c];
  *(undefined4 *)((int)this + 0x78) = param_1[0x1e];
  *(undefined4 *)((int)this + 0x7c) = param_1[0x1f];
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined2 *)((int)this + 0x88) = *(undefined2 *)(param_1 + 0x22);
  *(undefined4 *)((int)this + 0x8a) = *(undefined4 *)((int)param_1 + 0x8a);
  *(undefined1 *)((int)this + 0x8e) = *(undefined1 *)((int)param_1 + 0x8e);
  *(undefined4 *)((int)this + 0x90) = param_1[0x24];
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined2 *)((int)this + 0x98) = *(undefined2 *)(param_1 + 0x26);
  *(undefined2 *)((int)this + 0x9a) = *(undefined2 *)((int)param_1 + 0x9a);
  *(undefined2 *)((int)this + 0x9c) = *(undefined2 *)(param_1 + 0x27);
  *(undefined1 *)((int)this + 0x9e) = *(undefined1 *)((int)param_1 + 0x9e);
  *(undefined4 *)((int)this + 0xa0) = param_1[0x28];
  return (uint)this;
}

/* ref: FUN_0072005c */
uint F_0072005c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72005cu, gen_a0, gen_a1, 0u, 0u);
  uint in_esi = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_esi;
}

/* ref: FUN_00720065 */
unsigned int F_00720065(void)
{
  GEN_ENTER(0x720065u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00720090 */
uint F_00720090(unsigned int gen_a0)
{
  GEN_ENTER(0x720090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 4;
  this_00 = (undefined *)((int)this + 0x254);
  do {
    this_00 = (undefined *)((int)this_00 + -0x74);
    uVar2 = F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_007200b0 */
uint F_007200b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7200b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 0x1c);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0042e430((undefined *)((int)this + 0x1c),&REFG(undefined1, 0x107fc63));
  return (uint)this;
}

/* ref: FUN_00720120 */
uint F_00720120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  F_0042cbc0((undefined *)((int)this + 0x1c),param_1 + 7);
  puVar2 = param_1 + 0x1c;
  puVar3 = (undefined4 *)((int)this + 0x70);
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00720190 */
uint F_00720190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined1 *)((int)this + 2) = *(undefined1 *)((int)param_2 + 0x26);
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)((int)param_2 + 0x27);
  *(undefined2 *)((int)this + 0x1c) = 0x101;
  F_0042cc20((undefined *)((int)this + 0x20),(*param_2 & 0xffffff) + (int)param_2,REFG(undefined4, 0x108cc50));
  uVar1 = param_2[1];
  *(short *)((int)this + 4) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1c) = 0;
  }
  uVar1 = param_2[2];
  *(short *)((int)this + 6) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1c) = 0;
  }
  uVar1 = param_2[3];
  *(short *)((int)this + 8) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1c) = 0;
  }
  uVar1 = param_2[4];
  *(short *)((int)this + 10) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1d) = 0;
  }
  uVar1 = param_2[5];
  *(short *)((int)this + 0xc) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1d) = 0;
  }
  uVar1 = param_2[6];
  *(short *)((int)this + 0xe) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1d) = 0;
  }
  *(char *)((int)this + 0x11) = (char)param_2[10];
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)((int)param_2 + 0x29);
  *(undefined1 *)((int)this + 0x13) = *(undefined1 *)((int)param_2 + 0x2a);
  *(uint *)((int)this + 0x14) = param_2[7];
  *(uint *)((int)this + 0x18) = param_2[8];
  return (uint)this;
}

/* ref: FUN_00720260 */
uint F_00720260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00720290 */
uint F_00720290(unsigned int gen_a0)
{
  GEN_ENTER(0x720290u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 8);
  return in_ecx;
}

/* ref: FUN_007202d0 */
uint F_007202d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7202d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b99750(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x10b8e14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10b8e04));
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandler::vf81 */
unsigned int F_00720300(void)
{
  GEN_ENTER(0x720300u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf82 */
unsigned int F_00720310(void)
{
  GEN_ENTER(0x720310u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf94 */
unsigned int F_00720320(void)
{
  GEN_ENTER(0x720320u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf110 */
unsigned int F_00720330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf113 */
uint F_00720340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x720340u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x208))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf117 */
byte F_00720350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (byte)param_2;
}

/* ref: Client::Game::Event::EventHandler::vf118 */
uint F_00720360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf119 */
uint F_00720370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x720370u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf122 */
uint F_00720380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf123 */
byte F_00720390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf124 */
unsigned int F_007203a0(void)
{
  GEN_ENTER(0x7203a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf125 */
unsigned int F_007203b0(void)
{
  GEN_ENTER(0x7203b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf129 */
uint F_007203c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7203c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x200))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf130 */
uint F_007203d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7203d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf138 */
uint F_007203e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7203e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf139 */
unsigned int F_007203f0(void)
{
  GEN_ENTER(0x7203f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf149 */
unsigned int F_00720400(void)
{
  GEN_ENTER(0x720400u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf150 */
unsigned int F_00720410(void)
{
  GEN_ENTER(0x720410u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf143 */
unsigned int F_00720420(void)
{
  GEN_ENTER(0x720420u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00720450 */
uint F_00720450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(param_1 + 3);
  *(undefined2 *)((int)this + 0xe) = *(undefined2 *)((int)param_1 + 0xe);
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 4);
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
  *(undefined1 *)((int)this + 0x13) = *(undefined1 *)((int)param_1 + 0x13);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined2 *)((int)this + 0x28) = *(undefined2 *)(param_1 + 10);
  *(undefined2 *)((int)this + 0x2a) = *(undefined2 *)((int)param_1 + 0x2a);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0xb);
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined2 *)((int)this + 0x34) = *(undefined2 *)(param_1 + 0xd);
  F_0042cbc0((undefined *)((int)this + 0x38),param_1 + 0xe);
  *(undefined4 *)((int)this + 0x8c) = param_1[0x23];
  *(undefined4 *)((int)this + 0x90) = param_1[0x24];
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined4 *)((int)this + 0x98) = param_1[0x26];
  F_0042cbc0((undefined *)((int)this + 0x9c),param_1 + 0x27);
  return (uint)this;
}

/* ref: FUN_00720580 */
uint F_00720580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9078));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VEventHandler_Event_Game_Client_Event::vf1 */
uint F_007205b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7205b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xa0))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FormatStringCallback_VEventHandler_Event_Game_Client_Event::vf2 */
byte F_007205d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7205d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_007205f0 */
uint F_007205f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7205f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9088));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: ActionTimelineCallback_VEventHandler_Event_Game_Client_Event::vf1 */
uint F_00720620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x720620u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xa4))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: ActionTimelineCallback_VEventHandler_Event_Game_Client_Event::vf2 */
byte F_00720640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720660 */
uint F_00720660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9098));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: ListenItemCallback_VEventHandler_Event_Game_Client_Event::vf1 */
uint F_00720690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x720690u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xcc))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: ListenItemCallback_VEventHandler_Event_Game_Client_Event::vf2 */
byte F_007206b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7206b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_007206e0 */
uint F_007206e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7206e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_007206f0 */
uint F_007206f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7206f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00720700 */
uint F_00720700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00720710 */
uint F_00720710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

