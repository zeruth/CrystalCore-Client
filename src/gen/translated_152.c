#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: __fdopen */
undefined * F_00c711fe(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc711feu, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x1c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  undefined * in_esi;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f68a0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc7120a;
  if ((*(char * PTR32 *)&gen_args[1]) != (char *)0x0) {
    if ((*(int *)&gen_args[0]) == -2) {
      piVar2 = F_00c51f85();
      *piVar2 = 9;
      return (undefined *)0x0;
    }
    if ((((*(int *)&gen_args[0]) < 0) || (REFG(undefined4, 0x15e4190) <= (uint)(*(int *)&gen_args[0]))) ||
       (uVar7 = 1, pcVar3 = (*(char * PTR32 *)&gen_args[1]),
       (*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(*(int *)&gen_args[0]) >> 5] + 4 + ((*(int *)&gen_args[0]) & 0x1fU) * 0x40))) & 1) == 0))
    {
      piVar2 = F_00c51f85();
      *piVar2 = 9;
      goto LAB_00c71223;
    }
    for (; *pcVar3 == ' '; pcVar3 = pcVar3 + 1) {
    }
    cVar1 = *pcVar3;
    if (cVar1 != 'a') {
      uVar5 = uVar7;
      if (cVar1 == 'r') goto LAB_00c71294;
      if (cVar1 != 'w') goto LAB_00c71218;
    }
    uVar5 = 2;
LAB_00c71294: ;
    (*(char * PTR32 *)&gen_args[1]) = (char *)0x0;
    uVar5 = uVar5 | REFG(undefined4, 0x15d75b4);
    uVar4 = 0;
    uVar6 = uVar7;
LAB_00c71306: ;
    do {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      if ((cVar1 == '\0') || (uVar6 == 0)) goto LAB_00c71310;
    } while (cVar1 == ' ');
    if (cVar1 == '+') {
      if (-1 < (char)uVar5) {
        uVar5 = uVar5 & 0xfffffffc | 0x80;
        goto LAB_00c71306;
      }
    }
    else if (cVar1 == 'b') {
LAB_00c712ce: ;
      if ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) {
        (*(char * PTR32 *)&gen_args[1]) = (char *)0x1;
        goto LAB_00c71306;
      }
    }
    else if (cVar1 == 'c') {
      if (uVar4 == 0) {
        uVar4 = 1;
        uVar5 = uVar5 | 0x4000;
        goto LAB_00c71306;
      }
    }
    else {
      if (cVar1 != 'n') {
        if (cVar1 == 't') goto LAB_00c712ce;
        goto LAB_00c71218;
      }
      if (uVar4 == 0) {
        uVar5 = uVar5 & 0xffffbfff;
        uVar4 = uVar7;
        goto LAB_00c71306;
      }
    }
    uVar6 = 0;
    goto LAB_00c71306;
  }
  goto LAB_00c71218;
LAB_00c71310: ;
  for (; *pcVar3 == ' '; pcVar3 = pcVar3 + 1) {
  }
  if (*pcVar3 == '\0') {
    in_esi = F_00c5e47f();
    (*(char * PTR32 *)&gen_args[1]) = (char *)in_esi;
    if (in_esi == (undefined *)0x0) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x18;
      return (undefined *)0x0;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
    (*(int *)(((char *)(in_esi) + 12))) = uVar5;
    (*(int *)(((char *)(in_esi) + 16))) = (*(int *)&gen_args[0]);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    F_00c7136c(in_esi);
    return in_esi;
  }
LAB_00c71218: ;
  piVar2 = F_00c51f85();
  *piVar2 = 0x16;
LAB_00c71223: ;
  F_00c4c305();
  return (undefined *)0x0;
}

/* ref: FUN_00c71369 */
uint F_00c71369(unsigned int gen_a0)
{
  GEN_ENTER(0xc71369u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: FUN_00c7136c */
uint F_00c7136c(unsigned int gen_a0)
{
  GEN_ENTER(0xc7136cu, gen_a0, 0u, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: __pipe */
int F_00c71374(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc71374u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte * pbVar1;
  ulong * puVar2;
  int * piVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint in_edi;
  int iVar6;
  int iVar7;
  uint in_esi;
  int iVar8;
  int eVar9;
  
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x2c;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = &REFG(undefined, 0x12f68c0);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xc71380;
  (*(int *)(gen_frame + 0x20)) = 0;
  if ((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) {
    puVar2 = F_00c51f98();
    *puVar2 = 0;
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    return -1;
  }
  (*(int * PTR32 *)&gen_args[0])[1] = -1;
  *(*(int * PTR32 *)&gen_args[0]) = -1;
  if ((((*(int *)&gen_args[2]) & 0xffff3f7fU) != 0) || (((*(int *)&gen_args[2]) & 0xc000U) == 0xc000)) {
    puVar2 = F_00c51f98();
    *puVar2 = 0;
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    return -1;
  }
  (*(DWORD *)((char *)((undefined *)(gen_frame + 0x0)))) = 0xc;
  (*(LPVOID *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = (LPVOID)0x0;
  (*(BOOL *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = (uint)(((*(int *)&gen_args[2]) & 0x80U) == 0);
  BVar4 = gen_imp_CreatePipe(&(*(HANDLE *)(gen_frame + 0x10)),&(*(HANDLE *)(gen_frame + 0xc)),((undefined *)(gen_frame + 0x0)),(*(uint *)&gen_args[1]));
  if (BVar4 == 0) {
    DVar5 = gen_imp_GetLastError();
    F_00c51fab(DVar5);
    return -1;
  }
  in_edi = F_00c6d8dd();
  (*(uint *)(gen_frame + 0x1c)) = in_edi;
  if (in_edi != 0xffffffff) {
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
    iVar6 = (int)in_edi >> 5;
    piVar3 = &REFG(undefined4, 0x15e41a0) + iVar6;
    iVar7 = (in_edi & 0x1f) * 0x40;
    *(undefined1 *)(*piVar3 + 4 + iVar7) = 0x89;
    pbVar1 = (byte *)(*piVar3 + 0x24 + iVar7);
    *pbVar1 = *pbVar1 & 0x80;
    pbVar1 = (byte *)(*piVar3 + 0x24 + iVar7);
    *pbVar1 = *pbVar1 & 0x7f;
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0xfffffffe;
    F_00c71593(in_edi);
    in_esi = F_00c6d8dd();
    (*(uint *)(gen_frame + 0x14)) = in_esi;
    if (in_esi != 0xffffffff) {
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x1;
      iVar7 = (int)in_esi >> 5;
      piVar3 = &REFG(undefined4, 0x15e41a0) + iVar7;
      iVar8 = (in_esi & 0x1f) * 0x40;
      *(undefined1 *)(iVar8 + 4 + *piVar3) = 0x89;
      pbVar1 = (byte *)(iVar8 + 0x24 + *piVar3);
      *pbVar1 = *pbVar1 & 0x80;
      pbVar1 = (byte *)(iVar8 + 0x24 + *piVar3);
      *pbVar1 = *pbVar1 & 0x7f;
      (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0xfffffffe;
      F_00c715a3(in_esi);
      eVar9 = F_00c6dc89(&(*(int *)(gen_frame + 0x18)));
      if (eVar9 != 0) {
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
      if ((((*(int *)&gen_args[2]) & 0x8000U) != 0) || ((((*(int *)&gen_args[2]) & 0x4000U) == 0 && ((*(int *)(gen_frame + 0x18)) == 0x8000)))) {
        pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar6] + 4 + (in_edi & 0x1f) * 0x40)));
        *pbVar1 = *pbVar1 & 0x7f;
        pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar7] + 4 + (in_esi & 0x1f) * 0x40)));
        *pbVar1 = *pbVar1 & 0x7f;
      }
      if (((*(int *)&gen_args[2]) & 0x80U) != 0) {
        pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar6] + 4 + (in_edi & 0x1f) * 0x40)));
        *pbVar1 = *pbVar1 | 0x10;
        pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar7] + 4 + (in_esi & 0x1f) * 0x40)));
        *pbVar1 = *pbVar1 | 0x10;
      }
      F_00c6d6a7(in_edi,(int)(*(HANDLE *)(gen_frame + 0x10)));
      F_00c6d6a7(in_esi,(int)(*(HANDLE *)(gen_frame + 0xc)));
      goto LAB_00c715de;
    }
    *((undefined1 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar6] + 4 + (in_edi & 0x1f) * 0x40))) = 0;
  }
  (*(int *)(gen_frame + 0x20)) = 1;
  in_esi = (*(uint *)(gen_frame + 0x14));
LAB_00c715de: ;
  if ((*(int *)(gen_frame + 0x20)) != 0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x18;
    gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x10)));
    gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0xc)));
    puVar2 = F_00c51f98();
    *puVar2 = 0;
    return -1;
  }
  *(*(int * PTR32 *)&gen_args[0]) = in_edi;
  (*(int * PTR32 *)&gen_args[0])[1] = in_esi;
  return 0;
}

/* ref: FUN_00c7158e */
unsigned int F_00c7158e(unsigned int gen_a0)
{
  GEN_ENTER(0xc7158eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + -0x20));
  return 0;
}

/* ref: FUN_00c71593 */
unsigned int F_00c71593(unsigned int gen_a0)
{
  GEN_ENTER(0xc71593u, gen_a0, 0u, 0u, 0u);
  int in_edi = (int)gen_a0;
  F_00c6d8b6(in_edi);
  return 0;
}

/* ref: FUN_00c7159b */
unsigned int F_00c7159b(unsigned int gen_a0)
{
  GEN_ENTER(0xc7159bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  if (*(int *)(in_ebp + -0x28) != -1) {
    F_00c6d8b6(*(int *)(in_ebp + -0x28));
  }
  return 0;
}

/* ref: FUN_00c715a3 */
unsigned int F_00c715a3(unsigned int gen_a0)
{
  GEN_ENTER(0xc715a3u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  if (in_esi != -1) {
    F_00c6d8b6(in_esi);
  }
  return 0;
}

/* ref: __cwait */
int F_00c7161a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7161au, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int hProcess;
  DWORD DVar1;
  BOOL BVar2;
  int * piVar3;
  ulong * puVar4;
  int iVar5;
  
  hProcess = (*(int *)&gen_args[1]);
  if (((*(int *)&gen_args[1]) == -1) || ((*(int *)&gen_args[1]) == -2)) {
    piVar3 = F_00c51f85();
    *piVar3 = 10;
    iVar5 = -1;
  }
  else {
    DVar1 = gen_imp_WaitForSingleObject((HANDLE)(*(int *)&gen_args[1]),0xffffffff);
    if ((DVar1 != 0) ||
       (BVar2 = gen_imp_GetExitCodeProcess((HANDLE)hProcess,(LPDWORD)&(*(int *)&gen_args[1])), iVar5 = hProcess,
       BVar2 == 0)) {
      DVar1 = gen_imp_GetLastError();
      if (DVar1 == 6) {
        piVar3 = F_00c51f85();
        *piVar3 = 10;
        puVar4 = F_00c51f98();
        *puVar4 = 6;
      }
      else {
        DVar1 = gen_imp_GetLastError();
        F_00c51fab(DVar1);
      }
      (*(int *)&gen_args[1]) = -1;
      iVar5 = -1;
    }
    gen_imp_CloseHandle((HANDLE)hProcess);
    if ((*(int * PTR32 *)&gen_args[0]) != (int *)0x0) {
      *(*(int * PTR32 *)&gen_args[0]) = (*(int *)&gen_args[1]);
    }
  }
  return iVar5;
}

/* ref: write_char_00c716ab */
uint F_00c716ab(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc716abu, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (((*(byte *)(in_eax + 0xc) & 0x40) == 0) || (*(int *)(in_eax + 8) != 0)) {
    in_eax = F_00c7b002(param_3,in_eax);
    if ((short)in_eax == -1) {
      *in_esi = -1;
      return in_eax;
    }
  }
  *in_esi = *in_esi + 1;
  return in_eax;
}

/* ref: write_multi_char_00c716da */
uint F_00c716da(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc716dau, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 + -1;
    piVar1 = (int *)F_00c716ab(param_4,in_eax,param_2);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c71701 */
uint F_00c71701(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc71701u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ebx = (int)gen_a1;
  uint * in_edi = (uint *)(uintptr_t)gen_a2;
  ushort * param_4 = (ushort *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*(byte *)(in_ebx + 0xc) & 0x40) == 0) || (*(int *)(in_ebx + 8) != 0)) {
    *in_edi = 0;
    if (0 < (int)param_5) {
      do {
        param_5 = param_5 - 1;
        uVar1 = F_00c716ab(in_ebx,in_eax,(uint)*param_4);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c716ab(in_ebx,in_eax,0x3f);
        }
      } while (0 < (int)param_5);
      if (*in_edi != 0) {
        return uVar1;
      }
    }
    *in_edi = uVar2;
  }
  else {
    *in_eax = *in_eax + param_5;
    uVar2 = param_5;
  }
  return uVar2;
}

/* ref: FUN_00c71768 */
uint F_00c71768(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc71768u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x480];
  ushort uVar1;
  wchar_t wVar2;
  short * psVar3;
  short sVar4;
  ulonglong uVar5;
  int * piVar6;
  uint uVar7;
  gen_size32 sVar8;
  wchar_t * pwVar9;
  int iVar10;
  code * pcVar11;
  byte bVar12;
  uint uVar13;
  ushort * puVar14;
  wchar_t * pwVar15;
  wchar_t * pwVar16;
  ushort * puVar17;
  bool bVar18;
  uint * puVar19;
  undefined4 uVar20;
  undefined2 uVar21;
  undefined * p_Var22;
  
  (*(uint *)(gen_frame + 0x478)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x47c);
  (*(int *)(gen_frame + 0x50)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = param_4;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x74)) = 0;
  (*(uint *)(gen_frame + 0x54)) = 0;
  (*(uint *)(gen_frame + 0x70)) = 0;
  (*(int *)(gen_frame + 0x58)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(int *)(gen_frame + 0x4c)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x30)),param_3);
  piVar6 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar6;
  if ((param_1 == 0) || (param_2 == (ushort *)0x0)) {
LAB_00c717de: ;
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x30)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) & 0xfffffffd;
    }
    uVar7 = 0xffffffff;
  }
  else {
    uVar1 = *param_2;
    (*(uint *)(gen_frame + 0x5c)) = (uint)uVar1;
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(gen_size32 *)(gen_frame + 0x68)) = 0;
    (*(uint *)(gen_frame + 0x40)) = 0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x24)) = (wchar_t *)0x0;
    pwVar16 = param_4;
    puVar14 = param_2;
    if (uVar1 != 0) {
      do {
        puVar17 = puVar14 + 1;
        (*(ushort * PTR32 *)(gen_frame + 0x1c)) = puVar17;
        if ((int)(*(uint *)(gen_frame + 0x64)) < 0) break;
        sVar4 = (short)(*(uint *)(gen_frame + 0x5c));
        if ((ushort)(sVar4 - 0x20U) < 0x59) {
          uVar7 = (byte)(&REFG(undefined, 0x1119ec8))[(*(uint *)(gen_frame + 0x5c))] & 0xf;
        }
        else {
          uVar7 = 0;
        }
        uVar7 = (uint)((byte)(&REFG(undefined, 0x1119ee8))[(*(uint *)(gen_frame + 0x40)) + uVar7 * 9] >> 4);
        (*(uint *)(gen_frame + 0x40)) = uVar7;
        if (uVar7 == 8) goto LAB_00c717de;
        pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
        puVar17 = (*(ushort * PTR32 *)(gen_frame + 0x1c));
        switch((unsigned int)(uintptr_t)(uVar7)) {
        case 0: ;
switchD_00c71898_caseD_0: ;
          (*(int *)(gen_frame + 0x4c)) = 1;
          F_00c716ab((*(int *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x5c)));
          pwVar15 = pwVar16;
          break;
        case 1: ;
          (*(uint *)(gen_frame + 0x70)) = 0xffffffff;
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          (*(int *)(gen_frame + 0x2c)) = 0;
          (*(uint *)(gen_frame + 0x54)) = 0;
          (*(int *)(gen_frame + 0x58)) = 0;
          (*(uint *)(gen_frame + 0x74)) = 0;
          (*(int *)(gen_frame + 0x4c)) = 0;
          pwVar15 = pwVar16;
          break;
        case 2: ;
          if ((*(uint *)(gen_frame + 0x5c)) == 0x20) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 2;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x5c)) == 0x23) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x80;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x5c)) == 0x2b) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 1;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x5c)) == 0x2d) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 4;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x5c)) == 0x30) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 8;
            pwVar15 = pwVar16;
          }
          break;
        case 3: ;
          if (sVar4 == 0x2a) {
            uVar7 = *(uint *)pwVar16;
            pwVar15 = pwVar16 + 2;
            (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar15;
            (*(uint *)(gen_frame + 0x54)) = uVar7;
            if ((int)uVar7 < 0) {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 4;
              (*(uint *)(gen_frame + 0x54)) = -uVar7;
            }
          }
          else {
            (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x54)) * 10 + -0x30 + (*(uint *)(gen_frame + 0x5c));
            pwVar15 = pwVar16;
          }
          break;
        case 4: ;
          (*(uint *)(gen_frame + 0x70)) = 0;
          pwVar15 = pwVar16;
          break;
        case 5: ;
          if (sVar4 == 0x2a) {
            pwVar15 = pwVar16 + 2;
            (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar15;
            (*(uint *)(gen_frame + 0x70)) = *(uint *)pwVar16;
            if ((int)*(uint *)pwVar16 < 0) {
              (*(uint *)(gen_frame + 0x70)) = 0xffffffff;
            }
          }
          else {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) * 10 + -0x30 + (*(uint *)(gen_frame + 0x5c));
            pwVar15 = pwVar16;
          }
          break;
        case 6: ;
          if ((*(uint *)(gen_frame + 0x5c)) == 0x49) {
            uVar1 = *puVar17;
            if ((uVar1 == 0x36) && (puVar14[2] == 0x34)) {
              puVar17 = puVar14 + 3;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x8000;
              pwVar15 = pwVar16;
            }
            else if ((uVar1 == 0x33) && (puVar14[2] == 0x32)) {
              puVar17 = puVar14 + 3;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) & 0xffff7fff;
              pwVar15 = pwVar16;
            }
            else {
              pwVar15 = pwVar16;
              if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                  ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
                (*(uint *)(gen_frame + 0x40)) = 0;
                goto switchD_00c71898_caseD_0;
              }
            }
          }
          else if ((*(uint *)(gen_frame + 0x5c)) == 0x68) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x20;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x5c)) == 0x6c) {
            if (*puVar17 == 0x6c) {
              puVar17 = puVar14 + 2;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x1000;
              pwVar15 = pwVar16;
            }
            else {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x10;
              pwVar15 = pwVar16;
            }
          }
          else {
            pwVar15 = pwVar16;
            if ((*(uint *)(gen_frame + 0x5c)) == 0x77) {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x800;
            }
          }
          break;
        case 7: ;
          if ((*(uint *)(gen_frame + 0x5c)) < 0x65) {
            if ((*(uint *)(gen_frame + 0x5c)) == 100) {
LAB_00c71d92: ;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x40;
LAB_00c71d99: ;
              (*(uint *)(gen_frame + 0x5c)) = 10;
LAB_00c71da3: ;
              if ((((*(uint *)(gen_frame + 0x74)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x74)) & 0x1000) == 0)) {
                pwVar15 = pwVar16 + 2;
                if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
                  uVar7 = *(uint *)pwVar16;
                  if (((*(uint *)(gen_frame + 0x74)) & 0x40) == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = (int)uVar7 >> 0x1f;
                  }
                  goto LAB_00c71f95;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar15;
                if (((*(uint *)(gen_frame + 0x74)) & 0x40) == 0) {
                  uVar7 = (uint)(ushort)*pwVar16;
                }
                else {
                  uVar7 = (uint)*pwVar16;
                }
                uVar13 = (int)uVar7 >> 0x1f;
              }
              else {
                pwVar15 = pwVar16 + 4;
                uVar7 = *(uint *)pwVar16;
                uVar13 = *(uint *)(pwVar16 + 2);
LAB_00c71f95: ;
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar15;
              }
              if (((((*(uint *)(gen_frame + 0x74)) & 0x40) != 0) && ((int)uVar13 < 1)) && ((int)uVar13 < 0)) {
                bVar18 = uVar7 != 0;
                uVar7 = -uVar7;
                uVar13 = -(uVar13 + bVar18);
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x100;
              }
              if (((*(uint *)(gen_frame + 0x74)) & 0x9000) == 0) {
                uVar13 = 0;
              }
              if ((int)(*(uint *)(gen_frame + 0x70)) < 0) {
                (*(uint *)(gen_frame + 0x70)) = 1;
              }
              else {
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) & 0xfffffff7;
                if (0x200 < (int)(*(uint *)(gen_frame + 0x70))) {
                  (*(uint *)(gen_frame + 0x70)) = 0x200;
                }
              }
              if (uVar7 == 0 && uVar13 == 0) {
                (*(int *)(gen_frame + 0x58)) = 0;
              }
              pwVar16 = &(*(undefined2 *)(gen_frame + 0x277));
              uVar5 = CONCAT44(uVar13,uVar7);
              while ((uVar7 = (*(uint *)(gen_frame + 0x70)), (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1, 0 < (int)uVar7 || (uVar5 != 0)))
              {
                uVar7 = (int)(uVar5 % (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x5c))) + 0x30;
                bVar12 = (byte)uVar7;
                if (0x39 < uVar7) {
                  bVar12 = bVar12 + (char)(*(undefined4 *)(gen_frame + 0x28));
                }
                *(byte *)pwVar16 = bVar12;
                pwVar16 = (wchar_t *)((int)pwVar16 + -1);
                uVar5 = uVar5 / (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x5c));
              }
              sVar8 = (int)&(*(undefined2 *)(gen_frame + 0x277)) - (int)pwVar16;
              (*(gen_size32 *)(gen_frame + 0x68)) = sVar8;
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((int)pwVar16 + 1);
              if ((((*(uint *)(gen_frame + 0x74)) & 0x200) != 0) &&
                 ((sVar8 == 0 || (*(byte *)((int)pwVar16 + 1) != 0x30)))) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
                (*(gen_size32 *)(gen_frame + 0x68)) = (int)&(*(undefined2 *)(gen_frame + 0x277)) - (int)pwVar16 + 1;
                *(byte *)pwVar16 = 0x30;
              }
            }
            else {
              if ((*(uint *)(gen_frame + 0x5c)) < 0x54) {
                if ((*(uint *)(gen_frame + 0x5c)) == 0x53) {
                  if (((*(uint *)(gen_frame + 0x74)) & 0x830) == 0) {
                    (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x20;
                  }
                  goto LAB_00c71b70;
                }
                if ((*(uint *)(gen_frame + 0x5c)) != 0x41) {
                  if ((*(uint *)(gen_frame + 0x5c)) == 0x43) {
                    if (((*(uint *)(gen_frame + 0x74)) & 0x830) == 0) {
                      (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x20;
                    }
                    goto LAB_00c71c1a;
                  }
                  if (((*(uint *)(gen_frame + 0x5c)) != 0x45) && ((*(uint *)(gen_frame + 0x5c)) != 0x47)) goto LAB_00c720d4;
                }
                (*(undefined4 *)(gen_frame + 0x14)) = 1;
                (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x5c)) + 0x20;
LAB_00c71b06: ;
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x40;
                pwVar15 = ((wchar_t *)(gen_frame + 0x78));
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar15;
                (*(gen_size32 *)(gen_frame + 0x68)) = 0x200;
                if ((int)(*(uint *)(gen_frame + 0x70)) < 0) {
                  (*(uint *)(gen_frame + 0x70)) = 6;
                }
                else if ((*(uint *)(gen_frame + 0x70)) == 0) {
                  if ((short)(*(uint *)(gen_frame + 0x5c)) == 0x67) {
                    (*(uint *)(gen_frame + 0x70)) = 1;
                  }
                }
                else {
                  if (0x200 < (int)(*(uint *)(gen_frame + 0x70))) {
                    (*(uint *)(gen_frame + 0x70)) = 0x200;
                  }
                  if (0xa3 < (int)(*(uint *)(gen_frame + 0x70))) {
                    sVar8 = (*(uint *)(gen_frame + 0x70)) + 0x15d;
                    pwVar9 = F_00c54c2e(sVar8);
                    (*(wchar_t * PTR32 *)(gen_frame + 0x24)) = pwVar9;
                    if (pwVar9 == (wchar_t *)0x0) {
                      (*(uint *)(gen_frame + 0x70)) = 0xa3;
                    }
                    else {
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar9;
                      (*(gen_size32 *)(gen_frame + 0x68)) = sVar8;
                      pwVar15 = pwVar9;
                    }
                  }
                }
                (*(uint *)(gen_frame + 0xc)) = *(uint *)pwVar16;
                (*(uint *)(gen_frame + 0x10)) = *(uint *)(pwVar16 + 2);
                p_Var22 = ((undefined *)(gen_frame + 0x30));
                iVar10 = (int)(char)(*(uint *)(gen_frame + 0x5c));
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar16 + 4;
                puVar19 = &(*(uint *)(gen_frame + 0xc));
                pwVar16 = pwVar15;
                sVar8 = (*(gen_size32 *)(gen_frame + 0x68));
                uVar20 = (*(undefined4 *)(gen_frame + 0x14));
                uVar7 = (*(uint *)(gen_frame + 0x70));
                pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
                (*pcVar11)(puVar19,pwVar16,sVar8,iVar10,uVar7,uVar20,p_Var22);
                uVar7 = (*(uint *)(gen_frame + 0x74)) & 0x80;
                if ((uVar7 != 0) && ((*(uint *)(gen_frame + 0x70)) == 0)) {
                  p_Var22 = ((undefined *)(gen_frame + 0x30));
                  pwVar16 = pwVar15;
                  pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                  (*pcVar11)(pwVar16,p_Var22);
                }
                if (((short)(*(uint *)(gen_frame + 0x5c)) == 0x67) && (uVar7 == 0)) {
                  p_Var22 = ((undefined *)(gen_frame + 0x30));
                  pwVar16 = pwVar15;
                  pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                  (*pcVar11)(pwVar16,p_Var22);
                }
                if ((byte)*pwVar15 == 0x2d) {
                  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x100;
                  pwVar15 = (wchar_t *)((int)pwVar15 + 1);
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar15;
                }
              }
              else {
                if ((*(uint *)(gen_frame + 0x5c)) == 0x58) goto LAB_00c71ee0;
                if ((*(uint *)(gen_frame + 0x5c)) != 0x5a) {
                  if ((*(uint *)(gen_frame + 0x5c)) == 0x61) goto LAB_00c71b06;
                  if ((*(uint *)(gen_frame + 0x5c)) != 99) goto LAB_00c720d4;
LAB_00c71c1a: ;
                  wVar2 = *pwVar16;
                  (*(int *)(gen_frame + 0x4c)) = 1;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar16 + 2;
                  (*(uint *)(gen_frame + 0x20)) = (uint)(ushort)wVar2;
                  if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
                    ((wchar_t *)(gen_frame + 0x78))[0] = wVar2;
                  }
                  else {
                    ((char *)(gen_frame + 0x44))[0] = (char)wVar2;
                    ((char *)(gen_frame + 0x44))[1] = 0;
                    iVar10 = F_00c7b204(((wchar_t *)(gen_frame + 0x78)),((char *)(gen_frame + 0x44)),
                                        (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x30)))) + 160) + (3) * 4))))),
                                        &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x30)))));
                    if (iVar10 < 0) {
                      (*(int *)(gen_frame + 0x2c)) = 1;
                    }
                  }
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = ((wchar_t *)(gen_frame + 0x78));
                  (*(gen_size32 *)(gen_frame + 0x68)) = 1;
                  goto LAB_00c720d4;
                }
                psVar3 = *(short * PTR32 *)pwVar16;
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar16 + 2;
                if ((psVar3 != (short *)0x0) && (*(wchar_t * PTR32 *)(psVar3 + 2) != (wchar_t *)0x0)) {
                  sVar8 = (gen_size32)*psVar3;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)(psVar3 + 2);
                  if (((*(uint *)(gen_frame + 0x74)) & 0x800) != 0) {
                    iVar10 = sVar8 - ((int)sVar8 >> 0x1f);
                    (*(int *)(gen_frame + 0x4c)) = 1;
                    goto LAB_00c720cc;
                  }
                  (*(int *)(gen_frame + 0x4c)) = 0;
                  goto LAB_00c720ce;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                pwVar15 = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              }
              sVar8 = F_00c552f0((char *)pwVar15);
LAB_00c720ce: ;
              (*(gen_size32 *)(gen_frame + 0x68)) = sVar8;
            }
LAB_00c720d4: ;
            if ((*(int *)(gen_frame + 0x2c)) == 0) {
              if (((*(uint *)(gen_frame + 0x74)) & 0x40) != 0) {
                if (((*(uint *)(gen_frame + 0x74)) & 0x100) == 0) {
                  if (((*(uint *)(gen_frame + 0x74)) & 1) == 0) {
                    if (((*(uint *)(gen_frame + 0x74)) & 2) == 0) goto LAB_00c72116;
                    uVar21 = 0x20;
                  }
                  else {
                    uVar21 = 0x2b;
                  }
                }
                else {
                  uVar21 = 0x2d;
                }
                (*(undefined2 *)(gen_frame + 0x48)) = uVar21;
                (*(int *)(gen_frame + 0x58)) = 1;
              }
LAB_00c72116: ;
              uVar7 = ((*(uint *)(gen_frame + 0x54)) - (*(gen_size32 *)(gen_frame + 0x68))) - (*(int *)(gen_frame + 0x58));
              (*(uint *)(gen_frame + 0x5c)) = uVar7;
              if (((*(uint *)(gen_frame + 0x74)) & 0xc) == 0) {
                do {
                  if ((int)uVar7 < 1) break;
                  uVar7 = uVar7 - 1;
                  F_00c716ab((*(int *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x64)),0x20);
                } while ((*(uint *)(gen_frame + 0x64)) != 0xffffffff);
              }
              iVar10 = (*(int *)(gen_frame + 0x50));
              F_00c71701(&(*(uint *)(gen_frame + 0x64)),(*(int *)(gen_frame + 0x50)),(*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined2 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x58)));
              if ((((*(uint *)(gen_frame + 0x74)) & 8) != 0) && (uVar7 = (*(uint *)(gen_frame + 0x5c)), ((*(uint *)(gen_frame + 0x74)) & 4) == 0)) {
                do {
                  if ((int)uVar7 < 1) break;
                  uVar7 = uVar7 - 1;
                  F_00c716ab(iVar10,&(*(uint *)(gen_frame + 0x64)),0x30);
                } while ((*(uint *)(gen_frame + 0x64)) != 0xffffffff);
              }
              if (((*(int *)(gen_frame + 0x4c)) == 0) && (sVar8 = (*(gen_size32 *)(gen_frame + 0x68)), pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)), 0 < (int)(*(gen_size32 *)(gen_frame + 0x68))))
              {
                do {
                  sVar8 = sVar8 - 1;
                  iVar10 = F_00c7b204((wchar_t *)&(*(uint *)(gen_frame + 0x20)),(char *)pwVar16,
                                      (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x30)))) + 160) + (3) * 4))))),
                                      &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x30)))));
                  if (iVar10 < 1) {
                    (*(uint *)(gen_frame + 0x64)) = 0xffffffff;
                    break;
                  }
                  F_00c716ab((*(int *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x20)));
                  pwVar16 = (wchar_t *)((int)pwVar16 + iVar10);
                } while (0 < (int)sVar8);
              }
              else {
                F_00c71701(&(*(uint *)(gen_frame + 0x64)),(*(int *)(gen_frame + 0x50)),(*(int * PTR32 *)(gen_frame + 0x18)),(*(wchar_t * PTR32 *)(gen_frame + 0x6c)),(*(gen_size32 *)(gen_frame + 0x68)));
              }
              if ((-1 < (int)(*(uint *)(gen_frame + 0x64))) && (uVar7 = (*(uint *)(gen_frame + 0x5c)), ((*(uint *)(gen_frame + 0x74)) & 4) != 0)) {
                do {
                  if ((int)uVar7 < 1) break;
                  uVar7 = uVar7 - 1;
                  F_00c716ab((*(int *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x64)),0x20);
                } while ((*(uint *)(gen_frame + 0x64)) != 0xffffffff);
              }
            }
          }
          else {
            if (0x70 < (*(uint *)(gen_frame + 0x5c))) {
              if ((*(uint *)(gen_frame + 0x5c)) == 0x73) {
LAB_00c71b70: ;
                uVar7 = (*(uint *)(gen_frame + 0x70));
                if ((*(uint *)(gen_frame + 0x70)) == 0xffffffff) {
                  uVar7 = 0x7fffffff;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar16 + 2;
                pwVar16 = *(wchar_t * PTR32 *)pwVar16;
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
                if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
                  if (pwVar16 == (wchar_t *)0x0) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                  }
                  (*(int *)(gen_frame + 0x4c)) = 1;
                  for (pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)); (uVar7 != 0 && (uVar7 = uVar7 - 1, *pwVar16 != L'\0'));
                      pwVar16 = pwVar16 + 1) {
                  }
                  iVar10 = (int)pwVar16 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x6c));
LAB_00c720cc: ;
                  (*(int *)(gen_frame + 0x4c)) = 1;
                  sVar8 = iVar10 >> 1;
                  goto LAB_00c720ce;
                }
                if (pwVar16 == (wchar_t *)0x0) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                }
                (*(gen_size32 *)(gen_frame + 0x68)) = 0;
                pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                if (0 < (int)uVar7) {
                  do {
                    if ((byte)*pwVar16 == 0) break;
                    iVar10 = F_00c6dfe8((uint)(byte)*pwVar16,&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x30)))));
                    if (iVar10 != 0) {
                      pwVar16 = (wchar_t *)((int)pwVar16 + 1);
                    }
                    pwVar16 = (wchar_t *)((int)pwVar16 + 1);
                    sVar8 = (*(gen_size32 *)(gen_frame + 0x68)) + 1;
                    (*(gen_size32 *)(gen_frame + 0x68)) = sVar8;
                  } while ((int)sVar8 < (int)uVar7);
                }
                goto LAB_00c720d4;
              }
              if ((*(uint *)(gen_frame + 0x5c)) == 0x75) goto LAB_00c71d99;
              if ((*(uint *)(gen_frame + 0x5c)) != 0x78) goto LAB_00c720d4;
              (*(undefined4 *)(gen_frame + 0x28)) = 0x27;
LAB_00c71f10: ;
              (*(uint *)(gen_frame + 0x5c)) = 0x10;
              if (((*(uint *)(gen_frame + 0x74)) & 0x80) != 0) {
                (*(undefined2 *)(gen_frame + 0x48)) = 0x30;
                (*(short *)(gen_frame + 0x4a)) = (short)(*(undefined4 *)(gen_frame + 0x28)) + 0x51;
                (*(int *)(gen_frame + 0x58)) = 2;
              }
              goto LAB_00c71da3;
            }
            if ((*(uint *)(gen_frame + 0x5c)) == 0x70) {
              (*(uint *)(gen_frame + 0x70)) = 8;
LAB_00c71ee0: ;
              (*(undefined4 *)(gen_frame + 0x28)) = 7;
              goto LAB_00c71f10;
            }
            if ((*(uint *)(gen_frame + 0x5c)) < 0x65) goto LAB_00c720d4;
            if ((*(uint *)(gen_frame + 0x5c)) < 0x68) goto LAB_00c71b06;
            if ((*(uint *)(gen_frame + 0x5c)) == 0x69) goto LAB_00c71d92;
            if ((*(uint *)(gen_frame + 0x5c)) != 0x6e) {
              if ((*(uint *)(gen_frame + 0x5c)) != 0x6f) goto LAB_00c720d4;
              (*(uint *)(gen_frame + 0x5c)) = 8;
              if (((*(uint *)(gen_frame + 0x74)) & 0x80) != 0) {
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x200;
              }
              goto LAB_00c71da3;
            }
            (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar16 + 2;
            puVar19 = *(uint * PTR32 *)pwVar16;
            uVar7 = F_00c51967();
            if (uVar7 == 0) goto LAB_00c717de;
            if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
              *puVar19 = (*(uint *)(gen_frame + 0x64));
            }
            else {
              *(undefined2 *)puVar19 = (undefined2)(*(uint *)(gen_frame + 0x64));
            }
            (*(int *)(gen_frame + 0x2c)) = 1;
          }
          pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
          puVar17 = (*(ushort * PTR32 *)(gen_frame + 0x1c));
          if ((*(wchar_t * PTR32 *)(gen_frame + 0x24)) != (wchar_t *)0x0) {
            F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x24)));
            (*(wchar_t * PTR32 *)(gen_frame + 0x24)) = (wchar_t *)0x0;
            pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
            puVar17 = (*(ushort * PTR32 *)(gen_frame + 0x1c));
          }
        }
        (*(uint *)(gen_frame + 0x5c)) = (uint)*puVar17;
        pwVar16 = pwVar15;
        puVar14 = puVar17;
      } while (*puVar17 != 0);
      if (((*(uint *)(gen_frame + 0x40)) != 0) && ((*(uint *)(gen_frame + 0x40)) != 7)) goto LAB_00c717de;
    }
    uVar7 = (*(uint *)(gen_frame + 0x64));
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x30)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) & 0xfffffffd;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x478)) ^ (uint)(uint)(gen_frame + 0x47c));
  return uVar7;
}

/* ref: __validate_param_reuseW */
uint F_00c72328(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc72328u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = (short)param_1[2];
  if ((sVar1 == 0x70) || ((short)param_3 == 0x70)) {
    return (uint)(sVar1 == (short)param_3);
  }
  if ((sVar1 == 0x73) || (sVar1 == 0x53)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if (((short)param_3 == 0x73) || ((short)param_3 == 0x53)) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != iVar2) {
      return 0;
    }
    if (((~((uint)param_1[3] >> 5) ^ ~(param_4 >> 5)) & 1) != 0) {
      return 0;
    }
    return 1;
  }
  if (iVar2 != 0) {
    return 0;
  }
  if (sVar1 == 100) {
LAB_00c723e9: ;
    iVar3 = 1;
  }
  else {
    if ((((((sVar1 != 0x69) && (sVar1 != 0x6f)) && (sVar1 != 0x75)) &&
         (((sVar1 != 0x78 && (sVar1 != 0x58)) &&
          (((short)param_3 != 100 && (((short)param_3 != 0x69 && ((short)param_3 != 0x6f)))))))) &&
        ((short)param_3 != 0x75)) && (((short)param_3 != 0x78 && ((short)param_3 != 0x58))))
    goto LAB_00c72433;
    if ((sVar1 == 100) ||
       ((((sVar1 == 0x69 || (sVar1 == 0x6f)) || (sVar1 == 0x75)) ||
        ((sVar1 == 0x78 || (sVar1 == 0x58)))))) goto LAB_00c723e9;
    iVar3 = 0;
  }
  if ((((short)param_3 == 100) || ((short)param_3 == 0x69)) ||
     (((short)param_3 == 0x6f ||
      ((((short)param_3 == 0x75 || ((short)param_3 == 0x78)) || ((short)param_3 == 0x58)))))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (((iVar3 != iVar2) || (((param_1[3] ^ param_4) & 0x10000) != 0)) ||
     (((param_1[3] ^ param_4) & 0x20) != 0)) {
    return 0;
  }
LAB_00c72433: ;
  return (uint)(*param_1 == param_2);
}

/* ref: write_char_00c72473 */
uint F_00c72473(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc72473u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (((*(byte *)(in_eax + 0xc) & 0x40) == 0) || (*(int *)(in_eax + 8) != 0)) {
    in_eax = F_00c7b002(param_3,in_eax);
    if ((short)in_eax == -1) {
      *in_esi = -1;
      return in_eax;
    }
  }
  *in_esi = *in_esi + 1;
  return in_eax;
}

/* ref: write_multi_char_00c724a2 */
uint F_00c724a2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc724a2u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 + -1;
    piVar1 = (int *)F_00c72473(param_4,in_eax,param_2);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c724c9 */
uint F_00c724c9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc724c9u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ebx = (int)gen_a1;
  uint * in_edi = (uint *)(uintptr_t)gen_a2;
  ushort * param_4 = (ushort *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*(byte *)(in_ebx + 0xc) & 0x40) == 0) || (*(int *)(in_ebx + 8) != 0)) {
    *in_edi = 0;
    if (0 < (int)param_5) {
      do {
        param_5 = param_5 - 1;
        uVar1 = F_00c72473(in_ebx,in_eax,(uint)*param_4);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c72473(in_ebx,in_eax,0x3f);
        }
      } while (0 < (int)param_5);
      if (*in_edi != 0) {
        return uVar1;
      }
    }
    *in_edi = uVar2;
  }
  else {
    *in_eax = *in_eax + param_5;
    uVar2 = param_5;
  }
  return uVar2;
}

/* ref: FUN_00c72530 */
uint F_00c72530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc72530u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xad0];
  ushort uVar1;
  wchar_t wVar2;
  int iVar3;
  short sVar4;
  ulonglong uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  short * psVar10;
  gen_size32 sVar11;
  wchar_t * pwVar12;
  code * pcVar13;
  byte bVar14;
  ushort * puVar15;
  uint * puVar16;
  wchar_t * pwVar17;
  int iVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined2 uVar21;
  undefined * p_Var22;
  
  (*(uint *)(gen_frame + 0xac8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xacc);
  (*(int *)(gen_frame + 0x2c)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = param_4;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x84)) = 0;
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x5c)),param_3);
  (*(int *)(gen_frame + 0x78)) = -1;
  (*(short * PTR32 *)(gen_frame + 0x38)) = (short *)0x0;
  piVar6 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
  if ((param_1 != 0) && (param_2 != (ushort *)0x0)) {
    (*(uint *)(gen_frame + 0x58)) = 0;
    (*(int *)(gen_frame + 0x70)) = 0;
LAB_00c725e8: ;
    if (((*(int *)(gen_frame + 0x70)) != 1) || ((*(int *)(gen_frame + 0x78)) != 0)) {
      uVar7 = (uint)*param_2;
      (*(uint *)(gen_frame + 0x3c)) = 0xffffffff;
      (*(uint *)(gen_frame + 0x54)) = 0xffffffff;
      (*(int *)(gen_frame + 0x78)) = -1;
      (*(gen_size32 *)(gen_frame + 0x44)) = 0;
      (*(uint *)(gen_frame + 0x20)) = 0;
      (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = (wchar_t *)0x0;
      (*(uint *)(gen_frame + 0x48)) = 0;
      (*(uint *)(gen_frame + 0x7c)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x50)) = param_2;
      (*(uint *)(gen_frame + 0x74)) = uVar7;
      puVar15 = param_2;
      if (*param_2 != 0) {
LAB_00c72650: ;
        puVar15 = puVar15 + 1;
        (*(ushort * PTR32 *)(gen_frame + 0x50)) = puVar15;
        (*(uint *)(gen_frame + 0x74)) = uVar7;
        if ((int)(*(uint *)(gen_frame + 0x58)) < 0) goto LAB_00c73713;
        sVar4 = (short)uVar7;
        if ((ushort)(sVar4 - 0x20U) < 0x59) {
          uVar8 = (byte)(&REFG(undefined, 0x1119ec8))[uVar7] & 0xf;
        }
        else {
          uVar8 = 0;
        }
        bVar14 = (&REFG(undefined, 0x1119ee8))[(*(uint *)(gen_frame + 0x20)) + uVar8 * 9];
        uVar8 = (uint)(bVar14 >> 4);
        (*(uint *)(gen_frame + 0x20)) = uVar8;
        if (uVar8 != 1) {
          if (uVar8 == 8) goto LAB_00c725a7;
          if (uVar8 < 8) goto LAB_00c72777;
          goto LAB_00c736fb;
        }
        if (*puVar15 != 0x25) {
          if ((*(int *)(gen_frame + 0x78)) == -1) {
            lVar9 = F_00c7ecef(puVar15,&(*(short * PTR32 *)(gen_frame + 0x38)),10);
            if ((lVar9 < 1) || (*(*(short * PTR32 *)(gen_frame + 0x38)) != 0x24)) {
              (*(int *)(gen_frame + 0x78)) = 0;
              goto LAB_00c7270f;
            }
            if ((*(int *)(gen_frame + 0x70)) == 0) {
              F_00c48350(((int *)(gen_frame + 0x488)),0,0x640);
            }
            (*(int *)(gen_frame + 0x78)) = 1;
          }
          else {
LAB_00c7270f: ;
            if ((*(int *)(gen_frame + 0x78)) != 1) goto LAB_00c72777;
          }
          lVar9 = F_00c7ecef(puVar15,&(*(short * PTR32 *)(gen_frame + 0x38)),10);
          uVar8 = lVar9 - 1;
          puVar15 = (ushort *)((*(short * PTR32 *)(gen_frame + 0x38)) + 1);
          (*(uint *)(gen_frame + 0x54)) = uVar8;
          (*(ushort * PTR32 *)(gen_frame + 0x50)) = puVar15;
          if ((*(int *)(gen_frame + 0x70)) == 0) {
            if ((((int)uVar8 < 0) || (*(*(short * PTR32 *)(gen_frame + 0x38)) != 0x24)) || (99 < (int)uVar8)) goto LAB_00c725a7;
            if ((int)(*(uint *)(gen_frame + 0x3c)) < (int)uVar8) {
              (*(uint *)(gen_frame + 0x3c)) = uVar8;
            }
          }
        }
LAB_00c72777: ;
        pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x80));
                    
                    
        switch((unsigned int)(uintptr_t)(bVar14 >> 4)) {
        case 0: ;
          if ((((*(int *)(gen_frame + 0x70)) != 0) || ((*(int *)(gen_frame + 0x78)) != 1)) && (((*(int *)(gen_frame + 0x70)) != 1 || ((*(int *)(gen_frame + 0x78)) != -1)))) {
LAB_00c72ad5: ;
            (*(int *)(gen_frame + 0x30)) = 1;
            F_00c72473((*(int *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x58)),uVar7);
          }
          break;
        case 1: ;
          (*(uint *)(gen_frame + 0x7c)) = 0xffffffff;
          (*(undefined4 *)(gen_frame + 0xc)) = 0;
          (*(int *)(gen_frame + 0x14)) = 0;
          (*(uint *)(gen_frame + 0x48)) = 0;
          (*(int *)(gen_frame + 0x34)) = 0;
          (*(uint *)(gen_frame + 0x84)) = 0;
          (*(int *)(gen_frame + 0x30)) = 0;
          break;
        case 2: ;
          if (uVar7 == 0x20) {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 2;
          }
          else if (uVar7 == 0x23) {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x80;
          }
          else if (uVar7 == 0x2b) {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 1;
          }
          else if (uVar7 == 0x2d) {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 4;
          }
          else if (uVar7 == 0x30) {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 8;
          }
          break;
        case 3: ;
          if (sVar4 == 0x2a) {
            if ((*(int *)(gen_frame + 0x78)) == 0) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
              uVar7 = *(uint *)pwVar17;
            }
            else {
              lVar9 = F_00c7ecef(puVar15,&(*(short * PTR32 *)(gen_frame + 0x38)),10);
              uVar7 = lVar9 - 1;
              (*(ushort * PTR32 *)(gen_frame + 0x50)) = (ushort *)((*(short * PTR32 *)(gen_frame + 0x38)) + 1);
              if ((*(int *)(gen_frame + 0x70)) == 0) {
LAB_00c728af: ;
                if ((((int)uVar7 < 0) || (*(*(short * PTR32 *)(gen_frame + 0x38)) != 0x24)) || (99 < (int)(*(uint *)(gen_frame + 0x54))))
                goto LAB_00c725a7;
                if ((int)(*(uint *)(gen_frame + 0x3c)) < (int)uVar7) {
                  (*(uint *)(gen_frame + 0x3c)) = uVar7;
                }
                piVar6 = ((int *)(gen_frame + 0x488)) + uVar7 * 4;
                if (*piVar6 != 0) {
                  uVar7 = 0x2a;
                  uVar20 = 1;
LAB_00c72ee5: ;
                  uVar7 = F_00c72328(piVar6,uVar20,uVar7,(*(uint *)(gen_frame + 0x84)));
                  if (uVar7 != 0) break;
                  goto LAB_00c725a7;
                }
                *piVar6 = 1;
                *(undefined2 *)(((uint *)(gen_frame + 0x490)) + uVar7 * 4) = 0x2a;
LAB_00c729d9: ;
                ((uint *)(gen_frame + 0x490))[(int)(uVar7 * 4 + 1)] = (*(uint *)(gen_frame + 0x84));
                break;
              }
              uVar7 = *(uint *)((uint *)(gen_frame + 0x490))[(int)(uVar7 * 4 + -1)];
            }
            (*(uint *)(gen_frame + 0x48)) = uVar7;
            if ((int)uVar7 < 0) {
              (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 4;
              (*(uint *)(gen_frame + 0x48)) = -uVar7;
            }
          }
          else {
            (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x48)) * 10 + -0x30 + uVar7;
          }
          break;
        case 4: ;
          (*(uint *)(gen_frame + 0x7c)) = 0;
          break;
        case 5: ;
          if (sVar4 == 0x2a) {
            if ((*(int *)(gen_frame + 0x78)) == 0) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
              uVar7 = *(uint *)pwVar17;
            }
            else {
              lVar9 = F_00c7ecef(puVar15,&(*(short * PTR32 *)(gen_frame + 0x38)),10);
              uVar7 = lVar9 - 1;
              (*(ushort * PTR32 *)(gen_frame + 0x50)) = (ushort *)((*(short * PTR32 *)(gen_frame + 0x38)) + 1);
              if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c728af;
              uVar7 = *(uint *)((uint *)(gen_frame + 0x490))[(int)(uVar7 * 4 + -1)];
            }
            (*(uint *)(gen_frame + 0x7c)) = uVar7;
            if ((int)uVar7 < 0) {
              (*(uint *)(gen_frame + 0x7c)) = 0xffffffff;
            }
          }
          else {
            (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) * 10 + -0x30 + uVar7;
          }
          break;
        case 6: ;
          if (uVar7 == 0x49) {
            uVar1 = *puVar15;
            if ((uVar1 == 0x36) && (puVar15[1] == 0x34)) {
              (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x8000;
              (*(ushort * PTR32 *)(gen_frame + 0x50)) = puVar15 + 2;
            }
            else if ((uVar1 == 0x33) && (puVar15[1] == 0x32)) {
              (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) & 0xffff7fff;
              (*(ushort * PTR32 *)(gen_frame + 0x50)) = puVar15 + 2;
            }
            else {
              if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                  ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
                (*(uint *)(gen_frame + 0x20)) = 0;
                goto LAB_00c72ad5;
              }
              (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x10000;
            }
          }
          else if (uVar7 == 0x68) {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x20;
          }
          else if (uVar7 == 0x6c) {
            if (*puVar15 == 0x6c) {
              (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x1000;
              (*(ushort * PTR32 *)(gen_frame + 0x50)) = puVar15 + 1;
            }
            else {
              (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x10;
            }
          }
          else if (uVar7 == 0x77) {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x800;
          }
          break;
        case 7: ;
          if (uVar7 < 0x65) {
            if (uVar7 == 100) {
LAB_00c72e92: ;
              (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x40;
LAB_00c72e99: ;
              (*(gen_size32 *)(gen_frame + 0x4c)) = 10;
LAB_00c72ea9: ;
              if (((*(uint *)(gen_frame + 0x84)) & 0x8000) == 0) {
                if (((*(uint *)(gen_frame + 0x84)) & 0x1000) != 0) {
                  if ((*(int *)(gen_frame + 0x78)) == 0) goto LAB_00c72ec2;
                  if ((*(uint *)(gen_frame + 0x54)) < 100) {
                    if ((*(int *)(gen_frame + 0x70)) == 0) {
                      piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                      if (*piVar6 == 0) {
                        *piVar6 = 4;
                        goto LAB_00c73342;
                      }
                      uVar20 = 4;
                      uVar7 = (*(uint *)(gen_frame + 0x74));
                      goto LAB_00c7328b;
                    }
                    goto LAB_00c73184;
                  }
                  goto LAB_00c725a7;
                }
                if (((*(uint *)(gen_frame + 0x84)) & 0x20) == 0) {
                  if (((*(uint *)(gen_frame + 0x84)) & 0x40) == 0) {
                    if ((*(int *)(gen_frame + 0x78)) == 0) {
                      (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                      uVar7 = *(uint *)pwVar17;
                    }
                    else {
                      if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                      if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c7326e;
                      uVar7 = *(uint *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
                    }
                    uVar8 = 0;
                    goto LAB_00c732f5;
                  }
                  if ((*(int *)(gen_frame + 0x78)) == 0) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                    uVar7 = *(uint *)pwVar17;
                  }
                  else {
                    if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                    if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c7326e;
                    uVar7 = *(uint *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
                  }
                }
                else if (((*(uint *)(gen_frame + 0x84)) & 0x40) == 0) {
                  if ((*(int *)(gen_frame + 0x78)) == 0) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                    uVar7 = (uint)(ushort)*pwVar17;
                  }
                  else {
                    if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                    if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c7326e;
                    uVar7 = (uint)*(ushort *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
                  }
                }
                else if ((*(int *)(gen_frame + 0x78)) == 0) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                  uVar7 = (uint)*pwVar17;
                }
                else {
                  if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                  if ((*(int *)(gen_frame + 0x70)) == 0) {
LAB_00c7326e: ;
                    piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                    uVar7 = (*(uint *)(gen_frame + 0x74));
                    if (*piVar6 != 0) goto LAB_00c73289;
                    *piVar6 = 1;
                    goto LAB_00c73342;
                  }
                  uVar7 = (uint)*(short *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
                }
                uVar8 = (int)uVar7 >> 0x1f;
              }
              else if ((*(int *)(gen_frame + 0x78)) == 0) {
LAB_00c72ec2: ;
                (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 4;
                uVar7 = *(uint *)pwVar17;
                uVar8 = *(uint *)(pwVar17 + 2);
              }
              else {
                if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                if ((*(int *)(gen_frame + 0x70)) == 0) {
                  piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                  if (*piVar6 == 0) {
                    *piVar6 = 3;
LAB_00c73342: ;
                    *(short *)(((uint *)(gen_frame + 0x490)) + (*(uint *)(gen_frame + 0x54)) * 4) = (short)(*(uint *)(gen_frame + 0x74));
                    ((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + 1)] = (*(uint *)(gen_frame + 0x84));
                    goto LAB_00c73514;
                  }
                  uVar20 = 3;
                  uVar7 = (*(uint *)(gen_frame + 0x74));
LAB_00c7328b: ;
                  uVar7 = F_00c72328(piVar6,uVar20,uVar7,(*(uint *)(gen_frame + 0x84)));
                  if (uVar7 == 0) goto LAB_00c725a7;
                  goto LAB_00c73514;
                }
LAB_00c73184: ;
                uVar7 = *(uint *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
                uVar8 = ((uint *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)])[1];
              }
LAB_00c732f5: ;
              if (((((*(uint *)(gen_frame + 0x84)) & 0x40) != 0) && ((int)uVar8 < 1)) && ((int)uVar8 < 0)) {
                bVar19 = uVar7 != 0;
                uVar7 = -uVar7;
                uVar8 = -(uVar8 + bVar19);
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x100;
              }
              if (((*(uint *)(gen_frame + 0x84)) & 0x9000) == 0) {
                uVar8 = 0;
              }
              if ((int)(*(uint *)(gen_frame + 0x7c)) < 0) {
                (*(uint *)(gen_frame + 0x7c)) = 1;
              }
              else {
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) & 0xfffffff7;
                if (0x200 < (int)(*(uint *)(gen_frame + 0x7c))) {
                  (*(uint *)(gen_frame + 0x7c)) = 0x200;
                }
              }
              if (uVar7 == 0 && uVar8 == 0) {
                (*(int *)(gen_frame + 0x34)) = 0;
              }
              pwVar17 = &(*(undefined2 *)(gen_frame + 0x287));
              uVar5 = CONCAT44(uVar8,uVar7);
              while ((uVar7 = (*(uint *)(gen_frame + 0x7c)), (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) - 1, 0 < (int)uVar7 || (uVar5 != 0)))
              {
                uVar7 = (int)(uVar5 % (ulonglong)(longlong)(int)(*(gen_size32 *)(gen_frame + 0x4c))) + 0x30;
                bVar14 = (byte)uVar7;
                (*(gen_size32 *)(gen_frame + 0x44)) = 0;
                if (0x39 < uVar7) {
                  bVar14 = bVar14 + (char)(*(undefined4 *)(gen_frame + 0x1c));
                }
                *(byte *)pwVar17 = bVar14;
                pwVar17 = (wchar_t *)((int)pwVar17 + -1);
                uVar5 = uVar5 / (ulonglong)(longlong)(int)(*(gen_size32 *)(gen_frame + 0x4c));
              }
              sVar11 = (int)&(*(undefined2 *)(gen_frame + 0x287)) - (int)pwVar17;
              (*(gen_size32 *)(gen_frame + 0x44)) = sVar11;
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((int)pwVar17 + 1);
              if ((((*(uint *)(gen_frame + 0x84)) & 0x200) != 0) &&
                 ((sVar11 == 0 || (*(byte *)((int)pwVar17 + 1) != 0x30)))) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar17;
                (*(gen_size32 *)(gen_frame + 0x44)) = (int)&(*(undefined2 *)(gen_frame + 0x287)) - (int)pwVar17 + 1;
                *(byte *)pwVar17 = 0x30;
              }
            }
            else {
              if (uVar7 < 0x54) {
                if (uVar7 == 0x53) {
                  if (((*(uint *)(gen_frame + 0x84)) & 0x830) == 0) {
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x20;
                  }
                  goto LAB_00c72bc7;
                }
                if (uVar7 != 0x41) {
                  if (uVar7 == 0x43) {
                    if (((*(uint *)(gen_frame + 0x84)) & 0x830) == 0) {
                      (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x20;
                    }
                    goto LAB_00c72c1c;
                  }
                  if ((uVar7 != 0x45) && (uVar7 != 0x47)) goto LAB_00c73514;
                }
                uVar7 = uVar7 + 0x20;
                (*(undefined4 *)(gen_frame + 0xc)) = 1;
                (*(uint *)(gen_frame + 0x74)) = uVar7;
LAB_00c72b4e: ;
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x40;
                if (((*(int *)(gen_frame + 0x78)) == 1) && ((*(int *)(gen_frame + 0x70)) == 0)) {
                  if ((*(uint *)(gen_frame + 0x54)) < 100) {
                    piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                    if (*piVar6 == 0) {
                      *piVar6 = 7;
                      *(short *)(((uint *)(gen_frame + 0x490)) + (*(uint *)(gen_frame + 0x54)) * 4) = (short)uVar7;
                      uVar7 = (*(uint *)(gen_frame + 0x54));
                      goto LAB_00c729d9;
                    }
                    uVar20 = 7;
                    goto LAB_00c72ee5;
                  }
                  goto LAB_00c725a7;
                }
                pwVar17 = ((wchar_t *)(gen_frame + 0x88));
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar17;
                (*(gen_size32 *)(gen_frame + 0x4c)) = 0x200;
                if ((int)(*(uint *)(gen_frame + 0x7c)) < 0) {
                  (*(uint *)(gen_frame + 0x7c)) = 6;
                }
                else if ((*(uint *)(gen_frame + 0x7c)) == 0) {
                  if ((short)uVar7 == 0x67) {
                    (*(uint *)(gen_frame + 0x7c)) = 1;
                  }
                }
                else {
                  if (0x200 < (int)(*(uint *)(gen_frame + 0x7c))) {
                    (*(uint *)(gen_frame + 0x7c)) = 0x200;
                  }
                  uVar7 = (*(uint *)(gen_frame + 0x74));
                  if (0xa3 < (int)(*(uint *)(gen_frame + 0x7c))) {
                    sVar11 = (*(uint *)(gen_frame + 0x7c)) + 0x15d;
                    pwVar12 = F_00c54c2e(sVar11);
                    (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = pwVar12;
                    uVar7 = (*(uint *)(gen_frame + 0x74));
                    if (pwVar12 == (wchar_t *)0x0) {
                      (*(uint *)(gen_frame + 0x7c)) = 0xa3;
                    }
                    else {
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar12;
                      (*(gen_size32 *)(gen_frame + 0x4c)) = sVar11;
                      pwVar17 = pwVar12;
                    }
                  }
                }
                pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x80));
                if ((*(int *)(gen_frame + 0x78)) == 0) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 4;
                  (*(uint *)(gen_frame + 0x0)) = *(uint *)pwVar12;
                  uVar8 = *(uint *)(pwVar12 + 2);
                }
                else {
                  if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                  puVar16 = (uint *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
                  (*(uint *)(gen_frame + 0x0)) = *puVar16;
                  uVar8 = puVar16[1];
                }
                (*(uint *)(gen_frame + 0x4)) = uVar8;
                p_Var22 = ((undefined *)(gen_frame + 0x5c));
                iVar18 = (int)(char)uVar7;
                puVar16 = &(*(uint *)(gen_frame + 0x0));
                pwVar12 = pwVar17;
                sVar11 = (*(gen_size32 *)(gen_frame + 0x4c));
                uVar20 = (*(undefined4 *)(gen_frame + 0xc));
                uVar7 = (*(uint *)(gen_frame + 0x7c));
                pcVar13 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
                (*pcVar13)(puVar16,pwVar12,sVar11,iVar18,uVar7,uVar20,p_Var22);
                uVar7 = (*(uint *)(gen_frame + 0x84)) & 0x80;
                if ((uVar7 != 0) && ((*(uint *)(gen_frame + 0x7c)) == 0)) {
                  p_Var22 = ((undefined *)(gen_frame + 0x5c));
                  pwVar12 = pwVar17;
                  pcVar13 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                  (*pcVar13)(pwVar12,p_Var22);
                }
                if (((short)(*(uint *)(gen_frame + 0x74)) == 0x67) && (uVar7 == 0)) {
                  p_Var22 = ((undefined *)(gen_frame + 0x5c));
                  pwVar12 = pwVar17;
                  pcVar13 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                  (*pcVar13)(pwVar12,p_Var22);
                }
                if ((byte)*pwVar17 == 0x2d) {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x100;
                  pwVar17 = (wchar_t *)((int)pwVar17 + 1);
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar17;
                }
LAB_00c72da2: ;
                sVar11 = F_00c552f0((char *)pwVar17);
                goto LAB_00c7350e;
              }
              if (uVar7 == 0x58) goto LAB_00c7308d;
              if (uVar7 == 0x5a) {
                if ((*(int *)(gen_frame + 0x78)) == 0) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                  psVar10 = *(short * PTR32 *)pwVar17;
                }
                else {
                  if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                  if ((*(int *)(gen_frame + 0x70)) == 0) {
LAB_00c72d2b: ;
                    piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                    if (*piVar6 == 0) {
                      *piVar6 = 2;
                      goto LAB_00c72e6e;
                    }
                    goto LAB_00c72d46;
                  }
                  psVar10 = *(short * PTR32 *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
                }
                if ((psVar10 == (short *)0x0) || (*(wchar_t * PTR32 *)(psVar10 + 2) == (wchar_t *)0x0)) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                  pwVar17 = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                  goto LAB_00c72da2;
                }
                sVar11 = (gen_size32)*psVar10;
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)(psVar10 + 2);
                if (((*(uint *)(gen_frame + 0x84)) & 0x800) == 0) {
                  (*(int *)(gen_frame + 0x30)) = 0;
                  goto LAB_00c7350e;
                }
                iVar18 = sVar11 - ((int)sVar11 >> 0x1f);
                (*(int *)(gen_frame + 0x30)) = 1;
                goto LAB_00c7350c;
              }
              if (uVar7 == 0x61) goto LAB_00c72b4e;
              if (uVar7 != 99) goto LAB_00c73514;
LAB_00c72c1c: ;
              (*(int *)(gen_frame + 0x30)) = 1;
              if ((*(int *)(gen_frame + 0x78)) == 0) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                wVar2 = *pwVar17;
              }
              else {
                if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                if ((*(int *)(gen_frame + 0x70)) == 0) {
                  piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                  if (*piVar6 == 0) {
                    *piVar6 = 1;
LAB_00c72e6e: ;
                    *(short *)(((uint *)(gen_frame + 0x490)) + (*(uint *)(gen_frame + 0x54)) * 4) = sVar4;
                    goto LAB_00c7344b;
                  }
LAB_00c73289: ;
                  uVar20 = 1;
                  goto LAB_00c7328b;
                }
                wVar2 = *(wchar_t *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
              }
              (*(uint *)(gen_frame + 0x10)) = (uint)(ushort)wVar2;
              if (((*(uint *)(gen_frame + 0x84)) & 0x20) == 0) {
                ((wchar_t *)(gen_frame + 0x88))[0] = wVar2;
              }
              else {
                ((char *)(gen_frame + 0x28))[0] = (char)wVar2;
                ((char *)(gen_frame + 0x28))[1] = 0;
                iVar18 = F_00c7b204(((wchar_t *)(gen_frame + 0x88)),((char *)(gen_frame + 0x28)),
                                    (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x5c)))) + 160) + (3) * 4))))),
                                    &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x5c)))));
                if (iVar18 < 0) {
                  (*(int *)(gen_frame + 0x14)) = 1;
                }
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = ((wchar_t *)(gen_frame + 0x88));
              (*(gen_size32 *)(gen_frame + 0x44)) = 1;
            }
          }
          else if (uVar7 < 0x71) {
            if (uVar7 == 0x70) {
              (*(uint *)(gen_frame + 0x7c)) = 8;
LAB_00c7308d: ;
              (*(undefined4 *)(gen_frame + 0x1c)) = 7;
LAB_00c730bd: ;
              (*(gen_size32 *)(gen_frame + 0x4c)) = 0x10;
              if (((*(uint *)(gen_frame + 0x84)) & 0x80) != 0) {
                (*(undefined2 *)(gen_frame + 0x24)) = 0x30;
                (*(short *)(gen_frame + 0x26)) = (short)(*(undefined4 *)(gen_frame + 0x1c)) + 0x51;
                (*(int *)(gen_frame + 0x34)) = 2;
              }
              goto LAB_00c72ea9;
            }
            if (100 < uVar7) {
              if (uVar7 < 0x68) goto LAB_00c72b4e;
              if (uVar7 == 0x69) goto LAB_00c72e92;
              if (uVar7 == 0x6e) {
                if ((*(int *)(gen_frame + 0x78)) == 0) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                  puVar16 = *(uint * PTR32 *)pwVar17;
                }
                else {
                  if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                  if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c72d2b;
                  puVar16 = *(uint * PTR32 *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
                }
                uVar7 = F_00c51967();
                if (uVar7 == 0) goto LAB_00c725a7;
                if (((*(uint *)(gen_frame + 0x84)) & 0x20) == 0) {
                  *puVar16 = (*(uint *)(gen_frame + 0x58));
                }
                else {
                  *(undefined2 *)puVar16 = (undefined2)(*(uint *)(gen_frame + 0x58));
                }
                (*(int *)(gen_frame + 0x14)) = 1;
              }
              else if (uVar7 == 0x6f) {
                (*(gen_size32 *)(gen_frame + 0x4c)) = 8;
                if ((char)(*(uint *)(gen_frame + 0x84)) < '\0') {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x200;
                }
                goto LAB_00c72ea9;
              }
            }
          }
          else {
            if (uVar7 != 0x73) {
              if (uVar7 == 0x75) goto LAB_00c72e99;
              if (uVar7 != 0x78) goto LAB_00c73514;
              (*(undefined4 *)(gen_frame + 0x1c)) = 0x27;
              goto LAB_00c730bd;
            }
LAB_00c72bc7: ;
            uVar7 = (*(uint *)(gen_frame + 0x7c));
            if ((*(uint *)(gen_frame + 0x7c)) == 0xffffffff) {
              uVar7 = 0x7fffffff;
            }
            if ((*(int *)(gen_frame + 0x78)) == 0) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
              pwVar17 = *(wchar_t * PTR32 *)pwVar17;
            }
            else {
              if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
              if ((*(int *)(gen_frame + 0x70)) == 0) {
                piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                uVar7 = (*(uint *)(gen_frame + 0x74));
                if (*piVar6 == 0) {
                  *piVar6 = 2;
                  *(short *)(((uint *)(gen_frame + 0x490)) + (*(uint *)(gen_frame + 0x54)) * 4) = (short)(*(uint *)(gen_frame + 0x74));
LAB_00c7344b: ;
                  ((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + 1)] = (*(uint *)(gen_frame + 0x84));
                  goto LAB_00c73514;
                }
LAB_00c72d46: ;
                uVar20 = 2;
                goto LAB_00c7328b;
              }
              pwVar17 = *(wchar_t * PTR32 *)((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + -1)];
            }
            (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar17;
            if (((*(uint *)(gen_frame + 0x84)) & 0x20) == 0) {
              if (pwVar17 == (wchar_t *)0x0) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
              }
              (*(int *)(gen_frame + 0x30)) = 1;
              for (pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)); (uVar7 != 0 && (uVar7 = uVar7 - 1, *pwVar17 != L'\0'));
                  pwVar17 = pwVar17 + 1) {
              }
              iVar18 = (int)pwVar17 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x6c));
LAB_00c7350c: ;
              (*(int *)(gen_frame + 0x30)) = 1;
              sVar11 = iVar18 >> 1;
LAB_00c7350e: ;
              (*(gen_size32 *)(gen_frame + 0x44)) = sVar11;
            }
            else {
              if (pwVar17 == (wchar_t *)0x0) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              }
              (*(gen_size32 *)(gen_frame + 0x44)) = 0;
              pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
              if (0 < (int)uVar7) {
                do {
                  if ((byte)*pwVar17 == 0) break;
                  iVar18 = F_00c6dfe8((uint)(byte)*pwVar17,&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x5c)))));
                  if (iVar18 != 0) {
                    pwVar17 = (wchar_t *)((int)pwVar17 + 1);
                  }
                  pwVar17 = (wchar_t *)((int)pwVar17 + 1);
                  sVar11 = (*(gen_size32 *)(gen_frame + 0x44)) + 1;
                  (*(gen_size32 *)(gen_frame + 0x44)) = sVar11;
                } while ((int)sVar11 < (int)uVar7);
              }
            }
          }
LAB_00c73514: ;
          if (((*(int *)(gen_frame + 0x78)) != 1) || ((*(int *)(gen_frame + 0x70)) != 0)) {
            if ((*(int *)(gen_frame + 0x14)) == 0) {
              if (((*(uint *)(gen_frame + 0x84)) & 0x40) != 0) {
                if (((*(uint *)(gen_frame + 0x84)) & 0x100) == 0) {
                  if (((*(uint *)(gen_frame + 0x84)) & 1) == 0) {
                    if (((*(uint *)(gen_frame + 0x84)) & 2) == 0) goto LAB_00c7356c;
                    uVar21 = 0x20;
                  }
                  else {
                    uVar21 = 0x2b;
                  }
                }
                else {
                  uVar21 = 0x2d;
                }
                (*(undefined2 *)(gen_frame + 0x24)) = uVar21;
                (*(int *)(gen_frame + 0x34)) = 1;
              }
LAB_00c7356c: ;
              sVar11 = ((*(uint *)(gen_frame + 0x48)) - (*(gen_size32 *)(gen_frame + 0x44))) - (*(int *)(gen_frame + 0x34));
              (*(gen_size32 *)(gen_frame + 0x4c)) = sVar11;
              if (((*(uint *)(gen_frame + 0x84)) & 0xc) == 0) {
                do {
                  if ((int)sVar11 < 1) break;
                  sVar11 = sVar11 - 1;
                  F_00c72473((*(int *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x58)),0x20);
                } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
              }
              iVar18 = (*(int *)(gen_frame + 0x2c));
              F_00c724c9(&(*(uint *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x2c)),(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined2 *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x34)));
              if ((((*(uint *)(gen_frame + 0x84)) & 8) != 0) && (sVar11 = (*(gen_size32 *)(gen_frame + 0x4c)), ((*(uint *)(gen_frame + 0x84)) & 4) == 0)) {
                do {
                  if ((int)sVar11 < 1) break;
                  sVar11 = sVar11 - 1;
                  F_00c72473(iVar18,&(*(uint *)(gen_frame + 0x58)),0x30);
                } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
              }
              if (((*(int *)(gen_frame + 0x30)) == 0) && (sVar11 = (*(gen_size32 *)(gen_frame + 0x44)), pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)), 0 < (int)(*(gen_size32 *)(gen_frame + 0x44))))
              {
                do {
                  sVar11 = sVar11 - 1;
                  uVar7 = F_00c7b204((wchar_t *)&(*(uint *)(gen_frame + 0x10)),(char *)pwVar17,
                                     (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x5c)))) + 160) + (3) * 4))))),
                                     &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x5c)))));
                  (*(uint *)(gen_frame + 0x74)) = uVar7;
                  if ((int)uVar7 < 1) {
                    (*(uint *)(gen_frame + 0x58)) = 0xffffffff;
                    break;
                  }
                  F_00c72473((*(int *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x10)));
                  pwVar17 = (wchar_t *)((int)pwVar17 + (*(uint *)(gen_frame + 0x74)));
                } while (0 < (int)sVar11);
              }
              else {
                F_00c724c9(&(*(uint *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x2c)),(*(int * PTR32 *)(gen_frame + 0x8)),(*(wchar_t * PTR32 *)(gen_frame + 0x6c)),(*(gen_size32 *)(gen_frame + 0x44)));
              }
              if ((-1 < (int)(*(uint *)(gen_frame + 0x58))) && (sVar11 = (*(gen_size32 *)(gen_frame + 0x4c)), ((*(uint *)(gen_frame + 0x84)) & 4) != 0)) {
                do {
                  if ((int)sVar11 < 1) break;
                  sVar11 = sVar11 - 1;
                  F_00c72473((*(int *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x58)),0x20);
                } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
              }
            }
            if ((*(wchar_t * PTR32 *)(gen_frame + 0x18)) != (wchar_t *)0x0) {
              F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x18)));
              (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = (wchar_t *)0x0;
            }
          }
        }
LAB_00c736fb: ;
        uVar7 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x50));
        (*(uint *)(gen_frame + 0x74)) = uVar7;
        puVar15 = (*(ushort * PTR32 *)(gen_frame + 0x50));
        if (*(*(ushort * PTR32 *)(gen_frame + 0x50)) == 0) goto LAB_00c73713;
        goto LAB_00c72650;
      }
      goto LAB_00c737a0;
    }
    goto LAB_00c737bc;
  }
LAB_00c725a7: ;
  piVar6 = F_00c51f85();
  *piVar6 = 0x16;
  F_00c4c305();
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x5c)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x5c)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x5c)) + 8))) + 112))))) & 0xfffffffd;
  }
  uVar7 = 0xffffffff;
LAB_00c737d5: ;
  F_00c47745((*(uint *)(gen_frame + 0xac8)) ^ (uint)(uint)(gen_frame + 0xacc));
  return uVar7;
LAB_00c73713: ;
  if (((*(uint *)(gen_frame + 0x20)) != 0) && ((*(uint *)(gen_frame + 0x20)) != 7)) goto LAB_00c725a7;
  if (((*(int *)(gen_frame + 0x78)) == 1) && (((*(int *)(gen_frame + 0x70)) == 0 && (iVar18 = 0, -1 < (int)(*(uint *)(gen_frame + 0x3c)))))) {
    piVar6 = ((int *)(gen_frame + 0x488)) + 1;
    do {
      iVar3 = piVar6[-1];
      if ((iVar3 == 1) || (iVar3 == 2)) {
LAB_00c73789: ;
        *piVar6 = (int)(*(wchar_t * PTR32 *)(gen_frame + 0x80));
        pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
LAB_00c7378e: ;
        (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = pwVar17;
      }
      else {
        if ((iVar3 == 3) || (iVar3 == 4)) {
          *piVar6 = (int)(*(wchar_t * PTR32 *)(gen_frame + 0x80));
          pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 4;
          goto LAB_00c7378e;
        }
        if (iVar3 == 5) goto LAB_00c73789;
        if (iVar3 != 7) goto LAB_00c725a7;
        *piVar6 = (int)(*(wchar_t * PTR32 *)(gen_frame + 0x80));
        F_00c58666(&(*(wchar_t * PTR32 *)(gen_frame + 0x80)));
      }
      iVar18 = iVar18 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar18 <= (int)(*(uint *)(gen_frame + 0x3c)));
  }
LAB_00c737a0: ;
  iVar18 = (*(int *)(gen_frame + 0x70)) + 1;
  (*(int *)(gen_frame + 0x70)) = iVar18;
  if (1 < iVar18) goto LAB_00c737bc;
  goto LAB_00c725e8;
LAB_00c737bc: ;
  uVar7 = (*(uint *)(gen_frame + 0x58));
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x5c)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x5c)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x5c)) + 8))) + 112))))) & 0xfffffffd;
  }
  goto LAB_00c737d5;
}

/* ref: __calloc_impl */
uint F_00c73804(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc73804u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  LPVOID pvVar2;
  int iVar3;
  uint dwBytes;
  
  if ((param_1 != 0) && (0xffffffe0 / param_1 < param_2)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
    return 0;
  }
  dwBytes = param_1 * param_2;
  if (dwBytes == 0) {
    dwBytes = 1;
  }
  do {
    if ((dwBytes < 0xffffffe1) &&
       (pvVar2 = gen_imp_HeapAlloc(REFG(undefined4, 0x15d74c8),8,dwBytes), pvVar2 != (LPVOID)0x0)) {
      return (uint)pvVar2;
    }
    if (REFG(int, 0x15d75ac) == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return 0;
      }
      *param_3 = 0xc;
      return 0;
    }
    iVar3 = F_00c5b165(dwBytes);
  } while (iVar3 != 0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xc;
  }
  return 0;
}

/* ref: __recalloc */
undefined * F_00c73886(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc73886u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _Count = (gen_size32)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  gen_size32 sVar4;
  
  sVar4 = 0;
  if ((_Count == 0) || (_Size <= 0xffffffe0 / _Count)) {
    uVar3 = _Count * _Size;
    if (_Memory != (undefined *)0x0) {
      sVar4 = F_00c5b8b9(_Memory);
    }
    pvVar2 = F_00c52171(_Memory,uVar3);
    if ((pvVar2 != (undefined *)0x0) && (sVar4 < uVar3)) {
      F_00c48350((undefined *)(sVar4 + (int)pvVar2),0,uVar3 - sVar4);
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
    pvVar2 = (undefined *)0x0;
  }
  return pvVar2;
}

/* ref: FUN_00c738f4 */
uint F_00c738f4(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc738f4u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c73912 */
unsigned int F_00c73912(unsigned int gen_a0)
{
  GEN_ENTER(0xc73912u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
  F_00c5437e(this);
  return 0;
}

/* ref: std::bad_exception::vf0 */
uint F_00c7391d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7391du, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ___TypeMatch */
uint F_00c73944(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc73944u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_00c7399c: ;
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_00c7397b: ;
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_00c7399c;
    }
    else {
      iVar1 = F_00c556e0((char *)(iVar1 + 8),((char *)GEN_TOP((*(int *)(param_2 + 4) + 8))));
      if (iVar1 == 0) goto LAB_00c7397b;
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: ___FrameUnwindFilter */
uint F_00c739a3(unsigned int gen_a0)
{
  GEN_ENTER(0xc739a3u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * p_Var2;
  
  iVar1 = *(int *)*param_1;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    p_Var2 = F_00c5b37a();
    if (0 < (*(int *)(((char *)(p_Var2) + 144)))) {
      p_Var2 = F_00c5b37a();
      (*(int *)(((char *)(p_Var2) + 144))) = (*(int *)(((char *)(p_Var2) + 144))) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    p_Var2 = F_00c5b37a();
    (*(int *)(((char *)(p_Var2) + 144))) = 0;
                    
    F_00c5aa82();
  }
  return 0;
}

/* ref: ___FrameUnwindToState */
uint F_00c739f2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc739f2u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x44];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * p_Var4;
  uint uVar5;
  int iVar6;
  
  iVar3 = (*(int *)&gen_args[2]);
  iVar2 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f68e8);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc739fe;
  if (*(int *)((*(int *)&gen_args[2]) + 4) < 0x81) {
    iVar6 = (int)*(char *)((*(int *)&gen_args[0]) + 8);
  }
  else {
    iVar6 = *(int *)((*(int *)&gen_args[0]) + 8);
  }
  (*(int *)(gen_frame + 0x10)) = iVar6;
  p_Var4 = F_00c5b37a();
  (*(int *)(((char *)(p_Var4) + 144))) = (*(int *)(((char *)(p_Var4) + 144))) + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  while( true ) {
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    if (iVar6 == (*(int *)&gen_args[3])) {
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
      uVar5 = F_00c73ab4();
      if (iVar6 != (*(int *)&gen_args[3])) {
                    
        F_00c5aace();
      }
      *(int *)(iVar2 + 8) = iVar6;
      return uVar5;
    }
    if ((iVar6 < 0) || (*(int *)(iVar3 + 4) <= iVar6)) break;
    iVar1 = *((int *)GEN_TOP((*(int *)(iVar3 + 8) + iVar6 * 8)));
    (*(int *)(gen_frame + 0xc)) = iVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x1;
    if (*((int *)GEN_TOP((*(int *)(iVar3 + 8) + 4 + iVar6 * 8))) != 0) {
      *(int *)(iVar2 + 8) = iVar1;
      F_00c74b20(*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 8) + 4 + iVar6 * 8))),iVar2,0x103);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    iVar6 = iVar1;
  }
                    
  F_00c5aace();
}

/* ref: FUN_00c73a70 */
uint F_00c73a70(unsigned int gen_a0)
{
  GEN_ENTER(0xc73a70u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c739a3(*(undefined4 *)(in_ebp + -0x14));
  return uVar1;
}

/* ref: FUN_00c73a7a */
uint F_00c73a7a(unsigned int gen_a0)
{
  GEN_ENTER(0xc73a7au, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = *(int *)(in_ebp + -0x18);
  *(undefined4 *)(in_ebp + -4) = 0;
  iVar4 = *(int *)(in_ebp + 0x10);
  iVar5 = *(int *)(in_ebp + 8);
  iVar7 = *(int *)(in_ebp + -0x20);
  while( true ) {
    *(int *)(in_ebp + -0x1c) = iVar7;
    if (iVar7 == *(int *)(in_ebp + 0x14)) {
      *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
      *(undefined4 *)(iVar3 + -4) = 0xc73a9b;
      uVar6 = F_00c73ab4();
      if (iVar7 != *(int *)(in_ebp + 0x14)) {
                    
        *(undefined4 *)(iVar3 + -4) = 0xc73aa5;
        F_00c5aace();
      }
      *(int *)(iVar5 + 8) = iVar7;
      *(undefined4 *)(iVar3 + -4) = 0xc73aad;
      return uVar6;
    }
    if ((iVar7 < 0) || (*(int *)(iVar4 + 4) <= iVar7)) break;
    iVar1 = *(int *)(iVar4 + 8);
    iVar2 = *(int *)(iVar1 + iVar7 * 8);
    *(int *)(in_ebp + -0x20) = iVar2;
    *(undefined4 *)(in_ebp + -4) = 1;
    if (*(int *)(iVar1 + 4 + iVar7 * 8) != 0) {
      *(int *)(iVar5 + 8) = iVar2;
      *(undefined4 *)(iVar3 + -4) = 0x103;
      *(int *)(iVar3 + -8) = iVar5;
      *(undefined4 *)(iVar3 + -0xc) = *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 8) + 4 + iVar7 * 8)));
      *(undefined4 *)(iVar3 + -0x10) = 0xc73a6a;
      F_00c74b20(*(undefined4 *)(iVar3 + -0xc),*(undefined4 *)(iVar3 + -8),
                 *(undefined4 *)(iVar3 + -4));
    }
    *(undefined4 *)(in_ebp + -4) = 0;
    iVar7 = iVar2;
  }
                    
  *(undefined4 *)(iVar3 + -4) = 0xc73a3c;
  F_00c5aace();
}

/* ref: FUN_00c73aae */
uint F_00c73aae(unsigned int gen_a0)
{
  GEN_ENTER(0xc73aaeu, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if (0 < (*(int *)(((char *)(p_Var1) + 144)))) {
    p_Var1 = F_00c5b37a();
    (*(int *)(((char *)(p_Var1) + 144))) = (*(int *)(((char *)(p_Var1) + 144))) + -1;
  }
  return (uint)p_Var1;
}

/* ref: FUN_00c73ab4 */
uint F_00c73ab4(void)
{
  GEN_ENTER(0xc73ab4u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if (0 < (*(int *)(((char *)(p_Var1) + 144)))) {
    p_Var1 = F_00c5b37a();
    (*(int *)(((char *)(p_Var1) + 144))) = (*(int *)(((char *)(p_Var1) + 144))) + -1;
  }
  return (uint)p_Var1;
}

/* ref: FUN_00c73ace */
uint F_00c73ace(unsigned int gen_a0)
{
  GEN_ENTER(0xc73aceu, gen_a0, 0u, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * p_Var3;
  
  piVar1 = (int *)*in_eax;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
      ((iVar2 = piVar1[5], iVar2 == 0x19930520 || ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))
      ) && (piVar1[7] == 0)) {
    p_Var3 = F_00c5b37a();
    (*((wchar_t *)GEN_TOP((((((char *)(p_Var3) + 156) + 290) + (0x27) * 2))))) = L'\x01';
    (*((wchar_t *)GEN_TOP((((((char *)(p_Var3) + 156) + 290) + (0x28) * 2))))) = L'\0';
    return 1;
  }
  return 0;
}

/* ref: ___DestructExceptionObject */
uint F_00c73b13(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc73b13u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x1c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f6910);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc73b1f;
  if (((((*(int * PTR32 *)&gen_args[0]) != (int *)0x0) && (*(*(int * PTR32 *)&gen_args[0]) == -0x1f928c9d)) && (in_EAX = 0, (*(int * PTR32 *)&gen_args[0])[7] != 0)) &&
     (pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[7] + 4))), in_EAX = 0, pvVar1 != (undefined *)0x0)) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    F_00c54d91(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6])),pvVar1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}

/* ref: FUN_00c73b56 */
byte F_00c73b56(unsigned int gen_a0)
{
  GEN_ENTER(0xc73b56u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  return *(char *)(in_ebp + 0xc) != '\0';
}

/* ref: FUN_00c73b5f */
unsigned int F_00c73b5f(unsigned int gen_a0)
{
  GEN_ENTER(0xc73b5fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
                    
  *((undefined * PTR32 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = &REFG(undefined, 0xc73b67);
  F_00c5aa82();
}

/* ref: ___AdjustPointer */
uint F_00c73b68(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc73b68u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    uVar1 = uVar1 + *((int *)GEN_TOP((*(int *)(param_2[1] + param_1) + param_2[2]))) + param_2[1];
  }
  return uVar1;
}

/* ref: ___CxxRegisterExceptionObject */
int F_00c73ba2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc73ba2u, gen_a0, gen_a1, 0u, 0u);
  undefined * exception = (undefined *)(uintptr_t)gen_a0;
  undefined * storage = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * p_Var2;
  int * piVar3;
  
  if ((exception == (undefined *)0x0) || (piVar3 = *(int * PTR32 *)exception, piVar3 == (int *)0x0)) {
    *(undefined4 *)((int)storage + 8) = 0xffffffff;
    *(undefined4 *)((int)storage + 0xc) = 0xffffffff;
  }
  else {
    if ((((*piVar3 == -0x1f928c9d) && (piVar3[4] == 3)) &&
        ((iVar1 = piVar3[5], iVar1 == 0x19930520 || ((iVar1 == 0x19930521 || (iVar1 == 0x19930522)))
         ))) && (piVar3[7] == 0)) {
      p_Var2 = F_00c5b37a();
      piVar3 = (*(void * PTR32 *)(((char *)(p_Var2) + 136)));
    }
    F_00c550d7(storage,piVar3[6]);
    p_Var2 = F_00c5b37a();
    *(undefined * PTR32 *)((int)storage + 8) = (*(void * PTR32 *)(((char *)(p_Var2) + 136)));
    p_Var2 = F_00c5b37a();
    *(undefined * PTR32 *)((int)storage + 0xc) = (*(void * PTR32 *)(((char *)(p_Var2) + 140)));
    p_Var2 = F_00c5b37a();
    (*(void * PTR32 *)(((char *)(p_Var2) + 136))) = piVar3;
  }
  p_Var2 = F_00c5b37a();
  (*(int *)(((char *)(p_Var2) + 144))) = (*(int *)(((char *)(p_Var2) + 144))) + -1;
  p_Var2 = F_00c5b37a();
  if ((*(int *)(((char *)(p_Var2) + 144))) < 0) {
    p_Var2 = F_00c5b37a();
    (*(int *)(((char *)(p_Var2) + 144))) = 0;
  }
  return 1;
}

/* ref: ___CxxDetectRethrow */
int F_00c73c58(unsigned int gen_a0)
{
  GEN_ENTER(0xc73c58u, gen_a0, 0u, 0u, 0u);
  undefined * exception = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * p_Var3;
  
  if (((((exception != (undefined *)0x0) && (piVar1 = *(int * PTR32 *)exception, *piVar1 == -0x1f928c9d)) &&
       (piVar1[4] == 3)) &&
      (((iVar2 = piVar1[5], iVar2 == 0x19930520 || (iVar2 == 0x19930521)) || (iVar2 == 0x19930522)))
      ) && (piVar1[7] == 0)) {
    p_Var3 = F_00c5b37a();
    (*(int *)(((char *)(p_Var3) + 144))) = (*(int *)(((char *)(p_Var3) + 144))) + 1;
    return 1;
  }
  return 0;
}

/* ref: ___CxxUnregisterExceptionObject */
unsigned int F_00c73ca9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc73ca9u, gen_a0, gen_a1, 0u, 0u);
  undefined * storage = (undefined *)(uintptr_t)gen_a0;
  int rethrow = (int)gen_a1;
  undefined * p_Var1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)storage + 8) != -1) {
    F_00c5512a(storage);
    if ((((rethrow == 0) && (p_Var1 = F_00c5b37a(), *(int *)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) == -0x1f928c9d)) &&
        (p_Var1 = F_00c5b37a(), *((int *)GEN_TOP(((int)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) + 0x10))) == 3)) &&
       (((p_Var1 = F_00c5b37a(), *((int *)GEN_TOP(((int)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) + 0x14))) == 0x19930520 ||
         (p_Var1 = F_00c5b37a(), *((int *)GEN_TOP(((int)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) + 0x14))) == 0x19930521)) ||
        (p_Var1 = F_00c5b37a(), *((int *)GEN_TOP(((int)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) + 0x14))) == 0x19930522)))) {
      p_Var1 = F_00c5b37a();
      uVar2 = F_00c55103(*((undefined4 *)GEN_TOP(((int)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) + 0x18))));
      if (uVar2 != 0) {
        uVar3 = 1;
        p_Var1 = F_00c5b37a();
        F_00c73b13((*(void * PTR32 *)(((char *)(p_Var1) + 136))),uVar3);
      }
    }
    p_Var1 = F_00c5b37a();
    if (((*(int *)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) == -0x1f928c9d) &&
        (p_Var1 = F_00c5b37a(), *((int *)GEN_TOP(((int)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) + 0x10))) == 3)) &&
       (((p_Var1 = F_00c5b37a(), *((int *)GEN_TOP(((int)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) + 0x14))) == 0x19930520 ||
         ((p_Var1 = F_00c5b37a(), *((int *)GEN_TOP(((int)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) + 0x14))) == 0x19930521 ||
          (p_Var1 = F_00c5b37a(), *((int *)GEN_TOP(((int)(*(void * PTR32 *)(((char *)(p_Var1) + 136))) + 0x14))) == 0x19930522)))) &&
        (rethrow != 0)))) {
      p_Var1 = F_00c5b37a();
      (*(int *)(((char *)(p_Var1) + 144))) = (*(int *)(((char *)(p_Var1) + 144))) + -1;
    }
    p_Var1 = F_00c5b37a();
    (*(void * PTR32 *)(((char *)(p_Var1) + 136))) = *(undefined * PTR32 *)((int)storage + 8);
    p_Var1 = F_00c5b37a();
    (*(void * PTR32 *)(((char *)(p_Var1) + 140))) = *(undefined * PTR32 *)((int)storage + 0xc);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c73e03 */
uint F_00c73e03(unsigned int gen_a0)
{
  GEN_ENTER(0xc73e03u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c739a3(*(undefined4 *)(in_ebp + -0x14));
  return uVar1;
}

/* ref: FUN_00c73e0d */
unsigned int F_00c73e0d(unsigned int gen_a0)
{
  GEN_ENTER(0xc73e0du, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0xc73e1c;
  return 0;
}

/* ref: FUN_00c73e36 */
uint F_00c73e36(unsigned int gen_a0)
{
  GEN_ENTER(0xc73e36u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c739a3(*(undefined4 *)(in_ebp + -0x14));
  return uVar1;
}

/* ref: FUN_00c73e40 */
unsigned int F_00c73e40(unsigned int gen_a0)
{
  GEN_ENTER(0xc73e40u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0xc73e4f;
  return 0;
}

/* ref: FUN_00c73e68 */
uint F_00c73e68(unsigned int gen_a0)
{
  GEN_ENTER(0xc73e68u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c739a3(*(undefined4 *)(in_ebp + -0x14));
  return uVar1;
}

/* ref: FUN_00c73e72 */
unsigned int F_00c73e72(unsigned int gen_a0)
{
  GEN_ENTER(0xc73e72u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0xc73e81;
  return 0;
}

/* ref: FUN_00c73ea3 */
uint F_00c73ea3(unsigned int gen_a0)
{
  GEN_ENTER(0xc73ea3u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c739a3(*(undefined4 *)(in_ebp + -0x14));
  return uVar1;
}

/* ref: FUN_00c73ead */
unsigned int F_00c73ead(unsigned int gen_a0)
{
  GEN_ENTER(0xc73eadu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0xc73ebc;
  return 0;
}

/* ref: FUN_00c73ebd */
byte F_00c73ebd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc73ebdu, gen_a0, gen_a1, 0u, 0u);
  int * in_edi = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  int local_10;
  int local_c;
  byte local_5;
  
  if (in_edi == (int *)0x0) {
                    
    F_00c5aace();
  }
  local_5 = 0;
  local_10 = 0;
  if (0 < *in_edi) {
    local_c = 0;
    do {
      piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x1c) + 0xc)));
      for (iVar2 = *piVar3; piVar3 = piVar3 + 1, 0 < iVar2; iVar2 = iVar2 + -1) {
        uVar1 = F_00c73944(in_edi[1] + local_c,*piVar3,*(undefined4 *)(param_2 + 0x1c));
        if (uVar1 != 0) {
          local_5 = 1;
          break;
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + 0x10;
    } while (local_10 < *in_edi);
  }
  return local_5;
}

/* ref: FUN_00c73f33 */
unsigned int F_00c73f33(unsigned int gen_a0)
{
  GEN_ENTER(0xc73f33u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x18];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 148))) != (undefined *)0x0) {
                    
    F_00c5aace();
  }
                    
  F_00c5aabb();
}

/* ref: Catch_All@00c73f64 */
unsigned int F_00c73f64(unsigned int gen_a0)
{
  GEN_ENTER(0xc73f64u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var1) + 148))) = *(undefined * PTR32 *)(in_ebp + 8);
                    
  F_00c4d67d(0,0);
}

/* ref: _is_exception_typeof */
int F_00c73fae(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc73faeu, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  GEN_LPANY pEVar1;
  ULONG_PTR UVar2;
  char * _Str2;
  char * _Str1;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  if (param_2 == (undefined *)0x0) {
                    
    F_00c5aace();
  }
  pEVar1 = (*(undefined * PTR32 *)((char *)(param_2)));
  if (pEVar1 != (GEN_LPANY)0x0) {
    if ((((*(DWORD *)((char *)(pEVar1))) == 0xe06d7363) && ((*(DWORD *)(((char *)(pEVar1) + 16))) == 3)) &&
       ((UVar2 = (*((ULONG_PTR *)GEN_TOP(((((char *)(pEVar1) + 20) + (0) * 4))))), UVar2 == 0x19930520 ||
        ((UVar2 == 0x19930521 || (UVar2 == 0x19930522)))))) {
      piVar4 = *((int * PTR32 *)GEN_TOP(((*((ULONG_PTR *)GEN_TOP(((((char *)(pEVar1) + 20) + (2) * 4))))) + 0xc)));
      iVar5 = *piVar4;
      while( true ) {
        piVar4 = piVar4 + 1;
        if (iVar5 < 1) {
          return 0;
        }
        _Str2 = ((char *)GEN_TOP((*(int *)(*piVar4 + 4) + 8)));
        _Str1 = (char *)F_00c46990(param_1);
        iVar3 = F_00c556e0(_Str1,_Str2);
        if (iVar3 == 0) break;
        iVar5 = iVar5 + -1;
      }
      return 1;
    }
                    
    F_00c5aace();
  }
                    
  F_00c5aace();
}

/* ref: CallCatchBlock */
undefined * F_00c74034(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc74034u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x60];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  undefined * in_esi;
  undefined * in_edi;
  uint uVar1;
  undefined * p_Var2;
  undefined * pvVar3;
  undefined * in_ECX = 0;
  
  in_edi = (*(undefined * PTR32 *)&gen_args[1]);
  in_esi = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x2c;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = &REFG(undefined, 0x12f6a08);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xc74040;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + -4)));
  uVar1 = F_00c550d7(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  p_Var2 = F_00c5b37a();
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(void * PTR32 *)(((char *)(p_Var2) + 136)));
  p_Var2 = F_00c5b37a();
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(void * PTR32 *)(((char *)(p_Var2) + 140)));
  p_Var2 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var2) + 136))) = in_esi;
  p_Var2 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var2) + 140))) = (*(undefined * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x1;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x1;
  pvVar3 = F_00c5517c(in_edi,(*(undefined * PTR32 *)&gen_args[3]),in_ECX,(int)(*(undefined * PTR32 *)&gen_args[4]),(*(int *)&gen_args[5]));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0xfffffffe;
  (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
  F_00c7415a(in_esi,in_edi,(gen_frame + 0x3c));
  return (*(undefined * PTR32 *)(gen_frame + 0x20));
}

/* ref: FUN_00c740c4 */
uint F_00c740c4(unsigned int gen_a0)
{
  GEN_ENTER(0xc740c4u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c73ace(*(undefined4 *)(in_ebp + -0x14));
  return uVar1;
}

/* ref: FUN_00c740cd */
uint F_00c740cd(unsigned int gen_a0)
{
  GEN_ENTER(0xc740cdu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  int iVar1;
  int iVar2;
  int in_edi;
  int iVar3;
  int iVar4;
  undefined4 in_esi;
  uint uVar5;
  undefined * p_Var6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(in_ebp + -0x18);
  *(undefined4 *)(iVar1 + -4) = 0xc740d5;
  p_Var6 = F_00c5b37a();
  (*((wchar_t *)GEN_TOP((((((char *)(p_Var6) + 156) + 290) + (0x27) * 2))))) = L'\0';
  (*((wchar_t *)GEN_TOP((((((char *)(p_Var6) + 156) + 290) + (0x28) * 2))))) = L'\0';
  iVar2 = *(int *)(in_ebp + 0x14);
  in_edi = *(int *)(in_ebp + 0xc);
  if (*(int *)(iVar2 + 4) < 0x81) {
    iVar8 = (int)*(char *)(in_edi + 8);
  }
  else {
    iVar8 = *(int *)(in_edi + 8);
  }
  iVar3 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)(in_ebp + -0x20) = 0;
  do {
    if (*(uint *)(iVar2 + 0xc) <= *(uint *)(in_ebp + -0x20)) {
LAB_00c7411b: ;
      *(int *)(iVar1 + -4) = iVar8;
      *(int *)(iVar1 + -8) = iVar2;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      *(int *)(iVar1 + -0x10) = in_edi;
      *(undefined4 *)(iVar1 + -0x14) = 0xc74125;
      F_00c739f2(*(undefined4 *)(iVar1 + -0x10),*(undefined4 *)(iVar1 + -0xc),
                 *(undefined4 *)(iVar1 + -8),*(undefined4 *)(iVar1 + -4));
      *(undefined4 *)(in_ebp + -0x1c) = 0;
      *(undefined4 *)(in_ebp + -4) = 0;
      in_esi = *(undefined4 *)(in_ebp + 8);
      *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
      *(undefined4 *)(in_ebp + 0x10) = 0;
      *(undefined4 *)(iVar1 + -4) = 0xc74146;
      F_00c7415a(in_esi,in_edi,in_ebp);
      uVar5 = *(uint *)(in_ebp + -0x1c);
      *(undefined4 *)(iVar1 + -4) = 0xc7414e;
      return uVar5;
    }
    iVar7 = *(uint *)(in_ebp + -0x20) * 0x14;
    iVar4 = *(int *)(iVar7 + 4 + iVar3);
    if ((iVar4 < iVar8) && (iVar8 <= *(int *)(iVar7 + 8 + iVar3))) {
      iVar8 = *((int *)GEN_TOP((*(int *)(iVar2 + 8) + 8 + iVar4 * 8)));
      goto LAB_00c7411b;
    }
    *(int *)(in_ebp + -0x20) = *(int *)(in_ebp + -0x20) + 1;
  } while( true );
}

/* ref: FUN_00c74154 */
uint F_00c74154(unsigned int gen_a0)
{
  GEN_ENTER(0xc74154u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  int * piVar1;
  undefined * p_Var2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)(in_ebp + 8);
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + 0xc) + -4))) = *(undefined4 *)(in_ebp + -0x24);
  F_00c5512a(*(undefined4 *)(in_ebp + -0x28));
  p_Var2 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var2) + 136))) = *(undefined * PTR32 *)(in_ebp + -0x2c);
  p_Var2 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var2) + 140))) = *(undefined * PTR32 *)(in_ebp + -0x30);
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
      ((p_Var2 = (undefined *)piVar1[5], p_Var2 == (undefined *)0x19930520 ||
       ((p_Var2 == (undefined *)0x19930521 || (p_Var2 == (undefined *)0x19930522)))))) &&
     ((*(int *)(in_ebp + -0x34) == 0 && (*(int *)(in_ebp + -0x1c) != 0)))) {
    uVar3 = F_00c55103(piVar1[6]);
    p_Var2 = (undefined *)0x0;
    if (uVar3 != 0) {
      p_Var2 = (undefined *)F_00c73b13(piVar1,*(undefined4 *)(in_ebp + 0x10));
    }
  }
  return (uint)p_Var2;
}

/* ref: FUN_00c7415a */
uint F_00c7415a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7415au, gen_a0, gen_a1, gen_a2, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined * p_Var1;
  uint uVar2;
  
  *(undefined4 *)(in_edi + -4) = *(undefined4 *)(in_ebp + -0x24);
  F_00c5512a(*(undefined4 *)(in_ebp + -0x28));
  p_Var1 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var1) + 136))) = *(undefined * PTR32 *)(in_ebp + -0x2c);
  p_Var1 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var1) + 140))) = *(undefined * PTR32 *)(in_ebp + -0x30);
  if ((((*in_esi == -0x1f928c9d) && (in_esi[4] == 3)) &&
      ((p_Var1 = (undefined *)in_esi[5], p_Var1 == (undefined *)0x19930520 ||
       ((p_Var1 == (undefined *)0x19930521 || (p_Var1 == (undefined *)0x19930522)))))) &&
     ((*(int *)(in_ebp + -0x34) == 0 && (*(int *)(in_ebp + -0x1c) != 0)))) {
    uVar2 = F_00c55103(in_esi[6]);
    p_Var1 = (undefined *)0x0;
    if (uVar2 != 0) {
      p_Var1 = (undefined *)F_00c73b13(in_esi,*(undefined4 *)(in_ebp + 0x10));
    }
  }
  return (uint)p_Var1;
}

/* ref: ___BuildCatchObjectHelper */
uint F_00c741d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc741d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * pvVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  undefined4 uVar7;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[3]);
  iVar5 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6a30);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc741dc;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if ((((*(uint * PTR32 *)&gen_args[2])[1] == 0) || (*((char *)GEN_TOP(((*(uint * PTR32 *)&gen_args[2])[1] + 8))) == '\0')) ||
     (((*(uint * PTR32 *)&gen_args[2])[2] == 0 && ((*(*(uint * PTR32 *)&gen_args[2]) & 0x80000000) == 0)))) {
    return 0;
  }
  puVar6 = (*(uint * PTR32 *)&gen_args[1]);
  if (-1 < (int)*(*(uint * PTR32 *)&gen_args[2])) {
    puVar6 = ((uint *)GEN_TOP(((*(uint * PTR32 *)&gen_args[2])[2] + 0xc + (int)(*(uint * PTR32 *)&gen_args[1]))));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if ((*(*(uint * PTR32 *)&gen_args[2]) & 8) == 0) {
    pvVar1 = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x18);
    if ((*(*(byte * PTR32 *)&gen_args[3]) & 1) == 0) {
      if (*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 0x18))) == 0) {
        iVar5 = F_00c7ed57(pvVar1,1);
        if ((iVar5 != 0) && (uVar4 = F_00c7ed69(puVar6,1), uVar4 != 0))
        {
          uVar7 = *(undefined4 *)(pbVar2 + 0x14);
          uVar4 = F_00c73b68(*(undefined4 *)((*(int *)&gen_args[0]) + 0x18),pbVar2 + 8);
          F_00c46e20(puVar6,uVar4,uVar7);
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
          return (*(uint *)(gen_frame + 0x0));
        }
      }
      else {
        iVar5 = F_00c7ed57(pvVar1,1);
        if (((iVar5 != 0) && (uVar4 = F_00c7ed69(puVar6,1), uVar4 != 0))
           && (uVar4 = F_00c7ed7b(*(undefined4 *)(pbVar2 + 0x18)),
              uVar4 != 0)) {
          uVar4 = ((*pbVar2 & 4) != 0) + 1;
          (*(uint *)(gen_frame + 0x0)) = uVar4;
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
          return uVar4;
        }
      }
    }
    else {
      iVar5 = F_00c7ed57(pvVar1,1);
      if ((iVar5 != 0) && (uVar4 = F_00c7ed69(puVar6,1), uVar4 != 0)) {
        F_00c46e20(puVar6,*(undefined4 *)((*(int *)&gen_args[0]) + 0x18),*(undefined4 *)(pbVar2 + 0x14));
        if (*(int *)(pbVar2 + 0x14) != 4) {
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
          return (*(uint *)(gen_frame + 0x0));
        }
        uVar4 = *puVar6;
        if (uVar4 == 0) {
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
          return (*(uint *)(gen_frame + 0x0));
        }
        goto LAB_00c74255;
      }
    }
  }
  else {
    iVar3 = F_00c7ed57(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x18),1);
    if ((iVar3 != 0) && (uVar4 = F_00c7ed69(puVar6,1), uVar4 != 0)) {
      uVar4 = *(uint *)(iVar5 + 0x18);
      *puVar6 = uVar4;
      pbVar2 = (*(byte * PTR32 *)&gen_args[3]);
LAB_00c74255: ;
      uVar4 = F_00c73b68(uVar4,pbVar2 + 8);
      *puVar6 = uVar4;
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
      return (*(uint *)(gen_frame + 0x0));
    }
  }
                    
  F_00c5aace();
}

/* ref: FUN_00c7433b */
uint F_00c7433b(void)
{
  GEN_ENTER(0xc7433bu, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c7433f */
unsigned int F_00c7433f(unsigned int gen_a0)
{
  GEN_ENTER(0xc7433fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
                    
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0xc74347;
  F_00c5aa82();
}

/* ref: ___BuildCatchObject */
uint F_00c7434f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7434fu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x24];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (*(int *)&gen_args[3]);
  iVar1 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f6a50);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc7435b;
  iVar4 = (*(int *)&gen_args[1]);
  if ((*(*(uint * PTR32 *)&gen_args[2]) & 0x80000000) == 0) {
    iVar4 = (*(uint * PTR32 *)&gen_args[2])[2] + 0xc + (*(int *)&gen_args[1]);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar3 = F_00c741d0((*(int *)&gen_args[0]),(*(int *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[2]),(*(int *)&gen_args[3]));
  if (uVar3 == 1) {
    F_00c73b68(*(undefined4 *)(iVar1 + 0x18),iVar2 + 8);
    uVar3 = F_00c54d98(iVar4,*(undefined4 *)(iVar2 + 0x18));
  }
  else {
    uVar3 = uVar3 - 2;
    if (uVar3 == 0) {
      F_00c73b68(*(undefined4 *)(iVar1 + 0x18),iVar2 + 8);
      uVar3 = F_00c54d9f(iVar4,*(undefined4 *)(iVar2 + 0x18));
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
  return uVar3;
}

/* ref: FUN_00c743d4 */
uint F_00c743d4(void)
{
  GEN_ENTER(0xc743d4u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c743d8 */
unsigned int F_00c743d8(unsigned int gen_a0)
{
  GEN_ENTER(0xc743d8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
                    
  *((undefined * PTR32 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = &REFG(undefined, 0xc743e0);
  F_00c5aa82();
}

/* ref: ___CxxExceptionFilter */
int F_00c743e1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc743e1u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * p_Var2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  piVar5 = *(int * PTR32 *)param_1;
  if (((param_2 == (undefined *)0x0) || (*(char *)((int)param_2 + 8) == '\0')) &&
     ((iVar6 = *piVar5, iVar6 == -0x1fbcb0b3 || ((iVar6 == -0x1fbcbcae || ((param_3 & 0x40U) == 0)))
      ))) {
    if ((((iVar6 != -0x1f928c9d) || (piVar5[4] != 3)) ||
        (((iVar6 = piVar5[5], iVar6 != 0x19930520 &&
          ((iVar6 != 0x19930521 && (iVar6 != 0x19930522)))) || (piVar5[7] != 0)))) ||
       (p_Var2 = F_00c5b37a(), (*(void * PTR32 *)(((char *)(p_Var2) + 136))) != (undefined *)0x0)) {
      p_Var2 = F_00c5b37a();
      (*(int *)(((char *)(p_Var2) + 144))) = (*(int *)(((char *)(p_Var2) + 144))) + 1;
      return 1;
    }
  }
  else if ((*piVar5 == -0x1f928c9d) &&
          ((piVar5[4] == 3 &&
           (((iVar6 = piVar5[5], iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
            (iVar6 == 0x19930522)))))) {
    if (piVar5[7] == 0) {
      p_Var2 = F_00c5b37a();
      if ((*(void * PTR32 *)(((char *)(p_Var2) + 136))) == (undefined *)0x0) {
        return 0;
      }
      p_Var2 = F_00c5b37a();
      piVar5 = (*(void * PTR32 *)(((char *)(p_Var2) + 136)));
    }
    piVar4 = *(int * PTR32 *)(piVar5[7] + 0xc);
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = param_2;
    iVar6 = *piVar4;
    (*(uint *)(gen_frame + 0xc)) = param_3 | 0x80000000;
    for (; piVar4 = piVar4 + 1, 0 < iVar6; iVar6 = iVar6 + -1) {
      iVar1 = *piVar4;
      uVar3 = F_00c73944(&(*(uint *)(gen_frame + 0xc)),iVar1,piVar5[7]);
      if (uVar3 != 0) {
        p_Var2 = F_00c5b37a();
        (*(int *)(((char *)(p_Var2) + 144))) = (*(int *)(((char *)(p_Var2) + 144))) + 1;
        if (param_4 == (undefined *)0x0) {
          return 1;
        }
        F_00c7434f(piVar5,param_4,&(*(uint *)(gen_frame + 0xc)),iVar1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: CatchIt */
uint F_00c7452f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc7452fu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  undefined * in_esi = (undefined *)(uintptr_t)gen_a1;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  undefined * param_9 = (undefined *)(uintptr_t)gen_a8;
  undefined * param_10 = (undefined *)(uintptr_t)gen_a9;
  undefined * pvVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  undefined * pEVar3;
  
  if (param_8 != 0) {
    F_00c7434f(param_4,in_esi,in_ebx,param_8);
  }
  pEVar3 = param_10;
  if (param_10 == (undefined *)0x0) {
    pEVar3 = in_esi;
  }
  F_00c54da6(pEVar3,param_4);
  pEVar3 = in_esi;
  F_00c739f2(in_esi,param_6,param_7,*in_edi);
  *(int *)(in_esi + 8) = in_edi[1] + 1;
  pvVar1 = F_00c74034(param_4,in_esi,param_5,param_7,param_9,0x100,(ulong)pEVar3);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    F_00c54d5f(pvVar1,in_esi);
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FindHandlerForForeignException */
unsigned int F_00c7459d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc7459du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  undefined * param_8 = (undefined *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * in_ebx;
  uint uVar1;
  undefined * pTVar2;
  undefined * p_Var3;
  undefined * pvVar4;
  int iVar5;
  undefined * p_Var6;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var3 = F_00c5b37a();
    if ((*(void * PTR32 *)(((char *)(p_Var3) + 128))) != (undefined *)0x0) {
      p_Var3 = F_00c5b37a();
      pvVar4 = (undefined *)F_00c5b18d();
      if (((((*(void * PTR32 *)(((char *)(p_Var3) + 128))) != pvVar4) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar5 = F_00c54eee(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar5 != 0)) {
        return 0;
      }
    }
    if ((*(uint *)(((char *)(param_5) + 12))) == 0) {
                    
      F_00c5aace();
    }
    p_Var6 = F_00c55064(param_5,param_7,param_6,&(*(uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)));
    if ((*(uint *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x0))) {
      (*(int * PTR32 *)(gen_frame + 0x4)) = &(*(int *)(((char *)(p_Var6) + 12)));
      do {
        if (((*(int *)((char *)(((*(int * PTR32 *)(gen_frame + 0x4)) + -3)))) <= param_6) && (param_6 <= (*(int * PTR32 *)(gen_frame + 0x4))[-2])
           ) {
          pTVar2 = (*((undefined * PTR32 *)GEN_TOP(((((char *)((*(int * PTR32 *)(gen_frame + 0x4))[1]) + (*(*(int * PTR32 *)(gen_frame + 0x4)) + -1) * 16) + 4)))));
          if (((pTVar2 == (undefined *)0x0) || (*(char *)&(*(void * PTR32 *)(((char *)(pTVar2) + (1) * 8))) == '\0')) &&
             (in_ebx = (undefined *)(*(int * PTR32 *)(gen_frame + 0x4))[1] + *(*(int * PTR32 *)(gen_frame + 0x4)) + -1, ((*(uint *)((char *)(in_ebx))) & 0x40) == 0))
          {
            F_00c7452f(in_ebx,param_2,(undefined *)((*(int * PTR32 *)(gen_frame + 0x4)) + -3),param_1,param_3,param_4,
                    param_5,0,param_7,param_8);
          }
        }
        uVar1 = (*(uint *)(gen_frame + 0x8)) + 1;
        (*(uint *)(gen_frame + 0x8)) = uVar1;
        (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x4)) + 5;
      } while (uVar1 < (*(uint *)(gen_frame + 0x0)));
    }
  }
  return 0;
}

/* ref: FindHandler */
unsigned int F_00c746a4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc746a4u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  bool bVar2;
  undefined * p_Var3;
  undefined * p_Var4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  undefined * pEVar9;
  undefined * PTR32 * ppHVar10;
  undefined * p_Var11;
  undefined * pEVar12;
  
  (*(char *)(gen_frame + 0x3b)) = '\0';
  if ((*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[4])) + 4))))) < 0x81) {
    iVar6 = (int)(char)(*(undefined * PTR32 *)&gen_args[1])[8];
  }
  else {
    iVar6 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 8)));
  }
  (*(int *)(gen_frame + 0x34)) = iVar6;
  if ((iVar6 < -1) || ((*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[4])) + 4))))) <= iVar6)) {
                    
    F_00c5aace();
  }
  pEVar9 = (*(undefined * PTR32 *)&gen_args[0]);
  if (*(int *)(*(undefined * PTR32 *)&gen_args[0]) == -0x1f928c9d) {
    if (((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 3) &&
        (((iVar6 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))), iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
         (iVar6 == 0x19930522)))) && (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) == 0)) {
      p_Var3 = F_00c5b37a();
      if ((*(void * PTR32 *)(((char *)(p_Var3) + 136))) == (undefined *)0x0) {
        return 0;
      }
      p_Var3 = F_00c5b37a();
      pEVar9 = (*(void * PTR32 *)(((char *)(p_Var3) + 136)));
      (*(undefined * PTR32 *)&gen_args[0]) = pEVar9;
      p_Var3 = F_00c5b37a();
      (*(undefined * PTR32 *)&gen_args[2]) = (*(void * PTR32 *)(((char *)(p_Var3) + 140)));
      iVar6 = F_00c7ed57(pEVar9,1);
      if (iVar6 == 0) {
                    
        F_00c5aace();
      }
      if ((((*(int *)pEVar9 == -0x1f928c9d) && (*(int *)(pEVar9 + 0x10) == 3)) &&
          ((iVar6 = *(int *)(pEVar9 + 0x14), iVar6 == 0x19930520 ||
           ((iVar6 == 0x19930521 || (iVar6 == 0x19930522)))))) && (*(int *)(pEVar9 + 0x1c) == 0)) {
                    
        F_00c5aace();
      }
      p_Var3 = F_00c5b37a();
      if ((*(void * PTR32 *)(((char *)(p_Var3) + 148))) != (undefined *)0x0) {
        p_Var3 = F_00c5b37a();
        piVar8 = (*(void * PTR32 *)(((char *)(p_Var3) + 148)));
        p_Var3 = F_00c5b37a();
        iVar6 = 0;
        (*(void * PTR32 *)(((char *)(p_Var3) + 148))) = (undefined *)0x0;
        bVar1 = F_00c73ebd(piVar8,(*(undefined * PTR32 *)&gen_args[0]));
        pEVar9 = (*(undefined * PTR32 *)&gen_args[0]);
        if (bVar1 == 0) {
          iVar7 = 0;
          if (0 < *piVar8) {
            do {
              bVar2 = F_00c4692b
                                (*(undefined * PTR32 *)(iVar7 + 4 + piVar8[1]),
                                 (undefined *)&(*(undefined (*)[8])REFP(0x134bea8)));
              if (bVar2) {
                F_00c73b13((*(undefined * PTR32 *)&gen_args[0]),1);
                (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)((char *)REFP(0x1125c90));
                F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),(char * PTR32 *)&(*(undefined * PTR32 *)&gen_args[0]));
                ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
                    
                F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x12f6a6c));
              }
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + 0x10;
            } while (iVar6 < *piVar8);
          }
          goto LAB_00c747e4;
        }
      }
    }
    p_Var11 = (*(undefined * PTR32 *)&gen_args[4]);
    if (((*(int *)pEVar9 == -0x1f928c9d) && (*(int *)(pEVar9 + 0x10) == 3)) &&
       ((iVar6 = *(int *)(pEVar9 + 0x14), iVar6 == 0x19930520 ||
        ((iVar6 == 0x19930521 || (iVar6 == 0x19930522)))))) {
      if (((*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[4])) + 12))))) != 0) &&
         (p_Var4 = F_00c55064((*(undefined * PTR32 *)&gen_args[4]),(*(int *)&gen_args[6]),(*(int *)(gen_frame + 0x34)),&(*(uint *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x1c))),
         (*(uint *)(gen_frame + 0x2c)) < (*(uint *)(gen_frame + 0x1c)))) {
        ppHVar10 = &(*(undefined * PTR32 *)(((char *)(p_Var4) + 16)));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = ppHVar10;
        do {
          (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(ppHVar10 + -4);
          if (((*(int *)((char *)((ppHVar10 + -4)))) <= (*(int *)(gen_frame + 0x34))) &&
             ((*(int *)(gen_frame + 0x34)) <= (int)ppHVar10[-3])) {
            (*(undefined * PTR32 *)(gen_frame + 0x30)) = *ppHVar10;
            (*(int *)(gen_frame + 0x24)) = (int)ppHVar10[-1];
            (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = ppHVar10;
            while (0 < (*(int *)(gen_frame + 0x24))) {
              piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(pEVar9 + 0x1c) + 0xc)));
              (*(int *)(gen_frame + 0x28)) = *piVar8;
              while (0 < (*(int *)(gen_frame + 0x28))) {
                piVar8 = piVar8 + 1;
                (*(int *)(gen_frame + 0x18)) = *piVar8;
                uVar5 = F_00c73944((*(undefined * PTR32 *)(gen_frame + 0x30)),*piVar8,*(int *)(pEVar9 + 0x1c));
                if (uVar5 != 0) {
                  (*(char *)(gen_frame + 0x3b)) = '\x01';
                  F_00c7452f((*(undefined * PTR32 *)(gen_frame + 0x30)),(*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x14)),pEVar9,(*(undefined * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[4]),(*(int *)(gen_frame + 0x18)),(*(int *)&gen_args[6]),
                          (*(undefined * PTR32 *)&gen_args[7]));
                  pEVar9 = (*(undefined * PTR32 *)&gen_args[0]);
                  ppHVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20));
                  goto LAB_00c74921;
                }
                (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + -1;
              }
              (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + -1;
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)(gen_frame + 0x30)) + (1) * 16;
            }
          }
LAB_00c74921: ;
          uVar5 = (*(uint *)(gen_frame + 0x2c)) + 1;
          (*(uint *)(gen_frame + 0x2c)) = uVar5;
          ppHVar10 = ppHVar10 + 5;
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = ppHVar10;
          p_Var11 = (*(undefined * PTR32 *)&gen_args[4]);
        } while (uVar5 < (*(uint *)(gen_frame + 0x1c)));
      }
      if ((*(uchar *)&gen_args[5]) != '\0') {
        F_00c73b13(pEVar9,1);
      }
      if (((((*(char *)(gen_frame + 0x3b)) == '\0') && (0x19930520 < ((*(uint *)((char *)(p_Var11))) & 0x1fffffff))) &&
          ((*(undefined * PTR32 *)(((char *)(p_Var11) + 28))) != (undefined *)0x0)) &&
         (bVar1 = F_00c73ebd((*(undefined * PTR32 *)(((char *)(p_Var11) + 28))),pEVar9), bVar1 == 0)) {
        F_00c5b37a();
        F_00c5b37a();
        p_Var3 = F_00c5b37a();
        (*(void * PTR32 *)(((char *)(p_Var3) + 136))) = pEVar9;
        p_Var3 = F_00c5b37a();
        (*(void * PTR32 *)(((char *)(p_Var3) + 140))) = (*(undefined * PTR32 *)&gen_args[2]);
        pEVar12 = (*(undefined * PTR32 *)&gen_args[7]);
        if ((*(undefined * PTR32 *)&gen_args[7]) == (undefined *)0x0) {
          pEVar12 = (*(undefined * PTR32 *)&gen_args[1]);
        }
        F_00c54da6(pEVar12,pEVar9);
        p_Var11 = (*(undefined * PTR32 *)&gen_args[4]);
        F_00c739f2((*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[4]),0xffffffff);
                    
        F_00c73f33((*(undefined * PTR32 *)(((char *)(p_Var11) + 28))));
      }
      goto LAB_00c74a01;
    }
  }
  if ((*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[4])) + 12))))) != 0) {
    if ((*(uchar *)&gen_args[5]) != '\0') {
LAB_00c747e4: ;
                    
      F_00c5aa82();
    }
    F_00c7459d(pEVar9,(*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[4]),(*(int *)(gen_frame + 0x34)),(*(int *)&gen_args[6]),(*(undefined * PTR32 *)&gen_args[7]));
  }
LAB_00c74a01: ;
  p_Var3 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var3) + 148))) == (undefined *)0x0) {
    return 0;
  }
                    
  F_00c5aace();
}

/* ref: FUN_00c74a19 */
uint F_00c74a19(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc74a19u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
  return (uint)this;
}

/* ref: ___InternalCxxFrameHandler */
uint F_00c74a36(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc74a36u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined * p_Var1;
  uint uVar2;
  
  p_Var1 = F_00c5b37a();
  if ((((*((int *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(p_Var1) + 156) + 290))))) + 0x27))) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     ((((*(uint *)((char *)(param_5))) & 0x1fffffff) < 0x19930522 ||
      (((*(int *)(((char *)(param_5) + 32))) & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if (((*(uint *)(((char *)(param_5) + 12))) != 0) ||
         ((0x19930520 < ((*(uint *)((char *)(param_5))) & 0x1fffffff) &&
          ((*(undefined * PTR32 *)(((char *)(param_5) + 28))) != (undefined *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 8))) != (code *)0x0)))) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 8))))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                             (uint)(byte)param_8);
          return uVar2;
        }
        F_00c746a4(param_1,param_2,param_3,param_4,param_5,(byte)param_8,param_6,param_7);
      }
    }
    else if (((*(int *)(((char *)(param_5) + 4))) != 0) && (param_6 == 0)) {
      F_00c739f2(param_2,param_4,param_5,0xffffffff);
    }
  }
  return 1;
}

/* ref: __CallSettingFrame@12 */
uint F_00c74b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc74b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  code * pcVar1;
  uint uVar2;
  int in_ecx;
  
  pcVar1 = (code *)F_00c6faac(param_1,param_3,param_3);
  uVar2 = (*pcVar1)();
  in_ecx = param_3;
  if (param_3 == 0x100) {
    in_ecx = 2;
  }
  uVar2 = F_00c6faac(uVar2,in_ecx,in_ecx);
  return uVar2;
}

/* ref: Constructor */
uint F_00c74b72(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc74b72u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[4] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return 0;
}

/* ref: Destructor */
unsigned int F_00c74b91(unsigned int gen_a0)
{
  GEN_ENTER(0xc74b91u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != 0) {
    while (*(int *)((int)this + 0xc) = *(int *)((int)this + 8), *(int *)((int)this + 8) != 0) {
      *(undefined4 *)((int)this + 8) = **(undefined4 * PTR32 *)((int)this + 0xc);
      ((code *)*(gen_code32 *)((int)this + 4))(*(undefined4 *)((int)this + 0xc));
    }
  }
  return 0;
}

/* ref: UnDecorator::getNumberOfDimensions */
int F_00c74bb9(void)
{
  GEN_ENTER(0xc74bb9u, 0u, 0u, 0u, 0u);
  int iVar1;
  char cVar2;
  
  cVar2 = *REFG(char * PTR32, 0x15d75d8);
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_00c74c04: ;
    if (cVar2 == '@') {
      cVar2 = *REFG(char * PTR32, 0x15d75d8);
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      if (cVar2 != '@') {
LAB_00c74c17: ;
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_00c74c17;
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      iVar1 = cVar2 + -0x41 + iVar1 * 0x10;
      cVar2 = *REFG(char * PTR32, 0x15d75d8);
      goto LAB_00c74c04;
    }
  }
  return 0;
}

/* ref: UnDecorator::getTypeEncoding */
int F_00c74c1b(void)
{
  GEN_ENTER(0xc74c1bu, 0u, 0u, 0u, 0u);
  char cVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  do {
    uVar6 = 0;
    if (*REFG(char * PTR32, 0x15d75d8) == '_') {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      uVar6 = 0x4000;
    }
    cVar1 = *REFG(char * PTR32, 0x15d75d8);
    if (('@' < cVar1) && (cVar1 < '[')) {
      uVar2 = (int)*REFG(char * PTR32, 0x15d75d8) - 0x41;
      pcVar3 = REFG(char * PTR32, 0x15d75d8) + 1;
      if ((uVar2 & 1) == 0) {
        uVar6 = uVar6 | 0x8000;
      }
      else {
        uVar6 = uVar6 | 0xa000;
      }
      if (0x17 < (int)uVar2) {
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        return uVar6;
      }
      if ((uVar6 & 0x8000) == 0) {
        uVar6 = uVar6 & 0xffff9fff;
      }
      else {
        uVar6 = uVar6 | 0x800;
      }
      uVar5 = uVar2 & 0x18;
      if (uVar5 == 0) {
        if ((uVar6 & 0x8000) == 0) {
          uVar6 = uVar6 | 0x800;
        }
        else {
          uVar6 = uVar6 | 0x40;
        }
      }
      else if (uVar5 == 8) {
        if ((uVar6 & 0x8000) == 0) {
          uVar6 = uVar6 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar6 = uVar6 | 0x80;
        }
      }
      else {
        if (uVar5 != 0x10) {
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0xffff;
        }
        if ((uVar6 & 0x8000) == 0) {
          uVar6 = uVar6 & 0xffffe7ff;
        }
      }
      uVar2 = uVar2 & 6;
      if (uVar2 != 0) {
        if (uVar2 == 2) {
          if ((uVar6 & 0x8000) == 0) {
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
            return uVar6 & 0xffff9fff;
          }
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return uVar6 | 0x200;
        }
        if (uVar2 != 4) {
          if (uVar2 != 6) {
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
            return 0xffff;
          }
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return uVar6 | 0x400;
        }
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        return uVar6 | 0x100;
      }
      REFG(char * PTR32, 0x15d75d8) = pcVar3;
      return uVar6;
    }
    if (cVar1 != '$') {
      cVar1 = *REFG(char * PTR32, 0x15d75d8);
      if (('/' < cVar1) && (cVar1 < '9')) {
        pcVar3 = REFG(char * PTR32, 0x15d75d8) + 1;
        switch((unsigned int)(uintptr_t)(cVar1)) {
        case '0': ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0x800;
        case '1': ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0x1000;
        case '2': ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0;
        case '3': ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0x4000;
        case '4': ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0x2000;
        case '5': ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0x6000;
        case '6': ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0x6800;
        case '7': ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0x7000;
        case '8': ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0x7800;
        default: ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0xffff;
        }
      }
      if (cVar1 != '9') {
        return (cVar1 != '\0') + 0xfffe;
      }
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      return 0xfffd;
    }
    bVar7 = false;
    pcVar3 = REFG(char * PTR32, 0x15d75d8) + 1;
    cVar1 = *pcVar3;
    if ('B' < cVar1) {
      if (cVar1 == 'C') {
        uVar6 = 0x7c00;
        goto LAB_00c74f74;
      }
      if (cVar1 == 'D') {
        uVar6 = uVar6 | 0x9100;
        goto LAB_00c74f74;
      }
      if (cVar1 == 'E') {
        uVar6 = uVar6 | 0x9200;
        goto LAB_00c74f74;
      }
      if (cVar1 != 'R') {
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        return 0xffff;
      }
      pcVar3 = REFG(char * PTR32, 0x15d75d8) + 2;
      cVar1 = *pcVar3;
      bVar7 = true;
      if ((cVar1 < '0') || ('5' < cVar1)) {
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        return (cVar1 == '\0') + 0xfffe;
      }
LAB_00c74e8c: ;
      if (bVar7) {
        uVar6 = uVar6 | 0x8e00;
      }
      else {
        uVar6 = uVar6 | 0x8d00;
      }
      if (((int)*pcVar3 - 0x30U & 1) != 0) {
        uVar6 = uVar6 | 0x2000;
      }
      uVar2 = (int)*pcVar3 - 0x30U & 6;
      if (uVar2 == 0) {
        if ((uVar6 & 0x8000) == 0) {
          uVar6 = uVar6 | 0x800;
        }
        else {
          uVar6 = uVar6 | 0x40;
        }
      }
      else if (uVar2 == 2) {
        if ((uVar6 & 0x8000) == 0) {
          uVar6 = uVar6 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar6 = uVar6 | 0x80;
        }
      }
      else {
        if (uVar2 != 4) {
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0xffff;
        }
        if ((uVar6 & 0x8000) == 0) {
          uVar6 = uVar6 & 0xffffe7ff;
        }
      }
      goto LAB_00c74f74;
    }
    if (cVar1 == 'B') {
      uVar6 = uVar6 | 0x9800;
      goto LAB_00c74f74;
    }
    if (cVar1 == '\0') {
      uVar6 = 0xfffe;
      pcVar3 = REFG(char * PTR32, 0x15d75d8);
      goto LAB_00c74f74;
    }
    if (cVar1 != '$') {
      if (cVar1 < '0') {
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        return 0xffff;
      }
      if ('5' < cVar1) {
        if (cVar1 != 'A') {
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0xffff;
        }
        uVar6 = uVar6 | 0x9000;
        goto LAB_00c74f74;
      }
      goto LAB_00c74e8c;
    }
    pcVar4 = pcVar3;
    if (REFG(char * PTR32, 0x15d75d8)[2] == 'P') {
      pcVar4 = REFG(char * PTR32, 0x15d75d8) + 2;
    }
    pcVar3 = pcVar4 + 1;
    cVar1 = *pcVar3;
    if (cVar1 < 'K') {
      if (cVar1 == 'J') {
LAB_00c74e05: ;
        pcVar3 = pcVar4 + 2;
        cVar1 = *pcVar3;
        if (('/' < cVar1) && (cVar1 < ':')) {
          REFG(char * PTR32, 0x15d75d8) = pcVar4 + cVar1 + -0x2d;
          uVar6 = F_00c74c1b();
          return uVar6 | 0x10000;
        }
        uVar6 = 0xffff;
LAB_00c74f74: ;
        REFG(char * PTR32, 0x15d75d8) = pcVar3 + 1;
        return uVar6;
      }
      if (cVar1 == '\0') {
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        return 0xfffe;
      }
      if (cVar1 != 'F') {
        bVar7 = cVar1 == 'H';
LAB_00c74cbf: ;
        if (!bVar7) {
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          return 0xffff;
        }
      }
    }
    else {
      if (cVar1 < 'L') {
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        return 0xffff;
      }
      if ('M' < cVar1) {
        if ('O' < cVar1) {
          bVar7 = cVar1 == 'Q';
          goto LAB_00c74cbf;
        }
        goto LAB_00c74e05;
      }
    }
    REFG(char * PTR32, 0x15d75d8) = pcVar4 + 2;
  } while( true );
}

/* ref: _HeapManager::getMemory */
undefined * F_00c751f2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc751f2u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7 & 0xfffffff8;
  if (param_2 != 0) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)this)(uVar3)));
    return pvVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (*(uint *)(this + 0x10) < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),0x1004,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if (*(undefined4 * PTR32 *)(this + 0xc) == (undefined4 *)0x0) {
          *(undefined4 * PTR32 *)(this + 8) = puVar2;
        }
        else {
          **(undefined4 * PTR32 *)(this + 0xc) = puVar2;
        }
        *(undefined4 * PTR32 *)(this + 0xc) = puVar2;
        *(uint *)(this + 0x10) = 0x1000 - uVar3;
        goto LAB_00c75269;
      }
    }
    pvVar1 = (undefined *)0x0;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_00c75269: ;
    pvVar1 = ((undefined *)GEN_TOP((*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10))));
  }
  return pvVar1;
}

/* ref: FUN_00c7528b */
uint F_00c7528b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7528bu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: DName::operator|= */
undefined * F_00c7538a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7538au, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char cVar1;
  
  if (((char)(*(uint *)(((char *)(this) + 4))) != '\x03') && (cVar1 = (char)(*(uint *)(((char *)(param_1) + 4))), '\x01' < cVar1)) {
    *(char *)&(*(uint *)(((char *)(this) + 4))) = cVar1;
  }
  return this;
}

/* ref: FUN_00c753a9 */
uint F_00c753a9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc753a9u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c753d9 */
uint F_00c753d9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc753d9u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x11263c8));
  *(undefined1 *)(in_ecx + 1) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c753f0 */
uint F_00c753f0(void)
{
  GEN_ENTER(0xc753f0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c753f4 */
undefined1 F_00c753f4(unsigned int gen_a0)
{
  GEN_ENTER(0xc753f4u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(undefined1 *)(param_1 + 4);
}

/* ref: FUN_00c753f8 */
uint F_00c753f8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc753f8u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  puVar1 = param_2;
  if (param_2 < param_3) {
    *param_2 = *(undefined1 *)(in_ecx + 4);
    puVar1 = param_2 + 1;
  }
  return (uint)puVar1;
}

/* ref: pDNameNode::pDNameNode */
unsigned int F_00c7540f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7540fu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char cVar1;
  undefined * pDVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11263d4));
  pDVar2 = param_1;
  if ((param_1 != (undefined *)0x0) &&
     ((cVar1 = (char)(*(uint *)(((char *)(param_1) + 4))), cVar1 == '\x02' || (cVar1 == '\x03')))) {
    pDVar2 = (undefined *)0x0;
  }
  *(undefined * PTR32 *)(this + 4) = pDVar2;
  return 0;
}

/* ref: FUN_00c75439 */
uint F_00c75439(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc75439u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((*(int * PTR32 *)((int)this + 4) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4))), puVar1 != (undefined4 *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00c7544f */
undefined4 F_00c7544f(unsigned int gen_a0)
{
  GEN_ENTER(0xc7544fu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 uVar2;
  
  if ((*(int * PTR32 *)(param_1 + 4) != (int *)0x0) &&
     (piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 4))), piVar1 != (int *)0x0)) {
                    
                    
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))();
    return uVar2;
  }
  return 0;
}

/* ref: pDNameNode::getString */
char * F_00c75466(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc75466u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  char * pcVar2;
  
  if ((*(int * PTR32 *)(this + 4) != (int *)0x0) &&
     (piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 4))), piVar1 != (int *)0x0)) {
    pcVar2 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1,param_2)));
    return pcVar2;
  }
  return param_1;
}

/* ref: DNameStatusNode::DNameStatusNode */
uint F_00c75487(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75487u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)(this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11263e0));
  *(uint *)(this + 8) = (-(uint)(param_1 != 1) & 0xfffffffc) + 4;
  return (uint)this;
}

/* ref: FUN_00c754ac */
uint F_00c754ac(unsigned int gen_a0)
{
  GEN_ENTER(0xc754acu, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00c754b0 */
byte F_00c754b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc754b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (*(int *)(param_1 + 4) != 1) - 1U & 0x20;
}

/* ref: pairNode::pairNode */
uint F_00c75542(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75542u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  in_ecx[3] = 0xffffffff;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x11263ec));
  in_ecx[2] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00c75563 */
uint F_00c75563(unsigned int gen_a0)
{
  GEN_ENTER(0xc75563u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xc) < 0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8))))(*(undefined4 * PTR32 *)((int)this + 8));
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1);
    *(uint *)((int)this + 0xc) = uVar2 + uVar3;
  }
  return *(uint *)((int)this + 0xc);
}

/* ref: FUN_00c7558e */
unsigned int F_00c7558e(unsigned int gen_a0)
{
  GEN_ENTER(0xc7558eu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  
  cVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 4))))();
  if (cVar1 == '\0') {
                    
                    
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))))();
    return 0;
  }
  return 0;
}

/* ref: pairNode::getString */
char * F_00c755aa(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc755aau, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4),param_1,param_2)));
  if (pcVar1 < param_2) {
    pcVar1 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 8))))(*(int * PTR32 *)(this + 8),pcVar1,param_2)));
  }
  return pcVar1;
}

/* ref: und_strncmp */
uint F_00c755fa(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc755fau, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte * in_ECX = 0;
  byte * in_EDX = 0;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  while( true ) {
    param_1 = param_1 + -1;
    if (((param_1 == (char *)0x0) || (*in_ECX == 0)) || (*in_ECX != *in_EDX)) break;
    in_ECX = in_ECX + 1;
    in_EDX = in_EDX + 1;
  }
  return (uint)*in_ECX - (uint)*in_EDX;
}

/* ref: UnDecorator::UnDecorator */
unsigned int F_00c75624(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc75624u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  code * param_4 = (code *)(uintptr_t)gen_a4;
  ulong param_5 = (ulong)gen_a5;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  REFG(char * PTR32, 0x15d75dc) = param_2;
  REFG(char * PTR32, 0x15d75d8) = param_2;
  if (param_1 == (char *)0x0) {
    REFG(char * PTR32, 0x15d75e0) = (char *)0x0;
    REFG(int, 0x15d75e4) = 0;
  }
  else {
    REFG(int, 0x15d75e4) = param_3;
    REFG(char * PTR32, 0x15d75e0) = param_1;
  }
  REFG(undefined4, 0x15d75d0) = this + 0x2c;
  REFG(undefined4, 0x15d75e8) = param_5;
  REFG(undefined4, 0x15d75cc) = this;
  REFG(undefined4, 0x15d75ec) = param_4;
  REFG(undefined1, 0x15d75f0) = 0;
  return 0;
}

/* ref: UnDecorator::getDataIndirectType_00c75693 */
uint F_00c75693(unsigned int gen_a0)
{
  GEN_ENTER(0xc75693u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) & 0xffff0000;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) & 0xffff0000;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_00c79512(param_1,&(*(undefined4 *)(gen_frame + 0xc)),&REFG(undefined1, 0x107fc63),&(*(undefined4 *)(gen_frame + 0x14)),0);
  return param_1;
}

/* ref: UnDecorator::getThisType */
uint F_00c756cc(unsigned int gen_a0)
{
  GEN_ENTER(0xc756ccu, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) & 0xffff0000;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) & 0xffff0000;
  F_00c79512(param_1,&(*(undefined4 *)(gen_frame + 0xc)),&REFG(undefined1, 0x107fc63),&(*(undefined4 *)(gen_frame + 0x14)),1);
  return param_1;
}

/* ref: operator_new */
undefined * F_00c75706(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75706u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),param_1,param_3);
  return pvVar1;
}

/* ref: getStringHelper */
char * F_00c7571d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7571du, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  char * pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4;
  if ((int)param_2 - (int)param_1 < param_4) {
    iVar3 = (int)param_2 - (int)param_1;
  }
  if (iVar3 != 0) {
    pcVar1 = param_1;
    iVar2 = iVar3;
    do {
      *pcVar1 = pcVar1[(int)param_3 - (int)param_1];
      pcVar1 = pcVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1 + iVar3;
}

/* ref: DName::DName_00c75754 */
undefined * F_00c75754(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75754u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  undefined * pDVar1;
  
  if (param_1 == (undefined *)0x0) {
    (*(undefined * PTR32 *)((char *)(this))) = (undefined *)0x0;
    *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  }
  else {
    this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),8,0);
    if (this_00 == (undefined *)0x0) {
      pDVar1 = (undefined *)0x0;
    }
    else {
      pDVar1 = (undefined *)F_00c7540f(this_00,param_1);
    }
    (*(undefined * PTR32 *)((char *)(this))) = pDVar1;
    *(byte *)&(*(uint *)(((char *)(this) + 4))) = (pDVar1 != (undefined *)0x0) - 1U & 3;
  }
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  return this;
}

/* ref: DName::getString */
char * F_00c757ec(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc757ecu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pDVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  
  pDVar1 = (*(undefined * PTR32 *)((char *)(this)));
  pcVar3 = param_1;
  if (pDVar1 == (undefined *)0x0) {
    if (param_1 != (char *)0x0) {
      *param_1 = '\0';
    }
  }
  else {
    uVar2 = param_2;
    if (param_1 == (char *)0x0) {
      uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)pDVar1)))(pDVar1);
      uVar2 = uVar2 + 1;
      pcVar3 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),uVar2,0);
      if (pcVar3 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    pDVar1 = (*(undefined * PTR32 *)((char *)(this)));
    pcVar4 = pcVar3;
    if (pDVar1 != (undefined *)0x0) {
      pcVar4 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pDVar1 + 8))(pDVar1,pcVar3,pcVar3 + (uVar2 - 1))));
    }
    *pcVar4 = '\0';
  }
  return pcVar3;
}

/* ref: DName::append */
unsigned int F_00c7584b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7584bu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pDVar1;
  undefined * pDVar2;
  
  if (param_1 != (undefined *)0x0) {
    pDVar2 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),0x10,0);
    if (pDVar2 == (undefined *)0x0) {
      pDVar2 = (undefined *)0x0;
    }
    else {
      pDVar1 = (*(undefined * PTR32 *)((char *)(this)));
      *(undefined4 *)(pDVar2 + 0xc) = 0xffffffff;
      *(undefined * PTR32 * PTR32 *)pDVar2 = (*(undefined * PTR32 (*)[3])REFP(0x11263ec));
      *(undefined * PTR32 *)(pDVar2 + 4) = pDVar1;
      *(undefined * PTR32 *)(pDVar2 + 8) = param_1;
    }
    (*(undefined * PTR32 *)((char *)(this))) = pDVar2;
    if (pDVar2 != (undefined *)0x0) {
      return 0;
    }
  }
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
  return 0;
}

/* ref: DName::operator=_00c75893 */
undefined * F_00c75893(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75893u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  undefined * pDVar1;
  
  (*(undefined * PTR32 *)((char *)(this))) = (undefined *)0x0;
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  if (param_1 != (undefined *)0x0) {
    this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),8,0);
    if (this_00 == (undefined *)0x0) {
      pDVar1 = (undefined *)0x0;
    }
    else {
      pDVar1 = (undefined *)F_00c7540f(this_00,param_1);
    }
    (*(undefined * PTR32 *)((char *)(this))) = pDVar1;
    if (pDVar1 != (undefined *)0x0) {
      return this;
    }
  }
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
  return this;
}

/* ref: Replicator::operator+= */
undefined * F_00c75917(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75917u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int *)this != 9) && ((*(undefined * PTR32 *)((char *)(param_1))) != (undefined *)0x0)) {
    puVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),8,0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = (*(undefined * PTR32 *)((char *)(param_1)));
      puVar1[1] = (*(uint *)(((char *)(param_1) + 4)));
    }
    if (puVar1 != (undefined4 *)0x0) {
      *(int *)this = *(int *)this + 1;
      *(undefined4 * PTR32 *)(this + *(int *)((int)(uintptr_t)this) * 4 + 4) = puVar1;
    }
  }
  return this;
}

/* ref: Replicator::operator[] */
uint F_00c75961(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75961u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  
  if (param_2 < 10) {
    if ((*(int *)this == -1) || (*(int *)this < (int)param_2)) {
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    }
    else {
      puVar1 = *(undefined4 * PTR32 *)(this + param_2 * 4 + 4);
      (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)*puVar1;
      (*(uint *)(((char *)(param_1) + 4))) = puVar1[1];
    }
  }
  else {
    F_00c757a7(param_1,3);
  }
  return (uint)param_1;
}

/* ref: pcharNode::pcharNode */
undefined * F_00c759b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc759b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11263f8));
  if ((param_2 == 0) || (param_1 == (char *)0x0)) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    puVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),param_2,0);
    *(undefined1 * PTR32 *)(this + 4) = puVar1;
    *(int *)(this + 8) = param_2;
    if ((puVar1 != (undefined1 *)0x0) && (param_2 != 0)) {
      iVar2 = (int)param_1 - (int)puVar1;
      iVar3 = param_2;
      do {
        *puVar1 = puVar1[iVar2];
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return this;
}

/* ref: FUN_00c75a07 */
uint F_00c75a07(unsigned int gen_a0)
{
  GEN_ENTER(0xc75a07u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00c75a0b */
undefined4 F_00c75a0b(unsigned int gen_a0)
{
  GEN_ENTER(0xc75a0bu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + -1 + iVar1))));
  }
  return 0;
}

/* ref: pcharNode::getString */
char * F_00c75a1d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75a1du, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char * pcVar1;
  
  pcVar1 = F_00c7571d(param_1,param_2,*(char * PTR32 *)(this + 4),*(int *)(this + 8));
  return pcVar1;
}

/* ref: DNameStatusNode::getString */
char * F_00c75a3a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75a3au, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char * pcVar1;
  
  pcVar1 = param_1;
  if (*(int *)(this + 4) == 1) {
    pcVar1 = F_00c7571d(param_1,param_2," ?? ",4);
  }
  return pcVar1;
}

/* ref: UnDecorator::getReturnType */
uint F_00c75a63(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75a63u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  if (*REFG(char * PTR32, 0x15d75d8) == '@') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    F_00c75754(param_1,param_2);
  }
  else {
    F_00c7a3ef(param_1,param_2);
  }
  return (uint)param_1;
}

/* ref: UnDecorator::getStorageConvention */
uint F_00c75a94(unsigned int gen_a0)
{
  GEN_ENTER(0xc75a94u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  F_00c75693(param_1);
  return param_1;
}

/* ref: DName::doPchar */
unsigned int F_00c75ae9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75ae9u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 DVar1;
  undefined * this_00;
  undefined * pDVar2;
  
  if ((*(undefined * PTR32 *)((char *)(this))) != (undefined *)0x0) {
    (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
    *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
    (*(undefined * PTR32 *)((char *)(this))) = (undefined *)0x0;
    return 0;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 2;
    return 0;
  }
  if (param_2 == 0) goto LAB_00c75b5b;
  if (param_2 == 1) {
    pDVar2 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),8,0);
    if (pDVar2 == (undefined *)0x0) goto LAB_00c75b53;
    DVar1 = (undefined1)*param_1;
    *(undefined * PTR32 * PTR32 *)pDVar2 = (*(undefined * PTR32 (*)[3])REFP(0x11263c8));
    pDVar2[4] = DVar1;
  }
  else {
    this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),0xc,0);
    if (this_00 == (undefined *)0x0) {
LAB_00c75b53: ;
      pDVar2 = (undefined *)0x0;
    }
    else {
      pDVar2 = (undefined *)F_00c759b0(this_00,param_1,param_2);
    }
  }
  (*(undefined * PTR32 *)((char *)(this))) = pDVar2;
  if (pDVar2 != (undefined *)0x0) {
    return 0;
  }
LAB_00c75b5b: ;
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
  return 0;
}

/* ref: DName::DName_00c75b6c */
undefined * F_00c75b6c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75b6cu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  *(undefined1 *)&(*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) = 0;
  (*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) = (*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[0])))) = (undefined *)0x0;
  if ((*(char *)&gen_args[1]) != '\0') {
    F_00c75ae9((*(undefined * PTR32 *)&gen_args[0]),&(*(char *)&gen_args[1]),1);
  }
  return (*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: DName::DName_00c75b99 */
undefined * F_00c75b99(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75b99u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int iVar1;
  
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = (undefined *)0x0;
  if ((param_1 != (char *)0x0) && (iVar1 = 0, *param_1 != '\0')) {
    do {
      iVar1 = iVar1 + 1;
    } while (param_1[iVar1] != '\0');
    if (iVar1 != 0) {
      F_00c75ae9(this,param_1,iVar1);
    }
  }
  return this;
}

/* ref: DName::DName_00c75bd6 */
undefined * F_00c75bd6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75bd6u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * PTR32 * param_1 = (char * PTR32 *)(uintptr_t)gen_a1;
  char param_2 = (char)gen_a2;
  byte bVar1;
  char cVar2;
  char * pcVar3;
  byte * pbVar4;
  int iVar5;
  
  iVar5 = 0;
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = (undefined *)0x0;
  pcVar3 = *param_1;
  if (pcVar3 == (char *)0x0) {
LAB_00c75c89: ;
    *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 2;
    return this;
  }
  if (*pcVar3 != '\0') {
    do {
      bVar1 = **param_1;
      if (bVar1 == param_2) break;
      if (((((((bVar1 != 0x5f) && (bVar1 != 0x24)) && (bVar1 != 0x3c)) &&
            (((bVar1 != 0x3e && (bVar1 != 0x2d)) && (((char)bVar1 < 'a' || ('z' < (char)bVar1))))))
           && (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) &&
          (((char)bVar1 < '0' || ('9' < (char)bVar1)))) &&
         (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((REFG(undefined4, 0x15d75e8) & 0x10000) == 0))))
      goto LAB_00c75c89;
      iVar5 = iVar5 + 1;
      pbVar4 = (byte *)(*param_1 + 1);
      *param_1 = (char *)pbVar4;
    } while (*pbVar4 != 0);
    F_00c75ae9(this,pcVar3,iVar5);
    cVar2 = **param_1;
    if (cVar2 != '\0') {
      *param_1 = *param_1 + 1;
      if (cVar2 == param_2) {
        return this;
      }
      (*(undefined * PTR32 *)((char *)(this))) = (undefined *)0x0;
      *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
      return this;
    }
    if ((char)(*(uint *)(((char *)(this) + 4))) != '\0') {
      return this;
    }
  }
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 1;
  return this;
}

/* ref: DName::DName_00c75c95 */
uint F_00c75c95(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75c95u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  byte * pbVar4;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((byte *)(gen_frame + 0xc))[0x1c] = (char)uVar3;
  ((byte *)(gen_frame + 0xc))[0x1d] = (char)(uVar3 >> 8);
  ((byte *)(gen_frame + 0xc))[0x1e] = (char)(uVar3 >> 0x10);
  ((byte *)(gen_frame + 0xc))[0x1f] = (char)(uVar3 >> 0x18);
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  pbVar4 = ((byte *)(gen_frame + 0xc)) + 0x18;
  (*(undefined * PTR32 *)((char *)(this))) = (undefined *)0x0;
  ((byte *)(gen_frame + 0xc))[0x18] = 0;
  uVar2 = CONCAT44(param_2,param_1);
  do {
    pbVar4 = pbVar4 + -1;
    uVar1 = uVar2 / 10;
    ((byte *)(gen_frame + 0xc))[0] = 0;
    ((byte *)(gen_frame + 0xc))[1] = 0;
    ((byte *)(gen_frame + 0xc))[2] = 0;
    ((byte *)(gen_frame + 0xc))[3] = 0;
    *pbVar4 = (char)(uVar2 % 10) + 0x30;
    uVar2 = uVar1;
  } while (uVar1 != 0);
  F_00c75ae9(this,(char *)pbVar4,(int)(((byte *)(gen_frame + 0xc)) + (0x18 - (int)pbVar4)));
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)this;
}

/* ref: DName::DName_00c75d03 */
uint F_00c75d03(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75d03u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((byte *)(gen_frame + 0x8))[0x20] = (char)uVar3;
  ((byte *)(gen_frame + 0x8))[0x21] = (char)(uVar3 >> 8);
  ((byte *)(gen_frame + 0x8))[0x22] = (char)(uVar3 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0x23] = (char)(uVar3 >> 0x18);
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = (undefined *)0x0;
  ((byte *)(gen_frame + 0x8))[0x1d] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  iVar4 = param_2;
  if ((param_2 < 1) && (param_2 < 0)) {
    bVar7 = param_1 != 0;
    param_1 = -param_1;
    ((byte *)(gen_frame + 0x8))[7] = 1;
    iVar4 = -(param_2 + (uint)bVar7);
  }
  pbVar6 = ((byte *)(gen_frame + 0x8)) + 0x1d;
  uVar2 = CONCAT44(iVar4,param_1);
  do {
    pbVar5 = pbVar6;
    pbVar6 = pbVar5 + -1;
    uVar1 = uVar2 / 10;
    *pbVar6 = (char)(uVar2 % 10) + 0x30;
    ((byte *)(gen_frame + 0x8))[0] = 0;
    ((byte *)(gen_frame + 0x8))[1] = 0;
    ((byte *)(gen_frame + 0x8))[2] = 0;
    ((byte *)(gen_frame + 0x8))[3] = 0;
    uVar2 = uVar1;
  } while (uVar1 != 0);
  if (((byte *)(gen_frame + 0x8))[7] != 0) {
    pbVar6 = pbVar5 + -2;
    *pbVar6 = 0x2d;
  }
  F_00c75ae9(this,(char *)pbVar6,(int)(((byte *)(gen_frame + 0x8)) + (0x1d - (int)pbVar6)));
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)this;
}

/* ref: DName::operator+=_00c75dc2 */
undefined * F_00c75dc2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75dc2u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pDVar1;
  
  if ((char)(*(uint *)(((char *)(this) + 4))) < '\x02') {
    pDVar1 = (*(undefined * PTR32 *)((char *)(param_1)));
    if (pDVar1 == (undefined *)0x0) {
      F_00c75aa7(this,(int)(char)(*(uint *)(((char *)(param_1) + 4))));
    }
    else if ((*(undefined * PTR32 *)((char *)(this))) == (undefined *)0x0) {
      (*(undefined * PTR32 *)((char *)(this))) = pDVar1;
      (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(param_1) + 4)));
    }
    else {
      F_00c7584b(this,pDVar1);
    }
  }
  return this;
}

/* ref: DName::operator+=_00c75e05 */
undefined * F_00c75e05(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75e05u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char cVar1;
  undefined * this_00;
  undefined * pDVar2;
  
  if (((char)(*(uint *)(((char *)(this) + 4))) < '\x02') && (param_1 != (undefined *)0x0)) {
    if ((*(undefined * PTR32 *)((char *)(this))) == (undefined *)0x0) {
      F_00c75893(this,param_1);
    }
    else {
      cVar1 = (char)(*(uint *)(((char *)(param_1) + 4)));
      if ((cVar1 == '\0') || (cVar1 == '\x01')) {
        this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),8,0);
        if (this_00 == (undefined *)0x0) {
          pDVar2 = (undefined *)0x0;
        }
        else {
          pDVar2 = (undefined *)F_00c7540f(this_00,param_1);
        }
        F_00c7584b(this,pDVar2);
      }
      else {
        F_00c75aa7(this,(int)cVar1);
      }
    }
  }
  return this;
}

/* ref: DName::operator=_00c75e6c */
undefined * F_00c75e6c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75e6cu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  *(undefined1 *)&(*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) = 0;
  (*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) = (*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[0])))) = (undefined *)0x0;
  if ((*(char *)&gen_args[1]) != '\0') {
    F_00c75ae9((*(undefined * PTR32 *)&gen_args[0]),&(*(char *)&gen_args[1]),1);
  }
  return (*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: DName::operator=_00c75e99 */
undefined * F_00c75e99(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc75e99u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = (undefined *)0x0;
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  F_00c75ae9(this,param_1,iVar2);
  return this;
}

/* ref: UnDecorator::getVCallThunkType */
uint F_00c75f96(unsigned int gen_a0)
{
  GEN_ENTER(0xc75f96u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    F_00c757a7(param_1,1);
  }
  else {
    if (*REFG(char * PTR32, 0x15d75d8) != 'A') {
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
      return (uint)param_1;
    }
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    F_00c75b99(param_1,"{flat}");
  }
  return (uint)param_1;
}

/* ref: DName::operator+_00c75fe1 */
uint F_00c75fe1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc75fe1u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)(this)));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(this) + 4)));
  F_00c75dc2(param_1,param_2);
  return (uint)param_1;
}

/* ref: DName::operator+_00c76005 */
uint F_00c76005(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc76005u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)(this)));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(this) + 4)));
  F_00c75e05(param_1,param_2);
  return (uint)param_1;
}

/* ref: DName::operator+=_00c76029 */
undefined * F_00c76029(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc76029u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char param_1 = (char)gen_a1;
  undefined * pDVar1;
  
  if (((char)(*(uint *)(((char *)(this) + 4))) < '\x02') && (param_1 != '\0')) {
    if ((*(undefined * PTR32 *)((char *)(this))) == (undefined *)0x0) {
      F_00c75e6c(this,param_1);
    }
    else {
      pDVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),8,0);
      if (pDVar1 == (undefined *)0x0) {
        pDVar1 = (undefined *)0x0;
      }
      else {
        *(undefined * PTR32 * PTR32 *)pDVar1 = (*(undefined * PTR32 (*)[3])REFP(0x11263c8));
        pDVar1[4] = (undefined1)param_1;
      }
      F_00c7584b(this,pDVar1);
    }
  }
  return this;
}

/* ref: DName::operator+=_00c7607b */
undefined * F_00c7607b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7607bu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  undefined * this_00;
  undefined * pDVar2;
  int iVar3;
  
  if ((((char)(*(uint *)(((char *)(this) + 4))) < '\x02') && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    if ((*(undefined * PTR32 *)((char *)(this))) == (undefined *)0x0) {
      F_00c75e99(this,param_1);
    }
    else {
      this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),0xc,0);
      if (this_00 == (undefined *)0x0) {
        pDVar2 = (undefined *)0x0;
      }
      else {
        iVar3 = 0;
        cVar1 = *param_1;
        while (cVar1 != '\0') {
          iVar3 = iVar3 + 1;
          cVar1 = param_1[iVar3];
        }
        pDVar2 = (undefined *)F_00c759b0(this_00,param_1,iVar3);
      }
      F_00c7584b(this,pDVar2);
    }
  }
  return this;
}

/* ref: UnDecorator::getArgumentList */
uint F_00c760df(unsigned int gen_a0)
{
  GEN_ENTER(0xc760dfu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined * pDVar4;
  
  *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 0;
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
  (*(int *)(gen_frame + 0x18)) = 1;
  (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
  cVar1 = (char)(*(uint *)(((char *)(param_1) + 4)));
  while( true ) {
    if (cVar1 != '\0') {
      return (uint)param_1;
    }
    if (*REFG(char * PTR32, 0x15d75d8) == '@') {
      return (uint)param_1;
    }
    if (*REFG(char * PTR32, 0x15d75d8) == 'Z') {
      return (uint)param_1;
    }
    if ((*(int *)(gen_frame + 0x18)) == 0) {
      F_00c76029(param_1,',');
    }
    else {
      (*(int *)(gen_frame + 0x18)) = 0;
    }
    pcVar2 = REFG(char * PTR32, 0x15d75d8);
    if (*REFG(char * PTR32, 0x15d75d8) == '\0') break;
    uVar3 = (int)*REFG(char * PTR32, 0x15d75d8) - 0x30;
    if (uVar3 < 10) {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      pDVar4 = (undefined *)F_00c75961(REFG(undefined4, 0x15d75cc),((undefined1 *)(gen_frame + 0x0)),uVar3);
      F_00c75dc2(param_1,pDVar4);
    }
    else {
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) & 0xffff0000;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_00c7a23e(&(*(undefined8 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x10)));
      if ((1 < (int)REFG(char * PTR32, 0x15d75d8) - (int)pcVar2) && (*(int *)REFG(undefined4, 0x15d75cc) != 9)) {
        F_00c75917(REFG(undefined4, 0x15d75cc),&(*(undefined8 *)(gen_frame + 0x8)));
      }
      F_00c75dc2(param_1,&(*(undefined8 *)(gen_frame + 0x8)));
      if (REFG(char * PTR32, 0x15d75d8) == pcVar2) {
        (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
        *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
        (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
      }
    }
    cVar1 = (char)(*(uint *)(((char *)(param_1) + 4)));
  }
  F_00c75aa7(param_1,1);
  return (uint)param_1;
}

/* ref: UnDecorator::getVdispMapType */
uint F_00c761e5(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc761e5u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pDVar1;
  
  (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)*param_2;
  (*(uint *)(((char *)(param_1) + 4))) = param_2[1];
  F_00c7607b(param_1,"{for ");
  pDVar1 = (undefined *)F_00c78e7c(((undefined1 *)(gen_frame + 0x4)));
  F_00c75dc2(param_1,pDVar1);
  F_00c76029(param_1,'}');
  if (*REFG(char * PTR32, 0x15d75d8) == '@') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  }
  return (uint)param_1;
}

/* ref: operator+_00c76239 */
uint F_00c76239(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc76239u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this;
  uint uVar1;
  
  uVar1 = param_1;
  this = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x4)),(char)param_2);
  F_00c75fe1(this,uVar1,param_3);
  return param_1;
}

/* ref: operator+_00c76281 */
uint F_00c76281(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc76281u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this;
  uint uVar1;
  
  uVar1 = param_1;
  this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),param_2);
  F_00c75fe1(this,uVar1,param_3);
  return param_1;
}

/* ref: DName::operator+_00c762a5 */
uint F_00c762a5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc762a5u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)(this)));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(this) + 4)));
  F_00c76029(param_1,(char)param_2);
  return (uint)param_1;
}

/* ref: DName::operator+_00c762c9 */
uint F_00c762c9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc762c9u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)(this)));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(this) + 4)));
  F_00c7607b(param_1,param_2);
  return (uint)param_1;
}

/* ref: UnDecorator::getDimension */
uint F_00c762ed(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc762edu, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  char * pcVar7;
  uint uVar8;
  
  pcVar7 = (char *)0x0;
  if (*REFG(char * PTR32, 0x15d75d8) == 'Q') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    pcVar7 = "`non-type-template-parameter";
  }
  cVar2 = *REFG(char * PTR32, 0x15d75d8);
  if (cVar2 == '\0') {
    F_00c757a7(param_1,1);
    return (uint)param_1;
  }
  if (('/' < cVar2) && (cVar2 < ':')) {
    iVar3 = *REFG(char * PTR32, 0x15d75d8) + -0x2f;
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if (pcVar7 == (char *)0x0) {
      puVar5 = (undefined4 *)F_00c75c95(&(*(undefined8 *)(gen_frame + 0x4)),iVar3,iVar3 >> 0x1f);
    }
    else {
      uVar4 = F_00c75c95(&(*(undefined8 *)(gen_frame + 0x14)),iVar3,iVar3 >> 0x1f);
      puVar5 = (undefined4 *)F_00c76281(((undefined1 *)(gen_frame + 0xc)),pcVar7,uVar4);
    }
    (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)*puVar5;
    (*(uint *)(((char *)(param_1) + 4))) = puVar5[1];
    return (uint)param_1;
  }
  uVar4 = 0;
  iVar3 = 0;
  while (cVar2 != '@') {
    if (cVar2 == '\0') {
      F_00c757a7(param_1,1);
      return (uint)param_1;
    }
    if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_00c763b9;
    uVar1 = uVar4 >> 0x1c;
    uVar6 = (int)cVar2 - 0x41;
    uVar8 = uVar4 * 0x10;
    uVar4 = uVar6 + uVar8;
    iVar3 = (iVar3 << 4 | uVar1) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar6,uVar8);
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    cVar2 = *REFG(char * PTR32, 0x15d75d8);
  }
  cVar2 = *REFG(char * PTR32, 0x15d75d8);
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if (cVar2 != '@') {
LAB_00c763b9: ;
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  if ((char)param_2 == '\0') {
    if (pcVar7 == (char *)0x0) {
      puVar5 = (undefined4 *)F_00c75c95(&(*(undefined8 *)(gen_frame + 0x14)),uVar4,iVar3);
      goto LAB_00c7641f;
    }
    uVar4 = F_00c75c95(&(*(undefined8 *)(gen_frame + 0x4)),uVar4,iVar3);
  }
  else {
    if (pcVar7 == (char *)0x0) {
      puVar5 = (undefined4 *)F_00c75d03(&(*(undefined8 *)(gen_frame + 0x14)),uVar4,iVar3);
      goto LAB_00c7641f;
    }
    uVar4 = F_00c75d03(&(*(undefined8 *)(gen_frame + 0x4)),uVar4,iVar3);
  }
  puVar5 = (undefined4 *)F_00c76281(((undefined1 *)(gen_frame + 0xc)),pcVar7,uVar4);
LAB_00c7641f: ;
  (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)*puVar5;
  (*(uint *)(((char *)(param_1) + 4))) = puVar5[1];
  return (uint)param_1;
}

/* ref: UnDecorator::getEnumType */
uint F_00c76433(unsigned int gen_a0)
{
  GEN_ENTER(0xc76433u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined * this;
  undefined * pDVar2;
  uint uVar3;
  undefined * PTR32 * ppDVar4;
  char * pcVar5;
  undefined * pDVar6;
  
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (undefined *)0x0;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) & 0xffff0000;
  if (cVar1 == '\0') {
    F_00c757a7(param_1,1);
    return (uint)param_1;
  }
  switch((unsigned int)(uintptr_t)(cVar1)) {
  case '0': ;
  case '1': ;
    pcVar5 = "char ";
    break;
  case '2': ;
  case '3': ;
    pcVar5 = "short ";
    break;
  case '4': ;
    goto switchD_00c76460_caseD_34;
  case '5': ;
    pcVar5 = "int ";
    break;
  case '6': ;
  case '7': ;
    pcVar5 = "long ";
    break;
  default: ;
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  F_00c75e99(&(*(undefined8 *)(gen_frame + 0x14)),pcVar5);
switchD_00c76460_caseD_34: ;
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) ||
     (pDVar2 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))), uVar3 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))), cVar1 == '7')) {
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x14));
    ppDVar4 = &(*(undefined * PTR32 *)(gen_frame + 0xc));
    this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),"unsigned ");
    F_00c75fe1(this,ppDVar4,pDVar6);
    pDVar2 = (*(undefined * PTR32 *)(gen_frame + 0xc));
    uVar3 = (*(uint *)(gen_frame + 0x10));
  }
  (*(undefined * PTR32 *)((char *)(param_1))) = pDVar2;
  (*(uint *)(((char *)(param_1) + 4))) = uVar3;
  return (uint)param_1;
}

/* ref: UnDecorator::getArgumentTypes */
uint F_00c7651f(unsigned int gen_a0)
{
  GEN_ENTER(0xc7651fu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char * pcVar2;
  undefined4 * puVar3;
  
  if (*REFG(char * PTR32, 0x15d75d8) == 'X') {
    pcVar2 = "void";
  }
  else {
    if (*REFG(char * PTR32, 0x15d75d8) != 'Z') {
      F_00c760df(&(*(undefined8 *)(gen_frame + 0x14)));
      if (((char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) == '\0') && (cVar1 = *REFG(char * PTR32, 0x15d75d8), cVar1 != '\0')) {
        if (cVar1 != '@') {
          if (cVar1 == 'Z') {
            REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
            pcVar2 = ",...";
            if ((~(REFG(undefined4, 0x15d75e8) >> 0x12) & 1) == 0) {
              pcVar2 = ",<ellipsis>";
            }
            puVar3 = (undefined4 *)F_00c762c9(&(*(undefined8 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0xc)),pcVar2);
            (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)*puVar3;
            (*(uint *)(((char *)(param_1) + 4))) = puVar3[1];
            return (uint)param_1;
          }
          (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
          (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
          *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
          return (uint)param_1;
        }
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      }
      (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
      return (uint)param_1;
    }
    pcVar2 = "...";
    if ((~(REFG(undefined4, 0x15d75e8) >> 0x12) & 1) == 0) {
      pcVar2 = "<ellipsis>";
    }
  }
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  F_00c75b99(param_1,pcVar2);
  return (uint)param_1;
}

/* ref: UnDecorator::getThrowTypes */
uint F_00c765ff(unsigned int gen_a0)
{
  GEN_ENTER(0xc765ffu, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pDVar2;
  undefined * pDVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  puVar5 = param_1;
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    uVar6 = 0x29;
    pDVar3 = &(*(undefined8 *)(gen_frame + 0x4));
    uVar4 = 1;
    pDVar2 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0xc))," throw(");
    pDVar3 = (undefined *)F_00c75d9e(pDVar2,pDVar3,uVar4);
  }
  else {
    if (*REFG(char * PTR32, 0x15d75d8) == 'Z') {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      *param_1 = 0;
      param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) & 0xffff0000;
      return (uint)param_1;
    }
    uVar1 = F_00c7651f(&(*(undefined8 *)(gen_frame + 0xc)));
    pDVar3 = &(*(undefined8 *)(gen_frame + 0x14));
    pDVar2 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4))," throw(");
    F_00c75fe1(pDVar2,pDVar3,uVar1);
    uVar6 = 0x29;
    pDVar3 = &(*(undefined8 *)(gen_frame + 0x14));
  }
  F_00c762a5(pDVar3,puVar5,uVar6);
  return (uint)param_1;
}

/* ref: UnDecorator::getExtendedDataIndirectType */
uint F_00c76689(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc76689u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined * puVar7;
  undefined * pDVar8;
  
  iVar3 = (int)REFG(char * PTR32, 0x15d75d8);
  uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) & 0xffff0000;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = uVar5;
  pDVar8 = (undefined *)0x0;
  REFG(char * PTR32, 0x15d75d8) = ((char *)GEN_TOP(((int)REFG(char * PTR32, 0x15d75d8) + 1)));
  iVar4 = (int)*REFG(char * PTR32, 0x15d75d8);
  if (iVar4 == 0x41) {
    if (param_4 == 0) {
      puVar7 = &REFG(undefined, 0x1126168);
      if (*(char *)*param_2 != '&') {
        puVar7 = &REFG(undefined, 0x112614c);
      }
      *param_2 = puVar7;
    }
LAB_00c7683b: ;
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 0;
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
  }
  else {
    if (iVar4 == 0x42) {
      if (param_4 == 0) {
        *param_3 = 1;
        ((char *)(gen_frame + 0x28))[0] = '>';
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)0x0;
        F_00c75ae9(&(*(undefined8 *)(gen_frame + 0x20)),((char *)(gen_frame + 0x28)),1);
        goto LAB_00c7683b;
      }
    }
    else {
      if (iVar4 == 0x43) {
        *param_2 = &REFG(undefined, 0x1126168);
        goto LAB_00c7683b;
      }
      if ((*REFG(char * PTR32, 0x15d75d8) == '\0') || (cVar2 = *(char *)(iVar3 + 2), cVar2 == '\0')) {
        F_00c757a7(param_1,1);
        return (uint)param_1;
      }
      if (param_4 == 0) {
        REFG(char * PTR32, 0x15d75d8) = (char *)(iVar3 + 3);
        uVar1 = cVar2 + -0x30 + (iVar4 + -0x30) * 0x10;
        if (1 < uVar1) {
          ((char *)(gen_frame + 0x28))[0] = ',';
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)0x0;
          F_00c75ae9(&(*(undefined8 *)(gen_frame + 0x20)),((char *)(gen_frame + 0x28)),1);
          uVar5 = F_00c75c95(&(*(undefined8 *)(gen_frame + 0x10)),uVar1,0);
          puVar6 = (undefined4 *)F_00c75fe1(&(*(undefined8 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x8)),uVar5);
          pDVar8 = (undefined *)*puVar6;
          uVar5 = puVar6[1];
        }
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = pDVar8;
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = uVar5;
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x18)),'>');
        cVar2 = *REFG(char * PTR32, 0x15d75d8);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
        if (cVar2 == '$') {
          REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
        }
        else {
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x18)),'^');
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
        }
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
        if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
          F_00c75aa7(&(*(undefined8 *)(gen_frame + 0x20)),1);
        }
        else {
          REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
        }
        (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
        (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) | 0x4000;
        return (uint)param_1;
      }
    }
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
  }
  (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
  return (uint)param_1;
}

/* ref: UnDecorator::getArrayType */
uint F_00c76851(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc76851u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppDVar3;
  undefined * pDVar4;
  undefined * pDVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    if ((*(undefined * PTR32 *)((char *)(param_2))) != (undefined *)0x0) {
      pDVar5 = &(*(undefined8 *)(gen_frame + 0x14));
      pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x4)),'(');
      F_00c75fe1(pDVar4,pDVar5,param_2);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x24)),")[");
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x2c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
      F_00c75aa7(&(*(undefined8 *)(gen_frame + 0x2c)),1);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x2c)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4)));
      F_00c76029(&(*(undefined8 *)(gen_frame + 0x34)),']');
      pDVar5 = &(*(undefined8 *)(gen_frame + 0x34));
      goto LAB_00c76a36;
    }
    pDVar5 = &(*(undefined8 *)(gen_frame + 0x4));
    ppDVar3 = ((undefined * PTR32 *)(gen_frame + 0xc));
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
  }
  else {
    uVar1 = F_00c74bb9();
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = uVar1;
    if ((int)uVar1 < 0) {
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = 0;
    }
    if ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) != 0) {
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) & 0xffff0000;
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x2c))))) = (undefined *)0x0;
      if (((*(uint *)(((char *)(param_2) + 4))) & 0x800) != 0) {
        F_00c7607b(&(*(undefined8 *)(gen_frame + 0x2c)),"[]");
      }
      while (((uVar1 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))), (char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) < '\x02' &&
              ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) - 1, uVar1 != 0)) && (*REFG(char * PTR32, 0x15d75d8) != '\0'))) {
        uVar1 = F_00c762ed(((undefined * PTR32 *)(gen_frame + 0xc)),0);
        ppDVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
        pDVar5 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x4)),'[');
        F_00c75fe1(pDVar5,ppDVar3,uVar1);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(gen_frame + 0x20));
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x24)),']');
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x2c)),&(*(undefined8 *)(gen_frame + 0x24)));
      }
      if ((*(undefined * PTR32 *)((char *)(param_2))) != (undefined *)0x0) {
        if (((*(uint *)(((char *)(param_2) + 4))) & 0x800) == 0) {
          ppDVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
          pDVar5 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x4)),'(');
          F_00c75fe1(pDVar5,ppDVar3,param_2);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34))))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = (*(uint *)(gen_frame + 0x20));
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x34)),')');
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4)));
          F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x24)),&(*(undefined8 *)(gen_frame + 0x2c)));
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x2c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
          uVar1 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
        }
        else {
          puVar2 = (undefined4 *)F_00c75fe1(param_2,&(*(undefined8 *)(gen_frame + 0x4)),&(*(undefined8 *)(gen_frame + 0x2c)));
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x2c))))) = (undefined *)*puVar2;
          uVar1 = puVar2[1];
        }
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) = uVar1;
      }
      F_00c7a23e(&(*(undefined8 *)(gen_frame + 0x14)),&(*(undefined8 *)(gen_frame + 0x2c)));
      *param_1 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
      param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) | 0x800;
      return (uint)param_1;
    }
    pDVar5 = &(*(undefined8 *)(gen_frame + 0x14));
    ppDVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x24));
  }
  uVar7 = 0x5d;
  uVar6 = 1;
  pDVar4 = (undefined *)F_00c75b6c(pDVar4,'[');
  pDVar4 = (undefined *)F_00c75d9e(pDVar4,ppDVar3,uVar6);
  pDVar5 = (undefined *)F_00c762a5(pDVar4,pDVar5,uVar7);
LAB_00c76a36: ;
  F_00c79e7b(param_1,pDVar5);
  return (uint)param_1;
}

/* ref: UnDecorator::getDisplacement */
uint F_00c76a84(unsigned int gen_a0)
{
  GEN_ENTER(0xc76a84u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  F_00c762ed(param_1,1);
  return param_1;
}

/* ref: FID_conflict_getGuardNumber_00c76a9a */
uint F_00c76a9a(unsigned int gen_a0)
{
  GEN_ENTER(0xc76a9au, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  F_00c762ed(param_1,0);
  return param_1;
}

/* ref: FID_conflict_getGuardNumber_00c76ab0 */
uint F_00c76ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xc76ab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  F_00c762ed(param_1,0);
  return param_1;
}

/* ref: UnDecorator::getStringEncoding */
uint F_00c76c25(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc76c25u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  char cVar2;
  
  F_00c75b99(&(*(undefined8 *)(gen_frame + 0x14)),param_2);
  pcVar1 = REFG(char * PTR32, 0x15d75d8);
  cVar2 = *REFG(char * PTR32, 0x15d75d8);
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if ((cVar2 != '@') || (cVar2 = *REFG(char * PTR32, 0x15d75d8), REFG(char * PTR32, 0x15d75d8) = pcVar1 + 2, cVar2 != '_')) {
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  REFG(char * PTR32, 0x15d75d8) = pcVar1 + 3;
  F_00c762ed(((undefined1 *)(gen_frame + 0xc)),0);
  F_00c762ed(((undefined1 *)(gen_frame + 0xc)),0);
  cVar2 = *REFG(char * PTR32, 0x15d75d8);
  pcVar1 = REFG(char * PTR32, 0x15d75d8);
  if (cVar2 != '\0') {
    do {
      if (cVar2 == '@') break;
      pcVar1 = pcVar1 + 1;
      cVar2 = *pcVar1;
    } while (cVar2 != '\0');
    if (*pcVar1 != '\0') {
      REFG(char * PTR32, 0x15d75d8) = pcVar1 + 1;
      (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
      return (uint)param_1;
    }
  }
  REFG(char * PTR32, 0x15d75d8) = pcVar1 + -1;
  F_00c757a7(param_1,1);
  return (uint)param_1;
}

/* ref: UnDecorator::getSignedDimension */
uint F_00c76cd8(unsigned int gen_a0)
{
  GEN_ENTER(0xc76cd8u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    F_00c757a7(param_1,1);
  }
  else if (*REFG(char * PTR32, 0x15d75d8) == '?') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    uVar1 = F_00c762ed(((undefined1 *)(gen_frame + 0x4)),0);
    F_00c76239(param_1,0x2d,uVar1);
  }
  else {
    F_00c762ed(param_1,0);
  }
  return (uint)param_1;
}

/* ref: UnDecorator::getTemplateConstant */
uint F_00c76d2a(unsigned int gen_a0)
{
  GEN_ENTER(0xc76d2au, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  char cVar1;
  char * pcVar2;
  undefined * pDVar3;
  undefined * pDVar4;
  long lVar5;
  uint uVar6;
  undefined * pDVar7;
  undefined1 * puVar8;
  undefined4 uVar9;
  
  pcVar2 = REFG(char * PTR32, 0x15d75d8);
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if (cVar1 < 'E') {
    if (cVar1 == 'D') {
LAB_00c76ed9: ;
      F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x4c)));
      if ((REFG(undefined4, 0x15d75e8) & 0x4000) != 0) {
        F_00c757ec(&(*(undefined8 *)(gen_frame + 0x4c)),((char *)(gen_frame + 0xb8)),0x10);
        pcVar2 = ((char *)(gen_frame + 0xb8));
        lVar5 = F_00c4c71d(pcVar2);
        uVar6 = ((code *)REFG(gen_code32, 0x15d75ec))(lVar5);
        if (uVar6 != 0) {
LAB_00c76e35: ;
          F_00c75b99(param_1,pcVar2);
          goto LAB_00c77009;
        }
      }
      pDVar7 = &(*(undefined8 *)(gen_frame + 0x4c));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x44));
      if (cVar1 == 'D') {
        pcVar2 = "`template-parameter";
      }
      else {
        pcVar2 = "`non-type-template-parameter";
      }
      pDVar3 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0xc0)),pcVar2);
      F_00c75fe1(pDVar3,pDVar4,pDVar7);
      F_00c762c9(&(*(undefined8 *)(gen_frame + 0x44)),param_1,&REFG(undefined, 0x11264a4));
      goto LAB_00c77009;
    }
    if (cVar1 == '\0') {
LAB_00c76e73: ;
      REFG(char * PTR32, 0x15d75d8) = pcVar2;
      F_00c757a7(param_1,1);
      goto LAB_00c77009;
    }
    if (cVar1 == '0') {
      F_00c76cd8(param_1);
      goto LAB_00c77009;
    }
    pDVar7 = param_1;
    if (cVar1 == '1') {
      if (*REFG(char * PTR32, 0x15d75d8) == '@') {
        REFG(char * PTR32, 0x15d75d8) = pcVar2 + 2;
        pcVar2 = "NULL";
        goto LAB_00c76e35;
      }
      pDVar4 = (undefined *)F_00c78c0e(((undefined1 *)(gen_frame + 0x4)));
      pDVar3 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x3c)),"&");
LAB_00c76e14: ;
      F_00c75fe1(pDVar3,pDVar7,pDVar4);
      goto LAB_00c77009;
    }
    if (cVar1 == '2') {
      F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x4c)));
      F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x44)));
      pcVar2 = REFG(char * PTR32, 0x15d75d8);
      if (('\x01' < (char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x4c))) + 4)))) || ('\x01' < (char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x44))) + 4))))) goto LAB_00c76e73;
      pcVar2 = F_00c757ec(&(*(undefined8 *)(gen_frame + 0x4c)),&(*(char *)(gen_frame + 0x55)),100);
      if (pcVar2 != (char *)0x0) {
        (*(char *)(gen_frame + 0x54)) = (*(char *)(gen_frame + 0x55));
        if ((*(char *)(gen_frame + 0x55)) == '-') {
          (*(char *)(gen_frame + 0x55)) = (*(char *)(gen_frame + 0x56));
          (*(char *)(gen_frame + 0x56)) = '.';
        }
        else {
          (*(char *)(gen_frame + 0x55)) = '.';
        }
        pDVar4 = &(*(undefined8 *)(gen_frame + 0x44));
        uVar9 = 0x65;
        puVar8 = ((undefined1 *)(gen_frame + 0x2c));
        pDVar3 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0xc)),&(*(char *)(gen_frame + 0x54)));
        pDVar3 = (undefined *)F_00c762a5(pDVar3,puVar8,uVar9);
        goto LAB_00c76e14;
      }
    }
    goto LAB_00c76dc0;
  }
  if (cVar1 == 'E') {
    F_00c78c0e(param_1);
    goto LAB_00c77009;
  }
  if ('E' < cVar1) {
    if (cVar1 < 'K') {
      F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x4c)),'{');
      if (('G' < cVar1) && (cVar1 < 'K')) {
        pDVar7 = (undefined *)F_00c78c0e(((undefined1 *)(gen_frame + 0x1c)));
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x4c)),pDVar7);
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x4c)),',');
      }
      if (cVar1 == 'F') {
LAB_00c76fbf: ;
        pDVar7 = (undefined *)F_00c76cd8(((undefined1 *)(gen_frame + 0x24)));
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x4c)),pDVar7);
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x4c)),',');
LAB_00c76fdf: ;
        pDVar7 = (undefined *)F_00c76cd8(((undefined1 *)(gen_frame + 0x14)));
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x4c)),pDVar7);
      }
      else {
        if (cVar1 == 'G') {
LAB_00c76f9f: ;
          pDVar7 = (undefined *)F_00c76cd8(((undefined1 *)(gen_frame + 0x34)));
          F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x4c)),pDVar7);
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x4c)),',');
          goto LAB_00c76fbf;
        }
        if (cVar1 == 'H') goto LAB_00c76fdf;
        if (cVar1 == 'I') goto LAB_00c76fbf;
        if (cVar1 == 'J') goto LAB_00c76f9f;
      }
      F_00c762a5(&(*(undefined8 *)(gen_frame + 0x4c)),param_1,0x7d);
      goto LAB_00c77009;
    }
    if (cVar1 == 'Q') goto LAB_00c76ed9;
    if (cVar1 == 'R') {
      F_00c77a54(&(*(undefined8 *)(gen_frame + 0x44)),0,0);
      F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x4c)));
      (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x44)))));
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x44))) + 4)));
      goto LAB_00c77009;
    }
  }
LAB_00c76dc0: ;
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
  *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
LAB_00c77009: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return (uint)param_1;
}

/* ref: UnDecorator::getPtrRefDataType */
uint F_00c7701a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7701au, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  uint uVar1;
  undefined * pDVar2;
  char * pcVar3;
  undefined * PTR32 * ppDVar4;
  undefined * PTR32 * ppDVar5;
  
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    F_00c7625d(param_1,1,param_2);
    return (uint)param_1;
  }
  if ((param_3 != 0) && (*REFG(char * PTR32, 0x15d75d8) == 'X')) {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if (*param_2 != 0) {
      F_00c76281(param_1,"void ",param_2);
      return (uint)param_1;
    }
    F_00c75b99(param_1,"void");
    return (uint)param_1;
  }
  if (*REFG(char * PTR32, 0x15d75d8) == 'Y') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    F_00c76851(param_1,param_2);
    return (uint)param_1;
  }
  F_00c79e7b(&(*(undefined * PTR32 *)(gen_frame + 0x14)),param_2);
  if ((param_2[1] & 0x4000U) == 0) {
    uVar1 = (*(uint *)(gen_frame + 0x18));
    pDVar2 = (*(undefined * PTR32 *)(gen_frame + 0x14));
    if ((param_2[1] & 0x2000U) == 0) goto LAB_00c770e2;
    pcVar3 = "cli::pin_ptr<";
  }
  else {
    pcVar3 = "cli::array<";
  }
  ppDVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  ppDVar4 = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),pcVar3);
  F_00c75fe1(this,ppDVar4,ppDVar5);
  uVar1 = (*(uint *)(gen_frame + 0x10));
  pDVar2 = (*(undefined * PTR32 *)(gen_frame + 0xc));
LAB_00c770e2: ;
  (*(undefined * PTR32 *)((char *)(param_1))) = pDVar2;
  (*(uint *)(((char *)(param_1) + 4))) = uVar1;
  return (uint)param_1;
}

/* ref: UnDecorator::getVbTableType */
uint F_00c77101(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc77101u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00c76ac6(param_1,param_2);
  return param_1;
}

/* ref: UnDecorator::getOperatorName */
uint F_00c77327(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc77327u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  bool bVar2;
  char * pcVar3;
  undefined * pDVar4;
  uint uVar5;
  undefined * pDVar6;
  int * piVar7;
  int iVar8;
  undefined * pDVar9;
  undefined * pDVar10;
  char * pcVar11;
  undefined1 * puVar12;
  undefined4 uVar13;
  
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x94))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x94))) + 4))) & 0xffff0000;
  uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8c))) + 4))) & 0xffff0000;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8c))) + 4))) = uVar5;
  bVar2 = false;
  pcVar3 = REFG(char * PTR32, 0x15d75d8) + 1;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94))))) = (undefined *)0x0;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8c))))) = (undefined *)0x0;
  if ('A' < cVar1) {
    if (cVar1 == 'B') {
      bVar2 = true;
      goto LAB_00c778cd;
    }
    if (cVar1 < 'C') goto LAB_00c777c1;
    if (cVar1 < '[') goto LAB_00c778cd;
    if (cVar1 == '_') {
      cVar1 = *pcVar3;
      pcVar3 = REFG(char * PTR32, 0x15d75d8) + 2;
      if (cVar1 < 'P') {
        if ('C' < cVar1) {
LAB_00c778aa: ;
          pcVar11 = *((char * PTR32 *)GEN_TOP(("__pascal" + REFG(char * PTR32, 0x15d75d8)[1] * 4)));
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
LAB_00c7754c: ;
          F_00c75b99(param_1,pcVar11);
          return (uint)param_1;
        }
        if (cVar1 < ':') {
          if (cVar1 == '9') {
            pcVar11 = REFG(char * PTR32, 0x15d75d8) + 1;
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
            F_00c75b99(&(*(undefined8 *)(gen_frame + 0x7c)),*((char * PTR32 *)GEN_TOP(("__based(" + *pcVar11 * 4 + 8))));
            uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x7c))) + 4))) | 0x8000;
LAB_00c77582: ;
            (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x7c)))));
            goto LAB_00c773d0;
          }
          if (cVar1 == '\0') {
LAB_00c774cb: ;
            pcVar3 = pcVar3 + -1;
LAB_00c774d1: ;
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
            F_00c757a7(param_1,1);
            return (uint)param_1;
          }
          if ('/' < cVar1) {
            if (cVar1 < '7') {
              pcVar11 = *((char * PTR32 *)GEN_TOP(("__based(" + REFG(char * PTR32, 0x15d75d8)[1] * 4 + 8)));
              REFG(char * PTR32, 0x15d75d8) = pcVar3;
              goto LAB_00c77390;
            }
            if (cVar1 < '9') {
              pcVar11 = *((char * PTR32 *)GEN_TOP(("__based(" + REFG(char * PTR32, 0x15d75d8)[1] * 4 + 8)));
              REFG(char * PTR32, 0x15d75d8) = pcVar3;
              goto LAB_00c7754c;
            }
          }
        }
        else if (cVar1 == '?') {
          cVar1 = *pcVar3;
          pcVar3 = REFG(char * PTR32, 0x15d75d8) + 3;
          if (cVar1 == '\0') goto LAB_00c774cb;
          if (cVar1 == '0') {
            uVar13 = 0;
            pcVar11 = "`anonymous namespace\'";
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
LAB_00c775b6: ;
            F_00c76c25(&(*(undefined8 *)(gen_frame + 0x7c)),pcVar11,uVar13);
            uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x7c))) + 4))) | 0x1000;
            goto LAB_00c77582;
          }
        }
        else if ('@' < cVar1) {
          if (cVar1 < 'C') goto LAB_00c778aa;
          if (cVar1 == 'C') {
            uVar13 = 1;
            pcVar11 = "`string\'";
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
            goto LAB_00c775b6;
          }
        }
      }
      else if (cVar1 < 'U') {
        if ('R' < cVar1) goto LAB_00c778aa;
        if (cVar1 == 'P') {
          pcVar11 = REFG(char * PTR32, 0x15d75d8) + 1;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          F_00c75e99(&(*(undefined8 *)(gen_frame + 0x94)),*(char * PTR32 *)("__pascal" + *pcVar11 * 4));
          piVar7 = (int *)F_00c77327((undefined *)((undefined1 *)(gen_frame + 0x2c)),0,(undefined1 *)0x0);
          pDVar10 = (undefined *)*piVar7;
          uVar5 = piVar7[1];
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8c))))) = pDVar10;
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8c))) + 4))) = uVar5;
          if ((pDVar10 == (undefined *)0x0) || (pcVar3 = REFG(char * PTR32, 0x15d75d8), (uVar5 & 0x400) == 0)) {
LAB_00c777d6: ;
            pDVar9 = &(*(undefined8 *)(gen_frame + 0x94));
LAB_00c777d9: ;
            F_00c75fe1(pDVar9,param_1,&(*(undefined8 *)(gen_frame + 0x8c)));
            return (uint)param_1;
          }
        }
        else {
          pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94)))));
          if (cVar1 == 'Q') goto LAB_00c773c8;
          if (cVar1 == 'R') {
            pcVar11 = REFG(char * PTR32, 0x15d75d8) + 1;
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
            F_00c75e99(&(*(undefined8 *)(gen_frame + 0x94)),*(char * PTR32 *)("__pascal" + *pcVar11 * 4));
            if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
              F_00c75d9e(&(*(undefined8 *)(gen_frame + 0x94)),param_1,1);
              return (uint)param_1;
            }
            uVar5 = (int)*REFG(char * PTR32, 0x15d75d8) - 0x30;
            pcVar3 = REFG(char * PTR32, 0x15d75d8);
            if ((-1 < (int)uVar5) && (uVar5 < 5)) {
              F_00c75e99(&(*(undefined8 *)(gen_frame + 0x8c)),(&REFG(undefined * PTR32, 0x11263a8))[uVar5]);
              pcVar3 = REFG(char * PTR32, 0x15d75d8);
              iVar8 = (int)*REFG(char * PTR32, 0x15d75d8);
              REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
              if (iVar8 == 0x30) {
                F_00c7a3ef(&(*(undefined8 *)(gen_frame + 0x74)),0);
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x84))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x74)))));
                (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x84))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x74))) + 4)));
                F_00c76029(&(*(undefined8 *)(gen_frame + 0x84)),' ');
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x7c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x84)))));
                (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x7c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x84))) + 4)));
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x7c)),&(*(undefined8 *)(gen_frame + 0x94)));
                pDVar9 = &(*(undefined8 *)(gen_frame + 0x7c));
                goto LAB_00c777d9;
              }
              if (iVar8 == 0x31) {
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x84))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94)))));
                (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x84))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x94))) + 4)));
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x84)),&(*(undefined8 *)(gen_frame + 0x8c)));
                uVar13 = 0x2c;
                puVar12 = ((undefined1 *)(gen_frame + 0x54));
                pDVar9 = (undefined *)F_00c76cd8(((undefined1 *)(gen_frame + 0x64)));
                pDVar9 = (undefined *)F_00c762a5(pDVar9,puVar12,uVar13);
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x84)),pDVar9);
                uVar13 = 0x2c;
                puVar12 = ((undefined1 *)(gen_frame + 0x44));
                pDVar9 = (undefined *)F_00c76cd8(((undefined1 *)(gen_frame + 0x24)));
                pDVar9 = (undefined *)F_00c762a5(pDVar9,puVar12,uVar13);
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x84)),pDVar9);
                uVar13 = 0x2c;
                puVar12 = ((undefined1 *)(gen_frame + 0x34));
                pDVar9 = (undefined *)F_00c76cd8(((undefined1 *)(gen_frame + 0x5c)));
                pDVar9 = (undefined *)F_00c762a5(pDVar9,puVar12,uVar13);
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x84)),pDVar9);
                uVar13 = 0x29;
                puVar12 = ((undefined1 *)(gen_frame + 0x4c));
                pDVar9 = (undefined *)F_00c762ed(((undefined1 *)(gen_frame + 0x3c)),0);
                pDVar9 = (undefined *)F_00c762a5(pDVar9,puVar12,uVar13);
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x84)),pDVar9);
                F_00c762a5(&(*(undefined8 *)(gen_frame + 0x84)),param_1,0x27);
                return (uint)param_1;
              }
              if (2 < iVar8 - 0x32U) goto LAB_00c774d1;
              goto LAB_00c777d6;
            }
          }
        }
      }
      else if ('T' < cVar1) {
        if (cVar1 < 'W') {
          pcVar11 = *((char * PTR32 *)GEN_TOP(("__pascal" + REFG(char * PTR32, 0x15d75d8)[1] * 4)));
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
LAB_00c77390: ;
          F_00c75e99(&(*(undefined8 *)(gen_frame + 0x94)),pcVar11);
          goto LAB_00c77398;
        }
        if ('W' < cVar1) {
          if (cVar1 < 'Z') goto LAB_00c778aa;
          if (cVar1 == '_') {
            cVar1 = *pcVar3;
            pcVar3 = REFG(char * PTR32, 0x15d75d8) + 3;
            if ('@' < cVar1) {
              if ('D' < cVar1) {
                if (cVar1 < 'G') {
                  pcVar11 = REFG(char * PTR32, 0x15d75d8) + 2;
                  REFG(char * PTR32, 0x15d75d8) = pcVar3;
                  F_00c75b99(&(*(undefined8 *)(gen_frame + 0x84)),(&REFG(undefined * PTR32, 0x1126278))[*pcVar11]);
                  if (*REFG(char * PTR32, 0x15d75d8) == '?') {
                    pDVar9 = (undefined *)F_00c78c0e(((undefined1 *)(gen_frame + 0x1c)));
                    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x84)),pDVar9);
                    if (*REFG(char * PTR32, 0x15d75d8) == '@') {
                      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
                    }
                  }
                  else {
                    pDVar9 = (undefined *)F_00c77e6e(&(*(undefined8 *)(gen_frame + 0x6c)));
                    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x84)),pDVar9);
                  }
                  F_00c7607b(&(*(undefined8 *)(gen_frame + 0x84)),"\'\'");
                  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x84)))));
                  uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x84))) + 4)));
                  goto LAB_00c773d0;
                }
                if ('J' < cVar1) goto LAB_00c777c1;
              }
              pcVar11 = (&REFG(undefined * PTR32, 0x1126278))[REFG(char * PTR32, 0x15d75d8)[2]];
              REFG(char * PTR32, 0x15d75d8) = pcVar3;
              goto LAB_00c7754c;
            }
          }
        }
      }
    }
    goto LAB_00c777c1;
  }
  if (cVar1 == 'A') {
LAB_00c778cd: ;
    cVar1 = *REFG(char * PTR32, 0x15d75d8);
    REFG(char * PTR32, 0x15d75d8) = pcVar3;
    F_00c75e99(&(*(undefined8 *)(gen_frame + 0x94)),*(char * PTR32 *)(&REFG(undefined, 0x1126184) + cVar1 * 4));
    if (bVar2) {
      pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94)))));
      pcVar3 = REFG(char * PTR32, 0x15d75d8);
      if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94))))) != (undefined *)0x0) {
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x94))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x94))) + 4))) | 0x200;
      }
    }
    else {
LAB_00c77398: ;
      pDVar10 = (undefined *)0x0;
      pcVar3 = REFG(char * PTR32, 0x15d75d8);
      if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94))))) != (undefined *)0x0) {
        pDVar9 = &(*(undefined8 *)(gen_frame + 0x94));
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x74));
        pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x6c)),"operator");
        F_00c75fe1(pDVar4,pDVar6,pDVar9);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x74)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x94))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x74))) + 4)));
        pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94)))));
        pcVar3 = REFG(char * PTR32, 0x15d75d8);
      }
    }
LAB_00c773c8: ;
    REFG(char * PTR32, 0x15d75d8) = pcVar3;
    (*(undefined * PTR32 *)((char *)(param_1))) = pDVar10;
    uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x94))) + 4)));
LAB_00c773d0: ;
    (*(uint *)(((char *)(param_1) + 4))) = uVar5;
  }
  else {
    if (cVar1 == '\0') goto LAB_00c774cb;
    if ('/' < cVar1) {
      if (cVar1 < '2') {
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8c))))) = (undefined *)0x0;
        if ((char)param_2 == '\0') {
LAB_00c7745e: ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          piVar7 = (int *)F_00c77a54(((undefined1 *)(gen_frame + 0xc)),0,0);
          pDVar10 = (undefined *)*piVar7;
          uVar5 = piVar7[1];
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94))))) = pDVar10;
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x94))) + 4))) = uVar5;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          if ((pDVar10 != (undefined *)0x0) && (pcVar3[-1] == '1')) {
            pDVar9 = &(*(undefined8 *)(gen_frame + 0x94));
            pDVar6 = &(*(undefined8 *)(gen_frame + 0x7c));
            pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x74)),'~');
            F_00c75fe1(pDVar4,pDVar6,pDVar9);
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x7c)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x94))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x7c))) + 4)));
          }
          pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94)))));
          pcVar3 = REFG(char * PTR32, 0x15d75d8);
          if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8c))))) != (undefined *)0x0) {
            F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x94)),&(*(undefined8 *)(gen_frame + 0x8c)));
            pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x94)))));
            pcVar3 = REFG(char * PTR32, 0x15d75d8);
          }
          goto LAB_00c773c8;
        }
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        uVar5 = F_00c77118(((undefined1 *)(gen_frame + 0x14)));
        pDVar9 = &(*(undefined8 *)(gen_frame + 0x74));
        pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x7c)),'<');
        F_00c75fe1(pDVar6,pDVar9,uVar5);
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x8c)),&(*(undefined8 *)(gen_frame + 0x74)));
        if (((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8c))))) != (undefined *)0x0) &&
           (uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8c))))) + 4))))((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8c)))))), (char)uVar5 == '>')) {
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x8c)),' ');
        }
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x8c)),'>');
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        if (*REFG(char * PTR32, 0x15d75d8) != '\0') {
          pcVar3 = REFG(char * PTR32, 0x15d75d8) + 1;
          goto LAB_00c7745e;
        }
        (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8c)))));
        uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8c))) + 4)));
        goto LAB_00c773d0;
      }
      if (cVar1 < ':') {
        pcVar11 = *(char * PTR32 *)(&REFG(undefined, 0x11261a0) + *REFG(char * PTR32, 0x15d75d8) * 4);
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        goto LAB_00c77390;
      }
    }
LAB_00c777c1: ;
    REFG(char * PTR32, 0x15d75d8) = pcVar3;
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
  }
  return (uint)param_1;
}

/* ref: UnDecorator::getTemplateName */
uint F_00c778fd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc778fdu, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  char cVar1;
  undefined * pDVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  undefined * this;
  undefined * pDVar8;
  
  uVar5 = REFG(undefined4 * PTR32, 0x15d75d4);
  uVar4 = REFG(undefined4 * PTR32, 0x15d75d0);
  uVar3 = REFG(undefined4 * PTR32, 0x15d75cc);
  if ((*REFG(char * PTR32, 0x15d75d8) == '?') && (REFG(char * PTR32, 0x15d75d8)[1] == '$')) {
    ((undefined4 *)(gen_frame + 0x5c))[0] = 0xffffffff;
    ((undefined4 *)(gen_frame + 0x30))[0] = 0xffffffff;
    ((undefined4 *)(gen_frame + 0x4))[0] = 0xffffffff;
    REFG(undefined4 * PTR32, 0x15d75cc) = ((undefined4 *)(gen_frame + 0x5c));
    REFG(undefined4 * PTR32, 0x15d75d0) = ((undefined4 *)(gen_frame + 0x30));
    REFG(undefined4 * PTR32, 0x15d75d4) = ((undefined4 *)(gen_frame + 0x4));
    cVar1 = REFG(char * PTR32, 0x15d75d8)[2];
    (*(char *)(gen_frame + 0xab)) = '\0';
    if (cVar1 == '?') {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 3;
      piVar6 = (int *)F_00c77327(&(*(undefined8 *)(gen_frame + 0x98)),1,&(*(char *)(gen_frame + 0xab)));
    }
    else {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 2;
      piVar6 = (int *)F_00c77a54(&(*(undefined8 *)(gen_frame + 0x98)),1,1);
    }
    pDVar2 = (undefined *)*piVar6;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0xa0))) + 4))) = piVar6[1];
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xa0))))) = pDVar2;
    if (pDVar2 == (undefined *)0x0) {
      REFG(undefined1, 0x15d75f0) = 1;
    }
    if ((*(char *)(gen_frame + 0xab)) == '\0') {
      uVar7 = F_00c77118(((undefined1 *)(gen_frame + 0x90)));
      pDVar8 = &(*(undefined8 *)(gen_frame + 0x98));
      this = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x88)),'<');
      F_00c75fe1(this,pDVar8,uVar7);
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0xa0)),&(*(undefined8 *)(gen_frame + 0x98)));
      if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xa0))))) != (undefined *)0x0) {
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xa0))))) + 4))))((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xa0))))));
        if ((char)uVar7 == '>') {
          F_00c76029(&(*(undefined8 *)(gen_frame + 0xa0)),' ');
        }
      }
      F_00c76029(&(*(undefined8 *)(gen_frame + 0xa0)),'>');
      if (((char)param_2 != '\0') && (*REFG(char * PTR32, 0x15d75d8) != '\0')) {
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      }
    }
    REFG(undefined4 * PTR32, 0x15d75cc) = (undefined4 *)uVar3;
    REFG(undefined4 * PTR32, 0x15d75d0) = (undefined4 *)uVar4;
    *param_1 = (int)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xa0)))));
    REFG(undefined4 * PTR32, 0x15d75d4) = (undefined4 *)uVar5;
    param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0xa0))) + 4)));
    return (uint)param_1;
  }
  param_1[1] = param_1[1] & 0xffff00ff;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  return (uint)param_1;
}

/* ref: UnDecorator::getZName */
uint F_00c77a54(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc77a54u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  char * pcVar4;
  long lVar5;
  undefined * this;
  char * pcVar6;
  int iVar7;
  char * pcVar8;
  undefined * PTR32 * ppDVar9;
  undefined * pDVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  uVar2 = (int)cVar1 - 0x30;
  if (uVar2 < 10) {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    F_00c75961(REFG(undefined4, 0x15d75d0),param_1,uVar2);
    goto LAB_00c77c5c;
  }
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)0x0;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) & 0xffff0000;
  if (cVar1 == '?') {
    puVar3 = (undefined4 *)F_00c778fd(&(*(undefined * PTR32 *)(gen_frame + 0x10)),0);
    pcVar6 = REFG(char * PTR32, 0x15d75d8);
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = puVar3[1];
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)*puVar3;
    cVar1 = *REFG(char * PTR32, 0x15d75d8);
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if (cVar1 != '@') {
      REFG(char * PTR32, 0x15d75d8) = pcVar6;
      F_00c758e0(&(*(undefined8 *)(gen_frame + 0x20)),(*pcVar6 != '\0') + 1);
    }
  }
  else {
    pcVar4 = "template-parameter-";
    pcVar8 = "template-parameter-";
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = 0x12;
    pcVar6 = REFG(char * PTR32, 0x15d75d8);
    do {
      if ((*pcVar6 == '\0') || (*pcVar6 != *pcVar8)) break;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
      uVar2 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) - 1;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = uVar2;
    } while (uVar2 != 0);
    if (*pcVar6 == *pcVar8) {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 0x13;
    }
    else {
      pcVar4 = "generic-type-";
      pcVar8 = "generic-type-";
      iVar7 = 0xc;
      pcVar6 = REFG(char * PTR32, 0x15d75d8);
      do {
        if ((*pcVar6 == '\0') || (*pcVar6 != *pcVar8)) break;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (*pcVar6 != *pcVar8) {
        if (((char)param_3 == '\0') || (*REFG(char * PTR32, 0x15d75d8) != '@')) {
          puVar3 = (undefined4 *)F_00c75bd6(&(*(undefined8 *)(gen_frame + 0x8)),&REFG(char * PTR32, 0x15d75d8),'@');
          uVar2 = puVar3[1];
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)*puVar3;
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = uVar2;
        }
        else {
          REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)0x0;
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) & 0xffff0000;
        }
        goto LAB_00c77c33;
      }
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 0xd;
    }
    F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x18)));
    if ((REFG(undefined4, 0x15d75e8) & 0x4000) != 0) {
      F_00c757ec(&(*(undefined8 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x28)),0x10);
      lVar5 = F_00c4c71d(((char *)(gen_frame + 0x28)));
      pcVar6 = ((char *)GEN_TOP(((code *)REFG(gen_code32, 0x15d75ec))(lVar5)));
      if (pcVar6 != (char *)0x0) {
        F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),pcVar6);
        goto LAB_00c77c33;
      }
    }
    F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),"`");
    pDVar10 = &(*(undefined8 *)(gen_frame + 0x18));
    ppDVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
    this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x8)),pcVar4);
    F_00c75fe1(this,ppDVar9,pDVar10);
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(gen_frame + 0x14));
    F_00c7607b(&(*(undefined8 *)(gen_frame + 0x18)),"\'");
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x20)),&(*(undefined8 *)(gen_frame + 0x18)));
  }
LAB_00c77c33: ;
  if (((char)param_2 != '\0') && (*(int *)REFG(undefined4, 0x15d75d0) != 9)) {
    F_00c75917(REFG(undefined4, 0x15d75d0),&(*(undefined8 *)(gen_frame + 0x20)));
  }
  *param_1 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
  param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
LAB_00c77c5c: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)param_1;
}

/* ref: UnDecorator::getScopedName */
uint F_00c77c6a(unsigned int gen_a0)
{
  GEN_ENTER(0xc77c6au, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  undefined * pDVar3;
  undefined * pDVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  undefined * puVar7;
  undefined * pDVar8;
  
  *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 0;
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
  puVar2 = (undefined4 *)F_00c77a54(&(*(undefined8 *)(gen_frame + 0x14)),1,0);
  (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)*puVar2;
  uVar1 = puVar2[1];
  (*(uint *)(((char *)(param_1) + 4))) = uVar1;
  if (((char)uVar1 == '\0') && (*REFG(char * PTR32, 0x15d75d8) != '\0')) {
    if (*REFG(char * PTR32, 0x15d75d8) == '@') goto LAB_00c77cee;
    pDVar8 = &(*(undefined8 *)(gen_frame + 0x14));
    puVar7 = &REFG(undefined, 0x112652c);
    puVar5 = ((undefined1 *)(gen_frame + 0xc));
    pDVar4 = param_1;
    pDVar3 = (undefined *)F_00c78e7c(((undefined1 *)(gen_frame + 0x4)));
    pDVar3 = (undefined *)F_00c762c9(pDVar3,puVar5,puVar7);
    puVar2 = (undefined4 *)F_00c75fe1(pDVar3,pDVar8,pDVar4);
    (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)*puVar2;
    (*(uint *)(((char *)(param_1) + 4))) = puVar2[1];
  }
  if (*REFG(char * PTR32, 0x15d75d8) != '@') {
    if (*REFG(char * PTR32, 0x15d75d8) != '\0') {
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
      (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
      return (uint)param_1;
    }
    if ((*(undefined * PTR32 *)((char *)(param_1))) == (undefined *)0x0) {
      F_00c758e0(param_1,1);
      return (uint)param_1;
    }
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    puVar7 = &REFG(undefined, 0x112652c);
    puVar6 = ((undefined1 *)(gen_frame + 0xc));
    pDVar8 = param_1;
    pDVar4 = (undefined *)F_00c757a7(&(*(undefined8 *)(gen_frame + 0x14)),1);
    pDVar4 = (undefined *)F_00c762c9(pDVar4,puVar6,puVar7);
    puVar2 = (undefined4 *)F_00c75fe1(pDVar4,puVar5,pDVar8);
    (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)*puVar2;
    (*(uint *)(((char *)(param_1) + 4))) = puVar2[1];
    return (uint)param_1;
  }
LAB_00c77cee: ;
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  return (uint)param_1;
}

/* ref: UnDecorator::getECSUName */
uint F_00c77d4b(unsigned int gen_a0)
{
  GEN_ENTER(0xc77d4bu, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  F_00c77c6a(param_1);
  return param_1;
}

/* ref: UnDecorator::getECSUDataType */
uint F_00c77d5e(unsigned int gen_a0)
{
  GEN_ENTER(0xc77d5eu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  undefined * pDVar4;
  char * pcVar5;
  
  pcVar5 = REFG(char * PTR32, 0x15d75d8);
  uVar3 = 1;
  uVar2 = ~(REFG(undefined4, 0x15d75e8) >> 0xf) & 1;
  if ((uVar2 == 0) || ((REFG(undefined4, 0x15d75e8) & 0x1000) != 0)) {
    uVar3 = 0;
  }
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (undefined *)0x0;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) & 0xffff0000;
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if (cVar1 == '\0') {
    REFG(char * PTR32, 0x15d75d8) = pcVar5;
    F_00c75b99(param_1,"unknown ecsu\'");
    return (uint)param_1;
  }
  if (cVar1 == 'T') {
    pcVar5 = "union ";
  }
  else if (cVar1 == 'U') {
    pcVar5 = "struct ";
  }
  else if (cVar1 == 'V') {
    pcVar5 = "class ";
  }
  else {
    if (cVar1 == 'W') {
      uVar3 = F_00c76433(((undefined1 *)(gen_frame + 0x14)));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x1c));
      this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0xc)),"enum ");
      F_00c75fe1(this,pDVar4,uVar3);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
      goto LAB_00c77e17;
    }
    if (cVar1 == 'X') {
      pcVar5 = "coclass ";
    }
    else {
      uVar2 = uVar3;
      if (cVar1 != 'Y') goto LAB_00c77e17;
      pcVar5 = "cointerface ";
    }
  }
  F_00c75e99(&(*(undefined8 *)(gen_frame + 0x24)),pcVar5);
  uVar2 = uVar3;
LAB_00c77e17: ;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c))))) = (undefined *)0x0;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) & 0xffff0000;
  if (uVar2 != 0) {
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
  }
  F_00c77c6a(&(*(undefined8 *)(gen_frame + 0x24)));
  F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x1c)),&(*(undefined8 *)(gen_frame + 0x24)));
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
  return (uint)param_1;
}

/* ref: UnDecorator::getSymbolName */
uint F_00c77e6e(unsigned int gen_a0)
{
  GEN_ENTER(0xc77e6eu, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (*REFG(char * PTR32, 0x15d75d8) == '?') {
    if (REFG(char * PTR32, 0x15d75d8)[1] == '$') {
      F_00c778fd(param_1,1);
    }
    else {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      F_00c77327(param_1,0,0);
    }
  }
  else {
    F_00c77a54(param_1,1,0);
  }
  return param_1;
}

/* ref: UnDecorator::getBasedType */
uint F_00c77eb8(unsigned int gen_a0)
{
  GEN_ENTER(0xc77eb8u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char * pcVar2;
  undefined * pDVar3;
  
  pcVar2 = F_00c751d3(0);
  F_00c75b99(&(*(undefined8 *)(gen_frame + 0x14)),pcVar2);
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    F_00c75aa7(&(*(undefined8 *)(gen_frame + 0x14)),1);
  }
  else {
    cVar1 = *REFG(char * PTR32, 0x15d75d8);
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if (cVar1 == '0') {
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x14)),"void");
    }
    else if (cVar1 == '2') {
      pDVar3 = (undefined *)F_00c77c6a(((undefined1 *)(gen_frame + 0xc)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x14)),pDVar3);
    }
    else if (cVar1 == '5') {
      param_1[1] = param_1[1] & 0xffff00ff;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 2;
      return (uint)param_1;
    }
  }
  F_00c7607b(&(*(undefined8 *)(gen_frame + 0x14)),") ");
  *param_1 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
  param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
  return (uint)param_1;
}

/* ref: UnDecorator::composeDeclaration */
uint F_00c77f54(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc77f54u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pDVar4;
  undefined * pDVar5;
  undefined * pDVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined * pDVar9;
  bool bVar10;
  char * pcVar11;
  
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) & 0xffff0000;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (undefined *)0x0;
  uVar1 = F_00c74c1b();
  if (((*(undefined * PTR32 *)((char *)(param_2))) == (undefined *)0x0) || ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x44))) + 4))) = 1, ((*(uint *)(((char *)(param_2) + 4))) & 0x200) == 0)) {
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x44))) + 4))) = 0;
  }
  if (uVar1 == 0xffff) {
    param_1[1] = param_1[1] & 0xffff00ff;
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 0;
    return (uint)param_1;
  }
  if (uVar1 == 0xfffe) {
    F_00c7625d(param_1,1,param_2);
    return (uint)param_1;
  }
  if (uVar1 == 0xfffd) {
    *param_1 = (*(undefined * PTR32 *)((char *)(param_2)));
    uVar1 = (*(uint *)(((char *)(param_2) + 4)));
    goto LAB_00c78c06;
  }
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  (*(uint *)(gen_frame + 0x58)) = uVar1 & 0x8000;
  if ((uVar1 & 0x8000) == 0) {
LAB_00c78646: ;
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),param_2);
    if ((*(uint *)(gen_frame + 0x58)) == 0) {
      if (((uVar1 & 0x7c00) == 0x6800) || ((uVar1 & 0x7c00) == 0x7000)) {
        F_00c76ac6(param_1,&(*(undefined8 *)(gen_frame + 0x3c)));
        return (uint)param_1;
      }
      if ((uVar1 & 0x7c00) == 0x6000) {
        F_00c762ed(&(*(undefined8 *)(gen_frame + 0x24)),0);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4)));
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x14)),'{');
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x1c)),&(*(undefined8 *)(gen_frame + 0x24)));
        F_00c762c9(&(*(undefined8 *)(gen_frame + 0x1c)),param_1,&REFG(undefined, 0x1126680));
        return (uint)param_1;
      }
      if ((uVar1 & 0x7c00) == 0x7c00) {
        F_00c761e5(param_1,&(*(undefined8 *)(gen_frame + 0x3c)));
        return (uint)param_1;
      }
      uVar3 = uVar1 & 0x6000;
    }
    else {
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar3 == 0) {
      uVar3 = uVar1 & 0x400;
    }
    else {
      uVar3 = uVar1 & 0x1000;
    }
    if ((uVar3 == 0) || ((uVar1 & 0x1b00) != 0x1000 || (*(uint *)(gen_frame + 0x58)) == 0)) {
      if ((*(uint *)(gen_frame + 0x58)) == 0) {
        uVar3 = uVar1 & 0x6000;
      }
      else {
        uVar3 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar3 == 0) {
        uVar3 = uVar1 & 0x400;
      }
      else {
        uVar3 = uVar1 & 0x1000;
      }
      if ((uVar3 != 0) && ((uVar1 & 0x1b00) == 0x1100 && (*(uint *)(gen_frame + 0x58)) != 0)) {
        pcVar11 = "`template static data member constructor helper\'";
        goto LAB_00c7880b;
      }
      if ((*(uint *)(gen_frame + 0x58)) == 0) {
        uVar3 = uVar1 & 0x6000;
      }
      else {
        uVar3 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar3 == 0) {
        uVar3 = uVar1 & 0x400;
      }
      else {
        uVar3 = uVar1 & 0x1000;
      }
      if ((uVar3 != 0) && ((uVar1 & 0x1b00) == 0x1200 && (*(uint *)(gen_frame + 0x58)) != 0)) {
        pcVar11 = "`template static data member destructor helper\'";
        goto LAB_00c7880b;
      }
      if ((*(uint *)(gen_frame + 0x58)) == 0) {
        pDVar9 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c)))));
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_00c78bfe;
        goto LAB_00c7882a;
      }
LAB_00c78830: ;
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar11 = "`local static destructor helper\'";
LAB_00c7880b: ;
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x3c)),pcVar11);
LAB_00c7882a: ;
      if ((*(uint *)(gen_frame + 0x58)) != 0) goto LAB_00c78830;
      uVar3 = uVar1 & 0x6000;
    }
    if (uVar3 == 0) {
      uVar3 = uVar1 & 0x400;
    }
    else {
      uVar3 = uVar1 & 0x1000;
    }
    if ((uVar3 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || (*(uint *)(gen_frame + 0x58)) == 0 && ((uVar1 & 0x1b00) != 0x1200 || (*(uint *)(gen_frame + 0x58)) == 0))
       )) {
      puVar7 = (undefined4 *)F_00c7a4be(&(*(undefined8 *)(gen_frame + 0x4)),&(*(undefined8 *)(gen_frame + 0x3c)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (undefined *)*puVar7;
      uVar3 = puVar7[1];
    }
    else {
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x3c));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
      pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4))," ");
      F_00c75fe1(pDVar5,pDVar4,pDVar6);
      uVar3 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
LAB_00c78204: ;
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = uVar3;
LAB_00c788d6: ;
    if ((*(uint *)(gen_frame + 0x58)) == 0) {
      uVar3 = uVar1 & 0x6000;
    }
    else {
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar3 == 0) {
      if ((~(REFG(undefined4, 0x15d75e8) >> 9) & 1) != 0) {
        if ((*(uint *)(gen_frame + 0x58)) == 0) {
          uVar3 = uVar1 & 0x6000;
        }
        else {
          uVar3 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar3 == 0) && ((*(uint *)(gen_frame + 0x58)) == 0 || (uVar1 & 0x700) == 0x200)) {
          pDVar6 = &(*(undefined8 *)(gen_frame + 0x3c));
          pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
          pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),"static ");
          F_00c75fe1(pDVar5,pDVar4,pDVar6);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
        }
        if ((*(uint *)(gen_frame + 0x58)) == 0) {
LAB_00c78995: ;
          uVar3 = uVar1 & 0x6000;
LAB_00c7899c: ;
          if (uVar3 == 0) {
            uVar3 = uVar1 & 0x400;
          }
          else {
            uVar3 = uVar1 & 0x1000;
          }
          if (uVar3 == 0) goto LAB_00c78a5b;
          if ((*(uint *)(gen_frame + 0x58)) == 0) {
            uVar3 = uVar1 & 0x6000;
          }
          else {
            uVar3 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar3 != 0) || ((uVar1 & 0x700) != 0x500)) {
            if ((*(uint *)(gen_frame + 0x58)) == 0) {
              uVar3 = uVar1 & 0x6000;
            }
            else {
              uVar3 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar3 != 0) || ((uVar1 & 0x700) != 0x600)) {
              if ((*(uint *)(gen_frame + 0x58)) == 0) {
                uVar3 = uVar1 & 0x6000;
              }
              else {
                uVar3 = (uVar1 & 0x1800) - 0x800;
              }
              if ((uVar3 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_00c78a5b;
            }
          }
        }
        else if ((uVar1 & 0x700) != 0x100) {
          if ((*(uint *)(gen_frame + 0x58)) == 0) goto LAB_00c78995;
          uVar3 = (uVar1 & 0x1800) - 0x800;
          goto LAB_00c7899c;
        }
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x3c));
        pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
        pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),"virtual ");
        F_00c75fe1(pDVar5,pDVar4,pDVar6);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
      }
LAB_00c78a5b: ;
      if ((~(REFG(undefined4, 0x15d75e8) >> 7) & 1) != 0) {
        if ((*(uint *)(gen_frame + 0x58)) == 0) {
          uVar3 = uVar1 & 0x6000;
        }
        else {
          uVar3 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar3 == 0) {
          if ((*(uint *)(gen_frame + 0x58)) == 0) {
            bVar10 = (uVar1 & 0x1800) == 0x800;
          }
          else {
            bVar10 = ((byte)uVar1 & 0xc0) == 0x40;
          }
          if (!bVar10) goto LAB_00c78abd;
          pcVar11 = "private: ";
LAB_00c78b54: ;
          pDVar5 = &(*(undefined8 *)(gen_frame + 0x3c));
          pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
          pDVar6 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),pcVar11);
          F_00c75fe1(pDVar6,pDVar4,pDVar5);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
        }
        else {
LAB_00c78abd: ;
          if ((*(uint *)(gen_frame + 0x58)) == 0) {
            uVar3 = uVar1 & 0x6000;
          }
          else {
            uVar3 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar3 == 0) {
            if ((*(uint *)(gen_frame + 0x58)) == 0) {
              bVar10 = (uVar1 & 0x1800) == 0x1000;
            }
            else {
              bVar10 = ((byte)uVar1 & 0xc0) == 0x80;
            }
            if (bVar10) {
              pcVar11 = "protected: ";
              goto LAB_00c78b54;
            }
          }
          if ((*(uint *)(gen_frame + 0x58)) == 0) {
            uVar3 = uVar1 & 0x6000;
          }
          else {
            uVar3 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar3 == 0) {
            if ((*(uint *)(gen_frame + 0x58)) == 0) {
              uVar3 = uVar1 & 0x1800;
            }
            else {
              uVar3 = uVar1 & 0xc0;
            }
            if (uVar3 == 0) {
              pcVar11 = "public: ";
              goto LAB_00c78b54;
            }
          }
        }
      }
    }
    if ((*(uint *)(gen_frame + 0x58)) == 0) {
      uVar3 = uVar1 & 0x6000;
    }
    else {
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar3 == 0) {
      uVar3 = uVar1 & 0x400;
    }
    else {
      uVar3 = uVar1 & 0x1000;
    }
    if ((uVar3 != 0) && ((REFG(undefined4, 0x15d75e8) & 0x1000) == 0)) {
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x3c));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
      pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),"[thunk]:");
      F_00c75fe1(pDVar5,pDVar4,pDVar6);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
    }
    pDVar9 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c)))));
    if ((uVar1 & 0x10000) != 0) {
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x3c));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
      pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),"extern \"C\" ");
      F_00c75fe1(pDVar5,pDVar4,pDVar6);
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
      pDVar9 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
    }
  }
  else {
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x4c))) + 4))) = uVar1;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x4c))) + 4))) = uVar1 & 0x1800;
    uVar3 = (uint)((uVar1 & 0x1800) == 0x800);
    (*(uint *)(gen_frame + 0x54)) = uVar3;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_00c78646;
    if (uVar3 == 0) {
      uVar3 = uVar1 & 0x1000;
    }
    else {
      uVar3 = uVar1 & 0x400;
    }
    if ((uVar3 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_00c78646;
    if ((uVar1 & 0x4000) != 0) {
      if (((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) || ((~(REFG(undefined4, 0x15d75e8) >> 3) & 1) == 0)) {
        pDVar6 = (undefined *)F_00c77eb8(&(*(undefined8 *)(gen_frame + 0x14)));
        F_00c7538a(&(*(undefined8 *)(gen_frame + 0x3c)),pDVar6);
      }
      else {
        uVar3 = F_00c77eb8(&(*(undefined8 *)(gen_frame + 0x1c)));
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x14));
        pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x24)),' ');
        F_00c75fe1(pDVar4,pDVar6,uVar3);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
      }
    }
    if ((*(uint *)(gen_frame + 0x54)) == 0) {
      uVar3 = uVar1 & 0x1000;
    }
    else {
      uVar3 = uVar1 & 0x400;
    }
    if ((uVar3 != 0) && ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x4c))) + 4))) == 0x1800)) {
      F_00c762ed(&(*(undefined8 *)(gen_frame + 0x14)),0);
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x14));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x1c));
      pDVar5 = (undefined *)F_00c762a5(param_2,&(*(undefined8 *)(gen_frame + 0x24)),0x7b);
      pDVar6 = (undefined *)F_00c75fe1(pDVar5,pDVar4,pDVar6);
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),pDVar6);
      F_00c75f96(&(*(undefined8 *)(gen_frame + 0x14)));
      if ((REFG(undefined4, 0x15d75e8) & 0x1000) == 0) {
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x14));
        pDVar4 = &(*(undefined8 *)(gen_frame + 0x1c));
        pDVar5 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x24)),',');
        F_00c75fe1(pDVar5,pDVar4,pDVar6);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
        F_00c7607b(&(*(undefined8 *)(gen_frame + 0x14)),"}\' ");
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),&(*(undefined8 *)(gen_frame + 0x14)));
      }
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x3c)),"}\'");
      F_00c75ece(&(*(undefined8 *)(gen_frame + 0x14)));
      if ((((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) || ((~(REFG(undefined4, 0x15d75e8) >> 4) & 1) == 0)) ||
         ((REFG(undefined4, 0x15d75e8) & 0x1000) != 0)) goto LAB_00c788d6;
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x14));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x1c));
      pDVar5 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x24)),' ');
      F_00c75fe1(pDVar5,pDVar4,pDVar6);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
      F_00c76029(&(*(undefined8 *)(gen_frame + 0x14)),' ');
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x1c)),&(*(undefined8 *)(gen_frame + 0x3c)));
      uVar3 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
      goto LAB_00c78204;
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) & 0xffff0000;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) & 0xffff0000;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x4c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x4c))) + 4))) & 0xffff0000;
    (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) & 0xffff0000;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) & 0xffff0000;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c))))) = (undefined *)0x0;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (undefined *)0x0;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x4c))))) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x2c))))) = (undefined *)0x0;
    if ((*(uint *)(gen_frame + 0x54)) == 0) {
      uVar3 = uVar1 & 0x1000;
    }
    else {
      uVar3 = uVar1 & 0x400;
    }
    if (uVar3 != 0) {
      if ((*(uint *)(gen_frame + 0x54)) != 0) {
        if ((uVar1 & 0x700) == 0x600) {
          F_00c762ed(&(*(undefined8 *)(gen_frame + 0x24)),1);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
          F_00c762ed(&(*(undefined8 *)(gen_frame + 0x24)),1);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
          F_00c762ed(&(*(undefined8 *)(gen_frame + 0x24)),1);
        }
        else {
          if (((*(uint *)(gen_frame + 0x54)) == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00c782c1;
          F_00c762ed(&(*(undefined8 *)(gen_frame + 0x24)),1);
        }
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x4c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x4c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
      }
LAB_00c782c1: ;
      F_00c762ed(&(*(undefined8 *)(gen_frame + 0x24)),1);
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
      (*(uint *)(gen_frame + 0x38)) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
    }
    if (((*(uint *)(gen_frame + 0x54)) != 0) && (((*(uint *)(gen_frame + 0x54)) == 0 || ((uVar1 & 0x700) != 0x200)))) {
      if (((byte)REFG(undefined4, 0x15d75e8) & 0x60) == 0x60) {
        pDVar6 = (undefined *)F_00c756cc(&(*(undefined8 *)(gen_frame + 0x24)));
        F_00c7538a(&(*(undefined8 *)(gen_frame + 0x2c)),pDVar6);
      }
      else {
        puVar7 = (undefined4 *)F_00c756cc(&(*(undefined8 *)(gen_frame + 0x24)));
        uVar3 = puVar7[1];
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x2c))))) = (undefined *)*puVar7;
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) = uVar3;
      }
    }
    if (((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) || ((~(REFG(undefined4, 0x15d75e8) >> 4) & 1) == 0)) {
      pDVar6 = (undefined *)F_00c75ece(&(*(undefined8 *)(gen_frame + 0xc)));
      F_00c7538a(&(*(undefined8 *)(gen_frame + 0x3c)),pDVar6);
    }
    else {
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x3c));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x24));
      pDVar5 = (undefined *)F_00c75ece(&(*(undefined8 *)(gen_frame + 0xc)));
      puVar7 = (undefined4 *)F_00c75fe1(pDVar5,pDVar4,pDVar6);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (undefined *)*puVar7;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = puVar7[1];
    }
    if ((*(undefined * PTR32 *)((char *)(param_2))) != (undefined *)0x0) {
      if (((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) == (undefined *)0x0) || ((REFG(undefined4, 0x15d75e8) & 0x1000) != 0)) {
        uVar3 = (*(uint *)(((char *)(param_2) + 4)));
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (*(undefined * PTR32 *)((char *)(param_2)));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = uVar3;
      }
      else {
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x24));
        pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0xc)),' ');
        F_00c75fe1(pDVar4,pDVar6,param_2);
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),&(*(undefined8 *)(gen_frame + 0x24)));
      }
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) & 0xffff0000;
    puVar7 = (undefined4 *)0x0;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (undefined *)0x0;
    if ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x44))) + 4))) == 0) {
      puVar8 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),8,0);
      puVar7 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
        *(undefined1 *)(puVar8 + 1) = 0;
        puVar8[1] = puVar8[1] & 0xffff00ff;
        puVar7 = puVar8;
      }
      puVar8 = (undefined4 *)F_00c75a63(&(*(undefined8 *)(gen_frame + 0x4)),puVar7);
      uVar3 = puVar8[1];
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (undefined *)*puVar8;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = uVar3;
LAB_00c7844d: ;
      uVar3 = (*(uint *)(gen_frame + 0x54));
      if ((*(uint *)(gen_frame + 0x54)) == 0) {
        uVar2 = uVar1 & 0x1000;
      }
      else {
        uVar2 = uVar1 & 0x400;
      }
      if (uVar2 != 0) {
        if ((*(uint *)(gen_frame + 0x54)) == 0) {
LAB_00c7854c: ;
          F_00c7607b(&(*(undefined8 *)(gen_frame + 0x3c)),"`adjustor{");
        }
        else {
          if ((uVar1 & 0x700) == 0x600) {
            pDVar6 = &(*(undefined8 *)(gen_frame + 0x1c));
            pDVar4 = &(*(undefined8 *)(gen_frame + 0x44));
            pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),"`vtordispex{");
            F_00c75fe1(pDVar5,pDVar4,pDVar6);
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x44)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x44))) + 4)));
            F_00c76029(&(*(undefined8 *)(gen_frame + 0x1c)),',');
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x44))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x44))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
            F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x44)),&(*(undefined8 *)(gen_frame + 0x14)));
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x44)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x44))) + 4)));
            F_00c76029(&(*(undefined8 *)(gen_frame + 0x14)),',');
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4)));
            F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x1c)),&(*(undefined8 *)(gen_frame + 0x4c)));
          }
          else {
            if (((*(uint *)(gen_frame + 0x54)) == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00c7854c;
            pDVar6 = &(*(undefined8 *)(gen_frame + 0x4c));
            pDVar4 = &(*(undefined8 *)(gen_frame + 0x1c));
            pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),"`vtordisp{");
            F_00c75fe1(pDVar5,pDVar4,pDVar6);
          }
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x14)),',');
          F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),&(*(undefined8 *)(gen_frame + 0x14)));
        }
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (*(undefined * PTR32 *)(gen_frame + 0x34));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(gen_frame + 0x38));
        F_00c7607b(&(*(undefined8 *)(gen_frame + 0x14)),"}\' ");
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),&(*(undefined8 *)(gen_frame + 0x14)));
      }
      uVar2 = F_00c7651f(&(*(undefined8 *)(gen_frame + 0x4)));
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x1c));
      pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0xc)),'(');
      F_00c75fe1(pDVar4,pDVar6,uVar2);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
      F_00c76029(&(*(undefined8 *)(gen_frame + 0x14)),')');
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),&(*(undefined8 *)(gen_frame + 0x14)));
      if ((uVar3 != 0) && ((uVar1 & 0x700) != 0x200)) {
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),&(*(undefined8 *)(gen_frame + 0x2c)));
      }
      if ((~(REFG(undefined4, 0x15d75e8) >> 8) & 1) == 0) {
        pDVar6 = (undefined *)F_00c765ff(&(*(undefined8 *)(gen_frame + 0x4)));
        F_00c7538a(&(*(undefined8 *)(gen_frame + 0x3c)),pDVar6);
      }
      else {
        pDVar6 = (undefined *)F_00c765ff(&(*(undefined8 *)(gen_frame + 0x4)));
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),pDVar6);
      }
      if (((~(REFG(undefined4, 0x15d75e8) >> 2) & 1) != 0) && (puVar7 != (undefined4 *)0x0)) {
        *puVar7 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c)))));
        puVar7[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4)));
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
      }
      goto LAB_00c788d6;
    }
    uVar3 = F_00c75a63(&(*(undefined8 *)(gen_frame + 0xc)),0);
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x44));
    pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4))," ");
    F_00c75fe1(pDVar4,pDVar6,uVar3);
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x3c)),&(*(undefined8 *)(gen_frame + 0x44)));
    pDVar9 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x3c)))));
    if ((REFG(undefined4, 0x15d75e8) & 0x1000) == 0) goto LAB_00c7844d;
  }
LAB_00c78bfe: ;
  *param_1 = pDVar9;
  uVar1 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x3c))) + 4)));
LAB_00c78c06: ;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: UnDecorator::getDecoratedName */
uint F_00c78c0e(unsigned int gen_a0)
{
  GEN_ENTER(0xc78c0eu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  char * pcVar2;
  int * piVar3;
  uint uVar4;
  undefined * pDVar5;
  uint uVar6;
  
  if ((REFG(undefined4, 0x15d75e8) & 0x2000) != 0) {
    REFG(undefined4, 0x15d75e8) = REFG(undefined4, 0x15d75e8) & 0xffffdfff;
    F_00c7a3ef(&(*(undefined8 *)(gen_frame + 0x8)),0);
    REFG(undefined4, 0x15d75e8) = REFG(undefined4, 0x15d75e8) | 0x2000;
LAB_00c78c43: ;
    (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
    return (uint)param_1;
  }
  if (*REFG(char * PTR32, 0x15d75d8) != '?') {
    if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
      F_00c757a7(param_1,1);
      return (uint)param_1;
    }
    goto LAB_00c78e0c;
  }
  pcVar2 = REFG(char * PTR32, 0x15d75d8) + 1;
  if ((*pcVar2 == '?') && (REFG(char * PTR32, 0x15d75d8)[2] == '?')) {
    REFG(char * PTR32, 0x15d75d8) = pcVar2;
    F_00c78c0e(&(*(undefined8 *)(gen_frame + 0x8)));
    for (; *REFG(char * PTR32, 0x15d75d8) != '\0'; REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1) {
    }
    goto LAB_00c78c43;
  }
  REFG(char * PTR32, 0x15d75d8) = pcVar2;
  F_00c77e6e(&(*(undefined8 *)(gen_frame + 0x20)));
  uVar4 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
  pDVar5 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
  if (((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) == (undefined *)0x0) || (((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) & 0x200) == 0)) {
    (*(int *)(gen_frame + 0x28)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x28)) = 1;
  }
  uVar6 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) >> 0xf;
  if ('\x01' < (char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)))) goto LAB_00c78cc6;
  if (((*REFG(char * PTR32, 0x15d75d8) != '\0') && (*REFG(char * PTR32, 0x15d75d8) != '@')) &&
     (F_00c78e7c(&(*(undefined8 *)(gen_frame + 0x18))), (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) != (undefined *)0x0)) {
    if (REFG(char, 0x15d75f0) == '\0') {
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x8)),"::");
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x10)),&(*(undefined8 *)(gen_frame + 0x20)));
      uVar4 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      pDVar5 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
    }
    else {
      REFG(char, 0x15d75f0) = '\0';
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = pDVar5;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = uVar4;
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x10)),&(*(undefined8 *)(gen_frame + 0x18)));
      cVar1 = *REFG(char * PTR32, 0x15d75d8);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      uVar4 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      pDVar5 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      if (cVar1 == '@') goto LAB_00c78dc7;
      piVar3 = (int *)F_00c78e7c(&(*(undefined8 *)(gen_frame + 0x8)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (undefined *)*piVar3;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = piVar3[1];
      uVar4 = piVar3[1];
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (undefined *)*piVar3;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = uVar4;
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x10)),"::");
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x8)),&(*(undefined8 *)(gen_frame + 0x20)));
      uVar4 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
      pDVar5 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = uVar4;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = pDVar5;
  }
LAB_00c78dc7: ;
  if (((*(int *)(gen_frame + 0x28)) != 0) && (pDVar5 != (undefined *)0x0)) {
    uVar4 = uVar4 | 0x200;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = uVar4;
  }
  if ((uVar6 & 1) != 0) {
    uVar4 = uVar4 | 0x8000;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = uVar4;
  }
  if ((pDVar5 != (undefined *)0x0) && ((uVar4 & 0x1000) == 0)) {
    if (*REFG(char * PTR32, 0x15d75d8) != '\0') {
      if (*REFG(char * PTR32, 0x15d75d8) != '@') {
LAB_00c78e0c: ;
        (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
        (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
        *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
        return (uint)param_1;
      }
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    }
    if ((((REFG(undefined4, 0x15d75e8) & 0x1000) == 0) || ((*(int *)(gen_frame + 0x28)) != 0)) || ((uVar4 & 0x8000) != 0)) {
      F_00c77f54(param_1,&(*(undefined8 *)(gen_frame + 0x20)));
      return (uint)param_1;
    }
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) = (undefined *)0x0;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) & 0xffff0000;
    F_00c77f54(&(*(undefined8 *)(gen_frame + 0x10)),&(*(undefined8 *)(gen_frame + 0x8)));
  }
LAB_00c78cc6: ;
  (*(undefined * PTR32 *)((char *)(param_1))) = pDVar5;
  (*(uint *)(((char *)(param_1) + 4))) = uVar4;
  return (uint)param_1;
}

/* ref: UnDecorator::getFunctionIndirectType */
uint F_00c79133(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc79133u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  int iVar2;
  char * pcVar3;
  undefined * pDVar4;
  uint uVar5;
  undefined * pDVar6;
  undefined4 * puVar7;
  int * piVar8;
  undefined * pDVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  if (cVar1 == '\0') {
    F_00c7625d(param_1,1,param_2);
    return (uint)param_1;
  }
  if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  uVar10 = (int)cVar1 - 0x36;
  pcVar3 = REFG(char * PTR32, 0x15d75d8) + 1;
  if (uVar10 == 0x29) {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      REFG(char * PTR32, 0x15d75d8) = pcVar3;
      F_00c7625d(param_1,1,param_2);
      return (uint)param_1;
    }
    uVar10 = (int)cVar1 - 0x3d;
    pcVar3 = REFG(char * PTR32, 0x15d75d8) + 2;
    REFG(char * PTR32, 0x15d75d8) = pcVar3;
    if (3 < (int)uVar10) {
      bVar12 = SBORROW4(uVar10,7);
      iVar2 = cVar1 + -0x44;
      bVar11 = uVar10 == 7;
LAB_00c791ca: ;
      if (bVar11 || bVar12 != iVar2 < 0) goto LAB_00c791cf;
    }
  }
  else {
    REFG(char * PTR32, 0x15d75d8) = pcVar3;
    if (-1 < (int)uVar10) {
      bVar12 = SBORROW4(uVar10,3);
      iVar2 = cVar1 + -0x39;
      bVar11 = uVar10 == 3;
      goto LAB_00c791ca;
    }
  }
  uVar10 = 0xffffffff;
LAB_00c791cf: ;
  if (uVar10 == 0xffffffff) {
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x2c))))) = (undefined *)0x0;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) & 0xffff0000;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34))))) = (undefined *)*param_2;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = param_2[1];
  if ((uVar10 & 2) != 0) {
    pDVar9 = &(*(undefined8 *)(gen_frame + 0x34));
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x24));
    pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x1c)),"::");
    F_00c75fe1(pDVar4,pDVar6,pDVar9);
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
    if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
      pDVar9 = &(*(undefined8 *)(gen_frame + 0x34));
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x1c));
      pDVar4 = (undefined *)F_00c757a7(&(*(undefined8 *)(gen_frame + 0x4)),1);
      F_00c75fe1(pDVar4,pDVar6,pDVar9);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
      uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
    }
    else {
      uVar5 = F_00c78e7c(&(*(undefined8 *)(gen_frame + 0xc)));
      pDVar9 = &(*(undefined8 *)(gen_frame + 0x1c));
      pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x4)),' ');
      F_00c75fe1(pDVar6,pDVar9,uVar5);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x24)),&(*(undefined8 *)(gen_frame + 0x34)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
      uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = uVar5;
    if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
      pDVar9 = &(*(undefined8 *)(gen_frame + 0x34));
      pDVar6 = param_1;
      pDVar4 = (undefined *)F_00c757a7(&(*(undefined8 *)(gen_frame + 0x4)),1);
      F_00c75fe1(pDVar4,pDVar6,pDVar9);
      return (uint)param_1;
    }
    if (*REFG(char * PTR32, 0x15d75d8) != '@') {
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
      return (uint)param_1;
    }
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if (((byte)REFG(undefined4, 0x15d75e8) & 0x60) == 0x60) {
      pDVar9 = (undefined *)F_00c756cc(&(*(undefined8 *)(gen_frame + 0x4)));
      F_00c7538a(&(*(undefined8 *)(gen_frame + 0x2c)),pDVar9);
    }
    else {
      puVar7 = (undefined4 *)F_00c756cc(&(*(undefined8 *)(gen_frame + 0x4)));
      uVar5 = puVar7[1];
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x2c))))) = (undefined *)*puVar7;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x2c))) + 4))) = uVar5;
    }
  }
  if ((uVar10 & 4) != 0) {
    if ((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) {
      pDVar9 = (undefined *)F_00c77eb8(&(*(undefined8 *)(gen_frame + 0x4)));
      F_00c7538a(&(*(undefined8 *)(gen_frame + 0x34)),pDVar9);
    }
    else {
      uVar5 = F_00c77eb8(&(*(undefined8 *)(gen_frame + 0x4)));
      pDVar9 = &(*(undefined8 *)(gen_frame + 0x1c));
      pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0xc)),' ');
      F_00c75fe1(pDVar6,pDVar9,uVar5);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x24)),&(*(undefined8 *)(gen_frame + 0x34)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
    }
  }
  if ((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) {
    pDVar9 = (undefined *)F_00c75ece(&(*(undefined8 *)(gen_frame + 0x4)));
    F_00c7538a(&(*(undefined8 *)(gen_frame + 0x34)),pDVar9);
  }
  else {
    pDVar9 = &(*(undefined8 *)(gen_frame + 0x34));
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x4));
    pDVar4 = (undefined *)F_00c75ece(&(*(undefined8 *)(gen_frame + 0xc)));
    piVar8 = (int *)F_00c75fe1(pDVar4,pDVar6,pDVar9);
    uVar5 = piVar8[1];
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34))))) = (undefined *)*piVar8;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = uVar5;
  }
  if (*param_2 != 0) {
    pDVar9 = &(*(undefined8 *)(gen_frame + 0x34));
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x1c));
    pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x4)),'(');
    F_00c75fe1(pDVar4,pDVar6,pDVar9);
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
    F_00c76029(&(*(undefined8 *)(gen_frame + 0x24)),')');
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4)));
  }
  piVar8 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),8,0);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    *(undefined1 *)(piVar8 + 1) = 0;
    piVar8[1] = piVar8[1] & 0xffff00ff;
    *piVar8 = 0;
  }
  F_00c75a63(&(*(undefined * PTR32 *)(gen_frame + 0x14)),piVar8);
  uVar5 = F_00c7651f(&(*(undefined8 *)(gen_frame + 0x4)));
  pDVar9 = &(*(undefined8 *)(gen_frame + 0x1c));
  pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0xc)),'(');
  F_00c75fe1(pDVar6,pDVar9,uVar5);
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x1c)))));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x1c))) + 4)));
  F_00c76029(&(*(undefined8 *)(gen_frame + 0x24)),')');
  F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x34)),&(*(undefined8 *)(gen_frame + 0x24)));
  if ((((byte)REFG(undefined4, 0x15d75e8) & 0x60) != 0x60) && ((uVar10 & 2) != 0)) {
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x34)),&(*(undefined8 *)(gen_frame + 0x2c)));
  }
  if ((~(REFG(undefined4, 0x15d75e8) >> 8) & 1) == 0) {
    pDVar9 = (undefined *)F_00c765ff(&(*(undefined8 *)(gen_frame + 0x4)));
    F_00c7538a(&(*(undefined8 *)(gen_frame + 0x34)),pDVar9);
  }
  else {
    pDVar9 = (undefined *)F_00c765ff(&(*(undefined8 *)(gen_frame + 0x4)));
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x34)),pDVar9);
  }
  if (piVar8 == (int *)0x0) {
    F_00c757a7(param_1,3);
  }
  else {
    *piVar8 = (int)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x34)))));
    piVar8[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x34))) + 4)));
    (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(gen_frame + 0x18));
  }
  return (uint)param_1;
}

/* ref: UnDecorator::operator_char* */
char * F_00c79ab1(unsigned int gen_a0)
{
  GEN_ENTER(0xc79ab1u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  char * pcVar4;
  undefined * pDVar5;
  char * pcVar6;
  undefined * PTR32 * ppDVar7;
  
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) & 0xffff0000;
  pDVar5 = (undefined *)0x0;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = (undefined *)0x0;
  uVar2 = (*(uint *)(gen_frame + 0x20)) & 0xffff0000;
  if (REFG(char * PTR32, 0x15d75dc) != (char *)0x0) {
    if (*REFG(char * PTR32, 0x15d75dc) == '?') {
      if (REFG(char * PTR32, 0x15d75dc)[1] == '@') {
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 2;
        uVar2 = F_00c78c0e(((undefined1 *)(gen_frame + 0x14)));
        ppDVar7 = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
        this_00 = (undefined *)F_00c75b99(((undefined *)GEN_TOP((gen_frame + 0xc))),"CV: ");
        F_00c75fe1(this_00,ppDVar7,uVar2);
        uVar2 = (*(uint *)(gen_frame + 0x20));
        pDVar5 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
        goto LAB_00c79b46;
      }
      if (REFG(char * PTR32, 0x15d75dc)[1] == '$') {
        puVar3 = (undefined4 *)F_00c778fd((gen_frame + 0xc),0);
        pDVar5 = (undefined *)*puVar3;
        uVar2 = puVar3[1];
        if ((char)uVar2 != '\x02') goto LAB_00c79b46;
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75dc);
      }
    }
    puVar3 = (undefined4 *)F_00c78c0e((gen_frame + 0xc));
    pDVar5 = (undefined *)*puVar3;
    uVar2 = puVar3[1];
  }
LAB_00c79b46: ;
  if ((char)uVar2 == '\x03') {
    return (char *)0x0;
  }
  if (((char)uVar2 == '\x02') || (((REFG(undefined4, 0x15d75e8) & 0x1000) == 0 && (*REFG(char * PTR32, 0x15d75d8) != '\0')))) {
    F_00c75e99(&(*(undefined8 *)(gen_frame + 0x24)),REFG(char * PTR32, 0x15d75dc));
  }
  else {
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) = pDVar5;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x24))) + 4))) = uVar2;
  }
  if (REFG(char * PTR32, 0x15d75e0) == (char *)0x0) {
    uVar2 = 0;
    if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))) != (undefined *)0x0) {
      uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))))))((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x24))))));
    }
    REFG(undefined4, 0x15d75e4) = (undefined *)(uVar2 + 1);
    REFG(char * PTR32, 0x15d75e0) = ((char *)GEN_TOP(((code *)REFG(gen_code32, 0x15d75b8))(uVar2 + 8 & 0xfffffff8)));
    if (REFG(char * PTR32, 0x15d75e0) == (char *)0x0) {
      return (char *)0x0;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = REFG(undefined4, 0x15d75e4);
  F_00c757ec(&(*(undefined8 *)(gen_frame + 0x24)),REFG(char * PTR32, 0x15d75e0),(int)REFG(undefined4, 0x15d75e4));
  pcVar4 = REFG(char * PTR32, 0x15d75e0);
  pcVar6 = REFG(char * PTR32, 0x15d75e0);
  while (cVar1 = *pcVar4, cVar1 != '\0') {
    if (cVar1 == ' ') {
      *pcVar6 = ' ';
      pcVar6 = pcVar6 + 1;
      do {
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 == ' ');
    }
    else {
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  *pcVar6 = '\0';
  return REFG(char * PTR32, 0x15d75e0);
}

/* ref: UnDecorator::getPtrRefType */
uint F_00c79bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc79bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  if (cVar1 == '\0') {
    F_00c757a7(&(*(undefined8 *)(gen_frame + 0x4)),1);
    F_00c7607b(&(*(undefined8 *)(gen_frame + 0x4)),param_4);
    if ((*(undefined * PTR32 *)((char *)(param_2))) != (undefined *)0x0) {
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x4)),param_2);
    }
    if ((*(undefined * PTR32 *)((char *)(param_3))) != (undefined *)0x0) {
      if ((*(undefined * PTR32 *)((char *)(param_2))) != (undefined *)0x0) {
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x4)),' ');
      }
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x4)),param_3);
    }
    *param_1 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x4)))));
    param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x4))) + 4)));
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    F_00c79512(&(*(undefined8 *)(gen_frame + 0x4)),param_3,param_4,param_2,0);
    F_00c7701a(param_1,&(*(undefined8 *)(gen_frame + 0x4)),(uint)(*param_4 == '*'));
  }
  else {
    F_00c75b99(&(*(undefined8 *)(gen_frame + 0x4)),param_4);
    if (((*(undefined * PTR32 *)((char *)(param_2))) != (undefined *)0x0) &&
       (((*(undefined * PTR32 *)((char *)(param_3))) == (undefined *)0x0 || (((*(uint *)(((char *)(param_3) + 4))) & 0x100) == 0)))) {
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x4)),param_2);
    }
    if ((*(undefined * PTR32 *)((char *)(param_3))) != (undefined *)0x0) {
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x4)),param_3);
    }
    F_00c79133(param_1,&(*(undefined8 *)(gen_frame + 0x4)));
  }
  return (uint)param_1;
}

/* ref: FID_conflict_getPointerType_00c79ce9 */
uint F_00c79ce9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc79ce9u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00c79bf0(param_1,param_2,param_3,&REFG(undefined, 0x111869c));
  return param_1;
}

/* ref: FID_conflict_getPointerType_00c79d09 */
uint F_00c79d09(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc79d09u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00c79bf0(param_1,param_2,param_3,&REFG(undefined1, 0x107fc63));
  return param_1;
}

/* ref: UnDecorator::getReferenceType */
uint F_00c79d29(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc79d29u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00c79bf0(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: ___unDName */
uint F_00c79d47(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc79d47u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x9c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x84);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  iVar1 = (*(int *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x7c)) = 100;
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = &REFG(undefined, 0x12f6aa8);
  (*(undefined4 *)(gen_frame + 0x74)) = 0xc79d53;
  if (((*(int *)&gen_args[3]) != 0) && (iVar2 = F_00c5a98d(5), iVar2 != 0)) {
    F_00c5aa4f(5);
    (*(undefined * PTR32 *)(gen_frame + 0x78)) = (undefined *)0x0;
    REFG(int, 0x15d75b8) = iVar1;
    *(undefined4 *)&REFG(undefined, 0x15d75bc) = (*(undefined4 *)&gen_args[4]);
    *(undefined4 *)&REFG(undefined, 0x15d75c8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15d75c0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15d75c4) = 0;
    F_00c75624(((undefined1 *)(gen_frame + 0x8)),(*(char * PTR32 *)&gen_args[0]),(*(char * PTR32 *)&gen_args[1]),(*(int *)&gen_args[2]),(code *)0x0,(*(uint *)&gen_args[5]) & 0xffff);
    pcVar3 = F_00c79ab1(((undefined1 *)(gen_frame + 0x8)));
    (*(char * PTR32 *)(gen_frame + 0x60)) = pcVar3;
    F_00c74b91(&REFG(int, 0x15d75b8));
    (*(undefined * PTR32 *)(gen_frame + 0x78)) = (undefined *)0xfffffffe;
    F_00c79dd8();
    return (uint)(*(char * PTR32 *)(gen_frame + 0x60));
  }
  return 0;
}

/* ref: FUN_00c79dd8 */
uint F_00c79dd8(void)
{
  GEN_ENTER(0xc79dd8u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(5);
  return uVar1;
}

/* ref: FUN_00c79e72 */
uint F_00c79e72(void)
{
  GEN_ENTER(0xc79e72u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(5);
  return uVar1;
}

/* ref: UnDecorator::getBasicDataType */
uint F_00c79e7b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc79e7bu, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * pDVar2;
  byte * pbVar3;
  int * piVar4;
  undefined * pDVar5;
  undefined * pDVar6;
  uint uVar7;
  uint uVar8;
  char * pcVar9;
  undefined * pDVar10;
  
  pbVar3 = REFG(byte * PTR32, 0x15d75d8);
  bVar1 = *REFG(byte * PTR32, 0x15d75d8);
  if (bVar1 == 0) {
    F_00c7625d(param_1,1,param_2);
    return (uint)param_1;
  }
  REFG(byte * PTR32, 0x15d75d8) = REFG(byte * PTR32, 0x15d75d8) + 1;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)0x0;
  uVar8 = (uint)bVar1;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) & 0xffff0000;
  uVar7 = 0xffffffff;
  (*(byte *)(gen_frame + 0x2b)) = 0;
  if (uVar8 < 0x4f) {
    if (uVar8 != 0x4e) {
      switch((unsigned int)(uintptr_t)(uVar8)) {
      case 0x43: ;
      case 0x44: ;
      case 0x45: ;
        pcVar9 = &REFG(undefined, 0x1126748);
        break;
      case 0x46: ;
      case 0x47: ;
        pcVar9 = "short";
        break;
      case 0x48: ;
      case 0x49: ;
        pcVar9 = ((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112673c))));
        break;
      case 0x4a: ;
      case 0x4b: ;
        pcVar9 = &REFG(undefined, 0x1126734);
        break;
      default: ;
        goto switchD_00c79ed1_caseD_4c;
      case 0x4d: ;
        pcVar9 = "float";
      }
      goto LAB_00c7a0c5;
    }
LAB_00c7a0eb: ;
    F_00c7607b(&(*(undefined8 *)(gen_frame + 0x20)),"double");
LAB_00c7a0f8: ;
    if (uVar7 != 0xffffffff) {
LAB_00c7a058: ;
      pDVar2 = (undefined *)*param_2;
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)0x0;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) & 0xffff0000;
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = pDVar2;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = param_2[1];
      if (uVar7 != 0xfffffffe) {
        if (*param_2 == 0) {
          if ((uVar7 & 1) == 0) {
            if ((uVar7 & 2) != 0) {
              F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),"volatile");
            }
          }
          else {
            F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),"const");
            if ((uVar7 & 2) != 0) {
              F_00c7607b(&(*(undefined8 *)(gen_frame + 0x20))," volatile");
            }
          }
        }
        F_00c79bf0(param_1,&(*(undefined8 *)(gen_frame + 0x20)),&(*(undefined8 *)(gen_frame + 0x18)),&REFG(undefined, 0x111869c));
        return (uint)param_1;
      }
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = param_2[1] | 0x800;
      F_00c79bf0(&(*(undefined8 *)(gen_frame + 0x10)),&(*(undefined8 *)(gen_frame + 0x20)),&(*(undefined8 *)(gen_frame + 0x18)),&REFG(undefined1, 0x107fc63));
      if (((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) & 0x800) == 0) {
        F_00c7607b(&(*(undefined8 *)(gen_frame + 0x10)),"[]");
      }
      *param_1 = (int)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      uVar7 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      goto LAB_00c7a1a5;
    }
  }
  else {
    if (uVar8 == 0x4f) {
      F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),"long ");
      goto LAB_00c7a0eb;
    }
    if (0x4f < uVar8) {
      if (uVar8 < 0x54) {
        uVar7 = uVar8 & 3;
        goto LAB_00c7a0f8;
      }
      if (uVar8 == 0x58) {
        pcVar9 = &REFG(undefined, 0x1126468);
        goto LAB_00c7a0c5;
      }
      if (uVar8 != 0x5f) goto switchD_00c79ed1_caseD_4c;
      bVar1 = *REFG(byte * PTR32, 0x15d75d8);
      REFG(byte * PTR32, 0x15d75d8) = pbVar3 + 2;
      (*(byte *)(gen_frame + 0x2b)) = bVar1;
      uVar7 = (uint)bVar1;
      if (uVar7 < 0x4e) {
        if (uVar7 < 0x4c) {
          if (uVar7 < 0x48) {
            if (uVar7 < 0x46) {
              if (uVar7 == 0) {
                REFG(byte * PTR32, 0x15d75d8) = pbVar3 + 1;
                F_00c758e0(&(*(undefined8 *)(gen_frame + 0x20)),1);
                goto LAB_00c7a101;
              }
              if (uVar7 == 0x24) {
                uVar7 = F_00c79e7b((int *)&(*(undefined8 *)(gen_frame + 0x10)),param_2);
                F_00c76281(param_1,"__w64 ",uVar7);
                return (uint)param_1;
              }
              if (1 < uVar7 - 0x44) goto LAB_00c7a040;
              pcVar9 = "__int8";
            }
            else {
              pcVar9 = "__int16";
            }
          }
          else if (uVar7 < 0x48) {
LAB_00c7a040: ;
            pcVar9 = "UNKNOWN";
          }
          else if (uVar7 < 0x4a) {
            pcVar9 = "__int32";
          }
          else {
            if (0x4b < uVar7) goto LAB_00c7a040;
            pcVar9 = "__int64";
          }
        }
        else {
          pcVar9 = "__int128";
        }
LAB_00c7a0c5: ;
        F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),pcVar9);
        goto LAB_00c7a101;
      }
      if (uVar7 == 0x4e) {
        pcVar9 = &REFG(undefined, 0x11266d4);
        goto LAB_00c7a0c5;
      }
      if (uVar7 != 0x4f) {
        if (uVar7 == 0x52) {
          pcVar9 = "<unknown>";
        }
        else {
          if (uVar7 != 0x57) {
            if (1 < uVar7 - 0x58) goto LAB_00c7a040;
            pDVar5 = &(*(undefined8 *)(gen_frame + 0x18));
            goto LAB_00c7a013;
          }
          pcVar9 = "wchar_t";
        }
        goto LAB_00c7a0c5;
      }
      uVar7 = 0xfffffffe;
      goto LAB_00c7a058;
    }
switchD_00c79ed1_caseD_4c: ;
    pDVar5 = &(*(undefined8 *)(gen_frame + 0x8));
LAB_00c7a013: ;
    REFG(byte * PTR32, 0x15d75d8) = REFG(byte * PTR32, 0x15d75d8) + -1;
    piVar4 = (int *)F_00c77d5e(pDVar5);
    uVar7 = piVar4[1];
    pDVar2 = (undefined *)*piVar4;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = pDVar2;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = uVar7;
    if (pDVar2 == (undefined *)0x0) {
      *param_1 = 0;
      param_1[1] = uVar7;
      return (uint)param_1;
    }
  }
LAB_00c7a101: ;
  if (uVar8 == 0x43) {
    pcVar9 = "signed ";
LAB_00c7a155: ;
    pDVar10 = &(*(undefined8 *)(gen_frame + 0x20));
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x10));
    pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x8)),pcVar9);
    F_00c75fe1(pDVar5,pDVar6,pDVar10);
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
  }
  else if (((((uVar8 == 0x45) || (uVar8 == 0x47)) || (uVar8 == 0x49)) || (uVar8 == 0x4b)) ||
          ((uVar8 == 0x5f &&
           ((((*(byte *)(gen_frame + 0x2b)) == 0x45 || ((*(byte *)(gen_frame + 0x2b)) == 0x47)) ||
            (((*(byte *)(gen_frame + 0x2b)) == 0x49 || (((*(byte *)(gen_frame + 0x2b)) == 0x4b || ((*(byte *)(gen_frame + 0x2b)) == 0x4d)))))))))) {
    pcVar9 = "unsigned ";
    goto LAB_00c7a155;
  }
  if (*param_2 != 0) {
    pDVar5 = &(*(undefined8 *)(gen_frame + 0x10));
    pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x8)),' ');
    F_00c75fe1(pDVar6,pDVar5,param_2);
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x20)),&(*(undefined8 *)(gen_frame + 0x10)));
  }
  *param_1 = (int)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
  uVar7 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
LAB_00c7a1a5: ;
  param_1[1] = uVar7;
  return (uint)param_1;
}

/* ref: UnDecorator::getPrimaryDataType */
uint F_00c7a23e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7a23eu, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined * puVar4;
  
  pcVar2 = REFG(char * PTR32, 0x15d75d8);
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  uVar3 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) & 0xffff0000;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = uVar3;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (undefined *)0x0;
  if (cVar1 == '\0') {
LAB_00c7a3db: ;
    F_00c7625d(param_1,1,param_2);
    return (uint)param_1;
  }
  if (cVar1 == '$') {
    if (REFG(char * PTR32, 0x15d75d8)[1] != '$') {
      if (REFG(char * PTR32, 0x15d75d8)[1] == '\0') goto LAB_00c7a3db;
LAB_00c7a2e8: ;
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
      (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
      return (uint)param_1;
    }
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 2;
    cVar1 = *REFG(char * PTR32, 0x15d75d8);
    if (cVar1 < 'R') {
      if (cVar1 != 'Q') {
        if (cVar1 == '\0') goto LAB_00c7a3db;
        if (cVar1 == 'A') {
          REFG(char * PTR32, 0x15d75d8) = pcVar2 + 3;
          F_00c79133(param_1,param_2);
          return (uint)param_1;
        }
        if (cVar1 == 'B') {
          REFG(char * PTR32, 0x15d75d8) = pcVar2 + 3;
          F_00c7701a(param_1,param_2,1);
          return (uint)param_1;
        }
        if (cVar1 == 'C') {
          REFG(char * PTR32, 0x15d75d8) = pcVar2 + 3;
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (undefined *)0x0;
          uVar3 = F_00c79512(((undefined1 *)(gen_frame + 0x4)),param_2,&REFG(undefined1, 0x107fc63),&(*(undefined8 *)(gen_frame + 0x14)),0);
          F_00c79e7b(param_1,uVar3);
          return (uint)param_1;
        }
        goto LAB_00c7a2e8;
      }
    }
    else {
      if (cVar1 != 'R') {
        if (cVar1 == 'S') {
          REFG(char * PTR32, 0x15d75d8) = pcVar2 + 3;
        }
        else if (cVar1 == 'T') {
          REFG(char * PTR32, 0x15d75d8) = pcVar2 + 3;
          F_00c75b99(param_1,"std::nullptr_t");
          return (uint)param_1;
        }
        goto LAB_00c7a2e8;
      }
      F_00c75e99(&(*(undefined8 *)(gen_frame + 0x14)),"volatile");
      if (*param_2 != 0) {
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x14)),' ');
      }
    }
    puVar4 = &REFG(undefined, 0x1126144);
  }
  else {
    if (cVar1 != 'A') {
      if (cVar1 != 'B') {
        F_00c79e7b(param_1,param_2);
        return (uint)param_1;
      }
      F_00c75e99(&(*(undefined8 *)(gen_frame + 0x14)),"volatile");
      if (*param_2 != 0) {
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x14)),' ');
      }
    }
    puVar4 = &REFG(undefined, 0x1126170);
  }
  uVar3 = param_2[1];
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  (*(int *)(gen_frame + 0xc)) = *param_2;
  (*(uint *)(gen_frame + 0x10)) = uVar3 | 0x100;
  F_00c79bf0(param_1,&(*(undefined8 *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0xc)),puVar4);
  return (uint)param_1;
}

/* ref: UnDecorator::getDataType */
uint F_00c7a3ef(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7a3efu, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined * this;
  undefined4 * puVar2;
  undefined * pDVar3;
  undefined * pDVar4;
  
  F_00c75754(&(*(undefined8 *)(gen_frame + 0x14)),param_2);
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  pDVar3 = param_1;
  if (cVar1 == '\0') {
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
    this = (undefined *)F_00c757a7(&(*(undefined8 *)(gen_frame + 0xc)),1);
  }
  else {
    if (cVar1 == '?') {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0xc))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0xc))) + 4))) & 0xffff0000;
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xc))))) = (undefined *)0x0;
      puVar2 = (undefined4 *)
               F_00c79512(((undefined1 *)(gen_frame + 0x4)),&(*(undefined8 *)(gen_frame + 0x14)),&REFG(undefined1, 0x107fc63),&(*(undefined8 *)(gen_frame + 0xc)),0);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (undefined *)*puVar2;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = puVar2[1];
      F_00c7a23e(param_1,&(*(undefined8 *)(gen_frame + 0x14)));
      return (uint)param_1;
    }
    if (cVar1 != 'X') {
      F_00c7a23e(param_1,&(*(undefined8 *)(gen_frame + 0x14)));
      return (uint)param_1;
    }
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) == (undefined *)0x0) {
      F_00c75b99(param_1,"void");
      return (uint)param_1;
    }
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
    this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0xc)),"void ");
  }
  F_00c75fe1(this,pDVar3,pDVar4);
  return (uint)param_1;
}

/* ref: UnDecorator::getExternalDataType */
uint F_00c7a4be(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7a4beu, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8),8,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[1] = puVar1[1] & 0xffff00ff;
  }
  F_00c7a3ef(param_1,puVar1);
  F_00c75693(&(*(undefined * PTR32 *)(gen_frame + 0xc)));
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = (*(uint *)(gen_frame + 0x10));
  F_00c76029(&(*(undefined8 *)(gen_frame + 0x14)),' ');
  puVar2 = (undefined4 *)F_00c75fe1(&(*(undefined8 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x4)),param_2);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  return param_1;
}

/* ref: ___crtMessageBoxW */
int F_00c7a537(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7a537u, gen_a0, gen_a1, gen_a2, 0u);
  LPCWSTR _LpText = (LPCWSTR)gen_a0;
  LPCWSTR _LpCaption = (LPCWSTR)gen_a1;
  UINT _UType = (UINT)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  PVOID pvVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  code * pcVar4;
  code * pcVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(LPCWSTR *)(gen_frame + 0xc)) = _LpText;
  (*(LPCWSTR *)(gen_frame + 0x10)) = _LpCaption;
  pvVar1 = (PVOID)F_00c5b18d();
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(PVOID *)(gen_frame + 0x14)) = pvVar1;
  if (REFG(undefined4, 0x15d7628) == (PVOID)0x0) {
    pHVar2 = gen_imp_LoadLibraryW((LPCWSTR)(*(undefined * PTR32 (*)[2])REFP(0x11267c4)));
    if (pHVar2 != (HMODULE)0x0) {
      pFVar3 = gen_imp_GetProcAddress(pHVar2,"MessageBoxW");
      if (pFVar3 != (FARPROC)0x0) {
        REFG(undefined4, 0x15d7628) = gen_imp_EncodePointer(pFVar3);
        pFVar3 = gen_imp_GetProcAddress(pHVar2,"GetActiveWindow");
        REFG(undefined4, 0x15d762c) = gen_imp_EncodePointer(pFVar3);
        pFVar3 = gen_imp_GetProcAddress(pHVar2,"GetLastActivePopup");
        REFG(undefined4, 0x15d7630) = gen_imp_EncodePointer(pFVar3);
        pFVar3 = gen_imp_GetProcAddress(pHVar2,"GetUserObjectInformationW");
        REFG(undefined4, 0x15d7638) = gen_imp_EncodePointer(pFVar3);
        if (REFG(undefined4, 0x15d7638) != (PVOID)0x0) {
          pFVar3 = gen_imp_GetProcAddress(pHVar2,"GetProcessWindowStation");
          REFG(undefined4, 0x15d7634) = gen_imp_EncodePointer(pFVar3);
        }
        goto LAB_00c7a5ea;
      }
    }
  }
  else {
LAB_00c7a5ea: ;
    if ((REFG(undefined4, 0x15d7634) == (*(PVOID *)(gen_frame + 0x14))) || (REFG(undefined4, 0x15d7638) == (*(PVOID *)(gen_frame + 0x14)))) {
LAB_00c7a643: ;
      if (REFG(undefined4, 0x15d762c) != (*(PVOID *)(gen_frame + 0x14))) {
        pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d762c));
        if (pcVar4 != (code *)0x0) {
          uVar6 = (*pcVar4)();
          (*(uint *)(gen_frame + 0x18)) = uVar6;
          if ((uVar6 != 0) && (REFG(undefined4, 0x15d7630) != (*(PVOID *)(gen_frame + 0x14)))) {
            pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7630));
            if (pcVar4 != (code *)0x0) {
              uVar6 = (*pcVar4)((*(uint *)(gen_frame + 0x18)));
              (*(uint *)(gen_frame + 0x18)) = uVar6;
            }
          }
        }
      }
    }
    else {
      pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7634));
      pcVar5 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7638));
      if ((pcVar4 == (code *)0x0) || (pcVar5 == (code *)0x0)) goto LAB_00c7a643;
      uVar6 = (*pcVar4)();
      if (uVar6 != 0) {
        uVar6 = (*pcVar5)(uVar6,1,((undefined1 *)(gen_frame + 0x1c)),0xc,((undefined1 *)(gen_frame + 0x8)));
        if ((uVar6 != 0) && (((*(byte *)(gen_frame + 0x24)) & 1) != 0)) goto LAB_00c7a643;
      }
      _UType = _UType | 0x200000;
    }
    pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7628));
    if (pcVar4 != (code *)0x0) {
      uVar6 = (*pcVar4)((*(uint *)(gen_frame + 0x18)),(*(LPCWSTR *)(gen_frame + 0xc)),(*(LPCWSTR *)(gen_frame + 0x10)),_UType);
      goto LAB_00c7a694;
    }
  }
  uVar6 = 0;
LAB_00c7a694: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar6;
}

/* ref: __set_error_mode */
int F_00c7a6a3(unsigned int gen_a0)
{
  GEN_ENTER(0xc7a6a3u, gen_a0, 0u, 0u, 0u);
  int _Mode = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = REFG(int, 0x15d686c);
      REFG(int, 0x15d686c) = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return REFG(int, 0x15d686c);
    }
  }
  piVar2 = F_00c51f85();
  *piVar2 = 0x16;
  F_00c4c305();
  return -1;
}

/* ref: FUN_00c7a6e2 */
uint F_00c7a6e2(unsigned int gen_a0)
{
  GEN_ENTER(0xc7a6e2u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x134ab80) = param_1;
  return param_1;
}

/* ref: __crtGetLocaleInfoA_stat */
int F_00c7a6f1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc7a6f1u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulong param_2 = (ulong)gen_a1;
  ulong param_3 = (ulong)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10010];
  uint uVar1;
  LPCWSTR lpWideCharStr;
  int iVar2;
  int iVar3;
  char * lpMultiByteStr;
  
  (*(uint *)(gen_frame + 0x10008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10);
  iVar3 = 0;
  (*(uint *)(gen_frame + 0x10004)) = (*((uint *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)(param_1))) + 4)))));
  uVar1 = gen_imp_GetLocaleInfoW(param_2,param_3,0,0);
  (*(uint *)(gen_frame + 0x10000)) = uVar1;
  if (uVar1 != 0) {
    if (((int)uVar1 < 1) || (0xffffffe0 / uVar1 < 2)) {
      lpWideCharStr = (LPCWSTR)0x0;
    }
    else {
      uVar1 = uVar1 * 2 + 8;
      if (uVar1 < 0x401) {
        if (0) goto LAB_00c7a72c;
        lpWideCharStr = (LPCWSTR)((gen_frame + 0x0) - uVar1);
      }
      else {
        lpWideCharStr = F_00c51787(uVar1);
        if (lpWideCharStr != (LPCWSTR)0x0) {
          lpWideCharStr[0] = L'\xdddd';
          lpWideCharStr[1] = L'\0';
          lpWideCharStr = lpWideCharStr + 4;
        }
      }
    }
    if (lpWideCharStr != (LPCWSTR)0x0) {
      iVar2 = gen_imp_GetLocaleInfoW(param_2,param_3,lpWideCharStr,(*(uint *)(gen_frame + 0x10000)));
      if (iVar2 != 0) {
        lpMultiByteStr = param_4;
        iVar3 = param_5;
        if (param_5 == 0) {
          iVar3 = 0;
          lpMultiByteStr = (LPSTR)0x0;
        }
        iVar3 = gen_imp_WideCharToMultiByte((*(uint *)(gen_frame + 0x10004)),0,lpWideCharStr,-1,lpMultiByteStr,iVar3,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
      }
      F_00c4f78f(lpWideCharStr);
      goto LAB_00c7a7b9;
    }
  }
LAB_00c7a72c: ;
  iVar3 = 0;
LAB_00c7a7b9: ;
  F_00c47745((*(uint *)(gen_frame + 0x10008)) ^ (uint)(uint)(gen_frame + 0x10));
  return iVar3;
}

/* ref: ___crtGetLocaleInfoA */
int F_00c7a7cb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc7a7cbu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a0;
  LPCWSTR _LocaleName = (LPCWSTR)gen_a1;
  ulong _LCType = (ulong)gen_a2;
  LPSTR _LpLCData = (LPSTR)gen_a3;
  int _CchData = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Plocinfo);
  iVar1 = F_00c7a6f1((undefined *)((byte *)(gen_frame + 0xc)),(ulong)_LocaleName,_LCType,_LpLCData,_CchData);
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar1;
}

/* ref: FID_conflict___atoflt_l_00c7a805 */
int F_00c7a805(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7a805u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Result = (undefined *)(uintptr_t)gen_a0;
  char * _Str = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 IVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00c483ca(((undefined *)(gen_frame + 0x8)),_Locale);
  uVar1 = F_00c63c8d(((undefined *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x4)),_Str,0,0,0,0,((undefined *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  IVar2 = F_00c7c314(((undefined *)(gen_frame + 0x1c)),(undefined *)_Result);
  if (((*(uint *)(gen_frame + 0x18)) & 3) == 0) {
    if (IVar2 == (1)) {
LAB_00c7a85e: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x8)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) & 0xfffffffd;
      }
      iVar3 = 3;
      goto LAB_00c7a89e;
    }
    if (IVar2 != (2)) {
LAB_00c7a890: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x8)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) & 0xfffffffd;
      }
      iVar3 = 0;
      goto LAB_00c7a89e;
    }
  }
  else if (((*(uint *)(gen_frame + 0x18)) & 1) == 0) {
    if (((*(uint *)(gen_frame + 0x18)) & 2) == 0) goto LAB_00c7a890;
    goto LAB_00c7a85e;
  }
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x8)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) & 0xfffffffd;
  }
  iVar3 = 4;
LAB_00c7a89e: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return iVar3;
}

/* ref: FID_conflict___atodbl_00c7a8ad */
int F_00c7a8ad(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7a8adu, gen_a0, gen_a1, 0u, 0u);
  undefined * _Result = (undefined *)(uintptr_t)gen_a0;
  char * _Str = (char *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7a805(_Result,_Str,(undefined *)0x0);
  return iVar1;
}

/* ref: __atoldbl_l */
int F_00c7a8c4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7a8c4u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Result = (undefined *)(uintptr_t)gen_a0;
  char * _Str = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 IVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00c483ca(((undefined *)(gen_frame + 0x8)),_Locale);
  uVar1 = F_00c63c8d(((undefined *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x4)),_Str,1,0,0,0,((undefined *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  IVar2 = F_00c7cdb6(((undefined *)(gen_frame + 0x1c)),_Result);
  if (((*(uint *)(gen_frame + 0x18)) & 3) == 0) {
    if (IVar2 == (1)) {
LAB_00c7a91e: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x8)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) & 0xfffffffd;
      }
      iVar3 = 3;
      goto LAB_00c7a95e;
    }
    if (IVar2 != (2)) {
LAB_00c7a950: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x8)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) & 0xfffffffd;
      }
      iVar3 = 0;
      goto LAB_00c7a95e;
    }
  }
  else if (((*(uint *)(gen_frame + 0x18)) & 1) == 0) {
    if (((*(uint *)(gen_frame + 0x18)) & 2) == 0) goto LAB_00c7a950;
    goto LAB_00c7a91e;
  }
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x8)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) & 0xfffffffd;
  }
  iVar3 = 4;
LAB_00c7a95e: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return iVar3;
}

/* ref: __atoldbl */
int F_00c7a96d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7a96du, gen_a0, gen_a1, 0u, 0u);
  undefined * _Result = (undefined *)(uintptr_t)gen_a0;
  char * _Str = (char *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7a8c4(_Result,_Str,(undefined *)0x0);
  return iVar1;
}

/* ref: FID_conflict___atoflt_l_00c7a984 */
int F_00c7a984(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7a984u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Result = (undefined *)(uintptr_t)gen_a0;
  char * _Str = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 IVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00c483ca(((undefined *)(gen_frame + 0x8)),_Locale);
  uVar1 = F_00c63c8d(((undefined *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x4)),_Str,0,0,0,0,((undefined *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  IVar2 = F_00c7c865(((undefined *)(gen_frame + 0x1c)),_Result);
  if (((*(uint *)(gen_frame + 0x18)) & 3) == 0) {
    if (IVar2 == (1)) {
LAB_00c7a9dd: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x8)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) & 0xfffffffd;
      }
      iVar3 = 3;
      goto LAB_00c7aa1d;
    }
    if (IVar2 != (2)) {
LAB_00c7aa0f: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x8)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) & 0xfffffffd;
      }
      iVar3 = 0;
      goto LAB_00c7aa1d;
    }
  }
  else if (((*(uint *)(gen_frame + 0x18)) & 1) == 0) {
    if (((*(uint *)(gen_frame + 0x18)) & 2) == 0) goto LAB_00c7aa0f;
    goto LAB_00c7a9dd;
  }
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x8)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) + 112))))) & 0xfffffffd;
  }
  iVar3 = 4;
LAB_00c7aa1d: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return iVar3;
}

/* ref: FID_conflict___atodbl_00c7aa2c */
int F_00c7aa2c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7aa2cu, gen_a0, gen_a1, 0u, 0u);
  undefined * _Result = (undefined *)(uintptr_t)gen_a0;
  char * _Str = (char *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7a984(_Result,_Str,(undefined *)0x0);
  return iVar1;
}

/* ref: __set_output_format */
uint F_00c7aa43(unsigned int gen_a0)
{
  GEN_ENTER(0xc7aa43u, gen_a0, 0u, 0u, 0u);
  uint _Format = (uint)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = REFG(undefined4, 0x15d763c);
  if ((_Format & 0xfffffffe) == 0) {
    REFG(undefined4, 0x15d763c) = _Format;
  }
  else {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  return uVar1;
}

/* ref: __fptostr */
int F_00c7aa7b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7aa7bu, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  gen_size32 _SizeInBytes = (gen_size32)gen_a1;
  int _Digits = (int)gen_a2;
  undefined * _PtFlt = (undefined *)(uintptr_t)gen_a3;
  char * _Str;
  int iVar1;
  int * piVar2;
  char * pcVar3;
  gen_size32 sVar4;
  char cVar5;
  char * pcVar6;
  int eVar7;
  
  pcVar6 = (*(char * PTR32 *)(((char *)(_PtFlt) + 12)));
  iVar1 = 0;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    piVar2 = F_00c51f85();
    eVar7 = 0x16;
    *piVar2 = 0x16;
  }
  else {
    *_Buf = '\0';
    if (0 < _Digits) {
      iVar1 = _Digits;
    }
    if (iVar1 + 1U < _SizeInBytes) {
      _Str = _Buf + 1;
      *_Buf = '0';
      pcVar3 = _Str;
      for (iVar1 = _Digits; 0 < iVar1; iVar1 = iVar1 + -1) {
        cVar5 = *pcVar6;
        if (cVar5 == '\0') {
          cVar5 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar3 = cVar5;
        pcVar3 = pcVar3 + 1;
      }
      *pcVar3 = '\0';
      if ((-1 < iVar1) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        (*(int *)(((char *)(_PtFlt) + 4))) = (*(int *)(((char *)(_PtFlt) + 4))) + 1;
      }
      else {
        sVar4 = F_00c552f0(_Str);
        F_00c46e20(_Buf,_Str,sVar4 + 1);
      }
      return 0;
    }
    piVar2 = F_00c51f85();
    eVar7 = 0x22;
    *piVar2 = 0x22;
  }
  F_00c4c305();
  return eVar7;
}

/* ref: ___dtold */
unsigned int F_00c7ab2e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7ab2eu, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar2 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar5 = uVar1 & 0x7ff;
  uVar3 = *param_2;
  local_8 = 0x80000000;
  if ((uVar1 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar3 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_00c7abd8;
    }
    uVar5 = uVar5 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar5 == 0x7ff) {
    uVar5 = 0x7fff;
  }
  else {
    uVar5 = uVar5 + 0x3c00;
  }
  uVar4 = uVar3 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  uVar3 = uVar3 << 0xb;
  while( true ) {
    *param_1 = uVar3;
    param_1[1] = uVar4;
    if ((uVar4 & 0x80000000) != 0) break;
    uVar4 = uVar4 * 2 | *param_1 >> 0x1f;
    uVar3 = *param_1 * 2;
    uVar5 = uVar5 - 1;
  }
  uVar2 = uVar2 | uVar5;
LAB_00c7abd8: ;
  *(ushort *)(param_1 + 2) = uVar2;
  return 0;
}

/* ref: FUN_00c7abe1 */
uint F_00c7abe1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc7abe1u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  int iVar2;
  uint uVar3;
  int eVar4;
  undefined2 uVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  uVar5 = (undefined2)((uint)(*((undefined4 *)GEN_TOP((gen_frame + 0x0)))) >> 0x10);
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(int *)(gen_frame + 0x28)) = (*(int *)&gen_args[3]);
  (*(short * PTR32 *)(gen_frame + 0xc)) = (short *)&(*(undefined4 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc7ac0c;
  F_00c7ab2e(&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)&gen_args[0]));
  (*(short * PTR32 *)(gen_frame + 0xc)) = &(*(short *)(gen_frame + 0x2c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x11;
  uVar3 = F_00c7ed8d((*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),CONCAT22(uVar5,(*(undefined2 *)(gen_frame + 0x24))),0x11,0,&(*(short *)(gen_frame + 0x2c)));
  iVar2 = (*(int *)(gen_frame + 0x28));
  piVar1[2] = uVar3;
  *piVar1 = (int)(*(char *)(gen_frame + 0x2e));
  piVar1[1] = (int)(*(short *)(gen_frame + 0x2c));
  eVar4 = F_00c49908((*(int *)(gen_frame + 0x28)),(*(undefined4 *)&gen_args[4]),((undefined1 *)(gen_frame + 0x30)));
  if (eVar4 == 0) {
    piVar1[3] = iVar2;
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return (uint)piVar1;
  }
  (*(short * PTR32 *)(gen_frame + 0xc)) = (short *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
                    
  F_00c4c299((gen_frame + 0x2),0,0,0,0,0);
}

/* ref: __alldvrm */
ulonglong F_00c7ac70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7ac70u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  
  cVar10 = (int)param_2 < 0;
  if ((bool)cVar10) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar9 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar10 = cVar10 + '\x01';
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar9 - param_4;
  }
  uVar7 = param_1;
  uVar4 = param_3;
  uVar6 = param_2;
  uVar8 = param_4;
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar3 = uVar8 & 1;
      uVar8 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT14(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar7 = (uint)(CONCAT14(uVar3 != 0,uVar7) >> 1);
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar4 + iVar5 * param_4;
    if (((CARRY4(uVar4,iVar5 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  if (cVar10 == '\x01') {
    bVar9 = iVar5 != 0;
    iVar5 = -iVar5;
    uVar4 = -(uint)bVar9 - uVar4;
  }
  return CONCAT44(uVar4,iVar5);
}

/* ref: FUN_00c7ad4f */
unsigned int F_00c7ad4f(void)
{
  GEN_ENTER(0xc7ad4fu, 0u, 0u, 0u, 0u);
                    
  F_00c47ca5(2);
}

/* ref: __controlfp_s */
int F_00c7ad58(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7ad58u, gen_a0, gen_a1, gen_a2, 0u);
  uint * _CurrentState = (uint *)(uintptr_t)gen_a0;
  uint _NewValue = (uint)gen_a1;
  uint _Mask = (uint)gen_a2;
  uint uVar1;
  int * piVar2;
  int eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      F_00c8010c(_NewValue,uVar1);
    }
    else {
      uVar1 = F_00c8010c(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = F_00c8010c(0,0);
      *_CurrentState = uVar1;
    }
    piVar2 = F_00c51f85();
    eVar3 = 0x16;
    *piVar2 = 0x16;
    F_00c4c305();
  }
  return eVar3;
}

/* ref: __isatty */
int F_00c7adb7(unsigned int gen_a0)
{
  GEN_ENTER(0xc7adb7u, gen_a0, 0u, 0u, 0u);
  int _FileHandle = (int)gen_a0;
  int * piVar1;
  
  if (_FileHandle == -2) {
    piVar1 = F_00c51f85();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < REFG(undefined4, 0x15e4190))) {
      return (int)*((char *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40))) &
             0x40;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 9;
    F_00c4c305();
  }
  return 0;
}

/* ref: __wctomb_s_l */
int F_00c7ae0d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc7ae0du, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * lpMultiByteStr;
  gen_size32 _Size;
  int iVar1;
  int * piVar2;
  DWORD DVar3;
  
  _Size = (*(gen_size32 *)&gen_args[2]);
  lpMultiByteStr = (*(char * PTR32 *)&gen_args[1]);
  if (((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) && ((*(gen_size32 *)&gen_args[2]) != 0)) {
    if ((*(int * PTR32 *)&gen_args[0]) != (int *)0x0) {
      *(*(int * PTR32 *)&gen_args[0]) = 0;
    }
LAB_00c7ae31: ;
    iVar1 = 0;
  }
  else {
    if ((*(int * PTR32 *)&gen_args[0]) != (int *)0x0) {
      *(*(int * PTR32 *)&gen_args[0]) = -1;
    }
    if (0x7fffffff < (*(gen_size32 *)&gen_args[2])) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
      return 0x16;
    }
    F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(*(undefined * PTR32 *)&gen_args[4]));
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) == 0) {
      if ((ushort)(*(wchar_t *)&gen_args[3]) < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_00c7aebd;
          *lpMultiByteStr = (char)(*(wchar_t *)&gen_args[3]);
        }
        if ((*(int * PTR32 *)&gen_args[0]) != (int *)0x0) {
          *(*(int * PTR32 *)&gen_args[0]) = 1;
        }
LAB_00c7aeec: ;
        if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c7ae31;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        F_00c48350(lpMultiByteStr,0,_Size);
      }
    }
    else {
      (*(char * PTR32 *)&gen_args[1]) = (char *)0x0;
      iVar1 = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),0,&(*(wchar_t *)&gen_args[3]),1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&(*(char * PTR32 *)&gen_args[1]));
      if (iVar1 == 0) {
        DVar3 = gen_imp_GetLastError();
        if (DVar3 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            F_00c48350(lpMultiByteStr,0,_Size);
          }
LAB_00c7aebd: ;
          piVar2 = F_00c51f85();
          *piVar2 = 0x22;
          F_00c4c305();
          if (((byte *)(gen_frame + 0xc))[0xc] == 0) {
            return 0x22;
          }
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
          return 0x22;
        }
      }
      else if ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) {
        if ((*(int * PTR32 *)&gen_args[0]) != (int *)0x0) {
          *(*(int * PTR32 *)&gen_args[0]) = iVar1;
        }
        goto LAB_00c7aeec;
      }
    }
    piVar2 = F_00c51f85();
    *piVar2 = 0x2a;
    piVar2 = F_00c51f85();
    iVar1 = *piVar2;
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar1;
}

/* ref: _wctomb_s */
int F_00c7af62(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7af62u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * _SizeConverted = (int *)(uintptr_t)gen_a0;
  char * _MbCh = (char *)(uintptr_t)gen_a1;
  gen_size32 _SizeInBytes = (gen_size32)gen_a2;
  wchar_t _WCh = (wchar_t)gen_a3;
  int eVar1;
  
  eVar1 = F_00c7ae0d(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(undefined *)0x0);
  return eVar1;
}

/* ref: __wctomb_l */
int F_00c7af7f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7af7fu, gen_a0, gen_a1, gen_a2, 0u);
  char * _MbCh = (char *)(uintptr_t)gen_a0;
  wchar_t _WCh = (wchar_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int eVar1;
  int iVar2;
  
  (*(int *)(gen_frame + 0x18)) = -1;
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),_Locale);
  eVar1 = F_00c7ae0d(&(*(int *)(gen_frame + 0x18)),_MbCh,*((gen_size32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xac))),_WCh,(undefined *)((byte *)(gen_frame + 0x8)));
  iVar2 = (*(int *)(gen_frame + 0x18));
  if (eVar1 != 0) {
    iVar2 = -1;
  }
  if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar2;
}

/* ref: _wctomb */
int F_00c7afd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7afd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  gen_size32 _SizeInBytes;
  int eVar1;
  undefined2 in_stack_0000000a;
  undefined * _Locale;
  
  (*(int *)(gen_frame + 0x8)) = -1;
  _Locale = (undefined *)0x0;
  _SizeInBytes = F_00c54b3c(*(undefined4 *)&(*(wchar_t *)&gen_args[1]),0);
  eVar1 = F_00c7ae0d(&(*(int *)(gen_frame + 0x8)),(*(char * PTR32 *)&gen_args[0]),_SizeInBytes,(wchar_t)*(undefined4 *)&(*(wchar_t *)&gen_args[1]),_Locale);
  if (eVar1 == 0) {
    return (*(int *)(gen_frame + 0x8));
  }
  return -1;
}

/* ref: __fputwc_nolock */
uint F_00c7b002(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b002u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined * puVar4;
  int eVar5;
  wchar_t _WCh;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  _WCh = (wchar_t)param_1;
  if (((*(int *)(((char *)(param_2) + 12))) & 0x40) == 0) {
    iVar2 = F_00c5d07b(param_2);
    if (iVar2 == -1) {
LAB_00c7b063: ;
      puVar4 = &REFG(undefined, 0x134b280);
    }
    else {
      iVar2 = F_00c5d07b(param_2);
      if (iVar2 == -2) goto LAB_00c7b063;
      iVar2 = F_00c5d07b(param_2);
      uVar3 = F_00c5d07b(param_2);
      puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar2 >> 5])));
    }
    if ((puVar4[0x24] & 0x7f) != 2) {
      iVar2 = F_00c5d07b(param_2);
      if (iVar2 == -1) {
LAB_00c7b0ac: ;
        puVar4 = &REFG(undefined, 0x134b280);
      }
      else {
        iVar2 = F_00c5d07b(param_2);
        if (iVar2 == -2) goto LAB_00c7b0ac;
        iVar2 = F_00c5d07b(param_2);
        uVar3 = F_00c5d07b(param_2);
        puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar2 >> 5])));
      }
      if ((puVar4[0x24] & 0x7f) != 1) {
        iVar2 = F_00c5d07b(param_2);
        if (iVar2 == -1) {
LAB_00c7b0f5: ;
          puVar4 = &REFG(undefined, 0x134b280);
        }
        else {
          iVar2 = F_00c5d07b(param_2);
          if (iVar2 == -2) goto LAB_00c7b0f5;
          iVar2 = F_00c5d07b(param_2);
          uVar3 = F_00c5d07b(param_2);
          puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar2 >> 5])));
        }
        if ((puVar4[4] & 0x80) != 0) {
          eVar5 = F_00c7af62(&(*(int *)(gen_frame + 0xc)),((char *)(gen_frame + 0x10)),5,_WCh);
          if (eVar5 == 0) {
            iVar2 = 0;
            uVar3 = 0;
            if (0 < (*(int *)(gen_frame + 0xc))) {
              do {
                piVar1 = &(*(int *)(((char *)(param_2) + 4)));
                *piVar1 = *piVar1 + -1;
                if (*piVar1 < 0) {
                  uVar3 = F_00c567c4((int)((char *)(gen_frame + 0x10))[(int)(iVar2)],param_2);
                }
                else {
                  *(*(char * PTR32 *)((char *)(param_2))) = ((char *)(gen_frame + 0x10))[(int)(iVar2)];
                  uVar3 = (uint)(byte)*(*(char * PTR32 *)((char *)(param_2)));
                  (*(char * PTR32 *)((char *)(param_2))) = (*(char * PTR32 *)((char *)(param_2))) + 1;
                }
                if (uVar3 == 0xffffffff) goto LAB_00c7b116;
                iVar2 = iVar2 + 1;
              } while (iVar2 < (*(int *)(gen_frame + 0xc)));
            }
            uVar3 = CONCAT22((short)(uVar3 >> 0x10),_WCh);
          }
          else {
LAB_00c7b116: ;
            uVar3 = 0xffff;
          }
          goto LAB_00c7b17a;
        }
      }
    }
  }
  piVar1 = &(*(int *)(((char *)(param_2) + 4)));
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    uVar3 = F_00c80733(param_1 & 0xffff,param_2);
  }
  else {
    *(wchar_t *)(*(char * PTR32 *)((char *)(param_2))) = _WCh;
    (*(char * PTR32 *)((char *)(param_2))) = (*(char * PTR32 *)((char *)(param_2))) + 2;
    uVar3 = param_1;
  }
LAB_00c7b17a: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: _fputwc */
uint F_00c7b189(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b189u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pFVar1;
  int * piVar2;
  uint uVar3;
  
  pFVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6ae8);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc7b195;
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    uVar3 = 0xffff;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[1]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    uVar3 = F_00c7b002((*(undefined4 *)&gen_args[0]),pFVar1);
    (*(uint *)(gen_frame + 0x0)) = uVar3 & 0xffff;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    uVar3 = F_00c7b1ef((gen_frame + 0x1c));
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),(undefined2)(*(uint *)(gen_frame + 0x0)));
  }
  return uVar3;
}

/* ref: FUN_00c7b1ef */
uint F_00c7b1ef(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b1efu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: FUN_00c7b1f9 */
uint F_00c7b1f9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b1f9u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c7b189(param_1,param_2);
  return uVar1;
}

/* ref: __mbtowc_l */
int F_00c7b204(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7b204u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _DstCh = (wchar_t *)(uintptr_t)gen_a0;
  char * _SrcCh = (char *)(uintptr_t)gen_a1;
  gen_size32 _SrcSizeInBytes = (gen_size32)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int * piVar3;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) != 0) {
        iVar1 = F_00c6dfe8((uint)(byte)*_SrcCh,(undefined *)((byte *)(gen_frame + 0xc)));
        if (iVar1 == 0) {
          iVar1 = gen_imp_MultiByteToWideChar(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar1 != 0) goto LAB_00c7b252;
        }
        else {
          iVar1 = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac)));
          iVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0));
          if ((((1 < iVar1) && (iVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar1 = gen_imp_MultiByteToWideChar(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),9,_SrcCh,iVar1,_DstCh,
                                           (uint)(_DstCh != (wchar_t *)0x0)), iVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)),
              iVar1 != 0)) || ((*(uint *)(iVar2 + 0xac) <= _SrcSizeInBytes && (_SrcCh[1] != '\0'))))
          {
            iVar1 = *(int *)(iVar2 + 0xac);
            if (((byte *)(gen_frame + 0xc))[0xc] == 0) {
              return iVar1;
            }
            *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
            return iVar1;
          }
        }
        piVar3 = F_00c51f85();
        *piVar3 = 0x2a;
        if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_00c7b252: ;
      if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}

/* ref: _mbtowc */
int F_00c7b31a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7b31au, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _DstCh = (wchar_t *)(uintptr_t)gen_a0;
  char * _SrcCh = (char *)(uintptr_t)gen_a1;
  gen_size32 _SrcSizeInBytes = (gen_size32)gen_a2;
  int iVar1;
  
  iVar1 = F_00c7b204(_DstCh,_SrcCh,_SrcSizeInBytes,(undefined *)0x0);
  return iVar1;
}

/* ref: x_ismbbtype_l */
int F_00c7b334(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7b334u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(*(undefined * PTR32 *)&gen_args[0]));
  if ((*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 0x1d + ((*(uint *)&gen_args[1]) & 0xff)))) & (byte)(*(int *)&gen_args[3])) == 0) {
    if ((*(int *)&gen_args[2]) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + ((*(uint *)&gen_args[1]) & 0xff) * 2))) & (*(int *)&gen_args[2]);
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_00c7b378;
  }
  iVar2 = 1;
LAB_00c7b378: ;
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar2;
}

/* ref: __ismbbkalnum_l */
int F_00c7b387(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b387u, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,1);
  return iVar1;
}

/* ref: __ismbbkalnum */
int F_00c7b3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b3a0u, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0,1);
  return iVar1;
}

/* ref: __ismbbkprint_l */
int F_00c7b3b8(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b3b8u, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,3);
  return iVar1;
}

/* ref: __ismbbkprint */
int F_00c7b3d1(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b3d1u, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0,3);
  return iVar1;
}

/* ref: __ismbbkpunct_l */
int F_00c7b3e9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b3e9u, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,2);
  return iVar1;
}

/* ref: __ismbbkpunct */
int F_00c7b402(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b402u, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0,2);
  return iVar1;
}

/* ref: __ismbbalnum_l */
int F_00c7b41a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b41au, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x107,1);
  return iVar1;
}

/* ref: __ismbbalnum */
int F_00c7b436(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b436u, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0x107,1);
  return iVar1;
}

/* ref: __ismbbalpha_l */
int F_00c7b451(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b451u, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x103,1);
  return iVar1;
}

/* ref: __ismbbalpha */
int F_00c7b46d(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b46du, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0x103,1);
  return iVar1;
}

/* ref: __ismbbgraph_l */
int F_00c7b488(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b488u, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x117,3);
  return iVar1;
}

/* ref: __ismbbgraph */
int F_00c7b4a4(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b4a4u, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0x117,3);
  return iVar1;
}

/* ref: __ismbbprint_l */
int F_00c7b4bf(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b4bfu, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x157,3);
  return iVar1;
}

/* ref: __ismbbprint */
int F_00c7b4db(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b4dbu, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0x157,3);
  return iVar1;
}

/* ref: __ismbbpunct_l */
int F_00c7b4f6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b4f6u, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x10,2);
  return iVar1;
}

/* ref: __ismbbpunct */
int F_00c7b50f(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b50fu, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0x10,2);
  return iVar1;
}

/* ref: __ismbblead_l */
int F_00c7b527(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b527u, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,4);
  return iVar1;
}

/* ref: __ismbblead */
int F_00c7b540(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b540u, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0,4);
  return iVar1;
}

/* ref: __ismbbtrail_l */
int F_00c7b558(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b558u, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,8);
  return iVar1;
}

/* ref: __ismbbtrail */
int F_00c7b571(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b571u, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b334((undefined *)0x0,_C,0,8);
  return iVar1;
}

/* ref: __ismbbkana_l */
int F_00c7b589(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b589u, gen_a0, gen_a1, 0u, 0u);
  uint _C = (uint)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) == 0) || (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 4))) != 0x3a4)) {
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = F_00c7b334(_Locale,_C,0,3);
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}

/* ref: __ismbbkana */
int F_00c7b5de(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b5deu, gen_a0, 0u, 0u, 0u);
  uint _C = (uint)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7b589(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __putwch_nolock */
ushort F_00c7b5f1(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b5f1u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  if (REFG(undefined4, 0x134c1c4) == (HANDLE)0xfffffffe) {
    F_00c808a7();
  }
  if (REFG(undefined4, 0x134c1c4) != (HANDLE)0xffffffff) {
    BVar1 = gen_imp_WriteConsoleW(REFG(undefined4, 0x134c1c4),&(*(wchar_t *)&gen_args[0]),1,&(*(DWORD *)(gen_frame + 0x8)),(LPVOID)0x0);
    if (BVar1 != 0) {
      return (*(wchar_t *)&gen_args[0]);
    }
  }
  return 0xffff;
}

/* ref: FUN_00c7b670 */
uint F_00c7b670(void)
{
  GEN_ENTER(0xc7b670u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(3);
  return uVar1;
}

/* ref: __mbsnbicmp_l */
int F_00c7b679(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7b679u, gen_a0, gen_a1, gen_a2, gen_a3);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  gen_size32 sVar1;
  uchar * puVar2;
  int iVar3;
  int * piVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte * pbVar8;
  byte * pbVar9;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x4)),_Locale);
  if (_MaxCount == 0) {
    if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar3 = 0;
  }
  else if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 8))) == 0) {
    iVar3 = F_00c4c591((char *)_Str1,(char *)_Str2,_MaxCount);
    if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else if (_Str1 == (uchar *)0x0) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else {
    pbVar9 = _Str2;
    if (_Str2 != (uchar *)0x0) {
      do {
        uVar7 = (uint)*_Str1;
        sVar1 = _MaxCount - 1;
        puVar2 = _Str1 + 1;
        (*(uint *)(gen_frame + 0x14)) = uVar7;
        if ((*((byte *)GEN_TOP((uVar7 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4))))) & 4) == 0) {
          if ((*((byte *)GEN_TOP((uVar7 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x1d))) & 0x10) != 0) {
            uVar7 = (uint)*((byte *)GEN_TOP((uVar7 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x11d)));
          }
          (*(uint *)(gen_frame + 0x14)) = uVar7;
LAB_00c7b7c8: ;
          uVar5 = (ushort)(*(uint *)(gen_frame + 0x14));
          _Str1 = puVar2;
LAB_00c7b7cc: ;
          uVar7 = (uint)*pbVar9;
          pbVar8 = pbVar9 + 1;
          (*(uint *)(gen_frame + 0x18)) = uVar7;
          if ((*((byte *)GEN_TOP((uVar7 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4))))) & 4) == 0) {
            if ((*((byte *)GEN_TOP((uVar7 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x1d))) & 0x10) != 0) {
              uVar7 = (uint)*((byte *)GEN_TOP((uVar7 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x11d)));
            }
            goto LAB_00c7b83c;
          }
          if (sVar1 == 0) {
LAB_00c7b7e2: ;
            _MaxCount = sVar1;
            (*(uint *)(gen_frame + 0x18)) = 0;
            pbVar9 = pbVar8;
            goto LAB_00c7b83f;
          }
          _MaxCount = _MaxCount - 2;
          sVar1 = _MaxCount;
          if (*pbVar8 == 0) goto LAB_00c7b7e2;
          uVar6 = CONCAT11(*pbVar9,*pbVar8);
          pbVar9 = pbVar9 + 2;
          (*(uint *)(gen_frame + 0x18)) = (uint)uVar6;
          if ((uVar6 < *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x10)))) ||
             (*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x12))) < uVar6)) {
            if ((*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x16))) <= uVar6) &&
               (uVar6 <= *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x18))))) {
              uVar6 = uVar6 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x1a)));
            }
          }
          else {
            uVar6 = uVar6 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x14)));
          }
        }
        else {
          if (sVar1 != 0) {
            if (*puVar2 == '\0') {
              (*(uint *)(gen_frame + 0x14)) = 0;
              goto LAB_00c7b7c8;
            }
            uVar5 = CONCAT11(*_Str1,*puVar2);
            _Str1 = _Str1 + 2;
            (*(uint *)(gen_frame + 0x14)) = (uint)uVar5;
            if ((uVar5 < *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x10)))) ||
               (*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x12))) < uVar5)) {
              if ((*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x16))) <= uVar5) &&
                 (uVar5 <= *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x18))))) {
                uVar5 = uVar5 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x1a)));
              }
            }
            else {
              uVar5 = uVar5 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 0x14)));
            }
            goto LAB_00c7b7cc;
          }
          uVar7 = (uint)*pbVar9;
          (*(uint *)(gen_frame + 0x14)) = 0;
          if ((*((byte *)GEN_TOP((uVar7 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4))))) & 4) != 0) {
LAB_00c7b856: ;
            if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
              *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
            }
            return 0;
          }
          uVar5 = 0;
          pbVar8 = pbVar9;
          _Str1 = puVar2;
LAB_00c7b83c: ;
          (*(uint *)(gen_frame + 0x18)) = uVar7;
          pbVar9 = pbVar8;
          _MaxCount = sVar1;
LAB_00c7b83f: ;
          uVar6 = (ushort)(*(uint *)(gen_frame + 0x18));
        }
        if (uVar6 != uVar5) {
          iVar3 = (-(uint)(uVar6 < uVar5) & 2) - 1;
          if (((byte *)(gen_frame + 0x4))[0xc] == 0) {
            return iVar3;
          }
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
          return iVar3;
        }
        if ((uVar5 == 0) || (_MaxCount == 0)) goto LAB_00c7b856;
      } while( true );
    }
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  return iVar3;
}

/* ref: __mbsnbicmp */
int F_00c7b87d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7b87du, gen_a0, gen_a1, gen_a2, 0u);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  int iVar1;
  
  iVar1 = F_00c7b679(_Str1,_Str2,_MaxCount,(undefined *)0x0);
  return iVar1;
}

/* ref: __mbsnbcmp_l */
int F_00c7b897(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7b897u, gen_a0, gen_a1, gen_a2, gen_a3);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  gen_size32 sVar1;
  int iVar2;
  int * piVar3;
  ushort uVar4;
  uint uVar5;
  byte * pbVar6;
  byte * pbVar7;
  byte * pbVar8;
  byte * pbVar9;
  
  if (_MaxCount == 0) {
    return 0;
  }
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 8))) == 0) {
    iVar2 = F_00c4b813((char *)_Str1,(char *)_Str2,_MaxCount);
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else if (_Str1 == (uchar *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    pbVar6 = _Str1;
    pbVar8 = _Str2;
    if (_Str2 != (uchar *)0x0) {
      do {
        uVar5 = (uint)*pbVar6;
        sVar1 = _MaxCount - 1;
        pbVar7 = pbVar6 + 1;
        if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) & 4) == 0) {
LAB_00c7b98a: ;
          uVar4 = (ushort)uVar5;
          uVar5 = (uint)*pbVar8;
          pbVar9 = pbVar8 + 1;
          if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) & 4) != 0) {
            if (sVar1 != 0) {
              sVar1 = _MaxCount - 2;
              if (*pbVar9 != 0) {
                uVar5 = (uint)CONCAT11(*pbVar8,*pbVar9);
                pbVar9 = pbVar8 + 2;
                goto LAB_00c7b9b8;
              }
            }
            _MaxCount = sVar1;
            uVar5 = 0;
            sVar1 = _MaxCount;
          }
        }
        else {
          if (sVar1 != 0) {
            if (*pbVar7 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (uint)CONCAT11(*pbVar6,*pbVar7);
              pbVar7 = pbVar6 + 2;
            }
            goto LAB_00c7b98a;
          }
          uVar5 = (uint)*pbVar8;
          uVar4 = 0;
          pbVar9 = pbVar8;
          if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) & 4) != 0) {
LAB_00c7b95f: ;
            if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
              *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
            }
            return 0;
          }
        }
LAB_00c7b9b8: ;
        _MaxCount = sVar1;
        if ((ushort)uVar5 != uVar4) {
          iVar2 = (-(uint)((ushort)uVar5 < uVar4) & 2) - 1;
          if (((byte *)(gen_frame + 0xc))[0xc] == 0) {
            return iVar2;
          }
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
          return iVar2;
        }
        if ((uVar4 == 0) || (pbVar6 = pbVar7, pbVar8 = pbVar9, _MaxCount == 0)) goto LAB_00c7b95f;
      } while( true );
    }
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

/* ref: __mbsnbcmp */
int F_00c7b9e3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7b9e3u, gen_a0, gen_a1, gen_a2, 0u);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  int iVar1;
  
  iVar1 = F_00c7b897(_Str1,_Str2,_MaxCount,(undefined *)0x0);
  return iVar1;
}

/* ref: __87except */
uint F_00c7b9fd(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7b9fdu, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined * this;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  this = (undefined *)(uint)*param_3;
  iVar1 = *param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (iVar1 == 1) {
LAB_00c7ba8c: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 8;
LAB_00c7ba96: ;
    bVar2 = F_00c6f018(this,(*(undefined4 *)(gen_frame + 0xc)),param_2 + 6,this);
    if ((int)CONCAT31(extraout_var,bVar2) == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        (*(undefined8 *)(gen_frame + 0x40)) = *(undefined8 *)(param_2 + 4);
        (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) & 0xffffffe3 | 3;
      }
      else {
        (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) & 0xfffffffe;
      }
      F_00c6efd2(((undefined1 *)(gen_frame + 0x10)),&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),param_1,param_2 + 2,param_2 + 6);
    }
  }
  else {
    if (iVar1 == 2) {
      (*(undefined4 *)(gen_frame + 0xc)) = 4;
      goto LAB_00c7ba96;
    }
    if (iVar1 == 3) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0x11;
      goto LAB_00c7ba96;
    }
    if (iVar1 == 4) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0x12;
      goto LAB_00c7ba96;
    }
    if (iVar1 == 5) goto LAB_00c7ba8c;
    if (iVar1 == 7) {
      *param_2 = 1;
    }
    else if (iVar1 == 8) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
      goto LAB_00c7ba96;
    }
  }
  F_00c6f59e((*(undefined * PTR32 *)(gen_frame + 0x8)),0xffff);
  if ((*param_2 != 8) && (REFG(int, 0x134c1bc) == 0)) {
    uVar3 = F_00c7db7d(param_2);
    if (uVar3 != 0) goto LAB_00c7bb29;
  }
  uVar3 = F_00c6f1fc(*param_2);
LAB_00c7bb29: ;
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar3;
}

/* ref: __ZeroTail */
uint F_00c7bb3c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7bb3cu, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar1 = *(uint *)(param_1 + iVar2 * 4) & ~(-1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
  }
  return 1;
}

/* ref: __IncMan */
uint F_00c7bb85(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7bb85u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar4 = 1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f);
  uVar2 = *(uint *)(param_1 + iVar3 * 4);
  uVar5 = 0;
  uVar1 = uVar2 + uVar4;
  if ((uVar1 < uVar2) || (uVar1 < uVar4)) {
    uVar5 = 1;
  }
  *(uint *)(param_1 + iVar3 * 4) = uVar1;
  while ((iVar3 = iVar3 + -1, -1 < iVar3 && (uVar5 != 0))) {
    uVar2 = *(uint *)(param_1 + iVar3 * 4);
    uVar1 = uVar2 + 1;
    uVar5 = 0;
    if ((uVar1 < uVar2) || (uVar1 == 0)) {
      uVar5 = 1;
    }
    *(uint *)(param_1 + iVar3 * 4) = uVar1;
  }
  return uVar5;
}

/* ref: __RoundMan */
uint F_00c7bbf2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7bbf2u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 * puVar9;
  uint local_8;
  
  local_8 = 0;
  iVar8 = param_2 + -1;
  iVar7 = (int)(((int)param_2 >> 0x1f & 0x1fU) + param_2) >> 5;
  bVar5 = 0x1f - ((byte)param_2 & 0x1f);
  if ((*(uint *)(param_1 + iVar7 * 4) & 1 << (bVar5 & 0x1f)) != 0) {
    uVar3 = *(uint *)(param_1 + iVar7 * 4) & ~(-1 << (bVar5 & 0x1f));
    iVar4 = iVar7;
    while (uVar3 == 0) {
      iVar4 = iVar4 + 1;
      if (2 < iVar4) goto LAB_00c7bcba;
      uVar3 = *(uint *)(param_1 + iVar4 * 4);
    }
    iVar4 = (int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5;
    param_2 = 0;
    uVar6 = 1 << (0x1f - ((byte)iVar8 & 0x1f) & 0x1f);
    uVar2 = *(uint *)(param_1 + iVar4 * 4);
    uVar3 = uVar2 + uVar6;
    if ((uVar3 < uVar2) || (uVar3 < uVar6)) {
      param_2 = 1;
    }
    *(uint *)(param_1 + iVar4 * 4) = uVar3;
    local_8 = param_2;
    while ((iVar4 = iVar4 + -1, -1 < iVar4 && (local_8 != 0))) {
      uVar2 = *(uint *)(param_1 + iVar4 * 4);
      uVar3 = uVar2 + 1;
      local_8 = 0;
      if ((uVar3 < uVar2) || (uVar3 == 0)) {
        local_8 = 1;
      }
      *(uint *)(param_1 + iVar4 * 4) = uVar3;
    }
  }
LAB_00c7bcba: ;
  puVar1 = (uint *)(param_1 + iVar7 * 4);
  *puVar1 = *puVar1 & -1 << (bVar5 & 0x1f);
  iVar7 = iVar7 + 1;
  if (iVar7 < 3) {
    puVar9 = (undefined4 *)(param_1 + iVar7 * 4);
    for (iVar8 = 3 - iVar7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  return local_8;
}

/* ref: __CopyMan */
unsigned int F_00c7bcde(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7bcdeu, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 3;
  puVar1 = param_2;
  do {
    *((undefined4 *)GEN_TOP(((param_1 - (int)param_2) + (int)puVar1))) = *puVar1;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00c7bcfd */
uint F_00c7bcfd(unsigned int gen_a0)
{
  GEN_ENTER(0xc7bcfdu, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}

/* ref: __IsZeroMan */
uint F_00c7bd0e(unsigned int gen_a0)
{
  GEN_ENTER(0xc7bd0eu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}

/* ref: __ShrMan */
unsigned int F_00c7bd2d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7bd2du, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 * puVar5;
  uint local_c;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar3 = (byte)param_2 & 0x1f;
  local_c = 0;
  param_2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + param_2 * 4);
    *(uint *)(param_1 + param_2 * 4) = *(uint *)(param_1 + param_2 * 4) >> bVar3 | local_c;
    local_c = (uVar1 & ~(-1 << bVar3)) << (0x20 - bVar3 & 0x1f);
    param_2 = param_2 + 1;
  } while (param_2 < 3);
  iVar4 = 2;
  puVar5 = ((undefined4 *)GEN_TOP((param_1 + (2 - iVar2) * 4)));
  do {
    if (iVar4 < iVar2) {
      *(undefined4 *)(param_1 + iVar4 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + iVar4 * 4) = *puVar5;
    }
    puVar5 = puVar5 + -1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return 0;
}

/* ref: __ld12cvt */
uint F_00c7bdc5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7bdc5u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint * puVar5;
  uint uVar6;
  byte bVar7;
  uint * puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  ((uint *)(gen_frame + 0x1c))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = param_1[5];
  uVar6 = *(uint *)(param_1 + 3);
  ((uint *)(gen_frame + 0x1c))[0] = uVar6;
  uVar13 = *(uint *)(param_1 + 1);
  uVar2 = *param_1;
  uVar9 = uVar1 & 0x7fff;
  iVar10 = uVar9 - 0x3fff;
  ((uint *)(gen_frame + 0x1c))[1] = uVar13;
  ((uint *)(gen_frame + 0x1c))[2] = (uint)uVar2 << 0x10;
  if (iVar10 == -0x3fff) {
    iVar12 = 0;
    iVar10 = 0;
    do {
      if (((uint *)(gen_frame + 0x1c))[(int)(iVar10)] != 0) {
        ((uint *)(gen_frame + 0x1c))[0] = 0;
        ((uint *)(gen_frame + 0x1c))[1] = 0;
        ((uint *)(gen_frame + 0x1c))[2] = 0;
        goto LAB_00c7c176;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
LAB_00c7c2ca: ;
    uVar6 = 0;
  }
  else {
    bVar3 = false;
    iVar12 = param_3[2];
    iVar14 = iVar12 + -1;
    iVar4 = (int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5;
    puVar5 = ((uint *)(gen_frame + 0x1c)) + iVar4;
    bVar7 = 0x1f - ((byte)iVar12 & 0x1f);
    if ((*puVar5 & 1 << (bVar7 & 0x1f)) != 0) {
      uVar11 = ((uint *)(gen_frame + 0x1c))[(int)(iVar4)] & ~(-1 << (bVar7 & 0x1f));
      iVar12 = iVar4;
      while( true ) {
        if (uVar11 != 0) {
          iVar12 = (int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar14 & 0x1f) & 0x1f);
          puVar8 = ((uint *)(gen_frame + 0x1c)) + iVar12;
          (*(uint *)(gen_frame + 0x8)) = *puVar8 + uVar11;
          if ((*(uint *)(gen_frame + 0x8)) < *puVar8) goto LAB_00c7bf09;
          bVar15 = (*(uint *)(gen_frame + 0x8)) < uVar11;
          do {
            bVar3 = false;
            if (!bVar15) goto LAB_00c7bf10;
LAB_00c7bf09: ;
            do {
              bVar3 = true;
LAB_00c7bf10: ;
              iVar12 = iVar12 + -1;
              *puVar8 = (*(uint *)(gen_frame + 0x8));
              if ((iVar12 < 0) || (!bVar3)) goto LAB_00c7bf1e;
              puVar8 = ((uint *)(gen_frame + 0x1c)) + iVar12;
              (*(uint *)(gen_frame + 0x8)) = *puVar8 + 1;
            } while ((*(uint *)(gen_frame + 0x8)) < *puVar8);
            bVar15 = (*(uint *)(gen_frame + 0x8)) == 0;
          } while( true );
        }
        iVar12 = iVar12 + 1;
        if (2 < iVar12) break;
        uVar11 = ((uint *)(gen_frame + 0x1c))[(int)(iVar12)];
      }
    }
LAB_00c7bf1e: ;
    *puVar5 = *puVar5 & -1 << (bVar7 & 0x1f);
    iVar4 = iVar4 + 1;
    if (iVar4 < 3) {
      puVar5 = ((uint *)(gen_frame + 0x1c)) + iVar4;
      for (iVar12 = 3 - iVar4; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
    (*(int *)(gen_frame + 0xc)) = iVar10;
    if (bVar3) {
      (*(int *)(gen_frame + 0xc)) = uVar9 - 0x3ffe;
    }
    iVar12 = param_3[1];
    if ((*(int *)(gen_frame + 0xc)) < iVar12 - param_3[2]) {
      ((uint *)(gen_frame + 0x1c))[0] = 0;
      ((uint *)(gen_frame + 0x1c))[1] = 0;
      ((uint *)(gen_frame + 0x1c))[2] = 0;
    }
    else {
      if (iVar12 < (*(int *)(gen_frame + 0xc))) {
        iVar10 = param_3[3];
        if (*param_3 <= (*(int *)(gen_frame + 0xc))) {
          ((uint *)(gen_frame + 0x1c))[0] = 0;
          ((uint *)(gen_frame + 0x1c))[1] = 0;
          ((uint *)(gen_frame + 0x1c))[2] = 0;
          ((uint *)(gen_frame + 0x1c))[0] = 0x80000000;
          iVar12 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
          bVar7 = (byte)iVar10 & 0x1f;
          (*(uint *)(gen_frame + 0x4)) = 0;
          (*(int *)(gen_frame + 0xc)) = 0;
          do {
            uVar6 = ((uint *)(gen_frame + 0x1c))[(int)((*(int *)(gen_frame + 0xc)))];
            ((uint *)(gen_frame + 0x1c))[(int)((*(int *)(gen_frame + 0xc)))] = uVar6 >> bVar7 | (*(uint *)(gen_frame + 0x4));
            (*(uint *)(gen_frame + 0x4)) = (uVar6 & ~(-1 << bVar7)) << (0x20 - bVar7 & 0x1f);
            (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
          } while ((*(int *)(gen_frame + 0xc)) < 3);
          iVar10 = 2;
          puVar5 = ((uint *)(gen_frame + 0x1c)) + (2 - iVar12);
          do {
            if (iVar10 < iVar12) {
              ((uint *)(gen_frame + 0x1c))[(int)(iVar10)] = 0;
            }
            else {
              ((uint *)(gen_frame + 0x1c))[(int)(iVar10)] = *puVar5;
            }
            puVar5 = puVar5 + -1;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
          iVar12 = param_3[5] + *param_3;
          uVar6 = 1;
          goto LAB_00c7c2cc;
        }
        iVar12 = param_3[5] + (*(int *)(gen_frame + 0xc));
        ((uint *)(gen_frame + 0x1c))[0] = ((uint *)(gen_frame + 0x1c))[0] & 0x7fffffff;
        iVar4 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
        bVar7 = (byte)iVar10 & 0x1f;
        (*(uint *)(gen_frame + 0x4)) = 0;
        (*(int *)(gen_frame + 0xc)) = 0;
        do {
          uVar6 = ((uint *)(gen_frame + 0x1c))[(int)((*(int *)(gen_frame + 0xc)))];
          ((uint *)(gen_frame + 0x1c))[(int)((*(int *)(gen_frame + 0xc)))] = uVar6 >> bVar7 | (*(uint *)(gen_frame + 0x4));
          (*(uint *)(gen_frame + 0x4)) = (uVar6 & ~(-1 << bVar7)) << (0x20 - bVar7 & 0x1f);
          (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        } while ((*(int *)(gen_frame + 0xc)) < 3);
        iVar10 = 2;
        puVar5 = ((uint *)(gen_frame + 0x1c)) + (2 - iVar4);
        do {
          if (iVar10 < iVar4) {
            ((uint *)(gen_frame + 0x1c))[(int)(iVar10)] = 0;
          }
          else {
            ((uint *)(gen_frame + 0x1c))[(int)(iVar10)] = *puVar5;
          }
          puVar5 = puVar5 + -1;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
        goto LAB_00c7c2ca;
      }
      iVar12 = iVar12 - iVar10;
      ((uint *)(gen_frame + 0x1c))[0] = uVar6;
      ((uint *)(gen_frame + 0x1c))[1] = uVar13;
      ((uint *)(gen_frame + 0x1c))[2] = (uint)uVar2 << 0x10;
      iVar10 = (int)((iVar12 >> 0x1f & 0x1fU) + iVar12) >> 5;
      bVar7 = (byte)iVar12 & 0x1f;
      (*(uint *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0xc)) = 0;
      do {
        uVar6 = ((uint *)(gen_frame + 0x1c))[(int)((*(int *)(gen_frame + 0xc)))];
        ((uint *)(gen_frame + 0x1c))[(int)((*(int *)(gen_frame + 0xc)))] = uVar6 >> bVar7 | (*(uint *)(gen_frame + 0x4));
        (*(uint *)(gen_frame + 0x4)) = (uVar6 & ~(-1 << bVar7)) << (0x20 - bVar7 & 0x1f);
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      } while ((*(int *)(gen_frame + 0xc)) < 3);
      iVar12 = 2;
      puVar5 = ((uint *)(gen_frame + 0x1c)) + (2 - iVar10);
      do {
        if (iVar12 < iVar10) {
          ((uint *)(gen_frame + 0x1c))[(int)(iVar12)] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x1c))[(int)(iVar12)] = *puVar5;
        }
        puVar5 = puVar5 + -1;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
      iVar10 = param_3[2];
      iVar4 = iVar10 + -1;
      iVar12 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
      bVar7 = 0x1f - ((byte)iVar10 & 0x1f);
      if ((((uint *)(gen_frame + 0x1c))[(int)(iVar12)] & 1 << (bVar7 & 0x1f)) != 0) {
        uVar6 = ((uint *)(gen_frame + 0x1c))[(int)(iVar12)] & ~(-1 << (bVar7 & 0x1f));
        iVar10 = iVar12;
        while (uVar6 == 0) {
          iVar10 = iVar10 + 1;
          if (2 < iVar10) goto LAB_00c7c0c7;
          uVar6 = ((uint *)(gen_frame + 0x1c))[(int)(iVar10)];
        }
        iVar10 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
        bVar3 = false;
        uVar9 = 1 << (0x1f - ((byte)iVar4 & 0x1f) & 0x1f);
        uVar13 = ((uint *)(gen_frame + 0x1c))[(int)(iVar10)];
        uVar6 = uVar13 + uVar9;
        if ((uVar6 < uVar13) || (uVar6 < uVar9)) {
          bVar3 = true;
        }
        ((uint *)(gen_frame + 0x1c))[(int)(iVar10)] = uVar6;
        while ((iVar10 = iVar10 + -1, -1 < iVar10 && (bVar3))) {
          uVar13 = ((uint *)(gen_frame + 0x1c))[(int)(iVar10)];
          uVar6 = uVar13 + 1;
          bVar3 = false;
          if ((uVar6 < uVar13) || (uVar6 == 0)) {
            bVar3 = true;
          }
          ((uint *)(gen_frame + 0x1c))[(int)(iVar10)] = uVar6;
        }
      }
LAB_00c7c0c7: ;
      ((uint *)(gen_frame + 0x1c))[(int)(iVar12)] = ((uint *)(gen_frame + 0x1c))[(int)(iVar12)] & -1 << (bVar7 & 0x1f);
      iVar12 = iVar12 + 1;
      if (iVar12 < 3) {
        puVar5 = ((uint *)(gen_frame + 0x1c)) + iVar12;
        for (iVar10 = 3 - iVar12; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      iVar10 = param_3[3] + 1;
      iVar10 = (int)((iVar10 >> 0x1f & 0x1fU) + iVar10) >> 5;
      bVar7 = (char)param_3[3] + 1U & 0x1f;
      (*(uint *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0xc)) = 0;
      do {
        uVar6 = ((uint *)(gen_frame + 0x1c))[(int)((*(int *)(gen_frame + 0xc)))];
        ((uint *)(gen_frame + 0x1c))[(int)((*(int *)(gen_frame + 0xc)))] = uVar6 >> bVar7 | (*(uint *)(gen_frame + 0x4));
        (*(uint *)(gen_frame + 0x4)) = (uVar6 & ~(-1 << bVar7)) << (0x20 - bVar7 & 0x1f);
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      } while ((*(int *)(gen_frame + 0xc)) < 3);
      iVar12 = 2;
      puVar5 = ((uint *)(gen_frame + 0x1c)) + (2 - iVar10);
      do {
        if (iVar12 < iVar10) {
          ((uint *)(gen_frame + 0x1c))[(int)(iVar12)] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x1c))[(int)(iVar12)] = *puVar5;
        }
        puVar5 = puVar5 + -1;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
LAB_00c7c176: ;
    iVar12 = 0;
    uVar6 = 2;
  }
LAB_00c7c2cc: ;
  uVar13 = iVar12 << (0x1fU - (char)param_3[3] & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000
           | ((uint *)(gen_frame + 0x1c))[0];
  if (param_3[4] == 0x40) {
    param_2[1] = uVar13;
    *param_2 = ((uint *)(gen_frame + 0x1c))[1];
  }
  else if (param_3[4] == 0x20) {
    *param_2 = uVar13;
  }
  F_00c47745(((uint *)(gen_frame + 0x1c))[3] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar6;
}

/* ref: __ld12tod */
undefined4 F_00c7c314(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7c314u, gen_a0, gen_a1, 0u, 0u);
  undefined * _Ifp = (undefined *)(uintptr_t)gen_a0;
  undefined * _D = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 IVar6;
  int iVar7;
  byte bVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  
  ((uint *)(gen_frame + 0x1c))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = *(ushort *)(((uchar *)((char *)(_Ifp))) + 10);
  uVar15 = *(uint *)(((uchar *)((char *)(_Ifp))) + 6);
  ((uint *)(gen_frame + 0x1c))[0] = uVar15;
  uVar2 = *(undefined4 *)(((uchar *)((char *)(_Ifp))) + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  iVar5 = (uint)*(ushort *)((uchar *)((char *)(_Ifp))) << 0x10;
  ((uint *)(gen_frame + 0x1c))[1] = uVar2;
  ((uint *)(gen_frame + 0x1c))[2] = iVar5;
  bVar3 = (byte)REFG(int, 0x134bedc);
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar5 = 0;
    do {
      if (((uint *)(gen_frame + 0x1c))[(int)(iVar5)] != 0) {
        ((uint *)(gen_frame + 0x1c))[0] = 0;
        ((uint *)(gen_frame + 0x1c))[1] = 0;
        ((uint *)(gen_frame + 0x1c))[2] = 0;
        IVar6 = (2);
        goto LAB_00c7c818;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    IVar6 = (0);
  }
  else {
    bVar4 = false;
    iVar16 = REFG(int, 0x134bed8) + -1;
    iVar14 = (int)(REFG(int, 0x134bed8) + (REFG(int, 0x134bed8) >> 0x1f & 0x1fU)) >> 5;
    puVar10 = ((uint *)(gen_frame + 0x1c)) + iVar14;
    bVar8 = 0x1f - ((byte)REFG(int, 0x134bed8) & 0x1f);
    if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
      uVar11 = ((uint *)(gen_frame + 0x1c))[(int)(iVar14)] & ~(-1 << (bVar8 & 0x1f));
      iVar7 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar7 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar16 & 0x1f) & 0x1f);
          puVar9 = ((uint *)(gen_frame + 0x1c)) + iVar7;
          (*(uint *)(gen_frame + 0xc)) = *puVar9 + uVar11;
          if ((*(uint *)(gen_frame + 0xc)) < *puVar9) goto LAB_00c7c458;
          bVar17 = (*(uint *)(gen_frame + 0xc)) < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_00c7c45f;
LAB_00c7c458: ;
            do {
              bVar4 = true;
LAB_00c7c45f: ;
              iVar7 = iVar7 + -1;
              *puVar9 = (*(uint *)(gen_frame + 0xc));
              if ((iVar7 < 0) || (!bVar4)) goto LAB_00c7c46d;
              puVar9 = ((uint *)(gen_frame + 0x1c)) + iVar7;
              (*(uint *)(gen_frame + 0xc)) = *puVar9 + 1;
            } while ((*(uint *)(gen_frame + 0xc)) < *puVar9);
            bVar17 = (*(uint *)(gen_frame + 0xc)) == 0;
          } while( true );
        }
        iVar7 = iVar7 + 1;
        if (2 < iVar7) break;
        uVar11 = ((uint *)(gen_frame + 0x1c))[(int)(iVar7)];
      }
    }
LAB_00c7c46d: ;
    *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = ((uint *)(gen_frame + 0x1c)) + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < REFG(int, 0x134bed4) - REFG(int, 0x134bed8)) {
      ((uint *)(gen_frame + 0x1c))[0] = 0;
      ((uint *)(gen_frame + 0x1c))[1] = 0;
      ((uint *)(gen_frame + 0x1c))[2] = 0;
    }
    else {
      if (REFG(int, 0x134bed4) < iVar14) {
        if (iVar14 < REFG(int, 0x134bed0)) {
          iVar14 = iVar14 + REFG(int, 0x134bee4);
          ((uint *)(gen_frame + 0x1c))[0] = ((uint *)(gen_frame + 0x1c))[0] & 0x7fffffff;
          iVar5 = (int)(REFG(int, 0x134bedc) + (REFG(int, 0x134bedc) >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          (*(uint *)(gen_frame + 0x4)) = 0;
          (*(uint *)(gen_frame + 0xc)) = 0;
          do {
            uVar15 = ((uint *)(gen_frame + 0x1c))[(int)((*(uint *)(gen_frame + 0xc)))];
            ((uint *)(gen_frame + 0x1c))[(int)((*(uint *)(gen_frame + 0xc)))] = uVar15 >> bVar8 | (*(uint *)(gen_frame + 0x4));
            (*(uint *)(gen_frame + 0x4)) = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
          } while ((int)(*(uint *)(gen_frame + 0xc)) < 3);
          iVar13 = 2;
          puVar10 = ((uint *)(gen_frame + 0x1c)) + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              ((uint *)(gen_frame + 0x1c))[(int)(iVar13)] = 0;
            }
            else {
              ((uint *)(gen_frame + 0x1c))[(int)(iVar13)] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
          IVar6 = (0);
        }
        else {
          ((uint *)(gen_frame + 0x1c))[0] = 0;
          ((uint *)(gen_frame + 0x1c))[1] = 0;
          ((uint *)(gen_frame + 0x1c))[2] = 0;
          ((uint *)(gen_frame + 0x1c))[0] = 0x80000000;
          iVar5 = (int)(REFG(int, 0x134bedc) + (REFG(int, 0x134bedc) >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          (*(uint *)(gen_frame + 0x4)) = 0;
          (*(uint *)(gen_frame + 0xc)) = 0;
          do {
            uVar15 = ((uint *)(gen_frame + 0x1c))[(int)((*(uint *)(gen_frame + 0xc)))];
            ((uint *)(gen_frame + 0x1c))[(int)((*(uint *)(gen_frame + 0xc)))] = uVar15 >> bVar8 | (*(uint *)(gen_frame + 0x4));
            (*(uint *)(gen_frame + 0x4)) = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
          } while ((int)(*(uint *)(gen_frame + 0xc)) < 3);
          iVar13 = 2;
          puVar10 = ((uint *)(gen_frame + 0x1c)) + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              ((uint *)(gen_frame + 0x1c))[(int)(iVar13)] = 0;
            }
            else {
              ((uint *)(gen_frame + 0x1c))[(int)(iVar13)] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
          iVar14 = REFG(int, 0x134bee4) + REFG(int, 0x134bed0);
          IVar6 = (1);
        }
        goto LAB_00c7c818;
      }
      iVar13 = REFG(int, 0x134bed4) - iVar13;
      ((uint *)(gen_frame + 0x1c))[0] = uVar15;
      ((uint *)(gen_frame + 0x1c))[1] = uVar2;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      ((uint *)(gen_frame + 0x1c))[2] = iVar5;
      (*(uint *)(gen_frame + 0x4)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0;
      do {
        uVar15 = ((uint *)(gen_frame + 0x1c))[(int)((*(uint *)(gen_frame + 0xc)))];
        ((uint *)(gen_frame + 0x1c))[(int)((*(uint *)(gen_frame + 0xc)))] = uVar15 >> bVar8 | (*(uint *)(gen_frame + 0x4));
        (*(uint *)(gen_frame + 0x4)) = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0xc)) < 3);
      iVar5 = 2;
      puVar10 = ((uint *)(gen_frame + 0x1c)) + (2 - iVar14);
      do {
        if (iVar5 < iVar14) {
          ((uint *)(gen_frame + 0x1c))[(int)(iVar5)] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x1c))[(int)(iVar5)] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      iVar13 = REFG(int, 0x134bed8) + -1;
      iVar5 = (int)(REFG(int, 0x134bed8) + (REFG(int, 0x134bed8) >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)REFG(int, 0x134bed8) & 0x1f);
      puVar10 = ((uint *)(gen_frame + 0x1c)) + iVar5;
      if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
        uVar15 = ((uint *)(gen_frame + 0x1c))[(int)(iVar5)] & ~(-1 << (bVar8 & 0x1f));
        iVar14 = iVar5;
        while (uVar15 == 0) {
          iVar14 = iVar14 + 1;
          if (2 < iVar14) goto LAB_00c7c60c;
          uVar15 = ((uint *)(gen_frame + 0x1c))[(int)(iVar14)];
        }
        iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar11 = 1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f);
        uVar12 = ((uint *)(gen_frame + 0x1c))[(int)(iVar14)];
        uVar15 = uVar12 + uVar11;
        if ((uVar15 < uVar12) || (uVar15 < uVar11)) {
          bVar4 = true;
        }
        ((uint *)(gen_frame + 0x1c))[(int)(iVar14)] = uVar15;
        while ((iVar14 = iVar14 + -1, -1 < iVar14 && (bVar4))) {
          uVar12 = ((uint *)(gen_frame + 0x1c))[(int)(iVar14)];
          uVar15 = uVar12 + 1;
          bVar4 = false;
          if ((uVar15 < uVar12) || (uVar15 == 0)) {
            bVar4 = true;
          }
          ((uint *)(gen_frame + 0x1c))[(int)(iVar14)] = uVar15;
        }
      }
LAB_00c7c60c: ;
      *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
      iVar5 = iVar5 + 1;
      if (iVar5 < 3) {
        puVar10 = ((uint *)(gen_frame + 0x1c)) + iVar5;
        for (iVar13 = 3 - iVar5; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar5 = (int)(REFG(int, 0x134bedc) + 1 + (REFG(int, 0x134bedc) + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      (*(uint *)(gen_frame + 0x4)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0;
      do {
        uVar15 = ((uint *)(gen_frame + 0x1c))[(int)((*(uint *)(gen_frame + 0xc)))];
        ((uint *)(gen_frame + 0x1c))[(int)((*(uint *)(gen_frame + 0xc)))] = uVar15 >> bVar8 | (*(uint *)(gen_frame + 0x4));
        (*(uint *)(gen_frame + 0x4)) = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0xc)) < 3);
      iVar13 = 2;
      puVar10 = ((uint *)(gen_frame + 0x1c)) + (2 - iVar5);
      do {
        if (iVar13 < iVar5) {
          ((uint *)(gen_frame + 0x1c))[(int)(iVar13)] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x1c))[(int)(iVar13)] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    iVar14 = 0;
    IVar6 = (2);
  }
LAB_00c7c818: ;
  uVar15 = iVar14 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
           ((uint *)(gen_frame + 0x1c))[0];
  if (REFG(int, 0x134bee0) == 0x40) {
    *(uint *)((int)&(*(double *)((char *)(_D))) + 4) = uVar15;
    *(uint *)&(*(double *)((char *)(_D))) = ((uint *)(gen_frame + 0x1c))[1];
  }
  else if (REFG(int, 0x134bee0) == 0x20) {
    *(uint *)&(*(double *)((char *)(_D))) = uVar15;
  }
  F_00c47745(((uint *)(gen_frame + 0x1c))[3] ^ (uint)(uint)(gen_frame + 0x2c));
  return IVar6;
}

/* ref: __ld12tof */
undefined4 F_00c7c865(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7c865u, gen_a0, gen_a1, 0u, 0u);
  undefined * _Ifp = (undefined *)(uintptr_t)gen_a0;
  undefined * _F = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 IVar6;
  int iVar7;
  byte bVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  bool bVar17;
  
  ((uint *)(gen_frame + 0x24))[1] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = *(ushort *)(((uchar *)((char *)(_Ifp))) + 10);
  uVar2 = *(uint *)(((uchar *)((char *)(_Ifp))) + 6);
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  fVar15 = *(float *)(((uchar *)((char *)(_Ifp))) + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  uVar5 = (uint)*(ushort *)((uchar *)((char *)(_Ifp))) << 0x10;
  (*(float *)(gen_frame + 0x20)) = fVar15;
  ((uint *)(gen_frame + 0x24))[0] = uVar5;
  bVar3 = (byte)REFG(int, 0x134bef4);
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar13 = 0;
    do {
      if ((&(*(uint *)(gen_frame + 0x1c)))[iVar13] != 0) {
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(float *)(gen_frame + 0x20)) = 0.0;
        ((uint *)(gen_frame + 0x24))[0] = 0;
        IVar6 = (2);
        goto LAB_00c7cd69;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    IVar6 = (0);
  }
  else {
    bVar4 = false;
    iVar16 = REFG(int, 0x134bef0) + -1;
    iVar14 = (int)(REFG(int, 0x134bef0) + (REFG(int, 0x134bef0) >> 0x1f & 0x1fU)) >> 5;
    puVar10 = &(*(uint *)(gen_frame + 0x1c)) + iVar14;
    bVar8 = 0x1f - ((byte)REFG(int, 0x134bef0) & 0x1f);
    if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
      uVar11 = (&(*(uint *)(gen_frame + 0x1c)))[iVar14] & ~(-1 << (bVar8 & 0x1f));
      iVar7 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar7 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar16 & 0x1f) & 0x1f);
          puVar9 = &(*(uint *)(gen_frame + 0x1c)) + iVar7;
          (*(uint *)(gen_frame + 0xc)) = *puVar9 + uVar11;
          if ((*(uint *)(gen_frame + 0xc)) < *puVar9) goto LAB_00c7c9a9;
          bVar17 = (*(uint *)(gen_frame + 0xc)) < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_00c7c9b0;
LAB_00c7c9a9: ;
            do {
              bVar4 = true;
LAB_00c7c9b0: ;
              iVar7 = iVar7 + -1;
              *puVar9 = (*(uint *)(gen_frame + 0xc));
              if ((iVar7 < 0) || (!bVar4)) goto LAB_00c7c9be;
              puVar9 = &(*(uint *)(gen_frame + 0x1c)) + iVar7;
              (*(uint *)(gen_frame + 0xc)) = *puVar9 + 1;
            } while ((*(uint *)(gen_frame + 0xc)) < *puVar9);
            bVar17 = (*(uint *)(gen_frame + 0xc)) == 0;
          } while( true );
        }
        iVar7 = iVar7 + 1;
        if (2 < iVar7) break;
        uVar11 = (&(*(uint *)(gen_frame + 0x1c)))[iVar7];
      }
    }
LAB_00c7c9be: ;
    *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = &(*(uint *)(gen_frame + 0x1c)) + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < REFG(int, 0x134beec) - REFG(int, 0x134bef0)) {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(float *)(gen_frame + 0x20)) = 0.0;
      ((uint *)(gen_frame + 0x24))[0] = 0;
    }
    else {
      if (REFG(int, 0x134beec) < iVar14) {
        if (iVar14 < REFG(int, 0x134bee8)) {
          iVar14 = iVar14 + REFG(int, 0x134befc);
          (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) & 0x7fffffff;
          iVar13 = (int)(REFG(int, 0x134bef4) + (REFG(int, 0x134bef4) >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          (*(uint *)(gen_frame + 0x4)) = 0;
          (*(uint *)(gen_frame + 0xc)) = 0;
          do {
            uVar2 = (&(*(uint *)(gen_frame + 0x1c)))[(*(uint *)(gen_frame + 0xc))];
            (&(*(uint *)(gen_frame + 0x1c)))[(*(uint *)(gen_frame + 0xc))] = uVar2 >> bVar8 | (*(uint *)(gen_frame + 0x4));
            (*(uint *)(gen_frame + 0x4)) = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
          } while ((int)(*(uint *)(gen_frame + 0xc)) < 3);
          iVar16 = 2;
          puVar10 = ((uint *)(gen_frame + 0x24)) - iVar13;
          do {
            if (iVar16 < iVar13) {
              (&(*(uint *)(gen_frame + 0x1c)))[iVar16] = 0;
            }
            else {
              (&(*(uint *)(gen_frame + 0x1c)))[iVar16] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar16 = iVar16 + -1;
          } while (-1 < iVar16);
          IVar6 = (0);
        }
        else {
          (*(uint *)(gen_frame + 0x1c)) = 0;
          (*(float *)(gen_frame + 0x20)) = 0.0;
          ((uint *)(gen_frame + 0x24))[0] = 0;
          (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
          iVar13 = (int)(REFG(int, 0x134bef4) + (REFG(int, 0x134bef4) >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          (*(uint *)(gen_frame + 0x4)) = 0;
          (*(uint *)(gen_frame + 0xc)) = 0;
          do {
            uVar2 = (&(*(uint *)(gen_frame + 0x1c)))[(*(uint *)(gen_frame + 0xc))];
            (&(*(uint *)(gen_frame + 0x1c)))[(*(uint *)(gen_frame + 0xc))] = uVar2 >> bVar8 | (*(uint *)(gen_frame + 0x4));
            (*(uint *)(gen_frame + 0x4)) = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
          } while ((int)(*(uint *)(gen_frame + 0xc)) < 3);
          iVar14 = 2;
          puVar10 = ((uint *)(gen_frame + 0x24)) - iVar13;
          do {
            if (iVar14 < iVar13) {
              (&(*(uint *)(gen_frame + 0x1c)))[iVar14] = 0;
            }
            else {
              (&(*(uint *)(gen_frame + 0x1c)))[iVar14] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
          iVar14 = REFG(int, 0x134befc) + REFG(int, 0x134bee8);
          IVar6 = (1);
        }
        goto LAB_00c7cd69;
      }
      iVar13 = REFG(int, 0x134beec) - iVar13;
      (*(uint *)(gen_frame + 0x1c)) = uVar2;
      (*(float *)(gen_frame + 0x20)) = fVar15;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      ((uint *)(gen_frame + 0x24))[0] = uVar5;
      (*(uint *)(gen_frame + 0x4)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0;
      do {
        uVar2 = (&(*(uint *)(gen_frame + 0x1c)))[(*(uint *)(gen_frame + 0xc))];
        (&(*(uint *)(gen_frame + 0x1c)))[(*(uint *)(gen_frame + 0xc))] = uVar2 >> bVar8 | (*(uint *)(gen_frame + 0x4));
        (*(uint *)(gen_frame + 0x4)) = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0xc)) < 3);
      iVar13 = 2;
      puVar10 = ((uint *)(gen_frame + 0x24)) - iVar14;
      do {
        if (iVar13 < iVar14) {
          (&(*(uint *)(gen_frame + 0x1c)))[iVar13] = 0;
        }
        else {
          (&(*(uint *)(gen_frame + 0x1c)))[iVar13] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
      iVar14 = REFG(int, 0x134bef0) + -1;
      iVar13 = (int)(REFG(int, 0x134bef0) + (REFG(int, 0x134bef0) >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)REFG(int, 0x134bef0) & 0x1f);
      puVar10 = &(*(uint *)(gen_frame + 0x1c)) + iVar13;
      if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
        uVar2 = (&(*(uint *)(gen_frame + 0x1c)))[iVar13] & ~(-1 << (bVar8 & 0x1f));
        iVar16 = iVar13;
        while (uVar2 == 0) {
          iVar16 = iVar16 + 1;
          if (2 < iVar16) goto LAB_00c7cb5d;
          uVar2 = (&(*(uint *)(gen_frame + 0x1c)))[iVar16];
        }
        iVar16 = (int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar12 = 1 << (0x1f - ((byte)iVar14 & 0x1f) & 0x1f);
        uVar5 = (&(*(uint *)(gen_frame + 0x1c)))[iVar16];
        uVar2 = uVar5 + uVar12;
        if ((uVar2 < uVar5) || (uVar2 < uVar12)) {
          bVar4 = true;
        }
        (&(*(uint *)(gen_frame + 0x1c)))[iVar16] = uVar2;
        while ((iVar16 = iVar16 + -1, -1 < iVar16 && (bVar4))) {
          uVar5 = (&(*(uint *)(gen_frame + 0x1c)))[iVar16];
          uVar2 = uVar5 + 1;
          bVar4 = false;
          if ((uVar2 < uVar5) || (uVar2 == 0)) {
            bVar4 = true;
          }
          (&(*(uint *)(gen_frame + 0x1c)))[iVar16] = uVar2;
        }
      }
LAB_00c7cb5d: ;
      *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
      iVar13 = iVar13 + 1;
      if (iVar13 < 3) {
        puVar10 = &(*(uint *)(gen_frame + 0x1c)) + iVar13;
        for (iVar14 = 3 - iVar13; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar13 = (int)(REFG(int, 0x134bef4) + 1 + (REFG(int, 0x134bef4) + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      (*(uint *)(gen_frame + 0x4)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0;
      do {
        uVar2 = (&(*(uint *)(gen_frame + 0x1c)))[(*(uint *)(gen_frame + 0xc))];
        (&(*(uint *)(gen_frame + 0x1c)))[(*(uint *)(gen_frame + 0xc))] = uVar2 >> bVar8 | (*(uint *)(gen_frame + 0x4));
        (*(uint *)(gen_frame + 0x4)) = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0xc)) < 3);
      iVar14 = 2;
      puVar10 = ((uint *)(gen_frame + 0x24)) - iVar13;
      do {
        if (iVar14 < iVar13) {
          (&(*(uint *)(gen_frame + 0x1c)))[iVar14] = 0;
        }
        else {
          (&(*(uint *)(gen_frame + 0x1c)))[iVar14] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    iVar14 = 0;
    IVar6 = (2);
  }
LAB_00c7cd69: ;
  fVar15 = gen_bits2f(iVar14 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000
                      | (*(uint *)(gen_frame + 0x1c)));
  if (REFG(int, 0x134bef8) == 0x40) {
    (*(float *)(((char *)(_F) + (1) * 4))) = fVar15;
    (*(float *)((char *)(_F))) = (*(float *)(gen_frame + 0x20));
  }
  else if (REFG(int, 0x134bef8) == 0x20) {
    (*(float *)((char *)(_F))) = fVar15;
  }
  F_00c47745(((uint *)(gen_frame + 0x24))[1] ^ (uint)(uint)(gen_frame + 0x2c));
  return IVar6;
}

/* ref: __ld12told */
undefined4 F_00c7cdb6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7cdb6u, gen_a0, gen_a1, 0u, 0u);
  undefined * _Ifp = (undefined *)(uintptr_t)gen_a0;
  undefined * _Ld = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  ushort uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0x1c))[3] = uVar5;
  uVar2 = *(ushort *)(((uchar *)((char *)(_Ifp))) + 10);
  uVar4 = uVar2 & 0x7fff;
  uVar8 = *(uint *)(((uchar *)((char *)(_Ifp))) + 6);
  uVar7 = *(uint *)(((uchar *)((char *)(_Ifp))) + 2);
  uVar6 = (uint)*(ushort *)((uchar *)((char *)(_Ifp))) << 0x10;
  ((uint *)(gen_frame + 0x1c))[0] = uVar8;
  ((uint *)(gen_frame + 0x1c))[2] = uVar6;
  if (((int)uVar6 < 0) && ((uVar6 & 0x7fffffff) != 0)) {
    uVar8 = uVar7 + 1;
    bVar3 = false;
    if ((uVar8 < uVar7) || (uVar8 == 0)) {
      bVar3 = true;
    }
    (*(int *)(gen_frame + 0x14)) = 0;
    ((uint *)(gen_frame + 0x1c))[1] = uVar8;
    do {
      uVar7 = ((uint *)(gen_frame + 0x1c))[1];
      uVar8 = ((uint *)(gen_frame + 0x1c))[0];
      if (!bVar3) goto LAB_00c7ce64;
      bVar3 = false;
      puVar1 = ((uint *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x14));
      uVar6 = *puVar1;
      uVar8 = uVar6 + 1;
      if ((uVar8 < uVar6) || (uVar8 == 0)) {
        bVar3 = true;
      }
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + -1;
      *puVar1 = uVar8;
    } while (-1 < (*(int *)(gen_frame + 0x14)));
    uVar8 = ((uint *)(gen_frame + 0x1c))[0];
    if (bVar3) {
      uVar4 = uVar4 + 1;
      uVar8 = 0x80000000;
    }
  }
LAB_00c7ce64: ;
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)(uVar4 == 0x7fff);
  *(uint *)(((uchar *)((char *)(_Ld))) + 4) = uVar8;
  *(ushort *)(((uchar *)((char *)(_Ld))) + 8) = uVar2 & 0x8000 | uVar4;
  *(uint *)((uchar *)((char *)(_Ld))) = uVar7;
  F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x2c));
  return (*(undefined4 *)(gen_frame + 0xc));
}

/* ref: ___add_12 */
unsigned int F_00c7ce93(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7ce93u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1 + *param_2;
  bVar2 = false;
  if ((uVar1 < *param_1) || (uVar1 < *param_2)) {
    bVar2 = true;
  }
  *param_1 = uVar1;
  if (bVar2) {
    uVar1 = param_1[1] + 1;
    bVar2 = false;
    if ((uVar1 < param_1[1]) || (uVar1 == 0)) {
      bVar2 = true;
    }
    param_1[1] = uVar1;
    if (bVar2) {
      param_1[2] = param_1[2] + 1;
    }
  }
  uVar1 = param_1[1] + param_2[1];
  bVar2 = false;
  if ((uVar1 < param_1[1]) || (uVar1 < param_2[1])) {
    bVar2 = true;
  }
  param_1[1] = uVar1;
  if (bVar2) {
    param_1[2] = param_1[2] + 1;
  }
  param_1[2] = param_1[2] + param_2[2];
  return 0;
}

/* ref: FUN_00c7cf04 */
unsigned int F_00c7cf04(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7cf04u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar5 = param_3;
  uVar9 = 0;
  (*(short *)(gen_frame + 0x18)) = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    uVar6 = 0;
    param_3 = (uint *)0x0;
    do {
      uVar10 = *puVar5;
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      bVar3 = false;
      uVar7 = (uVar9 * 2 | uVar6 >> 0x1f) * 2 | (uVar6 & 0x7fffffff) >> 0x1e;
      uVar6 = uVar6 * 4;
      uVar9 = ((int)((int)(uintptr_t)param_3) * 2 | uVar9 >> 0x1f) * 2 | (uVar9 & 0x7fffffff) >> 0x1e;
      uVar8 = uVar10 + uVar6;
      *puVar5 = uVar6;
      puVar5[1] = uVar7;
      puVar5[2] = uVar9;
      if ((uVar8 < uVar6) || (uVar8 < uVar10)) {
        bVar3 = true;
      }
      *puVar5 = uVar8;
      uVar6 = uVar7;
      if (bVar3) {
        bVar3 = false;
        uVar6 = uVar7 + 1;
        if ((uVar6 < uVar7) || (uVar6 == 0)) {
          bVar3 = true;
        }
        puVar5[1] = uVar6;
        if (bVar3) {
          uVar9 = uVar9 + 1;
          puVar5[2] = uVar9;
        }
      }
      bVar3 = false;
      uVar10 = uVar6 + uVar1;
      if ((uVar10 < uVar6) || (uVar10 < uVar1)) {
        bVar3 = true;
      }
      puVar5[1] = uVar10;
      if (bVar3) {
        uVar9 = uVar9 + 1;
        puVar5[2] = uVar9;
      }
      bVar3 = false;
      param_3 = ((uint *)GEN_TOP(((uVar9 + uVar2) * 2 | uVar10 >> 0x1f)));
      uVar9 = uVar8 * 2;
      uVar10 = uVar10 * 2 | uVar8 >> 0x1f;
      puVar5[2] = (uint)param_3;
      *puVar5 = uVar9;
      puVar5[1] = uVar10;
      uVar6 = uVar9 + (int)*param_1;
      if ((uVar6 < uVar9) || (uVar6 < (uint)(int)*param_1)) {
        bVar3 = true;
      }
      *puVar5 = uVar6;
      uVar9 = uVar10;
      if (bVar3) {
        uVar9 = uVar10 + 1;
        bVar3 = false;
        if ((uVar9 < uVar10) || (uVar9 == 0)) {
          bVar3 = true;
        }
        puVar5[1] = uVar9;
        if (bVar3) {
          param_3 = (uint *)((int)param_3 + 1);
          puVar5[2] = (uint)param_3;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      puVar5[1] = uVar9;
      puVar5[2] = (uint)param_3;
    } while (param_2 != 0);
  }
  if (puVar5[2] == 0) {
    uVar9 = puVar5[1];
    sVar4 = (*(short *)(gen_frame + 0x18));
    do {
      (*(short *)(gen_frame + 0x18)) = sVar4 + -0x10;
      uVar6 = uVar9 >> 0x10;
      uVar9 = uVar9 << 0x10 | *puVar5 >> 0x10;
      puVar5[1] = uVar9;
      *puVar5 = *puVar5 << 0x10;
      sVar4 = (*(short *)(gen_frame + 0x18));
    } while (uVar6 == 0);
    puVar5[2] = uVar6;
  }
  uVar9 = puVar5[2];
  if ((uVar9 & 0x8000) == 0) {
    uVar6 = puVar5[1];
    sVar4 = (*(short *)(gen_frame + 0x18));
    do {
      (*(short *)(gen_frame + 0x18)) = sVar4 + -1;
      uVar10 = uVar9 * 2;
      uVar9 = uVar10 | uVar6 >> 0x1f;
      uVar6 = uVar6 * 2 | *puVar5 >> 0x1f;
      *puVar5 = *puVar5 * 2;
      puVar5[1] = uVar6;
      puVar5[2] = uVar9;
      sVar4 = (*(short *)(gen_frame + 0x18));
    } while ((uVar10 & 0x8000) == 0);
  }
  *(short *)((int)puVar5 + 10) = (*(short *)(gen_frame + 0x18));
  return 0;
}

/* ref: __strnicoll_l */
int F_00c7d0e8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7d0e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (_MaxCount == 0) {
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if (*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x10))) == (LPCWSTR)0x0) {
      iVar2 = F_00c4c4af(_Str1,_Str2,_MaxCount,(undefined *)((byte *)(gen_frame + 0xc)));
    }
    else {
      iVar2 = F_00c6fdae((undefined *)((byte *)(gen_frame + 0xc)),*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x10))),0x1001,_Str1,_MaxCount,
                         _Str2,_MaxCount,*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 8))));
      if (iVar2 == 0) {
        piVar1 = F_00c51f85();
        *piVar1 = 0x16;
        goto LAB_00c7d1af;
      }
      iVar2 = iVar2 + -2;
    }
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
LAB_00c7d1af: ;
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

/* ref: __strnicoll */
int F_00c7d1d2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7d1d2u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    iVar1 = F_00c4c591(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = F_00c7d0e8(_Str1,_Str2,_MaxCount,(undefined *)0x0);
  return iVar1;
}

/* ref: findenv */
uint F_00c7d1fb(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7d1fbu, gen_a0, gen_a1, 0u, 0u);
  gen_size32 in_edi = (gen_size32)gen_a0;
  uchar * param_2 = (uchar *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x15d6840);
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)REFG(int * PTR32, 0x15d6840) >> 2);
    }
    iVar1 = F_00c64543(param_2,(uchar *)*piVar2,in_edi);
    if ((iVar1 == 0) &&
       ((*(char *)(in_edi + *piVar2) == '=' || (*(char *)(in_edi + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)REFG(int * PTR32, 0x15d6840) >> 2;
}

/* ref: copy_environ */
uint F_00c7d24d(unsigned int gen_a0)
{
  GEN_ENTER(0xc7d24du, gen_a0, 0u, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  char * pcVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  puVar2 = (undefined4 *)0x0;
  if (in_eax != (int *)0x0) {
    iVar1 = *in_eax;
    piVar4 = in_eax;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar1 = *piVar4;
    }
    puVar2 = F_00c54c73((int)puVar2 + 1,4);
    if (puVar2 == (undefined4 *)0x0) {
                    
      F_00c47ca5(9);
    }
    pcVar3 = (char *)*in_eax;
    puVar5 = puVar2;
    if (pcVar3 != (char *)0x0) {
      do {
        pcVar3 = F_00c7081f(pcVar3);
        *puVar5 = pcVar3;
        puVar5 = puVar5 + 1;
        pcVar3 = *((char * PTR32 *)GEN_TOP((((int)in_eax - (int)puVar2) + (int)puVar5)));
      } while (pcVar3 != (char *)0x0);
    }
    *puVar5 = 0;
  }
  return (uint)puVar2;
}

/* ref: ___crtsetenv */
int F_00c7d2ad(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7d2adu, gen_a0, gen_a1, 0u, 0u);
  char * PTR32 * _POption = (char * PTR32 *)(uintptr_t)gen_a0;
  int _Primary = (int)gen_a1;
  uint _Size;
  uchar * _Str;
  int * piVar1;
  uchar * puVar2;
  int iVar3;
  uint _Count;
  gen_size32 sVar4;
  LPCSTR lpName;
  int eVar5;
  BOOL BVar6;
  int * piVar7;
  bool bVar8;
  gen_size32 _Size_00;
  uchar * puVar9;
  int local_10;
  
  local_10 = 0;
  if (_POption == (char * PTR32 *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  _Str = (uchar *)*_POption;
  if (((_Str == (uchar *)0x0) || (puVar2 = F_00c7e576(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_00c7d335: ;
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    return -1;
  }
  bVar8 = puVar2[1] == '\0';
  if (REFG(int * PTR32, 0x15d6840) == REFG(int * PTR32, 0x15d6844)) {
    REFG(int * PTR32, 0x15d6840) = (int *)F_00c7d24d(REFG(int * PTR32, 0x15d6840));
  }
  if (REFG(int * PTR32, 0x15d6840) == (int *)0x0) {
    if ((_Primary == 0) || (REFG(undefined4 * PTR32, 0x15d6848) == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      REFG(int * PTR32, 0x15d6840) = F_00c54c2e(4);
      if (REFG(int * PTR32, 0x15d6840) == (int *)0x0) {
        return -1;
      }
      *REFG(int * PTR32, 0x15d6840) = 0;
      if (REFG(undefined4 * PTR32, 0x15d6848) == (undefined4 *)0x0) {
        REFG(undefined4 * PTR32, 0x15d6848) = F_00c54c2e(4);
        if (REFG(undefined4 * PTR32, 0x15d6848) == (undefined4 *)0x0) {
          return -1;
        }
        *REFG(undefined4 * PTR32, 0x15d6848) = 0;
      }
    }
    else {
      iVar3 = F_00c6455d();
      if (iVar3 != 0) goto LAB_00c7d335;
    }
  }
  piVar1 = REFG(int * PTR32, 0x15d6840);
  if (REFG(int * PTR32, 0x15d6840) == (int *)0x0) {
    return -1;
  }
  _Count = F_00c7d1fb((int)puVar2 - (int)_Str,_Str);
  if (((int)_Count < 0) || (*piVar1 == 0)) {
    if (bVar8) {
      F_00c4c68f(_Str);
      *_POption = (char *)0x0;
      return 0;
    }
    if ((int)_Count < 0) {
      _Count = -_Count;
    }
    _Size = _Count + 2;
    if ((int)_Size < (int)_Count) {
      return -1;
    }
    if (0x3ffffffe < _Size) {
      return -1;
    }
    piVar1 = F_00c54d0d(REFG(int * PTR32, 0x15d6840),4,_Size);
    if (piVar1 == (int *)0x0) {
      return -1;
    }
    piVar1[_Count] = (int)_Str;
    (piVar1 + _Count)[1] = 0;
    *_POption = (char *)0x0;
  }
  else {
    piVar7 = piVar1 + _Count;
    F_00c4c68f((undefined *)*piVar7);
    if (!bVar8) {
      *piVar7 = (int)_Str;
      *_POption = (char *)0x0;
      goto LAB_00c7d443;
    }
    while (*piVar7 != 0) {
      *piVar7 = piVar7[1];
      _Count = _Count + 1;
      piVar7 = piVar1 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar1 = F_00c54d0d(REFG(int * PTR32, 0x15d6840),_Count,4), piVar1 == (int *)0x0)) goto LAB_00c7d443;
  }
  REFG(int * PTR32, 0x15d6840) = piVar1;
LAB_00c7d443: ;
  if (_Primary != 0) {
    _Size_00 = 1;
    sVar4 = F_00c552f0((char *)_Str);
    lpName = F_00c54c73(sVar4 + 2,_Size_00);
    if (lpName != (LPCSTR)0x0) {
      puVar9 = _Str;
      sVar4 = F_00c552f0((char *)_Str);
      eVar5 = F_00c49908(lpName,sVar4 + 2,puVar9);
      if (eVar5 != 0) {
                    
        F_00c4c299(lpName,0,0,0,0,0);
      }
      puVar2[(int)lpName - (int)_Str] = '\0';
      BVar6 = gen_imp_SetEnvironmentVariableA(lpName,(LPCSTR)(~-(uint)bVar8 &
                                        (uint)(puVar2 + ((int)lpName - (int)_Str) + 1)));
      if (BVar6 == 0) {
        local_10 = -1;
        piVar1 = F_00c51f85();
        *piVar1 = 0x2a;
      }
      F_00c4c68f(lpName);
    }
  }
  if (bVar8) {
    F_00c4c68f(_Str);
    *_POption = (char *)0x0;
    return local_10;
  }
  return local_10;
}

/* ref: __wcsnicmp_l */
int F_00c7d4ef(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7d4efu, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort wVar1;
  ushort wVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  wchar_t * pwVar7;
  wchar_t * pwVar8;
  
  iVar3 = 0;
  if (_MaxCount != 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      piVar4 = F_00c51f85();
      *piVar4 = 0x16;
      F_00c4c305();
      iVar3 = 0x7fffffff;
    }
    else {
      F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
      pwVar7 = _Str1;
      pwVar8 = _Str2;
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) == 0) {
        pwVar7 = _Str2;
        do {
          uVar5 = (uint)*((ushort *)GEN_TOP((((int)_Str1 - (int)_Str2) + (int)pwVar7)));
          if ((0x40 < uVar5) && (uVar5 < 0x5b)) {
            uVar5 = uVar5 + 0x20 & 0xffff;
          }
          uVar6 = (uint)(ushort)*pwVar7;
          if ((0x40 < uVar6) && (uVar6 < 0x5b)) {
            uVar6 = uVar6 + 0x20 & 0xffff;
          }
          pwVar7 = pwVar7 + 1;
          _MaxCount = _MaxCount - 1;
        } while (((_MaxCount != 0) && ((short)uVar5 != 0)) && ((short)uVar5 == (short)uVar6));
      }
      else {
        do {
          wVar1 = F_00c6d5b0(*pwVar7,(undefined *)((byte *)(gen_frame + 0xc)));
          uVar5 = (uint)wVar1;
          wVar2 = F_00c6d5b0(*pwVar8,(undefined *)((byte *)(gen_frame + 0xc)));
          pwVar7 = pwVar7 + 1;
          pwVar8 = pwVar8 + 1;
          _MaxCount = _MaxCount - 1;
          uVar6 = (uint)wVar2;
          if ((_MaxCount == 0) || (wVar1 == 0)) break;
        } while (wVar1 == wVar2);
      }
      iVar3 = uVar5 - uVar6;
      if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      }
    }
  }
  return iVar3;
}

/* ref: __wcsnicmp */
int F_00c7d5d4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7d5d4u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  wchar_t * pwVar4;
  ushort uVar5;
  
  if (REFG(int, 0x15d6874) == 0) {
    iVar1 = 0;
    if (_MaxCount != 0) {
      if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
        piVar2 = F_00c51f85();
        *piVar2 = 0x16;
        F_00c4c305();
        iVar1 = 0x7fffffff;
      }
      else {
        pwVar4 = _Str2;
        do {
          uVar5 = *((ushort *)GEN_TOP((((int)_Str1 - (int)_Str2) + (int)pwVar4)));
          if ((0x40 < uVar5) && (uVar5 < 0x5b)) {
            uVar5 = uVar5 + 0x20;
          }
          uVar3 = (uint)(ushort)*pwVar4;
          if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
            uVar3 = uVar3 + 0x20 & 0xffff;
          }
          pwVar4 = pwVar4 + 1;
          _MaxCount = _MaxCount - 1;
        } while (((_MaxCount != 0) && (uVar5 != 0)) && (uVar5 == (ushort)uVar3));
        iVar1 = uVar5 - uVar3;
      }
    }
  }
  else {
    iVar1 = F_00c7d4ef(_Str1,_Str2,_MaxCount,(undefined *)0x0);
  }
  return iVar1;
}

/* ref: _wcsncmp */
int F_00c7d672(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7d672u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  wchar_t * pwVar1;
  wchar_t * pwVar2;
  
  pwVar1 = _Str1;
  pwVar2 = _Str2;
  if (_MaxCount != 0) {
    for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*pwVar1 != L'\0')) &&
           (*pwVar1 == *pwVar2)); pwVar1 = pwVar1 + 1) {
      pwVar2 = pwVar2 + 1;
    }
    return (uint)(ushort)*pwVar1 - (uint)(ushort)*pwVar2;
  }
  return 0;
}

/* ref: __frnd */
float10 F_00c7d6ab(double gen_a0)
{
  GEN_ENTER(0xc7d6abu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  double param_1 = (double)gen_a0;
  return ((float10)GEN_TOD(ROUND(param_1)));
}

/* ref: __fgetwc_nolock */
ushort F_00c7d6bf(unsigned int gen_a0)
{
  GEN_ENTER(0xc7d6bfu, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * _File_00;
  ushort wVar1;
  int iVar2;
  uint uVar3;
  undefined * puVar4;
  int * piVar5;
  gen_size32 _SrcSizeInBytes;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  if (((*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 12))))) & 0x40) == 0) {
    iVar2 = F_00c5d07b((*(undefined * PTR32 *)&gen_args[0]));
    if ((iVar2 == -1) || (iVar2 = F_00c5d07b(_File_00), iVar2 == -2)) {
      puVar4 = &REFG(undefined, 0x134b280);
    }
    else {
      iVar2 = F_00c5d07b(_File_00);
      uVar3 = F_00c5d07b(_File_00);
      puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar2 >> 5])));
    }
    if ((puVar4[0x24] & 0x7f) != 0) {
      piVar5 = &(*(int *)(((char *)(_File_00) + 4)));
      *piVar5 = *piVar5 + -1;
      if (*piVar5 < 0) {
        uVar3 = F_00c5cf59(_File_00);
      }
      else {
        uVar3 = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
        (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
      }
      if (uVar3 != 0xffffffff) {
        piVar5 = &(*(int *)(((char *)(_File_00) + 4)));
        *piVar5 = *piVar5 + -1;
        iVar2 = *piVar5;
        (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[0]), 1, 3),(char)uVar3)));
        if (iVar2 < 0) {
          uVar3 = F_00c5cf59(_File_00);
        }
        else {
          uVar3 = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
          (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
        }
        if (uVar3 != 0xffffffff) {
          (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + (0) * 32)))) = CONCAT11((char)uVar3,(*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + (0) * 32)))));
          (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)(uint)(ushort)(*(undefined * PTR32 *)&gen_args[0]);
          goto LAB_00c7d762;
        }
      }
      return 0xffff;
    }
    if (((*(int *)(((char *)(_File_00) + 12))) & 0x40) == 0) {
      iVar2 = F_00c5d07b(_File_00);
      if ((iVar2 == -1) || (iVar2 = F_00c5d07b(_File_00), iVar2 == -2)) {
        puVar4 = &REFG(undefined, 0x134b280);
      }
      else {
        iVar2 = F_00c5d07b(_File_00);
        uVar3 = F_00c5d07b(_File_00);
        puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar2 >> 5])));
      }
      if ((puVar4[4] & 0x80) != 0) {
        _SrcSizeInBytes = 1;
        piVar5 = &(*(int *)(((char *)(_File_00) + 4)));
        *piVar5 = *piVar5 + -1;
        if (*piVar5 < 0) {
          uVar3 = F_00c5cf59(_File_00);
        }
        else {
          uVar3 = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
          (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
        }
        if (uVar3 == 0xffffffff) {
          return 0xffff;
        }
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (char)uVar3;
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar3);
        iVar2 = F_00c6e020(uVar3 & 0xff);
        if (iVar2 != 0) {
          piVar5 = &(*(int *)(((char *)(_File_00) + 4)));
          *piVar5 = *piVar5 + -1;
          if (*piVar5 < 0) {
            uVar3 = F_00c5cf59(_File_00);
          }
          else {
            uVar3 = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
            (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
          }
          if (uVar3 == 0xffffffff) {
            F_00c50cf0((int)(char)(*(undefined4 *)(gen_frame + 0x8)),_File_00);
            return 0xffff;
          }
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = (char)uVar3;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = CONCAT11((char)uVar3,(char)(*(undefined4 *)(gen_frame + 0x8)));
          _SrcSizeInBytes = 2;
        }
        iVar2 = F_00c7b31a((wchar_t *)&(*(undefined * PTR32 *)&gen_args[0]),(char *)&(*(undefined4 *)(gen_frame + 0x8)),_SrcSizeInBytes);
        if (iVar2 == -1) {
          piVar5 = F_00c51f85();
          *piVar5 = 0x2a;
          return 0xffff;
        }
LAB_00c7d762: ;
        return (ushort)(*(undefined * PTR32 *)&gen_args[0]);
      }
    }
  }
  piVar5 = &(*(int *)(((char *)(_File_00) + 4)));
  *piVar5 = *piVar5 + -2;
  if (*piVar5 < 0) {
    iVar2 = F_00c808dd(_File_00);
    wVar1 = (ushort)iVar2;
  }
  else {
    wVar1 = *(ushort *)(*(char * PTR32 *)((char *)(_File_00)));
    (*(char * PTR32 *)((char *)(_File_00))) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)((char *)(_File_00))) + 2)));
  }
  return wVar1;
}

/* ref: _fgetwc */
ushort F_00c7d86a(unsigned int gen_a0)
{
  GEN_ENTER(0xc7d86au, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  ushort wVar1;
  int * piVar2;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6b28);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc7d876;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    wVar1 = 0xffff;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    wVar1 = F_00c7d6bf((*(undefined * PTR32 *)&gen_args[0]));
    (*(uint *)(gen_frame + 0x0)) = (uint)wVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c7d8cb((gen_frame + 0x1c));
    wVar1 = (ushort)(*(uint *)(gen_frame + 0x0));
  }
  return wVar1;
}

/* ref: FUN_00c7d8cb */
uint F_00c7d8cb(unsigned int gen_a0)
{
  GEN_ENTER(0xc7d8cbu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: FUN_00c7d8d5 */
uint F_00c7d8d5(unsigned int gen_a0)
{
  GEN_ENTER(0xc7d8d5u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  wVar1 = F_00c7d86a(param_1);
  return CONCAT22(extraout_var,wVar1);
}

/* ref: __ungetwc_nolock */
ushort F_00c7d8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7d8e0u, gen_a0, gen_a1, 0u, 0u);
  ushort _Ch = (ushort)gen_a0;
  undefined * _File = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort * pwVar1;
  ushort wVar2;
  int iVar3;
  uint uVar4;
  undefined * puVar5;
  int eVar6;
  ushort wVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  wVar2 = CONCAT11((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x10)) + 1)),(char)(*(ushort *)(gen_frame + 0x10)));
  if (_Ch != 0xffff) {
    uVar4 = (*(int *)(((char *)(_File) + 12)));
    if (((uVar4 & 1) != 0) ||
       ((wVar2 = CONCAT11((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x10)) + 1)),(char)(*(ushort *)(gen_frame + 0x10))), (char)uVar4 < '\0' &&
        (wVar2 = CONCAT11((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x10)) + 1)),(char)(*(ushort *)(gen_frame + 0x10))), (uVar4 & 2) == 0)))) {
      if ((*(char * PTR32 *)(((char *)(_File) + 8))) == (char *)0x0) {
        F_00c6e658(_File);
      }
      wVar7 = _Ch;
      if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
        iVar3 = F_00c5d07b(_File);
        if ((iVar3 == -1) || (iVar3 = F_00c5d07b(_File), iVar3 == -2)) {
          puVar5 = &REFG(undefined, 0x134b280);
        }
        else {
          iVar3 = F_00c5d07b(_File);
          uVar4 = F_00c5d07b(_File);
          puVar5 = ((undefined *)GEN_TOP(((uVar4 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar3 >> 5])));
        }
        if ((puVar5[4] & 0x80) != 0) {
          iVar3 = F_00c5d07b(_File);
          if ((iVar3 == -1) || (iVar3 = F_00c5d07b(_File), iVar3 == -2)) {
            puVar5 = &REFG(undefined, 0x134b280);
          }
          else {
            iVar3 = F_00c5d07b(_File);
            uVar4 = F_00c5d07b(_File);
            puVar5 = ((undefined *)GEN_TOP(((uVar4 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar3 >> 5])));
          }
          if ((puVar5[0x24] & 0x7f) == 0) {
            eVar6 = F_00c7af62(&(*(int *)(gen_frame + 0xc)),(char *)&(*(ushort *)(gen_frame + 0x10)),5,_Ch);
            wVar2 = CONCAT11((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x10)) + 1)),(char)(*(ushort *)(gen_frame + 0x10)));
            if (eVar6 != 0) goto LAB_00c7da71;
          }
          else {
            (*(ushort *)(gen_frame + 0x10)) = _Ch;
            (*(int *)(gen_frame + 0xc)) = 2;
            wVar2 = _Ch;
          }
          iVar3 = (*(int *)(gen_frame + 0xc));
          if ((*(char * PTR32 *)((char *)(_File))) < (*(char * PTR32 *)(((char *)(_File) + 8))) + (*(int *)(gen_frame + 0xc))) {
            if (((*(int *)(((char *)(_File) + 4))) != 0) || ((*(int *)(((char *)(_File) + 24))) < (*(int *)(gen_frame + 0xc)))) goto LAB_00c7da71;
            (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)(((char *)(_File) + 8))) + (*(int *)(gen_frame + 0xc));
          }
          while (-1 < iVar3 + -1) {
            (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) + -1;
            *(*(char * PTR32 *)((char *)(_File))) = *(char *)((int)&(*(int *)(gen_frame + 0xc)) + iVar3 + 3);
            iVar3 = iVar3 + -1;
          }
          (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) + (*(int *)(gen_frame + 0xc));
          (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffffffefU | 1;
          (*(ushort *)(gen_frame + 0x10)) = wVar2;
          goto LAB_00c7da73;
        }
      }
      if ((*(char * PTR32 *)((char *)(_File))) < (*(char * PTR32 *)(((char *)(_File) + 8))) + 2) {
        wVar2 = CONCAT11((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x10)) + 1)),(char)(*(ushort *)(gen_frame + 0x10)));
        if (((*(int *)(((char *)(_File) + 4))) != 0) ||
           (wVar2 = CONCAT11((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x10)) + 1)),(char)(*(ushort *)(gen_frame + 0x10))), (uint)(*(int *)(((char *)(_File) + 24))) < 2))
        goto LAB_00c7da71;
        (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)(((char *)(_File) + 8))) + 2;
      }
      (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) + -2;
      pwVar1 = (ushort *)(*(char * PTR32 *)((char *)(_File)));
      if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
        *pwVar1 = _Ch;
      }
      else if (*pwVar1 != _Ch) {
        (*(char * PTR32 *)((char *)(_File))) = (char *)(pwVar1 + 1);
        wVar2 = (*(ushort *)(gen_frame + 0x10));
        goto LAB_00c7da71;
      }
      (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) + 2;
      (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffffffefU | 1;
      goto LAB_00c7da73;
    }
  }
LAB_00c7da71: ;
  wVar7 = 0xffff;
  (*(ushort *)(gen_frame + 0x10)) = wVar2;
LAB_00c7da73: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return wVar7;
}

/* ref: FUN_00c7daff */
uint F_00c7daff(unsigned int gen_a0)
{
  GEN_ENTER(0xc7daffu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: _iswctype */
int F_00c7db09(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7db09u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  BOOL BVar2;
  
  if ((*(ushort *)&gen_args[0]) == 0xffff) {
    return 0;
  }
  if ((*(ushort *)&gen_args[0]) < 0x100) {
    uVar1 = *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134b114) + (uint)(*(ushort *)&gen_args[0]) * 2)));
  }
  else {
    BVar2 = gen_imp_GetStringTypeW(1,(LPCWSTR)&(*(ushort *)&gen_args[0]),1,(LPWORD)&(*(undefined4 *)(gen_frame + 0x8)));
    if (BVar2 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
    }
    uVar1 = (ushort)(*(undefined4 *)(gen_frame + 0x8));
  }
  return (uint)(uVar1 & (*(ushort *)&gen_args[1]));
}

/* ref: FUN_00c7db5e */
uint F_00c7db5e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7db5eu, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c7db09((ushort)param_1,(ushort)param_2);
  return uVar1;
}

/* ref: __iswctype_l */
int F_00c7db69(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7db69u, gen_a0, gen_a1, gen_a2, 0u);
  ushort _C = (ushort)gen_a0;
  ushort _Type = (ushort)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,_Type);
  return iVar1;
}

/* ref: FUN_00c7db7d */
uint F_00c7db7d(unsigned int gen_a0)
{
  GEN_ENTER(0xc7db7du, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: __wgetdcwd_nolock */
uint F_00c7db80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7db80u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ulong * puVar2;
  int * piVar3;
  uint uVar4;
  DWORD DVar5;
  undefined2 * puVar6;
  gen_size32 _Count;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 0) {
    uVar4 = F_00c6d446();
LAB_00c7dbd4: ;
    if (param_2 == (undefined2 *)0x0) {
      (*(gen_size32 *)(gen_frame + 0xc)) = 0;
    }
    else {
      if ((int)param_3 < 1) {
        piVar3 = F_00c51f85();
        *piVar3 = 0x16;
        goto LAB_00c7dbc3;
      }
      (*(gen_size32 *)(gen_frame + 0xc)) = param_3;
      *param_2 = 0;
    }
    if (uVar4 == 0) {
      ((short *)(gen_frame + 0x10))[0] = 0x2e;
      ((short *)(gen_frame + 0x10))[1] = 0;
    }
    else {
      ((short *)(gen_frame + 0x10))[1] = 0x3a;
      ((short *)(gen_frame + 0x10))[2] = 0x2e;
      ((short *)(gen_frame + 0x10))[0] = (short)uVar4 + 0x40;
      ((short *)(gen_frame + 0x10))[3] = 0;
    }
    DVar5 = gen_imp_GetFullPathNameW(((short *)(gen_frame + 0x10)),(*(gen_size32 *)(gen_frame + 0xc)),param_2,((undefined1 *)(gen_frame + 0x8)));
    if (DVar5 == 0) {
LAB_00c7dc9e: ;
      DVar5 = gen_imp_GetLastError();
      F_00c51fab(DVar5);
    }
    else if (param_2 == (undefined2 *)0x0) {
      _Count = param_3;
      if ((int)param_3 < (int)DVar5) {
        _Count = DVar5;
      }
      puVar6 = F_00c645f4(_Count,2);
      if (puVar6 != (undefined2 *)0x0) {
        DVar5 = gen_imp_GetFullPathNameW(((short *)(gen_frame + 0x10)),_Count,puVar6,((undefined1 *)(gen_frame + 0x8)));
        if ((DVar5 != 0) && ((int)DVar5 < (int)_Count)) goto LAB_00c7dcad;
        goto LAB_00c7dc9e;
      }
      piVar3 = F_00c51f85();
      *piVar3 = 0xc;
      puVar2 = F_00c51f98();
      *puVar2 = 8;
    }
    else {
      puVar6 = param_2;
      if ((int)DVar5 < (int)(*(gen_size32 *)(gen_frame + 0xc))) goto LAB_00c7dcad;
      piVar3 = F_00c51f85();
      *piVar3 = 0x22;
      *param_2 = 0;
    }
  }
  else {
    iVar1 = F_00c80a0d(param_1);
    uVar4 = param_1;
    if (iVar1 != 0) goto LAB_00c7dbd4;
    puVar2 = F_00c51f98();
    *puVar2 = 0xf;
    piVar3 = F_00c51f85();
    *piVar3 = 0xd;
LAB_00c7dbc3: ;
    F_00c4c305();
  }
  puVar6 = (undefined2 *)0x0;
LAB_00c7dcad: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)puVar6;
}

/* ref: __wgetcwd */
wchar_t * F_00c7dcbc(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7dcbcu, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  wchar_t * pwVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6b68);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc7dcc8;
  F_00c5aa4f(7);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  pwVar1 = (wchar_t *)F_00c7db80(0,(*(wchar_t * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
  (*(wchar_t * PTR32 *)(gen_frame + 0x0)) = pwVar1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c7dcfc();
  return (*(wchar_t * PTR32 *)(gen_frame + 0x0));
}

/* ref: FUN_00c7dcfc */
uint F_00c7dcfc(void)
{
  GEN_ENTER(0xc7dcfcu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c7dd46 */
uint F_00c7dd46(void)
{
  GEN_ENTER(0xc7dd46u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: __wcsicmp_l */
int F_00c7dd4f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7dd4fu, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort wVar1;
  ushort wVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t * pwVar7;
  wchar_t * pwVar8;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (_Str1 == (wchar_t *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  else if (_Str2 == (wchar_t *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  else {
    pwVar7 = _Str1;
    pwVar8 = _Str2;
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) == 0) {
      pwVar7 = _Str2;
      do {
        uVar5 = (uint)*((ushort *)GEN_TOP((((int)_Str1 - (int)_Str2) + (int)pwVar7)));
        if ((0x40 < uVar5) && (uVar5 < 0x5b)) {
          uVar5 = uVar5 + 0x20 & 0xffff;
        }
        uVar6 = (uint)(ushort)*pwVar7;
        if ((0x40 < uVar6) && (uVar6 < 0x5b)) {
          uVar6 = uVar6 + 0x20 & 0xffff;
        }
        pwVar7 = pwVar7 + 1;
      } while (((short)uVar5 != 0) && ((short)uVar5 == (short)uVar6));
    }
    else {
      do {
        wVar1 = F_00c6d5b0(*pwVar7,(undefined *)((byte *)(gen_frame + 0xc)));
        uVar5 = (uint)wVar1;
        pwVar7 = pwVar7 + 1;
        wVar2 = F_00c6d5b0(*pwVar8,(undefined *)((byte *)(gen_frame + 0xc)));
        pwVar8 = pwVar8 + 1;
        uVar6 = (uint)wVar2;
        if (wVar1 == 0) break;
      } while (wVar1 == wVar2);
    }
    iVar4 = uVar5 - uVar6;
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar4;
}

/* ref: __wcsicmp */
int F_00c7de52(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7de52u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  wchar_t * pwVar4;
  ushort uVar5;
  
  if (REFG(int, 0x15d6874) == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      piVar1 = F_00c51f85();
      *piVar1 = 0x16;
      F_00c4c305();
      iVar2 = 0x7fffffff;
    }
    else {
      pwVar4 = _Str2;
      do {
        uVar5 = *((ushort *)GEN_TOP((((int)_Str1 - (int)_Str2) + (int)pwVar4)));
        if ((0x40 < uVar5) && (uVar5 < 0x5b)) {
          uVar5 = uVar5 + 0x20;
        }
        uVar3 = (uint)(ushort)*pwVar4;
        if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
          uVar3 = uVar3 + 0x20 & 0xffff;
        }
        pwVar4 = pwVar4 + 1;
      } while ((uVar5 != 0) && (uVar5 == (ushort)uVar3));
      iVar2 = uVar5 - uVar3;
    }
  }
  else {
    iVar2 = F_00c7dd4f(_Str1,_Str2,(undefined *)0x0);
  }
  return iVar2;
}

/* ref: _wcsrchr */
wchar_t * F_00c7dedd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7deddu, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Str = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t _Ch = (wchar_t)gen_a1;
  wchar_t wVar1;
  wchar_t * pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  do {
    pwVar2 = pwVar2 + -1;
    if (pwVar2 == _Str) break;
  } while (*pwVar2 != _Ch);
  if (*pwVar2 != _Ch) {
    pwVar2 = (wchar_t *)0x0;
  }
  return pwVar2;
}

/* ref: __fstat32 */
uint F_00c7df0b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7df0bu, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x8c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x84);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  ushort uVar2;
  ulong * puVar3;
  int * piVar4;
  uint uVar5;
  DWORD DVar6;
  BOOL BVar7;
  undefined2 uVar8;
  int iVar9;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  uVar5 = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x7c)) = 100;
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = &REFG(undefined, 0x12f6ba8);
  (*(undefined4 *)(gen_frame + 0x74)) = 0xc7df17;
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    puVar3 = F_00c51f98();
    *puVar3 = 0;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
  }
  else {
    F_00c48350((*(uint * PTR32 *)&gen_args[1]),0,0x24);
    if (uVar5 == 0xfffffffe) {
      puVar3 = F_00c51f98();
      *puVar3 = 0;
      piVar4 = F_00c51f85();
      *piVar4 = 9;
      goto LAB_00c7dff0;
    }
    if (((int)uVar5 < 0) || (REFG(undefined4, 0x15e4190) <= uVar5)) {
      puVar3 = F_00c51f98();
      *puVar3 = 0;
    }
    else {
      piVar4 = &REFG(undefined4, 0x15e41a0) + ((int)uVar5 >> 5);
      iVar9 = (uVar5 & 0x1f) * 0x40;
      if ((*(byte *)(*piVar4 + 4 + iVar9) & 1) != 0) {
        F_00c6d817((*(uint *)(gen_frame + 0x14)));
        (*(undefined * PTR32 *)(gen_frame + 0x78)) = (undefined *)0x0;
        if ((*(byte *)(*piVar4 + 4 + iVar9) & 1) == 0) {
LAB_00c7dfd2: ;
          piVar4 = F_00c51f85();
          *piVar4 = 9;
LAB_00c7dfdd: ;
          (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        }
        else {
          DVar6 = gen_imp_GetFileType(*(HANDLE *)(*piVar4 + iVar9));
          uVar5 = DVar6 & 0xffff7fff;
          if (uVar5 == 1) {
            *(undefined2 *)((int)puVar1 + 6) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *(undefined2 *)((int)puVar1 + 10) = 0;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 2) = 1;
            BVar7 = gen_imp_GetFileInformationByHandle(*(HANDLE *)(*piVar4 + iVar9),((undefined *)(gen_frame + 0x1c)));
            if (BVar7 == 0) {
LAB_00c7e01b: ;
              DVar6 = gen_imp_GetLastError();
              F_00c51fab(DVar6);
              goto LAB_00c7dfdd;
            }
            if (((byte)(*(DWORD *)((char *)((undefined *)(gen_frame + 0x1c)))) & 1) == 0) {
              uVar2 = *(ushort *)((int)puVar1 + 6) | 0x1b6;
            }
            else {
              uVar2 = *(ushort *)((int)puVar1 + 6) | 0x124;
            }
            *(ushort *)((int)puVar1 + 6) = uVar2;
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 20))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x1c)) + 20) + 4))))) == 0)) {
              puVar1[7] = 0;
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x1c)) + 20))),&(*(_FILETIME *)(gen_frame + 0x8)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),((_SYSTEMTIME *)(gen_frame + 0x50))), BVar7 == 0))
              goto LAB_00c7dfdd;
              uVar5 = F_00c7e237((uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMonth,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wHour,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wSecond,-1);
              puVar1[7] = uVar5;
            }
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 12))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x1c)) + 12) + 4))))) == 0)) {
              uVar5 = puVar1[7];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x1c)) + 12))),&(*(_FILETIME *)(gen_frame + 0x8)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),((_SYSTEMTIME *)(gen_frame + 0x50))), BVar7 == 0))
              goto LAB_00c7dfdd;
              uVar5 = F_00c7e237((uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMonth,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wHour,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wSecond,-1);
            }
            puVar1[6] = uVar5;
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 4))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x1c)) + 4) + 4))))) == 0)) {
              uVar5 = puVar1[7];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x1c)) + 4))),&(*(_FILETIME *)(gen_frame + 0x8)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),((_SYSTEMTIME *)(gen_frame + 0x50))), BVar7 == 0))
              goto LAB_00c7dfdd;
              uVar5 = F_00c7e237((uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMonth,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wHour,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wSecond,-1);
            }
            puVar1[8] = uVar5;
            puVar1[5] = (*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 36)));
            *(ushort *)((int)puVar1 + 6) = *(ushort *)((int)puVar1 + 6) | 0x8000;
            *puVar1 = 0;
            puVar1[4] = 0;
          }
          else {
            if (uVar5 == 2) {
              uVar8 = 0x2000;
            }
            else {
              if (uVar5 != 3) {
                if (uVar5 != 0) goto LAB_00c7e01b;
                goto LAB_00c7dfd2;
              }
              uVar8 = 0x1000;
            }
            *(undefined2 *)((int)puVar1 + 6) = uVar8;
            *puVar1 = (*(uint *)(gen_frame + 0x14));
            puVar1[4] = (*(uint *)(gen_frame + 0x14));
            *(undefined2 *)(puVar1 + 2) = 1;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *(undefined2 *)((int)puVar1 + 10) = 0;
            puVar1[8] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            if (uVar5 == 2) {
              puVar1[5] = 0;
            }
            else {
              BVar7 = gen_imp_PeekNamedPipe(*(HANDLE *)(*piVar4 + iVar9),(LPVOID)0x0,0,(LPDWORD)0x0,
                                    &(*(uint *)(gen_frame + 0x10)),(LPDWORD)0x0);
              puVar1[5] = -(uint)(BVar7 != 0) & (*(uint *)(gen_frame + 0x10));
            }
          }
        }
        (*(undefined * PTR32 *)(gen_frame + 0x78)) = (undefined *)0xfffffffe;
        F_00c7e22d((gen_frame + 0x7c));
        goto LAB_00c7dff0;
      }
      puVar3 = F_00c51f98();
      *puVar3 = 0;
    }
    piVar4 = F_00c51f85();
    *piVar4 = 9;
  }
  F_00c4c305();
LAB_00c7dff0: ;
  uVar5 = F_00c7e488((gen_frame + 0x7c));
  return uVar5;
}

/* ref: FUN_00c7e22d */
unsigned int F_00c7e22d(unsigned int gen_a0)
{
  GEN_ENTER(0xc7e22du, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + -0x68));
  return 0;
}

/* ref: ___loctotime32_t */
int F_00c7e237(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc7e237u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  int eVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar6 = param_1 - 0x76c;
  (*(int *)(gen_frame + 0xc)) = param_2;
  (*(long *)(gen_frame + 0x4)) = 0;
  (*(long *)(gen_frame + 0x8)) = 0;
  (*(long *)(gen_frame + 0x0)) = 0;
  if ((((((int)uVar6 < 0x46) || (0x8a < (int)uVar6)) || (0xb < param_2 - 1U)) ||
      ((0x17 < (uint)param_4 || (0x3b < (uint)param_5)))) ||
     ((0x3b < (uint)param_6 || (param_3 < 1)))) {
LAB_00c7e41e: ;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    iVar5 = -1;
  }
  else {
    if ((&REFG(undefined4, 0x134bc34))[param_2] - *(int *)(&REFG(undefined, 0x134bc30) + param_2 * 4) < param_3) {
      uVar1 = uVar6 & 0x80000003;
      bVar7 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if ((((!bVar7) || ((int)uVar6 % 100 == 0)) && (param_1 % 400 != 0)) ||
         ((param_2 != 2 || (0x1d < param_3)))) goto LAB_00c7e41e;
    }
    iVar5 = *(int *)(&REFG(undefined, 0x134bc30) + param_2 * 4) + param_3;
    uVar1 = uVar6 & 0x80000003;
    bVar7 = uVar1 == 0;
    (*(int *)(gen_frame + 0x10)) = iVar5;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((((bVar7) && ((int)uVar6 % 100 != 0)) || (param_1 % 400 == 0)) && (2 < param_2)) {
      (*(int *)(gen_frame + 0x10)) = iVar5 + 1;
    }
    F_00c64d65();
    eVar2 = F_00c64fcb(&(*(long *)(gen_frame + 0x4)));
    if (((eVar2 != 0) || (eVar2 = F_00c64ff8(&(*(long *)(gen_frame + 0x8))), eVar2 != 0)) ||
       (eVar2 = F_00c65025(&(*(long *)(gen_frame + 0x0))), eVar2 != 0)) {
                    
      F_00c4c299(400,0,0,0,0,0);
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 28))) = (*(int *)(gen_frame + 0x10));
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 20))) = uVar6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 8))) = param_4;
    iVar5 = (((uVar6 * 0x16d +
              ((int)(param_1 + -0x76d + (param_1 + -0x76d >> 0x1f & 3U)) >> 2) + (*(int *)(gen_frame + 0x10)) +
              ((param_1 + -0x641) / 400 - (param_1 + -0x76d) / 100)) * 0x18 + param_4) * 0x3c +
            param_5) * 0x3c + (*(long *)(gen_frame + 0x0)) + 0x7c558180 + param_6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 16))) = (*(int *)(gen_frame + 0xc)) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 4))) = param_5;
    (*(int *)((char *)((undefined *)(gen_frame + 0x14)))) = param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && ((*(long *)(gen_frame + 0x4)) != 0)) && (iVar3 = F_00c64dec(((undefined *)(gen_frame + 0x14))), iVar3 != 0)))) {
      iVar5 = iVar5 + (*(long *)(gen_frame + 0x8));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return iVar5;
}

/* ref: FUN_00c7e488 */
uint F_00c7e488(unsigned int gen_a0)
{
  GEN_ENTER(0xc7e488u, gen_a0, 0u, 0u, 0u);
  uint in_ebp = (uint)gen_a0;
  uint in_EAX = 0;
  
  F_00c47745(*(uint *)(in_ebp - 0x1c) ^ in_ebp);
  return in_EAX;
}

/* ref: ___crtLCMapStringW */
int F_00c7e497(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc7e497u, gen_a0, gen_a1, gen_a2, gen_a3);
  LPCWSTR _LocaleName = (LPCWSTR)gen_a0;
  DWORD _DWMapFlag = (DWORD)gen_a1;
  LPCWSTR _LpSrcStr = (LPCWSTR)gen_a2;
  int _CchSrc = (int)gen_a3;
  LPWSTR _LpDestStr = (LPWSTR)gen_a4;
  int _CchDest = (int)gen_a5;
  gen_size32 cchSrc;
  int iVar1;
  
  cchSrc = _CchSrc;
  if (0 < _CchSrc) {
    cchSrc = F_00c80c1e(_LpSrcStr,_CchSrc);
  }
  iVar1 = gen_imp_LCMapStringW((LCID)_LocaleName,_DWMapFlag,_LpSrcStr,cchSrc,_LpDestStr,_CchDest);
  return iVar1;
}

/* ref: __mbschr_l */
uchar * F_00c7e4c6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7e4c6u, gen_a0, gen_a1, gen_a2, 0u);
  uchar * _Str = (uchar *)(uintptr_t)gen_a0;
  uint _Ch = (uint)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  int * piVar3;
  byte * pbVar4;
  byte * pbVar5;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (_Str == (uchar *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    pbVar4 = (byte *)0x0;
  }
  else {
    pbVar4 = _Str;
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 8))) == 0) {
      pbVar4 = (byte *)F_00c51da0(_Str,_Ch);
    }
    else {
      while( true ) {
        bVar2 = *pbVar4;
        if (bVar2 == 0) break;
        if ((*((byte *)GEN_TOP((bVar2 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) & 4) == 0) {
          pbVar5 = pbVar4;
          if (_Ch == bVar2) break;
        }
        else {
          bVar1 = pbVar4[1];
          if (bVar1 == 0) goto LAB_00c7e564;
          pbVar5 = pbVar4 + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_00c7e556;
        }
        pbVar4 = pbVar5 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_00c7e564: ;
        if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_00c7e556: ;
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return pbVar4;
}

/* ref: __mbschr */
uchar * F_00c7e576(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7e576u, gen_a0, gen_a1, 0u, 0u);
  uchar * _Str = (uchar *)(uintptr_t)gen_a0;
  uint _Ch = (uint)gen_a1;
  uchar * puVar1;
  
  puVar1 = F_00c7e4c6(_Str,_Ch,(undefined *)0x0);
  return puVar1;
}

/* ref: __dospawn */
int F_00c7e58d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7e58du, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  LPCSTR param_2 = (LPCSTR)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  LPVOID param_4 = (LPVOID)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  HANDLE pvVar2;
  ushort uVar3;
  char * pcVar4;
  uint uVar6;
  uint * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  ulong * puVar10;
  BOOL BVar11;
  DWORD DVar12;
  int * piVar13;
  uint * puVar14;
  int iVar15;
  HANDLE pvVar16;
  uint uVar17;
  char * pcVar5;
  
  (*(DWORD *)(gen_frame + 0x60)) = 0;
  (*(char *)(gen_frame + 0x6b)) = '\0';
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_1 < 2) {
LAB_00c7e5c3: ;
      puVar10 = F_00c51f98();
      *puVar10 = 0;
      piVar13 = F_00c51f85();
      *piVar13 = 0x16;
      F_00c4c305();
      return -1;
    }
    if (3 < param_1) {
      if (param_1 != 4) goto LAB_00c7e5c3;
      (*(char *)(gen_frame + 0x6b)) = '\x01';
    }
  }
  (*(char * PTR32 *)(gen_frame + 0x5c)) = param_3;
  pcVar4 = param_3;
  while (*pcVar4 != '\0') {
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
    } while (*pcVar4 != '\0');
    if (pcVar5[2] != '\0') {
      *pcVar4 = ' ';
      pcVar4 = pcVar5 + 2;
    }
  }
  F_00c48350(&(*(_STARTUPINFOA *)(gen_frame + 0x4)),0,0x44);
  (*(_STARTUPINFOA *)(gen_frame + 0x4)).cb = 0x44;
  uVar17 = REFG(undefined4, 0x15e4190);
  uVar6 = REFG(undefined4, 0x15e4190);
  if (REFG(undefined4, 0x15e4190) != 0) {
    do {
      uVar6 = uVar6 - 1;
      if (*((char *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)uVar6 >> 5] + 4 + (uVar6 & 0x1f) * 0x40))) != '\0') break;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    if ((int)uVar17 < 0) goto LAB_00c7e77e;
  }
  if (0x3331 < uVar17) {
LAB_00c7e77e: ;
    piVar13 = F_00c51f85();
    *piVar13 = 0xc;
    return -1;
  }
  uVar3 = (short)uVar17 * 5 + 4;
  (*(_STARTUPINFOA *)(gen_frame + 0x4)).cbReserved2 = uVar3;
  puVar7 = F_00c54c73((uint)uVar3,1);
  (*(_STARTUPINFOA *)(gen_frame + 0x4)).lpReserved2 = (LPBYTE)puVar7;
  if (puVar7 == (uint *)0x0) goto LAB_00c7e77e;
  *puVar7 = uVar17;
  puVar14 = puVar7 + 1;
  puVar9 = (undefined4 *)((int)puVar7 + uVar17 + 4);
  (*(uint *)(gen_frame + 0x64)) = 0;
  if (0 < (int)uVar17) {
    do {
      puVar8 = ((undefined4 *)GEN_TOP((((*(uint *)(gen_frame + 0x64)) & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(*(uint *)(gen_frame + 0x64)) >> 5])));
      bVar1 = *(byte *)(puVar8 + 1);
      if ((bVar1 & 0x10) == 0) {
        *(byte *)puVar14 = bVar1;
        *puVar9 = *puVar8;
      }
      else {
        *(byte *)puVar14 = 0;
        *puVar9 = 0xffffffff;
      }
      uVar6 = (*(uint *)(gen_frame + 0x64)) + 1;
      (*(uint *)(gen_frame + 0x64)) = uVar6;
      puVar14 = (uint *)((int)puVar14 + 1);
      puVar9 = puVar9 + 1;
    } while ((int)uVar6 < (int)uVar17);
  }
  if ((*(char *)(gen_frame + 0x6b)) != '\0') {
    puVar14 = puVar7 + 1;
    iVar15 = 0;
    puVar9 = (undefined4 *)((int)puVar7 + uVar17 + 4);
    while( true ) {
      uVar6 = uVar17;
      if (2 < (int)uVar17) {
        uVar6 = 3;
      }
      if ((int)uVar6 <= iVar15) break;
      *(undefined1 *)puVar14 = 0;
      *puVar9 = 0xffffffff;
      iVar15 = iVar15 + 1;
      puVar14 = (uint *)((int)puVar14 + 1);
      puVar9 = puVar9 + 1;
    }
    (*(DWORD *)(gen_frame + 0x60)) = 8;
  }
  puVar10 = F_00c51f98();
  *puVar10 = 0;
  BVar11 = gen_imp_CreateProcessA(param_2,(*(char * PTR32 *)(gen_frame + 0x5c)),(GEN_LPANY)0x0,(GEN_LPANY)0x0,1,
                          (*(DWORD *)(gen_frame + 0x60)),param_4,(LPCSTR)0x0,&(*(_STARTUPINFOA *)(gen_frame + 0x4)),((undefined *)(gen_frame + 0x48)));
  DVar12 = gen_imp_GetLastError();
  F_00c4c68f((*(_STARTUPINFOA *)(gen_frame + 0x4)).lpReserved2);
  if (BVar11 == 0) {
    F_00c51fab(DVar12);
    return -1;
  }
  if (param_1 == 2) {
                    
    F_00c47c71(0);
  }
  if (param_1 == 0) {
    gen_imp_WaitForSingleObject((*(HANDLE *)((char *)((undefined *)(gen_frame + 0x48)))),0xffffffff);
    gen_imp_GetExitCodeProcess((*(HANDLE *)((char *)((undefined *)(gen_frame + 0x48)))),(LPDWORD)&(*(HANDLE *)(gen_frame + 0x58)));
    pvVar2 = (*(HANDLE *)(gen_frame + 0x58));
  }
  else {
    pvVar16 = (*(HANDLE *)((char *)((undefined *)(gen_frame + 0x48))));
    pvVar2 = (HANDLE)0x0;
    if (param_1 != 4) goto LAB_00c7e775;
  }
  pvVar16 = pvVar2;
  gen_imp_CloseHandle((*(HANDLE *)((char *)((undefined *)(gen_frame + 0x48)))));
LAB_00c7e775: ;
  gen_imp_CloseHandle((*(HANDLE *)(((char *)((undefined *)(gen_frame + 0x48)) + 4))));
  return (int)pvVar16;
}

/* ref: wcstoxl */
ulong F_00c7eb2d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7eb2du, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  uint uVar7;
  ushort * pwVar8;
  ushort * pwVar9;
  uint local_8;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if ((param_1 == (ushort *)0x0) ||
     ((param_3 != 0 && (((int)param_3 < 2 || (0x24 < (int)param_3)))))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0;
  }
  local_8 = 0;
  pwVar9 = param_1;
  do {
    pwVar8 = pwVar9;
    uVar6 = *pwVar8;
    pwVar9 = pwVar8 + 1;
    iVar2 = F_00c7db09(uVar6,8);
  } while (iVar2 != 0);
  if (uVar6 == 0x2d) {
    param_4 = param_4 | 2;
LAB_00c7eb9c: ;
    uVar6 = *pwVar9;
    pwVar9 = pwVar8 + 2;
  }
  else if (uVar6 == 0x2b) goto LAB_00c7eb9c;
  uVar7 = (uint)uVar6;
  if (param_3 == 0) {
    uVar3 = F_00c80e23(uVar7);
    if (uVar3 != 0) {
      param_3 = 10;
      goto LAB_00c7ebfa;
    }
    if ((*pwVar9 != 0x78) && (*pwVar9 != 0x58)) {
      param_3 = 8;
      goto LAB_00c7ebfa;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (uVar3 = F_00c80e23(uVar7), uVar3 == 0)) &&
     ((*pwVar9 == 0x78 || (*pwVar9 == 0x58)))) {
    uVar7 = (uint)pwVar9[1];
    pwVar9 = pwVar9 + 2;
  }
LAB_00c7ebfa: ;
  uVar3 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    uVar4 = F_00c80e23(uVar7);
    if (uVar4 == 0xffffffff) {
      uVar6 = (ushort)uVar7;
      if (((uVar6 < 0x41) || (0x5a < uVar6)) && (0x19 < (ushort)(uVar6 - 0x61))) {
LAB_00c7ec5b: ;
        pwVar9 = pwVar9 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pwVar9 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_8)))))))) {
          piVar1 = F_00c51f85();
          *piVar1 = 0x22;
          if ((param_4 & 1) == 0) {
            local_8 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pwVar9;
        }
        uVar5 = local_8;
        if ((param_4 & 2) != 0) {
          uVar5 = -local_8;
        }
        return uVar5;
      }
      if ((ushort)(uVar6 - 0x61) < 0x1a) {
        uVar7 = uVar7 - 0x20;
      }
      uVar4 = uVar7 - 0x37;
    }
    if (param_3 <= uVar4) goto LAB_00c7ec5b;
    if ((local_8 < uVar3) ||
       ((local_8 == uVar3 && (uVar4 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_8 = local_8 * param_3 + uVar4;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
      if (param_2 == (undefined4 *)0x0) goto LAB_00c7ec5b;
    }
    uVar7 = (uint)*pwVar9;
    pwVar9 = pwVar9 + 1;
  } while( true );
}

/* ref: FID_conflict__wcstol_00c7ecef */
long F_00c7ecef(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7ecefu, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ulong uVar1;
  
  uVar1 = F_00c7eb2d(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FID_conflict__wcstol_00c7ed09 */
long F_00c7ed09(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7ed09u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ulong uVar1;
  
  uVar1 = F_00c7eb2d(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FID_conflict___wcstoul_l_00c7ed23 */
ulong F_00c7ed23(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7ed23u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ulong uVar1;
  
  uVar1 = F_00c7eb2d(param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FID_conflict___wcstoul_l_00c7ed3d */
ulong F_00c7ed3d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc7ed3du, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ulong uVar1;
  
  uVar1 = F_00c7eb2d(param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: _ValidateRead */
int F_00c7ed57(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7ed57u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (uint)(param_1 != (undefined *)0x0);
}

/* ref: FID_conflict__ValidateExecute_00c7ed69 */
uint F_00c7ed69(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7ed69u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(param_1 != 0);
}

/* ref: FID_conflict__ValidateExecute_00c7ed7b */
uint F_00c7ed7b(unsigned int gen_a0)
{
  GEN_ENTER(0xc7ed7bu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(param_1 != 0);
}

/* ref: $I10_OUTPUT */
uint F_00c7ed8d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc7ed8du, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  short * param_6 = (short *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * puVar1;
  int iVar2;
  ushort * puVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int eVar8;
  uint uVar9;
  ushort uVar10;
  ushort * puVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  short * psVar19;
  short * psVar20;
  ushort uVar21;
  short * psVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  char * pcVar26;
  
  uVar18 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60)));
  uVar9 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x5c)));
  uVar24 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72)));
  uVar7 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e)));
  iVar25 = CONCAT22((*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)),(*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2)));
  iVar2 = CONCAT22((*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)),(*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2)));
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(ushort *)(gen_frame + 0x1c)) = (ushort)param_3 & 0x8000;
  uVar14 = param_3 & 0x7fff;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xcccccccc;
  (*(undefined4 *)(gen_frame + 0x50)) = 0xcccccccc;
  ((ushort *)(gen_frame + 0x54))[0] = 0xcccc;
  ((ushort *)(gen_frame + 0x54))[1] = 0x3ffb;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((short)uVar14 == 0) {
    if ((param_2 != 0) || (param_1 != 0)) goto LAB_00c7eece;
    *param_6 = 0;
    *(byte *)(param_6 + 1) = (((*(ushort *)(gen_frame + 0x1c)) != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined2 *)((int)param_6 + 3) = 0x3001;
    *(undefined1 *)((int)param_6 + 5) = 0;
    iVar2 = iVar25;
  }
  else {
    if ((short)uVar14 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_00c7eeac;
          pcVar26 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_00c7eeac: ;
            pcVar26 = "1#QNAN";
            goto LAB_00c7eeb1;
          }
          pcVar26 = "1#IND";
        }
        eVar8 = F_00c49908(param_6 + 2,0x16,pcVar26);
        if (eVar8 != 0) goto LAB_00c7ee5e;
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
      else {
        pcVar26 = "1#SNAN";
LAB_00c7eeb1: ;
        eVar8 = F_00c49908(param_6 + 2,0x16,pcVar26);
        if (eVar8 != 0) {
LAB_00c7ee5e: ;
                    
          F_00c4c299(param_1,0,0,0,0,0);
        }
        *(undefined1 *)((int)param_6 + 3) = 6;
      }
      uVar18 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60)));
      uVar9 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x5c)));
      iVar2 = CONCAT22((*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)),(*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2)));
      uVar7 = 0;
      goto LAB_00c7f639;
    }
LAB_00c7eece: ;
    (*(short *)(gen_frame + 0x30)) = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 +
                       uVar14 * 0x4d10 >> 0x10);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = 0;
    uVar16 = -(int)(*(short *)(gen_frame + 0x30));
    (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)uVar14;
    (*(byte *)(gen_frame + 0x67)) = (byte)(uVar14 >> 8);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = (ushort)param_2;
    (*(ushort *)(gen_frame + 0x64)) = (ushort)(param_2 >> 0x10);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = (ushort)param_1;
    uVar9 = param_1 << 0x10;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = (undefined2)((uint)param_1 >> 0x10);
    uVar18 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60)));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x134bea0);
    if (uVar16 != 0) {
      puVar1 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      iVar2 = iVar25;
      uVar7 = (*(uint *)(gen_frame + 0x6e));
      uVar24 = (*(uint *)(gen_frame + 0x72));
      uVar9 = param_1 << 0x10;
      uVar18 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60)));
      if ((int)uVar16 < 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x134c000);
        uVar16 = (int)(*(short *)(gen_frame + 0x30));
        puVar1 = (*(undefined * PTR32 *)(gen_frame + 0x14));
        uVar7 = (*(uint *)(gen_frame + 0x6e));
        uVar24 = (*(uint *)(gen_frame + 0x72));
      }
joined_r0x00c7ef30: ;
      if (uVar16 != 0) {
        puVar1 = puVar1 + 0x54;
        uVar17 = (int)uVar16 >> 3;
        uVar14 = uVar16 & 7;
        uVar16 = uVar17;
        if (uVar14 != 0) {
          puVar11 = (ushort *)(puVar1 + uVar14 * 0xc);
          if (0x7fff < *puVar11) {
            uVar4 = *(undefined4 *)puVar11;
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 0)) = (undefined2)uVar4;
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2)) = (undefined2)((uint)uVar4 >> 0x10);
            puVar3 = puVar11 + 4;
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)) = (undefined2)*(undefined4 *)(puVar11 + 2);
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 6)) = (undefined2)((uint)*(undefined4 *)(puVar11 + 2) >> 0x10);
            puVar11 = (ushort *)((byte *)(gen_frame + 0x40));
            (*(undefined4 *)((char *)((byte *)(gen_frame + 0x40)) + 8)) = *(undefined4 *)puVar3;
            iVar2 = (int)CONCAT22((*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)),(*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2))) + -1;
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2)) = (undefined2)iVar2;
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)) = (undefined2)((uint)iVar2 >> 0x10);
          }
          (*(int *)(gen_frame + 0x34)) = 0;
          (*(byte *)(gen_frame + 0x6c)) = 0;
          (*(undefined1 *)(gen_frame + 0x6d)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = 0;
          uVar7 = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = 0;
          uVar24 = 0;
          (*(ushort *)(gen_frame + 0x76)) = 0;
          uVar12 = (puVar11[5] ^ CONCAT11((*(byte *)(gen_frame + 0x67)),(*(undefined1 *)(gen_frame + 0x66)))) & 0x8000;
          uVar13 = CONCAT11((*(byte *)(gen_frame + 0x67)),(*(undefined1 *)(gen_frame + 0x66))) & 0x7fff;
          uVar10 = puVar11[5] & 0x7fff;
          uVar21 = uVar10 + uVar13;
          if (((uVar13 < 0x7fff) && (uVar10 < 0x7fff)) && (uVar21 < 0xbffe)) {
            if (0x3fbf < uVar21) {
              if (((uVar13 == 0) &&
                  (uVar21 = uVar21 + 1,
                  (CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) & 0x7fffffff) == 0)) &&
                 ((uVar18 == 0 && (uVar9 == 0)))) {
                (*(undefined1 *)(gen_frame + 0x66)) = 0;
                (*(byte *)(gen_frame + 0x67)) = 0;
                goto joined_r0x00c7ef30;
              }
              if (((uVar10 != 0) ||
                  (uVar21 = uVar21 + 1, (*(uint *)(puVar11 + 4) & 0x7fffffff) != 0)) ||
                 ((*(int *)(puVar11 + 2) != 0 || (*(int *)puVar11 != 0)))) {
                (*(int *)(gen_frame + 0x28)) = 0;
                psVar22 = (short *)((int)&(*(uint *)(gen_frame + 0x6e)) + 2);
                (*(int *)(gen_frame + 0x3c)) = 5;
                do {
                  (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x3c));
                  if (0 < (*(int *)(gen_frame + 0x3c))) {
                    (*(ushort * PTR32 *)(gen_frame + 0xc)) = (ushort *)((int)&(*(uint *)(gen_frame + 0x5c)) + (*(int *)(gen_frame + 0x28)) * 2);
                    (*(ushort * PTR32 *)(gen_frame + 0x10)) = puVar11 + 4;
                    do {
                      bVar6 = false;
                      uVar7 = *(uint *)(psVar22 + -2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10));
                      if ((uVar7 < *(uint *)(psVar22 + -2)) ||
                         (uVar7 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)))) {
                        bVar6 = true;
                      }
                      *(uint *)(psVar22 + -2) = uVar7;
                      if (bVar6) {
                        *psVar22 = *psVar22 + 1;
                      }
                      (*(ushort * PTR32 *)(gen_frame + 0xc)) = (*(ushort * PTR32 *)(gen_frame + 0xc)) + 1;
                      (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + -1;
                      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + -1;
                    } while (0 < (*(int *)(gen_frame + 0x2c)));
                  }
                  psVar22 = psVar22 + 1;
                  (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
                  (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + -1;
                } while (0 < (*(int *)(gen_frame + 0x3c)));
                uVar21 = uVar21 + 0xc002;
                if ((short)uVar21 < 1) {
LAB_00c7f0e3: ;
                  uVar21 = uVar21 - 1;
                  if ((short)uVar21 < 0) {
                    uVar7 = (uint)(ushort)-uVar21;
                    uVar21 = 0;
                    do {
                      if (((*(byte *)(gen_frame + 0x6c)) & 1) != 0) {
                        (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
                      }
                      iVar23 = CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)));
                      uVar9 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)));
                      iVar25 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)));
                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2))) >> 1);
                      (*(ushort *)(gen_frame + 0x76)) = (*(ushort *)(gen_frame + 0x76)) >> 1;
                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) =
                           (ushort)(*(uint *)(gen_frame + 0x72)) >> 1 | (ushort)((uint)(iVar23 << 0x1f) >> 0x10);
                      uVar24 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) >> 1;
                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) =
                           (ushort)(*(uint *)(gen_frame + 0x6e)) >> 1 | (ushort)((uint)(iVar25 << 0x1f) >> 0x10);
                      uVar7 = uVar7 - 1;
                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = (ushort)(uVar9 >> 1);
                      (*(byte *)(gen_frame + 0x6c)) = (byte)uVar24;
                      (*(undefined1 *)(gen_frame + 0x6d)) = (undefined1)(uVar24 >> 8);
                    } while (uVar7 != 0);
                    if ((*(int *)(gen_frame + 0x34)) != 0) {
                      (*(byte *)(gen_frame + 0x6c)) = (*(byte *)(gen_frame + 0x6c)) | 1;
                    }
                  }
                }
                else {
                  do {
                    uVar13 = (ushort)(*(uint *)(gen_frame + 0x72));
                    uVar10 = (ushort)(*(uint *)(gen_frame + 0x6e));
                    if (((*(ushort *)(gen_frame + 0x76)) & 0x8000) != 0) break;
                    iVar25 = (int)CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) << 1;
                    (*(byte *)(gen_frame + 0x6c)) = (byte)iVar25;
                    (*(undefined1 *)(gen_frame + 0x6d)) = (undefined1)((uint)iVar25 >> 8);
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) = (ushort)((uint)iVar25 >> 0x10);
                    iVar25 = (int)CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2))) * 2;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = (ushort)iVar25 | uVar10 >> 0xf;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) = (ushort)((uint)iVar25 >> 0x10);
                    iVar25 = (int)CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2))) * 2;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = (ushort)iVar25 | uVar13 >> 0xf;
                    uVar21 = uVar21 - 1;
                    (*(ushort *)(gen_frame + 0x76)) = (ushort)((uint)iVar25 >> 0x10);
                  } while (0 < (short)uVar21);
                  if ((short)uVar21 < 1) goto LAB_00c7f0e3;
                }
                if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) ||
                   (uVar24 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72))),
                   uVar7 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e))),
                   (CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) & 0x1ffff) == 0x18000))
                {
                  if ((int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e))) == -1) {
                    uVar7 = 0;
                    if ((int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72))) == -1) {
                      if ((*(ushort *)(gen_frame + 0x76)) == 0xffff) {
                        (*(ushort *)(gen_frame + 0x76)) = 0x8000;
                        uVar21 = uVar21 + 1;
                        uVar24 = 0;
                        uVar7 = 0;
                      }
                      else {
                        (*(ushort *)(gen_frame + 0x76)) = (*(ushort *)(gen_frame + 0x76)) + 1;
                        uVar24 = 0;
                        uVar7 = 0;
                      }
                    }
                    else {
                      uVar24 = (int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72))) + 1;
                    }
                  }
                  else {
                    uVar7 = (int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e))) + 1;
                    uVar24 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72)));
                  }
                }
                if (uVar21 < 0x7fff) {
                  (*(byte *)(gen_frame + 0x67)) = (byte)(uVar21 >> 8) | (byte)(uVar12 >> 8);
                  (*(uint *)(gen_frame + 0x5c)) = uVar7;
                  (*(uint *)(gen_frame + 0x60)) = uVar24;
                  (*(ushort *)(gen_frame + 0x64)) = (*(ushort *)(gen_frame + 0x76));
                  (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)uVar21;
                  uVar9 = uVar7;
                  uVar18 = uVar24;
                }
                else {
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = 0;
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = 0;
                  iVar25 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
                  (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar25;
                  (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar25 >> 0x10);
                  (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar25 >> 0x18);
                  uVar9 = 0;
                  uVar18 = 0;
                }
                goto joined_r0x00c7ef30;
              }
            }
            (*(ushort *)(gen_frame + 0x64)) = 0;
            (*(undefined1 *)(gen_frame + 0x66)) = 0;
            (*(byte *)(gen_frame + 0x67)) = 0;
          }
          else {
            iVar25 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
            (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar25;
            (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar25 >> 0x10);
            (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar25 >> 0x18);
          }
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = 0;
          uVar7 = 0;
          uVar24 = 0;
          uVar9 = 0;
          uVar18 = 0;
        }
        goto joined_r0x00c7ef30;
      }
    }
    uVar14 = CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64))));
    (*(uint *)(gen_frame + 0x6e)) = uVar7;
    (*(uint *)(gen_frame + 0x72)) = uVar24;
    if (0x3ffe < (ushort)(uVar14 >> 0x10)) {
      (*(short *)(gen_frame + 0x30)) = (*(short *)(gen_frame + 0x30)) + 1;
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(byte *)(gen_frame + 0x6c)) = 0;
      (*(undefined1 *)(gen_frame + 0x6d)) = 0;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) = 0;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = 0;
      (*(uint *)(gen_frame + 0x6e)) = 0;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) = 0;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = 0;
      (*(uint *)(gen_frame + 0x72)) = 0;
      (*(ushort *)(gen_frame + 0x76)) = 0;
      uVar7 = uVar14 >> 0x10 & 0x7fff;
      iVar25 = uVar7 + 0x3ffb;
      if (((ushort)uVar7 < 0x7fff) && ((ushort)iVar25 < 0xbffe)) {
        if (0x3fbf < (ushort)iVar25) {
          if (((((ushort)uVar7 == 0) &&
               (iVar25 = uVar7 + 0x3ffc,
               (CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) & 0x7fffffff) == 0)) &&
              (uVar18 == 0)) && (uVar9 == 0)) {
            (*(undefined1 *)(gen_frame + 0x66)) = 0;
            (*(byte *)(gen_frame + 0x67)) = 0;
            goto LAB_00c7f471;
          }
          (*(int *)(gen_frame + 0x28)) = 0;
          psVar22 = (short *)((int)&(*(uint *)(gen_frame + 0x6e)) + 2);
          (*(int *)(gen_frame + 0x3c)) = 5;
          do {
            (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x3c));
            if (0 < (*(int *)(gen_frame + 0x3c))) {
              (*(ushort * PTR32 *)(gen_frame + 0x24)) = ((ushort *)(gen_frame + 0x54));
              puVar11 = (ushort *)((int)&(*(uint *)(gen_frame + 0x5c)) + (*(int *)(gen_frame + 0x28)) * 2);
              do {
                bVar6 = false;
                uVar7 = *(uint *)(psVar22 + -2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x24)) * (uint)*puVar11;
                if ((uVar7 < *(uint *)(psVar22 + -2)) || (uVar7 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0x24)) * (uint)*puVar11))
                {
                  bVar6 = true;
                }
                *(uint *)(psVar22 + -2) = uVar7;
                if (bVar6) {
                  *psVar22 = *psVar22 + 1;
                }
                (*(ushort * PTR32 *)(gen_frame + 0x24)) = (*(ushort * PTR32 *)(gen_frame + 0x24)) + -1;
                puVar11 = puVar11 + 1;
                (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + -1;
              } while (0 < (*(int *)(gen_frame + 0x34)));
            }
            psVar22 = psVar22 + 1;
            (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
            (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + -1;
          } while (0 < (*(int *)(gen_frame + 0x3c)));
          iVar25 = iVar25 + 0xc002;
          if ((short)iVar25 < 1) {
LAB_00c7f36c: ;
            uVar21 = (ushort)(iVar25 + 0xffff);
            if ((short)uVar21 < 0) {
              uVar7 = -(iVar25 + 0xffff);
              uVar9 = uVar7 & 0xffff;
              uVar21 = uVar21 + (short)uVar7;
              do {
                if (((*(byte *)(gen_frame + 0x6c)) & 1) != 0) {
                  (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
                }
                iVar23 = CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)));
                uVar7 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)));
                iVar25 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)));
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2))) >> 1);
                (*(ushort *)(gen_frame + 0x76)) = (*(ushort *)(gen_frame + 0x76)) >> 1;
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) = (ushort)(*(uint *)(gen_frame + 0x72)) >> 1 | (ushort)((uint)(iVar23 << 0x1f) >> 0x10);
                uVar24 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) >> 1;
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) = (ushort)(*(uint *)(gen_frame + 0x6e)) >> 1 | (ushort)((uint)(iVar25 << 0x1f) >> 0x10);
                uVar9 = uVar9 - 1;
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = (ushort)(uVar7 >> 1);
                (*(byte *)(gen_frame + 0x6c)) = (byte)uVar24;
                (*(undefined1 *)(gen_frame + 0x6d)) = (undefined1)(uVar24 >> 8);
              } while (uVar9 != 0);
              if ((*(int *)(gen_frame + 0x2c)) != 0) {
                (*(byte *)(gen_frame + 0x6c)) = (*(byte *)(gen_frame + 0x6c)) | 1;
              }
            }
          }
          else {
            do {
              uVar10 = (ushort)(*(uint *)(gen_frame + 0x72));
              uVar21 = (ushort)(*(uint *)(gen_frame + 0x6e));
              if ((short)(*(ushort *)(gen_frame + 0x76)) < 0) break;
              iVar23 = (int)CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) << 1;
              (*(byte *)(gen_frame + 0x6c)) = (byte)iVar23;
              (*(undefined1 *)(gen_frame + 0x6d)) = (undefined1)((uint)iVar23 >> 8);
              (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) = (ushort)((uint)iVar23 >> 0x10);
              iVar23 = (int)CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2))) * 2;
              (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = (ushort)iVar23 | uVar21 >> 0xf;
              (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) = (ushort)((uint)iVar23 >> 0x10);
              iVar23 = (int)CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2))) * 2;
              (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = (ushort)iVar23 | uVar10 >> 0xf;
              iVar25 = iVar25 + 0xffff;
              (*(ushort *)(gen_frame + 0x76)) = (ushort)((uint)iVar23 >> 0x10);
            } while (0 < (short)iVar25);
            uVar21 = (ushort)iVar25;
            if ((short)uVar21 < 1) goto LAB_00c7f36c;
          }
          if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) ||
             ((*(uint *)(gen_frame + 0x72)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72))),
             (*(uint *)(gen_frame + 0x6e)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e))),
             (CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) & 0x1ffff) == 0x18000)) {
            if ((int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e))) == -1) {
              (*(uint *)(gen_frame + 0x6e)) = 0;
              if ((int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72))) == -1) {
                if ((*(ushort *)(gen_frame + 0x76)) == 0xffff) {
                  (*(ushort *)(gen_frame + 0x76)) = 0x8000;
                  uVar21 = uVar21 + 1;
                  (*(uint *)(gen_frame + 0x72)) = 0;
                  (*(uint *)(gen_frame + 0x6e)) = 0;
                }
                else {
                  (*(ushort *)(gen_frame + 0x76)) = (*(ushort *)(gen_frame + 0x76)) + 1;
                  (*(uint *)(gen_frame + 0x72)) = 0;
                  (*(uint *)(gen_frame + 0x6e)) = 0;
                }
              }
              else {
                (*(uint *)(gen_frame + 0x72)) = (int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72))) + 1;
              }
            }
            else {
              (*(uint *)(gen_frame + 0x6e)) = (int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e))) + 1;
              (*(uint *)(gen_frame + 0x72)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72)));
            }
          }
          if (uVar21 < 0x7fff) {
            (*(byte *)(gen_frame + 0x67)) = (byte)(uVar21 >> 8) | (*(byte *)(gen_frame + 0x67)) & 0x80;
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = (ushort)(*(uint *)(gen_frame + 0x6e));
            (*(ushort *)(gen_frame + 0x64)) = (*(ushort *)(gen_frame + 0x76));
            (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)uVar21;
            uVar9 = (*(uint *)(gen_frame + 0x6e));
            uVar18 = (*(uint *)(gen_frame + 0x72));
          }
          else {
            iVar25 = ((((*(byte *)(gen_frame + 0x67)) & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
            (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar25;
            (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar25 >> 0x10);
            (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar25 >> 0x18);
            uVar9 = 0;
            uVar18 = 0;
          }
          goto LAB_00c7f471;
        }
        iVar25 = 0;
      }
      else {
        iVar25 = ((((*(byte *)(gen_frame + 0x67)) & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
      }
      (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar25;
      (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar25 >> 0x10);
      (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar25 >> 0x18);
      (*(uint *)(gen_frame + 0x6e)) = 0;
      (*(uint *)(gen_frame + 0x72)) = 0;
      uVar9 = 0;
      uVar18 = 0;
    }
LAB_00c7f471: ;
    *param_6 = (*(short *)(gen_frame + 0x30));
    iVar25 = param_4;
    if (((param_5 & 1) == 0) || (iVar25 = param_4 + (*(short *)(gen_frame + 0x30)), 0 < iVar25)) {
      if (0x15 < iVar25) {
        iVar25 = 0x15;
      }
      iVar23 = (CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) >> 0x10) - 0x3ffe;
      (*(undefined1 *)(gen_frame + 0x66)) = 0;
      (*(byte *)(gen_frame + 0x67)) = 0;
      (*(int *)(gen_frame + 0x38)) = 8;
      uVar7 = uVar9;
      uVar24 = uVar18;
      do {
        uVar9 = uVar7 << 1;
        uVar18 = uVar24 * 2 | uVar7 >> 0x1f;
        iVar5 = (int)CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) * 2;
        (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar5 | (ushort)(uVar24 >> 0x1f);
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + -1;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = (undefined2)uVar18;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = (ushort)(uVar24 * 2 >> 0x10);
        (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar5 >> 0x10);
        (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar5 >> 0x18);
        uVar7 = uVar9;
        uVar24 = uVar18;
      } while ((*(int *)(gen_frame + 0x38)) != 0);
      if ((iVar23 < 0) && (uVar24 = -iVar23 & 0xff, uVar24 != 0)) {
        do {
          iVar23 = CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64))));
          uVar9 = CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) >> 1;
          (*(ushort *)(gen_frame + 0x64)) = (ushort)uVar9;
          (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)(uVar9 >> 0x10);
          (*(byte *)(gen_frame + 0x67)) = (*(byte *)(gen_frame + 0x67)) >> 1;
          uVar14 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60))) >> 1;
          uVar18 = uVar14 | iVar23 << 0x1f;
          uVar9 = uVar7 >> 1 | (int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60))) << 0x1f;
          uVar24 = uVar24 - 1;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = (undefined2)uVar14;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = (ushort)(uVar18 >> 0x10);
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = (undefined2)(uVar7 >> 1);
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = (ushort)(uVar9 >> 0x10);
          uVar7 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x5c)));
        } while (0 < (int)uVar24);
      }
      psVar22 = param_6 + 2;
      psVar19 = psVar22;
      for (iVar25 = iVar25 + 1; 0 < iVar25; iVar25 = iVar25 + -1) {
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = (ushort)(uVar18 >> 0x10);
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = (undefined2)uVar18;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = (ushort)(uVar9 >> 0x10);
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = (undefined2)uVar9;
        iVar2 = CONCAT22((undefined2)(*(uint *)(gen_frame + 0x60)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)));
        ((byte *)(gen_frame + 0x40))[8] = (char)(*(ushort *)(gen_frame + 0x64));
        ((byte *)(gen_frame + 0x40))[9] = (char)((*(ushort *)(gen_frame + 0x64)) >> 8);
        ((byte *)(gen_frame + 0x40))[10] = (*(undefined1 *)(gen_frame + 0x66));
        ((byte *)(gen_frame + 0x40))[0xb] = (*(byte *)(gen_frame + 0x67));
        uVar24 = ((int)CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) * 2 |
                 (uint)((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) >> 0xf)) * 2 | (uVar18 & 0x7fffffff) >> 0x1e;
        uVar14 = (uVar18 * 2 | (uint)((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) >> 0xf)) * 2 | (uVar9 & 0x7fffffff) >> 0x1e;
        uVar7 = uVar9 * 5;
        if ((uVar7 < uVar9 * 4) || (uVar16 = uVar14, uVar7 < uVar9)) {
          uVar16 = uVar14 + 1;
          bVar6 = false;
          if ((uVar16 < uVar14) || (uVar16 == 0)) {
            bVar6 = true;
          }
          if (bVar6) {
            uVar24 = uVar24 + 1;
          }
        }
        uVar14 = uVar18 + uVar16;
        if ((uVar14 < uVar16) || (uVar14 < uVar18)) {
          uVar24 = uVar24 + 1;
        }
        iVar23 = (uVar24 + (int)CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64))))) * 2;
        (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar23 | (ushort)(uVar14 >> 0x1f);
        uVar9 = uVar9 * 10;
        (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar23 >> 0x10);
        uVar18 = uVar14 * 2 | uVar7 >> 0x1f;
        *(char *)psVar19 = (char)((uint)iVar23 >> 0x18) + '0';
        psVar19 = (short *)((int)psVar19 + 1);
        (*(byte *)(gen_frame + 0x67)) = 0;
        (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 0)) = (undefined2)(*(uint *)(gen_frame + 0x5c));
        (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 6)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2));
      }
      psVar20 = psVar19 + -1;
      if (*(char *)((int)psVar19 + -1) < '5') {
        for (; (psVar22 <= psVar20 && ((char)*psVar20 == '0'));
            psVar20 = (short *)((int)psVar20 + -1)) {
        }
        if (psVar20 < psVar22) {
          *param_6 = 0;
          *(undefined1 *)((int)param_6 + 3) = 1;
          *(byte *)(param_6 + 1) = (((*(ushort *)(gen_frame + 0x1c)) != 0x8000) - 1U & 0xd) + 0x20;
          *(char *)psVar22 = '0';
          *(undefined1 *)((int)param_6 + 5) = 0;
          goto LAB_00c7ee26;
        }
      }
      else {
        for (; (psVar22 <= psVar20 && ((char)*psVar20 == '9'));
            psVar20 = (short *)((int)psVar20 + -1)) {
          *(char *)psVar20 = '0';
        }
        if (psVar20 < psVar22) {
          psVar20 = (short *)((int)psVar20 + 1);
          *param_6 = *param_6 + 1;
        }
        *(char *)psVar20 = (char)*psVar20 + '\x01';
      }
      cVar15 = ((char)psVar20 - (char)param_6) + -3;
      *(char *)((int)param_6 + 3) = cVar15;
      *(undefined1 *)(cVar15 + 4 + (int)param_6) = 0;
      uVar7 = 1;
      goto LAB_00c7f639;
    }
    *param_6 = 0;
    *(undefined2 *)((int)param_6 + 3) = 0x3001;
    *(byte *)(param_6 + 1) = (((*(ushort *)(gen_frame + 0x1c)) != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_00c7ee26: ;
  uVar7 = 1;
LAB_00c7f639: ;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x40)) + 2)) = iVar2;
  (*(uint *)(gen_frame + 0x5c)) = uVar9;
  (*(uint *)(gen_frame + 0x60)) = uVar18;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar7;
}

/* ref: __set_controlfp */
unsigned int F_00c7f685(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7f685u, gen_a0, gen_a1, 0u, 0u);
  uint _NewValue = (uint)gen_a0;
  uint _Mask = (uint)gen_a1;
  int eVar1;
  undefined4 unaff_EDI = 0;
  if ((((_NewValue != 0x9001f) || (_Mask != 0xffffffff)) || ((((undefined2)0x27f) & 0x1f3d) != 0x23d))
     || ((REFG(int, 0x15e42a0) != 0 && ((MXCSR & 0xfec0) != 0x1e80)))) {
    eVar1 = F_00c7ad58((uint *)0x0,_NewValue,_Mask & 0xfff7ffff);
    if (eVar1 != 0) {
                    
      F_00c4c299(unaff_EDI,0,0,0,0,0);
    }
  }
  return 0;
}

/* ref: __abstract_cw */
uint F_00c7f6f8(unsigned int gen_a0)
{
  GEN_ENTER(0xc7f6f8u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}

/* ref: __hw_cw */
ushort F_00c7f797(unsigned int gen_a0)
{
  GEN_ENTER(0xc7f797u, gen_a0, 0u, 0u, 0u);
  uint in_ebx = (uint)gen_a0;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = (ushort)((in_ebx & 0x10) != 0);
  if ((in_ebx & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((in_ebx & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((in_ebx & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((in_ebx & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((in_ebx & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = in_ebx & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((in_ebx & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((in_ebx & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((in_ebx & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}

/* ref: FID_conflict___abstract_sw_00c7f825 */
uint F_00c7f825(unsigned int gen_a0)
{
  GEN_ENTER(0xc7f825u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (((byte)param_1 & 0x3f) != 0) {
    if (((byte)param_1 & 1) != 0) {
      uVar1 = 0x10;
    }
    if (((byte)param_1 & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if (((byte)param_1 & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if (((byte)param_1 & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if (((byte)param_1 & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if (((byte)param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  return uVar1;
}

/* ref: ___hw_cw_sse2 */
uint F_00c7f908(unsigned int gen_a0)
{
  GEN_ENTER(0xc7f908u, gen_a0, 0u, 0u, 0u);
  uint in_edx = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((in_edx & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((in_edx & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((in_edx & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((in_edx & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((in_edx & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((in_edx & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = in_edx & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = in_edx & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}

/* ref: FID_conflict___abstract_sw_00c7f9a8 */
uint F_00c7f9a8(unsigned int gen_a0)
{
  GEN_ENTER(0xc7f9a8u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (((byte)param_1 & 0x3f) != 0) {
    if (((byte)param_1 & 1) != 0) {
      uVar1 = 0x10;
    }
    if (((byte)param_1 & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if (((byte)param_1 & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if (((byte)param_1 & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if (((byte)param_1 & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if (((byte)param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  return uVar1;
}

/* ref: ___statusfp_sse2 */
uint F_00c7fac1(void)
{
  GEN_ENTER(0xc7fac1u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c6f621();
  uVar2 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  return uVar2;
}

/* ref: ___clearfp_sse2 */
uint F_00c7fafc(void)
{
  GEN_ENTER(0xc7fafcu, 0u, 0u, 0u, 0u);
  MXCSR = MXCSR & 0xffffffc0;
  return 0;
}

/* ref: ___control87_sse2 */
uint F_00c7fb4c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7fb4cu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((char)MXCSR < '\0') {
    uVar1 = 0x10;
  }
  if ((MXCSR & 0x200) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((MXCSR & 0x400) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((MXCSR & 0x800) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((MXCSR & 0x1000) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((MXCSR & 0x100) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 != 0) {
    if (uVar2 == 0x2000) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x4000) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0x6000) {
      uVar1 = uVar1 | 0x300;
    }
  }
  uVar2 = MXCSR & 0x8040;
  if (uVar2 == 0x40) {
    uVar1 = uVar1 | 0x2000000;
  }
  else if (uVar2 == 0x8000) {
    uVar1 = uVar1 | 0x3000000;
  }
  else if (uVar2 == 0x8040) {
    uVar1 = uVar1 | 0x1000000;
  }
  uVar2 = ~((*(uint *)&gen_args[1]) & 0x308031f) & uVar1 | (*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1]) & 0x308031f;
  if (uVar2 != uVar1) {
    uVar1 = F_00c7f908(uVar2);
    F_00c6f63f(uVar1);
    uVar1 = 0;
    if ((char)MXCSR < '\0') {
      uVar1 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
    uVar2 = MXCSR & 0x6000;
    if (uVar2 != 0) {
      if (uVar2 == 0x2000) {
        uVar1 = uVar1 | 0x100;
      }
      else if (uVar2 == 0x4000) {
        uVar1 = uVar1 | 0x200;
      }
      else if (uVar2 == 0x6000) {
        uVar1 = uVar1 | 0x300;
      }
    }
    uVar2 = MXCSR & 0x8040;
    if (uVar2 == 0x40) {
      uVar1 = uVar1 | 0x2000000;
    }
    else if (uVar2 == 0x8000) {
      uVar1 = uVar1 | 0x3000000;
    }
    else if (uVar2 == 0x8040) {
      uVar1 = uVar1 | 0x1000000;
    }
  }
  return uVar1;
}

/* ref: ___control87_2 */
int F_00c7fdf5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7fdf5u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uVar3 = 0;
  if ((*(uint * PTR32 *)&gen_args[2]) != (uint *)0x0) {
    if ((((undefined2)0x27f) & 1) != 0) {
      uVar3 = 0x10;
    }
    if ((((undefined2)0x27f) & 4) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((((undefined2)0x27f) & 8) != 0) {
      uVar3 = uVar3 | 4;
    }
    if ((((undefined2)0x27f) & 0x10) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((((undefined2)0x27f) & 0x20) != 0) {
      uVar3 = uVar3 | 1;
    }
    if ((((undefined2)0x27f) & 2) != 0) {
      uVar3 = uVar3 | 0x80000;
    }
    uVar1 = ((undefined2)0x27f) & 0xc00;
    if ((((undefined2)0x27f) & 0xc00) != 0) {
      if (uVar1 == 0x400) {
        uVar3 = uVar3 | 0x100;
      }
      else if (uVar1 == 0x800) {
        uVar3 = uVar3 | 0x200;
      }
      else if (uVar1 == 0xc00) {
        uVar3 = uVar3 | 0x300;
      }
    }
    if ((((undefined2)0x27f) & 0x300) == 0) {
      uVar3 = uVar3 | 0x20000;
    }
    else if ((((undefined2)0x27f) & 0x300) == 0x200) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((((undefined2)0x27f) & 0x1000) != 0) {
      uVar3 = uVar3 | 0x40000;
    }
    uVar4 = ~(*(uint *)&gen_args[1]) & uVar3 | (*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1]);
    if (uVar4 != uVar3) {
      uVar1 = F_00c7f797(uVar4);
      uVar4 = 0;
      if ((uVar1 & 1) != 0) {
        uVar4 = 0x10;
      }
      if ((uVar1 & 4) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((uVar1 & 8) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((uVar1 & 0x10) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((uVar1 & 0x20) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((uVar1 & 2) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar2 = uVar1 & 0xc00;
      if ((uVar1 & 0xc00) != 0) {
        if (uVar2 == 0x400) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar2 == 0x800) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar2 == 0xc00) {
          uVar4 = uVar4 | 0x300;
        }
      }
      if ((uVar1 & 0x300) == 0) {
        uVar4 = uVar4 | 0x20000;
      }
      else if ((uVar1 & 0x300) == 0x200) {
        uVar4 = uVar4 | 0x10000;
      }
      if ((uVar1 & 0x1000) != 0) {
        uVar4 = uVar4 | 0x40000;
      }
    }
    *(*(uint * PTR32 *)&gen_args[2]) = uVar4;
  }
  if ((*(uint * PTR32 *)&gen_args[3]) != (uint *)0x0) {
    uVar3 = 0;
    if (REFG(int, 0x15e42a0) == 0) {
      *(*(uint * PTR32 *)&gen_args[3]) = 0;
    }
    else {
      if ((char)MXCSR < '\0') {
        uVar3 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar3 = uVar3 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar3 = uVar3 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar3 = uVar3 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar3 = uVar3 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar3 = uVar3 | 0x80000;
      }
      uVar4 = MXCSR & 0x6000;
      if (uVar4 != 0) {
        if (uVar4 == 0x2000) {
          uVar3 = uVar3 | 0x100;
        }
        else if (uVar4 == 0x4000) {
          uVar3 = uVar3 | 0x200;
        }
        else if (uVar4 == 0x6000) {
          uVar3 = uVar3 | 0x300;
        }
      }
      uVar4 = MXCSR & 0x8040;
      if (uVar4 == 0x40) {
        uVar3 = uVar3 | 0x2000000;
      }
      else if (uVar4 == 0x8000) {
        uVar3 = uVar3 | 0x3000000;
      }
      else if (uVar4 == 0x8040) {
        uVar3 = uVar3 | 0x1000000;
      }
      uVar4 = ~((*(uint *)&gen_args[1]) & 0x308031f) & uVar3 | (*(uint *)&gen_args[1]) & 0x308031f & (*(uint *)&gen_args[0]);
      if (uVar4 != uVar3) {
        uVar3 = F_00c7f908(uVar4);
        F_00c6f63f(uVar3);
        uVar3 = 0;
        if ((char)MXCSR < '\0') {
          uVar3 = 0x10;
        }
        if ((MXCSR & 0x200) != 0) {
          uVar3 = uVar3 | 8;
        }
        if ((MXCSR & 0x400) != 0) {
          uVar3 = uVar3 | 4;
        }
        if ((MXCSR & 0x800) != 0) {
          uVar3 = uVar3 | 2;
        }
        if ((MXCSR & 0x1000) != 0) {
          uVar3 = uVar3 | 1;
        }
        if ((MXCSR & 0x100) != 0) {
          uVar3 = uVar3 | 0x80000;
        }
        uVar4 = MXCSR & 0x6000;
        if (uVar4 != 0) {
          if (uVar4 == 0x2000) {
            uVar3 = uVar3 | 0x100;
          }
          else if (uVar4 == 0x4000) {
            uVar3 = uVar3 | 0x200;
          }
          else if (uVar4 == 0x6000) {
            uVar3 = uVar3 | 0x300;
          }
        }
        uVar4 = MXCSR & 0x8040;
        if (uVar4 == 0x40) {
          uVar3 = uVar3 | 0x2000000;
        }
        else if (uVar4 == 0x8000) {
          uVar3 = uVar3 | 0x3000000;
        }
        else if (uVar4 == 0x8040) {
          uVar3 = uVar3 | 0x1000000;
        }
      }
      *(*(uint * PTR32 *)&gen_args[3]) = uVar3;
    }
  }
  return 1;
}

/* ref: __control87 */
uint F_00c8010c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8010cu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  ushort uVar2;
  uint in_ebx;
  uint uVar3;
  uint uVar4;
  uVar4 = 0;
  if ((((undefined2)0x27f) & 1) != 0) {
    uVar4 = 0x10;
  }
  if ((((undefined2)0x27f) & 4) != 0) {
    uVar4 = uVar4 | 8;
  }
  if ((((undefined2)0x27f) & 8) != 0) {
    uVar4 = uVar4 | 4;
  }
  if ((((undefined2)0x27f) & 0x10) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((((undefined2)0x27f) & 0x20) != 0) {
    uVar4 = uVar4 | 1;
  }
  if ((((undefined2)0x27f) & 2) != 0) {
    uVar4 = uVar4 | 0x80000;
  }
  uVar1 = ((undefined2)0x27f) & 0xc00;
  if ((((undefined2)0x27f) & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar4 = uVar4 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar4 = uVar4 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar4 = uVar4 | 0x300;
    }
  }
  if ((((undefined2)0x27f) & 0x300) == 0) {
    uVar4 = uVar4 | 0x20000;
  }
  else if ((((undefined2)0x27f) & 0x300) == 0x200) {
    uVar4 = uVar4 | 0x10000;
  }
  if ((((undefined2)0x27f) & 0x1000) != 0) {
    uVar4 = uVar4 | 0x40000;
  }
  in_ebx = ~(*(uint *)&gen_args[1]) & uVar4 | (*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1]);
  if (in_ebx != uVar4) {
    uVar1 = F_00c7f797(in_ebx);
    in_ebx = 0;
    if ((uVar1 & 1) != 0) {
      in_ebx = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      in_ebx = in_ebx | 8;
    }
    if ((uVar1 & 8) != 0) {
      in_ebx = in_ebx | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      in_ebx = in_ebx | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      in_ebx = in_ebx | 1;
    }
    if ((uVar1 & 2) != 0) {
      in_ebx = in_ebx | 0x80000;
    }
    uVar2 = uVar1 & 0xc00;
    if ((uVar1 & 0xc00) != 0) {
      if (uVar2 == 0x400) {
        in_ebx = in_ebx | 0x100;
      }
      else if (uVar2 == 0x800) {
        in_ebx = in_ebx | 0x200;
      }
      else if (uVar2 == 0xc00) {
        in_ebx = in_ebx | 0x300;
      }
    }
    if ((uVar1 & 0x300) == 0) {
      in_ebx = in_ebx | 0x20000;
    }
    else if ((uVar1 & 0x300) == 0x200) {
      in_ebx = in_ebx | 0x10000;
    }
    if ((uVar1 & 0x1000) != 0) {
      in_ebx = in_ebx | 0x40000;
    }
  }
  uVar4 = 0;
  if (REFG(int, 0x15e42a0) != 0) {
    if ((char)MXCSR < '\0') {
      uVar4 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar4 = uVar4 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar4 = uVar4 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar4 = uVar4 | 0x300;
      }
    }
    uVar3 = MXCSR & 0x8040;
    if (uVar3 == 0x40) {
      uVar4 = uVar4 | 0x2000000;
    }
    else if (uVar3 == 0x8000) {
      uVar4 = uVar4 | 0x3000000;
    }
    else if (uVar3 == 0x8040) {
      uVar4 = uVar4 | 0x1000000;
    }
    uVar3 = ~((*(uint *)&gen_args[1]) & 0x308031f) & uVar4 | (*(uint *)&gen_args[1]) & 0x308031f & (*(uint *)&gen_args[0]);
    if (uVar3 != uVar4) {
      uVar4 = F_00c7f908(uVar3);
      F_00c6f63f(uVar4);
      uVar4 = 0;
      if ((char)MXCSR < '\0') {
        uVar4 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar4 = uVar4 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar4 = uVar4 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar4 = uVar4 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar4 = uVar4 | 0x1000000;
      }
    }
    uVar3 = uVar4 ^ in_ebx;
    in_ebx = uVar4 | in_ebx;
    if ((uVar3 & 0x8031f) != 0) {
      in_ebx = in_ebx | 0x80000000;
    }
  }
  return in_ebx;
}

/* ref: __controlfp */
uint F_00c8041e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8041eu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  ushort uVar2;
  uint in_ebx;
  uint uVar3;
  uint uVar4;
  uVar4 = 0;
  if ((((undefined2)0x27f) & 1) != 0) {
    uVar4 = 0x10;
  }
  if ((((undefined2)0x27f) & 4) != 0) {
    uVar4 = uVar4 | 8;
  }
  if ((((undefined2)0x27f) & 8) != 0) {
    uVar4 = uVar4 | 4;
  }
  if ((((undefined2)0x27f) & 0x10) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((((undefined2)0x27f) & 0x20) != 0) {
    uVar4 = uVar4 | 1;
  }
  if ((((undefined2)0x27f) & 2) != 0) {
    uVar4 = uVar4 | 0x80000;
  }
  uVar1 = ((undefined2)0x27f) & 0xc00;
  if ((((undefined2)0x27f) & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar4 = uVar4 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar4 = uVar4 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar4 = uVar4 | 0x300;
    }
  }
  if ((((undefined2)0x27f) & 0x300) == 0) {
    uVar4 = uVar4 | 0x20000;
  }
  else if ((((undefined2)0x27f) & 0x300) == 0x200) {
    uVar4 = uVar4 | 0x10000;
  }
  if ((((undefined2)0x27f) & 0x1000) != 0) {
    uVar4 = uVar4 | 0x40000;
  }
  in_ebx = ~((*(uint *)&gen_args[1]) & 0xfff7ffff) & uVar4 | (*(uint *)&gen_args[1]) & 0xfff7ffff & (*(uint *)&gen_args[0]);
  if (in_ebx != uVar4) {
    uVar1 = F_00c7f797(in_ebx);
    in_ebx = 0;
    if ((uVar1 & 1) != 0) {
      in_ebx = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      in_ebx = in_ebx | 8;
    }
    if ((uVar1 & 8) != 0) {
      in_ebx = in_ebx | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      in_ebx = in_ebx | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      in_ebx = in_ebx | 1;
    }
    if ((uVar1 & 2) != 0) {
      in_ebx = in_ebx | 0x80000;
    }
    uVar2 = uVar1 & 0xc00;
    if ((uVar1 & 0xc00) != 0) {
      if (uVar2 == 0x400) {
        in_ebx = in_ebx | 0x100;
      }
      else if (uVar2 == 0x800) {
        in_ebx = in_ebx | 0x200;
      }
      else if (uVar2 == 0xc00) {
        in_ebx = in_ebx | 0x300;
      }
    }
    if ((uVar1 & 0x300) == 0) {
      in_ebx = in_ebx | 0x20000;
    }
    else if ((uVar1 & 0x300) == 0x200) {
      in_ebx = in_ebx | 0x10000;
    }
    if ((uVar1 & 0x1000) != 0) {
      in_ebx = in_ebx | 0x40000;
    }
  }
  uVar4 = 0;
  if (REFG(int, 0x15e42a0) != 0) {
    if ((char)MXCSR < '\0') {
      uVar4 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar4 = uVar4 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar4 = uVar4 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar4 = uVar4 | 0x300;
      }
    }
    uVar3 = MXCSR & 0x8040;
    if (uVar3 == 0x40) {
      uVar4 = uVar4 | 0x2000000;
    }
    else if (uVar3 == 0x8000) {
      uVar4 = uVar4 | 0x3000000;
    }
    else if (uVar3 == 0x8040) {
      uVar4 = uVar4 | 0x1000000;
    }
    uVar3 = ~((*(uint *)&gen_args[1]) & 0x300031f) & uVar4 | (*(uint *)&gen_args[1]) & 0x300031f & (*(uint *)&gen_args[0]);
    if (uVar3 != uVar4) {
      uVar4 = F_00c7f908(uVar3);
      F_00c6f63f(uVar4);
      uVar4 = 0;
      if ((char)MXCSR < '\0') {
        uVar4 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar4 = uVar4 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar4 = uVar4 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar4 = uVar4 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar4 = uVar4 | 0x1000000;
      }
    }
    uVar3 = uVar4 ^ in_ebx;
    in_ebx = uVar4 | in_ebx;
    if ((uVar3 & 0x8031f) != 0) {
      in_ebx = in_ebx | 0x80000000;
    }
  }
  return in_ebx;
}

/* ref: __flswbuf */
int F_00c80733(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc80733u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * _Buf;
  char * pcVar1;
  uint _FileHandle;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * puVar5;
  uint _MaxCharCount;
  longlong lVar6;
  
  _FileHandle = F_00c5d07b(param_2);
  uVar3 = (*(int *)(((char *)(param_2) + 12)));
  if ((uVar3 & 0x82) == 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 9;
LAB_00c80759: ;
    (*(int *)(((char *)(param_2) + 12))) = (*(int *)(((char *)(param_2) + 12))) | 0x20;
    return 0xffff;
  }
  if ((uVar3 & 0x40) != 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x22;
    goto LAB_00c80759;
  }
  if ((uVar3 & 1) != 0) {
    (*(int *)(((char *)(param_2) + 4))) = 0;
    if ((uVar3 & 0x10) == 0) {
      (*(int *)(((char *)(param_2) + 12))) = uVar3 | 0x20;
      return 0xffff;
    }
    (*(char * PTR32 *)((char *)(param_2))) = (*(char * PTR32 *)(((char *)(param_2) + 8)));
    (*(int *)(((char *)(param_2) + 12))) = uVar3 & 0xfffffffe;
  }
  uVar3 = (*(int *)(((char *)(param_2) + 12)));
  (*(int *)(((char *)(param_2) + 4))) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  _MaxCharCount = 2;
  (*(int *)(((char *)(param_2) + 12))) = uVar3 & 0xffffffef | 2;
  if (((uVar3 & 0x10c) == 0) &&
     (((uVar3 = F_00c50860(), param_2 != (undefined *)(uVar3 + 0x20) &&
       (uVar3 = F_00c50860(), param_2 != (undefined *)(uVar3 + 0x40))) ||
      (iVar4 = F_00c7adb7(_FileHandle), iVar4 == 0)))) {
    F_00c6e658(param_2);
  }
  if (((*(int *)(((char *)(param_2) + 12))) & 0x108U) == 0) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = (ushort)param_1;
    (*(uint *)(gen_frame + 0x8)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 2)),(ushort)param_1);
    uVar3 = F_00c5de4b(_FileHandle,&(*(uint *)(gen_frame + 0x8)),2);
    (*(uint *)(gen_frame + 0x8)) = uVar3;
  }
  else {
    _Buf = (*(char * PTR32 *)(((char *)(param_2) + 8)));
    pcVar1 = (*(char * PTR32 *)((char *)(param_2)));
    (*(char * PTR32 *)((char *)(param_2))) = _Buf + 2;
    _MaxCharCount = (int)pcVar1 - (int)_Buf;
    (*(int *)(((char *)(param_2) + 4))) = (*(int *)(((char *)(param_2) + 24))) + -2;
    if ((int)_MaxCharCount < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar5 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar5 = ((undefined *)GEN_TOP(((_FileHandle & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)_FileHandle >> 5])))
        ;
      }
      if (((puVar5[4] & 0x20) != 0) && (lVar6 = F_00c6de26(_FileHandle,0,0,2), lVar6 == -1))
      goto LAB_00c80890;
    }
    else {
      uVar3 = F_00c5de4b(_FileHandle,_Buf,_MaxCharCount);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
    }
    *(ushort *)(*(char * PTR32 *)(((char *)(param_2) + 8))) = (ushort)param_1;
  }
  if ((*(uint *)(gen_frame + 0x8)) == _MaxCharCount) {
    return (uint)(ushort)param_1;
  }
LAB_00c80890: ;
  (*(int *)(((char *)(param_2) + 12))) = (*(int *)(((char *)(param_2) + 12))) | 0x20;
  return 0xffff;
}

/* ref: ___initconout */
unsigned int F_00c808a7(void)
{
  GEN_ENTER(0xc808a7u, 0u, 0u, 0u, 0u);
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateFileW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x112801c)),0x40000000,3,(GEN_LPANY)0x0,3,0,
                       (HANDLE)0x0);
  REFG(undefined4, 0x134c1c4) = pvVar1;
  return 0;
}

/* ref: FUN_00c808c6 */
unsigned int F_00c808c6(void)
{
  GEN_ENTER(0xc808c6u, 0u, 0u, 0u, 0u);
  if ((REFG(undefined4, 0x134c1c4) != (HANDLE)0xffffffff) && (REFG(undefined4, 0x134c1c4) != (HANDLE)0xfffffffe)) {
    gen_imp_CloseHandle(REFG(undefined4, 0x134c1c4));
  }
  return 0;
}

/* ref: __filwbuf */
int F_00c808dd(unsigned int gen_a0)
{
  GEN_ENTER(0xc808ddu, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined * puVar5;
  char * _DstBuf;
  
  if (_File == (undefined *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    uVar4 = (*(int *)(((char *)(_File) + 12)));
    if (((uVar4 & 0x83) != 0) && ((uVar4 & 0x40) == 0)) {
      if ((uVar4 & 2) == 0) {
        (*(int *)(((char *)(_File) + 12))) = uVar4 | 1;
        if ((uVar4 & 0x10c) == 0) {
          F_00c6e658(_File);
        }
        else {
          (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)(((char *)(_File) + 8)));
        }
        uVar4 = (*(int *)(((char *)(_File) + 24)));
        _DstBuf = (*(char * PTR32 *)(((char *)(_File) + 8)));
        iVar3 = F_00c5d07b(_File);
        iVar3 = F_00c5d658(iVar3,_DstBuf,uVar4);
        (*(int *)(((char *)(_File) + 4))) = iVar3;
        if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != -1)) {
          if (((*(int *)(((char *)(_File) + 12))) & 0x82) == 0) {
            iVar3 = F_00c5d07b(_File);
            if ((iVar3 == -1) || (iVar3 = F_00c5d07b(_File), iVar3 == -2)) {
              puVar5 = &REFG(undefined, 0x134b280);
            }
            else {
              iVar3 = F_00c5d07b(_File);
              uVar4 = F_00c5d07b(_File);
              puVar5 = ((undefined *)GEN_TOP(((uVar4 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar3 >> 5])));
            }
            if ((puVar5[4] & 0x82) == 0x82) {
              (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x2000;
            }
          }
          if ((((*(int *)(((char *)(_File) + 24))) == 0x200) && (((*(int *)(((char *)(_File) + 12))) & 8U) != 0)) &&
             (((*(int *)(((char *)(_File) + 12))) & 0x400U) == 0)) {
            (*(int *)(((char *)(_File) + 24))) = 0x1000;
          }
          (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) + -2;
          uVar1 = *(ushort *)(*(char * PTR32 *)((char *)(_File)));
          (*(char * PTR32 *)((char *)(_File))) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)((char *)(_File))) + 2)));
          return (uint)uVar1;
        }
        (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
        (*(int *)(((char *)(_File) + 4))) = 0;
      }
      else {
        (*(int *)(((char *)(_File) + 12))) = uVar4 | 0x20;
      }
    }
  }
  return 0xffff;
}

/* ref: __validdrive */
int F_00c80a0d(unsigned int gen_a0)
{
  GEN_ENTER(0xc80a0du, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  UINT UVar2;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  if (param_1 != 0) {
    ((WCHAR *)(gen_frame + 0x0))[0] = (short)param_1 + L'@';
    ((WCHAR *)(gen_frame + 0x0))[1] = 0x3a;
    ((WCHAR *)(gen_frame + 0x0))[2] = 0x5c;
    ((WCHAR *)(gen_frame + 0x0))[3] = 0;
    UVar2 = gen_imp_GetDriveTypeW(((WCHAR *)(gen_frame + 0x0)));
    if ((UVar2 == 0) || (UVar2 == 1)) {
      iVar1 = 0;
      goto LAB_00c80a5b;
    }
  }
  iVar1 = 1;
LAB_00c80a5b: ;
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return iVar1;
}

/* ref: __getdcwd_nolock */
uint F_00c80a67(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc80a67u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  int iVar2;
  ulong * puVar3;
  int * piVar4;
  uint uVar5;
  DWORD DVar6;
  undefined * pvVar7;
  
  uVar5 = (*(uint *)&gen_args[0]);
  if ((*(uint *)&gen_args[0]) == 0) {
    uVar5 = F_00c6d446();
  }
  else {
    iVar2 = F_00c80a0d((*(uint *)&gen_args[0]));
    if (iVar2 == 0) {
      puVar3 = F_00c51f98();
      *puVar3 = 0xf;
      piVar4 = F_00c51f85();
      *piVar4 = 0xd;
      F_00c4c305();
      return 0;
    }
  }
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[1]);
  if ((*(undefined1 * PTR32 *)&gen_args[1]) == (undefined1 *)0x0) {
    (*(gen_size32 *)(gen_frame + 0x8)) = 0;
  }
  else {
    if ((int)(*(gen_size32 *)&gen_args[2]) < 1) {
      piVar4 = F_00c51f85();
      *piVar4 = 0x16;
      F_00c4c305();
      return 0;
    }
    (*(gen_size32 *)(gen_frame + 0x8)) = (*(gen_size32 *)&gen_args[2]);
    *(*(undefined1 * PTR32 *)&gen_args[1]) = 0;
  }
  if (uVar5 == 0) {
    (*(uint *)&gen_args[0]) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)&gen_args[0]) + 2)),0x2e);
  }
  else {
    (*(uint *)&gen_args[0]) = (uint)CONCAT21(0x2e3a,(char)uVar5 + '@');
  }
  DVar6 = gen_imp_GetFullPathNameA(&(*(uint *)&gen_args[0]),(*(gen_size32 *)(gen_frame + 0x8)),(*(undefined1 * PTR32 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x4)));
  if (DVar6 != 0) {
    if (puVar1 != (undefined1 *)0x0) {
      if ((int)(*(gen_size32 *)(gen_frame + 0x8)) <= (int)DVar6) {
        piVar4 = F_00c51f85();
        *piVar4 = 0x22;
        *puVar1 = 0;
        return 0;
      }
      return (uint)puVar1;
    }
    if ((int)(*(gen_size32 *)&gen_args[2]) < (int)DVar6) {
      (*(gen_size32 *)&gen_args[2]) = DVar6;
    }
    pvVar7 = F_00c645f4((*(gen_size32 *)&gen_args[2]),1);
    if (pvVar7 == (undefined *)0x0) {
      piVar4 = F_00c51f85();
      *piVar4 = 0xc;
      puVar3 = F_00c51f98();
      *puVar3 = 8;
      return 0;
    }
    DVar6 = gen_imp_GetFullPathNameA(&(*(uint *)&gen_args[0]),(*(gen_size32 *)&gen_args[2]),pvVar7,((undefined1 *)(gen_frame + 0x4)));
    if ((DVar6 != 0) && ((int)DVar6 < (int)(*(gen_size32 *)&gen_args[2]))) {
      return (uint)pvVar7;
    }
  }
  DVar6 = gen_imp_GetLastError();
  F_00c51fab(DVar6);
  return 0;
}

/* ref: FUN_00c80bcb */
uint F_00c80bcb(void)
{
  GEN_ENTER(0xc80bcbu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c80c15 */
uint F_00c80c15(void)
{
  GEN_ENTER(0xc80c15u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: _wcsnlen */
gen_size32 F_00c80c1e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc80c1eu, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  uint uVar1;
  wchar_t * pwVar2;
  
  uVar1 = 0;
  pwVar2 = _Src;
  if (_MaxCount != 0) {
    do {
      if (*pwVar2 == L'\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pwVar2 = pwVar2 + 1;
    } while (uVar1 < _MaxCount);
  }
  return uVar1;
}

/* ref: __mbsnicmp_l */
int F_00c80c3e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc80c3eu, gen_a0, gen_a1, gen_a2, gen_a3);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  byte * pbVar6;
  byte * pbVar7;
  byte * pbVar8;
  
  if (_MaxCount == 0) {
    return 0;
  }
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 8))) == 0) {
    iVar1 = F_00c4c591((char *)_Str1,(char *)_Str2,_MaxCount);
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
  }
  else if (_Str1 == (uchar *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar1 = 0x7fffffff;
  }
  else {
    pbVar6 = _Str2;
    pbVar7 = _Str1;
    if (_Str2 == (uchar *)0x0) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
      if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
      }
      iVar1 = 0x7fffffff;
    }
    else {
      do {
        uVar5 = (uint)*pbVar7;
        _MaxCount = _MaxCount - 1;
        pbVar8 = pbVar7 + 1;
        (*(uint *)(gen_frame + 0x18)) = uVar5;
        if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4))))) & 4) == 0) {
          if ((*((byte *)GEN_TOP((uVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x1d))) & 0x10) != 0) {
            uVar5 = (uint)*((byte *)GEN_TOP((uVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x11d)));
          }
          (*(uint *)(gen_frame + 0x18)) = uVar5;
LAB_00c80d58: ;
          uVar3 = (ushort)(*(uint *)(gen_frame + 0x18));
        }
        else {
          if (*pbVar8 == 0) {
            (*(uint *)(gen_frame + 0x18)) = 0;
            goto LAB_00c80d58;
          }
          uVar3 = CONCAT11(*pbVar7,*pbVar8);
          pbVar8 = pbVar7 + 2;
          (*(uint *)(gen_frame + 0x18)) = (uint)uVar3;
          if ((uVar3 < *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x10)))) ||
             (*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x12))) < uVar3)) {
            if ((*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x16))) <= uVar3) &&
               (uVar3 <= *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x18))))) {
              uVar3 = uVar3 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x1a)));
            }
          }
          else {
            uVar3 = uVar3 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x14)));
          }
        }
        uVar5 = (uint)*pbVar6;
        pbVar7 = pbVar6 + 1;
        (*(uint *)(gen_frame + 0x18)) = uVar5;
        if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4))))) & 4) == 0) {
          if ((*((byte *)GEN_TOP((uVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x1d))) & 0x10) != 0) {
            uVar5 = (uint)*((byte *)GEN_TOP((uVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x11d)));
          }
          (*(uint *)(gen_frame + 0x18)) = uVar5;
LAB_00c80dc8: ;
          uVar4 = (ushort)(*(uint *)(gen_frame + 0x18));
        }
        else {
          if (*pbVar7 == 0) {
            (*(uint *)(gen_frame + 0x18)) = 0;
            goto LAB_00c80dc8;
          }
          uVar4 = CONCAT11(*pbVar6,*pbVar7);
          pbVar7 = pbVar6 + 2;
          (*(uint *)(gen_frame + 0x18)) = (uint)uVar4;
          if ((uVar4 < *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x10)))) ||
             (*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x12))) < uVar4)) {
            if ((*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x16))) <= uVar4) &&
               (uVar4 <= *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x18))))) {
              uVar4 = uVar4 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x1a)));
            }
          }
          else {
            uVar4 = uVar4 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x14)));
          }
        }
        if (uVar4 != uVar3) {
          iVar1 = (-(uint)(uVar4 < uVar3) & 2) - 1;
          if (((byte *)(gen_frame + 0x8))[0xc] == 0) {
            return iVar1;
          }
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
          return iVar1;
        }
      } while ((uVar3 != 0) && (pbVar6 = pbVar7, pbVar7 = pbVar8, _MaxCount != 0));
      if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

/* ref: __mbsnicmp */
int F_00c80e09(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc80e09u, gen_a0, gen_a1, gen_a2, 0u);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  int iVar1;
  
  iVar1 = F_00c80c3e(_Str1,_Str2,_MaxCount,(undefined *)0x0);
  return iVar1;
}

/* ref: __wchartodigit */
uint F_00c80e23(unsigned int gen_a0)
{
  GEN_ENTER(0xc80e23u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  ushort uVar2;
  
  if (0x2f < (ushort)param_1) {
    if ((ushort)param_1 < 0x3a) {
      return (ushort)param_1 - 0x30;
    }
    iVar1 = 0xff10;
    if ((ushort)param_1 < 0xff10) {
      iVar1 = 0x660;
      if ((ushort)param_1 < 0x660) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0x66a) goto LAB_00c80e68;
      iVar1 = 0x6f0;
      if ((ushort)param_1 < 0x6f0) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0x6fa) goto LAB_00c80e68;
      iVar1 = 0x966;
      if ((ushort)param_1 < 0x966) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0x970) goto LAB_00c80e68;
      iVar1 = 0x9e6;
      if ((ushort)param_1 < 0x9e6) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0x9f0) goto LAB_00c80e68;
      iVar1 = 0xa66;
      if ((ushort)param_1 < 0xa66) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0xa70) goto LAB_00c80e68;
      iVar1 = 0xae6;
      if ((ushort)param_1 < 0xae6) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0xaf0) goto LAB_00c80e68;
      iVar1 = 0xb66;
      if ((ushort)param_1 < 0xb66) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0xb70) goto LAB_00c80e68;
      iVar1 = 0xc66;
      if ((ushort)param_1 < 0xc66) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0xc70) goto LAB_00c80e68;
      iVar1 = 0xce6;
      if ((ushort)param_1 < 0xce6) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0xcf0) goto LAB_00c80e68;
      iVar1 = 0xd66;
      if ((ushort)param_1 < 0xd66) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0xd70) goto LAB_00c80e68;
      iVar1 = 0xe50;
      if ((ushort)param_1 < 0xe50) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0xe5a) goto LAB_00c80e68;
      iVar1 = 0xed0;
      if ((ushort)param_1 < 0xed0) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0xeda) goto LAB_00c80e68;
      iVar1 = 0xf20;
      if ((ushort)param_1 < 0xf20) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0xf2a) goto LAB_00c80e68;
      iVar1 = 0x1040;
      if ((ushort)param_1 < 0x1040) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0x104a) goto LAB_00c80e68;
      iVar1 = 0x17e0;
      if ((ushort)param_1 < 0x17e0) {
        return 0xffffffff;
      }
      if ((ushort)param_1 < 0x17ea) goto LAB_00c80e68;
      iVar1 = 0x1810;
      if ((ushort)param_1 < 0x1810) {
        return 0xffffffff;
      }
      uVar2 = 0x181a;
    }
    else {
      uVar2 = 0xff1a;
    }
    if ((ushort)param_1 < uVar2) {
LAB_00c80e68: ;
      return (uint)(ushort)param_1 - iVar1;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c80fd0 */
uint F_00c80fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc80fd0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  byte * pbVar4;
  
  uVar1 = 0x10;
  pbVar3 = param_2;
  pbVar4 = param_1;
  do {
    if (*(int *)pbVar4 != *(int *)pbVar3) {
      iVar2 = (uint)*pbVar4 - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)pbVar4[1] - (uint)pbVar3[1], iVar2 == 0)) &&
         (iVar2 = (uint)pbVar4[2] - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)pbVar4[3] - (uint)pbVar3[3];
      }
      return (uint)((iVar2 >> 0x1f | 1U) == 0);
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  } while (3 < uVar1);
  return 1;
}

/* ref: FUN_00c81040 */
uint F_00c81040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c81060 */
uint F_00c81060(unsigned int gen_a0)
{
  GEN_ENTER(0xc81060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_InitializeCriticalSection(this);
  return (uint)this;
}

/* ref: FUN_00c810a0 */
uint F_00c810a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc810a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00c811a0 */
uint F_00c811a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc811a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_00c811d0 */
uint F_00c811d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc811d0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if ((0x7fffffff < param_2) && (((int)param_2 < -1 || (param_1 < 0xe2329b00)))) {
    return 0xe2329b00;
  }
  uVar1 = param_1;
  if ((-1 < (int)param_2) && ((0 < (int)param_2 || (500000000 < param_1)))) {
    uVar1 = 500000000;
  }
  return uVar1;
}

/* ref: FUN_00c81220 */
uint F_00c81220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc81220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  F_00c88110(this,param_2,param_3,(int)this + 0x7c,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x1128778));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128738));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128724));
  *(undefined4 *)((int)this + 0x50) = 0;
  F_00c88d50((undefined *)((int)this + 0x54),0,param_4);
  F_00c88d50((undefined *)((int)this + 0x58),1,param_4);
  F_00c88d50((undefined *)((int)this + 0x5c),1,param_4);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  if (-1 < *param_4) {
    gen_imp_SetEvent(*(HANDLE *)((int)this + 0x5c));
  }
  return (uint)this;
}

/* ref: Client::System::Streaming::TextureRenderer::vf9 */
uint F_00c81300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc81300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0xc4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 != 0) {
    uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(iVar1 + 8))))(iVar1 + 8,param_1,param_2);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,0);
  if (uVar2 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    this_00 = (undefined *)F_004069f0(0x50);
    if (this_00 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00c8c280(this_00,0,*(undefined4 *)(this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),uVar2 + 0xc);
    }
    *(uint *)(this + 0x50) = uVar2;
    if (uVar2 != 0) {
      if ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) < 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 8) + 0xc))))(uVar2 + 8,1);
        *(undefined4 *)(this + 0x50) = 0;
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0x80004002;
      }
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,param_1,param_2);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x8007000e;
}

/* ref: FUN_00c81400 */
uint F_00c81400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc81400u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d18));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095ac4));
    if (uVar1 == 0) {
      uVar1 = F_00c84240(param_1,param_2,param_3);
      return uVar1;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf10 */
uint F_00c81460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 1) {
    gen_imp_ResetEvent(*(HANDLE *)(this + 0x58));
    return 0;
  }
  gen_imp_SetEvent(*(HANDLE *)(this + 0x58));
  return 0;
}

/* ref: FUN_00c81490 */
unsigned int F_00c81490(unsigned int gen_a0)
{
  GEN_ENTER(0xc81490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  DWORD DVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  iVar1 = *(int *)((int)this + 0xb4);
  while (iVar1 != 0) {
    gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0x0)),0,0,0,0);
    gen_imp_Sleep(1);
    iVar1 = *(int *)((int)this + 0xb4);
  }
  DVar2 = gen_imp_GetQueueStatus(8);
  if ((DVar2 >> 0x10 & 8) != 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0;
    DVar2 = gen_imp_GetCurrentThreadId();
    gen_imp_PostThreadMessageA(DVar2,Msg,wParam,lParam);
  }
  return 0;
}

/* ref: FUN_00c81510 */
uint F_00c81510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc81510u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar1 = F_00c89220(*(undefined4 *)(param_1 + 0x50),param_2,0,0,0);
  if (uVar1 == 0x102) {
    *param_3 = *(undefined4 *)(param_1 + 8);
    return 0x40237;
  }
  *param_3 = *(undefined4 *)(param_1 + 8);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf12 */
uint F_00c81560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*((int *)GEN_TOP((*(int *)(this + 0x78) + 0x18))) == 0) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    return 0;
  }
  if (*(int *)(this + 0x70) == 1) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this);
  if ((uVar1 == 1) && (param_1 != 0)) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    return 0;
  }
  gen_imp_ResetEvent(*(HANDLE *)(this + 0x5c));
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf6 */
byte F_00c815e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc815e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x78) == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,0);
  }
  return *(int *)(this + 0x78) != 0;
}

/* ref: FUN_00c81600 */
uint F_00c81600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc81600u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  LPCWSTR param_2 = (LPCWSTR)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = gen_imp_lstrcmpW(param_2,(LPCWSTR)(*(undefined * PTR32 (*)[1])REFP(0x1128714)));
  if (iVar1 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x1c))))(param_1 + -0xc,0);
    if (uVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(uVar2 + 0xc);
    }
    *param_3 = piVar3;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      return 0;
    }
    return 0x8007000e;
  }
  *param_3 = 0;
  return 0x80040216;
}

/* ref: Client::System::Streaming::TextureRenderer::vf26 */
uint F_00c81680(unsigned int gen_a0)
{
  GEN_ENTER(0xc81680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)(this + 0x14) != 0) && (*(undefined4 *)(this + 0x70) = 1, *(int *)(this + 0x6c) == 0)
     ) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    if (*(int *)(this + 100) != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
    }
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf33 */
uint F_00c816c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc816c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x14) == 1) {
    gen_imp_ResetEvent(*(HANDLE *)(this + 0x5c));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0);
  ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  F_00c81490(this);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf34 */
uint F_00c81700(unsigned int gen_a0)
{
  GEN_ENTER(0xc81700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_00c8b080(*(undefined * PTR32 *)(this + 0x50));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,1);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf29 */
uint F_00c81720(void)
{
  GEN_ENTER(0xc81720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf30 */
uint F_00c81730(unsigned int gen_a0)
{
  GEN_ENTER(0xc81730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_00c8b080(*(undefined * PTR32 *)(this + 0x50));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return 0;
}

/* ref: FUN_00c81750 */
uint F_00c81750(unsigned int gen_a0)
{
  GEN_ENTER(0xc81750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf22 */
uint F_00c81760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc81760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_2,param_3);
  if (-1 < (int)uVar1) {
    if (((int)param_3[1] <= (int)param_2[1]) &&
       (((int)param_3[1] < (int)param_2[1] || (*param_3 < *param_2)))) {
      return 0x80040228;
    }
    if (*(int *)(this + 0x18) != 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,param_1,param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00c817c0 */
uint F_00c817c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc817c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf27 */
byte F_00c817e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc817e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x68);
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x18))))(*(int * PTR32 *)(this + 0x18),iVar1);
    *(undefined4 *)(this + 0x68) = 0;
  }
  gen_imp_ResetEvent(*(HANDLE *)(this + 0x54));
  return iVar1 == 0;
}

/* ref: FUN_00c81820 */
uint F_00c81820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,&(*(undefined4 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0xc)));
    if (-1 < (int)uVar1) {
      if (uVar1 == 0) {
        gen_imp_SetEvent(*(HANDLE *)((int)this + 0x54));
        return 1;
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x10))))
                        (*(int * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x20),
                         *(undefined4 *)((int)this + 0x24),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         *(undefined4 *)((int)this + 0x54),(int)this + 0x68);
      return (uint)(-1 < (int)uVar1);
    }
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf42 */
uint F_00c818a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc818a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((param_1 != 0) && (*(int *)(this + 100) != 0)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,param_1);
    ((code *)*(gen_code32 *)(*(int *)this + 0xac))(this,param_1);
    ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,param_1);
    return 0;
  }
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf40 */
uint F_00c818f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc818f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  iVar1 = *(int *)(this + 0x6c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return (uint)(iVar1 != 0);
}

/* ref: Client::System::Streaming::TextureRenderer::vf41 */
uint F_00c81920(unsigned int gen_a0)
{
  GEN_ENTER(0xc81920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  if (*(int *)(this + 0x6c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x6c) + 4))))(*(int * PTR32 *)(this + 0x6c));
  }
  uVar1 = *(uint *)(this + 0x6c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf39 */
uint F_00c81960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this,param_1);
  if ((int)uVar1 < 0) {
    return -(uint)(uVar1 != 0x8004022b) & uVar1;
  }
  if (*(int *)(this + 0x14) == 1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
    *(undefined4 *)(this + 0xb4) = 0;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x7c));
    if (*(int *)(this + 0x14) == 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x7c));
      return 0;
    }
    *(undefined4 *)(this + 0xb4) = 1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
    ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
    gen_imp_LeaveCriticalSection(this + 0x7c);
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
  if ((int)uVar1 < 0) {
    *(undefined4 *)(this + 0xb4) = 0;
    return 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  *(undefined4 *)(this + 0xb4) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x14) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this,*(undefined4 *)(this + 0x6c));
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf28 */
uint F_00c81aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xc81aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  piVar1 = *(int * PTR32 *)(this + 0x6c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return 0;
}

/* ref: FUN_00c81ae0 */
unsigned int F_00c81ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xc81ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  if (*(int *)((int)this + 0xc0) != 0) {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x60);
    *(undefined4 *)((int)this + 0xc0) = 0;
    (*pcVar1)(this);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  return 0;
}

/* ref: FUN_00c81b20 */
uint F_00c81b20(unsigned int gen_a0)
{
  GEN_ENTER(0xc81b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 100) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *(undefined4 *)((int)this + 0xc0) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00c8b0b0(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x74) = 1;
  uVar1 = F_00c84750(this,1,0,(int)this + 0xc);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

/* ref: FUN_00c81b80 */
unsigned int F_00c81b80(unsigned int gen_a0)
{
  GEN_ENTER(0xc81b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(UINT *)((int)this + 0xc0) != 0) {
    gen_imp_timeKillEvent(*(UINT *)((int)this + 0xc0));
    *(undefined4 *)((int)this + 0xc0) = 0;
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf31 */
uint F_00c81ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xc81ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 100) != 1) {
    *(undefined4 *)(this + 100) = 1;
    gen_imp_timeBeginPeriod(1);
    ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
    if (*(int *)(this + 0x6c) == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,*(int *)(this + 0x6c));
    if (uVar1 == 0) {
      gen_imp_SetEvent(*(HANDLE *)(this + 0x54));
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf32 */
uint F_00c81c10(unsigned int gen_a0)
{
  GEN_ENTER(0xc81c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  *(undefined4 *)(this + 0x74) = 0;
  if (*(int *)(this + 100) == 1) {
    *(undefined4 *)(this + 100) = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
    gen_imp_timeEndPeriod(1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return 0;
}

/* ref: FUN_00c81c50 */
unsigned int F_00c81c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  *(undefined4 *)((int)this + 0xb0) = param_1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  return 0;
}

/* ref: FUN_00c81c80 */
uint F_00c81c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc81c80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095b54),&(*(int * PTR32 *)&gen_args[1]));
  uVar1 = (*(undefined4 *)&gen_args[2]);
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),0x19,(*(undefined4 *)&gen_args[2]),0);
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  }
  uVar2 = F_00c84750((*(undefined * PTR32 *)&gen_args[0]),0x19,uVar1,0);
  return uVar2;
}

/* ref: FUN_00c81cd0 */
unsigned int F_00c81cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc81cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  if ((((*(int *)((int)this + 0x60) == 0) &&
       (iVar1 = *(int *)((int)this + 0x78), *(int *)(iVar1 + 0x18) != 0)) &&
      (*(char *)(iVar1 + 0xa1) == '\0')) &&
     ((*(int *)((int)this + 0x70) == 0 && (*(int *)((int)this + 0xb0) == 1)))) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 0xc;
    }
    F_00c84750(this,5,iVar1,0);
    F_00c81c50(this,0);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  return 0;
}

/* ref: FUN_00c81d40 */
uint F_00c81d40(unsigned int gen_a0)
{
  GEN_ENTER(0xc81d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  code * pcVar2;
  int iVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)((int)this + 0x78);
  if (*(int *)(iVar1 + 0x18) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1 + 0xc;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 4))))(iVar1 + 0xc);
  F_00c84750(this,0x16,iVar3,0);
  pcVar2 = *(gen_code32 *)(*(int *)this + 0x70);
  *(undefined4 *)((int)this + 0x60) = 1;
  (*pcVar2)(this);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + 0xc))) + 8))))(*(int *)((int)this + 0x78) + 0xc);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 1;
}

/* ref: FUN_00c81dc0 */
unsigned int F_00c81dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc81dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00c81dd0 */
unsigned int F_00c81dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc81dd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00c81de0 */
uint F_00c81de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc81de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c87d40(this,0,param_1,param_1 + 0x7c,param_2,param_3);
  *(int *)((int)this + 0xd8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x11288b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[18])REFP(0x1128868));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128850));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[9])REFP(0x112882c));
  return (uint)this;
}

/* ref: FUN_00c81e30 */
uint F_00c81e30(unsigned int gen_a0)
{
  GEN_ENTER(0xc81e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection_00);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x38))))(param_1 + -0xc);
  if (uVar1 == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xcc) + 0x68))))(*(int * PTR32 *)(param_1 + 0xcc));
    if (-1 < (int)uVar1) {
      uVar1 = F_00c85470(param_1);
    }
  }
  param_1 = uVar1;
  gen_imp_LeaveCriticalSection(lpCriticalSection_00);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return param_1;
}

/* ref: FUN_00c81eb0 */
uint F_00c81eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc81eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection_00);
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00c85cd0(param_1);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xcc) + 0x84))))(*(int * PTR32 *)(param_1 + 0xcc));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xcc) + 100))))(*(int * PTR32 *)(param_1 + 0xcc));
  gen_imp_LeaveCriticalSection(lpCriticalSection_00);
  return uVar1;
}

/* ref: FUN_00c81f20 */
uint F_00c81f20(unsigned int gen_a0)
{
  GEN_ENTER(0xc81f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection_00);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xcc) + 0x88))))(*(int * PTR32 *)(param_1 + 0xcc));
  if (-1 < (int)uVar1) {
    uVar1 = F_00c85d00(param_1);
  }
  param_1 = uVar1;
  gen_imp_LeaveCriticalSection(lpCriticalSection_00);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return param_1;
}

/* ref: FUN_00c81f90 */
uint F_00c81f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81f90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x40) + 0x9c))))(*(int * PTR32 *)(param_1 + 0x40),param_2);
  if ((int)uVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0x40) + 0x7c);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if ((((*((int *)GEN_TOP((*(int *)(param_1 + -0x70) + 0x14))) != 0) && (*(char *)(param_1 + 9) == '\0')) &&
        (*((int *)GEN_TOP(((int)*(undefined * PTR32 *)(param_1 + 0x40) + 0x60))) == 0)) &&
       (*(char *)(param_1 + -0x74) == '\0')) {
      F_00c84750(*(undefined * PTR32 *)(param_1 + 0x40),3,uVar1,0);
      lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0x40) + 0x94);
      gen_imp_EnterCriticalSection(lpCriticalSection_00);
      this = *(undefined * PTR32 *)(param_1 + 0x40);
      if ((*(int *)((int)this + 100) != 0) && (*(int *)((int)this + 0x74) == 0)) {
        F_00c81b20(this);
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection_00);
      *(undefined1 *)(param_1 + -0x74) = 1;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: FUN_00c82030 */
uint F_00c82030(unsigned int gen_a0)
{
  GEN_ENTER(0xc82030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x8c))))(*(int * PTR32 *)((int)this + 0xd8));
  if (-1 < (int)uVar1) {
    uVar1 = F_00c85a00(this);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00c82060 */
uint F_00c82060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x94))))(*(int * PTR32 *)((int)this + 0xd8),param_1);
  if (-1 < (int)uVar1) {
    uVar1 = F_00c850e0(param_1);
  }
  return uVar1;
}

/* ref: FUN_00c82090 */
uint F_00c82090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * apuVar1 [1];
  undefined2 uVar2;
  undefined4 * puVar3;
  
  uVar2 = REFG(undefined2, 0x1128720);
  apuVar1[0] = (*(undefined * PTR32 (*)[1])REFP(0x112871c))[0];
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  puVar3 = gen_imp_CoTaskMemAlloc(6);
  *param_2 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar3 = apuVar1[0];
  *(undefined2 *)(puVar3 + 1) = uVar2;
  return 0;
}

/* ref: FUN_00c820e0 */
uint F_00c820e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc820e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0xb0))))
                    (*(int * PTR32 *)((int)this + 0xd8),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c82100 */
uint F_00c82100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc82100u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x74))))
                    (*(int * PTR32 *)((int)this + 0xd8),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c82110 */
uint F_00c82110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc82110u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  *(undefined1 *)((int)this + 0x24) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x78))))
                    (*(int * PTR32 *)((int)this + 0xd8),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c82130 */
uint F_00c82130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c850f0(this,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x90))))(*(int * PTR32 *)((int)this + 0xd8),param_1);
  }
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf47 */
unsigned int F_00c82160(unsigned int gen_a0)
{
  GEN_ENTER(0xc82160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD DVar1;
  
  *(undefined4 *)(this + 0x138) = 0xfffffc18;
  *(undefined4 *)(this + 0x13c) = 0xffffffff;
  DVar1 = gen_imp_timeGetTime();
  *(DWORD *)(this + 0x158) = DVar1;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0x10c) = 0xffffffff;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0xfffb6c20;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf16 */
uint F_00c82220(unsigned int gen_a0)
{
  GEN_ENTER(0xc82220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf17 */
uint F_00c82230(unsigned int gen_a0)
{
  GEN_ENTER(0xc82230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_timeGetTime();
  *(DWORD *)(this + 0x158) = DVar1 - *(int *)(this + 0x158);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf18 */
unsigned int F_00c82250(void)
{
  GEN_ENTER(0xc82250u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf19 */
unsigned int F_00c82260(void)
{
  GEN_ENTER(0xc82260u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c82270 */
uint F_00c82270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x150) = param_1;
  *(undefined4 *)((int)this + 0x154) = param_2;
  return param_1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf45 */
uint F_00c82290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pTVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1 * 0x68db8bad;
  uVar5 = param_1 / 10000;
  if ((1000 < (int)uVar5) || ((int)uVar5 < -1000)) {
    if (*(int *)(this + 0x124) < 2) {
      uVar5 = 0;
    }
    else {
      uVar3 = (uint)((int)uVar5 < 1);
      uVar5 = (uVar3 - 1 & 2000) - 1000;
    }
  }
  iVar2 = *(int *)(this + 0x124);
  if (1 < iVar2) {
    pTVar1 = this + 0x128;
    uVar3 = *(uint *)pTVar1;
    *(uint *)pTVar1 = *(uint *)pTVar1 + uVar5;
    *(uint *)(this + 300) = *(int *)(this + 300) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar3,uVar5);
    uVar3 = uVar5 * uVar5;
    pTVar1 = this + 0x130;
    uVar5 = *(uint *)pTVar1;
    *(uint *)pTVar1 = *(uint *)pTVar1 + uVar3;
    *(uint *)(this + 0x134) =
         *(int *)(this + 0x134) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar5,uVar3);
  }
  if (2 < iVar2) {
    uVar3 = param_2 / 10000;
    if ((1000 < (int)uVar3) || ((int)uVar3 < 0)) {
      uVar3 = 1000;
    }
    uVar4 = uVar3 * uVar3;
    pTVar1 = this + 0x140;
    uVar5 = *(uint *)pTVar1;
    *(uint *)pTVar1 = *(uint *)pTVar1 + uVar4;
    *(uint *)(this + 0x144) =
         *(int *)(this + 0x144) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar5,uVar4);
    pTVar1 = this + 0x148;
    uVar5 = *(uint *)pTVar1;
    *(uint *)pTVar1 = *(uint *)pTVar1 + uVar3;
    *(uint *)(this + 0x14c) =
         *(int *)(this + 0x14c) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar5,uVar3);
  }
  *(int *)(this + 0x124) = iVar2 + 1;
  return uVar3;
}

/* ref: Client::System::Streaming::TextureRenderer::vf46 */
unsigned int F_00c82390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xb4);
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 5000000;
  (*pcVar1)(this,*(undefined4 *)(this + 0x150),*(undefined4 *)(this + 0x154));
  if (0 < *(int *)(this + 0xf0)) {
    gen_imp_Sleep(*(int *)(this + 0xf0) / 10000);
    return 0;
  }
  gen_imp_Sleep(0);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf14 */
unsigned int F_00c82400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  DWORD DVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb4))
            (this,*(undefined4 *)(this + 0x150),*(undefined4 *)(this + 0x154));
  DVar1 = gen_imp_timeGetTime();
  *(DWORD *)(this + 0xfc) = DVar1;
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf15 */
unsigned int F_00c82430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar2 = gen_imp_timeGetTime();
  iVar3 = (DVar2 - *(int *)(this + 0xfc)) * 10000;
  if ((iVar3 < *(int *)(this + 0xf4) * 2) || (iVar3 < *(int *)(this + 0xf8) * 2)) {
    iVar1 = iVar3 + *(int *)(this + 0xf4) * 3;
    *(int *)(this + 0xf4) = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  }
  *(int *)(this + 0xf8) = iVar3;
  if (0 < *(int *)(this + 0xf0)) {
    gen_imp_Sleep(*(int *)(this + 0xf0) / 10000);
    return 0;
  }
  gen_imp_Sleep(0);
  return 0;
}

/* ref: FUN_00c824b0 */
uint F_00c824b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc824b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(param_1 + -0x38) = param_2;
  return 0;
}

/* ref: FUN_00c824d0 */
uint F_00c824d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc824d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  if (999 < param_4) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0;
  }
  *(int *)(param_1 + 0xc) = (int)(0x172dd680 / (longlong)(param_4 + 0xa7)) + -330000;
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf48 */
uint F_00c82510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc82510u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10c)));
  if (((-1 < iVar1) &&
      ((((int)(*(uint *)&gen_args[2]) < 0 || (((int)(*(uint *)&gen_args[2]) < 1 && ((*(uint *)&gen_args[1]) == 0)))) &&
       (iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x108))), 20000 < iVar2)))) &&
     (((0x7fffffff < (*(uint *)&gen_args[2]) && ((((int)(*(uint *)&gen_args[2]) < -1 || ((*(uint *)&gen_args[1]) < 0xffffb1e0)) && (iVar2 < iVar1)))
       ) && (iVar2 < iVar1 + 20000)))) {
    (*(int *)&gen_args[4]) = (iVar1 - iVar2) + 20000;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))) == 0) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78)));
    (*(int *)&gen_args[4]) = 0;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(iVar1 + 0x18))))
                      (*(undefined4 * PTR32 *)(iVar1 + 0x18),&REFG(undefined, 0x1095b14),&(*(int *)&gen_args[4]));
    if (-1 < (int)uVar4) {
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))) = (*(int *)&gen_args[4]);
    }
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac)));
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,(*(undefined * PTR32 *)&gen_args[0]) + 0xc);
  return uVar4;
}

/* ref: Client::System::Streaming::TextureRenderer::vf23 */
uint F_00c82680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc82680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  bool bVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 * puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  puVar2 = param_2;
  uVar4 = param_2[1];
  uVar8 = *param_2;
  if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (79999 < uVar8)))) {
    *param_2 = uVar8 - 80000;
    param_2[1] = uVar4 - (uVar8 < 80000);
    uVar4 = *param_3;
    *param_3 = *param_3 - 80000;
    param_3[1] = (param_3[1] - 1) + (uint)(79999 < uVar4);
  }
  *(uint *)(this + 0x118) = *param_2;
  *(uint *)(this + 0x11c) = param_2[1];
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0xc))))(*(int * PTR32 *)(this + 0x18),((byte *)(gen_frame + 0x4)) + 4);
  uVar10 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) - *(uint *)(this + 0x20);
  iVar3 = ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) - *(int *)(this + 0x24)) -
          (uint)((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) < *(uint *)(this + 0x20));
  uVar8 = uVar10 - *param_2;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = iVar3;
  uVar4 = (iVar3 - param_2[1]) - (uint)(uVar10 < *param_2);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = uVar10;
  if ((uVar4 < 0x80000000) || ((-2 < (int)uVar4 && (0xe2329aff < uVar8)))) {
    param_2 = (uint *)uVar8;
    if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (500000000 < uVar8)))) {
      param_2 = (uint *)0x1dcd6500;
    }
  }
  else {
    param_2 = (uint *)0xe2329b00;
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xc0))(this,param_2,(int)((int)(uintptr_t)param_2) >> 0x1f,uVar10,iVar3);
  *(uint *)(this + 0xec) = (uint)(uVar4 == 0);
  iVar5 = *param_3 - *puVar2;
  iVar3 = *(int *)(this + 0x110);
  iVar6 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
  if ((iVar3 + iVar6 < iVar5) || (iVar5 < iVar3 - iVar6)) {
    *(int *)(this + 0x10c) = iVar5;
    *(int *)(this + 0x110) = iVar5;
  }
  if ((((uVar4 == 0) != 0) && (uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x3c))(param_1), uVar4 == 0)) ||
     (((byte *)(gen_frame + 0x4))[0x14] = 0, ((byte *)(gen_frame + 0x4))[0x15] = 0, ((byte *)(gen_frame + 0x4))[0x16] = 0, ((byte *)(gen_frame + 0x4))[0x17] = 0,
     *(int *)(this + 0xe8) == -1)) {
    ((byte *)(gen_frame + 0x4))[0x14] = 1;
    ((byte *)(gen_frame + 0x4))[0x15] = 0;
    ((byte *)(gen_frame + 0x4))[0x16] = 0;
    ((byte *)(gen_frame + 0x4))[0x17] = 0;
  }
  if ((int)param_2 < 1) {
    iVar3 = *(int *)(this + 0x100);
    if (((int)param_2 < iVar3) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20)) == 0)) {
      *(int *)(this + 0x100) = iVar3 - ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3);
    }
    else {
      *(uint * PTR32 *)(this + 0x100) = param_2;
    }
  }
  else {
    *(undefined4 *)(this + 0x100) = 0;
  }
  if ((int)param_2 < 0) {
    iVar3 = -(int)param_2;
  }
  else {
    iVar3 = 0;
  }
  iVar6 = *(int *)(this + 0x108) * 3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = iVar6;
  iVar12 = (int)((iVar6 + iVar3 >> 0x1f & 3U) + iVar6 + iVar3) >> 2;
  puVar9 = ((undefined1 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) - *(uint *)(this + 0x138))));
  ((byte *)(gen_frame + 0x4))[0x10] = (char)iVar12;
  ((byte *)(gen_frame + 0x4))[0x11] = (char)((uint)iVar12 >> 8);
  ((byte *)(gen_frame + 0x4))[0x12] = (char)((uint)iVar12 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0x13] = (char)((uint)iVar12 >> 0x18);
  uVar4 = (uint)((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) < *(uint *)(this + 0x138));
  iVar3 = *(int *)(this + 0x13c);
  iVar7 = ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) - iVar3) - uVar4;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = puVar9;
  if ((-1 < iVar7) && ((0 < iVar7 || (REFP(0x00989680) < puVar9)))) {
    (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = REFP(0x00989680);
    ((byte *)(gen_frame + 0x4))[0] = 0;
    ((byte *)(gen_frame + 0x4))[1] = 0;
    ((byte *)(gen_frame + 0x4))[2] = 0;
    ((byte *)(gen_frame + 0x4))[3] = 0;
  }
  if (*(int *)(this + 0x10c) < *(int *)(this + 0xf4) * 3) {
    if (*(int *)(this + 0xec) == 0) {
      bVar1 = (int)((int)(uintptr_t)param_2) * 2 < iVar5;
    }
    else {
      bVar1 = (int)param_2 <= iVar5 * 4;
    }
    if ((((!bVar1) && (*(int *)(this + 0x108) < 0x13881)) &&
        ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) - iVar3 == uVar4 || iVar7 < 0)) &&
       ((iVar7 < 0 || (puVar9 < (undefined1 *)0x989681)))) {
      *(int *)(this + 0x108) = iVar12;
      *(undefined4 *)(this + 0xe8) = 0xffffffff;
      return 0x80004005;
    }
  }
  ((byte *)(gen_frame + 0x4))[0x10] = 0;
  ((byte *)(gen_frame + 0x4))[0x11] = 0;
  ((byte *)(gen_frame + 0x4))[0x12] = 0;
  ((byte *)(gen_frame + 0x4))[0x13] = 0;
  if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20)) != 0) ||
     ((((int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4) + iVar5 < *(int *)(this + 0x10c) &&
      (iVar5 * -10 < (int)param_2)))) {
    ((byte *)(gen_frame + 0x4))[0x10] = 1;
    ((byte *)(gen_frame + 0x4))[0x11] = 0;
    ((byte *)(gen_frame + 0x4))[0x12] = 0;
    ((byte *)(gen_frame + 0x4))[0x13] = 0;
  }
  if ((-0x895441 < (int)param_2) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) != 0)) {
    *(int *)(this + 0x108) = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
    *(int *)(this + 0x10c) =
         (int)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + *(int *)(this + 0x10c) * 3 +
              ((int)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + *(int *)(this + 0x10c) * 3) >> 0x1f & 3)) >> 2;
    *(undefined4 *)(this + 0xe8) = 0;
    *(uint * PTR32 *)(this + 0x150) = param_2;
    *(undefined1 * PTR32 *)(this + 0x154) = (*(undefined1 * PTR32 *)(gen_frame + 0x0));
    *(undefined4 *)(this + 0x138) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4));
    *(undefined4 *)(this + 0x13c) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8));
    if ((int)param_2 < *(int *)(this + 0x100)) {
      *(uint * PTR32 *)(this + 0x100) = param_2;
    }
    return 0;
  }
  *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + 1;
  *(int *)(this + 0x10c) = iVar5;
  uVar4 = *(uint *)(this + 0x100);
  if ((int)*(uint *)(this + 0x100) < -iVar5) {
    uVar4 = -iVar5;
  }
  uVar8 = *puVar2;
  *puVar2 = *puVar2 + uVar4;
  puVar2[1] = puVar2[1] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar8,uVar4);
  uVar4 = (uint)(0 < -(int)param_2);
  *(int *)(this + 0x108) = iVar12;
  if (uVar4 == 1) {
    uVar8 = *puVar2;
    uVar10 = puVar2[1];
    param_1 = ((int *)GEN_TOP((uVar8 - *(uint *)(this + 0x138))));
    uVar11 = (uVar10 - *(int *)(this + 0x13c)) - (uint)(uVar8 < *(uint *)(this + 0x138));
    if ((uVar11 < 0x80000000) || ((-2 < (int)uVar11 && ((undefined1 *)0xe2329aff < param_1)))) {
      if ((-1 < (int)uVar11) && ((0 < (int)uVar11 || ((undefined1 *)0x1dcd6500 < param_1)))) {
        param_1 = (int *)0x1dcd6500;
      }
    }
    else {
      param_1 = (int *)0xe2329b00;
    }
    *(uint *)(this + 0x138) = uVar8;
    *(uint *)(this + 0x13c) = uVar10;
  }
  else {
    *(undefined4 *)(this + 0x138) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4));
    *(undefined4 *)(this + 0x13c) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8));
    param_1 = (int *)(*(undefined1 * PTR32 *)(gen_frame + 0x0));
  }
  uVar8 = (uint)param_2;
  if (0 < -(int)param_2) {
    uVar8 = *puVar2 - *(uint *)(this + 0x118);
    uVar10 = (puVar2[1] - *(int *)(this + 0x11c)) - (uint)(*puVar2 < *(uint *)(this + 0x118));
    if ((uVar10 < 0x80000000) || ((-2 < (int)uVar10 && (0xe2329aff < uVar8)))) {
      if ((-1 < (int)uVar10) && ((0 < (int)uVar10 || (500000000 < uVar8)))) {
        uVar8 = 500000000;
      }
    }
    else {
      uVar8 = 0xe2329b00;
    }
  }
  *(uint *)(this + 0x150) = uVar8;
  *(int * PTR32 *)(this + 0x154) = param_1;
  return uVar4;
}

/* ref: Client::System::Streaming::TextureRenderer::vf21 */
uint F_00c82a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c81820(this,param_1);
  if (uVar1 == 0) {
    *(int *)(this + 0x120) = *(int *)(this + 0x120) + 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00c82ac0 */
uint F_00c82ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82ac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  return 0;
}

/* ref: FUN_00c82b00 */
uint F_00c82b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82b00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  *param_2 = *(undefined4 *)(param_1 + 0x44);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  return 0;
}

/* ref: FUN_00c82b40 */
uint F_00c82b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82b40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + -100);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + -0x7c) == 0) {
    iVar2 = *(int *)(param_1 + 0x78);
  }
  else {
    DVar1 = gen_imp_timeGetTime();
    iVar2 = DVar1 - *(int *)(param_1 + 0x78);
  }
  if (iVar2 < 1) {
    *param_2 = 0;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar2 = gen_imp_MulDiv(100000,*(int *)(param_1 + 0x44),iVar2);
  *param_2 = iVar2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c82bc0 */
uint F_00c82bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82bc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + -100);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 + -200) != 0) && (1 < *(int *)(param_1 + 0x44))) {
    *param_2 = (int)(*(longlong *)(param_1 + 0x48) / (longlong)(*(int *)(param_1 + 0x44) + -1));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *param_2 = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c82c30 */
uint F_00c82c30(unsigned int gen_a0)
{
  GEN_ENTER(0xc82c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0x40000000 < param_1) {
    return 0x8000;
  }
  if (1 < param_1) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 * iVar2 < param_1);
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (iVar2 * iVar2 + param_1) / (iVar2 * 2);
  if ((-1 < (int)uVar1) &&
     (uVar1 = (int)(uVar1 * uVar1 + param_1) / (int)(uVar1 * 2), -1 < (int)uVar1)) {
    uVar1 = (int)(uVar1 * uVar1 + param_1) / (int)(uVar1 * 2);
  }
  return uVar1;
}

/* ref: FUN_00c82ca0 */
uint F_00c82ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc82ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)((int)this + 0x18) != 0) && (1 < param_1)) {
    uVar2 = F_00c8d160(param_5,param_6,param_5,param_6,param_1,param_1 >> 0x1f,0,0);
    uVar1 = F_00c82c30((int)((longlong)
                               CONCAT44((param_4 - (int)(uVar2 >> 0x20)) -
                                        (uint)(param_3 < (uint)uVar2),param_3 - (uint)uVar2) /
                              (longlong)(param_1 + -1)));
    *param_2 = uVar1;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *param_2 = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c82d40 */
uint F_00c82d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82d40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c82ca0((undefined *)(param_1 + -0xe0),*(int *)(param_1 + 0x44) + -1,param_2,
                       *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  return uVar1;
}

/* ref: FUN_00c82d70 */
uint F_00c82d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82d70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c82ca0((undefined *)(param_1 + -0xe0),*(int *)(param_1 + 0x44) + -2,param_2,
                       *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf0 */
uint F_00c82da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82da0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1085dc8));
  if (uVar1 != 0) {
    if (param_1 != 0) {
      uVar1 = F_00c83ae0(param_1 + 0xe0,param_3);
      return uVar1;
    }
    uVar1 = F_00c83ae0(0,param_3);
    return uVar1;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095b14));
  if (uVar1 == 0) {
    uVar1 = F_00c81400(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0xe4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c82e40 */
uint F_00c82e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82e40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  if (((*(int *)&gen_args[1]) == 0) && (*(int *)((*(uint *)&gen_args[0]) + 0x34) != 0)) {
    F_00c84750((undefined *)((*(uint *)&gen_args[0]) - 0xc),0x15,-(uint)((*(uint *)&gen_args[0]) != 0xc) & (*(uint *)&gen_args[0]),0);
  }
  uVar1 = F_00c87500((*(uint *)&gen_args[0]),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c82e80 */
unsigned int F_00c82e80(unsigned int gen_a0)
{
  GEN_ENTER(0xc82e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  code * pcVar1;
  int * piVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x94);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x1128778));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128738));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128724));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((int)this + 0x74) = 0;
  if (*(int *)((int)this + 100) == 1) {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x44);
    *(undefined4 *)((int)this + 100) = 0;
    (*pcVar1)(this);
    gen_imp_timeEndPeriod(1);
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar2 = *(int * PTR32 *)((int)this + 0x6c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x50) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x50) + 8)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  gen_imp_DeleteCriticalSection((int)this + 0xc4);
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  gen_imp_DeleteCriticalSection((int)this + 0x7c);
  F_00c88dd0((undefined *)((int)this + 0x5c));
  F_00c88dd0((undefined *)((int)this + 0x58));
  F_00c88dd0((undefined *)((int)this + 0x54));
  F_00c84310(this);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf11 */
uint F_00c82f50(unsigned int gen_a0)
{
  GEN_ENTER(0xc82f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  
  uVar1 = *(undefined4 *)(this + 0x54);
  iVar2 = *(int *)this;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(this + 0x58);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  ((code *)*(gen_code32 *)(iVar2 + 0x48))(this);
  do {
    DVar3 = gen_imp_WaitForMultipleObjects(2,&(*(undefined4 *)(gen_frame + 0x4)),0,10000);
  } while (DVar3 == 0x102);
  ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
  if (DVar3 == 0) {
    return 0x80040223;
  }
  *(undefined4 *)(this + 0x68) = 0;
  return 0;
}

/* ref: FUN_00c82fc0 */
uint F_00c82fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc82fc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x6c) + 0x18))) != 0) {
      F_00c84440(param_1);
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x6c) + 0x9c)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      }
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0xa4) = 1;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x80))))(param_1 + -0xc);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x28))))(param_1 + -0xc,0);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 100))))(param_1 + -0xc);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x6c))))(param_1 + -0xc);
      gen_imp_SetEvent(*(HANDLE *)(param_1 + 0x50));
      F_00c81490((undefined *)(param_1 + -0xc));
      *(undefined4 *)(param_1 + 0x54) = 0;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c83090 */
uint F_00c83090(unsigned int gen_a0)
{
  GEN_ENTER(0xc83090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 1) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x30))))(param_1 + -0xc,1);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar4;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x6c) + 0x18))) == 0) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x30)));
    *(undefined4 *)(param_1 + 8) = 1;
    uVar4 = (*pcVar2)(param_1 + -0xc,1);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar4;
  }
  uVar4 = F_00c844d0(param_1);
  if ((int)uVar4 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar4;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0xa4) = 1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x80))))(param_1 + -0xc);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x28))))(param_1 + -0xc,1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x6c))))(param_1 + -0xc);
  if (*(UINT *)(param_1 + 0xb4) != 0) {
    gen_imp_timeKillEvent(*(UINT *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x6c) + 0x9c)));
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
  }
  if (iVar1 == 0) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x70)));
    *(undefined4 *)(param_1 + 0x54) = 0;
    (*pcVar2)(param_1 + -0xc);
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x30))))(param_1 + -0xc,iVar1);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar4;
}

/* ref: FUN_00c831d0 */
uint F_00c831d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc831d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int * piVar2;
  code * pcVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(uint *)&gen_args[0]) + 0x70);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)((*(uint *)&gen_args[0]) + 8);
  if (iVar1 != 2) {
    if (*((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x6c) + 0x18))) != 0) {
      gen_imp_SetEvent(*(HANDLE *)((*(uint *)&gen_args[0]) + 0x50));
      uVar4 = F_00c84570((*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
      if ((int)uVar4 < 0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return uVar4;
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) - 0xc) + 0x28))))((*(uint *)&gen_args[0]) - 0xc,1);
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((*(uint *)&gen_args[0]) + 0x88));
      *(undefined4 *)((*(uint *)&gen_args[0]) + 0xa4) = 0;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((*(uint *)&gen_args[0]) + 0x88));
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x6c) + 0x9c)));
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
      }
      if (iVar1 == 0) {
        pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) - 0xc) + 0x70)));
        *(undefined4 *)((*(uint *)&gen_args[0]) + 0x54) = 0;
        (*pcVar3)((*(uint *)&gen_args[0]) - 0xc);
      }
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) - 0xc) + 0x7c))))((*(uint *)&gen_args[0]) - 0xc);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar4;
    }
    F_00c84750((undefined *)((*(uint *)&gen_args[0]) - 0xc),1,0,-(uint)((*(uint *)&gen_args[0]) != 0xc) & (*(uint *)&gen_args[0]));
    *(undefined4 *)((*(uint *)&gen_args[0]) + 8) = 2;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf7 */
uint F_00c832d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc832d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0xc4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)&gen_args[1]) == 0) {
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
LAB_00c8334b: ;
      uVar1 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78)));
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
    (*(int *)&gen_args[1]) = 0;
    this_00 = (undefined *)F_004069f0(0xe0);
    if (this_00 == (undefined *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)F_00c81de0(this_00,(*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),(*(undefined * PTR32 (*)[1])REFP(0x112870c)));
    }
    *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = piVar2;
    if (piVar2 != (int *)0x0) {
      if (-1 < (*(int *)&gen_args[1])) goto LAB_00c8334b;
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = 0;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf37 */
uint F_00c83360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x60) = 0;
  if (*(int *)(this + 0x14) == 2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
    if (-1 < (int)uVar1) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
      *(undefined4 *)(this + 0xb0) = 0;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
      return 0;
    }
  }
  else {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
    *(undefined4 *)(this + 0xb0) = 1;
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf35 */
uint F_00c833d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc833d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xac);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0xac) = 0;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x78) + 0x18))) == 0) {
    return 1;
  }
  if ((*(int *)(this + 0x14) != 0) && (*((char *)GEN_TOP((*(int *)(this + 0x78) + 0x25))) == '\0')) {
    return 0x80040224;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  *(undefined4 *)(this + 0xb0) = 0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  *(undefined4 *)(this + 0x60) = 0;
  if (*(int *)(this + 0x14) == 2) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf38 */
uint F_00c83470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(this + 0xb4) = 1;
  uVar2 = F_00c85a40(*(int *)(this + 0x78) + 0x98,param_1);
  if (uVar2 != 0) {
    *(undefined4 *)(this + 0xb4) = 0;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1[0x33] != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,piVar1[0x33]);
    if ((int)uVar2 < 0) {
      *(undefined4 *)(this + 0xb4) = 0;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
  }
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(this + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection_00);
  if (((*(int *)(this + 0x6c) == 0) && (*(int *)(this + 0x70) == 0)) && (*(int *)(this + 0x60) == 0)
     ) {
    if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
      F_00c8af50(*(undefined * PTR32 *)(this + 0x50),param_1);
    }
    if (*(int *)(this + 100) == 1) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,param_1);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xb4) = 0;
        gen_imp_LeaveCriticalSection(lpCriticalSection_00);
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0x8004022b;
      }
    }
    *(undefined4 *)(this + 0xb8) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x78) + 0xc0)));
    *(undefined4 *)(this + 0xbc) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x78) + 0xc4)));
    *(int * PTR32 *)(this + 0x6c) = param_1;
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (*(int *)(this + 100) == 0) {
      F_00c81c50(this,1);
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection_00);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
  *(undefined4 *)(this + 0xb4) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection_00);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x8000ffff;
}

/* ref: FUN_00c835f0 */
unsigned int F_00c835f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc835f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  code * pcVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x25));
  if (param_3[0x30] != 0) {
    pcVar1 = *(gen_code32 *)(*param_3 + 0x60);
    param_3[0x30] = 0;
    (*pcVar1)(param_3);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x25));
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf24 */
uint F_00c83630(unsigned int gen_a0)
{
  GEN_ENTER(0xc83630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (((*(int *)(this + 0x70) != 0) && (*(int *)(this + 0x74) == 0)) && (*(int *)(this + 0xc0) == 0)
     ) {
    piVar1 = *(int * PTR32 *)(this + 0x18);
    if (piVar1 != (int *)0x0) {
      iVar2 = *(int *)(this + 0xbc);
      uVar5 = *(uint *)(this + 0xb8);
      uVar3 = *(uint *)(this + 0x20);
      uVar6 = uVar5 + *(uint *)(this + 0x20);
      iVar4 = *(int *)(this + 0x24);
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,&(*(uint *)(gen_frame + 0x4)));
      iVar2 = (int)((longlong)
                    CONCAT44(((iVar2 + iVar4 + (uint)CARRY4(uVar5,uVar3)) - (*(int *)(gen_frame + 0x8))) -
                             (uint)(uVar6 < (*(uint *)(gen_frame + 0x4))),uVar6 - (*(uint *)(gen_frame + 0x4))) / 10000);
      if (0x31 < iVar2) {
        uVar5 = F_00c897c0(iVar2,10,((code *)REFP(0xc835f0)),this,0);
        *(uint *)(this + 0xc0) = uVar5;
        if (uVar5 != 0) {
          return 0;
        }
      }
    }
    uVar5 = F_00c81b20(this);
    return uVar5;
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf25 */
uint F_00c836c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc836c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(UINT *)(this + 0xc0) != 0) {
    gen_imp_timeKillEvent(*(UINT *)(this + 0xc0));
    *(undefined4 *)(this + 0xc0) = 0;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return 0;
}

/* ref: FUN_00c83710 */
uint F_00c83710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc83710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c81220(this,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1128978));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128924));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1128900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x11288ec));
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  F_00c82160(this);
  return (uint)this;
}

/* ref: FUN_00c83780 */
unsigned int F_00c83780(unsigned int gen_a0)
{
  GEN_ENTER(0xc83780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1128978));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128924));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1128900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x11288ec));
  F_00c82e80(this);
  return 0;
}

/* ref: FUN_00c837b0 */
uint F_00c837b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc837b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + -8))))
                    (*(undefined4 * PTR32 *)(param_1 + -8),param_2,param_3);
  return uVar1;
}

