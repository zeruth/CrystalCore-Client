#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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
  byte * pbVar2;
  int * piVar3;
  undefined * pDVar4;
  undefined * pDVar5;
  uint uVar6;
  uint uVar7;
  char * pcVar8;
  undefined * pDVar9;
  
  pbVar2 = REFG(undefined4, 0x15d75d8);
  bVar1 = *REFG(int * PTR32, 0x15d75d8);
  if (bVar1 == 0) {
    F_00c7625d(param_1,1,param_2);
    return (uint)param_1;
  }
  REFG(undefined4, 0x15d75d8) = REFG(undefined4, 0x15d75d8) + 1;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)0x0;
  uVar7 = (uint)bVar1;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) & 0xffff0000;
  uVar6 = 0xffffffff;
  (*(byte *)(gen_frame + 0x2b)) = 0;
  if (uVar7 < 0x4f) {
    if (uVar7 != 0x4e) {
      switch((unsigned int)(uintptr_t)(uVar7)) {
      case 0x43: ;
      case 0x44: ;
      case 0x45: ;
        pcVar8 = &REFG(undefined, 0x1126748);
        break;
      case 0x46: ;
      case 0x47: ;
        pcVar8 = "short";
        break;
      case 0x48: ;
      case 0x49: ;
        pcVar8 = ((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112673c))));
        break;
      case 0x4a: ;
      case 0x4b: ;
        pcVar8 = &REFG(undefined, 0x1126734);
        break;
      default: ;
        goto switchD_00c79ed1_caseD_4c;
      case 0x4d: ;
        pcVar8 = "float";
      }
      goto LAB_00c7a0c5;
    }
LAB_00c7a0eb: ;
    F_00c7607b(&(*(undefined8 *)(gen_frame + 0x20)),"double");
LAB_00c7a0f8: ;
    if (uVar6 != 0xffffffff) {
LAB_00c7a058: ;
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)0x0;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) & 0xffff0000;
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (undefined *)*param_2;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = param_2[1];
      if (uVar6 != 0xfffffffe) {
        if (*param_2 == 0) {
          if ((uVar6 & 1) == 0) {
            if ((uVar6 & 2) != 0) {
              F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),"volatile");
            }
          }
          else {
            F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),"const");
            if ((uVar6 & 2) != 0) {
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
      uVar6 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      goto LAB_00c7a1a5;
    }
  }
  else {
    if (uVar7 == 0x4f) {
      F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),"long ");
      goto LAB_00c7a0eb;
    }
    if (0x4f < uVar7) {
      if (uVar7 < 0x54) {
        uVar6 = uVar7 & 3;
        goto LAB_00c7a0f8;
      }
      if (uVar7 == 0x58) {
        pcVar8 = &REFG(undefined, 0x1126468);
        goto LAB_00c7a0c5;
      }
      if (uVar7 != 0x5f) goto switchD_00c79ed1_caseD_4c;
      bVar1 = *REFG(int * PTR32, 0x15d75d8);
      REFG(undefined4, 0x15d75d8) = pbVar2 + 2;
      (*(byte *)(gen_frame + 0x2b)) = bVar1;
      uVar6 = (uint)bVar1;
      if (uVar6 < 0x4e) {
        if (uVar6 < 0x4c) {
          if (uVar6 < 0x48) {
            if (uVar6 < 0x46) {
              if (uVar6 == 0) {
                REFG(undefined4, 0x15d75d8) = pbVar2 + 1;
                F_00c758e0(&(*(undefined8 *)(gen_frame + 0x20)),1);
                goto LAB_00c7a101;
              }
              if (uVar6 == 0x24) {
                uVar6 = F_00c79e7b((int *)&(*(undefined8 *)(gen_frame + 0x10)),param_2);
                F_00c76281(param_1,"__w64 ",uVar6);
                return (uint)param_1;
              }
              if (1 < uVar6 - 0x44) goto LAB_00c7a040;
              pcVar8 = "__int8";
            }
            else {
              pcVar8 = "__int16";
            }
          }
          else if (uVar6 < 0x48) {
LAB_00c7a040: ;
            pcVar8 = "UNKNOWN";
          }
          else if (uVar6 < 0x4a) {
            pcVar8 = "__int32";
          }
          else {
            if (0x4b < uVar6) goto LAB_00c7a040;
            pcVar8 = "__int64";
          }
        }
        else {
          pcVar8 = "__int128";
        }
LAB_00c7a0c5: ;
        F_00c75e99(&(*(undefined8 *)(gen_frame + 0x20)),pcVar8);
        goto LAB_00c7a101;
      }
      if (uVar6 == 0x4e) {
        pcVar8 = &REFG(undefined, 0x11266d4);
        goto LAB_00c7a0c5;
      }
      if (uVar6 != 0x4f) {
        if (uVar6 == 0x52) {
          pcVar8 = "<unknown>";
        }
        else {
          if (uVar6 != 0x57) {
            if (1 < uVar6 - 0x58) goto LAB_00c7a040;
            pDVar4 = &(*(undefined8 *)(gen_frame + 0x18));
            goto LAB_00c7a013;
          }
          pcVar8 = "wchar_t";
        }
        goto LAB_00c7a0c5;
      }
      uVar6 = 0xfffffffe;
      goto LAB_00c7a058;
    }
switchD_00c79ed1_caseD_4c: ;
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x8));
LAB_00c7a013: ;
    REFG(undefined4, 0x15d75d8) = REFG(undefined4, 0x15d75d8) + -1;
    piVar3 = (int *)F_00c77d5e(pDVar4);
    uVar6 = piVar3[1];
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (undefined *)*piVar3;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = uVar6;
    if ((undefined *)*piVar3 == (undefined *)0x0) {
      *param_1 = 0;
      param_1[1] = uVar6;
      return (uint)param_1;
    }
  }
LAB_00c7a101: ;
  if (uVar7 == 0x43) {
    pcVar8 = "signed ";
LAB_00c7a155: ;
    pDVar9 = &(*(undefined8 *)(gen_frame + 0x20));
    pDVar5 = &(*(undefined8 *)(gen_frame + 0x10));
    pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x8)),pcVar8);
    F_00c75fe1(pDVar4,pDVar5,pDVar9);
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
  }
  else if (((((uVar7 == 0x45) || (uVar7 == 0x47)) || (uVar7 == 0x49)) || (uVar7 == 0x4b)) ||
          ((uVar7 == 0x5f &&
           ((((*(byte *)(gen_frame + 0x2b)) == 0x45 || ((*(byte *)(gen_frame + 0x2b)) == 0x47)) ||
            (((*(byte *)(gen_frame + 0x2b)) == 0x49 || (((*(byte *)(gen_frame + 0x2b)) == 0x4b || ((*(byte *)(gen_frame + 0x2b)) == 0x4d)))))))))) {
    pcVar8 = "unsigned ";
    goto LAB_00c7a155;
  }
  if (*param_2 != 0) {
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
    pDVar5 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x8)),' ');
    F_00c75fe1(pDVar5,pDVar4,param_2);
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x20)),&(*(undefined8 *)(gen_frame + 0x10)));
  }
  *param_1 = (int)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
  uVar6 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
LAB_00c7a1a5: ;
  param_1[1] = uVar6;
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
  
  pcVar2 = REFG(undefined4, 0x15d75d8);
  cVar1 = *REFG(int * PTR32, 0x15d75d8);
  uVar3 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) & 0xffff0000;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x14))) + 4))) = uVar3;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x14))))) = (undefined *)0x0;
  if (cVar1 == '\0') {
LAB_00c7a3db: ;
    F_00c7625d(param_1,1,param_2);
    return (uint)param_1;
  }
  if (cVar1 == '$') {
    if (REFG(int * PTR32, 0x15d75d8)[1] != '$') {
      if (REFG(int * PTR32, 0x15d75d8)[1] == '\0') goto LAB_00c7a3db;
LAB_00c7a2e8: ;
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
      (*(undefined * PTR32 *)((char *)(param_1))) = (undefined *)0x0;
      return (uint)param_1;
    }
    REFG(undefined4, 0x15d75d8) = REFG(undefined4, 0x15d75d8) + 2;
    cVar1 = *REFG(int * PTR32, 0x15d75d8);
    if (cVar1 < 'R') {
      if (cVar1 != 'Q') {
        if (cVar1 == '\0') goto LAB_00c7a3db;
        if (cVar1 == 'A') {
          REFG(undefined4, 0x15d75d8) = pcVar2 + 3;
          F_00c79133(param_1,param_2);
          return (uint)param_1;
        }
        if (cVar1 == 'B') {
          REFG(undefined4, 0x15d75d8) = pcVar2 + 3;
          F_00c7701a(param_1,param_2,1);
          return (uint)param_1;
        }
        if (cVar1 == 'C') {
          REFG(undefined4, 0x15d75d8) = pcVar2 + 3;
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
          REFG(undefined4, 0x15d75d8) = pcVar2 + 3;
        }
        else if (cVar1 == 'T') {
          REFG(undefined4, 0x15d75d8) = pcVar2 + 3;
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
  REFG(undefined4, 0x15d75d8) = REFG(undefined4, 0x15d75d8) + 1;
  (*(int *)(gen_frame + 0xc)) = *param_2;
  (*(uint *)(gen_frame + 0x10)) = param_2[1] | 0x100;
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
  cVar1 = *REFG(int * PTR32, 0x15d75d8);
  pDVar3 = param_1;
  if (cVar1 == '\0') {
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x14));
    this = (undefined *)F_00c757a7(&(*(undefined8 *)(gen_frame + 0xc)),1);
  }
  else {
    if (cVar1 == '?') {
      REFG(undefined4, 0x15d75d8) = REFG(undefined4, 0x15d75d8) + 1;
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
    REFG(undefined4, 0x15d75d8) = REFG(undefined4, 0x15d75d8) + 1;
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
  
  piVar2 = REFG(undefined4, 0x15d6840);
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)REFG(undefined4, 0x15d6840) >> 2);
    }
    iVar1 = F_00c64543(param_2,(uchar *)*piVar2,in_edi);
    if ((iVar1 == 0) &&
       ((*(char *)(in_edi + *piVar2) == '=' || (*(char *)(in_edi + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)REFG(undefined4, 0x15d6840) >> 2;
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
  if (REFG(undefined4, 0x15d6840) == REFG(undefined4, 0x15d6844)) {
    REFG(undefined4, 0x15d6840) = (int *)F_00c7d24d(REFG(undefined4, 0x15d6840));
  }
  if (REFG(undefined4, 0x15d6840) == (int *)0x0) {
    if ((_Primary == 0) || (REFG(undefined4, 0x15d6848) == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      REFG(undefined4, 0x15d6840) = F_00c54c2e(4);
      if (REFG(undefined4, 0x15d6840) == (int *)0x0) {
        return -1;
      }
      *REFG(int * PTR32, 0x15d6840) = 0;
      if (REFG(undefined4, 0x15d6848) == (undefined4 *)0x0) {
        REFG(undefined4, 0x15d6848) = F_00c54c2e(4);
        if (REFG(undefined4, 0x15d6848) == (undefined4 *)0x0) {
          return -1;
        }
        *REFG(int * PTR32, 0x15d6848) = 0;
      }
    }
    else {
      iVar3 = F_00c6455d();
      if (iVar3 != 0) goto LAB_00c7d335;
    }
  }
  piVar1 = REFG(undefined4, 0x15d6840);
  if (REFG(undefined4, 0x15d6840) == (int *)0x0) {
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
    piVar1 = F_00c54d0d(REFG(undefined4, 0x15d6840),4,_Size);
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
       (piVar1 = F_00c54d0d(REFG(undefined4, 0x15d6840),_Count,4), piVar1 == (int *)0x0)) goto LAB_00c7d443;
  }
  REFG(undefined4, 0x15d6840) = piVar1;
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
  GEN_ENTER(0xc7d6abu, 0u, 0u, 0u, 0u);
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
        (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[0]), 1, 3),(char)uVar3)));
        if (*piVar5 < 0) {
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
  int iVar4;
  bool bVar5;
  uint uVar6;
  int eVar7;
  uint uVar8;
  ushort uVar9;
  ushort * puVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  short * psVar18;
  short * psVar19;
  ushort uVar20;
  short * psVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  char * pcVar25;
  
  uVar17 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60)));
  uVar8 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x5c)));
  uVar23 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72)));
  uVar6 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e)));
  iVar24 = CONCAT22((*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)),(*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2)));
  iVar2 = CONCAT22((*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)),(*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2)));
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(ushort *)(gen_frame + 0x1c)) = (ushort)param_3 & 0x8000;
  uVar13 = param_3 & 0x7fff;
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
  if ((short)uVar13 == 0) {
    if ((param_2 != 0) || (param_1 != 0)) goto LAB_00c7eece;
    *param_6 = 0;
    *(byte *)(param_6 + 1) = (((*(ushort *)(gen_frame + 0x1c)) != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined2 *)((int)param_6 + 3) = 0x3001;
    *(undefined1 *)((int)param_6 + 5) = 0;
    iVar2 = iVar24;
  }
  else {
    if ((short)uVar13 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_00c7eeac;
          pcVar25 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_00c7eeac: ;
            pcVar25 = "1#QNAN";
            goto LAB_00c7eeb1;
          }
          pcVar25 = "1#IND";
        }
        eVar7 = F_00c49908(param_6 + 2,0x16,pcVar25);
        if (eVar7 != 0) goto LAB_00c7ee5e;
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
      else {
        pcVar25 = "1#SNAN";
LAB_00c7eeb1: ;
        eVar7 = F_00c49908(param_6 + 2,0x16,pcVar25);
        if (eVar7 != 0) {
LAB_00c7ee5e: ;
                    
          F_00c4c299(param_1,0,0,0,0,0);
        }
        *(undefined1 *)((int)param_6 + 3) = 6;
      }
      uVar17 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60)));
      uVar8 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x5c)));
      iVar2 = CONCAT22((*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)),(*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2)));
      uVar6 = 0;
      goto LAB_00c7f639;
    }
LAB_00c7eece: ;
    (*(short *)(gen_frame + 0x30)) = (short)(((uVar13 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 +
                       uVar13 * 0x4d10 >> 0x10);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = 0;
    uVar15 = -(int)(*(short *)(gen_frame + 0x30));
    (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)uVar13;
    (*(byte *)(gen_frame + 0x67)) = (byte)(uVar13 >> 8);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = (ushort)param_2;
    (*(ushort *)(gen_frame + 0x64)) = (ushort)(param_2 >> 0x10);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = (ushort)param_1;
    uVar8 = param_1 << 0x10;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = (undefined2)((uint)param_1 >> 0x10);
    uVar17 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60)));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x134bea0);
    if (uVar15 != 0) {
      puVar1 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      iVar2 = iVar24;
      uVar6 = (*(uint *)(gen_frame + 0x6e));
      uVar23 = (*(uint *)(gen_frame + 0x72));
      uVar8 = param_1 << 0x10;
      uVar17 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60)));
      if ((int)uVar15 < 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x134c000);
        uVar15 = (int)(*(short *)(gen_frame + 0x30));
        puVar1 = (*(undefined * PTR32 *)(gen_frame + 0x14));
        uVar6 = (*(uint *)(gen_frame + 0x6e));
        uVar23 = (*(uint *)(gen_frame + 0x72));
      }
joined_r0x00c7ef30: ;
      if (uVar15 != 0) {
        puVar1 = puVar1 + 0x54;
        uVar16 = (int)uVar15 >> 3;
        uVar13 = uVar15 & 7;
        uVar15 = uVar16;
        if (uVar13 != 0) {
          puVar10 = (ushort *)(puVar1 + uVar13 * 0xc);
          if (0x7fff < *puVar10) {
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 0)) = (undefined2)*(undefined4 *)puVar10;
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 2)) = (undefined2)((uint)*(undefined4 *)((int)(uintptr_t)puVar10) >> 0x10);
            puVar3 = puVar10 + 4;
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 4)) = (undefined2)*(undefined4 *)(puVar10 + 2);
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 6)) = (undefined2)((uint)*(undefined4 *)(puVar10 + 2) >> 0x10);
            puVar10 = (ushort *)((byte *)(gen_frame + 0x40));
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
          uVar6 = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = 0;
          uVar23 = 0;
          (*(ushort *)(gen_frame + 0x76)) = 0;
          uVar11 = (puVar10[5] ^ CONCAT11((*(byte *)(gen_frame + 0x67)),(*(undefined1 *)(gen_frame + 0x66)))) & 0x8000;
          uVar12 = CONCAT11((*(byte *)(gen_frame + 0x67)),(*(undefined1 *)(gen_frame + 0x66))) & 0x7fff;
          uVar9 = puVar10[5] & 0x7fff;
          uVar20 = uVar9 + uVar12;
          if (((uVar12 < 0x7fff) && (uVar9 < 0x7fff)) && (uVar20 < 0xbffe)) {
            if (0x3fbf < uVar20) {
              if (((uVar12 == 0) &&
                  (uVar20 = uVar20 + 1,
                  (CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) & 0x7fffffff) == 0)) &&
                 ((uVar17 == 0 && (uVar8 == 0)))) {
                (*(undefined1 *)(gen_frame + 0x66)) = 0;
                (*(byte *)(gen_frame + 0x67)) = 0;
                goto joined_r0x00c7ef30;
              }
              if (((uVar9 != 0) || (uVar20 = uVar20 + 1, (*(uint *)(puVar10 + 4) & 0x7fffffff) != 0)
                  ) || ((*(int *)(puVar10 + 2) != 0 || (*(int *)puVar10 != 0)))) {
                (*(int *)(gen_frame + 0x28)) = 0;
                psVar21 = (short *)((int)&(*(uint *)(gen_frame + 0x6e)) + 2);
                (*(int *)(gen_frame + 0x3c)) = 5;
                do {
                  (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x3c));
                  if (0 < (*(int *)(gen_frame + 0x3c))) {
                    (*(ushort * PTR32 *)(gen_frame + 0xc)) = (ushort *)((int)&(*(uint *)(gen_frame + 0x5c)) + (*(int *)(gen_frame + 0x28)) * 2);
                    (*(ushort * PTR32 *)(gen_frame + 0x10)) = puVar10 + 4;
                    do {
                      bVar5 = false;
                      uVar6 = *(uint *)(psVar21 + -2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10));
                      if ((uVar6 < *(uint *)(psVar21 + -2)) ||
                         (uVar6 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)))) {
                        bVar5 = true;
                      }
                      *(uint *)(psVar21 + -2) = uVar6;
                      if (bVar5) {
                        *psVar21 = *psVar21 + 1;
                      }
                      (*(ushort * PTR32 *)(gen_frame + 0xc)) = (*(ushort * PTR32 *)(gen_frame + 0xc)) + 1;
                      (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + -1;
                      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + -1;
                    } while (0 < (*(int *)(gen_frame + 0x2c)));
                  }
                  psVar21 = psVar21 + 1;
                  (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
                  (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + -1;
                } while (0 < (*(int *)(gen_frame + 0x3c)));
                uVar20 = uVar20 + 0xc002;
                if ((short)uVar20 < 1) {
LAB_00c7f0e3: ;
                  uVar20 = uVar20 - 1;
                  if ((short)uVar20 < 0) {
                    uVar6 = (uint)(ushort)-uVar20;
                    uVar20 = 0;
                    do {
                      if (((*(byte *)(gen_frame + 0x6c)) & 1) != 0) {
                        (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
                      }
                      iVar22 = CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)));
                      uVar8 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)));
                      iVar24 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)));
                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2))) >> 1);
                      (*(ushort *)(gen_frame + 0x76)) = (*(ushort *)(gen_frame + 0x76)) >> 1;
                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) =
                           (ushort)(*(uint *)(gen_frame + 0x72)) >> 1 | (ushort)((uint)(iVar22 << 0x1f) >> 0x10);
                      uVar23 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) >> 1;
                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) =
                           (ushort)(*(uint *)(gen_frame + 0x6e)) >> 1 | (ushort)((uint)(iVar24 << 0x1f) >> 0x10);
                      uVar6 = uVar6 - 1;
                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = (ushort)(uVar8 >> 1);
                      (*(byte *)(gen_frame + 0x6c)) = (byte)uVar23;
                      (*(undefined1 *)(gen_frame + 0x6d)) = (undefined1)(uVar23 >> 8);
                    } while (uVar6 != 0);
                    if ((*(int *)(gen_frame + 0x34)) != 0) {
                      (*(byte *)(gen_frame + 0x6c)) = (*(byte *)(gen_frame + 0x6c)) | 1;
                    }
                  }
                }
                else {
                  do {
                    uVar12 = (ushort)(*(uint *)(gen_frame + 0x72));
                    uVar9 = (ushort)(*(uint *)(gen_frame + 0x6e));
                    if (((*(ushort *)(gen_frame + 0x76)) & 0x8000) != 0) break;
                    iVar24 = (int)CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) << 1;
                    (*(byte *)(gen_frame + 0x6c)) = (byte)iVar24;
                    (*(undefined1 *)(gen_frame + 0x6d)) = (undefined1)((uint)iVar24 >> 8);
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) = (ushort)((uint)iVar24 >> 0x10);
                    iVar24 = (int)CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2))) * 2;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = (ushort)iVar24 | uVar9 >> 0xf;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) = (ushort)((uint)iVar24 >> 0x10);
                    iVar24 = (int)CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2))) * 2;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = (ushort)iVar24 | uVar12 >> 0xf;
                    uVar20 = uVar20 - 1;
                    (*(ushort *)(gen_frame + 0x76)) = (ushort)((uint)iVar24 >> 0x10);
                  } while (0 < (short)uVar20);
                  if ((short)uVar20 < 1) goto LAB_00c7f0e3;
                }
                if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) ||
                   (uVar23 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72))),
                   uVar6 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e))),
                   (CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) & 0x1ffff) == 0x18000))
                {
                  if ((int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e))) == -1) {
                    uVar6 = 0;
                    if ((int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72))) == -1) {
                      if ((*(ushort *)(gen_frame + 0x76)) == 0xffff) {
                        (*(ushort *)(gen_frame + 0x76)) = 0x8000;
                        uVar20 = uVar20 + 1;
                        uVar23 = 0;
                        uVar6 = 0;
                      }
                      else {
                        (*(ushort *)(gen_frame + 0x76)) = (*(ushort *)(gen_frame + 0x76)) + 1;
                        uVar23 = 0;
                        uVar6 = 0;
                      }
                    }
                    else {
                      uVar23 = (int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72))) + 1;
                    }
                  }
                  else {
                    uVar6 = (int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)),(ushort)(*(uint *)(gen_frame + 0x6e))) + 1;
                    uVar23 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)),(ushort)(*(uint *)(gen_frame + 0x72)));
                  }
                }
                if (uVar20 < 0x7fff) {
                  (*(byte *)(gen_frame + 0x67)) = (byte)(uVar20 >> 8) | (byte)(uVar11 >> 8);
                  (*(uint *)(gen_frame + 0x5c)) = uVar6;
                  (*(uint *)(gen_frame + 0x60)) = uVar23;
                  (*(ushort *)(gen_frame + 0x64)) = (*(ushort *)(gen_frame + 0x76));
                  (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)uVar20;
                  uVar8 = uVar6;
                  uVar17 = uVar23;
                }
                else {
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = 0;
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = 0;
                  iVar24 = ((uVar11 == 0) - 1 & 0x80000000) + 0x7fff8000;
                  (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar24;
                  (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar24 >> 0x10);
                  (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar24 >> 0x18);
                  uVar8 = 0;
                  uVar17 = 0;
                }
                goto joined_r0x00c7ef30;
              }
            }
            (*(ushort *)(gen_frame + 0x64)) = 0;
            (*(undefined1 *)(gen_frame + 0x66)) = 0;
            (*(byte *)(gen_frame + 0x67)) = 0;
          }
          else {
            iVar24 = ((uVar11 == 0) - 1 & 0x80000000) + 0x7fff8000;
            (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar24;
            (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar24 >> 0x10);
            (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar24 >> 0x18);
          }
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = 0;
          uVar6 = 0;
          uVar23 = 0;
          uVar8 = 0;
          uVar17 = 0;
        }
        goto joined_r0x00c7ef30;
      }
    }
    uVar13 = CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64))));
    (*(uint *)(gen_frame + 0x6e)) = uVar6;
    (*(uint *)(gen_frame + 0x72)) = uVar23;
    if (0x3ffe < (ushort)(uVar13 >> 0x10)) {
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
      uVar6 = uVar13 >> 0x10 & 0x7fff;
      iVar24 = uVar6 + 0x3ffb;
      if (((ushort)uVar6 < 0x7fff) && ((ushort)iVar24 < 0xbffe)) {
        if (0x3fbf < (ushort)iVar24) {
          if (((((ushort)uVar6 == 0) &&
               (iVar24 = uVar6 + 0x3ffc,
               (CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) & 0x7fffffff) == 0)) &&
              (uVar17 == 0)) && (uVar8 == 0)) {
            (*(undefined1 *)(gen_frame + 0x66)) = 0;
            (*(byte *)(gen_frame + 0x67)) = 0;
            goto LAB_00c7f471;
          }
          (*(int *)(gen_frame + 0x28)) = 0;
          psVar21 = (short *)((int)&(*(uint *)(gen_frame + 0x6e)) + 2);
          (*(int *)(gen_frame + 0x3c)) = 5;
          do {
            (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x3c));
            if (0 < (*(int *)(gen_frame + 0x3c))) {
              (*(ushort * PTR32 *)(gen_frame + 0x24)) = ((ushort *)(gen_frame + 0x54));
              puVar10 = (ushort *)((int)&(*(uint *)(gen_frame + 0x5c)) + (*(int *)(gen_frame + 0x28)) * 2);
              do {
                bVar5 = false;
                uVar6 = *(uint *)(psVar21 + -2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x24)) * (uint)*puVar10;
                if ((uVar6 < *(uint *)(psVar21 + -2)) || (uVar6 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0x24)) * (uint)*puVar10))
                {
                  bVar5 = true;
                }
                *(uint *)(psVar21 + -2) = uVar6;
                if (bVar5) {
                  *psVar21 = *psVar21 + 1;
                }
                (*(ushort * PTR32 *)(gen_frame + 0x24)) = (*(ushort * PTR32 *)(gen_frame + 0x24)) + -1;
                puVar10 = puVar10 + 1;
                (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + -1;
              } while (0 < (*(int *)(gen_frame + 0x34)));
            }
            psVar21 = psVar21 + 1;
            (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
            (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + -1;
          } while (0 < (*(int *)(gen_frame + 0x3c)));
          iVar24 = iVar24 + 0xc002;
          if ((short)iVar24 < 1) {
LAB_00c7f36c: ;
            uVar20 = (ushort)(iVar24 + 0xffff);
            if ((short)uVar20 < 0) {
              uVar6 = -(iVar24 + 0xffff);
              uVar8 = uVar6 & 0xffff;
              uVar20 = uVar20 + (short)uVar6;
              do {
                if (((*(byte *)(gen_frame + 0x6c)) & 1) != 0) {
                  (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
                }
                iVar22 = CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)));
                uVar6 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)));
                iVar24 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)));
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2))) >> 1);
                (*(ushort *)(gen_frame + 0x76)) = (*(ushort *)(gen_frame + 0x76)) >> 1;
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) = (ushort)(*(uint *)(gen_frame + 0x72)) >> 1 | (ushort)((uint)(iVar22 << 0x1f) >> 0x10);
                uVar23 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) >> 1;
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) = (ushort)(*(uint *)(gen_frame + 0x6e)) >> 1 | (ushort)((uint)(iVar24 << 0x1f) >> 0x10);
                uVar8 = uVar8 - 1;
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = (ushort)(uVar6 >> 1);
                (*(byte *)(gen_frame + 0x6c)) = (byte)uVar23;
                (*(undefined1 *)(gen_frame + 0x6d)) = (undefined1)(uVar23 >> 8);
              } while (uVar8 != 0);
              if ((*(int *)(gen_frame + 0x2c)) != 0) {
                (*(byte *)(gen_frame + 0x6c)) = (*(byte *)(gen_frame + 0x6c)) | 1;
              }
            }
          }
          else {
            do {
              uVar9 = (ushort)(*(uint *)(gen_frame + 0x72));
              uVar20 = (ushort)(*(uint *)(gen_frame + 0x6e));
              if ((short)(*(ushort *)(gen_frame + 0x76)) < 0) break;
              iVar22 = (int)CONCAT22((ushort)(*(uint *)(gen_frame + 0x6e)),CONCAT11((*(undefined1 *)(gen_frame + 0x6d)),(*(byte *)(gen_frame + 0x6c)))) << 1;
              (*(byte *)(gen_frame + 0x6c)) = (byte)iVar22;
              (*(undefined1 *)(gen_frame + 0x6d)) = (undefined1)((uint)iVar22 >> 8);
              (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 0)) = (ushort)((uint)iVar22 >> 0x10);
              iVar22 = (int)CONCAT22((ushort)(*(uint *)(gen_frame + 0x72)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2))) * 2;
              (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x6e)) + 2)) = (ushort)iVar22 | uVar20 >> 0xf;
              (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 0)) = (ushort)((uint)iVar22 >> 0x10);
              iVar22 = (int)CONCAT22((*(ushort *)(gen_frame + 0x76)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2))) * 2;
              (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x72)) + 2)) = (ushort)iVar22 | uVar9 >> 0xf;
              iVar24 = iVar24 + 0xffff;
              (*(ushort *)(gen_frame + 0x76)) = (ushort)((uint)iVar22 >> 0x10);
            } while (0 < (short)iVar24);
            uVar20 = (ushort)iVar24;
            if ((short)uVar20 < 1) goto LAB_00c7f36c;
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
                  uVar20 = uVar20 + 1;
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
          if (uVar20 < 0x7fff) {
            (*(byte *)(gen_frame + 0x67)) = (byte)(uVar20 >> 8) | (*(byte *)(gen_frame + 0x67)) & 0x80;
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = (ushort)(*(uint *)(gen_frame + 0x6e));
            (*(ushort *)(gen_frame + 0x64)) = (*(ushort *)(gen_frame + 0x76));
            (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)uVar20;
            uVar8 = (*(uint *)(gen_frame + 0x6e));
            uVar17 = (*(uint *)(gen_frame + 0x72));
          }
          else {
            iVar24 = ((((*(byte *)(gen_frame + 0x67)) & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
            (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar24;
            (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar24 >> 0x10);
            (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar24 >> 0x18);
            uVar8 = 0;
            uVar17 = 0;
          }
          goto LAB_00c7f471;
        }
        iVar24 = 0;
      }
      else {
        iVar24 = ((((*(byte *)(gen_frame + 0x67)) & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
      }
      (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar24;
      (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar24 >> 0x10);
      (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar24 >> 0x18);
      (*(uint *)(gen_frame + 0x6e)) = 0;
      (*(uint *)(gen_frame + 0x72)) = 0;
      uVar8 = 0;
      uVar17 = 0;
    }
LAB_00c7f471: ;
    *param_6 = (*(short *)(gen_frame + 0x30));
    iVar24 = param_4;
    if (((param_5 & 1) == 0) || (iVar24 = param_4 + (*(short *)(gen_frame + 0x30)), 0 < iVar24)) {
      if (0x15 < iVar24) {
        iVar24 = 0x15;
      }
      iVar22 = (CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) >> 0x10) - 0x3ffe;
      (*(undefined1 *)(gen_frame + 0x66)) = 0;
      (*(byte *)(gen_frame + 0x67)) = 0;
      (*(int *)(gen_frame + 0x38)) = 8;
      uVar6 = uVar8;
      uVar23 = uVar17;
      do {
        uVar8 = uVar6 << 1;
        uVar17 = uVar23 * 2 | uVar6 >> 0x1f;
        iVar4 = (int)CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) * 2;
        (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar4 | (ushort)(uVar23 >> 0x1f);
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + -1;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = (undefined2)uVar17;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = (ushort)(uVar23 * 2 >> 0x10);
        (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar4 >> 0x10);
        (*(byte *)(gen_frame + 0x67)) = (byte)((uint)iVar4 >> 0x18);
        uVar6 = uVar8;
        uVar23 = uVar17;
      } while ((*(int *)(gen_frame + 0x38)) != 0);
      if ((iVar22 < 0) && (uVar23 = -iVar22 & 0xff, uVar23 != 0)) {
        do {
          iVar22 = CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64))));
          uVar8 = CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) >> 1;
          (*(ushort *)(gen_frame + 0x64)) = (ushort)uVar8;
          (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)(uVar8 >> 0x10);
          (*(byte *)(gen_frame + 0x67)) = (*(byte *)(gen_frame + 0x67)) >> 1;
          uVar13 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60))) >> 1;
          uVar17 = uVar13 | iVar22 << 0x1f;
          uVar8 = uVar6 >> 1 | (int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x60))) << 0x1f;
          uVar23 = uVar23 - 1;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = (undefined2)uVar13;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = (ushort)(uVar17 >> 0x10);
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = (undefined2)(uVar6 >> 1);
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = (ushort)(uVar8 >> 0x10);
          uVar6 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x5c)));
        } while (0 < (int)uVar23);
      }
      psVar21 = param_6 + 2;
      psVar18 = psVar21;
      for (iVar24 = iVar24 + 1; 0 < iVar24; iVar24 = iVar24 + -1) {
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) = (ushort)(uVar17 >> 0x10);
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 0)) = (undefined2)uVar17;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) = (ushort)(uVar8 >> 0x10);
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 0)) = (undefined2)uVar8;
        iVar2 = CONCAT22((undefined2)(*(uint *)(gen_frame + 0x60)),(*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)));
        ((byte *)(gen_frame + 0x40))[8] = (char)(*(ushort *)(gen_frame + 0x64));
        ((byte *)(gen_frame + 0x40))[9] = (char)((*(ushort *)(gen_frame + 0x64)) >> 8);
        ((byte *)(gen_frame + 0x40))[10] = (*(undefined1 *)(gen_frame + 0x66));
        ((byte *)(gen_frame + 0x40))[0xb] = (*(byte *)(gen_frame + 0x67));
        uVar23 = ((int)CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64)))) * 2 |
                 (uint)((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2)) >> 0xf)) * 2 | (uVar17 & 0x7fffffff) >> 0x1e;
        uVar13 = (uVar17 * 2 | (uint)((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x5c)) + 2)) >> 0xf)) * 2 | (uVar8 & 0x7fffffff) >> 0x1e;
        uVar6 = uVar8 * 5;
        if ((uVar6 < uVar8 * 4) || (uVar15 = uVar13, uVar6 < uVar8)) {
          uVar15 = uVar13 + 1;
          bVar5 = false;
          if ((uVar15 < uVar13) || (uVar15 == 0)) {
            bVar5 = true;
          }
          if (bVar5) {
            uVar23 = uVar23 + 1;
          }
        }
        uVar13 = uVar17 + uVar15;
        if ((uVar13 < uVar15) || (uVar13 < uVar17)) {
          uVar23 = uVar23 + 1;
        }
        iVar22 = (uVar23 + (int)CONCAT13((*(byte *)(gen_frame + 0x67)),CONCAT12((*(undefined1 *)(gen_frame + 0x66)),(*(ushort *)(gen_frame + 0x64))))) * 2;
        (*(ushort *)(gen_frame + 0x64)) = (ushort)iVar22 | (ushort)(uVar13 >> 0x1f);
        uVar8 = uVar8 * 10;
        (*(undefined1 *)(gen_frame + 0x66)) = (undefined1)((uint)iVar22 >> 0x10);
        uVar17 = uVar13 * 2 | uVar6 >> 0x1f;
        *(char *)psVar18 = (char)((uint)iVar22 >> 0x18) + '0';
        psVar18 = (short *)((int)psVar18 + 1);
        (*(byte *)(gen_frame + 0x67)) = 0;
        (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 0)) = (undefined2)(*(uint *)(gen_frame + 0x5c));
        (*(undefined2 *)((char *)((byte *)(gen_frame + 0x40)) + 6)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x60)) + 2));
      }
      psVar19 = psVar18 + -1;
      if (*(char *)((int)psVar18 + -1) < '5') {
        for (; (psVar21 <= psVar19 && ((char)*psVar19 == '0'));
            psVar19 = (short *)((int)psVar19 + -1)) {
        }
        if (psVar19 < psVar21) {
          *param_6 = 0;
          *(undefined1 *)((int)param_6 + 3) = 1;
          *(byte *)(param_6 + 1) = (((*(ushort *)(gen_frame + 0x1c)) != 0x8000) - 1U & 0xd) + 0x20;
          *(char *)psVar21 = '0';
          *(undefined1 *)((int)param_6 + 5) = 0;
          goto LAB_00c7ee26;
        }
      }
      else {
        for (; (psVar21 <= psVar19 && ((char)*psVar19 == '9'));
            psVar19 = (short *)((int)psVar19 + -1)) {
          *(char *)psVar19 = '0';
        }
        if (psVar19 < psVar21) {
          psVar19 = (short *)((int)psVar19 + 1);
          *param_6 = *param_6 + 1;
        }
        *(char *)psVar19 = (char)*psVar19 + '\x01';
      }
      cVar14 = ((char)psVar19 - (char)param_6) + -3;
      *(char *)((int)param_6 + 3) = cVar14;
      *(undefined1 *)(cVar14 + 4 + (int)param_6) = 0;
      uVar6 = 1;
      goto LAB_00c7f639;
    }
    *param_6 = 0;
    *(undefined2 *)((int)param_6 + 3) = 0x3001;
    *(byte *)(param_6 + 1) = (((*(ushort *)(gen_frame + 0x1c)) != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_00c7ee26: ;
  uVar6 = 1;
LAB_00c7f639: ;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x40)) + 2)) = iVar2;
  (*(uint *)(gen_frame + 0x5c)) = uVar8;
  (*(uint *)(gen_frame + 0x60)) = uVar17;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar6;
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
    uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(iVar1 + 8))))
                      (*(undefined4 * PTR32 *)(iVar1 + 8),iVar1 + 8,param_1,param_2);
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
uint F_00c81400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc81400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
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
uint F_00c81750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
uint F_00c817c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc817c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
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
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 4))))(*(int *)(iVar1 + 0xc),iVar1 + 0xc);
  F_00c84750(this,0x16,iVar3,0);
  pcVar2 = *(gen_code32 *)(*(int *)this + 0x70);
  *(undefined4 *)((int)this + 0x60) = 1;
  (*pcVar2)(this);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x78) + 0xc)));
  ((code *)*(gen_code32 *)(iVar1 + 8))(iVar1,*(int *)((int)this + 0x78) + 0xc);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 1;
}

/* ref: FUN_00c81dc0 */
unsigned int F_00c81dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c81dd0 */
unsigned int F_00c81dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
uint F_00c81f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc81f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
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
      this_00 = *(undefined * PTR32 *)(param_1 + 0x40);
      if ((*(int *)((int)this_00 + 100) != 0) && (*(int *)((int)this_00 + 0x74) == 0)) {
        F_00c81b20(this_00);
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
uint F_00c824b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc824b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)(param_1 + -0x38) = param_2;
  return 0;
}

/* ref: FUN_00c824d0 */
uint F_00c824d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc824d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
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
    (*(int *)&gen_args[4]) = 0;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78))) + 0x18))))))
                      (*((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78))) + 0x18))),&REFG(undefined, 0x1095b14),&(*(int *)&gen_args[4]));
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
  uint uVar7;
  undefined1 * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  puVar2 = param_2;
  uVar4 = param_2[1];
  uVar7 = *param_2;
  if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (79999 < uVar7)))) {
    *param_2 = uVar7 - 80000;
    param_2[1] = uVar4 - (uVar7 < 80000);
    uVar4 = *param_3;
    *param_3 = *param_3 - 80000;
    param_3[1] = (param_3[1] - 1) + (uint)(79999 < uVar4);
  }
  *(uint *)(this + 0x118) = *param_2;
  *(uint *)(this + 0x11c) = param_2[1];
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0xc))))(*(int * PTR32 *)(this + 0x18),((byte *)(gen_frame + 0x4)) + 4);
  uVar9 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) - *(uint *)(this + 0x20);
  iVar3 = ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) - *(int *)(this + 0x24)) -
          (uint)((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) < *(uint *)(this + 0x20));
  uVar7 = uVar9 - *param_2;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = iVar3;
  uVar4 = (iVar3 - param_2[1]) - (uint)(uVar9 < *param_2);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = uVar9;
  if ((uVar4 < 0x80000000) || ((-2 < (int)uVar4 && (0xe2329aff < uVar7)))) {
    param_2 = (uint *)uVar7;
    if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (500000000 < uVar7)))) {
      param_2 = (uint *)0x1dcd6500;
    }
  }
  else {
    param_2 = (uint *)0xe2329b00;
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xc0))(this,param_2,(int)((int)(uintptr_t)param_2) >> 0x1f,uVar9,iVar3);
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
  iVar11 = (int)((iVar6 + iVar3 >> 0x1f & 3U) + iVar6 + iVar3) >> 2;
  puVar8 = ((undefined1 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) - *(uint *)(this + 0x138))));
  ((byte *)(gen_frame + 0x4))[0x10] = (char)iVar11;
  ((byte *)(gen_frame + 0x4))[0x11] = (char)((uint)iVar11 >> 8);
  ((byte *)(gen_frame + 0x4))[0x12] = (char)((uint)iVar11 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0x13] = (char)((uint)iVar11 >> 0x18);
  uVar4 = (uint)((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) < *(uint *)(this + 0x138));
  iVar3 = ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) - *(int *)(this + 0x13c)) - uVar4;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = puVar8;
  if ((-1 < iVar3) && ((0 < iVar3 || (REFP(0x00989680) < puVar8)))) {
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
        ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) - *(int *)(this + 0x13c) == uVar4 || iVar3 < 0)) &&
       ((iVar3 < 0 || (puVar8 < (undefined1 *)0x989681)))) {
      *(int *)(this + 0x108) = iVar11;
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
  uVar7 = *puVar2;
  *puVar2 = *puVar2 + uVar4;
  puVar2[1] = puVar2[1] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar7,uVar4);
  uVar4 = (uint)(0 < -(int)param_2);
  *(int *)(this + 0x108) = iVar11;
  if (uVar4 == 1) {
    uVar7 = *puVar2;
    uVar9 = puVar2[1];
    param_1 = ((int *)GEN_TOP((uVar7 - *(uint *)(this + 0x138))));
    uVar10 = (uVar9 - *(int *)(this + 0x13c)) - (uint)(uVar7 < *(uint *)(this + 0x138));
    if ((uVar10 < 0x80000000) || ((-2 < (int)uVar10 && ((undefined1 *)0xe2329aff < param_1)))) {
      if ((-1 < (int)uVar10) && ((0 < (int)uVar10 || ((undefined1 *)0x1dcd6500 < param_1)))) {
        param_1 = (int *)0x1dcd6500;
      }
    }
    else {
      param_1 = (int *)0xe2329b00;
    }
    *(uint *)(this + 0x138) = uVar7;
    *(uint *)(this + 0x13c) = uVar9;
  }
  else {
    *(undefined4 *)(this + 0x138) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4));
    *(undefined4 *)(this + 0x13c) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8));
    param_1 = (int *)(*(undefined1 * PTR32 *)(gen_frame + 0x0));
  }
  uVar7 = (uint)param_2;
  if (0 < -(int)param_2) {
    uVar7 = *puVar2 - *(uint *)(this + 0x118);
    uVar9 = (puVar2[1] - *(int *)(this + 0x11c)) - (uint)(*puVar2 < *(uint *)(this + 0x118));
    if ((uVar9 < 0x80000000) || ((-2 < (int)uVar9 && (0xe2329aff < uVar7)))) {
      if ((-1 < (int)uVar9) && ((0 < (int)uVar9 || (500000000 < uVar7)))) {
        uVar7 = 500000000;
      }
    }
    else {
      uVar7 = 0xe2329b00;
    }
  }
  *(uint *)(this + 0x150) = uVar7;
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
uint F_00c82ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  return 0;
}

/* ref: FUN_00c82b00 */
uint F_00c82b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  *param_2 = *(undefined4 *)(param_1 + 0x44);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  return 0;
}

/* ref: FUN_00c82b40 */
uint F_00c82b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
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
uint F_00c82bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
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
uint F_00c82d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c82ca0((undefined *)(param_1 + -0xe0),*(int *)(param_1 + 0x44) + -1,param_2,
                       *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  return uVar1;
}

/* ref: FUN_00c82d70 */
uint F_00c82d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c82ca0((undefined *)(param_1 + -0xe0),*(int *)(param_1 + 0x44) + -2,param_2,
                       *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf0 */
uint F_00c82da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc82da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1085dc8));
  if (uVar1 != 0) {
    if (param_1 != (undefined *)0x0) {
      uVar1 = F_00c83ae0((int)param_1 + 0xe0,param_3);
      return uVar1;
    }
    uVar1 = F_00c83ae0(0,param_3);
    return uVar1;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095b14));
  if (uVar1 == 0) {
    uVar1 = F_00c81400(param_1,param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00c83ae0((int)param_1 + 0xe4,param_3);
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
  DWORD DVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(this + 0x58);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x54);
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  do {
    DVar1 = gen_imp_WaitForMultipleObjects(2,&(*(undefined4 *)(gen_frame + 0x4)),0,10000);
  } while (DVar1 == 0x102);
  ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
  if (DVar1 == 0) {
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

/* ref: FUN_00c837d0 */
uint F_00c837d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc837d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 4))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c837f0 */
uint F_00c837f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc837f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 8))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c83810 */
unsigned int F_00c83810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c83820 */
uint F_00c83820(void)
{
  GEN_ENTER(0xc83820u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c83830 */
uint F_00c83830(void)
{
  GEN_ENTER(0xc83830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c83840 */
unsigned int F_00c83840(void)
{
  GEN_ENTER(0xc83840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c83850 */
unsigned int F_00c83850(void)
{
  GEN_ENTER(0xc83850u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c83860 */
uint F_00c83860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0x80004001;
}

/* ref: FUN_00c83870 */
uint F_00c83870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83870u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + -8))))
                    (*(undefined4 * PTR32 *)(param_1 + -8),param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c83890 */
uint F_00c83890(unsigned int gen_a0)
{
  GEN_ENTER(0xc83890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 4))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c838b0 */
uint F_00c838b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc838b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 8))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c83900 */
uint F_00c83900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc83900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c83870(param_1 + -0x8c,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c83910 */
uint F_00c83910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c838b0(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c83920 */
uint F_00c83920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc83920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c837b0(param_1 + -4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c83930 */
uint F_00c83930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c83890(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c83940 */
uint F_00c83940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c838b0(param_1 + -0x8c);
  return uVar1;
}

/* ref: FUN_00c83950 */
uint F_00c83950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c837f0(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c83960 */
uint F_00c83960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc83960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c83870(param_1 + -4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c83970 */
uint F_00c83970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c83890(param_1 + -0x8c);
  return uVar1;
}

/* ref: FUN_00c83980 */
uint F_00c83980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c837d0(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c83990 */
uint F_00c83990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c85880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c839c0 */
uint F_00c839c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc839c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c82e80(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c839f0 */
uint F_00c839f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc839f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1128978));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128924));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1128900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x11288ec));
  F_00c82e80(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c83a60 */
unsigned int F_00c83a60(void)
{
  GEN_ENTER(0xc83a60u, 0u, 0u, 0u, 0u);
  LONG LVar1;
  
  LVar1 = gen_imp_InterlockedDecrement((LONG *)&REFG(undefined, 0x15d7648));
  if ((LVar1 == 0) && (REFG(undefined4, 0x15d7644) != (HMODULE)0x0)) {
    gen_imp_FreeLibrary(REFG(undefined4, 0x15d7644));
    REFG(undefined4, 0x15d7644) = (HMODULE)0x0;
  }
  return 0;
}

/* ref: FUN_00c83a90 */
uint F_00c83a90(void)
{
  GEN_ENTER(0xc83a90u, 0u, 0u, 0u, 0u);
  HMODULE pHVar1;
  
  pHVar1 = REFG(undefined4, 0x15d7644);
  if (REFG(undefined4, 0x15d7644) == (HMODULE)0x0) {
    pHVar1 = gen_imp_LoadLibraryA("OleAut32.dll");
  }
  REFG(undefined4, 0x15d7644) = pHVar1;
  return (uint)pHVar1;
}

/* ref: CUnknown_00c83ab0 */
uint F_00c83ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc83ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  gen_imp_InterlockedIncrement((LONG *)&REFG(undefined, 0x15d7648));
  pvVar1 = param_2;
  if (param_2 == (undefined *)0x0) {
    pvVar1 = this;
  }
  *(undefined * PTR32 *)((int)this + 4) = pvVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00c83ae0 */
uint F_00c83ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83ae0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = param_1;
  ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return 0;
}

/* ref: FUN_00c83b10 */
uint F_00c83b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83b10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[0]) == (*(int * PTR32 *)&gen_args[1])) {
    return 1;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]),&REFG(undefined, 0x1082374),&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]));
    uVar2 = ((code *)*(gen_code32 *)*piVar1)(piVar1,&REFG(undefined, 0x1082374),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar2) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
      return (uint)((*(int * PTR32 *)&gen_args[0]) == (*(int * PTR32 *)&gen_args[1]));
    }
  }
  return 0;
}

/* ref: CUnknown_00c83b90 */
uint F_00c83b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  
  gen_imp_InterlockedIncrement((LONG *)&REFG(undefined, 0x15d7648));
  pvVar1 = param_2;
  if (param_2 == (undefined *)0x0) {
    pvVar1 = this;
  }
  *(undefined * PTR32 *)((int)this + 4) = pvVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00c83bc0 */
uint F_00c83bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83bc0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1082374));
  if (uVar1 != 0) {
    *param_3 = param_1;
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}

/* ref: Client::System::Streaming::TextureRenderer::vf1 */
uint F_00c83c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  gen_imp_InterlockedIncrement((LONG *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf2 */
uint F_00c83c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  LONG * lpAddend;
  uint uVar1;
  
  lpAddend = param_1 + 2;
  uVar1 = gen_imp_InterlockedDecrement(lpAddend);
  if (uVar1 == 0) {
    *lpAddend = *lpAddend + 1;
    ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,1);
    return 0;
  }
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00c83ca0 */
uint F_00c83ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00c83cc0 */
uint F_00c83cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00c83ce0 */
uint F_00c83ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this - uVar2;
  *(int *)((int)this + 4) = (*(int *)((int)this + 4) - param_1[1]) - (uint)(uVar1 < uVar2);
  return (uint)this;
}

/* ref: FUN_00c83d40 */
byte F_00c83d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00c83d50 */
uint F_00c83d50(unsigned int gen_a0)
{
  GEN_ENTER(0xc83d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))(*(int * PTR32 *)((int)this + 0xc));
  return (uint)(uVar1 != *(uint *)((int)this + 0x10));
}

/* ref: FUN_00c83d70 */
uint F_00c83d70(unsigned int gen_a0)
{
  GEN_ENTER(0xc83d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8));
  return (uint)(uVar1 != *(uint *)((int)this + 0xc));
}

/* ref: FUN_00c83d90 */
uint F_00c83d90(unsigned int gen_a0)
{
  GEN_ENTER(0xc83d90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1c;
}

/* ref: FUN_00c83dc0 */
uint F_00c83dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)this;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)this = param_1;
  return param_1;
}

/* ref: FUN_00c83e00 */
uint F_00c83e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83e00u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  short * in_edx = (short *)(uintptr_t)gen_a1;
  int * in_edi = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = in_ecx;
  do {
    if (iVar2 == 0) {
LAB_00c83e21: ;
      uVar1 = 0x80070057;
LAB_00c83e26: ;
      if (in_edi != (int *)0x0) {
        if (-1 < (int)uVar1) {
          *in_edi = in_ecx - iVar2;
          return uVar1;
        }
        *in_edi = 0;
      }
      return uVar1;
    }
    if (*in_edx == 0) {
      if (iVar2 != 0) goto LAB_00c83e26;
      goto LAB_00c83e21;
    }
    in_edx = in_edx + 1;
    iVar2 = iVar2 + -1;
  } while( true );
}

/* ref: FUN_00c83e40 */
uint F_00c83e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83e40u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if ((in_ecx == 0) || (param_2 < in_ecx)) {
    uVar1 = 0x80070057;
  }
  return uVar1;
}

/* ref: FUN_00c83e60 */
uint F_00c83e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc83e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  iVar4 = 0;
  local_8 = 0;
  if (param_2 != 0) {
    iVar2 = param_4 - (int)param_1;
    iVar3 = param_5;
    do {
      if ((iVar3 == 0) || (sVar1 = *(short *)(iVar2 + (int)param_1), sVar1 == 0)) {
        if (param_2 != 0) goto LAB_00c83ea1;
        break;
      }
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  param_1 = param_1 + -1;
  iVar4 = iVar4 + -1;
  local_8 = 0x8007007a;
LAB_00c83ea1: ;
  *param_1 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4;
  }
  return local_8;
}

/* ref: FUN_00c83ec0 */
unsigned int F_00c83ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xc83ec0u, gen_a0, 0u, 0u, 0u);
  LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;
  gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),param_1);
  return 0;
}

/* ref: FUN_00c83ee0 */
uint F_00c83ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc83ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[3]);
  *(*(int * PTR32 *)&gen_args[3]) = 0;
  uVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085a58),(*(GEN_LPANY *)&gen_args[0]),1,(undefined *)&REFG(undefined, 0x1082374),&(*(int * PTR32 *)&gen_args[3]));
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[3]))))((*(int * PTR32 *)&gen_args[3]),&REFG(undefined, 0x1095c64),&(*(GEN_LPANY *)&gen_args[0]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(GEN_LPANY *)&gen_args[0])))) + (1) * 12))))))((*(GEN_LPANY *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(GEN_LPANY *)&gen_args[0])))) + 8))))))((*(GEN_LPANY *)&gen_args[0]));
    if (-1 < (int)uVar2) {
      *piVar1 = (int)(*(int * PTR32 *)&gen_args[3]);
      return 0;
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 8))))((*(int * PTR32 *)&gen_args[3]));
  return uVar2;
}

/* ref: FUN_00c83f70 */
unsigned int F_00c83f70(unsigned int gen_a0)
{
  GEN_ENTER(0xc83f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c83fa0 */
uint F_00c83fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83fa0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x10959f4));
  if (uVar1 != 0) {
    if (param_1 != 0) {
      uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
      return uVar1;
    }
    uVar1 = F_00c83ae0(0,param_3);
    return uVar1;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x11560a0));
  if (uVar1 == 0) {
    uVar1 = F_00c83bc0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c84040 */
uint F_00c84040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84040u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x14);
  param_2[1] = *(undefined8 *)(param_1 + 0x1c);
  return 0;
}

/* ref: FUN_00c84070 */
uint F_00c84070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84070u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_3 = *(undefined4 *)(param_1 + 4);
  return 0;
}

/* ref: FUN_00c840a0 */
uint F_00c840a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc840a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x24);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 8) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c840f0 */
uint F_00c840f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc840f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x24);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 4))))(*(int * PTR32 *)(param_1 + 8));
  }
  *param_2 = *(undefined4 *)(param_1 + 8);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c84140 */
uint F_00c84140(unsigned int gen_a0)
{
  GEN_ENTER(0xc84140u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x24);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 4) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseMediaFilter::Pause */
long F_00c84170(unsigned int gen_a0)
{
  GEN_ENTER(0xc84170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x24);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 4) = 1;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c841a0 */
uint F_00c841a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc841a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[9];
  gen_imp_EnterCriticalSection(lpCriticalSection);
  param_1[3] = param_2;
  param_1[4] = param_3;
  if (param_1[1] == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
    if ((int)uVar1 < 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
  }
  param_1[1] = 2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c84200 */
uint F_00c84200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x14) == 0) {
    return 0x80040213;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0xc))))(*(int * PTR32 *)((int)this + 0x14),param_1);
  if (-1 < (int)uVar2) {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar2 = *param_1;
    *param_1 = *param_1 - uVar1;
    param_1[1] = (param_1[1] - *(int *)((int)this + 0x1c)) - (uint)(uVar2 < uVar1);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c84240 */
uint F_00c84240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84240u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095a04));
  if (uVar1 != 0) {
LAB_00c84259: ;
    if (param_1 != 0) {
      uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
      return uVar1;
    }
    uVar1 = F_00c83ae0(0,param_3);
    return uVar1;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x10959f4));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x11560a0));
    if (uVar1 != 0) goto LAB_00c84259;
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095ab4));
    if (uVar1 == 0) {
      uVar1 = F_00c83bc0(param_1,param_2,param_3);
      return uVar1;
    }
    if (param_1 != 0) {
      uVar1 = F_00c83ae0(param_1 + 0x10,param_3);
      return uVar1;
    }
  }
  else if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c84310 */
unsigned int F_00c84310(unsigned int gen_a0)
{
  GEN_ENTER(0xc84310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  F_00406ad0(*(undefined4 *)((int)this + 0x3c));
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c84340 */
uint F_00c84340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x1c);
  param_2[1] = *(undefined8 *)(param_1 + 0x24);
  return 0;
}

/* ref: FUN_00c84370 */
uint F_00c84370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84370u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_3 = *(undefined4 *)(param_1 + 8);
  return 0;
}

/* ref: FUN_00c843a0 */
uint F_00c843a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc843a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0xc) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c843f0 */
uint F_00c843f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc843f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 4))))(*(int * PTR32 *)(param_1 + 0xc));
  }
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c84440 */
uint F_00c84440(unsigned int gen_a0)
{
  GEN_ENTER(0xc84440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x18))))(param_1 + -0xc);
    iVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x1c))))(param_1 + -0xc,iVar4)));
        if (piVar2 == (int *)0x0) break;
        if (((piVar2[6] != 0) && (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2), (int)uVar3 < 0)) &&
           (-1 < (int)local_8)) {
          local_8 = uVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return local_8;
}

/* ref: FUN_00c844d0 */
uint F_00c844d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc844d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x18))))(param_1 + -0xc);
    iVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x1c))))(param_1 + -0xc,iVar4)));
        if (piVar2 == (int *)0x0) break;
        if ((piVar2[6] != 0) && (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2), (int)uVar3 < 0)) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
          return uVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 1;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c84570 */
uint F_00c84570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84570u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xb];
  gen_imp_EnterCriticalSection(lpCriticalSection);
  param_1[5] = param_2;
  param_1[6] = param_3;
  if ((param_1[2] == 0) && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1), (int)uVar1 < 0)) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  if (param_1[2] != 2) {
    uVar1 = ((code *)*(gen_code32 *)(param_1[-3] + 0x18))(param_1 + -3);
    local_8 = 0;
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(param_1[-3] + 0x1c))(param_1 + -3,local_8)));
        if (piVar2 == (int *)0x0) break;
        if ((piVar2[6] != 0) &&
           (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,param_2,param_3), (int)uVar3 < 0)) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
          return uVar3;
        }
        local_8 = local_8 + 1;
      } while (local_8 < (int)uVar1);
    }
  }
  param_1[2] = 2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf4 */
uint F_00c84650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x18) == 0) {
    return 0x80040213;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0xc))))(*(int * PTR32 *)(this + 0x18),param_1);
  if (-1 < (int)uVar2) {
    uVar1 = *(uint *)(this + 0x20);
    uVar2 = *param_1;
    *param_1 = *param_1 - uVar1;
    param_1[1] = (param_1[1] - *(int *)(this + 0x24)) - (uint)(uVar2 < uVar1);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c84690 */
uint F_00c84690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84690u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  LPCWSTR param_2 = (LPCWSTR)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x18))))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x1c))))(iVar5);
      if (iVar3 == 0) break;
      iVar4 = gen_imp_lstrcmpW(*(LPCWSTR *)(iVar3 + 0x14),param_2);
      if (iVar4 == 0) {
        piVar1 = (int *)(iVar3 + 0xc);
        *param_3 = (int)piVar1;
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  *param_3 = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040216;
}

/* ref: FUN_00c846a5 */
uint F_00c846a5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc846a5u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ebp = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  LPCRITICAL_SECTION p_Var3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(in_ebp + 8);
  p_Var3 = *(LPCRITICAL_SECTION *)(iVar2 + 0x2c);
  *(LPCRITICAL_SECTION *)(in_ebp + 8) = p_Var3;
  gen_imp_EnterCriticalSection(p_Var3);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + -0xc) + 0x18))))(iVar2 + -0xc);
  iVar6 = 0;
  *(uint *)(in_ebp + -4) = uVar4;
  if (0 < (int)uVar4) {
    do {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + -0xc) + 0x1c))))(iVar2 + -0xc,iVar6);
      if (uVar4 == 0) break;
      iVar5 = gen_imp_lstrcmpW(*(LPCWSTR *)(uVar4 + 0x14),*(LPCWSTR *)(in_ebp + 0xc));
      if (iVar5 == 0) {
        piVar1 = (int *)(uVar4 + 0xc);
        **(int * PTR32 *)(in_ebp + 0x10) = (int)piVar1;
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        gen_imp_LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ebp + 8));
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ebp + -4));
  }
  p_Var3 = *(LPCRITICAL_SECTION *)(in_ebp + 8);
  **(undefined4 * PTR32 *)(in_ebp + 0x10) = 0;
  gen_imp_LeaveCriticalSection(p_Var3);
  return 0x80040216;
}

/* ref: FUN_00c84740 */
uint F_00c84740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0x80004001;
}

/* ref: FUN_00c84750 */
uint F_00c84750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc84750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x44);
  if (piVar1 == (int *)0x0) {
    return 0x80004001;
  }
  iVar3 = param_3;
  if (param_1 == 1) {
    iVar3 = (int)this + 0xc;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1,param_2,iVar3);
  return uVar2;
}

/* ref: FUN_00c84790 */
uint F_00c84790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x40) == 0) {
    return 0x80004002;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x40))))
                    (*(undefined4 * PTR32 *)((int)this + 0x40),&REFG(undefined, 0x1095bd4),&(*(int * PTR32 *)(gen_frame + 0x8)));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x4c))((*(int * PTR32 *)(gen_frame + 0x8)),param_1,param_2);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x20))))(*(int * PTR32 *)((int)this + 0x40),param_1);
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf5 */
uint F_00c84800(unsigned int gen_a0)
{
  GEN_ENTER(0xc84800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x48);
}

/* ref: FUN_00c84820 */
unsigned int F_00c84820(unsigned int gen_a0)
{
  GEN_ENTER(0xc84820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a54));
  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  F_00c8df10((undefined *)((int)this + 0x18));
  return 0;
}

/* ref: FUN_00c84840 */
uint F_00c84840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc84840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x10959b4));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1082374));
    if (uVar1 == 0) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  uVar1 = F_00c83ae0(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00c848a0 */
unsigned int F_00c848a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc848a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x14));
  return 0;
}

/* ref: FUN_00c848c0 */
uint F_00c848c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc848c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 5);
  if ((uVar1 == 0) && (param_1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,1);
  }
  return uVar1;
}

/* ref: FUN_00c848f0 */
uint F_00c848f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc848f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc));
  if (uVar1 != *(uint *)(param_1 + 0x10)) {
    return 0x80040203;
  }
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    return 1;
  }
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  return 0;
}

/* ref: FUN_00c84940 */
uint F_00c84940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc));
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x18))))(*(int * PTR32 *)(param_1 + 0xc));
  *(uint *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  F_00c8d780((undefined *)(param_1 + 0x18));
  return 0;
}

/* ref: FUN_00c84980 */
uint F_00c84980(unsigned int gen_a0)
{
  GEN_ENTER(0xc84980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc));
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x18))))(*(int * PTR32 *)(param_1 + 0xc));
  *(uint *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

/* ref: FUN_00c849d0 */
uint F_00c849d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc849d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x10959c4));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1082374));
    if (uVar1 == 0) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  uVar1 = F_00c83ae0(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00c84a30 */
unsigned int F_00c84a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x10));
  return 0;
}

/* ref: FUN_00c84a50 */
uint F_00c84a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 4);
  if ((uVar1 == 0) && (param_1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,1);
  }
  return uVar1;
}

/* ref: FUN_00c84a80 */
uint F_00c84a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc84a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (param_3 == (undefined4 *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0x80004003;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8));
  if (uVar3 != *(uint *)(param_1 + 0xc)) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0x80040203;
  }
  if (param_4 == (int *)0x0) {
    if (1 < param_2) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0x80070057;
    }
  }
  else {
    *param_4 = 0;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar3 = param_2;
  puVar1 = param_3;
  iVar2 = (*(int *)(gen_frame + 0xc));
  do {
    if (uVar3 == 0) {
LAB_00c84b90: ;
      if (param_4 != (int *)0x0) {
        *param_4 = iVar2;
      }
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (uint)(uVar3 != 0);
    }
    F_00c8e4a0(((undefined4 *)(gen_frame + 0x10)));
    iVar6 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar6 + 1;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x34))))(*(int * PTR32 *)(param_1 + 8),iVar6,((undefined4 *)(gen_frame + 0x10)));
    if (uVar4 != 0) {
LAB_00c84b88: ;
      F_00c8e460(((undefined4 *)(gen_frame + 0x10)));
      goto LAB_00c84b90;
    }
    puVar5 = gen_imp_CoTaskMemAlloc(0x48);
    *puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00c84b88;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
    puVar7 = ((undefined4 *)(gen_frame + 0x10));
    for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    uVar3 = uVar3 - 1;
    F_00c8e460(((undefined4 *)(gen_frame + 0x10)));
  } while( true );
}

/* ref: FUN_00c84bc0 */
uint F_00c84bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  if (param_2 == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8));
  if (uVar1 != *(uint *)(param_1 + 0xc)) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0x80040203;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  F_00c8e4a0(((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x34))))
                    (*(int * PTR32 *)(param_1 + 8),*(int *)(param_1 + 4) + -1,((undefined1 *)(gen_frame + 0x0)));
  F_00c8e460(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00c84c60 */
uint F_00c84c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8));
  *(uint *)(param_1 + 0xc) = uVar1;
  return 0;
}

/* ref: FUN_00c84c90 */
unsigned int F_00c84c90(unsigned int gen_a0)
{
  GEN_ENTER(0xc84c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c84cb0 */
uint F_00c84cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84cb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x10959a4));
  if (uVar1 != 0) {
    if (param_1 != 0) {
      uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
      return uVar1;
    }
    uVar1 = F_00c83ae0(0,param_3);
    return uVar1;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095b14));
  if (uVar1 == 0) {
    uVar1 = F_00c83bc0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0x10,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c84d50 */
uint F_00c84d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 4))(iVar1,*(int *)(param_1 + 0x28) + 0xc);
  return uVar2;
}

/* ref: FUN_00c84d70 */
uint F_00c84d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 8))(iVar1,*(int *)(param_1 + 0x28) + 0xc);
  return uVar2;
}

/* ref: FUN_00c84d90 */
uint F_00c84d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1);
  if ((int)uVar2 < 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,param_2);
  if (uVar2 == 0) {
    *(int * PTR32 *)((int)this + 0x18) = param_1;
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,param_2);
    if ((-1 < (int)uVar2) &&
       (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,(int)this + 0xc,param_2), -1 < (int)uVar2)) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,param_1);
      if (-1 < (int)uVar2) {
        return uVar2;
      }
      ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
    }
  }
  else if (((-1 < (int)uVar2) || (uVar2 == 0x80004005)) || (uVar2 == 0x80070057)) {
    uVar2 = 0x8004022a;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c84e60 */
uint F_00c84e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc84e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0x14))(param_3);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0xc))(param_3,1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
  if (uVar3 == 0) {
    do {
      if (((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) ||
         ((param_2 != 0 && (uVar3 = F_00c8e2c0((*(undefined * PTR32 *)(gen_frame + 0x8)),param_2), uVar3 == 0)))) {
        uVar3 = 0x80040207;
      }
      else {
        pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1);
        if ((int)uVar3 < 0) {
          ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
        }
        else {
          uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,pvVar2);
          if (uVar3 == 0) {
            *(int * PTR32 *)((int)this + 0x18) = param_1;
            ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
            uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,pvVar2);
            if ((-1 < (int)uVar3) &&
               (uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,(int)this + 0xc,pvVar2),
               -1 < (int)uVar3)) {
              uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,param_1);
              if (-1 < (int)uVar3) goto LAB_00c84fa2;
              ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
            }
          }
          else if (((-1 < (int)uVar3) || (uVar3 == 0x80004005)) || (uVar3 == 0x80070057)) {
            uVar3 = 0x8004022a;
          }
          ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
          piVar1 = *(int * PTR32 *)((int)this + 0x18);
          if (piVar1 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
            *(undefined4 *)((int)this + 0x18) = 0;
          }
        }
        if ((((int)uVar3 < 0) && (-1 < (int)(*(uint *)(gen_frame + 0x4)))) &&
           ((uVar3 != 0x80004005 && ((uVar3 != 0x80070057 && (uVar3 != 0x8004022a)))))) {
          (*(uint *)(gen_frame + 0x4)) = uVar3;
        }
      }
LAB_00c84fa2: ;
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
        F_00c8e650((*(undefined * PTR32 *)(gen_frame + 0x8)));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      }
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0xc))(param_3,1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
    } while (uVar3 == 0);
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      return (*(uint *)(gen_frame + 0x4));
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0x80040207;
  return 0x80040207;
}

/* ref: FUN_00c85000 */
uint F_00c85000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  if ((param_2 != (undefined *)0x0) && (uVar1 = F_00c8e280(param_2), uVar1 == 0)) {
    uVar1 = F_00c84d90(this,param_1,param_2);
    return uVar1;
  }
  (*(uint *)(gen_frame + 0x0)) = 0x80040207;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    if ((*(uint *)(gen_frame + 0x4)) == *(byte *)((int)this + 0x26)) {
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
    }
    else {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x30))))((int)this + 0xc,&(*(int * PTR32 *)(gen_frame + 0x8)));
    }
    if (-1 < (int)uVar1) {
      uVar1 = F_00c84e60(this,param_1,param_2,(*(int * PTR32 *)(gen_frame + 0x8)));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      if (-1 < (int)uVar1) {
        return 0;
      }
      if (((uVar1 != 0x80004005) && (uVar1 != 0x80070057)) && (uVar1 != 0x8004022a)) {
        (*(uint *)(gen_frame + 0x0)) = uVar1;
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
  } while ((int)(*(uint *)(gen_frame + 0x4)) < 2);
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c850e0 */
uint F_00c850e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc850e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00c850f0 */
uint F_00c850f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc850f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8e8d0((undefined *)((int)this + 0x34),param_1);
  return uVar1 & (-1 < (int)uVar1) - 1;
}

/* ref: FUN_00c85110 */
uint F_00c85110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[1]));
  return ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) - 1 & 0x80040208;
}

/* ref: FUN_00c85150 */
uint F_00c85150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85150u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  code * pcVar1;
  uint uVar2;
  
  if ((param_2 == (int *)0x0) || (param_3 == 0)) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc) != 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040204;
  }
  if ((*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x14))) != 0) && (*(char *)(param_1 + 0x19) == '\0')) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040224;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x28))))(param_1 + -0xc,param_2);
  if ((int)uVar2 < 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c))))(param_1 + -0xc);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x20))))(param_1 + -0xc,param_3);
  if (uVar2 == 0) {
    *(int * PTR32 *)(param_1 + 0xc) = param_2;
    ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x24))))(param_1 + -0xc,param_3);
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x30))))(param_1 + -0xc,param_2);
      if (-1 < (int)uVar2) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc));
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c)));
    *(undefined4 *)(param_1 + 0xc) = 0;
    (*pcVar1)(param_1 + -0xc);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c))))(param_1 + -0xc);
    if (((-1 < (int)uVar2) || (uVar2 == 0x80004005)) || (uVar2 == 0x80070057)) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0x8004022a;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}

/* ref: FUN_00c852b0 */
uint F_00c852b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc852b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1[6] == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1);
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(int *)param_1[6] + 8))((int *)param_1[6]);
      param_1[6] = 0;
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00c852f0 */
uint F_00c852f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc852f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  *param_2 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x80040209;
}

/* ref: FUN_00c85330 */
uint F_00c85330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85330u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc) != 0) {
    F_00c8e3b0(param_2,param_1 + 0x28);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  F_00c8e260(param_2);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040209;
}

/* ref: FUN_00c85390 */
uint F_00c85390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85390u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}

/* ref: FUN_00c853c0 */
uint F_00c853c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc853c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c89740(*(undefined4 *)(param_1 + 8),param_2);
  return uVar1;
}

/* ref: FUN_00c853e0 */
uint F_00c853e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc853e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x20))))(param_1 + -0xc,param_2);
  if ((int)uVar1 < 0) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00c85410 */
uint F_00c85410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0x8000ffff;
}

/* ref: FUN_00c85420 */
uint F_00c85420(unsigned int gen_a0)
{
  GEN_ENTER(0xc85420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_00c85450 */
uint F_00c85450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00c85470 */
uint F_00c85470(unsigned int gen_a0)
{
  GEN_ENTER(0xc85470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: CBasePin::SetSink */
long F_00c85480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x10);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c854b0 */
uint F_00c854b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc854b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  return 0x80004001;
}

/* ref: FUN_00c854c0 */
uint F_00c854c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, double gen_a5)
{
  GEN_ENTER(0xc854c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  double param_6 = (double)gen_a5;
  *(undefined4 *)(param_1 + 0x74) = param_2;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  *(double *)(param_1 + 0x84) = param_6;
  return 0;
}

/* ref: FUN_00c85520 */
uint F_00c85520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85520u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[1]));
  if ((*(int * PTR32 *)&gen_args[1]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) {
    return 0x80040208;
  }
  uVar2 = ((code *)*(gen_code32 *)*piVar1)(piVar1,&REFG(undefined, 0x1095aa4),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c);
  return uVar2 & (-1 < (int)uVar2) - 1;
}

/* ref: FUN_00c85570 */
uint F_00c85570(unsigned int gen_a0)
{
  GEN_ENTER(0xc85570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 8))))(*(int * PTR32 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  return 0;
}

/* ref: FUN_00c855d0 */
unsigned int F_00c855d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc855d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a1;
  gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),param_1);
  return 0;
}

/* ref: FUN_00c855f0 */
uint F_00c855f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc855f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *param_2 = 0;
  (*(undefined8 *)(gen_frame + 0x8)) = 0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,&(*(undefined8 *)(gen_frame + 0x8)));
  if ((int)(*(undefined8 *)(gen_frame + 0x10)) == 0) {
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = 1;
    (*(undefined8 *)(gen_frame + 0x10)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)),1);
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,param_2);
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,*param_2,&(*(undefined8 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*param_2,0);
      if (-1 < (int)uVar2) goto LAB_00c8566d;
    }
  }
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *param_2 = 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_2);
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,*param_2,&(*(undefined8 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*param_2,0);
      if (-1 < (int)uVar2) {
LAB_00c8566d: ;
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return 0;
      }
    }
  }
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *param_2 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00c85700 */
uint F_00c85700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc85700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (*(int *)((int)this + 0x98) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 0x1c))))
                      (*(int * PTR32 *)((int)this + 0x98),param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0x80004002;
}

/* ref: FUN_00c85740 */
uint F_00c85740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    return 0x80040209;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x18))))(*(int * PTR32 *)((int)this + 0x9c),param_1);
  return uVar1;
}

/* ref: FUN_00c85770 */
uint F_00c85770(unsigned int gen_a0)
{
  GEN_ENTER(0xc85770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x38))))(*(int * PTR32 *)((int)this + 0x18));
  return uVar1;
}

/* ref: FUN_00c857d0 */
uint F_00c857d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc857d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0x8000ffff;
}

/* ref: FUN_00c857e0 */
uint F_00c857e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc857e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0x8000ffff;
}

/* ref: FUN_00c857f0 */
uint F_00c857f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc857f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0x8000ffff;
}

/* ref: FUN_00c85840 */
uint F_00c85840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, double gen_a5)
{
  GEN_ENTER(0xc85840u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  double param_6 = (double)gen_a5;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0x44))))
                    (*(int * PTR32 *)(param_1 + 0x18),param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00c85880 */
unsigned int F_00c85880(unsigned int gen_a0)
{
  GEN_ENTER(0xc85880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c858c0 */
uint F_00c858c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc858c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095aa4));
  if (uVar1 == 0) {
    uVar1 = F_00c84cb0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0x98,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c85920 */
uint F_00c85920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  LPVOID * ppv;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x78);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  ppv = (LPVOID *)(param_1 + 4);
  if (*ppv == (LPVOID)0x0) {
    uVar1 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),ppv);
    if ((int)uVar1 < 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
  }
  *param_2 = *ppv;
  ((code *)*(gen_code32 *)(*(int *)*ppv + 4))(*ppv);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c859a0 */
uint F_00c859a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc859a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x78);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  *(int * PTR32 *)(param_1 + 4) = param_2;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(param_1 + 8) = (undefined1)param_3;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c85a00 */
uint F_00c85a00(unsigned int gen_a0)
{
  GEN_ENTER(0xc85a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 8))))(*(int * PTR32 *)((int)this + 0x9c));
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  return 0;
}

/* ref: FUN_00c85a40 */
uint F_00c85a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85a40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0x80004003;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + -0x98) + 0x38))))((*(int *)&gen_args[0]) + -0x98);
  if (uVar3 != 0) {
    return uVar3;
  }
  uVar3 = ((code *)*(gen_code32 *)*piVar2)(piVar2,&REFG(undefined, 0x1095a54),&(*(int * PTR32 *)&gen_args[1]));
  if ((int)uVar3 < 0) {
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x10) = 0x30;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x14) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x30) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x18) = 0;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 4;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 2;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 1;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,(*(int *)&gen_args[0]) + 0x20,(*(int *)&gen_args[0]) + 0x28);
    if (-1 < (int)uVar3) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 0x110;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2,(*(int *)&gen_args[0]) + 0x34);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 8;
    }
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(*(int *)&gen_args[0]) + 0x38);
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2);
    *(uint *)((*(int *)&gen_args[0]) + 0x1c) = uVar3;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    *(uint *)((*(int *)&gen_args[0]) + 0x3c) = uVar3;
  }
  else {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x4c))))((*(int * PTR32 *)&gen_args[1]),0x30,(*(int *)&gen_args[0]) + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  if (((*(byte *)((*(int *)&gen_args[0]) + 0x18) & 8) != 0) &&
     (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + -0x98) + 0x20))))
                        ((*(int *)&gen_args[0]) + -0x98,*(undefined4 *)((*(int *)&gen_args[0]) + 0x34)), uVar3 != 0)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + -0x8c) + 0x38)));
    *(undefined1 *)((*(int *)&gen_args[0]) + -0x74) = 1;
    (*pcVar1)(*(int *)((*(int *)&gen_args[0]) + -0x8c),(*(int *)&gen_args[0]) + -0x8c);
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + -0x70) + 0x44)));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3,0x8004022a,0);
    }
    return 0x80040200;
  }
  return 0;
}

/* ref: FUN_00c85bb0 */
uint F_00c85bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc85bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  *param_4 = 0;
  iVar2 = param_3;
  while( true ) {
    if (iVar2 < 1) {
      return 0;
    }
    iVar2 = iVar2 + -1;
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,*(undefined4 *)(param_2 + *param_4 * 4));
    if (uVar1 != 0) break;
    *param_4 = *param_4 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c85c00 */
uint F_00c85c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -0x70) + 0x18))))(*(int * PTR32 *)(param_1 + -0x70));
  iVar4 = 0;
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -0x70) + 0x1c))))(*(int * PTR32 *)(param_1 + -0x70),iVar5);
      if (uVar3 == 0) break;
      piVar1 = (int *)(uVar3 + 0xc);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0x24))))(*(int *)(uVar3 + 0xc),piVar1,&(*(int *)(gen_frame + 0x0)));
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (((*(int *)(gen_frame + 0x0)) == 1) &&
         (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,&(*(int * PTR32 *)(gen_frame + 0x8))), -1 < (int)uVar3)) {
        iVar4 = iVar4 + 1;
        uVar3 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x8)))((*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x1095aa4),&(*(int * PTR32 *)(gen_frame + 0x4)));
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
        if ((int)uVar3 < 0) {
          return 0;
        }
        uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x4)));
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
        if (uVar3 != 1) {
          return 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return (uint)(iVar4 != 0);
}

/* ref: CBaseInputPin::BeginFlush */
long F_00c85cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc85cd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c85d00 */
uint F_00c85d00(unsigned int gen_a0)
{
  GEN_ENTER(0xc85d00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c85d30 */
uint F_00c85d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc85d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  return (-(uint)(param_2 != 0) & 0x7fffbffd) + 0x80004003;
}

/* ref: FUN_00c85d80 */
uint F_00c85d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0x80004001;
}

/* ref: FUN_00c85d90 */
uint F_00c85d90(unsigned int gen_a0)
{
  GEN_ENTER(0xc85d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x14))) == 0) {
    return 0x80040227;
  }
  if (*(char *)(in_ecx + 0xa1) != '\0') {
    return 1;
  }
  return -(uint)(*(char *)(in_ecx + 0x24) != '\0') & 0x8004020b;
}

/* ref: FUN_00c85dc0 */
uint F_00c85dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x2c) != 0) {
    if (*(int *)((int)this + 0x28) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x28) + 0xc;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2c) + 0xc))))(*(int * PTR32 *)((int)this + 0x2c),iVar2);
    return uVar1;
  }
  uVar1 = 0x80040216;
  if (*(int *)((int)this + 0x18) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
              (*(undefined4 * PTR32 *)((int)this + 0x18),&REFG(undefined, 0x1095b14),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
      if (*(int *)((int)this + 0x28) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0x28) + 0xc;
      }
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),iVar2);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return uVar1;
}

/* ref: FUN_00c85eb0 */
uint F_00c85eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc85eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095a44));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095a54));
    if (uVar1 == 0) {
      uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1082374));
      if (uVar1 == 0) {
        *param_3 = 0;
        return 0x80004002;
      }
    }
  }
  uVar1 = F_00c83ae0(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00c85f20 */
unsigned int F_00c85f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x44));
  return 0;
}

/* ref: FUN_00c85f40 */
uint F_00c85f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[0x11] == 1) {
    param_1[0x11] = 0;
  }
  else {
    uVar1 = gen_imp_InterlockedDecrement(param_1 + 0x11);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  if ((*(byte *)(param_1 + 1) & 8) != 0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1,0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x10] = 0;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1[6] + 0xc) + 0x20))))((int *)(param_1[6] + 0xc),param_1);
  return 0;
}

/* ref: FUN_00c85fa0 */
uint F_00c85fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 < 0) {
    return 0x8004020d;
  }
  *(int *)((int)this + 0x14) = param_2;
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 0;
}

/* ref: FUN_00c85fd0 */
uint F_00c85fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}

/* ref: FUN_00c85ff0 */
uint F_00c85ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(param_1 + 0x14);
}

/* ref: FUN_00c86000 */
uint F_00c86000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc86000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 4) & 0x100) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
    param_2[1] = *(undefined4 *)(param_1 + 0x24);
    *param_3 = *(int *)(param_1 + 0x28);
    param_3[1] = *(int *)(param_1 + 0x2c);
    return 0;
  }
  if ((*(uint *)(param_1 + 4) & 0x10) == 0) {
    return 0x80040249;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  *param_3 = uVar1 + 1;
  param_3[1] = iVar2 + (uint)(0xfffffffe < uVar1);
  return 0x40270;
}

/* ref: FUN_00c86070 */
uint F_00c86070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc86070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeef;
    return 0;
  }
  if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x24) = param_2[1];
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff | 0x10;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = param_2[1];
  *(undefined4 *)(param_1 + 0x28) = *param_3;
  uVar1 = param_3[1];
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x110;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return 0;
}

/* ref: FUN_00c860e0 */
uint F_00c860e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc860e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 4) & 0x20) == 0) {
    return 0x80040251;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x34);
  *param_3 = uVar1 + *(uint *)(param_1 + 0x30);
  param_3[1] = ((int)uVar1 >> 0x1f) + iVar3 + (uint)CARRY4(uVar1,uVar2);
  return 0;
}

/* ref: FUN_00c86120 */
uint F_00c86120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc86120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    return 0;
  }
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  *(int *)(param_1 + 0x30) = *param_2;
  *(int *)(param_1 + 0x34) = param_2[1];
  iVar1 = *param_3;
  iVar2 = *param_2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
  *(int *)(param_1 + 0x38) = iVar1 - iVar2;
  return 0;
}

/* ref: FUN_00c86170 */
uint F_00c86170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (byte)~*(byte *)(param_1 + 4) & 1;
}

/* ref: FUN_00c86190 */
uint F_00c86190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00c861b0 */
uint F_00c861b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc861b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (byte)~*(byte *)(param_1 + 4) >> 2 & 1;
}

/* ref: FUN_00c861d0 */
uint F_00c861d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc861d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
  return 0;
}

/* ref: FUN_00c861f0 */
uint F_00c861f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc861f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (byte)~*(byte *)(param_1 + 4) >> 1 & 1;
}

/* ref: FUN_00c86210 */
uint F_00c86210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  return 0;
}

/* ref: FUN_00c86230 */
uint F_00c86230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(param_1 + 0x10);
}

/* ref: FUN_00c86240 */
uint F_00c86240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((param_2 <= *(int *)(param_1 + 0x14)) && (-1 < param_2)) {
    *(int *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 0x8004020d;
}

/* ref: FUN_00c86270 */
uint F_00c86270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((*(byte *)(param_1 + 4) & 8) == 0) {
    *param_2 = 0;
    return 1;
  }
  uVar1 = F_00c8e6a0(*(undefined4 *)(param_1 + 0x3c));
  *param_2 = uVar1;
  return (-(uint)(uVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: FUN_00c862b0 */
uint F_00c862b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc862b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    F_00c8e650(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    return 0;
  }
  uVar1 = F_00c8e6a0(param_2);
  *(uint *)(param_1 + 0x3c) = uVar1;
  if (uVar1 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    return 0x8007000e;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  return 0;
}

/* ref: FUN_00c86310 */
uint F_00c86310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc86310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      return 0x80004003;
    }
    uVar1 = param_2;
    if (0x2f < param_2) {
      uVar1 = 0x30;
    }
    (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 4) & 0xffffffdf;
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 8);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(param_1 + 0xc);
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(param_1 + 0x14);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 0x10);
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_1 + 0x20);
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_1 + 0x24);
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(param_1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(param_1 + 0x2c);
    (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(param_1 + 0x40);
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    if ((*(uint *)(param_1 + 4) & 8) == 0) {
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(param_1 + 0x3c);
    }
    F_00c46aa0(param_3,&(*(uint *)(gen_frame + 0xc)),uVar1);
  }
  return 0;
}

/* ref: FUN_00c863c0 */
uint F_00c863c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc863c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  if (3 < param_2) {
    if (param_3 == (uint *)0x0) {
      return 0x80004003;
    }
    uVar1 = *param_3;
    uVar2 = param_2;
    if (uVar1 < param_2) {
      uVar2 = uVar1;
    }
    if (((((0x30 < uVar2) || (0x30 < uVar1)) ||
         ((0xb < uVar2 &&
          (((param_3[2] & 0xfffffe20) != 0 ||
           ((((param_3[2] & 0x10) != 0 && ((*(byte *)(param_1 + 4) & 0x10) == 0)) && (uVar2 < 0x20))
           )))))) ||
        (((0x2b < uVar2 && (param_3[10] != 0)) && (param_3[10] != *(uint *)(param_1 + 0xc))))) ||
       ((0x2f < uVar2 &&
        (((uVar1 = param_3[0xb], uVar1 != 0 && (uVar1 != *(uint *)(param_1 + 0x14))) ||
         ((0xf < uVar2 && ((int)uVar1 < (int)param_3[3])))))))) {
      return 0x80070057;
    }
    if ((0x27 < uVar2) && ((param_3[2] & 8) != 0)) {
      if (param_3[9] == 0) {
        return 0x80004003;
      }
      local_8 = F_00c8e6a0(param_3[9]);
      if (local_8 == 0) {
        return 0x8007000e;
      }
    }
    if (0x23 < uVar2) {
      *(uint *)(param_1 + 0x40) = param_3[8];
    }
    if (uVar2 < 0xc) {
      if (7 < uVar2) {
        *(uint *)(param_1 + 8) = param_3[1];
      }
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x20 | param_3[2];
      *(uint *)(param_1 + 8) = param_3[1];
    }
    if (0xf < uVar2) {
      *(uint *)(param_1 + 0x10) = param_3[3];
    }
    if (0x1f < uVar2) {
      *(uint *)(param_1 + 0x28) = param_3[6];
      *(uint *)(param_1 + 0x2c) = param_3[7];
    }
    if (0x17 < uVar2) {
      *(uint *)(param_1 + 0x20) = param_3[4];
      *(uint *)(param_1 + 0x24) = param_3[5];
    }
    if ((0x27 < uVar2) && ((param_3[2] & 8) != 0)) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        F_00c8e650(*(int *)(param_1 + 0x3c));
      }
      *(uint *)(param_1 + 0x3c) = local_8;
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
      return 0;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  }
  return 0;
}

/* ref: FUN_00c86550 */
unsigned int F_00c86550(unsigned int gen_a0)
{
  GEN_ENTER(0xc86550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1128b60));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[18])REFP(0x1128b18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128b00));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[4])REFP(0x1128af0));
  if (*(int *)((int)this + 0xbc) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 0xbc));
  }
  if (*(int *)((int)this + 0xc0) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 0xc0));
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c865f0 */
uint F_00c865f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc865f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1096124));
  if (uVar1 == 0) {
    uVar1 = F_00c84cb0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0xa0,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c86650 */
uint F_00c86650(unsigned int gen_a0)
{
  GEN_ENTER(0xc86650u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c))))(param_1 + -0xc);
  if ((int)uVar1 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c866c0 */
unsigned int F_00c866c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc866c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_ResetEvent(*(HANDLE *)((int)this + 0xbc));
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0xc0));
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0xc0));
  *(undefined4 *)((int)this + 0xc4) = 2;
  *(undefined4 *)((int)this + 0xc0) = 0;
  return 0;
}

/* ref: FUN_00c86700 */
uint F_00c86700(unsigned int gen_a0)
{
  GEN_ENTER(0xc86700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xa4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0xc4) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  gen_imp_SetEvent(*(undefined4 *)((int)this + 0xbc));
  if (*(int *)((int)this + 0xc0) != 0) {
    gen_imp_SetEvent(*(int *)((int)this + 0xc0));
    gen_imp_CloseHandle(*(HANDLE *)((int)this + 0xc0));
  }
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86780 */
uint F_00c86780(unsigned int gen_a0)
{
  GEN_ENTER(0xc86780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xa4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)((int)this + 0xc4);
  while( true ) {
    if (iVar1 != 2) {
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 1;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    (*(HANDLE *)(gen_frame + 0x4)) = *(HANDLE *)((int)this + 0xbc);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0xd0);
    DVar2 = gen_imp_WaitForMultipleObjects(2,&(*(HANDLE *)(gen_frame + 0x4)),0,0xffffffff);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (DVar2 != 0) break;
    iVar1 = *(int *)((int)this + 0xc4);
  }
  if (DVar2 != 1) {
    if (DVar2 == 0xffffffff) {
      uVar3 = F_00c89410();
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar3;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x8000ffff;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040223;
}

/* ref: FUN_00c86840 */
unsigned int F_00c86840(unsigned int gen_a0)
{
  GEN_ENTER(0xc86840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  piVar1 = (int *)((int)this + 0xcc);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)((int)this + 0xc4) != 0)) {
    F_00c866c0(this);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  return 0;
}

/* ref: FUN_00c86880 */
byte F_00c86880(unsigned int gen_a0)
{
  GEN_ENTER(0xc86880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  iVar1 = *(int *)((int)this + 0xcc);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  return iVar1 != 0;
}

