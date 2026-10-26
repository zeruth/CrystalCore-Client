#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c1a520 */
uint F_00c1a520(unsigned int gen_a0)
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
uint F_00c1a550(unsigned int gen_a0)
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
uint F_00c1a5d0(unsigned int gen_a0)
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
uint F_00c1a620(unsigned int gen_a0)
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
uint F_00c1a670(unsigned int gen_a0)
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
uint F_00c1a740(unsigned int gen_a0)
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
uint F_00c1a810(unsigned int gen_a0)
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
uint F_00c1a8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c1a9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a9a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c1a8d0(param_1,1,&REFG(undefined, 0x1348ae8));
  return uVar1;
}

/* ref: FUN_00c1a9c0 */
uint F_00c1a9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1a9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c1a8d0(param_1,2,&REFG(undefined, 0x1348aec));
  return uVar1;
}

/* ref: FUN_00c1a9e0 */
uint F_00c1a9e0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c1aa50(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((int *)(gen_frame + 0x0)));
      return (uint)(uVar4 != 0);
    }
    pcVar2 = _Buf;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(_Buf + 1);
    if ((iVar3 != 0) && (_Buf[iVar3 + -1] == '\n')) break;
    ((int *)(gen_frame + 0x0))[0] = ((int *)(gen_frame + 0x0))[0] + iVar3;
    _Buf = (char *)F_00b9bef0(((int *)(gen_frame + 0x0)));
    pcVar2 = F_00c5281f(_Buf,0x200,in_edi);
  }
  ((int *)(gen_frame + 0x0))[0] = ((int *)(gen_frame + 0x0))[0] + -1 + iVar3;
  F_00b9bfc0(((int *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((int *)(gen_frame + 0x0)));
  return 1;
}

/* ref: FUN_00c1ab40 */
uint F_00c1ab40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((int *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00c1abf0 */
uint F_00c1abf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      local_4 = local_4 + -1;
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
          uVar2 = F_00c1ab40(this,in_esi,in_eax);
        }
      }
      else {
        pcVar5 = (char *)F_00b9abf0(in_esi,iVar6,0);
        if ((pcVar5 == (char *)0x0) || (*pcVar5 != '*')) {
          F_00b9c590(in_esi,iVar6,((char *)REFP(0x1348b0c)));
        }
        cVar1 = pcVar5[1];
        if (cVar1 == 'a') {
          F_00c1ab40((undefined *)0xffffffff,in_esi,in_eax);
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
          uVar2 = F_00c1a9e0(in_eax,in_esi);
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
uint F_00c1ad90(unsigned int gen_a0)
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
uint F_00c1ade0(unsigned int gen_a0)
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
uint F_00c1ae20(unsigned int gen_a0)
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
uint F_00c1aec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    (*(int *)(gen_frame + 0xc)) = iVar3 + -1;
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
uint F_00c1afb0(unsigned int gen_a0)
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
uint F_00c1b000(unsigned int gen_a0)
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
uint F_00c1b040(unsigned int gen_a0)
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
uint F_00c1b0f0(unsigned int gen_a0)
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
uint F_00c1b1a0(unsigned int gen_a0)
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
uint F_00c1b240(unsigned int gen_a0)
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
uint F_00c1b3c0(unsigned int gen_a0)
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
uint F_00c1b610(unsigned int gen_a0)
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
uint F_00c1b660(unsigned int gen_a0)
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
uint F_00c1b740(unsigned int gen_a0)
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
uint F_00c1b7d0(unsigned int gen_a0)
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
uint F_00c1b860(unsigned int gen_a0)
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
uint F_00c1b900(unsigned int gen_a0)
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
uint F_00c1b930(unsigned int gen_a0)
{
  GEN_ENTER(0xc1b930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9c7a0(param_1,1,5);
  F_00b9bbd0(param_1,((char *)REFP(0x1348c54)));
  F_00b9a910(param_1,1);
  return 1;
}

/* ref: FUN_00c1b960 */
uint F_00c1b960(unsigned int gen_a0)
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
uint F_00c1ba00(unsigned int gen_a0)
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
uint F_00c1bad0(unsigned int gen_a0)
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
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00c1bcc0 */
unsigned int F_00c1bcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
        return 0;
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
        return 0;
      }
      F_00b9b110(param_1,1,iVar5);
      F_00b9a910(param_1,0xffffffff);
      iVar2 = param_3 + -1;
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
          iVar4 = iVar4 + -1;
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
  return 0;
}

/* ref: FUN_00c1c0c0 */
uint F_00c1c0c0(unsigned int gen_a0)
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
uint F_00c1c120(unsigned int gen_a0)
{
  GEN_ENTER(0xc1c120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9cd70(param_1,((char *)REFP(0x1348d5c)),&REFG(undefined * PTR32, 0x110ec70));
  return 1;
}

/* ref: FUN_00c1c140 */
uint F_00c1c140(unsigned int gen_a0)
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
      F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)((CHAR *)(gen_frame + 0x4)));
      return uVar3;
    }
  }
  uVar3 = F_00b9bbd0(in_esi,((char *)REFP(0x1348d64)));
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)((CHAR *)(gen_frame + 0x4)));
  return uVar3;
}

/* ref: FUN_00c1c1f0 */
uint F_00c1c1f0(unsigned int gen_a0)
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
    F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)((CHAR *)(gen_frame + 0xc)));
    return uVar2;
  }
  uVar2 = F_00b9af00(in_edi,((char *)REFP(0x1348d88)),dwMessageId);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)((CHAR *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_00c1c2d0 */
uint F_00c1c2d0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c1c370(unsigned int gen_a0)
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
uint F_00c1c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c1c410(unsigned int gen_a0)
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
uint F_00c1c4b0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c1c520(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c1c630(unsigned int gen_a0)
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
uint F_00c1c800(unsigned int gen_a0)
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
uint F_00c1c870(unsigned int gen_a0)
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
uint F_00c1ca20(unsigned int gen_a0)
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
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00c1caa0 */
unsigned int F_00c1caa0(unsigned int gen_a0, unsigned int gen_a1)
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
  return 0;
}

/* ref: FUN_00c1cae0 */
uint F_00c1cae0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c1cb40(unsigned int gen_a0)
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
uint F_00c1cc20(unsigned int gen_a0)
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
uint F_00c1cce0(unsigned int gen_a0)
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
uint F_00c1cec0(unsigned int gen_a0)
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
uint F_00c1cf90(unsigned int gen_a0)
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
uint F_00c1d0b0(unsigned int gen_a0)
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
uint F_00c1d110(unsigned int gen_a0)
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
uint F_00c1d160(unsigned int gen_a0)
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
uint F_00c1d1e0(unsigned int gen_a0, unsigned int gen_a1)
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
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)));
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
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_00c1d2b0 */
uint F_00c1d2b0(unsigned int gen_a0)
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
uint F_00c1d300(unsigned int gen_a0)
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
uint F_00c1d3a0(unsigned int gen_a0)
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
uint F_00c1d3d0(unsigned int gen_a0)
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
uint F_00c1d410(unsigned int gen_a0)
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
uint F_00c1d450(unsigned int gen_a0)
{
  GEN_ENTER(0xc1d450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9b730(param_1,3,0);
  F_00b9ae00(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c1d470 */
uint F_00c1d470(unsigned int gen_a0)
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
uint F_00c1d510(unsigned int gen_a0)
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
uint F_00c1d540(unsigned int gen_a0)
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
uint F_00c1d580(unsigned int gen_a0)
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
uint F_00c1d5c0(unsigned int gen_a0)
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
uint F_00c1d600(unsigned int gen_a0)
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
uint F_00c1d670(unsigned int gen_a0)
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
uint F_00c1d6d0(unsigned int gen_a0)
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
uint F_00c1d710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c1d790(unsigned int gen_a0)
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
uint F_00c1d7f0(unsigned int gen_a0)
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
uint F_00c1d840(unsigned int gen_a0)
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
uint F_00c1d890(unsigned int gen_a0)
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
uint F_00c1d930(unsigned int gen_a0)
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
uint F_00c1d9b0(unsigned int gen_a0)
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
uint F_00c1da00(unsigned int gen_a0)
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
uint F_00c1da50(unsigned int gen_a0)
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
uint F_00c1db50(unsigned int gen_a0)
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
uint F_00c1dc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1dc30u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  if (param_2 == in_esi) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8)) ^ (uint)((undefined1 *)(gen_frame + 0x8)));
    return 0;
  }
  uVar1 = F_00b9b720(in_esi);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)));
      return 3;
    }
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)));
    return 1;
  }
  uVar1 = F_00c01ae0(in_esi,0,((undefined1 *)(gen_frame + 0x8)));
  if (0 < (int)uVar1) {
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)));
    return 2;
  }
  uVar1 = F_00b9a750(in_esi);
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)));
  return (-(uint)(uVar1 != 0) & 0xfffffffe) + 3;
}

/* ref: FUN_00c1dce0 */
uint F_00c1dce0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1dce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9ad30(param_1,1);
  if (uVar1 == 0) {
    F_00b9c590(param_1,1,((char *)REFP(0x134946c)));
  }
  uVar1 = F_00c1dc30(uVar1,param_1);
  F_00b9ae60(param_1,(&REFG(undefined * PTR32, 0x110ee10))[uVar1]);
  return 1;
}

/* ref: FUN_00c1dd30 */
uint F_00c1dd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    F_00b9af00(in_edi,((char *)REFP(0x13494a0)),(&REFG(undefined * PTR32, 0x110ee10))[uVar1]);
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

/* ref: FUN_00c1dd7f */
uint F_00c1dd7f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1dd7fu, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ebx = (undefined4)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  F_00b9a680(in_edi,in_esi,in_ebx);
  F_00b9a6d0(in_edi,in_esi);
  uVar1 = F_00bb9700(in_esi,in_ebx);
  if ((uVar1 != 0) && (uVar1 != 1)) {
    F_00b9a680(in_esi,in_edi,1);
    return 0xffffffff;
  }
  uVar1 = F_00b9a750(in_esi);
  uVar2 = F_00b9a610(in_edi,uVar1 + 1);
  if (uVar2 == 0) {
    F_00b9bbd0(in_edi,((char *)REFP(0x13494bc)));
  }
  F_00b9a680(in_esi,in_edi,uVar1);
  return uVar1;
}

/* ref: FUN_00c1ddf0 */
uint F_00c1ddf0(unsigned int gen_a0)
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
uint F_00c1de70(unsigned int gen_a0)
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
uint F_00c1dee0(unsigned int gen_a0)
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
uint F_00c1df40(unsigned int gen_a0)
{
  GEN_ENTER(0xc1df40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c1dee0(param_1);
  F_00b9af30(param_1,((code *)REFP(0xc1de70)),1);
  return 1;
}

/* ref: FUN_00c1df70 */
uint F_00c1df70(unsigned int gen_a0)
{
  GEN_ENTER(0xc1df70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9a750(param_1);
  uVar1 = F_00bb91c0(param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00c1df90 */
uint F_00c1df90(unsigned int gen_a0)
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
uint F_00c1dff0(unsigned int gen_a0)
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
uint F_00c1e0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e0f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c1dff0(param_1);
  F_00b9cd70(param_1,((char *)REFP(0x1349578)),&REFG(undefined * PTR32, 0x110ee20));
  return 2;
}

/* ref: Client::System::Animation::Wind_Directional::vf1 */
byte F_00c1e150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
byte F_00c1e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      F_0046f390(param_1);
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
uint F_00c1e320(unsigned int gen_a0)
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
uint F_00c1e380(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c1e390 */
unsigned int F_00c1e390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
unsigned int F_00c1e3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c1e3d0(void)
{
  GEN_ENTER(0xc1e3d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Animation::Wind_Directional::vf0 */
uint F_00c1e3f0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c1e420(void)
{
  GEN_ENTER(0xc1e420u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c1e440 */
uint F_00c1e440(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c1e470(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e470u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110ee8c));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c1e490 */
unsigned int F_00c1e490(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e490u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110ee8c));
  return 0;
}

/* ref: FUN_00c1e4a0 */
unsigned int F_00c1e4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e4a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1104898));
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintBase::vf4 */
unsigned int F_00c1e4c0(void)
{
  GEN_ENTER(0xc1e4c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c1e4d0 */
uint F_00c1e4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e4d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c28a70(in_ecx,1);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eebc));
  return (uint)in_ecx;
}

/* ref: FUN_00c1e500 */
byte F_00c1e500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xc1e500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  byte bVar1;
  
  bVar1 = F_00c28a90(param_1,param_2);
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
unsigned int F_00c1e550(unsigned int gen_a0)
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
unsigned int F_00c1e5d0(unsigned int gen_a0, float gen_a1)
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
uint F_00c1e650(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_0063a290(*(undefined * PTR32 *)(this + 4),((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(this + 0xc));
  uVar1 = F_004ee970(this + 0x30,this + 0x10,((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1;
}

/* ref: FUN_00c1e6b0 */
uint F_00c1e6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e6b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Physics::ConstraintBase::vf0 */
uint F_00c1e6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::vf0 */
uint F_00c1e700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00c1e730 */
uint F_00c1e730(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e730u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c28a70(in_ecx,2);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eed4));
  return (uint)in_ecx;
}

/* ref: FUN_00c1e760 */
byte F_00c1e760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc1e760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00c28a90(this,param_1);
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
uint F_00c1e7b0(unsigned int gen_a0)
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
uint F_00c1e7d0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c1e7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_0063a290(*(undefined * PTR32 *)(this + 4),((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(this + 0xc));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),this + 0x10,((undefined1 *)(gen_frame + 0x10)));
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *(undefined4 *)(this + 0x30) = *puVar3;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)puVar3;
}

/* ref: Client::Graphics::Physics::ConstraintPin::vf0 */
uint F_00c1e870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00c1e8a0 */
byte F_00c1e8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xc1e8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  byte bVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    bVar1 = F_00c28a90(param_1,param_2);
    if (bVar1 != 0) {
      *(float *)((int)param_1 + 0x14) = param_5;
      *(int *)((int)param_1 + 0x10) = param_4;
      *(float *)((int)param_1 + 0x18) = param_6;
      *(int *)((int)param_1 + 0xc) = param_3;
      *(float *)((int)param_1 + 0x1c) = param_7;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::vf2 */
uint F_00c1e900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1e900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  return uVar1;
}

/* ref: FUN_00c1e910 */
uint F_00c1e910(unsigned int gen_a0)
{
  GEN_ENTER(0xc1e910u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_00c28a70(in_ecx,0);
  in_ecx[5] = 0;
  uVar1 = REFG(float, 0x1087f04);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eeec));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = uVar1;
  in_ecx[7] = uVar1;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::vf3 */
unsigned int F_00c1e960(unsigned int gen_a0)
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
uint F_00c1eaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1eaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Object::CharacterPapList::vf1 */
byte F_00c1eb70(unsigned int gen_a0)
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
    iVar3 = iVar3 + -1;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if ((char)uVar1 == '\0') break;
    piVar2 = piVar2 + 0x16;
  }
  return 0;
}

/* ref: FUN_00c1eba0 */
unsigned int F_00c1eba0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1eba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  iVar3 = *(int *)((int)this + 0x18);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if ((char)uVar1 == '\0') {
      *(undefined1 *)((int)piVar2 + 0x51) = 1;
    }
    piVar2 = piVar2 + 0x16;
  }
  return 0;
}

/* ref: FUN_00c1ebd0 */
byte F_00c1ebd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1ebd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char * pcVar2;
  
  iVar1 = *(int *)((int)this + 0x18);
  if (iVar1 != 0) {
    pcVar2 = ((char *)GEN_TOP((*(int *)((int)this + 0xc) + 0x51)));
    do {
      iVar1 = iVar1 + -1;
      if (*pcVar2 != '\0') {
        return 1;
      }
      pcVar2 = pcVar2 + 0x58;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00c1ec00 */
uint F_00c1ec00(unsigned int gen_a0)
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
    iVar2 = iVar2 + -1;
    uVar1 = F_00c28bb0(in_ecx_00);
    if (uVar1 != 0) break;
    in_ecx_00 = in_ecx_00 + 0x58;
  }
  return uVar1;
}

/* ref: FUN_00c1ec30 */
byte F_00c1ec30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  bVar1 = F_00c28bc0(*(undefined * PTR32 *)((int)this + 0xc),param_1,param_2,param_3);
  return bVar1 != 0;
}

/* ref: FUN_00c1ec60 */
byte F_00c1ec60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ec60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x10) == param_2;
}

/* ref: FUN_00c1ec70 */
uint F_00c1ec70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
        this_01 = (undefined *)F_00c28c80(this_00,param_1);
      }
      F_00c28ce0(this_01,iVar1 + param_2 + iVar2);
      param_2 = param_2 + 0xc;
      local_8 = local_8 + 1;
      this_00 = (undefined *)((int)this_00 + 0x58);
    } while (local_8 < *(int *)(iVar2 + 8));
  }
  return (uint)this;
}

/* ref: FUN_00c1ed00 */
uint F_00c1ed00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    this_01 = (undefined *)F_00c28c80(this_00,param_1);
  }
  F_00c28fa0(this_01,param_2,param_3,param_4);
  return (uint)this;
}

/* ref: FUN_00c1ed60 */
uint F_00c1ed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ed60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Object::CharacterPapList::vf0 */
uint F_00c1ed80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ed80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * this_00;
  int iVar1;
  
  this_00 = *(undefined4 * PTR32 *)(this + 0xc);
  iVar1 = *(int *)(this + 0x18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110ef04));
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    F_00c28b70(this_00);
    ((code *)*(gen_code32 *)*this_00)(this_00,0);
    this_00 = this_00 + 0x16;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c1ee60 */
uint F_00c1ee60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ee60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00c1ee70 */
unsigned int F_00c1ee70(float gen_a0)
{
  GEN_ENTER(0xc1ee70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00c1ee90 */
uint F_00c1ee90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1ee90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00c1f1f0 */
unsigned int F_00c1f1f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc1f1f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (*(int * PTR32 *)(param_1 + 0x58) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x58) + 0xc))))((undefined4)gen_fl2bits(param_2));
      F_00bba6a0(*(undefined * PTR32 *)(param_1 + 0x58),param_1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(float *)(param_1 + 0x44) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 4;
  }
  return 0;
}

/* ref: FUN_00c1f2f0 */
unsigned int F_00c1f2f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xc1f2f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(uint *)(param_1 + 0x1c) =
       *(uint *)(param_1 + 0x1c) ^ ((param_2 & 0xff) * 2 ^ *(uint *)(param_1 + 0x1c)) & 2;
  fVar1 = param_3;
  if ((char)param_2 != '\0') {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x38) = fVar1;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (*(int * PTR32 *)(param_1 + 0x58) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x58) + 0xc))))((undefined4)gen_fl2bits(param_3));
      F_00bba6a0(*(undefined * PTR32 *)(param_1 + 0x58),param_1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(float *)(param_1 + 0x44) = param_3;
    *(undefined4 *)(param_1 + 0x18) = 4;
  }
  return 0;
}

/* ref: FUN_00c1f3a0 */
unsigned int F_00c1f3a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc1f3a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(param_1 + 0x3c) = param_2;
  if (((*(byte *)(param_1 + 0x1c) & 0x20) == 0) && (*(int *)(param_1 + 0x58) != 0)) {
    F_00bba240(*(int *)(param_1 + 0x58),param_2);
  }
  return 0;
}

/* ref: FUN_00c1f3e0 */
unsigned int F_00c1f3e0(unsigned int gen_a0, float gen_a1)
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
    F_00bba270(*(int *)(param_1 + 0x58),
                 (float)((float10)param_2 / (float10)*(double *)&REFG(undefined, 0x1088070)));
  }
  return 0;
}

/* ref: FUN_00c1f440 */
unsigned int F_00c1f440(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc1f440u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x58) != 0) {
    F_00bba700(*(int *)(param_1 + 0x58),param_2);
  }
  return 0;
}

/* ref: FUN_00c1f460 */
float10 F_00c1f460(unsigned int gen_a0)
{
  GEN_ENTER(0xc1f460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x58) != 0) {
    return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x58) + 0x3c)));
  }
  return (float10)0;
}

/* ref: FUN_00c1f470 */
uint F_00c1f470(unsigned int gen_a0)
{
  GEN_ENTER(0xc1f470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x48) + 0x8c)));
}

/* ref: FUN_00c1f480 */
double F_00c1f480(unsigned int gen_a0)
{
  GEN_ENTER(0xc1f480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double dVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x58) != (undefined *)0x0) {
    dVar1 = F_00bba2a0(*(undefined * PTR32 *)((int)this + 0x58));
    return (double)(float)((float10)dVar1 * (float10)*(double *)&REFG(undefined, 0x1088070));
  }
  return 0.0;
}

/* ref: FUN_00c1f520 */
byte F_00c1f520(unsigned int gen_a0, unsigned int gen_a1)
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
    dVar1 = F_00bba2a0(*(undefined * PTR32 *)((int)this + 0x58));
    local_8 = (float)((float10)dVar1 * (float10)*(double *)&REFG(undefined, 0x1088070));
  }
  if ((float10)local_8 < ((float10)GEN_TOD((*(int *)((int)this + 0x2c) - param_1)))) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf1 */
unsigned int F_00c1f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf2 */
uint F_00c1f580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc1f580u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  float fVar2;
  
  uVar1 = param_5;
  if ((-1 < (int)param_5) && (param_5 == *(uint *)(param_1 + 0x24))) {
    if (*(undefined * PTR32 *)(param_1 + 0x58) != (undefined *)0x0) {
      F_00bba6a0(*(undefined * PTR32 *)(param_1 + 0x58),param_1);
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
uint F_00c1f5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc1f5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00bbaf90(*(undefined * PTR32 *)(this + 0x4c));
  if (uVar1 != 0) {
    F_00aa0740(param_2,param_3);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf4 */
unsigned int F_00c1f620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x21) = 1;
  return 0;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf5 */
unsigned int F_00c1f630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x21) = 0;
  return 0;
}

/* ref: FUN_00c1f640 */
uint F_00c1f640(unsigned int gen_a0, unsigned int gen_a1)
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
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 100))(piVar5)));
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
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3)));
    piVar6 = piVar3;
    this_00 = piVar3;
  } while (piVar4 != (int *)0x0);
LAB_00c1f6e7: ;
  if (this_00 != (int *)0x0) {
    piVar4 = (int *)F_00bc3440(this_00,4,param_1,0);
  }
  return (uint)piVar4;
}

/* ref: FUN_00c1f710 */
unsigned int F_00c1f710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & 0xfffffffe;
  if (*(int *)((int)this + 0x10) != 0) {
    F_00bc5400(*(undefined * PTR32 *)((int)this + 0x14),*(int *)((int)this + 0x10));
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
uint F_00c1f760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
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
unsigned int F_00c1f7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1f7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110ef94));
  if ((*(int *)((int)this + 0x18) == 3) && ((*(byte *)((int)this + 0x1c) & 1) == 0)) {
    if (*(int * PTR32 *)((int)this + 0x58) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0xc))))((undefined4)gen_fl2bits((float)(float10)0));
      F_00bba6a0(*(undefined * PTR32 *)((int)this + 0x58),this);
      *(undefined4 *)((int)this + 0x58) = 0;
    }
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 1;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x18) = 4;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
  return 0;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf0 */
uint F_00c1f850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110ef94));
  if ((*(int *)(this + 0x18) == 3) && (((byte)this[0x1c] & 1) == 0)) {
    if (*(int * PTR32 *)(this + 0x58) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x58) + 0xc))))((undefined4)gen_fl2bits((float)(float10)0));
      F_00bba6a0(*(undefined * PTR32 *)(this + 0x58),this);
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
uint F_00c1f8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1f8c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00bc89b0(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110efdc));
  return (uint)in_ecx;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf3 */
byte F_00c1f8f0(void)
{
  GEN_ENTER(0xc1f8f0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf4 */
uint F_00c1f900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    this_01 = (undefined4 *)F_00c29330(this_00);
    if (this_01 != (undefined4 *)0x0) {
      bVar1 = F_00c29aa0(this_01,*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)*this_01)(this_01,1);
        this_01 = (undefined4 *)0x0;
      }
      return (uint)this_01;
    }
  }
  return 0;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf1 */
byte F_00c1f9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1f9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = gen_imp_WinHttpOpen((*(undefined * PTR32 (*)[1])REFP(0x110efc0)),0,0,0,0x10000000);
  *(undefined4 *)(this + 4) = uVar1;
  return 1;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf2 */
byte F_00c1f9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc1f9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_WinHttpCloseHandle(*(undefined4 *)(this + 4));
  return 1;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf0 */
uint F_00c1f9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc1f9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110efdc));
  F_00bc89c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c1fa10 */
uint F_00c1fa10(unsigned int gen_a0, unsigned int gen_a1)
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
  for (iVar10 = *(int *)((int)this + 4) - (int)((int)(uintptr_t)piVar12) >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
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
  for (iVar10 = *(int *)((int)this + 0x14) - (int)((int)(uintptr_t)piVar12) >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
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
  for (iVar10 = *(int *)((int)this + 0x24) - (int)((int)(uintptr_t)piVar12) >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
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
uint F_00c1fbe0(unsigned int gen_a0, unsigned int gen_a1)
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
  uVar13 = REFG(float, 0x1097b10);
  uVar14 = REFG(float, 0x1097b10);
  uVar15 = REFG(float, 0x1097b10);
  uVar16 = REFG(float, 0x1090998);
  uVar17 = REFG(float, 0x1090998);
  uVar18 = REFG(float, 0x1090998);
  if (uVar11 != 0) {
    do {
      iVar4 = *(int *)(*(int *)this + (*(uint *)(gen_frame + 0x4c)) * 4);
      uVar3 = *(ushort *)(iVar4 + 0xff0);
      uVar12 = 0;
      if (uVar3 != 0) {
        do {
          dVar19 = F_00b137d0(this_00,(uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (uVar12 & 0xffff) * 2))));
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
          dVar19 = F_00b137d0(this_00,(uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (uVar12 & 0xffff) * 2))));
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
          dVar19 = F_00b137d0(this_00,(uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (uVar12 & 0xffff) * 2))));
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
uint F_00c1fea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c1ff10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  iVar14 = *(int *)(iVar17 + -4 + iVar11 * 4);
  uVar12 = *(uint *)(iVar17 + -4 + iVar11 * 4);
  if (param_1 == *((ushort *)GEN_TOP((iVar14 + 0xefe + (uint)*(ushort *)(iVar14 + 0xff0) * 2)))) {
    psVar1 = (short *)(uVar12 + 0xff0);
    *psVar1 = *psVar1 + -1;
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
    *(short *)(uVar12 + 0xff0) = *(short *)(uVar12 + 0xff0) + -1;
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
    F_00bca970(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930),uVar12);
    uVar12 = *(uint *)((int)this + 4);
    if (*(uint *)this != uVar12) {
      uVar12 = uVar12 - 4;
      *(uint *)((int)this + 4) = uVar12;
    }
  }
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -1;
  return uVar12;
}

/* ref: FUN_00c20080 */
uint F_00c20080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  iVar15 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + -4 + iVar11 * 4)));
  uVar12 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + -4 + iVar11 * 4)));
  if (param_1 == *((ushort *)GEN_TOP((iVar15 + 0xefe + (uint)*(ushort *)(iVar15 + 0xff0) * 2)))) {
    psVar1 = (short *)(uVar12 + 0xff0);
    *psVar1 = *psVar1 + -1;
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
    *(short *)(uVar12 + 0xff0) = *(short *)(uVar12 + 0xff0) + -1;
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
    F_00bca970(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930),uVar12);
    uVar12 = *(uint *)((int)this + 0x14);
    if (*(uint *)((int)this + 0x10) != uVar12) {
      uVar12 = uVar12 - 4;
      *(uint *)((int)this + 0x14) = uVar12;
    }
  }
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
  return uVar12;
}

/* ref: FUN_00c20200 */
uint F_00c20200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  iVar15 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + -4 + iVar11 * 4)));
  uVar12 = *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + -4 + iVar11 * 4)));
  if (param_1 == *((ushort *)GEN_TOP((iVar15 + 0xefe + (uint)*(ushort *)(iVar15 + 0xff0) * 2)))) {
    psVar1 = (short *)(uVar12 + 0xff0);
    *psVar1 = *psVar1 + -1;
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
    *(short *)(uVar12 + 0xff0) = *(short *)(uVar12 + 0xff0) + -1;
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
    F_00bca970(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930),uVar12);
    uVar12 = *(uint *)((int)this + 0x24);
    if (*(uint *)((int)this + 0x20) != uVar12) {
      uVar12 = uVar12 - 4;
      *(uint *)((int)this + 0x24) = uVar12;
    }
  }
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
  return uVar12;
}

/* ref: FUN_00c20380 */
uint F_00c20380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00c20480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c20550(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c205c0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c20740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc20740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = F_00c1ff10(this,param_2,param_3,param_4);
    return uVar1;
  }
  if (param_1 == 2) {
    uVar1 = F_00c20080(this,param_2,param_3,param_4);
    return uVar1;
  }
  uVar1 = F_00c20200(this,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c20790 */
uint F_00c20790(unsigned int gen_a0)
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
uint F_00c207d0(unsigned int gen_a0)
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
uint F_00c20860(unsigned int gen_a0)
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
      uVar2 = F_00bca970(this_00,*(undefined4 *)(*(int *)this + uVar3 * 4));
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
      uVar2 = F_00bca970(this_00,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar4 * 4))));
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
      uVar2 = F_00bca970(this_00,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + uVar4 * 4))));
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
uint F_00c20970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    pvVar7 = (undefined *)F_00bca990(pvVar7,param_1);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
    F_00c21900(this,&(*(undefined * PTR32 *)(gen_frame + 0xc)));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  }
  else {
    pvVar7 = *(undefined * PTR32 *)(*(int *)this + -4 + iVar11 * 4);
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
uint F_00c20ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    pvVar7 = (undefined *)F_00bca990(pvVar7,param_1);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
    F_00c21900((int *)((int)this + 0x10),&(*(undefined * PTR32 *)(gen_frame + 0xc)));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  }
  else {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + -4 + iVar10 * 4)));
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
uint F_00c20c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    pvVar7 = (undefined *)F_00bca990(pvVar7,param_1);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
    F_00c21900((int *)((int)this + 0x20),&(*(undefined * PTR32 *)(gen_frame + 0xc)));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  }
  else {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + -4 + iVar10 * 4)));
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
uint F_00c20d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    uVar3 = F_00c20970((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),iVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar3;
  }
  if (bVar2 == 2) {
    uVar3 = F_00c20ad0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),iVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar3;
  }
  uVar3 = F_00c20c10((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),iVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  return uVar3;
}

/* ref: FUN_00c20db0 */
uint F_00c20db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    uVar5 = F_00c20970(this,param_1,param_2,&(*(float *)(gen_frame + 0x0)),param_3);
    return uVar5;
  }
  if (bVar4 == 2) {
    uVar5 = F_00c20ad0(this,param_1,param_2,&(*(float *)(gen_frame + 0x0)),param_3);
    return uVar5;
  }
  uVar5 = F_00c20c10(this,param_1,param_2,&(*(float *)(gen_frame + 0x0)),param_3);
  return uVar5;
}

/* ref: FUN_00c20ec0 */
uint F_00c20ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    uVar5 = F_00c20970(this,param_1,param_2,param_3,&(*(float *)(gen_frame + 0x0)));
    return uVar5;
  }
  if (bVar4 == 2) {
    uVar5 = F_00c20ad0(this,param_1,param_2,param_3,&(*(float *)(gen_frame + 0x0)));
    return uVar5;
  }
  uVar5 = F_00c20c10(this,param_1,param_2,param_3,&(*(float *)(gen_frame + 0x0)));
  return uVar5;
}

/* ref: FUN_00c21010 */
uint F_00c21010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21010u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00c21030 */
uint F_00c21030(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c210b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc210b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd7);
  return (uint)uVar1;
}

/* ref: FUN_00c210e0 */
uint F_00c210e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc210e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd7);
  return uVar1;
}

/* ref: FUN_00c21130 */
uint F_00c21130(unsigned int gen_a0)
{
  GEN_ENTER(0xc21130u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c21150 */
uint F_00c21150(unsigned int gen_a0)
{
  GEN_ENTER(0xc21150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c21160 */
uint F_00c21160(unsigned int gen_a0)
{
  GEN_ENTER(0xc21160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c21180 */
uint F_00c21180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c211d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc211d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c21200 */
uint F_00c21200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c21230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
ushort F_00c21270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21270u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00c21280 */
byte F_00c21280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 3) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00c212c0 */
uint F_00c212c0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c212f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc212f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c21300 */
byte F_00c21300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c21330 */
uint F_00c21330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c21370(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c21390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c213b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  *(short *)((int)this + 0xff0) = *(short *)((int)this + 0xff0) + -1;
  return 0xffff;
}

/* ref: FUN_00c21420 */
uint F_00c21420(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c21460(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c214a0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c21570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc21570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c21580 */
byte F_00c21580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c215a0 */
uint F_00c215a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c215c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
unsigned int F_00c215e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c21610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c21620 */
uint F_00c21620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c21630 */
uint F_00c21630(unsigned int gen_a0)
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
uint F_00c21670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c21680 */
unsigned int F_00c21680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c216b0(unsigned int gen_a0)
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
uint F_00c216f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
unsigned int F_00c21750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
unsigned int F_00c21780(unsigned int gen_a0)
{
  GEN_ENTER(0xc21780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00c217b0 */
unsigned int F_00c217b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c217e0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c21890(unsigned int gen_a0, unsigned int gen_a1)
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
      uVar1 = F_00c217e0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00c217e0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00c21900 */
uint F_00c21900(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00c21890(this,1);
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
      F_00c21890(this,1);
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
unsigned int F_00c21970(void)
{
  GEN_ENTER(0xc21970u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c21980 */
uint F_00c21980(unsigned int gen_a0)
{
  GEN_ENTER(0xc21980u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined2 *)(in_ecx + 0xff0) = 0;
  return in_ecx;
}

/* ref: FUN_00c219a0 */
uint F_00c219a0(unsigned int gen_a0)
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
uint F_00c219d0(unsigned int gen_a0)
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
unsigned int F_00c219f0(void)
{
  GEN_ENTER(0xc219f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c21a00 */
unsigned int F_00c21a00(void)
{
  GEN_ENTER(0xc21a00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c21a10 */
unsigned int F_00c21a10(void)
{
  GEN_ENTER(0xc21a10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c21a20 */
uint F_00c21a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8)));
  uVar1 = iVar2 * 400 + -400 + *(int *)((int)this + 0x1c);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = iVar2 + -1;
    if (*(byte *)(uVar1 + 4) == param_1) break;
    uVar1 = uVar1 - 400;
  }
  return uVar1;
}

/* ref: FUN_00c21a60 */
uint F_00c21a60(unsigned int gen_a0, unsigned int gen_a1)
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
float10 F_00c21aa0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c21b10(unsigned int gen_a0)
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
uint F_00c21b30(unsigned int gen_a0)
{
  GEN_ENTER(0xc21b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = REFG(float, 0x1087f04);
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
uint F_00c21bd0(unsigned int gen_a0, unsigned int gen_a1)
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
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
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
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1;
}

/* ref: FUN_00c21cb0 */
uint F_00c21cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc21cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c21bd0(this,param_1 * 400 + *(int *)((int)this + 0x1c));
  return uVar1;
}

/* ref: FUN_00c21cd0 */
float10 F_00c21cd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
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
uint F_00c21d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  
  uVar4 = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  if (param_1 == 0) {
    if ((char)param_3 == '\0') {
      *(undefined4 *)((int)this + 0x150) = REFG(float, 0x1087f04);
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
      puVar5 = (undefined4 *)F_004ef0c0((int)this + 0x150,(uint)(param_2 + 4));
    }
    *(undefined4 *)((int)this + 0x180) = uVar1;
    *(undefined4 *)((int)this + 0x184) = uVar2;
    *(undefined4 *)((int)this + 0x188) = uVar3;
    *(undefined1 *)((int)this + 6) = 1;
  }
  else {
    F_004ef0c0(((undefined1 *)(gen_frame + 0x80)),(uint)(param_2 + 4));
    (*(undefined4 *)(gen_frame + 0xb0)) = uVar1;
    (*(undefined4 *)(gen_frame + 0xb4)) = uVar2;
    (*(undefined4 *)(gen_frame + 0xb8)) = uVar3;
    puVar5 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xd0);
    puVar7 = ((undefined4 *)(gen_frame + 0x40));
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar5 = (undefined4 *)
             F_004ef350((undefined4 *)((int)this + 0x150),(uint)((undefined1 *)(gen_frame + 0x80)),(uint)((undefined4 *)(gen_frame + 0x40)));
    *(undefined1 *)((int)this + 6) = 1;
    uVar1 = REFG(float, 0x1087f04);
    if ((char)param_3 == '\0') {
      *(undefined4 *)((int)this + 0x150) = REFG(float, 0x1087f04);
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
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)puVar5;
}

/* ref: FUN_00c21f80 */
uint F_00c21f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      F_00c22330(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + (int)param_1))));
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
unsigned int F_00c22060(unsigned int gen_a0, float gen_a1)
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
        *(float *)((int)param_1 + uVar3 * 4 + -0xa0) = fVar1;
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
        F_0054d030(((float *)(gen_frame + 0x0)),fVar1);
      }
      if ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
          ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || (*(float *)(gen_frame + 0x1c)) == *(float *)&REFG(undefined, 0x1088114)))
      {
        F_0054d0f0(((float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x1c)));
      }
      F_004ef0c0(pfVar6 + -2,(uint)((float *)(gen_frame + 0x0)));
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
      F_00c21bd0(param_1,(*(int *)(gen_frame + 0x28)));
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 400;
      iVar4 = (*(int *)(gen_frame + 0x2c)) + 1;
      pfVar6 = pfVar6 + 100;
      (*(int *)(gen_frame + 0x2c)) = iVar4;
    } while (iVar4 < *((int *)GEN_TOP((*(int *)((int)param_1 + 0x18) + 8))));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Element::SchedulerFCurve::vf0 */
uint F_00c222c0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c222f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc222f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) + param_1 * 0x18 + (int)this;
}

/* ref: FUN_00c22310 */
uint F_00c22310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc22310u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx + (int)in_ecx;
}

/* ref: FUN_00c22330 */
uint F_00c22330(unsigned int gen_a0)
{
  GEN_ENTER(0xc22330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * pvVar2;
  
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined1 *)((int)this + 7) = 1;
  pvVar2 = F_00c48350((undefined *)((int)this + 8),0,0xc0);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0xd0) = REFG(float, 0x1087f04);
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
unsigned int F_00c224e0(float gen_a0)
{
  GEN_ENTER(0xc224e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00c22510 */
uint F_00c22510(unsigned int gen_a0)
{
  GEN_ENTER(0xc22510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if (*(undefined * PTR32 *)(uVar2 + 4) != (undefined *)0x0) {
    in_ecx = F_00beb670(*(undefined * PTR32 *)(uVar2 + 4));
    uVar2 = 0;
    if (in_ecx != 0) {
      bVar1 = F_00a9f620(in_ecx);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00c22530 */
uint F_00c22530(unsigned int gen_a0)
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
uint F_00c22560(unsigned int gen_a0)
{
  GEN_ENTER(0xc22560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint in_EAX = 0;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x24);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[7];
    ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
    in_EAX = ((code *)*(gen_code32 *)*piVar2)(piVar2,(uint)(*(char *)((int)piVar2 + 0x16) == '\0'));
    piVar2 = piVar1;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  return in_EAX;
}

/* ref: Client::System::Scheduler::Base::SchedulerTrack::vf1 */
byte F_00c225b0(unsigned int gen_a0)
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
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      if ((char)uVar2 == '\0') {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
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
byte F_00c22630(unsigned int gen_a0)
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
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
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
byte F_00c226a0(unsigned int gen_a0)
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
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
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
byte F_00c22700(unsigned int gen_a0)
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
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
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
byte F_00c22780(unsigned int gen_a0)
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
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
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

/* ref: FUN_00c22850 */
byte F_00c22850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xf4))(piVar2,param_1,param_2 + 1);
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
byte F_00c228b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2,param_1,param_2 + 1);
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
uint F_00c22910(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c22990(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c229d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc229d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c229e0 */
uint F_00c229e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc229e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Base::SchedulerTrack::vf0 */
uint F_00c22a10(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00c22a40(unsigned int gen_a0, unsigned int gen_a1)
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
    *param_1 = (int)this + -0x18;
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
unsigned int F_00c22aa0(float gen_a0)
{
  GEN_ENTER(0xc22aa0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf4 */
uint F_00c22de0(unsigned int gen_a0)
{
  GEN_ENTER(0xc22de0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xc)));
}

/* ref: FUN_00c22e00 */
uint F_00c22e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc22e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  
  F_00b66510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110f148));
  *(int *)((int)this + 0x10) = param_1;
  sVar1 = *(short *)(param_1 + 4);
  *(short *)((int)this + 0xc) = sVar1;
  if (sVar1 == 2) {
    if (2 < *(int *)(param_1 + 0xc)) {
      F_00b66b20(this,*(int *)(param_1 + 0xc),*(int *)(param_1 + 8) + param_1,param_2);
      return (uint)this;
    }
    *(undefined2 *)((int)this + 0xc) = 0;
  }
  return (uint)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf5 */
uint F_00c22e60(unsigned int gen_a0)
{
  GEN_ENTER(0xc22e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return **(uint * PTR32 *)(in_ecx + 0x10);
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf7 */
uint F_00c22e70(unsigned int gen_a0)
{
  GEN_ENTER(0xc22e70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf8 */
uint F_00c22e80(unsigned int gen_a0)
{
  GEN_ENTER(0xc22e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00c22e90 */
uint F_00c22e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc22e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00c22ea0 */
uint F_00c22ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc22ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00c22eb0 */
uint F_00c22eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc22eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) + param_1 * 0x24 + (int)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::AutoMovePath::vf1 */
uint F_00c22ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c22f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c22f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00c22f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc22f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110f148));
  F_00b65520(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c22fd0 */
unsigned int F_00c22fd0(float gen_a0)
{
  GEN_ENTER(0xc22fd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00c22ff0 */
unsigned int F_00c22ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xc22ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    F_00bef140(*(int *)((int)this + 0x24),0xffffffff);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  *(undefined1 *)((int)this + 0xc0) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Control::VfxControl::vf4 */
byte F_00c23050(unsigned int gen_a0)
{
  GEN_ENTER(0xc23050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x10) == '\0') && (*(char *)(in_ecx + 0xc1) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c23070 */
unsigned int F_00c23070(void)
{
  GEN_ENTER(0xc23070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c23090 */
uint F_00c23090(unsigned int gen_a0)
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
unsigned int F_00c230d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc230d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110f1f4));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    F_00bef140(*(int *)((int)this + 0x24),0xffffffff);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  *(undefined1 *)((int)this + 0xc0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return 0;
}

/* ref: FUN_00c23130 */
byte F_00c23130(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
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
uint F_00c23180(unsigned int gen_a0, unsigned int gen_a1)
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
    piVar1 = (int *)F_00bee640((undefined *)((int)this + 0x30),&(*(undefined4 *)(gen_frame + 0x4)));
  }
  *(int * PTR32 *)((int)this + 0x20) = piVar1;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0xc0) = 0;
  return uVar2;
}

/* ref: FUN_00c231e0 */
uint F_00c231e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffe;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  this_00 = (undefined *)F_00406b90(0xb0,0,0);
  if (this_00 == (undefined *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)F_00bef000(this_00,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  *(int * PTR32 *)((int)this + 0x24) = piVar1;
  ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,1);
  uVar2 = F_00beb760(param_2);
  uVar2 = F_00bef140(*(undefined4 *)((int)this + 0x24),uVar2);
  *(undefined1 *)((int)this + 0xc2) = 1;
  return uVar2;
}

/* ref: FUN_00c23280 */
uint F_00c23280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
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
  uVar4 = F_00beb790(param_3);
  (*(uint *)(gen_frame + 0x50)) = uVar4;
  bVar3 = F_00beb730(param_3);
  (*(byte *)(gen_frame + 0x5c)) = bVar3;
  if (bVar3 == 0) {
    uVar4 = F_00beb7b0(param_3,0);
  }
  else {
    uVar4 = F_00beb760(param_3);
  }
  (*(uint *)(gen_frame + 0x58)) = uVar4;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)(gen_frame + 0x54)) + 0x20) + 0x34))))(*(int * PTR32 *)((*(uint *)(gen_frame + 0x54)) + 0x20));
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
    F_0068b780((*(uint *)(gen_frame + 0x4c)),*pfVar6,pfVar6[1],pfVar6[2],GEN_TOF(*((float *)GEN_TOP((*(int *)(param_2 + 0x30) + 0xc + param_2)))));
  }
  F_00990c20(((undefined4 *)(gen_frame + 0x60)));
  if ((*(byte *)(gen_frame + 0x5c)) == 0) {
    F_00982d80(((undefined4 *)(gen_frame + 0x60)),0);
    uVar4 = (*(uint *)(gen_frame + 0x58));
    F_00990c50(((undefined4 *)(gen_frame + 0x60)),(*(uint *)(gen_frame + 0x58)),(uint)*(ushort *)(param_2 + 0x12),
                 (uint)*(byte *)(param_2 + 0x11));
    bVar3 = *(byte *)(param_2 + 0x15);
    uVar2 = *(ushort *)(param_2 + 0x16);
  }
  else {
    if (*(char *)((*(uint *)(gen_frame + 0x54)) + 0xc2) != '\0') {
      F_00982d80(((undefined4 *)(gen_frame + 0x60)),1);
      uVar4 = (*(uint *)(gen_frame + 0x54));
      F_00982e70(((undefined4 *)(gen_frame + 0x60)),*(undefined4 *)((*(uint *)(gen_frame + 0x54)) + 0x24),(uint)*(ushort *)(param_2 + 0x12),
                   (uint)*(byte *)(param_2 + 0x11));
      F_00982ea0(((undefined4 *)(gen_frame + 0x60)),*(undefined4 *)(uVar4 + 0x28),(uint)*(ushort *)(param_2 + 0x16),
                   (uint)*(byte *)(param_2 + 0x15));
      goto LAB_00c2359a;
    }
    F_00982d80(((undefined4 *)(gen_frame + 0x60)),0);
    uVar4 = (*(uint *)(gen_frame + 0x58));
    if ((*(uint *)(gen_frame + 0x50)) == 0) {
      F_00990c50(((undefined4 *)(gen_frame + 0x60)),(*(uint *)(gen_frame + 0x58)),(uint)*(ushort *)(param_2 + 0x12),
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
        uVar4 = F_00beb7b0(param_3,0);
        bVar3 = *(byte *)(param_2 + 0x11);
        uVar2 = *(ushort *)(param_2 + 0x12);
      }
      F_00990c50(((undefined4 *)(gen_frame + 0x60)),uVar4,(uint)uVar2,(uint)bVar3);
      if (((*(char *)(param_2 + 0x14) != '\0') && (*(char *)(param_2 + 0x14) != '\x01')) &&
         (*(byte *)(param_2 + 0x10) < 100)) {
        uVar4 = 0;
        if ((*(uint *)(gen_frame + 0x50)) != 0) {
          do {
            uVar7 = F_00beb7b0((*(undefined * PTR32 *)(gen_frame + 0x2c)),uVar4);
            F_00990ca0(((undefined4 *)(gen_frame + 0x60)),uVar7,(uint)*(ushort *)(param_2 + 0x16),
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
  F_00990ca0(((undefined4 *)(gen_frame + 0x60)),uVar4,(uint)uVar2,(uint)bVar3);
LAB_00c2359a: ;
  if ((*(char *)(gen_frame + 0x5d)) == '\0') {
    ((undefined4 *)(gen_frame + 0x1c0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x1c0))[0], REFG(float, 0x1087f04));
    (*(undefined4 *)(gen_frame + 0x1d4)) = REFG(float, 0x1087f04);
    uVar12 = REFG(float, 0x1087f04);
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
    F_004efe70(((undefined4 *)(gen_frame + 0x1c0)),(uint)((undefined1 *)(gen_frame + 0x0)));
  }
  if ((*(char *)(gen_frame + 0x5f)) != '\0') {
    (*(float *)(gen_frame + 0x1f0)) = (float)((float10)(*(float *)(gen_frame + 0x1f0)) + (float10)(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x1f4)) = (float)((float10)(*(float *)(gen_frame + 0x1f4)) + (float10)(*(float *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x1f8)) = (float)((float10)(*(float *)(gen_frame + 0x1f8)) + (float10)(*(float *)(gen_frame + 0x18)));
  }
  puVar8 = ((undefined4 *)(gen_frame + 0x1c0));
  puVar9 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  F_0068b5d0((*(uint *)(gen_frame + 0x4c)),(float)(float10)1,param_4,((undefined4 *)(gen_frame + 0x60)),2,0);
  uVar4 = (*(uint *)(gen_frame + 0x54));
  *(undefined1 *)((*(uint *)(gen_frame + 0x54)) + 0x10) = 0;
  *(undefined1 *)((*(uint *)(gen_frame + 0x54)) + 0x14) = 0;
  *(undefined1 *)((*(uint *)(gen_frame + 0x54)) + 0xc0) = 0;
  *(undefined4 *)((*(uint *)(gen_frame + 0x54)) + 0xc) = 0;
  *(undefined2 *)((*(uint *)(gen_frame + 0x54)) + 0x12) = 0;
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)(uint)(gen_frame + 0x210));
  return uVar4;
}

/* ref: FUN_00c236d0 */
uint F_00c236d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
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
  F_00990c20(((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x20) + 0x34))))(*(int * PTR32 *)(param_1 + 0x20));
  F_00982d80(((undefined1 *)(gen_frame + 0x0)),1);
  uVar2 = F_00beb650(param_3);
  F_00982e70(((undefined1 *)(gen_frame + 0x0)),uVar2,(uint)*(ushort *)(param_2 + 0x1c),(uint)*(byte *)(param_2 + 0x19));
  if (*(int *)(param_2 + 0x14) != -1) {
    uVar2 = F_0052ed20(REFG(undefined4, 0x1375b00),*(int *)(param_2 + 0x14),0,0);
    F_00982ea0(((undefined1 *)(gen_frame + 0x0)),uVar2,(uint)*(ushort *)(param_2 + 0x1e),(uint)*(byte *)(param_2 + 0x1a));
  }
  uVar1 = F_0068b5d0(uVar1,(float)(float10)1,
                       ((float)GEN_TOF(((float10)*(ushort *)(param_2 + 0x20) + (float10)param_4))),((undefined1 *)(gen_frame + 0x0)),2,
                       0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00c23800 */
unsigned int F_00c23800(unsigned int gen_a0)
{
  GEN_ENTER(0xc23800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float fVar2;
  
  if (((*(char *)((int)this + 0x10) == '\0') && (*(char *)((int)this + 0xc1) == '\0')) &&
     (*(char *)((int)this + 0xc) == '\0')) {
    fVar2 = (float)(float10)0;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x34))))();
    F_00699cb0(uVar1,fVar2);
    *(undefined4 *)((int)this + 10) = 0x1010000;
    *(undefined1 *)((int)this + 0xc0) = 1;
  }
  return 0;
}

/* ref: FUN_00c23840 */
uint F_00c23840(unsigned int gen_a0)
{
  GEN_ENTER(0xc23840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  float fVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    fVar2 = (float)(float10)0;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x34))))();
    in_EAX = F_0068b730(uVar1,fVar2);
    *(undefined1 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 0xd) = 1;
    *(undefined1 *)((int)this + 10) = 0;
    *(undefined1 *)((int)this + 0xb) = 0;
  }
  *(undefined1 *)((int)this + 0xc0) = 0;
  return in_EAX;
}

/* ref: FUN_00c23880 */
byte F_00c23880(unsigned int gen_a0)
{
  GEN_ENTER(0xc23880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  float fVar2;
  
  if ((*(char *)((int)this + 0x10) == '\0') && (*(char *)((int)this + 0xc1) == '\0')) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 0xc) != '\0')) {
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x34))))
                                  (*(int * PTR32 *)((int)this + 0x20))));
      uVar1 = F_0068b710(this_00);
      if ((char)uVar1 == '\0') {
        fVar2 = (float)(float10)0;
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x34))))();
        F_0068b730(uVar1,fVar2);
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
uint F_00c238f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc238f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint in_EAX = 0;
  undefined * this_00;
  uint uVar2;
  float fVar3;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    iVar1 = **(int * PTR32 *)((int)this + 0x20);
    if (param_2 != 0) {
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x34))(*(int * PTR32 *)((int)this + 0x20))));
      uVar2 = F_0068b6f0(this_00,param_1,param_2);
      return uVar2;
    }
    fVar3 = (float)(float10)0;
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x34))();
    in_EAX = F_0068b730(uVar2,fVar3);
    *(undefined4 *)((int)this + 10) = 0x1000000;
    *(undefined1 *)((int)this + 0xc0) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00c23960 */
uint F_00c23960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc23960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x18) + param_1 * 4;
}

/* ref: FUN_00c23980 */
uint F_00c23980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc23980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x20) + param_1 * 4;
}

/* ref: FUN_00c239a0 */
uint F_00c239a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc239a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x28) + param_1 * 4;
}

/* ref: FUN_00c239c0 */
uint F_00c239c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc239c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x30) + param_1 * 4;
}

/* ref: Client::System::Scheduler::Control::VfxControl::vf0 */
uint F_00c239e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc239e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c230d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c23a10 */
unsigned int F_00c23a10(float gen_a0)
{
  GEN_ENTER(0xc23a10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf7 */
uint F_00c23a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc23a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  
  if (param_2 == 0x1d) {
    fVar1 = *(float *)(param_3 + 8);
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
      F_00bc3780(param_1,fVar1);
    }
  }
  bVar2 = F_00bc3080(param_1,param_2,param_3);
  if (bVar2 == 0) {
    return CONCAT31(extraout_var,bVar2);
  }
  return CONCAT31(extraout_var,1);
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf9 */
unsigned int F_00c23a90(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc23a90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  uint param_8 = (uint)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  undefined * this;
  uint uVar4;
  int * piVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  F_00bc2660(GEN_TOF(param_1),param_2,param_3,param_4,param_5,param_6,&(*(int * PTR32 *)(gen_frame + 0x8)),param_8);
  if ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
      ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) == *(float *)&REFG(undefined, 0x1088114))) {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 100))(param_1);
    uVar4 = F_00bd01e0(uVar4);
    if ((uVar4 == 0x66) && ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) < ((float10)GEN_TOD(gen_bits2f(param_1[0x1a]))))) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)param_1[0x1a];
    }
  }
  else {
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x6c))(param_1)));
    piVar5 = ((int *)(uintptr_t)gen_fl2bits((float)(F_00be40b0(this))));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar5;
  }
  bVar2 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar3 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) == *(float *)&REFG(undefined, 0x1088114);
  uVar1 = *(undefined1 *)param_8;
  param_1[0x1c] = (int)(*(int * PTR32 *)(gen_frame + 0x8));
  if ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) || bVar2) == ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) || bVar2) || bVar3)) {
    param_1[0x1b] = (int)(*(int * PTR32 *)(gen_frame + 0x8));
  }
  else {
    param_1[0x1b] = param_1[0x1a];
  }
  *(undefined1 *)((int)param_1 + 0x83) = uVar1;
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  param_1[0x19] =
       (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x18]))) +
                               ((float10)GEN_TOD(gen_bits2f(param_1[0x1b])))));
  if ((float10)*param_7 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) {
    *param_7 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf10 */
unsigned int F_00c23b80(void)
{
  GEN_ENTER(0xc23b80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf11 */
unsigned int F_00c23b90(void)
{
  GEN_ENTER(0xc23b90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf12 */
unsigned int F_00c23ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xc23ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (this[0xd] == (undefined1)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x68))()));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
    ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1);
    return 0;
  }
  if (this[0x30] != (undefined1)0x0) {
    return 0;
  }
  if (this[0x80] != (undefined1)0x0) {
    return 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf13 */
uint F_00c23c40(unsigned int gen_a0)
{
  GEN_ENTER(0xc23c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))(this);
  if (uVar1 == 0) {
    F_00bc29d0(this,0);
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,10,&REFG(undefined, 0x13056c0));
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf14 */
unsigned int F_00c23c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc23c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bc26d0(this,param_1);
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf15 */
unsigned int F_00c23c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc23c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c23c90 */
unsigned int F_00c23c90(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xc23c90u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  float local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)param_1 + 0x6c))();
  uVar2 = ((code *)*(gen_code32 *)(*(int *)param_1 + 0x68))(param_1);
  if (*(char *)(uVar2 + 0x30) == '\0') {
    if (*(char *)(uVar2 + 0x80) == '\0') {
      local_8 = *(float *)(uVar2 + 0x58);
    }
    else {
      local_8 = *(float *)(uVar2 + 0x6c);
    }
  }
  else {
    fVar3 = (float10)*(int *)(uVar2 + 0x34);
    if (*(int *)(uVar2 + 0x34) < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    local_8 = (float)fVar3;
  }
  F_00bc3780(param_1,((float)GEN_TOF((((float10)local_8 - (float10)*(float *)(uVar1 + 0x34)) *
                               (float10)param_4 + (float10)param_3))));
  F_00bc27a0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf25 */
uint F_00c23d60(unsigned int gen_a0)
{
  GEN_ENTER(0xc23d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xa0);
  if (uVar1 == 0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this)));
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_0054d950(this_00);
      *(uint *)(this + 0xa0) = uVar1;
    }
    uVar1 = *(uint *)(this + 0xa0);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf26 */
uint F_00c23d90(unsigned int gen_a0)
{
  GEN_ENTER(0xc23d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(uint *)(uVar1 + 0x70) != 0) {
    return *(uint *)(uVar1 + 0x70);
  }
  iVar2 = *(int *)(uVar1 + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(uVar1 + 4) != 0) {
      *(undefined4 *)(uVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 4) + 4)));
    }
    iVar2 = *(int *)(uVar1 + 0x6c);
    if (iVar2 == 0) goto LAB_00c23dc7;
  }
  *(undefined4 *)(uVar1 + 0x70) = *(undefined4 *)(iVar2 + 4);
LAB_00c23dc7: ;
  return *(uint *)(uVar1 + 0x70);
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf29 */
uint F_00c23dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc23dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this)));
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x108))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf41 */
uint F_00c23df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc23df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x6c);
  if (this_00 == (undefined *)0x0) {
    if (*(int *)(uVar2 + 4) != 0) {
      *(undefined4 *)(uVar2 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 4) + 4)));
    }
    this_00 = *(undefined * PTR32 *)(uVar2 + 0x6c);
  }
  uVar1 = *(undefined4 *)((int)this_00 + 0x24);
  if (*(short *)(param_2 + 2) == 2) {
    uVar2 = F_00beb790(this_00);
    if ((param_3 < uVar2) && (*((char *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x11))) != '\0')) {
      uVar2 = F_00bc3520(this,param_1,*(int *)((int)this_00 + 0x20),uVar1,param_3,0);
      *(undefined * PTR32 *)(uVar2 + 4) = this;
      return uVar2;
    }
  }
  else if (*((char *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x11))) != '\0') {
    uVar2 = F_00bc3520(this,param_1,*(int *)((int)this_00 + 0x20),uVar1,0,0);
    *(undefined * PTR32 *)(uVar2 + 4) = this;
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00c23e90 */
byte F_00c23e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc23e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x24) != 0) {
    return 1;
  }
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar2 = F_00bc3270(this,param_1);
    if (uVar2 == 0) {
      return 0;
    }
  }
  bVar1 = F_00bc2450(this,uVar2,0);
  return bVar1 != 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf46 */
uint F_00c23f10(unsigned int gen_a0)
{
  GEN_ENTER(0xc23f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  if (uVar1 != 0) {
    uVar1 = F_00be38d0(uVar1);
    return uVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf47 */
unsigned int F_00c23f30(unsigned int gen_a0)
{
  GEN_ENTER(0xc23f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_ecx;
  
  in_ecx = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  if (in_ecx != 0) {
    F_00be38e0(in_ecx);
    return 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf48 */
uint F_00c23f50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc23f50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  float10 fVar5;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x6c))()));
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  fVar5 = (float10)(int)((uint)*(ushort *)(param_1[8] + 4) - (uint)*(ushort *)(param_1[8] + 2));
  bVar4 = GEN_ISNAN(fVar5) || GEN_ISNAN((float10)param_2);
  if (bVar4 != (bVar4 || fVar5 == (float10)param_2)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1);
    return uVar2;
  }
  fVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1);
  return (uint)gen_fl2bits(fVar3);
}

/* ref: FUN_00c23fc0 */
uint F_00c23fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc23fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bc2080(this);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x110f294));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf4 */
byte F_00c23ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xc23ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if ((this[8] != (undefined1)0x0) &&
     ((this[0x80] != (undefined1)0x0 ||
      ((*(int *)(this + 0x74) != 0 && (*(uint *)(this + 0x78) < 2)))))) {
    bVar2 = F_00bc22a0(this);
    if (bVar2 != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
      bVar1 = true;
      if ((uVar3 != 0) && (*(int *)(uVar3 + 0x2c) != 7)) {
        bVar2 = F_00bc1d60(this);
        if (bVar2 == 0) {
          bVar1 = false;
        }
      }
      if (((this[0xb] == (undefined1)0x0) && (((byte)this[0x2c] & 1) == 0)) && (!bVar1))
      {
        return 0;
      }
      *(undefined4 *)(this + 10) = 0x1000000;
      F_00b61910(this);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf5 */
byte F_00c24080(unsigned int gen_a0)
{
  GEN_ENTER(0xc24080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x10] != (undefined1)0x0) {
    bVar1 = F_00bc22e0(this);
    if (bVar1 != 0) {
      this[0x11] = (undefined1)0x1;
      this[0x15] = (undefined1)0x0;
      if (*(int *)(this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf8 */
uint F_00c240c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc240c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int iVar2;
  int * piVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  iVar2 = *(int *)(uVar1 + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(uVar1 + 4) != 0) {
      *(undefined4 *)(uVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 4) + 4)));
    }
    iVar2 = *(int *)(uVar1 + 0x6c);
  }
  iVar2 = *(int *)(iVar2 + 0x24);
  if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 < 100)) {
    return 1;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x68))(this)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))
                    (piVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf42 */
uint F_00c24120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc24120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint in_ecx;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x68))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  iVar4 = *(int *)(uVar2 + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)(uVar2 + 4) != 0) {
      *(undefined4 *)(uVar2 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 4) + 4)));
    }
    iVar4 = *(int *)(uVar2 + 0x6c);
  }
  if (*(int *)(iVar4 + 0x24) == 2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1);
    if (uVar2 <= param_2) {
      return 0;
    }
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1);
    if ((char)uVar2 == '\0') {
      iVar4 = *(int *)(iVar4 + 0x20);
      if (*(char *)(iVar4 + 0x11) == '\0') {
        return 0;
      }
      uVar2 = F_00406b90(0x1c,0,0);
      if (uVar2 == 0) {
        F_00bccc00((undefined *)0x0,iVar4);
        return 0;
      }
      pvVar3 = (undefined *)F_00bccbd0(uVar2);
      F_00bccc00(pvVar3,iVar4);
      return (uint)pvVar3;
    }
  }
  uVar2 = F_00bbad30(*(undefined * PTR32 *)(iVar4 + 0x20));
  if ((uVar2 < 0x158) && (iVar4 = (&REFG(undefined4, 0x14a31f0))[uVar2], iVar4 != 0)) {
    in_ecx = F_00406b90(0x1c,0,0);
    if (in_ecx != 0) {
      pvVar3 = (undefined *)F_00bccbd0(in_ecx);
      F_00bbadf0(pvVar3,uVar2,iVar4);
      return (uint)pvVar3;
    }
    F_00bbadf0((undefined *)0x0,uVar2,iVar4);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf49 */
uint F_00c24220(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc24220u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  code * pcVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  uint * puVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(float *)(gen_frame + 0xc)) = 0.0;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)param_1 + 0x98))(param_1);
  if ((char)uVar3 != '\0') {
    param_1[0x82] = (undefined1)0x0;
  }
  if (param_1[0x80] != (undefined1)0x0) {
    param_2 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x6c);
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar7 = param_2;
  if ((float10)fVar1 < (float10)param_2) {
    fVar7 = fVar1;
  }
  (*(float *)(gen_frame + 0x14)) = fVar7;
  if (0.0 < fVar7) {
    do {
      if (REFG(float, 0x1087f04) < (*(float *)(gen_frame + 0x14))) {
        (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)REFG(double, 0x1088130));
      }
      else {
        (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x14));
        (*(float *)(gen_frame + 0x14)) = 0.0;
      }
      fVar1 = (*(float *)(gen_frame + 0x10));
      bVar2 = F_00bc1d60(param_1);
      if (bVar2 == 0) {
        uVar3 = ((code *)*(gen_code32 *)(*(int *)param_1 + 8))(param_1);
        if ((char)uVar3 != '\0') {
          param_1[0x84] = (undefined1)0x0;
        }
        bVar2 = F_00bc2d10(param_1,(uint)&(*(float *)(gen_frame + 0x10)));
        if (bVar2 != 0) {
          uVar3 = ((code *)*(gen_code32 *)(*(int *)param_1 + 0x6c))(param_1);
          if (uVar3 == 0) {
            pcVar4 = *(gen_code32 *)(*(int *)param_1 + 0x1c);
            puVar8 = ((uint *)(gen_frame + 0x28));
            ((uint *)(gen_frame + 0x28))[0] = 0;
            ((uint *)(gen_frame + 0x28))[1] = 0;
            ((uint *)(gen_frame + 0x28))[2] = 0;
            ((uint *)(gen_frame + 0x28))[3] = 0;
            (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x28))[0] + 0)) = 0;
            ((uint *)(gen_frame + 0x28))[0] = 0;
          }
          else {
            bVar2 = *(byte *)(uVar3 + 0x7c);
            pcVar4 = *(gen_code32 *)(*(int *)param_1 + 0x1c);
            puVar8 = ((uint *)(gen_frame + 0x18));
            ((uint *)(gen_frame + 0x18))[0] = 0;
            ((uint *)(gen_frame + 0x18))[1] = 0;
            ((uint *)(gen_frame + 0x18))[2] = 0;
            ((uint *)(gen_frame + 0x18))[3] = 0;
            (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x18))[0] + 0)) = bVar2 & 1;
            ((uint *)(gen_frame + 0x18))[0] = bVar2 & 0xffffff01;
          }
          (*pcVar4)(param_1,0xb,puVar8);
          F_00bc27a0(param_1,6);
        }
      }
      *(float *)(param_1 + 0x28) = (*(float *)(gen_frame + 0x14));
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(float *)(gen_frame + 0x40)) = 0.0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x38)) + 0)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x10));
      F_00bc3080(param_1,0x10,&(*(undefined4 *)(gen_frame + 0x38)));
      F_00bc23a0(param_1,0x12);
      fVar5 = (float10)(*(float *)(gen_frame + 0x10));
      (*(float *)(gen_frame + 0xc)) = (float)(fVar5 + (float10)(*(float *)(gen_frame + 0xc)));
      if ((GEN_ISNAN((*(float *)(gen_frame + 0x10))) == (GEN_ISNAN((*(float *)(gen_frame + 0x10))) || (*(float *)(gen_frame + 0x10)) == 0.0)) &&
         (fVar6 = (float10)fVar1,
         (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) || fVar5 == fVar6))) {
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((fVar6 - fVar5) + (float10)(*(float *)(gen_frame + 0x14)))));
      }
    } while (!GEN_ISNAN((*(float *)(gen_frame + 0x14))) && !((*(float *)(gen_frame + 0x14)) <= 0.0));
  }
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(float *)(gen_frame + 0x50)) = 0.0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x48)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0xc));
  bVar2 = F_00bc3080(param_1,0x11,&(*(undefined4 *)(gen_frame + 0x48)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return CONCAT31(extraout_var,bVar2);
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf20 */
uint F_00c24410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24410u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf22 */
uint F_00c24420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24420u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  F_00bc1e40((undefined *)this);
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x68))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf23 */
uint F_00c24440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24440u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf27 */
uint F_00c24460(unsigned int gen_a0)
{
  GEN_ENTER(0xc24460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf28 */
uint F_00c24470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24470u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf30 */
uint F_00c24480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24480u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x78))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf31 */
uint F_00c24490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24490u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf32 */
uint F_00c244a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc244a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x80))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf33 */
uint F_00c244c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc244c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x84))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf34 */
uint F_00c244e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc244e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x88))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf35 */
uint F_00c24500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24500u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x8c))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf36 */
uint F_00c24520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24520u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x90))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf37 */
uint F_00c24540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24540u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x94))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf38 */
uint F_00c24560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24560u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x98))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf39 */
uint F_00c24580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24580u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x9c))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf40 */
unsigned int F_00c245a0(void)
{
  GEN_ENTER(0xc245a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf43 */
uint F_00c245b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc245b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xb4))))
                    (*(int * PTR32 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf44 */
uint F_00c245c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc245c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb0))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf45 */
uint F_00c245e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc245e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb4))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf0 */
uint F_00c24610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc24610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x110f294));
  F_00bc2fd0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c24640 */
byte F_00c24640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc24640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x28) = param_1;
  F_00c49908((int)this + 8,0x20,param_2);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionBase::vf4 */
unsigned int F_00c24690(unsigned int gen_a0)
{
  GEN_ENTER(0xc24690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x28) = 0;
  }
  return 0;
}

/* ref: FUN_00c246b0 */
uint F_00c246b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc246b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  in_ecx[1] = 1;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110f3a4));
  in_ecx[10] = 0;
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = in_ecx + 0xc;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(in_ecx + 0x1c) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c246f0 */
byte F_00c246f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc246f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar3 = (float10)(float)((float10)*param_1 - (float10)*param_2);
  fVar4 = (float10)(float)((float10)param_1[1] - (float10)param_2[1]);
  fVar5 = (float10)(float)((float10)param_1[2] - (float10)param_2[2]);
  fVar3 = (float10)((float)GEN_TOF((fVar5 * fVar5 + (fVar4 * fVar4 + fVar3 * fVar3))));
  fVar4 = (float10)(float)((float10)param_5 * (float10)param_5);
  if (fVar3 < fVar4) {
    *param_6 = 0.0;
    return 1;
  }
  fVar5 = (float10)(float)((float10)*param_3 - (float10)*param_4);
  fVar6 = (float10)(float)((float10)param_3[1] - (float10)param_4[1]);
  fVar7 = (float10)(float)((float10)param_3[2] - (float10)param_4[2]);
  fVar1 = ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5))));
  if ((float10)fVar1 <= (float10)REFG(float, 0x10905c4)) {
    if (fVar3 < fVar4) {
      *param_6 = 0.0;
      return 1;
    }
  }
  else {
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)param_3[2] - (float10)param_4[2]) *
                    (float10)(float)((float10)param_1[2] - (float10)param_2[2]) +
                   ((float10)(float)((float10)*param_1 - (float10)*param_2) * fVar5 +
                   (float10)(float)((float10)param_1[1] - (float10)param_2[1]) * fVar6))));
    fVar5 = (float10)fVar2;
    fVar3 = (float10)((float)GEN_TOF((fVar5 * fVar5 - (float10)fVar1 * (fVar3 - fVar4))));
    if ((float10)0 <= fVar3) {
      fVar4 = (float10)fVar2;
      fVar3 = (float10)((float)GEN_TOF(SQRT(fVar3)));
      fVar5 = (float10)(float)(-fVar4 - fVar3);
      if (((float10)0 <= fVar5) && (fVar5 <= (float10)fVar1)) {
        *param_6 = (float)(fVar5 / (float10)fVar1);
        return 1;
      }
      fVar3 = (float10)(float)(fVar3 - fVar4);
      if (((float10)0 <= fVar3) && (fVar3 <= (float10)fVar1)) {
        *param_6 = (float)(fVar3 / (float10)fVar1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c24d00 */
byte F_00c24d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc24d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * puVar1;
  undefined * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  
  if (param_1 >> 2 != 0) {
    puVar1 = (undefined *)(uintptr_t)gen_fl2bits((float)((&REFG(float, 0x110f3cc))[param_1 >> 2 & 3]));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = puVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)(uintptr_t)gen_fl2bits((float)((&REFG(float, 0x110f3cc))[param_1 >> 6 & 3]));
    puVar2 = (undefined *)(uintptr_t)gen_fl2bits((float)((&REFG(float, 0x110f3cc))[param_1 >> 4 & 3]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = puVar2;
    fVar12 = (float10)((float)GEN_TOF((&REFG(float, 0x110f3cc))[param_1 >> 6 & 3]));
    fVar3 = ((float)GEN_TOF((fVar12 * (float10)*(float *)((int)this + 0x30))));
    (*(float *)(gen_frame + 0x0)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) * fVar12)));
    (*(float *)(gen_frame + 0x4)) = fVar4;
    fVar5 = ((float)GEN_TOF((fVar12 * (float10)*(float *)((int)this + 0x38))));
    (*(float *)(gen_frame + 0x8)) = fVar5;
    fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar2)));
    fVar6 = *(float *)((int)this + 0x44);
    fVar7 = *(float *)((int)this + 0x48);
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar1)));
    fVar8 = *(float *)((int)this + 0x50);
    fVar9 = *(float *)((int)this + 0x54);
    fVar10 = *(float *)((int)this + 0x58);
    fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 * (float10)*(float *)((int)this + 0x40)))) +
                   (float10)fVar3)));
    (*(float *)(gen_frame + 0x0)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 * fVar12) + (float10)fVar4)));
    (*(float *)(gen_frame + 0x4)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)fVar7) + (float10)fVar5)));
    (*(float *)(gen_frame + 0x8)) = fVar5;
    fVar3 = ((float)GEN_TOF(((float10)(float)(fVar13 * (float10)fVar8) + (float10)fVar3)));
    (*(float *)(gen_frame + 0x0)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 * fVar13) + (float10)fVar4)));
    (*(float *)(gen_frame + 0x4)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)(float)(fVar13 * (float10)fVar10) + (float10)fVar5)));
    (*(float *)(gen_frame + 0x8)) = fVar5;
    fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2[2] - (float10)*(float *)((int)this + 0x68)))) *
                    (float10)fVar5 +
                   ((float10)((float)GEN_TOF(((float10)*param_2 - (float10)*(float *)((int)this + 0x60)))) *
                    (float10)fVar3 +
                   (float10)((float)GEN_TOF(((float10)param_2[1] - (float10)*(float *)((int)this + 100)))) *
                   (float10)fVar4))));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    if ((float10)fVar3 < (float10)0) {
      puVar11 = (undefined4 *)F_0046f390(&(*(float *)(gen_frame + 0x0)));
      *param_3 = *puVar11;
      param_3[1] = puVar11[1];
      param_3[2] = puVar11[2];
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c24e60 */
byte F_00c24e60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc24e60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  byte bVar25;
  uint uVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float * pfVar33;
  
  if ((param_8 == 0) || (param_3 <= 0.0)) {
    *param_7 = param_5;
    return 1;
  }
  fVar1 = (float)((float10)param_6 - (float10)param_5);
  (*(float *)(gen_frame + 0x23c)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 *
                 ((float10)*(float *)(param_1 + 0x40) + (float10)*(float *)(param_2 + 0x40)))));
  (*(float *)(gen_frame + 0x23c)) = fVar1;
  fVar27 = (float10)fVar1;
  if ((!GEN_ISNAN((float10)param_3) && !GEN_ISNAN(fVar27)) && !((float10)param_3 <= fVar27)) {
    return 0;
  }
  if (!(fVar27 < (float10)param_4)) {
    fVar1 = (float)((float10)param_6 + (float10)param_5);
    (*(float *)(gen_frame + 0x23c)) = fVar1;
    fVar1 = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x1094810));
    (*(float *)(gen_frame + 0x21c)) = fVar1;
    F_004bd830(&(*(float *)(gen_frame + 0x200)),fVar1,param_1 + 0x20);
    F_004bd830(&(*(float *)(gen_frame + 0x1e0)),(*(float *)(gen_frame + 0x21c)),param_1 + 0x30);
    F_004bd830(&(*(float *)(gen_frame + 0x220)),(*(float *)(gen_frame + 0x21c)),param_2 + 0x20);
    F_004bd830(&(*(float *)(gen_frame + 0x1d0)),(*(float *)(gen_frame + 0x21c)),param_2 + 0x30);
    fVar27 = (float10)(*(float *)(gen_frame + 0x21c));
    (*(float *)(gen_frame + 0x1fc)) = (float)(fVar27 + fVar27);
    fVar28 = (float10)(float)(fVar27 + fVar27);
    (*(float *)(gen_frame + 0x1f8)) = (float)(fVar28 + fVar27);
    (*(float *)(gen_frame + 0x23c)) = (float)(fVar28 + fVar28);
    F_004bd670(&(*(float *)(gen_frame + 0x130)),param_1,&(*(float *)(gen_frame + 0x200)));
    F_004bd670(&(*(float *)(gen_frame + 0x120)),param_1 + 0x10,&(*(float *)(gen_frame + 0x1e0)));
    F_004bd670(&(*(float *)(gen_frame + 0x140)),param_2,&(*(float *)(gen_frame + 0x220)));
    F_004bd670(&(*(float *)(gen_frame + 0x110)),param_2 + 0x10,&(*(float *)(gen_frame + 0x1d0)));
    fVar27 = (float10)(*(float *)(gen_frame + 0x200));
    fVar1 = (float)(fVar27 + (float10)(*(float *)(gen_frame + 0x130)));
    (*(float *)(gen_frame + 0x180)) = fVar1;
    fVar28 = (float10)(*(float *)(gen_frame + 0x204));
    fVar2 = (float)(fVar28 + (float10)(*(float *)(gen_frame + 0x134)));
    (*(float *)(gen_frame + 0x184)) = fVar2;
    fVar29 = (float10)(*(float *)(gen_frame + 0x208));
    fVar3 = (float)(fVar29 + (float10)(*(float *)(gen_frame + 0x138)));
    (*(float *)(gen_frame + 0x188)) = fVar3;
    fVar30 = (float10)(*(float *)(gen_frame + 0x1e0));
    fVar4 = (float)(fVar30 + (float10)(*(float *)(gen_frame + 0x120)));
    (*(float *)(gen_frame + 0x1a0)) = fVar4;
    fVar31 = (float10)(*(float *)(gen_frame + 0x1e4));
    fVar5 = (float)(fVar31 + (float10)(*(float *)(gen_frame + 0x124)));
    (*(float *)(gen_frame + 0x1a4)) = fVar5;
    fVar32 = (float10)(*(float *)(gen_frame + 0x1e8));
    fVar6 = (float)(fVar32 + (float10)(*(float *)(gen_frame + 0x128)));
    (*(float *)(gen_frame + 0x1a8)) = fVar6;
    fVar7 = (float)((float10)(*(float *)(gen_frame + 0x220)) + (float10)(*(float *)(gen_frame + 0x140)));
    (*(float *)(gen_frame + 0x160)) = fVar7;
    fVar8 = (float)((float10)(*(float *)(gen_frame + 0x224)) + (float10)(*(float *)(gen_frame + 0x144)));
    (*(float *)(gen_frame + 0x164)) = fVar8;
    fVar9 = (float)((float10)(*(float *)(gen_frame + 0x228)) + (float10)(*(float *)(gen_frame + 0x148)));
    (*(float *)(gen_frame + 0x168)) = fVar9;
    fVar10 = (float)((float10)(*(float *)(gen_frame + 0x1d0)) + (float10)(*(float *)(gen_frame + 0x110)));
    (*(float *)(gen_frame + 0x1b0)) = fVar10;
    fVar11 = (float)((float10)(*(float *)(gen_frame + 0x1d4)) + (float10)(*(float *)(gen_frame + 0x114)));
    (*(float *)(gen_frame + 0x1b4)) = fVar11;
    fVar12 = (float)((float10)(*(float *)(gen_frame + 0x1d8)) + (float10)(*(float *)(gen_frame + 0x118)));
    (*(float *)(gen_frame + 0x1b8)) = fVar12;
    fVar13 = (float)((float10)fVar1 + fVar27);
    (*(float *)(gen_frame + 0x150)) = fVar13;
    fVar14 = (float)((float10)fVar2 + fVar28);
    (*(float *)(gen_frame + 0x154)) = fVar14;
    fVar15 = (float)((float10)fVar3 + fVar29);
    (*(float *)(gen_frame + 0x158)) = fVar15;
    fVar16 = (float)((float10)fVar4 + fVar30);
    (*(float *)(gen_frame + 0x170)) = fVar16;
    fVar17 = (float)((float10)fVar5 + fVar31);
    (*(float *)(gen_frame + 0x174)) = fVar17;
    fVar18 = (float)((float10)fVar6 + fVar32);
    (*(float *)(gen_frame + 0x178)) = fVar18;
    fVar19 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x220)));
    (*(float *)(gen_frame + 0x1c0)) = fVar19;
    fVar20 = (float)((float10)fVar8 + (float10)(*(float *)(gen_frame + 0x224)));
    (*(float *)(gen_frame + 0x1c4)) = fVar20;
    fVar21 = (float)((float10)fVar9 + (float10)(*(float *)(gen_frame + 0x228)));
    (*(float *)(gen_frame + 0x1c8)) = fVar21;
    fVar22 = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0x1d0)));
    (*(float *)(gen_frame + 0x190)) = fVar22;
    fVar23 = (float)((float10)fVar11 + (float10)(*(float *)(gen_frame + 0x1d4)));
    (*(float *)(gen_frame + 0x194)) = fVar23;
    fVar24 = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x1d8)));
    (*(float *)(gen_frame + 0x198)) = fVar24;
    (*(float *)(gen_frame + 0x100)) = (float)((float10)fVar13 + fVar27);
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x130));
    (*(float *)(gen_frame + 0x104)) = (float)((float10)fVar14 + fVar28);
    (*(float *)(gen_frame + 0x4)) = fVar1;
    (*(float *)(gen_frame + 0x8)) = fVar13;
    (*(float *)(gen_frame + 0xc)) = (float)((float10)fVar13 + fVar27);
    (*(float *)(gen_frame + 0x108)) = (float)((float10)fVar15 + fVar29);
    (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x120));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x134));
    (*(float *)(gen_frame + 0x1e0)) = (float)(fVar30 + (float10)fVar16);
    (*(float *)(gen_frame + 0x84)) = fVar4;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x88)) = fVar16;
    (*(float *)(gen_frame + 0x1e4)) = (float)(fVar31 + (float10)fVar17);
    (*(float *)(gen_frame + 0x18)) = fVar14;
    (*(float *)(gen_frame + 0x8c)) = (float)(fVar30 + (float10)fVar16);
    (*(float *)(gen_frame + 0x1e8)) = (float)(fVar32 + (float10)fVar18);
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)fVar14 + fVar28);
    fVar27 = (float10)(*(float *)(gen_frame + 0x220));
    (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x124));
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x138));
    (*(float *)(gen_frame + 0x200)) = (float)((float10)fVar19 + fVar27);
    (*(float *)(gen_frame + 0x94)) = fVar5;
    fVar28 = (float10)(*(float *)(gen_frame + 0x224));
    (*(float *)(gen_frame + 0x24)) = fVar3;
    (*(float *)(gen_frame + 0x204)) = (float)((float10)fVar20 + fVar28);
    (*(float *)(gen_frame + 0x98)) = fVar17;
    fVar30 = (float10)(*(float *)(gen_frame + 0x228));
    (*(float *)(gen_frame + 0x28)) = fVar15;
    (*(float *)(gen_frame + 0x9c)) = (float)(fVar31 + (float10)fVar17);
    (*(float *)(gen_frame + 0x208)) = (float)((float10)fVar21 + fVar30);
    (*(float *)(gen_frame + 0x2c)) = (float)((float10)fVar15 + fVar29);
    (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0x128));
    (*(float *)(gen_frame + 0x220)) = (float)((float10)fVar22 + (float10)(*(float *)(gen_frame + 0x1d0)));
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(float *)(gen_frame + 0xa4)) = fVar6;
    (*(float *)(gen_frame + 0x224)) = (float)((float10)fVar23 + (float10)(*(float *)(gen_frame + 0x1d4)));
    (*(float *)(gen_frame + 0x228)) = (float)((float10)fVar24 + (float10)(*(float *)(gen_frame + 0x1d8)));
    (*(float *)(gen_frame + 0xa8)) = fVar18;
    (*(float *)(gen_frame + 0xac)) = (float)(fVar32 + (float10)fVar18);
    (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x140));
    (*(float *)(gen_frame + 0x44)) = fVar7;
    (*(float *)(gen_frame + 0x48)) = fVar19;
    (*(float *)(gen_frame + 0x4c)) = (float)((float10)fVar19 + fVar27);
    (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x144));
    (*(float *)(gen_frame + 0x54)) = fVar8;
    (*(float *)(gen_frame + 0x58)) = fVar20;
    (*(float *)(gen_frame + 0x5c)) = (float)((float10)fVar20 + fVar28);
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x148));
    (*(float *)(gen_frame + 0x64)) = fVar9;
    (*(float *)(gen_frame + 0x68)) = fVar21;
    (*(float *)(gen_frame + 0x6c)) = (float)((float10)fVar21 + fVar30);
    (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0x110));
    (*(float *)(gen_frame + 0xc4)) = fVar10;
    (*(float *)(gen_frame + 0xc8)) = fVar22;
    (*(float *)(gen_frame + 0xcc)) = (float)((float10)fVar22 + (float10)(*(float *)(gen_frame + 0x1d0)));
    (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x114));
    (*(float *)(gen_frame + 0xd4)) = fVar11;
    (*(float *)(gen_frame + 0xd8)) = fVar23;
    pfVar33 = &(*(float *)(gen_frame + 0x200));
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)fVar23 + (float10)(*(float *)(gen_frame + 0x1d4)));
    (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x118));
    (*(float *)(gen_frame + 0xe4)) = fVar12;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    (*(undefined4 *)(gen_frame + 0xbc)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(float *)(gen_frame + 0xe8)) = fVar24;
    (*(undefined4 *)(gen_frame + 0xf0)) = 0;
    (*(undefined4 *)(gen_frame + 0xf4)) = 0;
    (*(undefined4 *)(gen_frame + 0xf8)) = 0;
    (*(undefined4 *)(gen_frame + 0xfc)) = 0;
    fVar1 = *(float *)(param_1 + 0x44);
    (*(float *)(gen_frame + 0xec)) = (float)((float10)fVar24 + (float10)(*(float *)(gen_frame + 0x1d8)));
    (*(float *)(gen_frame + 0x200)) = fVar1;
    (*(float *)(gen_frame + 0x204)) = fVar1;
    (*(float *)(gen_frame + 0x208)) = fVar1;
    (*(float *)(gen_frame + 0x20c)) = fVar1;
    uVar26 = F_00c24890(&(*(float *)(gen_frame + 0x1e0)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xc0)));
    F_00687590(&(*(float *)(gen_frame + 0x220)),uVar26,pfVar33);
    fVar27 = (float10)(*(float *)(gen_frame + 0x220));
    fVar28 = (float10)(*(float *)(gen_frame + 0x224));
    (*(int *)(gen_frame + 0x218)) = param_8 + -1;
    if ((((!GEN_ISNAN(fVar27) && !GEN_ISNAN((float10)param_3)) && !(fVar27 < (float10)param_3)) ||
        ((!GEN_ISNAN(fVar28) && !GEN_ISNAN(fVar27)) && !(fVar28 < fVar27))) || ((*(float *)(gen_frame + 0x220)) <= 0.0)) {
      bVar25 = F_00c24e60(param_1,param_2,param_3,(*(float *)(gen_frame + 0x220)),param_5,(*(float *)(gen_frame + 0x21c)),param_7,param_8 + -1);
      if (bVar25 != 0) {
        return 1;
      }
      fVar27 = (float10)(*(float *)(gen_frame + 0x220));
      fVar28 = (float10)(*(float *)(gen_frame + 0x224));
    }
    fVar30 = (float10)(*(float *)(gen_frame + 0x228));
    if ((((!GEN_ISNAN((float10)param_3) && !GEN_ISNAN(fVar27)) && !((float10)param_3 < fVar27)) ||
        ((!GEN_ISNAN(fVar27) && !GEN_ISNAN(fVar28)) && !(fVar27 < fVar28))) ||
       (((!GEN_ISNAN(fVar30) && !GEN_ISNAN(fVar28)) && !(fVar30 < fVar28) || ((*(float *)(gen_frame + 0x224)) <= 0.0)))) {
      bVar25 = F_00c24e60(param_1,param_2,(float)fVar27,(float)fVar28,(*(float *)(gen_frame + 0x21c)),(*(float *)(gen_frame + 0x1fc)),param_7,
                            (*(int *)(gen_frame + 0x218)));
      if (bVar25 != 0) {
        return 1;
      }
      fVar27 = (float10)(*(float *)(gen_frame + 0x220));
      fVar28 = (float10)(*(float *)(gen_frame + 0x224));
      fVar30 = (float10)(*(float *)(gen_frame + 0x228));
    }
    fVar29 = (float10)(*(float *)(gen_frame + 0x22c));
    if ((((!GEN_ISNAN(fVar27) && !GEN_ISNAN(fVar28)) && !(fVar27 < fVar28)) ||
        ((!GEN_ISNAN(fVar28) && !GEN_ISNAN(fVar30)) && !(fVar28 < fVar30))) ||
       (((!GEN_ISNAN(fVar29) && !GEN_ISNAN(fVar30)) && !(fVar29 < fVar30) || ((*(float *)(gen_frame + 0x228)) <= 0.0)))) {
      bVar25 = F_00c24e60(param_1,param_2,(float)fVar28,(float)fVar30,(*(float *)(gen_frame + 0x1fc)),(*(float *)(gen_frame + 0x1f8)),param_7,
                            (*(int *)(gen_frame + 0x218)));
      if (bVar25 != 0) {
        return 1;
      }
      fVar28 = (float10)(*(float *)(gen_frame + 0x224));
      fVar30 = (float10)(*(float *)(gen_frame + 0x228));
      fVar29 = (float10)(*(float *)(gen_frame + 0x22c));
    }
    if (((((!GEN_ISNAN(fVar28) && !GEN_ISNAN(fVar30)) && !(fVar28 < fVar30)) ||
         ((!GEN_ISNAN(fVar30) && !GEN_ISNAN(fVar29)) && !(fVar30 < fVar29))) ||
        ((!GEN_ISNAN((float10)param_4) && !GEN_ISNAN(fVar29)) && !((float10)param_4 < fVar29))) ||
       ((*(float *)(gen_frame + 0x22c)) <= 0.0)) {
      bVar25 = F_00c24e60(param_1,param_2,(float)fVar30,(float)fVar29,(*(float *)(gen_frame + 0x1f8)),(*(float *)(gen_frame + 0x23c)),param_7,
                            (*(int *)(gen_frame + 0x218)));
      if (bVar25 != 0) {
        return 1;
      }
      fVar30 = (float10)(*(float *)(gen_frame + 0x228));
      fVar29 = (float10)(*(float *)(gen_frame + 0x22c));
    }
    if (((fVar29 <= fVar30) || ((float10)param_4 <= fVar29)) &&
       (bVar25 = F_00c24e60(param_1,param_2,(float)fVar29,param_4,(*(float *)(gen_frame + 0x23c)),param_6,param_7,
                              (*(int *)(gen_frame + 0x218))), bVar25 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c25760 */
uint F_00c25760(float gen_a0)
{
  GEN_ENTER(0xc25760u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  return (uint)pfVar1;
}

/* ref: FUN_00c257a0 */
byte F_00c257a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc257a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  byte bVar37;
  float * pfVar38;
  float10 fVar39;
  float10 fVar40;
  float10 fVar41;
  float10 fVar42;
  float10 fVar43;
  float10 fVar44;
  float10 fVar45;
  
  (*(float *)(gen_frame + 0x25c)) = *param_5;
  (*(float *)(gen_frame + 0x27c)) = *param_6;
  fVar39 = (float10)*param_6;
  fVar40 = (float10)*param_5;
  fVar6 = (float)(fVar40 + fVar39);
  (*(float *)(gen_frame + 0x260)) = fVar6;
  (*(float *)(gen_frame + 0x25c)) = param_5[1];
  (*(float *)(gen_frame + 0x27c)) = param_6[1];
  fVar41 = (float10)param_6[1];
  fVar42 = (float10)param_5[1];
  fVar7 = (float)(fVar42 + fVar41);
  (*(float *)(gen_frame + 0x264)) = fVar7;
  (*(float *)(gen_frame + 0x25c)) = param_5[2];
  (*(float *)(gen_frame + 0x27c)) = param_6[2];
  fVar43 = (float10)param_6[2];
  fVar44 = (float10)param_5[2];
  fVar8 = (float)(fVar44 + fVar43);
  (*(float *)(gen_frame + 0x268)) = fVar8;
  fVar9 = *param_7;
  (*(float *)(gen_frame + 0x23c)) = fVar9;
  fVar6 = (float)((float10)fVar9 + (float10)fVar6);
  (*(float *)(gen_frame + 0x260)) = fVar6;
  fVar10 = param_7[1];
  (*(float *)(gen_frame + 0x21c)) = fVar10;
  fVar7 = (float)((float10)fVar10 + (float10)fVar7);
  (*(float *)(gen_frame + 0x264)) = fVar7;
  fVar11 = param_7[2];
  (*(float *)(gen_frame + 0x218)) = fVar11;
  fVar8 = (float)((float10)fVar8 + (float10)fVar11);
  (*(float *)(gen_frame + 0x268)) = fVar8;
  fVar12 = *param_8;
  (*(float *)(gen_frame + 0x214)) = fVar12;
  fVar6 = (float)((float10)fVar12 + (float10)fVar6);
  (*(float *)(gen_frame + 0x260)) = fVar6;
  fVar13 = param_8[1];
  (*(float *)(gen_frame + 0x274)) = fVar13;
  fVar7 = (float)((float10)fVar13 + (float10)fVar7);
  (*(float *)(gen_frame + 0x264)) = fVar7;
  fVar14 = param_8[2];
  (*(float *)(gen_frame + 0x278)) = fVar14;
  fVar8 = (float)((float10)fVar8 + (float10)fVar14);
  (*(float *)(gen_frame + 0x268)) = fVar8;
  fVar45 = (float10)*(double *)&REFG(undefined, 0x1094878);
  fVar6 = (float)((float10)fVar6 * fVar45);
  (*(float *)(gen_frame + 0x260)) = fVar6;
  fVar7 = (float)((float10)fVar7 * fVar45);
  (*(float *)(gen_frame + 0x264)) = fVar7;
  fVar8 = (float)(fVar45 * (float10)fVar8);
  (*(float *)(gen_frame + 0x268)) = fVar8;
  fVar45 = (float10)fVar6;
  fVar6 = (float)(fVar40 - fVar45);
  (*(float *)(gen_frame + 0x200)) = fVar6;
  fVar40 = (float10)fVar7;
  fVar7 = (float)(fVar42 - fVar40);
  (*(float *)(gen_frame + 0x204)) = fVar7;
  fVar42 = (float10)fVar8;
  fVar8 = (float)(fVar44 - fVar42);
  (*(float *)(gen_frame + 0x208)) = fVar8;
  fVar15 = (float)(fVar39 - fVar45);
  (*(float *)(gen_frame + 0x260)) = fVar15;
  fVar16 = (float)(fVar41 - fVar40);
  (*(float *)(gen_frame + 0x264)) = fVar16;
  fVar17 = (float)(fVar43 - fVar42);
  (*(float *)(gen_frame + 0x268)) = fVar17;
  fVar9 = (float)((float10)fVar9 - fVar45);
  (*(float *)(gen_frame + 0x1f0)) = fVar9;
  fVar10 = (float)((float10)fVar10 - fVar40);
  (*(float *)(gen_frame + 0x1f4)) = fVar10;
  fVar11 = (float)((float10)fVar11 - fVar42);
  (*(float *)(gen_frame + 0x1f8)) = fVar11;
  fVar12 = (float)((float10)fVar12 - fVar45);
  (*(float *)(gen_frame + 0x220)) = fVar12;
  fVar13 = (float)((float10)fVar13 - fVar40);
  (*(float *)(gen_frame + 0x224)) = fVar13;
  fVar14 = (float)((float10)fVar14 - fVar42);
  (*(float *)(gen_frame + 0x228)) = fVar14;
  fVar18 = ((float)GEN_TOF(((float10)fVar8 * (float10)fVar8 +
                  ((float10)fVar7 * (float10)fVar7 + (float10)fVar6 * (float10)fVar6))));
  (*(float *)(gen_frame + 0x27c)) = fVar18;
  fVar18 = ((float)GEN_TOF(SQRT((float10)fVar18)));
  (*(float *)(gen_frame + 0x27c)) = fVar18;
  (*(float *)(gen_frame + 0x278)) = fVar18;
  fVar19 = ((float)GEN_TOF(((float10)fVar17 * (float10)fVar17 +
                  ((float10)fVar16 * (float10)fVar16 + (float10)fVar15 * (float10)fVar15))));
  (*(float *)(gen_frame + 0x27c)) = fVar19;
  fVar19 = ((float)GEN_TOF(SQRT((float10)fVar19)));
  (*(float *)(gen_frame + 0x27c)) = fVar19;
  pfVar38 = &(*(float *)(gen_frame + 0x278));
  (*(float *)(gen_frame + 0x274)) = fVar19;
  if (!((float10)fVar19 < (float10)fVar18)) {
    pfVar38 = &(*(float *)(gen_frame + 0x274));
  }
  fVar18 = *param_1;
  (*(float *)(gen_frame + 0x1e4)) = fVar18;
  (*(float *)(gen_frame + 0x0)) = fVar18;
  (*(float *)(gen_frame + 0x4)) = param_1[1];
  (*(float *)(gen_frame + 0x8)) = param_1[2];
  fVar19 = *param_2;
  (*(float *)(gen_frame + 0x25c)) = fVar19;
  (*(float *)(gen_frame + 0x10)) = fVar19;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  (*(float *)(gen_frame + 0x20)) = fVar6;
  (*(float *)(gen_frame + 0x24)) = fVar7;
  fVar20 = ((float)GEN_TOF(((float10)fVar11 * (float10)fVar11 +
                  ((float10)fVar10 * (float10)fVar10 + (float10)fVar9 * (float10)fVar9))));
  (*(float *)(gen_frame + 0x27c)) = fVar20;
  (*(float *)(gen_frame + 0x28)) = fVar8;
  (*(float *)(gen_frame + 0x30)) = fVar15;
  (*(float *)(gen_frame + 0x34)) = fVar16;
  (*(float *)(gen_frame + 0x38)) = fVar17;
  (*(float *)(gen_frame + 0x40)) = *pfVar38;
  (*(float *)(gen_frame + 0x44)) = param_9;
  fVar20 = ((float)GEN_TOF(SQRT((float10)fVar20)));
  (*(float *)(gen_frame + 0x27c)) = fVar20;
  (*(float *)(gen_frame + 0x278)) = fVar20;
  fVar21 = ((float)GEN_TOF(((float10)fVar14 * (float10)fVar14 +
                  ((float10)fVar13 * (float10)fVar13 + (float10)fVar12 * (float10)fVar12))));
  (*(float *)(gen_frame + 0x27c)) = fVar21;
  fVar21 = ((float)GEN_TOF(SQRT((float10)fVar21)));
  (*(float *)(gen_frame + 0x27c)) = fVar21;
  pfVar38 = &(*(float *)(gen_frame + 0x278));
  (*(float *)(gen_frame + 0x274)) = fVar21;
  if (!((float10)fVar21 < (float10)fVar20)) {
    pfVar38 = &(*(float *)(gen_frame + 0x274));
  }
  fVar39 = (float10)REFG(double, 0x1088108);
  fVar20 = *param_3;
  fVar21 = param_3[1];
  fVar1 = param_3[2];
  (*(float *)(gen_frame + 0x240)) = (float)((float10)fVar6 * fVar39);
  fVar2 = param_4[1];
  (*(float *)(gen_frame + 0x1e8)) = fVar2;
  (*(float *)(gen_frame + 0x64)) = fVar2;
  fVar3 = param_4[2];
  (*(float *)(gen_frame + 0x1ec)) = fVar3;
  (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar7 * fVar39);
  (*(float *)(gen_frame + 0x68)) = fVar3;
  (*(float *)(gen_frame + 0x70)) = fVar9;
  (*(float *)(gen_frame + 0x74)) = fVar10;
  (*(float *)(gen_frame + 0x248)) = (float)((float10)fVar8 * fVar39);
  (*(float *)(gen_frame + 0x78)) = fVar11;
  (*(float *)(gen_frame + 0x80)) = fVar12;
  (*(float *)(gen_frame + 0x84)) = fVar13;
  fVar22 = ((float)GEN_TOF(((float10)fVar18 + (float10)(float)((float10)fVar6 * fVar39))));
  (*(float *)(gen_frame + 0x1b0)) = fVar22;
  fVar23 = param_1[1];
  (*(float *)(gen_frame + 0x88)) = fVar14;
  fVar4 = *pfVar38;
  (*(float *)(gen_frame + 0x278)) = fVar23;
  fVar5 = *param_4;
  (*(float *)(gen_frame + 0x90)) = fVar4;
  (*(float *)(gen_frame + 0x214)) = fVar20;
  (*(float *)(gen_frame + 0x50)) = fVar20;
  fVar4 = ((float)GEN_TOF(((float10)fVar23 + (float10)(float)((float10)fVar7 * fVar39))));
  (*(float *)(gen_frame + 0x1b4)) = fVar4;
  (*(float *)(gen_frame + 0x218)) = fVar21;
  fVar24 = param_1[2];
  (*(float *)(gen_frame + 0x54)) = fVar21;
  (*(float *)(gen_frame + 0x274)) = fVar24;
  (*(float *)(gen_frame + 0x21c)) = fVar1;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x1e0)) = fVar5;
  (*(float *)(gen_frame + 0x60)) = fVar5;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  fVar25 = ((float)GEN_TOF(((float10)fVar24 + (float10)(float)((float10)fVar8 * fVar39))));
  (*(float *)(gen_frame + 0x1b8)) = fVar25;
  (*(float *)(gen_frame + 0x240)) = (float)((float10)fVar15 * fVar39);
  (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar16 * fVar39);
  (*(float *)(gen_frame + 0x248)) = (float)((float10)fVar17 * fVar39);
  fVar26 = ((float)GEN_TOF(((float10)fVar19 + (float10)(float)((float10)fVar15 * fVar39))));
  (*(float *)(gen_frame + 0x1a0)) = fVar26;
  fVar27 = param_2[1];
  (*(float *)(gen_frame + 0x27c)) = fVar27;
  fVar28 = ((float)GEN_TOF(((float10)fVar27 + (float10)(float)((float10)fVar16 * fVar39))));
  (*(float *)(gen_frame + 0x1a4)) = fVar28;
  fVar29 = param_2[2];
  (*(float *)(gen_frame + 0x23c)) = fVar29;
  fVar30 = ((float)GEN_TOF(((float10)fVar29 + (float10)(float)((float10)fVar17 * fVar39))));
  (*(float *)(gen_frame + 0x1a8)) = fVar30;
  (*(float *)(gen_frame + 0x240)) = (float)((float10)fVar9 * fVar39);
  (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar10 * fVar39);
  (*(float *)(gen_frame + 0x248)) = (float)((float10)fVar11 * fVar39);
  fVar31 = ((float)GEN_TOF(((float10)fVar20 + (float10)(float)((float10)fVar9 * fVar39))));
  (*(float *)(gen_frame + 0x1c0)) = fVar31;
  fVar32 = ((float)GEN_TOF(((float10)(float)((float10)fVar10 * fVar39) + (float10)fVar21)));
  (*(float *)(gen_frame + 0x1c4)) = fVar32;
  fVar33 = ((float)GEN_TOF(((float10)(float)((float10)fVar11 * fVar39) + (float10)fVar1)));
  (*(float *)(gen_frame + 0x1c8)) = fVar33;
  (*(float *)(gen_frame + 0x240)) = (float)((float10)fVar12 * fVar39);
  (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar13 * fVar39);
  (*(float *)(gen_frame + 0x248)) = (float)((float10)fVar14 * fVar39);
  fVar34 = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)((float10)fVar12 * fVar39))));
  (*(float *)(gen_frame + 0x1d0)) = fVar34;
  fVar35 = ((float)GEN_TOF(((float10)(float)((float10)fVar13 * fVar39) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x1d4)) = fVar35;
  fVar36 = ((float)GEN_TOF(((float10)(float)((float10)fVar14 * fVar39) + (float10)fVar3)));
  (*(float *)(gen_frame + 0x1d8)) = fVar36;
  fVar6 = (float)((float10)fVar6 + (float10)fVar18);
  (*(float *)(gen_frame + 0x240)) = fVar6;
  fVar7 = (float)((float10)fVar7 + (float10)fVar23);
  (*(float *)(gen_frame + 0x244)) = fVar7;
  fVar8 = (float)((float10)fVar24 + (float10)fVar8);
  (*(float *)(gen_frame + 0x248)) = fVar8;
  fVar15 = (float)((float10)fVar19 + (float10)fVar15);
  (*(float *)(gen_frame + 0x200)) = fVar15;
  fVar16 = (float)((float10)fVar16 + (float10)fVar27);
  (*(float *)(gen_frame + 0x204)) = fVar16;
  (*(float *)(gen_frame + 0x208)) = (float)((float10)fVar29 + (float10)fVar17);
  (*(float *)(gen_frame + 0x260)) = (float)((float10)fVar20 + (float10)fVar9);
  (*(float *)(gen_frame + 0x264)) = (float)((float10)fVar10 + (float10)fVar21);
  (*(float *)(gen_frame + 0x268)) = (float)((float10)fVar11 + (float10)fVar1);
  fVar12 = (float)((float10)fVar5 + (float10)fVar12);
  (*(float *)(gen_frame + 0x1f0)) = fVar12;
  (*(float *)(gen_frame + 0x1f4)) = (float)((float10)fVar13 + (float10)fVar2);
  (*(float *)(gen_frame + 0x1f8)) = (float)((float10)fVar14 + (float10)fVar3);
  (*(float *)(gen_frame + 0x120)) = fVar18;
  (*(float *)(gen_frame + 0x124)) = fVar22;
  (*(float *)(gen_frame + 0x128)) = fVar6;
  (*(float *)(gen_frame + 0x130)) = fVar23;
  (*(float *)(gen_frame + 0x134)) = fVar4;
  (*(float *)(gen_frame + 0x138)) = fVar7;
  (*(float *)(gen_frame + 0x140)) = fVar24;
  (*(float *)(gen_frame + 0x144)) = fVar25;
  (*(float *)(gen_frame + 0x160)) = fVar20;
  (*(float *)(gen_frame + 0x148)) = fVar8;
  (*(float *)(gen_frame + 0x164)) = fVar31;
  (*(float *)(gen_frame + 0xa0)) = fVar19;
  (*(float *)(gen_frame + 0x168)) = (float)((float10)fVar20 + (float10)fVar9);
  (*(float *)(gen_frame + 0xa4)) = fVar26;
  (*(float *)(gen_frame + 0x174)) = fVar32;
  (*(float *)(gen_frame + 0xa8)) = fVar15;
  (*(float *)(gen_frame + 0x178)) = (float)((float10)fVar10 + (float10)fVar21);
  (*(float *)(gen_frame + 0xb0)) = fVar27;
  (*(float *)(gen_frame + 0x184)) = fVar33;
  (*(float *)(gen_frame + 0xb4)) = fVar28;
  (*(float *)(gen_frame + 0x188)) = (float)((float10)fVar11 + (float10)fVar1);
  (*(float *)(gen_frame + 0xb8)) = fVar16;
  (*(float *)(gen_frame + 0xe4)) = fVar34;
  (*(float *)(gen_frame + 0xc0)) = fVar29;
  (*(float *)(gen_frame + 0xe8)) = fVar12;
  (*(float *)(gen_frame + 0xc4)) = fVar30;
  (*(float *)(gen_frame + 0xf0)) = param_4[1];
  (*(undefined4 *)(gen_frame + 0x12c)) = 0;
  (*(undefined4 *)(gen_frame + 0x13c)) = 0;
  (*(undefined4 *)(gen_frame + 0x14c)) = 0;
  (*(undefined4 *)(gen_frame + 0x150)) = 0;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x15c)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0;
  (*(float *)(gen_frame + 0xc8)) = (float)((float10)fVar29 + (float10)fVar17);
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xdc)) = 0;
  (*(undefined4 *)(gen_frame + 0x16c)) = 0;
  (*(float *)(gen_frame + 0x170)) = fVar21;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0;
  (*(float *)(gen_frame + 0x180)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x18c)) = 0;
  (*(undefined4 *)(gen_frame + 0x190)) = 0;
  (*(undefined4 *)(gen_frame + 0x194)) = 0;
  (*(undefined4 *)(gen_frame + 0x198)) = 0;
  (*(undefined4 *)(gen_frame + 0x19c)) = 0;
  (*(float *)(gen_frame + 0xe0)) = fVar5;
  (*(undefined4 *)(gen_frame + 0xec)) = 0;
  (*(float *)(gen_frame + 0xf4)) = fVar35;
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar13 + (float10)fVar2);
  (*(float *)(gen_frame + 0x100)) = param_4[2];
  (*(float *)(gen_frame + 0x104)) = fVar36;
  (*(undefined4 *)(gen_frame + 0xfc)) = 0;
  (*(float *)(gen_frame + 0x108)) = (float)((float10)fVar14 + (float10)fVar3);
  (*(undefined4 *)(gen_frame + 0x10c)) = 0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(undefined4 *)(gen_frame + 0x11c)) = 0;
  pfVar38 = (float *)F_00c24890(&(*(float *)(gen_frame + 0x1d0)),&(*(float *)(gen_frame + 0x120)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x160)),&(*(float *)(gen_frame + 0xe0)));
  fVar39 = (float10)param_9;
  fVar6 = (float)((float10)*pfVar38 - fVar39);
  (*(float *)(gen_frame + 0x220)) = fVar6;
  fVar7 = (float)((float10)pfVar38[1] - fVar39);
  (*(float *)(gen_frame + 0x224)) = fVar7;
  (*(float *)(gen_frame + 0x228)) = (float)((float10)pfVar38[2] - fVar39);
  fVar40 = (float10)fVar6;
  fVar41 = (float10)fVar7;
  fVar39 = (float10)(float)((float10)pfVar38[2] - fVar39);
  if ((((!GEN_ISNAN(fVar41) && !GEN_ISNAN(fVar40)) && !(fVar41 < fVar40)) ||
      ((!GEN_ISNAN(fVar39) && !GEN_ISNAN(fVar41)) && !(fVar39 < fVar41))) || (fVar7 <= 0.0)) {
    bVar37 = F_00c24e60(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x50)),fVar6,fVar7,(float)(float10)0,REFG(float, 0x1088068),param_10,
                          3);
    if (bVar37 != 0) {
      return 1;
    }
    fVar41 = (float10)(*(float *)(gen_frame + 0x224));
    fVar39 = (float10)(*(float *)(gen_frame + 0x228));
    fVar40 = (float10)(*(float *)(gen_frame + 0x220));
  }
  if (((fVar41 <= fVar40) || (fVar39 <= fVar41)) &&
     (bVar37 = F_00c24e60(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x50)),(float)fVar41,(float)fVar39,REFG(float, 0x1088068),
                            (float)(float10)1,param_10,3), bVar37 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c26130 */
float F_00c26130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc26130u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(float *)(gen_frame + 0x20)) = *param_1;
  fVar8 = (float10)*param_1;
  (*(float *)(gen_frame + 0x20)) = param_1[1];
  fVar9 = (float10)param_1[1];
  (*(float *)(gen_frame + 0x20)) = param_1[2];
  fVar10 = (float10)param_1[2];
  fVar1 = (float)((float10)param_2[2] - fVar10);
  fVar11 = (float10)(float)((float10)param_2[1] - fVar9);
  fVar12 = (float10)(float)((float10)*param_2 - fVar8);
  (*(double *)(gen_frame + 0x8)) = (double)fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 + (fVar12 * fVar12 + fVar11 * fVar11))));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  if ((float10)fVar2 <= (float10)0) {
    fVar8 = (float10)*param_3 - fVar8;
    fVar9 = (float10)param_3[1] - fVar9;
    fVar10 = (float10)param_3[2] - fVar10;
  }
  else {
    fVar3 = *param_3;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    fVar4 = param_3[1];
    (*(float *)(gen_frame + 0x24)) = fVar4;
    fVar5 = param_3[2];
    pfVar7 = &(*(float *)(gen_frame + 0x2c));
    (*(float *)(gen_frame + 0x20)) = fVar5;
    fVar6 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 - fVar10) * (float10)fVar1 +
                   ((float10)(float)((float10)fVar3 - fVar8) * fVar12 +
                   (float10)(float)((float10)fVar4 - fVar9) * fVar11))));
    (*(float *)(gen_frame + 0x1c)) = fVar6;
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = 0.0;
    fVar2 = (float)((float10)fVar6 / (float10)fVar2);
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    if (!((float10)fVar2 < (float10)1)) {
      pfVar7 = &(*(float *)(gen_frame + 0x1c));
    }
    if (!(0.0 < *pfVar7)) {
      pfVar7 = (float *)((int)&(*(double *)(gen_frame + 0x8)) + 4);
    }
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = *pfVar7;
    fVar13 = (float10)*pfVar7;
    fVar8 = (float10)fVar3 - (float10)((float)GEN_TOF(((float10)(float)(fVar13 * fVar12) + fVar8)));
    fVar9 = (float10)fVar4 - (float10)((float)GEN_TOF((fVar9 + (float10)(float)(fVar13 * fVar11))));
    fVar10 = (float10)fVar5 - (float10)((float)GEN_TOF((fVar10 + (float10)(float)(fVar13 * (float10)fVar1))));
  }
  (*(float *)(gen_frame + 0x4)) = (float)fVar9;
  (*(float *)(gen_frame + 0x0)) = (float)fVar8;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 0)) = (float)fVar10;
  fVar8 = (float10)(float)fVar10;
  fVar1 = ((float)GEN_TOF((fVar8 * fVar8 +
                 ((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4))))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = fVar1;
  return fVar1;
}

/* ref: FUN_00c262e0 */
uint F_00c262e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc262e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar5 = REFG(float, 0x1087f04);
  fVar1 = *param_1;
  ((float *)(gen_frame + 0x0))[3] = fVar1;
  fVar2 = param_1[1];
  ((float *)(gen_frame + 0x0))[2] = fVar2;
  fVar3 = param_1[2];
  ((float *)(gen_frame + 0x0))[1] = fVar3;
  fVar7 = (float10)(float)((float10)param_2[1] - (float10)fVar2);
  fVar8 = (float10)(float)((float10)*param_2 - (float10)fVar1);
  fVar9 = (float10)(float)((float10)param_2[2] - (float10)fVar3);
  fVar4 = ((float)GEN_TOF(((fVar8 * fVar8 + fVar7 * fVar7) + fVar9 * fVar9)));
  ((float *)(gen_frame + 0x0))[0] = fVar4;
  fVar10 = (float10)fVar4;
  if (fVar10 <= (float10)0) {
    *param_4 = fVar1;
    param_4[1] = param_1[1];
    param_4[2] = param_1[2];
    *param_5 = 0.0;
    return (uint)param_5;
  }
  ((float *)(gen_frame + 0x0))[2] = 0.0;
  pfVar6 = ((float *)(gen_frame + 0x0));
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)param_3[2] - (float10)fVar3) * fVar9 +
                 ((float10)(float)((float10)*param_3 - (float10)fVar1) * fVar8 +
                 (float10)(float)((float10)param_3[1] - (float10)fVar2) * fVar7))));
  ((float *)(gen_frame + 0x0))[0] = fVar1;
  fVar1 = (float)((float10)fVar1 / fVar10);
  ((float *)(gen_frame + 0x0))[1] = fVar1;
  *param_5 = fVar1;
  ((float *)(gen_frame + 0x0))[0] = fVar1;
  ((float *)(gen_frame + 0x0))[1] = fVar5;
  if (!(fVar1 < fVar5)) {
    pfVar6 = ((float *)(gen_frame + 0x0)) + 1;
  }
  if (!(0.0 < *pfVar6)) {
    pfVar6 = ((float *)(gen_frame + 0x0)) + 2;
  }
  fVar1 = *pfVar6;
  ((float *)(gen_frame + 0x0))[0] = fVar1;
  fVar10 = (float10)fVar1;
  *param_4 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)(fVar10 * fVar8))));
  param_4[1] = ((float)GEN_TOF(((float10)(float)(fVar10 * fVar7) + (float10)param_1[1])));
  param_4[2] = ((float)GEN_TOF(((float10)param_1[2] + (float10)(float)(fVar9 * fVar10))));
  return (uint)param_4;
}

/* ref: FUN_00c26450 */
uint F_00c26450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc26450u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  fVar8 = REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0x4))[2] = *param_1;
  fVar10 = (float10)*param_1;
  fVar1 = (float)((float10)param_1[4] - fVar10);
  ((float *)(gen_frame + 0x4))[2] = param_1[1];
  fVar11 = (float10)param_1[1];
  ((float *)(gen_frame + 0x4))[2] = param_1[2];
  fVar12 = (float10)param_1[2];
  fVar2 = (float)((float10)param_1[6] - fVar12);
  ((float *)(gen_frame + 0x4))[2] = *param_2;
  fVar13 = (float10)*param_2;
  ((float *)(gen_frame + 0x4))[2] = param_2[1];
  fVar14 = (float10)param_2[1];
  ((float *)(gen_frame + 0x4))[2] = param_2[2];
  fVar15 = (float10)param_2[2];
  fVar3 = (float)(fVar10 - fVar13);
  fVar4 = (float)(fVar11 - fVar14);
  fVar5 = (float)(fVar12 - fVar15);
  fVar10 = (float10)(float)((float10)param_1[5] - fVar11);
  fVar6 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                 ((float10)fVar1 * (float10)fVar1 + fVar10 * fVar10))));
  ((float *)(gen_frame + 0x4))[2] = fVar6;
  fVar11 = (float10)(float)((float10)param_2[5] - fVar14);
  fVar12 = (float10)(float)((float10)param_2[4] - fVar13);
  fVar13 = (float10)(float)((float10)param_2[6] - fVar15);
  fVar7 = ((float)GEN_TOF(((fVar12 * fVar12 + fVar11 * fVar11) + fVar13 * fVar13)));
  (*(float *)(gen_frame + 0x1c)) = fVar7;
  fVar14 = (float10)fVar6;
  if (fVar14 <= (float10)REFG(float, 0x110f360)) {
    if (fVar7 <= REFG(float, 0x110f360)) {
      *param_6 = 0.0;
      *param_5 = 0.0;
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
      return (uint)param_4;
    }
    *param_5 = 0.0;
    ((float *)(gen_frame + 0x4))[3] = 0.0;
    pfVar9 = ((float *)(gen_frame + 0x4)) + 4;
    fVar3 = ((float)GEN_TOF(((float10)fVar5 * fVar13 + ((float10)fVar3 * fVar12 + (float10)fVar4 * fVar11))));
    ((float *)(gen_frame + 0x4))[2] = fVar3;
    ((float *)(gen_frame + 0x4))[2] = fVar8;
    fVar3 = (float)((float10)fVar3 / (float10)fVar7);
    ((float *)(gen_frame + 0x4))[4] = fVar3;
    if (!((float10)fVar3 < (float10)1)) {
      pfVar9 = ((float *)(gen_frame + 0x4)) + 2;
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = ((float *)(gen_frame + 0x4)) + 3;
    }
    *param_6 = *pfVar9;
  }
  else {
    fVar6 = ((float)GEN_TOF(((float10)fVar5 * (float10)fVar2 +
                   ((float10)fVar3 * (float10)fVar1 + (float10)fVar4 * fVar10))));
    ((float *)(gen_frame + 0x4))[4] = fVar6;
    if (fVar7 <= REFG(float, 0x110f360)) {
      *param_6 = 0.0;
      ((float *)(gen_frame + 0x4))[3] = fVar8;
      pfVar9 = ((float *)(gen_frame + 0x4)) + 2;
      fVar3 = (float)(-(float10)fVar6 / fVar14);
      ((float *)(gen_frame + 0x4))[4] = fVar3;
      ((float *)(gen_frame + 0x4))[2] = fVar3;
      ((float *)(gen_frame + 0x4))[4] = 0.0;
      if (!((float10)fVar3 < (float10)1)) {
        pfVar9 = ((float *)(gen_frame + 0x4)) + 3;
      }
      if (!(0.0 < *pfVar9)) {
        pfVar9 = ((float *)(gen_frame + 0x4)) + 4;
      }
      *param_5 = *pfVar9;
    }
    else {
      fVar3 = ((float)GEN_TOF(((float10)fVar5 * fVar13 + ((float10)fVar3 * fVar12 + (float10)fVar4 * fVar11))))
      ;
      ((float *)(gen_frame + 0x4))[2] = fVar3;
      fVar4 = ((float)GEN_TOF((fVar13 * (float10)fVar2 + (fVar12 * (float10)fVar1 + fVar11 * fVar10))));
      ((float *)(gen_frame + 0x4))[5] = fVar4;
      fVar5 = (float)((float10)fVar7 * fVar14 - (float10)fVar4 * (float10)fVar4);
      ((float *)(gen_frame + 0x4))[3] = fVar5;
      if ((float10)REFG(float, 0x10905c4) < (float10)fVar5) {
        ((float *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[1], REFG(float, 0x1087f04));
        ((float *)(gen_frame + 0x4))[0] = 0.0;
        pfVar9 = ((float *)(gen_frame + 0x4)) + 3;
        fVar5 = ((float)GEN_TOF((((float10)fVar4 * (float10)fVar3 - (float10)fVar7 * (float10)fVar6) /
                       (float10)fVar5)));
        ((float *)(gen_frame + 0x4))[3] = fVar5;
        if (!((float10)fVar5 < (float10)1)) {
          pfVar9 = ((float *)(gen_frame + 0x4)) + 1;
        }
        if (!(0.0 < *pfVar9)) {
          pfVar9 = ((float *)(gen_frame + 0x4));
        }
        *param_5 = *pfVar9;
      }
      else {
        *param_5 = 0.0;
      }
      fVar3 = ((float)GEN_TOF((((float10)*param_5 * (float10)fVar4 + (float10)fVar3) / (float10)fVar7)));
      ((float *)(gen_frame + 0x4))[2] = fVar3;
      *param_6 = fVar3;
      if ((float10)fVar3 < (float10)0) {
        *param_6 = 0.0;
        ((float *)(gen_frame + 0x4))[1] = fVar8;
        ((float *)(gen_frame + 0x4))[2] = 0.0;
        pfVar9 = ((float *)(gen_frame + 0x4));
        fVar3 = (float)(-(float10)fVar6 / fVar14);
        ((float *)(gen_frame + 0x4))[4] = fVar3;
        ((float *)(gen_frame + 0x4))[0] = fVar3;
        if (!((float10)fVar3 < (float10)1)) {
          pfVar9 = ((float *)(gen_frame + 0x4)) + 1;
        }
        if (!(0.0 < *pfVar9)) {
          pfVar9 = ((float *)(gen_frame + 0x4)) + 2;
        }
        *param_5 = *pfVar9;
      }
      else if (fVar8 < fVar3) {
        *param_6 = fVar8;
        ((float *)(gen_frame + 0x4))[0] = fVar8;
        ((float *)(gen_frame + 0x4))[1] = 0.0;
        pfVar9 = ((float *)(gen_frame + 0x4)) + 2;
        fVar3 = ((float)GEN_TOF((((float10)fVar4 - (float10)fVar6) / fVar14)));
        ((float *)(gen_frame + 0x4))[2] = fVar3;
        if (!((float10)fVar3 < (float10)1)) {
          pfVar9 = ((float *)(gen_frame + 0x4));
        }
        if (!(0.0 < *pfVar9)) {
          pfVar9 = ((float *)(gen_frame + 0x4)) + 1;
        }
        *param_5 = *pfVar9;
      }
    }
  }
  fVar3 = *param_5;
  ((float *)(gen_frame + 0x4))[0] = fVar3;
  fVar14 = (float10)fVar3;
  *param_3 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)(fVar14 * (float10)fVar1))));
  param_3[1] = ((float)GEN_TOF(((float10)param_1[1] + (float10)(float)(fVar14 * fVar10))));
  param_3[2] = ((float)GEN_TOF(((float10)param_1[2] + (float10)(float)((float10)fVar2 * fVar14))));
  fVar1 = *param_6;
  ((float *)(gen_frame + 0x4))[0] = fVar1;
  fVar10 = (float10)fVar1;
  *param_4 = ((float)GEN_TOF(((float10)*param_2 + (float10)(float)(fVar10 * fVar12))));
  param_4[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)(float)(fVar10 * fVar11))));
  param_4[2] = ((float)GEN_TOF(((float10)(float)(fVar13 * fVar10) + (float10)param_2[2])));
  return (uint)param_4;
}

/* ref: FUN_00c26850 */
byte F_00c26850(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc26850u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  byte bVar3;
  float10 fVar4;
  float fVar5;
  
  if ((param_8 == 0) || (param_3 <= 0.0)) {
    *param_7 = param_5;
    return 1;
  }
  fVar5 = (float)((float10)param_6 - (float10)param_5);
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar5 = (float)((float10)fVar5 * (float10)param_1[0x10]);
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar4 = (float10)fVar5;
  if ((!GEN_ISNAN((float10)param_3) && !GEN_ISNAN(fVar4)) && !((float10)param_3 <= fVar4)) {
    return 0;
  }
  if (!(fVar4 < (float10)param_4)) {
    fVar5 = ((float)GEN_TOF((((float10)param_5 + (float10)param_6) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0x28)) = fVar5;
    fVar4 = (float10)fVar5;
    fVar5 = param_1[8];
    (*(float *)(gen_frame + 0x0)) = (float)(fVar4 * (float10)fVar5);
    fVar1 = param_1[9];
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar1 * fVar4);
    fVar2 = param_1[10];
    (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 * fVar4);
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)(float)(fVar4 * (float10)fVar5) + (float10)*param_1)));
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)param_1[1] + (float10)(float)((float10)fVar1 * fVar4))));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)param_1[2] + (float10)(float)((float10)fVar2 * fVar4))));
    fVar5 = param_1[0xc];
    (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar5 * fVar4);
    fVar1 = param_1[0xd];
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar1 * fVar4);
    fVar2 = param_1[0xe];
    (*(float *)(gen_frame + 0x18)) = (float)(fVar4 * (float10)fVar2);
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)param_1[4] + (float10)(float)((float10)fVar5 * fVar4))));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)param_1[5] + (float10)(float)((float10)fVar1 * fVar4))));
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)param_1[6] + (float10)(float)(fVar4 * (float10)fVar2))));
    fVar5 = F_00c26130(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),param_2);
    fVar5 = (float)((float10)fVar5 - (float10)param_1[0x11]);
    (*(float *)(gen_frame + 0x2c)) = fVar5;
    fVar4 = (float10)fVar5;
    if ((((float10)param_3 <= fVar4) || (fVar4 <= (float10)param_4)) || (fVar5 <= 0.0)) {
      bVar3 = F_00c26850(param_1,param_2,param_3,fVar5,param_5,(*(float *)(gen_frame + 0x28)),param_7,param_8 + -1);
      if (bVar3 != 0) {
        return 1;
      }
      fVar4 = (float10)(*(float *)(gen_frame + 0x2c));
    }
    if ((((!GEN_ISNAN((float10)param_3) && !GEN_ISNAN(fVar4)) && !((float10)param_3 < fVar4)) ||
        ((float10)param_4 <= fVar4)) &&
       (bVar3 = F_00c26850(param_1,param_2,(float)fVar4,param_4,(*(float *)(gen_frame + 0x28)),param_6,param_7,
                             param_8 + -1), bVar3 != 0)) {
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00c26b40 */
byte F_00c26b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc26b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  float * pfVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  fVar15 = *param_6;
  (*(float *)(gen_frame + 0xac)) = fVar15;
  fVar12 = (float10)fVar15;
  fVar15 = (float)((float10)*param_4 - fVar12);
  (*(float *)(gen_frame + 0x90)) = fVar15;
  fVar3 = param_6[1];
  (*(float *)(gen_frame + 0xac)) = fVar3;
  fVar13 = (float10)fVar3;
  fVar3 = (float)((float10)param_4[1] - fVar13);
  (*(float *)(gen_frame + 0x94)) = fVar3;
  fVar4 = param_6[2];
  (*(float *)(gen_frame + 0xac)) = fVar4;
  fVar14 = (float10)fVar4;
  fVar4 = (float)((float10)param_4[2] - fVar14);
  (*(float *)(gen_frame + 0x98)) = fVar4;
  fVar5 = (float)((float10)*param_5 - fVar12);
  (*(float *)(gen_frame + 0x70)) = fVar5;
  fVar6 = (float)((float10)param_5[1] - fVar13);
  (*(float *)(gen_frame + 0x74)) = fVar6;
  fVar7 = (float)((float10)param_5[2] - fVar14);
  (*(float *)(gen_frame + 0x78)) = fVar7;
  fVar8 = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar4 +
                 ((float10)fVar15 * (float10)fVar15 + (float10)fVar3 * (float10)fVar3))));
  (*(float *)(gen_frame + 0xac)) = fVar8;
  fVar8 = ((float)GEN_TOF(SQRT((float10)fVar8)));
  (*(float *)(gen_frame + 0xac)) = fVar8;
  (*(float *)(gen_frame + 0x88)) = fVar8;
  fVar9 = ((float)GEN_TOF(((float10)fVar7 * (float10)fVar7 +
                 ((float10)fVar5 * (float10)fVar5 + (float10)fVar6 * (float10)fVar6))));
  (*(float *)(gen_frame + 0xac)) = fVar9;
  fVar9 = ((float)GEN_TOF(SQRT((float10)fVar9)));
  (*(float *)(gen_frame + 0xac)) = fVar9;
  pfVar11 = &(*(float *)(gen_frame + 0x88));
  if (!((float10)fVar9 < (float10)fVar8)) {
    pfVar11 = &(*(float *)(gen_frame + 0xac));
  }
  fVar8 = *param_1;
  (*(float *)(gen_frame + 0x60)) = fVar8;
  (*(float *)(gen_frame + 0x0)) = fVar8;
  fVar9 = param_1[1];
  (*(float *)(gen_frame + 0x68)) = fVar9;
  (*(float *)(gen_frame + 0x4)) = fVar9;
  fVar1 = param_1[2];
  (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar8 + (float10)fVar15);
  (*(float *)(gen_frame + 0x64)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  fVar8 = *param_2;
  (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar9 + (float10)fVar3);
  (*(float *)(gen_frame + 0x6c)) = fVar8;
  (*(float *)(gen_frame + 0x10)) = fVar8;
  fVar9 = param_2[1];
  (*(float *)(gen_frame + 0xa8)) = fVar9;
  (*(float *)(gen_frame + 0x14)) = fVar9;
  fVar2 = param_2[2];
  (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar1 + (float10)fVar4);
  (*(float *)(gen_frame + 0x8c)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  (*(float *)(gen_frame + 0x20)) = fVar15;
  (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar8 + (float10)fVar5);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(float *)(gen_frame + 0x28)) = fVar4;
  (*(float *)(gen_frame + 0x30)) = fVar5;
  (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar9 + (float10)fVar6);
  (*(float *)(gen_frame + 0x34)) = fVar6;
  (*(float *)(gen_frame + 0x38)) = fVar7;
  (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar2 + (float10)fVar7);
  (*(float *)(gen_frame + 0x40)) = *pfVar11;
  (*(float *)(gen_frame + 0x44)) = param_7;
  fVar15 = F_00c26130(param_1,param_2,param_3);
  (*(float *)(gen_frame + 0xa8)) = (float)((float10)fVar15 - (float10)param_7);
  fVar15 = F_00c26130(&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x90)),param_3);
  (*(float *)(gen_frame + 0x8c)) = (float)((float10)fVar15 - (float10)param_7);
  bVar10 = F_00c26850(&(*(float *)(gen_frame + 0x0)),param_3,(*(float *)(gen_frame + 0xa8)),(float)((float10)fVar15 - (float10)param_7),
                        (float)(float10)0,(float)(float10)1,param_8,7);
  return bVar10;
}

/* ref: FUN_00c26d90 */
unsigned int F_00c26d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xc26d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  in_ecx[8] = *param_4;
  in_ecx[9] = param_4[1];
  in_ecx[10] = param_4[2];
  in_ecx[0xc] = *param_5;
  in_ecx[0xd] = param_5[1];
  in_ecx[0xe] = param_5[2];
  in_ecx[0x10] = (undefined4)gen_fl2bits(param_6);
  in_ecx[0x11] = (undefined4)gen_fl2bits(param_7);
  return 0;
}

/* ref: Client::Graphics::Physics::CollisionBase::vf0 */
uint F_00c26e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc26e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00c26ed0 */
uint F_00c26ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc26ed0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (in_eax - in_ecx) - 1;
  puVar1 = ((uint *)GEN_TOP((*(int *)(*param_3 + 0xc) + in_ecx * 4)));
  uVar3 = (int)uVar2 >> 0x1f;
  uVar3 = (uVar2 ^ uVar3) - uVar3;
  if (0x1ffff < (int)uVar3) {
    uVar3 = F_00c11c20(param_3[3],((char *)REFP(0x134a0c4)));
  }
  *puVar1 = ((in_eax - in_ecx) + 0x1fffe) * 0x4000 ^ *puVar1 & 0x3fff;
  return uVar3;
}

/* ref: FUN_00c26f20 */
uint F_00c26f20(unsigned int gen_a0)
{
  GEN_ENTER(0xc26f20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x18);
  return *(uint *)(param_1 + 0x18);
}

/* ref: FUN_00c26f80 */
uint F_00c26f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc26f80u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_edx = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  
  if (in_edx != -1) {
    do {
      puVar1 = ((uint *)GEN_TOP((*(int *)(*in_eax + 0xc) + in_edx * 4)));
      if ((in_edx < 1) || (puVar3 = puVar1 + -1, ((&REFG(undefined, 0x110f47c))[puVar1[-1] & 0x3f] & 0x80) == 0))
      {
        puVar3 = puVar1;
      }
      if (((byte)*puVar3 & 0x3f) != 0x1b) {
        return 1;
      }
      iVar2 = (*puVar1 >> 0xe) - 0x1ffff;
    } while ((iVar2 != -1) && (in_edx = in_edx + 1 + iVar2, in_edx != -1));
  }
  return 0;
}

/* ref: FUN_00c26ff0 */
uint F_00c26ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc26ff0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  uint in_ecx = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)(*param_3 + 0xc) + in_eax * 4)));
  if ((in_eax < 1) || (puVar3 = puVar1 + -1, ((&REFG(undefined, 0x110f47c))[puVar1[-1] & 0x3f] & 0x80) == 0)) {
    puVar3 = puVar1;
  }
  uVar2 = *puVar3;
  if (((byte)uVar2 & 0x3f) != 0x1b) {
    return 0;
  }
  if ((in_ecx != 0xff) && (in_ecx != uVar2 >> 0x17)) {
    *puVar3 = (in_ecx << 6 ^ uVar2) & 0x3fc0 ^ uVar2;
    return 1;
  }
  *puVar3 = (uVar2 & 0xffb5ffff | 0x340000) >> 0x11 | uVar2 & 0x7fc000;
  return 1;
}

/* ref: FUN_00c27070 */
uint F_00c27070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27070u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar1 = in_eax;
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return in_eax;
    }
    puVar3 = ((uint *)GEN_TOP((*(int *)(*param_2 + 0xc) + uVar1 * 4)));
    if (((int)uVar1 < 1) || (puVar4 = puVar3 + -1, ((&REFG(undefined, 0x110f47c))[puVar3[-1] & 0x3f] & 0x80) == 0)
       ) {
      puVar4 = puVar3;
    }
    uVar2 = *puVar4;
    if (((byte)uVar2 & 0x3f) == 0x1b) {
      *puVar4 = (uVar2 & 0xffb5ffff | 0x340000) >> 0x11 | uVar2 & 0x7fc000;
    }
    in_eax = (*((uint *)GEN_TOP((uVar1 * 4 + *(int *)(*param_2 + 0xc)))) >> 0xe) - 0x1ffff;
    if (in_eax == 0xffffffff) break;
    uVar1 = uVar1 + 1 + in_eax;
  }
  return 0xffffffff;
}

/* ref: FUN_00c27100 */
uint F_00c27100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc27100u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint in_eax = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  uint in_eax_00;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint local_4;
  
  in_eax_00 = in_eax;
  while (in_eax_00 != 0xffffffff) {
    uVar1 = *((uint *)GEN_TOP((in_eax_00 * 4 + *(int *)(*param_2 + 0xc)))) >> 0xe;
    if (uVar1 == 0x1fffe) {
      local_4 = 0xffffffff;
    }
    else {
      local_4 = (uVar1 - 0x1fffe) + in_eax_00;
    }
    uVar1 = F_00c26ff0(in_eax_00,param_4,param_2);
    iVar3 = param_5;
    if (uVar1 != 0) {
      iVar3 = param_3;
    }
    puVar2 = ((uint *)GEN_TOP((*(int *)(*param_2 + 0xc) + in_eax_00 * 4)));
    uVar4 = (iVar3 - in_eax_00) - 1;
    uVar1 = (int)uVar4 >> 0x1f;
    in_eax = (uVar4 ^ uVar1) - uVar1;
    if (0x1ffff < (int)in_eax) {
      in_eax = F_00c11c20(param_2[3],((char *)REFP(0x134a0c4)));
    }
    *puVar2 = ((iVar3 - in_eax_00) + 0x1fffe) * 0x4000 ^ *puVar2 & 0x3fff;
    in_eax_00 = local_4;
  }
  return in_eax;
}

/* ref: FUN_00c271e0 */
uint F_00c271e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc271e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint in_ecx;
  uint uVar1;
  
  uVar1 = param_3;
  if (param_3 != 0xffffffff) {
    if (*param_2 == 0xffffffff) {
      *param_2 = param_3;
      return param_3;
    }
    uVar1 = *param_2;
    do {
      in_ecx = uVar1;
      uVar1 = *((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + in_ecx * 4))) >> 0xe;
      if (uVar1 == 0x1fffe) break;
      uVar1 = (uVar1 - 0x1fffe) + in_ecx;
    } while (uVar1 != 0xffffffff);
    uVar1 = F_00c26ed0(param_3,in_ecx,param_1);
  }
  return uVar1;
}

/* ref: FUN_00c27230 */
uint F_00c27230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27230u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[9] + param_2;
  if ((int)(uint)*(byte *)(uVar1 + 0x4b) < iVar2) {
    if (0xf9 < iVar2) {
      F_00c11c20(param_1[3],((char *)REFP(0x134a0e0)));
    }
    uVar1 = *param_1;
    *(char *)(uVar1 + 0x4b) = (char)iVar2;
  }
  return uVar1;
}

/* ref: FUN_00c27270 */
uint F_00c27270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27270u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[9] + param_2;
  if ((int)(uint)*(byte *)(uVar1 + 0x4b) < iVar2) {
    if (0xf9 < iVar2) {
      F_00c11c20(param_1[3],((char *)REFP(0x134a0e0)));
    }
    uVar1 = *param_1;
    *(char *)(uVar1 + 0x4b) = (char)iVar2;
  }
  param_1[9] = param_1[9] + param_2;
  return uVar1;
}

/* ref: FUN_00c272d0 */
uint F_00c272d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc272d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ecx = (int)gen_a1;
  if (((*in_eax == 0xc) && (in_eax = (int *)in_eax[2], ((uint)in_eax & 0x100) == 0)) &&
     ((int)(uint)*(byte *)(in_ecx + 0x32) <= (int)in_eax)) {
    *(int *)(in_ecx + 0x24) = *(int *)(in_ecx + 0x24) + -1;
  }
  return (uint)in_eax;
}

/* ref: FUN_00c272f0 */
uint F_00c272f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc272f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  double * pdVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  uint * puVar7;
  int iVar8;
  
  iVar1 = param_1[4];
  pdVar3 = (double *)F_00c052a0(iVar1,param_1[1],this);
  iVar2 = *param_1;
  iVar8 = *(int *)(iVar2 + 0x28);
  piVar6 = (int *)(iVar2 + 0x28);
  if (*(int *)(pdVar3 + 1) == 3) {
    return (int)*pdVar3;
  }
  puVar7 = (uint *)(param_1 + 10);
  *pdVar3 = (double)param_1[10];
  *(undefined4 *)(pdVar3 + 1) = 3;
  if (*piVar6 < (int)(*puVar7 + 1)) {
    uVar4 = F_00c11980(iVar1,*(undefined4 *)(iVar2 + 8),piVar6,0x10,0x3ffff,
                         ((char *)REFP(0x134a104)));
    *(uint *)(iVar2 + 8) = uVar4;
  }
  if (iVar8 < *piVar6) {
    iVar5 = iVar8 << 4;
    do {
      *((undefined4 *)GEN_TOP((iVar5 + 8 + *(int *)(iVar2 + 8)))) = 0;
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar8 < *piVar6);
  }
  piVar6 = ((int *)GEN_TOP((*puVar7 * 0x10 + *(int *)(iVar2 + 8))));
  *piVar6 = *param_2;
  piVar6[1] = param_2[1];
  piVar6[2] = param_2[2];
  if (((3 < param_2[2]) && ((*(byte *)(*param_2 + 5) & 3) != 0)) &&
     ((*(byte *)(iVar2 + 5) & 4) != 0)) {
    F_00c01900(iVar1,iVar2,*param_2);
  }
  uVar4 = *puVar7;
  *puVar7 = uVar4 + 1;
  return uVar4;
}

/* ref: FUN_00c273d0 */
uint F_00c273d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc273d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  uVar1 = F_00c272f0(((undefined4 *)(gen_frame + 0x0)),param_1,((undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00c27400 */
uint F_00c27400(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc27400u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double param_2 = (double)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(double *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  uVar1 = F_00c272f0(&(*(double *)(gen_frame + 0x0)),param_1,&(*(double *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00c27430 */
uint F_00c27430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = in_eax;
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  uVar1 = F_00c272f0(((undefined4 *)(gen_frame + 0x0)),in_edx,((undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00c27450 */
uint F_00c27450(unsigned int gen_a0)
{
  GEN_ENTER(0xc27450u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)(in_eax + 4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 5;
  uVar1 = F_00c272f0(((undefined4 *)(gen_frame + 0x0)),in_eax,((undefined1 *)(gen_frame + 0x10)));
  return uVar1;
}

/* ref: FUN_00c27480 */
uint F_00c27480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc27480u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 == 0xd) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)));
    *puVar1 = *puVar1 ^ ((param_3 + 1) * 0x4000 ^
                        *((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)))) & 0x7fc000;
    return (uint)puVar1;
  }
  if (uVar2 == 0xe) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)));
    *puVar1 = (param_3 + 1) * 0x800000 ^ *puVar1 & 0x7fffff;
    puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)));
    *puVar1 = *puVar1 ^ (param_1[9] << 6 ^ *puVar1) & 0x3fc0;
    uVar2 = F_00c27270(param_1,1);
  }
  return uVar2;
}

/* ref: FUN_00c27510 */
uint F_00c27510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27510u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint * puVar1;
  
  if (*param_2 == 0xd) {
    *param_2 = 0xc;
    param_2[2] = *((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4))) >> 6 & 0xff;
    return (uint)param_2;
  }
  if (*param_2 == 0xe) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)));
    *puVar1 = *puVar1 & 0x7fffff | 0x1000000;
    *param_2 = 0xb;
  }
  return (uint)param_2;
}

/* ref: FUN_00c27570 */
uint F_00c27570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27570u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = ((uint *)GEN_TOP((*(int *)(*in_ecx + 0xc) + *(int *)(in_eax + 8) * 4)));
  if ((0 < *(int *)(in_eax + 8)) && (((&REFG(undefined, 0x110f47c))[puVar2[-1] & 0x3f] & 0x80) != 0)) {
    puVar2 = puVar2 + -1;
  }
  uVar1 = *puVar2;
  *puVar2 = ((uint)((uVar1 & 0x3fc0) == 0) * 0x40 ^ uVar1) & 0x3fc0 ^ uVar1;
  return uVar1;
}

/* ref: FUN_00c275c0 */
uint F_00c275c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc275c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  double dVar1;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((((*in_esi == 5) && (in_esi[4] == -1)) && (in_esi[5] == -1)) &&
     (((*in_eax == 5 && (in_eax[4] == -1)) && (in_eax[5] == -1)))) {
    dVar1 = *(double *)(in_eax + 2);
    dVar5 = *(double *)(in_esi + 2);
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 0xc: ;
      dVar5 = dVar1 + dVar5;
      break;
    case 0xd: ;
      dVar5 = dVar5 - dVar1;
      break;
    case 0xe: ;
      dVar5 = dVar1 * dVar5;
      break;
    case 0xf: ;
      if ((GEN_ISNAN(dVar1) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) !=
          ((GEN_ISNAN(dVar1) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || dVar1 == *(double *)&REFG(undefined, 0x108bec8))) {
        return 0;
      }
      dVar5 = dVar5 / dVar1;
      break;
    case 0x10: ;
      if ((GEN_ISNAN(dVar1) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) !=
          ((GEN_ISNAN(dVar1) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || dVar1 == *(double *)&REFG(undefined, 0x108bec8))) {
        return 0;
      }
      dVar6 = dVar5 / dVar1;
      dVar4 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar6));
      dVar4 = (dVar6 + dVar4) - dVar4;
      dVar5 = dVar5 - (dVar4 - gen_bits2d(-(ulonglong)
                                           !(dVar4 - dVar6 <=
                                            gen_bits2d(REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar6)))
                                          & REFG(ulonglong, 0x1088130))) * dVar1;
      break;
    case 0x11: ;
      fVar3 = ((float10)GEN_TOD(pow((float10)dVar5,(float10)dVar1)));
      dVar5 = (double)fVar3;
      break;
    case 0x12: ;
      dVar5 = gen_bits2d((ulonglong)gen_d2bits(dVar5) ^ REFG(ulonglong, 0x110e610));
      break;
    default: ;
      in_esi[2] = 0;
      in_esi[3] = 0;
      return 1;
    case 0x14: ;
      goto switchD_00c27621_caseD_14;
    }
    if (!GEN_ISNAN(dVar5)) {
      *(double *)(in_esi + 2) = dVar5;
      return 1;
    }
  }
switchD_00c27621_caseD_14: ;
  return 0;
}

/* ref: FUN_00c27740 */
uint F_00c27740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27740u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14);
  *((undefined4 *)GEN_TOP(((uVar1 - 4) + param_1[6] * 4))) = param_2;
  return uVar1;
}

/* ref: FUN_00c27760 */
uint F_00c27760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc27760u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *in_esi;
  F_00c27100(in_esi[8],in_esi,in_esi[6],0xff,in_esi[6]);
  in_esi[8] = -1;
  if (*(int *)(iVar1 + 0x2c) < in_esi[6] + 1) {
    uVar2 = F_00c11980(in_esi[4],*(undefined4 *)(iVar1 + 0xc),(int *)(iVar1 + 0x2c),4,0x7ffffffd,
                         ((char *)REFP(0x134a11c)));
    *(uint *)(iVar1 + 0xc) = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xc) + in_esi[6] * 4))) = param_2;
  if (*(int *)(iVar1 + 0x30) < in_esi[6] + 1) {
    uVar2 = F_00c11980(in_esi[4],*(undefined4 *)(iVar1 + 0x14),(int *)(iVar1 + 0x30),4,0x7ffffffd,
                         ((char *)REFP(0x134a130)));
    *(uint *)(iVar1 + 0x14) = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x14) + in_esi[6] * 4))) = param_3;
  uVar2 = in_esi[6];
  in_esi[6] = uVar2 + 1;
  return uVar2;
}

/* ref: FUN_00c27800 */
uint F_00c27800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc27800u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c27760(param_1,((param_4 << 9 | param_5) << 8 | param_3) << 6 | param_2,
                       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
  return uVar1;
}

/* ref: FUN_00c27830 */
uint F_00c27830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc27830u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c27760(param_1,(param_4 << 8 | param_3) << 6 | param_2,
                       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
  return uVar1;
}

/* ref: FUN_00c27860 */
uint F_00c27860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc27860u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = ((*(int *)&gen_args[2]) + -1) / 0x32 + 1;
  uVar2 = -(uint)((*(uint *)&gen_args[3]) != 0xffffffff) & (*(uint *)&gen_args[3]);
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0xc) + 8)));
  if ((int)uVar3 < 0x200) {
    uVar3 = F_00c27760((*(int *)&gen_args[0]),((uVar2 << 9 | uVar3) << 8 | (*(uint *)&gen_args[1])) << 6 | 0x22,uVar1);
    *(uint *)((*(int *)&gen_args[0]) + 0x24) = (*(uint *)&gen_args[1]) + 1;
    return uVar3;
  }
  F_00c27760((*(int *)&gen_args[0]),(uVar2 << 0x11 | (*(uint *)&gen_args[1])) << 6 | 0x22,uVar1);
  uVar3 = F_00c27760((*(int *)&gen_args[0]),uVar3,*((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0xc) + 8))));
  *(uint *)((*(int *)&gen_args[0]) + 0x24) = (*(uint *)&gen_args[1]) + 1;
  return uVar3;
}

/* ref: FUN_00c278f0 */
uint F_00c278f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc278f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[6];
  if (param_1[7] < iVar2) {
    if (iVar2 == 0) {
      if ((int)(uint)*(byte *)((int)param_1 + 0x32) <= (int)param_2) {
        return (uint)*(byte *)((int)param_1 + 0x32);
      }
    }
    else {
      puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + -4 + iVar2 * 4)));
      uVar3 = *puVar1;
      if (((((byte)uVar3 & 0x3f) == 3) && ((int)(uVar3 >> 6 & 0xff) <= (int)param_2)) &&
         ((int)param_2 <= (int)((uVar3 >> 0x17) + 1))) {
        if ((int)((param_2 - 1) + param_3) <= (int)(uVar3 >> 0x17)) {
          return uVar3;
        }
        *puVar1 = ((param_2 - 1) + param_3) * 0x800000 | uVar3 & 0x7fffff;
        return uVar3 & 0x7fffff;
      }
    }
  }
  uVar3 = F_00c27760(param_1,(((param_2 - 1) + param_3) * 0x20000 | param_2) << 6 | 3,
                       *(undefined4 *)(param_1[3] + 8));
  return uVar3;
}

/* ref: FUN_00c27990 */
uint F_00c27990(unsigned int gen_a0)
{
  GEN_ENTER(0xc27990u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (*(uint *)&gen_args[0]);
  uVar1 = *(undefined4 *)((*(uint *)&gen_args[0]) + 0x20);
  *(undefined4 *)((*(uint *)&gen_args[0]) + 0x20) = 0xffffffff;
  (*(uint *)&gen_args[0]) = F_00c27760((*(uint *)&gen_args[0]),0x7fff8016,*((undefined4 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0xc) + 8))));
  F_00c271e0(iVar2,&(*(uint *)&gen_args[0]),uVar1);
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00c279d0 */
uint F_00c279d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc279d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c27760(param_1,(param_3 + 1) * 0x800000 | param_2 << 6 | 0x1e,
                       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
  return uVar1;
}

/* ref: FUN_00c27a00 */
uint F_00c27a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc27a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 uVar1;
  
  F_00c27760((*(int *)&gen_args[1]),(((*(int *)&gen_args[0]) << 9 | (*(uint *)&gen_args[4])) << 8 | (*(uint *)&gen_args[3])) << 6 | (*(uint *)&gen_args[2]),
               *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0xc) + 8))));
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + 0x20);
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x20) = 0xffffffff;
  (*(uint *)&gen_args[4]) = F_00c27760((*(int *)&gen_args[1]),0x7fff8016,*((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0xc) + 8))));
  F_00c271e0((*(int *)&gen_args[1]),&(*(uint *)&gen_args[4]),uVar1);
  return (*(uint *)&gen_args[4]);
}

/* ref: FUN_00c27a60 */
uint F_00c27a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27a60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  uVar1 = F_00c271e0(param_1,param_1 + 0x20,param_2);
  return uVar1;
}

/* ref: FUN_00c27a80 */
uint F_00c27a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27a80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_2 - 6;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    *param_2 = 0xc;
    return uVar1;
  case 1: ;
    uVar1 = F_00c27760(param_1,param_2[2] << 0x17 | 4,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8)))
                        );
    param_2[2] = uVar1;
    *param_2 = 0xb;
    return uVar1;
  case 2: ;
    uVar1 = F_00c27760(param_1,param_2[2] << 0xe | 5,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))))
    ;
    param_2[2] = uVar1;
    *param_2 = 0xb;
    return uVar1;
  case 3: ;
    if (((param_2[3] & 0x100U) == 0) && ((int)(uint)*(byte *)(param_1 + 0x32) <= param_2[3])) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    if (((param_2[2] & 0x100U) == 0) && ((int)(uint)*(byte *)(param_1 + 0x32) <= param_2[2])) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    uVar1 = F_00c27800(param_1,6,0,param_2[2],param_2[3]);
    param_2[2] = uVar1;
    *param_2 = 0xb;
    return uVar1;
  case 4: ;
  case 5: ;
  case 6: ;
    goto switchD_00c27a94_caseD_a;
  case 7: ;
  case 8: ;
    uVar1 = F_00c27510(param_1,param_2);
switchD_00c27a94_caseD_a: ;
    return uVar1;
  default: ;
    return uVar1;
  }
}

/* ref: FUN_00c27bb0 */
uint F_00c27bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc27bb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  uint in_edi = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  F_00c27a80(in_esi,param_3);
  uVar2 = *param_3;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
    uVar2 = F_00c278f0(in_esi,in_edi,1);
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return uVar2;
  case 2: ;
  case 3: ;
    uVar2 = F_00c27800(in_esi,2,in_edi,(uint)(uVar2 == 2),0);
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return uVar2;
  case 4: ;
    uVar2 = F_00c27830(in_esi,1,in_edi,param_3[2]);
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return uVar2;
  case 5: ;
    uVar2 = F_00c27400(in_esi,*(double *)(param_3 + 2));
    uVar2 = F_00c27830(in_esi,1,in_edi,uVar2);
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return uVar2;
  case 0xb: ;
    puVar1 = ((uint *)GEN_TOP((*(int *)(*in_esi + 0xc) + param_3[2] * 4)));
    *puVar1 = *puVar1 ^ (in_edi << 6 ^ *((uint *)GEN_TOP((*(int *)(*in_esi + 0xc) + param_3[2] * 4)))) & 0x3fc0
    ;
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return (uint)puVar1;
  case 0xc: ;
    uVar2 = param_3[2];
    if (in_edi != uVar2) {
      uVar2 = F_00c27800(in_esi,0,in_edi,uVar2,0);
    }
    param_3[2] = in_edi;
    *param_3 = 0xc;
  }
  return uVar2;
}

/* ref: FUN_00c27cd0 */
uint F_00c27cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27cd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (*param_2 != 0xc) {
    iVar1 = in_eax[9] + 1;
    if ((int)(uint)*(byte *)(*in_eax + 0x4b) < iVar1) {
      if (0xf9 < iVar1) {
        F_00c11c20(in_eax[3],((char *)REFP(0x134a0e0)));
      }
      *(char *)(*in_eax + 0x4b) = (char)iVar1;
    }
    in_eax[9] = in_eax[9] + 1;
    in_eax = (int *)F_00c27bb0(in_eax,in_eax[9] + -1,param_2);
  }
  return (uint)in_eax;
}

/* ref: FUN_00c27d30 */
uint F_00c27d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc27d30u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int in_edx;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint local_4;
  
  piVar2 = param_2;
  F_00c27bb0(in_eax,param_3,param_2);
  if (*param_2 == 10) {
    F_00c271e0(in_eax,param_2 + 4,param_2[2]);
  }
  in_edx = param_2[5];
  if (param_2[4] == in_edx) goto LAB_00c27e29;
  uVar4 = 0xffffffff;
  local_4 = 0xffffffff;
  uVar3 = F_00c26f80(in_eax,param_2[4]);
  if (uVar3 == 0) {
    uVar3 = F_00c26f80(in_eax,in_edx);
    if (uVar3 != 0) goto LAB_00c27d8b;
  }
  else {
LAB_00c27d8b: ;
    if (*param_2 == 10) {
      param_2 = (int *)0xffffffff;
    }
    else {
      param_2 = (int *)F_00c27990(in_eax);
    }
    *(undefined4 *)(in_eax + 0x1c) = *(undefined4 *)(in_eax + 0x18);
    uVar4 = F_00c27760(in_eax,param_3 << 6 | 0x4002,*((undefined4 *)GEN_TOP((*(int *)(in_eax + 0xc) + 8))));
    *(undefined4 *)(in_eax + 0x1c) = *(undefined4 *)(in_eax + 0x18);
    local_4 = F_00c27760(in_eax,param_3 << 6 | 0x800002,
                           *((undefined4 *)GEN_TOP((*(int *)(in_eax + 0xc) + 8))));
    *(undefined4 *)(in_eax + 0x1c) = *(undefined4 *)(in_eax + 0x18);
    F_00c271e0(in_eax,in_eax + 0x20,param_2);
  }
  uVar1 = *(undefined4 *)(in_eax + 0x18);
  *(undefined4 *)(in_eax + 0x1c) = uVar1;
  F_00c27100(piVar2[5],in_eax,uVar1,param_3,uVar4);
  F_00c27100(piVar2[4],in_eax,uVar1,param_3,local_4);
LAB_00c27e29: ;
  piVar2[4] = -1;
  piVar2[5] = -1;
  piVar2[2] = param_3;
  *piVar2 = 0xc;
  return 0xffffffff;
}

/* ref: FUN_00c27e50 */
uint F_00c27e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27e50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  F_00c27a80(param_1,param_2);
  if (((*param_2 == 0xc) && ((param_2[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)((int)param_1 + 0x32) <= param_2[2])) {
    param_1[9] = param_1[9] + -1;
  }
  iVar2 = param_1[9] + 1;
  if ((int)(uint)*(byte *)(*param_1 + 0x4b) < iVar2) {
    if (0xf9 < iVar2) {
      F_00c11c20(param_1[3],((char *)REFP(0x134a0e0)));
    }
    *(char *)(*param_1 + 0x4b) = (char)iVar2;
  }
  param_1[9] = param_1[9] + 1;
  uVar1 = F_00c27d30(param_1,param_2,param_1[9] + -1);
  return uVar1;
}

/* ref: FUN_00c27ed0 */
uint F_00c27ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27ed0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00c27a80(param_1,param_2);
  if (*param_2 == 0xc) {
    uVar1 = param_2[2];
    if (param_2[4] == param_2[5]) {
      return uVar1;
    }
    if ((int)(uint)*(byte *)(param_1 + 0x32) <= (int)uVar1) {
      F_00c27d30(param_1,param_2,uVar1);
      return param_2[2];
    }
  }
  F_00c27e50(param_1,param_2);
  return param_2[2];
}

/* ref: FUN_00c27f20 */
uint F_00c27f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x14)) {
    uVar1 = F_00c27ed0(param_1,param_2);
    return uVar1;
  }
  uVar1 = F_00c27a80(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c27f40 */
uint F_00c27f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27f40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  if (param_2[4] == param_2[5]) {
    F_00c27a80(param_1,param_2);
  }
  else {
    F_00c27ed0(param_1,param_2);
  }
  iVar1 = *param_2;
  switch((unsigned int)(uintptr_t)(iVar1)) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
    if (*(int *)(param_1 + 0x28) < 0x100) {
      if (iVar1 == 1) {
        uVar2 = F_00c27450(param_1);
        param_2[2] = uVar2;
        *param_2 = 4;
        return uVar2 | 0x100;
      }
      if (iVar1 == 5) {
        uVar2 = F_00c27400(param_1,*(double *)(param_2 + 2));
        param_2[2] = uVar2;
        *param_2 = 4;
        return uVar2 | 0x100;
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      ((uint *)(gen_frame + 0x0))[0] = (uint)(iVar1 == 2);
      uVar2 = F_00c272f0(((uint *)(gen_frame + 0x0)),param_1,((uint *)(gen_frame + 0x0)));
      param_2[2] = uVar2;
      *param_2 = 4;
LAB_00c28000: ;
      return uVar2 | 0x100;
    }
    break;
  case 4: ;
    uVar2 = param_2[2];
    if ((int)uVar2 < 0x100) goto LAB_00c28000;
  }
  uVar2 = F_00c27ed0(param_1,param_2);
  return uVar2;
}

/* ref: FUN_00c28040 */
uint F_00c28040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc28040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = *param_2 - 6;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (((*param_3 == 0xc) && ((param_3[2] & 0x100U) == 0)) &&
       ((int)(uint)*(byte *)(param_1 + 0x32) <= param_3[2])) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    uVar1 = F_00c27d30(param_1,param_3,param_2[2]);
    return uVar1;
  case 1: ;
    uVar1 = F_00c27ed0(param_1,param_3);
    uVar1 = F_00c27760(param_1,(param_2[2] << 0x11 | uVar1) << 6 | 8,
                         *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
    break;
  case 2: ;
    uVar1 = F_00c27ed0(param_1,param_3);
    uVar1 = F_00c27760(param_1,(param_2[2] << 8 | uVar1) << 6 | 7,
                         *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
    break;
  case 3: ;
    uVar1 = F_00c27f40(param_1,param_3);
    uVar1 = F_00c27800(param_1,9,param_2[2],param_2[3],uVar1);
  }
  if (((*param_3 == 0xc) && ((param_3[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)(param_1 + 0x32) <= param_3[2])) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  return uVar1;
}

/* ref: FUN_00c28130 */
uint F_00c28130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc28130u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  F_00c27a80(param_1,param_2);
  if (*param_2 == 0xc) {
    if (param_2[4] == param_2[5]) goto LAB_00c28173;
    if ((int)(uint)*(byte *)((int)param_1 + 0x32) <= param_2[2]) {
      F_00c27d30(param_1,param_2,param_2[2]);
      goto LAB_00c28173;
    }
  }
  F_00c27e50(param_1,param_2);
LAB_00c28173: ;
  if (((*param_2 == 0xc) && ((param_2[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)((int)param_1 + 0x32) <= param_2[2])) {
    param_1[9] = param_1[9] + -1;
  }
  uVar2 = param_1[9];
  iVar1 = uVar2 + 2;
  if ((int)(uint)*(byte *)(*param_1 + 0x4b) < iVar1) {
    if (0xf9 < iVar1) {
      F_00c11c20(param_1[3],((char *)REFP(0x134a0e0)));
    }
    *(char *)(*param_1 + 0x4b) = (char)iVar1;
  }
  param_1[9] = param_1[9] + 2;
  uVar3 = F_00c27f40(param_1,param_3);
  uVar3 = F_00c27760(param_1,((param_2[2] << 9 | uVar3) << 8 | uVar2) << 6 | 0xb,
                       *(undefined4 *)(param_1[3] + 8));
  if (((*param_3 == 0xc) && ((param_3[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)((int)param_1 + 0x32) <= param_3[2])) {
    param_1[9] = param_1[9] + -1;
  }
  param_2[2] = uVar2;
  *param_2 = 0xc;
  return uVar3;
}

/* ref: FUN_00c28220 */
uint F_00c28220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc28220u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if ((*in_edi == 0xb) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)(*in_esi + 0xc) + in_edi[2] * 4))), ((byte)uVar1 & 0x3f) == 0x13)) {
    in_esi[6] = in_esi[6] + -1;
    uVar1 = F_00c27a00(0,in_esi,0x1a,uVar1 >> 0x17,(uint)(param_3 == 0));
    return uVar1;
  }
  F_00c27cd0(in_esi,in_edi);
  if ((*in_edi == 0xc) &&
     (((in_edi[2] & 0x100U) == 0 && ((int)(uint)*(byte *)((int)in_esi + 0x32) <= in_edi[2])))) {
    in_esi[9] = in_esi[9] + -1;
  }
  uVar1 = F_00c27a00(in_edi[2],in_esi,0x1b,0xff,param_3);
  return uVar1;
}

