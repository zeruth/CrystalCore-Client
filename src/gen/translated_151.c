#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: ___security_init_cookie */
unsigned int F_00c5c1d2(void)
{
  GEN_ENTER(0xc5c1d2u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  
  (*(_FILETIME *)(gen_frame + 0x14)).dwLowDateTime = 0;
  (*(_FILETIME *)(gen_frame + 0x14)).dwHighDateTime = 0;
  if ((REFG(undefined4, 0x134ab78) == 0xbb40e64e) || ((REFG(undefined4, 0x134ab78) & 0xffff0000) == 0)) {
    gen_imp_GetSystemTimeAsFileTime(&(*(_FILETIME *)(gen_frame + 0x14)));
    uVar4 = (*(_FILETIME *)(gen_frame + 0x14)).dwHighDateTime ^ (*(_FILETIME *)(gen_frame + 0x14)).dwLowDateTime;
    DVar1 = gen_imp_GetCurrentProcessId();
    DVar2 = gen_imp_GetCurrentThreadId();
    DVar3 = gen_imp_GetTickCount();
    gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0xc)));
    REFG(undefined4, 0x134ab78) = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart ^ (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart;
    if (REFG(undefined4, 0x134ab78) == 0xbb40e64e) {
      REFG(undefined4, 0x134ab78) = 0xbb40e64f;
    }
    else if ((REFG(undefined4, 0x134ab78) & 0xffff0000) == 0) {
      REFG(undefined4, 0x134ab78) = REFG(undefined4, 0x134ab78) | (REFG(undefined4, 0x134ab78) | 0x4711) << 0x10;
    }
  }
  REFG(undefined4, 0x134ab7c) = ~REFG(undefined4, 0x134ab78);
  return 0;
}

/* ref: __is_LFH_enabled */
uint F_00c5c26d(void)
{
  GEN_ENTER(0xc5c26du, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  (*(int *)(gen_frame + 0x8)) = -1;
  BVar1 = gen_imp_HeapQueryInformation(REFG(undefined4, 0x15d74c8),HeapCompatibilityInformation,&(*(int *)(gen_frame + 0x8)),4,(GEN_LPANY)0x0);
  if ((BVar1 != 0) && ((*(int *)(gen_frame + 0x8)) == 2)) {
    return 1;
  }
  return 0;
}

/* ref: __expand */
undefined * F_00c5c2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5c2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _NewSize = (gen_size32)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  SIZE_T SVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  gen_size32 dwBytes;
  
  if (_Memory == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return (undefined *)0x0;
  }
  if (_NewSize < 0xffffffe1) {
    dwBytes = _NewSize;
    if (_NewSize == 0) {
      dwBytes = 1;
    }
    SVar3 = gen_imp_HeapSize(REFG(undefined4, 0x15d74c8),0,_Memory);
    pvVar2 = gen_imp_HeapReAlloc(REFG(undefined4, 0x15d74c8),0x10,_Memory,dwBytes);
    if (pvVar2 == (LPVOID)0x0) {
      if ((SVar3 < 0x4001) && (dwBytes <= SVar3)) {
        (*(int *)(gen_frame + 0x8)) = -1;
        BVar4 = gen_imp_HeapQueryInformation(REFG(undefined4, 0x15d74c8),HeapCompatibilityInformation,&(*(int *)(gen_frame + 0x8)),4,(GEN_LPANY)0x0);
        if ((BVar4 != 0) && ((*(int *)(gen_frame + 0x8)) == 2)) {
          return _Memory;
        }
      }
      piVar1 = F_00c51f85();
      DVar5 = gen_imp_GetLastError();
      iVar6 = F_00c51f43(DVar5);
      *piVar1 = iVar6;
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
    pvVar2 = (undefined *)0x0;
  }
  return pvVar2;
}

/* ref: __VEC_memzero */
ulonglong F_00c5c35a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5c35au, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  gen_v16 * pauVar2;
  uint uVar3;
  
  pauVar2 = param_1;
  if (((uint)param_1 & 0xf) != 0) {
    uVar3 = 0x10 - ((uint)param_1 & 0xf);
    param_2 = param_2 - uVar3;
    for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      (*pauVar2)[0] = 0;
      pauVar2 = (gen_v16 *)(*pauVar2 + 1);
    }
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)*pauVar2 = 0;
      pauVar2 = (gen_v16 *)(*pauVar2 + 4);
    }
  }
  for (uVar1 = param_2 >> 7; uVar1 != 0; uVar1 = uVar1 - 1) {
    GEN_V16_SET(*pauVar2, 0x0);
    GEN_V16_SET(pauVar2[1], 0x0);
    GEN_V16_SET(pauVar2[2], 0x0);
    GEN_V16_SET(pauVar2[3], 0x0);
    GEN_V16_SET(pauVar2[4], 0x0);
    GEN_V16_SET(pauVar2[5], 0x0);
    GEN_V16_SET(pauVar2[6], 0x0);
    GEN_V16_SET(pauVar2[7], 0x0);
    pauVar2 = pauVar2 + 8;
  }
  if ((param_2 & 0x7f) != 0) {
    for (uVar1 = (param_2 & 0x7f) >> 4; uVar1 != 0; uVar1 = uVar1 - 1) {
      GEN_V16_SET(*pauVar2, 0x0);
      pauVar2 = pauVar2 + 1;
    }
    if ((param_2 & 0xf) != 0) {
      for (uVar1 = (param_2 & 0xf) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)*pauVar2 = 0;
        pauVar2 = (gen_v16 *)(*pauVar2 + 4);
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        (*pauVar2)[0] = 0;
        pauVar2 = (gen_v16 *)(*pauVar2 + 1);
      }
    }
  }
  return ZEXT48(param_1);
}

/* ref: CPtoLCID */
int F_00c5c414(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c414u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  if (in_eax == 0x3a4) {
    return 0x411;
  }
  if (in_eax == 0x3a8) {
    return 0x804;
  }
  if (in_eax == 0x3b5) {
    return 0x412;
  }
  if (in_eax != 0x3b6) {
    return 0;
  }
  return 0x404;
}

/* ref: setSBCS */
unsigned int F_00c5c443(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c443u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined1 * puVar1;
  int iVar2;
  
  F_00c48350((undefined *)(in_eax + 0x1c),0,0x101);
  *(undefined4 *)(in_eax + 4) = 0;
  *(undefined4 *)(in_eax + 8) = 0;
  *(undefined4 *)(in_eax + 0xc) = 0;
  *(undefined4 *)(in_eax + 0x10) = 0;
  *(undefined4 *)(in_eax + 0x14) = 0;
  *(undefined4 *)(in_eax + 0x18) = 0;
  puVar1 = (undefined1 *)(in_eax + 0x1c);
  iVar2 = 0x101;
  do {
    *puVar1 = puVar1[(int)&REFG(undefined, 0x134b2c0) - in_eax];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_eax + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&REFG(undefined, 0x134b2c0) - in_eax];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: setSBUpLow */
uint F_00c5c4a7(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c4a7u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x510];
  byte * pbVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  char * pcVar5;
  char cVar6;
  BYTE * pBVar7;
  undefined _Stack_51c[20];
  
  (*(uint *)(gen_frame + 0x508)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50c);
  BVar3 = gen_imp_GetCPInfo(*(UINT *)(in_esi + 4),&_Stack_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar5 = (char *)(in_esi + 0x11d + uVar4);
      if (pcVar5 + (-0x61 - (in_esi + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(in_esi + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_00c5c61d: ;
        *pcVar5 = cVar6;
      }
      else {
        if (pcVar5 + (-0x61 - (in_esi + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(in_esi + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_00c5c61d;
        }
        *pcVar5 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      ((CHAR *)(gen_frame + 0x408))[(int)(uVar4)] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    ((CHAR *)(gen_frame + 0x408))[0] = ' ';
    if ((*((BYTE *)GEN_TOP(((((char *)&(_Stack_51c) + 6) + (0) * 1))))) != 0) {
      pBVar7 = ((BYTE *)(((char *)&(_Stack_51c) + 6))) + 1;
      bVar2 = (*((BYTE *)GEN_TOP(((((char *)&(_Stack_51c) + 6) + (0) * 1)))));
      do {
        uVar4 = (uint)bVar2;
        if (uVar4 <= *pBVar7) {
          F_00c48350(((CHAR *)(gen_frame + 0x408)) + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        bVar2 = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (bVar2 != 0);
    }
    F_00c635a3(0,1,((CHAR *)(gen_frame + 0x408)),0x100,((ushort *)(gen_frame + 0x8)),*(undefined4 *)(in_esi + 4),
               *(undefined4 *)(in_esi + 0xc),0);
    F_00c54720((undefined *)0x0,*(LPCWSTR *)(in_esi + 0xc),0x100,((CHAR *)(gen_frame + 0x408)),0x100,((CHAR *)(gen_frame + 0x308)),
                       0x100,*(int *)(in_esi + 4),0);
    F_00c54720((undefined *)0x0,*(LPCWSTR *)(in_esi + 0xc),0x200,((CHAR *)(gen_frame + 0x408)),0x100,((CHAR *)(gen_frame + 0x208)),
                       0x100,*(int *)(in_esi + 4),0);
    pcVar5 = (char *)0x0;
    do {
      if ((((ushort *)(gen_frame + 0x8))[(int)((int)pcVar5)] & 1) == 0) {
        if ((((ushort *)(gen_frame + 0x8))[(int)((int)pcVar5)] & 2) != 0) {
          pcVar5[in_esi + 0x1d] = pcVar5[in_esi + 0x1d] | 0x20;
          cVar6 = ((CHAR *)(gen_frame + 0x208))[(int)((int)pcVar5)];
          goto LAB_00c5c5c0;
        }
        pcVar5[in_esi + 0x11d] = '\0';
      }
      else {
        pcVar5[in_esi + 0x1d] = pcVar5[in_esi + 0x1d] | 0x10;
        cVar6 = ((CHAR *)(gen_frame + 0x308))[(int)((int)pcVar5)];
LAB_00c5c5c0: ;
        pcVar5[in_esi + 0x11d] = cVar6;
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < (char *)0x100);
  }
  F_00c47745((*(uint *)(gen_frame + 0x508)) ^ (uint)(uint)(gen_frame + 0x50c));
  return (uint)pcVar5;
}

/* ref: ___updatetmbcinfo */
undefined * F_00c5c637(void)
{
  GEN_ENTER(0xc5c637u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  LONG LVar2;
  undefined * lpAddend;
  undefined * local_20;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6510);
  uStack_c = 0xc5c643;
  p_Var1 = F_00c5b37a();
  if ((((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0) || ((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) == (undefined *)0x0)) {
    F_00c5aa4f(0xd);
    local_8 = (undefined *)0x0;
    lpAddend = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
    local_20 = lpAddend;
    if (lpAddend != (undefined *)REFG(undefined * PTR32, 0x134b6e8)) {
      if (lpAddend != (undefined *)0x0) {
        LVar2 = gen_imp_InterlockedDecrement(&(*(int *)((char *)(lpAddend))));
        if ((LVar2 == 0) && (lpAddend != (undefined *)&REFG(undefined, 0x134b2c0))) {
          F_00c4c68f(lpAddend);
        }
      }
      (*(undefined * PTR32 *)(((char *)(p_Var1) + 104))) = (undefined *)REFG(undefined * PTR32, 0x134b6e8);
      lpAddend = (undefined *)REFG(undefined * PTR32, 0x134b6e8);
      local_20 = (undefined *)REFG(undefined * PTR32, 0x134b6e8);
      gen_imp_InterlockedIncrement((LONG *)REFG(undefined * PTR32, 0x134b6e8));
    }
    local_8 = (undefined *)0xfffffffe;
    F_00c5c6d2();
  }
  else {
    lpAddend = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
  }
  if (lpAddend == (undefined *)0x0) {
                    
    F_00c47ca5(0x20);
  }
  return lpAddend;
}

/* ref: FUN_00c5c6cf */
uint F_00c5c6cf(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c6cfu, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5c6d2 */
uint F_00c5c6d2(void)
{
  GEN_ENTER(0xc5c6d2u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: getSystemCP */
int F_00c5c6db(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c6dbu, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  UINT UVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(undefined *)0x0);
  REFG(undefined4, 0x15d74cc) = 0;
  if (in_esi == -2) {
    REFG(undefined4, 0x15d74cc) = 1;
    UVar1 = gen_imp_GetOEMCP();
  }
  else if (in_esi == -3) {
    REFG(undefined4, 0x15d74cc) = 1;
    UVar1 = gen_imp_GetACP();
  }
  else {
    if (in_esi != -4) {
      if (((byte *)(gen_frame + 0xc))[0xc] == 0) {
        REFG(undefined4, 0x15d74cc) = 0;
        return in_esi;
      }
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      return in_esi;
    }
    UVar1 = *((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4)));
    REFG(undefined4, 0x15d74cc) = 1;
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return UVar1;
}

/* ref: __setmbcp_nolock */
uint F_00c5c757(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5c757u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 gen_out[0x4];
  BYTE * pBVar1;
  byte * pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  int iVar7;
  undefined2 * puVar8;
  byte * pbVar9;
  undefined2 * puVar10;
  int iVar11;
  BYTE * pBVar12;
  uint local_24;
  byte * local_20;
  undefined _Stack_1c[20];
  uint local_8;
  
  local_8 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  uVar4 = F_00c5c6db(param_1);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_00c5c795: ;
    if (*(uint *)((int)&REFG(undefined4, 0x134b6f0) + uVar5) != uVar4) goto code_r0x00c5c7a1;
    F_00c48350((undefined *)(param_2 + 0x1c),0,0x101);
    iVar11 = (int)((int)(uintptr_t)local_20) * 0x30;
    local_24 = 0;
    pbVar9 = &REFG(undefined, 0x134b700) + iVar11;
    local_20 = pbVar9;
    do {
      for (; (*pbVar9 != 0 && (bVar3 = pbVar9[1], bVar3 != 0)); pbVar9 = pbVar9 + 2) {
        for (uVar5 = (uint)*pbVar9; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x134b6ec);
          bVar3 = pbVar9[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar9 = local_20 + 8;
      local_20 = pbVar9;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    iVar7 = F_00c5c414(uVar4);
    *(int *)(param_2 + 0xc) = iVar7;
    puVar8 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&REFG(undefined, 0x134b6f4) + iVar11);
    iVar11 = 6;
    do {
      *puVar8 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_00c5c8c9;
  }
LAB_00c5c782: ;
  F_00c5c443(param_2);
LAB_00c5c789: ;
  uVar4 = 0;
LAB_00c5c931: ;
  F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x0));
  return uVar4;
code_r0x00c5c7a1: ;
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x00c5c7ae;
  goto LAB_00c5c795;
code_r0x00c5c7ae: ;
  if ((uVar4 != 65000) && (uVar4 != 0xfde9)) {
    BVar6 = gen_imp_IsValidCodePage(uVar4 & 0xffff);
    if (BVar6 != 0) {
      BVar6 = gen_imp_GetCPInfo(uVar4,&_Stack_1c);
      if (BVar6 != 0) {
        F_00c48350((undefined *)(param_2 + 0x1c),0,0x101);
        *(uint *)(param_2 + 4) = uVar4;
        *(undefined4 *)(param_2 + 0xc) = 0;
        if ((*(UINT *)((char *)&(_Stack_1c))) < 2) {
          *(undefined4 *)(param_2 + 8) = 0;
        }
        else {
          if ((*((BYTE *)GEN_TOP(((((char *)&(_Stack_1c) + 6) + (0) * 1))))) != '\0') {
            pBVar12 = ((BYTE *)(((char *)&(_Stack_1c) + 6))) + 1;
            do {
              bVar3 = *pBVar12;
              if (bVar3 == 0) break;
              for (uVar4 = (uint)pBVar12[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
                pbVar9 = (byte *)(param_2 + 0x1d + uVar4);
                *pbVar9 = *pbVar9 | 4;
              }
              pBVar1 = pBVar12 + 1;
              pBVar12 = pBVar12 + 2;
            } while (*pBVar1 != 0);
          }
          pbVar9 = (byte *)(param_2 + 0x1e);
          iVar11 = 0xfe;
          do {
            *pbVar9 = *pbVar9 | 8;
            pbVar9 = pbVar9 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar11 = F_00c5c414(*(undefined4 *)(param_2 + 4));
          *(int *)(param_2 + 0xc) = iVar11;
          *(undefined4 *)(param_2 + 8) = 1;
        }
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x14) = 0;
        *(undefined4 *)(param_2 + 0x18) = 0;
LAB_00c5c8c9: ;
        F_00c5c4a7(param_2);
        goto LAB_00c5c789;
      }
      if (REFG(int, 0x15d74cc) != 0) goto LAB_00c5c782;
    }
  }
  uVar4 = 0xffffffff;
  goto LAB_00c5c931;
}

/* ref: __getmbcp */
int F_00c5c940(void)
{
  GEN_ENTER(0xc5c940u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(undefined *)0x0);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 8))) == 0) {
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 4)));
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}

/* ref: __setmbcp */
int F_00c5c97e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c97eu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  undefined * p_Var1;
  undefined * ptVar2;
  uint uVar3;
  LONG LVar4;
  int * piVar5;
  int iVar6;
  undefined * ptVar7;
  undefined * ptVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6530);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc5c98a;
  (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
  p_Var1 = F_00c5b37a();
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = p_Var1;
  F_00c5c637();
  ptVar2 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
  (*(int *)&gen_args[0]) = F_00c5c6db((*(int *)&gen_args[0]));
  if ((*(int *)&gen_args[0]) == (*(int *)(((char *)(ptVar2) + 4)))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  else {
    ptVar2 = F_00c54c2e(0x220);
    if (ptVar2 != (undefined *)0x0) {
      ptVar7 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
      ptVar8 = ptVar2;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        (*(int *)((char *)(ptVar8))) = (*(int *)((char *)(ptVar7)));
        ptVar7 = (undefined *)&(*(int *)(((char *)(ptVar7) + 4)));
        ptVar8 = (undefined *)&(*(int *)(((char *)(ptVar8) + 4)));
      }
      (*(int *)((char *)(ptVar2))) = 0;
      uVar3 = F_00c5c757((*(int *)&gen_args[0]),ptVar2);
      p_Var1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      (*(uint *)(gen_frame + 0xc)) = uVar3;
      if (uVar3 == 0) {
        LVar4 = gen_imp_InterlockedDecrement(&(*(int *)((char *)(*(undefined * PTR32 *)(((char *)((*(undefined * PTR32 *)(gen_frame + 0x8))) + 104))))));
        if ((LVar4 == 0) && ((*(undefined * PTR32 *)(((char *)(p_Var1) + 104))) != (undefined *)&REFG(undefined, 0x134b2c0))) {
          F_00c4c68f((*(undefined * PTR32 *)(((char *)(p_Var1) + 104))));
        }
        (*(undefined * PTR32 *)(((char *)(p_Var1) + 104))) = ptVar2;
        gen_imp_InterlockedIncrement(ptVar2);
        if ((((*(int *)(((char *)(p_Var1) + 112))) & 2) == 0) && (((byte)REFG(undefined4, 0x134b7e0) & 1) == 0)) {
          F_00c5aa4f(0xd);
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
          *(int *)&REFG(undefined, 0x15d74dc) = (*(int *)(((char *)(ptVar2) + 4)));
          *(int *)&REFG(undefined, 0x15d74e0) = (*(int *)(((char *)(ptVar2) + 8)));
          *(undefined4 *)&REFG(undefined, 0x15d74e4) = *(undefined4 *)((ushort *)(((char *)(ptVar2) + 12)));
          for (iVar6 = 0; (*(int *)(gen_frame + 0x10)) = iVar6, iVar6 < 5; iVar6 = iVar6 + 1) {
            (&REFG(undefined2, 0x15d74d0))[iVar6] = (*((ushort *)GEN_TOP(((((char *)(ptVar2) + 12) + (iVar6 + 2) * 2)))));
          }
          for (iVar6 = 0; (*(int *)(gen_frame + 0x10)) = iVar6, iVar6 < 0x101; iVar6 = iVar6 + 1) {
            (&REFG(undefined1, 0x134b4e0))[iVar6] = (*((uchar *)GEN_TOP(((((char *)(ptVar2) + 24) + (iVar6 + 4) * 1)))));
          }
          for (iVar6 = 0; (*(int *)(gen_frame + 0x10)) = iVar6, iVar6 < 0x100; iVar6 = iVar6 + 1) {
            (&REFG(undefined1, 0x134b5e8))[iVar6] = (*((uchar *)GEN_TOP(((((char *)(ptVar2) + 281) + (iVar6 + 4) * 1)))));
          }
          LVar4 = gen_imp_InterlockedDecrement((LONG *)REFG(undefined * PTR32, 0x134b6e8));
          if ((LVar4 == 0) && (REFG(undefined * PTR32, 0x134b6e8) != &REFG(undefined, 0x134b2c0))) {
            F_00c4c68f(REFG(undefined * PTR32, 0x134b6e8));
          }
          REFG(undefined * PTR32, 0x134b6e8) = (undefined *)ptVar2;
          gen_imp_InterlockedIncrement(ptVar2);
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
          F_00c5cadf();
        }
      }
      else if (uVar3 == 0xffffffff) {
        if (ptVar2 != (undefined *)&REFG(undefined, 0x134b2c0)) {
          F_00c4c68f(ptVar2);
        }
        piVar5 = F_00c51f85();
        *piVar5 = 0x16;
      }
    }
  }
  return (*(uint *)(gen_frame + 0xc));
}

/* ref: FUN_00c5cadf */
uint F_00c5cadf(void)
{
  GEN_ENTER(0xc5cadfu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: ___initmbctable */
uint F_00c5cb18(void)
{
  GEN_ENTER(0xc5cb18u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5c97e(-3);
    REFG(int, 0x15e52e0) = 1;
  }
  return 0;
}

/* ref: ___addlocaleref */
unsigned int F_00c5cb36(unsigned int gen_a0)
{
  GEN_ENTER(0xc5cb36u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1;
  gen_imp_InterlockedIncrement(param_1);
  if (*(int *)(param_1 + 0xb0) != 0) {
    gen_imp_InterlockedIncrement(*(int *)(param_1 + 0xb0));
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    gen_imp_InterlockedIncrement(*(int *)(param_1 + 0xb8));
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    gen_imp_InterlockedIncrement(*(int *)(param_1 + 0xb4));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    gen_imp_InterlockedIncrement(*(int *)(param_1 + 0xc0));
  }
  piVar2 = (int *)(param_1 + 0x50);
  param_1 = 6;
  do {
    if (((undefined *)piVar2[-2] != &REFG(undefined, 0x134b7e4)) && (*piVar2 != 0)) {
      gen_imp_InterlockedIncrement(*piVar2);
    }
    if ((piVar2[-1] != 0) && (piVar2[1] != 0)) {
      gen_imp_InterlockedIncrement(piVar2[1]);
    }
    piVar2 = piVar2 + 4;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  gen_imp_InterlockedIncrement(*(int *)(iVar1 + 0xd4) + 0xb4);
  return 0;
}

/* ref: ___removelocaleref */
uint F_00c5cbc5(unsigned int gen_a0)
{
  GEN_ENTER(0xc5cbc5u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    gen_imp_InterlockedDecrement(param_1);
    if (*(int *)(param_1 + 0xb0) != 0) {
      gen_imp_InterlockedDecrement(*(int *)(param_1 + 0xb0));
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      gen_imp_InterlockedDecrement(*(int *)(param_1 + 0xb8));
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      gen_imp_InterlockedDecrement(*(int *)(param_1 + 0xb4));
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      gen_imp_InterlockedDecrement(*(int *)(param_1 + 0xc0));
    }
    piVar2 = (int *)(param_1 + 0x50);
    param_1 = 6;
    do {
      if (((undefined *)piVar2[-2] != &REFG(undefined, 0x134b7e4)) && (*piVar2 != 0)) {
        gen_imp_InterlockedDecrement(*piVar2);
      }
      if ((piVar2[-1] != 0) && (piVar2[1] != 0)) {
        gen_imp_InterlockedDecrement(piVar2[1]);
      }
      piVar2 = piVar2 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    gen_imp_InterlockedDecrement(*(int *)(uVar1 + 0xd4) + 0xb4);
  }
  return uVar1;
}

/* ref: ___freetlocinfo */
uint F_00c5cc5e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5cc5eu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * PTR32 * ppuVar2;
  undefined * _Memory;
  uint extraout_EAX = 0;
  undefined4 * puVar3;
  
  _Memory = param_1;
  if ((((*(undefined * PTR32 * PTR32 *)((int)param_1 + 0xbc) != (undefined * PTR32 *)0x0) &&
       (*(undefined * PTR32 * PTR32 *)((int)param_1 + 0xbc) != &REFG(undefined * PTR32, 0x134b048))) &&
      (*(int * PTR32 *)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int * PTR32 *)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int * PTR32 *)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      F_00c4c68f(piVar1);
      F_00c5fe2f(*(undefined4 *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int * PTR32 *)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      F_00c4c68f(piVar1);
      F_00c5fba6(*(undefined4 *)((int)param_1 + 0xbc));
    }
    F_00c4c68f(*(undefined * PTR32 *)((int)param_1 + 0xb0));
    F_00c4c68f(*(undefined * PTR32 *)((int)param_1 + 0xbc));
  }
  if ((*(int * PTR32 *)((int)param_1 + 0xc0) != (int *)0x0) && (**(int * PTR32 *)((int)param_1 + 0xc0) == 0)) {
    F_00c4c68f(((undefined *)GEN_TOP((*(int *)((int)param_1 + 0xc4) + -0xfe))));
    F_00c4c68f(((undefined *)GEN_TOP((*(int *)((int)param_1 + 0xcc) + -0x80))));
    F_00c4c68f(((undefined *)GEN_TOP((*(int *)((int)param_1 + 0xd0) + -0x80))));
    F_00c4c68f(*(undefined * PTR32 *)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined * PTR32 * PTR32 *)((int)param_1 + 0xd4);
  if ((ppuVar2 != &REFG(undefined * PTR32, 0x134b7e8)) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    F_00c5f782(ppuVar2);
    F_00c4c68f(*(undefined * PTR32 *)((int)param_1 + 0xd4));
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x50);
  param_1 = (undefined *)0x6;
  do {
    if ((((undefined *)puVar3[-2] != &REFG(undefined, 0x134b7e4)) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      F_00c4c68f(piVar1);
    }
    if (((puVar3[-1] != 0) && (piVar1 = (int *)puVar3[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      F_00c4c68f(piVar1);
    }
    puVar3 = puVar3 + 4;
    param_1 = (undefined *)((int)param_1 + -1);
  } while (param_1 != (undefined *)0x0);
  F_00c4c68f(_Memory);
  return extraout_EAX;
}

/* ref: __updatetlocinfoEx_nolock */
uint F_00c5cda9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5cda9u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  
  if ((param_2 == (int *)0x0) || (param_1 == (undefined4 *)0x0)) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*param_1;
    piVar2 = param_2;
    if (piVar1 != param_2) {
      *param_1 = param_2;
      F_00c5cb36(param_2);
      if (((piVar1 != (int *)0x0) && (F_00c5cbc5(piVar1), *piVar1 == 0)) &&
         (piVar1 != (int *)&REFG(undefined, 0x134b950))) {
        F_00c5cc5e(piVar1);
      }
    }
  }
  return (uint)piVar2;
}

/* ref: ___updatetlocinfo */
undefined * F_00c5cdf6(void)
{
  GEN_ENTER(0xc5cdf6u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  uint uVar2;
  undefined * ptVar3;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6550);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5ce02;
  p_Var1 = F_00c5b37a();
  if ((((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0) || ((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) == (undefined *)0x0)) {
    F_00c5aa4f(0xc);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    ptVar3 = (undefined *)&(*(undefined * PTR32 *)(((char *)(p_Var1) + 108)));
    uVar2 = F_00c5cda9(ptVar3,REFG(undefined * PTR32, 0x134ba28));
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c5ce63((gen_frame + 0x1c));
  }
  else {
    p_Var1 = F_00c5b37a();
    ptVar3 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 108)));
  }
  if (ptVar3 == (undefined *)0x0) {
                    
    F_00c47ca5(0x20);
  }
  return ptVar3;
}

/* ref: FUN_00c5ce63 */
uint F_00c5ce63(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ce63u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: __isctype_l */
int F_00c5ce6f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5ce6fu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x4)),(*(undefined * PTR32 *)&gen_args[2]));
  if ((*(int *)&gen_args[0]) + 1U < 0x101) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 200))) + (*(int *)&gen_args[0]) * 2)));
  }
  else {
    iVar2 = F_00c6dfe8((*(int *)&gen_args[0]) >> 8 & 0xff,(undefined *)((byte *)(gen_frame + 0x4)));
    uVar5 = (undefined1)(*(int *)&gen_args[0]);
    if (iVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x14)) = uVar5;
      (*(undefined1 *)(gen_frame + 0x15)) = 0;
      uVar4 = 1;
    }
    else {
      (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined1)((uint)(*(int *)&gen_args[0]) >> 8);
      (*(undefined1 *)(gen_frame + 0x14)) = (undefined1)(*(int *)&gen_args[0]);
      (*(undefined1 *)(gen_frame + 0x15)) = uVar5;
      (*(undefined1 *)(gen_frame + 0x16)) = 0;
      uVar4 = 2;
    }
    BVar3 = F_00c635a3(((byte *)(gen_frame + 0x4)),1,&(*(undefined1 *)(gen_frame + 0x14)),uVar4,((ushort *)(gen_frame + 0x18)),*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 4))),
                       *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0x14))),1);
    uVar1 = ((ushort *)(gen_frame + 0x18))[0];
    if (BVar3 == 0) {
      if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return (uint)uVar1 & (*(int *)&gen_args[1]);
}

/* ref: __isctype */
int F_00c5cf27(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5cf27u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return (uint)*((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + (*(int *)&gen_args[0]) * 2))) & (*(int *)&gen_args[1]);
  }
  iVar1 = F_00c5ce6f((*(int *)&gen_args[0]),(*(int *)&gen_args[1]),(undefined *)0x0);
  return iVar1;
}

/* ref: __filbuf */
int F_00c5cf59(unsigned int gen_a0)
{
  GEN_ENTER(0xc5cf59u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
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
        if ((iVar3 != 0) && (iVar3 != -1)) {
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
          (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) + -1;
          bVar1 = *(*(char * PTR32 *)((char *)(_File)));
          (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) + 1;
          return (uint)bVar1;
        }
        (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
        (*(int *)(((char *)(_File) + 4))) = 0;
      }
      else {
        (*(int *)(((char *)(_File) + 12))) = uVar4 | 0x20;
      }
    }
  }
  return -1;
}

/* ref: __fileno */
int F_00c5d07b(unsigned int gen_a0)
{
  GEN_ENTER(0xc5d07bu, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_File == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  return (*(int *)(((char *)(_File) + 16)));
}

/* ref: __read_nolock */
int F_00c5d0a1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5d0a1u, gen_a0, gen_a1, gen_a2, 0u);
  int _FileHandle = (int)gen_a0;
  undefined * _DstBuf = (undefined *)(uintptr_t)gen_a1;
  uint _MaxCharCount = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  ulong * puVar5;
  int * piVar6;
  uint uVar7;
  byte * pbVar8;
  BOOL BVar9;
  DWORD DVar10;
  int iVar11;
  ulong uVar12;
  byte * pbVar13;
  int cbMultiByte;
  int iVar14;
  longlong lVar15;
  undefined2 uVar16;
  
  uVar1 = _MaxCharCount;
  (*(int *)(gen_frame + 0x8)) = -2;
  if (_FileHandle == -2) {
    puVar5 = F_00c51f98();
    *puVar5 = 0;
    piVar6 = F_00c51f85();
    *piVar6 = 9;
    return -1;
  }
  if ((_FileHandle < 0) || (REFG(undefined4, 0x15e4190) <= (uint)_FileHandle)) {
    puVar5 = F_00c51f98();
    *puVar5 = 0;
    piVar6 = F_00c51f85();
    *piVar6 = 9;
    F_00c4c305();
    return -1;
  }
  piVar6 = &REFG(undefined4, 0x15e41a0) + (_FileHandle >> 5);
  iVar14 = (_FileHandle & 0x1fU) * 0x40;
  bVar2 = *(byte *)(*piVar6 + 4 + iVar14);
  if ((bVar2 & 1) == 0) {
    puVar5 = F_00c51f98();
    *puVar5 = 0;
    piVar6 = F_00c51f85();
    *piVar6 = 9;
    goto LAB_00c5d1a0;
  }
  if (_MaxCharCount < 0x80000000) {
    (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0x0;
    if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
      return 0;
    }
    if (_DstBuf != (undefined *)0x0) {
      cVar4 = (char)(*(char *)(*piVar6 + 0x24 + iVar14) * '\x02') >> 1;
      (*(char *)(gen_frame + 0x1a)) = cVar4;
      if (cVar4 == '\x01') {
        if ((~_MaxCharCount & 1) == 0) goto LAB_00c5d18e;
        uVar7 = _MaxCharCount >> 1;
        _MaxCharCount = 4;
        if (3 < uVar7) {
          _MaxCharCount = uVar7;
        }
        pbVar13 = F_00c54c2e(_MaxCharCount);
        (*(byte * PTR32 *)(gen_frame + 0xc)) = pbVar13;
        if (pbVar13 == (byte *)0x0) {
          piVar6 = F_00c51f85();
          *piVar6 = 0xc;
          puVar5 = F_00c51f98();
          *puVar5 = 8;
          return -1;
        }
        lVar15 = F_00c6dda1(_FileHandle,0,0,1);
        iVar11 = *piVar6;
        *(int *)(iVar14 + 0x28 + iVar11) = (int)lVar15;
        *(int *)(iVar14 + 0x2c + iVar11) = (int)((ulonglong)lVar15 >> 0x20);
      }
      else {
        if (cVar4 == '\x02') {
          if ((~_MaxCharCount & 1) == 0) goto LAB_00c5d18e;
          _MaxCharCount = _MaxCharCount & 0xfffffffe;
        }
        (*(byte * PTR32 *)(gen_frame + 0xc)) = _DstBuf;
        pbVar13 = _DstBuf;
      }
      pbVar8 = pbVar13;
      uVar7 = _MaxCharCount;
      if ((((*(byte *)(*piVar6 + iVar14 + 4) & 0x48) != 0) &&
          (bVar2 = *(byte *)(*piVar6 + iVar14 + 5), bVar2 != 10)) && (_MaxCharCount != 0)) {
        uVar7 = _MaxCharCount - 1;
        *pbVar13 = bVar2;
        pbVar8 = pbVar13 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0x1;
        *(undefined1 *)(iVar14 + 5 + *piVar6) = 10;
        if ((((*(char *)(gen_frame + 0x1a)) != '\0') && (bVar2 = *(byte *)(iVar14 + 0x25 + *piVar6), bVar2 != 10)) &&
           (uVar7 != 0)) {
          *pbVar8 = bVar2;
          pbVar8 = pbVar13 + 2;
          uVar7 = _MaxCharCount - 2;
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0x2;
          *(undefined1 *)(iVar14 + 0x25 + *piVar6) = 10;
          if ((((*(char *)(gen_frame + 0x1a)) == '\x01') && (bVar2 = *(byte *)(iVar14 + 0x26 + *piVar6), bVar2 != 10)) &&
             (uVar7 != 0)) {
            *pbVar8 = bVar2;
            pbVar8 = pbVar13 + 3;
            (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0x3;
            *(undefined1 *)(iVar14 + 0x26 + *piVar6) = 10;
            uVar7 = _MaxCharCount - 3;
          }
        }
      }
      _MaxCharCount = uVar7;
      BVar9 = gen_imp_ReadFile(*(HANDLE *)(iVar14 + *piVar6),pbVar8,_MaxCharCount,&(*(uint *)(gen_frame + 0x4)),
                       (GEN_LPANY)0x0);
      if (((BVar9 == 0) || ((int)(*(uint *)(gen_frame + 0x4)) < 0)) || (_MaxCharCount < (*(uint *)(gen_frame + 0x4)))) {
        uVar12 = gen_imp_GetLastError();
        if (uVar12 != 5) {
          if (uVar12 == 0x6d) {
            (*(int *)(gen_frame + 0x8)) = 0;
            goto LAB_00c5d4ad;
          }
          goto LAB_00c5d4a2;
        }
        piVar6 = F_00c51f85();
        *piVar6 = 9;
        puVar5 = F_00c51f98();
        *puVar5 = 5;
      }
      else {
        iVar11 = (int)(*(byte * PTR32 *)(gen_frame + 0x10)) + (*(uint *)(gen_frame + 0x4));
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)iVar11;
        pbVar8 = (byte *)(iVar14 + 4 + *piVar6);
        if ((*pbVar8 & 0x80) == 0) goto LAB_00c5d4ad;
        if ((*(char *)(gen_frame + 0x1a)) == '\x02') {
          if (((*(uint *)(gen_frame + 0x4)) == 0) || (*(short *)pbVar13 != 10)) {
            *pbVar8 = *pbVar8 & 0xfb;
          }
          else {
            *pbVar8 = *pbVar8 | 4;
          }
          _MaxCharCount = (uint)(*(byte * PTR32 *)(gen_frame + 0xc));
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte * PTR32 *)(gen_frame + 0xc)) + iVar11;
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xc));
          if ((*(byte * PTR32 *)(gen_frame + 0xc)) < (*(byte * PTR32 *)(gen_frame + 0xc)) + iVar11) {
            do {
              sVar3 = *(short *)_MaxCharCount;
              if (sVar3 == 0x1a) {
                pbVar8 = (byte *)(iVar14 + 4 + *piVar6);
                if ((*pbVar8 & 0x40) == 0) {
                  *pbVar8 = *pbVar8 | 2;
                }
                else {
                  *(undefined2 *)pbVar13 = *(undefined2 *)_MaxCharCount;
                  pbVar13 = pbVar13 + 2;
                }
                break;
              }
              if (sVar3 == 0xd) {
                if (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0x10)) + -2) {
                  if (*(short *)(_MaxCharCount + 2) == 10) {
                    uVar1 = _MaxCharCount + 4;
                    goto LAB_00c5d54d;
                  }
LAB_00c5d5e0: ;
                  _MaxCharCount = _MaxCharCount + 2;
                  uVar16 = 0xd;
LAB_00c5d5e2: ;
                  *(undefined2 *)pbVar13 = uVar16;
                }
                else {
                  uVar1 = _MaxCharCount + 2;
                  BVar9 = gen_imp_ReadFile(*(HANDLE *)(iVar14 + *piVar6),&(*(short *)(gen_frame + 0x14)),2,&(*(uint *)(gen_frame + 0x4)),
                                   (GEN_LPANY)0x0);
                  if (((BVar9 == 0) && (DVar10 = gen_imp_GetLastError(), DVar10 != 0)) || ((*(uint *)(gen_frame + 0x4)) == 0))
                  goto LAB_00c5d5e0;
                  if ((*(byte *)(iVar14 + 4 + *piVar6) & 0x48) == 0) {
                    if ((pbVar13 == (*(byte * PTR32 *)(gen_frame + 0xc))) && ((*(short *)(gen_frame + 0x14)) == 10)) goto LAB_00c5d54d;
                    F_00c6dda1(_FileHandle,0xfffffffe,0xffffffff,1);
                    if ((*(short *)(gen_frame + 0x14)) == 10) goto LAB_00c5d5e9;
                    goto LAB_00c5d5e0;
                  }
                  if ((*(short *)(gen_frame + 0x14)) == 10) {
LAB_00c5d54d: ;
                    _MaxCharCount = uVar1;
                    uVar16 = 10;
                    goto LAB_00c5d5e2;
                  }
                  pbVar13[0] = 0xd;
                  pbVar13[1] = 0;
                  iVar11 = *piVar6;
                  *(undefined1 *)(iVar14 + 5 + iVar11) = (undefined1)(*(short *)(gen_frame + 0x14));
                  *(undefined1 *)(iVar14 + 0x25 + *piVar6) = (*(undefined1 *)((char *)&(*(short *)(gen_frame + 0x14)) + 1));
                  *(undefined1 *)(iVar14 + 0x26 + *piVar6) = 10;
                  _MaxCharCount = uVar1;
                }
                pbVar13 = pbVar13 + 2;
                uVar1 = _MaxCharCount;
              }
              else {
                *(short *)pbVar13 = sVar3;
                pbVar13 = pbVar13 + 2;
                uVar1 = _MaxCharCount + 2;
              }
LAB_00c5d5e9: ;
              _MaxCharCount = uVar1;
            } while (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0x10)));
          }
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)((int)pbVar13 - (int)(*(byte * PTR32 *)(gen_frame + 0xc)));
          goto LAB_00c5d4ad;
        }
        if (((*(uint *)(gen_frame + 0x4)) == 0) || (*pbVar13 != 10)) {
          *pbVar8 = *pbVar8 & 0xfb;
        }
        else {
          *pbVar8 = *pbVar8 | 4;
        }
        _MaxCharCount = (uint)(*(byte * PTR32 *)(gen_frame + 0xc));
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte * PTR32 *)(gen_frame + 0xc)) + iVar11;
        pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xc));
        if ((*(byte * PTR32 *)(gen_frame + 0xc)) < (*(byte * PTR32 *)(gen_frame + 0xc)) + iVar11) {
          do {
            bVar2 = *(byte *)_MaxCharCount;
            if (bVar2 == 0x1a) {
              pbVar8 = (byte *)(iVar14 + 4 + *piVar6);
              if ((*pbVar8 & 0x40) == 0) {
                *pbVar8 = *pbVar8 | 2;
              }
              else {
                *pbVar13 = *(byte *)_MaxCharCount;
                pbVar13 = pbVar13 + 1;
              }
              break;
            }
            if (bVar2 == 0xd) {
              if (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0x10)) + -1) {
                if (*(char *)(_MaxCharCount + 1) == '\n') {
                  uVar7 = _MaxCharCount + 2;
                  goto LAB_00c5d32d;
                }
LAB_00c5d3a4: ;
                _MaxCharCount = _MaxCharCount + 1;
                *pbVar13 = 0xd;
              }
              else {
                uVar7 = _MaxCharCount + 1;
                BVar9 = gen_imp_ReadFile(*(HANDLE *)(iVar14 + *piVar6),&(*(char *)(gen_frame + 0x1b)),1,&(*(uint *)(gen_frame + 0x4)),
                                 (GEN_LPANY)0x0);
                if (((BVar9 == 0) && (DVar10 = gen_imp_GetLastError(), DVar10 != 0)) || ((*(uint *)(gen_frame + 0x4)) == 0))
                goto LAB_00c5d3a4;
                if ((*(byte *)(iVar14 + 4 + *piVar6) & 0x48) == 0) {
                  if ((pbVar13 == (*(byte * PTR32 *)(gen_frame + 0xc))) && ((*(char *)(gen_frame + 0x1b)) == '\n')) goto LAB_00c5d32d;
                  F_00c6dda1(_FileHandle,0xffffffff,0xffffffff,1);
                  if ((*(char *)(gen_frame + 0x1b)) == '\n') goto LAB_00c5d3a8;
                  goto LAB_00c5d3a4;
                }
                if ((*(char *)(gen_frame + 0x1b)) == '\n') {
LAB_00c5d32d: ;
                  _MaxCharCount = uVar7;
                  *pbVar13 = 10;
                }
                else {
                  *pbVar13 = 0xd;
                  *(char *)(iVar14 + 5 + *piVar6) = (*(char *)(gen_frame + 0x1b));
                  _MaxCharCount = uVar7;
                }
              }
              pbVar13 = pbVar13 + 1;
              uVar7 = _MaxCharCount;
            }
            else {
              *pbVar13 = bVar2;
              pbVar13 = pbVar13 + 1;
              uVar7 = _MaxCharCount + 1;
            }
LAB_00c5d3a8: ;
            _MaxCharCount = uVar7;
          } while (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0x10)));
        }
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)((int)pbVar13 - (int)(*(byte * PTR32 *)(gen_frame + 0xc)));
        if (((*(char *)(gen_frame + 0x1a)) != '\x01') || ((int)pbVar13 - (int)(*(byte * PTR32 *)(gen_frame + 0xc)) == 0)) goto LAB_00c5d4ad;
        bVar2 = pbVar13[-1];
        if ((char)bVar2 < '\0') {
          iVar11 = 1;
          pbVar13 = pbVar13 + -1;
          while ((((&REFG(undefined, 0x134ba38))[bVar2] == '\0' && (iVar11 < 5)) && ((*(byte * PTR32 *)(gen_frame + 0xc)) <= pbVar13))) {
            pbVar13 = pbVar13 + -1;
            bVar2 = *pbVar13;
            iVar11 = iVar11 + 1;
          }
          if ((char)(&REFG(undefined, 0x134ba38))[*pbVar13] == 0) {
            piVar6 = F_00c51f85();
            *piVar6 = 0x2a;
            goto LAB_00c5d4a9;
          }
          if ((char)(&REFG(undefined, 0x134ba38))[*pbVar13] + 1 == iVar11) {
            pbVar13 = pbVar13 + iVar11;
          }
          else if ((*(byte *)(*piVar6 + 4 + iVar14) & 0x48) == 0) {
            F_00c6dda1(_FileHandle,-iVar11,-iVar11 >> 0x1f,1);
          }
          else {
            pbVar8 = pbVar13 + 1;
            *(byte *)(*piVar6 + 5 + iVar14) = *pbVar13;
            if (1 < iVar11) {
              *(byte *)(iVar14 + 0x25 + *piVar6) = *pbVar8;
              pbVar8 = pbVar13 + 2;
            }
            if (iVar11 == 3) {
              *(byte *)(iVar14 + 0x26 + *piVar6) = *pbVar8;
              pbVar8 = pbVar8 + 1;
            }
            pbVar13 = pbVar8 - iVar11;
          }
        }
        cbMultiByte = (int)pbVar13 - (int)(*(byte * PTR32 *)(gen_frame + 0xc));
        iVar11 = gen_imp_MultiByteToWideChar(0xfde9,0,(LPCSTR)(*(byte * PTR32 *)(gen_frame + 0xc)),cbMultiByte,_DstBuf,uVar1 >> 1);
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)iVar11;
        if (iVar11 != 0) {
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)(iVar11 * 2);
          *(uint *)(iVar14 + 0x30 + *piVar6) = (uint)(iVar11 != cbMultiByte);
          goto LAB_00c5d4ad;
        }
        uVar12 = gen_imp_GetLastError();
LAB_00c5d4a2: ;
        F_00c51fab(uVar12);
      }
LAB_00c5d4a9: ;
      (*(int *)(gen_frame + 0x8)) = -1;
LAB_00c5d4ad: ;
      if ((*(byte * PTR32 *)(gen_frame + 0xc)) != _DstBuf) {
        F_00c4c68f((*(byte * PTR32 *)(gen_frame + 0xc)));
      }
      if ((*(int *)(gen_frame + 0x8)) == -2) {
        return (int)(*(byte * PTR32 *)(gen_frame + 0x10));
      }
      return (*(int *)(gen_frame + 0x8));
    }
  }
LAB_00c5d18e: ;
  puVar5 = F_00c51f98();
  *puVar5 = 0;
  piVar6 = F_00c51f85();
  *piVar6 = 0x16;
LAB_00c5d1a0: ;
  F_00c4c305();
  return -1;
}

/* ref: __read */
int F_00c5d658(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5d658u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int _FileHandle_00;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6570);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5d664;
  if ((*(int *)&gen_args[0]) == -2) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    return -1;
  }
  if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
    iVar3 = (*(int *)&gen_args[0]) >> 5;
    iVar4 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
    if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) != 0) {
      if ((*(uint *)&gen_args[2]) < 0x80000000) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(int *)(gen_frame + 0x0)) = -1;
        }
        else {
          iVar3 = F_00c5d0a1(_FileHandle_00,(*(undefined * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]));
          (*(int *)(gen_frame + 0x0)) = iVar3;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c5d746(_FileHandle_00);
        return (*(int *)(gen_frame + 0x0));
      }
      puVar1 = F_00c51f98();
      *puVar1 = 0;
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      goto LAB_00c5d6a6;
    }
  }
  puVar1 = F_00c51f98();
  *puVar1 = 0;
  piVar2 = F_00c51f85();
  *piVar2 = 9;
LAB_00c5d6a6: ;
  F_00c4c305();
  return -1;
}

/* ref: FUN_00c5d743 */
unsigned int F_00c5d743(unsigned int gen_a0)
{
  GEN_ENTER(0xc5d743u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c5d746 */
unsigned int F_00c5d746(unsigned int gen_a0)
{
  GEN_ENTER(0xc5d746u, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __write_nolock */
int F_00c5d74e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5d74eu, gen_a0, gen_a1, gen_a2, 0u);
  int _FileHandle = (int)gen_a0;
  undefined * _Buf = (undefined *)(uintptr_t)gen_a1;
  uint _MaxCharCount = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x11af0];
  WCHAR WVar1;
  wchar_t * pwVar2;
  wchar_t wVar3;
  int iVar4;
  ulong * puVar5;
  int * piVar6;
  int iVar7;
  undefined * p_Var8;
  BOOL BVar9;
  WCHAR * pWVar10;
  DWORD DVar11;
  WCHAR * pWVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  gen_size32 _SrcSizeInBytes;
  
  (*(uint *)(gen_frame + 0x11ae8)) = 0xc5d75d;
  (*(uint *)(gen_frame + 0x11ae8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(WCHAR * PTR32 *)(gen_frame + 0x10020)) = _Buf;
  (*(uint *)(gen_frame + 0x10024)) = 0;
  (*(int *)(gen_frame + 0x1001c)) = 0;
  if (_MaxCharCount == 0) {
    iVar4 = 0;
    goto LAB_00c5de3d;
  }
  if (_Buf == (undefined *)0x0) {
    puVar5 = F_00c51f98();
    *puVar5 = 0;
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
    iVar4 = -1;
    goto LAB_00c5de3d;
  }
  piVar6 = &REFG(undefined4, 0x15e41a0) + (_FileHandle >> 5);
  iVar4 = (_FileHandle & 0x1fU) * 0x40;
  cVar13 = (char)(*(char *)(*piVar6 + 0x24 + iVar4) * '\x02') >> 1;
  (*(int * PTR32 *)(gen_frame + 0x10010)) = piVar6;
  (*(char *)(gen_frame + 0x1002b)) = cVar13;
  if (((cVar13 == '\x02') || (cVar13 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar5 = F_00c51f98();
    *puVar5 = 0;
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
  }
  else {
    if ((*(byte *)(*piVar6 + 4 + iVar4) & 0x20) != 0) {
      F_00c6dda1(_FileHandle,0,0,2);
    }
    iVar7 = F_00c7adb7(_FileHandle);
    if ((iVar7 == 0) || ((*(byte *)(iVar4 + 4 + *piVar6) & 0x80) == 0)) {
LAB_00c5dace: ;
      if ((*(byte *)(*piVar6 + 4 + iVar4) & 0x80) == 0) {
        BVar9 = gen_imp_WriteFile(*(HANDLE *)(*piVar6 + iVar4),(*(WCHAR * PTR32 *)(gen_frame + 0x10020)),_MaxCharCount,&(*(uint *)(gen_frame + 0x10014)),
                          (GEN_LPANY)0x0);
        if (BVar9 == 0) {
LAB_00c5ddaf: ;
          DVar11 = gen_imp_GetLastError();
          (*(DWORD *)(gen_frame + 0x10030)) = DVar11;
        }
        else {
          (*(DWORD *)(gen_frame + 0x10030)) = 0;
          (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10014));
        }
LAB_00c5ddbb: ;
        if ((*(uint *)(gen_frame + 0x10024)) != 0) {
          iVar4 = (*(uint *)(gen_frame + 0x10024)) - (*(int *)(gen_frame + 0x1001c));
          goto LAB_00c5de3d;
        }
        goto LAB_00c5ddc4;
      }
      (*(DWORD *)(gen_frame + 0x10030)) = 0;
      if ((*(char *)(gen_frame + 0x1002b)) == '\0') {
        pWVar10 = (*(WCHAR * PTR32 *)(gen_frame + 0x10020));
        if (_MaxCharCount == 0) goto LAB_00c5ddfa;
        do {
          uVar15 = 0;
          uVar14 = (int)pWVar10 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020));
          pWVar12 = ((WCHAR *)(gen_frame + 0x10034));
          do {
            if (_MaxCharCount <= uVar14) break;
            WVar1 = *pWVar10;
            pWVar10 = (WCHAR *)((int)pWVar10 + 1);
            uVar14 = uVar14 + 1;
            (*(WCHAR * PTR32 *)(gen_frame + 0x1000c)) = pWVar10;
            if ((char)WVar1 == '\n') {
              (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 1;
              *(char *)pWVar12 = '\r';
              pWVar12 = (WCHAR *)((int)pWVar12 + 1);
              uVar15 = uVar15 + 1;
            }
            *(char *)pWVar12 = (char)WVar1;
            pWVar12 = (WCHAR *)((int)pWVar12 + 1);
            uVar15 = uVar15 + 1;
          } while (uVar15 < 0x13ff);
          BVar9 = gen_imp_WriteFile(*(HANDLE *)(iVar4 + *(*(int * PTR32 *)(gen_frame + 0x10010))),((WCHAR *)(gen_frame + 0x10034)),
                            (int)pWVar12 - (int)((WCHAR *)(gen_frame + 0x10034)),&(*(uint *)(gen_frame + 0x10014)),(GEN_LPANY)0x0);
          if (BVar9 == 0) goto LAB_00c5ddaf;
          (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + (*(uint *)(gen_frame + 0x10014));
        } while (((int)pWVar12 - (int)((WCHAR *)(gen_frame + 0x10034)) <= (int)(*(uint *)(gen_frame + 0x10014))) &&
                ((uint)((int)pWVar10 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020))) < _MaxCharCount));
        goto LAB_00c5ddbb;
      }
      if ((*(char *)(gen_frame + 0x1002b)) == '\x02') {
        pWVar10 = (*(WCHAR * PTR32 *)(gen_frame + 0x10020));
        if (_MaxCharCount != 0) {
          do {
            (*(uint *)(gen_frame + 0x1002c)) = 0;
            uVar14 = (int)pWVar10 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020));
            pWVar12 = ((WCHAR *)(gen_frame + 0x10034));
            do {
              if (_MaxCharCount <= uVar14) break;
              WVar1 = *pWVar10;
              pWVar10 = pWVar10 + 1;
              uVar14 = uVar14 + 2;
              (*(WCHAR * PTR32 *)(gen_frame + 0x1000c)) = pWVar10;
              if (WVar1 == L'\n') {
                (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 2;
                *pWVar12 = L'\r';
                pWVar12 = pWVar12 + 1;
                (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 2;
              }
              uVar15 = (*(uint *)(gen_frame + 0x1002c)) + 2;
              (*(uint *)(gen_frame + 0x1002c)) = uVar15;
              *pWVar12 = WVar1;
              pWVar12 = pWVar12 + 1;
            } while (uVar15 < 0x13fe);
            BVar9 = gen_imp_WriteFile(*(HANDLE *)(iVar4 + *(*(int * PTR32 *)(gen_frame + 0x10010))),((WCHAR *)(gen_frame + 0x10034)),
                              (int)pWVar12 - (int)((WCHAR *)(gen_frame + 0x10034)),&(*(uint *)(gen_frame + 0x10014)),(GEN_LPANY)0x0);
            if (BVar9 == 0) goto LAB_00c5ddaf;
            (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + (*(uint *)(gen_frame + 0x10014));
          } while (((int)pWVar12 - (int)((WCHAR *)(gen_frame + 0x10034)) <= (int)(*(uint *)(gen_frame + 0x10014))) &&
                  ((uint)((int)pWVar10 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020))) < _MaxCharCount));
          goto LAB_00c5ddbb;
        }
      }
      else {
        (*(WCHAR * PTR32 *)(gen_frame + 0x10018)) = (*(WCHAR * PTR32 *)(gen_frame + 0x10020));
        if (_MaxCharCount != 0) {
          do {
            (*(uint *)(gen_frame + 0x1002c)) = 0;
            uVar14 = (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020));
            pWVar10 = ((WCHAR *)(gen_frame + 0x11434));
            do {
              if (_MaxCharCount <= uVar14) break;
              WVar1 = *(*(WCHAR * PTR32 *)(gen_frame + 0x10018));
              (*(WCHAR * PTR32 *)(gen_frame + 0x10018)) = (*(WCHAR * PTR32 *)(gen_frame + 0x10018)) + 1;
              uVar14 = uVar14 + 2;
              if (WVar1 == L'\n') {
                *pWVar10 = L'\r';
                pWVar10 = pWVar10 + 1;
                (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 2;
              }
              uVar15 = (*(uint *)(gen_frame + 0x1002c)) + 2;
              (*(uint *)(gen_frame + 0x1002c)) = uVar15;
              *pWVar10 = WVar1;
              pWVar10 = pWVar10 + 1;
            } while (uVar15 < 0x6a8);
            iVar16 = 0;
            iVar7 = gen_imp_WideCharToMultiByte(0xfde9,0,((WCHAR *)(gen_frame + 0x11434)),((int)pWVar10 - (int)((WCHAR *)(gen_frame + 0x11434))) / 2,
                                        ((CHAR *)(gen_frame + 0x106dc)),0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
            if (iVar7 == 0) goto LAB_00c5ddaf;
            do {
              BVar9 = gen_imp_WriteFile(*(HANDLE *)(iVar4 + *(*(int * PTR32 *)(gen_frame + 0x10010))),((CHAR *)(gen_frame + 0x106dc)) + iVar16,iVar7 - iVar16,
                                &(*(uint *)(gen_frame + 0x10014)),(GEN_LPANY)0x0);
              if (BVar9 == 0) {
                DVar11 = gen_imp_GetLastError();
                (*(DWORD *)(gen_frame + 0x10030)) = DVar11;
                break;
              }
              iVar16 = iVar16 + (*(uint *)(gen_frame + 0x10014));
            } while (iVar16 < iVar7);
          } while ((iVar7 <= iVar16) &&
                  ((*(uint *)(gen_frame + 0x10024)) = (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020)),
                  (uint)((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020))) < _MaxCharCount));
          goto LAB_00c5ddbb;
        }
      }
    }
    else {
      p_Var8 = F_00c5b37a();
      pwVar2 = (*((wchar_t * PTR32 *)GEN_TOP((((((char *)(*(undefined * PTR32 *)(((char *)(p_Var8) + 108))) + 16) + (0) * 16) + 4)))));
      BVar9 = gen_imp_GetConsoleMode(*(HANDLE *)(iVar4 + *piVar6),(LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x1000c)));
      if ((BVar9 == 0) || ((pwVar2 == (wchar_t *)0x0 && ((*(char *)(gen_frame + 0x1002b)) == '\0')))) goto LAB_00c5dace;
      pWVar10 = ((WCHAR *)GEN_TOP(gen_imp_GetConsoleCP()));
      (*(WCHAR * PTR32 *)(gen_frame + 0x1000c)) = pWVar10;
      (*(WCHAR * PTR32 *)(gen_frame + 0x10018)) = (WCHAR *)0x0;
      if (_MaxCharCount != 0) {
        (*(uint *)(gen_frame + 0x1002c)) = 0;
        pWVar10 = (*(WCHAR * PTR32 *)(gen_frame + 0x10020));
        do {
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x10010));
          if ((*(char *)(gen_frame + 0x1002b)) == '\0') {
            cVar13 = (char)*pWVar10;
            (*(uint *)(gen_frame + 0x10008)) = (uint)(cVar13 == '\n');
            iVar7 = *(*(int * PTR32 *)(gen_frame + 0x10010)) + iVar4;
            if (*(int *)(iVar7 + 0x38) == 0) {
              iVar7 = F_00c6e020((int)cVar13);
              if (iVar7 == 0) {
                _SrcSizeInBytes = 1;
                pWVar12 = pWVar10;
                goto LAB_00c5d935;
              }
              if (((char *)GEN_TOP(((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020)) + (_MaxCharCount - (int)pWVar10)))) < (char *)0x2) {
                (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 1;
                *(char *)(iVar4 + 0x34 + *piVar6) = (char)*pWVar10;
                *(undefined4 *)(iVar4 + 0x38 + *piVar6) = 1;
                break;
              }
              iVar7 = F_00c7b31a((wchar_t *)&(*(DWORD *)(gen_frame + 0x10030)),(char *)pWVar10,2);
              if (iVar7 == -1) break;
              pWVar10 = (WCHAR *)((int)pWVar10 + 1);
              (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 1;
            }
            else {
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ae0)) + 0)) = *(CHAR *)(iVar7 + 0x34);
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ae0)) + 1)) = cVar13;
              *(undefined4 *)(iVar7 + 0x38) = 0;
              _SrcSizeInBytes = 2;
              pWVar12 = &(*(undefined2 *)(gen_frame + 0x11ae0));
LAB_00c5d935: ;
              iVar7 = F_00c7b31a((wchar_t *)&(*(DWORD *)(gen_frame + 0x10030)),(char *)pWVar12,_SrcSizeInBytes);
              if (iVar7 == -1) break;
            }
            pWVar10 = (WCHAR *)((int)pWVar10 + 1);
            (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 1;
            DVar11 = gen_imp_WideCharToMultiByte((UINT)(*(WCHAR * PTR32 *)(gen_frame + 0x1000c)),0,(LPCWSTR)&(*(DWORD *)(gen_frame + 0x10030)),1,(LPSTR)&(*(undefined2 *)(gen_frame + 0x11ae0)),
                                         5,(LPCSTR)0x0,(LPBOOL)0x0);
            if (DVar11 == 0) break;
            BVar9 = gen_imp_WriteFile(*(HANDLE *)(iVar4 + *(*(int * PTR32 *)(gen_frame + 0x10010))),&(*(undefined2 *)(gen_frame + 0x11ae0)),DVar11,(LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x10018))
                              ,(GEN_LPANY)0x0);
            if (BVar9 == 0) goto LAB_00c5ddaf;
            (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x1002c)) + (*(int *)(gen_frame + 0x1001c));
            if ((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) < (int)DVar11) break;
            if ((*(uint *)(gen_frame + 0x10008)) != 0) {
              iVar7 = *(*(int * PTR32 *)(gen_frame + 0x10010));
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ae0)) + 0)) = '\r';
              BVar9 = gen_imp_WriteFile(*(HANDLE *)(iVar4 + iVar7),&(*(undefined2 *)(gen_frame + 0x11ae0)),1,(LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x10018)),
                                (GEN_LPANY)0x0);
              if (BVar9 == 0) goto LAB_00c5ddaf;
              if ((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) < 1) break;
              (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 1;
              (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 1;
            }
          }
          else {
            if (((*(char *)(gen_frame + 0x1002b)) == '\x01') || ((*(char *)(gen_frame + 0x1002b)) == '\x02')) {
              WVar1 = *pWVar10;
              (*(uint *)(gen_frame + 0x10008)) = (uint)((ushort)WVar1 == 10);
              pWVar10 = pWVar10 + 1;
              (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 2;
              (*(DWORD *)(gen_frame + 0x10030)) = (uint)(ushort)WVar1;
            }
            if (((*(char *)(gen_frame + 0x1002b)) == '\x01') || ((*(char *)(gen_frame + 0x1002b)) == '\x02')) {
              wVar3 = F_00c7b5f1((wchar_t)(*(DWORD *)(gen_frame + 0x10030)));
              if (wVar3 != (wchar_t)(*(DWORD *)(gen_frame + 0x10030))) goto LAB_00c5ddaf;
              (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 2;
              if ((*(uint *)(gen_frame + 0x10008)) != 0) {
                (*(DWORD *)(gen_frame + 0x10030)) = 0xd;
                wVar3 = F_00c7b5f1(L'\r');
                if (wVar3 != (wchar_t)(*(DWORD *)(gen_frame + 0x10030))) goto LAB_00c5ddaf;
                (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 1;
                (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 1;
              }
            }
          }
        } while ((*(uint *)(gen_frame + 0x1002c)) < _MaxCharCount);
        goto LAB_00c5ddbb;
      }
LAB_00c5ddc4: ;
      if ((*(DWORD *)(gen_frame + 0x10030)) != 0) {
        if ((*(DWORD *)(gen_frame + 0x10030)) == 5) {
          piVar6 = F_00c51f85();
          *piVar6 = 9;
          puVar5 = F_00c51f98();
          *puVar5 = 5;
        }
        else {
          F_00c51fab((*(DWORD *)(gen_frame + 0x10030)));
        }
        goto LAB_00c5de2b;
      }
    }
LAB_00c5ddfa: ;
    if (((*(byte *)(iVar4 + 4 + *(*(int * PTR32 *)(gen_frame + 0x10010))) & 0x40) != 0) && ((char)*(*(WCHAR * PTR32 *)(gen_frame + 0x10020)) == '\x1a')) {
      iVar4 = 0;
      goto LAB_00c5de3d;
    }
    piVar6 = F_00c51f85();
    *piVar6 = 0x1c;
    puVar5 = F_00c51f98();
    *puVar5 = 0;
  }
LAB_00c5de2b: ;
  iVar4 = -1;
LAB_00c5de3d: ;
  F_00c47745((*(uint *)(gen_frame + 0x11ae8)) ^ (uint)(uint)(gen_frame + 0x0));
  return iVar4;
}

/* ref: __write */
int F_00c5de4b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5de4bu, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int _FileHandle_00;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6590);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5de57;
  if ((*(int *)&gen_args[0]) == -2) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
  }
  else {
    if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
      iVar3 = (*(int *)&gen_args[0]) >> 5;
      iVar4 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) != 0) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(int *)(gen_frame + 0x0)) = -1;
        }
        else {
          iVar3 = F_00c5d74e(_FileHandle_00,(*(undefined * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]));
          (*(int *)(gen_frame + 0x0)) = iVar3;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c5df17(_FileHandle_00);
        return (*(int *)(gen_frame + 0x0));
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  return -1;
}

/* ref: FUN_00c5df14 */
unsigned int F_00c5df14(unsigned int gen_a0)
{
  GEN_ENTER(0xc5df14u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c5df17 */
unsigned int F_00c5df17(unsigned int gen_a0)
{
  GEN_ENTER(0xc5df17u, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __freebuf */
unsigned int F_00c5df1f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5df1fu, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  if ((((*(int *)(((char *)(_File) + 12))) & 0x83U) != 0) && (((*(int *)(((char *)(_File) + 12))) & 8U) != 0)) {
    F_00c4c68f((*(char * PTR32 *)(((char *)(_File) + 8))));
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xfffffbf7;
    (*(char * PTR32 *)((char *)(_File))) = (char *)0x0;
    (*(char * PTR32 *)(((char *)(_File) + 8))) = (char *)0x0;
    (*(int *)(((char *)(_File) + 4))) = 0;
  }
  return 0;
}

/* ref: __stbuf */
int F_00c5df50(unsigned int gen_a0)
{
  GEN_ENTER(0xc5df50u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  
  iVar3 = F_00c5d07b(_File);
  iVar3 = F_00c7adb7(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = F_00c50860();
  if (_File == (undefined *)(uVar4 + 0x20)) {
    iVar3 = 0;
  }
  else {
    uVar4 = F_00c50860();
    if (_File != (undefined *)(uVar4 + 0x40)) {
      return 0;
    }
    iVar3 = 1;
  }
  *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
  if (((*(int *)(((char *)(_File) + 12))) & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &REFG(undefined4, 0x15d74e8) + iVar3;
  if (*piVar1 == 0) {
    pvVar5 = F_00c54c2e(0x1000);
    *piVar1 = (int)pvVar5;
    if (pvVar5 == (undefined *)0x0) {
      (*(char * PTR32 *)(((char *)(_File) + 8))) = (char *)&(*(int *)(((char *)(_File) + 20)));
      (*(char * PTR32 *)((char *)(_File))) = (char *)&(*(int *)(((char *)(_File) + 20)));
      (*(int *)(((char *)(_File) + 24))) = 2;
      (*(int *)(((char *)(_File) + 4))) = 2;
      goto LAB_00c5dfd9;
    }
  }
  pcVar2 = (char *)*piVar1;
  (*(char * PTR32 *)(((char *)(_File) + 8))) = pcVar2;
  (*(char * PTR32 *)((char *)(_File))) = pcVar2;
  (*(int *)(((char *)(_File) + 24))) = 0x1000;
  (*(int *)(((char *)(_File) + 4))) = 0x1000;
LAB_00c5dfd9: ;
  (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x1102;
  return 1;
}

/* ref: __ftbuf */
unsigned int F_00c5dfec(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5dfecu, gen_a0, gen_a1, 0u, 0u);
  int _Flag = (int)gen_a0;
  undefined * _File = (undefined *)(uintptr_t)gen_a1;
  if ((_Flag != 0) && (((*(int *)(((char *)(_File) + 12))) & 0x1000U) != 0)) {
    F_00c50d59(_File);
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffffeeff;
    (*(int *)(((char *)(_File) + 24))) = 0;
    (*(char * PTR32 *)((char *)(_File))) = (char *)0x0;
    (*(char * PTR32 *)(((char *)(_File) + 8))) = (char *)0x0;
  }
  return 0;
}

/* ref: vfprintf_helper */
uint F_00c5e020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5e020u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * _File;
  int * piVar1;
  uint uVar2;
  int _Flag;
  undefined * puVar3;
  
  _File = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f65b0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5e02c;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) || ((*(int *)&gen_args[2]) == 0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  F_00c50937((*(undefined * PTR32 *)&gen_args[1]));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c5e0e5;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
LAB_00c5e0e5: ;
  if ((*(uint *)(gen_frame + 0x0)) == 0) {
    _Flag = F_00c5df50(_File);
    uVar2 = ((code *)(*(gen_code32 *)&gen_args[0]))(_File,(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    F_00c5dfec(_Flag,_File);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c5e121((gen_frame + 0x1c));
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c5e121 */
uint F_00c5e121(unsigned int gen_a0)
{
  GEN_ENTER(0xc5e121u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: FID_conflict:__vfprintf_l */
int F_00c5e12b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e12bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc56a1d)),_File,_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vfprintf_s_l_00c5e14b */
int F_00c5e14b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e14bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5784c)),_File,_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vfprintf_s_l_00c5e16b */
int F_00c5e16b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e16bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5867b)),_File,_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vfprintf_00c5e18b */
int F_00c5e18b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e18bu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc56a1d)),_File,_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vfprintf_00c5e1aa */
int F_00c5e1aa(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e1aau, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5784c)),_File,_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vfprintf_00c5e1c9 */
int F_00c5e1c9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e1c9u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5867b)),_File,_Format,0,_ArgList);
  return uVar1;
}

/* ref: __openfile */
undefined * F_00c5e1e8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e1e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uchar uVar6;
  int * piVar7;
  int iVar8;
  int eVar9;
  uint _OpenFlag;
  char * pcVar10;
  uchar * puVar11;
  uchar * puVar12;
  uint local_8;
  
  _OpenFlag = 0;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  for (pcVar10 = (*(char * PTR32 *)&gen_args[1]); *pcVar10 == ' '; pcVar10 = pcVar10 + 1) {
  }
  cVar1 = *pcVar10;
  if (cVar1 == 'a') {
    _OpenFlag = 0x109;
LAB_00c5e247: ;
    local_8 = REFG(undefined4, 0x15d75b4) | 2;
  }
  else {
    if (cVar1 != 'r') {
      if (cVar1 != 'w') {
        piVar7 = F_00c51f85();
        *piVar7 = 0x16;
        F_00c4c305();
        return (undefined *)0x0;
      }
      _OpenFlag = 0x301;
      goto LAB_00c5e247;
    }
    local_8 = REFG(undefined4, 0x15d75b4) | 1;
  }
  bVar2 = true;
  puVar11 = (uchar *)(pcVar10 + 1);
  uVar6 = *puVar11;
  if (uVar6 != '\0') {
    do {
      if (!bVar2) break;
      if ((char)uVar6 < 'T') {
        if (uVar6 == 'S') {
          if (bVar3) goto LAB_00c5e371;
          bVar3 = true;
          _OpenFlag = _OpenFlag | 0x20;
        }
        else if (uVar6 != ' ') {
          if (uVar6 == '+') {
            if ((_OpenFlag & 2) != 0) goto LAB_00c5e371;
            _OpenFlag = _OpenFlag & 0xfffffffe | 2;
            local_8 = local_8 & 0xfffffffc | 0x80;
          }
          else if (uVar6 == ',') {
            bVar5 = true;
LAB_00c5e371: ;
            bVar2 = false;
          }
          else if (uVar6 == 'D') {
            if ((_OpenFlag & 0x40) != 0) goto LAB_00c5e371;
            _OpenFlag = _OpenFlag | 0x40;
          }
          else if (uVar6 == 'N') {
            _OpenFlag = _OpenFlag | 0x80;
          }
          else {
            if (uVar6 != 'R') goto LAB_00c5e426;
            if (bVar3) goto LAB_00c5e371;
            bVar3 = true;
            _OpenFlag = _OpenFlag | 0x10;
          }
        }
      }
      else if (uVar6 == 'T') {
        if ((_OpenFlag & 0x1000) != 0) goto LAB_00c5e371;
        _OpenFlag = _OpenFlag | 0x1000;
      }
      else if (uVar6 == 'b') {
        if ((_OpenFlag & 0xc000) != 0) goto LAB_00c5e371;
        _OpenFlag = _OpenFlag | 0x8000;
      }
      else if (uVar6 == 'c') {
        if (bVar4) goto LAB_00c5e371;
        local_8 = local_8 | 0x4000;
        bVar4 = true;
      }
      else if (uVar6 == 'n') {
        if (bVar4) goto LAB_00c5e371;
        local_8 = local_8 & 0xffffbfff;
        bVar4 = true;
      }
      else {
        if (uVar6 != 't') goto LAB_00c5e426;
        if ((_OpenFlag & 0xc000) != 0) goto LAB_00c5e371;
        _OpenFlag = _OpenFlag | 0x4000;
      }
      puVar11 = puVar11 + 1;
      uVar6 = *puVar11;
    } while (uVar6 != '\0');
    if (bVar5) {
      for (; *puVar11 == ' '; puVar11 = puVar11 + 1) {
      }
      iVar8 = F_00c7b9e3(((uchar *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111a3b8)))),puVar11,3);
      if (iVar8 != 0) goto LAB_00c5e426;
      for (puVar11 = puVar11 + 3; *puVar11 == ' '; puVar11 = puVar11 + 1) {
      }
      if (*puVar11 != '=') goto LAB_00c5e426;
      do {
        puVar12 = puVar11;
        puVar11 = puVar12 + 1;
      } while (*puVar11 == ' ');
      iVar8 = F_00c7b87d(puVar11,(uchar *)"UTF-8",5);
      if (iVar8 == 0) {
        puVar11 = puVar12 + 6;
        _OpenFlag = _OpenFlag | 0x40000;
      }
      else {
        iVar8 = F_00c7b87d(puVar11,(uchar *)"UTF-16LE",8);
        if (iVar8 == 0) {
          puVar11 = puVar12 + 9;
          _OpenFlag = _OpenFlag | 0x20000;
        }
        else {
          iVar8 = F_00c7b87d(puVar11,(uchar *)"UNICODE",7);
          if (iVar8 != 0) goto LAB_00c5e426;
          puVar11 = puVar12 + 8;
          _OpenFlag = _OpenFlag | 0x10000;
        }
      }
    }
  }
  for (; *puVar11 == ' '; puVar11 = puVar11 + 1) {
  }
  if (*puVar11 == '\0') {
    eVar9 = F_00c71149((int *)&(*(char * PTR32 *)&gen_args[1]),(*(char * PTR32 *)&gen_args[0]),_OpenFlag,(*(int *)&gen_args[2]),0x180);
    if (eVar9 != 0) {
      return (undefined *)0x0;
    }
    *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 12))))) = local_8;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 4))))) = 0;
    (*(char * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[3])))) = (char *)0x0;
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 8))))) = (char *)0x0;
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 28))))) = (char *)0x0;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 16))))) = (int)(*(char * PTR32 *)&gen_args[1]);
    return (*(undefined * PTR32 *)&gen_args[3]);
  }
LAB_00c5e426: ;
  piVar7 = F_00c51f85();
  *piVar7 = 0x16;
  F_00c4c305();
  return (undefined *)0x0;
}

/* ref: __getstream */
undefined * F_00c5e47f(void)
{
  GEN_ENTER(0xc5e47fu, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * _File;
  int iVar3;
  undefined * pvVar4;
  BOOL BVar5;
  int _Index;
  undefined * pFVar6;
  int local_24;
  undefined * local_20;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f65d0);
  uStack_c = 0xc5e48b;
  pFVar6 = (undefined *)0x0;
  local_20 = (undefined *)0x0;
  F_00c5aa4f(1);
  local_8 = (undefined *)0x0;
  _Index = 0;
  do {
    local_24 = _Index;
    if (REFG(int, 0x15e52c0) <= _Index) {
LAB_00c5e578: ;
      if (pFVar6 != (undefined *)0x0) {
        (*(int *)(((char *)(pFVar6) + 12))) = (*(int *)(((char *)(pFVar6) + 12))) & 0x8000;
        (*(int *)(((char *)(pFVar6) + 4))) = 0;
        (*(char * PTR32 *)(((char *)(pFVar6) + 8))) = (char *)0x0;
        (*(char * PTR32 *)((char *)(pFVar6))) = (char *)0x0;
        (*(char * PTR32 *)(((char *)(pFVar6) + 28))) = (char *)0x0;
        (*(int *)(((char *)(pFVar6) + 16))) = -1;
      }
      local_8 = (undefined *)0xfffffffe;
      F_00c5e5a9();
      return pFVar6;
    }
    piVar1 = (int *)(REFG(int, 0x15e42a8) + _Index * 4);
    if (*piVar1 == 0) {
      pvVar4 = F_00c54c2e(0x38);
      *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4) = pvVar4;
      if (pvVar4 != (undefined *)0x0) {
        BVar5 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(*(int *)(REFG(int, 0x15e42a8) + _Index * 4) + 0x20),4000);
        if (BVar5 == 0) {
          F_00c4c68f(*(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4));
          *(undefined4 *)(REFG(int, 0x15e42a8) + _Index * 4) = 0;
        }
        else {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(REFG(int, 0x15e42a8) + _Index * 4) + 0x20));
          pFVar6 = *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4);
          local_20 = pFVar6;
          (*(int *)(((char *)(pFVar6) + 12))) = 0;
        }
      }
      goto LAB_00c5e578;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && ((uVar2 & 0x8000) == 0)) {
      if (_Index - 3U < 0x11) {
        iVar3 = F_00c5a98d(_Index + 0x10);
        if (iVar3 == 0) goto LAB_00c5e578;
      }
      F_00c50978(_Index,*(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4));
      _File = *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4);
      if (((*(int *)(((char *)(_File) + 12))) & 0x83) == 0) {
        local_20 = _File;
        pFVar6 = _File;
        goto LAB_00c5e578;
      }
      F_00c509e6(_Index,_File);
    }
    _Index = _Index + 1;
  } while( true );
}

/* ref: FUN_00c5e5a6 */
uint F_00c5e5a6(unsigned int gen_a0)
{
  GEN_ENTER(0xc5e5a6u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: FUN_00c5e5a9 */
uint F_00c5e5a9(void)
{
  GEN_ENTER(0xc5e5a9u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: __local_unwind4 */
unsigned int F_00c5e5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = (*(uint * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x18)) = (*(int *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)&gen_args[2]);
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xc5e650));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined * PTR32 *)(gen_frame + 0x8));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x8)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  while( true ) {
    uVar2 = *(uint *)((*(int *)&gen_args[1]) + 0xc);
    if ((uVar2 == 0xfffffffe) || (((*(uint *)&gen_args[2]) != 0xfffffffe && (uVar2 <= (*(uint *)&gen_args[2]))))) break;
    puVar1 = ((undefined4 *)GEN_TOP(((*(uint *)((*(int *)&gen_args[1]) + 8) ^ *(*(uint * PTR32 *)&gen_args[0])) + 0x10 + uVar2 * 0xc)));
    *(undefined4 *)((*(int *)&gen_args[1]) + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      F_00c6fab5(puVar1[2],0x101);
      F_00c6fad4(puVar1[2]);
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_00c5e650 */
uint F_00c5e650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e650u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    F_00c47745(*(uint *)(param_2 + 8) ^ param_2);
    F_00c5e5c0(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10),
                    *(undefined4 *)(param_2 + 0xc));
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: FUN_00c5e696 */
unsigned int F_00c5e696(unsigned int gen_a0)
{
  GEN_ENTER(0xc5e696u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  F_00c5e5c0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(param_1 + 0x1c));
  return 0;
}

/* ref: _EH4_CallFilterFunc */
uint F_00c5e6b2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5e6b2u, gen_a0, gen_a1, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (*param_1)();
  return uVar1;
}

/* ref: _EH4_TransferToHandler */
unsigned int F_00c5e6c9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5e6c9u, gen_a0, gen_a1, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00c6fab5(param_1,1);
  (*param_1)(0);
  return 0;
}

/* ref: _EH4_GlobalUnwind2 */
unsigned int F_00c5e6e2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5e6e2u, gen_a0, gen_a1, 0u, 0u);
  PVOID param_1 = (PVOID)gen_a0;
  GEN_LPANY param_2 = (GEN_LPANY)gen_a1;
  gen_imp_RtlUnwind(param_1,(PVOID)0xc5e6f6,param_2,(PVOID)0x0);
  return 0;
}

/* ref: _EH4_LocalUnwind */
unsigned int F_00c5e6fb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e6fbu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00c5e5c0(param_4,param_1,param_2);
  return 0;
}

/* ref: FUN_00c5e712 */
uint F_00c5e712(unsigned int gen_a0)
{
  GEN_ENTER(0xc5e712u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = -(uint)(param_1 != 0) & REFG(undefined4, 0x15e42a0);
  REFG(undefined4, 0x15e418c) = uVar1;
  return uVar1;
}

/* ref: FUN_00c5e72b */
uint F_00c5e72b(void)
{
  GEN_ENTER(0xc5e72bu, 0u, 0u, 0u, 0u);
  BOOL BVar1;
  
  BVar1 = gen_imp_IsProcessorFeaturePresent(10);
  REFG(undefined4, 0x15e418c) = BVar1;
  return 0;
}

/* ref: FUN_00c5e740 */
float10 F_00c5e740(double gen_a0)
{
  GEN_ENTER(0xc5e740u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  double in_xmm0;
  float10 fVar1;
  
  in_xmm0 = (double)in_st0;
  fVar1 = F_00c5e75e(in_xmm0,(int)(ulonglong)gen_d2bits(in_xmm0),
                       (int)((ulonglong)gen_d2bits(in_xmm0) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c5e75e */
float10 F_00c5e75e(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e75eu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  gen_args[3] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = (uint)(ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x34);
    dVar7 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) &
                       (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x111a3e0)) |
                       (ulonglong)gen_d2bits(REFG(undefined8, 0x111a450)));
    dVar8 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x111a3e8) |
                       *(ulonglong *)&REFG(undefined, 0x111a458));
    uVar1 = (ushort)(ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x111a400) + dVar7) & 0x7f0;
    dVar12 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x111a418) & (ulonglong)gen_d2bits(dVar8));
    dVar10 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x111a410) & (ulonglong)gen_d2bits(dVar7)) *
             *(double *)(&REFG(undefined, 0x111a8f0) + uVar1) - *(double *)&REFG(undefined, 0x111a3f0);
    dVar7 = (dVar7 - gen_bits2d(*(ulonglong *)&REFG(undefined, 0x111a410) & (ulonglong)gen_d2bits(dVar7))) *
            *(double *)(&REFG(undefined, 0x111a8f0) + uVar1);
    dVar9 = (dVar8 - dVar12) * *(double *)(&REFG(undefined, 0x111a8f8) + uVar1);
    dVar8 = dVar7 + dVar10;
    dVar12 = dVar9 + (dVar12 * *(double *)(&REFG(undefined, 0x111a8f8) + uVar1) - *(double *)&REFG(undefined, 0x111a3f8));
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      dVar7 = ((((*(double *)&REFG(undefined, 0x111a4a8) * dVar12 + *(double *)&REFG(undefined, 0x111a4b8)) * dVar12 +
                *(double *)&REFG(undefined, 0x111a4c8)) * (dVar12 * dVar12) +
               (((*(double *)&REFG(undefined, 0x111a4a0) * dVar8 + *(double *)&REFG(undefined, 0x111a4b0)) * dVar8 +
                *(double *)&REFG(undefined, 0x111a4c0)) * (((dVar8 * dVar8) * (dVar8 * dVar8)) * dVar8) +
               *(double *)&REFG(undefined, 0x111a4d0) * dVar8)) +
              ((*(double *)(&REFG(undefined, 0x111a4e8) + uVar1) + dVar11 * *(double *)&REFG(undefined, 0x111a428)) +
              gen_bits2d((ulonglong)gen_d2bits(dVar9) & *(ulonglong *)(&REFG(undefined, 0x111a438) + iVar5)))) +
              (((*(double *)(&REFG(undefined, 0x111a4e0) + uVar1) + dVar10) + dVar11 * *(double *)&REFG(undefined, 0x111a420)) +
              gen_bits2d((ulonglong)gen_d2bits(dVar7) & *(ulonglong *)(&REFG(undefined, 0x111a430) + iVar5)));
      (*(double *)(gen_frame + 0x4)) = dVar7;
      return (float10)dVar7;
    }
    dVar7 = gen_bits2d(-(ulonglong)
                        (*(double *)&REFG(undefined, 0x111a460) == gen_bits2d(CONCAT44((*(uint *)&gen_args[3]),(*(int *)&gen_args[2])))));
    if ((short)(ulonglong)gen_d2bits(dVar7) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (REFG(undefined8, 0x111a450) ==
            gen_bits2d(CONCAT44((*(uint *)&gen_args[3]),(*(int *)&gen_args[2])) & (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x111a3e0)) |
                       (ulonglong)gen_d2bits(REFG(undefined8, 0x111a450)))) {
          return (float10)*(double *)&REFG(undefined, 0x111a488);
        }
        uVar6 = 0x3e9;
        dVar7 = *(double *)&REFG(undefined, 0x111a3e0);
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) || ((*(int *)&gen_args[2]) == 0 && ((*(uint *)&gen_args[3]) & 0xfffff) == 0)) {
        dVar7 = -NAN;
        uVar6 = 9;
      }
      else {
        uVar6 = 0x3e9;
      }
      goto LAB_00c5e96a;
    }
    (*(double *)&gen_args[0]) = gen_bits2d(CONCAT44((*(uint *)&gen_args[3]),(*(int *)&gen_args[2]))) * REFG(undefined8, 0x111a470);
    iVar4 = -0x34;
  }
  uVar6 = 8;
  dVar7 = REFG(undefined8, 0x111a480);
LAB_00c5e96a: ;
  (*(double *)(gen_frame + 0x4)) = dVar7;
  F_00c6bf0e(&(*(int *)&gen_args[2]),&(*(int *)&gen_args[2]),&(*(double *)(gen_frame + 0x4)),uVar6);
  return (float10)(*(double *)(gen_frame + 0x4));
}

/* ref: FUN_00c5eb11 */
unsigned int F_00c5eb11(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc5eb11u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  char in_cl = (char)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  if (in_cl == '\0') {
    return 0;
  }
  return 0;
}

/* ref: __trandisp1 */
unsigned int F_00c5ebd0(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5ebd0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  int in_edx = (int)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  int in_ebp = (int)gen_a2;
  byte bVar1;
  float10 fVar2;
  char cVar3;
  undefined4 in_ECX = 0;
  undefined2 uVar4;
  
  if (*(char *)(in_edx + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(in_ebp + -0xa4) >> 8) & 0xfe | 2),0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(in_ebp + -0xa2) = uVar4;
  fVar2 = (float10)0;
  *(int *)(in_ebp + -0x94) = in_edx;
  *(ushort *)(in_ebp + -0xa0) =
       (ushort)GEN_ISNAN(in_st0) << 8 | (ushort)(in_st0 < fVar2) << 9 | (ushort)(in_st0 != fVar2) << 10 |
       (ushort)(in_st0 == fVar2) << 0xe;
  *(undefined1 *)(in_ebp + -0x90) = 0;
  cVar3 = (char)(*(char *)(in_ebp + -0x9f) << 1) >> 1;
  bVar1 = cVar3 << 1;
  ((code *)*((gen_code32 *)GEN_TOP((in_edx + (char)(&REFG(undefined, 0x111ad7c))[bVar1 & 0xf | cVar3 < '\0'] + 0x10))))
            (CONCAT31((int3)((uint)in_ECX >> 8),bVar1) & 0x404);
  return 0;
}

/* ref: FUN_00c5eccc */
unsigned int F_00c5eccc(void)
{
  GEN_ENTER(0xc5ecccu, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c5ecd4 */
unsigned int F_00c5ecd4(double gen_a0)
{
  GEN_ENTER(0xc5ecd4u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  return 0;
}

/* ref: FUN_00c5ecdd */
unsigned int F_00c5ecdd(double gen_a0)
{
  GEN_ENTER(0xc5ecddu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  return 0;
}

/* ref: FUN_00c5ece2 */
unsigned int F_00c5ece2(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5ece2u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  float10 in_st0 = (float10)gen_a0;
  int in_ebp = (int)gen_a1;
  *(float10 *)(in_ebp + -0x9e) = in_st0;
  if ((*(byte *)(in_ebp + -0x97) & 0x40) != 0) {
    *(undefined1 *)(in_ebp + -0x90) = 7;
    return 0;
  }
  *(undefined1 *)(in_ebp + -0x90) = 1;
  return 0;
}

/* ref: FUN_00c5ed0f */
unsigned int F_00c5ed0f(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5ed0fu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  float10 in_st0 = (float10)gen_a0;
  int in_ebp = (int)gen_a1;
  *(float10 *)(in_ebp + -0x9e) = in_st0;
  if ((*(byte *)(in_ebp + -0x97) & 0x40) == 0) {
    *(undefined1 *)(in_ebp + -0x90) = 1;
  }
  else {
    *(undefined1 *)(in_ebp + -0x90) = 7;
  }
  return 0;
}

/* ref: FUN_00c5ed76 */
unsigned int F_00c5ed76(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5ed76u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  undefined1 in_cl = (undefined1)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  int in_ebp = (int)gen_a2;
  if (*(char *)(in_ebp + -0x90) < '\x01') {
    *(undefined1 *)(in_ebp + -0x90) = 1;
  }
  return 0;
}

/* ref: FUN_00c5ed93 */
unsigned int F_00c5ed93(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc5ed93u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  char in_cl = (char)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  return 0;
}

/* ref: FUN_00c5edcc */
uint F_00c5edcc(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc5edccu, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  uint in_eax = (uint)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  if ((in_eax & 0x80000) != 0) {
    return 7;
  }
  return 1;
}

/* ref: __fload_withFB */
uint F_00c5ede5(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ede5u, gen_a0, 0u, 0u, 0u);
  int in_edx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_edx + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(in_edx + 4);
}

/* ref: FUN_00c5ee28 */
uint F_00c5ee28(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5ee28u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

/* ref: __get_lc_time */
uint F_00c5ef83(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5ef83u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_eax = (undefined *)(uintptr_t)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  LPCWSTR _LocaleName;
  
  _LocaleName = (LPCWSTR)(uint)*((ushort *)GEN_TOP(((int)&(*((char * PTR32 *)GEN_TOP(((((char *)(in_eax) + 16) + (3) * 16))))) + 2)));
  (*(LPCWSTR *)(gen_frame + 0x8)) = (LPCWSTR)(uint)*(ushort *)&(*((wchar_t * PTR32 *)GEN_TOP((((((char *)(in_eax) + 16) + (3) * 16) + 4)))));
  if (in_ecx == (undefined *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = (undefined *)0x0;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = in_eax;
    uVar2 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x31,(undefined *)((int)in_ecx + 4));
    uVar3 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x32,(undefined *)((int)in_ecx + 8));
    uVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x33,(undefined *)((int)in_ecx + 0xc));
    uVar5 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x34,(undefined *)((int)in_ecx + 0x10));
    uVar6 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x35,(undefined *)((int)in_ecx + 0x14));
    uVar7 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x36,(undefined *)((int)in_ecx + 0x18));
    uVar8 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x37,in_ecx);
    uVar9 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2a,(undefined *)((int)in_ecx + 0x20));
    uVar10 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2b,(undefined *)((int)in_ecx + 0x24));
    uVar11 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2c,(undefined *)((int)in_ecx + 0x28));
    uVar12 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2d,(undefined *)((int)in_ecx + 0x2c));
    uVar13 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2e,(undefined *)((int)in_ecx + 0x30));
    uVar14 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2f,(undefined *)((int)in_ecx + 0x34));
    uVar15 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x30,(undefined *)((int)in_ecx + 0x1c));
    uVar16 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x44,(undefined *)((int)in_ecx + 0x38));
    uVar17 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x45,(undefined *)((int)in_ecx + 0x3c));
    uVar18 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x46,(undefined *)((int)in_ecx + 0x40));
    uVar19 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x47,(undefined *)((int)in_ecx + 0x44));
    uVar20 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x48,(undefined *)((int)in_ecx + 0x48));
    uVar21 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x49,(undefined *)((int)in_ecx + 0x4c));
    uVar22 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4a,(undefined *)((int)in_ecx + 0x50));
    uVar23 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4b,(undefined *)((int)in_ecx + 0x54));
    uVar24 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4c,(undefined *)((int)in_ecx + 0x58));
    uVar25 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4d,(undefined *)((int)in_ecx + 0x5c));
    uVar26 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4e,(undefined *)((int)in_ecx + 0x60));
    uVar27 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4f,(undefined *)((int)in_ecx + 100));
    uVar28 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x38,(undefined *)((int)in_ecx + 0x68));
    uVar29 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x39,(undefined *)((int)in_ecx + 0x6c));
    uVar30 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3a,(undefined *)((int)in_ecx + 0x70));
    uVar31 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3b,(undefined *)((int)in_ecx + 0x74));
    uVar32 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3c,(undefined *)((int)in_ecx + 0x78));
    uVar33 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3d,(undefined *)((int)in_ecx + 0x7c));
    uVar34 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3e,(undefined *)((int)in_ecx + 0x80));
    uVar35 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3f,(undefined *)((int)in_ecx + 0x84));
    uVar36 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x40,(undefined *)((int)in_ecx + 0x88));
    uVar37 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x41,(undefined *)((int)in_ecx + 0x8c));
    uVar38 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x42,(undefined *)((int)in_ecx + 0x90));
    uVar39 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x43,(undefined *)((int)in_ecx + 0x94));
    uVar40 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x28,(undefined *)((int)in_ecx + 0x98));
    uVar41 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x29,(undefined *)((int)in_ecx + 0x9c));
    uVar42 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,(*(LPCWSTR *)(gen_frame + 0x8)),0x1f,(undefined *)((int)in_ecx + 0xa0));
    uVar43 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,(*(LPCWSTR *)(gen_frame + 0x8)),0x20,(undefined *)((int)in_ecx + 0xa4));
    uVar44 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,(*(LPCWSTR *)(gen_frame + 0x8)),0x1003,(undefined *)((int)in_ecx + 0xa8));
    uVar45 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,(*(LPCWSTR *)(gen_frame + 0x8)),0x1009,(undefined *)((int)in_ecx + 0xb0));
    *(LPCWSTR *)((int)in_ecx + 0xac) = (*(LPCWSTR *)(gen_frame + 0x8));
    uVar46 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x31,(undefined *)((int)in_ecx + 0xbc));
    uVar47 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x32,(undefined *)((int)in_ecx + 0xc0));
    uVar48 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x33,(undefined *)((int)in_ecx + 0xc4));
    uVar49 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x34,(undefined *)((int)in_ecx + 200));
    uVar50 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x35,(undefined *)((int)in_ecx + 0xcc));
    uVar51 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x36,(undefined *)((int)in_ecx + 0xd0));
    uVar52 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x37,(undefined *)((int)in_ecx + 0xb8));
    uVar53 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2a,(undefined *)((int)in_ecx + 0xd8));
    uVar54 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2b,(undefined *)((int)in_ecx + 0xdc));
    uVar55 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2c,(undefined *)((int)in_ecx + 0xe0));
    uVar56 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2d,(undefined *)((int)in_ecx + 0xe4));
    uVar57 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2e,(undefined *)((int)in_ecx + 0xe8));
    uVar58 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2f,(undefined *)((int)in_ecx + 0xec));
    uVar59 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x30,(undefined *)((int)in_ecx + 0xd4));
    uVar60 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x44,(undefined *)((int)in_ecx + 0xf0));
    uVar61 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x45,(undefined *)((int)in_ecx + 0xf4));
    uVar62 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x46,(undefined *)((int)in_ecx + 0xf8));
    uVar63 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x47,(undefined *)((int)in_ecx + 0xfc));
    uVar64 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x48,(undefined *)((int)in_ecx + 0x100));
    uVar65 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x49,(undefined *)((int)in_ecx + 0x104));
    uVar66 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4a,(undefined *)((int)in_ecx + 0x108));
    uVar67 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4b,(undefined *)((int)in_ecx + 0x10c));
    uVar68 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4c,(undefined *)((int)in_ecx + 0x110));
    uVar69 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4d,(undefined *)((int)in_ecx + 0x114));
    uVar70 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4e,(undefined *)((int)in_ecx + 0x118));
    uVar71 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4f,(undefined *)((int)in_ecx + 0x11c));
    uVar72 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x38,(undefined *)((int)in_ecx + 0x120));
    uVar73 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x39,(undefined *)((int)in_ecx + 0x124));
    uVar74 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3a,(undefined *)((int)in_ecx + 0x128));
    uVar75 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3b,(undefined *)((int)in_ecx + 300));
    uVar76 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3c,(undefined *)((int)in_ecx + 0x130));
    uVar77 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3d,(undefined *)((int)in_ecx + 0x134));
    uVar78 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3e,(undefined *)((int)in_ecx + 0x138));
    uVar79 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3f,(undefined *)((int)in_ecx + 0x13c));
    uVar80 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x40,(undefined *)((int)in_ecx + 0x140));
    uVar81 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x41,(undefined *)((int)in_ecx + 0x144));
    uVar82 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x42,(undefined *)((int)in_ecx + 0x148));
    uVar83 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x43,(undefined *)((int)in_ecx + 0x14c));
    uVar84 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x28,(undefined *)((int)in_ecx + 0x150));
    uVar85 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x29,(undefined *)((int)in_ecx + 0x154));
    uVar86 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,(*(LPCWSTR *)(gen_frame + 0x8)),0x1f,(undefined *)((int)in_ecx + 0x158));
    uVar87 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,(*(LPCWSTR *)(gen_frame + 0x8)),0x20,(undefined *)((int)in_ecx + 0x15c));
    uVar1 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,(*(LPCWSTR *)(gen_frame + 0x8)),0x1003,(undefined *)((int)in_ecx + 0x160));
    uVar1 = uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11
                    | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20
                    | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29
                    | uVar30 | uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38
                    | uVar39 | uVar40 | uVar41 | uVar42 | uVar43 | uVar44 | uVar45 | uVar46 | uVar47
                    | uVar48 | uVar49 | uVar50 | uVar51 | uVar52 | uVar53 | uVar54 | uVar55 | uVar56
                    | uVar57 | uVar58 | uVar59 | uVar60 | uVar61 | uVar62 | uVar63 | uVar64 | uVar65
                    | uVar66 | uVar67 | uVar68 | uVar69 | uVar70 | uVar71 | uVar72 | uVar73 | uVar74
                    | uVar75 | uVar76 | uVar77 | uVar78 | uVar79 | uVar80 | uVar81 | uVar82 | uVar83
                    | uVar84 | uVar85 | uVar86 | uVar87;
  }
  return uVar1;
}

/* ref: ___free_lc_time */
unsigned int F_00c5f782(unsigned int gen_a0)
{
  GEN_ENTER(0xc5f782u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    F_00c4c68f((undefined *)param_1[1]);
    F_00c4c68f((undefined *)param_1[2]);
    F_00c4c68f((undefined *)param_1[3]);
    F_00c4c68f((undefined *)param_1[4]);
    F_00c4c68f((undefined *)param_1[5]);
    F_00c4c68f((undefined *)param_1[6]);
    F_00c4c68f((undefined *)*param_1);
    F_00c4c68f((undefined *)param_1[8]);
    F_00c4c68f((undefined *)param_1[9]);
    F_00c4c68f((undefined *)param_1[10]);
    F_00c4c68f((undefined *)param_1[0xb]);
    F_00c4c68f((undefined *)param_1[0xc]);
    F_00c4c68f((undefined *)param_1[0xd]);
    F_00c4c68f((undefined *)param_1[7]);
    F_00c4c68f((undefined *)param_1[0xe]);
    F_00c4c68f((undefined *)param_1[0xf]);
    F_00c4c68f((undefined *)param_1[0x10]);
    F_00c4c68f((undefined *)param_1[0x11]);
    F_00c4c68f((undefined *)param_1[0x12]);
    F_00c4c68f((undefined *)param_1[0x13]);
    F_00c4c68f((undefined *)param_1[0x14]);
    F_00c4c68f((undefined *)param_1[0x15]);
    F_00c4c68f((undefined *)param_1[0x16]);
    F_00c4c68f((undefined *)param_1[0x17]);
    F_00c4c68f((undefined *)param_1[0x18]);
    F_00c4c68f((undefined *)param_1[0x19]);
    F_00c4c68f((undefined *)param_1[0x1a]);
    F_00c4c68f((undefined *)param_1[0x1b]);
    F_00c4c68f((undefined *)param_1[0x1c]);
    F_00c4c68f((undefined *)param_1[0x1d]);
    F_00c4c68f((undefined *)param_1[0x1e]);
    F_00c4c68f((undefined *)param_1[0x1f]);
    F_00c4c68f((undefined *)param_1[0x20]);
    F_00c4c68f((undefined *)param_1[0x21]);
    F_00c4c68f((undefined *)param_1[0x22]);
    F_00c4c68f((undefined *)param_1[0x23]);
    F_00c4c68f((undefined *)param_1[0x24]);
    F_00c4c68f((undefined *)param_1[0x25]);
    F_00c4c68f((undefined *)param_1[0x26]);
    F_00c4c68f((undefined *)param_1[0x27]);
    F_00c4c68f((undefined *)param_1[0x28]);
    F_00c4c68f((undefined *)param_1[0x29]);
    F_00c4c68f((undefined *)param_1[0x2a]);
    F_00c4c68f((undefined *)param_1[0x2f]);
    F_00c4c68f((undefined *)param_1[0x30]);
    F_00c4c68f((undefined *)param_1[0x31]);
    F_00c4c68f((undefined *)param_1[0x32]);
    F_00c4c68f((undefined *)param_1[0x33]);
    F_00c4c68f((undefined *)param_1[0x34]);
    F_00c4c68f((undefined *)param_1[0x2e]);
    F_00c4c68f((undefined *)param_1[0x36]);
    F_00c4c68f((undefined *)param_1[0x37]);
    F_00c4c68f((undefined *)param_1[0x38]);
    F_00c4c68f((undefined *)param_1[0x39]);
    F_00c4c68f((undefined *)param_1[0x3a]);
    F_00c4c68f((undefined *)param_1[0x3b]);
    F_00c4c68f((undefined *)param_1[0x35]);
    F_00c4c68f((undefined *)param_1[0x3c]);
    F_00c4c68f((undefined *)param_1[0x3d]);
    F_00c4c68f((undefined *)param_1[0x3e]);
    F_00c4c68f((undefined *)param_1[0x3f]);
    F_00c4c68f((undefined *)param_1[0x40]);
    F_00c4c68f((undefined *)param_1[0x41]);
    F_00c4c68f((undefined *)param_1[0x42]);
    F_00c4c68f((undefined *)param_1[0x43]);
    F_00c4c68f((undefined *)param_1[0x44]);
    F_00c4c68f((undefined *)param_1[0x45]);
    F_00c4c68f((undefined *)param_1[0x46]);
    F_00c4c68f((undefined *)param_1[0x47]);
    F_00c4c68f((undefined *)param_1[0x48]);
    F_00c4c68f((undefined *)param_1[0x49]);
    F_00c4c68f((undefined *)param_1[0x4a]);
    F_00c4c68f((undefined *)param_1[0x4b]);
    F_00c4c68f((undefined *)param_1[0x4c]);
    F_00c4c68f((undefined *)param_1[0x4d]);
    F_00c4c68f((undefined *)param_1[0x4e]);
    F_00c4c68f((undefined *)param_1[0x4f]);
    F_00c4c68f((undefined *)param_1[0x50]);
    F_00c4c68f((undefined *)param_1[0x51]);
    F_00c4c68f((undefined *)param_1[0x52]);
    F_00c4c68f((undefined *)param_1[0x53]);
    F_00c4c68f((undefined *)param_1[0x54]);
    F_00c4c68f((undefined *)param_1[0x55]);
    F_00c4c68f((undefined *)param_1[0x56]);
    F_00c4c68f((undefined *)param_1[0x57]);
    F_00c4c68f((undefined *)param_1[0x58]);
  }
  return 0;
}

/* ref: ___init_time */
int F_00c5faf9(unsigned int gen_a0)
{
  GEN_ENTER(0xc5faf9u, gen_a0, 0u, 0u, 0u);
  undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;
  undefined * PTR32 * ppuVar1;
  undefined * PTR32 * _Memory;
  int iVar2;
  uint uVar3;
  
  if ((*((char * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 16) + (1) * 16))))) == (char *)0x0) {
    _Memory = &REFG(undefined * PTR32, 0x134b7e8);
LAB_00c5fb53: ;
    ppuVar1 = (undefined * PTR32 *)(*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 12)))));
    if (ppuVar1 != &REFG(undefined * PTR32, 0x134b7e8)) {
      gen_imp_InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
    }
    (*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 12))))) = (int *)_Memory;
    iVar2 = 0;
  }
  else {
    _Memory = F_00c54c73(1,0x164);
    if (_Memory != (undefined * PTR32 *)0x0) {
      uVar3 = F_00c5ef83(_LocInfo,_Memory);
      if (uVar3 == 0) {
        _Memory[0x2d] = (undefined *)0x1;
        goto LAB_00c5fb53;
      }
      F_00c5f782(_Memory);
      F_00c4c68f(_Memory);
    }
    iVar2 = 1;
  }
  return iVar2;
}

/* ref: ___free_lconv_num */
unsigned int F_00c5fba6(unsigned int gen_a0)
{
  GEN_ENTER(0xc5fba6u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != REFG(undefined * PTR32, 0x134b048)) {
      F_00c4c68f((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != REFG(undefined * PTR32, 0x134b04c)) {
      F_00c4c68f((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != REFG(undefined * PTR32, 0x134b050)) {
      F_00c4c68f((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != REFG(undefined * PTR32, 0x134b078)) {
      F_00c4c68f((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != REFG(undefined * PTR32, 0x134b07c)) {
      F_00c4c68f((undefined *)param_1[0xd]);
    }
  }
  return 0;
}

/* ref: ___init_numeric */
int F_00c5fc0f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5fc0fu, gen_a0, 0u, 0u, 0u);
  undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  wchar_t * pwVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char * pcVar7;
  LONG LVar8;
  int iVar9;
  undefined * PTR32 * _Address;
  undefined4 * puVar10;
  LPCWSTR _LocaleName;
  char * pcVar11;
  undefined * PTR32 * ppuVar12;
  
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xc))))) = _LocInfo;
  (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0xc))) + 4))) = (undefined *)0x0;
  if (((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 12))))) == (int *)0x0) &&
     ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 8))))) == (int *)0x0)) {
    (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = (wchar_t *)0x0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x14)) = (wchar_t *)0x0;
    _Address = &REFG(undefined * PTR32, 0x134b048);
LAB_00c5fda4: ;
    if ((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (5) * 4))))) != (wchar_t *)0x0) {
      gen_imp_InterlockedDecrement((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (5) * 4))))));
    }
    if (((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) != (wchar_t *)0x0) &&
       (LVar8 = gen_imp_InterlockedDecrement((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4)))))), LVar8 == 0)) {
      F_00c4c68f((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))));
      F_00c4c68f((undefined *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))));
    }
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (5) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x18));
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x14));
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) = (uint)_Address;
    iVar9 = 0;
  }
  else {
    _Address = F_00c54c73(1,0x50);
    if (_Address != (undefined * PTR32 *)0x0) {
      puVar10 = (undefined4 *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4)))));
      ppuVar12 = _Address;
      for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
        *ppuVar12 = (undefined *)*puVar10;
        puVar10 = puVar10 + 1;
        ppuVar12 = ppuVar12 + 1;
      }
      pwVar2 = F_00c54c2e(4);
      (*(wchar_t * PTR32 *)(gen_frame + 0x14)) = pwVar2;
      if (pwVar2 != (wchar_t *)0x0) {
        pwVar2[0] = L'\0';
        pwVar2[1] = L'\0';
        if ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 12))))) == (int *)0x0) {
          *_Address = REFG(undefined * PTR32, 0x134b048);
          _Address[1] = REFG(undefined * PTR32, 0x134b04c);
          _Address[2] = REFG(undefined * PTR32, 0x134b050);
          _Address[0xc] = REFG(undefined * PTR32, 0x134b078);
          (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = (wchar_t *)0x0;
          _Address[0xd] = REFG(undefined * PTR32, 0x134b07c);
        }
        else {
          pwVar2 = F_00c54c2e(4);
          (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = pwVar2;
          if (pwVar2 == (wchar_t *)0x0) {
            iVar9 = 1;
LAB_00c5fc9f: ;
            F_00c4c68f(_Address);
            F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x14)));
            return iVar9;
          }
          pwVar2[0] = L'\0';
          pwVar2[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*((ushort *)GEN_TOP(((int)&(*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (2) * 16) + 12))))) + 2)));
          iVar9 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0xe,_Address);
          iVar3 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0xf,_Address + 1);
          iVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x10,_Address + 2);
          iVar5 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0xe,_Address + 0xc);
          iVar6 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0xf,_Address + 0xd);
          if (iVar6 != 0 || (((iVar9 != 0 || iVar3 != 0) || iVar4 != 0) || iVar5 != 0)) {
            F_00c5fba6(_Address);
            iVar9 = -1;
            goto LAB_00c5fc9f;
          }
          pcVar7 = _Address[2];
          while (*pcVar7 != '\0') {
            cVar1 = *pcVar7;
            if ((cVar1 < '0') || ('9' < cVar1)) {
              pcVar11 = pcVar7;
              if (cVar1 != ';') goto LAB_00c5fd4a;
              do {
                *pcVar11 = pcVar11[1];
                pcVar11 = pcVar11 + 1;
              } while (*pcVar11 != '\0');
            }
            else {
              *pcVar7 = cVar1 + -0x30;
LAB_00c5fd4a: ;
              pcVar7 = pcVar7 + 1;
            }
          }
        }
        (*(wchar_t * PTR32 *)(gen_frame + 0x14))[0] = L'\x01';
        (*(wchar_t * PTR32 *)(gen_frame + 0x14))[1] = L'\0';
        if ((*(wchar_t * PTR32 *)(gen_frame + 0x18)) != (wchar_t *)0x0) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x18))[0] = L'\x01';
          (*(wchar_t * PTR32 *)(gen_frame + 0x18))[1] = L'\0';
        }
        goto LAB_00c5fda4;
      }
      F_00c4c68f(_Address);
    }
    iVar9 = 1;
  }
  return iVar9;
}

/* ref: ___free_lconv_mon */
unsigned int F_00c5fe2f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5fe2fu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    if (*(undefined * PTR32 *)(param_1 + 0xc) != REFG(undefined * PTR32, 0x134b054)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0xc));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x10) != REFG(undefined * PTR32, 0x134b058)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x10));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x14) != REFG(undefined * PTR32, 0x134b05c)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x14));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x18) != REFG(undefined * PTR32, 0x134b060)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x18));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x1c) != REFG(undefined * PTR32, 0x134b064)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x1c));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x20) != REFG(undefined * PTR32, 0x134b068)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x20));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x24) != REFG(undefined * PTR32, 0x134b06c)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x24));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x38) != REFG(undefined * PTR32, 0x134b080)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x38));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x3c) != REFG(undefined * PTR32, 0x134b084)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x3c));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x40) != REFG(undefined * PTR32, 0x134b088)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x40));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x44) != REFG(undefined * PTR32, 0x134b08c)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x44));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x48) != REFG(undefined * PTR32, 0x134b090)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x48));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x4c) != REFG(undefined * PTR32, 0x134b094)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x4c));
    }
  }
  return 0;
}

/* ref: ___init_monetary */
int F_00c5ff2d(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ff2du, gen_a0, 0u, 0u, 0u);
  undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  wchar_t * pwVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  char * pcVar24;
  LONG LVar25;
  int iVar26;
  undefined * PTR32 * _Memory;
  LPCWSTR _LocaleName;
  char * pcVar27;
  undefined * PTR32 * ppuVar28;
  undefined * PTR32 * ppuVar29;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)0x0;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xc))))) = _LocInfo;
  (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0xc))) + 4))) = (undefined *)0x0;
  if (((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 8))))) == (int *)0x0) &&
     ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 12))))) == (int *)0x0)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)0x0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x14)) = (wchar_t *)0x0;
    _Memory = &REFG(undefined * PTR32, 0x134b048);
LAB_00c60230: ;
    if ((LONG *)(*(int *)(((char *)(_LocInfo) + (1) * 184))) != (LONG *)0x0) {
      gen_imp_InterlockedDecrement((LONG *)(*(int *)(((char *)(_LocInfo) + (1) * 184))));
    }
    if (((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) != (wchar_t *)0x0) &&
       (LVar25 = gen_imp_InterlockedDecrement((LONG *)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4)))))), LVar25 == 0)) {
      F_00c4c68f((undefined *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))));
      F_00c4c68f((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))));
    }
    (*(int *)(((char *)(_LocInfo) + (1) * 184))) = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x18));
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x14));
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) = (uint)_Memory;
    iVar26 = 0;
  }
  else {
    _Memory = F_00c54c73(1,0x50);
    if (_Memory != (undefined * PTR32 *)0x0) {
      pwVar2 = F_00c54c2e(4);
      (*(wchar_t * PTR32 *)(gen_frame + 0x14)) = pwVar2;
      if (pwVar2 == (wchar_t *)0x0) {
        F_00c4c68f(_Memory);
      }
      else {
        pwVar2[0] = L'\0';
        pwVar2[1] = L'\0';
        if ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 8))))) == (int *)0x0) {
          ppuVar28 = &REFG(undefined * PTR32, 0x134b048);
          ppuVar29 = _Memory;
          for (iVar26 = 0x14; iVar26 != 0; iVar26 = iVar26 + -1) {
            *ppuVar29 = *ppuVar28;
            ppuVar28 = ppuVar28 + 1;
            ppuVar29 = ppuVar29 + 1;
          }
LAB_00c601dc: ;
          *_Memory = *(undefined * PTR32 *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4)))));
          _Memory[1] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 4)));
          _Memory[2] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 8)));
          _Memory[0xc] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 0x30)));
          _Memory[0xd] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 0x34)));
          (*(wchar_t * PTR32 *)(gen_frame + 0x14))[0] = L'\x01';
          (*(wchar_t * PTR32 *)(gen_frame + 0x14))[1] = L'\0';
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0) {
            *(*(undefined4 * PTR32 *)(gen_frame + 0x18)) = 1;
          }
          goto LAB_00c60230;
        }
        puVar3 = F_00c54c2e(4);
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          F_00c4c68f(_Memory);
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x14)));
        }
        else {
          *puVar3 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&(*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (2) * 16) + 8)))));
          iVar26 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x15,_Memory + 3);
          iVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x14,_Memory + 4);
          iVar5 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x16,_Memory + 5);
          iVar6 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x17,_Memory + 6);
          iVar7 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x18,_Memory + 7);
          iVar8 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x50,_Memory + 8);
          iVar9 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x51,_Memory + 9);
          iVar10 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x1a,_Memory + 10);
          iVar11 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x19,(undefined *)((int)_Memory + 0x29));
          iVar12 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x54,(undefined *)((int)_Memory + 0x2a));
          iVar13 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x55,(undefined *)((int)_Memory + 0x2b));
          iVar14 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x56,_Memory + 0xb);
          iVar15 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x57,(undefined *)((int)_Memory + 0x2d));
          iVar16 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x52,(undefined *)((int)_Memory + 0x2e));
          iVar17 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x53,(undefined *)((int)_Memory + 0x2f));
          iVar18 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x15,_Memory + 0xe);
          iVar19 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x14,_Memory + 0xf);
          iVar20 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x16,_Memory + 0x10);
          iVar21 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x17,_Memory + 0x11);
          iVar22 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x50,_Memory + 0x12);
          iVar23 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x51,_Memory + 0x13);
          if (iVar23 == 0 &&
              (((((((((((((((((((iVar26 == 0 && iVar4 == 0) && iVar5 == 0) && iVar6 == 0) &&
                             iVar7 == 0) && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) &&
                         iVar11 == 0) && iVar12 == 0) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0
                     ) && iVar16 == 0) && iVar17 == 0) && iVar18 == 0) && iVar19 == 0) &&
                iVar20 == 0) && iVar21 == 0) && iVar22 == 0)) {
            pcVar24 = _Memory[7];
            while (*pcVar24 != '\0') {
              cVar1 = *pcVar24;
              if ((cVar1 < '0') || ('9' < cVar1)) {
                pcVar27 = pcVar24;
                if (cVar1 != ';') goto LAB_00c601b4;
                do {
                  *pcVar27 = pcVar27[1];
                  pcVar27 = pcVar27 + 1;
                } while (*pcVar27 != '\0');
              }
              else {
                *pcVar24 = cVar1 + -0x30;
LAB_00c601b4: ;
                pcVar24 = pcVar24 + 1;
              }
            }
            goto LAB_00c601dc;
          }
          F_00c5fe2f(_Memory);
          F_00c4c68f(_Memory);
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x14)));
          F_00c4c68f((*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        }
      }
    }
    iVar26 = 1;
  }
  return iVar26;
}

/* ref: FUN_00c6028d */
uint F_00c6028d(void)
{
  GEN_ENTER(0xc6028du, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c60290 */
uint F_00c60290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc60290u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = F_00c4c468((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return (uint)(iVar2 == 0);
}

/* ref: _ProcessCodePage */
uint F_00c60306(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc60306u, gen_a0, gen_a1, 0u, 0u);
  char * in_esi = (char *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  UINT UVar3;
  
  if (((in_esi != (char *)0x0) && (*in_esi != '\0')) &&
     (iVar1 = F_00c556e0(in_esi,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b5b8))))), iVar1 != 0)) {
    iVar1 = F_00c556e0(in_esi,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b5b4)))));
    if (iVar1 != 0) {
      uVar2 = F_00c4c71d(in_esi);
      (*(uint *)(gen_frame + 0x8)) = uVar2;
      return uVar2;
    }
    iVar1 = gen_imp_GetLocaleInfoW(*(LCID *)(in_edi + 0x1c),0x2000000b,(LPWSTR)&(*(uint *)(gen_frame + 0x8)),2);
    if (iVar1 == 0) {
      return 0;
    }
    return (*(uint *)(gen_frame + 0x8));
  }
  iVar1 = gen_imp_GetLocaleInfoW(*(LCID *)(in_edi + 0x1c),0x20001004,(LPWSTR)&(*(uint *)(gen_frame + 0x8)),2);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    return (*(uint *)(gen_frame + 0x8));
  }
  UVar3 = gen_imp_GetACP();
  return UVar3;
}

/* ref: _TestDefaultCountry */
uint F_00c6038a(unsigned int gen_a0)
{
  GEN_ENTER(0xc6038au, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((short)param_1 == *(short *)((int)&REFG(undefined2, 0x111b5a0) + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}

/* ref: _LcidFromHexString */
uint F_00c603af(unsigned int gen_a0)
{
  GEN_ENTER(0xc603afu, gen_a0, 0u, 0u, 0u);
  char * in_edx = (char *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (cVar1 = *in_edx, cVar1 != '\0') {
    in_edx = in_edx + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    uVar2 = cVar1 + -0x30 + uVar2 * 0x10;
  }
  return uVar2;
}

/* ref: _GetPrimaryLen */
uint F_00c603e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc603e0u, gen_a0, 0u, 0u, 0u);
  char * in_edx = (char *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    cVar1 = *in_edx;
    in_edx = in_edx + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: _CountryEnumProc@4 */
uint F_00c603fb(unsigned int gen_a0)
{
  GEN_ENTER(0xc603fbu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  undefined * p_Var2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  p_Var2 = F_00c5b37a();
  uVar3 = F_00c603af(param_1);
  iVar4 = gen_imp_GetLocaleInfoA(uVar3,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var2) + 156) + 20))))) != 0) & 0xfffff005) +
                               0x1002,((CHAR *)(gen_frame + 0x0)),0x78);
  if (iVar4 == 0) {
    (*((int *)GEN_TOP(((((char *)(p_Var2) + 156) + 8))))) = 0;
    uVar3 = 1;
  }
  else {
    iVar4 = F_00c4c468((char *)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(p_Var2) + 156) + 4))))),((CHAR *)(gen_frame + 0x0)));
    if (iVar4 == 0) {
      uVar5 = F_00c6038a(uVar3);
      if (uVar5 != 0) {
        piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var2) + 156) + 8)))));
        *piVar1 = *piVar1 | 4;
        *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) = uVar3;
        (*((UINT *)GEN_TOP(((((char *)(p_Var2) + 156) + 24))))) = uVar3;
      }
    }
    uVar3 = ~((uint)(*((int *)GEN_TOP(((((char *)(p_Var2) + 156) + 8))))) >> 2) & 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar3;
}

/* ref: _TestDefaultLanguage */
uint F_00c604a2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc604a2u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * _Str;
  int iVar1;
  uint uVar2;
  gen_size32 sVar3;
  
  iVar1 = gen_imp_GetLocaleInfoW(in_eax & 0x3ff | 0x400,0x20000001,(LPWSTR)&(*(uint *)(gen_frame + 0x8)),2);
  if (iVar1 == 0) {
LAB_00c604cd: ;
    uVar2 = 0;
  }
  else {
    if ((in_eax != (*(uint *)(gen_frame + 0x8))) && (param_2 != 0)) {
      _Str = (char *)*param_3;
      uVar2 = F_00c603e0(_Str);
      sVar3 = F_00c552f0(_Str);
      if (uVar2 == sVar3) goto LAB_00c604cd;
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* ref: _LangCountryEnumProc@4 */
uint F_00c604fd(unsigned int gen_a0)
{
  GEN_ENTER(0xc604fdu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  undefined * p_Var2;
  undefined * p_Var3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  gen_size32 sVar7;
  uint uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  p_Var3 = F_00c5b37a();
  p_Var2 = &(*(undefined (*)[764])(((char *)(p_Var3) + 156)));
  uVar4 = F_00c603af(param_1);
  iVar5 = gen_imp_GetLocaleInfoA(uVar4,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 20))))) != 0) & 0xfffff005) +
                               0x1002,((char *)(gen_frame + 0x0)),0x78);
  if (iVar5 != 0) {
    iVar5 = F_00c4c468((char *)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(p_Var3) + 156) + 4))))),((char *)(gen_frame + 0x0)));
    if (iVar5 != 0) goto LAB_00c60601;
    iVar5 = gen_imp_GetLocaleInfoA(uVar4,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) & 0xfffff002)
                                 + 0x1001,((char *)(gen_frame + 0x0)),0x78);
    if (iVar5 != 0) {
      iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)));
      if (iVar5 == 0) {
        piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
        *piVar1 = *piVar1 | 0x304;
        (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = uVar4;
LAB_00c605fe: ;
        *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = uVar4;
      }
      else if (((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) & 2) == 0) {
        sVar7 = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12)))));
        if (sVar7 != 0) {
          iVar5 = F_00c4c591((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)),sVar7);
          if (iVar5 == 0) {
            piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
            *piVar1 = *piVar1 | 2;
            *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = uVar4;
            sVar7 = F_00c552f0((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))));
            if (sVar7 == (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12)))))) {
              (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = uVar4;
            }
            goto LAB_00c60601;
          }
        }
        uVar8 = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
        if ((uVar8 & 1) == 0) {
          uVar6 = F_00c6038a(uVar4);
          if (uVar6 != 0) {
            (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = uVar8 | 1;
            goto LAB_00c605fe;
          }
        }
      }
LAB_00c60601: ;
      uVar8 = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) & 0x300;
      if (uVar8 != 0x300) {
        iVar5 = gen_imp_GetLocaleInfoA(uVar8,uVar4,
                               (-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) & 0xfffff002) +
                               0x1001,((char *)(gen_frame + 0x0)),0x78);
        if (iVar5 == 0) goto LAB_00c6054e;
        iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)));
        if (iVar5 == 0) {
          piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
          *piVar1 = *piVar1 | 0x200;
          if ((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) {
            if ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))) != 0) {
              sVar7 = F_00c552f0((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))));
              if (sVar7 == (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12)))))) {
                uVar9 = 1;
                goto LAB_00c60696;
              }
            }
LAB_00c606a3: ;
            piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
            *piVar1 = *piVar1 | 0x100;
          }
          else {
            (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) | 0x100;
          }
          if ((*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) == 0) {
            (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = uVar4;
          }
        }
        else if (((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) &&
                ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))) != 0)) {
          iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)));
          if (iVar5 == 0) {
            uVar9 = 0;
LAB_00c60696: ;
            uVar8 = F_00c604a2(uVar4,uVar9,p_Var2);
            if (uVar8 != 0) goto LAB_00c606a3;
          }
        }
      }
      uVar4 = ~((uint)(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) >> 2) & 1;
      goto LAB_00c606bd;
    }
  }
LAB_00c6054e: ;
  (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
  uVar4 = 1;
LAB_00c606bd: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: _LanguageEnumProc@4 */
uint F_00c606ce(unsigned int gen_a0)
{
  GEN_ENTER(0xc606ceu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  undefined * p_Var2;
  undefined * p_Var3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  p_Var3 = F_00c5b37a();
  p_Var2 = &(*(undefined (*)[764])(((char *)(p_Var3) + 156)));
  uVar4 = F_00c603af(param_1);
  iVar5 = gen_imp_GetLocaleInfoA(uVar4,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) & 0xfffff002) +
                               0x1001,((CHAR *)(gen_frame + 0x0)),0x78);
  if (iVar5 == 0) {
    (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
    uVar4 = 1;
    goto LAB_00c6077e;
  }
  iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((CHAR *)(gen_frame + 0x0)));
  if (iVar5 == 0) {
    if ((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) {
      uVar7 = 1;
LAB_00c6075c: ;
      uVar6 = F_00c604a2(uVar4,uVar7,p_Var2);
      if (uVar6 == 0) goto LAB_00c60773;
    }
    piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
    *piVar1 = *piVar1 | 4;
    (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = uVar4;
    *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = uVar4;
  }
  else if (((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) &&
          ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))) != 0)) {
    iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((CHAR *)(gen_frame + 0x0)));
    if (iVar5 == 0) {
      uVar7 = 0;
      goto LAB_00c6075c;
    }
  }
LAB_00c60773: ;
  uVar4 = ~((uint)(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) >> 2) & 1;
LAB_00c6077e: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: _GetLcidFromLangCountry */
uint F_00c607ba(unsigned int gen_a0)
{
  GEN_ENTER(0xc607bau, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  gen_size32 sVar1;
  uint uVar2;
  
  sVar1 = F_00c552f0((char *)*in_esi);
  in_esi[4] = (uint)(sVar1 == 3);
  sVar1 = F_00c552f0((char *)in_esi[1]);
  in_esi[6] = 0;
  in_esi[5] = (uint)(sVar1 == 3);
  if (in_esi[4] == 0) {
    uVar2 = F_00c603e0(*in_esi);
  }
  else {
    uVar2 = 2;
  }
  in_esi[3] = uVar2;
  gen_imp_EnumSystemLocalesA(((code *)REFP(0xc604fd)),1);
  uVar2 = in_esi[2];
  if ((((uVar2 & 0x100) == 0) || ((uVar2 & 0x200) == 0)) || ((uVar2 & 7) == 0)) {
    in_esi[2] = 0;
  }
  return uVar2;
}

/* ref: _GetLcidFromLanguage */
unsigned int F_00c60821(unsigned int gen_a0)
{
  GEN_ENTER(0xc60821u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  gen_size32 sVar1;
  uint uVar2;
  
  sVar1 = F_00c552f0((char *)*in_esi);
  in_esi[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    uVar2 = F_00c603e0(*in_esi);
  }
  else {
    uVar2 = 2;
  }
  in_esi[3] = uVar2;
  gen_imp_EnumSystemLocalesA(((code *)REFP(0xc606ce)),1);
  if ((*(byte *)(in_esi + 2) & 4) == 0) {
    in_esi[2] = 0;
  }
  return 0;
}

/* ref: ___get_qualified_locale */
BOOL F_00c6085d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6085du, gen_a0, gen_a1, gen_a2, 0u);
  GEN_LPANY _LpInStr = (GEN_LPANY)gen_a0;
  UINT * _LpCodePage = (UINT *)(uintptr_t)gen_a1;
  GEN_LPANY _LpOutStr = (GEN_LPANY)gen_a2;
  int * piVar1;
  wchar_t * PTR32 * ppwVar2;
  undefined * in_esi;
  undefined * p_Var3;
  wchar_t * pwVar4;
  gen_size32 sVar5;
  LCID LVar6;
  uint uVar7;
  BOOL BVar8;
  int eVar9;
  int iVar10;
  
  p_Var3 = F_00c5b37a();
  in_esi = &(*(undefined (*)[764])(((char *)(p_Var3) + 156)));
  if (_LpInStr == (GEN_LPANY)0x0) {
    piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
    *piVar1 = *piVar1 | 0x104;
LAB_00c60946: ;
    LVar6 = gen_imp_GetUserDefaultLCID();
    (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = LVar6;
    *(LCID *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = LVar6;
  }
  else {
    (*(wchar_t * PTR32 *)((char *)(in_esi))) = ((wchar_t *)((char *)(_LpInStr)));
    pwVar4 = ((wchar_t *)((char *)(_LpInStr))) + 0x20;
    ppwVar2 = &(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(p_Var3) + 156) + 4)))));
    *ppwVar2 = pwVar4;
    if ((pwVar4 != (wchar_t *)0x0) && ((char)*pwVar4 != '\0')) {
      F_00c60290(&REFG(undefined * PTR32, 0x111b4e8),0x16,ppwVar2);
    }
    (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
    if (((*(wchar_t * PTR32 *)((char *)(in_esi))) == (wchar_t *)0x0) || ((char)*(*(wchar_t * PTR32 *)((char *)(in_esi))) == '\0')) {
      pwVar4 = *ppwVar2;
      if ((pwVar4 == (wchar_t *)0x0) || ((char)*pwVar4 == '\0')) {
        (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0x104;
        goto LAB_00c60946;
      }
      sVar5 = F_00c552f0((char *)pwVar4);
      (*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 20))))) = (uint)(sVar5 == 3);
      gen_imp_EnumSystemLocalesA(((code *)REFP(0xc603fb)),1);
      if (((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) & 4) == 0) {
        (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
      }
    }
    else {
      if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
        F_00c60821(in_esi);
      }
      else {
        F_00c607ba(in_esi);
      }
      if ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) != 0) goto LAB_00c6095c;
      uVar7 = F_00c60290(&REFG(undefined * PTR32, 0x111b2e0),0x40,in_esi);
      if (uVar7 != 0) {
        if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
          F_00c60821(in_esi);
        }
        else {
          F_00c607ba(in_esi);
        }
      }
    }
  }
  if ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) == 0) {
    return 0;
  }
LAB_00c6095c: ;
  uVar7 = F_00c60306(-(uint)(_LpInStr != (GEN_LPANY)0x0) & (uint)((wchar_t *)(((char *)(_LpInStr) + 128))),in_esi
                          );
  if ((((uVar7 == 0) || (uVar7 == 65000)) || (uVar7 == 0xfde9)) ||
     ((BVar8 = gen_imp_IsValidCodePage(uVar7 & 0xffff), BVar8 == 0 ||
      (BVar8 = gen_imp_IsValidLocale((*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))),1), BVar8 == 0)))) {
    return 0;
  }
  if (_LpCodePage != (UINT *)0x0) {
    *(short *)_LpCodePage = (short)(*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24)))));
    *(wchar_t *)((int)_LpCodePage + 2) = (*((wchar_t *)GEN_TOP((((((char *)(p_Var3) + 156) + 28) + (0) * 2)))));
    *(short *)(_LpCodePage + 1) = (short)uVar7;
  }
  if (_LpOutStr != (GEN_LPANY)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar9 = F_00c49908(_LpOutStr,0x40,"Norwegian-Nynorsk");
      if (eVar9 != 0) {
                    
        F_00c4c299(in_esi,0,0,0,0,0);
      }
    }
    else {
      iVar10 = gen_imp_GetLocaleInfoA((*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))),0x1001,_LpOutStr,0x40);
      if (iVar10 == 0) {
        return 0;
      }
    }
    iVar10 = gen_imp_GetLocaleInfoA(*(undefined4 *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))),0x1002,
                            ((wchar_t *)((char *)(_LpOutStr))) + 0x20,0x40);
    if (iVar10 == 0) {
      return 0;
    }
    F_00c70504(uVar7,(char *)((wchar_t *)(((char *)(_LpOutStr) + 128))),0x10,10);
  }
  return 1;
}

/* ref: _memcmp */
int F_00c61f68(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc61f68u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Buf1 = (undefined *)(uintptr_t)gen_a0;
  undefined * _Buf2 = (undefined *)(uintptr_t)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  byte * pbVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  gen_size32 sVar6;
  
  if (_Size == 0) {
    return 0;
  }
  if (_Size == 1) {
    uVar4 = (uint)*(byte *)_Buf1;
    uVar5 = (uint)*(byte *)_Buf2;
LAB_00c6339b: ;
    if (uVar4 == uVar5) {
      return 0;
    }
    return (uint)(0 < (int)(uVar4 - uVar5)) * 2 + -1;
  }
  if (_Size == 2) {
    uVar4 = (uint)*(byte *)_Buf1;
    uVar5 = (uint)*(byte *)_Buf2;
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 + -1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar5 = (uint)*(byte *)((int)_Buf2 + 1);
    goto LAB_00c6339b;
  }
  if (_Size == 3) {
    uVar4 = (uint)*(byte *)_Buf1;
    uVar5 = (uint)*(byte *)_Buf2;
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 + -1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar5 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 + -1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar5 = (uint)*(byte *)((int)_Buf2 + 2);
    goto LAB_00c6339b;
  }
  pbVar1 = _Buf1;
  pbVar3 = _Buf2;
  sVar6 = _Size;
  if (_Size == 4) {
    uVar4 = (uint)*(byte *)_Buf1;
    uVar5 = (uint)*(byte *)_Buf2;
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 + -1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar5 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 + -1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar5 = (uint)*(byte *)((int)_Buf2 + 2);
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 + -1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*(byte *)((int)_Buf1 + 3);
    uVar5 = (uint)*(byte *)((int)_Buf2 + 3);
    goto LAB_00c6339b;
  }
  for (; 0x1f < sVar6; sVar6 = sVar6 - 0x20) {
    if (*(int *)pbVar1 == *(int *)pbVar3) {
      iVar2 = 0;
    }
    else {
      uVar5 = (uint)*pbVar1;
      uVar4 = (uint)*pbVar3;
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[1];
      uVar4 = (uint)pbVar3[1];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[2];
      uVar4 = (uint)pbVar3[2];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[3] != (uint)pbVar3[3]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[3] - (uint)pbVar3[3])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(int *)(pbVar1 + 4) == *(int *)(pbVar3 + 4)) {
      iVar2 = 0;
    }
    else {
      uVar5 = (uint)pbVar1[4];
      uVar4 = (uint)pbVar3[4];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[5];
      uVar4 = (uint)pbVar3[5];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[6];
      uVar4 = (uint)pbVar3[6];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[7] != (uint)pbVar3[7]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[7] - (uint)pbVar3[7])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(int *)(pbVar1 + 8) == *(int *)(pbVar3 + 8)) {
      iVar2 = 0;
    }
    else {
      uVar5 = (uint)pbVar1[8];
      uVar4 = (uint)pbVar3[8];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[9];
      uVar4 = (uint)pbVar3[9];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[10];
      uVar4 = (uint)pbVar3[10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0xb] != (uint)pbVar3[0xb]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0xb] - (uint)pbVar3[0xb])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(int *)(pbVar1 + 0xc) == *(int *)(pbVar3 + 0xc)) {
      iVar2 = 0;
    }
    else {
      uVar5 = (uint)pbVar1[0xc];
      uVar4 = (uint)pbVar3[0xc];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0xd];
      uVar4 = (uint)pbVar3[0xd];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0xe];
      uVar4 = (uint)pbVar3[0xe];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0xf] != (uint)pbVar3[0xf]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0xf] - (uint)pbVar3[0xf])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(int *)(pbVar1 + 0x10) == *(int *)(pbVar3 + 0x10)) {
      iVar2 = 0;
    }
    else {
      uVar4 = (uint)pbVar3[0x10];
      uVar5 = (uint)pbVar1[0x10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x11];
      uVar4 = (uint)pbVar3[0x11];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x12];
      uVar4 = (uint)pbVar3[0x12];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0x13] != (uint)pbVar3[0x13]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0x13] - (uint)pbVar3[0x13])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(int *)(pbVar1 + 0x14) == *(int *)(pbVar3 + 0x14)) {
      iVar2 = 0;
    }
    else {
      uVar5 = (uint)pbVar1[0x14];
      uVar4 = (uint)pbVar3[0x14];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x15];
      uVar4 = (uint)pbVar3[0x15];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x16];
      uVar4 = (uint)pbVar3[0x16];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0x17] != (uint)pbVar3[0x17]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0x17] - (uint)pbVar3[0x17])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(int *)(pbVar1 + 0x18) == *(int *)(pbVar3 + 0x18)) {
      iVar2 = 0;
    }
    else {
      uVar5 = (uint)pbVar1[0x18];
      uVar4 = (uint)pbVar3[0x18];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x19];
      uVar4 = (uint)pbVar3[0x19];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x1a];
      uVar4 = (uint)pbVar3[0x1a];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0x1b] != (uint)pbVar3[0x1b]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0x1b] - (uint)pbVar3[0x1b])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(int *)(pbVar1 + 0x1c) == *(int *)(pbVar3 + 0x1c)) {
      iVar2 = 0;
    }
    else {
      uVar5 = (uint)pbVar1[0x1c];
      uVar4 = (uint)pbVar3[0x1c];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x1d];
      uVar4 = (uint)pbVar3[0x1d];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x1e];
      uVar4 = (uint)pbVar3[0x1e];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0x1f] != (uint)pbVar3[0x1f]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0x1f] - (uint)pbVar3[0x1f])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    pbVar1 = pbVar1 + 0x20;
    pbVar3 = pbVar3 + 0x20;
  }
  switch((unsigned int)(uintptr_t)(sVar6)) {
  default: ;
    goto switchD_00c623ef_caseD_0;
  case 1: ;
    goto switchD_00c623ef_caseD_1;
  case 2: ;
    goto switchD_00c623ef_caseD_2;
  case 3: ;
    goto switchD_00c623ef_caseD_3;
  case 4: ;
    goto switchD_00c623ef_caseD_4;
  case 5: ;
    goto switchD_00c623ef_caseD_5;
  case 6: ;
    goto switchD_00c623ef_caseD_6;
  case 7: ;
    goto switchD_00c623ef_caseD_7;
  case 8: ;
    goto switchD_00c623ef_caseD_8;
  case 9: ;
    goto switchD_00c623ef_caseD_9;
  case 10: ;
    goto switchD_00c623ef_caseD_a;
  case 0xb: ;
    goto switchD_00c623ef_caseD_b;
  case 0xc: ;
    goto switchD_00c623ef_caseD_c;
  case 0xd: ;
    goto switchD_00c623ef_caseD_d;
  case 0xe: ;
    goto switchD_00c623ef_caseD_e;
  case 0xf: ;
    goto switchD_00c623ef_caseD_f;
  case 0x10: ;
    goto switchD_00c623ef_caseD_10;
  case 0x11: ;
    goto switchD_00c623ef_caseD_11;
  case 0x12: ;
    goto switchD_00c623ef_caseD_12;
  case 0x13: ;
    goto switchD_00c623ef_caseD_13;
  case 0x14: ;
    goto switchD_00c623ef_caseD_14;
  case 0x15: ;
    goto switchD_00c623ef_caseD_15;
  case 0x16: ;
    goto switchD_00c623ef_caseD_16;
  case 0x17: ;
    goto switchD_00c623ef_caseD_17;
  case 0x18: ;
    goto switchD_00c623ef_caseD_18;
  case 0x1a: ;
    goto switchD_00c623ef_caseD_1a;
  case 0x1b: ;
    goto switchD_00c623ef_caseD_1b;
  case 0x1c: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1c)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x1c))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1c)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x1c];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1b];
      uVar4 = (uint)pbVar3[sVar6 - 0x1b];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1a];
      uVar4 = (uint)pbVar3[sVar6 - 0x1a];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x19] != (uint)pbVar3[sVar6 - 0x19]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x19] - (uint)pbVar3[sVar6 - 0x19])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_18: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x18)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x18))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x18)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x18];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x17];
      uVar4 = (uint)pbVar3[sVar6 - 0x17];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x16];
      uVar4 = (uint)pbVar3[sVar6 - 0x16];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x15] != (uint)pbVar3[sVar6 - 0x15]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x15] - (uint)pbVar3[sVar6 - 0x15])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_14: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x14)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x14))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x14)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x14];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x13];
      uVar4 = (uint)pbVar3[sVar6 - 0x13];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x12];
      uVar4 = (uint)pbVar3[sVar6 - 0x12];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x11] != (uint)pbVar3[sVar6 - 0x11]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x11] - (uint)pbVar3[sVar6 - 0x11])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_10: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x10)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x10))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x10)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xf];
      uVar4 = (uint)pbVar3[sVar6 - 0xf];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xe];
      uVar4 = (uint)pbVar3[sVar6 - 0xe];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xd] != (uint)pbVar3[sVar6 - 0xd]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xd] - (uint)pbVar3[sVar6 - 0xd])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_c: ;
    if (*((int *)GEN_TOP((pbVar1 + (sVar6 - 0xc)))) == *((int *)GEN_TOP((pbVar3 + (sVar6 - 0xc))))) {
      iVar2 = 0;
    }
    else {
      uVar4 = (uint)pbVar3[sVar6 - 0xc];
      uVar5 = (uint)pbVar1[sVar6 - 0xc];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xb];
      uVar4 = (uint)pbVar3[sVar6 - 0xb];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 10];
      uVar4 = (uint)pbVar3[sVar6 - 10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 9] != (uint)pbVar3[sVar6 - 9]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 9] - (uint)pbVar3[sVar6 - 9])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_8: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 8)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 8))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 8)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 8];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 7];
      uVar4 = (uint)pbVar3[sVar6 - 7];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 6];
      uVar4 = (uint)pbVar3[sVar6 - 6];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 5] != (uint)pbVar3[sVar6 - 5]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 5] - (uint)pbVar3[sVar6 - 5])) * 2 + -1;
      }
    }
    if (iVar2 == 0) {
switchD_00c623ef_caseD_4: ;
      if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 4)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 4))))) {
        iVar2 = 0;
      }
      else {
        uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 4)))) & 0xff;
        uVar4 = (uint)pbVar3[sVar6 - 4];
        if ((uVar5 == uVar4) ||
           (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 == 0)) {
          uVar5 = (uint)pbVar1[sVar6 - 3];
          uVar4 = (uint)pbVar3[sVar6 - 3];
          if ((uVar5 == uVar4) ||
             (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 == 0)) {
            uVar5 = (uint)pbVar1[sVar6 - 2];
            uVar4 = (uint)pbVar3[sVar6 - 2];
            if ((uVar5 == uVar4) ||
               (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 == 0)) {
              iVar2 = 0;
              if ((uint)pbVar1[sVar6 - 1] != (uint)pbVar3[sVar6 - 1]) {
                iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 1] - (uint)pbVar3[sVar6 - 1])) * 2 +
                        -1;
              }
            }
          }
        }
      }
      if (iVar2 == 0) {
switchD_00c623ef_caseD_0: ;
        iVar2 = 0;
      }
    }
    return iVar2;
  case 0x1d: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1d)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x1d))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1d)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x1d];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1c];
      uVar4 = (uint)pbVar3[sVar6 - 0x1c];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1b];
      uVar4 = (uint)pbVar3[sVar6 - 0x1b];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x1a] != (uint)pbVar3[sVar6 - 0x1a]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x1a] - (uint)pbVar3[sVar6 - 0x1a])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  case 0x19: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x19)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x19))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x19)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x19];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x18];
      uVar4 = (uint)pbVar3[sVar6 - 0x18];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x17];
      uVar4 = (uint)pbVar3[sVar6 - 0x17];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x16] != (uint)pbVar3[sVar6 - 0x16]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x16] - (uint)pbVar3[sVar6 - 0x16])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_15: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x15)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x15))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x15)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x15];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x14];
      uVar4 = (uint)pbVar3[sVar6 - 0x14];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x13];
      uVar4 = (uint)pbVar3[sVar6 - 0x13];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x12] != (uint)pbVar3[sVar6 - 0x12]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x12] - (uint)pbVar3[sVar6 - 0x12])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_11: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x11)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x11))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x11)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x11];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x10];
      uVar4 = (uint)pbVar3[sVar6 - 0x10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xf];
      uVar4 = (uint)pbVar3[sVar6 - 0xf];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xe] != (uint)pbVar3[sVar6 - 0xe]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xe] - (uint)pbVar3[sVar6 - 0xe])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_d: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0xd)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0xd))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0xd)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0xd];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xc];
      uVar4 = (uint)pbVar3[sVar6 - 0xc];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xb];
      uVar4 = (uint)pbVar3[sVar6 - 0xb];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 10] != (uint)pbVar3[sVar6 - 10]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 10] - (uint)pbVar3[sVar6 - 10])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_9: ;
    if (*((int *)GEN_TOP((pbVar1 + (sVar6 - 9)))) == *((int *)GEN_TOP((pbVar3 + (sVar6 - 9))))) {
      iVar2 = 0;
    }
    else {
      uVar4 = (uint)pbVar3[sVar6 - 9];
      uVar5 = (uint)pbVar1[sVar6 - 9];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 8];
      uVar4 = (uint)pbVar3[sVar6 - 8];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 7];
      uVar4 = (uint)pbVar3[sVar6 - 7];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 6] != (uint)pbVar3[sVar6 - 6]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 6] - (uint)pbVar3[sVar6 - 6])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_5: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 5)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 5))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 5)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 5];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 4];
      uVar4 = (uint)pbVar3[sVar6 - 4];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 3];
      uVar4 = (uint)pbVar3[sVar6 - 3];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 2] != (uint)pbVar3[sVar6 - 2]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 2] - (uint)pbVar3[sVar6 - 2])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_1: ;
    if ((uint)pbVar1[sVar6 - 1] == (uint)pbVar3[sVar6 - 1]) {
      return 0;
    }
    return (uint)(0 < (int)((uint)pbVar1[sVar6 - 1] - (uint)pbVar3[sVar6 - 1])) * 2 + -1;
  case 0x1e: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1e)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x1e))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1e)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x1e];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1d];
      uVar4 = (uint)pbVar3[sVar6 - 0x1d];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1c];
      uVar4 = (uint)pbVar3[sVar6 - 0x1c];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x1b] != (uint)pbVar3[sVar6 - 0x1b]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x1b] - (uint)pbVar3[sVar6 - 0x1b])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_1a: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1a)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x1a))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1a)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x1a];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x19];
      uVar4 = (uint)pbVar3[sVar6 - 0x19];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x18];
      uVar4 = (uint)pbVar3[sVar6 - 0x18];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x17] != (uint)pbVar3[sVar6 - 0x17]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x17] - (uint)pbVar3[sVar6 - 0x17])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_16: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x16)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x16))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x16)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x16];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x15];
      uVar4 = (uint)pbVar3[sVar6 - 0x15];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x14];
      uVar4 = (uint)pbVar3[sVar6 - 0x14];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x13] != (uint)pbVar3[sVar6 - 0x13]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x13] - (uint)pbVar3[sVar6 - 0x13])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_12: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x12)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x12))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x12)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x12];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x11];
      uVar4 = (uint)pbVar3[sVar6 - 0x11];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x10];
      uVar4 = (uint)pbVar3[sVar6 - 0x10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xf] != (uint)pbVar3[sVar6 - 0xf]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xf] - (uint)pbVar3[sVar6 - 0xf])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_e: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0xe)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0xe))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0xe)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0xe];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xd];
      uVar4 = (uint)pbVar3[sVar6 - 0xd];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xc];
      uVar4 = (uint)pbVar3[sVar6 - 0xc];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xb] != (uint)pbVar3[sVar6 - 0xb]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xb] - (uint)pbVar3[sVar6 - 0xb])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_a: ;
    if (*((int *)GEN_TOP((pbVar1 + (sVar6 - 10)))) == *((int *)GEN_TOP((pbVar3 + (sVar6 - 10))))) {
      iVar2 = 0;
    }
    else {
      uVar4 = (uint)pbVar3[sVar6 - 10];
      uVar5 = (uint)pbVar1[sVar6 - 10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar4 = (uint)pbVar3[sVar6 - 9];
      uVar5 = (uint)pbVar1[sVar6 - 9];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar4 = (uint)pbVar3[sVar6 - 8];
      uVar5 = (uint)pbVar1[sVar6 - 8];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 7] != (uint)pbVar3[sVar6 - 7]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 7] - (uint)pbVar3[sVar6 - 7])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_6: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 6)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 6))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 6)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 6];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 5];
      uVar4 = (uint)pbVar3[sVar6 - 5];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 4];
      uVar4 = (uint)pbVar3[sVar6 - 4];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 3] != (uint)pbVar3[sVar6 - 3]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 3] - (uint)pbVar3[sVar6 - 3])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_2: ;
    if (*((short *)GEN_TOP((pbVar1 + (sVar6 - 2)))) != *((short *)GEN_TOP((pbVar3 + (sVar6 - 2))))) {
LAB_00c62f2d: ;
      uVar4 = (uint)pbVar3[sVar6 - 2];
      uVar5 = (uint)pbVar1[sVar6 - 2];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      goto switchD_00c623ef_caseD_1;
    }
    goto switchD_00c623ef_caseD_0;
  case 0x1f: ;
    if (*((int *)GEN_TOP((pbVar1 + (sVar6 - 0x1f)))) == *((int *)GEN_TOP((pbVar3 + (sVar6 - 0x1f))))) {
      iVar2 = 0;
    }
    else {
      uVar4 = (uint)pbVar3[sVar6 - 0x1f];
      uVar5 = (uint)pbVar1[sVar6 - 0x1f];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1e];
      uVar4 = (uint)pbVar3[sVar6 - 0x1e];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1d];
      uVar4 = (uint)pbVar3[sVar6 - 0x1d];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x1c] != (uint)pbVar3[sVar6 - 0x1c]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x1c] - (uint)pbVar3[sVar6 - 0x1c])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_1b: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1b)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x1b))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1b)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x1b];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1a];
      uVar4 = (uint)pbVar3[sVar6 - 0x1a];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x19];
      uVar4 = (uint)pbVar3[sVar6 - 0x19];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x18] != (uint)pbVar3[sVar6 - 0x18]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x18] - (uint)pbVar3[sVar6 - 0x18])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_17: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x17)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x17))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x17)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x17];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x16];
      uVar4 = (uint)pbVar3[sVar6 - 0x16];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x15];
      uVar4 = (uint)pbVar3[sVar6 - 0x15];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x14] != (uint)pbVar3[sVar6 - 0x14]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x14] - (uint)pbVar3[sVar6 - 0x14])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_13: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x13)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x13))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x13)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x13];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x12];
      uVar4 = (uint)pbVar3[sVar6 - 0x12];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x11];
      uVar4 = (uint)pbVar3[sVar6 - 0x11];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x10] != (uint)pbVar3[sVar6 - 0x10]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x10] - (uint)pbVar3[sVar6 - 0x10])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_f: ;
    if (*((int *)GEN_TOP((pbVar1 + (sVar6 - 0xf)))) == *((int *)GEN_TOP((pbVar3 + (sVar6 - 0xf))))) {
      iVar2 = 0;
    }
    else {
      uVar4 = (uint)pbVar3[sVar6 - 0xf];
      uVar5 = (uint)pbVar1[sVar6 - 0xf];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xe];
      uVar4 = (uint)pbVar3[sVar6 - 0xe];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xd];
      uVar4 = (uint)pbVar3[sVar6 - 0xd];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xc] != (uint)pbVar3[sVar6 - 0xc]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xc] - (uint)pbVar3[sVar6 - 0xc])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_b: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0xb)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0xb))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0xb)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0xb];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 10];
      uVar4 = (uint)pbVar3[sVar6 - 10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 9];
      uVar4 = (uint)pbVar3[sVar6 - 9];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 8] != (uint)pbVar3[sVar6 - 8]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 8] - (uint)pbVar3[sVar6 - 8])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_7: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 7)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 7))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 7)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 7];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 6];
      uVar4 = (uint)pbVar3[sVar6 - 6];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 5];
      uVar4 = (uint)pbVar3[sVar6 - 5];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 4] != (uint)pbVar3[sVar6 - 4]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 4] - (uint)pbVar3[sVar6 - 4])) * 2 + -1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_3: ;
    uVar5 = (uint)pbVar1[sVar6 - 3];
    uVar4 = (uint)pbVar3[sVar6 - 3];
    if ((uVar5 != uVar4) &&
       (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 + -1, iVar2 != 0)) {
      return iVar2;
    }
    goto LAB_00c62f2d;
  }
}

/* ref: __crtGetStringTypeA_stat */
int F_00c634bc(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc634bcu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulong param_2 = (ulong)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10010];
  uint uVar1;
  uint uVar2;
  BOOL BVar3;
  undefined4 * puVar4;
  int cchSrc;
  LPCWSTR lpSrcStr;
  
  (*(uint *)(gen_frame + 0x10008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  lpSrcStr = (LPCWSTR)0x0;
  (*(BOOL *)(gen_frame + 0x10004)) = 0;
  if (param_6 == 0) {
    param_6 = (*((uint *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)(param_1))) + 4)))));
  }
  uVar2 = gen_imp_MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,0,0);
  if (uVar2 != 0) {
    if ((0 < (int)uVar2) && (uVar2 < 0x7ffffff1)) {
      uVar1 = uVar2 * 2 + 8;
      if (uVar1 < 0x401) {
        puVar4 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
        lpSrcStr = (LPCWSTR)(gen_frame + 0x0);
        if (1) {
LAB_00c6354b: ;
          lpSrcStr = (LPCWSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = F_00c51787(uVar1);
        lpSrcStr = (LPCWSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_00c6354b;
        }
      }
    }
    if (lpSrcStr != (LPCWSTR)0x0) {
      F_00c48350(lpSrcStr,0,uVar2 * 2);
      cchSrc = gen_imp_MultiByteToWideChar(param_6,1,param_3,param_4,lpSrcStr,uVar2);
      if (cchSrc != 0) {
        BVar3 = gen_imp_GetStringTypeW(param_2,lpSrcStr,cchSrc,param_5);
        (*(BOOL *)(gen_frame + 0x10004)) = BVar3;
      }
      F_00c4f78f(lpSrcStr);
      BVar3 = (*(BOOL *)(gen_frame + 0x10004));
      goto LAB_00c63591;
    }
  }
  BVar3 = 0;
LAB_00c63591: ;
  F_00c47745((*(uint *)(gen_frame + 0x10008)) ^ (uint)(uint)(gen_frame + 0x14));
  return BVar3;
}

/* ref: ___crtGetStringTypeA */
BOOL F_00c635a3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc635a3u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulong param_2 = (ulong)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),param_1);
  iVar1 = F_00c634bc((undefined *)((byte *)(gen_frame + 0xc)),param_2,param_3,param_4,param_5,param_6,param_8,
                     (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)));
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar1;
}

/* ref: __fltin2 */
undefined * F_00c635e3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc635e3u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Flt = (undefined *)(uintptr_t)gen_a0;
  char * _Str = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 IVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(char * PTR32 *)(gen_frame + 0xc)) = _Str;
  uVar3 = 0;
  uVar1 = F_00c63c8d(((undefined *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x8)),_Str,0,0,0,0,_Locale);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  if ((uVar1 & 4) == 0) {
    IVar2 = F_00c7c314(((undefined *)(gen_frame + 0x1c)),&(*(undefined8 *)(gen_frame + 0x10)));
    if ((((*(uint *)(gen_frame + 0x18)) & 2) != 0) || (IVar2 == (1))) {
      uVar3 = 0x80;
    }
    if ((((*(uint *)(gen_frame + 0x18)) & 1) != 0) || (IVar2 == (2))) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) + 0)) = 0;
    (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) + 4)) = 0;
  }
  (*(int *)(((char *)(_Flt) + 4))) = (*(int *)(gen_frame + 0x8)) - (int)(*(char * PTR32 *)(gen_frame + 0xc));
  *(undefined4 *)&(*(double *)(((char *)(_Flt) + 16))) = (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) + 0));
  *((undefined4 *)GEN_TOP(((int)&(*(double *)(((char *)(_Flt) + 16))) + 4))) = (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) + 4));
  (*(int *)((char *)(_Flt))) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return _Flt;
}

/* ref: ___addl */
uint F_00c6368a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6368au, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + param_2;
  uVar2 = 0;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

/* ref: ___shl_12 */
uint F_00c636ae(unsigned int gen_a0)
{
  GEN_ENTER(0xc636aeu, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] * 2 | uVar2 >> 0x1f;
  return (uint)param_1;
}

/* ref: ___shr_12 */
uint F_00c636e1(unsigned int gen_a0)
{
  GEN_ENTER(0xc636e1u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return (uint)param_1;
}

/* ref: ___ld12mul */
uint F_00c63713(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc63713u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  ushort * puVar11;
  ushort uVar12;
  short * psVar13;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar10 = *(ushort *)((int)param_2 + 10);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(short *)(gen_frame + 0x20)) = 0;
  iVar5 = 0;
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 0)) = 0;
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)) = 0;
  iVar6 = 0;
  (*(ushort *)(gen_frame + 0x26)) = 0;
  uVar3 = (uVar10 ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar8 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = uVar10 & 0x7fff;
  uVar12 = uVar10 + uVar8;
  iVar2 = 0;
  iVar4 = 0;
  if (((uVar8 < 0x7fff) && (iVar2 = 0, iVar4 = 0, uVar10 < 0x7fff)) &&
     (iVar2 = iVar5, iVar4 = iVar6, uVar12 < 0xbffe)) {
    if (0x3fbf < uVar12) {
      if (((uVar8 == 0) && (uVar12 = uVar12 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
         ((param_1[1] == 0 && (*param_1 == 0)))) {
        *(undefined2 *)((int)param_1 + 10) = 0;
        goto LAB_00c6397f;
      }
      if (((uVar10 == 0) && (uVar12 = uVar12 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
         ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_00c63794;
      (*(int *)(gen_frame + 0x10)) = 0;
      psVar13 = &(*(short *)(gen_frame + 0x20));
      (*(int *)(gen_frame + 0x14)) = 5;
      do {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x14));
        if (0 < (*(int *)(gen_frame + 0x14))) {
          (*(ushort * PTR32 *)(gen_frame + 0x8)) = (ushort *)(param_2 + 2);
          puVar11 = (ushort *)((int)param_1 + (*(int *)(gen_frame + 0x10)) * 2);
          do {
            bVar7 = false;
            uVar1 = *(uint *)(psVar13 + -2) + (uint)*puVar11 * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x8));
            if ((uVar1 < *(uint *)(psVar13 + -2)) || (uVar1 < (uint)*puVar11 * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x8)))) {
              bVar7 = true;
            }
            *(uint *)(psVar13 + -2) = uVar1;
            if (bVar7) {
              *psVar13 = *psVar13 + 1;
            }
            (*(ushort * PTR32 *)(gen_frame + 0x8)) = (*(ushort * PTR32 *)(gen_frame + 0x8)) + -1;
            puVar11 = puVar11 + 1;
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
          } while (0 < (*(int *)(gen_frame + 0x4)));
        }
        uVar1 = CONCAT22((ushort)(*(int *)(gen_frame + 0x22)),(*(short *)(gen_frame + 0x20)));
        psVar13 = psVar13 + 1;
        (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + -1;
      } while (0 < (*(int *)(gen_frame + 0x14)));
      uVar12 = uVar12 + 0xc002;
      uVar9 = uVar1;
      if ((short)uVar12 < 1) {
LAB_00c6389f: ;
        (*(ushort *)(gen_frame + 0x1e)) = 0;
        (*(undefined1 *)(gen_frame + 0x1d)) = 0;
        (*(byte *)(gen_frame + 0x1c)) = 0;
        uVar12 = uVar12 - 1;
        uVar9 = uVar1;
        if ((short)uVar12 < 0) {
          (*(uint *)(gen_frame + 0x18)) = (uint)(ushort)-uVar12;
          uVar12 = 0;
          do {
            if (((*(byte *)(gen_frame + 0x1c)) & 1) != 0) {
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            }
            iVar2 = CONCAT22((*(ushort *)(gen_frame + 0x26)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)));
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x26)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2))) >> 1);
            (*(ushort *)(gen_frame + 0x26)) = (*(ushort *)(gen_frame + 0x26)) >> 1;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 0)) = (ushort)(uVar1 >> 0x11) | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
            uVar9 = CONCAT22((*(ushort *)(gen_frame + 0x1e)),CONCAT11((*(undefined1 *)(gen_frame + 0x1d)),(*(byte *)(gen_frame + 0x1c)))) >> 1;
            (*(ushort *)(gen_frame + 0x1e)) = (*(ushort *)(gen_frame + 0x1e)) >> 1 | (ushort)((uVar1 << 0x1f) >> 0x10);
            (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) - 1;
            (*(short *)(gen_frame + 0x20)) = (short)(uVar1 >> 1);
            uVar1 = CONCAT22((ushort)(*(int *)(gen_frame + 0x22)),(*(short *)(gen_frame + 0x20)));
            (*(byte *)(gen_frame + 0x1c)) = (byte)uVar9;
            (*(undefined1 *)(gen_frame + 0x1d)) = (undefined1)(uVar9 >> 8);
          } while ((*(uint *)(gen_frame + 0x18)) != 0);
          uVar9 = CONCAT22((ushort)(*(int *)(gen_frame + 0x22)),(*(short *)(gen_frame + 0x20)));
          if ((*(int *)(gen_frame + 0x0)) != 0) {
            (*(byte *)(gen_frame + 0x1c)) = (*(byte *)(gen_frame + 0x1c)) | 1;
            uVar9 = uVar1;
          }
        }
      }
      else {
        do {
          uVar1 = uVar9;
          if (((*(ushort *)(gen_frame + 0x26)) & 0x8000) != 0) break;
          uVar1 = uVar9 * 2;
          iVar2 = (int)CONCAT22((*(ushort *)(gen_frame + 0x26)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2))) * 2;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)) = (ushort)iVar2 | (ushort)(uVar9 >> 0x1f);
          uVar12 = uVar12 - 1;
          (*(ushort *)(gen_frame + 0x26)) = (ushort)((uint)iVar2 >> 0x10);
          uVar9 = uVar1;
        } while (0 < (short)uVar12);
        (*(ushort *)(gen_frame + 0x1e)) = 0;
        (*(undefined1 *)(gen_frame + 0x1d)) = 0;
        (*(byte *)(gen_frame + 0x1c)) = 0;
        uVar9 = uVar1;
        if ((short)uVar12 < 1) goto LAB_00c6389f;
      }
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 0)) = (ushort)(uVar9 >> 0x10);
      (*(short *)(gen_frame + 0x20)) = (short)uVar9;
      if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x1d)),(*(byte *)(gen_frame + 0x1c)))) ||
         (iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)),(ushort)(*(int *)(gen_frame + 0x22))),
         iVar2 = (int)CONCAT22((*(short *)(gen_frame + 0x20)),(*(ushort *)(gen_frame + 0x1e))),
         (CONCAT22((*(ushort *)(gen_frame + 0x1e)),CONCAT11((*(undefined1 *)(gen_frame + 0x1d)),(*(byte *)(gen_frame + 0x1c)))) & 0x1ffff) == 0x18000)) {
        if ((int)CONCAT22((*(short *)(gen_frame + 0x20)),(*(ushort *)(gen_frame + 0x1e))) == -1) {
          iVar2 = 0;
          if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)),(ushort)(*(int *)(gen_frame + 0x22))) == -1) {
            if ((*(ushort *)(gen_frame + 0x26)) == 0xffff) {
              (*(ushort *)(gen_frame + 0x26)) = 0x8000;
              uVar12 = uVar12 + 1;
              iVar4 = 0;
              iVar2 = 0;
            }
            else {
              (*(ushort *)(gen_frame + 0x26)) = (*(ushort *)(gen_frame + 0x26)) + 1;
              iVar4 = 0;
              iVar2 = 0;
            }
          }
          else {
            iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)),(ushort)(*(int *)(gen_frame + 0x22))) + 1;
          }
        }
        else {
          iVar2 = (int)CONCAT22((*(short *)(gen_frame + 0x20)),(*(ushort *)(gen_frame + 0x1e))) + 1;
          iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)),(ushort)(*(int *)(gen_frame + 0x22)));
        }
      }
      (*(short *)(gen_frame + 0x20)) = (short)((uint)iVar2 >> 0x10);
      (*(ushort *)(gen_frame + 0x1e)) = (ushort)iVar2;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)) = (ushort)((uint)iVar4 >> 0x10);
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 0)) = (ushort)iVar4;
      if (uVar12 < 0x7fff) {
        *(ushort *)param_1 = (*(ushort *)(gen_frame + 0x1e));
        *(uint *)((int)param_1 + 2) = CONCAT22((ushort)(*(int *)(gen_frame + 0x22)),(*(short *)(gen_frame + 0x20)));
        *(uint *)((int)param_1 + 6) = CONCAT22((*(ushort *)(gen_frame + 0x26)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)));
        *(ushort *)((int)param_1 + 10) = uVar12 | uVar3;
        goto LAB_00c6397f;
      }
      goto LAB_00c6395f;
    }
LAB_00c63794: ;
    param_1[2] = 0;
  }
  else {
LAB_00c6395f: ;
    param_1[2] = ((uVar3 == 0) - 1 & 0x80000000) + 0x7fff8000;
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00c6397f: ;
  (*(short *)(gen_frame + 0x20)) = (short)((uint)iVar2 >> 0x10);
  (*(int *)(gen_frame + 0x22)) = iVar4;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)param_1;
}

/* ref: ___multtenpow12 */
uint F_00c6398e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6398eu, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  ushort * puVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  short * psVar16;
  uint uVar17;
  ushort uVar18;
  
  iVar2 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)),(undefined2)(*(int *)(gen_frame + 0x32)));
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x134bea0);
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x134c000);
    }
    uVar9 = param_2;
    puVar1 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
      uVar9 = param_2;
    }
joined_r0x00c639d6: ;
    if (uVar9 != 0) {
      puVar1 = puVar1 + 0x54;
      uVar17 = (int)uVar9 >> 3;
      uVar11 = uVar9 & 7;
      uVar9 = uVar17;
      if (uVar11 != 0) {
        puVar12 = (ushort *)(puVar1 + uVar11 * 0xc);
        if (0x7fff < *puVar12) {
          uVar3 = *(undefined4 *)puVar12;
          (*(ushort *)(gen_frame + 0x30)) = (ushort)uVar3;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 0)) = (undefined2)((uint)uVar3 >> 0x10);
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)) = (undefined2)*(undefined4 *)(puVar12 + 2);
          (*(undefined2 *)(gen_frame + 0x36)) = (undefined2)((uint)*(undefined4 *)(puVar12 + 2) >> 0x10);
          (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(puVar12 + 4);
          iVar2 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)),(undefined2)(*(int *)(gen_frame + 0x32))) + -1;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 0)) = (undefined2)iVar2;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)) = (undefined2)((uint)iVar2 >> 0x10);
          puVar12 = &(*(ushort *)(gen_frame + 0x30));
        }
        uVar10 = *(ushort *)((int)param_1 + 10);
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(byte *)(gen_frame + 0x3c)) = 0;
        (*(undefined1 *)(gen_frame + 0x3d)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = 0;
        iVar6 = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = 0;
        iVar7 = 0;
        (*(ushort *)(gen_frame + 0x46)) = 0;
        uVar15 = (puVar12[5] ^ uVar10) & 0x8000;
        uVar10 = uVar10 & 0x7fff;
        uVar14 = puVar12[5] & 0x7fff;
        uVar18 = uVar14 + uVar10;
        iVar4 = 0;
        iVar5 = 0;
        if (((uVar10 < 0x7fff) && (iVar4 = 0, iVar5 = 0, uVar14 < 0x7fff)) &&
           (iVar4 = iVar6, iVar5 = iVar7, uVar18 < 0xbffe)) {
          if (0x3fbf < uVar18) {
            (*(int *)(gen_frame + 0x3e)) = iVar6;
            (*(int *)(gen_frame + 0x42)) = iVar7;
            if (((uVar10 == 0) && (uVar18 = uVar18 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
               ((param_1[1] == 0 && (*param_1 == 0)))) {
              *(undefined2 *)((int)param_1 + 10) = 0;
            }
            else if (((uVar14 == 0) &&
                     (uVar18 = uVar18 + 1, (*(uint *)(puVar12 + 4) & 0x7fffffff) == 0)) &&
                    ((*(int *)(puVar12 + 2) == 0 && (*(int *)puVar12 == 0)))) {
              param_1[2] = 0;
              param_1[1] = 0;
              *param_1 = 0;
            }
            else {
              (*(int *)(gen_frame + 0x18)) = 0;
              psVar16 = (short *)((int)&(*(int *)(gen_frame + 0x3e)) + 2);
              (*(int *)(gen_frame + 0x2c)) = 5;
              do {
                (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x2c));
                if (0 < (*(int *)(gen_frame + 0x2c))) {
                  (*(ushort * PTR32 *)(gen_frame + 0xc)) = puVar12 + 4;
                  (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)((*(int *)(gen_frame + 0x18)) * 2 + (int)param_1);
                  do {
                    bVar8 = false;
                    uVar17 = *(uint *)(psVar16 + -2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc));
                    if ((uVar17 < *(uint *)(psVar16 + -2)) ||
                       (uVar17 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)))) {
                      bVar8 = true;
                    }
                    *(uint *)(psVar16 + -2) = uVar17;
                    if (bVar8) {
                      *psVar16 = *psVar16 + 1;
                    }
                    (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 1;
                    (*(ushort * PTR32 *)(gen_frame + 0xc)) = (*(ushort * PTR32 *)(gen_frame + 0xc)) + -1;
                    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + -1;
                  } while (0 < (*(int *)(gen_frame + 0x20)));
                }
                psVar16 = psVar16 + 1;
                (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
                (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + -1;
              } while (0 < (*(int *)(gen_frame + 0x2c)));
              uVar18 = uVar18 + 0xc002;
              if ((short)uVar18 < 1) {
LAB_00c63b90: ;
                uVar18 = uVar18 - 1;
                if ((short)uVar18 < 0) {
                  uVar17 = (uint)(ushort)-uVar18;
                  uVar18 = 0;
                  do {
                    if (((*(byte *)(gen_frame + 0x3c)) & 1) != 0) {
                      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
                    }
                    iVar5 = CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
                    uVar11 = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)));
                    iVar4 = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)));
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2))) >> 1);
                    (*(ushort *)(gen_frame + 0x46)) = (*(ushort *)(gen_frame + 0x46)) >> 1;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)(*(int *)(gen_frame + 0x42)) >> 1 | (ushort)((uint)(iVar5 << 0x1f) >> 0x10)
                    ;
                    uVar13 = CONCAT22((ushort)(*(int *)(gen_frame + 0x3e)),CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) >> 1;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) =
                         (ushort)(*(int *)(gen_frame + 0x3e)) >> 1 | (ushort)((uint)(iVar4 << 0x1f) >> 0x10);
                    uVar17 = uVar17 - 1;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = (ushort)(uVar11 >> 1);
                    (*(byte *)(gen_frame + 0x3c)) = (byte)uVar13;
                    (*(undefined1 *)(gen_frame + 0x3d)) = (undefined1)(uVar13 >> 8);
                  } while (uVar17 != 0);
                  if ((*(int *)(gen_frame + 0x14)) != 0) {
                    (*(byte *)(gen_frame + 0x3c)) = (*(byte *)(gen_frame + 0x3c)) | 1;
                  }
                }
              }
              else {
                do {
                  uVar10 = (ushort)(*(int *)(gen_frame + 0x3e));
                  if (((*(ushort *)(gen_frame + 0x46)) & 0x8000) != 0) break;
                  iVar4 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x3e)),CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) << 1;
                  (*(byte *)(gen_frame + 0x3c)) = (byte)iVar4;
                  (*(undefined1 *)(gen_frame + 0x3d)) = (undefined1)((uint)iVar4 >> 8);
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) = (ushort)((uint)iVar4 >> 0x10);
                  iVar4 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2))) * 2;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = (ushort)iVar4 | uVar10 >> 0xf;
                  iVar5 = (int)CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2))) * 2;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)iVar5 | (ushort)(*(int *)(gen_frame + 0x42)) >> 0xf;
                  uVar18 = uVar18 - 1;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)((uint)iVar4 >> 0x10);
                  (*(ushort *)(gen_frame + 0x46)) = (ushort)((uint)iVar5 >> 0x10);
                } while (0 < (short)uVar18);
                if ((short)uVar18 < 1) goto LAB_00c63b90;
              }
              if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) ||
                 (iVar5 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))),
                 iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)),(ushort)(*(int *)(gen_frame + 0x3e))),
                 (CONCAT22((ushort)(*(int *)(gen_frame + 0x3e)),CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) & 0x1ffff) == 0x18000)) {
                if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)),(ushort)(*(int *)(gen_frame + 0x3e))) == -1) {
                  iVar4 = 0;
                  if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) == -1) {
                    if ((*(ushort *)(gen_frame + 0x46)) == 0xffff) {
                      (*(ushort *)(gen_frame + 0x46)) = 0x8000;
                      uVar18 = uVar18 + 1;
                      iVar5 = 0;
                      iVar4 = 0;
                    }
                    else {
                      (*(ushort *)(gen_frame + 0x46)) = (*(ushort *)(gen_frame + 0x46)) + 1;
                      iVar5 = 0;
                      iVar4 = 0;
                    }
                  }
                  else {
                    iVar5 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) + 1;
                  }
                }
                else {
                  iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)),(ushort)(*(int *)(gen_frame + 0x3e))) + 1;
                  iVar5 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42)));
                }
              }
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = (ushort)((uint)iVar4 >> 0x10);
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) = (ushort)iVar4;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)((uint)iVar5 >> 0x10);
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)iVar5;
              if (0x7ffe < uVar18) goto LAB_00c63c53;
              *(ushort *)param_1 = (ushort)(*(int *)(gen_frame + 0x3e));
              *(uint *)((int)param_1 + 2) = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)));
              *(uint *)((int)param_1 + 6) = CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
              *(ushort *)((int)param_1 + 10) = uVar18 | uVar15;
              (*(int *)(gen_frame + 0x3e)) = iVar4;
              (*(int *)(gen_frame + 0x42)) = iVar5;
            }
            goto joined_r0x00c639d6;
          }
          param_1[2] = 0;
        }
        else {
LAB_00c63c53: ;
          param_1[2] = ((uVar15 == 0) - 1 & 0x80000000) + 0x7fff8000;
        }
        param_1[1] = 0;
        *param_1 = 0;
        (*(int *)(gen_frame + 0x3e)) = iVar4;
        (*(int *)(gen_frame + 0x42)) = iVar5;
      }
      goto joined_r0x00c639d6;
    }
  }
  (*(int *)(gen_frame + 0x32)) = iVar2;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)param_1;
}

/* ref: ___strgtold12_l */
uint F_00c63c8d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc63c8du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  char cVar10;
  ushort uVar11;
  int * piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  undefined2 uVar17;
  int iVar18;
  undefined * puVar19;
  char * pcVar20;
  char * pcVar21;
  undefined4 uVar22;
  ushort * puVar23;
  ushort uVar24;
  undefined4 uVar25;
  char * pcVar26;
  short * psVar27;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar18 = 0;
  pcVar26 = ((char *)(gen_frame + 0x4c));
  uVar9 = 0;
  (*(int *)(gen_frame + 0x4)) = 1;
  (*(uint *)(gen_frame + 0x20)) = 0;
  bVar6 = false;
  bVar8 = false;
  bVar7 = false;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_8 != (int *)0x0) {
    (*(char * PTR32 *)(gen_frame + 0x18)) = param_3;
    for (pcVar20 = param_3;
        (((cVar10 = *pcVar20, cVar10 == ' ' || (cVar10 == '\t')) || (cVar10 == '\n')) ||
        (cVar10 == '\r')); pcVar20 = pcVar20 + 1) {
    }
LAB_00c63d0a: ;
    cVar10 = *pcVar20;
    pcVar21 = pcVar20 + 1;
    switch((unsigned int)(uintptr_t)(iVar18)) {
    case 0: ;
      if ((byte)(cVar10 - 0x31U) < 9) {
LAB_00c63d25: ;
        iVar18 = 3;
        goto LAB_00c63d27;
      }
      if (cVar10 == *((char *)GEN_TOP(**(undefined4 * PTR32 *)(*param_8 + 0xbc)))) {
LAB_00c63d3c: ;
        iVar18 = 5;
        pcVar20 = pcVar21;
      }
      else if (cVar10 == '+') {
        uVar9 = 0;
        iVar18 = 2;
        pcVar20 = pcVar21;
      }
      else {
        if (cVar10 != '-') {
          if (cVar10 == '0') goto LAB_00c63d56;
          goto LAB_00c63ed2;
        }
        iVar18 = 2;
        uVar9 = 0x8000;
        pcVar20 = pcVar21;
      }
      goto LAB_00c63d0a;
    case 1: ;
      bVar6 = true;
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_00c63d25;
      if (cVar10 == *((char *)GEN_TOP(**(undefined4 * PTR32 *)(*param_8 + 0xbc)))) goto LAB_00c63d8b;
      if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_00c63db5;
      if (cVar10 == '0') goto LAB_00c63d56;
      goto LAB_00c63d9b;
    case 2: ;
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_00c63d25;
      if (cVar10 == *((char *)GEN_TOP(**(undefined4 * PTR32 *)(*param_8 + 0xbc)))) goto LAB_00c63d3c;
      pcVar20 = (*(char * PTR32 *)(gen_frame + 0x18));
      if (cVar10 != '0') goto LAB_00c63efb;
LAB_00c63d56: ;
      iVar18 = 1;
      pcVar20 = pcVar21;
      goto LAB_00c63d0a;
    case 3: ;
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if ((*(uint *)(gen_frame + 0x20)) < 0x19) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
          *pcVar26 = cVar10 + -0x30;
          pcVar26 = pcVar26 + 1;
        }
        else {
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
        }
        cVar10 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      }
      if (cVar10 != *((char *)GEN_TOP(**(undefined4 * PTR32 *)(*param_8 + 0xbc)))) goto LAB_00c63e23;
LAB_00c63d8b: ;
      bVar6 = true;
      iVar18 = 4;
      pcVar20 = pcVar21;
      goto LAB_00c63d0a;
    case 4: ;
      bVar8 = true;
      if ((*(uint *)(gen_frame + 0x20)) == 0) {
        while (cVar10 == '0') {
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
          cVar10 = *pcVar21;
          pcVar21 = pcVar21 + 1;
        }
      }
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if ((*(uint *)(gen_frame + 0x20)) < 0x19) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
          *pcVar26 = cVar10 + -0x30;
          pcVar26 = pcVar26 + 1;
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
        }
        cVar10 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      }
LAB_00c63e23: ;
      if ((cVar10 == '+') || (cVar10 == '-')) {
LAB_00c63db5: ;
        bVar6 = true;
        iVar18 = 0xb;
        pcVar20 = pcVar21 + -1;
      }
      else {
LAB_00c63d9b: ;
        bVar6 = true;
        if ((cVar10 < 'D') || (('E' < cVar10 && (1 < (byte)(cVar10 + 0x9cU))))) goto LAB_00c63ed2;
        iVar18 = 6;
        pcVar20 = pcVar21;
      }
      goto LAB_00c63d0a;
    case 5: ;
      bVar8 = true;
      pcVar20 = (*(char * PTR32 *)(gen_frame + 0x18));
      if ((byte)(cVar10 - 0x30U) < 10) {
        iVar18 = 4;
        goto LAB_00c63d27;
      }
      goto LAB_00c63efb;
    case 6: ;
      (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar20 + -1;
      if (8 < (byte)(cVar10 - 0x31U)) {
        if (cVar10 == '+') goto LAB_00c63eb9;
        if (cVar10 == '-') goto LAB_00c63ead;
LAB_00c63ea0: ;
        pcVar20 = (*(char * PTR32 *)(gen_frame + 0x18));
        if (cVar10 != '0') goto LAB_00c63efb;
        iVar18 = 8;
        pcVar20 = pcVar21;
        goto LAB_00c63d0a;
      }
      break;
    case 7: ;
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_00c63ea0;
      break;
    case 8: ;
      bVar7 = true;
      while (cVar10 == '0') {
        cVar10 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      }
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_00c63ed2;
      break;
    case 9: ;
      bVar7 = true;
      (*(int *)(gen_frame + 0x8)) = 0;
      goto LAB_00c63f5d;
    default: ;
      goto switchD_00c63d16_caseD_a;
    case 0xb: ;
      if (param_7 != 0) {
        (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar20;
        if (cVar10 == '+') {
LAB_00c63eb9: ;
          iVar18 = 7;
          pcVar20 = pcVar21;
        }
        else {
          if (cVar10 != '-') goto LAB_00c63efb;
LAB_00c63ead: ;
          (*(int *)(gen_frame + 0x4)) = -1;
          iVar18 = 7;
          pcVar20 = pcVar21;
        }
        goto LAB_00c63d0a;
      }
      iVar18 = 10;
      pcVar21 = pcVar20;
switchD_00c63d16_caseD_a: ;
      pcVar20 = pcVar21;
      if (iVar18 != 10) goto LAB_00c63d0a;
      goto LAB_00c63efb;
    }
    iVar18 = 9;
LAB_00c63d27: ;
    pcVar20 = pcVar21 + -1;
    goto LAB_00c63d0a;
  }
  piVar12 = F_00c51f85();
  *piVar12 = 0x16;
  F_00c4c305();
  iVar4 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
  uVar13 = 0;
  goto LAB_00c64328;
LAB_00c63f5d: ;
  if ((cVar10 < '0') || ('9' < cVar10)) goto LAB_00c63f78;
  (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) * 10 + -0x30 + (int)cVar10;
  if ((*(int *)(gen_frame + 0x8)) < 0x1451) {
    cVar10 = *pcVar21;
    pcVar21 = pcVar21 + 1;
    goto LAB_00c63f5d;
  }
  (*(int *)(gen_frame + 0x8)) = 0x1451;
LAB_00c63f78: ;
  while (('/' < cVar10 && (cVar10 < ':'))) {
    cVar10 = *pcVar21;
    pcVar21 = pcVar21 + 1;
  }
LAB_00c63ed2: ;
  pcVar20 = pcVar21 + -1;
LAB_00c63efb: ;
  *param_2 = pcVar20;
  if (bVar6) {
    if (0x18 < (*(uint *)(gen_frame + 0x20))) {
      if ('\x04' < (*(char *)(gen_frame + 0x63))) {
        (*(char *)(gen_frame + 0x63)) = (*(char *)(gen_frame + 0x63)) + '\x01';
      }
      pcVar26 = pcVar26 + -1;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      (*(uint *)(gen_frame + 0x20)) = 0x18;
    }
    if ((*(uint *)(gen_frame + 0x20)) == 0) goto LAB_00c64309;
    while (pcVar26 = pcVar26 + -1, *pcVar26 == '\0') {
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
    }
    F_00c7cf04(((char *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x20)),&(*(int *)(gen_frame + 0x30)));
    iVar5 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)),(undefined2)(*(int *)(gen_frame + 0x34)));
    iVar4 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
    iVar3 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46)));
    iVar2 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42)));
    uVar13 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)),(ushort)(*(uint *)(gen_frame + 0x38)));
    iVar18 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 2)),(undefined2)(*(int *)(gen_frame + 0x26)));
    iVar14 = (*(int *)(gen_frame + 0x8));
    if ((*(int *)(gen_frame + 0x4)) < 0) {
      iVar14 = -(*(int *)(gen_frame + 0x8));
    }
    (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)(iVar14 + (*(int *)(gen_frame + 0x1c)));
    if (!bVar7) {
      (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x18)) + param_5);
    }
    if (!bVar8) {
      (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x18)) - param_6);
    }
    if ((int)(*(char * PTR32 *)(gen_frame + 0x18)) < 0x1451) {
      if ((int)(*(char * PTR32 *)(gen_frame + 0x18)) < -0x1450) {
        (*(uint *)(gen_frame + 0x0)) = 1;
        goto LAB_00c64309;
      }
      puVar19 = &REFG(undefined, 0x134bea0);
      if ((*(char * PTR32 *)(gen_frame + 0x18)) != (char *)0x0) {
        if ((int)(*(char * PTR32 *)(gen_frame + 0x18)) < 0) {
          (*(char * PTR32 *)(gen_frame + 0x18)) = ((char *)GEN_TOP(-(int)(*(char * PTR32 *)(gen_frame + 0x18))));
          puVar19 = &REFG(undefined, 0x134c000);
        }
        if (param_4 == 0) {
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
        }
        pcVar26 = (*(char * PTR32 *)(gen_frame + 0x18));
        iVar18 = (*(int *)(gen_frame + 0x26));
        uVar13 = (*(uint *)(gen_frame + 0x38));
        iVar2 = (*(int *)(gen_frame + 0x42));
        iVar3 = (*(int *)(gen_frame + 0x46));
        iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
        iVar5 = (*(int *)(gen_frame + 0x34));
joined_r0x00c64005: ;
        if (pcVar26 != (char *)0x0) {
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = (ushort)(uVar13 >> 0x10);
          uVar1 = (int)((int)(uintptr_t)pcVar26) >> 3;
          puVar19 = puVar19 + 0x54;
          uVar15 = (uint)pcVar26 & 7;
          pcVar26 = (char *)uVar1;
          if (uVar15 != 0) {
            puVar23 = (ushort *)(puVar19 + uVar15 * 0xc);
            if (0x7fff < *puVar23) {
              uVar25 = *(undefined4 *)puVar23;
              (*(ushort *)(gen_frame + 0x24)) = (ushort)uVar25;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 0)) = (undefined2)((uint)uVar25 >> 0x10);
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 2)) = (undefined2)*(undefined4 *)(puVar23 + 2);
              (*(undefined2 *)(gen_frame + 0x2a)) = (undefined2)((uint)*(undefined4 *)(puVar23 + 2) >> 0x10);
              (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(puVar23 + 4);
              iVar18 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 2)),(undefined2)(*(int *)(gen_frame + 0x26))) + -1;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 0)) = (undefined2)iVar18;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 2)) = (undefined2)((uint)iVar18 >> 0x10);
              puVar23 = &(*(ushort *)(gen_frame + 0x24));
            }
            (*(int *)(gen_frame + 0x1c)) = 0;
            (*(byte *)(gen_frame + 0x40)) = 0;
            (*(undefined1 *)(gen_frame + 0x41)) = 0;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = 0;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = 0;
            iVar2 = 0;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 0)) = 0;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)) = 0;
            iVar3 = 0;
            (*(ushort *)(gen_frame + 0x4a)) = 0;
            uVar11 = puVar23[5] & 0x7fff;
            uVar24 = (puVar23[5] ^ (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2))) & 0x8000;
            uVar16 = uVar11 + ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) & 0x7fff);
            if (((((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) & 0x7fff) < 0x7fff) && (uVar11 < 0x7fff)) && (uVar16 < 0xbffe)) {
              if (0x3fbf < uVar16) {
                if ((((uVar13 & 0x7fff0000) == 0) &&
                    (uVar16 = uVar16 + 1, (uVar13 & 0x7fffffff) == 0)) &&
                   ((iVar5 == 0 && (iVar4 == 0)))) {
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = 0;
                  uVar13 = uVar13 & 0xffff;
                  iVar2 = 0;
                  iVar3 = 0;
                }
                else if (((uVar11 == 0) &&
                         (uVar16 = uVar16 + 1, (*(uint *)(puVar23 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar23 + 2) == 0 && (*(int *)puVar23 == 0)))) {
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = 0;
                  uVar13 = 0;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
                  iVar4 = 0;
                  iVar5 = 0;
                }
                else {
                  (*(int *)(gen_frame + 0x4)) = 0;
                  psVar27 = (short *)((int)&(*(int *)(gen_frame + 0x42)) + 2);
                  (*(int *)(gen_frame + 0x14)) = 5;
                  do {
                    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x14));
                    if (0 < (*(int *)(gen_frame + 0x14))) {
                      (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)((int)&(*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x4)) * 2);
                      (*(ushort * PTR32 *)(gen_frame + 0xc)) = puVar23 + 4;
                      do {
                        bVar6 = false;
                        uVar13 = *(uint *)(psVar27 + -2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10));
                        if ((uVar13 < *(uint *)(psVar27 + -2)) ||
                           (uVar13 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)))) {
                          bVar6 = true;
                        }
                        *(uint *)(psVar27 + -2) = uVar13;
                        if (bVar6) {
                          *psVar27 = *psVar27 + 1;
                        }
                        (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 1;
                        (*(ushort * PTR32 *)(gen_frame + 0xc)) = (*(ushort * PTR32 *)(gen_frame + 0xc)) + -1;
                        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
                      } while (0 < (*(int *)(gen_frame + 0x8)));
                    }
                    psVar27 = psVar27 + 1;
                    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
                    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + -1;
                  } while (0 < (*(int *)(gen_frame + 0x14)));
                  uVar16 = uVar16 + 0xc002;
                  if ((short)uVar16 < 1) {
LAB_00c641c1: ;
                    uVar16 = uVar16 - 1;
                    if ((short)uVar16 < 0) {
                      uVar13 = (uint)(ushort)-uVar16;
                      uVar16 = 0;
                      do {
                        if (((*(byte *)(gen_frame + 0x40)) & 1) != 0) {
                          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
                        }
                        iVar3 = CONCAT22((*(ushort *)(gen_frame + 0x4a)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)));
                        uVar1 = CONCAT22((ushort)(*(int *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
                        iVar2 = CONCAT22((ushort)(*(int *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
                        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x4a)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2))) >> 1);
                        (*(ushort *)(gen_frame + 0x4a)) = (*(ushort *)(gen_frame + 0x4a)) >> 1;
                        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 0)) =
                             (ushort)(*(int *)(gen_frame + 0x46)) >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
                        uVar15 = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) >> 1;
                        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) =
                             (ushort)(*(int *)(gen_frame + 0x42)) >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar13 = uVar13 - 1;
                        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)(uVar1 >> 1);
                        (*(byte *)(gen_frame + 0x40)) = (byte)uVar15;
                        (*(undefined1 *)(gen_frame + 0x41)) = (undefined1)(uVar15 >> 8);
                      } while (uVar13 != 0);
                      if ((*(int *)(gen_frame + 0x1c)) != 0) {
                        (*(byte *)(gen_frame + 0x40)) = (*(byte *)(gen_frame + 0x40)) | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar11 = (ushort)(*(int *)(gen_frame + 0x42));
                      if ((short)(*(ushort *)(gen_frame + 0x4a)) < 0) break;
                      iVar2 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) << 1;
                      (*(byte *)(gen_frame + 0x40)) = (byte)iVar2;
                      (*(undefined1 *)(gen_frame + 0x41)) = (undefined1)((uint)iVar2 >> 8);
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)((uint)iVar2 >> 0x10);
                      iVar2 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2))) * 2;
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)iVar2 | uVar11 >> 0xf;
                      iVar3 = (int)CONCAT22((*(ushort *)(gen_frame + 0x4a)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2))) * 2;
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)) = (ushort)iVar3 | (ushort)(*(int *)(gen_frame + 0x46)) >> 0xf;
                      uVar16 = uVar16 - 1;
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 0)) = (ushort)((uint)iVar2 >> 0x10);
                      (*(ushort *)(gen_frame + 0x4a)) = (ushort)((uint)iVar3 >> 0x10);
                    } while (0 < (short)uVar16);
                    if ((short)uVar16 < 1) goto LAB_00c641c1;
                  }
                  if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) ||
                     (iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46))),
                     iVar2 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))),
                     (CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) & 0x1ffff) == 0x18000
                     )) {
                    if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) == -1) {
                      iVar2 = 0;
                      if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46))) == -1) {
                        if ((*(ushort *)(gen_frame + 0x4a)) == 0xffff) {
                          (*(ushort *)(gen_frame + 0x4a)) = 0x8000;
                          uVar16 = uVar16 + 1;
                          iVar3 = 0;
                          iVar2 = 0;
                        }
                        else {
                          (*(ushort *)(gen_frame + 0x4a)) = (*(ushort *)(gen_frame + 0x4a)) + 1;
                          iVar3 = 0;
                          iVar2 = 0;
                        }
                      }
                      else {
                        iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46))) + 1;
                      }
                    }
                    else {
                      iVar2 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) + 1;
                      iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46)));
                    }
                  }
                  if (uVar16 < 0x7fff) {
                    (*(int *)(gen_frame + 0x30)) = iVar2;
                    (*(int *)(gen_frame + 0x34)) = iVar3;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = (*(ushort *)(gen_frame + 0x4a));
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = uVar16 | uVar24;
                    uVar13 = CONCAT22(uVar16 | uVar24,(*(ushort *)(gen_frame + 0x4a)));
                    iVar4 = iVar2;
                    iVar5 = iVar3;
                  }
                  else {
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
                    uVar13 = ((uVar24 == 0) - 1 & 0x80000000) + 0x7fff8000;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = (ushort)uVar13;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = (ushort)(uVar13 >> 0x10);
                    iVar4 = 0;
                    iVar5 = 0;
                  }
                }
                goto joined_r0x00c64005;
              }
              uVar13 = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
            }
            else {
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
              uVar13 = ((uVar24 == 0) - 1 & 0x80000000) + 0x7fff8000;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
            }
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = (ushort)uVar13;
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = (ushort)(uVar13 >> 0x10);
            iVar2 = 0;
            iVar3 = 0;
            iVar4 = 0;
            iVar5 = 0;
          }
          goto joined_r0x00c64005;
        }
      }
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = (undefined2)((uint)iVar5 >> 0x10);
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = (undefined2)iVar5;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = (undefined2)((uint)iVar4 >> 0x10);
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = (undefined2)iVar4;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = (ushort)(uVar13 >> 0x10);
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = (ushort)uVar13;
      uVar25 = CONCAT22((undefined2)(*(int *)(gen_frame + 0x34)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)));
      uVar22 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x38)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)));
      uVar17 = (undefined2)(*(int *)(gen_frame + 0x30));
      uVar16 = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2));
      (*(int *)(gen_frame + 0x26)) = iVar18;
      (*(uint *)(gen_frame + 0x38)) = uVar13;
      (*(int *)(gen_frame + 0x42)) = iVar2;
      (*(int *)(gen_frame + 0x46)) = iVar3;
      (*(int *)(gen_frame + 0x34)) = iVar5;
    }
    else {
      uVar25 = 0;
      uVar16 = 0x7fff;
      uVar22 = 0x80000000;
      uVar17 = 0;
      (*(uint *)(gen_frame + 0x0)) = 2;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = 4;
LAB_00c64309: ;
    iVar4 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
    uVar17 = 0;
    uVar16 = 0;
    uVar22 = 0;
    uVar25 = 0;
  }
  *param_1 = uVar17;
  param_1[5] = uVar16 | uVar9;
  *(undefined4 *)(param_1 + 1) = uVar25;
  *(undefined4 *)(param_1 + 3) = uVar22;
  uVar13 = (*(uint *)(gen_frame + 0x0));
LAB_00c64328: ;
  (*(int *)(gen_frame + 0x30)) = iVar4;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar13;
}

/* ref: ___STRINGTOLD_L */
uint F_00c64369(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc64369u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * pld = (undefined *)(uintptr_t)gen_a0;
  char * PTR32 * p_end_ptr = (char * PTR32 *)(uintptr_t)gen_a1;
  char * str = (char *)(uintptr_t)gen_a2;
  int mult12 = (int)gen_a3;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 IVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = F_00c63c8d(((undefined1 *)(gen_frame + 0xc)),p_end_ptr,str,mult12,0,0,0,_Locale);
  IVar2 = F_00c7cdb6(((undefined1 *)(gen_frame + 0xc)),pld);
  if (IVar2 == (1)) {
    uVar1 = uVar1 | 2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: __aulldvrm */
ulonglong F_00c643d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc643d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar8 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar4 = param_3;
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar4 = (uint)(CONCAT14(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar7 & 1;
      uVar7 = uVar7 >> 1;
      uVar8 = (uint)(CONCAT14(uVar3 != 0,uVar8) >> 1);
    } while (uVar6 != 0);
    uVar1 = CONCAT44(uVar7,uVar8) / (ulonglong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar4 + iVar5 * param_4;
    if (((CARRY4(uVar4,iVar5 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  return CONCAT44(uVar4,iVar5);
}

/* ref: __mbsnbicoll_l */
int F_00c64465(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc64465u, gen_a0, gen_a1, gen_a2, gen_a3);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
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
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 8))) == 0) {
      iVar2 = F_00c7d0e8((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = F_00c6fdae((undefined *)((byte *)(gen_frame + 0xc)),*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 0xc))),0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 4))));
      if (iVar2 == 0) goto LAB_00c64520;
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
LAB_00c64520: ;
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

/* ref: __mbsnbicoll */
int F_00c64543(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc64543u, gen_a0, gen_a1, gen_a2, 0u);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  int iVar1;
  
  iVar1 = F_00c64465(_Str1,_Str2,_MaxCount,(undefined *)0x0);
  return iVar1;
}

/* ref: ___wtomb_environ */
int F_00c6455d(void)
{
  GEN_ENTER(0xc6455du, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  gen_size32 _Count;
  char * pcVar1;
  int iVar2;
  int * piVar3;
  
  (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x0;
  iVar2 = *REFG(int * PTR32, 0x15d6848);
  piVar3 = REFG(int * PTR32, 0x15d6848);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    _Count = gen_imp_WideCharToMultiByte(0,0,iVar2,0xffffffff,0,0,0,0);
    if (_Count == 0) {
      return -1;
    }
    pcVar1 = F_00c54c73(_Count,1);
    (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
    if (pcVar1 == (char *)0x0) {
      return -1;
    }
    iVar2 = gen_imp_WideCharToMultiByte(0,0,*piVar3,0xffffffff,pcVar1,_Count,0,0);
    if (iVar2 == 0) break;
    iVar2 = F_00c7d2ad(&(*(char * PTR32 *)(gen_frame + 0x8)),0);
    if ((iVar2 < 0) && ((*(char * PTR32 *)(gen_frame + 0x8)) != (char *)0x0)) {
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x8)));
      (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = *piVar3;
  }
  F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x8)));
  return -1;
}

/* ref: _calloc */
undefined * F_00c645f4(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc645f4u, gen_a0, gen_a1, 0u, 0u);
  gen_size32 _Count = (gen_size32)gen_a0;
  gen_size32 _Size = (gen_size32)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int * piVar2;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  pvVar1 = (undefined *)F_00c73804(_Count,_Size,&(*(int *)(gen_frame + 0x8)));
  if ((pvVar1 == (undefined *)0x0) && ((*(int *)(gen_frame + 0x8)) != 0)) {
    piVar2 = F_00c51f85();
    if (piVar2 != (int *)0x0) {
      piVar2 = F_00c51f85();
      *piVar2 = (*(int *)(gen_frame + 0x8));
    }
  }
  return pvVar1;
}

/* ref: _strnlen */
gen_size32 F_00c64634(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc64634u, gen_a0, gen_a1, 0u, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = 0;
  pcVar2 = _Str;
  if (_MaxCount != 0) {
    do {
      if (*pcVar2 == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar1 < _MaxCount);
  }
  return uVar1;
}

/* ref: FUN_00c64651 */
uint F_00c64651(unsigned int gen_a0)
{
  GEN_ENTER(0xc64651u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00c650e4();
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_00c64662 */
uint F_00c64662(unsigned int gen_a0)
{
  GEN_ENTER(0xc64662u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00c650ea();
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_00c64673 */
uint F_00c64673(unsigned int gen_a0)
{
  GEN_ENTER(0xc64673u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00c650f0();
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_00c64684 */
uint F_00c64684(void)
{
  GEN_ENTER(0xc64684u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  long lVar2;
  int * piVar3;
  int eVar4;
  UINT UVar5;
  char * _Str1;
  int iVar6;
  gen_size32 sVar7;
  DWORD DVar8;
  long lVar9;
  char * pcVar10;
  int * unaff_EDI = 0;
  
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x2c;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = &REFG(undefined, 0x12f65f0);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xc64690;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  ((long *)(gen_frame + 0x20))[0] = 0;
  (*(long *)(gen_frame + 0x18)) = 0;
  (*(long *)(gen_frame + 0x14)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  F_00c5aa4f(7);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  piVar3 = (int *)F_00c650f6();
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
  eVar4 = F_00c65025(((long *)(gen_frame + 0x20)));
  if (((eVar4 != 0) || (eVar4 = F_00c64fcb(&(*(long *)(gen_frame + 0x18))), eVar4 != 0)) ||
     (eVar4 = F_00c64ff8(&(*(long *)(gen_frame + 0x14))), eVar4 != 0)) goto LAB_00c64788;
  UVar5 = F_00c54b81();
  (*(UINT *)(gen_frame + 0x8)) = UVar5;
  REFG(undefined4, 0x15d759c) = 0;
  unaff_EDI = (int *)0xffffffff;
  REFG(undefined4, 0x134bb5c) = 0xffffffff;
  REFG(undefined4, 0x134bb50) = 0xffffffff;
  _Str1 = F_00c4b3f6("TZ");
  (*(char * PTR32 *)(gen_frame + 0x0)) = _Str1;
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (REFG(char * PTR32, 0x15d75a0) != (char *)0x0) {
      F_00c4c68f(REFG(char * PTR32, 0x15d75a0));
      REFG(char * PTR32, 0x15d75a0) = (char *)0x0;
    }
    DVar8 = gen_imp_GetTimeZoneInformation((GEN_LPANY)&REFG(int, 0x15d74f0));
    if (DVar8 != 0xffffffff) {
      REFG(undefined4, 0x15d759c) = 1;
      ((long *)(gen_frame + 0x20))[0] = REFG(int, 0x15d74f0) * 0x3c;
      if (REFG(short, 0x15d7536) != 0) {
        ((long *)(gen_frame + 0x20))[0] = REFG(int, 0x15d74f0) * 0x3c + REFG(int, 0x15d7544) * 0x3c;
      }
      if ((REFG(short, 0x15d758a) == 0) || (REFG(int, 0x15d7598) == 0)) {
        (*(long *)(gen_frame + 0x18)) = 0;
        (*(long *)(gen_frame + 0x14)) = 0;
      }
      else {
        (*(long *)(gen_frame + 0x18)) = 1;
        (*(long *)(gen_frame + 0x14)) = (REFG(int, 0x15d7598) - REFG(int, 0x15d7544)) * 0x3c;
      }
      iVar6 = gen_imp_WideCharToMultiByte((*(UINT *)(gen_frame + 0x8)),0,&REFG(undefined, 0x15d74f4),0xffffffff,*(*(int * PTR32 *)(gen_frame + 0x1c)),0x3f,0,&(*(int *)(gen_frame + 0xc)));
      if ((iVar6 == 0) || ((*(int *)(gen_frame + 0xc)) != 0)) {
        *(undefined1 *)*(*(int * PTR32 *)(gen_frame + 0x1c)) = 0;
      }
      else {
        *(undefined1 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x3f) = 0;
      }
      iVar6 = gen_imp_WideCharToMultiByte((*(UINT *)(gen_frame + 0x8)),0,&REFG(undefined, 0x15d7548),0xffffffff,(*(int * PTR32 *)(gen_frame + 0x1c))[1],0x3f,0,&(*(int *)(gen_frame + 0xc)));
      if ((iVar6 == 0) || ((*(int *)(gen_frame + 0xc)) != 0)) {
        *(undefined1 *)(*(int * PTR32 *)(gen_frame + 0x1c))[1] = 0;
      }
      else {
        *(undefined1 *)((*(int * PTR32 *)(gen_frame + 0x1c))[1] + 0x3f) = 0;
      }
    }
LAB_00c6487d: ;
    (*(int *)(gen_frame + 0x10)) = 1;
  }
  else {
    if (REFG(char * PTR32, 0x15d75a0) != (char *)0x0) {
      iVar6 = F_00c556e0(_Str1,REFG(char * PTR32, 0x15d75a0));
      if (iVar6 == 0) goto LAB_00c6487d;
      if (REFG(char * PTR32, 0x15d75a0) != (char *)0x0) {
        F_00c4c68f(REFG(char * PTR32, 0x15d75a0));
      }
    }
    sVar7 = F_00c552f0(_Str1);
    REFG(char * PTR32, 0x15d75a0) = F_00c54c2e(sVar7 + 1);
    if (REFG(char * PTR32, 0x15d75a0) == (char *)0x0) goto LAB_00c6487d;
    pcVar10 = _Str1;
    sVar7 = F_00c552f0(_Str1);
    eVar4 = F_00c49908(REFG(char * PTR32, 0x15d75a0),sVar7 + 1,pcVar10);
    if (eVar4 != 0) goto LAB_00c64788;
  }
  lVar9 = ((long *)(gen_frame + 0x20))[0];
  piVar3 = (int *)F_00c650f0();
  lVar2 = (*(long *)(gen_frame + 0x18));
  *piVar3 = lVar9;
  piVar3 = (int *)F_00c650e4();
  lVar9 = (*(long *)(gen_frame + 0x14));
  *piVar3 = lVar2;
  piVar3 = (int *)F_00c650ea();
  *piVar3 = lVar9;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0xfffffffe;
  piVar3 = (int *)F_00c64907();
  unaff_EDI = (*(int * PTR32 *)(gen_frame + 0x1c));
  if ((*(int *)(gen_frame + 0x10)) == 0) {
    eVar4 = F_00c4d9ef(*(*(int * PTR32 *)(gen_frame + 0x1c)),0x40,_Str1,3);
    if (eVar4 != 0) {
LAB_00c64788: ;
                    
      F_00c4c299(unaff_EDI,0,0,0,0,0);
    }
    pcVar10 = _Str1 + 3;
    if (*pcVar10 == '-') {
      (*(int *)(gen_frame + 0x4)) = 1;
      pcVar10 = _Str1 + 4;
    }
    lVar9 = F_00c4c71d(pcVar10);
    ((long *)(gen_frame + 0x20))[0] = lVar9 * 0xe10;
    for (; (cVar1 = *pcVar10, cVar1 == '+' || (('/' < cVar1 && (cVar1 < ':'))));
        pcVar10 = pcVar10 + 1) {
    }
    if (*pcVar10 == ':') {
      pcVar10 = pcVar10 + 1;
      lVar9 = F_00c4c71d(pcVar10);
      ((long *)(gen_frame + 0x20))[0] = ((long *)(gen_frame + 0x20))[0] + lVar9 * 0x3c;
      for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
      }
      if (*pcVar10 == ':') {
        pcVar10 = pcVar10 + 1;
        lVar9 = F_00c4c71d(pcVar10);
        ((long *)(gen_frame + 0x20))[0] = ((long *)(gen_frame + 0x20))[0] + lVar9;
        for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
        }
      }
    }
    if ((*(int *)(gen_frame + 0x4)) != 0) {
      ((long *)(gen_frame + 0x20))[0] = -((long *)(gen_frame + 0x20))[0];
    }
    cVar1 = *pcVar10;
    (*(long *)(gen_frame + 0x18)) = (int)cVar1;
    if (cVar1 == 0) {
      *(undefined1 *)unaff_EDI[1] = 0;
    }
    else {
      eVar4 = F_00c4d9ef(unaff_EDI[1],0x40,pcVar10,3);
      if (eVar4 != 0) goto LAB_00c64788;
    }
    lVar2 = ((long *)(gen_frame + 0x20))[0];
    piVar3 = (int *)F_00c650f0();
    lVar9 = (*(long *)(gen_frame + 0x18));
    *piVar3 = lVar2;
    piVar3 = (int *)F_00c650e4();
    *piVar3 = lVar9;
  }
  return (uint)piVar3;
}

/* ref: FUN_00c64902 */
uint F_00c64902(unsigned int gen_a0)
{
  GEN_ENTER(0xc64902u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c64907 */
uint F_00c64907(void)
{
  GEN_ENTER(0xc64907u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c64997 */
int F_00c64997(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xc64997u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  int param_10 = (int)gen_a9;
  int param_11 = (int)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  int eVar3;
  int iVar4;
  undefined * puVar5;
  undefined * puVar6;
  bool bVar7;
  
  (*(long *)(gen_frame + 0x8)) = 0;
  if (param_4 == 1) {
    uVar1 = param_5 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_5 % 100 != 0)) || ((int)(param_5 + 0x76c) % 400 == 0)) {
      puVar5 = (&REFG(undefined * PTR32, 0x134bbfc))[in_eax];
    }
    else {
      puVar5 = *(undefined * PTR32 *)(&REFG(undefined, 0x134bc30) + in_eax * 4);
    }
    puVar6 = puVar5 + 1;
    iVar2 = (param_6 * 7 -
            (int)(puVar6 + param_5 * 0x16d + -0x63db +
                           ((int)(param_5 + 299) / 400 - (int)(param_5 - 1) / 100) +
                           ((int)((param_5 - 1) + ((int)(param_5 - 1) >> 0x1f & 3U)) >> 2)) % 7) +
            param_7;
    if ((int)(puVar6 + param_5 * 0x16d + -0x63db +
                       ((int)(param_5 + 299) / 400 - (int)(param_5 - 1) / 100) +
                       ((int)((param_5 - 1) + ((int)(param_5 - 1) >> 0x1f & 3U)) >> 2)) % 7 <=
        param_7) {
      puVar6 = puVar5 + -6;
    }
    puVar6 = puVar6 + iVar2;
    if (param_6 == 5) {
      if (((uVar1 == 0) && ((int)param_5 % 100 != 0)) || ((int)(param_5 + 0x76c) % 400 == 0)) {
        iVar2 = (&REFG(undefined4, 0x134bc00))[in_eax];
      }
      else {
        iVar2 = (&REFG(undefined4, 0x134bc34))[in_eax];
      }
      if (iVar2 < (int)puVar6) {
        puVar6 = puVar6 + -7;
      }
    }
  }
  else {
    uVar1 = param_5 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar7) && (iVar2 = (int)param_5 / 100, (int)param_5 % 100 != 0)) ||
       (iVar2 = (int)(param_5 + 0x76c) / 400, (int)(param_5 + 0x76c) % 400 == 0)) {
      puVar6 = (&REFG(undefined * PTR32, 0x134bbfc))[in_eax];
    }
    else {
      puVar6 = *(undefined * PTR32 *)(&REFG(undefined, 0x134bc30) + in_eax * 4);
    }
    puVar6 = puVar6 + param_8;
  }
  uVar1 = param_5;
  iVar4 = ((in_ecx * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  if (param_3 == 1) {
    REFG(undefined4, 0x134bb50) = param_5;
    REFG(undefined * PTR32, 0x134bb54) = puVar6;
    REFG(int, 0x134bb58) = iVar4;
  }
  else {
    REFG(undefined * PTR32, 0x134bb60) = puVar6;
    REFG(int, 0x134bb64) = iVar4;
    eVar3 = F_00c64ff8(&(*(long *)(gen_frame + 0x8)));
    if (eVar3 != 0) {
                    
      F_00c4c299(param_5,0,0,0,0,0);
    }
    iVar2 = (*(long *)(gen_frame + 0x8)) * 1000;
    REFG(int, 0x134bb64) = REFG(int, 0x134bb64) + iVar2;
    REFG(undefined4, 0x134bb5c) = uVar1;
    if (REFG(int, 0x134bb64) < 0) {
      REFG(int, 0x134bb64) = REFG(int, 0x134bb64) + 86400000;
      REFG(undefined * PTR32, 0x134bb60) = REFG(undefined * PTR32, 0x134bb60) + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < REFG(int, 0x134bb64)) {
        REFG(int, 0x134bb64) = REFG(int, 0x134bb64) + -86400000;
        REFG(undefined * PTR32, 0x134bb60) = REFG(undefined * PTR32, 0x134bb60) + 1;
      }
    }
  }
  return iVar2;
}

/* ref: FUN_00c64b8e */
uint F_00c64b8e(unsigned int gen_a0)
{
  GEN_ENTER(0xc64b8eu, gen_a0, 0u, 0u, 0u);
  int * in_edi = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  bool bVar1;
  int eVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_eax;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  (*(long *)(gen_frame + 0x8)) = 0;
  eVar2 = F_00c64fcb(&(*(long *)(gen_frame + 0x8)));
  if (eVar2 != 0) {
                    
    F_00c4c299(in_edi,0,0,0,0,0);
  }
  if ((*(long *)(gen_frame + 0x8)) == 0) {
    return 0;
  }
  iVar7 = in_edi[5];
  if ((iVar7 != REFG(int, 0x134bb50)) || (iVar7 != REFG(int, 0x134bb5c))) {
    if (REFG(int, 0x15d759c) == 0) {
      in_eax = 3;
      uVar6 = 2;
      (*(undefined4 *)(gen_frame + 0x0)) = 0xb;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      if (iVar7 < 0x6b) {
        in_eax = 4;
        uVar6 = 1;
        (*(undefined4 *)(gen_frame + 0x0)) = 10;
        (*(undefined4 *)(gen_frame + 0x4)) = 5;
      }
      F_00c64997(in_eax,2,1,1,iVar7,uVar6,0,0,0,0,0);
      F_00c64997((*(undefined4 *)(gen_frame + 0x0)),2,0,1,in_edi[5],(*(undefined4 *)(gen_frame + 0x4)),0,0,0,0,0);
    }
    else {
      if (REFG(short, 0x15d7588) != 0) {
        uVar8 = (uint)REFG(undefined2, 0x15d758e);
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)REFG(undefined2, 0x15d758c);
        uVar8 = 0;
        uVar4 = (uint)REFG(undefined2, 0x15d758e);
      }
      F_00c64997((uint)REFG(undefined2, 0x15d758a),(uint)REFG(undefined2, 0x15d7590),1,(uint)(REFG(short, 0x15d7588) == 0),iVar7,uVar4,
                   uVar3,uVar8,(uint)REFG(undefined2, 0x15d7592),(uint)REFG(undefined2, 0x15d7594),(uint)REFG(undefined2, 0x15d7596));
      if (REFG(short, 0x15d7534) != 0) {
        uVar8 = (uint)REFG(undefined2, 0x15d753a);
        uVar3 = 0;
        uVar4 = 0;
        iVar7 = in_edi[5];
      }
      else {
        uVar3 = (uint)REFG(undefined2, 0x15d7538);
        uVar8 = 0;
        uVar4 = (uint)REFG(undefined2, 0x15d753a);
        iVar7 = in_edi[5];
      }
      F_00c64997((uint)REFG(undefined2, 0x15d7536),(uint)REFG(undefined2, 0x15d753c),0,(uint)(REFG(short, 0x15d7534) == 0),iVar7,uVar4,
                   uVar3,uVar8,(uint)REFG(undefined2, 0x15d753e),(uint)REFG(undefined2, 0x15d7540),(uint)REFG(undefined2, 0x15d7542));
    }
  }
  iVar7 = in_edi[7];
  if (REFG(int, 0x134bb54) < REFG(int, 0x134bb60)) {
    if ((iVar7 < REFG(int, 0x134bb54)) || (REFG(int, 0x134bb60) < iVar7)) {
      return 0;
    }
    if ((REFG(int, 0x134bb54) < iVar7) && (iVar7 < REFG(int, 0x134bb60))) {
      return 1;
    }
  }
  else {
    if (iVar7 < REFG(int, 0x134bb60)) {
      return 1;
    }
    if (REFG(int, 0x134bb54) < iVar7) {
      return 1;
    }
    if ((REFG(int, 0x134bb60) < iVar7) && (iVar7 < REFG(int, 0x134bb54))) {
      return 0;
    }
  }
  iVar5 = ((in_edi[2] * 0x3c + in_edi[1]) * 0x3c + *in_edi) * 1000;
  if (iVar7 == REFG(int, 0x134bb54)) {
    bVar1 = REFG(int, 0x134bb58) <= iVar5;
  }
  else {
    bVar1 = iVar5 < REFG(int, 0x134bb64);
  }
  return (uint)bVar1;
}

/* ref: ___tzset */
unsigned int F_00c64d65(void)
{
  GEN_ENTER(0xc64d65u, 0u, 0u, 0u, 0u);
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6610);
  uStack_c = 0xc64d71;
  if (REFG(int, 0x15d75a4) == 0) {
    F_00c5aa4f(6);
    local_8 = (undefined *)0x0;
    if (REFG(int, 0x15d75a4) == 0) {
      F_00c64684();
      REFG(int, 0x15d75a4) = REFG(int, 0x15d75a4) + 1;
    }
    local_8 = (undefined *)0xfffffffe;
    F_00c64dab();
  }
  return 0;
}

/* ref: FUN_00c64dab */
uint F_00c64dab(void)
{
  GEN_ENTER(0xc64dabu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(6);
  return uVar1;
}

/* ref: FUN_00c64de3 */
uint F_00c64de3(void)
{
  GEN_ENTER(0xc64de3u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(6);
  return uVar1;
}

/* ref: __isindst */
int F_00c64dec(unsigned int gen_a0)
{
  GEN_ENTER(0xc64decu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6650);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc64df8;
  F_00c5aa4f(6);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  uVar1 = F_00c64b8e((*(undefined * PTR32 *)&gen_args[0]));
  (*(uint *)(gen_frame + 0x0)) = uVar1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c64e24();
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c64e24 */
uint F_00c64e24(void)
{
  GEN_ENTER(0xc64e24u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(6);
  return uVar1;
}

/* ref: __gmtime32_s */
int F_00c64e2d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc64e2du, gen_a0, gen_a1, 0u, 0u);
  undefined * _Tm = (undefined *)(uintptr_t)gen_a0;
  int * _Time = (int *)(uintptr_t)gen_a1;
  bool bVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  
  bVar1 = false;
  if (_Tm == (undefined *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    F_00c48350(_Tm,0xff,0x24);
    if (_Time == (int *)0x0) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
    }
    else {
      iVar5 = *_Time;
      if (-0xa8c1 < iVar5) {
        iVar3 = iVar5 % 0x7861f80;
        iVar5 = (iVar5 / 0x7861f80) * 4;
        iVar6 = iVar5 + 0x46;
        iVar4 = iVar3;
        if (0x1e1337f < iVar3) {
          iVar4 = iVar3 + -0x1e13380;
          iVar6 = iVar5 + 0x47;
          if (0x1e1337f < iVar4) {
            iVar4 = iVar3 + -0x3c26700;
            iVar6 = iVar5 + 0x48;
            if (iVar4 < 0x1e28500) {
              bVar1 = true;
            }
            else {
              iVar6 = iVar5 + 0x49;
              iVar4 = iVar3 + -0x5a4ec00;
            }
          }
        }
        (*(int *)(((char *)(_Tm) + 20))) = iVar6;
        puVar7 = &REFG(undefined4, 0x134bc00);
        (*(int *)(((char *)(_Tm) + 28))) = iVar4 / 0x15180;
        if (!bVar1) {
          puVar7 = &REFG(undefined4, 0x134bc34);
        }
        iVar6 = 1;
        iVar5 = puVar7[1];
        while (iVar5 < (*(int *)(((char *)(_Tm) + 28)))) {
          iVar6 = iVar6 + 1;
          iVar5 = puVar7[iVar6];
        }
        (*(int *)(((char *)(_Tm) + 16))) = iVar6 + -1;
        (*(int *)(((char *)(_Tm) + 12))) = (*(int *)(((char *)(_Tm) + 28))) - puVar7[iVar6 + -1];
        iVar5 = *_Time;
        (*(int *)(((char *)(_Tm) + 32))) = 0;
        (*(int *)(((char *)(_Tm) + 24))) = (iVar5 / 0x15180 + 4) % 7;
        (*(int *)(((char *)(_Tm) + 8))) = (iVar4 % 0x15180) / 0xe10;
        iVar5 = (iVar4 % 0x15180) % 0xe10;
        (*(int *)(((char *)(_Tm) + 4))) = iVar5 / 0x3c;
        (*(int *)((char *)(_Tm))) = iVar5 % 0x3c;
        return 0;
      }
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
    }
  }
  return 0x16;
}

/* ref: ___getgmtimebuf */
undefined * F_00c64f6d(void)
{
  GEN_ENTER(0xc64f6du, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  int * piVar2;
  undefined * pvVar3;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == (undefined *)0x0) {
LAB_00c64f7b: ;
    piVar2 = F_00c51f85();
    *piVar2 = 0xc;
    return (undefined *)0x0;
  }
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 68))) == (undefined *)0x0) {
    pvVar3 = F_00c54c2e(0x24);
    (*(void * PTR32 *)(((char *)(p_Var1) + 68))) = pvVar3;
    if (pvVar3 == (undefined *)0x0) goto LAB_00c64f7b;
  }
  return (*(void * PTR32 *)(((char *)(p_Var1) + 68)));
}

/* ref: __gmtime32 */
undefined * F_00c64fa4(unsigned int gen_a0)
{
  GEN_ENTER(0xc64fa4u, gen_a0, 0u, 0u, 0u);
  int * _Time = (int *)(uintptr_t)gen_a0;
  undefined * _Tm;
  int eVar1;
  undefined * ptVar2;
  
  _Tm = F_00c64f6d();
  ptVar2 = (undefined *)0x0;
  if (_Tm != (undefined *)0x0) {
    eVar1 = F_00c64e2d(_Tm,_Time);
    ptVar2 = ((undefined *)GEN_TOP((~-(uint)(eVar1 != 0) & (uint)_Tm)));
  }
  return ptVar2;
}

/* ref: FID_conflict___get_dstbias_00c64fcb */
int F_00c64fcb(unsigned int gen_a0)
{
  GEN_ENTER(0xc64fcbu, gen_a0, 0u, 0u, 0u);
  long * _Timezone = (long *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_Timezone = REFG(int, 0x134bb6c);
  return 0;
}

/* ref: FID_conflict___get_dstbias_00c64ff8 */
int F_00c64ff8(unsigned int gen_a0)
{
  GEN_ENTER(0xc64ff8u, gen_a0, 0u, 0u, 0u);
  long * _Timezone = (long *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_Timezone = REFG(int, 0x134bb70);
  return 0;
}

/* ref: FID_conflict___get_dstbias_00c65025 */
int F_00c65025(unsigned int gen_a0)
{
  GEN_ENTER(0xc65025u, gen_a0, 0u, 0u, 0u);
  long * _Timezone = (long *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_Timezone = REFG(int, 0x134bb68);
  return 0;
}

/* ref: __get_tzname */
int F_00c65052(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc65052u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int * piVar1;
  gen_size32 sVar2;
  int eVar3;
  
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 != 0) goto LAB_00c6509a;
  }
  else if (param_3 == 0) {
LAB_00c6509a: ;
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == (uint *)0x0) || ((param_4 != 0 && (param_4 != 1)))) {
    piVar1 = F_00c51f85();
    eVar3 = 0x16;
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    sVar2 = F_00c552f0((&REFG(undefined * PTR32, 0x134bbf8))[param_4]);
    *param_1 = sVar2 + 1;
    if (param_2 == (undefined1 *)0x0) {
      eVar3 = 0;
    }
    else if (param_3 < sVar2 + 1) {
      eVar3 = 0x22;
    }
    else {
      eVar3 = F_00c49908(param_2,param_3,(&REFG(undefined * PTR32, 0x134bbf8))[param_4]);
    }
  }
  return eVar3;
}

/* ref: FUN_00c650e4 */
uint F_00c650e4(void)
{
  GEN_ENTER(0xc650e4u, 0u, 0u, 0u, 0u);
  return 0x134bb6c;
}

/* ref: FUN_00c650ea */
uint F_00c650ea(void)
{
  GEN_ENTER(0xc650eau, 0u, 0u, 0u, 0u);
  return 0x134bb70;
}

/* ref: FUN_00c650f0 */
uint F_00c650f0(void)
{
  GEN_ENTER(0xc650f0u, 0u, 0u, 0u, 0u);
  return 0x134bb68;
}

/* ref: FUN_00c650f6 */
uint F_00c650f6(void)
{
  GEN_ENTER(0xc650f6u, 0u, 0u, 0u, 0u);
  return 0x134bbf8;
}

/* ref: __lseek_nolock */
long F_00c650fc(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc650fcu, gen_a0, gen_a1, gen_a2, 0u);
  int _FileHandle = (int)gen_a0;
  long _Offset = (long)gen_a1;
  int _Origin = (int)gen_a2;
  byte * pbVar1;
  HANDLE hFile;
  int * piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)F_00c6d7ae(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    DVar3 = 0xffffffff;
  }
  else {
    DVar3 = gen_imp_SetFilePointer(hFile,_Offset,(GEN_LPANY)0x0,_Origin);
    if (DVar3 == 0xffffffff) {
      uVar4 = gen_imp_GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40)));
      *pbVar1 = *pbVar1 & 0xfd;
    }
    else {
      F_00c51fab(uVar4);
      DVar3 = 0xffffffff;
    }
  }
  return DVar3;
}

/* ref: __lseek */
long F_00c65171(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc65171u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int _FileHandle_00;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6670);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc6517d;
  if ((*(int *)&gen_args[0]) == -2) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
  }
  else {
    if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
      iVar3 = (*(int *)&gen_args[0]) >> 5;
      iVar5 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar5))) & 1) != 0) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar5))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(long *)(gen_frame + 0x0)) = -1;
        }
        else {
          lVar4 = F_00c650fc(_FileHandle_00,(*(long *)&gen_args[1]),(*(int *)&gen_args[2]));
          (*(long *)(gen_frame + 0x0)) = lVar4;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c6523d(_FileHandle_00);
        return (*(long *)(gen_frame + 0x0));
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  return -1;
}

/* ref: FUN_00c6523a */
unsigned int F_00c6523a(unsigned int gen_a0)
{
  GEN_ENTER(0xc6523au, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c6523d */
unsigned int F_00c6523d(unsigned int gen_a0)
{
  GEN_ENTER(0xc6523du, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __wopenfile */
undefined * F_00c65245(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc65245u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t wVar5;
  int * piVar6;
  int iVar7;
  int eVar8;
  uint _OpenFlag;
  wchar_t * pwVar9;
  wchar_t * pwVar10;
  uint local_8;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  for (pwVar10 = (*(wchar_t * PTR32 *)&gen_args[1]); *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
  }
  wVar5 = *pwVar10;
  if (wVar5 == L'a') {
    _OpenFlag = 0x109;
LAB_00c652ad: ;
    local_8 = REFG(undefined4, 0x15d75b4) | 2;
  }
  else {
    if (wVar5 != L'r') {
      if (wVar5 != L'w') {
        piVar6 = F_00c51f85();
        *piVar6 = 0x16;
        F_00c4c305();
        return (undefined *)0x0;
      }
      _OpenFlag = 0x301;
      goto LAB_00c652ad;
    }
    _OpenFlag = 0;
    local_8 = REFG(undefined4, 0x15d75b4) | 1;
  }
  pwVar10 = pwVar10 + 1;
  wVar5 = *pwVar10;
  bVar1 = true;
  if (wVar5 != L'\0') {
    do {
      if (!bVar1) break;
      if ((ushort)wVar5 < 0x54) {
        if (wVar5 == L'S') {
          if (bVar2) goto LAB_00c653db;
          bVar2 = true;
          _OpenFlag = _OpenFlag | 0x20;
        }
        else if (wVar5 != L' ') {
          if (wVar5 == L'+') {
            if ((_OpenFlag & 2) != 0) goto LAB_00c653db;
            _OpenFlag = _OpenFlag & 0xfffffffe | 2;
            local_8 = local_8 & 0xfffffffc | 0x80;
          }
          else if (wVar5 == L',') {
            bVar4 = true;
LAB_00c653db: ;
            bVar1 = false;
          }
          else if (wVar5 == L'D') {
            if ((_OpenFlag & 0x40) != 0) goto LAB_00c653db;
            _OpenFlag = _OpenFlag | 0x40;
          }
          else if (wVar5 == L'N') {
            _OpenFlag = _OpenFlag | 0x80;
          }
          else {
            if (wVar5 != L'R') goto LAB_00c654a7;
            if (bVar2) goto LAB_00c653db;
            bVar2 = true;
            _OpenFlag = _OpenFlag | 0x10;
          }
        }
      }
      else if (wVar5 == L'T') {
        if ((_OpenFlag & 0x1000) != 0) goto LAB_00c653db;
        _OpenFlag = _OpenFlag | 0x1000;
      }
      else if (wVar5 == L'b') {
        if ((_OpenFlag & 0xc000) != 0) goto LAB_00c653db;
        _OpenFlag = _OpenFlag | 0x8000;
      }
      else if (wVar5 == L'c') {
        if (bVar3) goto LAB_00c653db;
        local_8 = local_8 | 0x4000;
        bVar3 = true;
      }
      else if (wVar5 == L'n') {
        if (bVar3) goto LAB_00c653db;
        local_8 = local_8 & 0xffffbfff;
        bVar3 = true;
      }
      else {
        if (wVar5 != L't') goto LAB_00c654a7;
        if ((_OpenFlag & 0xc000) != 0) goto LAB_00c653db;
        _OpenFlag = _OpenFlag | 0x4000;
      }
      pwVar10 = pwVar10 + 1;
      wVar5 = *pwVar10;
    } while (wVar5 != L'\0');
    if (bVar4) {
      for (; *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
      }
      iVar7 = F_00c7d672(((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b614)))),pwVar10,3);
      if (iVar7 != 0) goto LAB_00c654a7;
      for (pwVar10 = pwVar10 + 3; *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
      }
      if (*pwVar10 != L'=') goto LAB_00c654a7;
      do {
        pwVar9 = pwVar10;
        pwVar10 = pwVar9 + 1;
      } while (*pwVar10 == L' ');
      iVar7 = F_00c7d5d4(pwVar10,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b61c)))),5);
      if (iVar7 == 0) {
        pwVar10 = pwVar9 + 6;
        _OpenFlag = _OpenFlag | 0x40000;
      }
      else {
        iVar7 = F_00c7d5d4(pwVar10,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b628)))),8);
        if (iVar7 == 0) {
          pwVar10 = pwVar9 + 9;
          _OpenFlag = _OpenFlag | 0x20000;
        }
        else {
          iVar7 = F_00c7d5d4(pwVar10,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[3])REFP(0x111b63c)))),7);
          if (iVar7 != 0) goto LAB_00c654a7;
          pwVar10 = pwVar9 + 8;
          _OpenFlag = _OpenFlag | 0x10000;
        }
      }
    }
  }
  for (; *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
  }
  if (*pwVar10 == L'\0') {
    eVar8 = F_00c4ece4((int *)&(*(wchar_t * PTR32 *)&gen_args[1]),(*(wchar_t * PTR32 *)&gen_args[0]),_OpenFlag,(*(int *)&gen_args[2]),0x180);
    if (eVar8 != 0) {
      return (undefined *)0x0;
    }
    *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 12))))) = local_8;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 4))))) = 0;
    (*(char * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[3])))) = (char *)0x0;
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 8))))) = (char *)0x0;
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 28))))) = (char *)0x0;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 16))))) = (int)(*(wchar_t * PTR32 *)&gen_args[1]);
    return (*(undefined * PTR32 *)&gen_args[3]);
  }
LAB_00c654a7: ;
  piVar6 = F_00c51f85();
  *piVar6 = 0x16;
  F_00c4c305();
  return (undefined *)0x0;
}

/* ref: __allrem */
ulonglong F_00c65500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc65500u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  bVar12 = (int)param_2 < 0;
  if (bVar12) {
    bVar11 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar11 - param_2;
  }
  uVar10 = (uint)bVar12;
  if ((int)param_4 < 0) {
    bVar12 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar12 - param_4;
  }
  uVar5 = param_1;
  uVar4 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
    if ((int)(uVar10 - 1) < 0) goto LAB_00c655ad;
  }
  else {
    do {
      uVar3 = uVar9 & 1;
      uVar9 = uVar9 >> 1;
      uVar4 = (uint)(CONCAT14(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar8 & 1;
      uVar8 = uVar8 >> 1;
      uVar5 = (uint)(CONCAT14(uVar3 != 0,uVar5) >> 1);
    } while (uVar9 != 0);
    uVar1 = CONCAT44(uVar8,uVar5) / (ulonglong)uVar4;
    uVar4 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = (uint)lVar2;
    uVar9 = uVar8 + uVar4;
    if (((CARRY4(uVar8,uVar4)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar5)))) {
      bVar12 = uVar5 < param_3;
      uVar5 = uVar5 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar12;
    }
    iVar6 = uVar5 - param_1;
    iVar7 = (uVar9 - param_2) - (uint)(uVar5 < param_1);
    if (-1 < (int)(uVar10 - 1)) goto LAB_00c655ad;
  }
  bVar12 = iVar6 != 0;
  iVar6 = -iVar6;
  iVar7 = -(uint)bVar12 - iVar7;
LAB_00c655ad: ;
  return CONCAT44(iVar7,iVar6);
}

/* ref: FUN_00c655b2 */
unsigned int F_00c655b2(unsigned int gen_a0)
{
  GEN_ENTER(0xc655b2u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  *(undefined4 *)&REFG(undefined, 0x15e4188) = 0;
  return 0;
}

/* ref: ___ascii_strnicmp */
int F_00c655c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc655c0u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  gen_size32 sVar5;
  int iVar6;
  byte * pbVar7;
  char * pcVar8;
  bool bVar9;
  
  iVar6 = 0;
  sVar5 = _MaxCount;
  pbVar7 = (byte *)_Str1;
  pcVar8 = _Str2;
  if (_MaxCount != 0) {
    do {
      bVar2 = *pbVar7;
      cVar1 = *pcVar8;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      pbVar7 = pbVar7 + 1;
      pcVar8 = pcVar8 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar9 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_00c65611;
      sVar5 = sVar5 - 1;
    } while (sVar5 != 0);
    iVar6 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar9 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00c65611: ;
      iVar6 = -1;
      if (!bVar9) {
        iVar6 = 1;
      }
    }
  }
  return iVar6;
}

/* ref: ___check_float_string_00c65621 */
uint F_00c65621(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc65621u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if ((undefined *)*in_edi == param_4) {
      pvVar1 = F_00c54c73(_Count,2);
      *in_edi = pvVar1;
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi);
    }
    else {
      pvVar1 = F_00c54d0d((undefined *)*in_edi,_Count,2);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: FUN_00c65678 */
uint F_00c65678(unsigned int gen_a0)
{
  GEN_ENTER(0xc65678u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*param_1 + 0xbc);
}

/* ref: __hextodec_00c6568a */
uint F_00c6568a(unsigned int gen_a0)
{
  GEN_ENTER(0xc6568au, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c48637((uint)(byte)param_1);
  uVar2 = (uint)(char)(byte)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}

/* ref: __inc_00c656aa */
uint F_00c656aa(unsigned int gen_a0)
{
  GEN_ENTER(0xc656aau, gen_a0, 0u, 0u, 0u);
  undefined * in_edx = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &(*(int *)(((char *)(in_edx) + 4)));
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(*(char * PTR32 *)((char *)(in_edx)));
    (*(char * PTR32 *)((char *)(in_edx))) = (*(char * PTR32 *)((char *)(in_edx))) + 1;
    return (uint)bVar2;
  }
  uVar3 = F_00c5cf59(in_edx);
  return uVar3;
}

/* ref: __un_inc_00c656c0 */
unsigned int F_00c656c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc656c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != -1) {
    F_00c50c0d(param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: __whiteout_00c656d3 */
uint F_00c656d3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc656d3u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  do {
    *in_esi = *in_esi + 1;
    uVar1 = F_00c656aa(param_2);
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    iVar2 = F_00c4873c(uVar1 & 0xff);
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: __input_l */
int F_00c656fd(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc656fdu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  uchar * param_2 = (uchar *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  code * pcVar7;
  int iVar8;
  undefined * puVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  wchar_t * pwVar13;
  byte * pbVar14;
  byte * pbVar15;
  uint uVar16;
  wchar_t * pwVar17;
  byte * pbVar18;
  undefined1 * puVar19;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = _File;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x88));
  (*(undefined4 *)(gen_frame + 0x30)) = 0x15e;
  (*(int *)(gen_frame + 0x3c)) = 0;
  ((wchar_t *)(gen_frame + 0x20))[0] = L'\0';
  ((wchar_t *)(gen_frame + 0x20))[1] = L'\0';
  (*(uint *)(gen_frame + 0x78)) = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (undefined *)0x0)) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar5 = -1;
    goto LAB_00c666f3;
  }
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar6 = F_00c5d07b(_File);
    if ((uVar6 == 0xffffffff) || (uVar6 == 0xfffffffe)) {
      puVar9 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar9 = ((undefined *)GEN_TOP(((uVar6 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar6 >> 5])));
    }
    if ((puVar9[0x24] & 0x7f) == 0) {
      if ((uVar6 == 0xffffffff) || (uVar6 == 0xfffffffe)) {
        puVar9 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar9 = ((undefined *)GEN_TOP(((uVar6 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar6 >> 5])));
      }
      if ((puVar9[0x24] & 0x80) == 0) goto LAB_00c657ec;
    }
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar5 = -1;
  }
  else {
LAB_00c657ec: ;
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x10)),_Locale);
    bVar3 = *param_2;
    (*(char *)(gen_frame + 0x67)) = '\0';
    (*(int *)(gen_frame + 0x80)) = 0;
    (*(int *)(gen_frame + 0x40)) = 0;
    pbVar18 = param_2;
    if (bVar3 != 0) {
LAB_00c65819: ;
      iVar5 = F_00c4873c((uint)bVar3);
      if (iVar5 != 0) {
        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
        uVar6 = F_00c656d3(&(*(int *)(gen_frame + 0x80)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
        pbVar14 = pbVar18;
        if (uVar6 != 0xffffffff) {
          F_00c50c0d(uVar6,(*(undefined * PTR32 *)(gen_frame + 0x68)));
        }
        do {
          pbVar14 = pbVar14 + 1;
          iVar5 = F_00c4873c((uint)*pbVar14);
        } while (iVar5 != 0);
        goto LAB_00c66651;
      }
      if (*pbVar18 == 0x25) {
        if (pbVar18[1] == 0x25) {
          if (pbVar18[1] == 0x25) {
            pbVar18 = pbVar18 + 1;
          }
          goto LAB_00c665db;
        }
        (*(int *)(gen_frame + 0x28)) = 0;
        (*(byte *)(gen_frame + 0x3b)) = 0;
        (*(int *)(gen_frame + 0x60)) = 0;
        (*(int *)(gen_frame + 0x54)) = 0;
        (*(int *)(gen_frame + 0x70)) = 0;
        (*(byte *)(gen_frame + 0x64)) = 0;
        (*(char *)(gen_frame + 0x65)) = '\0';
        (*(char *)(gen_frame + 0x6f)) = '\0';
        (*(char *)(gen_frame + 0x7f)) = '\0';
        (*(char *)(gen_frame + 0x66)) = '\0';
        (*(char *)(gen_frame + 0x77)) = '\0';
        (*(byte *)(gen_frame + 0x87)) = 1;
        (*(int *)(gen_frame + 0x34)) = 0;
        do {
          pbVar15 = pbVar18 + 1;
          uVar6 = (uint)*pbVar15;
          iVar5 = F_00c48637(uVar6);
          pbVar14 = pbVar15;
          if (iVar5 == 0) {
            if (uVar6 < 0x4f) {
              if (uVar6 != 0x4e) {
                if (uVar6 == 0x2a) {
                  (*(char *)(gen_frame + 0x6f)) = (*(char *)(gen_frame + 0x6f)) + '\x01';
                }
                else if (uVar6 != 0x46) {
                  if (uVar6 == 0x49) {
                    bVar3 = pbVar18[2];
                    if ((bVar3 == 0x36) && (pbVar14 = pbVar18 + 3, *pbVar14 == 0x34))
                    goto LAB_00c6593e;
                    if ((((((bVar3 != 0x33) || (pbVar14 = pbVar18 + 3, *pbVar14 != 0x32)) &&
                          (pbVar14 = pbVar15, bVar3 != 100)) && ((bVar3 != 0x69 && (bVar3 != 0x6f)))
                         ) && (bVar3 != 0x78)) && (bVar3 != 0x58)) goto LAB_00c65997;
                  }
                  else if (uVar6 == 0x4c) {
                    (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) + 1;
                  }
                  else {
LAB_00c65997: ;
                    (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
                    pbVar14 = pbVar15;
                  }
                }
              }
            }
            else if (uVar6 == 0x68) {
              (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) - 1;
              (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + -1;
            }
            else {
              if (uVar6 == 0x6c) {
                pbVar14 = pbVar18 + 2;
                if (*pbVar14 == 0x6c) {
LAB_00c6593e: ;
                  (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 0)) = 0;
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) = 0;
                  (*(longlong *)(gen_frame + 0x44)) = 0;
                  goto LAB_00c659c1;
                }
                (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) + 1;
              }
              else if (uVar6 != 0x77) goto LAB_00c65997;
              (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
              pbVar14 = pbVar15;
            }
          }
          else {
            (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
            (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) * 10 + -0x30 + uVar6;
          }
LAB_00c659c1: ;
          pbVar18 = pbVar14;
        } while ((*(char *)(gen_frame + 0x7f)) == '\0');
        (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar14;
        if ((*(char *)(gen_frame + 0x6f)) == '\0') {
          pwVar13 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x24));
          (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0x24));
          (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 4;
        }
        else {
          pwVar13 = (wchar_t *)0x0;
        }
        (*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = pwVar13;
        (*(char *)(gen_frame + 0x7f)) = '\0';
        if (((*(char *)(gen_frame + 0x77)) == '\0') && ((*pbVar14 == 0x53 || ((*(char *)(gen_frame + 0x77)) = -1, *pbVar14 == 0x43)))) {
          (*(char *)(gen_frame + 0x77)) = '\x01';
        }
        uVar12 = *pbVar14 | 0x20;
        (*(uint *)(gen_frame + 0x58)) = uVar12;
        if (uVar12 != 0x6e) {
          if ((uVar12 == 99) || (uVar12 == 0x7b)) {
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
          }
          else {
            uVar6 = F_00c656d3(&(*(int *)(gen_frame + 0x80)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
          }
          (*(uint *)(gen_frame + 0x78)) = uVar6;
          if (uVar6 == 0xffffffff) goto LAB_00c66691;
        }
        uVar6 = (*(uint *)(gen_frame + 0x78));
        if (((*(int *)(gen_frame + 0x54)) != 0) && ((*(int *)(gen_frame + 0x70)) == 0)) goto LAB_00c6667c;
        if (uVar12 < 0x70) {
          if (uVar12 == 0x6f) {
LAB_00c66306: ;
            if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
              (*(char *)(gen_frame + 0x65)) = '\x01';
            }
            else if ((*(uint *)(gen_frame + 0x78)) != 0x2b) goto LAB_00c6634d;
            iVar5 = (*(int *)(gen_frame + 0x70)) + -1;
            (*(int *)(gen_frame + 0x70)) = iVar5;
            if ((iVar5 == 0) && ((*(int *)(gen_frame + 0x54)) != 0)) {
              (*(char *)(gen_frame + 0x7f)) = '\x01';
            }
            else {
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
LAB_00c66347: ;
              (*(uint *)(gen_frame + 0x78)) = uVar6;
            }
            goto LAB_00c6634d;
          }
          if (uVar12 == 99) {
            if ((*(int *)(gen_frame + 0x54)) == 0) {
              (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + 1;
              (*(int *)(gen_frame + 0x54)) = 1;
            }
LAB_00c65ed9: ;
            if ('\0' < (*(char *)(gen_frame + 0x77))) {
              (*(char *)(gen_frame + 0x66)) = '\x01';
            }
LAB_00c65ee9: ;
            pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x4c));
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
            pwVar17 = pwVar13;
            if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
              F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
            do {
              iVar5 = (*(int *)(gen_frame + 0x70));
              if (((*(int *)(gen_frame + 0x54)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar5 == 0)) goto LAB_00c662b4;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
              (*(uint *)(gen_frame + 0x78)) = uVar6;
              if (uVar6 == 0xffffffff) goto LAB_00c6629b;
              bVar3 = (byte)uVar6;
              if (uVar12 != 99) {
                if (uVar12 == 0x73) {
                  if ((8 < (int)uVar6) && ((int)uVar6 < 0xe)) goto LAB_00c6629b;
                  if (uVar6 != 0x20) goto LAB_00c65f9b;
                }
                if ((uVar12 != 0x7b) ||
                   (uVar12 = (*(uint *)(gen_frame + 0x58)),
                   ((int)(char)(((byte *)(gen_frame + 0x1e8))[(int)((int)uVar6 >> 3)] ^ (*(byte *)(gen_frame + 0x64))) & 1 << (bVar3 & 7)) == 0))
                goto LAB_00c6629b;
              }
LAB_00c65f9b: ;
              if ((*(char *)(gen_frame + 0x6f)) == '\0') {
                if ((*(char *)(gen_frame + 0x66)) == '\0') {
                  *(byte *)pwVar13 = bVar3;
                  pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                }
                else {
                  (*(byte *)(gen_frame + 0x2c)) = bVar3;
                  iVar5 = F_00c6e020(uVar6 & 0xff);
                  if (iVar5 != 0) {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
                    (*(undefined1 *)(gen_frame + 0x2d)) = (char)uVar6;
                  }
                  ((wchar_t *)(gen_frame + 0x20))[0] = L'?';
                  ((wchar_t *)(gen_frame + 0x20))[1] = L'\0';
                  F_00c7b204(((wchar_t *)(gen_frame + 0x20)),(char *)&(*(byte *)(gen_frame + 0x2c)),*((gen_size32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0)) + 0xac))),
                             (undefined *)((byte *)(gen_frame + 0x10)));
                  *pwVar13 = ((wchar_t *)(gen_frame + 0x20))[0];
                  pwVar13 = pwVar13 + 1;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = pwVar13;
              }
              else {
                pwVar17 = (wchar_t *)((int)pwVar17 + 1);
              }
            } while( true );
          }
          if (uVar12 == 100) goto LAB_00c66306;
          if (uVar12 < 0x65) {
LAB_00c6604f: ;
            if (*(*(byte * PTR32 *)(gen_frame + 0x50)) != (*(uint *)(gen_frame + 0x78))) goto LAB_00c6667c;
            (*(char *)(gen_frame + 0x67)) = (*(char *)(gen_frame + 0x67)) + -1;
            if ((*(char *)(gen_frame + 0x6f)) == '\0') {
              (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0xc));
            }
            goto LAB_00c665bc;
          }
          if (0x67 < uVar12) {
            if (uVar12 == 0x69) {
              (*(uint *)(gen_frame + 0x58)) = 100;
              goto LAB_00c65af2;
            }
            if (uVar12 != 0x6e) goto LAB_00c6604f;
            iVar5 = (*(int *)(gen_frame + 0x80));
            if ((*(char *)(gen_frame + 0x6f)) != '\0') goto LAB_00c665bc;
            goto LAB_00c66590;
          }
          iVar5 = 0;
          if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
            *(*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = 0x2d;
            iVar5 = 1;
LAB_00c65b2d: ;
            (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            (*(uint *)(gen_frame + 0x78)) = uVar6;
          }
          else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c65b2d;
          if ((*(int *)(gen_frame + 0x54)) == 0) {
            (*(int *)(gen_frame + 0x70)) = -1;
          }
          while( true ) {
            iVar10 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
            iVar8 = (*(int *)(gen_frame + 0x70));
            if ((iVar10 == 0) || ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar8 == 0)) break;
            (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
            (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar5] = (byte)(*(uint *)(gen_frame + 0x78));
            iVar5 = iVar5 + 1;
            uVar6 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar5,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)))
            ;
            if (uVar6 == 0) goto LAB_00c66691;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            (*(uint *)(gen_frame + 0x78)) = uVar6;
          }
          iVar8 = (*(int *)(gen_frame + 0x70));
          (*(byte *)(gen_frame + 0x64)) = *((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0)) + 0xbc)))));
          if ((*((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0)) + 0xbc))))) == (byte)(*(uint *)(gen_frame + 0x78))) &&
             ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar8 != 0)) {
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            (*(uint *)(gen_frame + 0x78)) = uVar6;
            (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar5] = (*(byte *)(gen_frame + 0x64));
            iVar5 = iVar5 + 1;
            uVar6 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar5,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)))
            ;
            if (uVar6 == 0) goto LAB_00c66691;
            while ((iVar10 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff), iVar8 = (*(int *)(gen_frame + 0x70)), iVar10 != 0 &&
                   ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar8 != 0))) {
              (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
              (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar5] = (byte)(*(uint *)(gen_frame + 0x78));
              iVar5 = iVar5 + 1;
              uVar6 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar5,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
              if (uVar6 == 0) goto LAB_00c66691;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
              (*(uint *)(gen_frame + 0x78)) = uVar6;
            }
          }
          iVar8 = (*(int *)(gen_frame + 0x70));
          iVar10 = iVar5;
          if (((*(int *)(gen_frame + 0x60)) != 0) &&
             ((((*(uint *)(gen_frame + 0x78)) == 0x65 || ((*(uint *)(gen_frame + 0x78)) == 0x45)) &&
              ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar8 != 0)))) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar5] = 0x65;
            iVar10 = iVar5 + 1;
            uVar6 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar10,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
            if (uVar6 == 0) goto LAB_00c66691;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            (*(uint *)(gen_frame + 0x78)) = uVar6;
            if (uVar6 == 0x2d) {
              (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar10] = 0x2d;
              iVar10 = iVar5 + 2;
              uVar6 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar10,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
              if (uVar6 == 0) goto LAB_00c66691;
LAB_00c65d9e: ;
              iVar5 = (*(int *)(gen_frame + 0x70));
              (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
              if (iVar5 == 0) {
                (*(int *)(gen_frame + 0x70)) = 0;
              }
              else {
                (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
                (*(uint *)(gen_frame + 0x78)) = uVar6;
              }
            }
            else if (uVar6 == 0x2b) goto LAB_00c65d9e;
            while ((iVar8 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff), iVar5 = (*(int *)(gen_frame + 0x70)), iVar8 != 0 &&
                   ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar5 != 0))) {
              (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
              (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar10] = (byte)(*(uint *)(gen_frame + 0x78));
              iVar10 = iVar10 + 1;
              uVar6 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar10,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
              if (uVar6 == 0) goto LAB_00c66691;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
              (*(uint *)(gen_frame + 0x78)) = uVar6;
            }
          }
          (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
          if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
            F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
          }
          if ((*(int *)(gen_frame + 0x60)) != 0) {
            if ((*(char *)(gen_frame + 0x6f)) == '\0') {
              (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
              pbVar18 = ((byte *)(gen_frame + 0x10));
              (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar10] = 0;
              iVar5 = (char)(*(byte *)(gen_frame + 0x87)) + -1;
              pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x4c));
              puVar19 = (*(undefined1 * PTR32 *)(gen_frame + 0x5c));
              pcVar7 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
              (*pcVar7)(iVar5,pwVar13,puVar19,pbVar18);
            }
            goto LAB_00c665bc;
          }
          goto LAB_00c66691;
        }
        if (uVar12 == 0x70) {
          (*(byte *)(gen_frame + 0x87)) = 1;
          goto LAB_00c66306;
        }
        if (uVar12 == 0x73) goto LAB_00c65ed9;
        if (uVar12 == 0x75) goto LAB_00c66306;
        if (uVar12 != 0x78) {
          if (uVar12 == 0x7b) {
            if ('\0' < (*(char *)(gen_frame + 0x77))) {
              (*(char *)(gen_frame + 0x66)) = '\x01';
            }
            pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x50)) + 1;
            if ((*(byte * PTR32 *)(gen_frame + 0x50))[1] == 0x5e) {
              pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x50)) + 2;
              (*(byte *)(gen_frame + 0x64)) = 0xff;
            }
            F_00c48350(((byte *)(gen_frame + 0x1e8)),0,0x20);
            bVar3 = (*(byte *)(gen_frame + 0x3b));
            if (*pbVar18 == 0x5d) {
              ((byte *)(gen_frame + 0x1e8))[0xb] = 0x20;
              pbVar18 = pbVar18 + 1;
              bVar3 = 0x5d;
            }
            while (bVar1 = *pbVar18, bVar1 != 0x5d) {
              if (((bVar1 == 0x2d) && (bVar3 != 0)) && (bVar11 = pbVar18[1], bVar11 != 0x5d)) {
                if (bVar3 < bVar11) {
                  (*(byte *)(gen_frame + 0x87)) = bVar11;
                  bVar11 = bVar3;
                }
                else {
                  (*(byte *)(gen_frame + 0x87)) = bVar3;
                }
                if (bVar11 < (*(byte *)(gen_frame + 0x87))) {
                  uVar16 = (uint)bVar11;
                  uVar6 = (uint)(byte)((*(byte *)(gen_frame + 0x87)) - bVar11);
                  do {
                    ((byte *)(gen_frame + 0x1e8))[(int)(uVar16 >> 3)] = ((byte *)(gen_frame + 0x1e8))[(int)(uVar16 >> 3)] | '\x01' << ((byte)uVar16 & 7);
                    uVar16 = uVar16 + 1;
                    uVar6 = uVar6 - 1;
                    uVar12 = (*(uint *)(gen_frame + 0x58));
                  } while (uVar6 != 0);
                }
                ((byte *)(gen_frame + 0x1e8))[(int)((*(byte *)(gen_frame + 0x87)) >> 3)] = ((byte *)(gen_frame + 0x1e8))[(int)((*(byte *)(gen_frame + 0x87)) >> 3)] | '\x01' << ((*(byte *)(gen_frame + 0x87)) & 7);
                pbVar18 = pbVar18 + 2;
                bVar3 = 0;
              }
              else {
                ((byte *)(gen_frame + 0x1e8))[(int)(bVar1 >> 3)] = ((byte *)(gen_frame + 0x1e8))[(int)(bVar1 >> 3)] | '\x01' << (bVar1 & 7);
                uVar12 = (*(uint *)(gen_frame + 0x58));
                pbVar18 = pbVar18 + 1;
                bVar3 = bVar1;
              }
            }
            (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar18;
            goto LAB_00c65ee9;
          }
          goto LAB_00c6604f;
        }
LAB_00c65af2: ;
        if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
          (*(char *)(gen_frame + 0x65)) = '\x01';
LAB_00c6618c: ;
          iVar5 = (*(int *)(gen_frame + 0x70)) + -1;
          (*(int *)(gen_frame + 0x70)) = iVar5;
          if ((iVar5 == 0) && ((*(int *)(gen_frame + 0x54)) != 0)) {
            (*(char *)(gen_frame + 0x7f)) = '\x01';
          }
          else {
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            (*(uint *)(gen_frame + 0x78)) = uVar6;
          }
        }
        else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c6618c;
        if ((*(uint *)(gen_frame + 0x78)) == 0x30) {
          (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
          uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
          (*(uint *)(gen_frame + 0x78)) = uVar6;
          if (((char)uVar6 == 'x') || ((char)uVar6 == 'X')) {
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            (*(uint *)(gen_frame + 0x78)) = uVar6;
            if (((*(int *)(gen_frame + 0x54)) != 0) && (iVar5 = (*(int *)(gen_frame + 0x70)) + -2, (*(int *)(gen_frame + 0x70)) = iVar5, iVar5 < 1)) {
              (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
            }
            (*(uint *)(gen_frame + 0x58)) = 0x78;
          }
          else {
            (*(int *)(gen_frame + 0x60)) = 1;
            if ((*(uint *)(gen_frame + 0x58)) == 0x78) {
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
              if (uVar6 != 0xffffffff) {
                F_00c50c0d(uVar6,(*(undefined * PTR32 *)(gen_frame + 0x68)));
              }
              uVar6 = 0x30;
              goto LAB_00c66347;
            }
            if (((*(int *)(gen_frame + 0x54)) != 0) && (iVar5 = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) = iVar5, iVar5 == 0)) {
              (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
            }
            (*(uint *)(gen_frame + 0x58)) = 0x6f;
          }
        }
LAB_00c6634d: ;
        if ((*(int *)(gen_frame + 0x34)) == 0) {
          iVar5 = (*(int *)(gen_frame + 0x28));
          if ((*(char *)(gen_frame + 0x7f)) == '\0') {
            while ((uVar6 = (*(uint *)(gen_frame + 0x78)), (*(uint *)(gen_frame + 0x58)) != 0x78 && ((*(uint *)(gen_frame + 0x58)) != 0x70))) {
              iVar8 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
              if (iVar8 == 0) goto LAB_00c6653a;
              if ((*(uint *)(gen_frame + 0x58)) == 0x6f) {
                if (0x37 < (int)uVar6) goto LAB_00c6653a;
                iVar5 = iVar5 << 3;
              }
              else {
                iVar5 = iVar5 * 10;
              }
LAB_00c66501: ;
              (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
              iVar5 = iVar5 + -0x30 + uVar6;
              if (((*(int *)(gen_frame + 0x54)) != 0) && (iVar8 = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) = iVar8, iVar8 == 0))
              goto LAB_00c66553;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
              (*(uint *)(gen_frame + 0x78)) = uVar6;
            }
            iVar8 = F_00c486bb((*(uint *)(gen_frame + 0x78)) & 0xff);
            if (iVar8 != 0) {
              iVar5 = iVar5 << 4;
              uVar6 = F_00c6568a(uVar6);
              (*(uint *)(gen_frame + 0x78)) = uVar6;
              goto LAB_00c66501;
            }
LAB_00c6653a: ;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
            if (uVar6 != 0xffffffff) {
              F_00c50c0d(uVar6,(*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
          }
LAB_00c66553: ;
          if ((*(char *)(gen_frame + 0x65)) != '\0') {
            iVar5 = -iVar5;
          }
        }
        else {
          if ((*(char *)(gen_frame + 0x7f)) == '\0') {
            while ((uVar6 = (*(uint *)(gen_frame + 0x78)), (*(uint *)(gen_frame + 0x58)) != 0x78 && ((*(uint *)(gen_frame + 0x58)) != 0x70))) {
              iVar5 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
              if (iVar5 == 0) goto LAB_00c66446;
              if ((*(uint *)(gen_frame + 0x58)) == 0x6f) {
                if (0x37 < (int)uVar6) goto LAB_00c66446;
                lVar2 = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) << 3 | (uint)(*(longlong *)(gen_frame + 0x44)) >> 0x1d,(uint)(*(longlong *)(gen_frame + 0x44)) << 3
                                );
              }
              else {
                lVar2 = (*(longlong *)(gen_frame + 0x44)) * 10;
              }
LAB_00c663fd: ;
              (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
              (*(longlong *)(gen_frame + 0x44)) = lVar2 + (int)(uVar6 - 0x30);
              if (((*(int *)(gen_frame + 0x54)) != 0) && (iVar5 = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) = iVar5, iVar5 == 0))
              goto LAB_00c6645f;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
              (*(uint *)(gen_frame + 0x78)) = uVar6;
            }
            iVar5 = F_00c486bb((*(uint *)(gen_frame + 0x78)) & 0xff);
            if (iVar5 != 0) {
              lVar2 = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) << 4 | (uint)(*(longlong *)(gen_frame + 0x44)) >> 0x1c,(uint)(*(longlong *)(gen_frame + 0x44)) << 4);
              uVar6 = F_00c6568a(uVar6);
              (*(uint *)(gen_frame + 0x78)) = uVar6;
              goto LAB_00c663fd;
            }
LAB_00c66446: ;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
            if (uVar6 != 0xffffffff) {
              F_00c50c0d(uVar6,(*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
          }
LAB_00c6645f: ;
          iVar5 = (*(int *)(gen_frame + 0x28));
          if ((*(char *)(gen_frame + 0x65)) != '\0') {
            iVar8 = -(uint)(*(longlong *)(gen_frame + 0x44));
            iVar10 = -((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) + (uint)((uint)(*(longlong *)(gen_frame + 0x44)) != 0));
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 0)) = iVar8;
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) = iVar10;
            (*(longlong *)(gen_frame + 0x44)) = CONCAT44(iVar10,iVar8);
          }
        }
        if ((*(uint *)(gen_frame + 0x58)) == 0x46) {
          (*(int *)(gen_frame + 0x60)) = 0;
        }
        if ((*(int *)(gen_frame + 0x60)) == 0) goto LAB_00c66691;
        if ((*(char *)(gen_frame + 0x6f)) == '\0') {
          (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
LAB_00c66590: ;
          if ((*(int *)(gen_frame + 0x34)) == 0) {
            if ((*(byte *)(gen_frame + 0x87)) == 0) {
              *(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = (wchar_t)iVar5;
            }
            else {
              *(int *)(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = iVar5;
            }
          }
          else {
            *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = (uint)(*(longlong *)(gen_frame + 0x44));
            *(int *)((*(wchar_t * PTR32 *)(gen_frame + 0x4c)) + 2) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4));
          }
        }
LAB_00c665bc: ;
        (*(char *)(gen_frame + 0x67)) = (*(char *)(gen_frame + 0x67)) + '\x01';
        pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x50)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar14;
LAB_00c66635: ;
        if (((*(uint *)(gen_frame + 0x78)) == 0xffffffff) &&
           ((*pbVar14 != 0x25 || (pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x50)), (*(byte * PTR32 *)(gen_frame + 0x50))[1] != 0x6e)))) goto LAB_00c66691;
LAB_00c66651: ;
        bVar3 = *pbVar14;
        pbVar18 = pbVar14;
        if (bVar3 == 0) goto LAB_00c66691;
        goto LAB_00c65819;
      }
LAB_00c665db: ;
      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
      uVar6 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
      pbVar14 = pbVar18 + 1;
      (*(uint *)(gen_frame + 0x78)) = uVar6;
      (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar14;
      if (*pbVar18 == uVar6) {
        iVar5 = F_00c6e020(uVar6 & 0xff);
        if (iVar5 != 0) {
          (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
          uVar12 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
          bVar3 = *pbVar14;
          pbVar14 = pbVar18 + 2;
          (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar14;
          if (bVar3 != uVar12) {
            if (uVar12 != 0xffffffff) {
              F_00c50c0d(uVar12,(*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
            goto LAB_00c6667c;
          }
          (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
        }
        goto LAB_00c66635;
      }
LAB_00c6667c: ;
      if (uVar6 != 0xffffffff) {
        F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
      }
LAB_00c66691: ;
      if ((*(int *)(gen_frame + 0x3c)) == 1) {
        F_00c4c68f((*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
      }
      if ((*(uint *)(gen_frame + 0x78)) == 0xffffffff) {
        iVar5 = (*(int *)(gen_frame + 0x40));
        if (((*(int *)(gen_frame + 0x40)) == 0) && ((*(char *)(gen_frame + 0x67)) == '\0')) {
          iVar5 = -1;
        }
        if (((byte *)(gen_frame + 0x10))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c666f3;
      }
    }
    iVar5 = (*(int *)(gen_frame + 0x40));
    if (((byte *)(gen_frame + 0x10))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c666f3: ;
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return iVar5;
LAB_00c6629b: ;
  (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
  if (uVar6 != 0xffffffff) {
    F_00c50c0d(uVar6,(*(undefined * PTR32 *)(gen_frame + 0x68)));
  }
LAB_00c662b4: ;
  if (pwVar17 == pwVar13) goto LAB_00c66691;
  if (((*(char *)(gen_frame + 0x6f)) == '\0') && ((*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1, uVar12 != 99)) {
    if ((*(char *)(gen_frame + 0x66)) == '\0') {
      *(byte *)(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = 0;
    }
    else {
      *(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = L'\0';
    }
  }
  goto LAB_00c665bc;
}

/* ref: ___check_float_string_00c66701 */
uint F_00c66701(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc66701u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if ((undefined *)*in_edi == param_4) {
      pvVar1 = F_00c54c73(_Count,2);
      *in_edi = pvVar1;
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi);
    }
    else {
      pvVar1 = F_00c54d0d((undefined *)*in_edi,_Count,2);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: __hextodec_00c66758 */
uint F_00c66758(unsigned int gen_a0)
{
  GEN_ENTER(0xc66758u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c48637((uint)(byte)param_1);
  uVar2 = (uint)(char)(byte)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}

/* ref: __inc_00c66778 */
uint F_00c66778(unsigned int gen_a0)
{
  GEN_ENTER(0xc66778u, gen_a0, 0u, 0u, 0u);
  undefined * in_edx = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &(*(int *)(((char *)(in_edx) + 4)));
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(*(char * PTR32 *)((char *)(in_edx)));
    (*(char * PTR32 *)((char *)(in_edx))) = (*(char * PTR32 *)((char *)(in_edx))) + 1;
    return (uint)bVar2;
  }
  uVar3 = F_00c5cf59(in_edx);
  return uVar3;
}

/* ref: __un_inc_00c6678e */
unsigned int F_00c6678e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6678eu, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != -1) {
    F_00c50c0d(param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: __whiteout_00c667a1 */
uint F_00c667a1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc667a1u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  do {
    *in_esi = *in_esi + 1;
    uVar1 = F_00c66778(param_2);
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    iVar2 = F_00c4873c(uVar1 & 0xff);
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: __input_s_l */
int F_00c667cb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc667cbu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  uchar * param_2 = (uchar *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  byte bVar1;
  undefined * pcVar2;
  byte bVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code * pcVar8;
  undefined * puVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  wchar_t * pwVar13;
  byte * pbVar14;
  byte * pbVar15;
  wchar_t * pwVar16;
  byte * pbVar17;
  bool bVar18;
  undefined1 * puVar19;
  uint uVar20;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = _File;
  (*(byte * PTR32 *)(gen_frame + 0x5c)) = param_2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = ((undefined1 *)(gen_frame + 0x88));
  (*(undefined4 *)(gen_frame + 0x34)) = 0x15e;
  (*(int *)(gen_frame + 0x3c)) = 0;
  ((wchar_t *)(gen_frame + 0x1c))[0] = L'\0';
  ((wchar_t *)(gen_frame + 0x1c))[1] = L'\0';
  (*(uint *)(gen_frame + 0x78)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (undefined *)0x0)) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar5 = -1;
    goto LAB_00c678e0;
  }
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar6 = F_00c5d07b(_File);
    if ((uVar6 == 0xffffffff) || (uVar6 == 0xfffffffe)) {
      puVar9 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar9 = ((undefined *)GEN_TOP(((uVar6 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar6 >> 5])));
    }
    if ((puVar9[0x24] & 0x7f) == 0) {
      if ((uVar6 == 0xffffffff) || (uVar6 == 0xfffffffe)) {
        puVar9 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar9 = ((undefined *)GEN_TOP(((uVar6 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar6 >> 5])));
      }
      if ((puVar9[0x24] & 0x80) == 0) goto LAB_00c668c6;
    }
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar5 = -1;
  }
  else {
LAB_00c668c6: ;
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),_Locale);
    bVar3 = *param_2;
    (*(char *)(gen_frame + 0x6a)) = '\0';
    (*(int *)(gen_frame + 0x80)) = 0;
    (*(int *)(gen_frame + 0x44)) = 0;
    if (bVar3 != 0) {
      do {
        iVar5 = F_00c4873c((uint)bVar3);
        if (iVar5 == 0) {
          pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x5c));
          if (*(*(byte * PTR32 *)(gen_frame + 0x5c)) == 0x25) {
            if ((*(byte * PTR32 *)(gen_frame + 0x5c))[1] == 0x25) {
              if ((*(byte * PTR32 *)(gen_frame + 0x5c))[1] == 0x25) {
                pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x5c)) + 1;
              }
              goto LAB_00c67734;
            }
            (*(int *)(gen_frame + 0x48)) = 0;
            (*(byte *)(gen_frame + 0x3b)) = 0;
            (*(int *)(gen_frame + 0x60)) = 0;
            (*(int *)(gen_frame + 0x4c)) = 0;
            (*(int *)(gen_frame + 0x70)) = 0;
            (*(int *)(gen_frame + 0x40)) = 0;
            (*(byte *)(gen_frame + 0x69)) = 0;
            (*(char *)(gen_frame + 0x68)) = '\0';
            (*(char *)(gen_frame + 0x76)) = '\0';
            (*(char *)(gen_frame + 0x7f)) = '\0';
            (*(char *)(gen_frame + 0x6b)) = '\0';
            (*(char *)(gen_frame + 0x77)) = '\0';
            (*(byte *)(gen_frame + 0x87)) = 1;
            (*(int *)(gen_frame + 0x30)) = 0;
            pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x5c));
            do {
              pbVar15 = pbVar14 + 1;
              uVar6 = (uint)*pbVar15;
              iVar5 = F_00c48637(uVar6);
              pbVar17 = pbVar15;
              if (iVar5 == 0) {
                if (uVar6 < 0x4f) {
                  if (uVar6 != 0x4e) {
                    if (uVar6 == 0x2a) {
                      (*(char *)(gen_frame + 0x76)) = (*(char *)(gen_frame + 0x76)) + '\x01';
                    }
                    else if (uVar6 != 0x46) {
                      if (uVar6 == 0x49) {
                        bVar3 = pbVar14[2];
                        if ((bVar3 == 0x36) && (pbVar17 = pbVar14 + 3, *pbVar17 == 0x34))
                        goto LAB_00c66a33;
                        if ((((((bVar3 != 0x33) || (pbVar17 = pbVar14 + 3, *pbVar17 != 0x32)) &&
                              (pbVar17 = pbVar15, bVar3 != 100)) &&
                             ((bVar3 != 0x69 && (bVar3 != 0x6f)))) && (bVar3 != 0x78)) &&
                           (bVar3 != 0x58)) goto LAB_00c66a8c;
                      }
                      else if (uVar6 == 0x4c) {
                        (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) + 1;
                      }
                      else {
LAB_00c66a8c: ;
                        (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
                        pbVar17 = pbVar15;
                      }
                    }
                  }
                }
                else if (uVar6 == 0x68) {
                  (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) - 1;
                  (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + -1;
                }
                else {
                  if (uVar6 == 0x6c) {
                    pbVar17 = pbVar14 + 2;
                    if (*pbVar17 == 0x6c) {
LAB_00c66a33: ;
                      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = 0;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = 0;
                      (*(longlong *)(gen_frame + 0x54)) = 0;
                      goto LAB_00c66ab6;
                    }
                    (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) + 1;
                  }
                  else if (uVar6 != 0x77) goto LAB_00c66a8c;
                  (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
                  pbVar17 = pbVar15;
                }
              }
              else {
                (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 1;
                (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) * 10 + -0x30 + uVar6;
              }
LAB_00c66ab6: ;
              pbVar14 = pbVar17;
            } while ((*(char *)(gen_frame + 0x7f)) == '\0');
            (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar17;
            if ((*(char *)(gen_frame + 0x76)) == '\0') {
              pwVar13 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x28));
              (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x28));
              (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 4;
            }
            else {
              pwVar13 = (wchar_t *)0x0;
            }
            (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar13;
            (*(char *)(gen_frame + 0x7f)) = '\0';
            if (((*(char *)(gen_frame + 0x77)) == '\0') && ((*pbVar17 == 0x53 || ((*(char *)(gen_frame + 0x77)) = -1, *pbVar17 == 0x43)))) {
              (*(char *)(gen_frame + 0x77)) = '\x01';
            }
            uVar6 = *pbVar17 | 0x20;
            (*(uint *)(gen_frame + 0x24)) = uVar6;
            if (uVar6 != 0x6e) {
              if ((uVar6 == 99) || (uVar6 == 0x7b)) {
                (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
              }
              else {
                uVar6 = F_00c667a1(&(*(int *)(gen_frame + 0x80)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
              }
              (*(uint *)(gen_frame + 0x78)) = uVar6;
              if (uVar6 == 0xffffffff) break;
            }
            uVar20 = (*(uint *)(gen_frame + 0x24));
            pcVar2 = (*(undefined * PTR32 *)(gen_frame + 0x20));
            if (((*(int *)(gen_frame + 0x4c)) == 0) || (uVar6 = (*(uint *)(gen_frame + 0x78)), (*(int *)(gen_frame + 0x70)) != 0)) {
              if (((*(char *)(gen_frame + 0x76)) == '\0') &&
                 ((((*(uint *)(gen_frame + 0x24)) == 99 || ((*(uint *)(gen_frame + 0x24)) == 0x73)) || ((*(uint *)(gen_frame + 0x24)) == 0x7b)))) {
                pwVar13 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x20));
                (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
                (*(undefined * PTR32 *)(gen_frame + 0x28)) = pcVar2 + 8;
                iVar5 = *(int *)(pcVar2 + 4);
                (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar13;
                (*(int *)(gen_frame + 0x40)) = iVar5;
                if (iVar5 == 0) {
                  if ((*(char *)(gen_frame + 0x77)) < '\x01') {
                    *(byte *)pwVar13 = 0;
                  }
                  else {
                    *pwVar13 = L'\0';
                  }
                  piVar4 = F_00c51f85();
                  *piVar4 = 0xc;
                  break;
                }
              }
              if ((int)(*(uint *)(gen_frame + 0x24)) < 0x70) {
                if ((*(uint *)(gen_frame + 0x24)) == 0x6f) {
LAB_00c67441: ;
                  if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
                    (*(char *)(gen_frame + 0x68)) = '\x01';
                  }
                  else if ((*(uint *)(gen_frame + 0x78)) != 0x2b) goto LAB_00c67488;
                  iVar5 = (*(int *)(gen_frame + 0x70)) + -1;
                  (*(int *)(gen_frame + 0x70)) = iVar5;
                  if ((iVar5 == 0) && ((*(int *)(gen_frame + 0x4c)) != 0)) {
                    (*(char *)(gen_frame + 0x7f)) = '\x01';
                  }
                  else {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
LAB_00c67482: ;
                    (*(uint *)(gen_frame + 0x78)) = uVar6;
                  }
                  goto LAB_00c67488;
                }
                if ((*(uint *)(gen_frame + 0x24)) == 99) {
                  if ((*(int *)(gen_frame + 0x4c)) == 0) {
                    (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + 1;
                    (*(int *)(gen_frame + 0x4c)) = 1;
                  }
LAB_00c67019: ;
                  if ('\0' < (*(char *)(gen_frame + 0x77))) {
                    (*(char *)(gen_frame + 0x6b)) = '\x01';
                  }
LAB_00c67029: ;
                  pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x50));
                  uVar6 = (*(uint *)(gen_frame + 0x24));
                  (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                  if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                    F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  pwVar16 = pwVar13;
                  if (uVar6 == 99) goto LAB_00c67058;
LAB_00c67052: ;
                  (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + -1;
LAB_00c67058: ;
                  do {
                    iVar5 = (*(int *)(gen_frame + 0x70));
                    if (((*(int *)(gen_frame + 0x4c)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar5 == 0)) {
LAB_00c673eb: ;
                      if (pwVar16 == pwVar13) goto LAB_00c67865;
                      if (((*(char *)(gen_frame + 0x76)) == '\0') && ((*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1, (*(uint *)(gen_frame + 0x24)) != 99)) {
                        if ((*(char *)(gen_frame + 0x6b)) == '\0') {
                          *(byte *)(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = 0;
                        }
                        else {
                          *(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = L'\0';
                        }
                      }
                      goto LAB_00c67715;
                    }
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    uVar20 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x78)) = uVar20;
                    if (uVar20 == 0xffffffff) {
LAB_00c673d2: ;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                      if (uVar20 != 0xffffffff) {
                        F_00c50c0d(uVar20,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      }
                      goto LAB_00c673eb;
                    }
                    bVar3 = (byte)uVar20;
                    if (uVar6 != 99) {
                      if (uVar6 == 0x73) {
                        if ((8 < (int)uVar20) && ((int)uVar20 < 0xe)) goto LAB_00c673d2;
                        if (uVar20 != 0x20) goto LAB_00c670e6;
                      }
                      if ((uVar6 != 0x7b) ||
                         (uVar6 = (*(uint *)(gen_frame + 0x24)),
                         ((int)(char)(((byte *)(gen_frame + 0x1e8))[(int)((int)uVar20 >> 3)] ^ (*(byte *)(gen_frame + 0x69))) & 1 << (bVar3 & 7)) ==
                         0)) goto LAB_00c673d2;
                    }
LAB_00c670e6: ;
                    if ((*(char *)(gen_frame + 0x76)) == '\0') goto code_r0x00c670f3;
                    pwVar16 = (wchar_t *)((int)pwVar16 + 1);
                  } while( true );
                }
                if ((*(uint *)(gen_frame + 0x24)) == 100) goto LAB_00c67441;
                if (100 < (int)(*(uint *)(gen_frame + 0x24))) {
                  if (0x67 < (int)(*(uint *)(gen_frame + 0x24))) {
                    if ((*(uint *)(gen_frame + 0x24)) == 0x69) {
                      uVar20 = 100;
                      goto LAB_00c66c32;
                    }
                    if ((*(uint *)(gen_frame + 0x24)) != 0x6e) goto LAB_00c671a7;
                    iVar5 = (*(int *)(gen_frame + 0x80));
                    if ((*(char *)(gen_frame + 0x76)) != '\0') goto LAB_00c67715;
                    goto LAB_00c676e9;
                  }
                  iVar5 = 0;
                  if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
                    *(*(undefined1 * PTR32 *)(gen_frame + 0x64)) = 0x2d;
                    iVar5 = 1;
LAB_00c66c6d: ;
                    (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x78)) = uVar6;
                  }
                  else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c66c6d;
                  if ((*(int *)(gen_frame + 0x4c)) == 0) {
                    (*(int *)(gen_frame + 0x70)) = -1;
                  }
                  while( true ) {
                    iVar7 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
                    iVar11 = (*(int *)(gen_frame + 0x70));
                    if ((iVar7 == 0) || ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar11 == 0)) break;
                    (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                    (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar5] = (byte)(*(uint *)(gen_frame + 0x78));
                    iVar5 = iVar5 + 1;
                    uVar6 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar5,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                    if (uVar6 == 0) goto LAB_00c67865;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x78)) = uVar6;
                  }
                  iVar11 = (*(int *)(gen_frame + 0x70));
                  (*(byte *)(gen_frame + 0x69)) = *((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xbc)))));
                  if ((*((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xbc))))) == (byte)(*(uint *)(gen_frame + 0x78))) &&
                     ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar11 != 0)) {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x78)) = uVar6;
                    (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar5] = (*(byte *)(gen_frame + 0x69));
                    iVar5 = iVar5 + 1;
                    uVar6 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar5,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                    if (uVar6 == 0) break;
                    while ((iVar7 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff), iVar11 = (*(int *)(gen_frame + 0x70)), iVar7 != 0 &&
                           ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar11 != 0))) {
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar5] = (byte)(*(uint *)(gen_frame + 0x78));
                      iVar5 = iVar5 + 1;
                      uVar6 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar5,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                      if (uVar6 == 0) goto LAB_00c67865;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                      uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x78)) = uVar6;
                    }
                  }
                  iVar11 = (*(int *)(gen_frame + 0x70));
                  iVar7 = iVar5;
                  if (((*(int *)(gen_frame + 0x60)) != 0) &&
                     ((((*(uint *)(gen_frame + 0x78)) == 0x65 || ((*(uint *)(gen_frame + 0x78)) == 0x45)) &&
                      ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar11 != 0)))) {
                    (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar5] = 0x65;
                    iVar7 = iVar5 + 1;
                    uVar6 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar7,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                    if (uVar6 == 0) break;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x78)) = uVar6;
                    if (uVar6 == 0x2d) {
                      (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar7] = 0x2d;
                      iVar7 = iVar5 + 2;
                      uVar6 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar7,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                      if (uVar6 == 0) break;
LAB_00c66ede: ;
                      iVar5 = (*(int *)(gen_frame + 0x70));
                      (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
                      if (iVar5 == 0) {
                        (*(int *)(gen_frame + 0x70)) = 0;
                      }
                      else {
                        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                        uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                        (*(uint *)(gen_frame + 0x78)) = uVar6;
                      }
                    }
                    else if (uVar6 == 0x2b) goto LAB_00c66ede;
                    while ((iVar11 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff), iVar5 = (*(int *)(gen_frame + 0x70)), iVar11 != 0 &&
                           ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar5 != 0))) {
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar7] = (byte)(*(uint *)(gen_frame + 0x78));
                      iVar7 = iVar7 + 1;
                      uVar6 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar7,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                      if (uVar6 == 0) goto LAB_00c67865;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                      uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x78)) = uVar6;
                    }
                  }
                  (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                  if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                    F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  if ((*(int *)(gen_frame + 0x60)) != 0) {
                    if ((*(char *)(gen_frame + 0x76)) == '\0') {
                      (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1;
                      pbVar14 = ((byte *)(gen_frame + 0x8));
                      (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar7] = 0;
                      iVar5 = (char)(*(byte *)(gen_frame + 0x87)) + -1;
                      pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x50));
                      puVar19 = (*(undefined1 * PTR32 *)(gen_frame + 0x64));
                      pcVar8 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
                      (*pcVar8)(iVar5,pwVar13,puVar19,pbVar14);
                    }
                    goto LAB_00c67715;
                  }
                  break;
                }
LAB_00c671a7: ;
                if (*(*(byte * PTR32 *)(gen_frame + 0x5c)) != (*(uint *)(gen_frame + 0x78))) {
                  if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                    F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  (*(int *)(gen_frame + 0x18)) = 1;
                  break;
                }
                (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + -1;
                if ((*(char *)(gen_frame + 0x76)) == '\0') {
                  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x20));
                }
              }
              else {
                if ((*(uint *)(gen_frame + 0x24)) == 0x70) {
                  (*(byte *)(gen_frame + 0x87)) = 1;
                  goto LAB_00c67441;
                }
                if ((*(uint *)(gen_frame + 0x24)) == 0x73) goto LAB_00c67019;
                if ((*(uint *)(gen_frame + 0x24)) == 0x75) goto LAB_00c67441;
                if ((*(uint *)(gen_frame + 0x24)) != 0x78) {
                  if ((*(uint *)(gen_frame + 0x24)) == 0x7b) {
                    if ('\0' < (*(char *)(gen_frame + 0x77))) {
                      (*(char *)(gen_frame + 0x6b)) = '\x01';
                    }
                    pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x5c)) + 1;
                    if (*pbVar14 == 0x5e) {
                      pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x5c)) + 2;
                      (*(byte *)(gen_frame + 0x69)) = 0xff;
                    }
                    F_00c48350(((byte *)(gen_frame + 0x1e8)),0,0x20);
                    bVar3 = (*(byte *)(gen_frame + 0x3b));
                    if (*pbVar14 == 0x5d) {
                      ((byte *)(gen_frame + 0x1e8))[0xb] = 0x20;
                      pbVar14 = pbVar14 + 1;
                      bVar3 = 0x5d;
                    }
                    while (bVar1 = *pbVar14, bVar1 != 0x5d) {
                      if (((bVar1 == 0x2d) && (bVar3 != 0)) && (bVar12 = pbVar14[1], bVar12 != 0x5d)
                         ) {
                        if (bVar3 < bVar12) {
                          (*(byte *)(gen_frame + 0x87)) = bVar12;
                          bVar12 = bVar3;
                        }
                        else {
                          (*(byte *)(gen_frame + 0x87)) = bVar3;
                        }
                        if (bVar12 < (*(byte *)(gen_frame + 0x87))) {
                          uVar20 = (uint)bVar12;
                          uVar6 = (uint)(byte)((*(byte *)(gen_frame + 0x87)) - bVar12);
                          do {
                            ((byte *)(gen_frame + 0x1e8))[(int)(uVar20 >> 3)] =
                                 ((byte *)(gen_frame + 0x1e8))[(int)(uVar20 >> 3)] | '\x01' << ((byte)uVar20 & 7);
                            uVar20 = uVar20 + 1;
                            uVar6 = uVar6 - 1;
                          } while (uVar6 != 0);
                        }
                        ((byte *)(gen_frame + 0x1e8))[(int)((*(byte *)(gen_frame + 0x87)) >> 3)] =
                             ((byte *)(gen_frame + 0x1e8))[(int)((*(byte *)(gen_frame + 0x87)) >> 3)] | '\x01' << ((*(byte *)(gen_frame + 0x87)) & 7);
                        pbVar14 = pbVar14 + 2;
                        bVar3 = 0;
                      }
                      else {
                        ((byte *)(gen_frame + 0x1e8))[(int)(bVar1 >> 3)] = ((byte *)(gen_frame + 0x1e8))[(int)(bVar1 >> 3)] | '\x01' << (bVar1 & 7);
                        pbVar14 = pbVar14 + 1;
                        bVar3 = bVar1;
                      }
                    }
                    (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar14;
                    goto LAB_00c67029;
                  }
                  goto LAB_00c671a7;
                }
LAB_00c66c32: ;
                if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
                  (*(char *)(gen_frame + 0x68)) = '\x01';
LAB_00c672d9: ;
                  iVar5 = (*(int *)(gen_frame + 0x70)) + -1;
                  (*(int *)(gen_frame + 0x70)) = iVar5;
                  if ((iVar5 == 0) && ((*(int *)(gen_frame + 0x4c)) != 0)) {
                    (*(char *)(gen_frame + 0x7f)) = '\x01';
                  }
                  else {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x78)) = uVar6;
                  }
                }
                else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c672d9;
                if ((*(uint *)(gen_frame + 0x78)) == 0x30) {
                  (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                  (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  if (((char)(*(uint *)(gen_frame + 0x78)) == 'x') || ((char)(*(uint *)(gen_frame + 0x78)) == 'X')) {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    if (((*(int *)(gen_frame + 0x4c)) != 0) && (iVar5 = (*(int *)(gen_frame + 0x70)) + -2, (*(int *)(gen_frame + 0x70)) = iVar5, iVar5 < 1))
                    {
                      (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
                    }
                    uVar20 = 0x78;
                  }
                  else {
                    (*(int *)(gen_frame + 0x60)) = 1;
                    if (uVar20 == 0x78) {
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                      if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                        F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      }
                      uVar6 = 0x30;
                      goto LAB_00c67482;
                    }
                    if (((*(int *)(gen_frame + 0x4c)) != 0) && (iVar5 = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) = iVar5, iVar5 == 0))
                    {
                      (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
                    }
                    uVar20 = 0x6f;
                  }
                }
LAB_00c67488: ;
                if ((*(int *)(gen_frame + 0x30)) == 0) {
                  if ((*(char *)(gen_frame + 0x7f)) == '\0') {
                    while ((uVar6 = (*(uint *)(gen_frame + 0x78)), uVar20 != 0x78 && (uVar20 != 0x70))) {
                      iVar5 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
                      if (iVar5 == 0) goto LAB_00c6768d;
                      if (uVar20 == 0x6f) {
                        if (0x37 < (int)uVar6) goto LAB_00c6768d;
                        iVar5 = (*(int *)(gen_frame + 0x48)) << 3;
                      }
                      else {
                        iVar5 = (*(int *)(gen_frame + 0x48)) * 10;
                      }
LAB_00c6764e: ;
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(int *)(gen_frame + 0x48)) = iVar5 + -0x30 + uVar6;
                      if (((*(int *)(gen_frame + 0x4c)) != 0) &&
                         (iVar5 = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) = iVar5, iVar5 == 0)) goto LAB_00c676a6;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                      uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x78)) = uVar6;
                    }
                    iVar5 = F_00c486bb((*(uint *)(gen_frame + 0x78)) & 0xff);
                    if (iVar5 != 0) {
                      (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) << 4;
                      uVar6 = F_00c66758(uVar6);
                      (*(uint *)(gen_frame + 0x78)) = uVar6;
                      iVar5 = (*(int *)(gen_frame + 0x48));
                      goto LAB_00c6764e;
                    }
LAB_00c6768d: ;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                    if (uVar6 != 0xffffffff) {
                      F_00c50c0d(uVar6,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    }
                  }
LAB_00c676a6: ;
                  if ((*(char *)(gen_frame + 0x68)) != '\0') {
                    (*(int *)(gen_frame + 0x48)) = -(*(int *)(gen_frame + 0x48));
                  }
                }
                else {
                  if ((*(char *)(gen_frame + 0x7f)) == '\0') {
                    while ((uVar6 = (*(uint *)(gen_frame + 0x78)), uVar20 != 0x78 && (uVar20 != 0x70))) {
                      iVar5 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
                      if (iVar5 == 0) goto LAB_00c67591;
                      if (uVar20 == 0x6f) {
                        if (0x37 < (int)uVar6) goto LAB_00c67591;
                        uVar10 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) << 3 | (uint)(*(longlong *)(gen_frame + 0x54)) >> 0x1d;
                        iVar5 = (uint)(*(longlong *)(gen_frame + 0x54)) << 3;
                        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = iVar5;
                        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = uVar10;
                        (*(longlong *)(gen_frame + 0x54)) = CONCAT44(uVar10,iVar5);
                      }
                      else {
                        (*(longlong *)(gen_frame + 0x54)) = (*(longlong *)(gen_frame + 0x54)) * 10;
                      }
LAB_00c6754c: ;
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      uVar6 = uVar6 - 0x30;
                      bVar18 = CARRY4((uint)(*(longlong *)(gen_frame + 0x54)),uVar6);
                      iVar5 = (uint)(*(longlong *)(gen_frame + 0x54)) + uVar6;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = iVar5;
                      iVar11 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) + ((int)uVar6 >> 0x1f) + (uint)bVar18;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = iVar11;
                      (*(longlong *)(gen_frame + 0x54)) = CONCAT44(iVar11,iVar5);
                      if (((*(int *)(gen_frame + 0x4c)) != 0) &&
                         (iVar5 = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) = iVar5, iVar5 == 0)) goto LAB_00c675aa;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                      uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x78)) = uVar6;
                    }
                    iVar5 = F_00c486bb((*(uint *)(gen_frame + 0x78)) & 0xff);
                    if (iVar5 != 0) {
                      uVar10 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) << 4 | (uint)(*(longlong *)(gen_frame + 0x54)) >> 0x1c;
                      iVar5 = (uint)(*(longlong *)(gen_frame + 0x54)) << 4;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = iVar5;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = uVar10;
                      (*(longlong *)(gen_frame + 0x54)) = CONCAT44(uVar10,iVar5);
                      uVar6 = F_00c66758(uVar6);
                      (*(uint *)(gen_frame + 0x78)) = uVar6;
                      goto LAB_00c6754c;
                    }
LAB_00c67591: ;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                    if (uVar6 != 0xffffffff) {
                      F_00c50c0d(uVar6,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    }
                  }
LAB_00c675aa: ;
                  if ((*(char *)(gen_frame + 0x68)) != '\0') {
                    iVar5 = -(uint)(*(longlong *)(gen_frame + 0x54));
                    iVar11 = -((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) + ((uint)(*(longlong *)(gen_frame + 0x54)) != 0));
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = iVar5;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = iVar11;
                    (*(longlong *)(gen_frame + 0x54)) = CONCAT44(iVar11,iVar5);
                  }
                }
                if (uVar20 == 0x46) {
                  (*(int *)(gen_frame + 0x60)) = 0;
                }
                if ((*(int *)(gen_frame + 0x60)) == 0) break;
                if ((*(char *)(gen_frame + 0x76)) == '\0') {
                  (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1;
                  iVar5 = (*(int *)(gen_frame + 0x48));
LAB_00c676e9: ;
                  if ((*(int *)(gen_frame + 0x30)) == 0) {
                    if ((*(byte *)(gen_frame + 0x87)) == 0) {
                      *(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = (wchar_t)iVar5;
                    }
                    else {
                      *(int *)(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = iVar5;
                    }
                  }
                  else {
                    *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = (uint)(*(longlong *)(gen_frame + 0x54));
                    *(uint *)((*(wchar_t * PTR32 *)(gen_frame + 0x50)) + 2) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4));
                  }
                }
              }
LAB_00c67715: ;
              (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + '\x01';
              pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x5c)) + 1;
              (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar14;
              goto LAB_00c67796;
            }
          }
          else {
LAB_00c67734: ;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            uVar6 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
            pbVar14 = pbVar17 + 1;
            (*(uint *)(gen_frame + 0x78)) = uVar6;
            (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar14;
            if (*pbVar17 == uVar6) {
              iVar5 = F_00c6e020(uVar6 & 0xff);
              if (iVar5 != 0) {
                (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                uVar20 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                bVar3 = *pbVar14;
                pbVar14 = pbVar17 + 2;
                (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar14;
                if (bVar3 != uVar20) {
                  if (uVar20 != 0xffffffff) {
                    F_00c50c0d(uVar20,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  goto LAB_00c67850;
                }
                (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
              }
LAB_00c67796: ;
              if (((*(uint *)(gen_frame + 0x78)) != 0xffffffff) ||
                 ((*pbVar14 == 0x25 && (pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x5c)), (*(byte * PTR32 *)(gen_frame + 0x5c))[1] == 0x6e))))
              goto LAB_00c677ba;
              break;
            }
          }
LAB_00c67850: ;
          if (uVar6 != 0xffffffff) {
            F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
          }
          break;
        }
        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
        uVar6 = F_00c667a1(&(*(int *)(gen_frame + 0x80)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
        pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x5c));
        if (uVar6 != 0xffffffff) {
          F_00c50c0d(uVar6,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
          pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x5c));
        }
        do {
          pbVar14 = pbVar14 + 1;
          iVar5 = F_00c4873c((uint)*pbVar14);
        } while (iVar5 != 0);
        (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar14;
LAB_00c677ba: ;
        bVar3 = *pbVar14;
      } while (bVar3 != 0);
LAB_00c67865: ;
      if ((*(int *)(gen_frame + 0x3c)) == 1) {
        F_00c4c68f((*(undefined1 * PTR32 *)(gen_frame + 0x64)));
      }
      if ((*(uint *)(gen_frame + 0x78)) == 0xffffffff) {
        iVar5 = (*(int *)(gen_frame + 0x44));
        if (((*(int *)(gen_frame + 0x44)) == 0) && ((*(char *)(gen_frame + 0x6a)) == '\0')) {
          iVar5 = -1;
        }
        if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c678e0;
      }
      if ((*(int *)(gen_frame + 0x18)) == 1) {
        piVar4 = F_00c51f85();
        *piVar4 = 0x16;
        F_00c4c305();
      }
    }
    iVar5 = (*(int *)(gen_frame + 0x44));
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c678e0: ;
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return iVar5;
code_r0x00c670f3: ;
  if ((*(int *)(gen_frame + 0x40)) == 0) {
    piVar4 = F_00c51f85();
    *piVar4 = 0xc;
    if ((*(char *)(gen_frame + 0x6b)) == '\0') {
      *(byte *)pwVar16 = 0;
    }
    else {
      *pwVar16 = L'\0';
    }
    goto LAB_00c67865;
  }
  if ((*(char *)(gen_frame + 0x6b)) == '\0') {
    *(byte *)pwVar13 = bVar3;
    pwVar13 = (wchar_t *)((int)pwVar13 + 1);
  }
  else {
    (*(byte *)(gen_frame + 0x2c)) = bVar3;
    iVar5 = F_00c6e020(uVar20 & 0xff);
    if (iVar5 != 0) {
      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
      uVar20 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
      (*(undefined1 *)(gen_frame + 0x2d)) = (char)uVar20;
    }
    ((wchar_t *)(gen_frame + 0x1c))[0] = L'?';
    ((wchar_t *)(gen_frame + 0x1c))[1] = L'\0';
    F_00c7b204(((wchar_t *)(gen_frame + 0x1c)),(char *)&(*(byte *)(gen_frame + 0x2c)),*((gen_size32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xac))),(undefined *)((byte *)(gen_frame + 0x8)));
    *pwVar13 = ((wchar_t *)(gen_frame + 0x1c))[0];
    pwVar13 = pwVar13 + 1;
  }
  (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar13;
  goto LAB_00c67052;
}

/* ref: FUN_00c678f0 */
float10 F_00c678f0(float gen_a0, float gen_a1, float gen_a2, double gen_a3)
{
  GEN_ENTER(0xc678f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), (unsigned int)gen_trace_d(gen_a3));
  float in_xmm2 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm4 = (float)gen_a2;
  float10 in_st0 = (float10)gen_a3;
  double in_xmm0;
  float10 fVar1;
  undefined4 in_XMM2_Db = 0;
  undefined4 in_XMM3_Db = 0;
  undefined4 in_XMM4_Db = 0;
  
  in_xmm0 = (double)in_st0;
  fVar1 = F_00c6790e(in_xmm0,GEN_TOD(gen_bits2d(CONCAT44(in_XMM2_Db,(uint)gen_fl2bits(in_xmm2)))),GEN_TOD(gen_bits2d(CONCAT44(in_XMM3_Db,(uint)gen_fl2bits(in_xmm3)))),GEN_TOD(gen_bits2d(CONCAT44(in_XMM4_Db,(uint)gen_fl2bits(in_xmm4)))),
                       (int)(ulonglong)gen_d2bits(in_xmm0),
                       (int)((ulonglong)gen_d2bits(in_xmm0) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c67e68 */
float10 F_00c67e68(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc67e68u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  double in_xmm0 = (double)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 extraout_ST0;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar14 = gen_bits2d(CONCAT44(param_3,param_2));
  uVar1 = (ushort)((uint)param_3 >> 0x10);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar9 = (REFG(undefined8, 0x111d6b0) * dVar14 + REFG(undefined8, 0x111d6b8)) - REFG(undefined8, 0x111d6b8);
    iVar3 = ((int)ROUND(REFG(undefined8, 0x111d6b0) * dVar14) + 0x1c7610U & 0x3f) * 0x20;
    dVar10 = *(double *)&REFG(undefined, 0x111d6c0) * dVar9;
    dVar4 = dVar14 - REFG(undefined8, 0x111d6d0) * dVar9;
    dVar14 = dVar14 - REFG(undefined8, 0x111d6d0) * dVar9;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - *(double *)&REFG(undefined, 0x111d6c8) * dVar9;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&REFG(undefined, 0x111ce70) + iVar3) + *(double *)(&REFG(undefined, 0x111ce88) + iVar3);
    dVar12 = *(double *)(&REFG(undefined, 0x111ce88) + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&REFG(undefined, 0x111ce70) + iVar3);
    dVar13 = dVar12 + *(double *)(&REFG(undefined, 0x111ce78) + iVar3);
    dVar17 = dVar16 + dVar13;
    return ((float10)GEN_TOD((dVar17 + ((((((dVar9 * *(double *)&REFG(undefined, 0x111d6d8) - ((dVar14 - dVar15) - dVar10))
                                   * (*(double *)(&REFG(undefined, 0x111ce78) + iVar3) * dVar15 - dVar11) +
                                  *(double *)(&REFG(undefined, 0x111ce80) + iVar3)) +
                                 ((*(double *)(&REFG(undefined, 0x111ce78) + iVar3) - dVar13) + dVar12)) +
                                ((dVar13 - dVar17) + dVar16)) +
                               ((*(double *)&REFG(undefined, 0x111d680) * dVar6 + *(double *)&REFG(undefined, 0x111d670)) +
                               ((*(double *)&REFG(undefined, 0x111d6a0) * dVar4) * dVar5 +
                               *(double *)&REFG(undefined, 0x111d690)) * (dVar6 * dVar6)) *
                               ((dVar11 * dVar15) * dVar6)) +
                              ((*(double *)&REFG(undefined, 0x111d688) * dVar8 + *(double *)&REFG(undefined, 0x111d678)) +
                              ((*(double *)&REFG(undefined, 0x111d6a8) * dVar4) * dVar7 + *(double *)&REFG(undefined, 0x111d698)
                              ) * (dVar8 * dVar8)) * (*(double *)(&REFG(undefined, 0x111ce78) + iVar3) * dVar8)))));
  }
  if ((short)uVar2 < 0x10c6) {
    return ((float10)GEN_TOD((REFG(undefined8, 0x111d700) -
                    gen_bits2d((ulonglong)gen_d2bits(dVar14) & 0xffffffffffff |
                               (ulonglong)(uVar1 & 0x7fff) << 0x30))));
  }
  F_00c4ca6f(param_2);
  return extraout_ST0;
}

/* ref: FUN_00c67e6e */
float10 F_00c67e6e(double gen_a0, double gen_a1, double gen_a2, double gen_a3, double gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc67e6eu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32));
  double in_xmm0 = (double)gen_a0;
  double in_xmm1 = (double)gen_a1;
  double in_xmm2 = (double)gen_a2;
  double in_xmm3 = (double)gen_a3;
  double in_xmm7 = (double)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 extraout_ST0;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = (ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar9 = (REFG(undefined8, 0x111d6b0) * in_xmm0 + REFG(undefined8, 0x111d6b8)) - REFG(undefined8, 0x111d6b8);
    iVar3 = ((int)ROUND(REFG(undefined8, 0x111d6b0) * in_xmm0) + 0x1c7610U & 0x3f) * 0x20;
    dVar10 = *(double *)&REFG(undefined, 0x111d6c0) * dVar9;
    dVar4 = in_xmm0 - REFG(undefined8, 0x111d6d0) * dVar9;
    dVar14 = in_xmm0 - REFG(undefined8, 0x111d6d0) * dVar9;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - *(double *)&REFG(undefined, 0x111d6c8) * dVar9;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&REFG(undefined, 0x111ce70) + iVar3) + *(double *)(&REFG(undefined, 0x111ce88) + iVar3);
    dVar12 = *(double *)(&REFG(undefined, 0x111ce88) + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&REFG(undefined, 0x111ce70) + iVar3);
    dVar13 = dVar12 + *(double *)(&REFG(undefined, 0x111ce78) + iVar3);
    dVar17 = dVar16 + dVar13;
    return ((float10)GEN_TOD((dVar17 + ((((((dVar9 * *(double *)&REFG(undefined, 0x111d6d8) - ((dVar14 - dVar15) - dVar10))
                                   * (*(double *)(&REFG(undefined, 0x111ce78) + iVar3) * dVar15 - dVar11) +
                                  *(double *)(&REFG(undefined, 0x111ce80) + iVar3)) +
                                 ((*(double *)(&REFG(undefined, 0x111ce78) + iVar3) - dVar13) + dVar12)) +
                                ((dVar13 - dVar17) + dVar16)) +
                               ((*(double *)&REFG(undefined, 0x111d680) * dVar6 + *(double *)&REFG(undefined, 0x111d670)) +
                               ((*(double *)&REFG(undefined, 0x111d6a0) * dVar4) * dVar5 +
                               *(double *)&REFG(undefined, 0x111d690)) * (dVar6 * dVar6)) *
                               ((dVar11 * dVar15) * dVar6)) +
                              ((*(double *)&REFG(undefined, 0x111d688) * dVar8 + *(double *)&REFG(undefined, 0x111d678)) +
                              ((*(double *)&REFG(undefined, 0x111d6a8) * dVar4) * dVar7 + *(double *)&REFG(undefined, 0x111d698)
                              ) * (dVar8 * dVar8)) * (*(double *)(&REFG(undefined, 0x111ce78) + iVar3) * dVar8)))));
  }
  if ((short)uVar2 < 0x10c6) {
    return ((float10)GEN_TOD((REFG(undefined8, 0x111d700) -
                    gen_bits2d((ulonglong)gen_d2bits(in_xmm0) & 0xffffffffffff |
                               (ulonglong)(uVar1 & 0x7fff) << 0x30))));
  }
  F_00c4ca6f(param_6);
  return extraout_ST0;
}

/* ref: __d_inttype */
uint F_00c68b60(double gen_a0)
{
  GEN_ENTER(0xc68b60u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  double param_1 = (double)gen_a0;
  double dVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar2 = F_00c516ab(param_1);
  if ((uVar2 & 0x90) == 0) {
    fVar4 = F_00c7d6ab(param_1);
    bVar3 = GEN_ISNAN((float10)param_1) || GEN_ISNAN(fVar4);
    if (bVar3 != (bVar3 || (float10)param_1 == fVar4)) {
      dVar1 = param_1 * REFG(double, 0x1088108);
      fVar4 = F_00c7d6ab(dVar1);
      fVar5 = (float10)dVar1;
      bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
      if (bVar3 != (bVar3 || fVar5 == fVar4)) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c68bca */
uint F_00c68bca(double gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc68bcau, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  unsigned int gen_args[5];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  gen_args[3] = gen_a2;
  gen_args[4] = gen_a3;
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  
  dVar1 = ABS((*(double *)&gen_args[0]));
  uVar4 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x134bc90);
  if ((*(int *)&gen_args[3]) == 0x7ff00000) {
    if ((*(uint *)&gen_args[2]) == 0) {
      if ((!(dVar1 <= 1.0) == GEN_ISNAN(dVar1)) &&
         (dVar2 = 1.0, dVar1 <= 1.0 && (!GEN_ISNAN(dVar1) && dVar1 != 1.0))) {
        dVar2 = 0.0;
      }
      goto LAB_00c68cee;
    }
  }
  else if (((*(int *)&gen_args[3]) == -0x100000) && ((*(uint *)&gen_args[2]) == 0)) {
    if (!(dVar1 <= 1.0) == GEN_ISNAN(dVar1)) {
      if (!(dVar1 <= 1.0) || (GEN_ISNAN(dVar1) || dVar1 == 1.0)) {
        uVar4 = 1;
        dVar2 = *(double *)&REFG(undefined, 0x134bc98);
      }
    }
    else {
      dVar2 = 0.0;
    }
    goto LAB_00c68cee;
  }
  if ((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 4)) == 0x7ff00000) {
    if ((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) != 0) {
      return 0;
    }
    if ((!(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))) <= 0.0) ==
         GEN_ISNAN(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))))) &&
       (dVar1 = gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))), dVar2 = 0.0,
       !(dVar1 <= 0.0) || (GEN_ISNAN(dVar1) || dVar1 == 0.0))) {
      dVar2 = 1.0;
    }
  }
  else {
    if ((*(double *)&gen_args[0]) != -INFINITY) {
      return 0;
    }
    uVar3 = F_00c68b60(GEN_TOD(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2])))));
    dVar2 = 0.0;
    if (!(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))) <= 0.0) ==
        GEN_ISNAN(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))))) {
      dVar1 = gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2])));
      if (!(dVar1 <= 0.0) || (GEN_ISNAN(dVar1) || dVar1 == 0.0)) {
        dVar2 = 1.0;
      }
      else if (uVar3 == 1) {
        dVar2 = *(double *)&REFG(undefined, 0x134bcb0);
      }
    }
    else {
      dVar2 = *(double *)&REFG(undefined, 0x134bc90);
      if (uVar3 == 1) {
        dVar2 = -*(double *)&REFG(undefined, 0x134bc90);
      }
    }
  }
LAB_00c68cee: ;
  *(*(double * PTR32 *)&gen_args[4]) = dVar2;
  return uVar4;
}

/* ref: FUN_00c68d18 */
float10 F_00c68d18(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc68d18u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  double in_xmm0 = (double)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  int iVar2;
  float10 extraout_ST0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar13 = gen_bits2d(CONCAT44(param_3,param_2));
  uVar1 = ((ushort)((uint)param_3 >> 0x10) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar8 = (REFG(undefined8, 0x11218a0) * dVar13 + REFG(undefined8, 0x11218a8)) - REFG(undefined8, 0x11218a8);
    iVar2 = ((int)ROUND(REFG(undefined8, 0x11218a0) * dVar13) + 0x1c7600U & 0x3f) * 0x20;
    dVar9 = *(double *)&REFG(undefined, 0x11218b0) * dVar8;
    dVar3 = dVar13 - REFG(undefined8, 0x11218c0) * dVar8;
    dVar13 = dVar13 - REFG(undefined8, 0x11218c0) * dVar8;
    dVar14 = dVar13 - dVar9;
    dVar4 = dVar3 - dVar9;
    dVar6 = dVar3 - *(double *)&REFG(undefined, 0x11218b8) * dVar8;
    dVar5 = dVar4 * dVar4;
    dVar7 = dVar6 * dVar6;
    dVar10 = *(double *)(&REFG(undefined, 0x1121060) + iVar2) + *(double *)(&REFG(undefined, 0x1121078) + iVar2);
    dVar11 = *(double *)(&REFG(undefined, 0x1121078) + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&REFG(undefined, 0x1121060) + iVar2);
    dVar12 = dVar11 + *(double *)(&REFG(undefined, 0x1121068) + iVar2);
    dVar16 = dVar15 + dVar12;
    return ((float10)GEN_TOD((dVar16 + ((((((dVar8 * *(double *)&REFG(undefined, 0x11218c8) - ((dVar13 - dVar14) - dVar9))
                                   * (*(double *)(&REFG(undefined, 0x1121068) + iVar2) * dVar14 - dVar10) +
                                  *(double *)(&REFG(undefined, 0x1121070) + iVar2)) +
                                 ((*(double *)(&REFG(undefined, 0x1121068) + iVar2) - dVar12) + dVar11)) +
                                ((dVar12 - dVar16) + dVar15)) +
                               ((*(double *)&REFG(undefined, 0x1121870) * dVar5 + *(double *)&REFG(undefined, 0x1121860)) +
                               ((*(double *)&REFG(undefined, 0x1121890) * dVar3) * dVar4 +
                               *(double *)&REFG(undefined, 0x1121880)) * (dVar5 * dVar5)) *
                               ((dVar10 * dVar14) * dVar5)) +
                              ((*(double *)&REFG(undefined, 0x1121878) * dVar7 + *(double *)&REFG(undefined, 0x1121868)) +
                              ((*(double *)&REFG(undefined, 0x1121898) * dVar3) * dVar6 + *(double *)&REFG(undefined, 0x1121888)
                              ) * (dVar7 * dVar7)) * (*(double *)(&REFG(undefined, 0x1121068) + iVar2) * dVar7)))));
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(dVar13 * *(double *)&REFG(undefined, 0x11218e0));
    }
    return (float10)dVar13;
  }
  F_00c4ce2f(param_2);
  return extraout_ST0;
}

/* ref: FUN_00c68d1e */
float10 F_00c68d1e(double gen_a0, double gen_a1, double gen_a2, double gen_a3, double gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc68d1eu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32));
  double in_xmm0 = (double)gen_a0;
  double in_xmm1 = (double)gen_a1;
  double in_xmm2 = (double)gen_a2;
  double in_xmm3 = (double)gen_a3;
  double in_xmm7 = (double)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  ushort uVar1;
  int iVar2;
  float10 extraout_ST0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar1 = ((ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar8 = (REFG(undefined8, 0x11218a0) * in_xmm0 + REFG(undefined8, 0x11218a8)) - REFG(undefined8, 0x11218a8);
    iVar2 = ((int)ROUND(REFG(undefined8, 0x11218a0) * in_xmm0) + 0x1c7600U & 0x3f) * 0x20;
    dVar9 = *(double *)&REFG(undefined, 0x11218b0) * dVar8;
    dVar3 = in_xmm0 - REFG(undefined8, 0x11218c0) * dVar8;
    dVar13 = in_xmm0 - REFG(undefined8, 0x11218c0) * dVar8;
    dVar14 = dVar13 - dVar9;
    dVar4 = dVar3 - dVar9;
    dVar6 = dVar3 - *(double *)&REFG(undefined, 0x11218b8) * dVar8;
    dVar5 = dVar4 * dVar4;
    dVar7 = dVar6 * dVar6;
    dVar10 = *(double *)(&REFG(undefined, 0x1121060) + iVar2) + *(double *)(&REFG(undefined, 0x1121078) + iVar2);
    dVar11 = *(double *)(&REFG(undefined, 0x1121078) + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&REFG(undefined, 0x1121060) + iVar2);
    dVar12 = dVar11 + *(double *)(&REFG(undefined, 0x1121068) + iVar2);
    dVar16 = dVar15 + dVar12;
    return ((float10)GEN_TOD((dVar16 + ((((((dVar8 * *(double *)&REFG(undefined, 0x11218c8) - ((dVar13 - dVar14) - dVar9))
                                   * (*(double *)(&REFG(undefined, 0x1121068) + iVar2) * dVar14 - dVar10) +
                                  *(double *)(&REFG(undefined, 0x1121070) + iVar2)) +
                                 ((*(double *)(&REFG(undefined, 0x1121068) + iVar2) - dVar12) + dVar11)) +
                                ((dVar12 - dVar16) + dVar15)) +
                               ((*(double *)&REFG(undefined, 0x1121870) * dVar5 + *(double *)&REFG(undefined, 0x1121860)) +
                               ((*(double *)&REFG(undefined, 0x1121890) * dVar3) * dVar4 +
                               *(double *)&REFG(undefined, 0x1121880)) * (dVar5 * dVar5)) *
                               ((dVar10 * dVar14) * dVar5)) +
                              ((*(double *)&REFG(undefined, 0x1121878) * dVar7 + *(double *)&REFG(undefined, 0x1121868)) +
                              ((*(double *)&REFG(undefined, 0x1121898) * dVar3) * dVar6 + *(double *)&REFG(undefined, 0x1121888)
                              ) * (dVar7 * dVar7)) * (*(double *)(&REFG(undefined, 0x1121068) + iVar2) * dVar7)))));
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(in_xmm0 * *(double *)&REFG(undefined, 0x11218e0));
    }
    return (float10)in_xmm0;
  }
  F_00c4ce2f(param_6);
  return extraout_ST0;
}

/* ref: _wcslen */
gen_size32 F_00c68ec8(unsigned int gen_a0)
{
  GEN_ENTER(0xc68ec8u, gen_a0, 0u, 0u, 0u);
  wchar_t * _Str = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t wVar1;
  wchar_t * pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  return ((int)pwVar2 - (int)((int)(uintptr_t)_Str) >> 1) - 1;
}

/* ref: ___check_float_string_00c68ee3 */
uint F_00c68ee3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc68ee3u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if ((undefined *)*in_edi == param_4) {
      pvVar1 = F_00c54c73(_Count,4);
      *in_edi = pvVar1;
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi * 2);
    }
    else {
      pvVar1 = F_00c54d0d((undefined *)*in_edi,_Count,4);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: __hextodec_00c68f3d */
ushort F_00c68f3d(unsigned int gen_a0)
{
  GEN_ENTER(0xc68f3du, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  ushort uVar1;
  int iVar2;
  
  if (((param_1 & 0xff00) != 0) ||
     (iVar2 = F_00c48637(param_1 & 0xff), uVar1 = (ushort)param_1, iVar2 == 0)) {
    uVar1 = ((ushort)param_1 & 0xffdf) - 7;
  }
  return uVar1;
}

/* ref: FUN_00c68f73 */
uint F_00c68f73(unsigned int gen_a0)
{
  GEN_ENTER(0xc68f73u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  wVar1 = F_00c7d6bf(param_1);
  return CONCAT22(extraout_var,wVar1);
}

/* ref: __un_inc_00c68f7e */
uint F_00c68f7e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc68f7eu, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  if ((ushort)param_1 != 0xffff) {
    wVar1 = F_00c7d8e0((ushort)param_1,param_2);
    return CONCAT22(extraout_var,wVar1);
  }
  return 0xffff;
}

/* ref: __whiteout_00c68f96 */
ushort F_00c68f96(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc68f96u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ushort _C;
  int iVar1;
  
  do {
    *in_esi = *in_esi + 1;
    _C = F_00c7d6bf(param_2);
    if (_C == 0xffff) {
      return 0xffff;
    }
    iVar1 = F_00c7db09(_C,8);
  } while (iVar1 != 0);
  return _C;
}

/* ref: __winput_l */
int F_00c68fc8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc68fc8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x340];
  gen_size32 _Size;
  longlong lVar1;
  ushort uVar2;
  wchar_t wVar3;
  ushort wVar4;
  wchar_t wVar5;
  int * piVar6;
  int iVar7;
  int iVar8;
  int eVar9;
  code * pcVar10;
  undefined * pvVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  wchar_t * pwVar15;
  wchar_t * pwVar16;
  uint uVar17;
  wchar_t * pwVar18;
  bool bVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  byte * pbVar22;
  undefined2 uVar23;
  
  (*(uint *)(gen_frame + 0x338)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x33c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = _File;
  (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = param_2;
  (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = ((wchar_t *)(gen_frame + 0x7c));
  (*(int *)(gen_frame + 0x28)) = 0x15e;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x70)) = 0;
  if ((param_2 == (wchar_t *)0x0) || (_File == (undefined *)0x0)) {
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
    iVar7 = -1;
  }
  else {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x4)),_Locale);
    wVar3 = *param_2;
    (*(char *)(gen_frame + 0x62)) = '\0';
    (*(uint *)(gen_frame + 0x74)) = 0;
    (*(int *)(gen_frame + 0x30)) = 0;
    pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x38));
    if (wVar3 != L'\0') {
LAB_00c6907e: ;
      iVar7 = F_00c7db09(wVar3,8);
      uVar20 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x64)),0);
      uVar21 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x64))) >> 0x10);
      if (iVar7 != 0) {
        (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
        uVar2 = F_00c68f96(&(*(uint *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
        F_00c68f7e((uint)uVar2,CONCAT22(uVar21,uVar20));
        do {
          pwVar16 = pwVar16 + 1;
          iVar7 = F_00c7db09(*pwVar16,8);
        } while (iVar7 != 0);
        goto LAB_00c69fdf;
      }
      if (*pwVar16 == L'%') {
        if (pwVar16[1] == L'%') {
          if (pwVar16[1] == L'%') {
            pwVar16 = pwVar16 + 1;
          }
          goto LAB_00c69f90;
        }
        (*(uint *)(gen_frame + 0x4c)) = 0;
        (*(uint *)(gen_frame + 0x14)) = 0;
        (*(int *)(gen_frame + 0x58)) = 0;
        (*(int *)(gen_frame + 0x48)) = 0;
        (*(int *)(gen_frame + 0x6c)) = 0;
        (*(uint *)(gen_frame + 0x3c)) = 0;
        (*(byte *)(gen_frame + 0x53)) = 0;
        (*(char *)(gen_frame + 0x61)) = '\0';
        (*(char *)(gen_frame + 0x69)) = '\0';
        (*(char *)(gen_frame + 0x7b)) = '\0';
        (*(char *)(gen_frame + 0x63)) = '\0';
        (*(char *)(gen_frame + 0x6b)) = '\0';
        (*(char *)(gen_frame + 0x6a)) = '\x01';
        pwVar15 = (wchar_t *)0x0;
        do {
          pwVar18 = pwVar16 + 1;
          uVar12 = (uint)(ushort)*pwVar18;
          if (((*pwVar18 & 0xff00U) == 0) && (iVar7 = F_00c48637(uVar12 & 0xff), iVar7 != 0)) {
            (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 1;
            (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) * 10 + -0x30 + uVar12;
          }
          else if (uVar12 < 0x4f) {
            if (uVar12 != 0x4e) {
              if (uVar12 == 0x2a) {
                (*(char *)(gen_frame + 0x69)) = (*(char *)(gen_frame + 0x69)) + '\x01';
              }
              else if (uVar12 != 0x46) {
                if (uVar12 == 0x49) {
                  wVar3 = pwVar16[2];
                  if ((wVar3 == L'6') && (pwVar16[3] == L'4')) {
                    pwVar18 = pwVar16 + 3;
                    goto LAB_00c691bf;
                  }
                  if ((wVar3 == L'3') && (pwVar16[3] == L'2')) {
                    pwVar18 = pwVar16 + 3;
                  }
                  else if ((wVar3 != L'd') &&
                          ((((wVar3 != L'i' && (wVar3 != L'o')) && (wVar3 != L'x')) &&
                           (wVar3 != L'X')))) goto LAB_00c69216;
                }
                else if (uVar12 == 0x4c) {
                  (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + '\x01';
                }
                else {
LAB_00c69216: ;
                  (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) + '\x01';
                }
              }
            }
          }
          else if (uVar12 == 0x68) {
            (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + -1;
            (*(char *)(gen_frame + 0x6b)) = (*(char *)(gen_frame + 0x6b)) + -1;
          }
          else {
            if (uVar12 == 0x6c) {
              if (pwVar16[2] == L'l') {
                pwVar18 = pwVar16 + 2;
LAB_00c691bf: ;
                (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
                (*(uint *)(gen_frame + 0x40)) = 0;
                (*(uint *)(gen_frame + 0x44)) = 0;
                goto LAB_00c69244;
              }
              (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + '\x01';
            }
            else if (uVar12 != 0x77) goto LAB_00c69216;
            (*(char *)(gen_frame + 0x6b)) = (*(char *)(gen_frame + 0x6b)) + '\x01';
          }
LAB_00c69244: ;
          pwVar16 = pwVar18;
        } while ((*(char *)(gen_frame + 0x7b)) == '\0');
        (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar18;
        if ((*(char *)(gen_frame + 0x69)) == '\0') {
          pwVar15 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x20));
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x20));
          (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
        }
        (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar15;
        (*(char *)(gen_frame + 0x7b)) = '\0';
        if (((*(char *)(gen_frame + 0x6b)) == '\0') && ((*pwVar18 == L'S' || ((*(char *)(gen_frame + 0x6b)) = '\x01', *pwVar18 == L'C')))) {
          (*(char *)(gen_frame + 0x6b)) = -1;
        }
        uVar12 = (ushort)*pwVar18 | 0x20;
        (*(uint *)(gen_frame + 0x54)) = uVar12;
        if (uVar12 != 0x6e) {
          if ((uVar12 == 99) || (uVar12 == 0x7b)) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
            uVar2 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
          }
          else {
            uVar2 = F_00c68f96(&(*(uint *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
          }
          (*(uint *)(gen_frame + 0x70)) = (uint)uVar2;
          if (uVar2 == 0xffff) goto LAB_00c6a013;
        }
        if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x6c)) == 0)) goto LAB_00c6a000;
        uVar21 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x64)),0);
        uVar23 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x64))) >> 0x10);
        if (0x6f < uVar12) {
          if (uVar12 == 0x70) {
            (*(char *)(gen_frame + 0x6a)) = '\x01';
            goto LAB_00c69c71;
          }
          if (uVar12 == 0x73) goto LAB_00c69824;
          if (uVar12 == 0x75) goto LAB_00c69c71;
          if (uVar12 == 0x78) {
LAB_00c6937c: ;
            if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'-') {
              (*(char *)(gen_frame + 0x61)) = '\x01';
LAB_00c69aba: ;
              iVar7 = (*(int *)(gen_frame + 0x6c)) + -1;
              (*(int *)(gen_frame + 0x6c)) = iVar7;
              if ((iVar7 == 0) && ((*(int *)(gen_frame + 0x48)) != 0)) {
                (*(char *)(gen_frame + 0x7b)) = '\x01';
              }
              else {
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
                wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
              }
            }
            else if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'+') goto LAB_00c69aba;
            if ((short)(*(uint *)(gen_frame + 0x70)) == 0x30) {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
              wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
              (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
              if ((wVar4 == 0x78) || (wVar4 == 0x58)) {
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
                wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
                if (((*(int *)(gen_frame + 0x48)) != 0) && (iVar7 = (*(int *)(gen_frame + 0x6c)) + -2, (*(int *)(gen_frame + 0x6c)) = iVar7, iVar7 < 1)) {
                  (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) + '\x01';
                }
                (*(uint *)(gen_frame + 0x54)) = 0x78;
              }
              else {
                (*(int *)(gen_frame + 0x58)) = 1;
                if ((*(uint *)(gen_frame + 0x54)) == 0x78) {
                  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
                  F_00c68f7e((uint)wVar4,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                  uVar12 = 0x30;
                  goto LAB_00c69cba;
                }
                if (((*(int *)(gen_frame + 0x48)) != 0) && (iVar7 = (*(int *)(gen_frame + 0x6c)) + -1, (*(int *)(gen_frame + 0x6c)) = iVar7, iVar7 == 0)) {
                  (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) + '\x01';
                }
                (*(uint *)(gen_frame + 0x54)) = 0x6f;
              }
            }
LAB_00c69cc0: ;
            if ((*(uint *)(gen_frame + 0x3c)) == 0) {
              uVar12 = (*(uint *)(gen_frame + 0x4c));
              if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                while ((uVar17 = (*(uint *)(gen_frame + 0x70)), uVar2 = (ushort)(*(uint *)(gen_frame + 0x70)), (*(uint *)(gen_frame + 0x54)) != 0x78 &&
                       ((*(uint *)(gen_frame + 0x54)) != 0x70))) {
                  if ((((*(uint *)(gen_frame + 0x70)) & 0xff00) != 0) ||
                     (iVar7 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff), iVar7 == 0)) goto LAB_00c69eee;
                  if ((*(uint *)(gen_frame + 0x54)) == 0x6f) {
                    if (0x37 < uVar2) goto LAB_00c69eee;
                    iVar7 = uVar12 << 3;
                  }
                  else {
                    iVar7 = uVar12 * 10;
                  }
LAB_00c69eb0: ;
                  (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                  uVar12 = iVar7 + -0x30 + (uVar17 & 0xffff);
                  if (((*(int *)(gen_frame + 0x48)) != 0) && (iVar7 = (*(int *)(gen_frame + 0x6c)) + -1, (*(int *)(gen_frame + 0x6c)) = iVar7, iVar7 == 0))
                  goto LAB_00c69f02;
                  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
                  wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
                }
                if ((((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) && (iVar7 = F_00c486bb((*(uint *)(gen_frame + 0x70)) & 0xff), iVar7 != 0)
                   ) {
                  iVar7 = uVar12 << 4;
                  uVar2 = F_00c68f3d(uVar17);
                  uVar17 = (uint)uVar2;
                  (*(uint *)(gen_frame + 0x70)) = uVar17;
                  goto LAB_00c69eb0;
                }
LAB_00c69eee: ;
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
                F_00c68f7e(uVar17,(*(undefined * PTR32 *)(gen_frame + 0x64)));
              }
LAB_00c69f02: ;
              if ((*(char *)(gen_frame + 0x61)) != '\0') {
                uVar12 = -uVar12;
              }
            }
            else {
              if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                while ((uVar12 = (*(uint *)(gen_frame + 0x70)), uVar2 = (ushort)(*(uint *)(gen_frame + 0x70)), (*(uint *)(gen_frame + 0x54)) != 0x78 &&
                       ((*(uint *)(gen_frame + 0x54)) != 0x70))) {
                  if ((((*(uint *)(gen_frame + 0x70)) & 0xff00) != 0) ||
                     (iVar7 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff), iVar7 == 0)) goto LAB_00c69de5;
                  if ((*(uint *)(gen_frame + 0x54)) == 0x6f) {
                    if (0x37 < uVar2) goto LAB_00c69de5;
                    uVar17 = (*(uint *)(gen_frame + 0x40)) << 3;
                    (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) << 3 | (*(uint *)(gen_frame + 0x40)) >> 0x1d;
                  }
                  else {
                    lVar1 = (longlong)CONCAT44((*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x40))) * 10;
                    uVar17 = (uint)lVar1;
                    (*(uint *)(gen_frame + 0x44)) = (uint)((ulonglong)lVar1 >> 0x20);
                  }
LAB_00c69d99: ;
                  (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                  uVar12 = (uVar12 & 0xffff) - 0x30;
                  (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar17,uVar12);
                  (*(uint *)(gen_frame + 0x40)) = uVar17 + uVar12;
                  if (((*(int *)(gen_frame + 0x48)) != 0) && (iVar7 = (*(int *)(gen_frame + 0x6c)) + -1, (*(int *)(gen_frame + 0x6c)) = iVar7, iVar7 == 0))
                  goto LAB_00c69df9;
                  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
                  wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
                }
                if ((((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) && (iVar7 = F_00c486bb((*(uint *)(gen_frame + 0x70)) & 0xff), iVar7 != 0)
                   ) {
                  uVar17 = (*(uint *)(gen_frame + 0x40)) << 4;
                  (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) << 4 | (*(uint *)(gen_frame + 0x40)) >> 0x1c;
                  uVar2 = F_00c68f3d(uVar12);
                  uVar12 = (uint)uVar2;
                  (*(uint *)(gen_frame + 0x70)) = uVar12;
                  goto LAB_00c69d99;
                }
LAB_00c69de5: ;
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
                F_00c68f7e(uVar12,(*(undefined * PTR32 *)(gen_frame + 0x64)));
              }
LAB_00c69df9: ;
              uVar12 = (*(uint *)(gen_frame + 0x4c));
              if ((*(char *)(gen_frame + 0x61)) != '\0') {
                bVar19 = (*(uint *)(gen_frame + 0x40)) != 0;
                (*(uint *)(gen_frame + 0x40)) = -(*(uint *)(gen_frame + 0x40));
                (*(uint *)(gen_frame + 0x44)) = -((*(uint *)(gen_frame + 0x44)) + bVar19);
              }
            }
            if ((*(uint *)(gen_frame + 0x54)) == 0x46) {
              (*(int *)(gen_frame + 0x58)) = 0;
            }
            if ((*(int *)(gen_frame + 0x58)) != 0) {
              if ((*(char *)(gen_frame + 0x69)) == '\0') {
                (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
LAB_00c69f3f: ;
                if ((*(uint *)(gen_frame + 0x3c)) == 0) {
                  if ((*(char *)(gen_frame + 0x6a)) == '\0') {
                    *(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = (wchar_t)uVar12;
                  }
                  else {
                    *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = uVar12;
                  }
                }
                else {
                  *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x40));
                  *(uint *)((*(wchar_t * PTR32 *)(gen_frame + 0x34)) + 2) = (*(uint *)(gen_frame + 0x44));
                }
              }
              goto LAB_00c69f6b;
            }
            goto LAB_00c6a013;
          }
          if (uVar12 != 0x7b) goto LAB_00c6993b;
          if ('\0' < (*(char *)(gen_frame + 0x6b))) {
            (*(char *)(gen_frame + 0x63)) = '\x01';
          }
          pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x38)) + 1;
          if (*pwVar16 == L'^') {
            pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x38)) + 2;
            (*(byte *)(gen_frame + 0x53)) = 0xff;
          }
          if ((*(undefined * PTR32 *)(gen_frame + 0x24)) == (undefined *)0x0) {
            pvVar11 = F_00c54c2e(0x2000);
            (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar11;
            if (pvVar11 == (undefined *)0x0) goto LAB_00c6a013;
            (*(int *)(gen_frame + 0x1c)) = 1;
          }
          pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0x24));
          F_00c48350((*(undefined * PTR32 *)(gen_frame + 0x24)),0,0x2000);
          uVar12 = (*(uint *)(gen_frame + 0x14));
          if (*pwVar16 == L']') {
            *(undefined1 *)((int)pvVar11 + 0xb) = 0x20;
            uVar12 = 0x5d;
            pwVar16 = pwVar16 + 1;
          }
LAB_00c69a82: ;
          do {
            wVar3 = *pwVar16;
            if (wVar3 == L']') goto code_r0x00c69a91;
            if ((wVar3 == L'-') && ((wchar_t)uVar12 != L'\0')) {
              wVar5 = pwVar16[1];
              if (wVar5 != L']') {
                uVar17 = (uint)(ushort)wVar5;
                if ((ushort)wVar5 <= (ushort)(wchar_t)uVar12) {
                  uVar17 = uVar12 & 0xffff;
                  uVar12 = (uint)(ushort)wVar5;
                }
                (*(uint *)(gen_frame + 0x4c)) = uVar17;
                if ((ushort)uVar12 < (ushort)uVar17) {
                  uVar14 = uVar12 & 0xffff;
                  (*(uint *)(gen_frame + 0x3c)) = uVar17 - uVar12 & 0xffff;
                  do {
                    pbVar22 = ((byte *)GEN_TOP(((uVar14 >> 3) + (int)pvVar11)));
                    *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar14 & 7);
                    uVar14 = uVar14 + 1;
                    uVar12 = (*(uint *)(gen_frame + 0x3c)) - 1;
                    (*(uint *)(gen_frame + 0x3c)) = uVar12;
                  } while (uVar12 != 0);
                }
                pbVar22 = ((byte *)GEN_TOP(((uint)(ushort)((ushort)uVar17 >> 3) + (int)pvVar11)));
                *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar17 & 7);
                uVar12 = 0;
                pwVar16 = pwVar16 + 2;
                goto LAB_00c69a82;
              }
            }
            pbVar22 = ((byte *)GEN_TOP(((uint)((ushort)wVar3 >> 3) + (int)pvVar11)));
            *pbVar22 = *pbVar22 | '\x01' << ((byte)wVar3 & 7);
            uVar12 = (uint)(ushort)wVar3;
            pwVar16 = pwVar16 + 1;
          } while( true );
        }
        if (uVar12 == 0x6f) {
LAB_00c69c71: ;
          if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'-') {
            (*(char *)(gen_frame + 0x61)) = '\x01';
          }
          else if ((wchar_t)(*(uint *)(gen_frame + 0x70)) != L'+') goto LAB_00c69cc0;
          iVar7 = (*(int *)(gen_frame + 0x6c)) + -1;
          (*(int *)(gen_frame + 0x6c)) = iVar7;
          if ((iVar7 == 0) && ((*(int *)(gen_frame + 0x48)) != 0)) {
            (*(char *)(gen_frame + 0x7b)) = '\x01';
          }
          else {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
            wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
            uVar12 = (uint)wVar4;
LAB_00c69cba: ;
            (*(uint *)(gen_frame + 0x70)) = uVar12;
          }
          goto LAB_00c69cc0;
        }
        if (uVar12 == 99) {
          if ((*(int *)(gen_frame + 0x48)) == 0) {
            (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 1;
            (*(int *)(gen_frame + 0x48)) = 1;
          }
LAB_00c69824: ;
          if ('\0' < (*(char *)(gen_frame + 0x6b))) {
            (*(char *)(gen_frame + 0x63)) = '\x01';
          }
          goto LAB_00c69834;
        }
        if (uVar12 == 100) goto LAB_00c69c71;
        if (uVar12 < 0x65) {
LAB_00c6993b: ;
          if (*(*(wchar_t * PTR32 *)(gen_frame + 0x38)) == (wchar_t)(*(uint *)(gen_frame + 0x70))) {
            (*(char *)(gen_frame + 0x62)) = (*(char *)(gen_frame + 0x62)) + -1;
            if ((*(char *)(gen_frame + 0x69)) == '\0') {
              (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x18));
            }
            goto LAB_00c69f6b;
          }
          uVar20 = (undefined2)((*(uint *)(gen_frame + 0x70)) >> 0x10);
          wVar3 = (wchar_t)(*(uint *)(gen_frame + 0x70));
          goto LAB_00c6a00c;
        }
        if (0x67 < uVar12) {
          if (uVar12 == 0x69) {
            (*(uint *)(gen_frame + 0x54)) = 100;
            goto LAB_00c6937c;
          }
          if (uVar12 != 0x6e) goto LAB_00c6993b;
          uVar12 = (*(uint *)(gen_frame + 0x74));
          if ((*(char *)(gen_frame + 0x69)) != '\0') goto LAB_00c69f6b;
          goto LAB_00c69f3f;
        }
        iVar7 = 0;
        if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'-') {
          *(*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = L'-';
          iVar7 = 1;
LAB_00c693c0: ;
          (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1;
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
          wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
          (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
        }
        else if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'+') goto LAB_00c693c0;
        if ((*(int *)(gen_frame + 0x48)) == 0) {
          (*(int *)(gen_frame + 0x6c)) = -1;
        }
        if (((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) {
          do {
            iVar8 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff);
            iVar13 = (*(int *)(gen_frame + 0x6c));
            if ((iVar8 == 0) || ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 == 0)) break;
            (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
            (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar7] = (short)(char)(*(uint *)(gen_frame + 0x70));
            iVar7 = iVar7 + 1;
            uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar7,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
            if (uVar12 == 0) goto LAB_00c6a013;
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
            wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
            (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
          } while ((wVar4 & 0xff00) == 0);
        }
        iVar13 = (*(int *)(gen_frame + 0x6c));
        wVar3 = **((wchar_t * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xbc))) + 0x30)));
        if (((uint)(ushort)wVar3 == (int)(char)(*(uint *)(gen_frame + 0x70))) &&
           ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 != 0)) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
          wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
          (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar7] = wVar3;
          iVar7 = iVar7 + 1;
          uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar7,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
          if (uVar12 == 0) goto LAB_00c6a013;
          if (((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) {
            do {
              iVar8 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff);
              iVar13 = (*(int *)(gen_frame + 0x6c));
              if ((iVar8 == 0) || ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 == 0)) break;
              (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar7] = (wchar_t)(*(uint *)(gen_frame + 0x70));
              iVar7 = iVar7 + 1;
              uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar7,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
              if (uVar12 == 0) goto LAB_00c6a013;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
              wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
              (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
            } while ((wVar4 & 0xff00) == 0);
          }
        }
        iVar13 = (*(int *)(gen_frame + 0x6c));
        if (((*(int *)(gen_frame + 0x58)) != 0) &&
           ((((wchar_t)(*(uint *)(gen_frame + 0x70)) == 0x65 || ((wchar_t)(*(uint *)(gen_frame + 0x70)) == 0x45)) &&
            ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 != 0)))) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar7] = L'e';
          iVar13 = iVar7 + 1;
          uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar13,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)))
          ;
          if (uVar12 == 0) goto LAB_00c6a013;
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
          wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
          (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
          if (wVar4 == 0x2d) {
            (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar13] = L'-';
            iVar13 = iVar7 + 2;
            uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar13,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
            if (uVar12 == 0) goto LAB_00c6a013;
LAB_00c69682: ;
            iVar8 = (*(int *)(gen_frame + 0x6c));
            (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1;
            iVar7 = iVar13;
            if (iVar8 == 0) {
              (*(int *)(gen_frame + 0x6c)) = 0;
            }
            else {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
              wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
              (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
            }
          }
          else {
            iVar7 = iVar13;
            if (wVar4 == 0x2b) goto LAB_00c69682;
          }
          if (((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) {
            do {
              iVar8 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff);
              iVar13 = (*(int *)(gen_frame + 0x6c));
              if ((iVar8 == 0) || ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 == 0)) break;
              (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar7] = (wchar_t)(*(uint *)(gen_frame + 0x70));
              iVar7 = iVar7 + 1;
              uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar7,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
              if (uVar12 == 0) goto LAB_00c6a013;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
              wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
              (*(uint *)(gen_frame + 0x70)) = (uint)wVar4;
            } while ((wVar4 & 0xff00) == 0);
          }
        }
        (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
        F_00c68f7e((*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
        if ((*(int *)(gen_frame + 0x58)) == 0) goto LAB_00c6a013;
        if ((*(char *)(gen_frame + 0x69)) == '\0') {
          (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
          iVar13 = (*(int *)(gen_frame + 0x28)) * 2;
          _Size = iVar13 + 2;
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar7] = L'\0';
          pwVar15 = F_00c54c2e(_Size);
          if (pwVar15 != (wchar_t *)0x0) {
            eVar9 = F_00c4b3d6((gen_size32 *)0x0,(char *)pwVar15,_Size,(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar13 + 1);
            if ((eVar9 != 0) && ((eVar9 == 0x16 || (eVar9 == 0x22)))) {
LAB_00c69ff2: ;
                    
              F_00c4c299(pwVar15,0,0,0,0,0);
            }
            pbVar22 = ((byte *)(gen_frame + 0x4));
            uVar20 = SUB42(pwVar15,0);
            uVar21 = (undefined2)((uint)((int)(uintptr_t)pwVar15) >> 0x10);
            iVar7 = (*(char *)(gen_frame + 0x6a)) + -1;
            pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x34));
            pcVar10 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
            (*pcVar10)(iVar7,pwVar16,CONCAT22(uVar21,uVar20),pbVar22);
            F_00c4c68f(pwVar15);
            goto LAB_00c69f6b;
          }
          goto LAB_00c6a013;
        }
        goto LAB_00c69f6b;
      }
LAB_00c69f90: ;
      (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
      wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
      wVar3 = *pwVar16;
      pwVar16 = pwVar16 + 1;
      (*(uint *)(gen_frame + 0x70)) = (uint)(ushort)wVar5;
      (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar16;
      if (wVar3 == wVar5) goto LAB_00c69fbc;
LAB_00c6a000: ;
      uVar21 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x64)),0);
      uVar23 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x64))) >> 0x10);
      wVar3 = (wchar_t)(*(uint *)(gen_frame + 0x70));
      uVar20 = (undefined2)((*(uint *)(gen_frame + 0x70)) >> 0x10);
LAB_00c6a00c: ;
      F_00c68f7e(CONCAT22(uVar20,wVar3),CONCAT22(uVar23,uVar21));
LAB_00c6a013: ;
      if ((*(int *)(gen_frame + 0x1c)) == 1) {
        F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x24)));
      }
      if ((*(int *)(gen_frame + 0x2c)) == 1) {
        F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x5c)));
      }
      if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == -1) {
        iVar7 = (*(int *)(gen_frame + 0x30));
        if (((*(int *)(gen_frame + 0x30)) == 0) && ((*(char *)(gen_frame + 0x62)) == '\0')) {
          iVar7 = -1;
        }
        if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c6a08f;
      }
    }
    iVar7 = (*(int *)(gen_frame + 0x30));
    if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c6a08f: ;
  F_00c47745((*(uint *)(gen_frame + 0x338)) ^ (uint)(uint)(gen_frame + 0x33c));
  return iVar7;
code_r0x00c69a91: ;
  if (*pwVar16 != L'\0') {
    (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar16;
    uVar12 = (*(uint *)(gen_frame + 0x54));
LAB_00c69834: ;
    pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x34));
    (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
    F_00c68f7e((*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
    pwVar15 = pwVar16;
    do {
      iVar7 = (*(int *)(gen_frame + 0x6c));
      if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar7 == 0)) goto LAB_00c69c1f;
      (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
      wVar3 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
      uVar17 = (uint)(ushort)wVar3;
      (*(uint *)(gen_frame + 0x70)) = uVar17;
      if (wVar3 == L'\xffff') goto LAB_00c69c0b;
      if (uVar12 != 99) {
        if (uVar12 == 0x73) {
          if ((8 < uVar17) && (uVar17 < 0xe)) goto LAB_00c69c0b;
          if (uVar17 != 0x20) goto LAB_00c698ec;
        }
        if ((uVar12 != 0x7b) ||
           (uVar12 = (*(uint *)(gen_frame + 0x54)),
           ((int)(char)(*((byte *)GEN_TOP(((uint)((ushort)wVar3 >> 3) + (int)(*(undefined * PTR32 *)(gen_frame + 0x24))))) ^ (*(byte *)(gen_frame + 0x53))) &
           1 << ((byte)wVar3 & 7)) == 0)) goto LAB_00c69c0b;
      }
LAB_00c698ec: ;
      if ((*(char *)(gen_frame + 0x69)) == '\0') {
        if ((*(char *)(gen_frame + 0x63)) == '\0') {
          (*(uint *)(gen_frame + 0x4c)) = 0;
          eVar9 = F_00c7af62((int *)&(*(uint *)(gen_frame + 0x4c)),(char *)pwVar16,5,wVar3);
          if (eVar9 == 0) {
            pwVar16 = (wchar_t *)((int)pwVar16 + (*(uint *)(gen_frame + 0x4c)));
            goto LAB_00c69bf8;
          }
          if ((eVar9 == 0x16) || (eVar9 == 0x22)) goto LAB_00c69ff2;
        }
        else {
          *pwVar16 = wVar3;
          pwVar16 = pwVar16 + 1;
LAB_00c69bf8: ;
          (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar16;
        }
      }
      else {
        pwVar15 = pwVar15 + 1;
      }
    } while( true );
  }
  goto LAB_00c6a013;
LAB_00c69c0b: ;
  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
  F_00c68f7e((uint)(ushort)wVar3,(*(undefined * PTR32 *)(gen_frame + 0x64)));
LAB_00c69c1f: ;
  if (pwVar15 == pwVar16) goto LAB_00c6a013;
  if (((*(char *)(gen_frame + 0x69)) == '\0') && ((*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1, uVar12 != 99)) {
    if ((*(char *)(gen_frame + 0x63)) == '\0') {
      *(undefined1 *)(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = 0;
    }
    else {
      *(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = L'\0';
    }
  }
LAB_00c69f6b: ;
  (*(char *)(gen_frame + 0x62)) = (*(char *)(gen_frame + 0x62)) + '\x01';
  pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x38)) + 1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar16;
LAB_00c69fbc: ;
  (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar16;
  if (((wchar_t)(*(uint *)(gen_frame + 0x70)) == -1) && ((*pwVar16 != L'%' || (pwVar16[1] != L'n')))) goto LAB_00c6a013;
LAB_00c69fdf: ;
  wVar3 = *pwVar16;
  if (wVar3 == L'\0') goto LAB_00c6a013;
  goto LAB_00c6907e;
}

/* ref: ___check_float_string_00c6a09d */
uint F_00c6a09d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc6a09du, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if ((undefined *)*in_edi == param_4) {
      pvVar1 = F_00c54c73(_Count,4);
      *in_edi = pvVar1;
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi * 2);
    }
    else {
      pvVar1 = F_00c54d0d((undefined *)*in_edi,_Count,4);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: __hextodec_00c6a0f7 */
ushort F_00c6a0f7(unsigned int gen_a0)
{
  GEN_ENTER(0xc6a0f7u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  ushort uVar1;
  int iVar2;
  
  if (((param_1 & 0xff00) != 0) ||
     (iVar2 = F_00c48637(param_1 & 0xff), uVar1 = (ushort)param_1, iVar2 == 0)) {
    uVar1 = ((ushort)param_1 & 0xffdf) - 7;
  }
  return uVar1;
}

/* ref: FUN_00c6a12d */
uint F_00c6a12d(unsigned int gen_a0)
{
  GEN_ENTER(0xc6a12du, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  wVar1 = F_00c7d6bf(param_1);
  return CONCAT22(extraout_var,wVar1);
}

/* ref: __un_inc_00c6a138 */
uint F_00c6a138(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6a138u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  if ((ushort)param_1 != 0xffff) {
    wVar1 = F_00c7d8e0((ushort)param_1,param_2);
    return CONCAT22(extraout_var,wVar1);
  }
  return 0xffff;
}

/* ref: __whiteout_00c6a150 */
ushort F_00c6a150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6a150u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ushort _C;
  int iVar1;
  
  do {
    *in_esi = *in_esi + 1;
    _C = F_00c7d6bf(param_2);
    if (_C == 0xffff) {
      return 0xffff;
    }
    iVar1 = F_00c7db09(_C,8);
  } while (iVar1 != 0);
  return _C;
}

/* ref: __winput_s_l */
int F_00c6a182(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6a182u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x350];
  gen_size32 _Size;
  wchar_t wVar1;
  gen_size32 rVar2;
  undefined * pcVar3;
  ushort uVar4;
  wchar_t wVar5;
  ushort wVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  char * _Dst;
  int eVar10;
  code * pcVar11;
  undefined * pvVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  wchar_t * pwVar17;
  wchar_t * pwVar18;
  bool bVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  byte * pbVar22;
  
  (*(uint *)(gen_frame + 0x348)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = _File;
  (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = param_2;
  (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = ((wchar_t *)(gen_frame + 0x8c));
  (*(int *)(gen_frame + 0x30)) = 0x15e;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x7c)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  if ((param_2 == (wchar_t *)0x0) || (_File == (undefined *)0x0)) {
    piVar7 = F_00c51f85();
    *piVar7 = 0x16;
    F_00c4c305();
    iVar8 = -1;
  }
  else {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),_Locale);
    wVar5 = *param_2;
    (*(char *)(gen_frame + 0x6a)) = '\0';
    (*(uint *)(gen_frame + 0x84)) = 0;
    (*(int *)(gen_frame + 0x38)) = 0;
    if (wVar5 != L'\0') {
      do {
        iVar8 = F_00c7db09(wVar5,8);
        uVar20 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x6c)),0);
        uVar21 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x6c))) >> 0x10);
        if (iVar8 == 0) {
          pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x48));
          if (*(*(wchar_t * PTR32 *)(gen_frame + 0x48)) == L'%') {
            if ((*(wchar_t * PTR32 *)(gen_frame + 0x48))[1] == L'%') {
              if ((*(wchar_t * PTR32 *)(gen_frame + 0x48))[1] == L'%') {
                pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x48)) + 1;
              }
              goto LAB_00c6b1e7;
            }
            (*(uint *)(gen_frame + 0x58)) = 0;
            (*(int *)(gen_frame + 0x60)) = 0;
            (*(int *)(gen_frame + 0x40)) = 0;
            (*(int *)(gen_frame + 0x74)) = 0;
            (*(gen_size32 *)(gen_frame + 0x3c)) = 0;
            (*(byte *)(gen_frame + 0x4f)) = 0;
            (*(char *)(gen_frame + 0x69)) = '\0';
            (*(char *)(gen_frame + 0x7b)) = '\0';
            (*(char *)(gen_frame + 0x8b)) = '\0';
            (*(char *)(gen_frame + 0x6b)) = '\0';
            (*(char *)(gen_frame + 0x83)) = '\0';
            (*(char *)(gen_frame + 0x73)) = '\x01';
            (*(uint *)(gen_frame + 0x5c)) = 0;
            pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x48));
            do {
              pwVar18 = pwVar17 + 1;
              uVar16 = (uint)(ushort)*pwVar18;
              if (((*pwVar18 & 0xff00U) == 0) && (iVar8 = F_00c48637(uVar16 & 0xff), iVar8 != 0)) {
                (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) * 10 + -0x30 + uVar16;
              }
              else if (uVar16 < 0x4f) {
                if (uVar16 != 0x4e) {
                  if (uVar16 == 0x2a) {
                    (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) + '\x01';
                  }
                  else if (uVar16 != 0x46) {
                    if (uVar16 == 0x49) {
                      wVar5 = pwVar17[2];
                      if ((wVar5 == L'6') && (pwVar17[3] == L'4')) {
                        pwVar18 = pwVar17 + 3;
                        goto LAB_00c6a38f;
                      }
                      if ((wVar5 == L'3') && (pwVar17[3] == L'2')) {
                        pwVar18 = pwVar17 + 3;
                      }
                      else if ((wVar5 != L'd') &&
                              ((((wVar5 != L'i' && (wVar5 != L'o')) && (wVar5 != L'x')) &&
                               (wVar5 != L'X')))) goto LAB_00c6a3e6;
                    }
                    else if (uVar16 == 0x4c) {
                      (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + '\x01';
                    }
                    else {
LAB_00c6a3e6: ;
                      (*(char *)(gen_frame + 0x8b)) = (*(char *)(gen_frame + 0x8b)) + '\x01';
                    }
                  }
                }
              }
              else if (uVar16 == 0x68) {
                (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + -1;
                (*(char *)(gen_frame + 0x83)) = (*(char *)(gen_frame + 0x83)) + -1;
              }
              else {
                if (uVar16 == 0x6c) {
                  if (pwVar17[2] == L'l') {
                    pwVar18 = pwVar17 + 2;
LAB_00c6a38f: ;
                    (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x5c)) + 1;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = 0;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = 0;
                    (*(longlong *)(gen_frame + 0x50)) = 0;
                    goto LAB_00c6a414;
                  }
                  (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + '\x01';
                }
                else if (uVar16 != 0x77) goto LAB_00c6a3e6;
                (*(char *)(gen_frame + 0x83)) = (*(char *)(gen_frame + 0x83)) + '\x01';
              }
LAB_00c6a414: ;
              pwVar17 = pwVar18;
            } while ((*(char *)(gen_frame + 0x8b)) == '\0');
            (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar18;
            if ((*(char *)(gen_frame + 0x7b)) == '\0') {
              pwVar17 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x24));
              (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x24));
              (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 4;
            }
            else {
              pwVar17 = (wchar_t *)0x0;
            }
            (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = pwVar17;
            (*(char *)(gen_frame + 0x8b)) = '\0';
            if (((*(char *)(gen_frame + 0x83)) == '\0') &&
               ((*pwVar18 == L'S' || ((*(char *)(gen_frame + 0x83)) = '\x01', *pwVar18 == L'C')))) {
              (*(char *)(gen_frame + 0x83)) = -1;
            }
            uVar16 = (ushort)*pwVar18 | 0x20;
            (*(uint *)(gen_frame + 0x34)) = uVar16;
            if (uVar16 != 0x6e) {
              if ((uVar16 == 99) || (uVar16 == 0x7b)) {
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                uVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
              }
              else {
                uVar4 = F_00c6a150(&(*(uint *)(gen_frame + 0x84)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
              }
              (*(uint *)(gen_frame + 0x7c)) = (uint)uVar4;
              if (uVar4 == 0xffff) break;
            }
            pcVar3 = (*(undefined * PTR32 *)(gen_frame + 0x20));
            if (((*(int *)(gen_frame + 0x40)) != 0) && ((*(int *)(gen_frame + 0x74)) == 0)) goto LAB_00c6b2b2;
            if (((*(char *)(gen_frame + 0x7b)) == '\0') && (((uVar16 == 99 || (uVar16 == 0x73)) || (uVar16 == 0x7b)))) {
              pwVar17 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x20));
              (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
              (*(undefined * PTR32 *)(gen_frame + 0x24)) = pcVar3 + 8;
              rVar2 = *(gen_size32 *)(pcVar3 + 4);
              (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = pwVar17;
              (*(gen_size32 *)(gen_frame + 0x3c)) = rVar2;
              if (rVar2 == 0) {
                if ((*(char *)(gen_frame + 0x83)) < '\x01') {
                  *(undefined1 *)pwVar17 = 0;
                }
                else {
                  *pwVar17 = L'\0';
                }
                piVar7 = F_00c51f85();
                *piVar7 = 0xc;
                break;
              }
            }
            if (uVar16 < 0x70) {
              if (uVar16 == 0x6f) {
LAB_00c6aeae: ;
                if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'-') {
                  (*(char *)(gen_frame + 0x69)) = '\x01';
                }
                else if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) != L'+') goto LAB_00c6aefd;
                iVar8 = (*(int *)(gen_frame + 0x74)) + -1;
                (*(int *)(gen_frame + 0x74)) = iVar8;
                if ((iVar8 == 0) && ((*(int *)(gen_frame + 0x40)) != 0)) {
                  (*(char *)(gen_frame + 0x8b)) = '\x01';
                }
                else {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  uVar13 = (uint)wVar6;
LAB_00c6aef7: ;
                  (*(uint *)(gen_frame + 0x7c)) = uVar13;
                }
                goto LAB_00c6aefd;
              }
              if (uVar16 == 99) {
                if ((*(int *)(gen_frame + 0x40)) == 0) {
                  (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                  (*(int *)(gen_frame + 0x40)) = 1;
                }
LAB_00c6aa44: ;
                if ('\0' < (*(char *)(gen_frame + 0x83))) {
                  (*(char *)(gen_frame + 0x6b)) = '\x01';
                }
                goto LAB_00c6aa54;
              }
              if (uVar16 == 100) goto LAB_00c6aeae;
              if (uVar16 < 0x65) {
LAB_00c6ab79: ;
                if (*(*(wchar_t * PTR32 *)(gen_frame + 0x48)) != (wchar_t)(*(uint *)(gen_frame + 0x7c))) {
                  F_00c6a138((*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(int *)(gen_frame + 0x18)) = 1;
                  break;
                }
                (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + -1;
                if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x20));
                }
              }
              else {
                if (0x67 < uVar16) {
                  if (uVar16 == 0x69) {
                    (*(uint *)(gen_frame + 0x34)) = 100;
                    uVar16 = 100;
                    goto LAB_00c6a59c;
                  }
                  if (uVar16 != 0x6e) goto LAB_00c6ab79;
                  uVar16 = (*(uint *)(gen_frame + 0x84));
                  if ((*(char *)(gen_frame + 0x7b)) != '\0') goto LAB_00c6b1c2;
                  goto LAB_00c6b196;
                }
                iVar8 = 0;
                if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'-') {
                  *(*(wchar_t * PTR32 *)(gen_frame + 0x64)) = L'-';
                  iVar8 = 1;
LAB_00c6a5e0: ;
                  (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                }
                else if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'+') goto LAB_00c6a5e0;
                if ((*(int *)(gen_frame + 0x40)) == 0) {
                  (*(int *)(gen_frame + 0x74)) = -1;
                }
                if (((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) {
                  do {
                    iVar9 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff);
                    iVar15 = (*(int *)(gen_frame + 0x74));
                    if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar15 == 0)) break;
                    (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = (short)(char)(*(uint *)(gen_frame + 0x7c));
                    iVar8 = iVar8 + 1;
                    uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar8,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                    if (uVar16 == 0) goto LAB_00c6b2c5;
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                    wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  } while ((wVar6 & 0xff00) == 0);
                }
                iVar15 = (*(int *)(gen_frame + 0x74));
                wVar5 = **((wchar_t * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xbc))) + 0x30)));
                if (((uint)(ushort)wVar5 == (int)(char)(*(uint *)(gen_frame + 0x7c))) &&
                   ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar15 != 0)) {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = wVar5;
                  iVar8 = iVar8 + 1;
                  uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar8,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                  if (uVar16 == 0) break;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) {
                    do {
                      iVar9 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff);
                      iVar15 = (*(int *)(gen_frame + 0x74));
                      if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar15 == 0)) break;
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = (wchar_t)(*(uint *)(gen_frame + 0x7c));
                      iVar8 = iVar8 + 1;
                      uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar8,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                      if (uVar16 == 0) goto LAB_00c6b2c5;
                      (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                    } while ((wVar6 & 0xff00) == 0);
                  }
                }
                iVar15 = (*(int *)(gen_frame + 0x74));
                if (((*(int *)(gen_frame + 0x60)) != 0) &&
                   ((((wchar_t)(*(uint *)(gen_frame + 0x7c)) == 0x65 || ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == 0x45)) &&
                    ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar15 != 0)))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = L'e';
                  iVar15 = iVar8 + 1;
                  uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar15,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                  if (uVar16 == 0) break;
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  if (wVar6 == 0x2d) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar15] = L'-';
                    iVar15 = iVar8 + 2;
                    uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar15,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                    if (uVar16 == 0) break;
LAB_00c6a8a2: ;
                    iVar9 = (*(int *)(gen_frame + 0x74));
                    (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                    iVar8 = iVar15;
                    if (iVar9 == 0) {
                      (*(int *)(gen_frame + 0x74)) = 0;
                    }
                    else {
                      (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                    }
                  }
                  else {
                    iVar8 = iVar15;
                    if (wVar6 == 0x2b) goto LAB_00c6a8a2;
                  }
                  if (((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) {
                    do {
                      iVar9 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff);
                      iVar15 = (*(int *)(gen_frame + 0x74));
                      if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar15 == 0)) break;
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = (wchar_t)(*(uint *)(gen_frame + 0x7c));
                      iVar8 = iVar8 + 1;
                      uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar8,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                      if (uVar16 == 0) goto LAB_00c6b2c5;
                      (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                    } while ((wVar6 & 0xff00) == 0);
                  }
                }
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
                F_00c6a138((*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                if ((*(int *)(gen_frame + 0x60)) == 0) break;
                if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                  (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 1;
                  iVar15 = (*(int *)(gen_frame + 0x30)) * 2;
                  _Size = iVar15 + 2;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = L'\0';
                  _Dst = F_00c54c2e(_Size);
                  if (_Dst != (char *)0x0) {
                    eVar10 = F_00c4b3d6((gen_size32 *)0x0,_Dst,_Size,(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar15 + 1);
                    if ((eVar10 != 0) && ((eVar10 == 0x16 || (eVar10 == 0x22)))) {
                    
                      F_00c4c299(_Dst,0,0,0,0,0);
                    }
                    pbVar22 = ((byte *)(gen_frame + 0x8));
                    uVar20 = SUB42(_Dst,0);
                    uVar21 = (undefined2)((uint)((int)(uintptr_t)_Dst) >> 0x10);
                    iVar8 = (*(char *)(gen_frame + 0x73)) + -1;
                    pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x44));
                    pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
                    (*pcVar11)(iVar8,pwVar17,CONCAT22(uVar21,uVar20),pbVar22);
                    F_00c4c68f(_Dst);
                    goto LAB_00c6b1c2;
                  }
                  break;
                }
              }
            }
            else {
              if (uVar16 == 0x70) {
                (*(char *)(gen_frame + 0x73)) = '\x01';
                goto LAB_00c6aeae;
              }
              if (uVar16 == 0x73) goto LAB_00c6aa44;
              if (uVar16 == 0x75) goto LAB_00c6aeae;
              if (uVar16 != 0x78) {
                if (uVar16 != 0x7b) goto LAB_00c6ab79;
                if ('\0' < (*(char *)(gen_frame + 0x83))) {
                  (*(char *)(gen_frame + 0x6b)) = '\x01';
                }
                pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x48)) + 1;
                if ((*(wchar_t * PTR32 *)(gen_frame + 0x48))[1] == L'^') {
                  pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x48)) + 2;
                  (*(byte *)(gen_frame + 0x4f)) = 0xff;
                }
                if ((*(undefined * PTR32 *)(gen_frame + 0x28)) == (undefined *)0x0) {
                  pvVar12 = F_00c54c2e(0x2000);
                  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar12;
                  if (pvVar12 == (undefined *)0x0) break;
                  (*(int *)(gen_frame + 0x1c)) = 1;
                }
                pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x28));
                F_00c48350((*(undefined * PTR32 *)(gen_frame + 0x28)),0,0x2000);
                if (*pwVar17 == L']') {
                  *(undefined1 *)((int)pvVar12 + 0xb) = 0x20;
                  uVar16 = 0x5d;
                  pwVar17 = pwVar17 + 1;
                }
                else {
                  uVar16 = 0;
                }
LAB_00c6acc1: ;
                do {
                  wVar5 = *pwVar17;
                  if (wVar5 == L']') goto code_r0x00c6acd0;
                  if ((wVar5 == L'-') && ((wchar_t)uVar16 != L'\0')) {
                    wVar1 = pwVar17[1];
                    uVar13 = (uint)(ushort)wVar1;
                    if (wVar1 != L']') {
                      uVar14 = uVar16;
                      if ((ushort)(wchar_t)uVar16 < (ushort)wVar1) {
                        uVar14 = uVar13;
                        uVar13 = uVar16;
                      }
                      (*(uint *)(gen_frame + 0x5c)) = uVar14;
                      if ((ushort)uVar13 < (ushort)uVar14) {
                        (*(uint *)(gen_frame + 0x58)) = uVar14 - uVar13 & 0xffff;
                        do {
                          pbVar22 = ((byte *)GEN_TOP(((uVar13 >> 3) + (int)pvVar12)));
                          *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar13 & 7);
                          uVar13 = uVar13 + 1;
                          uVar16 = (*(uint *)(gen_frame + 0x58)) - 1;
                          (*(uint *)(gen_frame + 0x58)) = uVar16;
                        } while (uVar16 != 0);
                      }
                      pbVar22 = ((byte *)GEN_TOP(((uint)(ushort)((ushort)uVar14 >> 3) + (int)pvVar12)));
                      *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar14 & 7);
                      uVar16 = 0;
                      pwVar17 = pwVar17 + 2;
                      goto LAB_00c6acc1;
                    }
                  }
                  pbVar22 = ((byte *)GEN_TOP(((uint)((ushort)wVar5 >> 3) + (int)pvVar12)));
                  *pbVar22 = *pbVar22 | '\x01' << ((byte)wVar5 & 7);
                  uVar16 = (uint)(ushort)wVar5;
                  pwVar17 = pwVar17 + 1;
                } while( true );
              }
LAB_00c6a59c: ;
              if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'-') {
                (*(char *)(gen_frame + 0x69)) = '\x01';
LAB_00c6acf9: ;
                iVar8 = (*(int *)(gen_frame + 0x74)) + -1;
                (*(int *)(gen_frame + 0x74)) = iVar8;
                if ((iVar8 == 0) && ((*(int *)(gen_frame + 0x40)) != 0)) {
                  (*(char *)(gen_frame + 0x8b)) = '\x01';
                }
                else {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                }
              }
              else if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'+') goto LAB_00c6acf9;
              if ((short)(*(uint *)(gen_frame + 0x7c)) == 0x30) {
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                if ((wVar6 == 0x78) || (wVar6 == 0x58)) {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  if (((*(int *)(gen_frame + 0x40)) != 0) && (iVar8 = (*(int *)(gen_frame + 0x74)) + -2, (*(int *)(gen_frame + 0x74)) = iVar8, iVar8 < 1)) {
                    (*(char *)(gen_frame + 0x8b)) = (*(char *)(gen_frame + 0x8b)) + '\x01';
                  }
                  (*(uint *)(gen_frame + 0x34)) = 0x78;
                  uVar16 = (*(uint *)(gen_frame + 0x34));
                }
                else {
                  (*(int *)(gen_frame + 0x60)) = 1;
                  if (uVar16 == 0x78) {
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
                    F_00c6a138((uint)wVar6,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    uVar13 = 0x30;
                    goto LAB_00c6aef7;
                  }
                  if (((*(int *)(gen_frame + 0x40)) != 0) && (iVar8 = (*(int *)(gen_frame + 0x74)) + -1, (*(int *)(gen_frame + 0x74)) = iVar8, iVar8 == 0)) {
                    (*(char *)(gen_frame + 0x8b)) = (*(char *)(gen_frame + 0x8b)) + '\x01';
                  }
                  (*(uint *)(gen_frame + 0x34)) = 0x6f;
                  uVar16 = (*(uint *)(gen_frame + 0x34));
                }
              }
LAB_00c6aefd: ;
              if ((*(uint *)(gen_frame + 0x5c)) == 0) {
                if ((*(char *)(gen_frame + 0x8b)) == '\0') {
                  while ((uVar13 = (*(uint *)(gen_frame + 0x7c)), uVar4 = (ushort)(*(uint *)(gen_frame + 0x7c)), uVar16 != 0x78 &&
                         (uVar16 != 0x70))) {
                    if ((((*(uint *)(gen_frame + 0x7c)) & 0xff00) != 0) ||
                       (iVar8 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff), iVar8 == 0)) goto LAB_00c6b13f;
                    if (uVar16 == 0x6f) {
                      if (0x37 < uVar4) goto LAB_00c6b13f;
                      uVar14 = (*(uint *)(gen_frame + 0x58)) << 3;
                    }
                    else {
                      uVar14 = (*(uint *)(gen_frame + 0x58)) * 10;
                    }
LAB_00c6b0fb: ;
                    (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                    (*(uint *)(gen_frame + 0x58)) = uVar14 + -0x30 + (uVar13 & 0xffff);
                    if (((*(int *)(gen_frame + 0x40)) != 0) && (iVar8 = (*(int *)(gen_frame + 0x74)) + -1, (*(int *)(gen_frame + 0x74)) = iVar8, iVar8 == 0))
                    goto LAB_00c6b153;
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                    wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  }
                  if ((((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) &&
                     (iVar8 = F_00c486bb((*(uint *)(gen_frame + 0x7c)) & 0xff), iVar8 != 0)) {
                    (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) << 4;
                    uVar4 = F_00c6a0f7(uVar13);
                    uVar13 = (uint)uVar4;
                    (*(uint *)(gen_frame + 0x7c)) = uVar13;
                    uVar14 = (*(uint *)(gen_frame + 0x58));
                    goto LAB_00c6b0fb;
                  }
LAB_00c6b13f: ;
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
                  F_00c6a138(uVar13,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                }
LAB_00c6b153: ;
                if ((*(char *)(gen_frame + 0x69)) != '\0') {
                  (*(uint *)(gen_frame + 0x58)) = -(*(uint *)(gen_frame + 0x58));
                }
              }
              else {
                if ((*(char *)(gen_frame + 0x8b)) == '\0') {
                  while ((uVar13 = (*(uint *)(gen_frame + 0x7c)), uVar4 = (ushort)(*(uint *)(gen_frame + 0x7c)), uVar16 != 0x78 &&
                         (uVar16 != 0x70))) {
                    if ((((*(uint *)(gen_frame + 0x7c)) & 0xff00) != 0) ||
                       (iVar8 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff), iVar8 == 0)) goto LAB_00c6b027;
                    if (uVar16 == 0x6f) {
                      if (0x37 < uVar4) goto LAB_00c6b027;
                      uVar14 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) << 3 | (uint)(*(longlong *)(gen_frame + 0x50)) >> 0x1d;
                      iVar8 = (uint)(*(longlong *)(gen_frame + 0x50)) << 3;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = iVar8;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = uVar14;
                      (*(longlong *)(gen_frame + 0x50)) = CONCAT44(uVar14,iVar8);
                    }
                    else {
                      (*(longlong *)(gen_frame + 0x50)) = (*(longlong *)(gen_frame + 0x50)) * 10;
                    }
LAB_00c6afdd: ;
                    (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                    uVar13 = (uVar13 & 0xffff) - 0x30;
                    bVar19 = CARRY4((uint)(*(longlong *)(gen_frame + 0x50)),uVar13);
                    iVar8 = (uint)(*(longlong *)(gen_frame + 0x50)) + uVar13;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = iVar8;
                    iVar15 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) + ((int)uVar13 >> 0x1f) + (uint)bVar19;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = iVar15;
                    (*(longlong *)(gen_frame + 0x50)) = CONCAT44(iVar15,iVar8);
                    if (((*(int *)(gen_frame + 0x40)) != 0) && (iVar8 = (*(int *)(gen_frame + 0x74)) + -1, (*(int *)(gen_frame + 0x74)) = iVar8, iVar8 == 0))
                    goto LAB_00c6b03b;
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                    wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  }
                  if ((((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) &&
                     (iVar8 = F_00c486bb((*(uint *)(gen_frame + 0x7c)) & 0xff), iVar8 != 0)) {
                    uVar14 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) << 4 | (uint)(*(longlong *)(gen_frame + 0x50)) >> 0x1c;
                    iVar8 = (uint)(*(longlong *)(gen_frame + 0x50)) << 4;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = iVar8;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = uVar14;
                    (*(longlong *)(gen_frame + 0x50)) = CONCAT44(uVar14,iVar8);
                    uVar4 = F_00c6a0f7(uVar13);
                    uVar13 = (uint)uVar4;
                    (*(uint *)(gen_frame + 0x7c)) = uVar13;
                    goto LAB_00c6afdd;
                  }
LAB_00c6b027: ;
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
                  F_00c6a138(uVar13,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                }
LAB_00c6b03b: ;
                if ((*(char *)(gen_frame + 0x69)) != '\0') {
                  iVar8 = -(uint)(*(longlong *)(gen_frame + 0x50));
                  iVar15 = -((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) + ((uint)(*(longlong *)(gen_frame + 0x50)) != 0));
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = iVar8;
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = iVar15;
                  (*(longlong *)(gen_frame + 0x50)) = CONCAT44(iVar15,iVar8);
                }
              }
              if (uVar16 == 0x46) {
                (*(int *)(gen_frame + 0x60)) = 0;
              }
              if ((*(int *)(gen_frame + 0x60)) == 0) break;
              if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 1;
                uVar16 = (*(uint *)(gen_frame + 0x58));
LAB_00c6b196: ;
                if ((*(uint *)(gen_frame + 0x5c)) == 0) {
                  if ((*(char *)(gen_frame + 0x73)) == '\0') {
                    *(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = (wchar_t)uVar16;
                  }
                  else {
                    *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = uVar16;
                  }
                }
                else {
                  *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = (uint)(*(longlong *)(gen_frame + 0x50));
                  *(uint *)((*(wchar_t * PTR32 *)(gen_frame + 0x44)) + 2) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4));
                }
              }
            }
LAB_00c6b1c2: ;
            (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + '\x01';
            (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = (*(wchar_t * PTR32 *)(gen_frame + 0x48)) + 1;
          }
          else {
LAB_00c6b1e7: ;
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
            wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
            (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar17 + 1;
            (*(uint *)(gen_frame + 0x7c)) = (uint)(ushort)wVar5;
            if (*pwVar17 != wVar5) {
LAB_00c6b2b2: ;
              F_00c6a138((*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
              break;
            }
          }
          if (((wchar_t)(*(uint *)(gen_frame + 0x7c)) == -1) && ((*(*(wchar_t * PTR32 *)(gen_frame + 0x48)) != L'%' || ((*(wchar_t * PTR32 *)(gen_frame + 0x48))[1] != L'n')))) break;
        }
        else {
          (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
          uVar4 = F_00c6a150(&(*(uint *)(gen_frame + 0x84)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
          F_00c6a138((uint)uVar4,CONCAT22(uVar21,uVar20));
          pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x48));
          do {
            pwVar17 = pwVar17 + 1;
            iVar8 = F_00c7db09(*pwVar17,8);
          } while (iVar8 != 0);
          (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar17;
        }
        wVar5 = *(*(wchar_t * PTR32 *)(gen_frame + 0x48));
      } while (wVar5 != L'\0');
LAB_00c6b2c5: ;
      if ((*(int *)(gen_frame + 0x1c)) == 1) {
        F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x28)));
      }
      if ((*(int *)(gen_frame + 0x2c)) == 1) {
        F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x64)));
      }
      if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == -1) {
        iVar8 = (*(int *)(gen_frame + 0x38));
        if (((*(int *)(gen_frame + 0x38)) == 0) && ((*(char *)(gen_frame + 0x6a)) == '\0')) {
          iVar8 = -1;
        }
        if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c6b35a;
      }
      if ((*(int *)(gen_frame + 0x18)) == 1) {
        piVar7 = F_00c51f85();
        *piVar7 = 0x16;
        F_00c4c305();
      }
    }
    iVar8 = (*(int *)(gen_frame + 0x38));
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c6b35a: ;
  F_00c47745((*(uint *)(gen_frame + 0x348)) ^ (uint)(uint)(gen_frame + 0x34c));
  return iVar8;
code_r0x00c6acd0: ;
  if (*pwVar17 != L'\0') {
    (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar17;
    uVar16 = (*(uint *)(gen_frame + 0x34));
LAB_00c6aa54: ;
    pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x44));
    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
    F_00c6a138((*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
    pwVar18 = pwVar17;
    if (uVar16 == 99) goto LAB_00c6aa7a;
LAB_00c6aa74: ;
    (*(gen_size32 *)(gen_frame + 0x3c)) = (*(gen_size32 *)(gen_frame + 0x3c)) - 1;
LAB_00c6aa7a: ;
    do {
      iVar8 = (*(int *)(gen_frame + 0x74));
      if (((*(int *)(gen_frame + 0x40)) != 0) && ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar8 == 0)) {
LAB_00c6ae5c: ;
        if (pwVar18 == pwVar17) break;
        if (((*(char *)(gen_frame + 0x7b)) == '\0') && ((*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 1, uVar16 != 99)) {
          if ((*(char *)(gen_frame + 0x6b)) == '\0') {
            *(undefined1 *)(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = 0;
          }
          else {
            *(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = L'\0';
          }
        }
        goto LAB_00c6b1c2;
      }
      (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
      wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
      uVar13 = (uint)(ushort)wVar5;
      (*(uint *)(gen_frame + 0x7c)) = uVar13;
      if (wVar5 == L'\xffff') {
LAB_00c6ae48: ;
        (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
        F_00c6a138((uint)(ushort)wVar5,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
        goto LAB_00c6ae5c;
      }
      if (uVar16 != 99) {
        if (uVar16 == 0x73) {
          if ((8 < uVar13) && (uVar13 < 0xe)) goto LAB_00c6ae48;
          if (uVar13 != 0x20) goto LAB_00c6ab17;
        }
        if ((uVar16 != 0x7b) ||
           (uVar16 = (*(uint *)(gen_frame + 0x34)),
           ((int)(char)(*((byte *)GEN_TOP(((uint)((ushort)wVar5 >> 3) + (int)(*(undefined * PTR32 *)(gen_frame + 0x28))))) ^ (*(byte *)(gen_frame + 0x4f))) &
           1 << ((byte)wVar5 & 7)) == 0)) goto LAB_00c6ae48;
      }
LAB_00c6ab17: ;
      if ((*(char *)(gen_frame + 0x7b)) == '\0') {
        if ((*(gen_size32 *)(gen_frame + 0x3c)) != 0) {
          if ((*(char *)(gen_frame + 0x6b)) != '\0') goto code_r0x00c6ab3e;
          (*(uint *)(gen_frame + 0x5c)) = 0;
          eVar10 = F_00c7af62((int *)&(*(uint *)(gen_frame + 0x5c)),(char *)pwVar17,(*(gen_size32 *)(gen_frame + 0x3c)),wVar5);
          if (eVar10 != 0x22) {
            if (0 < (int)(*(uint *)(gen_frame + 0x5c))) {
              pwVar17 = (wchar_t *)((int)pwVar17 + (*(uint *)(gen_frame + 0x5c)));
              (*(gen_size32 *)(gen_frame + 0x3c)) = (*(gen_size32 *)(gen_frame + 0x3c)) - (*(uint *)(gen_frame + 0x5c));
              (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = pwVar17;
            }
            goto LAB_00c6aa7a;
          }
        }
        piVar7 = F_00c51f85();
        *piVar7 = 0xc;
        if ((*(char *)(gen_frame + 0x6b)) == '\0') {
          *(undefined1 *)pwVar18 = 0;
        }
        else {
          *pwVar18 = L'\0';
        }
        break;
      }
      pwVar18 = pwVar18 + 1;
    } while( true );
  }
  goto LAB_00c6b2c5;
code_r0x00c6ab3e: ;
  *pwVar17 = wVar5;
  pwVar17 = pwVar17 + 1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = pwVar17;
  goto LAB_00c6aa74;
}

/* ref: FUN_00c6b370 */
float10 F_00c6b370(float gen_a0, float gen_a1, float gen_a2, double gen_a3)
{
  GEN_ENTER(0xc6b370u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), (unsigned int)gen_trace_d(gen_a3));
  float in_xmm2 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm4 = (float)gen_a2;
  float10 in_st0 = (float10)gen_a3;
  double in_xmm0;
  float10 fVar1;
  undefined4 in_XMM2_Db = 0;
  undefined4 in_XMM3_Db = 0;
  undefined4 in_XMM4_Db = 0;
  
  in_xmm0 = (double)in_st0;
  fVar1 = F_00c6b38e(in_xmm0,GEN_TOD(gen_bits2d(CONCAT44(in_XMM2_Db,(uint)gen_fl2bits(in_xmm2)))),GEN_TOD(gen_bits2d(CONCAT44(in_XMM3_Db,(uint)gen_fl2bits(in_xmm3)))),GEN_TOD(gen_bits2d(CONCAT44(in_XMM4_Db,(uint)gen_fl2bits(in_xmm4)))),
                       (int)(ulonglong)gen_d2bits(in_xmm0),
                       (int)((ulonglong)gen_d2bits(in_xmm0) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c6b95c */
unsigned int F_00c6b95c(double gen_a0)
{
  GEN_ENTER(0xc6b95cu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  return 0;
}

/* ref: __cintrindisp2 */
float10 F_00c6b9a0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc6b9a0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  undefined4 in_edx = (undefined4)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  undefined1 gen_out[0x4];
  float10 fVar1;
  
  fVar1 = (float10)F_00c5ec37(in_edx,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba63(fVar1,(gen_out + 0x0));
  return fVar1;
}

/* ref: __cintrindisp1 */
float10 F_00c6b9de(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc6b9deu, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  undefined4 in_edx = (undefined4)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  undefined1 gen_out[0x4];
  float10 fVar1;
  
  fVar1 = (float10)F_00c5ebd0(in_edx,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba63(fVar1,(gen_out + 0x0));
  return fVar1;
}

/* ref: __ctrandisp2 */
float F_00c6ba1b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6ba1bu, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined1 gen_out[0x4];
  undefined4 in_EDX = 0;
  float10 in_st0;
  float10 fVar1;
  
  F_00c6bbdd(param_1,param_2);
  F_00c6bbdd(param_3,param_4);
  F_00c5ec37(in_EDX,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba5c((gen_out + 0x0));
  return (float)fVar1;
}

/* ref: __ctrandisp1 */
float F_00c6bbaa(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6bbaau, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  undefined4 in_EDX = 0;
  float10 in_st0;
  float10 fVar1;
  
  F_00c6bbdd(param_1,param_2);
  F_00c5ebd0(in_EDX,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba5c((gen_out + 0x0));
  return (float)fVar1;
}

/* ref: __fload */
uint F_00c6bbdd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6bbddu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(*(undefined2 *)((char *)&(*(int *)&gen_args[1]) + 2))) & 0xffff7ff0;
  if ((short)uVar1 == 0x7ff0) {
    uVar1 = (*(int *)&gen_args[1]) << 0xb | (*(uint *)&gen_args[0]) >> 0x15;
  }
  return uVar1;
}

/* ref: FUN_00c6bc20 */
float10 F_00c6bc20(double gen_a0)
{
  GEN_ENTER(0xc6bc20u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  double in_xmm0;
  float10 fVar1;
  
  in_xmm0 = (double)in_st0;
  fVar1 = F_00c6bc3e(in_xmm0,(int)(ulonglong)gen_d2bits(in_xmm0),
                       (int)((ulonglong)gen_d2bits(in_xmm0) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c6bc3e */
float10 F_00c6bc3e(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6bc3eu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  gen_args[3] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = (ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar6 = *(double *)&REFG(undefined, 0x11231c0) * (*(double *)&gen_args[0]) + *(double *)&REFG(undefined, 0x11231a0);
    dVar7 = (*(double *)&REFG(undefined, 0x11231c8) * (*(double *)&gen_args[0]) + *(double *)&REFG(undefined, 0x11231a8)) -
            *(double *)&REFG(undefined, 0x11231a8);
    uVar1 = (uint)(ulonglong)gen_d2bits(dVar6);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar5 = ((*(double *)&gen_args[0]) - *(double *)&REFG(undefined, 0x11231d0) * (dVar6 - *(double *)&REFG(undefined, 0x11231a0))) -
            *(double *)&REFG(undefined, 0x11231e0) * (dVar6 - *(double *)&REFG(undefined, 0x11231a0));
    dVar7 = ((*(double *)&gen_args[0]) - *(double *)&REFG(undefined, 0x11231d8) * dVar7) - *(double *)&REFG(undefined, 0x11231e8) * dVar7;
    dVar6 = gen_bits2d(*(ulonglong *)(&REFG(undefined, 0x1123218) + iVar2) |
                       ((ulonglong)gen_d2bits(dVar6) & *(ulonglong *)&REFG(undefined, 0x1123180)) +
                       *(longlong *)&REFG(undefined, 0x1123190) << 0x2e);
    dVar5 = (dVar7 * dVar7) * (*(double *)&REFG(undefined, 0x1123208) + *(double *)&REFG(undefined, 0x11231f8) * dVar7) +
            ((dVar5 + *(double *)(&REFG(undefined, 0x1123210) + iVar2)) +
            ((dVar5 * dVar5) * (dVar5 * dVar5)) *
            (*(double *)&REFG(undefined, 0x1123200) + *(double *)&REFG(undefined, 0x11231f0) * dVar5));
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar5 * dVar6 + dVar6);
    }
    dVar7 = gen_bits2d(~*(ulonglong *)&REFG(undefined, 0x1123170) & (ulonglong)gen_d2bits(dVar6) |
                       (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    (*(undefined2 *)(gen_frame + 0xc)) = (undefined2)((ulonglong)gen_d2bits(dVar7) >> 0x30);
    fVar4 = (float10)dVar7;
    (*(double *)&gen_args[0]) = ((double)GEN_TOD((((float10)GEN_TOD(gen_bits2d((ulonglong)
                                           ((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34
                                          ))) * (fVar4 + (float10)dVar5 * fVar4))));
    if (((ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0x7ff0000000000000) != 0) goto LAB_00c6be32;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = (*(uint *)&gen_args[3]) & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)(gen_bits2d(CONCAT44((*(uint *)&gen_args[3]),(*(int *)&gen_args[2]))) + *(double *)&REFG(undefined, 0x1123610));
    }
    if (uVar1 < 0x7ff00000) {
      if ((*(uint *)&gen_args[3]) < 0x80000000) {
        (*(double *)&gen_args[0]) = REFG(undefined8, 0x1123640) * REFG(undefined8, 0x1123640);
        uVar3 = 0xe;
      }
      else {
        (*(double *)&gen_args[0]) = REFG(undefined8, 0x1123648) * REFG(undefined8, 0x1123648);
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && ((*(int *)&gen_args[2]) == 0)) {
        if ((*(uint *)&gen_args[3]) != 0x7ff00000) {
          return (float10)*(double *)&REFG(undefined, 0x1123638);
        }
        return (float10)*(double *)&REFG(undefined, 0x1123630);
      }
      uVar3 = 0x3ea;
    }
  }
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(ulonglong)gen_d2bits((*(double *)&gen_args[0]));
  (*(undefined6 *)(gen_frame + 0x6)) = (undefined6)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x10);
  F_00c6bf0e(&(*(int *)&gen_args[2]),&(*(int *)&gen_args[2]),&(*(undefined2 *)(gen_frame + 0x4)),uVar3);
  (*(double *)&gen_args[0]) = gen_bits2d(CONCAT62((*(undefined6 *)(gen_frame + 0x6)),(*(undefined2 *)(gen_frame + 0x4))));
LAB_00c6be32: ;
  return (float10)(*(double *)&gen_args[0]);
}

/* ref: FUN_00c6c2c0 */
float10 F_00c6c2c0(float gen_a0, double gen_a1)
{
  GEN_ENTER(0xc6c2c0u, gen_trace_f(gen_a0), (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  float in_xmm2 = (float)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  double in_xmm0;
  float10 fVar1;
  undefined4 in_XMM2_Db = 0;
  
  in_xmm0 = (double)in_st0;
  fVar1 = F_00c6c2de(in_xmm0,GEN_TOD(gen_bits2d(CONCAT44(in_XMM2_Db,(uint)gen_fl2bits(in_xmm2)))),
                       (int)(ulonglong)gen_d2bits(in_xmm0),
                       (int)((ulonglong)gen_d2bits(in_xmm0) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c6c2de */
float10 F_00c6c2de(double gen_a0, double gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6c2deu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32));
  unsigned int gen_args[6];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[2], &gen_a1, sizeof gen_a1);
  gen_args[4] = gen_a2;
  gen_args[5] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = (uint)(ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x34);
    dVar7 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) &
                       (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123720)) |
                       (ulonglong)gen_d2bits(REFG(undefined8, 0x1123780)));
    dVar8 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x1123728) |
                       (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123788)));
    uVar1 = (ushort)(ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123730) + dVar7) & 0x7f0;
    dVar12 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x1123748) & (ulonglong)gen_d2bits(dVar8));
    dVar10 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x1123740) & (ulonglong)gen_d2bits(dVar7)) *
             *(double *)(&REFG(undefined, 0x1123800) + uVar1) - REFG(undefined8, 0x1123780);
    dVar7 = (dVar7 - gen_bits2d(*(ulonglong *)&REFG(undefined, 0x1123740) & (ulonglong)gen_d2bits(dVar7))) *
            *(double *)(&REFG(undefined, 0x1123800) + uVar1);
    dVar9 = (dVar8 - dVar12) * *(double *)(&REFG(undefined, 0x1123808) + uVar1);
    dVar8 = dVar7 + dVar10;
    dVar12 = dVar9 + (dVar12 * *(double *)(&REFG(undefined, 0x1123808) + uVar1) - *(double *)&REFG(undefined, 0x1123788));
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      dVar7 = ((((*(double *)&REFG(undefined, 0x11237d0) * dVar8 + *(double *)&REFG(undefined, 0x11237e0)) * dVar8 +
                *(double *)&REFG(undefined, 0x11237f0)) * (((dVar8 * dVar8) * (dVar8 * dVar8)) * dVar8) +
               ((*(double *)&REFG(undefined, 0x11237d8) * dVar12 + *(double *)&REFG(undefined, 0x11237e8)) * dVar12 +
               *(double *)&REFG(undefined, 0x11237f8)) * (dVar12 * dVar12)) +
              ((*(double *)(&REFG(undefined, 0x1123c18) + uVar1) + dVar11 * *(double *)&REFG(undefined, 0x1123758)) +
              gen_bits2d((ulonglong)gen_d2bits(dVar9) & *(ulonglong *)(&REFG(undefined, 0x1123768) + iVar5)))) +
              (((*(double *)(&REFG(undefined, 0x1123c10) + uVar1) + dVar10) + dVar11 * *(double *)&REFG(undefined, 0x1123750)) +
              gen_bits2d((ulonglong)gen_d2bits(dVar7) & *(ulonglong *)(&REFG(undefined, 0x1123760) + iVar5)));
      (*(double *)(gen_frame + 0x4)) = dVar7;
      return (float10)dVar7;
    }
    dVar7 = gen_bits2d(-(ulonglong)
                        (*(double *)&REFG(undefined, 0x1123790) == gen_bits2d(CONCAT44((*(uint *)&gen_args[5]),(*(int *)&gen_args[4])))));
    if ((short)(ulonglong)gen_d2bits(dVar7) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (REFG(undefined8, 0x1123780) ==
            gen_bits2d(CONCAT44((*(uint *)&gen_args[5]),(*(int *)&gen_args[4])) & (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123720)) |
                       (ulonglong)gen_d2bits(REFG(undefined8, 0x1123780)))) {
          return (float10)*(double *)&REFG(undefined, 0x11237b8);
        }
        uVar6 = 1000;
        dVar7 = *(double *)&REFG(undefined, 0x1123720);
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) || ((*(int *)&gen_args[4]) == 0 && ((*(uint *)&gen_args[5]) & 0xfffff) == 0)) {
        dVar7 = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_00c6c4d2;
    }
    (*(double *)&gen_args[0]) = gen_bits2d(CONCAT44((*(uint *)&gen_args[5]),(*(int *)&gen_args[4]))) * REFG(undefined8, 0x11237a0);
    iVar4 = -0x34;
  }
  uVar6 = 2;
  dVar7 = REFG(undefined8, 0x11237b0);
LAB_00c6c4d2: ;
  (*(double *)(gen_frame + 0x4)) = dVar7;
  F_00c6bf0e(&(*(int *)&gen_args[4]),&(*(int *)&gen_args[4]),&(*(double *)(gen_frame + 0x4)),uVar6);
  return (float10)(*(double *)(gen_frame + 0x4));
}

/* ref: FUN_00c6c530 */
float10 F_00c6c530(float gen_a0, float gen_a1, float gen_a2, double gen_a3)
{
  GEN_ENTER(0xc6c530u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), (unsigned int)gen_trace_d(gen_a3));
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  float10 in_st0 = (float10)gen_a3;
  float10 fVar1;
  undefined4 in_XMM3_Db = 0;
  undefined4 in_XMM5_Db = 0;
  undefined4 in_XMM6_Db = 0;
  
  fVar1 = F_00c6c54e((double)in_st0,GEN_TOD(gen_bits2d(CONCAT44(in_XMM3_Db,(uint)gen_fl2bits(in_xmm3)))),GEN_TOD(gen_bits2d(CONCAT44(in_XMM5_Db,(uint)gen_fl2bits(in_xmm5)))),GEN_TOD(gen_bits2d(CONCAT44(in_XMM6_Db,(uint)gen_fl2bits(in_xmm6)))),
                       (int)(ulonglong)gen_d2bits((double)in_st0));
  return fVar1;
}

/* ref: FUN_00c6c54e */
float10 F_00c6c54e(double gen_a0, double gen_a1, double gen_a2, double gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc6c54eu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32));
  double in_xmm0 = (double)gen_a0;
  double in_xmm3 = (double)gen_a1;
  double in_xmm5 = (double)gen_a2;
  double in_xmm6 = (double)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  ushort uVar2;
  float10 extraout_ST0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar2 = ((ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x30) & 0x7fff) + 0xc7e0;
  if (uVar2 < 0x8a9) {
    dVar10 = (*(double *)&REFG(undefined, 0x1125620) * in_xmm0 + *(double *)&REFG(undefined, 0x1125630)) -
             *(double *)&REFG(undefined, 0x1125630);
    dVar11 = (*(double *)&REFG(undefined, 0x1125628) * in_xmm0 + *(double *)&REFG(undefined, 0x1125638)) -
             *(double *)&REFG(undefined, 0x1125638);
    dVar3 = in_xmm0 - *(double *)&REFG(undefined, 0x1125640) * dVar10;
    dVar7 = in_xmm0 - *(double *)&REFG(undefined, 0x1125648) * dVar11;
    dVar4 = dVar3 - *(double *)&REFG(undefined, 0x1125650) * dVar10;
    dVar8 = dVar7 - *(double *)&REFG(undefined, 0x1125658) * dVar11;
    iVar1 = ((int)ROUND(*(double *)&REFG(undefined, 0x1125620) * in_xmm0) + 0x72900U & 0x1f) * 0xb0;
    dVar15 = gen_bits2d((ulonglong)gen_d2bits(REFG(undefined8, 0x1125670) * dVar10 + dVar3) &
                        *(ulonglong *)&REFG(undefined, 0x1125680));
    dVar16 = REFG(undefined8, 0x1125678) / dVar15;
    dVar5 = dVar8 * dVar8;
    dVar9 = dVar8 * dVar8;
    dVar6 = dVar5 * dVar5;
    dVar13 = dVar8 * *(double *)(&REFG(undefined, 0x11240b0) + iVar1) + dVar8 * *(double *)(&REFG(undefined, 0x11240b8) + iVar1)
    ;
    dVar12 = gen_bits2d(*(ulonglong *)(&REFG(undefined, 0x11240c8) + iVar1) & (ulonglong)gen_d2bits(dVar16)) -
             *(double *)(&REFG(undefined, 0x11240a0) + iVar1);
    dVar14 = dVar13 - dVar12;
    return ((float10)GEN_TOD(((((((dVar6 * dVar6) *
                         ((((*(double *)(&REFG(undefined, 0x1124030) + iVar1) * dVar8 +
                            *(double *)(&REFG(undefined, 0x1124020) + iVar1)) +
                           (*(double *)(&REFG(undefined, 0x1124050) + iVar1) * dVar8 +
                           *(double *)(&REFG(undefined, 0x1124040) + iVar1)) * dVar5) +
                          *(double *)(&REFG(undefined, 0x1124060) + iVar1) * dVar6) +
                         ((*(double *)(&REFG(undefined, 0x1124080) + iVar1) * dVar8 +
                          *(double *)(&REFG(undefined, 0x1124070) + iVar1)) +
                         *(double *)(&REFG(undefined, 0x1124090) + iVar1) * dVar5) * (dVar8 * dVar6)) +
                        ((((*(double *)(&REFG(undefined, 0x1124038) + iVar1) * dVar8 +
                           *(double *)(&REFG(undefined, 0x1124028) + iVar1)) +
                          (*(double *)(&REFG(undefined, 0x1124058) + iVar1) * dVar8 +
                          *(double *)(&REFG(undefined, 0x1124048) + iVar1)) * dVar9) +
                         *(double *)(&REFG(undefined, 0x1124068) + iVar1) * (dVar9 * dVar9)) +
                        ((*(double *)(&REFG(undefined, 0x1124088) + iVar1) * dVar8 +
                         *(double *)(&REFG(undefined, 0x1124078) + iVar1)) +
                        *(double *)(&REFG(undefined, 0x1124098) + iVar1) * dVar9) * (dVar8 * (dVar9 * dVar9)))) +
                       (((*(double *)(&REFG(undefined, 0x11240b0) + iVar1) + *(double *)(&REFG(undefined, 0x11240b8) + iVar1)) *
                         (((dVar7 - dVar8) - *(double *)&REFG(undefined, 0x1125658) * dVar11) -
                         dVar11 * *(double *)&REFG(undefined, 0x1125668)) + *(double *)(&REFG(undefined, 0x11240a8) + iVar1)) +
                       (dVar8 * *(double *)(&REFG(undefined, 0x11240b8) + iVar1) +
                       (dVar8 * *(double *)(&REFG(undefined, 0x11240b0) + iVar1) - dVar13)))) +
                      (dVar13 - (dVar12 + dVar14))) -
                     ((REFG(undefined8, 0x1125678) -
                      dVar15 * gen_bits2d(*(ulonglong *)(&REFG(undefined, 0x11240c8) + iVar1) &
                                          (ulonglong)gen_d2bits(dVar16))) -
                     ((((dVar3 - dVar4) - *(double *)&REFG(undefined, 0x1125650) * dVar10) -
                      dVar10 * *(double *)&REFG(undefined, 0x1125660)) + (dVar4 - dVar15)) * dVar16) *
                     (dVar16 * *(double *)(&REFG(undefined, 0x11240c0) + iVar1))) + dVar14)));
  }
  if ((short)uVar2 < 0x8a9) {
    return ((float10)GEN_TOD(((REFG(undefined8, 0x1125698) * in_xmm0 + in_xmm0) * *(double *)&REFG(undefined, 0x11256a0))));
  }
  F_00c4d5df(param_5);
  return extraout_ST0;
}

/* ref: __wfullpath */
wchar_t * F_00c6c790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6c790u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _FullPath = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Path = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 _SizeInWords = (gen_size32)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  DWORD DVar1;
  int * piVar2;
  wchar_t * pwVar3;
  gen_size32 _Count;
  
  if ((_Path == (wchar_t *)0x0) || (*_Path == L'\0')) {
    pwVar3 = F_00c7dcbc(_FullPath,_SizeInWords);
    return pwVar3;
  }
  if (_FullPath == (wchar_t *)0x0) {
    DVar1 = gen_imp_GetFullPathNameW(_Path,0,0,0);
    if (DVar1 == 0) goto LAB_00c6c7c4;
    _Count = _SizeInWords;
    if (_SizeInWords <= DVar1) {
      _Count = DVar1;
    }
    if (0x7fffffff < _Count) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      return (wchar_t *)0x0;
    }
    pwVar3 = F_00c645f4(_Count,2);
    if (pwVar3 == (wchar_t *)0x0) {
      piVar2 = F_00c51f85();
      *piVar2 = 0xc;
      return (wchar_t *)0x0;
    }
  }
  else {
    pwVar3 = _FullPath;
    _Count = _SizeInWords;
    if (_SizeInWords == 0) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
      return (wchar_t *)0x0;
    }
  }
  DVar1 = gen_imp_GetFullPathNameW(_Path,_Count,pwVar3,((undefined1 *)(gen_frame + 0x8)));
  if (_Count <= DVar1) {
    if (_FullPath == (wchar_t *)0x0) {
      F_00c4c68f(pwVar3);
    }
    piVar2 = F_00c51f85();
    *piVar2 = 0x22;
    return (wchar_t *)0x0;
  }
  if (DVar1 != 0) {
    return pwVar3;
  }
  if (_FullPath == (wchar_t *)0x0) {
    F_00c4c68f(pwVar3);
  }
LAB_00c6c7c4: ;
  DVar1 = gen_imp_GetLastError();
  F_00c51fab(DVar1);
  return (wchar_t *)0x0;
}

/* ref: ___wdtoxmode */
ushort F_00c6c88b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6c88bu, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t wVar1;
  wchar_t * pwVar2;
  int iVar3;
  uint uVar4;
  
  pwVar2 = param_2;
  if (param_2[1] == L':') {
    pwVar2 = param_2 + 2;
  }
  wVar1 = *pwVar2;
  if ((((wVar1 == L'\\') || (wVar1 == L'/')) && (pwVar2[1] == L'\0')) ||
     (((param_1 & 0x10) != 0 || (uVar4 = 0x8000, wVar1 == L'\0')))) {
    uVar4 = 0x4040;
  }
  uVar4 = uVar4 | ~((param_1 & 0xff) << 7) & 0x80 | 0x100;
  pwVar2 = F_00c7dedd(param_2,L'.');
  if (pwVar2 != (wchar_t *)0x0) {
    iVar3 = F_00c7de52(pwVar2,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x11256e4)))));
    if (iVar3 != 0) {
      iVar3 = F_00c7de52(pwVar2,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x11256d8)))));
      if (iVar3 != 0) {
        iVar3 = F_00c7de52(pwVar2,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x11256cc)))));
        if (iVar3 != 0) {
          iVar3 = F_00c7de52(pwVar2,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x11256c0)))));
          if (iVar3 != 0) goto LAB_00c6c934;
        }
      }
    }
    uVar4 = uVar4 | 0x40;
  }
LAB_00c6c934: ;
  return (ushort)(uVar4 >> 6) & 7 | (ushort)uVar4 | (ushort)(uVar4 >> 3) & 0x38;
}

/* ref: _IsRootUNCName_00c6c94c */
uint F_00c6c94c(unsigned int gen_a0)
{
  GEN_ENTER(0xc6c94cu, gen_a0, 0u, 0u, 0u);
  wchar_t * in_esi = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 sVar1;
  wchar_t * pwVar2;
  wchar_t wVar3;
  
  sVar1 = F_00c68ec8(in_esi);
  if ((((4 < sVar1) && ((*in_esi == L'\\' || (*in_esi == L'/')))) &&
      ((in_esi[1] == L'\\' || (in_esi[1] == L'/')))) &&
     ((in_esi[2] != L'\\' && (in_esi[2] != L'/')))) {
    pwVar2 = in_esi + 3;
    wVar3 = *pwVar2;
    if (wVar3 != L'\0') {
      do {
        if ((wVar3 == L'\\') || (wVar3 == L'/')) break;
        pwVar2 = pwVar2 + 1;
        wVar3 = *pwVar2;
      } while (wVar3 != L'\0');
      if ((*pwVar2 != L'\0') && (pwVar2 = pwVar2 + 1, *pwVar2 != L'\0')) {
        wVar3 = *pwVar2;
        if (wVar3 != L'\0') {
          do {
            if ((wVar3 == L'\\') || (wVar3 == L'/')) break;
            pwVar2 = pwVar2 + 1;
            wVar3 = *pwVar2;
          } while (wVar3 != L'\0');
          if ((*pwVar2 != L'\0') && (pwVar2[1] != L'\0')) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: __wfullpath_helper_00c6c9e9 */
uint F_00c6c9e9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6c9e9u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  wchar_t * pwVar3;
  
  piVar2 = F_00c51f85();
  iVar1 = *piVar2;
  piVar2 = F_00c51f85();
  *piVar2 = 0;
  pwVar3 = F_00c6c790(param_1,param_2,param_3);
  piVar2 = F_00c51f85();
  if (pwVar3 == (wchar_t *)0x0) {
    if (*piVar2 == 0x22) {
      piVar2 = F_00c51f85();
      *piVar2 = iVar1;
      pwVar3 = F_00c6c790((wchar_t *)0x0,param_2,0);
      *param_4 = pwVar3;
    }
    else {
      pwVar3 = (wchar_t *)0x0;
    }
  }
  else {
    *piVar2 = iVar1;
  }
  return (uint)pwVar3;
}

/* ref: __wstat32 */
int F_00c6ca49(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6ca49u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Name = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Stat = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x490];
  ushort wVar1;
  ushort uVar2;
  ulong * puVar3;
  int * piVar4;
  wchar_t * pwVar5;
  int iVar6;
  HANDLE pvVar7;
  gen_size32 sVar8;
  UINT UVar9;
  int _Var10;
  int eVar11;
  BOOL BVar12;
  DWORD DVar13;
  uint uVar14;
  
  (*(uint *)(gen_frame + 0x488)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48c);
  (*(_FILETIME *)(gen_frame + 0x14)).dwHighDateTime = (DWORD)_Name;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if ((_Name == (wchar_t *)0x0) || (_Stat == (undefined *)0x0)) {
    puVar3 = F_00c51f98();
    *puVar3 = 0;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
  }
  else {
    pwVar5 = F_00c6d663(_Name,L"?*");
    if (pwVar5 == (wchar_t *)0x0) {
      if (_Name[1] == L':') {
        if ((*_Name != L'\0') && (_Name[2] == L'\0')) goto LAB_00c6caaa;
        wVar1 = F_00c6d650(*_Name);
        iVar6 = wVar1 - 0x60;
      }
      else {
        iVar6 = F_00c6d446();
      }
      pvVar7 = gen_imp_FindFirstFileExW(_Name,FindExInfoStandard,&(*(uint *)(gen_frame + 0x20)),FindExSearchNameMatch,
                                (LPVOID)0x0,0);
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar7;
      if (pvVar7 == (HANDLE)0xffffffff) {
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
        pwVar5 = F_00c6d663(_Name,L"./\\");
        if (pwVar5 != (wchar_t *)0x0) {
          pwVar5 = (wchar_t *)F_00c6c9e9(((undefined1 *)(gen_frame + 0x280)),_Name,0x104,&(*(undefined * PTR32 *)(gen_frame + 0x1c)));
          if (pwVar5 != (wchar_t *)0x0) {
            sVar8 = F_00c68ec8(pwVar5);
            if (sVar8 != 3) {
              uVar14 = F_00c6c94c(pwVar5);
              if (uVar14 == 0) goto LAB_00c6cbc7;
            }
            UVar9 = gen_imp_GetDriveTypeW(pwVar5);
            if (1 < UVar9) {
              if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0x0) {
                F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x1c)));
              }
              (*(uint *)(gen_frame + 0x20)) = 0x10;
              (*(int *)(gen_frame + 0x3c)) = 0;
              (*(long *)(gen_frame + 0x40)) = 0;
              (*(undefined2 *)(gen_frame + 0x4c)) = 0;
              _Var10 = F_00c7e237(0x7bc,1,1,0,0,0,-1);
              (*(long *)(((char *)(_Stat) + 28))) = _Var10;
              (*(long *)(((char *)(_Stat) + 24))) = _Var10;
              (*(long *)(((char *)(_Stat) + 32))) = _Var10;
              pwVar5 = ((wchar_t *)GEN_TOP((*(_FILETIME *)(gen_frame + 0x14)).dwHighDateTime));
LAB_00c6cdf9: ;
              uVar2 = F_00c6c88b((*(uint *)(gen_frame + 0x20)),pwVar5);
              (*(ushort *)(((char *)(_Stat) + 6))) = uVar2;
              (*(short *)(((char *)(_Stat) + 8))) = 1;
              (*(long *)(((char *)(_Stat) + 20))) = (*(long *)(gen_frame + 0x40));
              if ((*(int *)(gen_frame + 0x3c)) != 0) {
                (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
                (*(long *)(((char *)(_Stat) + 20))) = 0;
              }
              (*(ushort *)(((char *)(_Stat) + 4))) = 0;
              (*(short *)(((char *)(_Stat) + 12))) = 0;
              (*(short *)(((char *)(_Stat) + 10))) = 0;
              (*(uint *)((char *)(_Stat))) = iVar6 - 1U;
              (*(uint *)(((char *)(_Stat) + 16))) = iVar6 - 1U;
              uVar14 = (*(uint *)(gen_frame + 0xc));
              goto LAB_00c6ce6b;
            }
          }
LAB_00c6cbc7: ;
          if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0x0) {
            F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x1c)));
          }
        }
      }
      else {
        if ((((*(uint *)(gen_frame + 0x20)) & 0x400) == 0) || ((*(int *)(gen_frame + 0x44)) != -0x5ffffff4)) {
          if (((*(FILETIME *)(gen_frame + 0x34)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x34)).dwHighDateTime == 0)) {
            (*(long *)(((char *)(_Stat) + 28))) = 0;
LAB_00c6ccd9: ;
            if (((*(FILETIME *)(gen_frame + 0x2c)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x2c)).dwHighDateTime == 0)) {
              _Var10 = (*(long *)(((char *)(_Stat) + 28)));
LAB_00c6cd60: ;
              (*(long *)(((char *)(_Stat) + 24))) = _Var10;
              if (((*(FILETIME *)(gen_frame + 0x24)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x24)).dwHighDateTime == 0)) {
                _Var10 = (*(long *)(((char *)(_Stat) + 28)));
LAB_00c6cdea: ;
                (*(long *)(((char *)(_Stat) + 32))) = _Var10;
                gen_imp_FindClose((*(undefined * PTR32 *)(gen_frame + 0x1c)));
                pwVar5 = _Name;
                goto LAB_00c6cdf9;
              }
              BVar12 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x24)),&(*(_FILETIME *)(gen_frame + 0x14)));
              if (BVar12 != 0) {
                BVar12 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x14)),&(*(_SYSTEMTIME *)(gen_frame + 0x270)));
                if (BVar12 != 0) {
                  _Var10 = F_00c7e237((uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMonth,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wDay,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wHour,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wSecond,-1);
                  goto LAB_00c6cdea;
                }
              }
            }
            else {
              BVar12 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x2c)),&(*(_FILETIME *)(gen_frame + 0x14)));
              if (BVar12 != 0) {
                BVar12 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x14)),&(*(_SYSTEMTIME *)(gen_frame + 0x270)));
                if (BVar12 != 0) {
                  _Var10 = F_00c7e237((uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMonth,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wDay,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wHour,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wSecond,-1);
                  goto LAB_00c6cd60;
                }
              }
            }
          }
          else {
            BVar12 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x34)),&(*(_FILETIME *)(gen_frame + 0x14)));
            if (BVar12 != 0) {
              BVar12 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x14)),&(*(_SYSTEMTIME *)(gen_frame + 0x270)));
              if (BVar12 != 0) {
                _Var10 = F_00c7e237((uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMonth,
                                          (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wDay,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wHour,
                                          (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wSecond,-1);
                (*(long *)(((char *)(_Stat) + 28))) = _Var10;
                goto LAB_00c6ccd9;
              }
            }
          }
          DVar13 = gen_imp_GetLastError();
          F_00c51fab(DVar13);
          gen_imp_FindClose((*(undefined * PTR32 *)(gen_frame + 0x1c)));
          goto LAB_00c6ce68;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0xffffffff;
        eVar11 = F_00c4ece4((int *)&(*(undefined * PTR32 *)(gen_frame + 0x1c)),_Name,0,0x40,0);
        if ((eVar11 == 0) && ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0xffffffff)) {
          uVar14 = F_00c7df0b((*(undefined * PTR32 *)(gen_frame + 0x1c)),_Stat);
          F_00c4e08e((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)));
          goto LAB_00c6ce6b;
        }
      }
    }
LAB_00c6caaa: ;
    piVar4 = F_00c51f85();
    *piVar4 = 2;
    puVar3 = F_00c51f98();
    *puVar3 = 2;
  }
LAB_00c6ce68: ;
  uVar14 = 0xffffffff;
LAB_00c6ce6b: ;
  F_00c47745((*(uint *)(gen_frame + 0x488)) ^ (uint)(uint)(gen_frame + 0x48c));
  return uVar14;
}

/* ref: __fstat64 */
uint F_00c6ce7a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6ce7au, gen_a0, gen_a1, 0u, 0u);
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
  __time64_t _Var10;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  uVar5 = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x7c)) = 0x68;
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = &REFG(undefined, 0x12f6690);
  (*(undefined4 *)(gen_frame + 0x74)) = 0xc6ce86;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    puVar3 = F_00c51f98();
    *puVar3 = 0;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
  }
  else {
    F_00c48350((*(uint * PTR32 *)&gen_args[1]),0,0x38);
    if (uVar5 == 0xfffffffe) {
      puVar3 = F_00c51f98();
      *puVar3 = 0;
      piVar4 = F_00c51f85();
      *piVar4 = 9;
      goto LAB_00c6cf5a;
    }
    if ((-1 < (int)uVar5) && (uVar5 < REFG(undefined4, 0x15e4190))) {
      (*(int * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined4, 0x15e41a0) + ((int)uVar5 >> 5);
      iVar9 = (uVar5 & 0x1f) * 0x40;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)uVar5 >> 5] + 4 + iVar9))) & 1) != 0) {
        F_00c6d817((*(uint *)(gen_frame + 0x10)));
        (*(undefined * PTR32 *)(gen_frame + 0x78)) = (undefined *)0x0;
        if ((*(byte *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 4 + iVar9) & 1) == 0) {
LAB_00c6cf3c: ;
          piVar4 = F_00c51f85();
          *piVar4 = 9;
LAB_00c6cf47: ;
          (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        }
        else {
          DVar6 = gen_imp_GetFileType(*(HANDLE *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + iVar9));
          uVar5 = DVar6 & 0xffff7fff;
          if (uVar5 == 1) {
            *(undefined2 *)((int)puVar1 + 6) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *(undefined2 *)((int)puVar1 + 10) = 0;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 2) = 1;
            BVar7 = gen_imp_GetFileInformationByHandle(*(HANDLE *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + iVar9),((undefined *)(gen_frame + 0x1c)));
            if (BVar7 == 0) {
LAB_00c6cf85: ;
              DVar6 = gen_imp_GetLastError();
              F_00c51fab(DVar6);
              goto LAB_00c6cf47;
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
              puVar1[10] = 0;
              puVar1[0xb] = 0;
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x1c)) + 20))),&(*(_FILETIME *)(gen_frame + 0x8)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),((_SYSTEMTIME *)(gen_frame + 0x50))), BVar7 == 0))
              goto LAB_00c6cf47;
              _Var10 = F_00c6d1df((uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMonth,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wHour,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wSecond,-1);
              *(__time64_t *)(puVar1 + 10) = _Var10;
            }
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 12))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x1c)) + 12) + 4))))) == 0)) {
              puVar1[8] = puVar1[10];
              puVar1[9] = puVar1[0xb];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x1c)) + 12))),&(*(_FILETIME *)(gen_frame + 0x8)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),((_SYSTEMTIME *)(gen_frame + 0x50))), BVar7 == 0))
              goto LAB_00c6cf47;
              _Var10 = F_00c6d1df((uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMonth,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wHour,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wSecond,-1);
              *(__time64_t *)(puVar1 + 8) = _Var10;
            }
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 4))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x1c)) + 4) + 4))))) == 0)) {
              puVar1[0xc] = puVar1[10];
              puVar1[0xd] = puVar1[0xb];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x1c)) + 4))),&(*(_FILETIME *)(gen_frame + 0x8)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),((_SYSTEMTIME *)(gen_frame + 0x50))), BVar7 == 0))
              goto LAB_00c6cf47;
              _Var10 = F_00c6d1df((uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMonth,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wHour,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wSecond,-1);
              *(__time64_t *)(puVar1 + 0xc) = _Var10;
            }
            puVar1[6] = (*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 36)));
            puVar1[7] = (*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 32)));
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
                if (uVar5 != 0) goto LAB_00c6cf85;
                goto LAB_00c6cf3c;
              }
              uVar8 = 0x1000;
            }
            *(undefined2 *)((int)puVar1 + 6) = uVar8;
            *puVar1 = (*(uint *)(gen_frame + 0x10));
            puVar1[4] = (*(uint *)(gen_frame + 0x10));
            *(undefined2 *)(puVar1 + 2) = 1;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *(undefined2 *)((int)puVar1 + 10) = 0;
            puVar1[0xc] = 0;
            puVar1[0xd] = 0;
            puVar1[10] = 0;
            puVar1[0xb] = 0;
            puVar1[8] = 0;
            puVar1[9] = 0;
            if ((uVar5 == 2) ||
               (BVar7 = gen_imp_PeekNamedPipe(*(HANDLE *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + iVar9),(LPVOID)0x0,0,(LPDWORD)0x0,
                                      (LPDWORD)&(*(int * PTR32 *)(gen_frame + 0x14)),(LPDWORD)0x0), BVar7 == 0)) {
              puVar1[6] = 0;
              puVar1[7] = 0;
            }
            else {
              puVar1[6] = (uint)(*(int * PTR32 *)(gen_frame + 0x14));
              puVar1[7] = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x14))) >> 0x1f;
            }
          }
        }
        (*(undefined * PTR32 *)(gen_frame + 0x78)) = (undefined *)0xfffffffe;
        F_00c6d1d5((gen_frame + 0x7c));
        goto LAB_00c6cf5a;
      }
    }
    puVar3 = F_00c51f98();
    *puVar3 = 0;
    piVar4 = F_00c51f85();
    *piVar4 = 9;
  }
  F_00c4c305();
LAB_00c6cf5a: ;
  uVar5 = F_00c7e488((gen_frame + 0x7c));
  return uVar5;
}

/* ref: FUN_00c6d1d5 */
unsigned int F_00c6d1d5(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d1d5u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + -0x6c));
  return 0;
}

/* ref: ___loctotime64_t */
__time64_t F_00c6d1df(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc6d1dfu, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  longlong lVar1;
  uint uVar2;
  int eVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar6 = param_1 - 0x76c;
  (*(int *)(gen_frame + 0x14)) = param_2;
  (*(long *)(gen_frame + 0x18)) = 0;
  (*(long *)(gen_frame + 0x10)) = 0;
  (*(long *)(gen_frame + 0xc)) = 0;
  if ((((((int)uVar6 < 0x46) || (0x44c < (int)uVar6)) || (0xb < param_2 - 1U)) ||
      ((0x17 < (uint)param_4 || (0x3b < (uint)param_5)))) ||
     ((0x3b < (uint)param_6 || (param_3 < 1)))) {
LAB_00c6d427: ;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    lVar1 = -1;
  }
  else {
    if ((&REFG(undefined4, 0x134bc34))[param_2] - *(int *)(&REFG(undefined, 0x134bc30) + param_2 * 4) < param_3) {
      uVar2 = uVar6 & 0x80000003;
      bVar7 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar7 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if ((((!bVar7) || ((int)uVar6 % 100 == 0)) && (param_1 % 400 != 0)) ||
         ((param_2 != 2 || (0x1d < param_3)))) goto LAB_00c6d427;
    }
    iVar5 = *(int *)(&REFG(undefined, 0x134bc30) + param_2 * 4) + param_3;
    uVar2 = uVar6 & 0x80000003;
    bVar7 = uVar2 == 0;
    (*(int *)(gen_frame + 0x20)) = iVar5;
    if ((int)uVar2 < 0) {
      bVar7 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((((bVar7) && ((int)uVar6 % 100 != 0)) || (param_1 % 400 == 0)) && (2 < param_2)) {
      (*(int *)(gen_frame + 0x20)) = iVar5 + 1;
    }
    F_00c64d65();
    eVar3 = F_00c64fcb(&(*(long *)(gen_frame + 0x18)));
    if (((eVar3 != 0) || (eVar3 = F_00c64ff8(&(*(long *)(gen_frame + 0x10))), eVar3 != 0)) ||
       (eVar3 = F_00c65025(&(*(long *)(gen_frame + 0xc))), eVar3 != 0)) {
                    
      F_00c4c299(400,0,0,0,0,0);
    }
    iVar5 = ((param_1 + -0x641) / 400 - (param_1 + -0x76d) / 100) + -0x11 +
            ((int)(param_1 + -0x76d + (param_1 + -0x76d >> 0x1f & 3U)) >> 2);
    (*(int *)(gen_frame + 0x1c)) = iVar5 >> 0x1f;
    lVar1 = (longlong)CONCAT44(((int)uVar6 >> 0x1f) - (uint)(uVar6 < 0x46),param_1 + -0x7b2) * 0x16d
            + (longlong)iVar5;
    (*(int *)(gen_frame + 0x1c)) = (int)((ulonglong)lVar1 >> 0x20);
    lVar1 = (((lVar1 + (*(int *)(gen_frame + 0x20))) * 0x18 + (longlong)param_4) * 0x3c + (longlong)param_5) * 0x3c +
            (longlong)(*(long *)(gen_frame + 0xc)) + (longlong)param_6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 28))) = (*(int *)(gen_frame + 0x20));
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 20))) = uVar6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 16))) = (*(int *)(gen_frame + 0x14)) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) = param_4;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 4))) = param_5;
    (*(int *)((char *)((undefined *)(gen_frame + 0x24)))) = param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && ((*(long *)(gen_frame + 0x18)) != 0)) && (iVar5 = F_00c64dec(((undefined *)(gen_frame + 0x24))), iVar5 != 0)))) {
      lVar1 = lVar1 + (*(long *)(gen_frame + 0x10));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return lVar1;
}

/* ref: __getdrive */
int F_00c6d446(void)
{
  GEN_ENTER(0xc6d446u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x220];
  bool bVar1;
  DWORD DVar2;
  ushort * _Memory;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  bVar1 = false;
  _Memory = ((ushort *)(gen_frame + 0xc));
  DVar2 = gen_imp_GetCurrentDirectoryW(0x105,_Memory);
  if (0x104 < (int)DVar2) {
    _Memory = F_00c54c73(DVar2 + 1,2);
    if (_Memory == (ushort *)0x0) {
      piVar3 = F_00c51f85();
      *piVar3 = 0xc;
      DVar2 = 0;
    }
    else {
      bVar1 = true;
      if (DVar2 != 0) {
        DVar2 = gen_imp_GetCurrentDirectoryW(DVar2 + 1,_Memory);
      }
    }
  }
  iVar5 = 0;
  if (DVar2 == 0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0xc;
  }
  else if (_Memory[1] == 0x3a) {
    uVar4 = (uint)*_Memory;
    if ((0x60 < uVar4) && (uVar4 < 0x7b)) {
      uVar4 = uVar4 - 0x20;
    }
    iVar5 = uVar4 - 0x40;
  }
  if (bVar1) {
    F_00c4c68f(_Memory);
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return iVar5;
}

/* ref: FUN_00c6d5a7 */
uint F_00c6d5a7(void)
{
  GEN_ENTER(0xc6d5a7u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: __towlower_l */
ushort F_00c6d5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6d5b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCWSTR _LocaleName;
  WCHAR WVar1;
  int iVar2;
  undefined2 in_stack_00000006;
  
  WVar1 = L'\xffff';
  if ((*(ushort *)&gen_args[0]) != 0xffff) {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),(*(undefined * PTR32 *)&gen_args[1]));
    _LocaleName = *((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0x14)));
    if (_LocaleName == (LPCWSTR)0x0) {
      WVar1 = (*(ushort *)&gen_args[0]);
      if ((ushort)((*(ushort *)&gen_args[0]) - 0x41) < 0x1a) {
        WVar1 = (*(ushort *)&gen_args[0]) + L' ';
      }
    }
    else if ((*(ushort *)&gen_args[0]) < 0x100) {
      iVar2 = F_00c7db09((*(ushort *)&gen_args[0]),1);
      WVar1 = (*(ushort *)&gen_args[0]);
      if (iVar2 != 0) {
        WVar1 = (WCHAR)*((byte *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xcc))) + (*(uint *)&(*(ushort *)&gen_args[0]) & 0xffff))));
      }
    }
    else {
      iVar2 = F_00c7e497(_LocaleName,0x100,(LPCWSTR)&(*(ushort *)&gen_args[0]),1,((WCHAR *)(gen_frame + 0x18)),1);
      WVar1 = (*(ushort *)&gen_args[0]);
      if (iVar2 != 0) {
        WVar1 = ((WCHAR *)(gen_frame + 0x18))[0];
      }
    }
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return WVar1;
}

/* ref: _towlower */
ushort F_00c6d650(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d650u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  ushort wVar1;
  
  wVar1 = F_00c6d5b0(_C,(undefined *)0x0);
  return wVar1;
}

/* ref: _wcspbrk */
wchar_t * F_00c6d663(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6d663u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Str = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Control = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t wVar1;
  wchar_t * pwVar2;
  wchar_t wVar3;
  wchar_t * pwVar4;
  
  wVar3 = *_Str;
  if (wVar3 != L'\0') {
    wVar1 = *_Control;
    pwVar4 = _Control;
    pwVar2 = _Str;
    do {
      while (wVar1 != L'\0') {
        if (wVar1 == wVar3) {
          return pwVar2;
        }
        pwVar4 = pwVar4 + 1;
        wVar1 = *pwVar4;
      }
      pwVar2 = pwVar2 + 1;
      wVar3 = *pwVar2;
      wVar1 = *_Control;
      pwVar4 = _Control;
    } while (wVar3 != L'\0');
  }
  return (wchar_t *)0x0;
}

/* ref: __set_osfhnd */
int F_00c6d6a7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6d6a7u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  ulong * puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < REFG(undefined4, 0x15e4190))) {
    iVar3 = (param_1 & 0x1fU) * 0x40;
    if (*((int *)GEN_TOP((iVar3 + (&REFG(undefined4, 0x15e41a0))[param_1 >> 5]))) == -1) {
      if (REFG(int, 0x134ab80) == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00c6d704;
          nStdHandle = 0xfffffff4;
        }
        gen_imp_SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_00c6d704: ;
      *((int *)GEN_TOP((iVar3 + (&REFG(undefined4, 0x15e41a0))[param_1 >> 5]))) = param_2;
      return 0;
    }
  }
  piVar1 = F_00c51f85();
  *piVar1 = 9;
  puVar2 = F_00c51f98();
  *puVar2 = 0;
  return -1;
}

/* ref: __free_osfhnd */
int F_00c6d728(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d728u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  ulong * puVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < REFG(undefined4, 0x15e4190))) {
    iVar1 = (&REFG(undefined4, 0x15e41a0))[param_1 >> 5];
    iVar4 = (param_1 & 0x1fU) * 0x40;
    if (((*(byte *)(iVar1 + 4 + iVar4) & 1) != 0) && (*(int *)(iVar1 + iVar4) != -1)) {
      if (REFG(int, 0x134ab80) == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00c6d78a;
          nStdHandle = 0xfffffff4;
        }
        gen_imp_SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_00c6d78a: ;
      *((undefined4 *)GEN_TOP((iVar4 + (&REFG(undefined4, 0x15e41a0))[param_1 >> 5]))) = 0xffffffff;
      return 0;
    }
  }
  piVar2 = F_00c51f85();
  *piVar2 = 9;
  puVar3 = F_00c51f98();
  *puVar3 = 0;
  return -1;
}

/* ref: __get_osfhandle */
int F_00c6d7ae(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d7aeu, gen_a0, 0u, 0u, 0u);
  int _FileHandle = (int)gen_a0;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  
  if (_FileHandle == -2) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < REFG(undefined4, 0x15e4190))) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*((byte *)GEN_TOP((iVar3 + 4 + (&REFG(undefined4, 0x15e41a0))[_FileHandle >> 5]))) & 1) != 0) {
        return *((int *)GEN_TOP((iVar3 + (&REFG(undefined4, 0x15e41a0))[_FileHandle >> 5])));
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  return -1;
}

/* ref: ___lock_fhandle */
int F_00c6d817(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d817u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  
  iVar1 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f66d0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc6d823;
  iVar2 = (*(int *)&gen_args[0]) >> 5;
  iVar4 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar2];
  (*(int *)(gen_frame + 0x0)) = 1;
  if (*(int *)(iVar4 + 8) == 0) {
    F_00c5aa4f(10);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    if (*(int *)(iVar4 + 8) == 0) {
      BVar3 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(iVar4 + 0xc),4000);
      if (BVar3 == 0) {
        (*(int *)(gen_frame + 0x0)) = 0;
      }
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c6d8ad();
  }
  if ((*(int *)(gen_frame + 0x0)) != 0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((&REFG(undefined4, 0x15e41a0))[iVar2] + 0xc + (iVar1 & 0x1fU) * 0x40));
  }
  return (*(int *)(gen_frame + 0x0));
}

/* ref: FUN_00c6d8a8 */
uint F_00c6d8a8(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d8a8u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: FUN_00c6d8ad */
uint F_00c6d8ad(void)
{
  GEN_ENTER(0xc6d8adu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: __unlock_fhandle */
unsigned int F_00c6d8b6(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d8b6u, gen_a0, 0u, 0u, 0u);
  int _Filehandle = (int)gen_a0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)
             ((&REFG(undefined4, 0x15e41a0))[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  return 0;
}

/* ref: __alloc_osfhnd */
int F_00c6d8dd(void)
{
  GEN_ENTER(0xc6d8ddu, 0u, 0u, 0u, 0u);
  int iVar1;
  BOOL BVar2;
  undefined4 * puVar3;
  int iVar4;
  int local_2c;
  int local_28;
  undefined4 * local_24;
  int local_20;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f66f0);
  uStack_c = 0xc6d8e9;
  local_20 = -1;
  iVar4 = 0;
  local_28 = 0;
  iVar1 = F_00c5a98d(0xb);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    F_00c5aa4f(0xb);
    local_8 = (undefined *)0x0;
    for (; local_2c = iVar4, iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar3 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x15e41a0))[iVar4]));
      if (puVar3 == (undefined4 *)0x0) {
        local_24 = F_00c54c73(0x20,0x40);
        if (local_24 != (undefined4 *)0x0) {
          (&REFG(undefined4, 0x15e41a0))[iVar4] = local_24;
          REFG(int, 0x15e4190) = REFG(int, 0x15e4190) + 0x20;
          while (local_24 < ((undefined4 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar4] + 0x800)))) {
            *(undefined1 *)(local_24 + 1) = 0;
            *local_24 = 0xffffffff;
            *(undefined1 *)((int)local_24 + 5) = 10;
            local_24[2] = 0;
            local_24 = local_24 + 0x10;
          }
          iVar4 = iVar4 << 5;
          local_20 = iVar4;
          *((undefined1 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar4 >> 5] + 4))) = 1;
          iVar1 = F_00c6d817(iVar4);
          if (iVar1 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; local_24 = puVar3, puVar3 < ((undefined4 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar4] + 0x800)));
          puVar3 = puVar3 + 0x10) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            F_00c5aa4f(10);
            local_8 = (undefined *)0x1;
            if (puVar3[2] == 0) {
              BVar2 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar3 + 3),4000);
              if (BVar2 == 0) {
                local_28 = 1;
              }
              else {
                puVar3[2] = puVar3[2] + 1;
              }
            }
            local_8 = (undefined *)0x0;
            F_00c6d9af();
          }
          if (local_28 == 0) {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              if (local_28 == 0) {
                *(undefined1 *)(puVar3 + 1) = 1;
                *puVar3 = 0xffffffff;
                local_20 = ((int)puVar3 - (&REFG(undefined4, 0x15e41a0))[iVar4] >> 6) + iVar4 * 0x20;
                break;
              }
            }
            else {
              gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            }
          }
        }
      }
      if (local_20 != -1) break;
    }
    local_8 = (undefined *)0xfffffffe;
    F_00c6da6d();
    iVar1 = local_20;
  }
  return iVar1;
}

/* ref: FUN_00c6d9a9 */
uint F_00c6d9a9(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d9a9u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: FUN_00c6d9af */
uint F_00c6d9af(void)
{
  GEN_ENTER(0xc6d9afu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: FUN_00c6da6d */
uint F_00c6da6d(void)
{
  GEN_ENTER(0xc6da6du, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xb);
  return uVar1;
}

/* ref: FUN_00c6db5f */
unsigned int F_00c6db5f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6db5fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  byte * pbVar1;
  uint _Filehandle;
  
  _Filehandle = *(uint *)(in_ebp + 0xc);
  if (*(int *)(in_ebp + -0x1c) == 0) {
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)_Filehandle >> 5] + 4 + (_Filehandle & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfe;
  }
  F_00c6d8b6(_Filehandle);
  return 0;
}

/* ref: __setmode_nolock */
int F_00c6db8c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6db8cu, gen_a0, gen_a1, 0u, 0u);
  int _FileHandle = (int)gen_a0;
  int _Mode = (int)gen_a1;
  int * piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte * pbVar5;
  byte bVar6;
  int iVar7;
  
  piVar1 = &REFG(undefined4, 0x15e41a0) + (_FileHandle >> 5);
  iVar7 = (_FileHandle & 0x1fU) * 0x40;
  iVar4 = *piVar1 + iVar7;
  cVar2 = *(char *)(iVar4 + 0x24);
  bVar3 = *(byte *)(iVar4 + 4);
  if (_Mode == 0x4000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
    pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
    *pbVar5 = *pbVar5 & 0x80;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0x7f;
  }
  else {
    if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x82 | 2;
    }
    else {
      if (_Mode != 0x40000) goto LAB_00c6dc29;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_00c6dc29: ;
  if ((bVar3 & 0x80) == 0) {
    return 0x8000;
  }
  return (-(uint)((char)(cVar2 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
}

/* ref: __set_fmode */
int F_00c6dc47(unsigned int gen_a0)
{
  GEN_ENTER(0xc6dc47u, gen_a0, 0u, 0u, 0u);
  int _Mode = (int)gen_a0;
  int * piVar1;
  
  if (((_Mode != 0x4000) && (_Mode != 0x8000)) && (_Mode != 0x10000)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  gen_imp_InterlockedExchange(&REFG(undefined4, 0x15d7640),_Mode);
  return 0;
}

/* ref: __get_fmode */
int F_00c6dc89(unsigned int gen_a0)
{
  GEN_ENTER(0xc6dc89u, gen_a0, 0u, 0u, 0u);
  int * _PMode = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_PMode == (int *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_PMode = REFG(int, 0x15d7640);
  return 0;
}

/* ref: FUN_00c6dd96 */
unsigned int F_00c6dd96(unsigned int gen_a0)
{
  GEN_ENTER(0xc6dd96u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: __lseeki64_nolock */
longlong F_00c6dda1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6dda1u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  LONG param_2 = (LONG)gen_a1;
  LONG param_3 = (LONG)gen_a2;
  DWORD param_4 = (DWORD)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  HANDLE hFile;
  int * piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG LVar5;
  
  (*(LONG *)(gen_frame + 0x8)) = param_3;
  hFile = (HANDLE)F_00c6d7ae(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = F_00c51f85();
    *piVar2 = 9;
LAB_00c6ddd2: ;
    DVar3 = 0xffffffff;
    LVar5 = -1;
  }
  else {
    DVar3 = gen_imp_SetFilePointer(hFile,param_2,&(*(LONG *)(gen_frame + 0x8)),param_4);
    if (DVar3 == 0xffffffff) {
      DVar4 = gen_imp_GetLastError();
      if (DVar4 != 0) {
        F_00c51fab(DVar4);
        goto LAB_00c6ddd2;
      }
    }
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfd;
    LVar5 = (*(LONG *)(gen_frame + 0x8));
  }
  return (longlong)CONCAT44(LVar5,DVar3);
}

/* ref: __lseeki64 */
longlong F_00c6de26(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6de26u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x44];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  ulong * puVar1;
  int * piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x14;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6758);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc6de32;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = 0xffffffff;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = 0xffffffff;
  (*(longlong *)(gen_frame + 0x8)) = 0xffffffffffffffff;
  if ((*(uint *)&gen_args[0]) == 0xfffffffe) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
  }
  else {
    if ((-1 < (int)(*(uint *)&gen_args[0])) && ((*(uint *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
      iVar4 = (int)(*(uint *)&gen_args[0]) >> 5;
      iVar6 = ((*(uint *)&gen_args[0]) & 0x1f) * 0x40;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar4] + 4 + iVar6))) & 1) != 0) {
        F_00c6d817((*(uint *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar4] + 4 + iVar6))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = 0xffffffff;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = 0xffffffff;
          (*(longlong *)(gen_frame + 0x8)) = -1;
        }
        else {
          lVar7 = F_00c6dda1((*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
          (*(longlong *)(gen_frame + 0x8)) = lVar7;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
        F_00c6df06((gen_frame + 0x2c));
        uVar3 = (undefined4)(*(longlong *)(gen_frame + 0x8));
        uVar5 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4));
        goto LAB_00c6df00;
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  uVar3 = 0xffffffff;
  uVar5 = 0xffffffff;
LAB_00c6df00: ;
  return (longlong)CONCAT44(uVar5,uVar3);
}

/* ref: FUN_00c6df06 */
unsigned int F_00c6df06(unsigned int gen_a0)
{
  GEN_ENTER(0xc6df06u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: __ceil_default */
float10 F_00c6df10(double gen_a0)
{
  GEN_ENTER(0xc6df10u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  double dVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  uVar2 = F_00c6f59e(REFG(undefined4, 0x134bc80),0xffff);
  uVar4 = (undefined4)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x20);
  if (((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff0) == 0x7ff0) {
    uVar3 = F_00c6ebcd((int)(ulonglong)gen_d2bits((*(double *)&gen_args[0])),uVar4);
    if (0 < (int)uVar3) {
      if ((int)uVar3 < 3) {
        F_00c6f59e(uVar2,0xffff);
        return (float10)(*(double *)&gen_args[0]);
      }
      if (uVar3 == 3) {
        fVar5 = F_00c6f323(0xc,(*(double *)&gen_args[0]),uVar2);
        return fVar5;
      }
    }
    dVar1 = (*(double *)&gen_args[0]) + REFG(double, 0x1088130);
    uVar6 = 8;
  }
  else {
    fVar5 = F_00c7d6ab((*(double *)&gen_args[0]));
    dVar1 = (double)fVar5;
    if (((GEN_ISNAN((*(double *)&gen_args[0])) || GEN_ISNAN(dVar1)) != ((GEN_ISNAN((*(double *)&gen_args[0])) || GEN_ISNAN(dVar1)) || (*(double *)&gen_args[0]) == dVar1)) ||
       ((uVar2 & 0x20) != 0)) {
      F_00c6f59e(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar6 = 0x10;
  }
  fVar5 = F_00c6f3d9(uVar4,uVar6,0xc,(*(double *)&gen_args[0]),dVar1,uVar2);
  return fVar5;
}

/* ref: __isleadbyte_l */
int F_00c6dfe8(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6dfe8u, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + (_C & 0xffU) * 2)));
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}

/* ref: _isleadbyte */
int F_00c6e020(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e020u, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  iVar1 = F_00c6dfe8(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: FID_conflict__iswalpha_00c6e033 */
int F_00c6e033(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e033u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  return iVar1;
}

/* ref: FID_conflict__iswalpha_00c6e049 */
int F_00c6e049(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e049u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  return iVar1;
}

/* ref: FID_conflict___iswupper_l_00c6e05f */
int F_00c6e05f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e05fu, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,1);
  return iVar1;
}

/* ref: FID_conflict___iswupper_l_00c6e072 */
int F_00c6e072(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e072u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,1);
  return iVar1;
}

/* ref: FID_conflict__iswlower_00c6e085 */
int F_00c6e085(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e085u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,2);
  return iVar1;
}

/* ref: FID_conflict__iswlower_00c6e098 */
int F_00c6e098(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e098u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,2);
  return iVar1;
}

/* ref: FID_conflict___iswdigit_l_00c6e0ab */
int F_00c6e0ab(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e0abu, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,4);
  return iVar1;
}

/* ref: FID_conflict___iswdigit_l_00c6e0be */
int F_00c6e0be(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e0beu, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,4);
  return iVar1;
}

/* ref: FID_conflict___iswxdigit_l_00c6e0d1 */
int F_00c6e0d1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e0d1u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x80);
  return iVar1;
}

/* ref: FID_conflict___iswxdigit_l_00c6e0e7 */
int F_00c6e0e7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e0e7u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x80);
  return iVar1;
}

/* ref: FID_conflict___iswspace_l_00c6e0fd */
int F_00c6e0fd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e0fdu, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,8);
  return iVar1;
}

/* ref: FID_conflict___iswspace_l_00c6e110 */
int F_00c6e110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e110u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,8);
  return iVar1;
}

/* ref: FID_conflict__iswpunct_00c6e123 */
int F_00c6e123(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e123u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x10);
  return iVar1;
}

/* ref: FID_conflict__iswpunct_00c6e136 */
int F_00c6e136(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e136u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x10);
  return iVar1;
}

/* ref: FID_conflict__iswalnum_00c6e149 */
int F_00c6e149(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e149u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  return iVar1;
}

/* ref: FID_conflict__iswalnum_00c6e15f */
int F_00c6e15f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e15fu, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  return iVar1;
}

/* ref: FID_conflict__iswprint_00c6e175 */
int F_00c6e175(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e175u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x157);
  return iVar1;
}

/* ref: FID_conflict__iswprint_00c6e18b */
int F_00c6e18b(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e18bu, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x157);
  return iVar1;
}

/* ref: FID_conflict___iswgraph_l_00c6e1a1 */
int F_00c6e1a1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e1a1u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x117);
  return iVar1;
}

/* ref: FID_conflict___iswgraph_l_00c6e1b7 */
int F_00c6e1b7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e1b7u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x117);
  return iVar1;
}

/* ref: FID_conflict__iswcntrl_00c6e1cd */
int F_00c6e1cd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e1cdu, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x20);
  return iVar1;
}

/* ref: FID_conflict__iswcntrl_00c6e1e0 */
int F_00c6e1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e1e0u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x20);
  return iVar1;
}

/* ref: FUN_00c6e1f3 */
uint F_00c6e1f3(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e1f3u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (uint)((ushort)param_1 < 0x80);
}

/* ref: FID_conflict___iswcsym_l_00c6e207 */
int F_00c6e207(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e207u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict___iswcsym_l_00c6e22d */
int F_00c6e22d(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e22du, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict____iswcsymf_00c6e253 */
int F_00c6e253(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e253u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict____iswcsymf_00c6e279 */
int F_00c6e279(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e279u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c6e2a0 */
float10 F_00c6e2a0(double gen_a0)
{
  GEN_ENTER(0xc6e2a0u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  double in_xmm7;
  float10 fVar1;
  
  in_xmm7 = (double)in_st0;
  fVar1 = F_00c6e2be(in_xmm7,(uint)(ulonglong)gen_d2bits(in_xmm7),
                       (int)((ulonglong)gen_d2bits(in_xmm7) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c6e2be */
float10 F_00c6e2be(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6e2beu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  gen_args[3] = gen_a2;
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x1125700));
  dVar3 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x1125708));
  if (!GEN_ISNAN(dVar2) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x1125828))) {
    if (!(*(double *)&REFG(undefined, 0x1125828) <= dVar2)) {
      if ((!GEN_ISNAN(dVar2) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x1125818))) && !(dVar2 < *(double *)&REFG(undefined, 0x1125818))) {
        if (!(*(double *)&REFG(undefined, 0x1125810) <= dVar2)) {
          dVar2 = dVar2 * dVar2;
          dVar5 = dVar2 * dVar2;
          dVar3 = (dVar3 * dVar3) * (dVar3 * dVar3);
          return ((float10)GEN_TOD(((*(double *)&gen_args[0]) -
                          ((((((((*(double *)&REFG(undefined, 0x1125790) * dVar5 + *(double *)&REFG(undefined, 0x1125780)) *
                                 dVar5 + *(double *)&REFG(undefined, 0x1125770)) * dVar5 +
                               *(double *)&REFG(undefined, 0x1125760)) * dVar5 + *(double *)&REFG(undefined, 0x1125750)) * dVar5
                             + *(double *)&REFG(undefined, 0x1125740)) * dVar5 + *(double *)&REFG(undefined, 0x1125730)) * dVar5
                           + *(double *)&REFG(undefined, 0x1125720)) * dVar2 +
                          (((((((*(double *)&REFG(undefined, 0x1125798) * dVar3 + *(double *)&REFG(undefined, 0x1125788)) *
                                dVar3 + *(double *)&REFG(undefined, 0x1125778)) * dVar3 + *(double *)&REFG(undefined, 0x1125768)
                              ) * dVar3 + *(double *)&REFG(undefined, 0x1125758)) * dVar3 +
                            *(double *)&REFG(undefined, 0x1125748)) * dVar3 + *(double *)&REFG(undefined, 0x1125738)) * dVar3 +
                          *(double *)&REFG(undefined, 0x1125728))) * (*(double *)&gen_args[0]))));
        }
        if ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x1125808))) || dVar2 < *(double *)&REFG(undefined, 0x1125808)) {
          iVar4 = (uint)((ulonglong)gen_d2bits(dVar2 + REFG(undefined8, 0x1125800)) >> 0x2c) - (int)REFG(undefined8, 0x11257e0);
          iVar1 = iVar4 * 3;
          dVar3 = (dVar2 - *(double *)(&REFG(undefined, 0x11267f0) + iVar4 * 0x18)) /
                  (dVar2 * *(double *)(&REFG(undefined, 0x11267f0) + iVar4 * 0x18) + *(double *)&REFG(undefined, 0x11257f8));
        }
        else {
          iVar1 = 0x300;
          dVar3 = REFG(undefined8, 0x11257f0) / dVar2;
        }
        dVar5 = dVar3 * dVar3;
        dVar6 = dVar5 * dVar5;
        dVar7 = (dVar3 * dVar3) * (dVar3 * dVar3);
        return ((float10)GEN_TOD(gen_bits2d((ulonglong)
                                   gen_d2bits(*(double *)(&REFG(undefined, 0x11267e0) + iVar1 * 8) -
                                              ((((((*(double *)&REFG(undefined, 0x11257d0) * dVar6 +
                                                   *(double *)&REFG(undefined, 0x11257c0)) * dVar6 +
                                                  *(double *)&REFG(undefined, 0x11257b0)) * dVar6 +
                                                 *(double *)&REFG(undefined, 0x11257a0)) * dVar5 +
                                                (((*(double *)&REFG(undefined, 0x11257d8) * dVar7 +
                                                  *(double *)&REFG(undefined, 0x11257c8)) * dVar7 +
                                                 *(double *)&REFG(undefined, 0x11257b8)) * dVar7 +
                                                *(double *)&REFG(undefined, 0x11257a8))) * dVar3 -
                                               *(double *)(&REFG(undefined, 0x11267e8) + iVar1 * 8)) - dVar3)) |
                                   (ulonglong)gen_d2bits((*(double *)&gen_args[0])) ^ (ulonglong)gen_d2bits(dVar2))));
      }
      if (*(double *)&REFG(undefined, 0x1125820) <= dVar2) {
        dVar2 = dVar2 * dVar2;
        dVar5 = dVar2 * dVar2;
        dVar3 = (dVar3 * dVar3) * (dVar3 * dVar3);
        return ((float10)GEN_TOD(((*(double *)&gen_args[0]) -
                        ((((*(double *)&REFG(undefined, 0x11257d0) * dVar5 + *(double *)&REFG(undefined, 0x11257c0)) * dVar5 +
                          *(double *)&REFG(undefined, 0x11257b0)) * dVar5 + *(double *)&REFG(undefined, 0x11257a0)) * dVar2 +
                        (((*(double *)&REFG(undefined, 0x11257d8) * dVar3 + *(double *)&REFG(undefined, 0x11257c8)) * dVar3 +
                         *(double *)&REFG(undefined, 0x11257b8)) * dVar3 + *(double *)&REFG(undefined, 0x11257a8))) * (*(double *)&gen_args[0]))));
      }
      if ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x11257e8))) || dVar2 == *(double *)&REFG(undefined, 0x11257e8)) {
        return (float10)*(double *)&(*(uint *)&gen_args[2]);
      }
      if (!(*(double *)&REFG(undefined, 0x1125830) <= dVar2)) {
        return (float10)(*(double *)&REFG(undefined, 0x1125838) * *(double *)&REFG(undefined, 0x1125838)) +
               (float10)*(double *)&(*(uint *)&gen_args[2]);
      }
      return (float10)*(double *)&REFG(undefined, 0x1125838) * (float10)*(double *)&REFG(undefined, 0x1125838) +
             (float10)*(double *)&(*(uint *)&gen_args[2]);
    }
    if (!GEN_ISNAN(gen_bits2d((ulonglong)gen_d2bits(dVar2) & (ulonglong)gen_d2bits(REFG(undefined8, 0x11256f0)))) &&
        !GEN_ISNAN(REFG(undefined8, 0x11256f0))) {
      return (float10)*(double *)&REFG(undefined, 0x1125838) +
             (float10)*(double *)(&REFG(undefined, 0x1125710) + ((*(int *)&gen_args[3]) >> 0x1f) * -8);
    }
  }
  F_00c6bf0e(&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[2]),0x3eb);
  return (float10)*(double *)&(*(uint *)&gen_args[2]);
}

/* ref: __alloca_probe_16 */
uint F_00c6e590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e590u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 4 - in_eax & 0xf;
  return in_eax + uVar1 | -(uint)CARRY4(in_eax,uVar1);
}

/* ref: __alloca_probe_8 */
uint F_00c6e5a6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e5a6u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 4 - in_eax & 7;
  return in_eax + uVar1 | -(uint)CARRY4(in_eax,uVar1);
}

/* ref: FUN_00c6e5bc */
uint F_00c6e5bc(void)
{
  GEN_ENTER(0xc6e5bcu, 0u, 0u, 0u, 0u);
  undefined * _File;
  int iVar1;
  int iVar2;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_c;
  undefined * puStack_8;
  
  puStack_8 = &REFG(undefined, 0x12f6778);
  uStack_c = 0xc6e5c8;
  uStack_20 = 0;
  F_00c5aa4f(1);
  puStack_8 = (undefined *)0x0;
  for (iVar2 = 3; iStack_24 = iVar2, iVar2 < REFG(int, 0x15e52c0); iVar2 = iVar2 + 1) {
    if (*(int *)(REFG(int, 0x15e42a8) + iVar2 * 4) != 0) {
      _File = *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + iVar2 * 4);
      if (((*(int *)(((char *)(_File) + 12))) & 0x83) != 0) {
        iVar1 = F_00c49312(_File);
        if (iVar1 != -1) {
          uStack_20 = uStack_20 + 1;
        }
      }
      if (0x13 < iVar2) {
        gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(REFG(int, 0x15e42a8) + iVar2 * 4) + 0x20));
        F_00c4c68f(*(undefined * PTR32 *)(REFG(int, 0x15e42a8) + iVar2 * 4));
        *(undefined4 *)(REFG(int, 0x15e42a8) + iVar2 * 4) = 0;
      }
    }
  }
  puStack_8 = (undefined *)0xfffffffe;
  F_00c6e64f();
  return uStack_20;
}

/* ref: FUN_00c6e64f */
uint F_00c6e64f(void)
{
  GEN_ENTER(0xc6e64fu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: __getbuf */
unsigned int F_00c6e658(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e658u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
  pcVar1 = F_00c54c2e(0x1000);
  (*(char * PTR32 *)(((char *)(_File) + 8))) = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 4;
    (*(char * PTR32 *)(((char *)(_File) + 8))) = (char *)&(*(int *)(((char *)(_File) + 20)));
    (*(int *)(((char *)(_File) + 24))) = 2;
  }
  else {
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 8;
    (*(int *)(((char *)(_File) + 24))) = 0x1000;
  }
  (*(int *)(((char *)(_File) + 4))) = 0;
  (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)(((char *)(_File) + 8)));
  return 0;
}

/* ref: __commit */
int F_00c6e6a1(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e6a1u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int _FileHandle_00;
  int * piVar1;
  int iVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  ulong * puVar5;
  int iVar6;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6798);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc6e6ad;
  if ((*(int *)&gen_args[0]) == -2) {
    piVar1 = F_00c51f85();
    *piVar1 = 9;
  }
  else {
    if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
      iVar2 = (*(int *)&gen_args[0]) >> 5;
      iVar6 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
      if ((*((byte *)GEN_TOP((iVar6 + 4 + (&REFG(undefined4, 0x15e41a0))[iVar2]))) & 1) != 0) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP((iVar6 + 4 + (&REFG(undefined4, 0x15e41a0))[iVar2]))) & 1) != 0) {
          hFile = (HANDLE)F_00c6d7ae(_FileHandle_00);
          BVar3 = gen_imp_FlushFileBuffers(hFile);
          if (BVar3 == 0) {
            DVar4 = gen_imp_GetLastError();
            (*(DWORD *)(gen_frame + 0x0)) = DVar4;
          }
          else {
            (*(DWORD *)(gen_frame + 0x0)) = 0;
          }
          if ((*(DWORD *)(gen_frame + 0x0)) == 0) goto LAB_00c6e75a;
          puVar5 = F_00c51f98();
          *puVar5 = (*(DWORD *)(gen_frame + 0x0));
        }
        piVar1 = F_00c51f85();
        *piVar1 = 9;
        (*(DWORD *)(gen_frame + 0x0)) = 0xffffffff;
LAB_00c6e75a: ;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c6e772(_FileHandle_00);
        return (*(DWORD *)(gen_frame + 0x0));
      }
    }
    piVar1 = F_00c51f85();
    *piVar1 = 9;
    F_00c4c305();
  }
  return -1;
}

/* ref: FUN_00c6e76f */
unsigned int F_00c6e76f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e76fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c6e772 */
unsigned int F_00c6e772(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e772u, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __ftelli64_nolock */
longlong F_00c6e77a(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e77au, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11020];
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  int iVar4;
  BOOL BVar5;
  byte * pbVar6;
  int * piVar7;
  char * pcVar8;
  byte bVar9;
  int iVar10;
  char * pcVar11;
  int iVar12;
  uint uVar13;
  char * pcVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  (*(uint *)(gen_frame + 0x11018)) = 0xc6e789;
  (*(uint *)(gen_frame + 0x11018)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar2 = F_00c5d07b(_File);
  if ((*(int *)(((char *)(_File) + 4))) < 0) {
    (*(int *)(((char *)(_File) + 4))) = 0;
  }
  (*(ulonglong *)(gen_frame + 0x10008)) = F_00c6de26(uVar2,0,0,1);
  iVar10 = (int)((*(ulonglong *)(gen_frame + 0x10008)) >> 0x20);
  pcVar3 = (char *)(*(ulonglong *)(gen_frame + 0x10008));
  if ((iVar10 == 0 || (longlong)(*(ulonglong *)(gen_frame + 0x10008)) < 0) && ((longlong)(*(ulonglong *)(gen_frame + 0x10008)) < 0)) goto LAB_00c6e7d7;
  piVar7 = &REFG(undefined4, 0x15e41a0) + ((int)uVar2 >> 5);
  iVar12 = (uVar2 & 0x1f) * 0x40;
  iVar4 = *piVar7 + iVar12;
  bVar9 = (char)(*(char *)(iVar4 + 0x24) * '\x02') >> 1;
  uVar1 = (*(int *)(((char *)(_File) + 12)));
  ((byte *)(gen_frame + 0x10017))[0] = bVar9;
  if ((uVar1 & 0x108) == 0) {
    (*(ulonglong *)(gen_frame + 0x10008)) = (*(ulonglong *)(gen_frame + 0x10008)) - (longlong)(*(int *)(((char *)(_File) + 4)));
    goto LAB_00c6eab5;
  }
  pcVar14 = (*(char * PTR32 *)((char *)(_File)));
  uVar1 = (*(int *)(((char *)(_File) + 12)));
  uVar13 = (int)pcVar14 - (int)(*(char * PTR32 *)(((char *)(_File) + 8)));
  (*(DWORD *)(gen_frame + 0x10010)) = uVar13;
  if ((uVar1 & 3) == 0) {
    if ((char)uVar1 < '\0') goto LAB_00c6e985;
    piVar7 = F_00c51f85();
    *piVar7 = 0x16;
  }
  else {
    if ((bVar9 != 1) || (*(int *)(iVar4 + 0x30) == 0)) {
      if ((*(byte *)(iVar4 + 4) & 0x80) != 0) {
        for (pcVar11 = (*(char * PTR32 *)(((char *)(_File) + 8))); pcVar11 < pcVar14; pcVar11 = pcVar11 + 1) {
          if (*pcVar11 == '\n') {
            (*(DWORD *)(gen_frame + 0x10010)) = (*(DWORD *)(gen_frame + 0x10010)) + 1;
          }
        }
      }
LAB_00c6e985: ;
      if ((*(ulonglong *)(gen_frame + 0x10008)) == 0) {
        (*(ulonglong *)(gen_frame + 0x10008)) = (ulonglong)(*(DWORD *)(gen_frame + 0x10010));
        goto LAB_00c6eab5;
      }
      if (((*(int *)(((char *)(_File) + 12))) & 1) != 0) {
        if ((*(int *)(((char *)(_File) + 4))) == 0) {
          (*(DWORD *)(gen_frame + 0x10010)) = 0;
        }
        else {
          pcVar14 = pcVar14 + ((*(int *)(((char *)(_File) + 4))) - (int)(*(char * PTR32 *)(((char *)(_File) + 8))));
          if ((*(byte *)(iVar4 + 4) & 0x80) != 0) {
            uVar18 = F_00c6de26(uVar2,0,0,2);
            if (uVar18 == (*(ulonglong *)(gen_frame + 0x10008))) {
              pcVar8 = (*(char * PTR32 *)(((char *)(_File) + 8)));
              pcVar11 = pcVar8 + (int)pcVar14;
              for (; pcVar8 < pcVar11; pcVar8 = pcVar8 + 1) {
                if (*pcVar8 == '\n') {
                  pcVar14 = pcVar14 + 1;
                }
              }
              bVar15 = ((*(int *)(((char *)(_File) + 12))) & 0x2000U) == 0;
            }
            else {
              lVar16 = F_00c6de26(uVar2,pcVar3,iVar10,0);
              if (((int)((ulonglong)lVar16 >> 0x20) == 0 || lVar16 < 0) && (lVar16 < 0))
              goto LAB_00c6e7d7;
              if (((char *)0x200 < pcVar14) ||
                 ((((*(int *)(((char *)(_File) + 12))) & 8U) == 0 ||
                  (pcVar14 = (char *)0x200, ((*(int *)(((char *)(_File) + 12))) & 0x400U) != 0)))) {
                pcVar14 = (char *)(*(int *)(((char *)(_File) + 24)));
              }
              bVar15 = (*(byte *)(*piVar7 + 4 + iVar12) & 4) == 0;
            }
            if (!bVar15) {
              pcVar14 = pcVar14 + 1;
            }
          }
          if (((byte *)(gen_frame + 0x10017))[0] == 1) {
            pcVar14 = (char *)((uint)((int)(uintptr_t)pcVar14) >> 1);
          }
          (*(ulonglong *)(gen_frame + 0x10008)) = CONCAT44(iVar10 - (uint)(pcVar3 < pcVar14),(int)pcVar3 - (int)pcVar14);
        }
      }
      if (((byte *)(gen_frame + 0x10017))[0] == 1) {
        (*(DWORD *)(gen_frame + 0x10010)) = (*(DWORD *)(gen_frame + 0x10010)) >> 1;
      }
      (*(ulonglong *)(gen_frame + 0x10008)) = CONCAT44((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10008)) + 4)) + (uint)CARRY4((*(DWORD *)(gen_frame + 0x10010)),(uint)(*(ulonglong *)(gen_frame + 0x10008))),
                            (*(DWORD *)(gen_frame + 0x10010)) + (uint)(*(ulonglong *)(gen_frame + 0x10008)));
      goto LAB_00c6eab5;
    }
    uVar13 = uVar13 >> 1;
    if ((*(int *)(((char *)(_File) + 4))) == 0) goto LAB_00c6eab5;
    lVar16 = F_00c6de26(uVar2,*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c),0);
    iVar4 = *piVar7;
    if ((((int)lVar16 == *(int *)(iVar4 + 0x28 + iVar12)) &&
        ((int)((ulonglong)lVar16 >> 0x20) == *(int *)(iVar4 + 0x2c + iVar12))) &&
       (BVar5 = gen_imp_ReadFile(*(HANDLE *)(iVar4 + iVar12),((byte *)(gen_frame + 0x10017)) + 1,0x1000,&(*(DWORD *)(gen_frame + 0x10010)),
                         (GEN_LPANY)0x0), BVar5 != 0)) {
      lVar17 = F_00c6de26(uVar2,pcVar3,iVar10,0);
      if ((((int)((ulonglong)lVar17 >> 0x20) != 0 && -1 < lVar17) || (-1 < lVar17)) &&
         (uVar13 <= (*(DWORD *)(gen_frame + 0x10010)))) {
        pbVar6 = ((byte *)(gen_frame + 0x10017)) + 1;
        if (uVar13 != 0) {
          do {
            uVar13 = uVar13 - 1;
            if (((byte *)(gen_frame + 0x10017)) + (*(DWORD *)(gen_frame + 0x10010)) + 1 <= pbVar6) break;
            if (*pbVar6 == 0xd) {
              if ((pbVar6 < ((byte *)(gen_frame + 0x10017)) + (*(DWORD *)(gen_frame + 0x10010))) && (pbVar6[1] == 10)) {
                pbVar6 = pbVar6 + 1;
              }
            }
            else {
              pbVar6 = pbVar6 + (char)(&REFG(undefined, 0x134ba38))[*pbVar6];
            }
            pbVar6 = pbVar6 + 1;
          } while (uVar13 != 0);
        }
        (*(ulonglong *)(gen_frame + 0x10008)) = lVar16 + (ulonglong)(uint)((int)pbVar6 - (int)(((byte *)(gen_frame + 0x10017)) + 1));
        goto LAB_00c6eab5;
      }
    }
  }
LAB_00c6e7d7: ;
  (*(ulonglong *)(gen_frame + 0x10008)) = 0xffffffffffffffff;
LAB_00c6eab5: ;
  F_00c47745((*(uint *)(gen_frame + 0x11018)) ^ (uint)(uint)(gen_frame + 0x0));
  return (*(ulonglong *)(gen_frame + 0x10008));
}

/* ref: __ftelli64 */
longlong F_00c6eac4(unsigned int gen_a0)
{
  GEN_ENTER(0xc6eac4u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f67b8);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc6ead0;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar3 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    lVar4 = F_00c6e77a((*(undefined * PTR32 *)&gen_args[0]));
    (*(longlong *)(gen_frame + 0xc)) = lVar4;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c6eb27((gen_frame + 0x2c));
    uVar2 = (undefined4)(*(longlong *)(gen_frame + 0xc));
    uVar3 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4));
  }
  return (longlong)CONCAT44(uVar3,uVar2);
}

/* ref: FUN_00c6eb27 */
uint F_00c6eb27(unsigned int gen_a0)
{
  GEN_ENTER(0xc6eb27u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: __set_exp */
float10 F_00c6eb31(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eb31u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  double local_c;
  
  local_c = gen_bits2d(CONCAT26(((short)(*(undefined4 *)&gen_args[2]) + 0x3fe) * 0x10 | (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x800f,
                                (int6)(ulonglong)gen_d2bits((*(double *)&gen_args[0]))));
  return (float10)local_c;
}

/* ref: FUN_00c6eb5e */
uint F_00c6eb5e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eb5eu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (int)(short)(((*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 2)) >> 4 & 0x7ff) - 0x3fe);
}

/* ref: __add_exp */
float10 F_00c6eb77(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eb77u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  float10 fVar1;
  
  fVar1 = F_00c6eb31((*(double *)&gen_args[0]),(((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) >> 4 & 0x7ff) - 0x3fe) + (*(int *)&gen_args[2]));
  return fVar1;
}

/* ref: __set_bexp */
uint F_00c6eba5(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eba5u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  return (*(int *)&gen_args[2]) << 4 | (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x800f;
}

/* ref: __sptype */
uint F_00c6ebcd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6ebcdu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  if ((*(uint *)&gen_args[1]) == 0x7ff00000) {
    if ((*(int *)&gen_args[0]) == 0) {
      return 1;
    }
  }
  else if (((*(uint *)&gen_args[1]) == 0xfff00000) && ((*(int *)&gen_args[0]) == 0)) {
    return 2;
  }
  if (((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff8) == 0x7ff8) {
    uVar1 = 3;
  }
  else {
    if ((((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff8) != 0x7ff0) || ((((*(uint *)&gen_args[1]) & 0x7ffff) == 0 && ((*(int *)&gen_args[0]) == 0)))) {
      return 0;
    }
    uVar1 = 4;
  }
  return uVar1;
}

/* ref: FUN_00c6ec33 */
float10 F_00c6ec33(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6ec33u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  
  fVar6 = (float10)0;
  bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)(*(double *)&gen_args[0]));
  if (bVar5 == (bVar5 || fVar6 == (float10)(*(double *)&gen_args[0]))) {
    if ((((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0x7ff0000000000000) == 0) &&
       ((((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0xfffff00000000) != 0 || ((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) != 0)))) {
      fVar3 = (float10)(*(double *)&gen_args[0]);
      iVar4 = -0x3fd;
      if (!(fVar3 <= fVar6) || ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3)) || fVar6 == fVar3)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      while (((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x10) == 0) {
        iVar2 = (int)CONCAT13((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)),CONCAT12((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)),(*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)))) << 1;
        (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)) = (ushort)iVar2;
        (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)) = (byte)((uint)iVar2 >> 0x10);
        (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)) = (byte)((uint)iVar2 >> 0x18);
        if (((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) & 0x80000000) != 0) {
          (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)) = (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)) | 1;
        }
        (*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) = (*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) << 1;
        iVar4 = iVar4 + -1;
      }
      uVar1 = CONCAT11((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)),(*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6))) & 0xffef;
      (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)) = (byte)uVar1;
      (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)) = (byte)(uVar1 >> 8);
      if (bVar5) {
        (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)) = (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)) | 0x80;
      }
      fVar6 = F_00c6eb31(GEN_TOD(gen_bits2d(CONCAT17((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)),
                                            CONCAT16((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)),
                                                     CONCAT24((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)),(*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0))))))),0);
    }
    else {
      fVar6 = F_00c6eb31((*(double *)&gen_args[0]),0);
      iVar4 = ((ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x34) & 0x7ff) - 0x3fe;
    }
  }
  else {
    iVar4 = 0;
  }
  *(*(int * PTR32 *)&gen_args[2]) = iVar4;
  return fVar6;
}

/* ref: __raise_exc_ex */
unsigned int F_00c6ecf6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc6ecf6u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  uint * puVar1;
  uint * puVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (*(uint *)&gen_args[2]);
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  (*(uint * PTR32 *)&gen_args[0])[1] = 0;
  (*(uint * PTR32 *)&gen_args[0])[2] = 0;
  (*(uint * PTR32 *)&gen_args[0])[3] = 0;
  if (((*(uint *)&gen_args[2]) & 0x10) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 1;
    (*(uint *)&gen_args[2]) = 0xc000008f;
  }
  if ((uVar4 & 2) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 2;
    (*(uint *)&gen_args[2]) = 0xc0000093;
  }
  if ((uVar4 & 1) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 4;
    (*(uint *)&gen_args[2]) = 0xc0000091;
  }
  if ((uVar4 & 4) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 8;
    (*(uint *)&gen_args[2]) = 0xc000008e;
  }
  if ((uVar4 & 8) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 0x10;
    (*(uint *)&gen_args[2]) = 0xc0000090;
  }
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) << 4) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 0x10;
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) * 2) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 8;
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) >> 1) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 4;
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) >> 3) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 2;
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) >> 5) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 1;
  bVar3 = F_00c6f57d();
  puVar2 = (*(uint * PTR32 *)&gen_args[5]);
  if ((bVar3 & 1) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 0x10;
  }
  if ((bVar3 & 4) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 8;
  }
  if ((bVar3 & 8) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 4;
  }
  if ((bVar3 & 0x10) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 2;
  }
  if ((bVar3 & 0x20) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 1;
  }
  uVar4 = *puVar1 & 0xc00;
  if (uVar4 == 0) {
    *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) & 0xfffffffc;
  }
  else {
    if (uVar4 == 0x400) {
      uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 0xfffffffd | 1;
    }
    else {
      if (uVar4 != 0x800) {
        if (uVar4 == 0xc00) {
          *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) | 3;
        }
        goto LAB_00c6ee55;
      }
      uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 0xfffffffe | 2;
    }
    *(*(uint * PTR32 *)&gen_args[0]) = uVar4;
  }
LAB_00c6ee55: ;
  uVar4 = *puVar1 & 0x300;
  if (uVar4 == 0) {
    uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 0xffffffeb | 8;
LAB_00c6ee8b: ;
    *(*(uint * PTR32 *)&gen_args[0]) = uVar4;
  }
  else {
    if (uVar4 == 0x200) {
      uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 0xffffffe7 | 4;
      goto LAB_00c6ee8b;
    }
    if (uVar4 == 0x300) {
      *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) & 0xffffffe3;
    }
  }
  *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) ^ ((*(int *)&gen_args[3]) << 5 ^ *(*(uint * PTR32 *)&gen_args[0])) & 0x1ffe0;
  (*(uint * PTR32 *)&gen_args[0])[8] = (*(uint * PTR32 *)&gen_args[0])[8] | 1;
  if ((*(int *)&gen_args[6]) == 0) {
    (*(uint * PTR32 *)&gen_args[0])[8] = (*(uint * PTR32 *)&gen_args[0])[8] & 0xffffffe3 | 2;
    *((undefined8 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 4))) = *(undefined8 *)(*(uint * PTR32 *)&gen_args[4]);
    (*(uint * PTR32 *)&gen_args[0])[0x18] = (*(uint * PTR32 *)&gen_args[0])[0x18] | 1;
    (*(uint * PTR32 *)&gen_args[0])[0x18] = (*(uint * PTR32 *)&gen_args[0])[0x18] & 0xffffffe3 | 2;
    *((undefined8 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 0x14))) = *(undefined8 *)(*(uint * PTR32 *)&gen_args[5]);
  }
  else {
    (*(uint * PTR32 *)&gen_args[0])[8] = (*(uint * PTR32 *)&gen_args[0])[8] & 0xffffffe1;
    (*(uint * PTR32 *)&gen_args[0])[4] = *(*(uint * PTR32 *)&gen_args[4]);
    (*(uint * PTR32 *)&gen_args[0])[0x18] = (*(uint * PTR32 *)&gen_args[0])[0x18] | 1;
    (*(uint * PTR32 *)&gen_args[0])[0x18] = (*(uint * PTR32 *)&gen_args[0])[0x18] & 0xffffffe1;
    (*(uint * PTR32 *)&gen_args[0])[0x14] = *(*(uint * PTR32 *)&gen_args[5]);
  }
  F_00c6f58d();
  gen_imp_RaiseException((*(uint *)&gen_args[2]),0,1,(ULONG_PTR *)&(*(uint * PTR32 *)&gen_args[0]));
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 3;
  if (uVar4 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar4 == 1) {
      uVar4 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar4 != 2) {
        if (uVar4 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_00c6ef90;
      }
      uVar4 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar4;
  }
LAB_00c6ef90: ;
  uVar4 = *(*(uint * PTR32 *)&gen_args[0]) >> 2 & 7;
  if (uVar4 == 0) {
    uVar4 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_00c6efbc;
    }
    uVar4 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar4;
LAB_00c6efbc: ;
  if ((*(int *)&gen_args[6]) == 0) {
    *(undefined8 *)puVar2 = *((undefined8 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 0x14)));
  }
  else {
    *puVar2 = (*(uint * PTR32 *)&gen_args[0])[0x14];
  }
  return 0;
}

/* ref: __raise_exc */
unsigned int F_00c6efd2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc6efd2u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00c6ecf6(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return 0;
}

/* ref: __raise_excf */
unsigned int F_00c6eff5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc6eff5u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00c6ecf6(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return 0;
}

/* ref: __handle_exc */
byte F_00c6f018(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6f018u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  double * param_2 = (double *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  
  uVar5 = param_1 & 0x1f;
  bVar3 = true;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    F_00c6f5c9(1);
    uVar5 = param_1 & 0x17;
    goto LAB_00c6f1da;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    F_00c6f5c9(4);
    uVar5 = param_1 & 0x1b;
    goto LAB_00c6f1da;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_00c6f1da;
    bVar6 = (param_1 & 0x10) != 0;
    dVar1 = *param_2;
    if (GEN_ISNAN(dVar1) == (GEN_ISNAN(dVar1) || dVar1 == 0.0)) {
      fVar7 = F_00c6ec33(*param_2,&(*(int *)(gen_frame + 0x14)));
      dVar1 = (double)fVar7;
      (*(uint *)(gen_frame + 0x8)) = (uint)(ulonglong)gen_d2bits(dVar1);
      (*(byte *)(gen_frame + 0xc)) = (byte)((ulonglong)gen_d2bits(dVar1) >> 0x20);
      (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)((ulonglong)gen_d2bits(dVar1) >> 0x28);
      (*(ushort *)(gen_frame + 0xe)) = (ushort)((ulonglong)gen_d2bits(dVar1) >> 0x30);
      iVar4 = (*(int *)(gen_frame + 0x14)) + -0x600;
      if (iVar4 < -0x432) {
        dVar1 = dVar1 * *(double *)&REFG(undefined, 0x108bec8);
        bVar6 = bVar3;
LAB_00c6f1ba: ;
        (*(uint *)(gen_frame + 0x8)) = (uint)(ulonglong)gen_d2bits(dVar1);
        (*(byte *)(gen_frame + 0xc)) = (byte)((ulonglong)gen_d2bits(dVar1) >> 0x20);
        (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)((ulonglong)gen_d2bits(dVar1) >> 0x28);
        (*(ushort *)(gen_frame + 0xe)) = (ushort)((ulonglong)gen_d2bits(dVar1) >> 0x30);
      }
      else {
        (*(ushort *)(gen_frame + 0xe)) = (*(ushort *)(gen_frame + 0xe)) & 0xf | 0x10;
        if (iVar4 < -0x3fd) {
          iVar4 = -0x3fd - iVar4;
          do {
            if ((((*(uint *)(gen_frame + 0x8)) & 1) != 0) && (!bVar6)) {
              bVar6 = bVar3;
            }
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) >> 1;
            if (((*(byte *)(gen_frame + 0xc)) & 1) != 0) {
              (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) | 0x80000000;
            }
            uVar5 = CONCAT22((*(ushort *)(gen_frame + 0xe)),CONCAT11((*(undefined1 *)(gen_frame + 0xd)),(*(byte *)(gen_frame + 0xc)))) >> 1;
            (*(byte *)(gen_frame + 0xc)) = (byte)uVar5;
            (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)(uVar5 >> 8);
            (*(ushort *)(gen_frame + 0xe)) = (*(ushort *)(gen_frame + 0xe)) >> 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (dVar1 <= 0.0 && (!GEN_ISNAN(dVar1) && dVar1 != 0.0)) {
          dVar1 = -gen_bits2d(CONCAT26((*(ushort *)(gen_frame + 0xe)),CONCAT15((*(undefined1 *)(gen_frame + 0xd)),CONCAT14((*(byte *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x8))))));
          goto LAB_00c6f1ba;
        }
      }
      *param_2 = gen_bits2d(CONCAT26((*(ushort *)(gen_frame + 0xe)),CONCAT15((*(undefined1 *)(gen_frame + 0xd)),CONCAT14((*(byte *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x8))))));
      bVar3 = bVar6;
    }
    if (bVar3) {
      F_00c6f5c9(0x10);
    }
    uVar5 = (*(uint *)(gen_frame + 0x18)) & 0xfffffffd;
    (*(uint *)(gen_frame + 0x18)) = uVar5;
    goto LAB_00c6f1da;
  }
  F_00c6f5c9(8);
  uVar5 = param_3 & 0xc00;
  dVar1 = *(double *)&REFG(undefined, 0x134bc90);
  dVar2 = *(double *)&REFG(undefined, 0x134bc90);
  if (uVar5 == 0) {
    if (!(*param_2 <= 0.0) == GEN_ISNAN(*param_2)) {
LAB_00c6f0f8: ;
      dVar1 = -dVar2;
    }
LAB_00c6f0fa: ;
    *param_2 = dVar1;
  }
  else {
    if (uVar5 == 0x400) {
      dVar1 = *(double *)&REFG(undefined, 0x134bca0);
      if (!(*param_2 <= 0.0) == GEN_ISNAN(*param_2)) goto LAB_00c6f0f8;
      goto LAB_00c6f0fa;
    }
    dVar2 = *(double *)&REFG(undefined, 0x134bca0);
    if (uVar5 == 0x800) {
      if (!(*param_2 <= 0.0) == GEN_ISNAN(*param_2)) goto LAB_00c6f0f8;
      goto LAB_00c6f0fa;
    }
    if (uVar5 == 0xc00) {
      dVar1 = *(double *)&REFG(undefined, 0x134bca0);
      if (!(*param_2 <= 0.0) == GEN_ISNAN(*param_2)) goto LAB_00c6f0f8;
      goto LAB_00c6f0fa;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_00c6f1da: ;
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    F_00c6f5c9(0x20);
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}

/* ref: __set_errno_from_matherr */
uint F_00c6f1fc(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f1fcu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * in_EAX = 0;
  int * piVar1;
  
  if (param_1 == 1) {
    in_EAX = F_00c51f85();
    *in_EAX = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x22;
    return (uint)piVar1;
  }
  return (uint)in_EAX;
}

/* ref: __get_fname */
uint F_00c6f229(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f229u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x134bcb8))[iVar1 * 2] == param_1) {
      return *(uint *)(iVar1 * 8 + 0x134bcbc);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  return 0;
}

/* ref: __errcode */
uint F_00c6f24f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f24fu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uStack_8;
  
  if (((byte)param_1 & 0x20) == 0) {
    if (((byte)param_1 & 8) != 0) {
      return 1;
    }
    if (((byte)param_1 & 4) == 0) {
      if (((byte)param_1 & 1) == 0) {
        return ((byte)param_1 & 2) * 2;
      }
      uStack_8 = 3;
    }
    else {
      uStack_8 = 2;
    }
  }
  else {
    uStack_8 = 5;
  }
  return uStack_8;
}

/* ref: __umatherr */
float10 F_00c6f283(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc6f283u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x134bcb8))[iVar1 * 2] == param_2) {
      iVar1 = *(int *)(iVar1 * 8 + 0x134bcbc);
      goto LAB_00c6f2a1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  iVar1 = 0;
LAB_00c6f2a1: ;
  (*(int *)(gen_frame + 0x10)) = iVar1;
  if (iVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = param_3;
    (*(undefined4 *)(gen_frame + 0x18)) = param_4;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_5;
    (*(undefined4 *)(gen_frame + 0x20)) = param_6;
    (*(uint *)(gen_frame + 0x24)) = param_7;
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x28)) = param_8;
    F_00c6f59e(param_9,0xffff);
    uVar2 = F_00c7db7d(&(*(undefined4 *)(gen_frame + 0xc)));
    if (uVar2 == 0) {
      F_00c6f1fc(param_1);
    }
    return ((float10)GEN_TOD(gen_bits2d(CONCAT44((*(undefined4 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x24))))));
  }
  F_00c6f59e(param_9,0xffff);
  F_00c6f1fc(param_1);
  return ((float10)GEN_TOD(gen_bits2d(CONCAT44(param_8,param_7))));
}

/* ref: __handle_qnan1 */
float10 F_00c6f323(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6f323u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  undefined4 param_1 = (undefined4)gen_a0;
  double param_2 = (double)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  if (REFG(int, 0x134c1bc) == 0) {
    uVar3 = (undefined4)((ulonglong)gen_d2bits(param_2) >> 0x20);
    fVar2 = F_00c6f283(1,param_1,(int)(ulonglong)gen_d2bits(param_2),uVar3,0,0,
                       (int)(ulonglong)gen_d2bits(param_2),uVar3,param_3);
    return fVar2;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x21;
  F_00c6f59e(param_3,0xffff);
  return (float10)param_2;
}

/* ref: __handle_qnan2 */
float10 F_00c6f378(unsigned int gen_a0, double gen_a1, double gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6f378u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), (unsigned int)gen_trace_d(gen_a2));
  undefined4 param_1 = (undefined4)gen_a0;
  double param_2 = (double)gen_a1;
  double param_3 = (double)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  double dVar1;
  int * piVar2;
  float10 fVar3;
  
  dVar1 = param_2 + param_3;
  if (REFG(int, 0x134c1bc) == 0) {
    fVar3 = F_00c6f283(1,param_1,(int)(ulonglong)gen_d2bits(param_2),
                       (int)((ulonglong)gen_d2bits(param_2) >> 0x20),
                       (int)(ulonglong)gen_d2bits(param_3),
                       (int)((ulonglong)gen_d2bits(param_3) >> 0x20),
                       (uint)(ulonglong)gen_d2bits(dVar1),
                       (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),param_4);
    return fVar3;
  }
  piVar2 = F_00c51f85();
  *piVar2 = 0x21;
  F_00c6f59e(param_4,0xffff);
  return (float10)dVar1;
}

/* ref: __except1 */
float10 F_00c6f3d9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, double gen_a3, double gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc6f3d9u, gen_a0, gen_a1, gen_a2, (unsigned int)gen_trace_d(gen_a3));
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[5], &gen_a4, sizeof gen_a4);
  gen_args[7] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  float10 fVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x84)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  bVar1 = F_00c6f018((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(double *)&gen_args[5]),(*(undefined4 *)&gen_args[7]));
  if ((int)CONCAT31(extraout_var,bVar1) == 0) {
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) & 0xfffffffe;
    F_00c6ecf6(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(double *)&gen_args[3]),&(*(double *)&gen_args[5]),0);
  }
  uVar2 = F_00c6f24f((*(undefined4 *)&gen_args[1]));
  if ((REFG(int, 0x134c1bc) == 0) && (uVar2 != 0)) {
    fVar3 = F_00c6f283(uVar2,(*(undefined4 *)&gen_args[2]),(int)(ulonglong)gen_d2bits((*(double *)&gen_args[3])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[3])) >> 0x20),0,0,
                       (uint)(ulonglong)gen_d2bits((*(double *)&gen_args[5])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[5])) >> 0x20),(*(undefined4 *)&gen_args[7]));
  }
  else {
    F_00c6f1fc(uVar2);
    F_00c6f59e((*(undefined4 *)&gen_args[7]),0xffff);
    fVar3 = (float10)(*(double *)&gen_args[5]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return fVar3;
}

/* ref: __except2 */
float10 F_00c6f4a3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, double gen_a3, double gen_a4, double gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc6f4a3u, gen_a0, gen_a1, gen_a2, (unsigned int)gen_trace_d(gen_a3));
  unsigned int gen_args[10];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[5], &gen_a4, sizeof gen_a4);
  memcpy(&gen_args[7], &gen_a5, sizeof gen_a5);
  gen_args[9] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  float10 fVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x84)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  bVar1 = F_00c6f018((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(double *)&gen_args[7]),(*(undefined4 *)&gen_args[9]));
  if ((int)CONCAT31(extraout_var,bVar1) == 0) {
    (*(double *)(gen_frame + 0x30)) = (*(double *)&gen_args[5]);
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) & 0xffffffe3 | 3;
    F_00c6ecf6(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(double *)&gen_args[3]),&(*(double *)&gen_args[7]),0);
  }
  uVar2 = F_00c6f24f((*(undefined4 *)&gen_args[1]));
  if ((REFG(int, 0x134c1bc) == 0) && (uVar2 != 0)) {
    fVar3 = F_00c6f283(uVar2,(*(undefined4 *)&gen_args[2]),(int)(ulonglong)gen_d2bits((*(double *)&gen_args[3])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[3])) >> 0x20),
                       (int)(ulonglong)gen_d2bits((*(double *)&gen_args[5])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[5])) >> 0x20),
                       (uint)(ulonglong)gen_d2bits((*(double *)&gen_args[7])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[7])) >> 0x20),(*(undefined4 *)&gen_args[9]));
  }
  else {
    F_00c6f1fc(uVar2);
    F_00c6f59e((*(undefined4 *)&gen_args[9]),0xffff);
    fVar3 = (float10)(*(double *)&gen_args[7]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return fVar3;
}

/* ref: __ctrlfp */
uint F_00c6f59e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6f59eu, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (int)((undefined2)0x27f);
}

/* ref: FUN_00c6f5c9 */
unsigned int F_00c6f5c9(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f5c9u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: ___get_fpsr_sse2 */
uint F_00c6f621(void)
{
  GEN_ENTER(0xc6f621u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = MXCSR;
  if (REFG(int, 0x15e42a0) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: ___set_fpsr_sse2 */
uint F_00c6f63f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f63fu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f67d8);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc6f64b;
  if (REFG(int, 0x15e42a0) != 0) {
    if ((((*(uint *)&gen_args[0]) & 0x40) == 0) || (REFG(int, 0x134bdb8) == 0)) {
      MXCSR = (*(uint *)&gen_args[0]) & 0xffffffbf;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
      MXCSR = (*(uint *)&gen_args[0]);
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0xc6f6b0;
  return 0;
}

/* ref: FUN_00c6f66c */
uint F_00c6f66c(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f66cu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  if ((*((int *)GEN_TOP(**(undefined4 * PTR32 *)(in_ebp + -0x14))) != -0x3ffffffb) &&
     (*((int *)GEN_TOP(**(undefined4 * PTR32 *)(in_ebp + -0x14))) != -0x3fffffe3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c6f688 */
unsigned int F_00c6f688(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f688u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  REFG(undefined4, 0x134bdb8) = 0;
  *(uint *)(in_ebp + 8) = *(uint *)(in_ebp + 8) & 0xffffffbf;
  MXCSR = *(undefined4 *)(in_ebp + 8);
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0xc6f6b0;
  return 0;
}

/* ref: FUN_00c6f6b1 */
unsigned int F_00c6f6b1(void)
{
  GEN_ENTER(0xc6f6b1u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x15e42a0) != 0) {
    MXCSR = MXCSR & 0xffffffc0;
  }
  return 0;
}

/* ref: ___ctrlfp_sse2 */
uint F_00c6f6f9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6f6f9u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int, 0x15e42a0) != 0) {
    uVar1 = F_00c6f621();
    F_00c6f63f((~(*(uint *)&gen_args[1]) | 0xffff807f) & uVar1 | (*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1]));
  }
  return uVar1;
}

/* ref: ___set_statfp_sse2 */
uint F_00c6f730(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c6f621();
  uVar1 = F_00c6f63f(uVar1 | param_1 & 0x3f);
  return uVar1;
}

/* ref: FID_conflict:_vprintf_helper */
uint F_00c6f74b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6f74bu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x44];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * _File;
  uint uVar1;
  int * piVar2;
  int _Flag;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f67f8);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc6f757;
  uVar1 = F_00c50860();
  _File = (undefined *)(uVar1 + 0x20);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = _File;
  if ((*(int *)&gen_args[1]) == 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    uVar1 = 0xffffffff;
  }
  else {
    F_00c50937(_File);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    _Flag = F_00c5df50(_File);
    uVar1 = ((code *)(*(gen_code32 *)&gen_args[0]))(_File,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    F_00c5dfec(_Flag,_File);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c6f7c8(_File);
    uVar1 = (*(uint *)(gen_frame + 0xc));
  }
  return uVar1;
}

/* ref: FUN_00c6f7c5 */
uint F_00c6f7c5(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f7c5u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + -0x1c));
  return extraout_EAX;
}

/* ref: FUN_00c6f7c8 */
uint F_00c6f7c8(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f7c8u, gen_a0, 0u, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: FID_conflict___vwprintf_s_l_00c6f7d0 */
int F_00c6f7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6f7d0u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc56a1d)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vwprintf_s_l_00c6f7ed */
int F_00c6f7ed(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6f7edu, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc5784c)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vwprintf_s_l_00c6f80a */
int F_00c6f80a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6f80au, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc5867b)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vprintf_s_00c6f827 */
int F_00c6f827(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6f827u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc56a1d)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vprintf_s_00c6f843 */
int F_00c6f843(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6f843u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc5784c)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vprintf_s_00c6f85f */
int F_00c6f85f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6f85fu, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc5867b)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: __modf_default */
float10 F_00c6f87b(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6f87bu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar2 = F_00c6f59e(0,0);
  F_00c6f59e(REFG(undefined4, 0x134bdbc),0xffff);
  if (((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff0) == 0x7ff0) {
    *(*(double * PTR32 *)&gen_args[2]) = *(double *)&REFG(undefined, 0x134bc98);
    uVar5 = (undefined4)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x20);
    uVar3 = F_00c6ebcd((int)(ulonglong)gen_d2bits((*(double *)&gen_args[0])),uVar5);
    if (0 < (int)uVar3) {
      if ((int)uVar3 < 3) {
        *(*(double * PTR32 *)&gen_args[2]) = (*(double *)&gen_args[0]);
        (*(double *)(gen_frame + 0x4)) = F_00c5124d(0.0,(*(double *)&gen_args[0]));
        F_00c6f59e(uVar2,0xffff);
        goto LAB_00c6f988;
      }
      if (uVar3 == 3) {
        *(*(double * PTR32 *)&gen_args[2]) = (*(double *)&gen_args[0]);
        fVar4 = F_00c6f323(0x1c,(*(double *)&gen_args[0]),uVar2);
        return fVar4;
      }
    }
    dVar1 = (*(double *)&gen_args[0]) + REFG(double, 0x1088130);
    *(*(double * PTR32 *)&gen_args[2]) = dVar1;
    fVar4 = F_00c6f3d9(uVar5,8,0x1c,(*(double *)&gen_args[0]),dVar1,uVar2);
  }
  else {
    fVar4 = F_00c7d6ab((*(double *)&gen_args[0]));
    *(*(double * PTR32 *)&gen_args[2]) = (double)fVar4;
    dVar1 = (double)((float10)(*(double *)&gen_args[0]) - fVar4);
    (*(double *)(gen_frame + 0x4)) = dVar1;
    if (GEN_ISNAN(dVar1) != (GEN_ISNAN(dVar1) || dVar1 == 0.0)) {
      (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x4)) + 6)) = (ushort)((ulonglong)gen_d2bits(dVar1) >> 0x30);
      (*(double *)(gen_frame + 0x4)) = gen_bits2d(CONCAT26((*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x4)) + 6)) | (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x8000,
                                    (int6)(ulonglong)gen_d2bits(dVar1)));
    }
    F_00c6f59e(uVar2,0xffff);
LAB_00c6f988: ;
    fVar4 = (float10)(*(double *)(gen_frame + 0x4));
  }
  return fVar4;
}

/* ref: FUN_00c6f990 */
uint F_00c6f990(void)
{
  GEN_ENTER(0xc6f990u, 0u, 0u, 0u, 0u);
  return 0x134be70;
}

/* ref: FUN_00c6f996 */
uint F_00c6f996(void)
{
  GEN_ENTER(0xc6f996u, 0u, 0u, 0u, 0u);
  return 0x134bdc0;
}

/* ref: __global_unwind2 */
unsigned int F_00c6f9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f9a0u, gen_a0, 0u, 0u, 0u);
  PVOID param_1 = (PVOID)gen_a0;
  gen_imp_RtlUnwind(param_1,(PVOID)0xc6f9b8,(GEN_LPANY)0x0,(PVOID)0x0);
  return 0;
}

/* ref: FUN_00c6f9c0 */
uint F_00c6f9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc6f9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    F_00c47745(*(uint *)(param_5 - 4) ^ param_5);
    F_00c6fa05(*(undefined4 *)(param_5 + 0x24),*(undefined4 *)(param_5 + 0x28));
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: __local_unwind2 */
unsigned int F_00c6fa05(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6fa05u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(int *)(gen_frame + 0x1c)) = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x18)) = 0xfffffffe;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0xc6f9c0));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined * PTR32 *)(gen_frame + 0x10));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  while( true ) {
    iVar1 = *(int *)((*(int *)&gen_args[0]) + 8);
    uVar2 = *(uint *)((*(int *)&gen_args[0]) + 0xc);
    if ((uVar2 == 0xffffffff) || (((*(uint *)&gen_args[1]) != 0xffffffff && (uVar2 <= (*(uint *)&gen_args[1]))))) break;
    uVar3 = *(undefined4 *)(iVar1 + uVar2 * 0xc);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar3;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0xc) = uVar3;
    if (*(int *)(iVar1 + 4 + uVar2 * 0xc) == 0) {
      F_00c6fab5(*(undefined4 *)(iVar1 + 8 + uVar2 * 0xc),0x101);
      F_00c6fad4(*(undefined4 *)(iVar1 + 8 + uVar2 * 0xc));
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return 0;
}

/* ref: FUN_00c6fad4 */
uint F_00c6fad4(unsigned int gen_a0)
{
  GEN_ENTER(0xc6fad4u, gen_a0, 0u, 0u, 0u);
  code * in_eax = (code *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (*in_eax)();
  return uVar1;
}

/* ref: __rt_probe_read4@4 */
uint F_00c6fad7(unsigned int gen_a0)
{
  GEN_ENTER(0xc6fad7u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x48];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = &REFG(undefined, 0x12f6818);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xc6fae3;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0xfffffffe;
  (*(undefined4 *)(gen_frame + 0xc)) = 0xc6fb1f;
  return 1;
}

/* ref: FUN_00c6faf5 */
uint F_00c6faf5(unsigned int gen_a0)
{
  GEN_ENTER(0xc6faf5u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  return (uint)(*((int *)GEN_TOP(**(undefined4 * PTR32 *)(in_ebp + -0x14))) == -0x3ffffffb);
}

/* ref: FUN_00c6fb09 */
uint F_00c6fb09(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6fb09u, gen_a0, gen_a1, 0u, 0u);
  int in_ebp = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(in_ebp + -0x1c) = 0;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  uVar1 = *(uint *)(in_ebp + -0x1c);
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0xc6fb1f;
  return uVar1;
}

/* ref: strncnt_00c6fb22 */
int F_00c6fb22(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6fb22u, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_2;
  for (; (iVar1 != 0 && (*in_eax != '\0')); in_eax = in_eax + 1) {
    iVar1 = iVar1 + -1;
  }
  return (param_2 - (iVar1 + -1)) + -1;
}

/* ref: __crtCompareStringA_stat */
int F_00c6fb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc6fb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulong param_2 = (ulong)gen_a1;
  ulong param_3 = (ulong)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  char * param_6 = (char *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10030];
  uint uVar1;
  byte bVar2;
  char * pcVar3;
  byte * pbVar4;
  BOOL BVar5;
  BYTE * pBVar6;
  uint uVar7;
  undefined4 * puVar8;
  int * in_ECX = 0;
  char * pcVar9;
  int iVar10;
  byte * in_EDX = 0;
  GEN_LPANY pWVar11;
  
  (*(uint *)(gen_frame + 0x10028)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38);
  (*(byte * PTR32 *)(gen_frame + 0x10008)) = (byte *)param_3;
  pcVar3 = (char *)param_3;
  pcVar9 = param_4;
  if ((int)param_4 < 1) {
    if (-2 < (int)param_4) goto LAB_00c6fb81;
  }
  else {
    do {
      pcVar9 = pcVar9 + -1;
      if (*pcVar3 == '\0') goto LAB_00c6fb77;
      pcVar3 = pcVar3 + 1;
    } while (pcVar9 != (char *)0x0);
    pcVar9 = (char *)0xffffffff;
LAB_00c6fb77: ;
    param_4 = param_4 + (-1 - (int)pcVar9);
LAB_00c6fb81: ;
    pbVar4 = in_EDX;
    iVar10 = param_5;
    if (param_5 < 1) {
      if (param_5 < -1) goto LAB_00c6fbab;
    }
    else {
      do {
        iVar10 = iVar10 + -1;
        if (*pbVar4 == 0) goto LAB_00c6fb9a;
        pbVar4 = pbVar4 + 1;
      } while (iVar10 != 0);
      iVar10 = -1;
LAB_00c6fb9a: ;
      param_5 = param_5 + (-1 - iVar10);
    }
    (*(int *)(gen_frame + 0x10004)) = 0;
    if (param_6 == (char *)0x0) {
      param_6 = *(char * PTR32 *)(*in_ECX + 4);
    }
    (*(byte * PTR32 *)(gen_frame + 0x1000c)) = in_EDX;
    if ((param_4 == (char *)0x0) || (param_5 == 0)) {
      if (param_4 == (char *)param_5) {
LAB_00c6fbd9: ;
        iVar10 = 2;
        goto LAB_00c6fd9c;
      }
      if (param_5 < 2) {
        if ((int)param_4 < 2) {
          BVar5 = gen_imp_GetCPInfo((UINT)param_6,((undefined *)(gen_frame + 0x10014)));
          if (BVar5 == 0) goto LAB_00c6fbab;
          if ((int)param_4 < 1) {
            if (param_5 < 1) goto LAB_00c6fc71;
            if (1 < (*(UINT *)((char *)((undefined *)(gen_frame + 0x10014))))) {
              pBVar6 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x10014)) + 6)));
              bVar2 = (*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x10014)) + 6) + (0) * 1)))));
              while ((bVar2 != 0 && (pBVar6[1] != 0))) {
                if ((*pBVar6 <= *(*(byte * PTR32 *)(gen_frame + 0x1000c))) && (*(*(byte * PTR32 *)(gen_frame + 0x1000c)) <= pBVar6[1])) goto LAB_00c6fbd9;
                pBVar6 = pBVar6 + 2;
                bVar2 = *pBVar6;
              }
            }
            goto LAB_00c6fbe8;
          }
          if (1 < (*(UINT *)((char *)((undefined *)(gen_frame + 0x10014))))) {
            pBVar6 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x10014)) + 6)));
            bVar2 = (*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x10014)) + 6) + (0) * 1)))));
            while ((bVar2 != 0 && (pBVar6[1] != 0))) {
              if ((*pBVar6 <= *(*(byte * PTR32 *)(gen_frame + 0x10008))) && (*(*(byte * PTR32 *)(gen_frame + 0x10008)) <= pBVar6[1])) goto LAB_00c6fbd9;
              pBVar6 = pBVar6 + 2;
              bVar2 = *pBVar6;
            }
          }
        }
        iVar10 = 3;
      }
      else {
LAB_00c6fbe8: ;
        iVar10 = 1;
      }
      goto LAB_00c6fd9c;
    }
LAB_00c6fc71: ;
    uVar7 = gen_imp_MultiByteToWideChar(param_6,9,(*(byte * PTR32 *)(gen_frame + 0x10008)),param_4,0,0);
    (*(uint *)(gen_frame + 0x10000)) = uVar7;
    if (uVar7 != 0) {
      if (((int)uVar7 < 1) || (0xffffffe0 / uVar7 < 2)) {
        (*(GEN_LPANY *)(gen_frame + 0x10010)) = (GEN_LPANY)0x0;
      }
      else {
        uVar1 = uVar7 * 2 + 8;
        if (uVar1 < 0x401) {
          puVar8 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
          pWVar11 = (GEN_LPANY)(gen_frame + 0x0);
          if (1) {
LAB_00c6fcd2: ;
            pWVar11 = (GEN_LPANY)(puVar8 + 2);
          }
        }
        else {
          puVar8 = F_00c51787(uVar1);
          pWVar11 = (GEN_LPANY)0x0;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0xdddd;
            goto LAB_00c6fcd2;
          }
        }
        (*(GEN_LPANY *)(gen_frame + 0x10010)) = pWVar11;
      }
      if ((*(GEN_LPANY *)(gen_frame + 0x10010)) != (GEN_LPANY)0x0) {
        iVar10 = gen_imp_MultiByteToWideChar(param_6,1,(*(byte * PTR32 *)(gen_frame + 0x10008)),param_4,(*(GEN_LPANY *)(gen_frame + 0x10010)),uVar7);
        if ((iVar10 != 0) &&
           (uVar7 = gen_imp_MultiByteToWideChar(param_6,9,(*(byte * PTR32 *)(gen_frame + 0x1000c)),param_5,0,0), uVar7 != 0)) {
          if (((int)uVar7 < 1) || (0xffffffe0 / uVar7 < 2)) {
            pWVar11 = (GEN_LPANY)0x0;
          }
          else {
            uVar1 = uVar7 * 2 + 8;
            if (uVar1 < 0x401) {
              puVar8 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
              pWVar11 = (GEN_LPANY)(gen_frame + 0x0);
              if (1) {
LAB_00c6fd52: ;
                pWVar11 = (GEN_LPANY)(puVar8 + 2);
              }
            }
            else {
              puVar8 = F_00c51787(uVar1);
              pWVar11 = (GEN_LPANY)0x0;
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = 0xdddd;
                goto LAB_00c6fd52;
              }
            }
          }
          if (pWVar11 != (GEN_LPANY)0x0) {
            iVar10 = gen_imp_MultiByteToWideChar(param_6,1,(*(byte * PTR32 *)(gen_frame + 0x1000c)),param_5,pWVar11,uVar7);
            if (iVar10 != 0) {
              iVar10 = gen_imp_CompareStringW((LCID)param_1,param_2,(*(GEN_LPANY *)(gen_frame + 0x10010)),(*(uint *)(gen_frame + 0x10000)),pWVar11,uVar7);
              (*(int *)(gen_frame + 0x10004)) = iVar10;
            }
            F_00c4f78f(pWVar11);
          }
        }
        F_00c4f78f((*(GEN_LPANY *)(gen_frame + 0x10010)));
        iVar10 = (*(int *)(gen_frame + 0x10004));
        goto LAB_00c6fd9c;
      }
    }
  }
LAB_00c6fbab: ;
  iVar10 = 0;
LAB_00c6fd9c: ;
  F_00c47745((*(uint *)(gen_frame + 0x10028)) ^ (uint)(uint)(gen_frame + 0x38));
  return iVar10;
}

/* ref: ___crtCompareStringA */
int F_00c6fdae(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc6fdaeu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a0;
  LPCWSTR _LocaleName = (LPCWSTR)gen_a1;
  DWORD _DwCmpFlags = (DWORD)gen_a2;
  LPCSTR _LpString1 = (LPCSTR)gen_a3;
  int _CchCount1 = (int)gen_a4;
  LPCSTR _LpString2 = (LPCSTR)gen_a5;
  int _CchCount2 = (int)gen_a6;
  int _Code_page = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Plocinfo);
  iVar1 = F_00c6fb40((undefined *)_LocaleName,_DwCmpFlags,(ulong)_LpString1,
                     (char *)_CchCount1,_CchCount2,(char *)_Code_page,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)));
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar1;
}

/* ref: FUN_00c6fe64 */
unsigned int F_00c6fe64(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc6fe64u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  F_00c5ed93((undefined1)in_ecx,*(float10 *)&REFG(undefined, 0x111ad00));
  return 0;
}

/* ref: FUN_00c6fe71 */
unsigned int F_00c6fe71(double gen_a0)
{
  GEN_ENTER(0xc6fe71u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  return 0;
}

/* ref: __spawnvpe */
int F_00c6feec(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6feecu, gen_a0, gen_a1, gen_a2, gen_a3);
  int _Mode = (int)gen_a0;
  char * _Filename = (char *)(uintptr_t)gen_a1;
  char * PTR32 * _ArgList = (char * PTR32 *)(uintptr_t)gen_a2;
  char * PTR32 * _Env = (char * PTR32 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  int iVar3;
  uchar * puVar4;
  int eVar5;
  char * pcVar6;
  gen_size32 sVar7;
  gen_size32 sVar8;
  ulong * puVar9;
  uchar * _Str;
  uchar * puVar10;
  
  puVar10 = (uchar *)0x0;
  _Str = (uchar *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x0;
  if ((_Filename == (char *)0x0) || (*_Filename == '\0')) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    iVar3 = -1;
  }
  else if (((_ArgList == (char * PTR32 *)0x0) || (*_ArgList == (char *)0x0)) || (**_ArgList == '\0')) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    iVar3 = -1;
  }
  else {
    piVar2 = F_00c51f85();
    iVar1 = *piVar2;
    piVar2 = F_00c51f85();
    *piVar2 = 0;
    (*(int *)(gen_frame + 0x0)) = F_00c701ca(_Mode,_Filename,_ArgList,_Env);
    if ((((*(int *)(gen_frame + 0x0)) == -1) && (piVar2 = F_00c51f85(), *piVar2 == 2)) &&
       (puVar4 = F_00c7e576((uchar *)_Filename,0x2f), puVar4 == (uchar *)0x0)) {
      eVar5 = F_00c4b6eb(&(*(char * PTR32 *)(gen_frame + 0x8)),(gen_size32 *)0x0,"GEN_LPANY");
      if (eVar5 == 0) {
        if (((*(char * PTR32 *)(gen_frame + 0x8)) != (char *)0x0) && (_Str = F_00c54c73(0x104,1), _Str != (uchar *)0x0)) {
          pcVar6 = F_00c71169((*(char * PTR32 *)(gen_frame + 0x8)),_Str,0x103);
          while ((pcVar6 != (char *)0x0 && (*_Str != '\0'))) {
            sVar7 = F_00c552f0((char *)_Str);
            puVar10 = _Str + (sVar7 - 1);
            if (*puVar10 == '\\') {
              puVar4 = F_00c7075f(_Str,0x5c);
              if (puVar10 != puVar4) {
                F_00c473c8(_Str,0x104,&REFG(undefined, 0x1118c14));
              }
            }
            else if ((*puVar10 != '/') && (eVar5 = F_00c473c8(_Str,0x104,&REFG(undefined, 0x1118c14)), eVar5 != 0))
            goto LAB_00c6ffc1;
            sVar7 = F_00c552f0((char *)_Str);
            sVar8 = F_00c552f0(_Filename);
            puVar10 = (uchar *)(sVar7 + sVar8);
            if ((uchar *)0x103 < puVar10) break;
            eVar5 = F_00c473c8(_Str,0x104,_Filename);
            if (eVar5 != 0) goto LAB_00c6ffc1;
            piVar2 = F_00c51f85();
            *piVar2 = 0;
            (*(int *)(gen_frame + 0x0)) = F_00c701ca(_Mode,(char *)_Str,_ArgList,_Env);
            if ((*(int *)(gen_frame + 0x0)) != -1) break;
            piVar2 = F_00c51f85();
            if ((*piVar2 != 2) && (puVar9 = F_00c51f98(), *puVar9 != 0x15)) {
              puVar10 = F_00c7e576(_Str,0x5c);
              if ((_Str != puVar10) && (puVar10 = F_00c7e576(_Str,0x2f), _Str != puVar10)) break;
              puVar10 = _Str + 1;
              puVar4 = F_00c7e576(puVar10,0x5c);
              if ((puVar10 != puVar4) && (puVar4 = F_00c7e576(puVar10,0x2f), puVar10 != puVar4))
              break;
            }
            pcVar6 = F_00c71169(pcVar6,_Str,0x103);
          }
        }
      }
      else if (eVar5 == 0x16) {
LAB_00c6ffc1: ;
                    
        F_00c4c299(puVar10,0,0,0,0,0);
      }
    }
    piVar2 = F_00c51f85();
    if (*piVar2 == 0) {
      piVar2 = F_00c51f85();
      *piVar2 = iVar1;
    }
    if (_Str != (uchar *)0x0) {
      F_00c4c68f(_Str);
    }
    iVar3 = (*(int *)(gen_frame + 0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x8)) != (char *)0x0) {
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return iVar3;
}

/* ref: FUN_00c70158 */
uint F_00c70158(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc70158u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * PTR32 * param_3 = (char * PTR32 *)(uintptr_t)gen_a2;
  char * PTR32 * param_4 = (char * PTR32 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 == (char *)0x0) || (param_3 == (char * PTR32 *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    iVar2 = F_00c7e791(param_3,param_4,&(*(char * PTR32 *)(gen_frame + 0x8)),&(*(char * PTR32 *)(gen_frame + 0x4)),param_2);
    if (iVar2 != -1) {
      uVar3 = F_00c7e58d(param_1,param_2,(*(char * PTR32 *)(gen_frame + 0x8)),(*(char * PTR32 *)(gen_frame + 0x4)));
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x8)));
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x4)));
      return uVar3;
    }
  }
  return 0xffffffff;
}

/* ref: __spawnve */
int F_00c701ca(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc701cau, gen_a0, gen_a1, gen_a2, gen_a3);
  int _Mode = (int)gen_a0;
  char * _Filename = (char *)(uintptr_t)gen_a1;
  char * PTR32 * _ArgList = (char * PTR32 *)(uintptr_t)gen_a2;
  char * PTR32 * _Env = (char * PTR32 *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  uchar * puVar3;
  uchar * puVar4;
  gen_size32 sVar5;
  int eVar6;
  char * _Filename_00;
  uint uVar7;
  gen_size32 sVar8;
  char * in_edi;
  uint local_10;
  undefined * PTR32 * local_c;
  char * local_8;
  
  local_8 = _Filename;
  if ((((_Filename == (char *)0x0) || (*_Filename == '\0')) || (_ArgList == (char * PTR32 *)0x0)) ||
     ((*_ArgList == (char *)0x0 || (**_ArgList == '\0')))) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    return -1;
  }
  puVar3 = F_00c7075f((uchar *)_Filename,0x5c);
  puVar4 = F_00c7075f((uchar *)_Filename,0x2f);
  if (puVar4 == (uchar *)0x0) {
    if ((puVar3 != (uchar *)0x0) ||
       (puVar3 = F_00c7e576((uchar *)_Filename,0x3a), puVar3 != (uchar *)0x0)) goto LAB_00c70299;
    sVar5 = F_00c552f0(_Filename);
    sVar5 = sVar5 + 3;
    local_8 = F_00c54c73(sVar5,1);
    if (local_8 != (char *)0x0) {
      eVar6 = F_00c49908(local_8,sVar5,&REFG(undefined, 0x1125c7c));
      in_edi = _Filename;
      if ((eVar6 != 0) || (eVar6 = F_00c473c8(local_8,sVar5,_Filename), eVar6 != 0))
      goto LAB_00c7028a;
      puVar3 = (uchar *)(local_8 + 2);
      goto LAB_00c70299;
    }
LAB_00c702f9: ;
    uVar7 = 0xffffffff;
  }
  else {
    if ((puVar3 == (uchar *)0x0) || (puVar3 < puVar4)) {
      puVar3 = puVar4;
    }
LAB_00c70299: ;
    local_10 = 0xffffffff;
    puVar3 = F_00c7075f(puVar3,0x2e);
    if (puVar3 == (uchar *)0x0) {
      sVar5 = F_00c552f0(local_8);
      sVar5 = sVar5 + 5;
      _Filename_00 = F_00c54c73(sVar5,1);
      in_edi = (char *)0x0;
      if (_Filename_00 == (char *)0x0) goto LAB_00c702f9;
      eVar6 = F_00c49908(_Filename_00,sVar5,local_8);
      if (eVar6 != 0) {
LAB_00c7028a: ;
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
      sVar8 = F_00c552f0(local_8);
      in_edi = _Filename_00 + sVar8;
      piVar2 = F_00c51f85();
      iVar1 = *piVar2;
      local_c = &REFG(undefined * PTR32, 0x134be9c);
      do {
        eVar6 = F_00c49908(in_edi,_Filename_00 + (sVar5 - (int)in_edi),*local_c);
        if (eVar6 != 0) goto LAB_00c7028a;
        eVar6 = F_00c703b3(_Filename_00,0);
        if (eVar6 == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = iVar1;
          local_10 = F_00c70158(_Mode,_Filename_00,_ArgList,_Env);
          break;
        }
        local_c = local_c + -1;
      } while (0x134be8f < (int)local_c);
      F_00c4c68f(_Filename_00);
    }
    else {
      eVar6 = F_00c703b3(local_8,0);
      if (eVar6 == 0) {
        local_10 = F_00c70158(_Mode,local_8,_ArgList,_Env);
      }
    }
    uVar7 = local_10;
    if (local_8 != _Filename) {
      F_00c4c68f(local_8);
    }
  }
  return uVar7;
}

/* ref: __access_s */
int F_00c703b3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc703b3u, gen_a0, gen_a1, 0u, 0u);
  char * _Filename = (char *)(uintptr_t)gen_a0;
  int _AccessMode = (int)gen_a1;
  ulong * puVar1;
  int * piVar2;
  DWORD DVar3;
  int iVar4;
  
  if ((_Filename == (char *)0x0) || ((_AccessMode & 0xfffffff9U) != 0)) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    iVar4 = 0x16;
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    DVar3 = gen_imp_GetFileAttributesA(_Filename);
    if (DVar3 == 0xffffffff) {
      DVar3 = gen_imp_GetLastError();
      F_00c51fab(DVar3);
    }
    else {
      if ((((DVar3 & 0x10) != 0) || ((DVar3 & 1) == 0)) || ((_AccessMode & 2U) == 0)) {
        return 0;
      }
      puVar1 = F_00c51f98();
      *puVar1 = 5;
      piVar2 = F_00c51f85();
      *piVar2 = 0xd;
    }
    piVar2 = F_00c51f85();
    iVar4 = *piVar2;
  }
  return iVar4;
}

/* ref: FID_conflict:__access */
int F_00c70432(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc70432u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Filename = (wchar_t *)(uintptr_t)gen_a0;
  int _AccessMode = (int)gen_a1;
  int eVar1;
  
  eVar1 = F_00c703b3((char *)_Filename,_AccessMode);
  return -(uint)(eVar1 != 0);
}

/* ref: xtoa_s */
uint F_00c7044a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc7044au, gen_a0, gen_a1, gen_a2, gen_a3);
  uint in_eax = (uint)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  ulonglong uVar1;
  char * pcVar2;
  int * piVar3;
  uint * puVar4;
  char * pcVar5;
  char cVar6;
  uint uVar7;
  char * pcVar8;
  uint uStack_14;
  
  if (in_ecx == (char *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  if (param_3 == 0) {
LAB_00c70475: ;
    puVar4 = (uint *)F_00c51f85();
    uStack_14 = 0x16;
  }
  else {
    *in_ecx = '\0';
    if ((param_5 != 0) + 1 < param_3) {
      if (0x22 < param_4 - 2) goto LAB_00c70475;
      pcVar8 = in_ecx;
      if (param_5 != 0) {
        *in_ecx = '-';
        pcVar8 = in_ecx + 1;
        in_eax = -in_eax;
      }
      uVar7 = (uint)(param_5 != 0);
      pcVar2 = pcVar8;
      do {
        pcVar5 = pcVar2;
        uVar1 = (ulonglong)in_eax;
        in_eax = in_eax / param_4;
        cVar6 = (char)(uVar1 % (ulonglong)param_4);
        if ((uint)(uVar1 % (ulonglong)param_4) < 10) {
          cVar6 = cVar6 + '0';
        }
        else {
          cVar6 = cVar6 + 'W';
        }
        *pcVar5 = cVar6;
        uVar7 = uVar7 + 1;
      } while ((in_eax != 0) && (pcVar2 = pcVar5 + 1, uVar7 < param_3));
      if (uVar7 < param_3) {
        pcVar5[1] = '\0';
        do {
          cVar6 = *pcVar5;
          *pcVar5 = *pcVar8;
          pcVar5 = pcVar5 + -1;
          *pcVar8 = cVar6;
          pcVar8 = pcVar8 + 1;
        } while (pcVar8 < pcVar5);
        return 0;
      }
      *in_ecx = '\0';
    }
    puVar4 = (uint *)F_00c51f85();
    uStack_14 = 0x22;
  }
  *puVar4 = uStack_14;
  F_00c4c305();
  return uStack_14;
}

/* ref: __itoa_s */
int F_00c70504(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc70504u, gen_a0, gen_a1, gen_a2, gen_a3);
  int _Value = (int)gen_a0;
  char * _DstBuf = (char *)(uintptr_t)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  int _Radix = (int)gen_a3;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar3 = 1;
    iVar2 = 10;
  }
  else {
    uVar3 = 0;
    iVar2 = _Radix;
  }
  uVar1 = F_00c7044a(_Value,_DstBuf,_Size,iVar2,uVar3);
  return uVar1;
}

/* ref: __ltoa_s */
int F_00c7052e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7052eu, gen_a0, gen_a1, gen_a2, gen_a3);
  long _Val = (long)gen_a0;
  char * _DstBuf = (char *)(uintptr_t)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  int _Radix = (int)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((_Radix == 10) && (_Val < 0)) {
    uVar1 = 1;
  }
  uVar2 = F_00c7044a(_Val,_DstBuf,_Size,_Radix,uVar1);
  return uVar2;
}

/* ref: __ultoa_s */
int F_00c70555(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc70555u, gen_a0, gen_a1, gen_a2, gen_a3);
  ulong _Val = (ulong)gen_a0;
  char * _DstBuf = (char *)(uintptr_t)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  int _Radix = (int)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c7044a(_Val,_DstBuf,_Size,_Radix,0);
  return uVar1;
}

/* ref: x64toa_s */
uint F_00c7056f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc7056fu, gen_a0, gen_a1, gen_a2, gen_a3);
  char * in_edi = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  char * param_6 = (char *)(uintptr_t)gen_a5;
  ulonglong uVar1;
  ulonglong uVar2;
  char * pcVar3;
  uint * puVar4;
  int iVar5;
  int * piVar6;
  char cVar7;
  int iVar8;
  char * pcVar9;
  bool bVar10;
  uint uVar11;
  uint local_8;
  
  if ((in_edi == (char *)0x0) || (param_4 == 0)) {
LAB_00c7057e: ;
    puVar4 = (uint *)F_00c51f85();
    uVar11 = 0x16;
  }
  else {
    *in_edi = '\0';
    if ((param_6 != (char *)0x0) + 1 < param_4) {
      if (param_5 - 2 < 0x23) {
        bVar10 = param_6 != (char *)0x0;
        iVar5 = param_3;
        iVar8 = param_2;
        param_6 = in_edi;
        if (bVar10) {
          iVar8 = -param_2;
          *in_edi = '-';
          param_6 = in_edi + 1;
          iVar5 = -(param_3 + (uint)(param_2 != 0));
        }
        local_8 = (uint)bVar10;
        pcVar3 = param_6;
        uVar2 = CONCAT44(iVar5,iVar8);
        do {
          pcVar9 = pcVar3;
          uVar1 = uVar2 / param_5;
          uVar2 = uVar2 % (ulonglong)param_5;
          cVar7 = (char)uVar2;
          if ((uint)uVar2 < 10) {
            cVar7 = cVar7 + '0';
          }
          else {
            cVar7 = cVar7 + 'W';
          }
          *pcVar9 = cVar7;
          local_8 = local_8 + 1;
        } while ((uVar1 != 0) && (pcVar3 = pcVar9 + 1, uVar2 = uVar1, local_8 < param_4));
        if (local_8 < param_4) {
          pcVar9[1] = '\0';
          do {
            cVar7 = *pcVar9;
            *pcVar9 = *param_6;
            pcVar9 = pcVar9 + -1;
            *param_6 = cVar7;
            param_6 = param_6 + 1;
          } while (param_6 < pcVar9);
          return 0;
        }
        *in_edi = '\0';
        piVar6 = F_00c51f85();
        uVar11 = 0x22;
        *piVar6 = 0x22;
        goto LAB_00c70588;
      }
      goto LAB_00c7057e;
    }
    puVar4 = (uint *)F_00c51f85();
    uVar11 = 0x22;
  }
  *puVar4 = uVar11;
LAB_00c70588: ;
  F_00c4c305();
  return uVar11;
}

/* ref: __i64toa_s */
int F_00c7065b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc7065bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (((param_5 == 10) && (param_2 < 1)) && (param_2 < 0)) {
    uVar1 = 1;
  }
  uVar2 = F_00c7056f(param_3,param_1,param_2,param_4,param_5,uVar1);
  return uVar2;
}

/* ref: __ui64toa_s */
int F_00c70690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc70690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c7056f(param_3,param_1,param_2,param_4,param_5,0);
  return uVar1;
}

/* ref: __mbsrchr_l */
uchar * F_00c706b5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc706b5u, gen_a0, gen_a1, gen_a2, 0u);
  uchar * _Str = (uchar *)(uintptr_t)gen_a0;
  uint _Ch = (uint)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  byte * pbVar4;
  byte * pbVar5;
  byte bVar6;
  byte * pbVar7;
  bool bVar8;
  
  pbVar7 = (byte *)0x0;
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (_Str == (uchar *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    pbVar7 = (byte *)0x0;
  }
  else {
    pbVar5 = _Str;
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 8))) == 0) {
      pbVar7 = (byte *)F_00c51220((char *)_Str,_Ch);
      if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      }
    }
    else {
      do {
        bVar6 = *pbVar5;
        if ((*((byte *)GEN_TOP((bVar6 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) & 4) == 0) {
          bVar8 = _Ch == bVar6;
LAB_00c70743: ;
          pbVar4 = pbVar5;
          if (bVar8) {
            pbVar7 = pbVar5;
          }
        }
        else {
          pbVar4 = pbVar5 + 1;
          bVar1 = *pbVar4;
          if (bVar1 == 0) {
            bVar8 = pbVar7 == (byte *)0x0;
            pbVar5 = pbVar4;
            bVar6 = bVar1;
            goto LAB_00c70743;
          }
          uVar2 = CONCAT11(bVar6,bVar1);
          bVar6 = bVar1;
          if (_Ch == uVar2) {
            pbVar7 = pbVar5;
          }
        }
        pbVar5 = pbVar4 + 1;
      } while (bVar6 != 0);
      if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      }
    }
  }
  return pbVar7;
}

/* ref: __mbsrchr */
uchar * F_00c7075f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7075fu, gen_a0, gen_a1, 0u, 0u);
  uchar * _Str = (uchar *)(uintptr_t)gen_a0;
  uint _Ch = (uint)gen_a1;
  uchar * puVar1;
  
  puVar1 = F_00c706b5(_Str,_Ch,(undefined *)0x0);
  return puVar1;
}

/* ref: __rmtmp */
int F_00c70776(void)
{
  GEN_ENTER(0xc70776u, 0u, 0u, 0u, 0u);
  int * piVar1;
  undefined * _File;
  undefined * _File_00;
  int _Index;
  int local_24;
  int local_20;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6838);
  uStack_c = 0xc70782;
  local_20 = 0;
  F_00c5aa4f(1);
  local_8 = (undefined *)0x0;
  for (_Index = 0; local_24 = _Index, _Index < REFG(int, 0x15e52c0); _Index = _Index + 1) {
    piVar1 = (int *)(REFG(int, 0x15e42a8) + _Index * 4);
    if ((*piVar1 != 0) && (_File = (undefined *)*piVar1, (*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      F_00c50978(_Index,_File);
      local_8 = (undefined *)0x1;
      _File_00 = *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4);
      if ((((*(int *)(((char *)(_File_00) + 12))) & 0x83) != 0) && ((*(char * PTR32 *)(((char *)(_File_00) + 28))) != (char *)0x0)) {
        F_00c492a5(_File_00);
        local_20 = local_20 + 1;
      }
      local_8 = (undefined *)0x0;
      F_00c707f0(_Index);
    }
  }
  local_8 = (undefined *)0xfffffffe;
  F_00c70816();
  return local_20;
}

/* ref: FUN_00c707eb */
uint F_00c707eb(unsigned int gen_a0)
{
  GEN_ENTER(0xc707ebu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509e6(*(int *)(in_ebp + -0x20),*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + *(int *)(in_ebp + -0x20) * 4))));
  return extraout_EAX;
}

/* ref: FUN_00c707f0 */
uint F_00c707f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc707f0u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509e6(in_esi,*(undefined * PTR32 *)(REFG(int, 0x15e42a8) + in_esi * 4));
  return extraout_EAX;
}

/* ref: FUN_00c70816 */
uint F_00c70816(void)
{
  GEN_ENTER(0xc70816u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: __strdup */
char * F_00c7081f(unsigned int gen_a0)
{
  GEN_ENTER(0xc7081fu, gen_a0, 0u, 0u, 0u);
  char * _Src = (char *)(uintptr_t)gen_a0;
  char * in_edi;
  gen_size32 sVar1;
  int eVar2;
  
  if (_Src == (char *)0x0) {
    in_edi = (char *)0x0;
  }
  else {
    sVar1 = F_00c552f0(_Src);
    in_edi = F_00c51787(sVar1 + 1);
    if (in_edi == (char *)0x0) {
      in_edi = (char *)0x0;
    }
    else {
      eVar2 = F_00c49908(in_edi,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
    }
  }
  return in_edi;
}

/* ref: FUN_00c70871 */
uint F_00c70871(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc70871u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCSTR param_3 = (LPCSTR)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  byte bVar2;
  byte bVar3;
  int eVar4;
  uint uVar5;
  ulong * puVar6;
  int * piVar7;
  uint * puVar8;
  HANDLE pvVar9;
  DWORD DVar10;
  long lVar11;
  int iVar12;
  byte bVar13;
  undefined4 unaff_EDI = 0;
  int iVar14;
  bool bVar15;
  longlong lVar16;
  int iVar17;
  
  bVar15 = (param_4 & 0x80) == 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(byte *)(gen_frame + 0x3a)) = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(DWORD *)((char *)((undefined *)(gen_frame + 0xc)))) = 0xc;
  (*(LPVOID *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = (LPVOID)0x0;
  if (bVar15) {
    (*(BOOL *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = 1;
    (*(byte *)(gen_frame + 0x3b)) = 0;
  }
  else {
    (*(BOOL *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = 0;
    (*(byte *)(gen_frame + 0x3b)) = 0x10;
  }
  (*(BOOL *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = (BOOL)bVar15;
  eVar4 = F_00c6dc89((int *)&(*(uint *)(gen_frame + 0x18)));
  if (eVar4 != 0) {
                    
    F_00c4c299(unaff_EDI,0,0,0,0,0);
  }
  if (((param_4 & 0x8000) == 0) && (((param_4 & 0x74000) != 0 || ((*(uint *)(gen_frame + 0x18)) != 0x8000)))) {
    (*(byte *)(gen_frame + 0x3b)) = (*(byte *)(gen_frame + 0x3b)) | 0x80;
  }
  uVar5 = param_4 & 3;
  if (uVar5 == 0) {
    (*(uint *)(gen_frame + 0x30)) = 0x80000000;
  }
  else {
    if (uVar5 == 1) {
      if (((param_4 & 8) == 0) || ((param_4 & 0x70000) == 0)) {
        (*(uint *)(gen_frame + 0x30)) = 0x40000000;
        goto LAB_00c70933;
      }
    }
    else if (uVar5 != 2) goto LAB_00c708f3;
    (*(uint *)(gen_frame + 0x30)) = 0xc0000000;
  }
LAB_00c70933: ;
  if (param_5 == 0x10) {
    (*(uint *)(gen_frame + 0x28)) = 0;
  }
  else if (param_5 == 0x20) {
    (*(uint *)(gen_frame + 0x28)) = 1;
  }
  else if (param_5 == 0x30) {
    (*(uint *)(gen_frame + 0x28)) = 2;
  }
  else if (param_5 == 0x40) {
    (*(uint *)(gen_frame + 0x28)) = 3;
  }
  else {
    if (param_5 != 0x80) {
LAB_00c708f3: ;
      puVar6 = F_00c51f98();
      *puVar6 = 0;
      *in_eax = 0xffffffff;
      piVar7 = F_00c51f85();
      *piVar7 = 0x16;
      F_00c4c305();
      return 0x16;
    }
    (*(uint *)(gen_frame + 0x28)) = (uint)((*(uint *)(gen_frame + 0x30)) == 0x80000000);
  }
  uVar5 = param_4 & 0x700;
  if (uVar5 < 0x401) {
    if ((uVar5 == 0x400) || (uVar5 == 0)) {
      (*(uint *)(gen_frame + 0x24)) = 3;
    }
    else if (uVar5 == 0x100) {
      (*(uint *)(gen_frame + 0x24)) = 4;
    }
    else {
      if (uVar5 == 0x200) goto LAB_00c709f5;
      if (uVar5 != 0x300) goto LAB_00c709d5;
      (*(uint *)(gen_frame + 0x24)) = 2;
    }
  }
  else {
    if (uVar5 != 0x500) {
      if (uVar5 == 0x600) {
LAB_00c709f5: ;
        (*(uint *)(gen_frame + 0x24)) = 5;
        goto LAB_00c70a05;
      }
      if (uVar5 != 0x700) {
LAB_00c709d5: ;
        puVar6 = F_00c51f98();
        *puVar6 = 0;
        *in_eax = 0xffffffff;
        piVar7 = F_00c51f85();
        *piVar7 = 0x16;
        F_00c4c305();
        return 0x16;
      }
    }
    (*(uint *)(gen_frame + 0x24)) = 1;
  }
LAB_00c70a05: ;
  (*(uint *)(gen_frame + 0x2c)) = 0x80;
  if (((param_4 & 0x100) != 0) && (-1 < (char)(~(byte)REFG(undefined4, 0x15d6830) & (byte)param_6))) {
    (*(uint *)(gen_frame + 0x2c)) = 1;
  }
  if ((param_4 & 0x40) != 0) {
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) | 0x4000000;
    (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) | 0x10000;
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | 4;
  }
  if ((param_4 & 0x1000) != 0) {
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) | 0x100;
  }
  if ((param_4 & 0x20) == 0) {
    if ((param_4 & 0x10) != 0) {
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) | 0x10000000;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) | 0x8000000;
  }
  uVar5 = F_00c6d8dd();
  *in_eax = uVar5;
  if (uVar5 == 0xffffffff) {
    puVar6 = F_00c51f98();
    *puVar6 = 0;
    *in_eax = 0xffffffff;
    piVar7 = F_00c51f85();
    *piVar7 = 0x18;
    puVar8 = (uint *)F_00c51f85();
    return *puVar8;
  }
  *param_2 = 1;
  pvVar9 = gen_imp_CreateFileA(param_3,(*(uint *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x28)),((undefined *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x2c)),0);
  (*(HANDLE *)(gen_frame + 0x1c)) = pvVar9;
  if (pvVar9 == (HANDLE)0xffffffff) {
    if ((((*(uint *)(gen_frame + 0x30)) & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      uVar5 = (*(uint *)(gen_frame + 0x30)) & 0x7fffffff;
      (*(uint *)(gen_frame + 0x30)) = uVar5;
      pvVar9 = gen_imp_CreateFileA(param_3,uVar5,(*(uint *)(gen_frame + 0x28)),((undefined *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x2c)),0);
      (*(HANDLE *)(gen_frame + 0x1c)) = pvVar9;
      if (pvVar9 != (HANDLE)0xffffffff) goto LAB_00c70b2d;
    }
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 4 + (*in_eax & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfe;
    DVar10 = gen_imp_GetLastError();
    F_00c51fab(DVar10);
    goto LAB_00c70b1e;
  }
LAB_00c70b2d: ;
  DVar10 = gen_imp_GetFileType((*(HANDLE *)(gen_frame + 0x1c)));
  if (DVar10 == 0) {
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 4 + (*in_eax & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfe;
    DVar10 = gen_imp_GetLastError();
    F_00c51fab(DVar10);
    gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x1c)));
    if (DVar10 == 0) {
      piVar7 = F_00c51f85();
      *piVar7 = 0xd;
    }
    goto LAB_00c70b1e;
  }
  if (DVar10 == 2) {
    (*(byte *)(gen_frame + 0x3b)) = (*(byte *)(gen_frame + 0x3b)) | 0x40;
  }
  else if (DVar10 == 3) {
    (*(byte *)(gen_frame + 0x3b)) = (*(byte *)(gen_frame + 0x3b)) | 8;
  }
  F_00c6d6a7(*in_eax,(int)(*(HANDLE *)(gen_frame + 0x1c)));
  bVar3 = (*(byte *)(gen_frame + 0x3b));
  bVar13 = (*(byte *)(gen_frame + 0x3b)) | 1;
  *((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 4 + (*in_eax & 0x1f) * 0x40))) = bVar13;
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 0x24 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = *pbVar1 & 0x80;
  (*(byte *)(gen_frame + 0x39)) = bVar13;
  bVar2 = (*(byte *)(gen_frame + 0x3b)) & 0x48;
  (*(byte *)(gen_frame + 0x39)) = bVar2;
  (*(byte *)(gen_frame + 0x3b)) = bVar13;
  if (bVar2 == 0) {
    if ((bVar3 & 0x80) == 0) goto LAB_00c70e93;
    if ((param_4 & 2) == 0) goto LAB_00c70c61;
    lVar11 = F_00c650fc(*in_eax,-1,2);
    if (lVar11 == -1) {
      puVar6 = F_00c51f98();
      if (*puVar6 == 0x83) goto LAB_00c70c61;
    }
    else {
      uVar5 = *in_eax;
      (*(char *)(gen_frame + 0x38)) = '\0';
      iVar14 = F_00c5d0a1(uVar5,&(*(char *)(gen_frame + 0x38)),1);
      if ((((iVar14 != 0) || ((*(char *)(gen_frame + 0x38)) != '\x1a')) ||
          (iVar14 = F_00c4e152(*in_eax,lVar11,lVar11 >> 0x1f), iVar14 != -1)) &&
         (lVar11 = F_00c650fc(*in_eax,0,0), lVar11 != -1)) goto LAB_00c70c61;
    }
LAB_00c70c12: ;
    F_00c4dff2(*in_eax);
    goto LAB_00c70b1e;
  }
LAB_00c70c61: ;
  if (((*(byte *)(gen_frame + 0x3b)) & 0x80) != 0) {
    if ((param_4 & 0x74000) == 0) {
      if (((*(uint *)(gen_frame + 0x18)) & 0x74000) == 0) {
        param_4 = param_4 | 0x4000;
      }
      else {
        param_4 = param_4 | (*(uint *)(gen_frame + 0x18)) & 0x74000;
      }
    }
    uVar5 = param_4 & 0x74000;
    if (uVar5 == 0x4000) {
      (*(byte *)(gen_frame + 0x3a)) = 0;
    }
    else if ((uVar5 == 0x10000) || (uVar5 == 0x14000)) {
      if ((param_4 & 0x301) == 0x301) goto LAB_00c70cd0;
    }
    else if ((uVar5 == 0x20000) || (uVar5 == 0x24000)) {
LAB_00c70cd0: ;
      (*(byte *)(gen_frame + 0x3a)) = 2;
    }
    else if ((uVar5 == 0x40000) || (uVar5 == 0x44000)) {
      (*(byte *)(gen_frame + 0x3a)) = 1;
    }
    if (((param_4 & 0x70000) != 0) && ((*(gen_code32 *)(gen_frame + 0x20)) = (code *)0x0, ((*(byte *)(gen_frame + 0x3b)) & 0x40) == 0)) {
      uVar5 = (*(uint *)(gen_frame + 0x30)) & 0xc0000000;
      if (uVar5 == 0x40000000) {
        if ((*(uint *)(gen_frame + 0x24)) == 0) goto LAB_00c70e93;
        if (2 < (*(uint *)(gen_frame + 0x24))) {
          if ((*(uint *)(gen_frame + 0x24)) < 5) {
            lVar16 = F_00c6dda1(*in_eax,0,0,2);
            if (lVar16 == 0) goto LAB_00c70d38;
            lVar16 = F_00c6dda1(*in_eax,0,0,0);
            uVar5 = (uint)lVar16 & (uint)((ulonglong)lVar16 >> 0x20);
            goto LAB_00c70dfd;
          }
LAB_00c70d2f: ;
          if ((*(uint *)(gen_frame + 0x24)) != 5) goto LAB_00c70e93;
        }
LAB_00c70d38: ;
        iVar14 = 0;
        if ((*(byte *)(gen_frame + 0x3a)) == 1) {
          (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xbfbbef));
          iVar17 = 3;
        }
        else {
          if ((*(byte *)(gen_frame + 0x3a)) != 2) goto LAB_00c70e93;
          (*(gen_code32 *)(gen_frame + 0x20)) = (code *)0xfeff;
          iVar17 = 2;
        }
        do {
          iVar12 = F_00c5de4b(*in_eax,(undefined *)((int)&(*(gen_code32 *)(gen_frame + 0x20)) + iVar14),iVar17 - iVar14);
          if (iVar12 == -1) goto LAB_00c70c12;
          iVar14 = iVar14 + iVar12;
        } while (iVar14 < iVar17);
      }
      else {
        if (uVar5 != 0x80000000) {
          if ((uVar5 == 0xc0000000) && ((*(uint *)(gen_frame + 0x24)) != 0)) {
            if (2 < (*(uint *)(gen_frame + 0x24))) {
              if (4 < (*(uint *)(gen_frame + 0x24))) goto LAB_00c70d2f;
              lVar16 = F_00c6dda1(*in_eax,0,0,2);
              if (lVar16 != 0) {
                lVar16 = F_00c6dda1(*in_eax,0,0,0);
                if (lVar16 == -1) goto LAB_00c70c12;
                goto LAB_00c70d83;
              }
            }
            goto LAB_00c70d38;
          }
          goto LAB_00c70e93;
        }
LAB_00c70d83: ;
        iVar14 = F_00c5d0a1(*in_eax,&(*(gen_code32 *)(gen_frame + 0x20)),3);
        if (iVar14 == -1) goto LAB_00c70c12;
        if (iVar14 == 2) {
LAB_00c70e0a: ;
          if (((uint)(*(gen_code32 *)(gen_frame + 0x20)) & 0xffff) == 0xfffe) {
            F_00c4dff2(*in_eax);
            piVar7 = F_00c51f85();
            *piVar7 = 0x16;
            (*(uint *)(gen_frame + 0x34)) = 0x16;
            return 0x16;
          }
          if (((uint)(*(gen_code32 *)(gen_frame + 0x20)) & 0xffff) == 0xfeff) {
            lVar11 = F_00c650fc(*in_eax,2,0);
            if (lVar11 == -1) goto LAB_00c70c12;
            (*(byte *)(gen_frame + 0x3a)) = 2;
            goto LAB_00c70e93;
          }
        }
        else if (iVar14 == 3) {
          if ((*(gen_code32 *)(gen_frame + 0x20)) == ((code *)REFP(0xbfbbef))) {
            (*(byte *)(gen_frame + 0x3a)) = 1;
            goto LAB_00c70e93;
          }
          goto LAB_00c70e0a;
        }
        uVar5 = F_00c650fc(*in_eax,0,0);
LAB_00c70dfd: ;
        if (uVar5 == 0xffffffff) goto LAB_00c70c12;
      }
    }
  }
LAB_00c70e93: ;
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 0x24 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ (*(byte *)(gen_frame + 0x3a))) & 0x7f;
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 0x24 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = (char)(param_4 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if (((*(byte *)(gen_frame + 0x39)) == 0) && ((param_4 & 8) != 0)) {
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 4 + (*in_eax & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((*(uint *)(gen_frame + 0x30)) & 0xc0000000) != 0xc0000000) {
    return (*(uint *)(gen_frame + 0x34));
  }
  if ((param_4 & 1) == 0) {
    return (*(uint *)(gen_frame + 0x34));
  }
  gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x1c)));
  pvVar9 = gen_imp_CreateFileA(param_3,(*(uint *)(gen_frame + 0x30)) & 0x7fffffff,(*(uint *)(gen_frame + 0x28)),((undefined *)(gen_frame + 0xc)),3,(*(uint *)(gen_frame + 0x2c)),(HANDLE)0x0);
  if (pvVar9 != (HANDLE)0xffffffff) {
    *((HANDLE *)GEN_TOP(((*in_eax & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5]))) = pvVar9;
    return (*(uint *)(gen_frame + 0x34));
  }
  DVar10 = gen_imp_GetLastError();
  F_00c51fab(DVar10);
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 4 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = *pbVar1 & 0xfe;
  F_00c6d728(*in_eax);
LAB_00c70b1e: ;
  puVar8 = (uint *)F_00c51f85();
  (*(uint *)(gen_frame + 0x34)) = *puVar8;
  return *puVar8;
}

/* ref: FUN_00c71017 */
unsigned int F_00c71017(unsigned int gen_a0)
{
  GEN_ENTER(0xc71017u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  byte * pbVar1;
  
  if (*(int *)(in_ebp + -0x20) != 0) {
    if (*(int *)(in_ebp + -0x24) != 0) {
      pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[*(int *)(in_ebp + -0x1c) >> 5] + 4 +
                       (*(uint *)(in_ebp + -0x1c) & 0x1f) * 0x40)));
      *pbVar1 = *pbVar1 & 0xfe;
    }
    F_00c6d8b6(*(int *)(in_ebp + -0x1c));
  }
  return 0;
}

/* ref: FID_conflict___sopen_helper_00c71053 */
int F_00c71053(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc71053u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x4c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x14;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6880);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc7105f;
  ((undefined4 *)(gen_frame + 0x10))[0] = 0;
  if ((((*(int * PTR32 *)&gen_args[4]) == (int *)0x0) || (*(*(int * PTR32 *)&gen_args[4]) = -1, (*(char * PTR32 *)&gen_args[0]) == (char *)0x0)) ||
     (((*(int *)&gen_args[5]) != 0 && (((*(int *)&gen_args[3]) & 0xfffffe7fU) != 0)))) {
    piVar1 = F_00c51f85();
    uVar2 = 0x16;
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    uVar2 = F_00c70871((*(int * PTR32 *)&gen_args[4]),((undefined4 *)(gen_frame + 0x10)),(*(char * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]));
    (*(uint *)(gen_frame + 0xc)) = uVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c710e9(piVar1,0,(gen_frame + 0x2c));
    uVar2 = (*(uint *)(gen_frame + 0xc));
    if ((*(uint *)(gen_frame + 0xc)) != 0) {
      *piVar1 = -1;
    }
  }
  return uVar2;
}

/* ref: FUN_00c710e4 */
unsigned int F_00c710e4(unsigned int gen_a0)
{
  GEN_ENTER(0xc710e4u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  byte * pbVar1;
  uint * puVar2;
  uint uVar3;
  
  puVar2 = *(uint * PTR32 *)(in_ebp + 0x18);
  if (*(int *)(in_ebp + -0x1c) != 0) {
    if (*(int *)(in_ebp + -0x20) != 0) {
      uVar3 = *puVar2;
      pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)uVar3 >> 5] + 4 + (uVar3 & 0x1f) * 0x40)));
      *pbVar1 = *pbVar1 & 0xfe;
    }
    F_00c6d8b6(*puVar2);
  }
  return 0;
}

/* ref: FUN_00c710e9 */
unsigned int F_00c710e9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc710e9u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_esi = (uint *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  byte * pbVar1;
  
  if (*(int *)(in_ebp + -0x1c) != in_edi) {
    if (*(int *)(in_ebp + -0x20) != in_edi) {
      pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_esi >> 5] + 4 + (*in_esi & 0x1f) * 0x40)));
      *pbVar1 = *pbVar1 & 0xfe;
    }
    F_00c6d8b6(*in_esi);
  }
  return 0;
}

/* ref: __sopen_s */
int F_00c71149(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc71149u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * _FileHandle = (int *)(uintptr_t)gen_a0;
  char * _Filename = (char *)(uintptr_t)gen_a1;
  int _OpenFlag = (int)gen_a2;
  int _ShareFlag = (int)gen_a3;
  int _PermissionMode = (int)gen_a4;
  int eVar1;
  
  eVar1 = F_00c71053(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}

/* ref: __getpath */
char * F_00c71169(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc71169u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  char cVar1;
  int * piVar2;
  char * pcVar3;
  char * pcVar4;
  
  for (; *param_1 == ';'; param_1 = param_1 + 1) {
  }
  param_3 = param_3 + -1;
  pcVar3 = param_1;
  pcVar4 = param_2;
  if (param_3 == 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x22;
  }
  else {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      if (cVar1 == ';') goto LAB_00c711e6;
      if (cVar1 == '\"') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
        if (cVar1 == '\0') break;
        do {
          if (cVar1 == '\"') break;
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
          param_3 = param_3 + -1;
          if (param_3 == 0) goto LAB_00c711b2;
          cVar1 = *pcVar3;
        } while (cVar1 != '\0');
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
      }
      else {
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
        param_3 = param_3 + -1;
        if (param_3 == 0) {
LAB_00c711b2: ;
          piVar2 = F_00c51f85();
          *piVar2 = 0x22;
          param_1 = pcVar3;
          goto LAB_00c711ec;
        }
      }
      cVar1 = *pcVar3;
    }
    for (; *pcVar3 == ';'; pcVar3 = pcVar3 + 1) {
LAB_00c711e6: ;
    }
  }
LAB_00c711ec: ;
  *pcVar4 = '\0';
  return ((char *)GEN_TOP((-(uint)(param_1 != pcVar3) & (uint)pcVar3)));
}

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

