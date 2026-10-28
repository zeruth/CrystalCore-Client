#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c168a0 */
GEN_NOFRAME uint F_00c168a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc168a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  uVar2 = F_00b9a940(param_1,1);
  uVar3 = param_1;
  if (uVar2 == 8) {
    uVar3 = F_00b9ad30(param_1,1);
  }
  uVar4 = (uint)(uVar2 == 8);
  puVar5 = ((undefined1 *)(gen_frame + 0x8));
  iVar1 = uVar4 + 1;
  uVar2 = F_00b9c9b0(param_1,iVar1);
  uVar2 = F_00c01ae0(uVar3,uVar2,puVar5);
  if (uVar2 != 0) {
    uVar2 = F_00b9c9b0(param_1,uVar4 + 2);
    uVar2 = F_00c01bf0(uVar3,((undefined1 *)(gen_frame + 0x8)),uVar2);
    if (uVar2 == 0) {
      F_00b9adc0(param_1);
      F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      return 1;
    }
    F_00b9a680(uVar3,param_1,1);
    F_00b9ae60(param_1,uVar2);
    F_00b9a910(param_1,0xfffffffe);
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return 2;
  }
  uVar3 = F_00b9c590(param_1,iVar1,((char *)REFP(0x13482e4)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00c16990 */
GEN_NOFRAME uint F_00c16990(unsigned int gen_a0)
{
  GEN_ENTER(0xc16990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  uVar1 = F_00b9a940(param_1,1);
  uVar2 = param_1;
  if (uVar1 == 8) {
    uVar2 = F_00b9ad30(param_1,1);
  }
  uVar3 = (uint)(uVar1 == 8);
  puVar4 = ((undefined1 *)(gen_frame + 0x8));
  uVar1 = F_00b9c9b0(param_1,uVar3 + 1);
  uVar1 = F_00c01ae0(uVar2,uVar1,puVar4);
  if (uVar1 != 0) {
    F_00b9c7f0(param_1,uVar3 + 3);
    F_00b9a760(param_1,uVar3 + 3);
    F_00b9a680(param_1,uVar2,1);
    uVar1 = F_00b9c9b0(param_1,uVar3 + 2);
    uVar2 = F_00c01c40(uVar2,((undefined1 *)(gen_frame + 0x8)),uVar1);
    F_00b9ae60(param_1,uVar2);
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return 1;
  }
  uVar2 = F_00b9c590(param_1,uVar3 + 1,((char *)REFP(0x13482f8)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c16ae0 */
GEN_NOFRAME uint F_00c16ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xc16ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c9b0(param_1,2);
  F_00b9c7a0(param_1,1,6);
  uVar2 = F_00b9a980(param_1,1);
  if (uVar2 == 0) {
    uVar1 = F_00b9ba00(param_1,1,uVar1);
    if (uVar1 != 0) {
      F_00b9ae60(param_1,uVar1);
      F_00b9a800(param_1,0xfffffffe);
      return 2;
    }
  }
  return 0;
}

/* ref: FUN_00c16b40 */
GEN_NOFRAME uint F_00c16b40(unsigned int gen_a0)
{
  GEN_ENTER(0xc16b40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  F_00b9c7f0(param_1,3);
  uVar1 = F_00b9c9b0(param_1,2);
  F_00b9c7a0(param_1,1,6);
  uVar2 = F_00b9a980(param_1,1);
  if (uVar2 == 0) {
    uVar1 = F_00b9ba90(param_1,1,uVar1);
    if (uVar1 != 0) {
      F_00b9ae60(param_1,uVar1);
      F_00b9a800(param_1,0xffffffff);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c16ba0 */
GEN_NOFRAME uint F_00c16ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc16ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00b9aff0(param_1,&REFG(undefined, 0x110e8e0));
  F_00b9b0d0(param_1,0xffffd8f0);
  F_00b9aff0(param_1,param_1);
  F_00b9b0d0(param_1,0xfffffffe);
  uVar1 = F_00b9a940(param_1,0xffffffff);
  if (uVar1 == 6) {
    F_00b9ae60(param_1,(&REFG(undefined * PTR32, 0x110e8e4))[(int)(*param_2)]);
    if (-1 < param_2[5]) {
      F_00b9ae00(param_1,param_2[5]);
      uVar1 = F_00b9b510(param_1,2,0);
      return uVar1;
    }
    F_00b9adc0(param_1);
    uVar1 = F_00b9b510(param_1,2,0);
  }
  return uVar1;
}

/* ref: FUN_00c16c30 */
GEN_NOFRAME uint F_00c16c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc16c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_edi = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c51da0(in_edi,99);
  uVar2 = (uint)(uVar1 != 0);
  uVar1 = F_00c51da0(in_edi,0x72);
  if (uVar1 != 0) {
    uVar2 = uVar2 | 2;
  }
  uVar1 = F_00c51da0(in_edi,0x6c);
  if (uVar1 != 0) {
    uVar2 = uVar2 | 4;
  }
  if (0 < param_2) {
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}

/* ref: FUN_00c16cb0 */
GEN_NOFRAME uint F_00c16cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc16cb0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9aff0(in_esi,&REFG(undefined, 0x110e8e0));
  F_00b9b0d0(in_esi,0xffffd8f0);
  uVar1 = F_00b9a940(in_esi,0xffffffff);
  if (uVar1 != 5) {
    F_00b9a760(in_esi,0xfffffffe);
    F_00b9b150(in_esi,0,1);
    F_00b9aff0(in_esi,&REFG(undefined, 0x110e8e0));
    F_00b9a910(in_esi,0xfffffffe);
    uVar1 = F_00b9b2f0(in_esi,0xffffd8f0);
  }
  return uVar1;
}

/* ref: FUN_00c16d10 */
GEN_NOFRAME uint F_00c16d10(unsigned int gen_a0)
{
  GEN_ENTER(0xc16d10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  code * local_4;
  
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 != 8) {
    local_8 = param_1;
  }
  else {
    local_8 = F_00b9ad30(param_1,1);
  }
  uVar3 = (uint)(uVar2 == 8);
  iVar1 = uVar3 + 1;
  uVar2 = F_00b9a940(param_1,iVar1);
  if ((int)uVar2 < 1) {
    F_00b9a760(param_1,iVar1);
    uVar2 = 0;
    local_4 = (code *)0x0;
    uVar3 = 0;
  }
  else {
    uVar2 = F_00b9c820(param_1,uVar3 + 2,0);
    F_00b9c7a0(param_1,iVar1,6);
    uVar3 = F_00b9ca20(param_1,uVar3 + 3,0);
    local_4 = ((code *)REFP(0xc16ba0));
    uVar2 = F_00c16c30(uVar2,uVar3);
  }
  F_00c16cb0(param_1);
  F_00b9aff0(param_1,local_8);
  F_00b9a910(param_1,iVar1);
  F_00b9b2f0(param_1,0xfffffffd);
  F_00b9a760(param_1,0xfffffffe);
  F_00c01a80(local_8,local_4,uVar2,uVar3);
  return 0;
}

/* ref: FUN_00c16df0 */
GEN_NOFRAME uint F_00c16df0(unsigned int gen_a0)
{
  GEN_ENTER(0xc16df0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  code * pcVar3;
  uint uVar4;
  bool bVar5;
  
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x4));
  uVar1 = F_00b9a940(param_1,1);
  uVar2 = param_1;
  if (uVar1 == 8) {
    uVar2 = F_00b9ad30(param_1,1);
  }
  uVar1 = F_00c01ac0(uVar2);
  pcVar3 = (code *)F_00c01ab0(uVar2);
  if ((pcVar3 == (code *)0x0) || (pcVar3 == ((code *)REFP(0xc16ba0)))) {
    F_00c16cb0(param_1);
    F_00b9aff0(param_1,uVar2);
    F_00b9b0d0(param_1,0xfffffffe);
    F_00b9a7b0(param_1,0xfffffffe);
  }
  else {
    F_00b9ae20(param_1,((char *)REFP(0x1348338)),0xd);
  }
  bVar5 = (uVar1 & 1) != 0;
  if (bVar5) {
    ((undefined1 *)(gen_frame + 0x4))[0] = 99;
  }
  uVar4 = (uint)bVar5;
  if ((uVar1 & 2) != 0) {
    ((undefined1 *)(gen_frame + 0x4))[(int)(uVar4)] = 0x72;
    uVar4 = uVar4 + 1;
  }
  if ((uVar1 & 4) != 0) {
    ((undefined1 *)(gen_frame + 0x4))[(int)(uVar4)] = 0x6c;
    uVar4 = uVar4 + 1;
  }
  ((undefined1 *)(gen_frame + 0x4))[(int)(uVar4)] = 0;
  F_00b9ae60(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_00c01ad0(uVar2);
  F_00b9ae00(param_1,uVar2);
  F_00c47745((*(uint *)(gen_frame + 0xc)) ^ (uint)((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 3;
}

/* ref: FUN_00c16ee0 */
GEN_NOFRAME uint F_00c16ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc16ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  uint uVar2;
  undefined * pFVar3;
  char * pcVar4;
  byte * pbVar5;
  int iVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x0));
  uVar2 = F_00c50860();
  F_00c5075a(REFG(char, 0x1348348),(undefined *)(uVar2 + 0x40));
  pFVar3 = (undefined *)F_00c50860();
  pcVar4 = F_00c5281f((char *)((byte *)(gen_frame + 0x0)),0xfa,pFVar3);
  while (pcVar4 != (char *)0x0) {
    pcVar4 = ((char *)REFP(0x1348354));
    pbVar5 = ((byte *)(gen_frame + 0x0));
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_00c16f60: ;
        iVar6 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00c16f65;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_00c16f60;
      pbVar5 = pbVar5 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00c16f65: ;
    if (iVar6 == 0) break;
    pbVar5 = ((byte *)(gen_frame + 0x0));
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    uVar2 = F_00b9c490(param_1,((byte *)(gen_frame + 0x0)),(int)pbVar5 - (int)(((byte *)(gen_frame + 0x0)) + 1),
                         ((char *)REFP(0x134835c)));
    if ((uVar2 != 0) || (uVar2 = F_00b9b570(param_1,0,0,0), uVar2 != 0)) {
      uVar2 = F_00c50860();
      pFVar3 = (undefined *)(uVar2 + 0x40);
      pcVar4 = (char *)F_00b9abf0(param_1,0xffffffff,0);
      F_00c5075a(pcVar4,pFVar3);
      uVar2 = F_00c50860();
      F_00c5075a(&REFG(undefined, 0x1348370),(undefined *)(uVar2 + 0x40));
    }
    F_00b9a760(param_1,0);
    uVar2 = F_00c50860();
    F_00c5075a(REFG(char, 0x1348348),(undefined *)(uVar2 + 0x40));
    pFVar3 = (undefined *)F_00c50860();
    pcVar4 = F_00c5281f((char *)((byte *)(gen_frame + 0x0)),0xfa,pFVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0xfc)) ^ (uint)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c17030 */
GEN_NOFRAME uint F_00c17030(unsigned int gen_a0)
{
  GEN_ENTER(0xc17030u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint *)(gen_frame + 0x0));
  (*(uint *)(gen_frame + 0x4)) = 1;
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 != 8) {
    (*(uint *)(gen_frame + 0x0)) = 0;
    uVar3 = param_1;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = 1;
    uVar3 = F_00b9ad30(param_1,1);
  }
  uVar2 = (uint)(uVar2 == 8);
  uVar4 = F_00b9a9b0(param_1,uVar2 + 2);
  if (uVar4 == 0) {
    uVar4 = (uint)(param_1 == uVar3);
  }
  else {
    uVar4 = F_00b9ab70(param_1,uVar2 + 2);
    F_00b9a760(param_1,0xfffffffe);
  }
  uVar5 = F_00b9a750(param_1);
  if (uVar5 == uVar2) {
    uVar8 = 0;
    puVar7 = &REFG(undefined, 0x14c5bf1);
  }
  else {
    uVar5 = F_00b9a9f0(param_1,uVar2 + 1);
    if (uVar5 == 0) goto LAB_00c17272;
    uVar8 = 1;
    puVar7 = &REFG(undefined, 0x1348374);
  }
  F_00b9ae20(param_1,puVar7,uVar8);
  F_00b9ae20(param_1,((char *)REFP(0x1348378)),0x10);
  uVar5 = F_00c01ae0(uVar3,uVar4,((byte *)(gen_frame + 0x8)));
  while (uVar5 != 0) {
    uVar6 = uVar4 + 1;
    if (((int)uVar6 < 0xd) || ((*(uint *)(gen_frame + 0x4)) == 0)) {
      F_00b9ae20(param_1,&REFG(undefined, 0x1348394),2);
      F_00c028c0(uVar3,&REFG(undefined, 0x1348398),((byte *)(gen_frame + 0x8)));
      F_00b9af00(param_1,&REFG(undefined, 0x134839c),((undefined1 *)(gen_frame + 0x2c)));
      if (0 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20))) {
        F_00b9af00(param_1,&REFG(undefined, 0x13483a0),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)));
      }
      if (*(char *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) == '\0') {
        cVar1 = *(char *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
        if (cVar1 == 'm') {
          F_00b9af00(param_1,((char *)REFP(0x13483b8)));
        }
        else if ((cVar1 == 'C') || (cVar1 == 't')) {
          F_00b9ae20(param_1,&REFG(undefined, 0x13483c8),2);
        }
        else {
          F_00b9af00(param_1,((char *)REFP(0x13483cc)),((undefined1 *)(gen_frame + 0x2c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)));
        }
      }
      else {
        F_00b9af00(param_1,((char *)REFP(0x13483a4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)));
      }
      uVar4 = F_00b9a750(param_1);
      F_00b9b880(param_1,uVar4 - uVar2);
    }
    else {
      uVar2 = F_00c01ae0(uVar3,uVar4 + 0xb,((byte *)(gen_frame + 0x8)));
      if (uVar2 == 0) {
        (*(uint *)(gen_frame + 0x4)) = uVar2;
        uVar6 = uVar4;
        uVar2 = (*(uint *)(gen_frame + 0x0));
      }
      else {
        F_00b9ae20(param_1,((char *)REFP(0x134838c)),5);
        uVar4 = F_00c01ae0(uVar3,uVar4 + 0xb,((byte *)(gen_frame + 0x8)));
        uVar2 = (*(uint *)(gen_frame + 0x0));
        while ((*(uint *)(gen_frame + 0x0)) = uVar2, uVar4 != 0) {
          uVar4 = F_00c01ae0(uVar3,uVar6 + 0xb,((byte *)(gen_frame + 0x8)));
          uVar6 = uVar6 + 1;
          uVar2 = (*(uint *)(gen_frame + 0x0));
        }
        (*(uint *)(gen_frame + 0x4)) = 0;
      }
    }
    uVar5 = F_00c01ae0(uVar3,uVar6,((byte *)(gen_frame + 0x8)));
    uVar4 = uVar6;
  }
  uVar3 = F_00b9a750(param_1);
  F_00b9b880(param_1,uVar3 - uVar2);
LAB_00c17272: ;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17290 */
GEN_NOFRAME uint F_00c17290(unsigned int gen_a0)
{
  GEN_ENTER(0xc17290u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9cd70(param_1,((char *)REFP(0x134847c)),&REFG(undefined * PTR32, 0x110e8f8));
  return 1;
}

/* ref: FUN_00c172b0 */
GEN_NOFRAME uint F_00c172b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc172b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,GEN_TOD(ABS((double)fVar1)));
  return 1;
}

/* ref: FUN_00c172e0 */
GEN_NOFRAME uint F_00c172e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc172e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar1;
  float fVar2;
  
  fVar2 = F_00b9c8e0(param_1,1);
  fVar1 = ((float10)GEN_TOD(fsin((float10)fVar2)));
  F_00b9ade0(param_1,(double)fVar1);
  return 1;
}

/* ref: FUN_00c17310 */
GEN_NOFRAME uint F_00c17310(unsigned int gen_a0)
{
  GEN_ENTER(0xc17310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,8)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17340 */
GEN_NOFRAME uint F_00c17340(unsigned int gen_a0)
{
  GEN_ENTER(0xc17340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar1;
  float fVar2;
  
  fVar2 = F_00b9c8e0(param_1,1);
  fVar1 = ((float10)GEN_TOD(fcos((float10)fVar2)));
  F_00b9ade0(param_1,(double)fVar1);
  return 1;
}

/* ref: FUN_00c17370 */
GEN_NOFRAME uint F_00c17370(unsigned int gen_a0)
{
  GEN_ENTER(0xc17370u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,9)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c173a0 */
GEN_NOFRAME uint F_00c173a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc173a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,4)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c173d0 */
GEN_NOFRAME uint F_00c173d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc173d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,10)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17400 */
GEN_NOFRAME uint F_00c17400(unsigned int gen_a0)
{
  GEN_ENTER(0xc17400u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,6)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17430 */
GEN_NOFRAME uint F_00c17430(unsigned int gen_a0)
{
  GEN_ENTER(0xc17430u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,7)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17460 */
GEN_NOFRAME uint F_00c17460(unsigned int gen_a0)
{
  GEN_ENTER(0xc17460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,5)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17490 */
GEN_NOFRAME uint F_00c17490(unsigned int gen_a0)
{
  GEN_ENTER(0xc17490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = F_00b9c8e0(param_1,1);
  fVar3 = F_00b9c8e0(param_1,2);
  fVar1 = ((float10)GEN_TOD(atan2((float10)fVar2,(float10)fVar3)));
  F_00b9ade0(param_1,(double)fVar1);
  return 1;
}

/* ref: FUN_00c174e0 */
GEN_NOFRAME uint F_00c174e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc174e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double dVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  dVar2 = (GEN_X87MATH(((double)fVar3),0xe));
  F_00b9ade0(param_1,dVar2);
  return 1;
}

/* ref: FUN_00c17510 */
GEN_NOFRAME uint F_00c17510(unsigned int gen_a0)
{
  GEN_ENTER(0xc17510u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double dVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  dVar2 = (GEN_X87MATH(((double)fVar3),0xd));
  F_00b9ade0(param_1,dVar2);
  return 1;
}

/* ref: FUN_00c17540 */
GEN_NOFRAME uint F_00c17540(unsigned int gen_a0)
{
  GEN_ENTER(0xc17540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  float fVar2;
  
  fVar1 = F_00b9c8e0(param_1,1);
  fVar2 = F_00b9c8e0(param_1,2);
  F_00b9ade0(param_1,((double)GEN_TOD(((float10)fVar1 -
                               (float10)(longlong)((float10)fVar1 / (float10)fVar2) * (float10)fVar2
                               ))));
  return 1;
}

/* ref: FUN_00c17590 */
GEN_NOFRAME uint F_00c17590(unsigned int gen_a0)
{
  GEN_ENTER(0xc17590u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  float fVar2;
  double * pdVar3;
  
  pdVar3 = &(*(double *)(gen_frame + 0x0));
  fVar2 = F_00b9c8e0(param_1,1);
  fVar1 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)fVar2),
                       (int)((ulonglong)gen_d2bits((double)fVar2) >> 0x20),pdVar3);
  (*(double *)(gen_frame + 0x8)) = (double)fVar1;
  F_00b9ade0(param_1,(*(double *)(gen_frame + 0x0)));
  F_00b9ade0(param_1,(*(double *)(gen_frame + 0x8)));
  return 2;
}

/* ref: FUN_00c175e0 */
GEN_NOFRAME uint F_00c175e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc175e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,GEN_TOD(SQRT((double)fVar1)));
  return 1;
}

/* ref: FUN_00c17610 */
GEN_NOFRAME uint F_00c17610(unsigned int gen_a0)
{
  GEN_ENTER(0xc17610u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar4 = F_00b9c8e0(param_1,2);
  fVar2 = ((float10)GEN_TOD(pow((float10)fVar3,(float10)fVar4)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17660 */
GEN_NOFRAME uint F_00c17660(unsigned int gen_a0)
{
  GEN_ENTER(0xc17660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,2)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17690 */
GEN_NOFRAME uint F_00c17690(unsigned int gen_a0)
{
  GEN_ENTER(0xc17690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,3)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c176c0 */
GEN_NOFRAME uint F_00c176c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc176c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,1)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c176f0 */
GEN_NOFRAME uint F_00c176f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc176f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,(double)fVar1 / *(double *)&REFG(undefined, 0x110ea58));
  return 1;
}

/* ref: FUN_00c17720 */
GEN_NOFRAME uint F_00c17720(unsigned int gen_a0)
{
  GEN_ENTER(0xc17720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,(double)fVar1 * *(double *)&REFG(undefined, 0x110ea58));
  return 1;
}

/* ref: FUN_00c17750 */
GEN_NOFRAME uint F_00c17750(unsigned int gen_a0)
{
  GEN_ENTER(0xc17750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  double dVar2;
  int * _Y;
  
  _Y = &(*(int *)(gen_frame + 0xc));
  fVar1 = F_00b9c8e0(param_1,1);
  dVar2 = F_00c52990((double)fVar1,_Y);
  F_00b9ade0(param_1,dVar2);
  F_00b9ae00(param_1,(*(int *)(gen_frame + 0xc)));
  return 2;
}

/* ref: FUN_00c17790 */
GEN_NOFRAME uint F_00c17790(unsigned int gen_a0)
{
  GEN_ENTER(0xc17790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint _Y;
  float fVar1;
  double dVar2;
  
  _Y = F_00b9c9b0(param_1,2);
  fVar1 = F_00b9c8e0(param_1,1);
  dVar2 = F_00c52a5e((double)fVar1,_Y);
  F_00b9ade0(param_1,dVar2);
  return 1;
}

/* ref: FUN_00c177d0 */
GEN_FRAME uint F_00c177d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc177d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  float fVar3;
  double local_50;
  
  uVar1 = F_00b9a750(param_1);
  fVar3 = F_00b9c8e0(param_1,1);
  local_50 = (double)fVar3;
  iVar2 = 2;
  if (1 < (int)uVar1) {
    do {
      fVar3 = F_00b9c8e0(param_1,iVar2);
      if ((double)fVar3 < local_50) {
        local_50 = (double)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)uVar1);
  }
  F_00b9ade0(param_1,local_50);
  return 1;
}

/* ref: FUN_00c17850 */
GEN_FRAME uint F_00c17850(unsigned int gen_a0)
{
  GEN_ENTER(0xc17850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  float fVar3;
  double local_50;
  
  uVar1 = F_00b9a750(param_1);
  fVar3 = F_00b9c8e0(param_1,1);
  local_50 = (double)fVar3;
  iVar2 = 2;
  if (1 < (int)uVar1) {
    do {
      fVar3 = F_00b9c8e0(param_1,iVar2);
      if (local_50 < (double)fVar3) {
        local_50 = (double)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)uVar1);
  }
  F_00b9ade0(param_1,local_50);
  return 1;
}

/* ref: FUN_00c178d0 */
GEN_NOFRAME uint F_00c178d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc178d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = F_00c4f2dd();
  dVar3 = (double)((int)uVar1 % 0x7fff) / *(double *)&REFG(undefined, 0x10920e0);
  uVar1 = F_00b9a750(param_1);
  if (uVar1 == 0) {
    F_00b9ade0(param_1,dVar3);
    return 1;
  }
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13484ac)));
      return uVar1;
    }
    uVar1 = F_00b9c9b0(param_1,1);
    uVar2 = F_00b9c9b0(param_1,2);
    if ((int)uVar2 < (int)uVar1) {
      F_00b9c590(param_1,2,((char *)REFP(0x1348498)));
    }
    dVar3 = (double)(int)((uVar2 - uVar1) + 1) * dVar3;
    dVar4 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar3));
    dVar4 = (dVar3 + dVar4) - dVar4;
    F_00b9ade0(param_1,GEN_TOD((dVar4 - gen_bits2d(-(ulonglong)
                                              !(dVar4 - dVar3 <=
                                               gen_bits2d(REFG(ulonglong, 0x110e628) &
                                                          (ulonglong)gen_d2bits(dVar3))) &
                                             (ulonglong)gen_d2bits(REFG(double, 0x1088130)))) +
                         (double)(int)uVar1));
    return 1;
  }
  uVar1 = F_00b9c9b0(param_1,1);
  if ((int)uVar1 < 1) {
    F_00b9c590(param_1,1,((char *)REFP(0x1348484)));
  }
  dVar3 = (double)(int)uVar1 * dVar3;
  dVar4 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar3));
  dVar4 = (dVar3 + dVar4) - dVar4;
  F_00b9ade0(param_1,GEN_TOD((dVar4 - gen_bits2d(-(ulonglong)
                                            !(dVar4 - dVar3 <=
                                             gen_bits2d(REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar3))
                                             ) & (ulonglong)gen_d2bits(REFG(double, 0x1088130)))) +
                       REFG(double, 0x1088130)));
  return 1;
}

/* ref: FUN_00c17a80 */
GEN_NOFRAME uint F_00c17a80(unsigned int gen_a0)
{
  GEN_ENTER(0xc17a80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(param_1,1);
  F_00c4f2cb(uVar1);
  return 0;
}

/* ref: FUN_00c17aa0 */
GEN_NOFRAME uint F_00c17aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xc17aa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9cd70(param_1,&REFG(undefined, 0x1348580),&REFG(undefined * PTR32, 0x110e970));
  F_00b9ade0(param_1,*(double *)&REFG(undefined, 0x110ea60));
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348588));
  F_00b9ade0(param_1,*(double *)&REFG(undefined, 0x134b0a0));
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x134858c));
  F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348594));
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x134859c));
  return 1;
}

/* ref: FUN_00c17b20 */
GEN_NOFRAME uint F_00c17b20(unsigned int gen_a0)
{
  GEN_ENTER(0xc17b20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00b9c820(param_1,1,&(*(undefined4 *)(gen_frame + 0xc)));
  F_00b9ae00(param_1,(*(undefined4 *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00c17b70 */
GEN_NOFRAME uint F_00c17b70(unsigned int gen_a0)
{
  GEN_ENTER(0xc17b70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0xc)));
  uVar4 = (*(uint *)(gen_frame + 0xc));
  uVar3 = F_00b9c9b0(param_1,2);
  uVar1 = (*(uint *)(gen_frame + 0xc));
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1 + uVar4;
  }
  uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
  uVar4 = F_00b9ca20(param_1,3,0xffffffff);
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + 1 + uVar1;
  }
  uVar4 = uVar4 & ((int)uVar4 < 0) - 1;
  if ((int)uVar3 < 1) {
    uVar3 = 1;
  }
  if ((int)(*(uint *)(gen_frame + 0xc)) < (int)uVar4) {
    uVar4 = (*(uint *)(gen_frame + 0xc));
  }
  if ((int)uVar3 <= (int)uVar4) {
    F_00b9ae20(param_1,(uVar3 - 1) + uVar2,(uVar4 - uVar3) + 1);
    return 1;
  }
  F_00b9ae20(param_1,&REFG(undefined, 0x14c5bf2),0);
  return 1;
}

/* ref: FUN_00c17c20 */
GEN_NOFRAME uint F_00c17c20(unsigned int gen_a0)
{
  GEN_ENTER(0xc17c20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  int iVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0xc));
  uVar2 = F_00b9c820(param_1,1,&(*(int *)(gen_frame + 0xc)));
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x10)));
  iVar1 = (*(int *)(gen_frame + 0xc));
  while (iVar1 != 0) {
    (*(int *)(gen_frame + 0xc)) = iVar1 - 1;
    if (&(*(uint *)(gen_frame + 0x21c)) <= ((uint * PTR32 *)(gen_frame + 0x10))[0]) {
      F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x10)));
    }
    *(undefined1 *)((uint * PTR32 *)(gen_frame + 0x10))[0] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + uVar2);
    ((uint * PTR32 *)(gen_frame + 0x10))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x10))[0] + 1);
    iVar1 = (*(int *)(gen_frame + 0xc));
  }
  (*(int *)(gen_frame + 0xc)) = -1;
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(int *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17ce0 */
GEN_NOFRAME uint F_00c17ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xc17ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint *)(gen_frame + 0xc));
  uVar1 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0xc)));
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x10)));
  uVar3 = 0;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    do {
      if (&(*(uint *)(gen_frame + 0x21c)) <= ((uint * PTR32 *)(gen_frame + 0x10))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x10)));
      }
      iVar2 = F_00c4ef4f((uint)*(byte *)(uVar3 + uVar1));
      *(char *)((uint * PTR32 *)(gen_frame + 0x10))[0] = (char)iVar2;
      ((uint * PTR32 *)(gen_frame + 0x10))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x10))[0] + 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(gen_frame + 0xc)));
  }
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(uint *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17d90 */
GEN_NOFRAME uint F_00c17d90(unsigned int gen_a0)
{
  GEN_ENTER(0xc17d90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint *)(gen_frame + 0xc));
  uVar1 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0xc)));
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x10)));
  uVar3 = 0;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    do {
      if (&(*(uint *)(gen_frame + 0x21c)) <= ((uint * PTR32 *)(gen_frame + 0x10))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x10)));
      }
      iVar2 = F_00c52d33((uint)*(byte *)(uVar3 + uVar1));
      *(char *)((uint * PTR32 *)(gen_frame + 0x10))[0] = (char)iVar2;
      ((uint * PTR32 *)(gen_frame + 0x10))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x10))[0] + 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(gen_frame + 0xc)));
  }
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(uint *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17e40 */
GEN_NOFRAME uint F_00c17e40(unsigned int gen_a0)
{
  GEN_ENTER(0xc17e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc));
  uVar1 = F_00b9c820(param_1,1,&(*(undefined4 *)(gen_frame + 0xc)));
  uVar2 = F_00b9c9b0(param_1,2);
  F_00b9c080(param_1,((undefined1 *)(gen_frame + 0x10)));
  for (; 0 < (int)uVar2; uVar2 = uVar2 - 1) {
    F_00b9bf30(((undefined1 *)(gen_frame + 0x10)),uVar1,(*(undefined4 *)(gen_frame + 0xc)));
  }
  F_00b9bfc0(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17ee0 */
GEN_NOFRAME uint F_00c17ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc17ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0x8)));
  uVar3 = (*(uint *)(gen_frame + 0x8));
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  uVar2 = F_00b9ca20(param_1,2,1);
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 1 + uVar3;
  }
  uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
  uVar3 = F_00b9ca20(param_1,3,uVar2);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1 + uVar4;
  }
  uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  if ((*(uint *)(gen_frame + 0x8)) < uVar3) {
    uVar3 = (*(uint *)(gen_frame + 0x8));
  }
  if ((int)uVar3 < (int)uVar2) {
    return 0;
  }
  uVar4 = (uVar3 - uVar2) + 1;
  if ((int)(uVar4 + uVar2) <= (int)uVar3) {
    F_00b9bbd0(param_1,((char *)REFP(0x13485a0)));
  }
  F_00b9bc60(param_1,uVar4,((char *)REFP(0x13485b8)));
  iVar5 = 0;
  if (0 < (int)uVar4) {
    iVar1 = (uVar2 - 1) + (*(uint *)(gen_frame + 0xc));
    do {
      F_00b9ae00(param_1,(uint)*(byte *)(iVar1 + iVar5));
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar4);
  }
  return uVar4;
}

/* ref: FUN_00c17fc0 */
GEN_NOFRAME uint F_00c17fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc17fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((uint * PTR32 *)(gen_frame + 0x0));
  uVar1 = F_00b9a750(param_1);
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x0)));
  iVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      uVar2 = F_00b9c9b0(param_1,iVar3);
      if ((uVar2 & 0xff) != uVar2) {
        F_00b9c590(param_1,iVar3,((char *)REFP(0x13485d0)));
      }
      if (&(*(uint *)(gen_frame + 0x20c)) <= ((uint * PTR32 *)(gen_frame + 0x0))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x0)));
      }
      *(char *)((uint * PTR32 *)(gen_frame + 0x0))[0] = (char)uVar2;
      ((uint * PTR32 *)(gen_frame + 0x0))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x0))[0] + 1);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)uVar1);
  }
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c18080 */
GEN_NOFRAME uint F_00c18080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00b9bf30(param_4,param_2,param_3);
  return 0;
}

/* ref: FUN_00c180a0 */
GEN_NOFRAME uint F_00c180a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc180a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0));
  F_00b9c7a0(param_1,1,6);
  F_00b9a760(param_1,1);
  F_00b9c080(param_1,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00b9b6d0(param_1,((code *)REFP(0xc18080)),((undefined1 *)(gen_frame + 0x0)));
  if (uVar1 != 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x13485e0)));
  }
  F_00b9bfc0(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c18190 */
GEN_NOFRAME uint F_00c18190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc18190u, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  char * pcVar1;
  char * pcVar2;
  
  pcVar1 = in_eax + 1;
  if (*in_eax == '%') {
    if (*pcVar1 == '\0') {
      F_00b9bbd0(*(undefined4 *)(in_edi + 8),((char *)REFP(0x1348630)));
    }
    return (uint)(in_eax + 2);
  }
  if (*in_eax != '[') {
    return (uint)pcVar1;
  }
  if (*pcVar1 == '^') {
    pcVar1 = in_eax + 2;
  }
  do {
    if (*pcVar1 == '\0') {
      F_00b9bbd0(*(undefined4 *)(in_edi + 8),((char *)REFP(0x1348654)));
    }
    pcVar2 = pcVar1 + 1;
    if ((*pcVar1 == '%') && (*pcVar2 != '\0')) {
      pcVar2 = pcVar1 + 2;
    }
    pcVar1 = pcVar2;
  } while (*pcVar2 != ']');
  return (uint)(pcVar2 + 1);
}

/* ref: FUN_00c18200 */
GEN_NOFRAME uint F_00c18200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc18200u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c4ef4f(in_edi);
  switch((unsigned int)(uintptr_t)(iVar1)) {
  case 0x61: ;
    uVar2 = F_00c484b8(in_eax);
    break;
  default: ;
    return (uint)(in_edi == in_eax);
  case 99: ;
    uVar2 = F_00c489cc(in_eax);
    break;
  case 100: ;
    uVar2 = F_00c48637(in_eax);
    break;
  case 0x6c: ;
    uVar2 = F_00c485b8(in_eax);
    break;
  case 0x70: ;
    uVar2 = F_00c487bb(in_eax);
    break;
  case 0x73: ;
    uVar2 = F_00c4873c(in_eax);
    break;
  case 0x75: ;
    uVar2 = F_00c48539(in_eax);
    break;
  case 0x77: ;
    uVar2 = F_00c4883f(in_eax);
    break;
  case 0x78: ;
    uVar2 = F_00c486bb(in_eax);
    break;
  case 0x7a: ;
    uVar2 = (uint)(in_eax == 0);
  }
  iVar1 = F_00c485b8(in_edi);
  if (iVar1 != 0) {
    return uVar2;
  }
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00c18310 */
GEN_NOFRAME uint F_00c18310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc18310u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte * pbVar1;
  byte bVar2;
  uint uVar3;
  byte * pbVar4;
  byte * pbVar5;
  bool bVar6;
  uint local_4;
  
  bVar6 = *(char *)(in_eax + 1) == '^';
  if (bVar6) {
    in_eax = in_eax + 1;
  }
  local_4 = (uint)!bVar6;
  pbVar5 = (byte *)(in_eax + 1);
  if (pbVar5 < param_3) {
    pbVar4 = (byte *)(in_eax + 3);
    do {
      if (*pbVar5 == 0x25) {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
        uVar3 = F_00c18200(param_2,(uint)*pbVar1);
        if (uVar3 != 0) {
          return local_4;
        }
      }
      else if ((pbVar5[1] == 0x2d) && (pbVar4 < param_3)) {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
        if (((int)(uint)bVar2 <= (int)param_2) && ((int)param_2 <= (int)(uint)*pbVar5)) {
          return local_4;
        }
      }
      else if (*pbVar5 == param_2) {
        return local_4;
      }
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 < param_3);
  }
  return (uint)(local_4 == 0);
}

/* ref: FUN_00c18400 */
GEN_NOFRAME uint F_00c18400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc18400u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  char * pcVar1;
  int iVar2;
  
  if ((*in_eax == '\0') || (in_eax[1] == '\0')) {
    F_00b9bbd0(*(undefined4 *)(param_3 + 8),((char *)REFP(0x1348674)));
  }
  if (*in_ecx != *in_eax) {
    return 0;
  }
  iVar2 = 1;
  do {
    while( true ) {
      pcVar1 = in_ecx;
      in_ecx = pcVar1 + 1;
      if (*(char * PTR32 *)(param_3 + 4) <= in_ecx) {
        return 0;
      }
      if (*in_ecx == in_eax[1]) break;
      if (*in_ecx == *in_eax) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (uint)(pcVar1 + 2);
}

/* ref: FUN_00c18470 */
GEN_NOFRAME uint F_00c18470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18470u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte * pbVar4;
  
  iVar3 = 0;
  pbVar4 = param_2;
  if (param_2 < *(byte * PTR32 *)(param_1 + 4)) {
    do {
      bVar1 = *param_3;
      uVar2 = (uint)*pbVar4;
      if (bVar1 == 0x25) {
        uVar2 = F_00c18200(uVar2,(uint)param_3[1]);
LAB_00c184ca: ;
        if (uVar2 == 0) break;
      }
      else if (bVar1 != 0x2e) {
        if (bVar1 == 0x5b) {
          uVar2 = F_00c18310(param_3,uVar2,param_4 - 1);
        }
        else {
          uVar2 = (uint)(bVar1 == uVar2);
        }
        goto LAB_00c184ca;
      }
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (pbVar4 < *(byte * PTR32 *)(param_1 + 4));
    if (iVar3 < 0) {
      return 0;
    }
  }
  do {
    uVar2 = F_00c186e0(param_1,param_2 + iVar3,param_4 + 1);
    if (uVar2 != 0) {
      return uVar2;
    }
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return 0;
}

/* ref: FUN_00c18510 */
GEN_NOFRAME uint F_00c18510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18510u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * in_eax = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00c186e0(param_2,in_eax,param_4 + 1);
  if (uVar2 == 0) {
    while (in_eax < *(byte * PTR32 *)(param_2 + 4)) {
      bVar1 = *param_3;
      uVar2 = (uint)*in_eax;
      if (bVar1 == 0x25) {
        uVar2 = F_00c18200(uVar2,(uint)param_3[1]);
LAB_00c18579: ;
        if (uVar2 == 0) break;
      }
      else if (bVar1 != 0x2e) {
        if (bVar1 == 0x5b) {
          uVar2 = F_00c18310(param_3,uVar2,param_4 - 1);
        }
        else {
          uVar2 = (uint)(bVar1 == uVar2);
        }
        goto LAB_00c18579;
      }
      in_eax = in_eax + 1;
      uVar2 = F_00c186e0(param_2,in_eax,param_4 + 1);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c185a0 */
GEN_NOFRAME uint F_00c185a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc185a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(in_esi + 0xc);
  if (0x1f < iVar1) {
    F_00b9bbd0(*(undefined4 *)(in_esi + 8),((char *)REFP(0x1348688)));
  }
  *(undefined4 *)(in_esi + 0x10 + iVar1 * 8) = param_2;
  *(undefined4 *)(in_esi + 0x14 + iVar1 * 8) = param_4;
  *(int *)(in_esi + 0xc) = iVar1 + 1;
  uVar2 = F_00c186e0(in_esi,param_2,param_3);
  if (uVar2 == 0) {
    *(int *)(in_esi + 0xc) = *(int *)(in_esi + 0xc) - 1;
  }
  return uVar2;
}

/* ref: FUN_00c185f0 */
GEN_NOFRAME uint F_00c185f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc185f0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = *(int *)(in_esi + 0xc) - 1;
  if (-1 < (int)uVar1) {
    piVar3 = (int *)(in_esi + 0x14 + uVar1 * 8);
    do {
      if (*piVar3 == -1) goto LAB_00c18620;
      uVar1 = uVar1 - 1;
      piVar3 = piVar3 - 2;
    } while (-1 < (int)uVar1);
  }
  uVar1 = F_00b9bbd0(*(undefined4 *)(in_esi + 8),((char *)REFP(0x1348618)));
LAB_00c18620: ;
  *(int *)(in_esi + 0x14 + uVar1 * 8) = param_2 - *(int *)(in_esi + 0x10 + uVar1 * 8);
  uVar2 = F_00c186e0(in_esi,param_2,param_3);
  if (uVar2 == 0) {
    *(undefined4 *)(in_esi + 0x14 + uVar1 * 8) = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_00c18650 */
GEN_NOFRAME uint F_00c18650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc18650u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  
  uVar2 = in_eax - 0x31;
  if ((((int)uVar2 < 0) || (*(int *)(in_ecx + 0xc) <= (int)uVar2)) ||
     (*(int *)(in_ecx + 0x14 + uVar2 * 8) == -1)) {
    uVar2 = F_00b9bbd0(*(undefined4 *)(in_ecx + 8),((char *)REFP(0x1348600)));
  }
  uVar1 = *(uint *)(in_ecx + 0x14 + uVar2 * 8);
  if (uVar1 <= (uint)(*(int *)(in_ecx + 4) - (int)param_3)) {
    piVar4 = *(int * PTR32 *)(in_ecx + 0x10 + uVar2 * 8);
    piVar3 = param_3;
    for (uVar2 = uVar1; 3 < uVar2; uVar2 = uVar2 - 4) {
      if (*piVar4 != *piVar3) {
        return 0;
      }
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((uVar2 == 0) ||
       (((char)*piVar3 == (char)*piVar4 &&
        ((uVar2 < 2 ||
         ((*(char *)((int)piVar3 + 1) == *(char *)((int)piVar4 + 1) &&
          ((uVar2 < 3 || (*(char *)((int)piVar3 + 2) == *(char *)((int)piVar4 + 2))))))))))) {
      return uVar1 + (int)param_3;
    }
  }
  return 0;
}

/* ref: FUN_00c186e0 */
GEN_NOFRAME uint F_00c186e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc186e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  byte * in_eax;
  byte * in_ecx;
  
  in_eax = param_3;
  in_ecx = param_2;
  do {
    switch((unsigned int)(uintptr_t)(*in_eax)) {
    case 0: ;
      return (uint)in_ecx;
    case 0x24: ;
      if (in_eax[1] == 0) {
        return (in_ecx != (byte *)param_1[1]) - 1 & (uint)in_ecx;
      }
    default: ;
switchD_00c18703_caseD_1: ;
      pbVar4 = (byte *)F_00c18190(in_eax,param_1);
      if (in_ecx < (byte *)param_1[1]) {
        bVar2 = *in_eax;
        uVar5 = (uint)*in_ecx;
        if (bVar2 == 0x25) {
          uVar5 = F_00c18200(uVar5,(uint)in_eax[1]);
LAB_00c1883a: ;
          if (uVar5 == 0) goto LAB_00c18845;
        }
        else if (bVar2 != 0x2e) {
          if (bVar2 == 0x5b) {
            uVar5 = F_00c18310(in_eax,uVar5,pbVar4 - 1);
          }
          else {
            uVar5 = (uint)(bVar2 == uVar5);
          }
          goto LAB_00c1883a;
        }
        bVar1 = true;
      }
      else {
LAB_00c18845: ;
        bVar1 = false;
      }
      switch((unsigned int)(uintptr_t)(*pbVar4)) {
      case 0x2a: ;
        uVar5 = F_00c18470(param_1,in_ecx,in_eax,pbVar4);
        return uVar5;
      case 0x2b: ;
        if (!bVar1) {
          return 0;
        }
        uVar5 = F_00c18470(param_1,in_ecx + 1,in_eax,pbVar4);
        return uVar5;
      default: ;
        if (!bVar1) {
          return 0;
        }
        in_ecx = in_ecx + 1;
        in_eax = pbVar4;
        break;
      case 0x2d: ;
        uVar5 = F_00c18510(in_ecx,param_1,in_eax,pbVar4);
        return uVar5;
      case 0x3f: ;
        if ((bVar1) && (uVar5 = F_00c186e0(param_1,in_ecx + 1,pbVar4 + 1), uVar5 != 0)) {
          return uVar5;
        }
        in_eax = pbVar4 + 1;
      }
      break;
    case 0x25: ;
      bVar2 = in_eax[1];
      if (bVar2 == 0x62) {
        in_ecx = (byte *)F_00c18400(in_eax + 2,in_ecx,param_1);
        if (in_ecx == (byte *)0x0) {
          return 0;
        }
        in_eax = in_eax + 4;
      }
      else if (bVar2 == 0x66) {
        pbVar4 = in_eax + 2;
        if (*pbVar4 != 0x5b) {
          F_00b9bbd0(param_1[2],((char *)REFP(0x134869c)));
        }
        in_eax = (byte *)F_00c18190(pbVar4,param_1);
        if (in_ecx == (byte *)*param_1) {
          bVar2 = 0;
        }
        else {
          bVar2 = in_ecx[-1];
        }
        uVar5 = F_00c18310(pbVar4,(uint)bVar2,in_eax - 1);
        if (uVar5 != 0) {
          return 0;
        }
        uVar5 = F_00c18310(pbVar4,(uint)*in_ecx,in_eax - 1);
        if (uVar5 == 0) {
          return 0;
        }
      }
      else {
        iVar3 = F_00c48637((uint)bVar2);
        if (iVar3 == 0) goto switchD_00c18703_caseD_1;
        in_ecx = (byte *)F_00c18650((uint)in_eax[1],param_1,in_ecx);
        if (in_ecx == (byte *)0x0) {
          return 0;
        }
        in_eax = in_eax + 2;
      }
      break;
    case 0x28: ;
      if (in_eax[1] == 0x29) {
        uVar5 = F_00c185a0(param_1,in_ecx,in_eax + 2,0xfffffffe);
        return uVar5;
      }
      uVar5 = F_00c185a0(param_1,in_ecx,in_eax + 1,0xffffffff);
      return uVar5;
    case 0x29: ;
      uVar5 = F_00c185f0(param_1,in_ecx,in_eax + 1);
      return uVar5;
    }
  } while( true );
}

/* ref: FUN_00c189b0 */
GEN_NOFRAME uint F_00c189b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc189b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  char * _MaxCount;
  int * _Buf;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  if (param_4 == 0) {
    return (uint)param_1;
  }
  if (param_2 < param_4) {
    return 0;
  }
  _MaxCount = ((char *)GEN_TOP((param_2 - (param_4 - 1))));
  _Buf = param_1;
  do {
    if ((_MaxCount == (char *)0x0) ||
       (pvVar1 = F_00c48f80(_Buf,(int)*param_3,(gen_size32)_MaxCount), pvVar1 == (undefined *)0x0)) {
      return 0;
    }
    piVar5 = (int *)((int)pvVar1 + 1);
    piVar3 = (int *)(param_3 + 1);
    piVar4 = piVar5;
    for (uVar2 = param_4 - 1; 3 < uVar2; uVar2 = uVar2 - 4) {
      if (*piVar4 != *piVar3) goto LAB_00c18a48;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((uVar2 == 0) ||
       (((char)*piVar3 == (char)*piVar4 &&
        ((uVar2 < 2 ||
         ((*(char *)((int)piVar3 + 1) == *(char *)((int)piVar4 + 1) &&
          ((uVar2 < 3 || (*(char *)((int)piVar3 + 2) == *(char *)((int)piVar4 + 2))))))))))) {
      return (uint)pvVar1;
    }
LAB_00c18a48: ;
    _MaxCount = ((char *)GEN_TOP(((int)_Buf + ((int)_MaxCount - (int)piVar5))));
    _Buf = piVar5;
  } while( true );
}

/* ref: FUN_00c18a70 */
GEN_NOFRAME uint F_00c18a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  int in_edi = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  if (in_edi < in_esi[3]) {
    iVar1 = in_esi[in_edi * 2 + 5];
    if (iVar1 == -1) {
      F_00b9bbd0(in_esi[2],((char *)REFP(0x13486d8)));
    }
    else if (iVar1 == -2) {
      uVar2 = F_00b9ae00(in_esi[2],(in_esi[in_edi * 2 + 4] - *in_esi) + 1);
      return uVar2;
    }
    uVar2 = F_00b9ae20(in_esi[2],in_esi[in_edi * 2 + 4],iVar1);
    return uVar2;
  }
  if (in_edi == 0) {
    uVar2 = F_00b9ae20(in_esi[2],in_ecx,in_eax - in_ecx);
    return uVar2;
  }
  uVar2 = F_00b9bbd0(in_esi[2],((char *)REFP(0x13486c0)));
  return uVar2;
}

/* ref: FUN_00c18af0 */
GEN_NOFRAME uint F_00c18af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc18af0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  int in_edi;
  
  uVar1 = *(uint *)(in_eax + 0xc);
  if ((uVar1 == 0) && ((*(int *)&gen_a1) != 0)) {
    uVar1 = 1;
  }
  F_00b9bc60(*(undefined4 *)(in_eax + 8),uVar1,((char *)REFP(0x13486ec)));
  in_edi = 0;
  if (0 < (int)uVar1) {
    do {
      F_00c18a70(param_3,(*(int *)&gen_a1),in_eax,in_edi);
      in_edi = in_edi + 1;
    } while (in_edi < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00c18b40 */
GEN_NOFRAME uint F_00c18b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc18b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  char cVar1;
  uint uVar2;
  char * _Str;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  
  uVar2 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0x0)));
  _Str = (char *)F_00b9c820(param_1,2,&(*(int *)(gen_frame + 0xc)));
  uVar4 = (*(uint *)(gen_frame + 0x0));
  (*(char * PTR32 *)(gen_frame + 0x8)) = _Str;
  uVar3 = F_00b9ca20(param_1,3,1);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1 + uVar4;
  }
  uVar3 = (((int)uVar3 < 0) - 1 & uVar3) - 1;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if ((*(uint *)(gen_frame + 0x0)) < uVar3) {
    uVar3 = (*(uint *)(gen_frame + 0x0));
  }
  uVar4 = (*(uint *)(gen_frame + 0x0));
  if ((param_2 == 0) ||
     ((uVar4 = F_00b9abc0(param_1,4), uVar4 == 0 &&
      (pcVar5 = F_00c52d60(_Str,((char *)REFP(0x1348700))), uVar4 = (*(uint *)(gen_frame + 0x0)), pcVar5 != (char *)0x0)))) {
    cVar1 = *_Str;
    if (cVar1 != '^') {
      (*(uint *)(gen_frame + 0x4)) = 0;
    }
    else {
      _Str = _Str + 1;
      (*(char * PTR32 *)(gen_frame + 0x8)) = _Str;
      (*(uint *)(gen_frame + 0x4)) = 1;
    }
    (*(uint *)(gen_frame + 0x4)) = (uint)(cVar1 == '^');
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    (*(uint *)(gen_frame + 0x14)) = uVar4 + uVar2;
    uVar3 = uVar3 + uVar2;
    do {
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      uVar4 = F_00c186e0(&(*(uint *)(gen_frame + 0x10)),uVar3,_Str);
      if (uVar4 != 0) {
        if (param_2 == 0) {
          uVar3 = F_00c18af0(&(*(uint *)(gen_frame + 0x10)),uVar3,uVar4);
          return uVar3;
        }
        F_00b9ae00(param_1,(uVar3 - uVar2) + 1);
        F_00b9ae00(param_1,uVar4 - uVar2);
        uVar3 = F_00c18af0(&(*(uint *)(gen_frame + 0x10)),0,0);
        return uVar3 + 2;
      }
    } while ((uVar3 < (*(uint *)(gen_frame + 0x14))) && (uVar3 = uVar3 + 1, _Str = (*(char * PTR32 *)(gen_frame + 0x8)), (*(uint *)(gen_frame + 0x4)) == 0));
  }
  else {
    uVar3 = F_00c189b0(uVar3 + uVar2,(*(uint *)(gen_frame + 0x0)) - uVar3,_Str,(*(int *)(gen_frame + 0xc)));
    if (uVar3 != 0) {
      F_00b9ae00(param_1,(uVar3 - uVar2) + 1);
      F_00b9ae00(param_1,(uVar3 - uVar2) + (*(int *)(gen_frame + 0xc)));
      return 2;
    }
  }
  F_00b9adc0(param_1);
  return 1;
}

/* ref: FUN_00c18d00 */
GEN_NOFRAME uint F_00c18d00(unsigned int gen_a0)
{
  GEN_ENTER(0xc18d00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c18b40(param_1,1);
  return uVar1;
}

/* ref: FUN_00c18d10 */
GEN_NOFRAME uint F_00c18d10(unsigned int gen_a0)
{
  GEN_ENTER(0xc18d10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c18b40(param_1,0);
  return uVar1;
}

/* ref: FUN_00c18d20 */
GEN_NOFRAME uint F_00c18d20(unsigned int gen_a0)
{
  GEN_ENTER(0xc18d20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = F_00b9abf0(param_1,0xffffd8ed,&(*(int *)(gen_frame + 0xc)));
  uVar2 = F_00b9abf0(param_1,0xffffd8ec,0);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  (*(uint *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0xc)) + uVar1;
  uVar3 = F_00b9ab70(param_1,0xffffd8eb);
  uVar3 = uVar3 + uVar1;
  if (uVar3 <= (*(uint *)(gen_frame + 0x14))) {
    do {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      uVar4 = F_00c186e0(&(*(uint *)(gen_frame + 0x10)),uVar3,uVar2);
      if (uVar4 != 0) {
        iVar5 = uVar4 - uVar1;
        if (uVar4 == uVar3) {
          iVar5 = iVar5 + 1;
        }
        F_00b9ae00(param_1,iVar5);
        F_00b9a850(param_1,0xffffd8eb);
        if (((*(uint *)(gen_frame + 0x1c)) != 0) || (uVar1 = 1, uVar3 == 0)) {
          uVar1 = (*(uint *)(gen_frame + 0x1c));
        }
        F_00b9bc60((*(undefined4 *)(gen_frame + 0x18)),uVar1,((char *)REFP(0x13486ec)));
        iVar5 = 0;
        if ((int)uVar1 < 1) {
          return uVar1;
        }
        goto LAB_00c18e00;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= (*(uint *)(gen_frame + 0x14)));
  }
  return 0;
LAB_00c18e00: ;
  if (iVar5 < (int)(*(uint *)(gen_frame + 0x1c))) {
    uVar2 = ((uint *)(gen_frame + 0x20))[(int)(iVar5 * 2 + 1)];
    if (uVar2 == 0xffffffff) {
      F_00b9bbd0((*(undefined4 *)(gen_frame + 0x18)),((char *)REFP(0x13486d8)));
    }
    else if (uVar2 == 0xfffffffe) {
      F_00b9ae00((*(undefined4 *)(gen_frame + 0x18)),(((uint *)(gen_frame + 0x20))[(int)(iVar5 * 2)] - (*(uint *)(gen_frame + 0x10))) + 1);
      goto LAB_00c18e56;
    }
    uVar6 = ((uint *)(gen_frame + 0x20))[(int)(iVar5 * 2)];
LAB_00c18e49: ;
    F_00b9ae20((*(undefined4 *)(gen_frame + 0x18)),uVar6,uVar2);
  }
  else {
    if (iVar5 == 0) {
      uVar2 = uVar4 - uVar3;
      uVar6 = uVar3;
      goto LAB_00c18e49;
    }
    F_00b9bbd0((*(undefined4 *)(gen_frame + 0x18)),((char *)REFP(0x13486c0)));
  }
LAB_00c18e56: ;
  iVar5 = iVar5 + 1;
  if ((int)uVar1 <= iVar5) {
    return uVar1;
  }
  goto LAB_00c18e00;
}

/* ref: FUN_00c18e90 */
GEN_NOFRAME uint F_00c18e90(unsigned int gen_a0)
{
  GEN_ENTER(0xc18e90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9c820(param_1,1,0);
  F_00b9c820(param_1,2,0);
  F_00b9a760(param_1,2);
  F_00b9ae00(param_1,0);
  F_00b9af30(param_1,((code *)REFP(0xc18d20)),3);
  return 1;
}

/* ref: FUN_00c18ed0 */
GEN_NOFRAME uint F_00c18ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xc18ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x134870c)));
  return uVar1;
}

/* ref: FUN_00c18ef0 */
GEN_NOFRAME uint F_00c18ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  puVar1 = (uint *)F_00b9abf0(*(undefined4 *)(in_eax + 8),3,&(*(uint *)(gen_frame + 0x8)));
  uVar3 = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = (undefined1 *)puVar1;
  puVar4 = (undefined1 *)puVar1;
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    do {
      if (puVar4[uVar3] == '%') {
        iVar2 = uVar3 + 1;
        uVar3 = uVar3 + 1;
        iVar2 = F_00c48637((uint)(byte)puVar4[iVar2]);
        if (iVar2 == 0) {
          puVar1 = param_2 + 0x83;
          if (puVar1 <= (uint *)*param_2) {
            puVar1 = (uint *)F_00b9bef0(param_2);
          }
          *(undefined1 *)*param_2 = puVar4[uVar3];
          *param_2 = *param_2 + 1;
        }
        else if (puVar4[uVar3] == '0') {
          puVar1 = (uint *)F_00b9bf30(param_2,param_3,param_4 - param_3);
        }
        else {
          F_00c18a70(param_4,param_3,in_eax,(char)puVar4[uVar3] - 0x31);
          puVar1 = (uint *)F_00b9c000(param_2);
          puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0xc));
        }
      }
      else {
        if (param_2 + 0x83 <= (uint *)*param_2) {
          F_00b9bef0(param_2);
        }
        puVar1 = (uint *)*param_2;
        *(undefined1 *)puVar1 = puVar4[uVar3];
        *param_2 = *param_2 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(gen_frame + 0x8)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00c18fd0 */
GEN_NOFRAME uint F_00c18fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(in_eax + 8);
  uVar2 = F_00b9a940(uVar1,3);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 3: ;
  case 4: ;
    uVar2 = F_00c18ef0(in_eax,param_2,param_3,param_4);
    return uVar2;
  case 5: ;
    F_00c18a70(param_4,param_3,in_eax,0);
    F_00b9b040(uVar1,3);
    break;
  case 6: ;
    F_00b9a910(uVar1,3);
    uVar2 = F_00c18af0(in_eax,param_3,param_4);
    F_00b9b510(uVar1,uVar2,1);
  }
  uVar2 = F_00b9abc0(uVar1,0xffffffff);
  if (uVar2 != 0) {
    uVar2 = F_00b9a9f0(uVar1,0xffffffff);
    if (uVar2 == 0) {
      uVar2 = F_00b9a940(uVar1,0xffffffff);
      uVar2 = F_00b9a960(uVar1,uVar2);
      F_00b9bbd0(uVar1,((char *)REFP(0x134873c)),uVar2);
    }
    uVar2 = F_00b9c000(param_2);
    return uVar2;
  }
  F_00b9a760(uVar1,0xfffffffe);
  F_00b9ae20(uVar1,param_3,param_4 - param_3);
  uVar2 = F_00b9c000(param_2);
  return uVar2;
}

/* ref: FUN_00c190e0 */
GEN_NOFRAME uint F_00c190e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc190e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x330];
  char cVar1;
  undefined1 * puVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x32c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x0));
  puVar2 = (undefined1 *)F_00b9c820(param_1,1,&(*(int *)(gen_frame + 0xc)));
  pcVar3 = (char *)F_00b9c820(param_1,2,0);
  uVar4 = F_00b9a940(param_1,3);
  uVar5 = F_00b9ca20(param_1,4,(*(int *)(gen_frame + 0xc)) + 1);
  cVar1 = *pcVar3;
  (*(uint *)(gen_frame + 0x8)) = uVar5;
  if (cVar1 != '^') {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  else {
    pcVar3 = pcVar3 + 1;
    (*(uint *)(gen_frame + 0x4)) = 1;
  }
  (*(uint *)(gen_frame + 0x4)) = (uint)(cVar1 == '^');
  (*(int *)(gen_frame + 0x0)) = 0;
  if ((((uVar4 != 3) && (uVar4 != 4)) && (uVar4 != 6)) && (uVar4 != 5)) {
    F_00b9c590(param_1,3,((char *)REFP(0x1348760)));
  }
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x120)));
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar2 + (*(int *)(gen_frame + 0xc));
  puVar6 = puVar2;
  if ((int)(*(uint *)(gen_frame + 0x8)) < 1) {
LAB_00c19243: ;
    F_00b9bf30(((uint * PTR32 *)(gen_frame + 0x120)),puVar6,(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)puVar6);
    F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x120)));
    F_00b9ae00(param_1,(*(int *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x32c)) ^ (uint)&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 2;
  }
  do {
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    puVar6 = (undefined1 *)F_00c186e0(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),puVar2,pcVar3);
    if (puVar6 == (undefined1 *)0x0) {
LAB_00c191ef: ;
      puVar6 = puVar2;
      if ((*(undefined1 * PTR32 *)(gen_frame + 0x14)) <= puVar2) goto LAB_00c19243;
      if (&(*(uint *)(gen_frame + 0x32c)) <= ((uint * PTR32 *)(gen_frame + 0x120))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x120)));
      }
      *(undefined1 *)((uint * PTR32 *)(gen_frame + 0x120))[0] = *puVar2;
      ((uint * PTR32 *)(gen_frame + 0x120))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x120))[0] + 1);
      puVar6 = puVar2 + 1;
    }
    else {
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      F_00c18fd0(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),((uint * PTR32 *)(gen_frame + 0x120)),puVar2,puVar6);
      if (puVar6 <= puVar2) goto LAB_00c191ef;
    }
    if (((*(uint *)(gen_frame + 0x4)) != 0) || (puVar2 = puVar6, (int)(*(uint *)(gen_frame + 0x8)) <= (*(int *)(gen_frame + 0x0)))) goto LAB_00c19243;
  } while( true );
}

/* ref: FUN_00c19290 */
GEN_NOFRAME uint F_00c19290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc19290u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  char * pcVar5;
  
  (*(int *)(gen_frame + 0xc)) = in_ecx;
  pcVar3 = (char *)F_00b9c820(in_edx,in_ecx,&(*(int *)(gen_frame + 0xc)));
  piVar1 = in_esi + 0x83;
  if (piVar1 <= (int *)*in_esi) {
    F_00b9bef0(in_esi);
  }
  pcVar5 = (char *)*in_esi;
  *pcVar5 = '\"';
  *in_esi = *in_esi + 1;
  iVar2 = (*(int *)(gen_frame + 0xc));
  do {
    if (iVar2 == 0) {
      (*(int *)(gen_frame + 0xc)) = -1;
      if (piVar1 <= (int *)*in_esi) {
        pcVar5 = (char *)F_00b9bef0(in_esi);
      }
      *(undefined1 *)*in_esi = 0x22;
      *in_esi = *in_esi + 1;
      return (uint)pcVar5;
    }
    (*(int *)(gen_frame + 0xc)) = iVar2 - 1;
    uVar4 = (uint)*pcVar3;
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      pcVar5 = (char *)F_00b9bf30(in_esi,&REFG(undefined, 0x1348784),4);
      break;
    default: ;
      if (piVar1 <= (int *)*in_esi) {
        uVar4 = F_00b9bef0(in_esi);
      }
      pcVar5 = ((char *)GEN_TOP(CONCAT31((int3)(uVar4 >> 8),*pcVar3)));
      *(char *)*in_esi = *pcVar3;
      goto LAB_00c1934a;
    case 10: ;
    case 0x22: ;
    case 0x5c: ;
      if (piVar1 <= (int *)*in_esi) {
        F_00b9bef0(in_esi);
      }
      *(undefined1 *)*in_esi = 0x5c;
      *in_esi = *in_esi + 1;
      if (piVar1 <= (int *)*in_esi) {
        F_00b9bef0(in_esi);
      }
      pcVar5 = (char *)*in_esi;
      *pcVar5 = *pcVar3;
LAB_00c1934a: ;
      *in_esi = *in_esi + 1;
      break;
    case 0xd: ;
      pcVar5 = (char *)F_00b9bf30(in_esi,&REFG(undefined, 0x1348780),2);
    }
    pcVar3 = pcVar3 + 1;
    iVar2 = (*(int *)(gen_frame + 0xc));
  } while( true );
}

/* ref: FUN_00c193f0 */
GEN_NOFRAME uint F_00c193f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc193f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  
  bVar1 = *param_2;
  pbVar5 = param_2;
  while ((bVar1 != 0 && (uVar3 = F_00c51da0(((char *)REFP(0x134878c)),(int)(char)*pbVar5), uVar3 != 0))) {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  if (5 < (uint)((int)pbVar5 - (int)param_2)) {
    F_00b9bbd0(in_eax,((char *)REFP(0x1348794)));
  }
  iVar4 = F_00c48637((uint)*pbVar5);
  if (iVar4 != 0) {
    pbVar5 = pbVar5 + 1;
  }
  iVar4 = F_00c48637((uint)*pbVar5);
  if (iVar4 != 0) {
    pbVar5 = pbVar5 + 1;
  }
  if (*pbVar5 == 0x2e) {
    iVar4 = F_00c48637((uint)pbVar5[1]);
    pbVar2 = pbVar5 + 1;
    if (iVar4 != 0) {
      pbVar2 = pbVar5 + 2;
    }
    pbVar5 = pbVar2;
    iVar4 = F_00c48637((uint)*pbVar5);
    if (iVar4 != 0) {
      pbVar5 = pbVar5 + 1;
    }
  }
  iVar4 = F_00c48637((uint)*pbVar5);
  if (iVar4 != 0) {
    F_00b9bbd0(in_eax,((char *)REFP(0x13487b4)));
  }
  *param_3 = 0x25;
  F_00c52620(param_3 + 1,(char *)param_2,(gen_size32)(pbVar5 + (1 - (int)param_2)));
  (param_3 + 1)[(int)(pbVar5 + (1 - (int)param_2))] = '\0';
  return (uint)pbVar5;
}

/* ref: FUN_00c19500 */
GEN_NOFRAME uint F_00c19500(unsigned int gen_a0)
{
  GEN_ENTER(0xc19500u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x440];
  char cVar1;
  longlong lVar2;
  char * pcVar3;
  int iVar4;
  char * pcVar5;
  uint uVar6;
  uint uVar7;
  int in_ecx;
  char * pcVar8;
  float fVar9;
  
  (*(uint *)(gen_frame + 0x43c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x4));
  in_ecx = 1;
  pcVar3 = (char *)F_00b9c820(param_1,1,&(*(int *)(gen_frame + 0x18)));
  (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3 + (*(int *)(gen_frame + 0x18));
  F_00b9c080(param_1,((char * PTR32 *)(gen_frame + 0x1c)));
  if (pcVar3 < pcVar3 + (*(int *)(gen_frame + 0x18))) {
    do {
      if (*pcVar3 != '%') {
        if (((char *)(gen_frame + 0x228)) <= ((char * PTR32 *)(gen_frame + 0x1c))[0]) {
          F_00b9bef0(((char * PTR32 *)(gen_frame + 0x1c)));
        }
        *((char * PTR32 *)(gen_frame + 0x1c))[0] = *pcVar3;
        ((char * PTR32 *)(gen_frame + 0x1c))[0] = ((char * PTR32 *)(gen_frame + 0x1c))[0] + 1;
        pcVar3 = pcVar3 + 1;
        goto LAB_00c19794;
      }
      pcVar8 = pcVar3 + 1;
      if (*pcVar8 == '%') {
        if (((char *)(gen_frame + 0x228)) <= ((char * PTR32 *)(gen_frame + 0x1c))[0]) {
          F_00b9bef0(((char * PTR32 *)(gen_frame + 0x1c)));
        }
        *((char * PTR32 *)(gen_frame + 0x1c))[0] = *pcVar8;
        ((char * PTR32 *)(gen_frame + 0x1c))[0] = ((char * PTR32 *)(gen_frame + 0x1c))[0] + 1;
        pcVar3 = pcVar3 + 2;
        goto LAB_00c19794;
      }
      in_ecx = in_ecx + 1;
      pcVar8 = (char *)F_00c193f0(param_1,pcVar8,((char *)(gen_frame + 0x228)));
      pcVar3 = pcVar8 + 1;
      switch((unsigned int)(uintptr_t)(*pcVar8)) {
      case 'E': ;
      case 'G': ;
      case 'e': ;
      case 'f': ;
      case 'g': ;
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        F_00c4720f(((char *)(gen_frame + 0x23c)),((char *)(gen_frame + 0x228)),GEN_LO32((undefined8)gen_d2bits((double)fVar9)),GEN_HI32((undefined8)gen_d2bits((double)fVar9)));
        break;
      default: ;
        uVar7 = F_00b9bbd0(param_1,((char *)REFP(0x13487e8)),(int)*pcVar8);
        goto LAB_00c197b0;
      case 'X': ;
      case 'o': ;
      case 'u': ;
      case 'x': ;
        pcVar5 = ((char *)(gen_frame + 0x228));
        pcVar8 = ((char *)(gen_frame + 0x228)) + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        cVar1 = pcVar5[(int)((char * PTR32 *)(gen_frame + 0x1c)) + (0x20b - (int)pcVar8)];
        *((undefined2 *)GEN_TOP((pcVar5 + (int)((char * PTR32 *)(gen_frame + 0x1c)) + (0x20b - (int)pcVar8)))) = REFG(undefined2, 0x13487e4);
        pcVar5[(int)(((char *)(gen_frame + 0x228)) - (int)pcVar8)] = cVar1;
        pcVar5[(int)(((char *)(gen_frame + 0x228)) + (1 - (int)pcVar8))] = '\0';
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        (*(ushort *)(gen_frame + 0x6)) = gen_x87_cw;
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = gen_x87_cw | 0xc00;
        (*(longlong *)(gen_frame + 0x10)) = (longlong)TRUNC((float10)fVar9);
        lVar2 = (*(longlong *)(gen_frame + 0x10));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (uint)(longlong)TRUNC((float10)fVar9);
        iVar4 = (uint)(*(longlong *)(gen_frame + 0x10));
        gen_set_x87_cw((unsigned short)((*(ushort *)(gen_frame + 0x6))));
        (*(longlong *)(gen_frame + 0x10)) = lVar2;
        goto LAB_00c195f6;
      case 'c': ;
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        iVar4 = (int)fVar9;
LAB_00c195f6: ;
        F_00c4720f(((char *)(gen_frame + 0x23c)),((char *)(gen_frame + 0x228)),iVar4);
        break;
      case 'd': ;
      case 'i': ;
        pcVar5 = ((char *)(gen_frame + 0x228));
        pcVar8 = ((char *)(gen_frame + 0x228)) + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        cVar1 = pcVar5[(int)((char * PTR32 *)(gen_frame + 0x1c)) + (0x20b - (int)pcVar8)];
        *((undefined2 *)GEN_TOP((pcVar5 + (int)((char * PTR32 *)(gen_frame + 0x1c)) + (0x20b - (int)pcVar8)))) = REFG(undefined2, 0x13487e4);
        pcVar5[(int)(((char *)(gen_frame + 0x228)) - (int)pcVar8)] = cVar1;
        pcVar5[(int)(((char *)(gen_frame + 0x228)) + (1 - (int)pcVar8))] = '\0';
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        F_00c4720f(((char *)(gen_frame + 0x23c)),((char *)(gen_frame + 0x228)),(int)fVar9);
        break;
      case 'q': ;
        F_00c19290(in_ecx,param_1,((char * PTR32 *)(gen_frame + 0x1c)));
        goto LAB_00c19794;
      case 's': ;
        uVar7 = F_00b9c820(param_1,in_ecx,&(*(uint *)(gen_frame + 0x8)));
        uVar6 = F_00c51da0(((char *)(gen_frame + 0x228)),0x2e);
        if ((uVar6 != 0) || ((*(uint *)(gen_frame + 0x8)) < 100)) {
          F_00c4720f(((char *)(gen_frame + 0x23c)),((char *)(gen_frame + 0x228)),uVar7);
          break;
        }
        F_00b9a910(param_1,in_ecx);
        F_00b9c000(((char * PTR32 *)(gen_frame + 0x1c)));
        goto LAB_00c19794;
      }
      pcVar8 = ((char *)(gen_frame + 0x23c));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00b9bf30(((char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x23c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x23c)) + 1));
LAB_00c19794: ;
    } while (pcVar3 < (*(char * PTR32 *)(gen_frame + 0xc)));
  }
  F_00b9bfc0(((char * PTR32 *)(gen_frame + 0x1c)));
  uVar7 = 1;
LAB_00c197b0: ;
  F_00c47745((*(uint *)(gen_frame + 0x43c)) ^ (uint)((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_00c19830 */
GEN_NOFRAME uint F_00c19830(unsigned int gen_a0)
{
  GEN_ENTER(0xc19830u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9b150(in_esi,0,1);
  F_00b9ae20(in_esi,&REFG(undefined, 0x14c5bf3),0);
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b3d0(in_esi,0xfffffffe);
  F_00b9a760(in_esi,0xfffffffe);
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1348878)));
  uVar1 = F_00b9a760(in_esi,0xfffffffe);
  return uVar1;
}

/* ref: FUN_00c19890 */
GEN_NOFRAME uint F_00c19890(unsigned int gen_a0)
{
  GEN_ENTER(0xc19890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9cd70(param_1,((char *)REFP(0x1348880)),&REFG(undefined * PTR32, 0x110ea68));
  F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348888)));
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348890)));
  F_00c19830(param_1);
  return 1;
}

/* ref: FUN_00c19980 */
GEN_NOFRAME uint F_00c19980(unsigned int gen_a0)
{
  GEN_ENTER(0xc19980u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * _Command;
  int iVar1;
  
  _Command = (char *)F_00b9c880(param_1,1,0,0);
  iVar1 = F_00c5306f(_Command);
  F_00b9ae00(param_1,iVar1);
  return 1;
}

/* ref: FUN_00c199b0 */
GEN_NOFRAME uint F_00c199b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc199b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = F_00b9c820(param_1,1,0);
  uVar3 = F_00c5314c(uVar2);
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (uVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar3 = F_00c51e86(iVar1);
  F_00b9af00(param_1,((char *)REFP(0x1348898)),uVar2,uVar3);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c19a30 */
GEN_NOFRAME uint F_00c19a30(unsigned int gen_a0)
{
  GEN_ENTER(0xc19a30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = F_00b9c820(param_1,1,0);
  uVar3 = F_00b9c820(param_1,2,0);
  uVar3 = F_00c53187(uVar2,uVar3);
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (uVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar3 = F_00c51e86(iVar1);
  F_00b9af00(param_1,((char *)REFP(0x1348898)),uVar2,uVar3);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c19ab0 */
GEN_NOFRAME uint F_00c19ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xc19ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)((char *)(gen_frame + 0xc));
  pcVar1 = F_00c5347a(((char *)(gen_frame + 0xc)));
  if (pcVar1 == (char *)0x0) {
    uVar2 = F_00b9bbd0(param_1,((char *)REFP(0x13488a0)));
    F_00c47745((*(uint *)(gen_frame + 0x1c)) ^ (uint)((char *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return uVar2;
  }
  F_00b9ae60(param_1,((char *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x1c)) ^ (uint)((char *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c19b20 */
GEN_NOFRAME uint F_00c19b20(unsigned int gen_a0)
{
  GEN_ENTER(0xc19b20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * pcVar1;
  
  pcVar1 = (char *)F_00b9c820(param_1,1,0);
  pcVar1 = F_00c4b5a4(pcVar1);
  F_00b9ae60(param_1,pcVar1);
  return 1;
}

/* ref: FUN_00c19b50 */
GEN_NOFRAME uint F_00c19b50(unsigned int gen_a0)
{
  GEN_ENTER(0xc19b50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  long cVar1;
  
  cVar1 = F_00c536c3();
  F_00b9ade0(param_1,(double)cVar1 / *(double *)&REFG(undefined, 0x10912a8));
  return 1;
}

/* ref: FUN_00c19c70 */
GEN_NOFRAME uint F_00c19c70(unsigned int gen_a0)
{
  GEN_ENTER(0xc19c70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x2f0];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  undefined * _Tm;
  byte * pbVar4;
  int iVar5;
  gen_size32 sVar6;
  byte * pbVar7;
  bool bVar8;
  longlong lVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0x2ec)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(char *)(gen_frame + 0xc));
  pbVar2 = (byte *)F_00b9c880(param_1,1,&REFG(undefined, 0x13488ec),0);
  uVar3 = F_00b9a940(param_1,2);
  if ((int)uVar3 < 1) {
    lVar9 = F_00c4b7c2((__time64_t *)0x0);
  }
  else {
    fVar10 = F_00b9c8e0(param_1,2);
    lVar9 = (longlong)fVar10;
  }
  (*(longlong *)(gen_frame + 0x10)) = lVar9;
  if (*pbVar2 == 0x21) {
    _Tm = F_00c5301c(&(*(longlong *)(gen_frame + 0x10)));
    pbVar2 = pbVar2 + 1;
  }
  else {
    _Tm = F_00c4f752((int *)&(*(longlong *)(gen_frame + 0x10)));
  }
  if (_Tm == (undefined *)0x0) {
    F_00b9adc0(param_1);
  }
  else {
    pbVar7 = &REFG(undefined1, 0x13488f0);
    pbVar4 = pbVar2;
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00c19d31: ;
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00c19d36;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00c19d31;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00c19d36: ;
    if (iVar5 == 0) {
      F_00b9b150(param_1,0,9);
      F_00b9ae00(param_1,(*(int *)((char *)(_Tm))));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13488f4));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 4))));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13488f8));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 8))));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13488fc));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 12))));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348904));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 16))) + 1);
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348908)));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 20))) + 0x76c);
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348910));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 24))) + 1);
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348918));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 28))) + 1);
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348920));
      if (-1 < (*(int *)(((char *)(_Tm) + 32)))) {
        F_00b9afd0(param_1,(*(int *)(((char *)(_Tm) + 32))));
        F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348928)));
      }
    }
    else {
      (*(char *)(gen_frame + 0xc)) = '%';
      (*(undefined1 *)(gen_frame + 0xe)) = 0;
      F_00b9c080(param_1,((byte * PTR32 *)(gen_frame + 0x18)));
      bVar1 = *pbVar2;
      while (bVar1 != 0) {
        if ((bVar1 == 0x25) && (pbVar2[1] != 0)) {
          pbVar4 = pbVar2 + 1;
          pbVar2 = pbVar2 + 1;
          (*(byte *)(gen_frame + 0xd)) = *pbVar4;
          sVar6 = F_00c5071b((char *)((byte *)(gen_frame + 0x224)),200,&(*(char *)(gen_frame + 0xc)),_Tm);
          F_00b9bf30(((byte * PTR32 *)(gen_frame + 0x18)),((byte *)(gen_frame + 0x224)),sVar6);
        }
        else {
          if (((byte *)(gen_frame + 0x224)) <= ((byte * PTR32 *)(gen_frame + 0x18))[0]) {
            F_00b9bef0(((byte * PTR32 *)(gen_frame + 0x18)));
          }
          *((byte * PTR32 *)(gen_frame + 0x18))[0] = *pbVar2;
          ((byte * PTR32 *)(gen_frame + 0x18))[0] = ((byte * PTR32 *)(gen_frame + 0x18))[0] + 1;
        }
        pbVar4 = pbVar2 + 1;
        pbVar2 = pbVar2 + 1;
        bVar1 = *pbVar4;
      }
      F_00b9bfc0(((byte * PTR32 *)(gen_frame + 0x18)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x2ec)) ^ (uint)&(*(char *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c19ef0 */
GEN_NOFRAME uint F_00c19ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xc19ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  longlong lVar2;
  
  uVar1 = F_00b9a940(param_1,1);
  if ((int)uVar1 < 1) {
    lVar2 = F_00c4b7c2((__time64_t *)0x0);
  }
  else {
    F_00b9c7a0(param_1,1,5);
    F_00b9a760(param_1,1);
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348930));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
    }
    F_00b9a760(param_1,0xfffffffe);
    (*(int *)((char *)((undefined *)(gen_frame + 0xc)))) = uVar1;
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348934));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
    }
    F_00b9a760(param_1,0xfffffffe);
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = uVar1;
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348938));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = 0xc;
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
    }
    F_00b9a760(param_1,0xfffffffe);
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = uVar1;
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348940));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13488c8)),&REFG(undefined, 0x1348940));
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
      F_00b9a760(param_1,0xfffffffe);
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = uVar1;
    F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348944)));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13488c8)),((char *)REFP(0x1348944)));
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
      F_00b9a760(param_1,0xfffffffe);
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 16))) = uVar1 - 1;
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x134894c));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13488c8)),&REFG(undefined, 0x134894c));
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
      F_00b9a760(param_1,0xfffffffe);
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 20))) = uVar1 - 0x76c;
    F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348954)));
    uVar1 = F_00b9a940(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = F_00b9abc0(param_1,0xffffffff);
    }
    F_00b9a760(param_1,0xfffffffe);
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 32))) = uVar1;
    lVar2 = F_00c4c109(((undefined *)(gen_frame + 0xc)));
  }
  if (lVar2 == -1) {
    F_00b9adc0(param_1);
    return 1;
  }
  F_00b9ade0(param_1,(double)lVar2);
  return 1;
}

/* ref: FUN_00c1a150 */
GEN_NOFRAME uint F_00c1a150(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a150u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar1;
  double dVar2;
  float fVar3;
  
  fVar1 = F_00b9c960(param_1,2,0.0);
  fVar3 = F_00b9c8e0(param_1,1);
  dVar2 = F_00c52da0((longlong)fVar3,(longlong)fVar1);
  F_00b9ade0(param_1,dVar2);
  return 1;
}

/* ref: FUN_00c1a1a0 */
GEN_NOFRAME uint F_00c1a1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a1a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * pcVar1;
  uint uVar2;
  
  pcVar1 = (char *)F_00b9c880(param_1,1,0,0);
  uVar2 = F_00b9ccc0(param_1,2,&REFG(undefined, 0x134898c),&REFG(undefined * PTR32, 0x110eb00));
  pcVar1 = F_00c4a76c(*(int *)(&REFG(undefined, 0x110eae8) + uVar2 * 4),pcVar1);
  F_00b9ae60(param_1,pcVar1);
  return 1;
}

/* ref: FUN_00c1a1f0 */
GEN_NOFRAME unsigned int F_00c1a1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a1f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint _Code;
  
  _Code = F_00b9ca20(param_1,1,0);
                    
  F_00c47c5b(_Code);
}

/* ref: FUN_00c1a210 */
GEN_NOFRAME uint F_00c1a210(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a210u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9cd70(param_1,&REFG(undefined, 0x13489f0),&REFG(undefined * PTR32, 0x110eb20));
  return 1;
}

/* ref: FUN_00c1a2b0 */
GEN_NOFRAME uint F_00c1a2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1a2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = F_00c51f85();
  uVar2 = F_00c51e86(*piVar1);
  F_00b9af00(in_esi,((char *)REFP(0x1348a10)),param_3,uVar2);
  uVar2 = F_00b9abf0(in_esi,0xffffffff,0);
  uVar2 = F_00b9c590(in_esi,param_2,uVar2);
  return uVar2;
}

/* ref: FUN_00c1a2f0 */
GEN_NOFRAME uint F_00c1a2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a2f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  F_00b9c7f0(param_1,1);
  piVar1 = (int *)F_00b9ad00(param_1,1);
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a18)));
  if (piVar1 != (int *)0x0) {
    uVar2 = F_00b9b190(param_1,1);
    if (uVar2 != 0) {
      uVar2 = F_00b9aa50(param_1,0xfffffffe,0xffffffff);
      if (uVar2 != 0) {
        if (*piVar1 == 0) {
          F_00b9ae20(param_1,((char *)REFP(0x1348a20)),0xb);
          return 1;
        }
        F_00b9ae20(param_1,&REFG(undefined, 0x1348a2c),4);
        return 1;
      }
    }
  }
  F_00b9adc0(param_1);
  return 1;
}

/* ref: FUN_00c1a3f0 */
GEN_NOFRAME uint F_00c1a3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a3f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9adc0(param_1);
  F_00b9ae20(param_1,((char *)REFP(0x1348a64)),0x1a);
  return 2;
}

/* ref: FUN_00c1a420 */
GEN_NOFRAME uint F_00c1a420(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)F_00b9c710(param_1,1,((char *)REFP(0x1348a80)));
  iVar3 = F_00c53c51((undefined *)*puVar2);
  *puVar2 = 0;
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (iVar3 != -1) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c1a4a0 */
GEN_NOFRAME uint F_00c1a4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a4a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)F_00b9c710(param_1,1,((char *)REFP(0x1348a88)));
  iVar3 = F_00c49312((undefined *)*puVar2);
  *puVar2 = 0;
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (iVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c1a520 */
GEN_NOFRAME uint F_00c1a520(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a520u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  F_00b9b1f0(in_esi,1);
  F_00b9b070(in_esi,0xffffffff,((char *)REFP(0x1348a90)));
  pcVar1 = (code *)F_00b9acd0(in_esi,0xffffffff);
  uVar2 = (*pcVar1)(in_esi);
  return uVar2;
}

/* ref: FUN_00c1a550 */
GEN_NOFRAME uint F_00c1a550(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a550u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int * piVar2;
  code * pcVar3;
  
  uVar1 = F_00b9a940(param_1,1);
  if (uVar1 == 0xffffffff) {
    F_00b9b110(param_1,0xffffd8ef,2);
  }
  piVar2 = (int *)F_00b9c710(param_1,1,((char *)REFP(0x1348a34)));
  if (*piVar2 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  F_00b9b1f0(param_1,1);
  F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348a90)));
  pcVar3 = (code *)F_00b9acd0(param_1,0xffffffff);
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}

/* ref: FUN_00c1a5d0 */
GEN_NOFRAME uint F_00c1a5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  code * pcVar2;
  
  piVar1 = (int *)F_00b9c710(param_1,1,((char *)REFP(0x1348a98)));
  if (*piVar1 != 0) {
    F_00b9b1f0(param_1,1);
    F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348a90)));
    pcVar2 = (code *)F_00b9acd0(param_1,0xffffffff);
    (*pcVar2)(param_1);
  }
  return 0;
}

/* ref: FUN_00c1a620 */
GEN_NOFRAME uint F_00c1a620(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a620u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00b9c710(param_1,1,((char *)REFP(0x1348aa0)));
  if (*piVar1 == 0) {
    F_00b9ae20(param_1,((char *)REFP(0x1348aa8)),0xd);
    return 1;
  }
  F_00b9af00(param_1,((char *)REFP(0x1348ab8)),*piVar1);
  return 1;
}

/* ref: FUN_00c1a670 */
GEN_NOFRAME uint F_00c1a670(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a670u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  char * _Filename;
  char * _Mode;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  uint uVar5;
  
  _Filename = (char *)F_00b9c820(param_1,1,0);
  _Mode = (char *)F_00b9c880(param_1,2,&REFG(undefined, 0x1348ac4),0);
  puVar2 = (undefined4 *)F_00b9b950(param_1,4);
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  pFVar3 = F_00c495d8(_Filename,_Mode);
  *puVar2 = pFVar3;
  if (pFVar3 != (undefined *)0x0) {
    return 1;
  }
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  if (_Filename != (char *)0x0) {
    F_00b9af00(param_1,((char *)REFP(0x1348a04)),_Filename);
    F_00b9ae00(param_1,iVar1);
    return 3;
  }
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c1a740 */
GEN_NOFRAME uint F_00c1a740(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a740u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  char * _Command;
  char * _Mode;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  uint uVar5;
  
  _Command = (char *)F_00b9c820(param_1,1,0);
  _Mode = (char *)F_00b9c880(param_1,2,&REFG(undefined, 0x1348ac8),0);
  puVar2 = (undefined4 *)F_00b9b950(param_1,4);
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  pFVar3 = F_00c53789(_Command,_Mode);
  *puVar2 = pFVar3;
  if (pFVar3 != (undefined *)0x0) {
    return 1;
  }
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  if (_Command != (char *)0x0) {
    F_00b9af00(param_1,((char *)REFP(0x1348a04)),_Command);
    F_00b9ae00(param_1,iVar1);
    return 3;
  }
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c1a810 */
GEN_NOFRAME uint F_00c1a810(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)F_00b9b950(param_1,4);
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  pFVar3 = F_00c53694();
  *puVar2 = pFVar3;
  if (pFVar3 == (undefined *)0x0) {
    piVar4 = F_00c51f85();
    iVar1 = *piVar4;
    F_00b9adc0(param_1);
    uVar5 = F_00c51e86(iVar1);
    F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
    F_00b9ae00(param_1,iVar1);
    return 3;
  }
  return 1;
}

/* ref: FUN_00c1a8d0 */
GEN_NOFRAME uint F_00c1a8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1a8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint uVar1;
  char * _Filename;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  
  uVar1 = F_00b9a940(in_eax,1);
  if (0 < (int)uVar1) {
    _Filename = (char *)F_00b9abf0(in_eax,1,0);
    if (_Filename == (char *)0x0) {
      piVar4 = (int *)F_00b9c710(in_eax,1,((char *)REFP(0x1348a34)));
      if (*piVar4 == 0) {
        F_00b9bbd0(in_eax,((char *)REFP(0x1348a3c)));
      }
      F_00b9a910(in_eax,1);
    }
    else {
      puVar2 = (undefined4 *)F_00b9b950(in_eax,4);
      *puVar2 = 0;
      F_00b9b070(in_eax,0xffffd8f0,((char *)REFP(0x1348a5c)));
      F_00b9b3d0(in_eax,0xfffffffe);
      pFVar3 = F_00c495d8(_Filename,param_3);
      *puVar2 = pFVar3;
      if (pFVar3 == (undefined *)0x0) {
        F_00c1a2b0(in_eax,1,_Filename);
      }
    }
    F_00b9b360(in_eax,0xffffd8ef,param_2);
  }
  F_00b9b110(in_eax,0xffffd8ef,param_2);
  return 1;
}

/* ref: FUN_00c1a9a0 */
GEN_NOFRAME uint F_00c1a9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a9a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c1a8d0(param_1,1,&REFG(undefined, 0x1348ae8));
  return uVar1;
}

/* ref: FUN_00c1a9c0 */
GEN_NOFRAME uint F_00c1a9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c1a8d0(param_1,2,&REFG(undefined, 0x1348aec));
  return uVar1;
}

/* ref: FUN_00c1a9e0 */
GEN_NOFRAME uint GEN_THISCALL F_00c1a9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1a9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  iVar1 = F_00c53e16(this,&REFG(undefined, 0x1348af4),&(*(double *)(gen_frame + 0x8)));
  if (iVar1 == 1) {
    F_00b9ade0(param_1,(*(double *)(gen_frame + 0x8)));
    return 1;
  }
  return 0;
}

/* ref: FUN_00c1aa50 */
GEN_NOFRAME uint F_00c1aa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1aa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_edi = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  char cVar1;
  char * _Buf;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((int *)(gen_frame + 0x0));
  F_00b9c080(param_2,((int *)(gen_frame + 0x0)));
  _Buf = (char *)F_00b9bef0(((int *)(gen_frame + 0x0)));
  pcVar2 = F_00c5281f(_Buf,0x200,in_edi);
  while( true ) {
    if (pcVar2 == (char *)0x0) {
      F_00b9bfc0(((int *)(gen_frame + 0x0)));
      uVar4 = F_00b9ac60(param_2,0xffffffff);
      F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return (uint)(uVar4 != 0);
    }
    pcVar2 = _Buf;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(_Buf + 1);
    if ((iVar3 != 0) && (_Buf[iVar3 - 1] == '\n')) break;
    ((int *)(gen_frame + 0x0))[0] = ((int *)(gen_frame + 0x0))[0] + iVar3;
    _Buf = (char *)F_00b9bef0(((int *)(gen_frame + 0x0)));
    pcVar2 = F_00c5281f(_Buf,0x200,in_edi);
  }
  ((int *)(gen_frame + 0x0))[0] = ((int *)(gen_frame + 0x0))[0] - 1 + iVar3;
  F_00b9bfc0(((int *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c1ab40 */
GEN_NOFRAME uint GEN_THISCALL F_00c1ab40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1ab40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined * pvVar1;
  uint uVar2;
  undefined * _Count;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((int *)(gen_frame + 0x0));
  F_00b9c080(param_1,((int *)(gen_frame + 0x0)));
  _Count = (undefined *)0x200;
  do {
    pvVar1 = (undefined *)F_00b9bef0(((int *)(gen_frame + 0x0)));
    if (this < _Count) {
      _Count = this;
    }
    pvVar1 = (undefined *)F_00c48f5e(pvVar1,1,(gen_size32)_Count,param_2);
    ((int *)(gen_frame + 0x0))[0] = ((int *)(gen_frame + 0x0))[0] + (int)pvVar1;
    this = (undefined *)((int)this - (int)pvVar1);
  } while ((this != (undefined *)0x0) && (pvVar1 == _Count));
  F_00b9bfc0(((int *)(gen_frame + 0x0)));
  if (this != (undefined *)0x0) {
    uVar2 = F_00b9ac60(param_1,0xffffffff);
    if (uVar2 == 0) {
      uVar2 = 0;
      goto LAB_00c1abd4;
    }
  }
  uVar2 = 1;
LAB_00c1abd4: ;
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c1abf0 */
GEN_NOFRAME uint F_00c1abf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1abf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * in_eax = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined * this;
  char * pcVar5;
  int iVar6;
  bool bVar7;
  int local_4;
  
  uVar2 = F_00b9a750(in_esi);
  local_4 = uVar2 - 1;
  F_00c53f3c(in_eax);
  if (local_4 == 0) {
    uVar2 = F_00c1aa50(in_eax,in_esi);
    iVar6 = param_3 + 1;
  }
  else {
    F_00b9bc60(in_esi,uVar2 + 0x13,((char *)REFP(0x1348af8)));
    uVar2 = 1;
    iVar6 = param_3;
    do {
      local_4 = local_4 - 1;
      bVar7 = uVar2 == 0;
      uVar2 = 0;
      if (bVar7) break;
      uVar2 = F_00b9a940(in_esi,iVar6);
      if (uVar2 == 3) {
        this = (undefined *)F_00b9ab70(in_esi,iVar6);
        if (this == (undefined *)0x0) {
          iVar3 = F_00c48be3(in_eax);
          F_00c50cf0(iVar3,in_eax);
          F_00b9ae20(in_esi,0,0);
          uVar2 = (uint)(iVar3 != -1);
        }
        else {
          uVar2 = F_00c1ab40(this GEN_EDX_ARG,in_esi,in_eax);
        }
      }
      else {
        pcVar5 = (char *)F_00b9abf0(in_esi,iVar6,0);
        if ((pcVar5 == (char *)0x0) || (*pcVar5 != '*')) {
          F_00b9c590(in_esi,iVar6,((char *)REFP(0x1348b0c)));
        }
        cVar1 = pcVar5[1];
        if (cVar1 == 'a') {
          F_00c1ab40((undefined *)0xffffffff GEN_EDX_ARG,in_esi,in_eax);
          uVar2 = 1;
        }
        else if (cVar1 == 'l') {
          uVar2 = F_00c1aa50(in_eax,in_esi);
        }
        else {
          if (cVar1 != 'n') {
            uVar2 = F_00b9c590(in_esi,iVar6,((char *)REFP(0x1348b1c)));
            return uVar2;
          }
          uVar2 = F_00c1a9e0(in_eax GEN_EDX_ARG,in_esi);
        }
      }
      iVar6 = iVar6 + 1;
    } while (local_4 != 0);
  }
  iVar3 = F_00c48ac7(in_eax);
  if (iVar3 == 0) {
    if (uVar2 == 0) {
      F_00b9a760(in_esi,0xfffffffe);
      F_00b9adc0(in_esi);
    }
    return iVar6 - param_3;
  }
  piVar4 = F_00c51f85();
  iVar6 = *piVar4;
  F_00b9adc0(in_esi);
  uVar2 = F_00c51e86(iVar6);
  F_00b9af00(in_esi,&REFG(undefined, 0x1348a0c),uVar2);
  F_00b9ae00(in_esi,iVar6);
  return 3;
}

/* ref: FUN_00c1ad90 */
GEN_NOFRAME uint F_00c1ad90(unsigned int gen_a0)
{
  GEN_ENTER(0xc1ad90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int in_eax;
  int * piVar1;
  uint uVar2;
  
  F_00b9b110(param_1,0xffffd8ef,1);
  piVar1 = (int *)F_00b9ad00(param_1,0xffffffff);
  in_eax = *piVar1;
  if (in_eax == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348acc)),REFG(undefined * PTR32, 0x110eb80));
  }
  uVar2 = F_00c1abf0(in_eax,param_1,1);
  return uVar2;
}

/* ref: FUN_00c1ade0 */
GEN_NOFRAME uint F_00c1ade0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1ade0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00b9c710(param_1,1,((char *)REFP(0x1348a34)));
  if (*piVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  uVar2 = F_00c1abf0(*piVar1,param_1,2);
  return uVar2;
}

/* ref: FUN_00c1ae20 */
GEN_NOFRAME uint F_00c1ae20(unsigned int gen_a0)
{
  GEN_ENTER(0xc1ae20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * _File;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  puVar1 = (undefined4 *)F_00b9ad00(param_1,0xffffd8ed);
  _File = (undefined *)*puVar1;
  if (_File == (undefined *)0x0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348b2c)));
  }
  uVar2 = F_00c1aa50(_File,param_1);
  iVar3 = F_00c48ac7(_File);
  if (iVar3 != 0) {
    piVar4 = F_00c51f85();
    uVar2 = F_00c51e86(*piVar4);
    uVar2 = F_00b9bbd0(param_1,&REFG(undefined, 0x1348b44),uVar2);
    return uVar2;
  }
  if (uVar2 != 0) {
    return 1;
  }
  uVar2 = F_00b9abc0(param_1,0xffffd8ec);
  if (uVar2 != 0) {
    F_00b9a760(param_1,0);
    F_00b9a910(param_1,0xffffd8ed);
    F_00c1a520(param_1);
  }
  return 0;
}

/* ref: FUN_00c1aec0 */
GEN_FRAME uint F_00c1aec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1aec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_edi = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  bool bVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined * _Str;
  gen_size32 sVar5;
  int iVar6;
  double dVar7;
  
  uVar2 = F_00b9a750(in_edi);
  iVar3 = uVar2 - 1;
  bVar1 = true;
  iVar6 = param_3;
  do {
    if (iVar3 == 0) {
      piVar4 = F_00c51f85();
      iVar3 = *piVar4;
      if (bVar1) {
        F_00b9afd0(in_edi,1);
        return 1;
      }
      F_00b9adc0(in_edi);
      uVar2 = F_00c51e86(iVar3);
      F_00b9af00(in_edi,&REFG(undefined, 0x1348a0c),uVar2);
      F_00b9ae00(in_edi,iVar3);
      return 3;
    }
    (*(int *)(gen_frame + 0xc)) = iVar3 - 1;
    uVar2 = F_00b9a940(in_edi,iVar6);
    if (uVar2 == 3) {
      if (bVar1) {
        dVar7 = F_00b9ab30(in_edi,iVar6);
        iVar3 = F_00c49386(param_2,((char *)REFP(0x1348b48)),GEN_LO32((undefined8)gen_d2bits(dVar7)),GEN_HI32((undefined8)gen_d2bits(dVar7)));
        if (0 < iVar3) goto LAB_00c1af76;
      }
LAB_00c1af1e: ;
      bVar1 = false;
    }
    else {
      _Str = (undefined *)F_00b9c820(in_edi,iVar6,&(*(gen_size32 *)(gen_frame + 0x8)));
      if ((!bVar1) || (sVar5 = F_00c4922b(_Str,1,(*(gen_size32 *)(gen_frame + 0x8)),param_2), sVar5 != (*(gen_size32 *)(gen_frame + 0x8))))
      goto LAB_00c1af1e;
LAB_00c1af76: ;
      bVar1 = true;
    }
    iVar6 = iVar6 + 1;
    iVar3 = (*(int *)(gen_frame + 0xc));
  } while( true );
}

/* ref: FUN_00c1afb0 */
GEN_NOFRAME uint F_00c1afb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1afb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  F_00b9b110(param_1,0xffffd8ef,2);
  piVar2 = (int *)F_00b9ad00(param_1,0xffffffff);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348acc)),REFG(undefined * PTR32, 0x110eb84));
  }
  uVar3 = F_00c1aec0(param_1,iVar1,1);
  return uVar3;
}

/* ref: FUN_00c1b000 */
GEN_NOFRAME uint F_00c1b000(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00b9c710(param_1,1,((char *)REFP(0x1348a34)));
  if (*piVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  uVar2 = F_00c1aec0(param_1,*piVar1,2);
  return uVar2;
}

/* ref: FUN_00c1b040 */
GEN_NOFRAME uint F_00c1b040(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * _File;
  int * piVar1;
  uint uVar2;
  uint _Offset;
  int iVar3;
  long lVar4;
  
  piVar1 = (int *)F_00b9c710(param_1,1,((char *)REFP(0x1348a34)));
  if (*piVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  _File = (undefined *)*piVar1;
  uVar2 = F_00b9ccc0(param_1,2,&REFG(undefined, 0x1348b5c),&REFG(undefined * PTR32, 0x110eb94));
  _Offset = F_00b9ca20(param_1,3,0);
  iVar3 = F_00c4bbff(_File,_Offset,*(int *)(&REFG(undefined, 0x110eb88) + uVar2 * 4));
  if (iVar3 != 0) {
    piVar1 = F_00c51f85();
    iVar3 = *piVar1;
    F_00b9adc0(param_1);
    uVar2 = F_00c51e86(iVar3);
    F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar2);
    F_00b9ae00(param_1,iVar3);
    return 3;
  }
  lVar4 = F_00c51bcf(_File);
  F_00b9ae00(param_1,lVar4);
  return 1;
}

/* ref: FUN_00c1b0f0 */
GEN_NOFRAME uint F_00c1b0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b0f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * _File;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint _Size;
  int iVar4;
  
  piVar2 = (int *)F_00b9c710(param_1,1,((char *)REFP(0x1348a34)));
  if (*piVar2 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  _File = (undefined *)*piVar2;
  uVar3 = F_00b9ccc0(param_1,2,0,&REFG(undefined * PTR32, 0x110ebb0));
  _Size = F_00b9ca20(param_1,3,0x200);
  iVar4 = F_00c50f3f(_File,(char *)0x0,*(int *)(&REFG(undefined, 0x110eba4) + uVar3 * 4),_Size);
  piVar2 = F_00c51f85();
  iVar1 = *piVar2;
  if (iVar4 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar3 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar3);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c1b1a0 */
GEN_NOFRAME uint F_00c1b1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b1a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * _File;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  
  F_00b9b110(param_1,0xffffd8ef,2);
  puVar2 = (undefined4 *)F_00b9ad00(param_1,0xffffffff);
  _File = (undefined *)*puVar2;
  if (_File == (undefined *)0x0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348acc)),REFG(undefined * PTR32, 0x110eb84));
  }
  iVar3 = F_00c50ee3(_File);
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (iVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c1b240 */
GEN_NOFRAME uint F_00c1b240(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00b9c710(param_1,1,((char *)REFP(0x1348a34)));
  if (*piVar2 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  iVar3 = F_00c50ee3((undefined *)*piVar2);
  piVar2 = F_00c51f85();
  iVar1 = *piVar2;
  if (iVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar4 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar4);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c1b3c0 */
GEN_NOFRAME uint F_00c1b3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b3c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  F_00b9bc00(param_1,((char *)REFP(0x1348c18)));
  F_00b9a910(param_1,0xffffffff);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348c20)));
  F_00b9cd70(param_1,0,&REFG(undefined * PTR32, 0x110ec20));
  F_00b9b150(param_1,0,1);
  F_00b9af30(param_1,((code *)REFP(0xc1a4a0)),0);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348c28)));
  F_00b9a850(param_1,0xffffd8ef);
  F_00b9cd70(param_1,&REFG(undefined, 0x1348c30),&REFG(undefined * PTR32, 0x110ebc0));
  F_00b9b150(param_1,0,1);
  F_00b9af30(param_1,((code *)REFP(0xc1a3f0)),0);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348c28)));
  uVar1 = F_00c50860();
  puVar2 = (uint *)F_00b9b950(param_1,4);
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  *puVar2 = uVar1;
  F_00b9a910(param_1,0xffffffff);
  F_00b9b360(param_1,0xffffd8ef,1);
  F_00b9a910(param_1,0xfffffffe);
  F_00b9b480(param_1,0xfffffffe);
  F_00b9b290(param_1,0xfffffffd,((char *)REFP(0x1348c34)));
  uVar1 = F_00c50860();
  piVar3 = (int *)F_00b9b950(param_1,4);
  *piVar3 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  *piVar3 = uVar1 + 0x20;
  F_00b9a910(param_1,0xffffffff);
  F_00b9b360(param_1,0xffffd8ef,2);
  F_00b9a910(param_1,0xfffffffe);
  F_00b9b480(param_1,0xfffffffe);
  F_00b9b290(param_1,0xfffffffd,((char *)REFP(0x1348c3c)));
  uVar1 = F_00c50860();
  piVar3 = (int *)F_00b9b950(param_1,4);
  *piVar3 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  *piVar3 = uVar1 + 0x40;
  F_00b9a910(param_1,0xfffffffe);
  F_00b9b480(param_1,0xfffffffe);
  F_00b9b290(param_1,0xfffffffd,((char *)REFP(0x1348c44)));
  F_00b9a760(param_1,0xfffffffe);
  F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348c4c)));
  F_00b9b150(param_1,0,1);
  F_00b9af30(param_1,((code *)REFP(0xc1a420)),0);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348c28)));
  F_00b9b480(param_1,0xfffffffe);
  F_00b9a760(param_1,0xfffffffe);
  return 1;
}

/* ref: FUN_00c1b610 */
GEN_NOFRAME uint F_00c1b610(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b610u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00b9c710(param_1,1,((char *)REFP(0x1348a34)));
  if (*piVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  F_00b9a910(param_1,1);
  F_00b9afd0(param_1,0);
  F_00b9af30(param_1,((code *)REFP(0xc1ae20)),2);
  return 1;
}

/* ref: FUN_00c1b660 */
GEN_NOFRAME uint F_00c1b660(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  char * _Filename;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  
  uVar1 = F_00b9a940(param_1,1);
  if ((int)uVar1 < 1) {
    F_00b9b110(param_1,0xffffd8ef,1);
    uVar1 = F_00c1b610(param_1);
    return uVar1;
  }
  _Filename = (char *)F_00b9c820(param_1,1,0);
  puVar2 = (undefined4 *)F_00b9b950(param_1,4);
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  pFVar3 = F_00c495d8(_Filename,&REFG(undefined, 0x1348af0));
  *puVar2 = pFVar3;
  if (pFVar3 == (undefined *)0x0) {
    piVar4 = F_00c51f85();
    uVar1 = F_00c51e86(*piVar4);
    F_00b9af00(param_1,((char *)REFP(0x1348a10)),_Filename,uVar1);
    uVar1 = F_00b9abf0(param_1,0xffffffff,0);
    F_00b9c590(param_1,1,uVar1);
  }
  uVar1 = F_00b9a750(param_1);
  F_00b9a910(param_1,uVar1);
  F_00b9afd0(param_1,1);
  F_00b9af30(param_1,((code *)REFP(0xc1ae20)),2);
  return 1;
}

/* ref: FUN_00c1b740 */
GEN_NOFRAME uint F_00c1b740(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b740u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  F_00b9c7a0(param_1,2,6);
  iVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      F_00b9a910(param_1,2);
      F_00b9ae00(param_1,iVar3);
      F_00b9b110(param_1,1,iVar3);
      F_00b9b510(param_1,2,1);
      uVar2 = F_00b9a940(param_1,0xffffffff);
      if (uVar2 != 0) {
        return 1;
      }
      F_00b9a760(param_1,0xfffffffe);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00c1b7d0 */
GEN_NOFRAME uint F_00c1b7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b7d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7a0(param_1,1,5);
  F_00b9c7a0(param_1,2,6);
  F_00b9adc0(param_1);
  uVar1 = F_00b9b840(param_1,1);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    F_00b9a910(param_1,2);
    F_00b9a910(param_1,0xfffffffd);
    F_00b9a910(param_1,0xfffffffd);
    F_00b9b510(param_1,2,1);
    uVar1 = F_00b9a940(param_1,0xffffffff);
    if (uVar1 != 0) break;
    F_00b9a760(param_1,0xfffffffd);
    uVar1 = F_00b9b840(param_1,1);
  }
  return 1;
}

/* ref: FUN_00c1b860 */
GEN_FRAME uint F_00c1b860(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double dVar1;
  uint uVar2;
  double dVar3;
  double local_50;
  
  local_50 = 0.0;
  F_00b9c7a0(param_1,1,5);
  F_00b9adc0(param_1);
  uVar2 = F_00b9b840(param_1,1);
  dVar1 = local_50;
  while (uVar2 != 0) {
    F_00b9a760(param_1,0xfffffffe);
    uVar2 = F_00b9a940(param_1,0xffffffff);
    local_50 = dVar1;
    if ((uVar2 == 3) && (dVar3 = F_00b9ab30(param_1,0xffffffff), dVar1 < dVar3)) {
      local_50 = dVar3;
    }
    uVar2 = F_00b9b840(param_1,1);
    dVar1 = local_50;
  }
  F_00b9ade0(param_1,dVar1);
  return 1;
}

/* ref: FUN_00c1b900 */
GEN_NOFRAME uint F_00c1b900(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  F_00b9ae00(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c1b930 */
GEN_NOFRAME uint F_00c1b930(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9c7a0(param_1,1,5);
  F_00b9bbd0(param_1,((char *)REFP(0x1348c54)));
  F_00b9a910(param_1,1);
  return 1;
}

/* ref: FUN_00c1b960 */
GEN_NOFRAME uint F_00c1b960(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  uVar1 = uVar1 + 1;
  uVar2 = F_00b9a750(param_1);
  if (uVar2 != 2) {
    if (uVar2 != 3) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x1348c68)));
      return uVar1;
    }
    uVar3 = F_00b9c9b0(param_1,2);
    uVar2 = uVar1;
    if ((int)uVar1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    uVar1 = uVar3;
    if ((int)uVar3 < (int)uVar2) {
      do {
        uVar1 = uVar2 - 1;
        F_00b9b110(param_1,1,uVar1);
        F_00b9b360(param_1,1,uVar2);
        uVar2 = uVar1;
      } while ((int)uVar3 < (int)uVar1);
      F_00b9b360(param_1,1,uVar3);
      return 0;
    }
  }
  F_00b9b360(param_1,1,uVar1);
  return 0;
}

/* ref: FUN_00c1ba00 */
GEN_NOFRAME uint F_00c1ba00(unsigned int gen_a0)
{
  GEN_ENTER(0xc1ba00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  uVar2 = F_00b9ca20(param_1,2,uVar1);
  if ((0 < (int)uVar2) && ((int)uVar2 <= (int)uVar1)) {
    F_00b9b110(param_1,1,uVar2);
    while ((int)uVar2 < (int)uVar1) {
      F_00b9b110(param_1,1,uVar2 + 1);
      F_00b9b360(param_1,1,uVar2);
      uVar2 = uVar2 + 1;
    }
    F_00b9adc0(param_1);
    F_00b9b360(param_1,1,uVar1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00c1bad0 */
GEN_NOFRAME uint F_00c1bad0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1bad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc));
  uVar1 = F_00b9c880(param_1,2,&REFG(undefined, 0x14c5bf4),&(*(undefined4 *)(gen_frame + 0xc)));
  F_00b9c7a0(param_1,1,5);
  uVar2 = F_00b9ca20(param_1,3,1);
  uVar3 = F_00b9a940(param_1,4);
  if ((int)uVar3 < 1) {
    uVar3 = F_00b9ac60(param_1,1);
  }
  else {
    uVar3 = F_00b9c9b0(param_1,4);
  }
  F_00b9c080(param_1,((undefined1 *)(gen_frame + 0x10)));
  for (; (int)uVar2 < (int)uVar3; uVar2 = uVar2 + 1) {
    F_00b9b110(param_1,1,uVar2);
    uVar4 = F_00b9a9f0(param_1,0xffffffff);
    if (uVar4 == 0) {
      uVar4 = F_00b9a940(param_1,0xffffffff);
      uVar4 = F_00b9a960(param_1,uVar4);
      F_00b9bbd0(param_1,((char *)REFP(0x1348c90)),uVar4);
    }
    F_00b9c000(((undefined1 *)(gen_frame + 0x10)));
    F_00b9bf30(((undefined1 *)(gen_frame + 0x10)),uVar1,(*(undefined4 *)(gen_frame + 0xc)));
  }
  if (uVar2 == uVar3) {
    F_00b9b110(param_1,1,uVar2);
    uVar2 = F_00b9a9f0(param_1,0xffffffff);
    if (uVar2 == 0) {
      uVar2 = F_00b9a940(param_1,0xffffffff);
      uVar2 = F_00b9a960(param_1,uVar2);
      F_00b9bbd0(param_1,((char *)REFP(0x1348c90)),uVar2);
    }
    F_00b9c000(((undefined1 *)(gen_frame + 0x10)));
  }
  F_00b9bfc0(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c1bcc0 */
GEN_NOFRAME unsigned int F_00c1bcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1bcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < param_3) {
    do {
      F_00b9b110(param_1,1,param_2);
      F_00b9b110(param_1,1,param_3);
      uVar1 = F_00b9a940(param_1,2);
      if (uVar1 == 0) {
        uVar1 = F_00b9aaf0(param_1,0xffffffff,0xfffffffe);
      }
      else {
        F_00b9a910(param_1,2);
        F_00b9a910(param_1,0xfffffffe);
        F_00b9a910(param_1,0xfffffffc);
        F_00b9b510(param_1,2,1);
        uVar1 = F_00b9abc0(param_1,0xffffffff);
        F_00b9a760(param_1,0xfffffffe);
      }
      if (uVar1 == 0) {
        F_00b9a760(param_1,0xfffffffd);
      }
      else {
        F_00b9b360(param_1,1,param_2);
        F_00b9b360(param_1,1,param_3);
      }
      if (param_3 - param_2 == 1) {
        return;
      }
      iVar5 = (param_2 + param_3) / 2;
      F_00b9b110(param_1,1,iVar5);
      F_00b9b110(param_1,1,param_2);
      uVar1 = F_00b9a940(param_1,2);
      if (uVar1 == 0) {
        uVar1 = F_00b9aaf0(param_1,0xfffffffe,0xffffffff);
      }
      else {
        F_00b9a910(param_1,2);
        F_00b9a910(param_1,0xfffffffd);
        F_00b9a910(param_1,0xfffffffd);
        F_00b9b510(param_1,2,1);
        uVar1 = F_00b9abc0(param_1,0xffffffff);
        F_00b9a760(param_1,0xfffffffe);
      }
      if (uVar1 == 0) {
        F_00b9a760(param_1,0xfffffffe);
        F_00b9b110(param_1,1,param_3);
        uVar1 = F_00b9a940(param_1,2);
        if (uVar1 == 0) {
          uVar1 = F_00b9aaf0(param_1,0xffffffff,0xfffffffe);
        }
        else {
          F_00b9a910(param_1,2);
          F_00b9a910(param_1,0xfffffffe);
          F_00b9a910(param_1,0xfffffffc);
          F_00b9b510(param_1,2,1);
          uVar1 = F_00b9abc0(param_1,0xffffffff);
          F_00b9a760(param_1,0xfffffffe);
        }
        if (uVar1 == 0) {
          F_00b9a760(param_1,0xfffffffd);
        }
        else {
          F_00b9b360(param_1,1,iVar5);
          F_00b9b360(param_1,1,param_3);
        }
      }
      else {
        F_00b9b360(param_1,1,iVar5);
        F_00b9b360(param_1,1,param_2);
      }
      if (param_3 - param_2 == 2) {
        return;
      }
      F_00b9b110(param_1,1,iVar5);
      F_00b9a910(param_1,0xffffffff);
      iVar2 = param_3 - 1;
      F_00b9b110(param_1,1,iVar2);
      F_00b9b360(param_1,1,iVar5);
      F_00b9b360(param_1,1,iVar2);
      iVar5 = param_2;
      iVar4 = iVar2;
      while( true ) {
        while( true ) {
          iVar3 = iVar5 + 1;
          F_00b9b110(param_1,1,iVar3);
          uVar1 = F_00b9a940(param_1,2);
          if (uVar1 == 0) {
            uVar1 = F_00b9aaf0(param_1,0xffffffff,0xfffffffe);
          }
          else {
            F_00b9a910(param_1,2);
            F_00b9a910(param_1,0xfffffffe);
            F_00b9a910(param_1,0xfffffffc);
            F_00b9b510(param_1,2,1);
            uVar1 = F_00b9abc0(param_1,0xffffffff);
            F_00b9a760(param_1,0xfffffffe);
          }
          if (uVar1 == 0) break;
          if (param_3 < iVar3) {
            F_00b9bbd0(param_1,((char *)REFP(0x1348cc8)));
          }
          F_00b9a760(param_1,0xfffffffe);
          iVar5 = iVar3;
        }
        while( true ) {
          iVar4 = iVar4 - 1;
          F_00b9b110(param_1,1,iVar4);
          uVar1 = F_00b9a940(param_1,2);
          if (uVar1 == 0) {
            uVar1 = F_00b9aaf0(param_1,0xfffffffd,0xffffffff);
          }
          else {
            F_00b9a910(param_1,2);
            F_00b9a910(param_1,0xfffffffc);
            F_00b9a910(param_1,0xfffffffd);
            F_00b9b510(param_1,2,1);
            uVar1 = F_00b9abc0(param_1,0xffffffff);
            F_00b9a760(param_1,0xfffffffe);
          }
          if (uVar1 == 0) break;
          if (iVar4 < param_2) {
            F_00b9bbd0(param_1,((char *)REFP(0x1348cec)));
          }
          F_00b9a760(param_1,0xfffffffe);
        }
        if (iVar4 < iVar3) break;
        F_00b9b360(param_1,1,iVar3);
        F_00b9b360(param_1,1,iVar4);
        iVar5 = iVar3;
      }
      F_00b9a760(param_1,0xfffffffc);
      F_00b9b110(param_1,1,iVar2);
      F_00b9b110(param_1,1,iVar3);
      F_00b9b360(param_1,1,iVar2);
      F_00b9b360(param_1,1,iVar3);
      if (iVar3 - param_2 < param_3 - iVar3) {
        iVar2 = param_2;
        iVar4 = iVar5;
        param_2 = iVar5 + 2;
      }
      else {
        iVar2 = iVar5 + 2;
        iVar4 = param_3;
        param_3 = iVar5;
      }
      F_00c1bcc0(param_1,iVar2,iVar4);
    } while (param_2 < param_3);
  }
  return;
}

/* ref: FUN_00c1c0c0 */
GEN_NOFRAME uint F_00c1c0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  F_00b9bc60(param_1,0x28,&REFG(undefined, 0x14c5bf5));
  uVar2 = F_00b9a940(param_1,2);
  if (0 < (int)uVar2) {
    F_00b9c7a0(param_1,2,6);
  }
  F_00b9a760(param_1,2);
  F_00c1bcc0(param_1,1,uVar1);
  return 0;
}

/* ref: FUN_00c1c120 */
GEN_NOFRAME uint F_00c1c120(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9cd70(param_1,((char *)REFP(0x1348d5c)),&REFG(undefined * PTR32, 0x110ec70));
  return 1;
}

/* ref: FUN_00c1c140 */
GEN_NOFRAME uint F_00c1c140(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c140u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  DWORD DVar1;
  char * pcVar2;
  uint uVar3;
  undefined * puVar4;
  CHAR * pCVar5;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)((CHAR *)(gen_frame + 0x4));
  pCVar5 = ((CHAR *)(gen_frame + 0x4));
  DVar1 = gen_imp_GetModuleFileNameA((HMODULE)0x0,((CHAR *)(gen_frame + 0x4)),0x105);
  if ((DVar1 != 0) && (DVar1 != 0x105)) {
    pcVar2 = F_00c51220(((CHAR *)(gen_frame + 0x4)),0x5c);
    if (pcVar2 != (char *)0x0) {
      puVar4 = &REFG(undefined, 0x1348d84);
      *pcVar2 = '\0';
      uVar3 = F_00b9abf0(in_esi,0xffffffff,0);
      F_00b9cb70(in_esi,uVar3,puVar4,pCVar5);
      uVar3 = F_00b9a7b0(in_esi,0xfffffffe);
      F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)((CHAR *)(gen_frame + 0x4)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  uVar3 = F_00b9bbd0(in_esi,((char *)REFP(0x1348d64)));
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)((CHAR *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00c1c1f0 */
GEN_NOFRAME uint F_00c1c1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c1f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_edi = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  DWORD dwMessageId;
  DWORD DVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)((CHAR *)(gen_frame + 0xc));
  dwMessageId = gen_imp_GetLastError();
  DVar1 = gen_imp_FormatMessageA(0x1200,(LPCVOID)0x0,dwMessageId,0,((CHAR *)(gen_frame + 0xc)),0x80,(undefined * PTR32 *)0x0);
  if (DVar1 != 0) {
    uVar2 = F_00b9ae60(in_edi,((CHAR *)(gen_frame + 0xc)));
    F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)((CHAR *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return uVar2;
  }
  uVar2 = F_00b9af00(in_edi,((char *)REFP(0x1348d88)),dwMessageId);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)((CHAR *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c1c2d0 */
GEN_NOFRAME uint F_00c1c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00b9af00(in_esi,&REFG(undefined, 0x1348da8),((char *)REFP(0x1348d9c)),param_2);
  F_00b9b040(in_esi,0xffffd8f0);
  uVar1 = F_00b9a940(in_esi,0xffffffff);
  if (uVar1 != 0) {
    uVar1 = F_00b9ad00(in_esi,0xffffffff);
    return uVar1;
  }
  F_00b9a760(in_esi,0xfffffffe);
  puVar2 = (undefined4 *)F_00b9b950(in_esi,4);
  *puVar2 = 0;
  F_00b9b070(in_esi,0xffffd8f0,((char *)REFP(0x1348db0)));
  F_00b9b3d0(in_esi,0xfffffffe);
  F_00b9af00(in_esi,&REFG(undefined, 0x1348dc8),((char *)REFP(0x1348dbc)),param_2);
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b260(in_esi,0xffffd8f0);
  return (uint)puVar2;
}

/* ref: FUN_00c1c370 */
GEN_NOFRAME uint F_00c1c370(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c370u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00b9c710(param_1,1,((char *)REFP(0x1348dd0)));
  if ((HMODULE)*puVar1 != (HMODULE)0x0) {
    gen_imp_FreeLibrary((HMODULE)*puVar1);
  }
  *puVar1 = 0;
  return 0;
}

/* ref: FUN_00c1c3a0 */
GEN_NOFRAME uint F_00c1c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  LPCSTR param_2 = (LPCSTR)gen_a1;
  LPCSTR param_3 = (LPCSTR)gen_a2;
  int * piVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  
  piVar1 = (int *)F_00c1c2d0(in_eax,param_2);
  if (*piVar1 == 0) {
    pHVar2 = gen_imp_LoadLibraryA(param_2);
    if (pHVar2 == (HMODULE)0x0) {
      F_00c1c1f0(in_eax);
    }
    *piVar1 = (int)pHVar2;
    if (pHVar2 == (HMODULE)0x0) {
      return 1;
    }
  }
  pFVar3 = gen_imp_GetProcAddress((HMODULE)*piVar1,param_3);
  if (pFVar3 == (FARPROC)0x0) {
    F_00c1c1f0(in_eax);
    return 2;
  }
  F_00b9af30(in_eax,pFVar3,0);
  return 0;
}

/* ref: FUN_00c1c410 */
GEN_NOFRAME uint F_00c1c410(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c410u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * puVar3;
  
  uVar1 = F_00b9c820(param_1,1,0);
  uVar2 = F_00b9c820(param_1,2,0);
  uVar1 = F_00c1c3a0(param_1,uVar1,uVar2);
  if (uVar1 == 0) {
    return 1;
  }
  F_00b9adc0(param_1);
  F_00b9a800(param_1,0xfffffffe);
  puVar3 = &REFG(undefined, 0x1348ddc);
  if (uVar1 != 1) {
    puVar3 = &REFG(undefined, 0x1348de4);
  }
  F_00b9ae60(param_1,puVar3);
  return 3;
}

/* ref: FUN_00c1c4b0 */
GEN_NOFRAME uint F_00c1c4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1c4b0u, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  cVar1 = *in_eax;
  while (cVar1 == REFG(char, 0x1348df0)) {
    in_eax = in_eax + 1;
    cVar1 = *in_eax;
  }
  if (*in_eax == '\0') {
    return 0;
  }
  pcVar3 = (char *)F_00c51da0(in_eax,(int)REFG(char, 0x1348df4));
  pcVar2 = in_eax;
  if (pcVar3 == (char *)0x0) {
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  F_00b9ae20(param_2,in_eax,(int)pcVar3 - (int)in_eax);
  return (uint)pcVar3;
}

/* ref: FUN_00c1c520 */
GEN_NOFRAME uint F_00c1c520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1c520u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char * _Filename;
  undefined * _File;
  undefined * puVar4;
  uint uVar5;
  
  uVar1 = F_00b9cb70(in_esi,in_EAX,&REFG(undefined, 0x1348dfc),&REFG(undefined, 0x1348df8));
  F_00b9b070(in_esi,0xffffd8ef,param_2);
  uVar2 = F_00b9abf0(in_esi,0xffffffff,0);
  if (uVar2 == 0) {
    F_00b9bbd0(in_esi,((char *)REFP(0x1348e00)),param_2);
  }
  F_00b9ae20(in_esi,&REFG(undefined, 0x14c5bf6),0);
  uVar2 = F_00c1c4b0(uVar2,in_esi);
  while( true ) {
    if (uVar2 == 0) {
      return 0;
    }
    puVar4 = &REFG(undefined, 0x1348e20);
    uVar5 = uVar1;
    uVar3 = F_00b9abf0(in_esi,0xffffffff,0);
    _Filename = (char *)F_00b9cb70(in_esi,uVar3,puVar4,uVar5);
    F_00b9a7b0(in_esi,0xfffffffe);
    _File = F_00c495d8(_Filename,&REFG(undefined, 0x1348dec));
    if (_File != (undefined *)0x0) break;
    F_00b9af00(in_esi,((char *)REFP(0x1348e24)),_Filename);
    F_00b9a7b0(in_esi,0xfffffffe);
    F_00b9b880(in_esi,2);
    uVar2 = F_00c1c4b0(uVar2,in_esi);
  }
  F_00c49312(_File);
  return (uint)_Filename;
}

/* ref: FUN_00c1c630 */
GEN_NOFRAME uint F_00c1c630(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c820(param_1,1,0);
  uVar1 = F_00c1c520(param_1,&REFG(undefined, 0x1348e64));
  if (uVar1 != 0) {
    uVar1 = F_00b9c250(param_1,uVar1);
    if (uVar1 != 0) {
      F_00b9abf0(param_1,0xffffffff,0);
      uVar1 = F_00b9abf0(param_1,1,0);
      F_00b9bbd0(param_1,((char *)REFP(0x1348e34)),uVar1);
    }
  }
  return 1;
}

/* ref: FUN_00c1c800 */
GEN_NOFRAME uint F_00c1c800(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c820(param_1,1,0);
  F_00b9b070(param_1,0xffffd8ef,((char *)REFP(0x1348eb4)));
  uVar2 = F_00b9a940(param_1,0xffffffff);
  if (uVar2 != 5) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348ebc)));
  }
  F_00b9b070(param_1,0xffffffff,uVar1);
  uVar2 = F_00b9a940(param_1,0xffffffff);
  if (uVar2 == 0) {
    F_00b9af00(param_1,((char *)REFP(0x1348ee0)),uVar1);
  }
  return 1;
}

/* ref: FUN_00c1c870 */
GEN_NOFRAME uint F_00c1c870(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * puVar3;
  int iVar4;
  
  uVar1 = F_00b9c820(param_1,1,0);
  F_00b9a760(param_1,1);
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348f04)));
  F_00b9b070(param_1,2,uVar1);
  uVar2 = F_00b9abc0(param_1,0xffffffff);
  if (uVar2 == 0) {
    F_00b9b070(param_1,0xffffd8ef,((char *)REFP(0x1348f38)));
    uVar2 = F_00b9a940(param_1,0xffffffff);
    if (uVar2 != 5) {
      F_00b9bbd0(param_1,((char *)REFP(0x1348f40)));
    }
    F_00b9ae20(param_1,&REFG(undefined, 0x14c5bf7),0);
    iVar4 = 1;
    while( true ) {
      F_00b9b110(param_1,0xfffffffe,iVar4);
      uVar2 = F_00b9a940(param_1,0xffffffff);
      if (uVar2 == 0) {
        uVar2 = F_00b9abf0(param_1,0xfffffffe,0);
        F_00b9bbd0(param_1,((char *)REFP(0x1348f64)),uVar1,uVar2);
      }
      F_00b9ae60(param_1,uVar1);
      F_00b9b510(param_1,1,1);
      uVar2 = F_00b9a940(param_1,0xffffffff);
      if (uVar2 == 6) break;
      uVar2 = F_00b9a9f0(param_1,0xffffffff);
      if (uVar2 == 0) {
        F_00b9a760(param_1,0xfffffffe);
        iVar4 = iVar4 + 1;
      }
      else {
        F_00b9b880(param_1,2);
        iVar4 = iVar4 + 1;
      }
    }
    F_00b9aff0(param_1,&REFG(undefined, 0x110ecc0));
    F_00b9b290(param_1,2,uVar1);
    F_00b9ae60(param_1,uVar1);
    F_00b9b510(param_1,1,1);
    uVar2 = F_00b9a940(param_1,0xffffffff);
    if (uVar2 != 0) {
      F_00b9b290(param_1,2,uVar1);
    }
    F_00b9b070(param_1,2,uVar1);
    puVar3 = (undefined *)F_00b9ad00(param_1,0xffffffff);
    if (puVar3 == &REFG(undefined, 0x110ecc0)) {
      F_00b9afd0(param_1,1);
      F_00b9a910(param_1,0xffffffff);
      F_00b9b290(param_1,2,uVar1);
    }
  }
  else {
    puVar3 = (undefined *)F_00b9ad00(param_1,0xffffffff);
    if (puVar3 == &REFG(undefined, 0x110ecc0)) {
      F_00b9bbd0(param_1,((char *)REFP(0x1348f0c)),uVar1);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00c1ca20 */
GEN_NOFRAME uint F_00c1ca20(unsigned int gen_a0)
{
  GEN_ENTER(0xc1ca20u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  uVar1 = F_00c01ae0(in_esi,1,((undefined1 *)(gen_frame + 0x8)));
  if (uVar1 != 0) {
    uVar1 = F_00c028c0(in_esi,&REFG(undefined, 0x1348f80),((undefined1 *)(gen_frame + 0x8)));
    if (uVar1 != 0) {
      uVar1 = F_00b9a980(in_esi,0xffffffff);
      if (uVar1 == 0) goto LAB_00c1ca74;
    }
  }
  F_00b9bbd0(in_esi,((char *)REFP(0x1348f84)));
LAB_00c1ca74: ;
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b480(in_esi,0xfffffffe);
  uVar1 = F_00b9a760(in_esi,0xfffffffe);
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c1caa0 */
GEN_NOFRAME unsigned int F_00c1caa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1caa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_edi = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = 2;
  if (1 < param_2) {
    do {
      F_00b9a910(in_edi,iVar1);
      F_00b9a910(in_edi,0xfffffffe);
      F_00b9b510(in_edi,1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 <= param_2);
  }
  return;
}

/* ref: FUN_00c1cae0 */
GEN_NOFRAME uint F_00c1cae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1cae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  char * in_edi = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  char * pcVar2;
  uint uVar3;
  
  F_00b9a910(in_esi,0xffffffff);
  F_00b9b290(in_esi,0xfffffffe,&REFG(undefined, 0x1348fac));
  F_00b9ae60(in_esi,in_edi);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1348fb0)));
  pcVar1 = F_00c51220(in_edi,0x2e);
  pcVar2 = in_edi;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1 + 1;
  }
  F_00b9ae20(in_esi,in_edi,(int)pcVar2 - (int)in_edi);
  uVar3 = F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1348fb8)));
  return uVar3;
}

/* ref: FUN_00c1cb40 */
GEN_NOFRAME uint F_00c1cb40(unsigned int gen_a0)
{
  GEN_ENTER(0xc1cb40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00b9c820(param_1,1,0);
  uVar2 = F_00b9a750(param_1);
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348fc4)));
  F_00b9b070(param_1,uVar2 + 1,uVar1);
  uVar3 = F_00b9a940(param_1,0xffffffff);
  if (uVar3 != 5) {
    F_00b9a760(param_1,0xfffffffe);
    uVar3 = F_00b9bd60(param_1,0xffffd8ee,uVar1,1);
    if (uVar3 != 0) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x1348fcc)),uVar1);
      return uVar1;
    }
    F_00b9a910(param_1,0xffffffff);
    F_00b9b290(param_1,uVar2 + 1,uVar1);
  }
  F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348fec)));
  uVar3 = F_00b9a940(param_1,0xffffffff);
  if (uVar3 == 0) {
    F_00b9a760(param_1,0xfffffffe);
    F_00c1cae0(param_1,uVar1);
  }
  else {
    F_00b9a760(param_1,0xfffffffe);
  }
  F_00b9a910(param_1,0xffffffff);
  F_00c1ca20(param_1);
  F_00c1caa0(param_1,uVar2);
  return 0;
}

/* ref: FUN_00c1cc20 */
GEN_NOFRAME uint F_00c1cc20(unsigned int gen_a0)
{
  GEN_ENTER(0xc1cc20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9b190(param_1,1);
  if (uVar1 == 0) {
    F_00b9b150(param_1,0,1);
    F_00b9a910(param_1,0xffffffff);
    F_00b9b3d0(param_1,1);
  }
  F_00b9a910(param_1,0xffffd8ee);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348ff4)));
  return 0;
}

/* ref: FUN_00c1cce0 */
GEN_NOFRAME uint F_00c1cce0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1cce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * puVar1;
  char * pcVar2;
  uint uVar3;
  int iVar4;
  
  F_00b9bc00(param_1,((char *)REFP(0x1349028)));
  F_00b9af30(param_1,((code *)REFP(0xc1c370)),0);
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1349034));
  F_00b9cd70(param_1,((char *)REFP(0x134903c)),&REFG(undefined * PTR32, 0x110ecc4));
  F_00b9a910(param_1,0xffffffff);
  F_00b9a850(param_1,0xffffd8ef);
  F_00b9b150(param_1,0,4);
  iVar4 = 0;
  puVar1 = (*(undefined * PTR32 (*)[4])REFP(0x110ecf4))[0];
  while (puVar1 != (undefined *)0x0) {
    F_00b9af30(param_1,puVar1,0);
    iVar4 = iVar4 + 1;
    F_00b9b360(param_1,0xfffffffe,iVar4);
    puVar1 = (*(undefined * PTR32 (*)[4])REFP(0x110ecf4))[iVar4];
  }
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1349044)));
  pcVar2 = F_00c4b5a4(((char *)REFP(0x1349088)));
  if (pcVar2 == (char *)0x0) {
    F_00b9ae60(param_1,((char *)REFP(0x134904c)));
  }
  else {
    uVar3 = F_00b9cb70(param_1,pcVar2,&REFG(undefined, 0x1349000),&REFG(undefined, 0x1348ffc));
    F_00b9cb70(param_1,uVar3,&REFG(undefined, 0x1349004),((char *)REFP(0x134904c)));
    F_00b9a7b0(param_1,0xfffffffe);
  }
  F_00c1c140(param_1);
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1349094));
  pcVar2 = F_00c4b5a4(((char *)REFP(0x13490bc)));
  if (pcVar2 == (char *)0x0) {
    F_00b9ae60(param_1,((char *)REFP(0x134909c)));
  }
  else {
    uVar3 = F_00b9cb70(param_1,pcVar2,&REFG(undefined, 0x1349000),&REFG(undefined, 0x1348ffc));
    F_00b9cb70(param_1,uVar3,&REFG(undefined, 0x1349004),((char *)REFP(0x134909c)));
    F_00b9a7b0(param_1,0xfffffffe);
  }
  F_00c1c140(param_1);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13490c8)));
  F_00b9ae20(param_1,((char *)REFP(0x13490d0)),9);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13490dc)));
  F_00b9bd60(param_1,0xffffd8f0,((char *)REFP(0x13490e4)),2);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13490ec)));
  F_00b9b150(param_1,0,0);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13490f4)));
  F_00b9a910(param_1,0xffffd8ee);
  F_00b9cd70(param_1,0,&REFG(undefined * PTR32, 0x110ecdc));
  F_00b9a760(param_1,0xfffffffe);
  return 1;
}

/* ref: FUN_00c1cec0 */
GEN_NOFRAME uint F_00c1cec0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1cec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  char * _Str;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00b9a750(param_1);
  F_00b9b070(param_1,0xffffd8ee,((char *)REFP(0x13490fc)));
  iVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      F_00b9a910(param_1,0xffffffff);
      F_00b9a910(param_1,iVar3);
      F_00b9b510(param_1,1,1);
      _Str = (char *)F_00b9abf0(param_1,0xffffffff,0);
      if (_Str == (char *)0x0) {
        uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x1349108)));
        return uVar1;
      }
      if (1 < iVar3) {
        uVar2 = F_00c50860();
        F_00c5075a(&REFG(undefined, 0x1349134),(undefined *)(uVar2 + 0x20));
      }
      uVar2 = F_00c50860();
      F_00c5075a(_Str,(undefined *)(uVar2 + 0x20));
      F_00b9a760(param_1,0xfffffffe);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)uVar1);
  }
  uVar1 = F_00c50860();
  F_00c5075a(&REFG(undefined, 0x1349138),(undefined *)(uVar1 + 0x20));
  return 0;
}

/* ref: FUN_00c1cf90 */
GEN_NOFRAME uint F_00c1cf90(unsigned int gen_a0)
{
  GEN_ENTER(0xc1cf90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  byte * pbVar2;
  ulong uVar3;
  int iVar4;
  double dVar5;
  
  uVar1 = F_00b9ca20(param_1,2,10);
  if (uVar1 == 10) {
    F_00b9c7f0(param_1,1);
    uVar1 = F_00b9a9b0(param_1,1);
    if (uVar1 != 0) {
      dVar5 = F_00b9ab30(param_1,1);
      F_00b9ade0(param_1,dVar5);
      return 1;
    }
  }
  else {
    pbVar2 = (byte *)F_00b9c820(param_1,1,0);
    if (((int)uVar1 < 2) || (0x24 < (int)uVar1)) {
      F_00b9c590(param_1,2,((char *)REFP(0x134913c)));
    }
    uVar3 = F_00c4abb6((char *)pbVar2,(char * PTR32 *)&(*(byte * PTR32 *)(gen_frame + 0x8)),uVar1);
    if (pbVar2 != (*(byte * PTR32 *)(gen_frame + 0x8))) {
      iVar4 = F_00c4873c((uint)*(*(byte * PTR32 *)(gen_frame + 0x8)));
      while (iVar4 != 0) {
        pbVar2 = (*(byte * PTR32 *)(gen_frame + 0x8)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x8)) = pbVar2;
        iVar4 = F_00c4873c((uint)*pbVar2);
      }
      if (*(*(byte * PTR32 *)(gen_frame + 0x8)) == 0) {
        (*(ulong *)(gen_frame + 0xc)) = uVar3;
        dVar5 = (double)(int)uVar3;
        if ((int)uVar3 < 0) {
          dVar5 = dVar5 + *(double *)&REFG(double, 0x10b8de8);
        }
        F_00b9ade0(param_1,dVar5);
        return 1;
      }
    }
  }
  F_00b9adc0(param_1);
  return 1;
}

/* ref: FUN_00c1d0b0 */
GEN_NOFRAME uint F_00c1d0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d0b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9ca20(param_1,2,1);
  F_00b9a760(param_1,1);
  uVar2 = F_00b9a9f0(param_1,1);
  if ((uVar2 != 0) && (0 < (int)uVar1)) {
    F_00b9bb40(param_1,uVar1);
    F_00b9a910(param_1,1);
    F_00b9b880(param_1,2);
  }
  uVar1 = F_00b9b830(param_1);
  return uVar1;
}

/* ref: FUN_00c1d110 */
GEN_NOFRAME uint F_00c1d110(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9b190(param_1,1);
  if (uVar1 == 0) {
    F_00b9adc0(param_1);
    return 1;
  }
  F_00b9bc90(param_1,1,((char *)REFP(0x1349150)));
  return 1;
}

/* ref: FUN_00c1d160 */
GEN_NOFRAME uint F_00c1d160(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9a940(param_1,2);
  F_00b9c7a0(param_1,1,5);
  if ((uVar1 != 0) && (uVar1 != 5)) {
    F_00b9c590(param_1,2,((char *)REFP(0x134915c)));
  }
  uVar1 = F_00b9bc90(param_1,1,((char *)REFP(0x1349174)));
  if (uVar1 != 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1349180)));
  }
  F_00b9a760(param_1,2);
  F_00b9b3d0(param_1,1);
  return 1;
}

/* ref: FUN_00c1d1e0 */
GEN_NOFRAME uint F_00c1d1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1d1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  uVar1 = F_00b9a940(in_esi,1);
  if (uVar1 == 6) {
    uVar1 = F_00b9a910(in_esi,1);
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return uVar1;
  }
  if (param_2 == 0) {
    uVar1 = F_00b9c9b0(in_esi,1);
  }
  else {
    uVar1 = F_00b9ca20(in_esi,1,1);
  }
  if ((int)uVar1 < 0) {
    F_00b9c590(in_esi,1,((char *)REFP(0x13491a4)));
  }
  uVar2 = F_00c01ae0(in_esi,uVar1,((undefined1 *)(gen_frame + 0x8)));
  if (uVar2 == 0) {
    F_00b9c590(in_esi,1,((char *)REFP(0x13491c0)));
  }
  F_00c028c0(in_esi,&REFG(undefined, 0x13491d0),((undefined1 *)(gen_frame + 0x8)));
  uVar2 = F_00b9a940(in_esi,0xffffffff);
  if (uVar2 == 0) {
    uVar2 = F_00b9bbd0(in_esi,((char *)REFP(0x13491d4)),uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c1d2b0 */
GEN_NOFRAME uint F_00c1d2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d2b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00c1d1e0(param_1,1);
  uVar1 = F_00b9a980(param_1,0xffffffff);
  if (uVar1 != 0) {
    F_00b9a910(param_1,0xffffd8ee);
    return 1;
  }
  F_00b9b1f0(param_1,0xffffffff);
  return 1;
}

/* ref: FUN_00c1d300 */
GEN_NOFRAME uint F_00c1d300(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d300u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  double dVar2;
  
  F_00b9c7a0(param_1,2,5);
  F_00c1d1e0(param_1,0);
  F_00b9a910(param_1,2);
  uVar1 = F_00b9a9b0(param_1,1);
  if ((uVar1 != 0) && (dVar2 = F_00b9ab30(param_1,1), GEN_ISNAN(dVar2) != (GEN_ISNAN(dVar2) || dVar2 == 0.0)))
  {
    F_00b9b010(param_1);
    F_00b9a800(param_1,0xfffffffe);
    F_00b9b480(param_1,0xfffffffe);
    return 0;
  }
  uVar1 = F_00b9a980(param_1,0xfffffffe);
  if ((uVar1 == 0) && (uVar1 = F_00b9b480(param_1,0xfffffffe), uVar1 != 0)) {
    return 1;
  }
  F_00b9bbd0(param_1,((char *)REFP(0x1349208)));
  return 1;
}

/* ref: FUN_00c1d3a0 */
GEN_NOFRAME uint F_00c1d3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d3a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  F_00b9c7f0(param_1,2);
  uVar1 = F_00b9aa50(param_1,1,2);
  F_00b9afd0(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c1d3d0 */
GEN_NOFRAME uint F_00c1d3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d3d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9c7a0(param_1,1,5);
  F_00b9c7f0(param_1,2);
  F_00b9a760(param_1,2);
  F_00b9b0d0(param_1,1);
  return 1;
}

/* ref: FUN_00c1d410 */
GEN_NOFRAME uint F_00c1d410(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d410u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9c7a0(param_1,1,5);
  F_00b9c7f0(param_1,2);
  F_00b9c7f0(param_1,3);
  F_00b9a760(param_1,3);
  F_00b9b2f0(param_1,1);
  return 1;
}

/* ref: FUN_00c1d450 */
GEN_NOFRAME uint F_00c1d450(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9b730(param_1,3,0);
  F_00b9ae00(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c1d470 */
GEN_NOFRAME uint F_00c1d470(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  uVar1 = F_00b9ccc0(param_1,1,((char *)REFP(0x134927c)),&REFG(undefined * PTR32, 0x110ed08));
  uVar2 = F_00b9ca20(param_1,2,0);
  uVar2 = F_00b9b730(param_1,*(undefined4 *)(&REFG(undefined, 0x110ed28) + uVar1 * 4),uVar2);
  if (*(int *)(&REFG(undefined, 0x110ed28) + uVar1 * 4) == 3) {
    uVar1 = F_00b9b730(param_1,4,0);
    dVar3 = (double)(int)uVar1 * *(double *)&REFG(undefined, 0x10ac178) + (double)(int)uVar2;
  }
  else {
    if (*(int *)(&REFG(undefined, 0x110ed28) + uVar1 * 4) == 5) {
      F_00b9afd0(param_1,uVar2);
      return 1;
    }
    dVar3 = (double)(int)uVar2;
  }
  F_00b9ade0(param_1,dVar3);
  return 1;
}

/* ref: FUN_00c1d510 */
GEN_NOFRAME uint F_00c1d510(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d510u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9a940(param_1,1);
  uVar1 = F_00b9a960(param_1,uVar1);
  F_00b9ae60(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c1d540 */
GEN_NOFRAME uint F_00c1d540(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7a0(param_1,1,5);
  F_00b9a760(param_1,2);
  uVar1 = F_00b9b840(param_1,1);
  if (uVar1 != 0) {
    return 2;
  }
  F_00b9adc0(param_1);
  return 1;
}

/* ref: FUN_00c1d580 */
GEN_NOFRAME uint F_00c1d580(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9c7a0(param_1,1,5);
  F_00b9a910(param_1,0xffffd8ed);
  F_00b9a910(param_1,1);
  F_00b9adc0(param_1);
  return 3;
}

/* ref: FUN_00c1d5c0 */
GEN_NOFRAME uint F_00c1d5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d5c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(param_1,2);
  F_00b9c7a0(param_1,1,5);
  F_00b9ae00(param_1,uVar1 + 1);
  F_00b9b110(param_1,1,uVar1 + 1);
  uVar1 = F_00b9a940(param_1,0xffffffff);
  return -(uint)(uVar1 != 0) & 2;
}

/* ref: FUN_00c1d600 */
GEN_NOFRAME uint F_00c1d600(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9c7a0(param_1,1,5);
  F_00b9a910(param_1,0xffffd8ed);
  F_00b9a910(param_1,1);
  F_00b9ae00(param_1,0);
  return 3;
}

/* ref: FUN_00c1d670 */
GEN_NOFRAME uint F_00c1d670(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d670u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c820(param_1,1,&(*(undefined4 *)(gen_frame + 0xc)));
  uVar2 = F_00b9c880(param_1,2,uVar1,0);
  uVar1 = F_00b9c490(param_1,uVar1,(*(undefined4 *)(gen_frame + 0xc)),uVar2);
  if (uVar1 == 0) {
    return 1;
  }
  F_00b9adc0(param_1);
  F_00b9a800(param_1,0xfffffffe);
  return 2;
}

/* ref: FUN_00c1d6d0 */
GEN_NOFRAME uint F_00c1d6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d6d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9c880(param_1,1,0,0);
  uVar1 = F_00b9c250(param_1,uVar1);
  if (uVar1 == 0) {
    return 1;
  }
  F_00b9adc0(param_1);
  F_00b9a800(param_1,0xfffffffe);
  return 2;
}

/* ref: FUN_00c1d710 */
GEN_NOFRAME uint F_00c1d710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1d710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  F_00b9bc60(param_1,2,((char *)REFP(0x1349284)));
  F_00b9a910(param_1,1);
  F_00b9b510(param_1,0,1);
  uVar1 = F_00b9a940(param_1,0xffffffff);
  if (uVar1 == 0) {
    *param_3 = 0;
    return 0;
  }
  uVar1 = F_00b9a9f0(param_1,0xffffffff);
  if (uVar1 != 0) {
    F_00b9a850(param_1,3);
    uVar1 = F_00b9abf0(param_1,3,param_3);
    return uVar1;
  }
  F_00b9bbd0(param_1,((char *)REFP(0x13492a0)));
  return 0;
}

/* ref: FUN_00c1d790 */
GEN_NOFRAME uint F_00c1d790(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9c880(param_1,2,((char *)REFP(0x13492c8)),0);
  F_00b9c7a0(param_1,1,6);
  F_00b9a760(param_1,3);
  uVar1 = F_00b9b690(param_1,((code *)REFP(0xc1d710)),0,uVar1);
  if (uVar1 == 0) {
    return 1;
  }
  F_00b9adc0(param_1);
  F_00b9a800(param_1,0xfffffffe);
  return 2;
}

/* ref: FUN_00c1d7f0 */
GEN_NOFRAME uint F_00c1d7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c880(param_1,1,0,0);
  uVar2 = F_00b9a750(param_1);
  uVar1 = F_00b9c250(param_1,uVar1);
  if (uVar1 != 0) {
    F_00b9b830(param_1);
  }
  F_00b9b510(param_1,0,0xffffffff);
  uVar1 = F_00b9a750(param_1);
  return uVar1 - uVar2;
}

/* ref: FUN_00c1d840 */
GEN_NOFRAME uint F_00c1d840(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9abc0(param_1,1);
  if (uVar1 == 0) {
    uVar1 = F_00b9c880(param_1,2,((char *)REFP(0x13492d0)),0);
    uVar1 = F_00b9bbd0(param_1,&REFG(undefined, 0x13492e4),uVar1);
    return uVar1;
  }
  uVar1 = F_00b9a750(param_1);
  return uVar1;
}

/* ref: FUN_00c1d890 */
GEN_NOFRAME uint F_00c1d890(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ca20(param_1,2,1);
  uVar2 = F_00b9a940(param_1,3);
  if ((int)uVar2 < 1) {
    uVar2 = F_00b9ac60(param_1,1);
  }
  else {
    uVar2 = F_00b9c9b0(param_1,3);
  }
  if ((int)uVar1 <= (int)uVar2) {
    uVar4 = (uVar2 - uVar1) + 1;
    if ((0 < (int)uVar4) && (uVar3 = F_00b9a610(param_1,uVar4), uVar3 != 0)) {
      F_00b9b110(param_1,1,uVar1);
      while ((int)uVar1 < (int)uVar2) {
        uVar1 = uVar1 + 1;
        F_00b9b110(param_1,1,uVar1);
      }
      return uVar4;
    }
    uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13492e8)));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c1d930 */
GEN_NOFRAME uint F_00c1d930(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = F_00b9a750(param_1);
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 == 4) {
    pcVar3 = (char *)F_00b9abf0(param_1,1,0);
    if (*pcVar3 == '#') {
      F_00b9ae00(param_1,uVar1 - 1);
      return 1;
    }
  }
  uVar2 = F_00b9c9b0(param_1,1);
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + uVar1;
  }
  else if ((int)uVar1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  if ((int)uVar2 < 1) {
    F_00b9c590(param_1,1,((char *)REFP(0x1349304)));
  }
  return uVar1 - uVar2;
}

/* ref: FUN_00c1d9b0 */
GEN_NOFRAME uint F_00c1d9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  F_00b9c7f0(param_1,1);
  uVar3 = 0;
  uVar2 = 0xffffffff;
  uVar1 = F_00b9a750(param_1);
  uVar1 = F_00b9b570(param_1,uVar1 - 1,uVar2,uVar3);
  F_00b9afd0(param_1,(uint)(uVar1 == 0));
  F_00b9a800(param_1,1);
  uVar1 = F_00b9a750(param_1);
  return uVar1;
}

/* ref: FUN_00c1da00 */
GEN_NOFRAME uint F_00c1da00(unsigned int gen_a0)
{
  GEN_ENTER(0xc1da00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7f0(param_1,2);
  F_00b9a760(param_1,2);
  F_00b9a800(param_1,1);
  uVar1 = F_00b9b570(param_1,0,0xffffffff,1);
  F_00b9afd0(param_1,(uint)(uVar1 == 0));
  F_00b9a850(param_1,1);
  uVar1 = F_00b9a750(param_1);
  return uVar1;
}

/* ref: FUN_00c1da50 */
GEN_NOFRAME uint F_00c1da50(unsigned int gen_a0)
{
  GEN_ENTER(0xc1da50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  char * pcVar2;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9bcf0(param_1,1,((char *)REFP(0x1349318)));
  if (uVar1 == 0) {
    uVar1 = F_00b9a940(param_1,1);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      F_00b9ae20(param_1,&REFG(undefined, 0x1349334),3);
      return 1;
    case 1: ;
      uVar1 = F_00b9abc0(param_1,1);
      pcVar2 = &REFG(undefined, 0x1349324);
      if (uVar1 == 0) {
        pcVar2 = ((char *)REFP(0x134932c));
      }
      F_00b9ae60(param_1,pcVar2);
      return 1;
    default: ;
      F_00b9ad50(param_1,1);
      uVar1 = F_00b9a940(param_1,1);
      uVar1 = F_00b9a960(param_1,uVar1);
      F_00b9af00(param_1,((char *)REFP(0x1349338)),uVar1);
      break;
    case 3: ;
      uVar1 = F_00b9abf0(param_1,1,0);
      F_00b9ae60(param_1,uVar1);
      return 1;
    case 4: ;
      F_00b9a910(param_1,1);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00c1db50 */
GEN_NOFRAME uint F_00c1db50(unsigned int gen_a0)
{
  GEN_ENTER(0xc1db50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9a760(param_1,1);
  F_00b9b950(param_1,0);
  uVar1 = F_00b9abc0(param_1,1);
  if (uVar1 == 0) {
    return 1;
  }
  uVar1 = F_00b9a940(param_1,1);
  if (uVar1 == 1) {
    F_00b9b150(param_1,0,0);
    F_00b9a910(param_1,0xffffffff);
    F_00b9afd0(param_1,1);
    F_00b9b2f0(param_1,0xffffd8ed);
    F_00b9b3d0(param_1,2);
    return 1;
  }
  uVar1 = F_00b9b190(param_1,1);
  if (uVar1 != 0) {
    F_00b9b0d0(param_1,0xffffd8ed);
    uVar1 = F_00b9abc0(param_1,0xffffffff);
    F_00b9a760(param_1,0xfffffffe);
    if (uVar1 != 0) goto LAB_00c1dc07;
  }
  F_00b9c590(param_1,1,((char *)REFP(0x1349340)));
LAB_00c1dc07: ;
  F_00b9b190(param_1,1);
  F_00b9b3d0(param_1,2);
  return 1;
}

/* ref: FUN_00c1dc30 */
GEN_NOFRAME uint F_00c1dc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1dc30u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  if (param_2 == in_esi) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return 0;
  }
  uVar1 = F_00b9b720(in_esi);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      return 3;
    }
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return 1;
  }
  uVar1 = F_00c01ae0(in_esi,0,((undefined1 *)(gen_frame + 0x8)));
  if (0 < (int)uVar1) {
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return 2;
  }
  uVar1 = F_00b9a750(in_esi);
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return (-(uint)(uVar1 != 0) & 0xfffffffe) + 3;
}

/* ref: FUN_00c1dce0 */
GEN_NOFRAME uint F_00c1dce0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1dce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9ad30(param_1,1);
  if (uVar1 == 0) {
    F_00b9c590(param_1,1,((char *)REFP(0x134946c)));
  }
  uVar1 = F_00c1dc30(uVar1,param_1);
  F_00b9ae60(param_1,(&REFG(undefined * PTR32, 0x110ee10))[(int)(uVar1)]);
  return 1;
}

/* ref: FUN_00c1dd30 */
GEN_NOFRAME uint F_00c1dd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1dd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c1dc30(in_eax,in_edi);
  uVar2 = F_00b9a610(in_eax,param_3);
  if (uVar2 == 0) {
    F_00b9bbd0(in_edi,((char *)REFP(0x1349480)));
  }
  if (uVar1 != 1) {
    F_00b9af00(in_edi,((char *)REFP(0x13494a0)),(&REFG(undefined * PTR32, 0x110ee10))[(int)(uVar1)]);
    return 0xffffffff;
  }
  F_00b9a680(in_edi,in_eax,param_3);
  F_00b9a6d0(in_edi,in_eax);
  uVar1 = F_00bb9700(in_eax,param_3);
  if ((uVar1 != 0) && (uVar1 != 1)) {
    F_00b9a680(in_eax,in_edi,1);
    return 0xffffffff;
  }
  uVar1 = F_00b9a750(in_eax);
  uVar2 = F_00b9a610(in_edi,uVar1 + 1);
  if (uVar2 == 0) {
    F_00b9bbd0(in_edi,((char *)REFP(0x13494bc)));
  }
  F_00b9a680(in_eax,in_edi,uVar1);
  return uVar1;
}

/* ref: FUN_00c1ddf0 */
GEN_NOFRAME uint F_00c1ddf0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1ddf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9ad30(param_1,1);
  if (uVar1 == 0) {
    F_00b9c590(param_1,1,((char *)REFP(0x13494d8)));
  }
  uVar2 = F_00b9a750(param_1);
  uVar1 = F_00c1dd30(uVar1,param_1,uVar2 - 1);
  if ((int)uVar1 < 0) {
    F_00b9afd0(param_1,0);
    F_00b9a800(param_1,0xfffffffe);
    return 2;
  }
  F_00b9afd0(param_1,1);
  F_00b9a800(param_1,-1 - uVar1);
  return uVar1 + 1;
}

/* ref: FUN_00c1de70 */
GEN_NOFRAME uint F_00c1de70(unsigned int gen_a0)
{
  GEN_ENTER(0xc1de70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9ad30(param_1,0xffffd8ed);
  uVar2 = F_00b9a750(param_1);
  uVar1 = F_00c1dd30(uVar1,param_1,uVar2);
  if ((int)uVar1 < 0) {
    uVar2 = F_00b9a9f0(param_1,0xffffffff);
    if (uVar2 != 0) {
      F_00b9bb40(param_1,1);
      F_00b9a800(param_1,0xfffffffe);
      F_00b9b880(param_1,2);
    }
    F_00b9b830(param_1);
  }
  return uVar1;
}

/* ref: FUN_00c1dee0 */
GEN_NOFRAME uint F_00c1dee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1dee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a710(param_1);
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 == 6) {
    uVar2 = F_00b9a980(param_1,1);
    if (uVar2 == 0) goto LAB_00c1df1d;
  }
  F_00b9c590(param_1,1,((char *)REFP(0x13494ec)));
LAB_00c1df1d: ;
  F_00b9a910(param_1,1);
  F_00b9a680(param_1,uVar1,1);
  return 1;
}

/* ref: FUN_00c1df40 */
GEN_NOFRAME uint F_00c1df40(unsigned int gen_a0)
{
  GEN_ENTER(0xc1df40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c1dee0(param_1);
  F_00b9af30(param_1,((code *)REFP(0xc1de70)),1);
  return 1;
}

/* ref: FUN_00c1df70 */
GEN_NOFRAME uint F_00c1df70(unsigned int gen_a0)
{
  GEN_ENTER(0xc1df70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9a750(param_1);
  uVar1 = F_00bb91c0(param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00c1df90 */
GEN_NOFRAME uint F_00c1df90(unsigned int gen_a0)
{
  GEN_ENTER(0xc1df90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9b010(param_1);
  if (uVar1 != 0) {
    F_00b9adc0(param_1);
  }
  return 1;
}

/* ref: FUN_00c1dff0 */
GEN_NOFRAME uint F_00c1dff0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1dff0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9a910(in_esi,0xffffd8ee);
  F_00b9b290(in_esi,0xffffd8ee,&REFG(undefined, 0x1349534));
  F_00b9cd70(in_esi,&REFG(undefined, 0x1349538),&REFG(undefined * PTR32, 0x110ed48));
  F_00b9ae20(in_esi,((char *)REFP(0x134953c)),7);
  F_00b9b290(in_esi,0xffffd8ee,((char *)REFP(0x1349544)));
  F_00b9af30(in_esi,((code *)REFP(0xc1d5c0)),0);
  F_00b9af30(in_esi,((code *)REFP(0xc1d600)),1);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1349550)));
  F_00b9af30(in_esi,((code *)REFP(0xc1d540)),0);
  F_00b9af30(in_esi,((code *)REFP(0xc1d580)),1);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1349558)));
  F_00b9b150(in_esi,0,1);
  F_00b9a910(in_esi,0xffffffff);
  F_00b9b3d0(in_esi,0xfffffffe);
  F_00b9ae20(in_esi,&REFG(undefined, 0x1349560),2);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1349564)));
  F_00b9af30(in_esi,((code *)REFP(0xc1db50)),1);
  uVar1 = F_00b9b290(in_esi,0xffffd8ee,((char *)REFP(0x134956c)));
  return uVar1;
}

/* ref: FUN_00c1e0f0 */
GEN_NOFRAME uint F_00c1e0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e0f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c1dff0(param_1);
  F_00b9cd70(param_1,((char *)REFP(0x1349578)),&REFG(undefined * PTR32, 0x110ee20));
  return 2;
}

/* ref: Client::System::Animation::Wind_Directional::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_00c1e150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc1e150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  
  if (-1 < *(int *)(this + 4)) {
    fVar4 = F_00a08680(*(int *)(this + 4),param_3);
    fVar1 = *(float *)(this + 0xc);
    fVar2 = *(float *)(this + 0x10);
    fVar3 = (float10)fVar4;
    *param_1 = ((float)GEN_TOF((fVar3 * (float10)*(float *)(this + 8))));
    param_1[1] = (float)((float10)fVar1 * fVar3);
    param_1[2] = (float)(fVar3 * (float10)fVar2);
    return 1;
  }
  return 0;
}

/* ref: FUN_00c1e1e0 */
GEN_NOFRAME byte GEN_THISCALL F_00c1e1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc1e1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  
  iVar4 = *(int *)((int)this + 4);
  if (-1 < iVar4) {
    pfVar1 = (float *)((int)this + 0x14);
    if ((!GEN_ISNAN(*(float *)((int)this + 0x14)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        !(*(float *)((int)this + 0x14) <= *(float *)&REFG(undefined, 0x1088114))) {
      fVar2 = ((float)GEN_TOF(((float10)*param_2 - (float10)*(float *)((int)this + 8))));
      fVar9 = ((float)GEN_TOF(((float10)param_2[1] - (float10)*(float *)((int)this + 0xc))));
      fVar3 = ((float)GEN_TOF(((float10)param_2[2] - (float10)*(float *)((int)this + 0x10))));
      fVar6 = (float10)fVar2;
      *param_1 = fVar2;
      fVar7 = (float10)fVar9;
      param_1[1] = fVar9;
      fVar8 = (float10)fVar3;
      param_1[2] = fVar3;
      fVar2 = ((float)GEN_TOF(((fVar6 * fVar6 + fVar7 * fVar7) + fVar8 * fVar8)));
      (*(float *)(gen_frame + 0xc)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0xc)) = fVar2;
      pfVar5 = &(*(float *)(gen_frame + 0xc));
      if (!((float10)fVar2 < (float10)*pfVar1)) {
        pfVar5 = pfVar1;
      }
      fVar2 = *pfVar5;
      fVar9 = *pfVar1;
      (*(float *)(gen_frame + 0xc)) = fVar9;
      fVar6 = (float10)fVar9;
      fVar9 = F_00a08680(iVar4,param_3);
      F_0046f390(param_1 GEN_EDX_ARG);
      fVar6 = (float10)((float)GEN_TOF(((float10)fVar9 *
                              (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar6 - (float10)fVar2) *
                                                               (fVar6 - (float10)fVar2)))) /
                                              (float10)(float)(fVar6 * fVar6)))))));
      *param_1 = (float)(fVar6 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar6);
      param_1[2] = (float)(fVar6 * (float10)param_1[2]);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c1e320 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110ee6c));
  for (puVar1 = (undefined4 *)((int)this + 8); puVar1 != (undefined4 *)((int)this + 0x14);
      puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c1e380 */
GEN_FRAME uint F_00c1e380(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c1e390 */
GEN_FRAME unsigned int F_00c1e390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1e390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c1e3b0 */
GEN_FRAME unsigned int F_00c1e3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1e3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: Client::System::Animation::Wind_Directional::vf2 */
GEN_NOFRAME uint F_00c1e3d0(void)
{
  GEN_ENTER(0xc1e3d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Animation::Wind_Directional::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c1e3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110ee5c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c1e420 */
GEN_NOFRAME uint F_00c1e420(void)
{
  GEN_ENTER(0xc1e420u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c1e440 */
GEN_FRAME uint GEN_THISCALL F_00c1e440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110ee5c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c1e470 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e470u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110ee8c));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c1e490 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e490u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110ee8c));
  return;
}

/* ref: FUN_00c1e4a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e4a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1104898));
  return;
}

/* ref: Client::Graphics::Physics::ConstraintBase::vf4 */
GEN_NOFRAME unsigned int F_00c1e4c0(void)
{
  GEN_ENTER(0xc1e4c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c1e4d0 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e4d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c28a70(in_ecx GEN_EDX_FWD,1);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eebc));
  return (uint)in_ecx;
}

/* ref: FUN_00c1e500 */
GEN_FRAME byte GEN_THISCALL F_00c1e500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xc1e500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  byte bVar1;
  
  bVar1 = F_00c28a90(param_1 GEN_EDX_FWD,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  *(undefined2 *)((int)param_1 + 0xc) = (undefined2)param_3;
  *(undefined4 *)((int)param_1 + 0x10) = *param_4;
  *(undefined4 *)((int)param_1 + 0x14) = param_4[1];
  *(undefined4 *)((int)param_1 + 0x18) = param_4[2];
  *(undefined4 *)((int)param_1 + 0x20) = param_5;
  *(float *)((int)param_1 + 0x40) = param_6;
  return 1;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  
  pfVar3 = *(float * PTR32 *)(in_ecx + 0x20);
  fVar1 = *(float *)(in_ecx + 0x34);
  fVar2 = *(float *)(in_ecx + 0x38);
  fVar4 = (float10)*(float *)(in_ecx + 0x40);
  *pfVar3 = ((float)GEN_TOF(((float10)*pfVar3 +
                   (float10)((float)GEN_TOF((fVar4 * (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x30) -
                                                            (float10)*pfVar3)))))))));
  pfVar3[1] = ((float)GEN_TOF(((float10)pfVar3[1] +
                     (float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)pfVar3[1]) * fVar4)))
                     )));
  pfVar3[2] = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar4 * (float10)(float)((float10)fVar2 - (float10)pfVar3[2])
                                      ))) + (float10)pfVar3[2])));
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e5d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xc1e5d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  
  pfVar3 = *(float * PTR32 *)(in_ecx + 0x20);
  fVar1 = *(float *)(in_ecx + 0x34);
  fVar2 = *(float *)(in_ecx + 0x38);
  fVar4 = (float10)param_2;
  *pfVar3 = ((float)GEN_TOF(((float10)*pfVar3 +
                   (float10)((float)GEN_TOF((fVar4 * (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x30) -
                                                            (float10)*pfVar3)))))))));
  pfVar3[1] = ((float)GEN_TOF(((float10)pfVar3[1] +
                     (float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)pfVar3[1]) * fVar4)))
                     )));
  pfVar3[2] = ((float)GEN_TOF(((float10)pfVar3[2] +
                     (float10)((float)GEN_TOF((fVar4 * (float10)(float)((float10)fVar2 - (float10)pfVar3[2]))))
                     )));
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_0063a290(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(this + 0xc));
  uVar1 = F_004ee970(this + 0x30,this + 0x10,((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c1e6b0 */
GEN_FRAME uint F_00c1e6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e6b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Physics::ConstraintBase::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c1e6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c1e700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00c1e730 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e730u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c28a70(in_ecx GEN_EDX_FWD,2);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eed4));
  return (uint)in_ecx;
}

/* ref: FUN_00c1e760 */
GEN_FRAME byte GEN_THISCALL F_00c1e760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc1e760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00c28a90(this GEN_EDX_FWD,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  *(undefined2 *)((int)this + 0xc) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x10) = *param_3;
  *(undefined4 *)((int)this + 0x14) = param_3[1];
  *(undefined4 *)((int)this + 0x18) = param_3[2];
  *(undefined4 *)((int)this + 0x20) = param_4;
  return 1;
}

/* ref: Client::Graphics::Physics::ConstraintPin::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e7b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e7b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(in_ecx + 0x20);
  *puVar1 = *(undefined4 *)(in_ecx + 0x30);
  puVar1[1] = *(undefined4 *)(in_ecx + 0x34);
  puVar1[2] = *(undefined4 *)(in_ecx + 0x38);
  return (uint)puVar1;
}

/* ref: Client::Graphics::Physics::ConstraintPin::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e7d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(in_ecx + 0x20);
  *puVar1 = *(undefined4 *)(in_ecx + 0x30);
  puVar1[1] = *(undefined4 *)(in_ecx + 0x34);
  puVar1[2] = *(undefined4 *)(in_ecx + 0x38);
  return (uint)puVar1;
}

/* ref: Client::Graphics::Physics::ConstraintPin::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e7f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_0063a290(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(this + 0xc));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),this + 0x10,((undefined1 *)(gen_frame + 0x10)));
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *(undefined4 *)(this + 0x30) = *puVar3;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return (uint)puVar3;
}

/* ref: Client::Graphics::Physics::ConstraintPin::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c1e870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00c1e8a0 */
GEN_FRAME byte GEN_THISCALL F_00c1e8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xc1e8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  byte bVar1;
  
  if ((param_3 != 0) && ((*(int *)&gen_a3) != 0)) {
    bVar1 = F_00c28a90(param_1 GEN_EDX_FWD,param_2);
    if (bVar1 != 0) {
      *(float *)((int)param_1 + 0x14) = param_5;
      *(int *)((int)param_1 + 0x10) = (*(int *)&gen_a3);
      *(float *)((int)param_1 + 0x18) = param_6;
      *(int *)((int)param_1 + 0xc) = param_3;
      *(float *)((int)param_1 + 0x1c) = param_7;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00c1e910 */
GEN_NOFRAME uint GEN_THISCALL F_00c1e910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e910u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_00c28a70(in_ecx GEN_EDX_FWD,0);
  in_ecx[5] = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eeec));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = uVar1;
  in_ecx[7] = uVar1;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  pfVar4 = *(float * PTR32 *)(this + 0xc);
  fVar1 = pfVar4[0x15];
  pfVar5 = *(float * PTR32 *)(this + 0x10);
  fVar2 = pfVar5[0x15];
  if ((GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) && (GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0)))
  {
    return 0;
  }
  fVar7 = (float10)(float)((float10)pfVar4[1] - (float10)pfVar5[1]);
  fVar8 = (float10)(float)((float10)*pfVar4 - (float10)*pfVar5);
  fVar9 = (float10)(float)((float10)pfVar4[2] - (float10)pfVar5[2]);
  fVar7 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar9 * fVar9 + (fVar8 * fVar8 + fVar7 * fVar7)))))));
  fVar3 = ((float)GEN_TOF(((((float10)*(float *)(this + 0x14) - fVar7) / fVar7) *
                 (float10)((float)GEN_TOF(((float10)1 / ((float10)fVar1 + (float10)fVar2)))))));
  fVar7 = (float10)fVar3;
  if (fVar7 < (float10)0) {
    fVar3 = *(float *)(this + 0x18);
  }
  else {
    if (!(*(float *)&REFG(undefined, 0x1088114) < fVar3)) goto LAB_00c1ea4b;
    fVar3 = *(float *)(this + 0x1c);
  }
  fVar7 = (float10)((float)GEN_TOF((((float10)fVar3 * (float10)REFG(double, 0x1094800)) * fVar7)));
LAB_00c1ea4b: ;
  iVar6 = *(int *)(this + 0xc);
  fVar8 = (float10)(float)((float10)*pfVar4 - (float10)*pfVar5);
  fVar9 = (float10)(float)(fVar7 * (float10)fVar1);
  fVar10 = (float10)(float)((float10)pfVar4[1] - (float10)pfVar5[1]);
  fVar11 = (float10)(float)((float10)pfVar4[2] - (float10)pfVar5[2]);
  *(float *)(iVar6 + 0x30) =
       ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x30) + (float10)(float)(fVar9 * fVar8))));
  *(float *)(iVar6 + 0x34) =
       ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x34) + (float10)(float)(fVar10 * fVar9))));
  *(float *)(iVar6 + 0x38) =
       ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x38) + (float10)(float)(fVar11 * fVar9))));
  iVar6 = *(int *)(this + 0x10);
  fVar7 = (float10)(float)(fVar7 * (float10)fVar2);
  *(float *)(iVar6 + 0x30) =
       ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x30) - (float10)(float)(fVar7 * fVar8))));
  *(float *)(iVar6 + 0x34) =
       ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x34) - (float10)(float)(fVar7 * fVar10))));
  *(float *)(iVar6 + 0x38) =
       ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x38) - (float10)(float)(fVar7 * fVar11))));
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c1eaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1eaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Object::CharacterPapList::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_00c1eb70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1eb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0xc);
  iVar3 = *(int *)(this + 0x18);
  while( true ) {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 - 1;
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD);
    if ((char)uVar1 == '\0') break;
    piVar2 = piVar2 + 0x16;
  }
  return 0;
}

/* ref: FUN_00c1eba0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1eba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1eba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  iVar3 = *(int *)((int)this + 0x18);
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      *(undefined1 *)((int)piVar2 + 0x51) = 1;
    }
    piVar2 = piVar2 + 0x16;
  }
  return;
}

/* ref: FUN_00c1ebd0 */
GEN_NOFRAME byte GEN_THISCALL F_00c1ebd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1ebd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char * pcVar2;
  
  iVar1 = *(int *)((int)this + 0x18);
  if (iVar1 != 0) {
    pcVar2 = ((char *)GEN_TOP((*(int *)((int)this + 0xc) + 0x51)));
    do {
      iVar1 = iVar1 - 1;
      if (*pcVar2 != '\0') {
        return 1;
      }
      pcVar2 = pcVar2 + 0x58;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00c1ec00 */
GEN_NOFRAME uint GEN_THISCALL F_00c1ec00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1ec00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  int iVar2;
  int in_ecx_00;
  
  iVar2 = *(int *)(in_ecx + 0x18);
  in_ecx_00 = *(int *)(in_ecx + 0xc);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = iVar2 - 1;
    uVar1 = F_00c28bb0(in_ecx_00 GEN_EDX_FWD);
    if (uVar1 != 0) break;
    in_ecx_00 = in_ecx_00 + 0x58;
  }
  return uVar1;
}

/* ref: FUN_00c1ec30 */
GEN_FRAME byte GEN_THISCALL F_00c1ec30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc1ec30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(int *)((int)this + 0x18) != 1) {
    return 0;
  }
  bVar1 = F_00c28bc0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,param_1,param_2,param_3);
  return bVar1 != 0;
}

/* ref: FUN_00c1ec60 */
GEN_FRAME byte GEN_THISCALL F_00c1ec60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ec60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x10) == param_2;
}

/* ref: FUN_00c1ec70 */
GEN_FRAME uint GEN_THISCALL F_00c1ec70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1ec70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined * this_00;
  undefined * this_01;
  int local_8;
  
  iVar2 = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110ef04));
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 8);
  *(undefined * PTR32 *)((int)this + 0xc) = (undefined *)((int)this + 0x24);
  local_8 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    param_2 = 0;
    this_00 = (undefined *)((int)this + 0x24);
    do {
      iVar1 = *(int *)(iVar2 + 4);
      if (this_00 == (undefined *)0x0) {
        this_01 = (undefined *)0x0;
      }
      else {
        this_01 = (undefined *)F_00c28c80(this_00 GEN_EDX_FWD,param_1);
      }
      F_00c28ce0(this_01 GEN_EDX_ARG,iVar1 + param_2 + iVar2);
      param_2 = param_2 + 0xc;
      local_8 = local_8 + 1;
      this_00 = (undefined *)((int)this_00 + 0x58);
    } while (local_8 < *(int *)(iVar2 + 8));
  }
  return (uint)this;
}

/* ref: FUN_00c1ed00 */
GEN_FRAME uint GEN_THISCALL F_00c1ed00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc1ed00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  undefined * this_01;
  
  this_01 = (undefined *)0x0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  this_00 = (undefined *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110ef04));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined * PTR32 *)((int)this + 0xc) = this_00;
  if (this_00 != (undefined *)0x0) {
    this_01 = (undefined *)F_00c28c80(this_00 GEN_EDX_FWD,param_1);
  }
  F_00c28fa0(this_01 GEN_EDX_ARG,param_2,param_3,param_4);
  return (uint)this;
}

/* ref: FUN_00c1ed60 */
GEN_FRAME uint GEN_THISCALL F_00c1ed60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ed60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Object::CharacterPapList::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c1ed80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ed80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * this_00;
  int iVar1;
  
  this_00 = *(undefined4 * PTR32 *)(this + 0xc);
  iVar1 = *(int *)(this + 0x18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110ef04));
  for (; iVar1 != 0; iVar1 = iVar1 - 1) {
    F_00c28b70(this_00 GEN_EDX_FWD);
    ((GEN_TCODE *)*(gen_code32 *)*this_00)(this_00 GEN_EDX_ARG,0);
    this_00 = this_00 + 0x16;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c1ee60 */
GEN_FRAME uint GEN_THISCALL F_00c1ee60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ee60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00c1ee70 */
GEN_FRAME float10 F_00c1ee70(float gen_a0)
{
  GEN_ENTER(0xc1ee70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00c1ee90 */
GEN_FRAME uint GEN_THISCALL F_00c1ee90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ee90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00c1eeb0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c1eeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xc1eeb0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * this;
  ushort uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined * pvVar7;
  int * piVar8;
  bool bVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  double dVar10;
  float fVar11;
  
  this = *(int * PTR32 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x24) = param_3;
  if (this == (int *)0x0) {
    return;
  }
  uVar5 = F_00bd3040(this GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x38)) = uVar5;
  (*(int *)(gen_frame + 0x30)) = this[0x23];
  uVar5 = F_00a0a270(this[0x23]);
  (*(uint *)(gen_frame + 0x34)) = uVar5;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = 0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0xff000000;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  bVar9 = ((*(uint *)(gen_frame + 0x38)) & 0x100) != 0;
  if (bVar9) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = 1;
  }
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (ushort)bVar9;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
  if (((*(uint *)(gen_frame + 0x38)) & 0x200) != 0) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) | 2;
  }
  uVar5 = F_00be5a80(this GEN_EDX_ARG);
  if (uVar5 == 1) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) | 4;
  }
  if (((*(uint *)(gen_frame + 0x38)) & 0x8000000) != 0) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) | 8;
  }
  if ((*(uint *)(gen_frame + 0x34)) != 0) {
    if (*(char *)((*(uint *)(gen_frame + 0x34)) + 6) != '\0') {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) | 0x40;
    }
    if (*(char *)((*(uint *)(gen_frame + 0x34)) + 7) != '\0') {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) | 0x80;
    }
  }
  if (((*(uint *)(gen_frame + 0x38)) & 0x800) != 0) {
    F_00bc4070(*(undefined * PTR32 *)(param_1 + 0x4c) GEN_EDX_ARG,0xffffffff);
  }
  if (((*(uint *)(gen_frame + 0x38)) & 0x1000) != 0) {
    F_00bc4090(*(undefined * PTR32 *)(param_1 + 0x4c) GEN_EDX_ARG,0xffffffff);
  }
  iVar6 = this[0x1d];
  if (iVar6 != 0) goto LAB_00c1efe8;
  piVar8 = (int *)this[0x1c];
  if (piVar8 == (int *)0x0) {
    iVar6 = this[0x1b];
    if (iVar6 == 0) {
      if (this[1] != 0) {
        this[0x1b] = *(int *)(this[1] + 4);
      }
      iVar6 = this[0x1b];
      if (iVar6 != 0) goto LAB_00c1efce;
    }
    else {
LAB_00c1efce: ;
      this[0x1c] = *(int *)(iVar6 + 4);
    }
    piVar8 = (int *)this[0x1c];
    if (piVar8 != (int *)0x0) goto LAB_00c1efdb;
  }
  else {
LAB_00c1efdb: ;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 100))(piVar8 GEN_EDX_ARG);
    this[0x1d] = uVar5;
  }
  iVar6 = this[0x1d];
LAB_00c1efe8: ;
  iVar6 = *(int *)(iVar6 + 0x244);
  if (iVar6 == 0x1e) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) | 0x100;
  }
  else if (iVar6 == 0x20) {
    pvVar7 = *(undefined * PTR32 *)(param_1 + 0x4c);
    if ((pvVar7 != (undefined *)0x0) && ((byte *)((int)pvVar7 + 0x30) != (byte *)0x0)) {
      if ((*(byte *)((int)pvVar7 + 0x30) & 0x80) != 0) {
        F_00bc4070(pvVar7 GEN_EDX_ARG,0xffffffff);
      }
      if ((*(uint *)((int)pvVar7 + 0x30) & 0x100) != 0) {
        F_00bc4090(pvVar7 GEN_EDX_ARG,0xffffffff);
      }
    }
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) | 0x10;
  }
  else if (iVar6 == 0x4a) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) | 0x28;
  }
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*this + 0xa8))(this);
  (*(float *)(gen_frame + 0x4)) = (float)extraout_ST0;
  fVar11 = F_00be5160(this GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x8)) = fVar11;
  (*(float *)(gen_frame + 0xc)) = param_4;
  extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*this + 0xb4))(this);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = (short)(int)extraout_ST0_00;
  (*(undefined4 *)(gen_frame + 0x10)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 2)),(short)(int)extraout_ST0_00);
  fVar11 = F_00be50e0(this GEN_EDX_ARG);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 2)) = (short)(int)fVar11;
  (*(undefined4 *)(gen_frame + 0x10)) = CONCAT22((short)(int)fVar11,(undefined2)(*(undefined4 *)(gen_frame + 0x10)));
  (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x30));
  bVar4 = (byte)((int)(*(uint *)(gen_frame + 0x38)) >> 0x1c);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = bVar4 & 0xf;
  (*(uint *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x18)), 1, 3),bVar4) & 0xffffff0f;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = (undefined2)param_2;
  (*(uint *)(gen_frame + 0x14)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)),(undefined2)param_2);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  if ((*(uint *)(gen_frame + 0x34)) == 0) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 1)) = 0;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (ushort)(byte)(*(uint *)(gen_frame + 0x18));
    uVar1 = (ushort)(*(uint *)(gen_frame + 0x18));
  }
  else {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 1)) = *(undefined1 *)((*(uint *)(gen_frame + 0x34)) + 4);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = CONCAT11(*(undefined1 *)((*(uint *)(gen_frame + 0x34)) + 4),(byte)(*(uint *)(gen_frame + 0x18)));
    uVar1 = (ushort)(*(uint *)(gen_frame + 0x18));
  }
  (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),uVar1);
  uVar5 = F_00bc3c20(*(undefined * PTR32 *)(param_1 + 0x4c) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)) = (char)uVar5;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 3)) = (undefined1)param_3;
  (*(uint *)(gen_frame + 0x18)) = CONCAT13((undefined1)param_3,CONCAT12((char)uVar5,(ushort)(*(uint *)(gen_frame + 0x18))));
  pvVar7 = (undefined *)this[0x1b];
  if (pvVar7 == (undefined *)0x0) {
    if (this[1] != 0) {
      this[0x1b] = *(int *)(this[1] + 4);
    }
    pvVar7 = (undefined *)this[0x1b];
  }
  uVar5 = F_00beb6d0(pvVar7 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x28)) = uVar5;
  uVar5 = F_00beb700(pvVar7 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x2c)) = uVar5;
  pvVar7 = (undefined *)F_00bc15a0(((undefined *)GEN_TOP((*(int *)(param_1 + 0x4c) + 0x408))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x4)),
                                *(int *)(param_1 + 0x4c));
  *(undefined * PTR32 *)(param_1 + 0x58) = pvVar7;
  if (pvVar7 == (undefined *)0x0) {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  else {
    F_00bba650(pvVar7 GEN_EDX_ARG,param_1);
  }
  *(uint *)(param_1 + 0x1c) =
       *(uint *)(param_1 + 0x1c) ^ (((*(uint *)(gen_frame + 0x14)) >> 0x10) * 4 ^ *(uint *)(param_1 + 0x1c)) & 8;
  *(short *)(param_1 + 0x32) = (short)(char)(byte)(*(uint *)(gen_frame + 0x18));
  uVar5 = F_00be5a80(this GEN_EDX_ARG);
  *(uint *)(param_1 + 0x2c) = uVar5;
  uVar5 = F_00be5a40(this GEN_EDX_ARG);
  *(uint *)(param_1 + 0x50) = uVar5;
  uVar5 = F_00be5a60(this GEN_EDX_ARG);
  *(uint *)(param_1 + 0x54) = uVar5;
  dVar10 = F_00be5520(this GEN_EDX_ARG);
  *(float *)(param_1 + 0x34) = (float)dVar10;
  *(int *)(param_1 + 0x28) = (int)(short)(*(uint *)(gen_frame + 0x14));
  *(undefined1 *)(param_1 + 0x30) = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 1));
  if ((*(uint *)(gen_frame + 0x34)) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)((*(uint *)(gen_frame + 0x34)) + 5);
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffffef;
  *(undefined1 *)(param_1 + 0x20) = uVar3;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x58) + 0x10))), pvVar7 != (undefined *)0x0)) {
    bVar4 = F_009f2f30(pvVar7 GEN_EDX_ARG);
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) ^ ((uint)bVar4 << 4 ^ *(uint *)(param_1 + 0x1c)) & 0x10;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x18) = 3;
  if (*(int *)(param_1 + 0x58) != 0) {
    F_00bba240(*(int *)(param_1 + 0x58) GEN_EDX_ARG,(float)(float10)0);
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x20;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
  }
  return;
}

/* ref: FUN_00c1f1f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c1f1f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1f1f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    piVar1 = *(int * PTR32 *)(param_1 + 0x58);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
      F_00bba6a0(*(undefined * PTR32 *)(param_1 + 0x58) GEN_EDX_ARG,param_1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(float *)(param_1 + 0x44) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 4;
  }
  return;
}

/* ref: FUN_00c1f2f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c1f2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xc1f2f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  float fVar2;
  
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(uint *)(param_1 + 0x1c) =
       *(uint *)(param_1 + 0x1c) ^ ((param_2 & 0xff) * 2 ^ *(uint *)(param_1 + 0x1c)) & 2;
  fVar2 = param_3;
  if ((char)param_2 != '\0') {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x38) = fVar2;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    piVar1 = *(int * PTR32 *)(param_1 + 0x58);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_3));
      F_00bba6a0(*(undefined * PTR32 *)(param_1 + 0x58) GEN_EDX_ARG,param_1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(float *)(param_1 + 0x44) = param_3;
    *(undefined4 *)(param_1 + 0x18) = 4;
  }
  return;
}

/* ref: FUN_00c1f3a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c1f3a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xc1f3a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(param_1 + 0x3c) = param_2;
  if (((*(byte *)(param_1 + 0x1c) & 0x20) == 0) && (*(int *)(param_1 + 0x58) != 0)) {
    F_00bba240(*(int *)(param_1 + 0x58) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00c1f3e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c1f3e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xc1f3e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x58) != 0) {
    if ((float10)*(float *)(REFG(int, 0x1375b00) + 0x34) <= (float10)param_2) {
      param_2 = ((float)GEN_TOF(((float10)param_2 - (float10)*(float *)(REFG(int, 0x1375b00) + 0x34))));
    }
    else {
      param_2 = 0.0;
    }
    F_00bba270(*(int *)(param_1 + 0x58) GEN_EDX_FWD,
                 (float)((float10)param_2 / (float10)*(double *)&REFG(undefined, 0x1088070)));
  }
  return;
}

/* ref: FUN_00c1f440 */
GEN_FRAME unsigned int GEN_THISCALL F_00c1f440(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xc1f440u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x58) != 0) {
    F_00bba700(gen_bits2f((unsigned int)(*(int *)(param_1 + 0x58))) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00c1f460 */
GEN_NOFRAME float10 GEN_THISCALL F_00c1f460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x58) != 0) {
    return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x58) + 0x3c)));
  }
  return (float10)0;
}

/* ref: FUN_00c1f470 */
GEN_NOFRAME uint GEN_THISCALL F_00c1f470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x48) + 0x8c)));
}

/* ref: FUN_00c1f480 */
GEN_FRAME uint GEN_THISCALL F_00c1f480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x58) != (undefined *)0x0) {
    F_00bba2a0(*(undefined * PTR32 *)((int)this + 0x58) GEN_EDX_FWD);
    return extraout_EAX;
  }
  return in_EAX;
}

/* ref: FUN_00c1f4d0 */
GEN_FRAME byte GEN_THISCALL F_00c1f4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  float10 extraout_ST0;
  float fVar1;
  
  if (*(int *)((int)this + 0x28) == 0) {
    return 0;
  }
  if (*(char *)((int)this + 0x22) == '\0') {
    this_00 = *(int * PTR32 *)((int)this + 0x48);
    fVar1 = F_00bd2390(this_00 GEN_EDX_FWD);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*this_00 + 0xa4))(this_00);
    if (!(extraout_ST0 <= (float10)fVar1)) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c1f520 */
GEN_FRAME byte GEN_THISCALL F_00c1f520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  double dVar1;
  float local_8;
  
  if (*(undefined * PTR32 *)((int)this + 0x58) == (undefined *)0x0) {
    local_8 = 0.0;
  }
  else {
    dVar1 = F_00bba2a0(*(undefined * PTR32 *)((int)this + 0x58) GEN_EDX_FWD);
    local_8 = (float)((float10)dVar1 * (float10)*(double *)&REFG(undefined, 0x1088070));
  }
  if ((float10)local_8 < ((float10)GEN_TOD((*(int *)((int)this + 0x2c) - param_1)))) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1f570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  return;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf2 */
GEN_FRAME uint GEN_THISCALL F_00c1f580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc1f580u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  float fVar2;
  
  uVar1 = (*(uint *)&gen_a4);
  if ((-1 < (int)(*(uint *)&gen_a4)) && ((*(uint *)&gen_a4) == *(uint *)(param_1 + 0x24))) {
    if (*(undefined * PTR32 *)(param_1 + 0x58) != (undefined *)0x0) {
      F_00bba6a0(*(undefined * PTR32 *)(param_1 + 0x58) GEN_EDX_FWD,param_1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(undefined1 *)(param_1 + 0x23) = 1;
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) ^ ((param_3 & 0xff) * 2 ^ *(uint *)(param_1 + 0x1c)) & 2;
    fVar2 = param_4;
    if ((char)param_3 != '\0') {
      fVar2 = 0.0;
    }
    uVar1 = *(uint *)(param_1 + 0x1c) | 1;
    *(float *)(param_1 + 0x38) = fVar2;
    *(undefined4 *)(param_1 + 0x18) = 4;
    *(uint *)(param_1 + 0x1c) = uVar1;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf3 */
GEN_FRAME uint GEN_THISCALL F_00c1f5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc1f5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00bbaf90(*(undefined * PTR32 *)(this + 0x4c) GEN_EDX_FWD);
  if (uVar1 != 0) {
    F_00aa0740(param_2,param_3);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1f620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x21) = 1;
  return;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1f630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x21) = 0;
  return;
}

/* ref: FUN_00c1f640 */
GEN_FRAME uint GEN_THISCALL F_00c1f640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * this_00;
  
  iVar1 = *(int *)((int)this + 0x48);
  piVar4 = *(int * PTR32 *)(iVar1 + 0x74);
  piVar6 = (int *)0x0;
  piVar5 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar5 = *(int * PTR32 *)(iVar1 + 0x70);
    if (piVar5 == (int *)0x0) {
      piVar4 = *(int * PTR32 *)(iVar1 + 0x6c);
      if (piVar4 == (int *)0x0) {
        if (*(int *)(iVar1 + 4) != 0) {
          *(undefined4 *)(iVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 4)));
        }
        piVar4 = *(int * PTR32 *)(iVar1 + 0x6c);
        if (piVar4 != (int *)0x0) goto LAB_00c1f678;
      }
      else {
LAB_00c1f678: ;
        *(int *)(iVar1 + 0x70) = piVar4[1];
      }
      piVar5 = *(int * PTR32 *)(iVar1 + 0x70);
      if (piVar5 != (int *)0x0) goto LAB_00c1f685;
    }
    else {
LAB_00c1f685: ;
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 100))(piVar5 GEN_EDX_FWD)));
      *(int * PTR32 *)(iVar1 + 0x74) = piVar4;
    }
    piVar5 = *(int * PTR32 *)(iVar1 + 0x74);
  }
  this_00 = piVar5;
  if (piVar5[0x37] == 0) goto LAB_00c1f6e7;
  piVar4 = *(int * PTR32 *)(iVar1 + 0x70);
  if (*(int * PTR32 *)(iVar1 + 0x70) == (int *)0x0) {
    iVar2 = *(int *)(iVar1 + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 4) != 0) {
        *(undefined4 *)(iVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 4)));
      }
      iVar2 = *(int *)(iVar1 + 0x6c);
      if (iVar2 != 0) goto LAB_00c1f6bc;
    }
    else {
LAB_00c1f6bc: ;
      *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar2 + 4);
    }
    piVar4 = *(int * PTR32 *)(iVar1 + 0x70);
    if (*(int * PTR32 *)(iVar1 + 0x70) == (int *)0x0) {
      return 0;
    }
  }
  do {
    piVar3 = piVar4;
    piVar4 = piVar3;
    this_00 = piVar6;
    if (piVar3 == piVar5) break;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3 GEN_EDX_ARG)));
    piVar6 = piVar3;
    this_00 = piVar3;
  } while (piVar4 != (int *)0x0);
LAB_00c1f6e7: ;
  if (this_00 != (int *)0x0) {
    piVar4 = (int *)F_00bc3440(this_00 GEN_EDX_ARG,4,param_1,0);
  }
  return (uint)piVar4;
}

/* ref: FUN_00c1f710 */
GEN_FRAME unsigned int GEN_THISCALL F_00c1f710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & 0xfffffffe;
  if (*(int *)((int)this + 0x10) != 0) {
    F_00bc5400(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xc);
  do {
    if ((undefined *)*piVar2 == this) {
      *(undefined4 *)(param_1 + 0xc + iVar1 * 4) = 0;
      return 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 4);
  return 0;
}

/* ref: FUN_00c1f760 */
GEN_FRAME uint GEN_THISCALL F_00c1f760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110ef94));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffc0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: FUN_00c1f7e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c1f7e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110ef94));
  if ((*(int *)((int)this + 0x18) == 3) && ((*(byte *)((int)this + 0x1c) & 1) == 0)) {
    piVar1 = *(int * PTR32 *)((int)this + 0x58);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
      F_00bba6a0(*(undefined * PTR32 *)((int)this + 0x58) GEN_EDX_ARG,this);
      *(undefined4 *)((int)this + 0x58) = 0;
    }
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 1;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x18) = 4;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
  return;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c1f850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110ef94));
  if ((*(int *)(this + 0x18) == 3) && (((byte)this[0x1c] & 1) == 0)) {
    piVar1 = *(int * PTR32 *)(this + 0x58);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
      F_00bba6a0(*(undefined * PTR32 *)(this + 0x58) GEN_EDX_ARG,this);
      *(undefined4 *)(this + 0x58) = 0;
    }
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x18) = 4;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c1f8c0 */
GEN_NOFRAME uint GEN_THISCALL F_00c1f8c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f8c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00bc89b0(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110efdc));
  return (uint)in_ecx;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf3 */
GEN_NOFRAME byte F_00c1f8f0(void)
{
  GEN_ENTER(0xc1f8f0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf4 */
GEN_FRAME uint GEN_THISCALL F_00c1f900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc1f900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined * this_00;
  undefined4 * this_01;
  
  this_00 = (undefined *)F_00406b90(0x668,0,0);
  if (this_00 != (undefined *)0x0) {
    this_01 = (undefined4 *)F_00c29330(this_00 GEN_EDX_ARG);
    if (this_01 != (undefined4 *)0x0) {
      bVar1 = F_00c29aa0(this_01 GEN_EDX_ARG,*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*(gen_code32 *)*this_01)(this_01 GEN_EDX_ARG,1);
        this_01 = (undefined4 *)0x0;
      }
      return (uint)this_01;
    }
  }
  return 0;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_00c1f9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = gen_imp_WinHttpOpen((*(undefined * PTR32 (*)[1])REFP(0x110efc0)),0,0,0,0x10000000);
  *(undefined4 *)(this + 4) = uVar1;
  return 1;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_00c1f9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_WinHttpCloseHandle(*(undefined4 *)(this + 4));
  return 1;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c1f9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110efdc));
  F_00bc89c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c1fa10 */
GEN_NOFRAME uint GEN_THISCALL F_00c1fa10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1fa10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float * pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar11;
  int * piVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  
  memcpy(&(auVar14), ((undefined1 *)(gen_frame + 0x10)), sizeof(((undefined1 *)(gen_frame + 0x10))) < sizeof(auVar14) ? sizeof(((undefined1 *)(gen_frame + 0x10))) : sizeof(auVar14));
  memcpy(&(auVar16), ((undefined1 *)(gen_frame + 0x0)), sizeof(((undefined1 *)(gen_frame + 0x0))) < sizeof(auVar16) ? sizeof(((undefined1 *)(gen_frame + 0x0))) : sizeof(auVar16));
  piVar12 = *(int * PTR32 *)this;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 12)) = (*(undefined4 *)((char *)&auVar14 + 12));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 12)) = (*(undefined4 *)((char *)&auVar16 + 12));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8)) = REFG(float, 0x1097b10);
  memcpy(&(auVar16), ((undefined1 *)(gen_frame + 0x0)), sizeof(((undefined1 *)(gen_frame + 0x0))) < sizeof(auVar16) ? sizeof(((undefined1 *)(gen_frame + 0x0))) : sizeof(auVar16));
  memcpy(&(auVar14), ((undefined1 *)(gen_frame + 0x10)), sizeof(((undefined1 *)(gen_frame + 0x10))) < sizeof(auVar14) ? sizeof(((undefined1 *)(gen_frame + 0x10))) : sizeof(auVar14));
  for (iVar10 = *(int *)((int)this + 4) - (int)((int)(uintptr_t)piVar12) >> 2; iVar10 != 0; iVar10 = iVar10 - 1) {
    iVar3 = *piVar12;
    uVar11 = 0;
    if (*(ushort *)(iVar3 + 0xff0) != 0) {
      do {
        pfVar1 = ((float *)GEN_TOP((iVar3 + (uVar11 & 0xffff) * 0x10)));
        pfVar2 = ((float *)GEN_TOP((iVar3 + ((uVar11 & 0xffff) + 0x78) * 0x10)));
        uVar11 = uVar11 + 1;
        (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - pfVar2[1]);
        (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - *pfVar2);
        (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - pfVar2[2]);
        (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - pfVar2[3]);
        gen_minps(&(auVar14), &(auVar14), &(auVar7));
        (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits(pfVar2[1] + pfVar1[1]);
        (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits(*pfVar2 + *pfVar1);
        (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits(pfVar2[2] + pfVar1[2]);
        (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits(pfVar2[3] + pfVar1[3]);
        gen_maxps(&(auVar16), &(auVar16), &(auVar4));
      } while (uVar11 < *(ushort *)(iVar3 + 0xff0));
    }
    piVar12 = piVar12 + 1;
  }
  piVar12 = *(int * PTR32 *)((int)this + 0x10);
  for (iVar10 = *(int *)((int)this + 0x14) - (int)((int)(uintptr_t)piVar12) >> 2; iVar10 != 0; iVar10 = iVar10 - 1) {
    iVar3 = *piVar12;
    uVar11 = 0;
    if (*(ushort *)(iVar3 + 0xff0) != 0) {
      do {
        pfVar1 = ((float *)GEN_TOP((iVar3 + (uVar11 & 0xffff) * 0x10)));
        pfVar2 = ((float *)GEN_TOP((iVar3 + ((uVar11 & 0xffff) + 0x78) * 0x10)));
        uVar11 = uVar11 + 1;
        (*(undefined4 *)((char *)&auVar8 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - pfVar2[1]);
        (*(undefined4 *)((char *)&auVar8 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - *pfVar2);
        (*(undefined4 *)((char *)&auVar8 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - pfVar2[2]);
        (*(undefined4 *)((char *)&auVar8 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - pfVar2[3]);
        gen_minps(&(auVar14), &(auVar14), &(auVar8));
        (*(undefined4 *)((char *)&auVar5 + 4)) = (undefined4)gen_fl2bits(pfVar2[1] + pfVar1[1]);
        (*(undefined4 *)((char *)&auVar5 + 0)) = (undefined4)gen_fl2bits(*pfVar2 + *pfVar1);
        (*(undefined4 *)((char *)&auVar5 + 8)) = (undefined4)gen_fl2bits(pfVar2[2] + pfVar1[2]);
        (*(undefined4 *)((char *)&auVar5 + 12)) = (undefined4)gen_fl2bits(pfVar2[3] + pfVar1[3]);
        gen_maxps(&(auVar16), &(auVar16), &(auVar5));
      } while (uVar11 < *(ushort *)(iVar3 + 0xff0));
    }
    piVar12 = piVar12 + 1;
  }
  memcpy(auVar15, (char *)(&auVar16) + 0, 12);
  memcpy(auVar13, (char *)(&auVar14) + 0, 12);
  piVar12 = *(int * PTR32 *)((int)this + 0x20);
  for (iVar10 = *(int *)((int)this + 0x24) - (int)((int)(uintptr_t)piVar12) >> 2; iVar10 != 0; iVar10 = iVar10 - 1) {
    iVar3 = *piVar12;
    uVar11 = 0;
    if (*(ushort *)(iVar3 + 0xff0) != 0) {
      do {
        pfVar1 = ((float *)GEN_TOP((iVar3 + (uVar11 & 0xffff) * 0x10)));
        pfVar2 = ((float *)GEN_TOP((iVar3 + ((uVar11 & 0xffff) + 0x78) * 0x10)));
        uVar11 = uVar11 + 1;
        (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - pfVar2[1]);
        (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - *pfVar2);
        (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - pfVar2[2]);
        (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - pfVar2[3]);
        gen_minps(&(auVar14), &(auVar14), &(auVar9));
        (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits(pfVar2[1] + pfVar1[1]);
        (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits(*pfVar2 + *pfVar1);
        (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits(pfVar2[2] + pfVar1[2]);
        (*(undefined4 *)((char *)&auVar6 + 12)) = (undefined4)gen_fl2bits(pfVar2[3] + pfVar1[3]);
        gen_maxps(&(auVar16), &(auVar16), &(auVar6));
      } while (uVar11 < *(ushort *)(iVar3 + 0xff0));
    }
    memcpy(auVar15, (char *)(&auVar16) + 0, 12);
    memcpy(auVar13, (char *)(&auVar14) + 0, 12);
    piVar12 = piVar12 + 1;
  }
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0)) = (*(undefined4 *)((char *)&auVar13 + 0));
  *param_1 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4)) = (*(undefined4 *)((char *)&auVar13 + 4));
  param_1[1] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8)) = (*(undefined4 *)((char *)&auVar13 + 8));
  param_1[2] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (*(undefined4 *)((char *)&auVar15 + 0));
  param_1[4] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (*(undefined4 *)((char *)&auVar15 + 4));
  param_1[5] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8)) = (*(undefined4 *)((char *)&auVar15 + 8));
  param_1[6] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
  return (uint)param_1;
}

/* ref: FUN_00c1fbe0 */
GEN_NOFRAME uint GEN_THISCALL F_00c1fbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc1fbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float * pfVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  
  this_00 = REFG(void * PTR32, 0x1370c1c);
  uVar11 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 12)) = (*(undefined4 *)(gen_frame + 0x3c));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 12)) = (*(undefined4 *)(gen_frame + 0x2c));
  (*(uint *)(gen_frame + 0x4c)) = 0;
  uVar13 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  uVar14 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  uVar15 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  uVar16 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  uVar17 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  uVar18 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  if (uVar11 != 0) {
    do {
      iVar4 = *(int *)(*(int *)this + (*(uint *)(gen_frame + 0x4c)) * 4);
      uVar3 = *(ushort *)(iVar4 + 0xff0);
      uVar12 = 0;
      if (uVar3 != 0) {
        do {
          dVar19 = F_00b137d0(this_00 GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (uVar12 & 0xffff) * 2))));
          pfVar1 = ((float *)GEN_TOP((iVar4 + (uVar12 & 0xffff) * 0x10)));
          fVar2 = (float)((float10)dVar19 + (float10)*(double *)&REFG(undefined, 0x10947f0));
          uVar12 = uVar12 + 1;
          (*(undefined4 *)((char *)&auVar8 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - fVar2);
          (*(undefined4 *)((char *)&auVar8 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - fVar2);
          (*(undefined4 *)((char *)&auVar8 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - fVar2);
          (*(undefined4 *)((char *)&auVar8 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - fVar2);
          gen_minps(((undefined1 *)(gen_frame + 0x10)), ((undefined1 *)(gen_frame + 0x10)), &(auVar8));
          (*(undefined4 *)((char *)&auVar5 + 4)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[1]);
          (*(undefined4 *)((char *)&auVar5 + 0)) = (undefined4)gen_fl2bits(fVar2 + *pfVar1);
          (*(undefined4 *)((char *)&auVar5 + 8)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[2]);
          (*(undefined4 *)((char *)&auVar5 + 12)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[3]);
          gen_maxps(((undefined1 *)(gen_frame + 0x0)), ((undefined1 *)(gen_frame + 0x0)), &(auVar5));
          uVar16 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
          uVar17 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
          uVar18 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
          uVar13 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
          uVar14 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
          uVar15 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
        } while (uVar12 < uVar3);
      }
      (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) + 1;
    } while ((*(uint *)(gen_frame + 0x4c)) < uVar11);
  }
  uVar11 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  (*(uint *)(gen_frame + 0x54)) = 0;
  if (uVar11 != 0) {
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (*(uint *)(gen_frame + 0x54)) * 4)));
      uVar3 = *(ushort *)(iVar4 + 0xff0);
      uVar12 = 0;
      if (uVar3 != 0) {
        do {
          dVar19 = F_00b137d0(this_00 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (uVar12 & 0xffff) * 2))));
          pfVar1 = ((float *)GEN_TOP((iVar4 + (uVar12 & 0xffff) * 0x10)));
          fVar2 = (float)((float10)dVar19 + (float10)*(double *)&REFG(undefined, 0x10947f0));
          uVar12 = uVar12 + 1;
          (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - fVar2);
          (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - fVar2);
          (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - fVar2);
          (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - fVar2);
          gen_minps(((undefined1 *)(gen_frame + 0x10)), ((undefined1 *)(gen_frame + 0x10)), &(auVar9));
          (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[1]);
          (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits(fVar2 + *pfVar1);
          (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[2]);
          (*(undefined4 *)((char *)&auVar6 + 12)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[3]);
          gen_maxps(((undefined1 *)(gen_frame + 0x0)), ((undefined1 *)(gen_frame + 0x0)), &(auVar6));
          uVar16 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
          uVar17 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
          uVar18 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
          uVar13 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
          uVar14 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
          uVar15 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
        } while (uVar12 < uVar3);
      }
      (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x54)) + 1;
    } while ((*(uint *)(gen_frame + 0x54)) < uVar11);
  }
  uVar11 = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
  (*(uint *)(gen_frame + 0x50)) = 0;
  if (uVar11 != 0) {
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + (*(uint *)(gen_frame + 0x50)) * 4)));
      uVar3 = *(ushort *)(iVar4 + 0xff0);
      uVar12 = 0;
      if (uVar3 != 0) {
        do {
          dVar19 = F_00b137d0(this_00 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (uVar12 & 0xffff) * 2))));
          pfVar1 = ((float *)GEN_TOP((iVar4 + (uVar12 & 0xffff) * 0x10)));
          fVar2 = (float)((float10)dVar19 + (float10)*(double *)&REFG(undefined, 0x10947f0));
          uVar12 = uVar12 + 1;
          (*(undefined4 *)((char *)&auVar10 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - fVar2);
          (*(undefined4 *)((char *)&auVar10 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - fVar2);
          (*(undefined4 *)((char *)&auVar10 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - fVar2);
          (*(undefined4 *)((char *)&auVar10 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - fVar2);
          gen_minps(((undefined1 *)(gen_frame + 0x10)), ((undefined1 *)(gen_frame + 0x10)), &(auVar10));
          (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[1]);
          (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits(fVar2 + *pfVar1);
          (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[2]);
          (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[3]);
          gen_maxps(((undefined1 *)(gen_frame + 0x0)), ((undefined1 *)(gen_frame + 0x0)), &(auVar7));
          uVar16 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
          uVar17 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
          uVar18 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
          uVar13 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
          uVar14 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
          uVar15 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
        } while (uVar12 < uVar3);
      }
      (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) + 1;
    } while ((*(uint *)(gen_frame + 0x50)) < uVar11);
  }
  *param_1 = uVar16;
  param_1[1] = uVar17;
  param_1[2] = uVar18;
  param_1[4] = uVar13;
  param_1[5] = uVar14;
  param_1[6] = uVar15;
  return (uint)param_1;
}

/* ref: FUN_00c1fea0 */
GEN_FRAME uint GEN_STDCALL F_00c1fea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1fea0u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = *(byte *)((int)param_1 + 3);
  iVar2 = (uint)*param_1 * 0x1000 + 0x80 + *(int *)(REFG(int, 0x1370c1c) + 0x3930);
  puVar4 = (undefined4 *)((uint)bVar3 * 0x10 + iVar2);
  *puVar4 = *param_3;
  puVar4[1] = param_3[1];
  puVar4[2] = param_3[2];
  puVar4[3] = param_3[3];
  iVar1 = bVar3 + 0x78;
  *(undefined4 *)(iVar2 + iVar1 * 0x10) = *param_2;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 0x10) = param_2[1];
  *(undefined4 *)(iVar2 + 8 + iVar1 * 0x10) = param_2[2];
  return iVar1 * 2;
}

/* ref: FUN_00c1ff10 */
GEN_FRAME uint GEN_THISCALL F_00c1ff10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc1ff10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  short * psVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 * puVar15;
  int * piVar16;
  int iVar17;
  undefined2 * puVar18;
  
  iVar17 = *(int *)this;
  iVar11 = *(int *)((int)this + 4) - iVar17 >> 2;
  iVar14 = *(int *)(iVar17 - 4 + iVar11 * 4);
  uVar12 = *(uint *)(iVar17 - 4 + iVar11 * 4);
  if (param_1 == *((ushort *)GEN_TOP((iVar14 + 0xefe + (uint)*(ushort *)(iVar14 + 0xff0) * 2)))) {
    psVar1 = (short *)(uVar12 + 0xff0);
    *psVar1 = *psVar1 - 1;
    sVar2 = *psVar1;
  }
  else {
    uVar13 = (uint)(byte)(*(char *)(uVar12 + 0xff0) - 1);
    uVar10 = *(ushort *)(uVar12 + 0xf00 + uVar13 * 2);
    iVar17 = uVar13 + 0x78;
    iVar14 = uVar13 * 0x10;
    uVar3 = *(undefined4 *)(iVar14 + uVar12);
    uVar4 = *(undefined4 *)(iVar14 + 4 + uVar12);
    uVar5 = *(undefined4 *)(iVar14 + 8 + uVar12);
    uVar6 = *(undefined4 *)(iVar14 + 0xc + uVar12);
    uVar7 = *(undefined4 *)(uVar12 + iVar17 * 0x10);
    uVar8 = *(undefined4 *)(uVar12 + 4 + iVar17 * 0x10);
    uVar9 = *(undefined4 *)(uVar12 + 8 + iVar17 * 0x10);
    *(short *)(uVar12 + 0xff0) = *(short *)(uVar12 + 0xff0) - 1;
    piVar16 = *(int * PTR32 *)this;
    uVar13 = *(int *)((int)this + 4) - (int)((int)(uintptr_t)piVar16) >> 2;
    param_1 = 0;
    if (uVar13 != 0) {
      do {
        iVar17 = *piVar16;
        if ((short)param_2 == *(short *)(iVar17 + 0xff4)) goto LAB_00c1ffe6;
        param_1 = param_1 + 1;
        piVar16 = piVar16 + 1;
      } while (param_1 < uVar13);
    }
    iVar17 = 0;
LAB_00c1ffe6: ;
    uVar13 = (uint)(byte)param_3;
    *(ushort *)(iVar17 + 0xf00 + uVar13 * 2) = uVar10;
    puVar15 = (undefined4 *)(uVar13 * 0x10 + iVar17);
    *puVar15 = uVar3;
    puVar15[1] = uVar4;
    puVar15[2] = uVar5;
    puVar15[3] = uVar6;
    iVar14 = uVar13 + 0x78;
    *(undefined4 *)(iVar17 + iVar14 * 0x10) = uVar7;
    *(undefined4 *)(iVar17 + 4 + iVar14 * 0x10) = uVar8;
    *(undefined4 *)(iVar17 + 8 + iVar14 * 0x10) = uVar9;
    puVar18 = ((undefined2 *)GEN_TOP(((uint)uVar10 * 0x10 + *(int *)(REFG(int, 0x1370c1c) + 8))));
    *puVar18 = *(undefined2 *)(iVar17 + 0xff4);
    *(byte *)((int)puVar18 + 3) = (byte)param_3;
    sVar2 = *(short *)(uVar12 + 0xff0);
  }
  if (sVar2 == 0) {
    F_00bca970(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930) GEN_EDX_FWD,uVar12);
    uVar12 = *(uint *)((int)this + 4);
    if (*(uint *)this != uVar12) {
      uVar12 = uVar12 - 4;
      *(uint *)((int)this + 4) = uVar12;
    }
  }
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) - 1;
  return uVar12;
}

/* ref: FUN_00c20080 */
GEN_FRAME uint GEN_THISCALL F_00c20080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc20080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  short * psVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 * puVar14;
  int iVar15;
  undefined2 * puVar16;
  int * piVar17;
  
  iVar11 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  iVar15 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) - 4 + iVar11 * 4)));
  uVar12 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) - 4 + iVar11 * 4)));
  if (param_1 == *((ushort *)GEN_TOP((iVar15 + 0xefe + (uint)*(ushort *)(iVar15 + 0xff0) * 2)))) {
    psVar1 = (short *)(uVar12 + 0xff0);
    *psVar1 = *psVar1 - 1;
    sVar2 = *psVar1;
  }
  else {
    uVar13 = (uint)(byte)(*(char *)(uVar12 + 0xff0) - 1);
    uVar10 = *(ushort *)(uVar12 + 0xf00 + uVar13 * 2);
    iVar15 = uVar13 + 0x78;
    iVar11 = uVar13 * 0x10;
    uVar3 = *(undefined4 *)(iVar11 + uVar12);
    uVar4 = *(undefined4 *)(iVar11 + 4 + uVar12);
    uVar5 = *(undefined4 *)(iVar11 + 8 + uVar12);
    uVar6 = *(undefined4 *)(iVar11 + 0xc + uVar12);
    uVar7 = *(undefined4 *)(uVar12 + iVar15 * 0x10);
    uVar8 = *(undefined4 *)(uVar12 + 4 + iVar15 * 0x10);
    uVar9 = *(undefined4 *)(uVar12 + 8 + iVar15 * 0x10);
    *(short *)(uVar12 + 0xff0) = *(short *)(uVar12 + 0xff0) - 1;
    param_1 = 0;
    uVar13 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
    if (uVar13 != 0) {
      piVar17 = *(int * PTR32 *)((int)this + 0x10);
      do {
        iVar15 = *piVar17;
        if ((short)param_2 == *(short *)(iVar15 + 0xff4)) goto LAB_00c2015a;
        param_1 = param_1 + 1;
        piVar17 = piVar17 + 1;
      } while (param_1 < uVar13);
    }
    iVar15 = 0;
LAB_00c2015a: ;
    uVar13 = (uint)(byte)param_3;
    *(ushort *)(iVar15 + 0xf00 + uVar13 * 2) = uVar10;
    puVar14 = (undefined4 *)(uVar13 * 0x10 + iVar15);
    *puVar14 = uVar3;
    puVar14[1] = uVar4;
    puVar14[2] = uVar5;
    puVar14[3] = uVar6;
    iVar11 = uVar13 + 0x78;
    *(undefined4 *)(iVar15 + iVar11 * 0x10) = uVar7;
    *(undefined4 *)(iVar15 + 4 + iVar11 * 0x10) = uVar8;
    *(undefined4 *)(iVar15 + 8 + iVar11 * 0x10) = uVar9;
    puVar16 = ((undefined2 *)GEN_TOP(((uint)uVar10 * 0x10 + *(int *)(REFG(int, 0x1370c1c) + 8))));
    *puVar16 = *(undefined2 *)(iVar15 + 0xff4);
    *(byte *)((int)puVar16 + 3) = (byte)param_3;
    sVar2 = *(short *)(uVar12 + 0xff0);
  }
  if (sVar2 == 0) {
    F_00bca970(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930) GEN_EDX_FWD,uVar12);
    uVar12 = *(uint *)((int)this + 0x14);
    if (*(uint *)((int)this + 0x10) != uVar12) {
      uVar12 = uVar12 - 4;
      *(uint *)((int)this + 0x14) = uVar12;
    }
  }
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) - 1;
  return uVar12;
}

/* ref: FUN_00c20200 */
GEN_FRAME uint GEN_THISCALL F_00c20200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc20200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  short * psVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 * puVar14;
  int iVar15;
  undefined2 * puVar16;
  int * piVar17;
  
  iVar11 = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
  iVar15 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) - 4 + iVar11 * 4)));
  uVar12 = *((uint *)GEN_TOP((*(int *)((int)this + 0x20) - 4 + iVar11 * 4)));
  if (param_1 == *((ushort *)GEN_TOP((iVar15 + 0xefe + (uint)*(ushort *)(iVar15 + 0xff0) * 2)))) {
    psVar1 = (short *)(uVar12 + 0xff0);
    *psVar1 = *psVar1 - 1;
    sVar2 = *psVar1;
  }
  else {
    uVar13 = (uint)(byte)(*(char *)(uVar12 + 0xff0) - 1);
    uVar10 = *(ushort *)(uVar12 + 0xf00 + uVar13 * 2);
    iVar15 = uVar13 + 0x78;
    iVar11 = uVar13 * 0x10;
    uVar3 = *(undefined4 *)(iVar11 + uVar12);
    uVar4 = *(undefined4 *)(iVar11 + 4 + uVar12);
    uVar5 = *(undefined4 *)(iVar11 + 8 + uVar12);
    uVar6 = *(undefined4 *)(iVar11 + 0xc + uVar12);
    uVar7 = *(undefined4 *)(uVar12 + iVar15 * 0x10);
    uVar8 = *(undefined4 *)(uVar12 + 4 + iVar15 * 0x10);
    uVar9 = *(undefined4 *)(uVar12 + 8 + iVar15 * 0x10);
    *(short *)(uVar12 + 0xff0) = *(short *)(uVar12 + 0xff0) - 1;
    param_1 = 0;
    uVar13 = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
    if (uVar13 != 0) {
      piVar17 = *(int * PTR32 *)((int)this + 0x20);
      do {
        iVar15 = *piVar17;
        if ((short)param_2 == *(short *)(iVar15 + 0xff4)) goto LAB_00c202da;
        param_1 = param_1 + 1;
        piVar17 = piVar17 + 1;
      } while (param_1 < uVar13);
    }
    iVar15 = 0;
LAB_00c202da: ;
    uVar13 = (uint)(byte)param_3;
    *(ushort *)(iVar15 + 0xf00 + uVar13 * 2) = uVar10;
    puVar14 = (undefined4 *)(uVar13 * 0x10 + iVar15);
    *puVar14 = uVar3;
    puVar14[1] = uVar4;
    puVar14[2] = uVar5;
    puVar14[3] = uVar6;
    iVar11 = uVar13 + 0x78;
    *(undefined4 *)(iVar15 + iVar11 * 0x10) = uVar7;
    *(undefined4 *)(iVar15 + 4 + iVar11 * 0x10) = uVar8;
    *(undefined4 *)(iVar15 + 8 + iVar11 * 0x10) = uVar9;
    puVar16 = ((undefined2 *)GEN_TOP(((uint)uVar10 * 0x10 + *(int *)(REFG(int, 0x1370c1c) + 8))));
    *puVar16 = *(undefined2 *)(iVar15 + 0xff4);
    *(byte *)((int)puVar16 + 3) = (byte)param_3;
    sVar2 = *(short *)(uVar12 + 0xff0);
  }
  if (sVar2 == 0) {
    F_00bca970(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930) GEN_EDX_FWD,uVar12);
    uVar12 = *(uint *)((int)this + 0x24);
    if (*(uint *)((int)this + 0x20) != uVar12) {
      uVar12 = uVar12 - 4;
      *(uint *)((int)this + 0x24) = uVar12;
    }
  }
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) - 1;
  return uVar12;
}

/* ref: FUN_00c20380 */
GEN_NOFRAME uint GEN_THISCALL F_00c20380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc20380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  (*(float *)((char *)&auVar5 + 0)) = *param_2 - *param_3;
  (*(float *)((char *)&auVar5 + 4)) = param_2[1] - param_3[1];
  (*(float *)((char *)&auVar5 + 8)) = param_2[2] - param_3[2];
  (*(float *)((char *)&auVar5 + 12)) = param_2[3] - param_3[3];
  fVar2 = *param_3 + *param_2;
  fVar3 = param_3[1] + param_2[1];
  fVar4 = param_3[2] + param_2[2];
  if ((*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2) +
      (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2) +
      (*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) == 0) {
    *(float *)*param_1 = (*(float *)((char *)&auVar5 + 0));
    *(float *)(*param_1 + 4) = (*(float *)((char *)&auVar5 + 4));
    *(float *)(*param_1 + 8) = (*(float *)((char *)&auVar5 + 8));
    *(float *)param_1[1] = fVar2;
    *(float *)(param_1[1] + 4) = fVar3;
    *(float *)(param_1[1] + 8) = fVar4;
    return (uint)param_1;
  }
  gen_minps(&(auVar6), &(*param_1), &(auVar5));
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(param_3[3] + param_2[3]);
  gen_maxps(&(auVar5), &(param_1[1]), &(auVar1));
  local_30 = (*(undefined4 *)((char *)&auVar6 + 0));
  *(undefined4 *)*param_1 = local_30;
  uStack_2c = (*(undefined4 *)((char *)&auVar6 + 4));
  *(undefined4 *)(*param_1 + 4) = uStack_2c;
  uStack_28 = (*(undefined4 *)((char *)&auVar6 + 8));
  *(undefined4 *)(*param_1 + 8) = uStack_28;
  local_20 = (*(undefined4 *)((char *)&auVar5 + 0));
  *(undefined4 *)param_1[1] = local_20;
  uStack_1c = (*(undefined4 *)((char *)&auVar5 + 4));
  *(undefined4 *)(param_1[1] + 4) = uStack_1c;
  uStack_18 = (*(undefined4 *)((char *)&auVar5 + 8));
  *(undefined4 *)(param_1[1] + 8) = uStack_18;
  return (uint)param_1;
}

/* ref: FUN_00c20480 */
GEN_NOFRAME uint GEN_THISCALL F_00c20480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc20480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2) +
      (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2) +
      (*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) == 0) {
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    *(undefined4 *)(*param_1 + 4) = *(undefined4 *)(*param_2 + 4);
    *(undefined4 *)(*param_1 + 8) = *(undefined4 *)(*param_2 + 8);
    *(undefined4 *)param_1[1] = *(undefined4 *)param_2[1];
    *(undefined4 *)(param_1[1] + 4) = *(undefined4 *)(param_2[1] + 4);
    *(undefined4 *)(param_1[1] + 8) = *(undefined4 *)(param_2[1] + 8);
    return (uint)param_2;
  }
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  gen_maxps(&(auVar2), &(param_1[1]), &(param_2[1]));
  local_20 = (*(undefined4 *)((char *)&auVar1 + 0));
  *(undefined4 *)*param_1 = local_20;
  uStack_1c = (*(undefined4 *)((char *)&auVar1 + 4));
  *(undefined4 *)(*param_1 + 4) = uStack_1c;
  uStack_18 = (*(undefined4 *)((char *)&auVar1 + 8));
  *(undefined4 *)(*param_1 + 8) = uStack_18;
  local_30 = (*(undefined4 *)((char *)&auVar2 + 0));
  *(undefined4 *)param_1[1] = local_30;
  uStack_2c = (*(undefined4 *)((char *)&auVar2 + 4));
  *(undefined4 *)(param_1[1] + 4) = uStack_2c;
  uStack_28 = (*(undefined4 *)((char *)&auVar2 + 8));
  *(undefined4 *)(param_1[1] + 8) = uStack_28;
  return (uint)param_1;
}

/* ref: FUN_00c20550 */
GEN_FRAME uint GEN_STDCALL F_00c20550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc20550u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  uVar3 = param_2[3];
  bVar4 = *(byte *)((int)param_1 + 3);
  iVar2 = (uint)*param_1 * 0x1000 + 0x80 + *(int *)(REFG(int, 0x1370c1c) + 0x3930);
  puVar5 = (undefined4 *)((uint)bVar4 * 0x10 + iVar2);
  *puVar5 = *param_2;
  puVar5[1] = param_2[1];
  puVar5[2] = param_2[2];
  puVar5[3] = param_2[3];
  iVar1 = bVar4 + 0x78;
  *(undefined4 *)(iVar2 + iVar1 * 0x10) = uVar3;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 0x10) = uVar3;
  *(undefined4 *)(iVar2 + 8 + iVar1 * 0x10) = uVar3;
  return iVar1 * 2;
}

/* ref: FUN_00c205c0 */
GEN_NOFRAME uint GEN_STDCALL F_00c205c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc205c0u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  float * pfVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  fVar3 = param_2[4];
  fVar4 = *param_2;
  fVar14 = (float10)fVar4;
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar15 = (float10)REFG(double, 0x1088108);
  fVar7 = ((float)GEN_TOF(((float10)(float)(fVar14 + (float10)fVar3) * fVar15)));
  fVar8 = ((float)GEN_TOF(((float10)(float)((float10)param_2[1] + (float10)fVar5) * fVar15)));
  fVar9 = ((float)GEN_TOF((fVar15 * (float10)(float)((float10)param_2[2] + (float10)fVar6))));
  fVar15 = (float10)(float)((float10)fVar8 - (float10)param_2[1]);
  fVar14 = (float10)(float)((float10)fVar7 - fVar14);
  fVar16 = (float10)(float)((float10)fVar9 - (float10)param_2[2]);
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar17 = (float10)REFG(double, 0x1088108);
  bVar12 = *(byte *)((int)param_1 + 3);
  iVar2 = (uint)*param_1 * 0x1000 + 0x80 + *(int *)(REFG(int, 0x1370c1c) + 0x3930);
  pfVar13 = (float *)((uint)bVar12 * 0x10 + iVar2);
  *pfVar13 = fVar7;
  pfVar13[1] = fVar8;
  pfVar13[2] = fVar9;
  pfVar13[3] = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar16 * fVar16 + (fVar14 * fVar14 + fVar15 * fVar15)))))));
  iVar1 = bVar12 + 0x78;
  *(float *)(iVar2 + iVar1 * 0x10) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar3 - (float10)fVar4) * fVar17)));
  *(float *)(iVar2 + 4 + iVar1 * 0x10) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar5 - (float10)fVar10) * fVar17)));
  *(float *)(iVar2 + 8 + iVar1 * 0x10) =
       ((float)GEN_TOF((fVar17 * (float10)(float)((float10)fVar6 - (float10)fVar11))));
  return iVar1 * 2;
}

/* ref: FUN_00c20740 */
GEN_FRAME uint GEN_THISCALL F_00c20740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc20740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = F_00c1ff10(this GEN_EDX_FWD,param_2,param_3,param_4);
    return uVar1;
  }
  if (param_1 == 2) {
    uVar1 = F_00c20080(this GEN_EDX_ARG,param_2,param_3,param_4);
    return uVar1;
  }
  uVar1 = F_00c20200(this GEN_EDX_ARG,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c20790 */
GEN_NOFRAME uint GEN_THISCALL F_00c20790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc20790u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0x10] = 0xffffffff;
  in_ecx[0x11] = 0x3ffff;
  return (uint)in_ecx;
}

/* ref: FUN_00c207d0 */
GEN_NOFRAME uint GEN_THISCALL F_00c207d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc207d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x28) - iVar1 >> 2) * 4,0xd7);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x18) - iVar1 >> 2) * 4,0xd7);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd7);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00c20860 */
GEN_FRAME uint GEN_THISCALL F_00c20860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc20860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this_00 = *(undefined * PTR32 *)(REFG(undefined4, 0x1370c1c) + 0x3930);
  uVar3 = 0;
  uVar4 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  uVar2 = REFG(undefined4, 0x1370c1c);
  if (uVar4 != 0) {
    do {
      uVar2 = F_00bca970(this_00 GEN_EDX_FWD,*(undefined4 *)(*(int *)this + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    uVar2 = F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  uVar3 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  if (uVar3 != 0) {
    do {
      uVar2 = F_00bca970(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar4 * 4))));
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != *(int *)((int)this + 0x14)) {
    uVar2 = F_00c46e20(iVar1,*(int *)((int)this + 0x14),0);
    *(int *)((int)this + 0x14) = iVar1;
  }
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar3 = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
  if (uVar3 != 0) {
    do {
      uVar2 = F_00bca970(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + uVar4 * 4))));
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 != *(int *)((int)this + 0x24)) {
    uVar2 = F_00c46e20(iVar1,*(int *)((int)this + 0x24),0);
    *(int *)((int)this + 0x24) = iVar1;
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  return uVar2;
}

/* ref: FUN_00c20970 */
GEN_NOFRAME uint GEN_THISCALL F_00c20970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc20970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  float * pfVar9;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  
  pvVar7 = *(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930);
  iVar11 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
  if ((iVar11 == 0) || (*(uint *)((int)this + 0x30) % 0x78 == 0)) {
    pvVar7 = (undefined *)F_00bca990(pvVar7 GEN_EDX_FWD,param_1);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
    F_00c21900(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xc)));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  }
  else {
    pvVar7 = *(undefined * PTR32 *)(*(int *)this - 4 + iVar11 * 4);
  }
  uVar5 = *(ushort *)((int)pvVar7 + 0xff0);
  uVar10 = (uint)uVar5;
  puVar8 = (undefined4 *)(uVar10 * 0x10 + (int)pvVar7);
  *puVar8 = *param_4;
  puVar8[1] = param_4[1];
  puVar8[2] = param_4[2];
  puVar8[3] = param_4[3];
  fVar1 = param_3[5];
  fVar2 = param_3[1];
  fVar3 = param_3[6];
  fVar4 = param_3[2];
  pfVar9 = ((float *)GEN_TOP(((uVar10 + 0x78) * 0x10 + (int)pvVar7)));
  fVar12 = (float10)REFG(double, 0x1088108);
  *pfVar9 = ((float)GEN_TOF(((float10)(float)((float10)param_3[4] - (float10)*param_3) * fVar12)));
  pfVar9[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2) * fVar12)));
  pfVar9[2] = ((float)GEN_TOF((fVar12 * (float10)(float)((float10)fVar3 - (float10)fVar4))));
  *(short *)((int)pvVar7 + uVar10 * 2 + 0xf00) =
       (short)((int)param_2 - *(int *)(REFG(int, 0x1370c1c) + 8) >> 4);
  fVar12 = (float10)*(double *)&REFG(undefined, 0x10a1b58);
  *pfVar9 = (float)((float10)*pfVar9 + fVar12);
  pfVar9[1] = (float)((float10)pfVar9[1] + fVar12);
  pfVar9[2] = (float)(fVar12 + (float10)pfVar9[2]);
  uVar6 = *(undefined2 *)((int)pvVar7 + 0xff4);
  *(char *)((int)param_2 + 3) = (char)uVar5;
  *param_2 = uVar6;
  *(short *)((int)pvVar7 + 0xff0U) = *(short *)((int)pvVar7 + 0xff0U) + 1;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
  return (uint)this;
}

/* ref: FUN_00c20ad0 */
GEN_NOFRAME uint GEN_THISCALL F_00c20ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc20ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  
  pvVar7 = *(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930);
  iVar10 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
  if ((iVar10 == 0) || (*(uint *)((int)this + 0x34) % 0x78 == 0)) {
    pvVar7 = (undefined *)F_00bca990(pvVar7 GEN_EDX_FWD,param_1);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
    F_00c21900((int *)((int)this + 0x10) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xc)));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  }
  else {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) - 4 + iVar10 * 4)));
  }
  uVar5 = *(ushort *)((int)pvVar7 + 0xff0);
  uVar9 = (uint)uVar5;
  puVar8 = (undefined4 *)(uVar9 * 0x10 + (int)pvVar7);
  *puVar8 = *param_4;
  puVar8[1] = param_4[1];
  puVar8[2] = param_4[2];
  puVar8[3] = param_4[3];
  fVar1 = param_3[5];
  fVar2 = param_3[1];
  fVar3 = param_3[6];
  fVar4 = param_3[2];
  iVar10 = uVar9 + 0x78;
  fVar11 = (float10)REFG(double, 0x1088108);
  *(float *)((int)pvVar7 + iVar10 * 0x10) =
       ((float)GEN_TOF(((float10)(float)((float10)param_3[4] - (float10)*param_3) * fVar11)));
  *(float *)((int)pvVar7 + iVar10 * 0x10 + 4) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2) * fVar11)));
  *(float *)((int)pvVar7 + iVar10 * 0x10 + 8) =
       ((float)GEN_TOF((fVar11 * (float10)(float)((float10)fVar3 - (float10)fVar4))));
  *(short *)((int)pvVar7 + uVar9 * 2 + 0xf00) =
       (short)((int)param_2 - *(int *)(REFG(int, 0x1370c1c) + 8) >> 4);
  uVar6 = *(undefined2 *)((int)pvVar7 + 0xff4);
  *(char *)((int)param_2 + 3) = (char)uVar5;
  *param_2 = uVar6;
  *(short *)((int)pvVar7 + 0xff0U) = *(short *)((int)pvVar7 + 0xff0U) + 1;
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
  return (uint)this;
}

/* ref: FUN_00c20c10 */
GEN_NOFRAME uint GEN_THISCALL F_00c20c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc20c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  
  pvVar7 = *(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930);
  iVar10 = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
  if ((iVar10 == 0) || (*(uint *)((int)this + 0x38) % 0x78 == 0)) {
    pvVar7 = (undefined *)F_00bca990(pvVar7 GEN_EDX_FWD,param_1);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
    F_00c21900((int *)((int)this + 0x20) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xc)));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  }
  else {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) - 4 + iVar10 * 4)));
  }
  uVar5 = *(ushort *)((int)pvVar7 + 0xff0);
  uVar9 = (uint)uVar5;
  puVar8 = (undefined4 *)(uVar9 * 0x10 + (int)pvVar7);
  *puVar8 = *param_4;
  puVar8[1] = param_4[1];
  puVar8[2] = param_4[2];
  puVar8[3] = param_4[3];
  fVar1 = param_3[5];
  fVar2 = param_3[1];
  fVar3 = param_3[6];
  fVar4 = param_3[2];
  iVar10 = uVar9 + 0x78;
  fVar11 = (float10)REFG(double, 0x1088108);
  *(float *)((int)pvVar7 + iVar10 * 0x10) =
       ((float)GEN_TOF(((float10)(float)((float10)param_3[4] - (float10)*param_3) * fVar11)));
  *(float *)((int)pvVar7 + iVar10 * 0x10 + 4) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2) * fVar11)));
  *(float *)((int)pvVar7 + iVar10 * 0x10 + 8) =
       ((float)GEN_TOF((fVar11 * (float10)(float)((float10)fVar3 - (float10)fVar4))));
  *(short *)((int)pvVar7 + uVar9 * 2 + 0xf00) =
       (short)((int)param_2 - *(int *)(REFG(int, 0x1370c1c) + 8) >> 4);
  uVar6 = *(undefined2 *)((int)pvVar7 + 0xff4);
  *(char *)((int)param_2 + 3) = (char)uVar5;
  *param_2 = uVar6;
  *(short *)((int)pvVar7 + 0xff0U) = *(short *)((int)pvVar7 + 0xff0U) + 1;
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  return (uint)this;
}

/* ref: FUN_00c20d50 */
GEN_FRAME uint GEN_THISCALL F_00c20d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc20d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = (*(int *)&gen_args[2]);
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),*(undefined1 *)((*(int *)&gen_args[2]) + 2));
  bVar2 = F_00b133e0((*(int *)&gen_args[2]));
  if (bVar2 == 1) {
    uVar3 = F_00c20970((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),iVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar3;
  }
  if (bVar2 == 2) {
    uVar3 = F_00c20ad0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),iVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar3;
  }
  uVar3 = F_00c20c10((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),iVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  return uVar3;
}

/* ref: FUN_00c20db0 */
GEN_NOFRAME uint GEN_THISCALL F_00c20db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc20db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(float *)(gen_frame + 0x30)) = *param_3;
  (*(float *)(gen_frame + 0x34)) = param_3[1];
  fVar1 = param_3[2];
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar2 = param_3[3];
  (*(float *)(gen_frame + 0x4c)) = fVar2;
  fVar6 = (float10)*param_3;
  fVar7 = (float10)fVar2;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x4c)) + 0)) = *(undefined1 *)(param_2 + 2);
  (*(float *)(gen_frame + 0x4c)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar2) >> 8),*(undefined1 *)(param_2 + 2))
                       );
  fVar2 = (float)(fVar6 - fVar7);
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar8 = (float10)param_3[1];
  (*(float *)(gen_frame + 0x0)) = fVar2;
  fVar2 = (float)(fVar8 - fVar7);
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar9 = (float10)fVar1;
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar1 = (float)(fVar9 - fVar7);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  fVar1 = (float)(fVar7 + fVar6);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar2 = (float)(fVar8 + fVar7);
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = (float)(fVar7 + fVar9);
  (*(float *)(gen_frame + 0x38)) = fVar3;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar3;
  bVar4 = F_00b133e0((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4c))));
  if (bVar4 == 1) {
    uVar5 = F_00c20970(this GEN_EDX_ARG,param_1,param_2,&(*(float *)(gen_frame + 0x0)),param_3);
    return uVar5;
  }
  if (bVar4 == 2) {
    uVar5 = F_00c20ad0(this GEN_EDX_ARG,param_1,param_2,&(*(float *)(gen_frame + 0x0)),param_3);
    return uVar5;
  }
  uVar5 = F_00c20c10(this GEN_EDX_ARG,param_1,param_2,&(*(float *)(gen_frame + 0x0)),param_3);
  return uVar5;
}

/* ref: FUN_00c20ec0 */
GEN_NOFRAME uint GEN_THISCALL F_00c20ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc20ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(float *)(gen_frame + 0x2c)) = *param_3;
  fVar6 = (float10)*param_3;
  fVar1 = (float)(fVar6 + (float10)param_3[4]);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x2c)) = param_3[1];
  fVar7 = (float10)param_3[1];
  fVar2 = (float)(fVar7 + (float10)param_3[5]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  (*(float *)(gen_frame + 0x2c)) = param_3[2];
  fVar8 = (float10)param_3[2];
  fVar3 = (float)(fVar8 + (float10)param_3[6]);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  fVar9 = (float10)REFG(double, 0x1088108);
  fVar1 = (float)((float10)fVar1 * fVar9);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar9);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)(fVar9 * (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  (*(float *)(gen_frame + 0x8)) = fVar3;
  fVar7 = (float10)(float)((float10)fVar2 - fVar7);
  fVar6 = (float10)(float)((float10)fVar1 - fVar6);
  fVar8 = (float10)(float)((float10)fVar3 - fVar8);
  fVar1 = ((float)GEN_TOF((fVar8 * fVar8 + (fVar6 * fVar6 + fVar7 * fVar7))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = fVar1;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 0)) = *(undefined1 *)(param_2 + 2);
  (*(float *)(gen_frame + 0x2c)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar1) >> 8),*(undefined1 *)(param_2 + 2))
                       );
  bVar4 = F_00b133e0((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c))));
  if (bVar4 == 1) {
    uVar5 = F_00c20970(this GEN_EDX_ARG,param_1,param_2,param_3,&(*(float *)(gen_frame + 0x0)));
    return uVar5;
  }
  if (bVar4 == 2) {
    uVar5 = F_00c20ad0(this GEN_EDX_ARG,param_1,param_2,param_3,&(*(float *)(gen_frame + 0x0)));
    return uVar5;
  }
  uVar5 = F_00c20c10(this GEN_EDX_ARG,param_1,param_2,param_3,&(*(float *)(gen_frame + 0x0)));
  return uVar5;
}

/* ref: FUN_00c21010 */
GEN_FRAME uint GEN_THISCALL F_00c21010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21010u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00c21030 */
GEN_FRAME uint GEN_THISCALL F_00c21030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21030u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c210b0 */
GEN_FRAME uint GEN_STDCALL F_00c210b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc210b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd7);
  return (uint)uVar1;
}

/* ref: FUN_00c210e0 */
GEN_FRAME uint GEN_STDCALL F_00c210e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc210e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd7);
  return uVar1;
}

/* ref: FUN_00c21130 */
GEN_FRAME uint F_00c21130(unsigned int gen_a0)
{
  GEN_ENTER(0xc21130u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c21150 */
GEN_FRAME uint F_00c21150(unsigned int gen_a0)
{
  GEN_ENTER(0xc21150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c21160 */
GEN_FRAME uint F_00c21160(unsigned int gen_a0)
{
  GEN_ENTER(0xc21160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c21170 */
GEN_FRAME byte F_00c21170(void)
{
  GEN_ENTER(0xc21170u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00c21180 */
GEN_FRAME uint F_00c21180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21180u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00c211d0 */
GEN_FRAME uint F_00c211d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc211d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c21200 */
GEN_FRAME uint GEN_THISCALL F_00c21200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21200u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)((uint)(ushort)param_2 * 0x10 + in_ecx);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  return (uint)puVar1;
}

/* ref: FUN_00c21230 */
GEN_FRAME uint GEN_THISCALL F_00c21230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21230u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((((ushort)param_2 + 0x78) * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: FUN_00c21270 */
GEN_FRAME ushort GEN_THISCALL F_00c21270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21270u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00c21280 */
GEN_FRAME byte GEN_THISCALL F_00c21280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 3) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00c212c0 */
GEN_FRAME uint GEN_THISCALL F_00c212c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc212c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00c212f0 */
GEN_FRAME uint GEN_THISCALL F_00c212f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc212f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c21300 */
GEN_FRAME byte GEN_THISCALL F_00c21300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c21330 */
GEN_FRAME uint F_00c21330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21330u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00c21370 */
GEN_FRAME uint GEN_STDCALL F_00c21370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c21390 */
GEN_FRAME uint F_00c21390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c213b0 */
GEN_FRAME uint GEN_THISCALL F_00c213b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc213b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = (uint)(byte)(*(char *)((int)this + 0xff0) - 1);
  *param_1 = (uint)*(ushort *)((int)this + uVar2 * 2 + 0xf00);
  iVar1 = uVar2 + 0x78;
  puVar3 = (undefined4 *)(uVar2 * 0x10 + (int)this);
  *param_2 = *(undefined4 *)((int)this + iVar1 * 0x10);
  param_2[1] = *(undefined4 *)((int)this + iVar1 * 0x10 + 4);
  param_2[2] = *(undefined4 *)((int)this + iVar1 * 0x10 + 8);
  *param_3 = *puVar3;
  param_3[1] = puVar3[1];
  param_3[2] = puVar3[2];
  param_3[3] = puVar3[3];
  *(short *)((int)this + 0xff0) = *(short *)((int)this + 0xff0) - 1;
  return 0xffff;
}

/* ref: FUN_00c21420 */
GEN_FRAME uint GEN_THISCALL F_00c21420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  puVar3 = *(uint * PTR32 *)this;
  uVar1 = *(int *)((int)this + 4) - (int)((int)(uintptr_t)puVar3) >> 2;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if ((short)param_1 == *(short *)(*puVar3 + 0xff4)) {
        return *puVar3;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_00c21460 */
GEN_FRAME uint GEN_THISCALL F_00c21460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    puVar1 = *(uint * PTR32 *)((int)this + 0x10);
    do {
      if ((short)param_1 == *(short *)(*puVar1 + 0xff4)) {
        return *puVar1;
      }
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00c214a0 */
GEN_FRAME uint GEN_THISCALL F_00c214a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc214a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    puVar1 = *(uint * PTR32 *)((int)this + 0x20);
    do {
      if ((short)param_1 == *(short *)(*puVar1 + 0xff4)) {
        return *puVar1;
      }
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00c21570 */
GEN_FRAME uint GEN_THISCALL F_00c21570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c21580 */
GEN_FRAME byte GEN_THISCALL F_00c21580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c215a0 */
GEN_FRAME uint F_00c215a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc215a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c215c0 */
GEN_FRAME uint F_00c215c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc215c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c215e0 */
GEN_FRAME unsigned int F_00c215e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc215e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00c21610 */
GEN_FRAME uint GEN_THISCALL F_00c21610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c21620 */
GEN_FRAME uint GEN_THISCALL F_00c21620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c21630 */
GEN_NOFRAME uint GEN_THISCALL F_00c21630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc21630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd7);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00c21670 */
GEN_FRAME uint GEN_STDCALL F_00c21670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c21680 */
GEN_FRAME unsigned int F_00c21680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21680u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00c216b0 */
GEN_NOFRAME uint GEN_THISCALL F_00c216b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc216b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd7);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00c216f0 */
GEN_FRAME uint GEN_THISCALL F_00c216f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc216f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c21750 */
GEN_FRAME unsigned int F_00c21750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21750u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00c21780 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c21780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc21780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00c217b0 */
GEN_FRAME unsigned int GEN_STDCALL F_00c217b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc217b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00c217e0 */
GEN_FRAME uint GEN_THISCALL F_00c217e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc217e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd7);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd7);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00c21890 */
GEN_FRAME uint GEN_THISCALL F_00c21890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00c217e0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00c217e0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00c21900 */
GEN_FRAME uint GEN_THISCALL F_00c21900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00c21890(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00c21890(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00c21970 */
GEN_NOFRAME unsigned int F_00c21970(void)
{
  GEN_ENTER(0xc21970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c21980 */
GEN_NOFRAME uint GEN_THISCALL F_00c21980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc21980u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined2 *)(in_ecx + 0xff0) = 0;
  return in_ecx;
}

/* ref: FUN_00c219a0 */
GEN_NOFRAME uint GEN_THISCALL F_00c219a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc219a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined2 *)(in_ecx + 5) = 0;
  *(undefined1 *)((int)in_ecx + 0x16) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x110effc));
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c219d0 */
GEN_NOFRAME uint GEN_THISCALL F_00c219d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc219d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x1c));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return uVar1;
}

/* ref: FUN_00c219f0 */
GEN_NOFRAME unsigned int F_00c219f0(void)
{
  GEN_ENTER(0xc219f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c21a00 */
GEN_NOFRAME unsigned int F_00c21a00(void)
{
  GEN_ENTER(0xc21a00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c21a10 */
GEN_NOFRAME unsigned int F_00c21a10(void)
{
  GEN_ENTER(0xc21a10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c21a20 */
GEN_FRAME uint GEN_THISCALL F_00c21a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8)));
  uVar1 = iVar2 * 400 - 400 + *(int *)((int)this + 0x1c);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = iVar2 - 1;
    if (*(byte *)(uVar1 + 4) == param_1) break;
    uVar1 = uVar1 - 400;
  }
  return uVar1;
}

/* ref: FUN_00c21a60 */
GEN_FRAME uint GEN_THISCALL F_00c21a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  byte * pbVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8)));
  uVar2 = 0;
  if (0 < iVar1) {
    pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + 4)));
    do {
      if (*pbVar3 == param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 400;
    } while ((int)uVar2 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00c21aa0 */
GEN_FRAME float10 GEN_STDCALL F_00c21aa0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21aa0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)((float)GEN_TOF(((float10)param_1 * (float10)*(float *)(param_2 + 8))));
  fVar2 = (float10)(float)(fVar1 - (float10)1);
  return (float10)((float)GEN_TOF((((((float10)*(float *)(param_2 + 0x14) * fVar2 +
                            (float10)*(float *)(param_3 + 0x10) * fVar1) * fVar2) * (float10)param_1
                          + (float10)*(float *)(param_2 + 0xc)) +
                         ((float10)*(float *)(param_2 + 0xc) - (float10)*(float *)(param_3 + 0xc)) *
                         ((fVar1 * fVar1) * ((fVar2 + fVar2) - (float10)1)))));
}

/* ref: FUN_00c21b10 */
GEN_NOFRAME uint GEN_THISCALL F_00c21b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc21b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x1c));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return uVar1;
}

/* ref: FUN_00c21b30 */
GEN_NOFRAME uint GEN_THISCALL F_00c21b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc21b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar3 = *(uint *)((int)this + 0x18);
  iVar4 = 0;
  if (0 < *(int *)(uVar3 + 8)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)((int)this + 0x1c) + iVar5;
      *(undefined4 *)(iVar2 + 0x150) = uVar1;
      *(undefined4 *)(iVar2 + 0x154) = 0;
      *(undefined4 *)(iVar2 + 0x158) = 0;
      *(undefined4 *)(iVar2 + 0x160) = 0;
      *(undefined4 *)(iVar2 + 0x164) = uVar1;
      *(undefined4 *)(iVar2 + 0x168) = 0;
      *(undefined4 *)(iVar2 + 0x170) = 0;
      *(undefined4 *)(iVar2 + 0x174) = 0;
      *(undefined4 *)(iVar2 + 0x178) = uVar1;
      *(undefined4 *)(iVar2 + 0x180) = 0;
      *(undefined4 *)(iVar2 + 0x184) = 0;
      *(undefined4 *)(iVar2 + 0x188) = 0;
      *(undefined1 *)(iVar2 + 6) = 0;
      uVar3 = *(uint *)((int)this + 0x18);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 400;
    } while (iVar4 < *(int *)(uVar3 + 8));
  }
  return uVar3;
}

/* ref: FUN_00c21bd0 */
GEN_NOFRAME uint GEN_THISCALL F_00c21bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int iVar2;
  uint * puVar3;
  uint * puVar4;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    if (*(char *)((int)param_1 + 6) == '\0') {
      puVar3 = param_1 + 0x44;
      puVar4 = param_1 + 0x34;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      goto LAB_00c21c8f;
    }
    puVar3 = param_1 + 0x54;
  }
  else {
    if (*(char *)((int)param_1 + 6) != '\0') {
      F_004ef350(((undefined1 *)(gen_frame + 0x0)),(uint)(param_1 + 0x44),(uint)(param_1 + 0x54));
      uVar1 = F_004ef350(param_1 + 0x34,(uint)((undefined1 *)(gen_frame + 0x0)),
                           *param_1 * 400 + 0xd0 + *(int *)((int)this + 0x1c));
      goto LAB_00c21c8f;
    }
    puVar3 = ((uint *)GEN_TOP((uVar1 * 400 + 0xd0 + *(int *)((int)this + 0x1c))));
  }
  uVar1 = F_004ef350(param_1 + 0x34,(uint)(param_1 + 0x44),(uint)puVar3);
LAB_00c21c8f: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c21cb0 */
GEN_FRAME uint GEN_THISCALL F_00c21cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc21cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c21bd0(this GEN_EDX_FWD,param_1 * 400 + *(int *)((int)this + 0x1c));
  return uVar1;
}

/* ref: FUN_00c21cd0 */
GEN_FRAME float10 GEN_STDCALL F_00c21cd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xc21cd0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  int * piVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)param_3;
  piVar1 = ((int *)GEN_TOP((*(int *)(param_2 + 8) + param_2)));
  if (fVar4 < (float10)*((float *)GEN_TOP((*(int *)(param_2 + 8) + 4 + param_2)))) {
    return ((float10)GEN_TOD(gen_bits2f(piVar1[3])));
  }
  iVar3 = 1;
  piVar2 = piVar1;
  if (1 < *(int *)(param_2 + 0xc)) {
    do {
      piVar1 = piVar2 + 6;
      if ((((float10)GEN_TOD(gen_bits2f(piVar2[1]))) <= fVar4) &&
         ((!GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(piVar2[7])))) && !GEN_ISNAN(fVar4)) &&
          !(((float10)GEN_TOD(gen_bits2f(piVar2[7]))) <= fVar4))) {
        if (*piVar2 == 0) {
          fVar4 = F_00c21aa0((float)(fVar4 - ((float10)GEN_TOD(gen_bits2f(piVar2[1])))),(uint)piVar2,piVar1);
          return fVar4;
        }
        return (float10)((float)GEN_TOF((((fVar4 - ((float10)GEN_TOD(gen_bits2f(piVar2[1])))) *
                                (((float10)GEN_TOD(gen_bits2f(piVar2[9]))) - ((float10)GEN_TOD(gen_bits2f(piVar2[3]))))) *
                                ((float10)GEN_TOD(gen_bits2f(piVar2[2]))) + ((float10)GEN_TOD(gen_bits2f(piVar2[3]))))));
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar1;
    } while (iVar3 < *(int *)(param_2 + 0xc));
  }
  return ((float10)GEN_TOD(gen_bits2f(piVar1[3])));
}

/* ref: FUN_00c21d70 */
GEN_NOFRAME uint GEN_THISCALL F_00c21d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc21d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  if (param_1 == 0) {
    if ((char)param_3 == '\0') {
      *(undefined4 *)((int)this + 0x150) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x150), REFG(float, 0x1087f04));
      *(undefined4 *)((int)this + 0x154) = 0;
      *(undefined4 *)((int)this + 0x158) = 0;
      *(undefined4 *)((int)this + 0x160) = 0;
      *(undefined4 *)((int)this + 0x164) = uVar4;
      *(undefined4 *)((int)this + 0x168) = 0;
      *(undefined4 *)((int)this + 0x170) = 0;
      *(undefined4 *)((int)this + 0x174) = 0;
      *(undefined4 *)((int)this + 0x178) = uVar4;
      *(undefined4 *)((int)this + 0x180) = 0;
      *(undefined4 *)((int)this + 0x184) = 0;
      *(undefined4 *)((int)this + 0x188) = 0;
      puVar5 = param_2;
    }
    else {
      puVar5 = (undefined4 *)F_004ef0c0((int)this + 0x150 GEN_EDX_FWD,(uint)(param_2 + 4));
    }
    *(undefined4 *)((int)this + 0x180) = uVar1;
    *(undefined4 *)((int)this + 0x184) = uVar2;
    *(undefined4 *)((int)this + 0x188) = uVar3;
    *(undefined1 *)((int)this + 6) = 1;
  }
  else {
    F_004ef0c0(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,(uint)(param_2 + 4));
    (*(undefined4 *)(gen_frame + 0xb0)) = uVar1;
    (*(undefined4 *)(gen_frame + 0xb4)) = uVar2;
    (*(undefined4 *)(gen_frame + 0xb8)) = uVar3;
    puVar5 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xd0);
    puVar7 = ((undefined4 *)(gen_frame + 0x40));
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar5 = (undefined4 *)
             F_004ef350((undefined4 *)((int)this + 0x150),(uint)((undefined1 *)(gen_frame + 0x80)),(uint)((undefined4 *)(gen_frame + 0x40)));
    *(undefined1 *)((int)this + 6) = 1;
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    if ((char)param_3 == '\0') {
      *(undefined4 *)((int)this + 0x150) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x150), REFG(float, 0x1087f04));
      *(undefined4 *)((int)this + 0x154) = 0;
      *(undefined4 *)((int)this + 0x158) = 0;
      *(undefined4 *)((int)this + 0x160) = 0;
      *(undefined4 *)((int)this + 0x164) = uVar1;
      *(undefined4 *)((int)this + 0x168) = 0;
      *(undefined4 *)((int)this + 0x170) = 0;
      *(undefined4 *)((int)this + 0x174) = 0;
      *(undefined4 *)((int)this + 0x178) = uVar1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0) GEN_EDX_ARG);
  return (uint)puVar5;
}

/* ref: FUN_00c21f80 */
GEN_FRAME uint GEN_THISCALL F_00c21f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc21f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  uint * puVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = param_1;
  iVar7 = 0;
  *(int * PTR32 *)((int)this + 0x18) = param_1;
  if (*(int *)((int)this + 0x1c) != 0) {
    F_00406b30(*(int *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  uVar3 = F_00406bb0(-(uint)((int)((ulonglong)(uint)param_1[2] * 400 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_1[2] * 400),0,0);
  *(uint *)((int)this + 0x1c) = uVar3;
  if (0 < param_1[2]) {
    param_1 = (int *)0x0;
    do {
      F_00c22330(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + (int)param_1))) GEN_EDX_ARG);
      param_1 = (int *)((int)param_1 + 400);
      iVar7 = iVar7 + 1;
    } while (iVar7 < piVar2[2]);
  }
  pvVar4 = F_00c48350((undefined *)((int)this + 0x20),0,0x2c);
  iVar7 = 0;
  param_1 = (undefined *)0x0;
  if (0 < piVar2[1]) {
    do {
      iVar6 = *piVar2 + iVar7;
      bVar1 = *(byte *)(iVar6 + 6 + (int)piVar2);
      if (bVar1 != 0xff) {
        puVar5 = ((uint *)GEN_TOP(((uint)bVar1 * 400 + *(int *)((int)this + 0x1c))));
        *(byte *)(puVar5 + 1) = (byte)(*(ushort *)((int)piVar2 + iVar6 + 4) >> 6) & 0x1f;
        *(byte *)((int)puVar5 + 5) =
             (byte)((ushort)*(undefined2 *)((int)piVar2 + iVar6 + 4) >> 0xb) & 0xf;
        bVar1 = *(byte *)((int)piVar2 + iVar6 + 7);
        if (bVar1 == 0xff) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)bVar1;
        }
        *puVar5 = uVar3;
      }
      pvVar4 = (undefined *)((int)param_1 + 1);
      iVar7 = iVar7 + 0x10;
      param_1 = pvVar4;
    } while ((int)pvVar4 < piVar2[1]);
  }
  return (uint)pvVar4;
}

/* ref: FUN_00c22060 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c22060(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xc22060u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(int *)(gen_frame + 0x2c)) = 0;
  if (0 < *((int *)GEN_TOP((*(int *)((int)param_1 + 0x18) + 4)))) {
    (*(int *)(gen_frame + 0x28)) = 0;
    do {
      uVar5 = **(int * PTR32 *)((int)param_1 + 0x18) + (*(int *)(gen_frame + 0x28)) + (int)*(int * PTR32 *)((int)param_1 + 0x18);
      fVar7 = F_00c21cd0((*(int *)(gen_frame + 0x2c)),uVar5,param_2);
      fVar1 = (float)fVar7;
      (*(float *)(gen_frame + 0x24)) = fVar1;
      uVar3 = *(ushort *)(uVar5 + 4) & 0x3f;
      if (uVar3 < 0x30) {
        *((float *)GEN_TOP((*(int *)((int)param_1 + 0x1c) + 8 +
                  ((uint)*(byte *)(uVar5 + 6) * 100 + uVar3) * 4))) = fVar1;
      }
      else {
        *(float *)((int)param_1 + uVar3 * 4 - 0xa0) = fVar1;
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x10;
      iVar4 = (*(int *)(gen_frame + 0x2c)) + 1;
      (*(int *)(gen_frame + 0x2c)) = iVar4;
    } while (iVar4 < *((int *)GEN_TOP((*(int *)((int)param_1 + 0x18) + 4))));
  }
  (*(int *)(gen_frame + 0x28)) = *(int *)((int)param_1 + 0x1c);
  (*(int *)(gen_frame + 0x2c)) = 0;
  if (0 < *((int *)GEN_TOP((*(int *)((int)param_1 + 0x18) + 8)))) {
    pfVar6 = ((float *)GEN_TOP((*(int *)((int)param_1 + 0x1c) + 0x118)));
    do {
      fVar7 = (float10)*(double *)&REFG(undefined, 0x110c810);
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar6[-0x41] * fVar7);
      fVar1 = (float)((float10)pfVar6[-0x40] * fVar7);
      (*(float *)(gen_frame + 0x20)) = fVar1;
      (*(float *)(gen_frame + 0x1c)) = (float)(fVar7 * (float10)pfVar6[-0x3f]);
      fVar2 = ((float)GEN_TOF(((float10)(float)((float10)pfVar6[-0x41] * fVar7) * (float10)REFG(double, 0x1088108))));
      (*(float *)(gen_frame + 0x24)) = fVar2;
      fVar7 = ((float10)GEN_TOD(fsin((float10)fVar2)));
      (*(float *)(gen_frame + 0x18)) = (float)fVar7;
      ((float *)(gen_frame + 0x0))[0] = (float)fVar7;
      ((float *)(gen_frame + 0x0))[1] = 0.0;
      ((float *)(gen_frame + 0x0))[2] = 0.0;
      fVar7 = ((float10)GEN_TOD(fcos((float10)fVar2)));
      (*(float *)(gen_frame + 0x18)) = (float)fVar7;
      ((float *)(gen_frame + 0x0))[3] = (float)fVar7;
      if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
          ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
        F_0054d030(((float *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar1);
      }
      if ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
          ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || (*(float *)(gen_frame + 0x1c)) == *(float *)&REFG(undefined, 0x1088114)))
      {
        F_0054d0f0(((float *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(float *)(gen_frame + 0x1c)));
      }
      F_004ef0c0(pfVar6 - 2 GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x18)) = pfVar6[-0x3d];
      (*(float *)(gen_frame + 0x1c)) = pfVar6[-0x3c];
      (*(float *)(gen_frame + 0x20)) = pfVar6[-0x3b];
      fVar7 = (float10)pfVar6[-0x3d];
      pfVar6[-2] = (float)(fVar7 * (float10)pfVar6[-2]);
      fVar8 = (float10)pfVar6[-0x3c];
      pfVar6[-1] = (float)(fVar8 * (float10)pfVar6[-1]);
      fVar9 = (float10)pfVar6[-0x3b];
      *pfVar6 = (float)(fVar9 * (float10)*pfVar6);
      pfVar6[2] = (float)(fVar7 * (float10)pfVar6[2]);
      pfVar6[3] = (float)((float10)pfVar6[3] * fVar8);
      pfVar6[4] = (float)((float10)pfVar6[4] * fVar9);
      pfVar6[6] = (float)((float10)pfVar6[6] * fVar7);
      pfVar6[7] = (float)(fVar8 * (float10)pfVar6[7]);
      pfVar6[8] = (float)((float10)pfVar6[8] * fVar9);
      pfVar6[10] = (float)((float10)pfVar6[10] * fVar7);
      pfVar6[0xb] = (float)(fVar8 * (float10)pfVar6[0xb]);
      pfVar6[0xc] = (float)(fVar9 * (float10)pfVar6[0xc]);
      pfVar6[10] = pfVar6[-0x44];
      pfVar6[0xb] = pfVar6[-0x43];
      pfVar6[0xc] = pfVar6[-0x42];
      F_00c21bd0(param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)));
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 400;
      iVar4 = (*(int *)(gen_frame + 0x2c)) + 1;
      pfVar6 = pfVar6 + 100;
      (*(int *)(gen_frame + 0x2c)) = iVar4;
    } while (iVar4 < *((int *)GEN_TOP((*(int *)((int)param_1 + 0x18) + 8))));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Element::SchedulerFCurve::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c222c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc222c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c222f0 */
GEN_FRAME uint GEN_THISCALL F_00c222f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc222f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) + param_1 * 0x18 + (int)this;
}

/* ref: FUN_00c22310 */
GEN_FRAME uint GEN_THISCALL F_00c22310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc22310u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx + (int)in_ecx;
}

/* ref: FUN_00c22330 */
GEN_NOFRAME uint GEN_THISCALL F_00c22330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * pvVar2;
  
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined1 *)((int)this + 7) = 1;
  pvVar2 = F_00c48350((undefined *)((int)this + 8),0,0xc0);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0xd0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xd0), REFG(float, 0x1087f04));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = uVar1;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = uVar1;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x150) = uVar1;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = uVar1;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = uVar1;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x110) = uVar1;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = uVar1;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = uVar1;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = uVar1;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  return (uint)pvVar2;
}

/* ref: FUN_00c224e0 */
GEN_FRAME float10 F_00c224e0(float gen_a0)
{
  GEN_ENTER(0xc224e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00c22510 */
GEN_NOFRAME uint GEN_THISCALL F_00c22510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if (*(undefined * PTR32 *)(uVar2 + 4) != (undefined *)0x0) {
    in_ecx = F_00beb670(*(undefined * PTR32 *)(uVar2 + 4) GEN_EDX_FWD);
    uVar2 = 0;
    if (in_ecx != 0) {
      bVar1 = F_00a9f620(in_ecx GEN_EDX_ARG);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00c22530 */
GEN_NOFRAME uint GEN_THISCALL F_00c22530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22530u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined2 *)(in_ecx + 5) = 0;
  *(undefined1 *)((int)in_ecx + 0x16) = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x110f0a8));
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  *(undefined1 *)(in_ecx + 10) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_00c22560 */
GEN_NOFRAME uint GEN_THISCALL F_00c22560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint in_EAX = 0;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x24);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[7];
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_FWD);
    in_EAX = ((GEN_TCODE *)*(gen_code32 *)*piVar2)(piVar2 GEN_EDX_ARG,(uint)(*(char *)((int)piVar2 + 0x16) == '\0'));
    piVar2 = piVar1;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  return in_EAX;
}

/* ref: Client::System::Scheduler::Base::SchedulerTrack::vf1 */
GEN_FRAME byte GEN_THISCALL F_00c225b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc225b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  uint uVar2;
  int * piVar3;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = true;
  if ((this[0x28] != (undefined1)0x0) && (piVar3 = *(int * PTR32 *)(this + 0x24), piVar3 != (int *)0x0)
     ) {
    do {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
        bVar1 = false;
      }
      piVar3 = (int *)piVar3[7];
    } while (piVar3 != (int *)0x0);
    if (!bVar1) {
      return bVar1;
    }
  }
  *(undefined2 *)(this + 8) = 1;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  return bVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTrack::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_00c22630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0xe] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] != (undefined1)0x0) {
    if (this[0x28] != (undefined1)0x0) {
      for (piVar1 = *(int * PTR32 *)(this + 0x24); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
        if ((char)uVar2 == '\0') {
          this[0x12] = (undefined1)0x0;
          return 0;
        }
      }
    }
    *(undefined4 *)(this + 10) = 0x1000000;
    this[0xe] = (undefined1)0x1;
    this[0x12] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
    }
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTrack::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_00c226a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc226a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0xf] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] != (undefined1)0x0) {
    if (this[0x28] != (undefined1)0x0) {
      for (piVar1 = *(int * PTR32 *)(this + 0x24); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
        if ((char)uVar2 == '\0') {
          this[0x13] = (undefined1)0x0;
          return 0;
        }
      }
    }
    this[0xf] = (undefined1)0x1;
    this[0x13] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
    }
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTrack::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_00c22700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] != (undefined1)0x0) {
    if (this[0x28] != (undefined1)0x0) {
      for (piVar1 = *(int * PTR32 *)(this + 0x24); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD);
        if ((char)uVar2 == '\0') {
          this[0x14] = (undefined1)0x0;
          return 0;
        }
      }
    }
    *(undefined4 *)(this + 10) = 0x1000000;
    *(undefined2 *)(this + 0xe) = 0x101;
    this[0x10] = (undefined1)0x1;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
    }
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTrack::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_00c22780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x10] == (undefined1)0x0) {
    this[0x15] = (undefined1)0x0;
    return 0;
  }
  if (this[0x28] != (undefined1)0x0) {
    for (piVar1 = *(int * PTR32 *)(this + 0x24); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') {
        this[0x15] = (undefined1)0x0;
        return 0;
      }
    }
  }
  this[0x11] = (undefined1)0x1;
  this[0x15] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
  }
  return 1;
}

/* ref: FUN_00c227f0 */
GEN_FRAME byte GEN_THISCALL F_00c227f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc227f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x20);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0xc) != 0)) {
    (*(char *)(gen_frame + 0xb)) = '\0';
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x110f09c));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    if (REFG(void * PTR32, 0x14c4ea0) != (undefined *)0x0) {
      bVar1 = F_00b5f7a0(REFG(void * PTR32, 0x14c4ea0) GEN_EDX_FWD,*(int *)(uVar2 + 0xc) + uVar2,&(*(char *)(gen_frame + 0xb)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      uVar2 = (uint)bVar1;
      if (bVar1 != 0) {
        *(bool *)((int)this + 0x28) = (*(char *)(gen_frame + 0xb)) != '\0';
      }
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_00c22850 */
GEN_FRAME byte GEN_THISCALL F_00c22850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc22850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0x28) != '\0') {
    piVar2 = (int *)*param_2;
    if (piVar2 == (int *)0x0) {
      param_2[1] = 0;
      piVar2 = *(int * PTR32 *)((int)this + 0x24);
      if (piVar2 == (int *)0x0) goto LAB_00c2288e;
    }
    do {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xf4))(piVar2 GEN_EDX_FWD,param_1,param_2 + 1);
      if ((char)uVar1 != '\0') {
        *param_2 = (int)piVar2;
        return 1;
      }
      piVar2 = (int *)piVar2[7];
    } while (piVar2 != (int *)0x0);
  }
LAB_00c2288e: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00c228b0 */
GEN_FRAME byte GEN_THISCALL F_00c228b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc228b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0x28) != '\0') {
    piVar2 = (int *)*param_2;
    if (piVar2 == (int *)0x0) {
      param_2[1] = 0;
      piVar2 = *(int * PTR32 *)((int)this + 0x24);
      if (piVar2 == (int *)0x0) goto LAB_00c228ee;
    }
    do {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2 GEN_EDX_FWD,param_1,param_2 + 1);
      if ((char)uVar1 != '\0') {
        *param_2 = (int)piVar2;
        return 1;
      }
      piVar2 = (int *)piVar2[7];
    } while (piVar2 != (int *)0x0);
  }
LAB_00c228ee: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00c22910 */
GEN_FRAME uint GEN_THISCALL F_00c22910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc22910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = *(int *)((int)this + 0x24);
  if (*(int *)((int)this + 0x24) == 0) {
    *piVar4 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)((int)this + 0x24) = param_1;
    return uVar2;
  }
  do {
    iVar3 = iVar1;
    iVar1 = *(int *)(iVar3 + 0x1c);
  } while (*(int *)(iVar3 + 0x1c) != 0);
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(int *)&REFG(undefined, 0x0) = iVar3;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return uVar2;
  }
  *(int *)(iVar3 + 0x1c) = param_1;
  *piVar4 = iVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return uVar2;
}

/* ref: FUN_00c22990 */
GEN_FRAME uint GEN_THISCALL F_00c22990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc22990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1106a98));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c229d0 */
GEN_FRAME uint GEN_THISCALL F_00c229d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc229d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c229e0 */
GEN_FRAME uint GEN_THISCALL F_00c229e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc229e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Base::SchedulerTrack::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c22a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc22a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c22a40 */
GEN_FRAME uint GEN_THISCALL F_00c22a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc22a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this - 0x18;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0x1c);
  } while (*(int *)(iVar2 + 0x1c) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0x1c) = (int)this - 0x18U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 0x18U;
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00c22aa0 */
GEN_FRAME float10 F_00c22aa0(float gen_a0)
{
  GEN_ENTER(0xc22aa0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00c22ac0 */
GEN_NOFRAME uint F_00c22ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc22ac0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float10 fVar1;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  float * pfVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  iVar8 = *(int *)(REFG(int, 0x137104c) + 0x25f8);
  piVar4 = (int *)0x0;
  (*(int *)(gen_frame + 0x24)) = iVar8;
  (*(int * PTR32 *)(gen_frame + 0x20)) = REFG(int * PTR32, 0x1379694);
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(char *)(gen_frame + 0x3f)) = '\0';
  if ((REFG(int, 0x1379c70) == 2) &&
     (piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x98))(param_1 GEN_EDX_ARG))), (char)piVar4 != '\0')) {
    uVar3 = F_00a9faf0(param_1 GEN_EDX_ARG);
    uVar5 = (uint)uVar3;
    if (*(int *)(iVar8 + 0xe8) == 1) {
      F_00a9fae0(param_1 GEN_EDX_ARG);
      uVar3 = F_00a9faf0(param_1 GEN_EDX_ARG);
      uVar5 = (uint)uVar3;
      if (uVar5 == 0) {
        uVar5 = 0x7001;
      }
      (*(char *)(gen_frame + 0x3f)) = '\x01';
    }
    piVar4 = (int *)(uVar5 & 0x7f);
    (*(int * PTR32 *)(gen_frame + 0x30)) = piVar4;
    if ((((piVar4 < (int *)0x12) && (piVar4 != (int *)0x0)) &&
        (*(char *)((int)param_1 + 0x2ea7) != '\0')) && (param_1[0x3b] != 0)) {
      pfVar6 = (float *)F_00a9fb20(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2);
      piVar4 = (int *)param_1[0x3b];
      (*(float *)(gen_frame + 0x10)) = *pfVar6;
      (*(float *)(gen_frame + 0x14)) = pfVar6[1];
      (*(float *)(gen_frame + 0x18)) = pfVar6[2];
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x100))(piVar4 GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x28)) = uVar5;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[0x3b] + 0x100))((int *)param_1[0x3b] GEN_EDX_ARG,1);
      (*(uint *)(gen_frame + 0x2c)) = uVar5;
      if (param_3 == 0) {
        uVar5 = F_00a9fc30(param_1 GEN_EDX_ARG);
        param_3 = ((char)uVar5 != '\0') + 1;
      }
      if (((*(byte *)(param_1[0x3b] + 100) & 0x10) == 0) &&
         (((bVar2 = F_00b7c190(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG), bVar2 == 7 ||
           (bVar2 = F_00b7c190(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG), bVar2 == 8)) ||
          (bVar2 = F_00b7c190(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG), bVar2 == 10)))) {
        (*(int *)(gen_frame + 0x38)) = 1;
      }
      fVar10 = REFG(float, 0x1087f04);
      if (param_1[0x3b] != 0) {
        fVar10 = gen_bits2f(param_1[0x2f]);
      }
      uVar3 = *(ushort *)(param_1 + 0xba9);
      (*(float *)(gen_frame + 0x34)) = fVar10;
      (*(byte *)(gen_frame + 0x3e)) = *(byte *)(param_1 + 0xb6e);
      (*(byte *)(gen_frame + 0x3d)) = *(byte *)((int)param_1 + 0x2e95);
      uVar5 = (*(uint *)(gen_frame + 0x28));
      iVar8 = (*(int *)(gen_frame + 0x38));
      iVar11 = param_3;
      uVar12 = (*(uint *)(gen_frame + 0x2c));
      fVar13 = REFG(float, 0x1090708);
      uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG);
      F_004ea850((*(int *)(gen_frame + 0x24)) GEN_EDX_ARG,(*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)),(*(int * PTR32 *)(gen_frame + 0x30)),(uint)(*(byte *)(gen_frame + 0x3d)),(uint)(*(byte *)(gen_frame + 0x3e)),
                   (uint)uVar3,uVar7 & 0xff,uVar5,iVar8,iVar11,uVar12,fVar13,fVar10);
      uVar5 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0xb1);
      piVar4 = *(int * PTR32 *)(uVar5 + 0x14);
      if (((piVar4 == (int *)0x0) ||
          (((piVar4 == (int *)0x1 && (piVar4 = (*(int * PTR32 *)(gen_frame + 0x20)), (*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0)) &&
           (((*(int * PTR32 *)(gen_frame + 0x20)) == param_1 || ((int *)(*(int * PTR32 *)(gen_frame + 0x20))[0xb80] == param_1)))))) &&
         ((((*(char *)(gen_frame + 0x3f)) == '\0' || (*(byte *)((int)param_1 + 0x8d) < 0x33)) && (param_1[0x3b] != 0))))
      {
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)param_1[0x2f];
        iVar8 = 0;
        fVar9 = F_00a5f1d0(param_1 GEN_EDX_ARG);
        fVar1 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x20)))));
        (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar9 * fVar1))));
        if ((*(int *)(gen_frame + 0x38)) == 1) {
          iVar8 = 0xd5;
        }
        else {
          if ((*(int * PTR32 *)(gen_frame + 0x30)) == (int *)0x1) {
            iVar8 = 0x80;
          }
          if ((*(int * PTR32 *)(gen_frame + 0x30)) == (int *)0x2) {
            iVar8 = 0x82;
          }
          if ((*(int * PTR32 *)(gen_frame + 0x30)) == (int *)0x3) {
            iVar8 = 0x84;
          }
          if ((*(int * PTR32 *)(gen_frame + 0x30)) == (int *)0x7) {
            iVar8 = 0x86;
          }
          if ((*(int * PTR32 *)(gen_frame + 0x30)) == (int *)0x8) {
            iVar8 = 0x88;
          }
          if ((*(int * PTR32 *)(gen_frame + 0x30)) == (int *)0x9) {
            iVar8 = 0x8a;
          }
          if ((*(int * PTR32 *)(gen_frame + 0x30)) == (int *)0xb) {
            iVar8 = 0x8c;
          }
          if (((*(int * PTR32 *)(gen_frame + 0x30)) == (int *)0xc) || ((*(int * PTR32 *)(gen_frame + 0x30)) == (int *)0xd)) {
            iVar8 = 0x8e;
          }
          else if (iVar8 == 0) {
            return (uint)(*(int * PTR32 *)(gen_frame + 0x30));
          }
          if (param_3 == 1) {
            iVar8 = iVar8 + 1;
          }
          if (iVar8 == 0) {
            return (uint)(*(int * PTR32 *)(gen_frame + 0x30));
          }
        }
        piVar4 = (int *)F_00ab44e0(iVar8,&(*(float *)(gen_frame + 0x10)),(float)(fVar9 * fVar1),0);
      }
    }
  }
  return (uint)piVar4;
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00c22de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22de0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xc)));
}

/* ref: FUN_00c22e00 */
GEN_FRAME uint GEN_THISCALL F_00c22e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc22e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  
  F_00b66510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110f148));
  *(int *)((int)this + 0x10) = param_1;
  sVar1 = *(short *)(param_1 + 4);
  *(short *)((int)this + 0xc) = sVar1;
  if (sVar1 == 2) {
    if (2 < *(int *)(param_1 + 0xc)) {
      F_00b66b20(this GEN_EDX_ARG,*(int *)(param_1 + 0xc),*(int *)(param_1 + 8) + param_1,param_2);
      return (uint)this;
    }
    *(undefined2 *)((int)this + 0xc) = 0;
  }
  return (uint)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00c22e60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return **(uint * PTR32 *)(in_ecx + 0x10);
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf7 */
GEN_NOFRAME float10 GEN_THISCALL F_00c22e70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22e70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x10)));
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf8 */
GEN_NOFRAME float10 GEN_THISCALL F_00c22e80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x14)));
}

/* ref: FUN_00c22e90 */
GEN_FRAME float10 GEN_THISCALL F_00c22e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc22e90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0xc + param_2 * 4);
}

/* ref: FUN_00c22ea0 */
GEN_FRAME float10 GEN_THISCALL F_00c22ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc22ea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x18 + param_2 * 4);
}

/* ref: FUN_00c22eb0 */
GEN_FRAME uint GEN_THISCALL F_00c22eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc22eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) + param_1 * 0x24 + (int)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf1 */
GEN_FRAME uint GEN_THISCALL F_00c22ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc22ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x10);
  iVar4 = param_2 * 0x24;
  iVar2 = *(int *)(iVar1 + 8);
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + iVar4 + iVar1)));
  iVar3 = *(int *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar2 + iVar4 + 4 + iVar1);
  param_1[2] = *(undefined4 *)(iVar3 + iVar4 + 8 + iVar1);
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf2 */
GEN_FRAME uint GEN_THISCALL F_00c22f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc22f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x10);
  iVar4 = param_2 * 0x24;
  iVar2 = *(int *)(iVar1 + 8);
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + iVar4 + 0xc + iVar1)));
  iVar3 = *(int *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar2 + iVar4 + 0x10 + iVar1);
  param_1[2] = *(undefined4 *)(iVar3 + iVar4 + 0x14 + iVar1);
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf3 */
GEN_FRAME uint GEN_THISCALL F_00c22f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc22f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x10);
  iVar4 = param_2 * 0x24;
  iVar2 = *(int *)(iVar1 + 8);
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + iVar4 + 0x18 + iVar1)));
  iVar3 = *(int *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar2 + iVar4 + 0x1c + iVar1);
  param_1[2] = *(undefined4 *)(iVar3 + iVar4 + 0x20 + iVar1);
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c22f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc22f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110f148));
  F_00b65520(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c22fd0 */
GEN_FRAME float10 F_00c22fd0(float gen_a0)
{
  GEN_ENTER(0xc22fd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00c22ff0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c22ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc22ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    F_00bef140(*(int *)((int)this + 0x24) GEN_EDX_ARG,0xffffffff);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  *(undefined1 *)((int)this + 0xc0) = 0;
  return;
}

/* ref: Client::System::Scheduler::Control::VfxControl::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_00c23050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x10) == '\0') && (*(char *)(in_ecx + 0xc1) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c23070 */
GEN_NOFRAME unsigned int F_00c23070(void)
{
  GEN_ENTER(0xc23070u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c23090 */
GEN_NOFRAME uint GEN_THISCALL F_00c23090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23090u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined2 *)(in_ecx + 5) = 0;
  *(undefined1 *)((int)in_ecx + 0x16) = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x110f1f4));
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  *(undefined2 *)(in_ecx + 0x30) = 0;
  *(undefined1 *)((int)in_ecx + 0xc2) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c230d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c230d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc230d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110f1f4));
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    F_00bef140(*(int *)((int)this + 0x24) GEN_EDX_ARG,0xffffffff);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  *(undefined1 *)((int)this + 0xc0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return;
}

/* ref: FUN_00c23130 */
GEN_NOFRAME byte GEN_THISCALL F_00c23130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc23130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 8) != '\0') {
    return 1;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_FWD);
    if (*(char *)(uVar2 + 0x65) == '\x03') {
      *(undefined2 *)((int)this + 8) = 1;
      if (*(int *)((int)this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 9))) = 1;
      }
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined2 *)((int)this + 0x14) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c23180 */
GEN_FRAME uint GEN_THISCALL F_00c23180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc23180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0x4fe;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if ((undefined *)((int)this + 0x30) == (undefined *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)F_00bee640((undefined *)((int)this + 0x30) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  *(int * PTR32 *)((int)this + 0x20) = piVar1;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1 GEN_EDX_ARG,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0xc0) = 0;
  return uVar2;
}

/* ref: FUN_00c231e0 */
GEN_FRAME uint GEN_THISCALL F_00c231e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc231e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffe;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  piVar1 = (int *)F_00b61f00(&(*(undefined4 *)(gen_frame + 0x4)));
  *(int * PTR32 *)((int)this + 0x28) = piVar1;
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,param_1);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffe;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  this_00 = (undefined *)F_00406b90(0xb0,0,0);
  if (this_00 == (undefined *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)F_00bef000(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  *(int * PTR32 *)((int)this + 0x24) = piVar1;
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1 GEN_EDX_ARG,1);
  uVar2 = F_00beb760(param_2 GEN_EDX_ARG);
  uVar2 = F_00bef140(*(undefined4 *)((int)this + 0x24) GEN_EDX_ARG,uVar2);
  *(undefined1 *)((int)this + 0xc2) = 1;
  return uVar2;
}

/* ref: FUN_00c23280 */
GEN_NOFRAME uint GEN_THISCALL F_00c23280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xc23280u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  undefined4 uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  float * pfVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x210);
  (*(uint *)(gen_frame + 0x54)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = param_3;
  uVar4 = F_00beb790(param_3 GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x50)) = uVar4;
  bVar3 = F_00beb730(param_3 GEN_EDX_ARG);
  (*(byte *)(gen_frame + 0x5c)) = bVar3;
  if (bVar3 == 0) {
    uVar4 = F_00beb7b0(param_3 GEN_EDX_ARG,0);
  }
  else {
    uVar4 = F_00beb760(param_3 GEN_EDX_ARG);
  }
  (*(uint *)(gen_frame + 0x58)) = uVar4;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)(gen_frame + 0x54)) + 0x20) + 0x34))))(*(int * PTR32 *)((*(uint *)(gen_frame + 0x54)) + 0x20) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x4c)) = uVar4;
  (*(char *)(gen_frame + 0x5f)) = 0;
  (*(char *)(gen_frame + 0x5e)) = 0;
  (*(char *)(gen_frame + 0x5d)) = '\0';
  bVar10 = *(int *)(param_2 + 0x2c) != 0;
  if (bVar10) {
    iVar5 = *(int *)(param_2 + 0x28) + param_2;
    (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP((*(int *)(param_2 + 0x28) + param_2)));
    (*(float *)(gen_frame + 0x14)) = *(float *)(iVar5 + 4);
    (*(float *)(gen_frame + 0x18)) = *(float *)(iVar5 + 8);
    (*(char *)(gen_frame + 0x5f)) = 1;
  }
  bVar11 = *(int *)(param_2 + 0x24) != 0;
  (*(char *)(gen_frame + 0x5f)) = bVar10;
  if (bVar11) {
    iVar5 = *(int *)(param_2 + 0x20);
    uVar12 = *(undefined4 *)(iVar5 + 8 + param_2);
    uVar1 = *(undefined4 *)(iVar5 + 4 + param_2);
    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar5 + param_2);
    (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x38)) = uVar12;
    F_00a1e0d0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)));
    (*(char *)(gen_frame + 0x5e)) = 1;
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar5 = *(int *)(param_2 + 0x18) + param_2;
    (*(undefined4 *)(gen_frame + 0x30)) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x18) + param_2)));
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar5 + 4);
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar5 + 8);
    (*(char *)(gen_frame + 0x5d)) = '\x01';
  }
  (*(char *)(gen_frame + 0x5e)) = bVar11;
  if (*(int *)(param_2 + 0x34) != 0) {
    pfVar6 = ((float *)GEN_TOP((*(int *)(param_2 + 0x30) + param_2)));
    F_0068b780((*(uint *)(gen_frame + 0x4c)) GEN_EDX_ARG,*pfVar6,pfVar6[1],pfVar6[2],GEN_TOF(*((float *)GEN_TOP((*(int *)(param_2 + 0x30) + 0xc + param_2)))));
  }
  F_00990c20(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  if ((*(byte *)(gen_frame + 0x5c)) == 0) {
    F_00982d80(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,0);
    uVar4 = (*(uint *)(gen_frame + 0x58));
    F_00990c50(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x58)),(uint)*(ushort *)(param_2 + 0x12),
                 (uint)*(byte *)(param_2 + 0x11));
    bVar3 = *(byte *)(param_2 + 0x15);
    uVar2 = *(ushort *)(param_2 + 0x16);
  }
  else {
    if (*(char *)((*(uint *)(gen_frame + 0x54)) + 0xc2) != '\0') {
      F_00982d80(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,1);
      uVar4 = (*(uint *)(gen_frame + 0x54));
      F_00982e70(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,*(undefined4 *)((*(uint *)(gen_frame + 0x54)) + 0x24),(uint)*(ushort *)(param_2 + 0x12),
                   (uint)*(byte *)(param_2 + 0x11));
      F_00982ea0(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,*(undefined4 *)(uVar4 + 0x28),(uint)*(ushort *)(param_2 + 0x16),
                   (uint)*(byte *)(param_2 + 0x15));
      goto LAB_00c2359a;
    }
    F_00982d80(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,0);
    uVar4 = (*(uint *)(gen_frame + 0x58));
    if ((*(uint *)(gen_frame + 0x50)) == 0) {
      F_00990c50(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x58)),(uint)*(ushort *)(param_2 + 0x12),
                   (uint)*(byte *)(param_2 + 0x11));
      bVar3 = *(byte *)(param_2 + 0x15);
      uVar2 = *(ushort *)(param_2 + 0x16);
    }
    else {
      bVar3 = *(byte *)(param_2 + 0x10);
      if (((bVar3 == 0) || (bVar3 == 1)) || (99 < bVar3)) {
        bVar3 = *(byte *)(param_2 + 0x11);
        uVar2 = *(ushort *)(param_2 + 0x12);
      }
      else {
        uVar4 = F_00beb7b0(param_3 GEN_EDX_ARG,0);
        bVar3 = *(byte *)(param_2 + 0x11);
        uVar2 = *(ushort *)(param_2 + 0x12);
      }
      F_00990c50(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,uVar4,(uint)uVar2,(uint)bVar3);
      if (((*(char *)(param_2 + 0x14) != '\0') && (*(char *)(param_2 + 0x14) != '\x01')) &&
         (*(byte *)(param_2 + 0x10) < 100)) {
        uVar4 = 0;
        if ((*(uint *)(gen_frame + 0x50)) != 0) {
          do {
            uVar7 = F_00beb7b0((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,uVar4);
            F_00990ca0(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,uVar7,(uint)*(ushort *)(param_2 + 0x16),
                         (uint)*(byte *)(param_2 + 0x15));
            uVar4 = uVar4 + 1;
          } while (uVar4 < (*(uint *)(gen_frame + 0x50)));
        }
        goto LAB_00c2359a;
      }
      bVar3 = *(byte *)(param_2 + 0x15);
      uVar2 = *(ushort *)(param_2 + 0x16);
      uVar4 = (*(uint *)(gen_frame + 0x58));
    }
  }
  F_00990ca0(((undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,uVar4,(uint)uVar2,(uint)bVar3);
LAB_00c2359a: ;
  if ((*(char *)(gen_frame + 0x5d)) == '\0') {
    ((undefined4 *)(gen_frame + 0x1c0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x1c0))[0], REFG(float, 0x1087f04));
    (*(undefined4 *)(gen_frame + 0x1d4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    uVar12 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  }
  else {
    (*(undefined4 *)(gen_frame + 0x1d4)) = (*(undefined4 *)(gen_frame + 0x34));
    ((undefined4 *)(gen_frame + 0x1c0))[0] = (*(undefined4 *)(gen_frame + 0x30));
    uVar12 = (*(undefined4 *)(gen_frame + 0x38));
  }
  (*(float *)(gen_frame + 0x1f8)) = 0.0;
  (*(float *)(gen_frame + 0x1f4)) = 0.0;
  (*(float *)(gen_frame + 0x1f0)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x1e8)) = uVar12;
  (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  ((undefined4 *)(gen_frame + 0x1c0))[2] = 0;
  ((undefined4 *)(gen_frame + 0x1c0))[1] = 0;
  if ((*(char *)(gen_frame + 0x5e)) != '\0') {
    F_004efe70(((undefined4 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x0)));
  }
  if ((*(char *)(gen_frame + 0x5f)) != '\0') {
    (*(float *)(gen_frame + 0x1f0)) = (float)((float10)(*(float *)(gen_frame + 0x1f0)) + (float10)(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x1f4)) = (float)((float10)(*(float *)(gen_frame + 0x1f4)) + (float10)(*(float *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x1f8)) = (float)((float10)(*(float *)(gen_frame + 0x1f8)) + (float10)(*(float *)(gen_frame + 0x18)));
  }
  puVar8 = ((undefined4 *)(gen_frame + 0x1c0));
  puVar9 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  F_0068b5d0((*(uint *)(gen_frame + 0x4c)) GEN_EDX_ARG,(float)(float10)1,param_4,((undefined4 *)(gen_frame + 0x60)),2,0);
  uVar4 = (*(uint *)(gen_frame + 0x54));
  *(undefined1 *)((*(uint *)(gen_frame + 0x54)) + 0x10) = 0;
  *(undefined1 *)((*(uint *)(gen_frame + 0x54)) + 0x14) = 0;
  *(undefined1 *)((*(uint *)(gen_frame + 0x54)) + 0xc0) = 0;
  *(undefined4 *)((*(uint *)(gen_frame + 0x54)) + 0xc) = 0;
  *(undefined2 *)((*(uint *)(gen_frame + 0x54)) + 0x12) = 0;
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)(uint)(gen_frame + 0x210) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00c236d0 */
GEN_NOFRAME uint GEN_THISCALL F_00c236d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xc236d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  F_00990c20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x20) + 0x34))))(*(int * PTR32 *)(param_1 + 0x20) GEN_EDX_ARG);
  F_00982d80(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar2 = F_00beb650(param_3 GEN_EDX_ARG);
  F_00982e70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2,(uint)*(ushort *)(param_2 + 0x1c),(uint)*(byte *)(param_2 + 0x19));
  if (*(int *)(param_2 + 0x14) != -1) {
    uVar2 = F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*(int *)(param_2 + 0x14),0,0);
    F_00982ea0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2,(uint)*(ushort *)(param_2 + 0x1e),(uint)*(byte *)(param_2 + 0x1a));
  }
  uVar1 = F_0068b5d0(uVar1 GEN_EDX_ARG,(float)(float10)1,
                       ((float)GEN_TOF(((float10)*(ushort *)(param_2 + 0x20) + (float10)param_4))),((undefined1 *)(gen_frame + 0x0)),2,
                       0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170) GEN_EDX_ARG);
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00c23800 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c23800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float fVar2;
  
  if (((*(char *)((int)this + 0x10) == '\0') && (*(char *)((int)this + 0xc1) == '\0')) &&
     (*(char *)((int)this + 0xc) == '\0')) {
    fVar2 = (float)(float10)0;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x34))))(*(int * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
    F_00699cb0(uVar1 GEN_EDX_ARG,fVar2);
    *(undefined4 *)((int)this + 10) = 0x1010000;
    *(undefined1 *)((int)this + 0xc0) = 1;
  }
  return;
}

/* ref: FUN_00c23840 */
GEN_NOFRAME uint GEN_THISCALL F_00c23840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  float fVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    fVar2 = (float)(float10)0;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x34))))(*(int * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
    in_EAX = F_0068b730(uVar1 GEN_EDX_ARG,fVar2);
    *(undefined1 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 0xd) = 1;
    *(undefined1 *)((int)this + 10) = 0;
    *(undefined1 *)((int)this + 0xb) = 0;
  }
  *(undefined1 *)((int)this + 0xc0) = 0;
  return in_EAX;
}

/* ref: FUN_00c23880 */
GEN_NOFRAME byte GEN_THISCALL F_00c23880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  float fVar2;
  
  if ((*(char *)((int)this + 0x10) == '\0') && (*(char *)((int)this + 0xc1) == '\0')) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 0xc) != '\0')) {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x34))))
                                  (*(int * PTR32 *)((int)this + 0x20) GEN_EDX_ARG)));
      uVar1 = F_0068b710(this_00 GEN_EDX_ARG);
      if ((char)uVar1 == '\0') {
        fVar2 = (float)(float10)0;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x34))))(*(int * PTR32 *)((int)this + 0x20) GEN_EDX_ARG);
        F_0068b730(uVar1 GEN_EDX_ARG,fVar2);
        *(undefined1 *)((int)this + 0xc) = 0;
        *(undefined1 *)((int)this + 10) = 0;
        *(undefined1 *)((int)this + 0xb) = 0;
        *(undefined1 *)((int)this + 0xc0) = 0;
        *(undefined1 *)((int)this + 0xd) = 1;
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00c238f0 */
GEN_FRAME uint GEN_THISCALL F_00c238f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc238f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint in_EAX = 0;
  undefined * this_00;
  uint uVar2;
  float fVar3;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    piVar1 = *(int * PTR32 *)((int)this + 0x20);
    if (param_2 != 0) {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_FWD)));
      uVar2 = F_0068b6f0(this_00 GEN_EDX_ARG,param_1,param_2);
      return uVar2;
    }
    fVar3 = (float)(float10)0;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_ARG);
    in_EAX = F_0068b730(uVar2 GEN_EDX_ARG,fVar3);
    *(undefined4 *)((int)this + 10) = 0x1000000;
    *(undefined1 *)((int)this + 0xc0) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00c23960 */
GEN_FRAME float GEN_THISCALL F_00c23960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc23960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((float *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00c23980 */
GEN_FRAME float GEN_THISCALL F_00c23980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc23980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((float *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00c239a0 */
GEN_FRAME float GEN_THISCALL F_00c239a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc239a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((float *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00c239c0 */
GEN_FRAME float GEN_THISCALL F_00c239c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc239c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((float *)GEN_TOP((*(int *)((int)this + 0x30) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Control::VfxControl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c239e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc239e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c230d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

