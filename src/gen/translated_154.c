#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FID_conflict___atoflt_l_00c7a805 */
GEN_LIB GEN_NOFRAME int F_00c7a805(GEN_P(undefined * _Result, unsigned int gen_a0), GEN_P(char * _Str, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2))
{
  GEN_ENTER(0xc7a805u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _Result = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x2c, 4);
  uint uVar1;
  undefined4 IVar2;
  
  (*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  F_00c483ca(((undefined *)(gen_frame + 0x4)) GEN_EDX_ARG,_Locale);
  uVar1 = F_00c63c8d(((undefined *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)),_Str,0,0,0,0,((undefined *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  IVar2 = F_00c7c314(((undefined *)(gen_frame + 0x18)),(undefined *)_Result);
  if (((*(uint *)(gen_frame + 0x14)) & 3) == 0) {
    if (IVar2 == (1)) {
LAB_00c7a85e: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x4)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) & 0xfffffffd;
      }
      return 3;
    }
    if (IVar2 != (2)) {
LAB_00c7a890: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x4)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) & 0xfffffffd;
      }
      return 0;
    }
  }
  else if (((*(uint *)(gen_frame + 0x14)) & 1) == 0) {
    if (((*(uint *)(gen_frame + 0x14)) & 2) == 0) goto LAB_00c7a890;
    goto LAB_00c7a85e;
  }
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x4)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) & 0xfffffffd;
  }
  return 4;
}

/* ref: FID_conflict___atodbl_00c7a8ad */
GEN_LIB GEN_NOFRAME int F_00c7a8ad(GEN_P(undefined * _Result, unsigned int gen_a0), GEN_P(char * _Str, unsigned int gen_a1))
{
  GEN_ENTER(0xc7a8adu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * _Result = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str = (char *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7a805(_Result,_Str,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: __atoldbl_l */
GEN_LIB GEN_NOFRAME int F_00c7a8c4(GEN_P(undefined * _Result, unsigned int gen_a0), GEN_P(char * _Str, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2))
{
  GEN_ENTER(0xc7a8c4u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _Result = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x2c, 4);
  uint uVar1;
  undefined4 IVar2;
  
  (*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  F_00c483ca(((undefined *)(gen_frame + 0x4)) GEN_EDX_ARG,_Locale);
  uVar1 = F_00c63c8d(((undefined *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)),_Str,1,0,0,0,((undefined *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  IVar2 = F_00c7cdb6(((undefined *)(gen_frame + 0x18)),_Result);
  if (((*(uint *)(gen_frame + 0x14)) & 3) == 0) {
    if (IVar2 == (1)) {
LAB_00c7a91e: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x4)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) & 0xfffffffd;
      }
      return 3;
    }
    if (IVar2 != (2)) {
LAB_00c7a950: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x4)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) & 0xfffffffd;
      }
      return 0;
    }
  }
  else if (((*(uint *)(gen_frame + 0x14)) & 1) == 0) {
    if (((*(uint *)(gen_frame + 0x14)) & 2) == 0) goto LAB_00c7a950;
    goto LAB_00c7a91e;
  }
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x4)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) & 0xfffffffd;
  }
  return 4;
}

/* ref: __atoldbl */
GEN_LIB GEN_NOFRAME int F_00c7a96d(GEN_P(undefined * _Result, unsigned int gen_a0), GEN_P(char * _Str, unsigned int gen_a1))
{
  GEN_ENTER(0xc7a96du, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * _Result = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str = (char *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7a8c4(_Result,_Str,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: FID_conflict___atoflt_l_00c7a984 */
GEN_LIB GEN_NOFRAME int F_00c7a984(GEN_P(undefined * _Result, unsigned int gen_a0), GEN_P(char * _Str, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2))
{
  GEN_ENTER(0xc7a984u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _Result = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x2c, 4);
  uint uVar1;
  undefined4 IVar2;
  
  (*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  F_00c483ca(((undefined *)(gen_frame + 0x4)) GEN_EDX_ARG,_Locale);
  uVar1 = F_00c63c8d(((undefined *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)),_Str,0,0,0,0,((undefined *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  IVar2 = F_00c7c865(((undefined *)(gen_frame + 0x18)),_Result);
  if (((*(uint *)(gen_frame + 0x14)) & 3) == 0) {
    if (IVar2 == (1)) {
LAB_00c7a9dd: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x4)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) & 0xfffffffd;
      }
      return 3;
    }
    if (IVar2 != (2)) {
LAB_00c7aa0f: ;
      if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x4)) + 12))) != false) {
        (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) & 0xfffffffd;
      }
      return 0;
    }
  }
  else if (((*(uint *)(gen_frame + 0x14)) & 1) == 0) {
    if (((*(uint *)(gen_frame + 0x14)) & 2) == 0) goto LAB_00c7aa0f;
    goto LAB_00c7a9dd;
  }
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x4)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 112))))) & 0xfffffffd;
  }
  return 4;
}

/* ref: FID_conflict___atodbl_00c7aa2c */
GEN_LIB GEN_NOFRAME int F_00c7aa2c(GEN_P(undefined * _Result, unsigned int gen_a0), GEN_P(char * _Str, unsigned int gen_a1))
{
  GEN_ENTER(0xc7aa2cu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * _Result = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str = (char *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7a984(_Result,_Str,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: __set_output_format */
GEN_LIB GEN_NOFRAME uint F_00c7aa43(GEN_P(uint _Format, unsigned int gen_a0))
{
  GEN_ENTER(0xc7aa43u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _Format = (uint)gen_a0;)
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
GEN_LIB GEN_NOFRAME int F_00c7aa7b(GEN_P(char * _Buf, unsigned int gen_a0), GEN_P(gen_size32 _SizeInBytes, unsigned int gen_a1), GEN_P(int _Digits, unsigned int gen_a2), GEN_P(undefined * _PtFlt, unsigned int gen_a3))
{
  GEN_ENTER(0xc7aa7bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * _Buf = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _SizeInBytes = (gen_size32)gen_a1;)
  GEN_PIN(int _Digits = (int)gen_a2;)
  GEN_PIN(undefined * _PtFlt = (undefined *)(uintptr_t)gen_a3;)
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
  if ((_Buf == ((char *)GEN_TOP(0x0))) || (_SizeInBytes == 0)) {
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
      for (iVar1 = _Digits; 0 < iVar1; iVar1 = iVar1 - 1) {
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
        while (pcVar3 = pcVar3 - 1, *pcVar3 == '9') {
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
GEN_LIB GEN_NOFRAME unsigned int F_00c7ab2e(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7ab2eu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint local_8;
  
  uVar1 = *((ushort *)GEN_TOP(((int)param_2 + 6))) >> 4;
  uVar2 = *((ushort *)GEN_TOP(((int)param_2 + 6))) & 0x8000;
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
GEN_LIB GEN_NOFRAME uint F_00c7abe1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc7abe1u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  GEN_FRAME_DECL(0x50, 0);
  int * piVar1;
  int iVar2;
  uint uVar3;
  int eVar4;
  undefined2 uVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  uVar5 = (undefined2)((uint)(*((undefined4 *)GEN_TOP((gen_frame + 0x0)))) >> 0x10);
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(int *)(gen_frame + 0x28)) = (*(int *)&gen_args[3]);
  F_00c7ab2e(&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)&gen_args[0]));
  uVar3 = F_00c7ed8d((*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),CONCAT22(uVar5,(*(undefined2 *)(gen_frame + 0x24))),0x11,0,&(*(short *)(gen_frame + 0x2c)));
  iVar2 = (*(int *)(gen_frame + 0x28));
  piVar1[2] = uVar3;
  *piVar1 = (int)(*(char *)(gen_frame + 0x2e));
  piVar1[1] = (int)(*(short *)(gen_frame + 0x2c));
  eVar4 = F_00c49908((*(int *)(gen_frame + 0x28)),(*(undefined4 *)&gen_args[4]),((undefined1 *)(gen_frame + 0x30)));
  if (eVar4 == 0) {
    piVar1[3] = iVar2;
    return (uint)piVar1;
  }
                    
  F_00c4c299(0,0,0,0,0);
}

/* ref: __alldvrm */
GEN_LIB GEN_NOFRAME ulonglong GEN_STDCALL F_00c7ac70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc7ac70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
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
      iVar5 = iVar5 - 1;
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
GEN_LIB GEN_NOFRAME unsigned int F_00c7ad4f(void)
{
  GEN_ENTER(0xc7ad4fu, 0u, 0u, 0u, 0u);
                    
  F_00c47ca5(2);
}

/* ref: __controlfp_s */
GEN_LIB GEN_NOFRAME int F_00c7ad58(GEN_P(uint * _CurrentState, unsigned int gen_a0), GEN_P(uint _NewValue, unsigned int gen_a1), GEN_P(uint _Mask, unsigned int gen_a2))
{
  GEN_ENTER(0xc7ad58u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * _CurrentState = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint _NewValue = (uint)gen_a1;)
  GEN_PIN(uint _Mask = (uint)gen_a2;)
  uint uVar1;
  int * piVar2;
  int eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == ((uint *)GEN_TOP(0x0))) {
      F_00c8010c(_NewValue,uVar1);
    }
    else {
      uVar1 = F_00c8010c(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != ((uint *)GEN_TOP(0x0))) {
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
GEN_LIB GEN_NOFRAME int F_00c7adb7(GEN_P(int _FileHandle, unsigned int gen_a0))
{
  GEN_ENTER(0xc7adb7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int _FileHandle = (int)gen_a0;)
  int * piVar1;
  
  if (_FileHandle == -2) {
    piVar1 = F_00c51f85();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < REFG(undefined4, 0x15e4190))) {
      return (int)*((char *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(_FileHandle >> 5)] + 4 + (_FileHandle & 0x1fU) * 0x40))) &
             0x40;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 9;
    F_00c4c305();
  }
  return 0;
}

/* ref: __wctomb_s_l */
GEN_LIB GEN_NOFRAME int F_00c7ae0d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc7ae0du, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  GEN_FRAME_DECL(0x14, 12);
  char * lpMultiByteStr;
  gen_size32 _Size;
  int iVar1;
  int * piVar2;
  DWORD DVar3;
  
  _Size = (*(gen_size32 *)&gen_args[2]);
  lpMultiByteStr = (*(char * PTR32 *)&gen_args[1]);
  if (((*(char * PTR32 *)&gen_args[1]) == ((char *)GEN_TOP(0x0))) && ((*(gen_size32 *)&gen_args[2]) != 0)) {
    if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
      *(*(int * PTR32 *)&gen_args[0]) = 0;
    }
LAB_00c7ae31: ;
    iVar1 = 0;
  }
  else {
    if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
      *(*(int * PTR32 *)&gen_args[0]) = -1;
    }
    if (0x7fffffff < (*(gen_size32 *)&gen_args[2])) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
      return 0x16;
    }
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[4]));
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0x14))) == 0) {
      if ((ushort)(*(wchar_t *)&gen_args[3]) < 0x100) {
        if (lpMultiByteStr != ((char *)GEN_TOP(0x0))) {
          if (_Size == 0) goto LAB_00c7aebd;
          *lpMultiByteStr = (char)(*(wchar_t *)&gen_args[3]);
        }
        if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
          *(*(int * PTR32 *)&gen_args[0]) = 1;
        }
LAB_00c7aeec: ;
        if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c7ae31;
      }
      if ((lpMultiByteStr != ((char *)GEN_TOP(0x0))) && (_Size != 0)) {
        F_00c48350(lpMultiByteStr,0,_Size);
      }
    }
    else {
      (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(0x0));
      iVar1 = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 4))),0,&(*(wchar_t *)&gen_args[3]),1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&(*(char * PTR32 *)&gen_args[1]));
      if (iVar1 == 0) {
        DVar3 = gen_imp_GetLastError();
        if (DVar3 == 0x7a) {
          if ((lpMultiByteStr != ((char *)GEN_TOP(0x0))) && (_Size != 0)) {
            F_00c48350(lpMultiByteStr,0,_Size);
          }
LAB_00c7aebd: ;
          piVar2 = F_00c51f85();
          *piVar2 = 0x22;
          F_00c4c305();
          if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
            return 0x22;
          }
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
          return 0x22;
        }
      }
      else if ((*(char * PTR32 *)&gen_args[1]) == ((char *)GEN_TOP(0x0))) {
        if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
          *(*(int * PTR32 *)&gen_args[0]) = iVar1;
        }
        goto LAB_00c7aeec;
      }
    }
    piVar2 = F_00c51f85();
    *piVar2 = 0x2a;
    piVar2 = F_00c51f85();
    iVar1 = *piVar2;
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar1;
}

/* ref: _wctomb_s */
GEN_LIB GEN_NOFRAME int F_00c7af62(GEN_P(int * _SizeConverted, unsigned int gen_a0), GEN_P(char * _MbCh, unsigned int gen_a1), GEN_P(gen_size32 _SizeInBytes, unsigned int gen_a2), GEN_P(wchar_t _WCh, unsigned int gen_a3))
{
  GEN_ENTER(0xc7af62u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * _SizeConverted = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _MbCh = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _SizeInBytes = (gen_size32)gen_a2;)
  GEN_PIN(wchar_t _WCh = (wchar_t)gen_a3;)
  int eVar1;
  
  eVar1 = F_00c7ae0d(_SizeConverted,_MbCh,_SizeInBytes,_WCh,((undefined *)GEN_TOP(0x0)));
  return eVar1;
}

/* ref: __wctomb_l */
GEN_LIB GEN_NOFRAME int F_00c7af7f(GEN_P(char * _MbCh, unsigned int gen_a0), GEN_P(wchar_t _WCh, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2))
{
  GEN_ENTER(0xc7af7fu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * _MbCh = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t _WCh = (wchar_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x18, 8);
  int eVar1;
  int iVar2;
  
  (*(int *)(gen_frame + 0x10)) = -1;
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  eVar1 = F_00c7ae0d(&(*(int *)(gen_frame + 0x10)),_MbCh,*((gen_size32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xac))),_WCh,(undefined *)((byte *)(gen_frame + 0x0)));
  iVar2 = (*(int *)(gen_frame + 0x10));
  if (eVar1 != 0) {
    iVar2 = -1;
  }
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar2;
}

/* ref: _wctomb */
GEN_LIB GEN_NOFRAME int F_00c7afd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7afd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL(0x8, 8);
  gen_size32 _SizeInBytes;
  int eVar1;
  undefined2 in_stack_0000000a = 0;
  undefined * _Locale;
  
  (*(int *)(gen_frame + 0x0)) = -1;
  _Locale = ((undefined *)GEN_TOP(0x0));
  _SizeInBytes = F_00c54b3c(*(undefined4 *)&(*(wchar_t *)&gen_args[1]),0);
  eVar1 = F_00c7ae0d(&(*(int *)(gen_frame + 0x0)),(*(char * PTR32 *)&gen_args[0]),_SizeInBytes,(wchar_t)*(undefined4 *)&(*(wchar_t *)&gen_args[1]),_Locale);
  if (eVar1 == 0) {
    return (*(int *)(gen_frame + 0x0));
  }
  return -1;
}

/* ref: __fputwc_nolock */
GEN_LIB GEN_NOFRAME uint F_00c7b002(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b002u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined * puVar4;
  int eVar5;
  wchar_t _WCh;
  
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10);
  _WCh = (wchar_t)param_1;
  if (((*(int *)(((char *)(param_2) + 12))) & 0x40) == 0) {
    iVar2 = F_00c5d07b(param_2);
    if ((iVar2 == -1) || (iVar2 = F_00c5d07b(param_2), iVar2 == -2)) {
      puVar4 = &REFG(undefined, 0x134b280);
    }
    else {
      iVar2 = F_00c5d07b(param_2);
      uVar3 = F_00c5d07b(param_2);
      puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2 >> 5)])));
    }
    if ((puVar4[0x24] & 0x7f) != 2) {
      iVar2 = F_00c5d07b(param_2);
      if ((iVar2 == -1) || (iVar2 = F_00c5d07b(param_2), iVar2 == -2)) {
        puVar4 = &REFG(undefined, 0x134b280);
      }
      else {
        iVar2 = F_00c5d07b(param_2);
        uVar3 = F_00c5d07b(param_2);
        puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2 >> 5)])));
      }
      if ((puVar4[0x24] & 0x7f) != 1) {
        iVar2 = F_00c5d07b(param_2);
        if ((iVar2 == -1) || (iVar2 = F_00c5d07b(param_2), iVar2 == -2)) {
          puVar4 = &REFG(undefined, 0x134b280);
        }
        else {
          iVar2 = F_00c5d07b(param_2);
          uVar3 = F_00c5d07b(param_2);
          puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2 >> 5)])));
        }
        if ((puVar4[4] & 0x80) != 0) {
          eVar5 = F_00c7af62(&(*(int *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)),5,_WCh);
          if (eVar5 != 0) {
            return 0xffff;
          }
          iVar2 = 0;
          uVar3 = 0;
          if (0 < (*(int *)(gen_frame + 0x0))) {
            do {
              piVar1 = &(*(int *)(((char *)(param_2) + 4)));
              *piVar1 = *piVar1 - 1;
              if (*piVar1 < 0) {
                uVar3 = F_00c567c4((int)((char *)(gen_frame + 0x4))[(int)(iVar2)],param_2);
              }
              else {
                *(*(char * PTR32 *)((char *)(param_2))) = ((char *)(gen_frame + 0x4))[(int)(iVar2)];
                uVar3 = (uint)(byte)*(*(char * PTR32 *)((char *)(param_2)));
                (*(char * PTR32 *)((char *)(param_2))) = (*(char * PTR32 *)((char *)(param_2))) + 1;
              }
              if (uVar3 == 0xffffffff) {
                return 0xffff;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (*(int *)(gen_frame + 0x0)));
          }
          return CONCAT22((short)(uVar3 >> 0x10),_WCh);
        }
      }
    }
  }
  piVar1 = &(*(int *)(((char *)(param_2) + 4)));
  *piVar1 = *piVar1 - 2;
  if (*piVar1 < 0) {
    uVar3 = F_00c80733(param_1 & 0xffff,param_2);
  }
  else {
    *(wchar_t *)(*(char * PTR32 *)((char *)(param_2))) = _WCh;
    (*(char * PTR32 *)((char *)(param_2))) = (*(char * PTR32 *)((char *)(param_2))) + 2;
    uVar3 = param_1;
  }
  return uVar3;
}

/* ref: _fputwc */
GEN_LIB GEN_NOFRAME uint F_00c7b189(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7b189u, gen_a0, gen_a1, 0u, 0u);
  GEN_FRAME_DECL(0x3c, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pFVar1;
  int * piVar2;
  uint uVar3;
  
  pFVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6ae8);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc7b195;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6ae8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    uVar3 = 0xffff;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[1]));
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
    uVar3 = F_00c7b002((*(undefined4 *)&gen_args[0]),pFVar1);
    (*(uint *)(gen_frame + 0x10)) = uVar3 & 0xffff;
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
    uVar3 = F_00c7b1ef((gen_frame + 0x2c));
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),(undefined2)(*(uint *)(gen_frame + 0x10)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_00c7b1ef */
GEN_LIB GEN_NOFRAME uint F_00c7b1ef(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b1efu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(*((undefined * PTR32 *)GEN_TOP((in_ebp + 0xc))));
  return extraout_EAX;
}

/* ref: FUN_00c7b1f9 */
GEN_LIB GEN_NOFRAME uint F_00c7b1f9(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b1f9u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c7b189(param_1,param_2);
  return uVar1;
}

/* ref: __mbtowc_l */
GEN_LIB GEN_NOFRAME int F_00c7b204(GEN_P(wchar_t * _DstCh, unsigned int gen_a0), GEN_P(char * _SrcCh, unsigned int gen_a1), GEN_P(gen_size32 _SrcSizeInBytes, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3))
{
  GEN_ENTER(0xc7b204u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _DstCh = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _SrcCh = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _SrcSizeInBytes = (gen_size32)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  int iVar2;
  int * piVar3;
  
  if ((_SrcCh != ((char *)GEN_TOP(0x0))) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0x14))) != 0) {
        iVar1 = F_00c6dfe8((uint)(byte)*_SrcCh,(undefined *)((byte *)(gen_frame + 0x0)));
        if (iVar1 == 0) {
          iVar1 = gen_imp_MultiByteToWideChar(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 4))),9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != ((wchar_t *)GEN_TOP(0x0))));
          if (iVar1 != 0) goto LAB_00c7b252;
        }
        else {
          iVar1 = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xac)));
          iVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
          if ((((1 < iVar1) && (iVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar1 = gen_imp_MultiByteToWideChar(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 4))),9,_SrcCh,iVar1,_DstCh,
                                           (uint)(_DstCh != ((wchar_t *)GEN_TOP(0x0)))), iVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),
              iVar1 != 0)) || ((*((uint *)GEN_TOP((iVar2 + 0xac))) <= _SrcSizeInBytes && (_SrcCh[1] != '\0'))))
          {
            iVar1 = *((int *)GEN_TOP((iVar2 + 0xac)));
            if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
              return iVar1;
            }
            *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
            return iVar1;
          }
        }
        piVar3 = F_00c51f85();
        *piVar3 = 0x2a;
        if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != ((wchar_t *)GEN_TOP(0x0))) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_00c7b252: ;
      if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != ((wchar_t *)GEN_TOP(0x0))) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}

/* ref: _mbtowc */
GEN_LIB GEN_NOFRAME int F_00c7b31a(GEN_P(wchar_t * _DstCh, unsigned int gen_a0), GEN_P(char * _SrcCh, unsigned int gen_a1), GEN_P(gen_size32 _SrcSizeInBytes, unsigned int gen_a2))
{
  GEN_ENTER(0xc7b31au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _DstCh = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _SrcCh = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _SrcSizeInBytes = (gen_size32)gen_a2;)
  int iVar1;
  
  iVar1 = F_00c7b204(_DstCh,_SrcCh,_SrcSizeInBytes,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: x_ismbbtype_l */
GEN_LIB GEN_NOFRAME int F_00c7b334(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc7b334u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  int iVar2;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  if ((*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x1d + (param_2 & 0xff)))) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 200))) + (param_2 & 0xff) * 2))) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_00c7b378;
  }
  iVar2 = 1;
LAB_00c7b378: ;
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar2;
}

/* ref: __ismbbkalnum_l */
GEN_LIB GEN_NOFRAME int F_00c7b387(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b387u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,1);
  return iVar1;
}

/* ref: __ismbbkalnum */
GEN_LIB GEN_NOFRAME int F_00c7b3a0(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0,1);
  return iVar1;
}

/* ref: __ismbbkprint_l */
GEN_LIB GEN_NOFRAME int F_00c7b3b8(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b3b8u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,3);
  return iVar1;
}

/* ref: __ismbbkprint */
GEN_LIB GEN_NOFRAME int F_00c7b3d1(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b3d1u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0,3);
  return iVar1;
}

/* ref: __ismbbkpunct_l */
GEN_LIB GEN_NOFRAME int F_00c7b3e9(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b3e9u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,2);
  return iVar1;
}

/* ref: __ismbbkpunct */
GEN_LIB GEN_NOFRAME int F_00c7b402(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b402u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0,2);
  return iVar1;
}

/* ref: __ismbbalnum_l */
GEN_LIB GEN_NOFRAME int F_00c7b41a(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b41au, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x107,1);
  return iVar1;
}

/* ref: __ismbbalnum */
GEN_LIB GEN_NOFRAME int F_00c7b436(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b436u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0x107,1);
  return iVar1;
}

/* ref: __ismbbalpha_l */
GEN_LIB GEN_NOFRAME int F_00c7b451(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b451u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x103,1);
  return iVar1;
}

/* ref: __ismbbalpha */
GEN_LIB GEN_NOFRAME int F_00c7b46d(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b46du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0x103,1);
  return iVar1;
}

/* ref: __ismbbgraph_l */
GEN_LIB GEN_NOFRAME int F_00c7b488(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b488u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x117,3);
  return iVar1;
}

/* ref: __ismbbgraph */
GEN_LIB GEN_NOFRAME int F_00c7b4a4(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b4a4u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0x117,3);
  return iVar1;
}

/* ref: __ismbbprint_l */
GEN_LIB GEN_NOFRAME int F_00c7b4bf(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b4bfu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x157,3);
  return iVar1;
}

/* ref: __ismbbprint */
GEN_LIB GEN_NOFRAME int F_00c7b4db(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b4dbu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0x157,3);
  return iVar1;
}

/* ref: __ismbbpunct_l */
GEN_LIB GEN_NOFRAME int F_00c7b4f6(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b4f6u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0x10,2);
  return iVar1;
}

/* ref: __ismbbpunct */
GEN_LIB GEN_NOFRAME int F_00c7b50f(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b50fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0x10,2);
  return iVar1;
}

/* ref: __ismbblead_l */
GEN_LIB GEN_NOFRAME int F_00c7b527(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b527u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,4);
  return iVar1;
}

/* ref: __ismbblead */
GEN_LIB GEN_NOFRAME int F_00c7b540(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0,4);
  return iVar1;
}

/* ref: __ismbbtrail_l */
GEN_LIB GEN_NOFRAME int F_00c7b558(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b558u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7b334(_Locale,_C,0,8);
  return iVar1;
}

/* ref: __ismbbtrail */
GEN_LIB GEN_NOFRAME int F_00c7b571(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b571u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b334(((undefined *)GEN_TOP(0x0)),_C,0,8);
  return iVar1;
}

/* ref: __ismbbkana_l */
GEN_LIB GEN_NOFRAME int F_00c7b589(GEN_P(uint _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc7b589u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) == 0) || (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 4))) != 0x3a4)) {
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = F_00c7b334(_Locale,_C,0,3);
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}

/* ref: __ismbbkana */
GEN_LIB GEN_NOFRAME int F_00c7b5de(GEN_P(uint _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc7b5deu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint _C = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7b589(_C,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: __putwch_nolock */
GEN_LIB GEN_NOFRAME ushort F_00c7b5f1(unsigned int gen_a0)
{
  GEN_ENTER(0xc7b5f1u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL(0x8, 8);
  BOOL BVar1;
  
  if (REFG(undefined4, 0x134c1c4) == (HANDLE)0xfffffffe) {
    F_00c808a7();
  }
  if (REFG(undefined4, 0x134c1c4) != (HANDLE)0xffffffff) {
    BVar1 = gen_imp_WriteConsoleW(REFG(undefined4, 0x134c1c4),&(*(wchar_t *)&gen_args[0]),1,&(*(DWORD *)(gen_frame + 0x0)),(LPVOID)0x0);
    if (BVar1 != 0) {
      return (*(wchar_t *)&gen_args[0]);
    }
  }
  return 0xffff;
}

/* ref: FUN_00c7b670 */
GEN_LIB GEN_NOFRAME uint F_00c7b670(void)
{
  GEN_ENTER(0xc7b670u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(3);
  return uVar1;
}

/* ref: __mbsnbicmp_l */
GEN_LIB GEN_NOFRAME int F_00c7b679(GEN_P(uchar * _Str1, unsigned int gen_a0), GEN_P(uchar * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3))
{
  GEN_ENTER(0xc7b679u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x1c, 4);
  gen_size32 sVar1;
  uchar * puVar2;
  int iVar3;
  int * piVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte * pbVar8;
  byte * pbVar9;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  if (_MaxCount == 0) {
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar3 = 0;
  }
  else if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 8))) == 0) {
    iVar3 = F_00c4c591((char *)_Str1,(char *)_Str2,_MaxCount);
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else if (_Str1 == ((uchar *)GEN_TOP(0x0))) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else {
    pbVar9 = _Str2;
    if (_Str2 != ((uchar *)GEN_TOP(0x0))) {
      do {
        uVar7 = (uint)*_Str1;
        sVar1 = _MaxCount - 1;
        puVar2 = _Str1 + 1;
        (*(uint *)(gen_frame + 0x10)) = uVar7;
        if ((*((byte *)GEN_TOP((uVar7 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) == 0) {
          if ((*((byte *)GEN_TOP((uVar7 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x1d))) & 0x10) != 0) {
            uVar7 = (uint)*((byte *)GEN_TOP((uVar7 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x11d)));
          }
          (*(uint *)(gen_frame + 0x10)) = uVar7;
LAB_00c7b7c8: ;
          uVar5 = (ushort)(*(uint *)(gen_frame + 0x10));
          _Str1 = puVar2;
LAB_00c7b7cc: ;
          uVar7 = (uint)*pbVar9;
          pbVar8 = pbVar9 + 1;
          (*(uint *)(gen_frame + 0x14)) = uVar7;
          if ((*((byte *)GEN_TOP((uVar7 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) == 0) {
            if ((*((byte *)GEN_TOP((uVar7 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x1d))) & 0x10) != 0) {
              uVar7 = (uint)*((byte *)GEN_TOP((uVar7 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x11d)));
            }
            goto LAB_00c7b83c;
          }
          if (sVar1 == 0) {
LAB_00c7b7e2: ;
            _MaxCount = sVar1;
            (*(uint *)(gen_frame + 0x14)) = 0;
            pbVar9 = pbVar8;
            goto LAB_00c7b83f;
          }
          _MaxCount = _MaxCount - 2;
          sVar1 = _MaxCount;
          if (*pbVar8 == 0) goto LAB_00c7b7e2;
          uVar6 = CONCAT11(*pbVar9,*pbVar8);
          pbVar9 = pbVar9 + 2;
          (*(uint *)(gen_frame + 0x14)) = (uint)uVar6;
          if ((uVar6 < *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x10)))) ||
             (*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x12))) < uVar6)) {
            if ((*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x16))) <= uVar6) &&
               (uVar6 <= *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x18))))) {
              uVar6 = uVar6 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x1a)));
            }
          }
          else {
            uVar6 = uVar6 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x14)));
          }
        }
        else {
          if (sVar1 != 0) {
            if (*puVar2 == '\0') {
              (*(uint *)(gen_frame + 0x10)) = 0;
              goto LAB_00c7b7c8;
            }
            uVar5 = CONCAT11(*_Str1,*puVar2);
            _Str1 = _Str1 + 2;
            (*(uint *)(gen_frame + 0x10)) = (uint)uVar5;
            if ((uVar5 < *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x10)))) ||
               (*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x12))) < uVar5)) {
              if ((*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x16))) <= uVar5) &&
                 (uVar5 <= *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x18))))) {
                uVar5 = uVar5 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x1a)));
              }
            }
            else {
              uVar5 = uVar5 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x14)));
            }
            goto LAB_00c7b7cc;
          }
          uVar7 = (uint)*pbVar9;
          (*(uint *)(gen_frame + 0x10)) = 0;
          if ((*((byte *)GEN_TOP((uVar7 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) != 0) {
LAB_00c7b856: ;
            if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
              *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
            }
            return 0;
          }
          uVar5 = 0;
          pbVar8 = pbVar9;
          _Str1 = puVar2;
LAB_00c7b83c: ;
          (*(uint *)(gen_frame + 0x14)) = uVar7;
          pbVar9 = pbVar8;
          _MaxCount = sVar1;
LAB_00c7b83f: ;
          uVar6 = (ushort)(*(uint *)(gen_frame + 0x14));
        }
        if (uVar6 != uVar5) {
          iVar3 = (-(uint)(uVar6 < uVar5) & 2) - 1;
          if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
            return iVar3;
          }
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
          return iVar3;
        }
        if ((uVar5 == 0) || (_MaxCount == 0)) goto LAB_00c7b856;
      } while( true );
    }
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  return iVar3;
}

/* ref: __mbsnbicmp */
GEN_LIB GEN_NOFRAME int F_00c7b87d(GEN_P(uchar * _Str1, unsigned int gen_a0), GEN_P(uchar * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc7b87du, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  int iVar1;
  
  iVar1 = F_00c7b679(_Str1,_Str2,_MaxCount,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: __mbsnbcmp_l */
GEN_LIB GEN_NOFRAME int F_00c7b897(GEN_P(uchar * _Str1, unsigned int gen_a0), GEN_P(uchar * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3))
{
  GEN_ENTER(0xc7b897u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x14, 12);
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
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 8))) == 0) {
    iVar2 = F_00c4b813((char *)_Str1,(char *)_Str2,_MaxCount);
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else if (_Str1 == ((uchar *)GEN_TOP(0x0))) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    pbVar6 = _Str1;
    pbVar8 = _Str2;
    if (_Str2 != ((uchar *)GEN_TOP(0x0))) {
      do {
        uVar5 = (uint)*pbVar6;
        sVar1 = _MaxCount - 1;
        pbVar7 = pbVar6 + 1;
        if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) == 0) {
LAB_00c7b98a: ;
          uVar4 = (ushort)uVar5;
          uVar5 = (uint)*pbVar8;
          pbVar9 = pbVar8 + 1;
          if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) != 0) {
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
          if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) != 0) {
LAB_00c7b95f: ;
            if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
              *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
            }
            return 0;
          }
        }
LAB_00c7b9b8: ;
        _MaxCount = sVar1;
        if ((ushort)uVar5 != uVar4) {
          iVar2 = (-(uint)((ushort)uVar5 < uVar4) & 2) - 1;
          if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
            return iVar2;
          }
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
          return iVar2;
        }
        if ((uVar4 == 0) || (pbVar6 = pbVar7, pbVar8 = pbVar9, _MaxCount == 0)) goto LAB_00c7b95f;
      } while( true );
    }
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

/* ref: __mbsnbcmp */
GEN_LIB GEN_NOFRAME int F_00c7b9e3(GEN_P(uchar * _Str1, unsigned int gen_a0), GEN_P(uchar * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc7b9e3u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  int iVar1;
  
  iVar1 = F_00c7b897(_Str1,_Str2,_MaxCount,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: __87except */
GEN_LIB GEN_NOFRAME unsigned int F_00c7b9fd(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(ushort * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7b9fdu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x98, 8);
  ushort uVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88);
  uVar1 = *param_3;
  iVar2 = *param_2;
  (*(uint *)(gen_frame + 0x0)) = (uint)uVar1;
  if (iVar2 == 1) {
LAB_00c7ba8c: ;
    (*(undefined4 *)(gen_frame + 0x4)) = 8;
  }
  else if (iVar2 == 2) {
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
  }
  else if (iVar2 == 3) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0x11;
  }
  else if (iVar2 == 4) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_00c7ba8c;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_00c7baf6;
    }
    if (iVar2 != 8) goto LAB_00c7baf6;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  }
  bVar3 = F_00c6f018((*(undefined4 *)(gen_frame + 0x4)),param_2 + 6,(uint)uVar1);
  if ((int)CONCAT31(extraout_var,bVar3) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      (*(undefined8 *)(gen_frame + 0x38)) = *(undefined8 *)(param_2 + 4);
      (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x48)) & 0xffffffe3 | 3;
    }
    else {
      (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x48)) & 0xfffffffe;
    }
    F_00c6efd2(((undefined1 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),param_1,param_2 + 2,param_2 + 6);
  }
LAB_00c7baf6: ;
  F_00c6f59e((*(uint *)(gen_frame + 0x0)),0xffff);
  if (((*param_2 != 8) && (REFG(int, 0x134c1bc) == 0)) && (uVar4 = F_00c7db7d(param_2), uVar4 != 0)) {
    return;
  }
  F_00c6f1fc(*param_2);
  return;
}

/* ref: __ZeroTail */
GEN_LIB GEN_NOFRAME uint F_00c7bb3c(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7bb3cu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar1 = *((uint *)GEN_TOP((param_1 + iVar2 * 4))) & ~(-1 << GEN_SHC(0x1f - ((byte)param_2 & 0x1f), 0x1f - ((byte)param_2 & 0x1f)));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    uVar1 = *((uint *)GEN_TOP((param_1 + iVar2 * 4)));
  }
  return 1;
}

/* ref: __IncMan */
GEN_LIB GEN_NOFRAME uint F_00c7bb85(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7bb85u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar4 = 1 << GEN_SHC(0x1f - ((byte)param_2 & 0x1f), 0x1f - ((byte)param_2 & 0x1f));
  uVar2 = *((uint *)GEN_TOP((param_1 + iVar3 * 4)));
  uVar5 = 0;
  uVar1 = uVar2 + uVar4;
  if ((uVar1 < uVar2) || (uVar1 < uVar4)) {
    uVar5 = 1;
  }
  *((uint *)GEN_TOP((param_1 + iVar3 * 4))) = uVar1;
  while ((iVar3 = iVar3 - 1, -1 < iVar3 && (uVar5 != 0))) {
    uVar2 = *((uint *)GEN_TOP((param_1 + iVar3 * 4)));
    uVar1 = uVar2 + 1;
    uVar5 = 0;
    if ((uVar1 < uVar2) || (uVar1 == 0)) {
      uVar5 = 1;
    }
    *((uint *)GEN_TOP((param_1 + iVar3 * 4))) = uVar1;
  }
  return uVar5;
}

/* ref: __RoundMan */
GEN_LIB GEN_NOFRAME uint F_00c7bbf2(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7bbf2u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
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
  iVar8 = param_2 - 1;
  iVar7 = (int)(((int)param_2 >> 0x1f & 0x1fU) + param_2) >> 5;
  bVar5 = 0x1f - ((byte)param_2 & 0x1f);
  if ((*((uint *)GEN_TOP((param_1 + iVar7 * 4))) & 1 << GEN_SHC(bVar5, bVar5)) != 0) {
    uVar3 = *((uint *)GEN_TOP((param_1 + iVar7 * 4))) & ~(-1 << GEN_SHC(bVar5, bVar5));
    iVar4 = iVar7;
    while (uVar3 == 0) {
      iVar4 = iVar4 + 1;
      if (2 < iVar4) goto LAB_00c7bcba;
      uVar3 = *((uint *)GEN_TOP((param_1 + iVar4 * 4)));
    }
    iVar4 = (int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5;
    param_2 = 0;
    uVar6 = 1 << GEN_SHC(0x1f - ((byte)iVar8 & 0x1f), 0x1f - ((byte)iVar8 & 0x1f));
    uVar2 = *((uint *)GEN_TOP((param_1 + iVar4 * 4)));
    uVar3 = uVar2 + uVar6;
    if ((uVar3 < uVar2) || (uVar3 < uVar6)) {
      param_2 = 1;
    }
    *((uint *)GEN_TOP((param_1 + iVar4 * 4))) = uVar3;
    local_8 = param_2;
    while ((iVar4 = iVar4 - 1, -1 < iVar4 && (local_8 != 0))) {
      uVar2 = *((uint *)GEN_TOP((param_1 + iVar4 * 4)));
      uVar3 = uVar2 + 1;
      local_8 = 0;
      if ((uVar3 < uVar2) || (uVar3 == 0)) {
        local_8 = 1;
      }
      *((uint *)GEN_TOP((param_1 + iVar4 * 4))) = uVar3;
    }
  }
LAB_00c7bcba: ;
  puVar1 = ((uint *)GEN_TOP((param_1 + iVar7 * 4)));
  *puVar1 = *puVar1 & -1 << GEN_SHC(bVar5, bVar5);
  iVar7 = iVar7 + 1;
  if (iVar7 < 3) {
    puVar9 = ((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
    for (iVar8 = 3 - iVar7; iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  return local_8;
}

/* ref: __CopyMan */
GEN_LIB GEN_NOFRAME unsigned int F_00c7bcde(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7bcdeu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 3;
  puVar1 = param_2;
  do {
    *((undefined4 *)GEN_TOP(((param_1 - (int)param_2) + (int)puVar1))) = *puVar1;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00c7bcfd */
GEN_LIB GEN_NOFRAME uint F_00c7bcfd(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7bcfdu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}

/* ref: __IsZeroMan */
GEN_LIB GEN_NOFRAME uint F_00c7bd0e(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7bd0eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*((int *)GEN_TOP((param_1 + iVar1 * 4))) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}

/* ref: __ShrMan */
GEN_LIB GEN_NOFRAME unsigned int F_00c7bd2d(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7bd2du, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
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
    uVar1 = *((uint *)GEN_TOP((param_1 + param_2 * 4)));
    *((uint *)GEN_TOP((param_1 + param_2 * 4))) = *((uint *)GEN_TOP((param_1 + param_2 * 4))) >> bVar3 | local_c;
    local_c = (uVar1 & ~(-1 << bVar3)) << GEN_SHC(0x20 - bVar3, 0x20 - bVar3);
    param_2 = param_2 + 1;
  } while (param_2 < 3);
  iVar4 = 2;
  puVar5 = ((undefined4 *)GEN_TOP((param_1 + (2 - iVar2) * 4)));
  do {
    if (iVar4 < iVar2) {
      *((undefined4 *)GEN_TOP((param_1 + iVar4 * 4))) = 0;
    }
    else {
      *((undefined4 *)GEN_TOP((param_1 + iVar4 * 4))) = *puVar5;
    }
    puVar5 = puVar5 - 1;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return 0;
}

/* ref: __ld12cvt */
GEN_LIB GEN_NOFRAME uint F_00c7bdc5(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7bdc5u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x2c, 4);
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
  
  ((uint *)(gen_frame + 0x18))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  uVar1 = param_1[5];
  uVar6 = *(uint *)(param_1 + 3);
  ((uint *)(gen_frame + 0x18))[0] = uVar6;
  uVar13 = *(uint *)(param_1 + 1);
  uVar2 = *param_1;
  uVar9 = uVar1 & 0x7fff;
  iVar10 = uVar9 - 0x3fff;
  ((uint *)(gen_frame + 0x18))[1] = uVar13;
  ((uint *)(gen_frame + 0x18))[2] = (uint)uVar2 << 0x10;
  if (iVar10 == -0x3fff) {
    iVar12 = 0;
    iVar10 = 0;
    do {
      if (((uint *)(gen_frame + 0x18))[(int)(iVar10)] != 0) {
        ((uint *)(gen_frame + 0x18))[0] = 0;
        ((uint *)(gen_frame + 0x18))[1] = 0;
        ((uint *)(gen_frame + 0x18))[2] = 0;
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
    iVar14 = iVar12 - 1;
    iVar4 = (int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5;
    puVar5 = ((uint *)(gen_frame + 0x18)) + iVar4;
    bVar7 = 0x1f - ((byte)iVar12 & 0x1f);
    if ((*puVar5 & 1 << GEN_SHC(bVar7, bVar7)) != 0) {
      uVar11 = ((uint *)(gen_frame + 0x18))[(int)(iVar4)] & ~(-1 << GEN_SHC(bVar7, bVar7));
      iVar12 = iVar4;
      while( true ) {
        if (uVar11 != 0) {
          iVar12 = (int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << GEN_SHC(0x1f - ((byte)iVar14 & 0x1f), 0x1f - ((byte)iVar14 & 0x1f));
          puVar8 = ((uint *)(gen_frame + 0x18)) + iVar12;
          (*(uint *)(gen_frame + 0x4)) = *puVar8 + uVar11;
          if ((*(uint *)(gen_frame + 0x4)) < *puVar8) goto LAB_00c7bf09;
          bVar15 = (*(uint *)(gen_frame + 0x4)) < uVar11;
          do {
            bVar3 = false;
            if (!bVar15) goto LAB_00c7bf10;
LAB_00c7bf09: ;
            do {
              bVar3 = true;
LAB_00c7bf10: ;
              iVar12 = iVar12 - 1;
              *puVar8 = (*(uint *)(gen_frame + 0x4));
              if ((iVar12 < 0) || (!bVar3)) goto LAB_00c7bf1e;
              puVar8 = ((uint *)(gen_frame + 0x18)) + iVar12;
              (*(uint *)(gen_frame + 0x4)) = *puVar8 + 1;
            } while ((*(uint *)(gen_frame + 0x4)) < *puVar8);
            bVar15 = (*(uint *)(gen_frame + 0x4)) == 0;
          } while( true );
        }
        iVar12 = iVar12 + 1;
        if (2 < iVar12) break;
        uVar11 = ((uint *)(gen_frame + 0x18))[(int)(iVar12)];
      }
    }
LAB_00c7bf1e: ;
    *puVar5 = *puVar5 & -1 << GEN_SHC(bVar7, bVar7);
    iVar4 = iVar4 + 1;
    if (iVar4 < 3) {
      puVar5 = ((uint *)(gen_frame + 0x18)) + iVar4;
      for (iVar12 = 3 - iVar4; iVar12 != 0; iVar12 = iVar12 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
    (*(int *)(gen_frame + 0x8)) = iVar10;
    if (bVar3) {
      (*(int *)(gen_frame + 0x8)) = uVar9 - 0x3ffe;
    }
    iVar12 = param_3[1];
    if ((*(int *)(gen_frame + 0x8)) < iVar12 - param_3[2]) {
      ((uint *)(gen_frame + 0x18))[0] = 0;
      ((uint *)(gen_frame + 0x18))[1] = 0;
      ((uint *)(gen_frame + 0x18))[2] = 0;
    }
    else {
      if (iVar12 < (*(int *)(gen_frame + 0x8))) {
        iVar10 = param_3[3];
        if (*param_3 <= (*(int *)(gen_frame + 0x8))) {
          ((uint *)(gen_frame + 0x18))[0] = 0;
          ((uint *)(gen_frame + 0x18))[1] = 0;
          ((uint *)(gen_frame + 0x18))[2] = 0;
          ((uint *)(gen_frame + 0x18))[0] = 0x80000000;
          iVar12 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
          bVar7 = (byte)iVar10 & 0x1f;
          (*(uint *)(gen_frame + 0x0)) = 0;
          (*(int *)(gen_frame + 0x8)) = 0;
          do {
            uVar6 = ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x8)))];
            ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x8)))] = uVar6 >> bVar7 | (*(uint *)(gen_frame + 0x0));
            (*(uint *)(gen_frame + 0x0)) = (uVar6 & ~(-1 << bVar7)) << GEN_SHC(0x20 - bVar7, 0x20 - bVar7);
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < 3);
          iVar10 = 2;
          puVar5 = ((uint *)(gen_frame + 0x18)) + (2 - iVar12);
          do {
            if (iVar10 < iVar12) {
              ((uint *)(gen_frame + 0x18))[(int)(iVar10)] = 0;
            }
            else {
              ((uint *)(gen_frame + 0x18))[(int)(iVar10)] = *puVar5;
            }
            puVar5 = puVar5 - 1;
            iVar10 = iVar10 - 1;
          } while (-1 < iVar10);
          iVar12 = param_3[5] + *param_3;
          uVar6 = 1;
          goto LAB_00c7c2cc;
        }
        iVar12 = param_3[5] + (*(int *)(gen_frame + 0x8));
        ((uint *)(gen_frame + 0x18))[0] = ((uint *)(gen_frame + 0x18))[0] & 0x7fffffff;
        iVar4 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
        bVar7 = (byte)iVar10 & 0x1f;
        (*(uint *)(gen_frame + 0x0)) = 0;
        (*(int *)(gen_frame + 0x8)) = 0;
        do {
          uVar6 = ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x8)))];
          ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x8)))] = uVar6 >> bVar7 | (*(uint *)(gen_frame + 0x0));
          (*(uint *)(gen_frame + 0x0)) = (uVar6 & ~(-1 << bVar7)) << GEN_SHC(0x20 - bVar7, 0x20 - bVar7);
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
        } while ((*(int *)(gen_frame + 0x8)) < 3);
        iVar10 = 2;
        puVar5 = ((uint *)(gen_frame + 0x18)) + (2 - iVar4);
        do {
          if (iVar10 < iVar4) {
            ((uint *)(gen_frame + 0x18))[(int)(iVar10)] = 0;
          }
          else {
            ((uint *)(gen_frame + 0x18))[(int)(iVar10)] = *puVar5;
          }
          puVar5 = puVar5 - 1;
          iVar10 = iVar10 - 1;
        } while (-1 < iVar10);
        goto LAB_00c7c2ca;
      }
      iVar12 = iVar12 - iVar10;
      ((uint *)(gen_frame + 0x18))[0] = uVar6;
      ((uint *)(gen_frame + 0x18))[1] = uVar13;
      iVar10 = (int)((iVar12 >> 0x1f & 0x1fU) + iVar12) >> 5;
      bVar7 = (byte)iVar12 & 0x1f;
      (*(uint *)(gen_frame + 0x0)) = 0;
      (*(int *)(gen_frame + 0x8)) = 0;
      do {
        uVar6 = ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x8)))];
        ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x8)))] = uVar6 >> bVar7 | (*(uint *)(gen_frame + 0x0));
        (*(uint *)(gen_frame + 0x0)) = (uVar6 & ~(-1 << bVar7)) << GEN_SHC(0x20 - bVar7, 0x20 - bVar7);
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
      } while ((*(int *)(gen_frame + 0x8)) < 3);
      iVar12 = 2;
      puVar5 = ((uint *)(gen_frame + 0x18)) + (2 - iVar10);
      do {
        if (iVar12 < iVar10) {
          ((uint *)(gen_frame + 0x18))[(int)(iVar12)] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x18))[(int)(iVar12)] = *puVar5;
        }
        puVar5 = puVar5 - 1;
        iVar12 = iVar12 - 1;
      } while (-1 < iVar12);
      iVar10 = param_3[2];
      iVar4 = iVar10 - 1;
      iVar12 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
      bVar7 = 0x1f - ((byte)iVar10 & 0x1f);
      if ((((uint *)(gen_frame + 0x18))[(int)(iVar12)] & 1 << GEN_SHC(bVar7, bVar7)) != 0) {
        uVar6 = ((uint *)(gen_frame + 0x18))[(int)(iVar12)] & ~(-1 << GEN_SHC(bVar7, bVar7));
        iVar10 = iVar12;
        while (uVar6 == 0) {
          iVar10 = iVar10 + 1;
          if (2 < iVar10) goto LAB_00c7c0c7;
          uVar6 = ((uint *)(gen_frame + 0x18))[(int)(iVar10)];
        }
        iVar10 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
        bVar3 = false;
        uVar9 = 1 << GEN_SHC(0x1f - ((byte)iVar4 & 0x1f), 0x1f - ((byte)iVar4 & 0x1f));
        uVar13 = ((uint *)(gen_frame + 0x18))[(int)(iVar10)];
        uVar6 = uVar13 + uVar9;
        if ((uVar6 < uVar13) || (uVar6 < uVar9)) {
          bVar3 = true;
        }
        ((uint *)(gen_frame + 0x18))[(int)(iVar10)] = uVar6;
        while ((iVar10 = iVar10 - 1, -1 < iVar10 && (bVar3))) {
          uVar13 = ((uint *)(gen_frame + 0x18))[(int)(iVar10)];
          uVar6 = uVar13 + 1;
          bVar3 = false;
          if ((uVar6 < uVar13) || (uVar6 == 0)) {
            bVar3 = true;
          }
          ((uint *)(gen_frame + 0x18))[(int)(iVar10)] = uVar6;
        }
      }
LAB_00c7c0c7: ;
      ((uint *)(gen_frame + 0x18))[(int)(iVar12)] = ((uint *)(gen_frame + 0x18))[(int)(iVar12)] & -1 << GEN_SHC(bVar7, bVar7);
      iVar12 = iVar12 + 1;
      if (iVar12 < 3) {
        puVar5 = ((uint *)(gen_frame + 0x18)) + iVar12;
        for (iVar10 = 3 - iVar12; iVar10 != 0; iVar10 = iVar10 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      iVar10 = param_3[3] + 1;
      iVar10 = (int)((iVar10 >> 0x1f & 0x1fU) + iVar10) >> 5;
      bVar7 = (char)param_3[3] + 1U & 0x1f;
      (*(uint *)(gen_frame + 0x0)) = 0;
      (*(int *)(gen_frame + 0x8)) = 0;
      do {
        uVar6 = ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x8)))];
        ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x8)))] = uVar6 >> bVar7 | (*(uint *)(gen_frame + 0x0));
        (*(uint *)(gen_frame + 0x0)) = (uVar6 & ~(-1 << bVar7)) << GEN_SHC(0x20 - bVar7, 0x20 - bVar7);
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
      } while ((*(int *)(gen_frame + 0x8)) < 3);
      iVar12 = 2;
      puVar5 = ((uint *)(gen_frame + 0x18)) + (2 - iVar10);
      do {
        if (iVar12 < iVar10) {
          ((uint *)(gen_frame + 0x18))[(int)(iVar12)] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x18))[(int)(iVar12)] = *puVar5;
        }
        puVar5 = puVar5 - 1;
        iVar12 = iVar12 - 1;
      } while (-1 < iVar12);
    }
LAB_00c7c176: ;
    iVar12 = 0;
    uVar6 = 2;
  }
LAB_00c7c2cc: ;
  uVar13 = iVar12 << GEN_SHC(0x1fU - (char)param_3[3], 0x1fU - (char)param_3[3]) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000
           | ((uint *)(gen_frame + 0x18))[0];
  if (param_3[4] == 0x40) {
    param_2[1] = uVar13;
    *param_2 = ((uint *)(gen_frame + 0x18))[1];
  }
  else if (param_3[4] == 0x20) {
    *param_2 = uVar13;
  }
  return uVar6;
}

/* ref: __ld12tod */
GEN_LIB GEN_NOFRAME undefined4 F_00c7c314(GEN_P(undefined * _Ifp, unsigned int gen_a0), GEN_P(undefined * _D, unsigned int gen_a1))
{
  GEN_ENTER(0xc7c314u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * _Ifp = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _D = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x2c, 4);
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
  
  ((uint *)(gen_frame + 0x18))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  uVar1 = *(ushort *)(((uchar *)((char *)(_Ifp))) + 10);
  uVar15 = *(uint *)(((uchar *)((char *)(_Ifp))) + 6);
  ((uint *)(gen_frame + 0x18))[0] = uVar15;
  uVar2 = *(undefined4 *)(((uchar *)((char *)(_Ifp))) + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  iVar5 = (uint)*(ushort *)((uchar *)((char *)(_Ifp))) << 0x10;
  ((uint *)(gen_frame + 0x18))[1] = uVar2;
  ((uint *)(gen_frame + 0x18))[2] = iVar5;
  bVar3 = (byte)REFG(int, 0x134bedc);
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar5 = 0;
    do {
      if (((uint *)(gen_frame + 0x18))[(int)(iVar5)] != 0) {
        ((uint *)(gen_frame + 0x18))[0] = 0;
        ((uint *)(gen_frame + 0x18))[1] = 0;
        ((uint *)(gen_frame + 0x18))[2] = 0;
        IVar6 = (2);
        goto LAB_00c7c818;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    IVar6 = (0);
  }
  else {
    bVar4 = false;
    iVar16 = REFG(int, 0x134bed8) - 1;
    iVar14 = (int)(REFG(int, 0x134bed8) + (REFG(int, 0x134bed8) >> 0x1f & 0x1fU)) >> 5;
    puVar10 = ((uint *)(gen_frame + 0x18)) + iVar14;
    bVar8 = 0x1f - ((byte)REFG(int, 0x134bed8) & 0x1f);
    if ((*puVar10 & 1 << GEN_SHC(bVar8, bVar8)) != 0) {
      uVar11 = ((uint *)(gen_frame + 0x18))[(int)(iVar14)] & ~(-1 << GEN_SHC(bVar8, bVar8));
      iVar7 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar7 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << GEN_SHC(0x1f - ((byte)iVar16 & 0x1f), 0x1f - ((byte)iVar16 & 0x1f));
          puVar9 = ((uint *)(gen_frame + 0x18)) + iVar7;
          (*(uint *)(gen_frame + 0x8)) = *puVar9 + uVar11;
          if ((*(uint *)(gen_frame + 0x8)) < *puVar9) goto LAB_00c7c458;
          bVar17 = (*(uint *)(gen_frame + 0x8)) < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_00c7c45f;
LAB_00c7c458: ;
            do {
              bVar4 = true;
LAB_00c7c45f: ;
              iVar7 = iVar7 - 1;
              *puVar9 = (*(uint *)(gen_frame + 0x8));
              if ((iVar7 < 0) || (!bVar4)) goto LAB_00c7c46d;
              puVar9 = ((uint *)(gen_frame + 0x18)) + iVar7;
              (*(uint *)(gen_frame + 0x8)) = *puVar9 + 1;
            } while ((*(uint *)(gen_frame + 0x8)) < *puVar9);
            bVar17 = (*(uint *)(gen_frame + 0x8)) == 0;
          } while( true );
        }
        iVar7 = iVar7 + 1;
        if (2 < iVar7) break;
        uVar11 = ((uint *)(gen_frame + 0x18))[(int)(iVar7)];
      }
    }
LAB_00c7c46d: ;
    *puVar10 = *puVar10 & -1 << GEN_SHC(bVar8, bVar8);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = ((uint *)(gen_frame + 0x18)) + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < REFG(int, 0x134bed4) - REFG(int, 0x134bed8)) {
      ((uint *)(gen_frame + 0x18))[0] = 0;
      ((uint *)(gen_frame + 0x18))[1] = 0;
      ((uint *)(gen_frame + 0x18))[2] = 0;
    }
    else {
      if (REFG(int, 0x134bed4) < iVar14) {
        if (iVar14 < REFG(int, 0x134bed0)) {
          iVar14 = iVar14 + REFG(int, 0x134bee4);
          ((uint *)(gen_frame + 0x18))[0] = ((uint *)(gen_frame + 0x18))[0] & 0x7fffffff;
          iVar5 = (int)(REFG(int, 0x134bedc) + (REFG(int, 0x134bedc) >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          (*(uint *)(gen_frame + 0x0)) = 0;
          (*(uint *)(gen_frame + 0x8)) = 0;
          do {
            uVar15 = ((uint *)(gen_frame + 0x18))[(int)((*(uint *)(gen_frame + 0x8)))];
            ((uint *)(gen_frame + 0x18))[(int)((*(uint *)(gen_frame + 0x8)))] = uVar15 >> bVar8 | (*(uint *)(gen_frame + 0x0));
            (*(uint *)(gen_frame + 0x0)) = (uVar15 & ~(-1 << bVar8)) << GEN_SHC(0x20 - bVar8, 0x20 - bVar8);
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
          } while ((int)(*(uint *)(gen_frame + 0x8)) < 3);
          iVar13 = 2;
          puVar10 = ((uint *)(gen_frame + 0x18)) + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              ((uint *)(gen_frame + 0x18))[(int)(iVar13)] = 0;
            }
            else {
              ((uint *)(gen_frame + 0x18))[(int)(iVar13)] = *puVar10;
            }
            puVar10 = puVar10 - 1;
            iVar13 = iVar13 - 1;
          } while (-1 < iVar13);
          IVar6 = (0);
        }
        else {
          ((uint *)(gen_frame + 0x18))[0] = 0;
          ((uint *)(gen_frame + 0x18))[1] = 0;
          ((uint *)(gen_frame + 0x18))[2] = 0;
          ((uint *)(gen_frame + 0x18))[0] = 0x80000000;
          iVar5 = (int)(REFG(int, 0x134bedc) + (REFG(int, 0x134bedc) >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          (*(uint *)(gen_frame + 0x0)) = 0;
          (*(uint *)(gen_frame + 0x8)) = 0;
          do {
            uVar15 = ((uint *)(gen_frame + 0x18))[(int)((*(uint *)(gen_frame + 0x8)))];
            ((uint *)(gen_frame + 0x18))[(int)((*(uint *)(gen_frame + 0x8)))] = uVar15 >> bVar8 | (*(uint *)(gen_frame + 0x0));
            (*(uint *)(gen_frame + 0x0)) = (uVar15 & ~(-1 << bVar8)) << GEN_SHC(0x20 - bVar8, 0x20 - bVar8);
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
          } while ((int)(*(uint *)(gen_frame + 0x8)) < 3);
          iVar13 = 2;
          puVar10 = ((uint *)(gen_frame + 0x18)) + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              ((uint *)(gen_frame + 0x18))[(int)(iVar13)] = 0;
            }
            else {
              ((uint *)(gen_frame + 0x18))[(int)(iVar13)] = *puVar10;
            }
            puVar10 = puVar10 - 1;
            iVar13 = iVar13 - 1;
          } while (-1 < iVar13);
          iVar14 = REFG(int, 0x134bee4) + REFG(int, 0x134bed0);
          IVar6 = (1);
        }
        goto LAB_00c7c818;
      }
      iVar13 = REFG(int, 0x134bed4) - iVar13;
      ((uint *)(gen_frame + 0x18))[0] = uVar15;
      ((uint *)(gen_frame + 0x18))[1] = uVar2;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      (*(uint *)(gen_frame + 0x0)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0;
      do {
        uVar15 = ((uint *)(gen_frame + 0x18))[(int)((*(uint *)(gen_frame + 0x8)))];
        ((uint *)(gen_frame + 0x18))[(int)((*(uint *)(gen_frame + 0x8)))] = uVar15 >> bVar8 | (*(uint *)(gen_frame + 0x0));
        (*(uint *)(gen_frame + 0x0)) = (uVar15 & ~(-1 << bVar8)) << GEN_SHC(0x20 - bVar8, 0x20 - bVar8);
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0x8)) < 3);
      iVar5 = 2;
      puVar10 = ((uint *)(gen_frame + 0x18)) + (2 - iVar14);
      do {
        if (iVar5 < iVar14) {
          ((uint *)(gen_frame + 0x18))[(int)(iVar5)] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x18))[(int)(iVar5)] = *puVar10;
        }
        puVar10 = puVar10 - 1;
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
      iVar13 = REFG(int, 0x134bed8) - 1;
      iVar5 = (int)(REFG(int, 0x134bed8) + (REFG(int, 0x134bed8) >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)REFG(int, 0x134bed8) & 0x1f);
      puVar10 = ((uint *)(gen_frame + 0x18)) + iVar5;
      if ((*puVar10 & 1 << GEN_SHC(bVar8, bVar8)) != 0) {
        uVar15 = ((uint *)(gen_frame + 0x18))[(int)(iVar5)] & ~(-1 << GEN_SHC(bVar8, bVar8));
        iVar14 = iVar5;
        while (uVar15 == 0) {
          iVar14 = iVar14 + 1;
          if (2 < iVar14) goto LAB_00c7c60c;
          uVar15 = ((uint *)(gen_frame + 0x18))[(int)(iVar14)];
        }
        iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar11 = 1 << GEN_SHC(0x1f - ((byte)iVar13 & 0x1f), 0x1f - ((byte)iVar13 & 0x1f));
        uVar12 = ((uint *)(gen_frame + 0x18))[(int)(iVar14)];
        uVar15 = uVar12 + uVar11;
        if ((uVar15 < uVar12) || (uVar15 < uVar11)) {
          bVar4 = true;
        }
        ((uint *)(gen_frame + 0x18))[(int)(iVar14)] = uVar15;
        while ((iVar14 = iVar14 - 1, -1 < iVar14 && (bVar4))) {
          uVar12 = ((uint *)(gen_frame + 0x18))[(int)(iVar14)];
          uVar15 = uVar12 + 1;
          bVar4 = false;
          if ((uVar15 < uVar12) || (uVar15 == 0)) {
            bVar4 = true;
          }
          ((uint *)(gen_frame + 0x18))[(int)(iVar14)] = uVar15;
        }
      }
LAB_00c7c60c: ;
      *puVar10 = *puVar10 & -1 << GEN_SHC(bVar8, bVar8);
      iVar5 = iVar5 + 1;
      if (iVar5 < 3) {
        puVar10 = ((uint *)(gen_frame + 0x18)) + iVar5;
        for (iVar13 = 3 - iVar5; iVar13 != 0; iVar13 = iVar13 - 1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar5 = (int)(REFG(int, 0x134bedc) + 1 + (REFG(int, 0x134bedc) + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      (*(uint *)(gen_frame + 0x0)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0;
      do {
        uVar15 = ((uint *)(gen_frame + 0x18))[(int)((*(uint *)(gen_frame + 0x8)))];
        ((uint *)(gen_frame + 0x18))[(int)((*(uint *)(gen_frame + 0x8)))] = uVar15 >> bVar8 | (*(uint *)(gen_frame + 0x0));
        (*(uint *)(gen_frame + 0x0)) = (uVar15 & ~(-1 << bVar8)) << GEN_SHC(0x20 - bVar8, 0x20 - bVar8);
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0x8)) < 3);
      iVar13 = 2;
      puVar10 = ((uint *)(gen_frame + 0x18)) + (2 - iVar5);
      do {
        if (iVar13 < iVar5) {
          ((uint *)(gen_frame + 0x18))[(int)(iVar13)] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x18))[(int)(iVar13)] = *puVar10;
        }
        puVar10 = puVar10 - 1;
        iVar13 = iVar13 - 1;
      } while (-1 < iVar13);
    }
    iVar14 = 0;
    IVar6 = (2);
  }
LAB_00c7c818: ;
  uVar15 = iVar14 << GEN_SHC(0x1f - bVar3, 0x1f - bVar3) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
           ((uint *)(gen_frame + 0x18))[0];
  if (REFG(int, 0x134bee0) == 0x40) {
    *((uint *)GEN_TOP(((int)&(*(double *)((char *)(_D))) + 4))) = uVar15;
    *(uint *)&(*(double *)((char *)(_D))) = ((uint *)(gen_frame + 0x18))[1];
  }
  else if (REFG(int, 0x134bee0) == 0x20) {
    *(uint *)&(*(double *)((char *)(_D))) = uVar15;
  }
  return IVar6;
}

/* ref: __ld12tof */
GEN_LIB GEN_NOFRAME undefined4 F_00c7c865(GEN_P(undefined * _Ifp, unsigned int gen_a0), GEN_P(undefined * _F, unsigned int gen_a1))
{
  GEN_ENTER(0xc7c865u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * _Ifp = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _F = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x2c, 4);
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
  
  ((uint *)(gen_frame + 0x20))[1] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  uVar1 = *(ushort *)(((uchar *)((char *)(_Ifp))) + 10);
  uVar2 = *(uint *)(((uchar *)((char *)(_Ifp))) + 6);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  fVar15 = *(float *)(((uchar *)((char *)(_Ifp))) + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  uVar5 = (uint)*(ushort *)((uchar *)((char *)(_Ifp))) << 0x10;
  (*(float *)(gen_frame + 0x1c)) = fVar15;
  ((uint *)(gen_frame + 0x20))[0] = uVar5;
  bVar3 = (byte)REFG(int, 0x134bef4);
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar13 = 0;
    do {
      if ((&(*(uint *)(gen_frame + 0x18)))[iVar13] != 0) {
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(float *)(gen_frame + 0x1c)) = 0.0;
        ((uint *)(gen_frame + 0x20))[0] = 0;
        IVar6 = (2);
        goto LAB_00c7cd69;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    IVar6 = (0);
  }
  else {
    bVar4 = false;
    iVar16 = REFG(int, 0x134bef0) - 1;
    iVar14 = (int)(REFG(int, 0x134bef0) + (REFG(int, 0x134bef0) >> 0x1f & 0x1fU)) >> 5;
    puVar10 = &(*(uint *)(gen_frame + 0x18)) + iVar14;
    bVar8 = 0x1f - ((byte)REFG(int, 0x134bef0) & 0x1f);
    if ((*puVar10 & 1 << GEN_SHC(bVar8, bVar8)) != 0) {
      uVar11 = (&(*(uint *)(gen_frame + 0x18)))[iVar14] & ~(-1 << GEN_SHC(bVar8, bVar8));
      iVar7 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar7 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << GEN_SHC(0x1f - ((byte)iVar16 & 0x1f), 0x1f - ((byte)iVar16 & 0x1f));
          puVar9 = &(*(uint *)(gen_frame + 0x18)) + iVar7;
          (*(uint *)(gen_frame + 0x8)) = *puVar9 + uVar11;
          if ((*(uint *)(gen_frame + 0x8)) < *puVar9) goto LAB_00c7c9a9;
          bVar17 = (*(uint *)(gen_frame + 0x8)) < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_00c7c9b0;
LAB_00c7c9a9: ;
            do {
              bVar4 = true;
LAB_00c7c9b0: ;
              iVar7 = iVar7 - 1;
              *puVar9 = (*(uint *)(gen_frame + 0x8));
              if ((iVar7 < 0) || (!bVar4)) goto LAB_00c7c9be;
              puVar9 = &(*(uint *)(gen_frame + 0x18)) + iVar7;
              (*(uint *)(gen_frame + 0x8)) = *puVar9 + 1;
            } while ((*(uint *)(gen_frame + 0x8)) < *puVar9);
            bVar17 = (*(uint *)(gen_frame + 0x8)) == 0;
          } while( true );
        }
        iVar7 = iVar7 + 1;
        if (2 < iVar7) break;
        uVar11 = (&(*(uint *)(gen_frame + 0x18)))[iVar7];
      }
    }
LAB_00c7c9be: ;
    *puVar10 = *puVar10 & -1 << GEN_SHC(bVar8, bVar8);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = &(*(uint *)(gen_frame + 0x18)) + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < REFG(int, 0x134beec) - REFG(int, 0x134bef0)) {
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(float *)(gen_frame + 0x1c)) = 0.0;
      ((uint *)(gen_frame + 0x20))[0] = 0;
    }
    else {
      if (REFG(int, 0x134beec) < iVar14) {
        if (iVar14 < REFG(int, 0x134bee8)) {
          iVar14 = iVar14 + REFG(int, 0x134befc);
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) & 0x7fffffff;
          iVar13 = (int)(REFG(int, 0x134bef4) + (REFG(int, 0x134bef4) >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          (*(uint *)(gen_frame + 0x0)) = 0;
          (*(uint *)(gen_frame + 0x8)) = 0;
          do {
            uVar2 = (&(*(uint *)(gen_frame + 0x18)))[(*(uint *)(gen_frame + 0x8))];
            (&(*(uint *)(gen_frame + 0x18)))[(*(uint *)(gen_frame + 0x8))] = uVar2 >> bVar8 | (*(uint *)(gen_frame + 0x0));
            (*(uint *)(gen_frame + 0x0)) = (uVar2 & ~(-1 << bVar8)) << GEN_SHC(0x20 - bVar8, 0x20 - bVar8);
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
          } while ((int)(*(uint *)(gen_frame + 0x8)) < 3);
          iVar16 = 2;
          puVar10 = ((uint *)(gen_frame + 0x20)) - iVar13;
          do {
            if (iVar16 < iVar13) {
              (&(*(uint *)(gen_frame + 0x18)))[iVar16] = 0;
            }
            else {
              (&(*(uint *)(gen_frame + 0x18)))[iVar16] = *puVar10;
            }
            puVar10 = puVar10 - 1;
            iVar16 = iVar16 - 1;
          } while (-1 < iVar16);
          IVar6 = (0);
        }
        else {
          (*(uint *)(gen_frame + 0x18)) = 0;
          (*(float *)(gen_frame + 0x1c)) = 0.0;
          ((uint *)(gen_frame + 0x20))[0] = 0;
          (*(uint *)(gen_frame + 0x18)) = 0x80000000;
          iVar13 = (int)(REFG(int, 0x134bef4) + (REFG(int, 0x134bef4) >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          (*(uint *)(gen_frame + 0x0)) = 0;
          (*(uint *)(gen_frame + 0x8)) = 0;
          do {
            uVar2 = (&(*(uint *)(gen_frame + 0x18)))[(*(uint *)(gen_frame + 0x8))];
            (&(*(uint *)(gen_frame + 0x18)))[(*(uint *)(gen_frame + 0x8))] = uVar2 >> bVar8 | (*(uint *)(gen_frame + 0x0));
            (*(uint *)(gen_frame + 0x0)) = (uVar2 & ~(-1 << bVar8)) << GEN_SHC(0x20 - bVar8, 0x20 - bVar8);
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
          } while ((int)(*(uint *)(gen_frame + 0x8)) < 3);
          iVar14 = 2;
          puVar10 = ((uint *)(gen_frame + 0x20)) - iVar13;
          do {
            if (iVar14 < iVar13) {
              (&(*(uint *)(gen_frame + 0x18)))[iVar14] = 0;
            }
            else {
              (&(*(uint *)(gen_frame + 0x18)))[iVar14] = *puVar10;
            }
            puVar10 = puVar10 - 1;
            iVar14 = iVar14 - 1;
          } while (-1 < iVar14);
          iVar14 = REFG(int, 0x134befc) + REFG(int, 0x134bee8);
          IVar6 = (1);
        }
        goto LAB_00c7cd69;
      }
      iVar13 = REFG(int, 0x134beec) - iVar13;
      (*(uint *)(gen_frame + 0x18)) = uVar2;
      (*(float *)(gen_frame + 0x1c)) = fVar15;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      (*(uint *)(gen_frame + 0x0)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0;
      do {
        uVar2 = (&(*(uint *)(gen_frame + 0x18)))[(*(uint *)(gen_frame + 0x8))];
        (&(*(uint *)(gen_frame + 0x18)))[(*(uint *)(gen_frame + 0x8))] = uVar2 >> bVar8 | (*(uint *)(gen_frame + 0x0));
        (*(uint *)(gen_frame + 0x0)) = (uVar2 & ~(-1 << bVar8)) << GEN_SHC(0x20 - bVar8, 0x20 - bVar8);
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0x8)) < 3);
      iVar13 = 2;
      puVar10 = ((uint *)(gen_frame + 0x20)) - iVar14;
      do {
        if (iVar13 < iVar14) {
          (&(*(uint *)(gen_frame + 0x18)))[iVar13] = 0;
        }
        else {
          (&(*(uint *)(gen_frame + 0x18)))[iVar13] = *puVar10;
        }
        puVar10 = puVar10 - 1;
        iVar13 = iVar13 - 1;
      } while (-1 < iVar13);
      iVar14 = REFG(int, 0x134bef0) - 1;
      iVar13 = (int)(REFG(int, 0x134bef0) + (REFG(int, 0x134bef0) >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)REFG(int, 0x134bef0) & 0x1f);
      puVar10 = &(*(uint *)(gen_frame + 0x18)) + iVar13;
      if ((*puVar10 & 1 << GEN_SHC(bVar8, bVar8)) != 0) {
        uVar2 = (&(*(uint *)(gen_frame + 0x18)))[iVar13] & ~(-1 << GEN_SHC(bVar8, bVar8));
        iVar16 = iVar13;
        while (uVar2 == 0) {
          iVar16 = iVar16 + 1;
          if (2 < iVar16) goto LAB_00c7cb5d;
          uVar2 = (&(*(uint *)(gen_frame + 0x18)))[iVar16];
        }
        iVar16 = (int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar12 = 1 << GEN_SHC(0x1f - ((byte)iVar14 & 0x1f), 0x1f - ((byte)iVar14 & 0x1f));
        uVar5 = (&(*(uint *)(gen_frame + 0x18)))[iVar16];
        uVar2 = uVar5 + uVar12;
        if ((uVar2 < uVar5) || (uVar2 < uVar12)) {
          bVar4 = true;
        }
        (&(*(uint *)(gen_frame + 0x18)))[iVar16] = uVar2;
        while ((iVar16 = iVar16 - 1, -1 < iVar16 && (bVar4))) {
          uVar5 = (&(*(uint *)(gen_frame + 0x18)))[iVar16];
          uVar2 = uVar5 + 1;
          bVar4 = false;
          if ((uVar2 < uVar5) || (uVar2 == 0)) {
            bVar4 = true;
          }
          (&(*(uint *)(gen_frame + 0x18)))[iVar16] = uVar2;
        }
      }
LAB_00c7cb5d: ;
      *puVar10 = *puVar10 & -1 << GEN_SHC(bVar8, bVar8);
      iVar13 = iVar13 + 1;
      if (iVar13 < 3) {
        puVar10 = &(*(uint *)(gen_frame + 0x18)) + iVar13;
        for (iVar14 = 3 - iVar13; iVar14 != 0; iVar14 = iVar14 - 1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar13 = (int)(REFG(int, 0x134bef4) + 1 + (REFG(int, 0x134bef4) + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      (*(uint *)(gen_frame + 0x0)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0;
      do {
        uVar2 = (&(*(uint *)(gen_frame + 0x18)))[(*(uint *)(gen_frame + 0x8))];
        (&(*(uint *)(gen_frame + 0x18)))[(*(uint *)(gen_frame + 0x8))] = uVar2 >> bVar8 | (*(uint *)(gen_frame + 0x0));
        (*(uint *)(gen_frame + 0x0)) = (uVar2 & ~(-1 << bVar8)) << GEN_SHC(0x20 - bVar8, 0x20 - bVar8);
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0x8)) < 3);
      iVar14 = 2;
      puVar10 = ((uint *)(gen_frame + 0x20)) - iVar13;
      do {
        if (iVar14 < iVar13) {
          (&(*(uint *)(gen_frame + 0x18)))[iVar14] = 0;
        }
        else {
          (&(*(uint *)(gen_frame + 0x18)))[iVar14] = *puVar10;
        }
        puVar10 = puVar10 - 1;
        iVar14 = iVar14 - 1;
      } while (-1 < iVar14);
    }
    iVar14 = 0;
    IVar6 = (2);
  }
LAB_00c7cd69: ;
  fVar15 = gen_bits2f(iVar14 << GEN_SHC(0x1f - bVar3, 0x1f - bVar3) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000
                      | (*(uint *)(gen_frame + 0x18)));
  if (REFG(int, 0x134bef8) == 0x40) {
    (*(float *)(((char *)(_F) + (1) * 4))) = fVar15;
    (*(float *)((char *)(_F))) = (*(float *)(gen_frame + 0x1c));
  }
  else if (REFG(int, 0x134bef8) == 0x20) {
    (*(float *)((char *)(_F))) = fVar15;
  }
  return IVar6;
}

/* ref: __ld12told */
GEN_LIB GEN_NOFRAME undefined4 F_00c7cdb6(GEN_P(undefined * _Ifp, unsigned int gen_a0), GEN_P(undefined * _Ld, unsigned int gen_a1))
{
  GEN_ENTER(0xc7cdb6u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * _Ifp = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Ld = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x24, 12);
  uint * puVar1;
  ushort uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  ((uint *)(gen_frame + 0x10))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  uVar2 = *(ushort *)(((uchar *)((char *)(_Ifp))) + 10);
  uVar4 = uVar2 & 0x7fff;
  uVar7 = *(uint *)(((uchar *)((char *)(_Ifp))) + 6);
  uVar6 = *(uint *)(((uchar *)((char *)(_Ifp))) + 2);
  uVar5 = (uint)*(ushort *)((uchar *)((char *)(_Ifp))) << 0x10;
  ((uint *)(gen_frame + 0x10))[0] = uVar7;
  ((uint *)(gen_frame + 0x10))[2] = uVar5;
  if (((int)uVar5 < 0) && ((uVar5 & 0x7fffffff) != 0)) {
    uVar7 = uVar6 + 1;
    bVar3 = false;
    if ((uVar7 < uVar6) || (uVar7 == 0)) {
      bVar3 = true;
    }
    (*(int *)(gen_frame + 0x8)) = 0;
    ((uint *)(gen_frame + 0x10))[1] = uVar7;
    do {
      uVar6 = ((uint *)(gen_frame + 0x10))[1];
      uVar7 = ((uint *)(gen_frame + 0x10))[0];
      if (!bVar3) goto LAB_00c7ce64;
      bVar3 = false;
      puVar1 = ((uint *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x8));
      uVar5 = *puVar1;
      uVar7 = uVar5 + 1;
      if ((uVar7 < uVar5) || (uVar7 == 0)) {
        bVar3 = true;
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) - 1;
      *puVar1 = uVar7;
    } while (-1 < (*(int *)(gen_frame + 0x8)));
    uVar7 = ((uint *)(gen_frame + 0x10))[0];
    if (bVar3) {
      uVar4 = uVar4 + 1;
      uVar7 = 0x80000000;
    }
  }
LAB_00c7ce64: ;
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)(uVar4 == 0x7fff);
  *(uint *)(((uchar *)((char *)(_Ld))) + 4) = uVar7;
  *(ushort *)(((uchar *)((char *)(_Ld))) + 8) = uVar2 & 0x8000 | uVar4;
  *(uint *)((uchar *)((char *)(_Ld))) = uVar6;
  return (*(undefined4 *)(gen_frame + 0x0));
}

/* ref: ___add_12 */
GEN_LIB GEN_NOFRAME unsigned int F_00c7ce93(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7ce93u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
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

/* ref: Global::___mtold12 */
GEN_LIB GEN_NOFRAME unsigned int F_00c7cf04(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7cf04u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x1c, 4);
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
  (*(short *)(gen_frame + 0x14)) = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    uVar6 = 0;
    param_3 = ((uint *)GEN_TOP(0x0));
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
          param_3 = ((uint *)GEN_TOP(((int)param_3 + 1)));
          puVar5[2] = (uint)param_3;
        }
      }
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
      puVar5[1] = uVar9;
      puVar5[2] = (uint)param_3;
    } while (param_2 != 0);
  }
  if (puVar5[2] == 0) {
    uVar9 = puVar5[1];
    sVar4 = (*(short *)(gen_frame + 0x14));
    do {
      (*(short *)(gen_frame + 0x14)) = sVar4 - 0x10;
      uVar6 = uVar9 >> 0x10;
      uVar9 = uVar9 << 0x10 | *puVar5 >> 0x10;
      puVar5[1] = uVar9;
      *puVar5 = *puVar5 << 0x10;
      sVar4 = (*(short *)(gen_frame + 0x14));
    } while (uVar6 == 0);
    puVar5[2] = uVar6;
  }
  uVar9 = puVar5[2];
  if ((uVar9 & 0x8000) == 0) {
    uVar6 = puVar5[1];
    sVar4 = (*(short *)(gen_frame + 0x14));
    do {
      (*(short *)(gen_frame + 0x14)) = sVar4 - 1;
      uVar10 = uVar9 * 2;
      uVar9 = uVar10 | uVar6 >> 0x1f;
      uVar6 = uVar6 * 2 | *puVar5 >> 0x1f;
      *puVar5 = *puVar5 * 2;
      puVar5[1] = uVar6;
      puVar5[2] = uVar9;
      sVar4 = (*(short *)(gen_frame + 0x14));
    } while ((uVar10 & 0x8000) == 0);
  }
  *((short *)GEN_TOP(((int)puVar5 + 10))) = (*(short *)(gen_frame + 0x14));
  return 0;
}

/* ref: __strnicoll_l */
GEN_LIB GEN_NOFRAME int F_00c7d0e8(GEN_P(char * _Str1, unsigned int gen_a0), GEN_P(char * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3))
{
  GEN_ENTER(0xc7d0e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * _Str1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x14, 12);
  int * piVar1;
  int iVar2;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  if (_MaxCount == 0) {
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == ((char *)GEN_TOP(0x0))) || (_Str2 == ((char *)GEN_TOP(0x0)))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if (*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0x10))) == (LPCWSTR)0x0) {
      iVar2 = F_00c4c4af(_Str1,_Str2,_MaxCount,(undefined *)((byte *)(gen_frame + 0x0)));
    }
    else {
      iVar2 = F_00c6fdae((undefined *)((byte *)(gen_frame + 0x0)),*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0x10))),0x1001,_Str1,_MaxCount,
                         _Str2,_MaxCount,*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 8))));
      if (iVar2 == 0) {
        piVar1 = F_00c51f85();
        *piVar1 = 0x16;
        goto LAB_00c7d1af;
      }
      iVar2 = iVar2 - 2;
    }
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
LAB_00c7d1af: ;
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

/* ref: __strnicoll */
GEN_LIB GEN_NOFRAME int F_00c7d1d2(GEN_P(char * _Str1, unsigned int gen_a0), GEN_P(char * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc7d1d2u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * _Str1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    iVar1 = F_00c4c591(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = F_00c7d0e8(_Str1,_Str2,_MaxCount,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: findenv */
GEN_LIB GEN_NOFRAME uint F_00c7d1fb(GEN_P(gen_size32 in_edi, unsigned int gen_a0), GEN_P(uchar * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7d1fbu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_size32 in_edi = (gen_size32)gen_a0;)
  GEN_PIN(uchar * param_2 = (uchar *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x15d6840);
  while( true ) {
    if (((uchar *)GEN_TOP(*piVar2)) == ((uchar *)GEN_TOP(0x0))) {
      return -((int)piVar2 - (int)REFG(int * PTR32, 0x15d6840) >> 2);
    }
    iVar1 = F_00c64543(param_2,((uchar *)GEN_TOP(*piVar2)),in_edi);
    if ((iVar1 == 0) &&
       ((*((char *)GEN_TOP((in_edi + *piVar2))) == '=' || (*((char *)GEN_TOP((in_edi + *piVar2))) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)REFG(int * PTR32, 0x15d6840) >> 2;
}

/* ref: copy_environ */
GEN_LIB GEN_NOFRAME uint F_00c7d24d(GEN_P(int * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc7d24du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  char * pcVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  puVar2 = ((undefined4 *)GEN_TOP(0x0));
  if (in_eax != ((int *)GEN_TOP(0x0))) {
    iVar1 = *in_eax;
    piVar4 = in_eax;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = ((undefined4 *)GEN_TOP(((int)puVar2 + 1)));
      iVar1 = *piVar4;
    }
    puVar2 = F_00c54c73((int)puVar2 + 1,4);
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
                    
      F_00c47ca5(9);
    }
    pcVar3 = ((char *)GEN_TOP(*in_eax));
    puVar5 = puVar2;
    if (pcVar3 != ((char *)GEN_TOP(0x0))) {
      do {
        pcVar3 = F_00c7081f(pcVar3);
        *puVar5 = pcVar3;
        puVar5 = puVar5 + 1;
        pcVar3 = *((char * PTR32 *)GEN_TOP((((int)in_eax - (int)puVar2) + (int)puVar5)));
      } while (pcVar3 != ((char *)GEN_TOP(0x0)));
    }
    *puVar5 = 0;
  }
  return (uint)puVar2;
}

/* ref: ___crtsetenv */
GEN_LIB GEN_NOFRAME int F_00c7d2ad(GEN_P(char * PTR32 * _POption, unsigned int gen_a0), GEN_P(int _Primary, unsigned int gen_a1))
{
  GEN_ENTER(0xc7d2adu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * PTR32 * _POption = (char * PTR32 *)(uintptr_t)gen_a0;)
  GEN_PIN(int _Primary = (int)gen_a1;)
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
  if (_POption == ((char * PTR32 *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  _Str = (uchar *)*_POption;
  if (((_Str == ((uchar *)GEN_TOP(0x0))) || (puVar2 = F_00c7e576(_Str,0x3d), puVar2 == ((uchar *)GEN_TOP(0x0)))) ||
     (_Str == puVar2)) {
LAB_00c7d335: ;
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    return -1;
  }
  bVar8 = puVar2[1] == '\0';
  if (REFG(int * PTR32, 0x15d6840) == REFG(int * PTR32, 0x15d6844)) {
    REFG(int * PTR32, 0x15d6840) = ((int *)GEN_TOP(F_00c7d24d(REFG(int * PTR32, 0x15d6840))));
  }
  if (REFG(int * PTR32, 0x15d6840) == ((int *)GEN_TOP(0x0))) {
    if ((_Primary == 0) || (REFG(undefined4 * PTR32, 0x15d6848) == ((undefined4 *)GEN_TOP(0x0)))) {
      if (bVar8) {
        return 0;
      }
      REFG(int * PTR32, 0x15d6840) = F_00c54c2e(4);
      if (REFG(int * PTR32, 0x15d6840) == ((int *)GEN_TOP(0x0))) {
        return -1;
      }
      *REFG(int * PTR32, 0x15d6840) = 0;
      if (REFG(undefined4 * PTR32, 0x15d6848) == ((undefined4 *)GEN_TOP(0x0))) {
        REFG(undefined4 * PTR32, 0x15d6848) = F_00c54c2e(4);
        if (REFG(undefined4 * PTR32, 0x15d6848) == ((undefined4 *)GEN_TOP(0x0))) {
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
  if (REFG(int * PTR32, 0x15d6840) == ((int *)GEN_TOP(0x0))) {
    return -1;
  }
  _Count = F_00c7d1fb((int)puVar2 - (int)_Str,_Str);
  if (((int)_Count < 0) || (*piVar1 == 0)) {
    if (bVar8) {
      F_00c4c68f(_Str);
      *_POption = ((char *)GEN_TOP(0x0));
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
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return -1;
    }
    piVar1[_Count] = (int)_Str;
    (piVar1 + _Count)[1] = 0;
    *_POption = ((char *)GEN_TOP(0x0));
  }
  else {
    piVar7 = piVar1 + _Count;
    F_00c4c68f(((undefined *)GEN_TOP(*piVar7)));
    if (!bVar8) {
      *piVar7 = (int)_Str;
      *_POption = ((char *)GEN_TOP(0x0));
      goto LAB_00c7d443;
    }
    while (*piVar7 != 0) {
      *piVar7 = piVar7[1];
      _Count = _Count + 1;
      piVar7 = piVar1 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar1 = F_00c54d0d(REFG(int * PTR32, 0x15d6840),_Count,4), piVar1 == ((int *)GEN_TOP(0x0)))) goto LAB_00c7d443;
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
                    
        F_00c4c299(0,0,0,0,0);
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
    *_POption = ((char *)GEN_TOP(0x0));
    return local_10;
  }
  return local_10;
}

/* ref: __wcsnicmp_l */
GEN_LIB GEN_NOFRAME int F_00c7d4ef(GEN_P(wchar_t * _Str1, unsigned int gen_a0), GEN_P(wchar_t * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3))
{
  GEN_ENTER(0xc7d4efu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x14, 12);
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
    if ((_Str1 == ((wchar_t *)GEN_TOP(0x0))) || (_Str2 == ((wchar_t *)GEN_TOP(0x0)))) {
      piVar4 = F_00c51f85();
      *piVar4 = 0x16;
      F_00c4c305();
      iVar3 = 0x7fffffff;
    }
    else {
      F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
      pwVar7 = _Str1;
      pwVar8 = _Str2;
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0x14))) == 0) {
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
          wVar1 = F_00c6d5b0(*pwVar7,(undefined *)((byte *)(gen_frame + 0x0)));
          uVar5 = (uint)wVar1;
          wVar2 = F_00c6d5b0(*pwVar8,(undefined *)((byte *)(gen_frame + 0x0)));
          pwVar7 = pwVar7 + 1;
          pwVar8 = pwVar8 + 1;
          _MaxCount = _MaxCount - 1;
          uVar6 = (uint)wVar2;
          if ((_MaxCount == 0) || (wVar1 == 0)) break;
        } while (wVar1 == wVar2);
      }
      iVar3 = uVar5 - uVar6;
      if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      }
    }
  }
  return iVar3;
}

/* ref: __wcsnicmp */
GEN_LIB GEN_NOFRAME int F_00c7d5d4(GEN_P(wchar_t * _Str1, unsigned int gen_a0), GEN_P(wchar_t * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc7d5d4u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  wchar_t * pwVar4;
  ushort uVar5;
  
  if (REFG(int, 0x15d6874) == 0) {
    iVar1 = 0;
    if (_MaxCount != 0) {
      if ((_Str1 == ((wchar_t *)GEN_TOP(0x0))) || (_Str2 == ((wchar_t *)GEN_TOP(0x0)))) {
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
    iVar1 = F_00c7d4ef(_Str1,_Str2,_MaxCount,((undefined *)GEN_TOP(0x0)));
  }
  return iVar1;
}

/* ref: _wcsncmp */
GEN_LIB GEN_NOFRAME int F_00c7d672(GEN_P(wchar_t * _Str1, unsigned int gen_a0), GEN_P(wchar_t * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc7d672u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
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
GEN_LIB GEN_NOFRAME float10 F_00c7d6ab(GEN_P(double param_1, double gen_a0))
{
  GEN_ENTER(0xc7d6abu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(double param_1 = (double)gen_a0;)
  return ((float10)GEN_TOD(ROUND(param_1)));
}

/* ref: __fgetwc_nolock */
GEN_LIB GEN_NOFRAME ushort F_00c7d6bf(unsigned int gen_a0)
{
  GEN_ENTER(0xc7d6bfu, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL(0x8, 8);
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
      puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2 >> 5)])));
    }
    if ((puVar4[0x24] & 0x7f) != 0) {
      piVar5 = &(*(int *)(((char *)(_File_00) + 4)));
      *piVar5 = *piVar5 - 1;
      if (*piVar5 < 0) {
        uVar3 = F_00c5cf59(_File_00);
      }
      else {
        uVar3 = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
        (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
      }
      if (uVar3 != 0xffffffff) {
        piVar5 = &(*(int *)(((char *)(_File_00) + 4)));
        *piVar5 = *piVar5 - 1;
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
          (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP((uint)(ushort)(*(undefined * PTR32 *)&gen_args[0])));
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
        puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2 >> 5)])));
      }
      if ((puVar4[4] & 0x80) != 0) {
        _SrcSizeInBytes = 1;
        piVar5 = &(*(int *)(((char *)(_File_00) + 4)));
        *piVar5 = *piVar5 - 1;
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
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = (char)uVar3;
        (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(char)uVar3);
        iVar2 = F_00c6e020(uVar3 & 0xff);
        if (iVar2 != 0) {
          piVar5 = &(*(int *)(((char *)(_File_00) + 4)));
          *piVar5 = *piVar5 - 1;
          if (*piVar5 < 0) {
            uVar3 = F_00c5cf59(_File_00);
          }
          else {
            uVar3 = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
            (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
          }
          if (uVar3 == 0xffffffff) {
            F_00c50cf0((int)(char)(*(undefined4 *)(gen_frame + 0x0)),_File_00);
            return 0xffff;
          }
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 1)) = (char)uVar3;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = CONCAT11((char)uVar3,(char)(*(undefined4 *)(gen_frame + 0x0)));
          _SrcSizeInBytes = 2;
        }
        iVar2 = F_00c7b31a((wchar_t *)&(*(undefined * PTR32 *)&gen_args[0]),(char *)&(*(undefined4 *)(gen_frame + 0x0)),_SrcSizeInBytes);
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
  *piVar5 = *piVar5 - 2;
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
GEN_LIB GEN_NOFRAME ushort F_00c7d86a(unsigned int gen_a0)
{
  GEN_ENTER(0xc7d86au, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x38, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  ushort wVar1;
  int * piVar2;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6b28);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc7d876;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6b28;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (ushort)(uintptr_t)gen_eh_resume(); }
  if ((*(undefined * PTR32 *)&gen_args[0]) == ((undefined *)GEN_TOP(0x0))) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    wVar1 = 0xffff;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
    wVar1 = F_00c7d6bf((*(undefined * PTR32 *)&gen_args[0]));
    (*(uint *)(gen_frame + 0x10)) = (uint)wVar1;
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c7d8cb((gen_frame + 0x2c));
    wVar1 = (ushort)(*(uint *)(gen_frame + 0x10));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return wVar1;
}

/* ref: FUN_00c7d8cb */
GEN_LIB GEN_NOFRAME uint F_00c7d8cb(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc7d8cbu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(*((undefined * PTR32 *)GEN_TOP((in_ebp + 8))));
  return extraout_EAX;
}

/* ref: FUN_00c7d8d5 */
GEN_LIB GEN_NOFRAME uint F_00c7d8d5(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7d8d5u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  wVar1 = F_00c7d86a(param_1);
  return CONCAT22(extraout_var,wVar1);
}

/* ref: __ungetwc_nolock */
GEN_LIB GEN_NOFRAME ushort F_00c7d8e0(GEN_P(ushort _Ch, unsigned int gen_a0), GEN_P(undefined * _File, unsigned int gen_a1))
{
  GEN_ENTER(0xc7d8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _Ch = (ushort)gen_a0;)
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  ushort * pwVar1;
  int iVar2;
  uint uVar3;
  undefined * puVar4;
  int eVar5;
  
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10);
  if (_Ch != 0xffff) {
    uVar3 = (*(int *)(((char *)(_File) + 12)));
    if (((uVar3 & 1) != 0) || (((char)uVar3 < '\0' && ((uVar3 & 2) == 0)))) {
      if ((*(char * PTR32 *)(((char *)(_File) + 8))) == ((char *)GEN_TOP(0x0))) {
        F_00c6e658(_File);
      }
      if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
        iVar2 = F_00c5d07b(_File);
        if ((iVar2 == -1) || (iVar2 = F_00c5d07b(_File), iVar2 == -2)) {
          puVar4 = &REFG(undefined, 0x134b280);
        }
        else {
          iVar2 = F_00c5d07b(_File);
          uVar3 = F_00c5d07b(_File);
          puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2 >> 5)])));
        }
        if ((puVar4[4] & 0x80) != 0) {
          iVar2 = F_00c5d07b(_File);
          if ((iVar2 == -1) || (iVar2 = F_00c5d07b(_File), iVar2 == -2)) {
            puVar4 = &REFG(undefined, 0x134b280);
          }
          else {
            iVar2 = F_00c5d07b(_File);
            uVar3 = F_00c5d07b(_File);
            puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2 >> 5)])));
          }
          if ((puVar4[0x24] & 0x7f) == 0) {
            eVar5 = F_00c7af62(&(*(int *)(gen_frame + 0x0)),(char *)((ushort *)(gen_frame + 0x4)),5,_Ch);
            if (eVar5 != 0) {
              return 0xffff;
            }
          }
          else {
            ((ushort *)(gen_frame + 0x4))[0] = _Ch;
            (*(int *)(gen_frame + 0x0)) = 2;
          }
          iVar2 = (*(int *)(gen_frame + 0x0));
          if ((*(char * PTR32 *)((char *)(_File))) < (*(char * PTR32 *)(((char *)(_File) + 8))) + (*(int *)(gen_frame + 0x0))) {
            if ((*(int *)(((char *)(_File) + 4))) != 0) {
              return 0xffff;
            }
            if ((*(int *)(((char *)(_File) + 24))) < (*(int *)(gen_frame + 0x0))) {
              return 0xffff;
            }
            (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)(((char *)(_File) + 8))) + (*(int *)(gen_frame + 0x0));
          }
          while (iVar2 = iVar2 - 1, -1 < iVar2) {
            (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) - 1;
            *(*(char * PTR32 *)((char *)(_File))) = *((char *)GEN_TOP(((int)((ushort *)(gen_frame + 0x4)) + iVar2)));
          }
          (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) + (*(int *)(gen_frame + 0x0));
          (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffffffefU | 1;
          return _Ch;
        }
      }
      if ((*(char * PTR32 *)((char *)(_File))) < (*(char * PTR32 *)(((char *)(_File) + 8))) + 2) {
        if ((*(int *)(((char *)(_File) + 4))) != 0) {
          return 0xffff;
        }
        if ((uint)(*(int *)(((char *)(_File) + 24))) < 2) {
          return 0xffff;
        }
        (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)(((char *)(_File) + 8))) + 2;
      }
      (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) - 2;
      pwVar1 = (ushort *)(*(char * PTR32 *)((char *)(_File)));
      if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
        *pwVar1 = _Ch;
      }
      else if (*pwVar1 != _Ch) {
        (*(char * PTR32 *)((char *)(_File))) = (char *)(pwVar1 + 1);
        return 0xffff;
      }
      (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) + 2;
      (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffffffefU | 1;
      return _Ch;
    }
  }
  return 0xffff;
}

/* ref: FUN_00c7daff */
GEN_LIB GEN_NOFRAME uint F_00c7daff(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc7daffu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(*((undefined * PTR32 *)GEN_TOP((in_ebp + 0xc))));
  return extraout_EAX;
}

/* ref: _iswctype */
GEN_LIB GEN_NOFRAME int F_00c7db09(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7db09u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL(0x8, 8);
  ushort uVar1;
  BOOL BVar2;
  
  if ((*(ushort *)&gen_args[0]) == 0xffff) {
    return 0;
  }
  if ((*(ushort *)&gen_args[0]) < 0x100) {
    uVar1 = *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134b114) + (uint)(*(ushort *)&gen_args[0]) * 2)));
  }
  else {
    BVar2 = gen_imp_GetStringTypeW(1,(LPCWSTR)&(*(ushort *)&gen_args[0]),1,(LPWORD)&(*(undefined4 *)(gen_frame + 0x0)));
    if (BVar2 == 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
    }
    uVar1 = (ushort)(*(undefined4 *)(gen_frame + 0x0));
  }
  return (uint)(uVar1 & (*(ushort *)&gen_args[1]));
}

/* ref: FUN_00c7db5e */
GEN_LIB GEN_NOFRAME uint F_00c7db5e(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7db5eu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c7db09((ushort)param_1,(ushort)param_2);
  return uVar1;
}

/* ref: __iswctype_l */
GEN_LIB GEN_NOFRAME int F_00c7db69(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(ushort _Type, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2))
{
  GEN_ENTER(0xc7db69u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(ushort _Type = (ushort)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,_Type);
  return iVar1;
}

/* ref: FUN_00c7db7d */
GEN_LIB GEN_NOFRAME uint F_00c7db7d(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7db7du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0;
}

/* ref: __wgetdcwd_nolock */
GEN_LIB GEN_NOFRAME uint F_00c7db80(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7db80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_FRAME_DECL(0x18, 8);
  int iVar1;
  ulong * puVar2;
  int * piVar3;
  uint uVar4;
  DWORD DVar5;
  undefined * pvVar6;
  gen_size32 _Count;
  
  (*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  if (param_1 == 0) {
    uVar4 = F_00c6d446();
  }
  else {
    iVar1 = F_00c80a0d(param_1);
    uVar4 = param_1;
    if (iVar1 == 0) {
      puVar2 = F_00c51f98();
      *puVar2 = 0xf;
      piVar3 = F_00c51f85();
      *piVar3 = 0xd;
      goto LAB_00c7dbc3;
    }
  }
  if (param_2 == ((undefined2 *)GEN_TOP(0x0))) {
    (*(gen_size32 *)(gen_frame + 0x4)) = 0;
  }
  else {
    if ((int)param_3 < 1) {
      piVar3 = F_00c51f85();
      *piVar3 = 0x16;
LAB_00c7dbc3: ;
      F_00c4c305();
      return 0;
    }
    (*(gen_size32 *)(gen_frame + 0x4)) = param_3;
    *param_2 = 0;
  }
  if (uVar4 == 0) {
    ((short *)(gen_frame + 0x8))[0] = 0x2e;
    ((short *)(gen_frame + 0x8))[1] = 0;
  }
  else {
    ((short *)(gen_frame + 0x8))[1] = 0x3a;
    ((short *)(gen_frame + 0x8))[2] = 0x2e;
    ((short *)(gen_frame + 0x8))[0] = (short)uVar4 + 0x40;
    ((short *)(gen_frame + 0x8))[3] = 0;
  }
  DVar5 = gen_imp_GetFullPathNameW(((short *)(gen_frame + 0x8)),(*(gen_size32 *)(gen_frame + 0x4)),param_2,((undefined1 *)(gen_frame + 0x0)));
  if (DVar5 != 0) {
    if (param_2 != ((undefined2 *)GEN_TOP(0x0))) {
      if ((int)(*(gen_size32 *)(gen_frame + 0x4)) <= (int)DVar5) {
        piVar3 = F_00c51f85();
        *piVar3 = 0x22;
        *param_2 = 0;
        return 0;
      }
      return (uint)param_2;
    }
    _Count = param_3;
    if ((int)param_3 < (int)DVar5) {
      _Count = DVar5;
    }
    pvVar6 = F_00c645f4(_Count,2);
    if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
      piVar3 = F_00c51f85();
      *piVar3 = 0xc;
      puVar2 = F_00c51f98();
      *puVar2 = 8;
      return 0;
    }
    DVar5 = gen_imp_GetFullPathNameW(((short *)(gen_frame + 0x8)),_Count,pvVar6,((undefined1 *)(gen_frame + 0x0)));
    if ((DVar5 != 0) && ((int)DVar5 < (int)_Count)) {
      return (uint)pvVar6;
    }
  }
  DVar5 = gen_imp_GetLastError();
  F_00c51fab(DVar5);
  return 0;
}

/* ref: __wgetcwd */
GEN_LIB GEN_NOFRAME wchar_t * F_00c7dcbc(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7dcbcu, gen_a0, gen_a1, 0u, 0u);
  GEN_FRAME_DECL(0x3c, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  wchar_t * pwVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6b68);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc7dcc8;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6b68;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (wchar_t *)(uintptr_t)gen_eh_resume(); }
  F_00c5aa4f(7);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
  pwVar1 = ((wchar_t *)GEN_TOP(F_00c7db80(0,(*(wchar_t * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]))));
  (*(wchar_t * PTR32 *)(gen_frame + 0x10)) = pwVar1;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c7dcfc();
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return (*(wchar_t * PTR32 *)(gen_frame + 0x10));
}

/* ref: FUN_00c7dcfc */
GEN_LIB GEN_NOFRAME uint F_00c7dcfc(void)
{
  GEN_ENTER(0xc7dcfcu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c7dd46 */
GEN_LIB GEN_NOFRAME uint F_00c7dd46(void)
{
  GEN_ENTER(0xc7dd46u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: __wcsicmp_l */
GEN_LIB GEN_NOFRAME int F_00c7dd4f(GEN_P(wchar_t * _Str1, unsigned int gen_a0), GEN_P(wchar_t * _Str2, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2))
{
  GEN_ENTER(0xc7dd4fu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  ushort wVar1;
  ushort wVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t * pwVar7;
  wchar_t * pwVar8;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  if (_Str1 == ((wchar_t *)GEN_TOP(0x0))) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  else if (_Str2 == ((wchar_t *)GEN_TOP(0x0))) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  else {
    pwVar7 = _Str1;
    pwVar8 = _Str2;
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0x14))) == 0) {
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
        wVar1 = F_00c6d5b0(*pwVar7,(undefined *)((byte *)(gen_frame + 0x0)));
        uVar5 = (uint)wVar1;
        pwVar7 = pwVar7 + 1;
        wVar2 = F_00c6d5b0(*pwVar8,(undefined *)((byte *)(gen_frame + 0x0)));
        pwVar8 = pwVar8 + 1;
        uVar6 = (uint)wVar2;
        if (wVar1 == 0) break;
      } while (wVar1 == wVar2);
    }
    iVar4 = uVar5 - uVar6;
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar4;
}

/* ref: __wcsicmp */
GEN_LIB GEN_NOFRAME int F_00c7de52(GEN_P(wchar_t * _Str1, unsigned int gen_a0), GEN_P(wchar_t * _Str2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7de52u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Str1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * _Str2 = (wchar_t *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  wchar_t * pwVar4;
  ushort uVar5;
  
  if (REFG(int, 0x15d6874) == 0) {
    if ((_Str1 == ((wchar_t *)GEN_TOP(0x0))) || (_Str2 == ((wchar_t *)GEN_TOP(0x0)))) {
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
    iVar2 = F_00c7dd4f(_Str1,_Str2,((undefined *)GEN_TOP(0x0)));
  }
  return iVar2;
}

/* ref: _wcsrchr */
GEN_LIB GEN_NOFRAME wchar_t * F_00c7dedd(GEN_P(wchar_t * _Str, unsigned int gen_a0), GEN_P(wchar_t _Ch, unsigned int gen_a1))
{
  GEN_ENTER(0xc7deddu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Str = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t _Ch = (wchar_t)gen_a1;)
  wchar_t wVar1;
  wchar_t * pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  do {
    pwVar2 = pwVar2 - 1;
    if (pwVar2 == _Str) break;
  } while (*pwVar2 != _Ch);
  if (*pwVar2 != _Ch) {
    pwVar2 = ((wchar_t *)GEN_TOP(0x0));
  }
  return pwVar2;
}

/* ref: __fstat32 */
GEN_LIB GEN_NOFRAME uint F_00c7df0b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc7df0bu, gen_a0, gen_a1, 0u, 0u);
  GEN_FRAME_DECL(0x84, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x7c);
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
  (*(undefined4 *)(gen_frame + 0x74)) = 100;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x70)) = &REFG(undefined, 0x12f6ba8);
  (*(undefined4 *)(gen_frame + 0x6c)) = 0xc7df17;
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if ((*(uint * PTR32 *)&gen_args[1]) == ((uint *)GEN_TOP(0x0))) {
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
      if ((*((byte *)GEN_TOP((*piVar4 + 4 + iVar9))) & 1) != 0) {
        F_00c6d817((*(uint *)(gen_frame + 0xc)));
        (*(undefined * PTR32 volatile *)(gen_frame + 0x70)) = ((undefined *)GEN_TOP(0x0));
        if ((*((byte *)GEN_TOP((*piVar4 + 4 + iVar9))) & 1) == 0) {
LAB_00c7dfd2: ;
          piVar4 = F_00c51f85();
          *piVar4 = 9;
LAB_00c7dfdd: ;
          (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        }
        else {
          DVar6 = gen_imp_GetFileType(*((HANDLE *)GEN_TOP((*piVar4 + iVar9))));
          uVar5 = DVar6 & 0xffff7fff;
          if (uVar5 == 1) {
            *((undefined2 *)GEN_TOP(((int)puVar1 + 6))) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *((undefined2 *)GEN_TOP(((int)puVar1 + 10))) = 0;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 2) = 1;
            BVar7 = gen_imp_GetFileInformationByHandle(*((HANDLE *)GEN_TOP((*piVar4 + iVar9))),((undefined *)(gen_frame + 0x14)));
            if (BVar7 == 0) {
LAB_00c7e01b: ;
              DVar6 = gen_imp_GetLastError();
              F_00c51fab(DVar6);
              goto LAB_00c7dfdd;
            }
            if (((byte)(*(DWORD *)((char *)((undefined *)(gen_frame + 0x14)))) & 1) == 0) {
              uVar2 = *((ushort *)GEN_TOP(((int)puVar1 + 6))) | 0x1b6;
            }
            else {
              uVar2 = *((ushort *)GEN_TOP(((int)puVar1 + 6))) | 0x124;
            }
            *((ushort *)GEN_TOP(((int)puVar1 + 6))) = uVar2;
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x14)) + 20))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x14)) + 20) + 4))))) == 0)) {
              puVar1[7] = 0;
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x14)) + 20))),&(*(_FILETIME *)(gen_frame + 0x0)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x0)),((_SYSTEMTIME *)(gen_frame + 0x48))), BVar7 == 0))
              goto LAB_00c7dfdd;
              uVar5 = F_00c7e237((uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMonth,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wHour,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wSecond,-1);
              puVar1[7] = uVar5;
            }
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x14)) + 12))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x14)) + 12) + 4))))) == 0)) {
              uVar5 = puVar1[7];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x14)) + 12))),&(*(_FILETIME *)(gen_frame + 0x0)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x0)),((_SYSTEMTIME *)(gen_frame + 0x48))), BVar7 == 0))
              goto LAB_00c7dfdd;
              uVar5 = F_00c7e237((uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMonth,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wHour,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wSecond,-1);
            }
            puVar1[6] = uVar5;
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x14)) + 4))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x14)) + 4) + 4))))) == 0)) {
              uVar5 = puVar1[7];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x14)) + 4))),&(*(_FILETIME *)(gen_frame + 0x0)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x0)),((_SYSTEMTIME *)(gen_frame + 0x48))), BVar7 == 0))
              goto LAB_00c7dfdd;
              uVar5 = F_00c7e237((uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMonth,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wHour,
                                       (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wSecond,-1);
            }
            puVar1[8] = uVar5;
            puVar1[5] = (*(DWORD *)(((char *)((undefined *)(gen_frame + 0x14)) + 36)));
            *((ushort *)GEN_TOP(((int)puVar1 + 6))) = *((ushort *)GEN_TOP(((int)puVar1 + 6))) | 0x8000;
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
            *((undefined2 *)GEN_TOP(((int)puVar1 + 6))) = uVar8;
            *puVar1 = (*(uint *)(gen_frame + 0xc));
            puVar1[4] = (*(uint *)(gen_frame + 0xc));
            *(undefined2 *)(puVar1 + 2) = 1;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *((undefined2 *)GEN_TOP(((int)puVar1 + 10))) = 0;
            puVar1[8] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            if (uVar5 == 2) {
              puVar1[5] = 0;
            }
            else {
              BVar7 = gen_imp_PeekNamedPipe(*((HANDLE *)GEN_TOP((*piVar4 + iVar9))),(LPVOID)0x0,0,(LPDWORD)0x0,
                                    &(*(uint *)(gen_frame + 0x8)),(LPDWORD)0x0);
              puVar1[5] = -(uint)(BVar7 != 0) & (*(uint *)(gen_frame + 0x8));
            }
          }
        }
        (*(undefined * PTR32 volatile *)(gen_frame + 0x70)) = ((undefined *)GEN_TOP(0xfffffffe));
        F_00c7e22d((gen_frame + 0x74));
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
  uVar5 = F_00c7e488((gen_frame + 0x74));
  return uVar5;
}

/* ref: FUN_00c7e22d */
GEN_LIB GEN_NOFRAME unsigned int F_00c7e22d(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc7e22du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c6d8b6(*((int *)GEN_TOP((in_ebp - 0x68))));
  return;
}

/* ref: ___loctotime32_t */
GEN_LIB GEN_NOFRAME int F_00c7e237(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xc7e237u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_FRAME_DECL(0x40, 0);
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
  (*(gen_long *)(gen_frame + 0x4)) = 0;
  (*(gen_long *)(gen_frame + 0x8)) = 0;
  (*(gen_long *)(gen_frame + 0x0)) = 0;
  if ((((((int)uVar6 < 0x46) || (0x8a < (int)uVar6)) || (0xb < param_2 - 1U)) ||
      ((0x17 < (uint)param_4 || (0x3b < (uint)param_5)))) ||
     ((0x3b < (uint)param_6 || (param_3 < 1)))) {
LAB_00c7e41e: ;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    iVar5 = -1;
  }
  else {
    if ((&REFG(undefined4, 0x134bc34))[(int)(param_2)] - *(int *)(&REFG(undefined, 0x134bc30) + param_2 * 4) < param_3) {
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
    eVar2 = F_00c64fcb(&(*(gen_long *)(gen_frame + 0x4)));
    if (((eVar2 != 0) || (eVar2 = F_00c64ff8(&(*(gen_long *)(gen_frame + 0x8))), eVar2 != 0)) ||
       (eVar2 = F_00c65025(&(*(gen_long *)(gen_frame + 0x0))), eVar2 != 0)) {
                    
      F_00c4c299(0,0,0,0,0);
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 28))) = (*(int *)(gen_frame + 0x10));
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 20))) = uVar6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 8))) = param_4;
    iVar5 = (((uVar6 * 0x16d +
              ((int)(param_1 - 0x76d + (param_1 - 0x76d >> 0x1f & 3U)) >> 2) + (*(int *)(gen_frame + 0x10)) +
              ((param_1 - 0x641) / 400 - (param_1 - 0x76d) / 100)) * 0x18 + param_4) * 0x3c +
            param_5) * 0x3c + (*(gen_long *)(gen_frame + 0x0)) + 0x7c558180 + param_6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 16))) = (*(int *)(gen_frame + 0xc)) - 1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 4))) = param_5;
    (*(int *)((char *)((undefined *)(gen_frame + 0x14)))) = param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && ((*(gen_long *)(gen_frame + 0x4)) != 0)) && (iVar3 = F_00c64dec(((undefined *)(gen_frame + 0x14))), iVar3 != 0)))) {
      iVar5 = iVar5 + (*(gen_long *)(gen_frame + 0x8));
    }
  }
  return iVar5;
}

/* ref: FUN_00c7e488 */
GEN_LIB GEN_NOFRAME uint F_00c7e488(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc7e488u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint in_EAX = 0;
  undefined4 uStack_4;
  
  uStack_4 = 0xc7e492;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return in_EAX;
}

/* ref: ___crtLCMapStringW */
GEN_LIB GEN_NOFRAME int F_00c7e497(GEN_P(LPCWSTR _LocaleName, unsigned int gen_a0), GEN_P(DWORD _DWMapFlag, unsigned int gen_a1), GEN_P(LPCWSTR _LpSrcStr, unsigned int gen_a2), GEN_P(int _CchSrc, unsigned int gen_a3), GEN_P(LPWSTR _LpDestStr, unsigned int gen_a4), GEN_P(int _CchDest, unsigned int gen_a5))
{
  GEN_ENTER(0xc7e497u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(LPCWSTR _LocaleName = (LPCWSTR)gen_a0;)
  GEN_PIN(DWORD _DWMapFlag = (DWORD)gen_a1;)
  GEN_PIN(LPCWSTR _LpSrcStr = (LPCWSTR)gen_a2;)
  GEN_PIN(int _CchSrc = (int)gen_a3;)
  GEN_PIN(LPWSTR _LpDestStr = (LPWSTR)gen_a4;)
  GEN_PIN(int _CchDest = (int)gen_a5;)
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
GEN_LIB GEN_NOFRAME uchar * F_00c7e4c6(GEN_P(uchar * _Str, unsigned int gen_a0), GEN_P(uint _Ch, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2))
{
  GEN_ENTER(0xc7e4c6u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uchar * _Str = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uint _Ch = (uint)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  byte bVar1;
  byte bVar2;
  int * piVar3;
  byte * pbVar4;
  byte * pbVar5;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  if (_Str == ((uchar *)GEN_TOP(0x0))) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    pbVar4 = ((byte *)GEN_TOP(0x0));
  }
  else {
    pbVar4 = _Str;
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 8))) == 0) {
      pbVar4 = ((byte *)GEN_TOP(F_00c51da0(_Str,(char)_Ch)));
    }
    else {
      while( true ) {
        bVar2 = *pbVar4;
        if (bVar2 == 0) break;
        if ((*((byte *)GEN_TOP((bVar2 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) == 0) {
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
        if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
        }
        return ((uchar *)GEN_TOP(0x0));
      }
    }
LAB_00c7e556: ;
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return pbVar4;
}

/* ref: __mbschr */
GEN_LIB GEN_NOFRAME uchar * F_00c7e576(GEN_P(uchar * _Str, unsigned int gen_a0), GEN_P(uint _Ch, unsigned int gen_a1))
{
  GEN_ENTER(0xc7e576u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uchar * _Str = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uint _Ch = (uint)gen_a1;)
  uchar * puVar1;
  
  puVar1 = F_00c7e4c6(_Str,_Ch,((undefined *)GEN_TOP(0x0)));
  return puVar1;
}

/* ref: __dospawn */
GEN_LIB GEN_NOFRAME int F_00c7e58d(GEN_P(int param_1, unsigned int gen_a0), GEN_P(LPCSTR param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(LPVOID param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc7e58du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(LPCSTR param_2 = (LPCSTR)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(LPVOID param_4 = (LPVOID)gen_a3;)
  GEN_FRAME_DECL(0x6c, 4);
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
  
  (*(DWORD *)(gen_frame + 0x5c)) = 0;
  (*(char *)(gen_frame + 0x67)) = '\0';
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
      (*(char *)(gen_frame + 0x67)) = '\x01';
    }
  }
  (*(char * PTR32 *)(gen_frame + 0x58)) = param_3;
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
  F_00c48350(&(*(_STARTUPINFOA *)(gen_frame + 0x0)),0,0x44);
  (*(_STARTUPINFOA *)(gen_frame + 0x0)).cb = 0x44;
  uVar17 = REFG(undefined4, 0x15e4190);
  uVar6 = REFG(undefined4, 0x15e4190);
  if (REFG(undefined4, 0x15e4190) != 0) {
    do {
      uVar6 = uVar6 - 1;
      if (*((char *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)uVar6 >> 5)] + 4 + (uVar6 & 0x1f) * 0x40))) != '\0') break;
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
  (*(_STARTUPINFOA *)(gen_frame + 0x0)).cbReserved2 = uVar3;
  puVar7 = F_00c54c73((uint)uVar3,1);
  (*(_STARTUPINFOA *)(gen_frame + 0x0)).lpReserved2 = (LPBYTE)puVar7;
  if (puVar7 == ((uint *)GEN_TOP(0x0))) goto LAB_00c7e77e;
  *puVar7 = uVar17;
  puVar14 = puVar7 + 1;
  puVar9 = ((undefined4 *)GEN_TOP(((int)puVar7 + uVar17 + 4)));
  (*(uint *)(gen_frame + 0x60)) = 0;
  if (0 < (int)uVar17) {
    do {
      puVar8 = ((undefined4 *)GEN_TOP((((*(uint *)(gen_frame + 0x60)) & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)(*(uint *)(gen_frame + 0x60)) >> 5)])));
      bVar1 = *(byte *)(puVar8 + 1);
      if ((bVar1 & 0x10) == 0) {
        *(byte *)puVar14 = bVar1;
        *puVar9 = *puVar8;
      }
      else {
        *(byte *)puVar14 = 0;
        *puVar9 = 0xffffffff;
      }
      uVar6 = (*(uint *)(gen_frame + 0x60)) + 1;
      (*(uint *)(gen_frame + 0x60)) = uVar6;
      puVar14 = ((uint *)GEN_TOP(((int)puVar14 + 1)));
      puVar9 = puVar9 + 1;
    } while ((int)uVar6 < (int)uVar17);
  }
  if ((*(char *)(gen_frame + 0x67)) != '\0') {
    puVar14 = puVar7 + 1;
    iVar15 = 0;
    puVar9 = ((undefined4 *)GEN_TOP(((int)puVar7 + uVar17 + 4)));
    while( true ) {
      uVar6 = uVar17;
      if (2 < (int)uVar17) {
        uVar6 = 3;
      }
      if ((int)uVar6 <= iVar15) break;
      *(undefined1 *)puVar14 = 0;
      *puVar9 = 0xffffffff;
      iVar15 = iVar15 + 1;
      puVar14 = ((uint *)GEN_TOP(((int)puVar14 + 1)));
      puVar9 = puVar9 + 1;
    }
    (*(DWORD *)(gen_frame + 0x5c)) = 8;
  }
  puVar10 = F_00c51f98();
  *puVar10 = 0;
  BVar11 = gen_imp_CreateProcessA(param_2,(*(char * PTR32 *)(gen_frame + 0x58)),(GEN_LPANY)0x0,(GEN_LPANY)0x0,1,
                          (*(DWORD *)(gen_frame + 0x5c)),param_4,(LPCSTR)0x0,&(*(_STARTUPINFOA *)(gen_frame + 0x0)),((undefined *)(gen_frame + 0x44)));
  DVar12 = gen_imp_GetLastError();
  F_00c4c68f((*(_STARTUPINFOA *)(gen_frame + 0x0)).lpReserved2);
  if (BVar11 == 0) {
    F_00c51fab(DVar12);
    return -1;
  }
  if (param_1 == 2) {
                    
    F_00c47c71(0);
  }
  if (param_1 == 0) {
    gen_imp_WaitForSingleObject((*(HANDLE *)((char *)((undefined *)(gen_frame + 0x44)))),0xffffffff);
    gen_imp_GetExitCodeProcess((*(HANDLE *)((char *)((undefined *)(gen_frame + 0x44)))),(LPDWORD)&(*(HANDLE *)(gen_frame + 0x54)));
    pvVar2 = (*(HANDLE *)(gen_frame + 0x54));
  }
  else {
    pvVar16 = (*(HANDLE *)((char *)((undefined *)(gen_frame + 0x44))));
    pvVar2 = (HANDLE)0x0;
    if (param_1 != 4) goto LAB_00c7e775;
  }
  pvVar16 = pvVar2;
  gen_imp_CloseHandle((*(HANDLE *)((char *)((undefined *)(gen_frame + 0x44)))));
LAB_00c7e775: ;
  gen_imp_CloseHandle((*(HANDLE *)(((char *)((undefined *)(gen_frame + 0x44)) + 4))));
  return (int)pvVar16;
}

/* ref: __cenvarg */
GEN_LIB GEN_NOFRAME int F_00c7e791(GEN_P(char * PTR32 * _Argv, unsigned int gen_a0), GEN_P(char * PTR32 * _Env, unsigned int gen_a1), GEN_P(char * PTR32 * _ArgBlk, unsigned int gen_a2), GEN_P(char * PTR32 * _EnvBlk, unsigned int gen_a3), GEN_P(char * _Name, unsigned int gen_a4))
{
  GEN_ENTER(0xc7e791u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * PTR32 * _Argv = (char * PTR32 *)(uintptr_t)gen_a0;)
  GEN_PIN(char * PTR32 * _Env = (char * PTR32 *)(uintptr_t)gen_a1;)
  GEN_PIN(char * PTR32 * _ArgBlk = (char * PTR32 *)(uintptr_t)gen_a2;)
  GEN_PIN(char * PTR32 * _EnvBlk = (char * PTR32 *)(uintptr_t)gen_a3;)
  GEN_PIN(char * _Name = (char *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x44, 12);
  bool bVar1;
  char * pcVar2;
  int * piVar3;
  ulong * puVar4;
  int eVar5;
  gen_size32 sVar6;
  int iVar7;
  gen_size32 sVar8;
  char cVar9;
  char * PTR32 * ppcVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  *(undefined4 *)((uchar *)(gen_frame + 0x30)) = (*(undefined4 *)REFP(0x1127ff0));
  *(undefined4 *)((char *)(gen_frame + 0x34)) = (*(undefined4 *)REFP(0x1127ff4));
  *(undefined2 *)((char *)(gen_frame + 0x38)) = (*(undefined2 *)REFP(0x1127ff8));
  (*(char *)(gen_frame + 0x3a)) = ((char *)REFP(0x1127fef))[0xb];
  pcVar2 = *_Argv;
  iVar11 = 0;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = ((char *)GEN_TOP(0x0));
  bVar1 = false;
  sVar8 = 2;
  ppcVar10 = _Argv;
  while (pcVar2 != ((char *)GEN_TOP(0x0))) {
    sVar6 = F_00c552f0(pcVar2);
    ppcVar10 = ppcVar10 + 1;
    sVar8 = sVar8 + 1 + sVar6;
    pcVar2 = *ppcVar10;
  }
  pcVar2 = F_00c54c73(sVar8,1);
  *_ArgBlk = pcVar2;
  if (pcVar2 == ((char *)GEN_TOP(0x0))) {
    *_EnvBlk = ((char *)GEN_TOP(0x0));
    piVar3 = F_00c51f85();
    *piVar3 = 0xc;
    puVar4 = F_00c51f98();
    *puVar4 = 8;
    return -1;
  }
  eVar5 = F_00c4b6eb(&(*(char * PTR32 *)(gen_frame + 0x2c)),((gen_size32 *)GEN_TOP(0x0)),(char *)((uchar *)(gen_frame + 0x30)));
  if (eVar5 == 0) {
    sVar6 = F_00c552f0((char *)((uchar *)(gen_frame + 0x30)));
    (*(int *)(gen_frame + 0x10)) = sVar6 + 2;
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) != ((char *)GEN_TOP(0x0))) {
      sVar6 = F_00c552f0((*(char * PTR32 *)(gen_frame + 0x2c)));
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + sVar6;
    }
    if (_Env == ((char * PTR32 *)GEN_TOP(0x0))) {
      *_EnvBlk = ((char *)GEN_TOP(0x0));
    }
    else {
      iVar7 = 2;
      pcVar2 = *_Env;
      ppcVar10 = _Env;
      while (pcVar2 != ((char *)GEN_TOP(0x0))) {
        sVar6 = F_00c552f0(pcVar2);
        ppcVar10 = ppcVar10 + 1;
        iVar7 = iVar7 + 1 + sVar6;
        pcVar2 = *ppcVar10;
      }
      if ((REFG(char * PTR32, 0x15d6864) == ((char *)GEN_TOP(0x0))) &&
         (REFG(char * PTR32, 0x15d6864) = F_00c5be6b(), REFG(char * PTR32, 0x15d6864) == ((char *)GEN_TOP(0x0))))
      goto LAB_00c7e8b1;
      (*(int *)(gen_frame + 0x24)) = 0;
      if (*REFG(char * PTR32, 0x15d6864) != '\0') {
        cVar9 = *REFG(char * PTR32, 0x15d6864);
        pcVar2 = REFG(char * PTR32, 0x15d6864);
        do {
          if (cVar9 == '=') break;
          sVar6 = F_00c552f0(pcVar2);
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1 + sVar6;
          pcVar2 = REFG(char * PTR32, 0x15d6864) + (*(int *)(gen_frame + 0x24));
          cVar9 = *pcVar2;
        } while (cVar9 != '\0');
      }
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x24));
      pcVar2 = REFG(char * PTR32, 0x15d6864) + (*(int *)(gen_frame + 0x24));
      while ((((*pcVar2 == '=' && (pcVar2[1] != '\0')) && (pcVar2[2] == ':')) && (pcVar2[3] == '='))
            ) {
        sVar6 = F_00c552f0(pcVar2 + 4);
        (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 5 + sVar6;
        pcVar2 = REFG(char * PTR32, 0x15d6864) + (*(int *)(gen_frame + 0x18));
      }
      (*(gen_size32 *)(gen_frame + 0x0)) = iVar7 + ((*(int *)(gen_frame + 0x18)) - (*(int *)(gen_frame + 0x24)));
      for (ppcVar10 = _Env; *ppcVar10 != ((char *)GEN_TOP(0x0)); ppcVar10 = ppcVar10 + 1) {
        sVar6 = F_00c552f0((char *)((uchar *)(gen_frame + 0x30)));
        iVar7 = F_00c80e09((uchar *)*ppcVar10,((uchar *)(gen_frame + 0x30)),sVar6);
        if (iVar7 == 0) {
          bVar1 = true;
          sVar6 = (*(gen_size32 *)(gen_frame + 0x0));
          goto LAB_00c7e982;
        }
      }
      sVar6 = (*(gen_size32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x10));
LAB_00c7e982: ;
      pcVar2 = F_00c54c73(sVar6,1);
      *_EnvBlk = pcVar2;
      if (pcVar2 == ((char *)GEN_TOP(0x0))) {
        F_00c4c68f(*_ArgBlk);
        *_ArgBlk = ((char *)GEN_TOP(0x0));
        piVar3 = F_00c51f85();
        *piVar3 = 0xc;
        puVar4 = F_00c51f98();
        iVar11 = -1;
        *puVar4 = 8;
        goto LAB_00c7eaf7;
      }
    }
    pcVar2 = *_ArgBlk;
    ppcVar10 = _Argv;
    if (*_Argv != ((char *)GEN_TOP(0x0))) {
      eVar5 = F_00c49908(pcVar2,sVar8,*_Argv);
      if (eVar5 == 0) {
        sVar6 = F_00c552f0(*_Argv);
        pcVar2 = pcVar2 + sVar6 + 1;
        goto LAB_00c7ea25;
      }
LAB_00c7e846: ;
                    
      F_00c4c299(0,0,0,0,0);
    }
    pcVar2 = pcVar2 + 1;
    for (; *ppcVar10 != ((char *)GEN_TOP(0x0)); ppcVar10 = ppcVar10 + 1) {
      eVar5 = F_00c49908(pcVar2,*_ArgBlk + (sVar8 - (int)pcVar2),*ppcVar10);
      if (eVar5 != 0) goto LAB_00c7e846;
      sVar6 = F_00c552f0(*ppcVar10);
      pcVar2[sVar6] = ' ';
      pcVar2 = pcVar2 + sVar6 + 1;
LAB_00c7ea25: ;
    }
    pcVar2[-0xffffffff00000001] = '\0';
    pcVar2[0] = '\0';
    pcVar2 = *_EnvBlk;
    if (_Env != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00c46aa0(pcVar2,REFG(char * PTR32, 0x15d6864) + (*(int *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x18)) - (*(int *)(gen_frame + 0x24)));
      pcVar2 = pcVar2 + ((*(int *)(gen_frame + 0x18)) - (*(int *)(gen_frame + 0x24)));
      for (ppcVar10 = _Env; *ppcVar10 != ((char *)GEN_TOP(0x0)); ppcVar10 = ppcVar10 + 1) {
        eVar5 = F_00c49908(pcVar2,*_EnvBlk + ((*(gen_size32 *)(gen_frame + 0x0)) - (int)pcVar2),*ppcVar10);
        if (eVar5 != 0) goto LAB_00c7e846;
        sVar8 = F_00c552f0(*ppcVar10);
        pcVar2 = pcVar2 + sVar8 + 1;
      }
      if (!bVar1) {
        eVar5 = F_00c49908(pcVar2,(*(int *)(gen_frame + 0x10)),((uchar *)(gen_frame + 0x30)));
        if (((eVar5 != 0) || (eVar5 = F_00c473c8(pcVar2,(*(int *)(gen_frame + 0x10)),&REFG(undefined, 0x1118a3c)), eVar5 != 0)) ||
           (((*(char * PTR32 *)(gen_frame + 0x2c)) != ((char *)GEN_TOP(0x0)) && (eVar5 = F_00c473c8(pcVar2,(*(int *)(gen_frame + 0x10)),(*(char * PTR32 *)(gen_frame + 0x2c))), eVar5 != 0))))
        goto LAB_00c7e846;
        pcVar2 = pcVar2 + (*(int *)(gen_frame + 0x10));
      }
    }
    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
      if (pcVar2 == *_EnvBlk) {
        *pcVar2 = '\0';
        pcVar2 = pcVar2 + 1;
      }
      *pcVar2 = '\0';
    }
  }
  else {
    if (eVar5 == 0x16) goto LAB_00c7e846;
LAB_00c7e8b1: ;
    iVar11 = -1;
    F_00c4c68f(*_ArgBlk);
    *_ArgBlk = ((char *)GEN_TOP(0x0));
    *_EnvBlk = ((char *)GEN_TOP(0x0));
  }
LAB_00c7eaf7: ;
  if (REFG(char * PTR32, 0x15d6864) != ((char *)GEN_TOP(0x0))) {
    F_00c4c68f(REFG(char * PTR32, 0x15d6864));
  }
  REFG(char * PTR32, 0x15d6864) = ((char *)GEN_TOP(0x0));
  if ((*(char * PTR32 *)(gen_frame + 0x2c)) != ((char *)GEN_TOP(0x0))) {
    F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x2c)));
  }
  return iVar11;
}

/* ref: wcstoxl */
GEN_LIB GEN_NOFRAME ulong F_00c7eb2d(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc7eb2du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
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
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = param_1;
  }
  if ((param_1 == ((ushort *)GEN_TOP(0x0))) ||
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
        pwVar9 = pwVar9 - 1;
        if ((param_4 & 8) == 0) {
          if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
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
        if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
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
      if (param_2 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c7ec5b;
    }
    uVar7 = (uint)*pwVar9;
    pwVar9 = pwVar9 + 1;
  } while( true );
}

/* ref: FID_conflict__wcstol_00c7ecef */
GEN_LIB GEN_NOFRAME gen_long F_00c7ecef(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7ecefu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ulong uVar1;
  
  uVar1 = F_00c7eb2d(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FID_conflict__wcstol_00c7ed09 */
GEN_LIB GEN_NOFRAME gen_long F_00c7ed09(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7ed09u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ulong uVar1;
  
  uVar1 = F_00c7eb2d(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FID_conflict___wcstoul_l_00c7ed23 */
GEN_LIB GEN_NOFRAME ulong F_00c7ed23(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7ed23u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ulong uVar1;
  
  uVar1 = F_00c7eb2d(param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FID_conflict___wcstoul_l_00c7ed3d */
GEN_LIB GEN_NOFRAME ulong F_00c7ed3d(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7ed3du, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ulong uVar1;
  
  uVar1 = F_00c7eb2d(param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: _ValidateRead */
GEN_LIB GEN_NOFRAME int F_00c7ed57(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7ed57u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (uint)(param_1 != ((undefined *)GEN_TOP(0x0)));
}

/* ref: FID_conflict__ValidateExecute_00c7ed69 */
GEN_LIB GEN_NOFRAME uint F_00c7ed69(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7ed69u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (uint)(param_1 != 0);
}

/* ref: FID_conflict__ValidateExecute_00c7ed7b */
GEN_LIB GEN_NOFRAME uint F_00c7ed7b(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7ed7bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(param_1 != 0);
}

/* ref: $I10_OUTPUT */
GEN_LIB GEN_NOFRAME uint F_00c7ed8d(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4), GEN_P(short * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc7ed8du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_PIN(short * param_6 = (short *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL(0x74, 12);
  short * psVar1;
  undefined * puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  int eVar8;
  ushort * puVar9;
  ushort uVar10;
  uint uVar11;
  ushort * puVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  short * psVar18;
  short * psVar19;
  ushort uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  char * pcVar25;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  (*(ushort *)(gen_frame + 0x10)) = (ushort)param_3 & 0x8000;
  uVar14 = param_3 & 0x7fff;
  (*(undefined4 *)(gen_frame + 0x40)) = 0xcccccccc;
  (*(undefined4 *)(gen_frame + 0x44)) = 0xcccccccc;
  ((ushort *)(gen_frame + 0x48))[0] = 0xcccc;
  ((ushort *)(gen_frame + 0x48))[1] = 0x3ffb;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((short)uVar14 == 0) {
    if ((param_2 == 0) && (param_1 == 0)) {
      *param_6 = 0;
      *(byte *)(param_6 + 1) = (((*(ushort *)(gen_frame + 0x10)) != 0x8000) - 1U & 0xd) + 0x20;
      *((undefined2 *)GEN_TOP(((int)param_6 + 3))) = 0x3001;
      *((undefined1 *)GEN_TOP(((int)param_6 + 5))) = 0;
      return 1;
    }
  }
  else if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_00c7eeac;
        pcVar25 = ((char *)REFP(0x1128004));
      }
      else {
        if (param_1 != 0) {
LAB_00c7eeac: ;
          pcVar25 = ((char *)REFP(0x1127ffc));
          goto LAB_00c7eeb1;
        }
        pcVar25 = ((char *)REFP(0x112800c));
      }
      eVar8 = F_00c49908(param_6 + 2,0x16,pcVar25);
      if (eVar8 != 0) goto LAB_00c7ee5e;
      *((undefined1 *)GEN_TOP(((int)param_6 + 3))) = 5;
    }
    else {
      pcVar25 = ((char *)REFP(0x1128014));
LAB_00c7eeb1: ;
      eVar8 = F_00c49908(param_6 + 2,0x16,pcVar25);
      if (eVar8 != 0) {
LAB_00c7ee5e: ;
                    
        F_00c4c299(0,0,0,0,0);
      }
      *((undefined1 *)GEN_TOP(((int)param_6 + 3))) = 6;
    }
    return 0;
  }
  (*(short *)(gen_frame + 0x24)) = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d - 0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = 0;
  uVar16 = -(int)(*(short *)(gen_frame + 0x24));
  (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)uVar14;
  (*(byte *)(gen_frame + 0x5b)) = (byte)(uVar14 >> 8);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 2)) = (undefined2)param_2;
  (*(ushort *)(gen_frame + 0x58)) = (ushort)(param_2 >> 0x10);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 2)) = (undefined2)param_1;
  uVar14 = param_1 << 0x10;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = (undefined2)((uint)param_1 >> 0x10);
  uVar22 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x54)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x134bea0);
  if (uVar16 != 0) {
    puVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    uVar14 = param_1 << 0x10;
    uVar22 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x54)));
    if ((int)uVar16 < 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x134c000);
      uVar16 = (int)(*(short *)(gen_frame + 0x24));
      puVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    }
joined_r0x00c7ef30: ;
    do {
      if (uVar16 == 0) break;
      puVar2 = puVar2 + 0x54;
      uVar17 = (int)uVar16 >> 3;
      uVar11 = uVar16 & 7;
      uVar16 = uVar17;
      if (uVar11 != 0) {
        puVar12 = (ushort *)(puVar2 + uVar11 * 0xc);
        if (0x7fff < *puVar12) {
          uVar3 = *(undefined4 *)puVar12;
          (*(undefined2 *)((char *)((byte *)(gen_frame + 0x34)) + 0)) = (undefined2)uVar3;
          (*(undefined2 *)((char *)((byte *)(gen_frame + 0x34)) + 2)) = (undefined2)((uint)uVar3 >> 0x10);
          puVar9 = puVar12 + 4;
          (*(undefined2 *)((char *)((byte *)(gen_frame + 0x34)) + 4)) = (undefined2)*(undefined4 *)(puVar12 + 2);
          (*(undefined2 *)((char *)((byte *)(gen_frame + 0x34)) + 6)) = (undefined2)((uint)*(undefined4 *)(puVar12 + 2) >> 0x10);
          puVar12 = (ushort *)((byte *)(gen_frame + 0x34));
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x34)) + 8)) = *(undefined4 *)puVar9;
          iVar24 = (int)CONCAT22((*(undefined2 *)((char *)((byte *)(gen_frame + 0x34)) + 4)),(*(undefined2 *)((char *)((byte *)(gen_frame + 0x34)) + 2))) - 1;
          (*(undefined2 *)((char *)((byte *)(gen_frame + 0x34)) + 2)) = (undefined2)iVar24;
          (*(undefined2 *)((char *)((byte *)(gen_frame + 0x34)) + 4)) = (undefined2)((uint)iVar24 >> 0x10);
        }
        (*(int *)(gen_frame + 0x28)) = 0;
        (*(byte *)(gen_frame + 0x60)) = 0;
        (*(undefined1 *)(gen_frame + 0x61)) = 0;
        (*(ushort *)(gen_frame + 0x62)) = 0;
        ((ushort *)(gen_frame + 0x64))[0] = 0;
        ((ushort *)(gen_frame + 0x64))[1] = 0;
        ((ushort *)(gen_frame + 0x64))[2] = 0;
        ((ushort *)(gen_frame + 0x64))[3] = 0;
        (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x18)) + 0)) = (puVar12[5] ^ CONCAT11((*(byte *)(gen_frame + 0x5b)),(*(undefined1 *)(gen_frame + 0x5a)))) & 0x8000;
        uVar13 = CONCAT11((*(byte *)(gen_frame + 0x5b)),(*(undefined1 *)(gen_frame + 0x5a))) & 0x7fff;
        uVar10 = puVar12[5] & 0x7fff;
        uVar20 = uVar10 + uVar13;
        if (((uVar13 < 0x7fff) && (uVar10 < 0x7fff)) && (uVar20 < 0xbffe)) {
          if (0x3fbf < uVar20) {
            if (((uVar13 == 0) &&
                (uVar20 = uVar20 + 1,
                (CONCAT13((*(byte *)(gen_frame + 0x5b)),CONCAT12((*(undefined1 *)(gen_frame + 0x5a)),(*(ushort *)(gen_frame + 0x58)))) & 0x7fffffff) == 0)) &&
               ((uVar22 == 0 && (uVar14 == 0)))) {
              (*(undefined1 *)(gen_frame + 0x5a)) = 0;
              (*(byte *)(gen_frame + 0x5b)) = 0;
              goto joined_r0x00c7ef30;
            }
            if (((uVar10 != 0) || (uVar20 = uVar20 + 1, (*(uint *)(puVar12 + 4) & 0x7fffffff) != 0))
               || ((*(int *)(puVar12 + 2) != 0 || (*(int *)puVar12 != 0)))) {
              (*(int *)(gen_frame + 0x1c)) = 0;
              puVar9 = ((ushort *)(gen_frame + 0x64));
              (*(int *)(gen_frame + 0x30)) = 5;
              do {
                (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x30));
                if (0 < (*(int *)(gen_frame + 0x30))) {
                  (*(ushort * PTR32 *)(gen_frame + 0x0)) = ((ushort *)GEN_TOP(((int)&(*(uint *)(gen_frame + 0x50)) + (*(int *)(gen_frame + 0x1c)) * 2)));
                  (*(ushort * PTR32 *)(gen_frame + 0x4)) = puVar12 + 4;
                  do {
                    bVar5 = false;
                    uVar14 = *(uint *)(puVar9 - 2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x0)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x4));
                    if ((uVar14 < *(uint *)(puVar9 - 2)) ||
                       (uVar14 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0x0)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x4)))) {
                      bVar5 = true;
                    }
                    *(uint *)(puVar9 - 2) = uVar14;
                    if (bVar5) {
                      *puVar9 = *puVar9 + 1;
                    }
                    (*(ushort * PTR32 *)(gen_frame + 0x0)) = (*(ushort * PTR32 *)(gen_frame + 0x0)) + 1;
                    (*(ushort * PTR32 *)(gen_frame + 0x4)) = (*(ushort * PTR32 *)(gen_frame + 0x4)) - 1;
                    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) - 1;
                  } while (0 < (*(int *)(gen_frame + 0x20)));
                }
                puVar9 = puVar9 + 1;
                (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
                (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) - 1;
              } while (0 < (*(int *)(gen_frame + 0x30)));
              uVar20 = uVar20 + 0xc002;
              if ((short)uVar20 < 1) {
LAB_00c7f0e3: ;
                uVar20 = uVar20 - 1;
                if ((short)uVar20 < 0) {
                  uVar14 = (uint)(ushort)-uVar20;
                  uVar20 = 0;
                  do {
                    if (((*(byte *)(gen_frame + 0x60)) & 1) != 0) {
                      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
                    }
                    iVar21 = CONCAT22(((ushort *)(gen_frame + 0x64))[3],((ushort *)(gen_frame + 0x64))[2]);
                    uVar22 = CONCAT22(((ushort *)(gen_frame + 0x64))[1],((ushort *)(gen_frame + 0x64))[0]);
                    iVar24 = CONCAT22(((ushort *)(gen_frame + 0x64))[1],((ushort *)(gen_frame + 0x64))[0]);
                    ((ushort *)(gen_frame + 0x64))[2] = (ushort)(CONCAT22(((ushort *)(gen_frame + 0x64))[3],((ushort *)(gen_frame + 0x64))[2]) >> 1);
                    ((ushort *)(gen_frame + 0x64))[3] = ((ushort *)(gen_frame + 0x64))[3] >> 1;
                    ((ushort *)(gen_frame + 0x64))[1] = ((ushort *)(gen_frame + 0x64))[1] >> 1 | (ushort)((uint)(iVar21 << 0x1f) >> 0x10);
                    uVar11 = CONCAT22((*(ushort *)(gen_frame + 0x62)),CONCAT11((*(undefined1 *)(gen_frame + 0x61)),(*(byte *)(gen_frame + 0x60)))) >> 1;
                    (*(ushort *)(gen_frame + 0x62)) = (*(ushort *)(gen_frame + 0x62)) >> 1 | (ushort)((uint)(iVar24 << 0x1f) >> 0x10);
                    uVar14 = uVar14 - 1;
                    ((ushort *)(gen_frame + 0x64))[0] = (ushort)(uVar22 >> 1);
                    (*(byte *)(gen_frame + 0x60)) = (byte)uVar11;
                    (*(undefined1 *)(gen_frame + 0x61)) = (undefined1)(uVar11 >> 8);
                  } while (uVar14 != 0);
                  if ((*(int *)(gen_frame + 0x28)) != 0) {
                    (*(byte *)(gen_frame + 0x60)) = (*(byte *)(gen_frame + 0x60)) | 1;
                  }
                }
              }
              else {
                do {
                  uVar13 = ((ushort *)(gen_frame + 0x64))[1];
                  uVar10 = (*(ushort *)(gen_frame + 0x62));
                  if ((((ushort *)(gen_frame + 0x64))[3] & 0x8000) != 0) break;
                  iVar24 = (int)CONCAT22((*(ushort *)(gen_frame + 0x62)),CONCAT11((*(undefined1 *)(gen_frame + 0x61)),(*(byte *)(gen_frame + 0x60)))) << 1;
                  (*(byte *)(gen_frame + 0x60)) = (byte)iVar24;
                  (*(undefined1 *)(gen_frame + 0x61)) = (undefined1)((uint)iVar24 >> 8);
                  (*(ushort *)(gen_frame + 0x62)) = (ushort)((uint)iVar24 >> 0x10);
                  iVar24 = (int)CONCAT22(((ushort *)(gen_frame + 0x64))[1],((ushort *)(gen_frame + 0x64))[0]) * 2;
                  ((ushort *)(gen_frame + 0x64))[0] = (ushort)iVar24 | uVar10 >> 0xf;
                  ((ushort *)(gen_frame + 0x64))[1] = (ushort)((uint)iVar24 >> 0x10);
                  iVar24 = (int)CONCAT22(((ushort *)(gen_frame + 0x64))[3],((ushort *)(gen_frame + 0x64))[2]) * 2;
                  ((ushort *)(gen_frame + 0x64))[2] = (ushort)iVar24 | uVar13 >> 0xf;
                  uVar20 = uVar20 - 1;
                  ((ushort *)(gen_frame + 0x64))[3] = (ushort)((uint)iVar24 >> 0x10);
                } while (0 < (short)uVar20);
                if ((short)uVar20 < 1) goto LAB_00c7f0e3;
              }
              if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x61)),(*(byte *)(gen_frame + 0x60)))) ||
                 (uVar22 = CONCAT22(((ushort *)(gen_frame + 0x64))[2],((ushort *)(gen_frame + 0x64))[1]),
                 uVar14 = CONCAT22(((ushort *)(gen_frame + 0x64))[0],(*(ushort *)(gen_frame + 0x62))),
                 (CONCAT22((*(ushort *)(gen_frame + 0x62)),CONCAT11((*(undefined1 *)(gen_frame + 0x61)),(*(byte *)(gen_frame + 0x60)))) & 0x1ffff) == 0x18000)) {
                if ((int)CONCAT22(((ushort *)(gen_frame + 0x64))[0],(*(ushort *)(gen_frame + 0x62))) == -1) {
                  uVar14 = 0;
                  if ((int)CONCAT22(((ushort *)(gen_frame + 0x64))[2],((ushort *)(gen_frame + 0x64))[1]) == -1) {
                    if (((ushort *)(gen_frame + 0x64))[3] == 0xffff) {
                      ((ushort *)(gen_frame + 0x64))[3] = 0x8000;
                      uVar20 = uVar20 + 1;
                      uVar22 = 0;
                      uVar14 = 0;
                    }
                    else {
                      ((ushort *)(gen_frame + 0x64))[3] = ((ushort *)(gen_frame + 0x64))[3] + 1;
                      uVar22 = 0;
                      uVar14 = 0;
                    }
                  }
                  else {
                    uVar22 = (int)CONCAT22(((ushort *)(gen_frame + 0x64))[2],((ushort *)(gen_frame + 0x64))[1]) + 1;
                  }
                }
                else {
                  uVar14 = (int)CONCAT22(((ushort *)(gen_frame + 0x64))[0],(*(ushort *)(gen_frame + 0x62))) + 1;
                  uVar22 = CONCAT22(((ushort *)(gen_frame + 0x64))[2],((ushort *)(gen_frame + 0x64))[1]);
                }
              }
              if (uVar20 < 0x7fff) {
                (*(byte *)(gen_frame + 0x5b)) = (byte)(uVar20 >> 8) | (byte)((ushort)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x18))) >> 8);
                (*(uint *)(gen_frame + 0x50)) = uVar14;
                (*(uint *)(gen_frame + 0x54)) = uVar22;
                (*(ushort *)(gen_frame + 0x58)) = ((ushort *)(gen_frame + 0x64))[3];
                (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)uVar20;
              }
              else {
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0;
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 2)) = 0;
                uVar22 = 0;
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = 0;
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 2)) = 0;
                uVar14 = 0;
                iVar24 = (((ushort)(*(ushort * PTR32 *)(gen_frame + 0x18)) == 0) - 1 & 0x80000000) + 0x7fff8000;
                (*(ushort *)(gen_frame + 0x58)) = (ushort)iVar24;
                (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)((uint)iVar24 >> 0x10);
                (*(byte *)(gen_frame + 0x5b)) = (byte)((uint)iVar24 >> 0x18);
              }
              goto joined_r0x00c7ef30;
            }
          }
          (*(ushort *)(gen_frame + 0x58)) = 0;
          (*(undefined1 *)(gen_frame + 0x5a)) = 0;
          (*(byte *)(gen_frame + 0x5b)) = 0;
        }
        else {
          iVar24 = (((ushort)(*(ushort * PTR32 *)(gen_frame + 0x18)) == 0) - 1 & 0x80000000) + 0x7fff8000;
          (*(ushort *)(gen_frame + 0x58)) = (ushort)iVar24;
          (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)((uint)iVar24 >> 0x10);
          (*(byte *)(gen_frame + 0x5b)) = (byte)((uint)iVar24 >> 0x18);
        }
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 2)) = 0;
        uVar22 = 0;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = 0;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 2)) = 0;
        uVar14 = 0;
      }
    } while( true );
  }
  uVar16 = CONCAT13((*(byte *)(gen_frame + 0x5b)),CONCAT12((*(undefined1 *)(gen_frame + 0x5a)),(*(ushort *)(gen_frame + 0x58))));
  if ((ushort)(uVar16 >> 0x10) < 0x3fff) goto LAB_00c7f471;
  (*(short *)(gen_frame + 0x24)) = (*(short *)(gen_frame + 0x24)) + 1;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(byte *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x61)) = 0;
  (*(ushort *)(gen_frame + 0x62)) = 0;
  ((ushort *)(gen_frame + 0x64))[0] = 0;
  ((ushort *)(gen_frame + 0x64))[1] = 0;
  ((ushort *)(gen_frame + 0x64))[2] = 0;
  ((ushort *)(gen_frame + 0x64))[3] = 0;
  uVar16 = uVar16 >> 0x10 & 0x7fff;
  iVar24 = uVar16 + 0x3ffb;
  if (((ushort)uVar16 < 0x7fff) && ((ushort)iVar24 < 0xbffe)) {
    if (0x3fbf < (ushort)iVar24) {
      if (((((ushort)uVar16 == 0) &&
           (iVar24 = uVar16 + 0x3ffc,
           (CONCAT13((*(byte *)(gen_frame + 0x5b)),CONCAT12((*(undefined1 *)(gen_frame + 0x5a)),(*(ushort *)(gen_frame + 0x58)))) & 0x7fffffff) == 0)) && (uVar22 == 0))
         && (uVar14 == 0)) {
        (*(undefined1 *)(gen_frame + 0x5a)) = 0;
        (*(byte *)(gen_frame + 0x5b)) = 0;
        goto LAB_00c7f471;
      }
      (*(int *)(gen_frame + 0x1c)) = 0;
      puVar12 = ((ushort *)(gen_frame + 0x64));
      (*(int *)(gen_frame + 0x30)) = 5;
      do {
        (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x30));
        if (0 < (*(int *)(gen_frame + 0x30))) {
          (*(ushort * PTR32 *)(gen_frame + 0x18)) = ((ushort *)(gen_frame + 0x48));
          puVar9 = ((ushort *)GEN_TOP(((int)&(*(uint *)(gen_frame + 0x50)) + (*(int *)(gen_frame + 0x1c)) * 2)));
          do {
            bVar5 = false;
            uVar14 = *(uint *)(puVar12 - 2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x18)) * (uint)*puVar9;
            if ((uVar14 < *(uint *)(puVar12 - 2)) || (uVar14 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0x18)) * (uint)*puVar9)) {
              bVar5 = true;
            }
            *(uint *)(puVar12 - 2) = uVar14;
            if (bVar5) {
              *puVar12 = *puVar12 + 1;
            }
            (*(ushort * PTR32 *)(gen_frame + 0x18)) = (*(ushort * PTR32 *)(gen_frame + 0x18)) - 1;
            puVar9 = puVar9 + 1;
            (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) - 1;
          } while (0 < (*(int *)(gen_frame + 0x28)));
        }
        puVar12 = puVar12 + 1;
        (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
        (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) - 1;
      } while (0 < (*(int *)(gen_frame + 0x30)));
      iVar24 = iVar24 + 0xc002;
      if ((short)iVar24 < 1) {
LAB_00c7f36c: ;
        uVar20 = (ushort)(iVar24 + 0xffff);
        if ((short)uVar20 < 0) {
          uVar14 = -(iVar24 + 0xffff);
          uVar22 = uVar14 & 0xffff;
          uVar20 = uVar20 + (short)uVar14;
          do {
            if (((*(byte *)(gen_frame + 0x60)) & 1) != 0) {
              (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
            }
            iVar21 = CONCAT22(((ushort *)(gen_frame + 0x64))[3],((ushort *)(gen_frame + 0x64))[2]);
            uVar14 = CONCAT22(((ushort *)(gen_frame + 0x64))[1],((ushort *)(gen_frame + 0x64))[0]);
            iVar24 = CONCAT22(((ushort *)(gen_frame + 0x64))[1],((ushort *)(gen_frame + 0x64))[0]);
            ((ushort *)(gen_frame + 0x64))[2] = (ushort)(CONCAT22(((ushort *)(gen_frame + 0x64))[3],((ushort *)(gen_frame + 0x64))[2]) >> 1);
            ((ushort *)(gen_frame + 0x64))[3] = ((ushort *)(gen_frame + 0x64))[3] >> 1;
            ((ushort *)(gen_frame + 0x64))[1] = ((ushort *)(gen_frame + 0x64))[1] >> 1 | (ushort)((uint)(iVar21 << 0x1f) >> 0x10);
            uVar16 = CONCAT22((*(ushort *)(gen_frame + 0x62)),CONCAT11((*(undefined1 *)(gen_frame + 0x61)),(*(byte *)(gen_frame + 0x60)))) >> 1;
            (*(ushort *)(gen_frame + 0x62)) = (*(ushort *)(gen_frame + 0x62)) >> 1 | (ushort)((uint)(iVar24 << 0x1f) >> 0x10);
            uVar22 = uVar22 - 1;
            ((ushort *)(gen_frame + 0x64))[0] = (ushort)(uVar14 >> 1);
            (*(byte *)(gen_frame + 0x60)) = (byte)uVar16;
            (*(undefined1 *)(gen_frame + 0x61)) = (undefined1)(uVar16 >> 8);
          } while (uVar22 != 0);
          if ((*(int *)(gen_frame + 0x20)) != 0) {
            (*(byte *)(gen_frame + 0x60)) = (*(byte *)(gen_frame + 0x60)) | 1;
          }
        }
      }
      else {
        do {
          uVar10 = ((ushort *)(gen_frame + 0x64))[1];
          uVar20 = (*(ushort *)(gen_frame + 0x62));
          if ((short)((ushort *)(gen_frame + 0x64))[3] < 0) break;
          iVar21 = (int)CONCAT22((*(ushort *)(gen_frame + 0x62)),CONCAT11((*(undefined1 *)(gen_frame + 0x61)),(*(byte *)(gen_frame + 0x60)))) << 1;
          (*(byte *)(gen_frame + 0x60)) = (byte)iVar21;
          (*(undefined1 *)(gen_frame + 0x61)) = (undefined1)((uint)iVar21 >> 8);
          (*(ushort *)(gen_frame + 0x62)) = (ushort)((uint)iVar21 >> 0x10);
          iVar21 = (int)CONCAT22(((ushort *)(gen_frame + 0x64))[1],((ushort *)(gen_frame + 0x64))[0]) * 2;
          ((ushort *)(gen_frame + 0x64))[0] = (ushort)iVar21 | uVar20 >> 0xf;
          ((ushort *)(gen_frame + 0x64))[1] = (ushort)((uint)iVar21 >> 0x10);
          iVar21 = (int)CONCAT22(((ushort *)(gen_frame + 0x64))[3],((ushort *)(gen_frame + 0x64))[2]) * 2;
          ((ushort *)(gen_frame + 0x64))[2] = (ushort)iVar21 | uVar10 >> 0xf;
          iVar24 = iVar24 + 0xffff;
          ((ushort *)(gen_frame + 0x64))[3] = (ushort)((uint)iVar21 >> 0x10);
        } while (0 < (short)iVar24);
        uVar20 = (ushort)iVar24;
        if ((short)uVar20 < 1) goto LAB_00c7f36c;
      }
      if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x61)),(*(byte *)(gen_frame + 0x60)))) ||
         (uVar22 = CONCAT22(((ushort *)(gen_frame + 0x64))[2],((ushort *)(gen_frame + 0x64))[1]), uVar14 = CONCAT22(((ushort *)(gen_frame + 0x64))[0],(*(ushort *)(gen_frame + 0x62))),
         (CONCAT22((*(ushort *)(gen_frame + 0x62)),CONCAT11((*(undefined1 *)(gen_frame + 0x61)),(*(byte *)(gen_frame + 0x60)))) & 0x1ffff) == 0x18000)) {
        if ((int)CONCAT22(((ushort *)(gen_frame + 0x64))[0],(*(ushort *)(gen_frame + 0x62))) == -1) {
          uVar14 = 0;
          if ((int)CONCAT22(((ushort *)(gen_frame + 0x64))[2],((ushort *)(gen_frame + 0x64))[1]) == -1) {
            if (((ushort *)(gen_frame + 0x64))[3] == 0xffff) {
              ((ushort *)(gen_frame + 0x64))[3] = 0x8000;
              uVar20 = uVar20 + 1;
              uVar22 = 0;
              uVar14 = 0;
            }
            else {
              ((ushort *)(gen_frame + 0x64))[3] = ((ushort *)(gen_frame + 0x64))[3] + 1;
              uVar22 = 0;
              uVar14 = 0;
            }
          }
          else {
            uVar22 = (int)CONCAT22(((ushort *)(gen_frame + 0x64))[2],((ushort *)(gen_frame + 0x64))[1]) + 1;
          }
        }
        else {
          uVar14 = (int)CONCAT22(((ushort *)(gen_frame + 0x64))[0],(*(ushort *)(gen_frame + 0x62))) + 1;
          uVar22 = CONCAT22(((ushort *)(gen_frame + 0x64))[2],((ushort *)(gen_frame + 0x64))[1]);
        }
      }
      (*(ushort *)(gen_frame + 0x62)) = (ushort)uVar14;
      if (uVar20 < 0x7fff) {
        (*(byte *)(gen_frame + 0x5b)) = (byte)(uVar20 >> 8) | (*(byte *)(gen_frame + 0x5b)) & 0x80;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = (*(ushort *)(gen_frame + 0x62));
        (*(ushort *)(gen_frame + 0x58)) = ((ushort *)(gen_frame + 0x64))[3];
        (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)uVar20;
      }
      else {
        uVar22 = 0;
        uVar14 = 0;
        iVar24 = ((((*(byte *)(gen_frame + 0x5b)) & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
        (*(ushort *)(gen_frame + 0x58)) = (ushort)iVar24;
        (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)((uint)iVar24 >> 0x10);
        (*(byte *)(gen_frame + 0x5b)) = (byte)((uint)iVar24 >> 0x18);
      }
      goto LAB_00c7f471;
    }
    iVar24 = 0;
  }
  else {
    iVar24 = ((((*(byte *)(gen_frame + 0x5b)) & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
  }
  uVar22 = 0;
  uVar14 = 0;
  (*(ushort *)(gen_frame + 0x58)) = (ushort)iVar24;
  (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)((uint)iVar24 >> 0x10);
  (*(byte *)(gen_frame + 0x5b)) = (byte)((uint)iVar24 >> 0x18);
LAB_00c7f471: ;
  *param_6 = (*(short *)(gen_frame + 0x24));
  iVar24 = param_4;
  if (((param_5 & 1) != 0) && (iVar24 = param_4 + (*(short *)(gen_frame + 0x24)), iVar24 < 1)) {
    *param_6 = 0;
    *((undefined2 *)GEN_TOP(((int)param_6 + 3))) = 0x3001;
    *(byte *)(param_6 + 1) = (((*(ushort *)(gen_frame + 0x10)) != 0x8000) - 1U & 0xd) + 0x20;
    *((undefined1 *)GEN_TOP(((int)param_6 + 5))) = 0;
    return 1;
  }
  if (0x15 < iVar24) {
    iVar24 = 0x15;
  }
  iVar21 = (CONCAT13((*(byte *)(gen_frame + 0x5b)),CONCAT12((*(undefined1 *)(gen_frame + 0x5a)),(*(ushort *)(gen_frame + 0x58)))) >> 0x10) - 0x3ffe;
  (*(undefined1 *)(gen_frame + 0x5a)) = 0;
  (*(byte *)(gen_frame + 0x5b)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 8;
  do {
    uVar16 = uVar14 << 1;
    uVar11 = uVar22 * 2 | uVar14 >> 0x1f;
    iVar4 = (int)CONCAT13((*(byte *)(gen_frame + 0x5b)),CONCAT12((*(undefined1 *)(gen_frame + 0x5a)),(*(ushort *)(gen_frame + 0x58)))) * 2;
    (*(ushort *)(gen_frame + 0x58)) = (ushort)iVar4 | (ushort)(uVar22 >> 0x1f);
    (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) - 1;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = (undefined2)uVar11;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 2)) = (undefined2)(uVar22 * 2 >> 0x10);
    (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)((uint)iVar4 >> 0x10);
    (*(byte *)(gen_frame + 0x5b)) = (byte)((uint)iVar4 >> 0x18);
    uVar14 = uVar16;
    uVar22 = uVar11;
  } while ((*(int *)(gen_frame + 0x2c)) != 0);
  if ((iVar21 < 0) && (uVar22 = -iVar21 & 0xff, uVar22 != 0)) {
    do {
      iVar21 = CONCAT13((*(byte *)(gen_frame + 0x5b)),CONCAT12((*(undefined1 *)(gen_frame + 0x5a)),(*(ushort *)(gen_frame + 0x58))));
      uVar16 = CONCAT13((*(byte *)(gen_frame + 0x5b)),CONCAT12((*(undefined1 *)(gen_frame + 0x5a)),(*(ushort *)(gen_frame + 0x58)))) >> 1;
      (*(ushort *)(gen_frame + 0x58)) = (ushort)uVar16;
      (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)(uVar16 >> 0x10);
      (*(byte *)(gen_frame + 0x5b)) = (*(byte *)(gen_frame + 0x5b)) >> 1;
      uVar17 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x54))) >> 1;
      uVar11 = uVar17 | iVar21 << 0x1f;
      uVar16 = uVar14 >> 1 | (int)CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x54))) << 0x1f;
      uVar22 = uVar22 - 1;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = (undefined2)uVar17;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 2)) = (undefined2)(uVar11 >> 0x10);
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = (undefined2)(uVar14 >> 1);
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 2)) = (undefined2)(uVar16 >> 0x10);
      uVar14 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x50)));
    } while (0 < (int)uVar22);
  }
  psVar1 = param_6 + 2;
  psVar18 = psVar1;
  uVar20 = (*(ushort *)(gen_frame + 0x58));
  uVar6 = (*(undefined1 *)(gen_frame + 0x5a));
  bVar7 = (*(byte *)(gen_frame + 0x5b));
  for (iVar24 = iVar24 + 1; 0 < iVar24; iVar24 = iVar24 - 1) {
    ((byte *)(gen_frame + 0x34))[8] = (char)uVar20;
    ((byte *)(gen_frame + 0x34))[9] = (char)(uVar20 >> 8);
    ((byte *)(gen_frame + 0x34))[10] = uVar6;
    ((byte *)(gen_frame + 0x34))[0xb] = bVar7;
    uVar22 = ((int)CONCAT13(bVar7,CONCAT12(uVar6,uVar20)) * 2 | uVar11 >> 0x1f) * 2 |
             (uVar11 & 0x7fffffff) >> 0x1e;
    uVar17 = (uVar11 * 2 | uVar16 >> 0x1f) * 2 | (uVar16 & 0x7fffffff) >> 0x1e;
    uVar14 = uVar16 * 5;
    if ((uVar14 < uVar16 * 4) || (uVar23 = uVar17, uVar14 < uVar16)) {
      uVar23 = uVar17 + 1;
      bVar5 = false;
      if ((uVar23 < uVar17) || (uVar23 == 0)) {
        bVar5 = true;
      }
      if (bVar5) {
        uVar22 = uVar22 + 1;
      }
    }
    uVar17 = uVar11 + uVar23;
    if ((uVar17 < uVar23) || (uVar17 < uVar11)) {
      uVar22 = uVar22 + 1;
    }
    iVar21 = (uVar22 + (int)CONCAT13(bVar7,CONCAT12(uVar6,uVar20))) * 2;
    (*(ushort *)(gen_frame + 0x58)) = (ushort)iVar21 | (ushort)(uVar17 >> 0x1f);
    uVar16 = uVar16 * 10;
    (*(undefined1 *)(gen_frame + 0x5a)) = (undefined1)((uint)iVar21 >> 0x10);
    uVar11 = uVar17 * 2 | uVar14 >> 0x1f;
    *(char *)psVar18 = (char)((uint)iVar21 >> 0x18) + '0';
    psVar18 = ((short *)GEN_TOP(((int)psVar18 + 1)));
    (*(byte *)(gen_frame + 0x5b)) = 0;
    uVar20 = (*(ushort *)(gen_frame + 0x58));
    uVar6 = (*(undefined1 *)(gen_frame + 0x5a));
    bVar7 = (*(byte *)(gen_frame + 0x5b));
  }
  psVar19 = psVar18 - 1;
  if (*((char *)GEN_TOP(((int)psVar18 - 1))) < '5') {
    for (; (psVar1 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = ((short *)GEN_TOP(((int)psVar19 - 1)))) {
    }
    if (psVar19 < psVar1) {
      *param_6 = 0;
      *((undefined1 *)GEN_TOP(((int)param_6 + 3))) = 1;
      *(byte *)(param_6 + 1) = (((*(ushort *)(gen_frame + 0x10)) != 0x8000) - 1U & 0xd) + 0x20;
      *(char *)psVar1 = '0';
      *((undefined1 *)GEN_TOP(((int)param_6 + 5))) = 0;
      return 1;
    }
  }
  else {
    for (; (psVar1 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = ((short *)GEN_TOP(((int)psVar19 - 1)))) {
      *(char *)psVar19 = '0';
    }
    if (psVar19 < psVar1) {
      psVar19 = ((short *)GEN_TOP(((int)psVar19 + 1)));
      *param_6 = *param_6 + 1;
    }
    *(char *)psVar19 = (char)*psVar19 + '\x01';
  }
  cVar15 = ((char)psVar19 - (char)param_6) - 3;
  *((char *)GEN_TOP(((int)param_6 + 3))) = cVar15;
  *((undefined1 *)GEN_TOP((cVar15 + 4 + (int)param_6))) = 0;
  return 1;
}

/* ref: __set_controlfp */
GEN_LIB GEN_NOFRAME unsigned int F_00c7f685(GEN_P(uint _NewValue, unsigned int gen_a0), GEN_P(uint _Mask, unsigned int gen_a1))
{
  GEN_ENTER(0xc7f685u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _NewValue = (uint)gen_a0;)
  GEN_PIN(uint _Mask = (uint)gen_a1;)
  int eVar1;
  if ((((_NewValue != 0x9001f) || (_Mask != 0xffffffff)) || ((gen_x87_cw & 0x1f3d) != 0x23d))
     || ((REFG(int, 0x15e42a0) != 0 && ((MXCSR & 0xfec0) != 0x1e80)))) {
    eVar1 = F_00c7ad58(((uint *)GEN_TOP(0x0)),_NewValue,_Mask & 0xfff7ffff);
    if (eVar1 != 0) {
                    
      F_00c4c299(0,0,0,0,0);
    }
  }
  return 0;
}

/* ref: __abstract_cw */
GEN_LIB GEN_NOFRAME uint F_00c7f6f8(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7f6f8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
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
GEN_LIB GEN_NOFRAME ushort F_00c7f797(GEN_P(uint in_ebx, unsigned int gen_a0))
{
  GEN_ENTER(0xc7f797u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ebx = (uint)gen_a0;)
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
GEN_LIB GEN_NOFRAME uint F_00c7f825(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7f825u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x3f) != 0) {
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
  }
  return uVar1;
}

/* ref: ___hw_cw_sse2 */
GEN_LIB GEN_NOFRAME uint F_00c7f908(GEN_P(uint in_edx, unsigned int gen_a0))
{
  GEN_ENTER(0xc7f908u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_edx = (uint)gen_a0;)
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
GEN_LIB GEN_NOFRAME uint F_00c7f9a8(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7f9a8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x3f) != 0) {
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
  }
  return uVar1;
}

/* ref: __statusfp */
GEN_LIB GEN_NOFRAME uint F_00c7f9f7(void)
{
  GEN_ENTER(0xc7f9f7u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  uVar2 = 0;
  if ((gen_fpusw(0) & 0x3f) != 0) {
    if ((gen_fpusw(0) & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((gen_fpusw(0) & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((gen_fpusw(0) & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((gen_fpusw(0) & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((gen_fpusw(0) & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((gen_fpusw(0) & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  if (REFG(int, 0x15e42a0) != 0) {
    uVar1 = 0;
    if ((MXCSR & 0x3f) != 0) {
      if ((MXCSR & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar2 = uVar1 | uVar2;
  }
  return uVar2;
}

/* ref: ___statusfp_sse2 */
GEN_LIB GEN_NOFRAME uint F_00c7fac1(void)
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
GEN_LIB GEN_NOFRAME uint F_00c7fafc(void)
{
  GEN_ENTER(0xc7fafcu, 0u, 0u, 0u, 0u);
  MXCSR = MXCSR & 0xffffffc0;
  return 0;
}

/* ref: ___control87_sse2 */
GEN_LIB GEN_NOFRAME uint F_00c7fb4c(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7fb4cu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
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
  uVar2 = ~(param_2 & 0x308031f) & uVar1 | param_1 & param_2 & 0x308031f;
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

/* ref: __statusfp2 */
GEN_LIB GEN_NOFRAME unsigned int F_00c7fcc2(GEN_P(uint * _X86_status, unsigned int gen_a0), GEN_P(uint * _SSE2_status, unsigned int gen_a1))
{
  GEN_ENTER(0xc7fcc2u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * _X86_status = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * _SSE2_status = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  if (_X86_status != ((uint *)GEN_TOP(0x0))) {
    uVar1 = 0;
    if ((gen_fpusw(0) & 0x3f) != 0) {
      if ((gen_fpusw(0) & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((gen_fpusw(0) & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((gen_fpusw(0) & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((gen_fpusw(0) & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((gen_fpusw(0) & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((gen_fpusw(0) & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    *_X86_status = uVar1;
  }
  if (_SSE2_status != ((uint *)GEN_TOP(0x0))) {
    uVar1 = F_00c7fac1();
    *_SSE2_status = uVar1;
  }
  return;
}

/* ref: __clearfp */
GEN_LIB GEN_NOFRAME uint F_00c7fd1c(void)
{
  GEN_ENTER(0xc7fd1cu, 0u, 0u, 0u, 0u);
  uint uVar1;
  if (REFG(int, 0x15e42a0) == 0) {
    uVar1 = 0;
    if ((gen_fpusw(1) & 0x3f) != 0) {
      if ((gen_fpusw(1) & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((gen_fpusw(1) & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((gen_fpusw(1) & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((gen_fpusw(1) & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((gen_fpusw(1) & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((gen_fpusw(1) & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    return uVar1;
  }
  uVar1 = 0;
  if ((gen_fpusw(1) & 0x3f) != 0) {
    if ((gen_fpusw(1) & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((gen_fpusw(1) & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((gen_fpusw(1) & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((gen_fpusw(1) & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((gen_fpusw(1) & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((gen_fpusw(1) & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1;
}

/* ref: ___control87_2 */
GEN_LIB GEN_NOFRAME int F_00c7fdf5(GEN_P(uint _NewValue, unsigned int gen_a0), GEN_P(uint _Mask, unsigned int gen_a1), GEN_P(uint * _X86_cw, unsigned int gen_a2), GEN_P(uint * _Sse2_cw, unsigned int gen_a3))
{
  GEN_ENTER(0xc7fdf5u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint _NewValue = (uint)gen_a0;)
  GEN_PIN(uint _Mask = (uint)gen_a1;)
  GEN_PIN(uint * _X86_cw = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * _Sse2_cw = (uint *)(uintptr_t)gen_a3;)
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uVar3 = 0;
  if (_X86_cw != ((uint *)GEN_TOP(0x0))) {
    if ((gen_x87_cw & 1) != 0) {
      uVar3 = 0x10;
    }
    if ((gen_x87_cw & 4) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((gen_x87_cw & 8) != 0) {
      uVar3 = uVar3 | 4;
    }
    if ((gen_x87_cw & 0x10) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((gen_x87_cw & 0x20) != 0) {
      uVar3 = uVar3 | 1;
    }
    if ((gen_x87_cw & 2) != 0) {
      uVar3 = uVar3 | 0x80000;
    }
    uVar1 = gen_x87_cw & 0xc00;
    if ((gen_x87_cw & 0xc00) != 0) {
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
    if ((gen_x87_cw & 0x300) == 0) {
      uVar3 = uVar3 | 0x20000;
    }
    else if ((gen_x87_cw & 0x300) == 0x200) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((gen_x87_cw & 0x1000) != 0) {
      uVar3 = uVar3 | 0x40000;
    }
    uVar4 = ~_Mask & uVar3 | _NewValue & _Mask;
    if (uVar4 != uVar3) {
      uVar1 = F_00c7f797(uVar4);
      gen_set_x87_cw((unsigned short)uVar1);
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
    *_X86_cw = uVar4;
  }
  if (_Sse2_cw != ((uint *)GEN_TOP(0x0))) {
    uVar3 = 0;
    if (REFG(int, 0x15e42a0) == 0) {
      *_Sse2_cw = 0;
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
      uVar4 = ~(_Mask & 0x308031f) & uVar3 | _Mask & 0x308031f & _NewValue;
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
      *_Sse2_cw = uVar3;
    }
  }
  return 1;
}

/* ref: __control87 */
GEN_LIB GEN_NOFRAME uint F_00c8010c(GEN_P(uint _NewValue, unsigned int gen_a0), GEN_P(uint _Mask, unsigned int gen_a1))
{
  GEN_ENTER(0xc8010cu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _NewValue = (uint)gen_a0;)
  GEN_PIN(uint _Mask = (uint)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  uint in_ebx;
  uint uVar3;
  uint uVar4;
  uVar4 = 0;
  if ((gen_x87_cw & 1) != 0) {
    uVar4 = 0x10;
  }
  if ((gen_x87_cw & 4) != 0) {
    uVar4 = uVar4 | 8;
  }
  if ((gen_x87_cw & 8) != 0) {
    uVar4 = uVar4 | 4;
  }
  if ((gen_x87_cw & 0x10) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((gen_x87_cw & 0x20) != 0) {
    uVar4 = uVar4 | 1;
  }
  if ((gen_x87_cw & 2) != 0) {
    uVar4 = uVar4 | 0x80000;
  }
  uVar1 = gen_x87_cw & 0xc00;
  if ((gen_x87_cw & 0xc00) != 0) {
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
  if ((gen_x87_cw & 0x300) == 0) {
    uVar4 = uVar4 | 0x20000;
  }
  else if ((gen_x87_cw & 0x300) == 0x200) {
    uVar4 = uVar4 | 0x10000;
  }
  if ((gen_x87_cw & 0x1000) != 0) {
    uVar4 = uVar4 | 0x40000;
  }
  in_ebx = ~_Mask & uVar4 | _NewValue & _Mask;
  if (in_ebx != uVar4) {
    uVar1 = F_00c7f797(in_ebx);
    gen_set_x87_cw((unsigned short)uVar1);
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
    uVar3 = ~(_Mask & 0x308031f) & uVar4 | _Mask & 0x308031f & _NewValue;
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
GEN_LIB GEN_NOFRAME uint F_00c8041e(GEN_P(uint _NewValue, unsigned int gen_a0), GEN_P(uint _Mask, unsigned int gen_a1))
{
  GEN_ENTER(0xc8041eu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint _NewValue = (uint)gen_a0;)
  GEN_PIN(uint _Mask = (uint)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  uint in_ebx;
  uint uVar3;
  uint uVar4;
  uVar4 = 0;
  if ((gen_x87_cw & 1) != 0) {
    uVar4 = 0x10;
  }
  if ((gen_x87_cw & 4) != 0) {
    uVar4 = uVar4 | 8;
  }
  if ((gen_x87_cw & 8) != 0) {
    uVar4 = uVar4 | 4;
  }
  if ((gen_x87_cw & 0x10) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((gen_x87_cw & 0x20) != 0) {
    uVar4 = uVar4 | 1;
  }
  if ((gen_x87_cw & 2) != 0) {
    uVar4 = uVar4 | 0x80000;
  }
  uVar1 = gen_x87_cw & 0xc00;
  if ((gen_x87_cw & 0xc00) != 0) {
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
  if ((gen_x87_cw & 0x300) == 0) {
    uVar4 = uVar4 | 0x20000;
  }
  else if ((gen_x87_cw & 0x300) == 0x200) {
    uVar4 = uVar4 | 0x10000;
  }
  if ((gen_x87_cw & 0x1000) != 0) {
    uVar4 = uVar4 | 0x40000;
  }
  in_ebx = ~(_Mask & 0xfff7ffff) & uVar4 | _Mask & 0xfff7ffff & _NewValue;
  if (in_ebx != uVar4) {
    uVar1 = F_00c7f797(in_ebx);
    gen_set_x87_cw((unsigned short)uVar1);
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
    uVar3 = ~(_Mask & 0x300031f) & uVar4 | _Mask & 0x300031f & _NewValue;
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
GEN_LIB GEN_NOFRAME int F_00c80733(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc80733u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x8, 8);
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
  (*(uint *)(gen_frame + 0x0)) = 0;
  _MaxCharCount = 2;
  (*(int *)(((char *)(param_2) + 12))) = uVar3 & 0xffffffef | 2;
  if (((uVar3 & 0x10c) == 0) &&
     (((uVar3 = F_00c50860(), param_2 != ((undefined *)GEN_TOP((uVar3 + 0x20))) &&
       (uVar3 = F_00c50860(), param_2 != ((undefined *)GEN_TOP((uVar3 + 0x40))))) ||
      (iVar4 = F_00c7adb7(_FileHandle), iVar4 == 0)))) {
    F_00c6e658(param_2);
  }
  if (((*(int *)(((char *)(param_2) + 12))) & 0x108U) == 0) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = (ushort)param_1;
    (*(uint *)(gen_frame + 0x0)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 2)),(ushort)param_1);
    uVar3 = F_00c5de4b(_FileHandle,&(*(uint *)(gen_frame + 0x0)),2);
    (*(uint *)(gen_frame + 0x0)) = uVar3;
  }
  else {
    _Buf = (*(char * PTR32 *)(((char *)(param_2) + 8)));
    pcVar1 = (*(char * PTR32 *)((char *)(param_2)));
    (*(char * PTR32 *)((char *)(param_2))) = _Buf + 2;
    _MaxCharCount = (int)pcVar1 - (int)_Buf;
    (*(int *)(((char *)(param_2) + 4))) = (*(int *)(((char *)(param_2) + 24))) - 2;
    if ((int)_MaxCharCount < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar5 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar5 = ((undefined *)GEN_TOP(((_FileHandle & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)_FileHandle >> 5)])))
        ;
      }
      if (((puVar5[4] & 0x20) != 0) && (lVar6 = F_00c6de26(_FileHandle,0,0,2), lVar6 == -1))
      goto LAB_00c80890;
    }
    else {
      uVar3 = F_00c5de4b(_FileHandle,_Buf,_MaxCharCount);
      (*(uint *)(gen_frame + 0x0)) = uVar3;
    }
    *(ushort *)(*(char * PTR32 *)(((char *)(param_2) + 8))) = (ushort)param_1;
  }
  if ((*(uint *)(gen_frame + 0x0)) == _MaxCharCount) {
    return (uint)(ushort)param_1;
  }
LAB_00c80890: ;
  (*(int *)(((char *)(param_2) + 12))) = (*(int *)(((char *)(param_2) + 12))) | 0x20;
  return 0xffff;
}

/* ref: ___initconout */
GEN_LIB GEN_NOFRAME unsigned int F_00c808a7(void)
{
  GEN_ENTER(0xc808a7u, 0u, 0u, 0u, 0u);
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateFileW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x112801c)),0x40000000,3,(GEN_LPANY)0x0,3,0,
                       (HANDLE)0x0);
  REFG(undefined4, 0x134c1c4) = pvVar1;
  return 0;
}

/* ref: Global::___termconout */
GEN_LIB GEN_NOFRAME unsigned int F_00c808c6(void)
{
  GEN_ENTER(0xc808c6u, 0u, 0u, 0u, 0u);
  if ((REFG(undefined4, 0x134c1c4) != (HANDLE)0xffffffff) && (REFG(undefined4, 0x134c1c4) != (HANDLE)0xfffffffe)) {
    gen_imp_CloseHandle(REFG(undefined4, 0x134c1c4));
  }
  return 0;
}

/* ref: __filwbuf */
GEN_LIB GEN_NOFRAME int F_00c808dd(GEN_P(undefined * _File, unsigned int gen_a0))
{
  GEN_ENTER(0xc808ddu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined * puVar5;
  char * _DstBuf;
  
  if (_File == ((undefined *)GEN_TOP(0x0))) {
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
              puVar5 = ((undefined *)GEN_TOP(((uVar4 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar3 >> 5)])));
            }
            if ((puVar5[4] & 0x82) == 0x82) {
              (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x2000;
            }
          }
          if ((((*(int *)(((char *)(_File) + 24))) == 0x200) && (((*(int *)(((char *)(_File) + 12))) & 8U) != 0)) &&
             (((*(int *)(((char *)(_File) + 12))) & 0x400U) == 0)) {
            (*(int *)(((char *)(_File) + 24))) = 0x1000;
          }
          (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) - 2;
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
GEN_LIB GEN_NOFRAME int F_00c80a0d(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc80a0du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL(0x10, 0);
  UINT UVar1;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  if (param_1 != 0) {
    ((WCHAR *)(gen_frame + 0x0))[0] = (short)param_1 + L'@';
    ((WCHAR *)(gen_frame + 0x0))[1] = 0x3a;
    ((WCHAR *)(gen_frame + 0x0))[2] = 0x5c;
    ((WCHAR *)(gen_frame + 0x0))[3] = 0;
    UVar1 = gen_imp_GetDriveTypeW(((WCHAR *)(gen_frame + 0x0)));
    if ((UVar1 == 0) || (UVar1 == 1)) {
      return 0;
    }
  }
  return 1;
}

/* ref: __getdcwd_nolock */
GEN_LIB GEN_NOFRAME uint F_00c80a67(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc80a67u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL(0xc, 4);
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
  if ((*(undefined1 * PTR32 *)&gen_args[1]) == ((undefined1 *)GEN_TOP(0x0))) {
    (*(gen_size32 *)(gen_frame + 0x4)) = 0;
  }
  else {
    if ((int)(*(gen_size32 *)&gen_args[2]) < 1) {
      piVar4 = F_00c51f85();
      *piVar4 = 0x16;
      F_00c4c305();
      return 0;
    }
    (*(gen_size32 *)(gen_frame + 0x4)) = (*(gen_size32 *)&gen_args[2]);
    *(*(undefined1 * PTR32 *)&gen_args[1]) = 0;
  }
  if (uVar5 == 0) {
    (*(uint *)&gen_args[0]) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)&gen_args[0]) + 2)),0x2e);
  }
  else {
    (*(uint *)&gen_args[0]) = (uint)CONCAT21(0x2e3a,(char)uVar5 + '@');
  }
  DVar6 = gen_imp_GetFullPathNameA(&(*(uint *)&gen_args[0]),(*(gen_size32 *)(gen_frame + 0x4)),(*(undefined1 * PTR32 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x0)));
  if (DVar6 != 0) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      if ((int)(*(gen_size32 *)(gen_frame + 0x4)) <= (int)DVar6) {
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
    if (pvVar7 == ((undefined *)GEN_TOP(0x0))) {
      piVar4 = F_00c51f85();
      *piVar4 = 0xc;
      puVar3 = F_00c51f98();
      *puVar3 = 8;
      return 0;
    }
    DVar6 = gen_imp_GetFullPathNameA(&(*(uint *)&gen_args[0]),(*(gen_size32 *)&gen_args[2]),pvVar7,((undefined1 *)(gen_frame + 0x0)));
    if ((DVar6 != 0) && ((int)DVar6 < (int)(*(gen_size32 *)&gen_args[2]))) {
      return (uint)pvVar7;
    }
  }
  DVar6 = gen_imp_GetLastError();
  F_00c51fab(DVar6);
  return 0;
}

/* ref: FUN_00c80bcb */
GEN_LIB GEN_NOFRAME uint F_00c80bcb(void)
{
  GEN_ENTER(0xc80bcbu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c80c15 */
GEN_LIB GEN_NOFRAME uint F_00c80c15(void)
{
  GEN_ENTER(0xc80c15u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: _wcsnlen */
GEN_LIB GEN_NOFRAME gen_size32 F_00c80c1e(GEN_P(wchar_t * _Src, unsigned int gen_a0), GEN_P(gen_size32 _MaxCount, unsigned int gen_a1))
{
  GEN_ENTER(0xc80c1eu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a1;)
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
GEN_LIB GEN_NOFRAME int F_00c80c3e(GEN_P(uchar * _Str1, unsigned int gen_a0), GEN_P(uchar * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3))
{
  GEN_ENTER(0xc80c3eu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x18, 8);
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
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 8))) == 0) {
    iVar1 = F_00c4c591((char *)_Str1,(char *)_Str2,_MaxCount);
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
  }
  else if (_Str1 == ((uchar *)GEN_TOP(0x0))) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar1 = 0x7fffffff;
  }
  else {
    pbVar6 = _Str2;
    pbVar7 = _Str1;
    if (_Str2 == ((uchar *)GEN_TOP(0x0))) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
      if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      }
      iVar1 = 0x7fffffff;
    }
    else {
      do {
        uVar5 = (uint)*pbVar7;
        _MaxCount = _MaxCount - 1;
        pbVar8 = pbVar7 + 1;
        (*(uint *)(gen_frame + 0x10)) = uVar5;
        if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) == 0) {
          if ((*((byte *)GEN_TOP((uVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x1d))) & 0x10) != 0) {
            uVar5 = (uint)*((byte *)GEN_TOP((uVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x11d)));
          }
          (*(uint *)(gen_frame + 0x10)) = uVar5;
LAB_00c80d58: ;
          uVar3 = (ushort)(*(uint *)(gen_frame + 0x10));
        }
        else {
          if (*pbVar8 == 0) {
            (*(uint *)(gen_frame + 0x10)) = 0;
            goto LAB_00c80d58;
          }
          uVar3 = CONCAT11(*pbVar7,*pbVar8);
          pbVar8 = pbVar7 + 2;
          (*(uint *)(gen_frame + 0x10)) = (uint)uVar3;
          if ((uVar3 < *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x10)))) ||
             (*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x12))) < uVar3)) {
            if ((*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x16))) <= uVar3) &&
               (uVar3 <= *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x18))))) {
              uVar3 = uVar3 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x1a)));
            }
          }
          else {
            uVar3 = uVar3 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x14)));
          }
        }
        uVar5 = (uint)*pbVar6;
        pbVar7 = pbVar6 + 1;
        (*(uint *)(gen_frame + 0x10)) = uVar5;
        if ((*((byte *)GEN_TOP((uVar5 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) == 0) {
          if ((*((byte *)GEN_TOP((uVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x1d))) & 0x10) != 0) {
            uVar5 = (uint)*((byte *)GEN_TOP((uVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x11d)));
          }
          (*(uint *)(gen_frame + 0x10)) = uVar5;
LAB_00c80dc8: ;
          uVar4 = (ushort)(*(uint *)(gen_frame + 0x10));
        }
        else {
          if (*pbVar7 == 0) {
            (*(uint *)(gen_frame + 0x10)) = 0;
            goto LAB_00c80dc8;
          }
          uVar4 = CONCAT11(*pbVar6,*pbVar7);
          pbVar7 = pbVar6 + 2;
          (*(uint *)(gen_frame + 0x10)) = (uint)uVar4;
          if ((uVar4 < *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x10)))) ||
             (*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x12))) < uVar4)) {
            if ((*((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x16))) <= uVar4) &&
               (uVar4 <= *((ushort *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x18))))) {
              uVar4 = uVar4 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x1a)));
            }
          }
          else {
            uVar4 = uVar4 + *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0x14)));
          }
        }
        if (uVar4 != uVar3) {
          iVar1 = (-(uint)(uVar4 < uVar3) & 2) - 1;
          if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
            return iVar1;
          }
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
          return iVar1;
        }
      } while ((uVar3 != 0) && (pbVar6 = pbVar7, pbVar7 = pbVar8, _MaxCount != 0));
      if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

/* ref: __mbsnicmp */
GEN_LIB GEN_NOFRAME int F_00c80e09(GEN_P(uchar * _Str1, unsigned int gen_a0), GEN_P(uchar * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc80e09u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  int iVar1;
  
  iVar1 = F_00c80c3e(_Str1,_Str2,_MaxCount,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: __wchartodigit */
GEN_LIB GEN_NOFRAME uint F_00c80e23(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc80e23u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
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

/* ref: Global::GuidEquals_00c80fd0 */
GEN_LIB GEN_FRAME uint F_00c80fd0(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc80fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
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

/* ref: Global::GuidEqualsThunk */
GEN_LIB GEN_FRAME uint F_00c81040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc81040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_1,param_2);
  return uVar1;
}

/* ref: CCritSec::CCritSec */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_InitializeCriticalSection(this);
  return (uint)this;
}

/* ref: CAutoLock::CAutoLock */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c810a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPCRITICAL_SECTION param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc810a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;)
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: CBaseRenderer::SetAbortSignal */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c811a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc811a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x60))) = param_2;
  return param_2;
}

/* ref: FUN_00c811d0 */
GEN_LIB GEN_FRAME uint F_00c811d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc811d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
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

/* ref: CBaseRenderer::CBaseRenderer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c81220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc81220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  F_00c88110((undefined *)this GEN_EDX_FWD,param_2,param_3,this + 0x7c,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x1128778));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128738));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128724));
  *(undefined4 *)(this + 0x50) = 0;
  F_00c88d50(this + 0x54 GEN_EDX_ARG,0,param_4);
  F_00c88d50(this + 0x58 GEN_EDX_ARG,1,param_4);
  F_00c88d50(this + 0x5c GEN_EDX_ARG,1,param_4);
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x7c));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 1;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  if (-1 < *param_4) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
  }
  return (uint)this;
}

/* ref: Client::System::Streaming::TextureRenderer::GetMediaPositionInterface */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c81300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc81300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0xc4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 != 0) {
    uVar2 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((iVar1 + 8))))))(iVar1 + 8,param_1,param_2);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,0);
  if (uVar2 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
    this_00 = ((undefined *)GEN_TOP(F_004069f0(0x50)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00c8c280(this_00 GEN_EDX_ARG,0,*(undefined4 *)(this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x0)),uVar2 + 0xc);
    }
    *(uint *)(this + 0x50) = uVar2;
    if (uVar2 != 0) {
      if ((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) < 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0xc))))(uVar2 + 8,1);
        *(undefined4 *)(this + 0x50) = 0;
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0x80004002;
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,param_1,param_2);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x8007000e;
}

/* ref: CBaseRenderer::NonDelegatingQueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c81400(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc81400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d18));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095ac4));
    if (uVar1 == 0) {
      uVar1 = F_00c84240(param_1,param_2,param_3);
      return uVar1;
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::SourceThreadCanWait */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c81460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc81460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == 1) {
    gen_imp_ResetEvent(*(HANDLE *)(this + 0x58));
    return 0;
  }
  gen_imp_SetEvent(*(HANDLE *)(this + 0x58));
  return 0;
}

/* ref: CBaseRenderer::WaitForReceiveToComplete */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c81490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int iVar1;
  DWORD DVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  iVar1 = *(int *)(this + 0xb4);
  while (iVar1 != 0) {
    gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0x0)),0,0,0,0);
    gen_imp_Sleep(1);
    iVar1 = *(int *)(this + 0xb4);
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

/* ref: CBaseRenderer::GetState */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c81510(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc81510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  uVar1 = F_00c89220(*((undefined4 *)GEN_TOP((param_1 + 0x50))),param_2,0,0,0);
  if (uVar1 == 0x102) {
    *param_3 = *((undefined4 *)GEN_TOP((param_1 + 8)));
    return 0x40237;
  }
  *param_3 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::CompleteStateChange */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c81560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc81560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((*(int *)(this + 0x78) + 0x18))) == 0) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    return 0;
  }
  if (*(int *)(this + 0x70) == 1) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG);
  if ((uVar1 == 1) && (param_1 != 0)) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    return 0;
  }
  gen_imp_ResetEvent(*(HANDLE *)(this + 0x5c));
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::GetPinCount */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00c815e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc815e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x78) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD,0);
  }
  return *(int *)(this + 0x78) != 0;
}

/* ref: CBaseRenderer::FindPin */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c81600(GEN_P(int param_1, unsigned int gen_a0), GEN_P(LPCWSTR param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc81600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(LPCWSTR param_2 = (LPCWSTR)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  iVar1 = gen_imp_lstrcmpW(param_2,(LPCWSTR)(*(undefined * PTR32 (*)[1])REFP(0x1128714)));
  if (iVar1 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x1c))))(param_1 - 0xc,0);
    if (uVar2 == 0) {
      piVar3 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar3 = ((int *)GEN_TOP((uVar2 + 0xc)));
    }
    *param_3 = piVar3;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
      return 0;
    }
    return 0x8007000e;
  }
  *param_3 = 0;
  return 0x80040216;
}

/* ref: Client::System::Streaming::TextureRenderer::EndOfStream */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*(int *)(this + 0x14) != 0) && (*(undefined4 *)(this + 0x70) = 1, *(int *)(this + 0x6c) == 0)
     ) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    if (*(int *)(this + 100) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c816c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc816c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x14) == 1) {
    gen_imp_ResetEvent(*(HANDLE *)(this + 0x5c));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG);
  F_00c81490((undefined *)this GEN_EDX_ARG);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::EndFlush */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)(this + 0x50) != ((undefined *)GEN_TOP(0x0))) {
    F_00c8b080(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_FWD);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,1);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf29 */
GEN_LIB GEN_NOFRAME uint F_00c81720(void)
{
  GEN_ENTER(0xc81720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::Inactive */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)(this + 0x50) != ((undefined *)GEN_TOP(0x0))) {
    F_00c8b080(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_FWD);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c81750 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c81750(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc81750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::GetSampleTimes */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c81760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc81760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD,param_2,param_3);
  if (-1 < (int)uVar1) {
    if (((int)param_3[1] <= (int)param_2[1]) &&
       (((int)param_3[1] < (int)param_2[1] || (*param_3 < *param_2)))) {
      return 0x80040228;
    }
    if (*(int *)(this + 0x18) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,param_1,param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}

/* ref: CBaseRenderer::ShouldDrawSampleNow */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c817c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc817c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::CancelNotification */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00c817e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc817e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x68);
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x18))))(*(int * PTR32 *)(this + 0x18) GEN_EDX_FWD,iVar1);
    *(undefined4 *)(this + 0x68) = 0;
  }
  gen_imp_ResetEvent(*(HANDLE *)(this + 0x54));
  return iVar1 == 0;
}

/* ref: CBaseRenderer::ScheduleSample */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c81820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc81820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_FWD,param_1,&(*(undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x0)));
    if (-1 < (int)uVar1) {
      if (uVar1 == 0) {
        gen_imp_SetEvent(*(HANDLE *)(this + 0x54));
        return 1;
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x10))))
                        (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,*(undefined4 *)(this + 0x20),
                         *(undefined4 *)(this + 0x24),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),*(undefined4 *)(this + 0x54),
                         this + 0x68);
      return (uint)(-1 < (int)uVar1);
    }
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::Render */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c818a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc818a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((param_1 != 0) && (*(int *)(this + 100) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,param_1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_ARG,param_1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_ARG,param_1);
    return 0;
  }
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::HaveCurrentSample */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c818f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc818f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  iVar1 = *(int *)(this + 0x6c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return (uint)(iVar1 != 0);
}

/* ref: Client::System::Streaming::TextureRenderer::GetCurrentSample */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  if (*(int *)(this + 0x6c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x6c) + 4))))(*(int * PTR32 *)(this + 0x6c) GEN_EDX_ARG);
  }
  uVar1 = *(uint *)(this + 0x6c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::Receive */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c81960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc81960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x98))))(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 < 0) {
    return -(uint)(uVar1 != 0x8004022b) & uVar1;
  }
  if (*(int *)(this + 0x14) == 1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG);
    *(undefined4 *)(this + 0xb4) = 0;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x7c));
    if (*(int *)(this + 0x14) == 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x7c));
      return 0;
    }
    *(undefined4 *)(this + 0xb4) = 1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
    gen_imp_LeaveCriticalSection(this + 0x7c);
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
  if ((int)uVar1 < 0) {
    *(undefined4 *)(this + 0xb4) = 0;
    return 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG);
  *(undefined4 *)(this + 0xb4) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x14) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_ARG,*(undefined4 *)(this + 0x6c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::ClearPendingSample */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  piVar1 = *(int * PTR32 *)(this + 0x6c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return 0;
}

/* ref: CBaseRenderer::TimerCallback */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c81ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  if (*(int *)(this + 0xc0) != 0) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x60)));
    *(undefined4 *)(this + 0xc0) = 0;
    (*pcVar1)(this);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94)));
}

/* ref: CBaseRenderer::NotifyEndOfStream */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 100) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *(undefined4 *)(this + 0xc0) = 0;
  if (*(undefined * PTR32 *)(this + 0x50) != ((undefined *)GEN_TOP(0x0))) {
    F_00c8b0b0(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_ARG);
  }
  *(undefined4 *)(this + 0x74) = 1;
  uVar1 = F_00c84750((undefined *)this GEN_EDX_ARG,1,0,this + 0xc);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

/* ref: CBaseRenderer::ResetEndOfStreamTimer */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c81b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(UINT *)(this + 0xc0) != 0) {
    gen_imp_timeKillEvent(*(UINT *)(this + 0xc0));
    *(undefined4 *)(this + 0xc0) = 0;
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::StartStreaming */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 100) != 1) {
    *(undefined4 *)(this + 100) = 1;
    gen_imp_timeBeginPeriod(1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_ARG);
    if (*(int *)(this + 0x6c) == 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_ARG,*(int *)(this + 0x6c));
    if (uVar1 == 0) {
      gen_imp_SetEvent(*(HANDLE *)(this + 0x54));
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::StopStreaming */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  *(undefined4 *)(this + 0x74) = 0;
  if (*(int *)(this + 100) == 1) {
    *(undefined4 *)(this + 100) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_ARG);
    gen_imp_timeEndPeriod(1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return 0;
}

/* ref: CBaseRenderer::SetRepaintStatus */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c81c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc81c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  *(undefined4 *)(this + 0xb0) = param_1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94)));
}

/* ref: CBaseRenderer::SendNotifyWindow */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c81c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc81c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&REFG(undefined, 0x1095b54),&(*(int * PTR32 *)&gen_args[0]));
  uVar1 = (*(undefined4 *)&gen_args[1]);
  if (-1 < (int)uVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x19,(*(undefined4 *)&gen_args[1]),0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  uVar2 = F_00c84750((undefined *)this GEN_EDX_ARG,0x19,uVar1,0);
  return uVar2;
}

/* ref: CBaseRenderer::SendRepaint */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c81cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  if ((((*(int *)(this + 0x60) == 0) && (iVar1 = *(int *)(this + 0x78), *((int *)GEN_TOP((iVar1 + 0x18))) != 0)
       ) && (*((char *)GEN_TOP((iVar1 + 0xa1))) == '\0')) &&
     ((*(int *)(this + 0x70) == 0 && (*(int *)(this + 0xb0) == 1)))) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 0xc;
    }
    F_00c84750((undefined *)this GEN_EDX_ARG,5,iVar1,0);
    F_00c81c50(this GEN_EDX_ARG,0);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94)));
}

/* ref: CBaseRenderer::OnDisplayChange */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c81d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  code * pcVar2;
  int iVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(this + 0x78);
  if (*((int *)GEN_TOP((iVar1 + 0x18))) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1 + 0xc;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xc))) + 4))))(iVar1 + 0xc);
  F_00c84750((undefined *)this GEN_EDX_ARG,0x16,iVar3,0);
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x70)));
  *(undefined4 *)(this + 0x60) = 1;
  (*pcVar2)(this);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + 0xc))) + 8))))(*(int *)(this + 0x78) + 0xc);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 1;
}

/* ref: FUN_00c81dc0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00c81dc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc81dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00c81dd0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00c81dd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc81dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: CRendererInputPin::CRendererInputPin */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c81de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc81de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c87d40(this GEN_EDX_FWD,0,param_1,param_1 + 0x7c,param_2,param_3);
  *((int *)GEN_TOP(((int)this + 0xd8))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x11288b0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[18])REFP(0x1128868));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[5])REFP(0x1128850));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[9])REFP(0x112882c));
  return (uint)this;
}

/* ref: CRendererInputPin::EndOfStream */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c81e30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc81e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*((int *)GEN_TOP((param_1 + 0xcc))) + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*((int *)GEN_TOP((param_1 + 0xcc))) + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection_00);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x38))))(param_1 - 0xc);
  if (uVar1 == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xcc))) + 0x68))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xcc))) GEN_EDX_ARG);
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
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c81eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc81eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*((int *)GEN_TOP((param_1 + 0xcc))) + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection_00);
  lpCriticalSection = (LPCRITICAL_SECTION)(*((int *)GEN_TOP((param_1 + 0xcc))) + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00c85cd0(param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xcc))) + 0x84))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xcc))) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xcc))) + 100))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xcc))) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection(lpCriticalSection_00);
  return uVar1;
}

/* ref: CRendererInputPin::EndFlush */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c81f20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc81f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*((int *)GEN_TOP((param_1 + 0xcc))) + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*((int *)GEN_TOP((param_1 + 0xcc))) + 0x94);
  gen_imp_EnterCriticalSection(lpCriticalSection_00);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xcc))) + 0x88))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xcc))) GEN_EDX_ARG);
  if (-1 < (int)uVar1) {
    uVar1 = F_00c85d00(param_1);
  }
  param_1 = uVar1;
  gen_imp_LeaveCriticalSection(lpCriticalSection_00);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return param_1;
}

/* ref: CRendererInputPin::Receive */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c81f90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc81f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined * this;
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x40))) + 0x9c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x40))) GEN_EDX_ARG,param_2);
  if ((int)uVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(*((int *)GEN_TOP((param_1 + 0x40))) + 0x7c);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if ((((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0x70))) + 0x14))) != 0) && (*((char *)GEN_TOP((param_1 + 9))) == '\0')) &&
        (*((int *)GEN_TOP((*((undefined * PTR32 *)GEN_TOP((param_1 + 0x40))) + 0x60))) == 0)) &&
       (*((char *)GEN_TOP((param_1 - 0x74))) == '\0')) {
      F_00c84750(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x40))) GEN_EDX_ARG,3,uVar1,0);
      lpCriticalSection_00 = (LPCRITICAL_SECTION)(*((int *)GEN_TOP((param_1 + 0x40))) + 0x94);
      gen_imp_EnterCriticalSection(lpCriticalSection_00);
      this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x40)));
      if ((*(int *)(this + 100) != 0) && (*(int *)(this + 0x74) == 0)) {
        F_00c81b20(this GEN_EDX_ARG);
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection_00);
      *((undefined1 *)GEN_TOP((param_1 - 0x74))) = 1;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: CRendererInputPin::BreakConnect */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c82030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc82030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) + 0x8c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) GEN_EDX_FWD);
  if (-1 < (int)uVar1) {
    uVar1 = F_00c85a00(this GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: CRendererInputPin::CompleteConnect */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c82060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc82060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) + 0x94))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) GEN_EDX_FWD,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = F_00c850e0(param_1);
  }
  return uVar1;
}

/* ref: CRendererInputPin::QueryId */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc82090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * apuVar1 [1];
  undefined2 uVar2;
  undefined4 * puVar3;
  
  uVar2 = REFG(undefined2, 0x1128720);
  apuVar1[0] = (*(undefined * PTR32 (*)[1])REFP(0x112871c))[0];
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  puVar3 = gen_imp_CoTaskMemAlloc(6);
  *param_2 = puVar3;
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x8007000e;
  }
  *puVar3 = apuVar1[0];
  *(undefined2 *)(puVar3 + 1) = uVar2;
  return 0;
}

/* ref: CRendererInputPin::CheckMediaType */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c820e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc820e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) + 0xb0))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: CRendererInputPin::Active */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c82100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc82100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) + 0x74))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: CRendererInputPin::Inactive */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c82110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc82110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x24))) = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) + 0x78))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: CRendererInputPin::SetMediaType */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c82130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc82130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c850f0(this GEN_EDX_FWD,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) + 0x90))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xd8))) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::ResetStreamingTimes */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c82160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc82160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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

/* ref: Client::System::Streaming::TextureRenderer::OnStartStreaming */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c82220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc82220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))(this GEN_EDX_FWD);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::OnStopStreaming */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c82230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc82230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  DWORD DVar1;
  
  DVar1 = gen_imp_timeGetTime();
  *(DWORD *)(this + 0x158) = DVar1 - *(int *)(this + 0x158);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf18 */
GEN_LIB GEN_NOFRAME unsigned int F_00c82250(void)
{
  GEN_ENTER(0xc82250u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Streaming::TextureRenderer::vf19 */
GEN_LIB GEN_NOFRAME unsigned int F_00c82260(void)
{
  GEN_ENTER(0xc82260u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c82270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c82270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc82270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x150))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x154))) = param_2;
  return param_1;
}

/* ref: Client::System::Streaming::TextureRenderer::RecordFrameLateness */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c82290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc82290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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

/* ref: Client::System::Streaming::TextureRenderer::OnDirectRender */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c82390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc82390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  code * pcVar1;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xb4)));
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 5000000;
  (*pcVar1)(this,*(undefined4 *)(this + 0x150),*(undefined4 *)(this + 0x154));
  if (0 < *(int *)(this + 0xf0)) {
    return (uint)(gen_imp_Sleep(*(int *)(this + 0xf0) / 10000));
  }
  return (uint)(gen_imp_Sleep(0));
}

/* ref: Client::System::Streaming::TextureRenderer::OnRenderStart */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c82400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc82400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  DWORD DVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb4))))
            (this GEN_EDX_ARG,*(undefined4 *)(this + 0x150),*(undefined4 *)(this + 0x154));
  DVar1 = gen_imp_timeGetTime();
  *(DWORD *)(this + 0xfc) = DVar1;
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::OnRenderEnd */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c82430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc82430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
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
    return (uint)(gen_imp_Sleep(*(int *)(this + 0xf0) / 10000));
  }
  return (uint)(gen_imp_Sleep(0));
}

/* ref: FUN_00c824b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c824b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc824b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((param_1 - 0x38))) = param_2;
  return 0;
}

/* ref: CBaseVideoRenderer::Notify */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c824d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc824d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  if (999 < param_4) {
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
    return 0;
  }
  *((int *)GEN_TOP((param_1 + 0xc))) = (int)(0x172dd680 / (longlong)(param_4 + 0xa7)) - 330000;
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::SendQuality */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c82510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc82510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_1c;
  int iStack_18;
  
  iVar4 = (*(int *)&gen_args[3]);
  iVar1 = *(int *)(this + 0x10c);
  if (iVar1 < 0) {
    local_1c = 0;
  }
  else {
    local_1c = (uint)(iVar1 <= *(int *)(this + 0xf4) * 2);
  }
  iStack_18 = 1000;
  if (-1 < iVar1) {
    if (((int)(*(uint *)&gen_args[1]) < 0) || (((int)(*(uint *)&gen_args[1]) < 1 && ((*(uint *)&gen_args[0]) == 0)))) {
      iVar2 = *(int *)(this + 0x108);
      if ((20000 < iVar2) &&
         ((0x7fffffff < (*(uint *)&gen_args[1]) && (((int)(*(uint *)&gen_args[1]) < -1 || ((*(uint *)&gen_args[0]) < 0xffffb1e0)))))) {
        if ((iVar2 < iVar1) && (iVar2 < iVar1 + 20000)) {
          (*(int *)&gen_args[3]) = (iVar1 - iVar2) + 20000;
          iStack_18 = (iVar1 / (*(int *)&gen_args[3])) * 1000;
          if (iStack_18 < 0x7d1) goto LAB_00c825e7;
        }
        iStack_18 = 2000;
      }
    }
    else {
      iStack_18 = 1000 - (int)((longlong)CONCAT44((*(uint *)&gen_args[1]),(*(uint *)&gen_args[0])) / 10000);
      if (iStack_18 < 500) {
        iStack_18 = 500;
      }
    }
  }
LAB_00c825e7: ;
  uVar5 = *(int *)(this + 0xf4) / 2;
  if (*(int *)(this + 0xac) == 0) {
    iVar1 = *(int *)(this + 0x78);
    (*(int *)&gen_args[3]) = 0;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x18))))))
                      (*((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x18))) GEN_EDX_ARG,&REFG(undefined, 0x1095b14),&(*(int *)&gen_args[3]));
    if (-1 < (int)uVar6) {
      *(int *)(this + 0xac) = (*(int *)&gen_args[3]);
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0xac);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))
                      (piVar3 GEN_EDX_ARG,this + 0xc,local_1c,iStack_18,uVar5 + (*(uint *)&gen_args[0]),
                       ((int)uVar5 >> 0x1f) + (*(uint *)&gen_args[1]) + (uint)CARRY4(uVar5,(*(uint *)&gen_args[0])),(*(undefined4 *)&gen_args[2]),iVar4);
    return uVar5;
  }
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::ShouldDrawSampleNow */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c82680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc82680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
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
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0xc))))(*(int * PTR32 *)(this + 0x18) GEN_EDX_FWD,((byte *)(gen_frame + 0x4)) + 4);
  uVar10 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) - *(uint *)(this + 0x20);
  iVar3 = ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) - *(int *)(this + 0x24)) -
          (uint)((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) < *(uint *)(this + 0x20));
  uVar8 = uVar10 - *param_2;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = iVar3;
  uVar4 = (iVar3 - param_2[1]) - (uint)(uVar10 < *param_2);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = uVar10;
  if ((uVar4 < 0x80000000) || ((-2 < (int)uVar4 && (0xe2329aff < uVar8)))) {
    param_2 = ((uint *)GEN_TOP(uVar8));
    if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (500000000 < uVar8)))) {
      param_2 = ((uint *)GEN_TOP(0x1dcd6500));
    }
  }
  else {
    param_2 = ((uint *)GEN_TOP(0xe2329b00));
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc0))))(this GEN_EDX_ARG,param_2,(int)((int)(uintptr_t)param_2) >> 0x1f,uVar10,iVar3);
  *(uint *)(this + 0xec) = (uint)(uVar4 == 0);
  iVar5 = *param_3 - *puVar2;
  iVar3 = *(int *)(this + 0x110);
  iVar6 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
  if ((iVar3 + iVar6 < iVar5) || (iVar5 < iVar3 - iVar6)) {
    *(int *)(this + 0x10c) = iVar5;
    *(int *)(this + 0x110) = iVar5;
  }
  if ((((uVar4 == 0) != 0) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x3c))))(param_1 GEN_EDX_ARG), uVar4 == 0)) ||
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
       ((iVar7 < 0 || (puVar9 < ((undefined1 *)GEN_TOP(0x989681)))))) {
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
    if ((uVar11 < 0x80000000) || ((-2 < (int)uVar11 && (((undefined1 *)GEN_TOP(0xe2329aff)) < param_1)))) {
      if ((-1 < (int)uVar11) && ((0 < (int)uVar11 || (((undefined1 *)GEN_TOP(0x1dcd6500)) < param_1)))) {
        param_1 = ((int *)GEN_TOP(0x1dcd6500));
      }
    }
    else {
      param_1 = ((int *)GEN_TOP(0xe2329b00));
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

/* ref: Client::System::Streaming::TextureRenderer::ScheduleSample */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c82a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc82a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c81820((undefined *)this GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    *(int *)(this + 0x120) = *(int *)(this + 0x120) + 1;
    return 0;
  }
  return 1;
}

/* ref: CBaseVideoRenderer::get_FramesDroppedInRenderer */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82ac0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc82ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 - 100));
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x40)));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 - 100));
  return 0;
}

/* ref: CBaseVideoRenderer::get_FramesDrawn */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82b00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc82b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 - 100));
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x44)));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 - 100));
  return 0;
}

/* ref: CBaseVideoRenderer::get_AvgFrameRate */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82b40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc82b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  int iVar2;
  
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 - 100);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 - 0x7c))) == 0) {
    iVar2 = *((int *)GEN_TOP((param_1 + 0x78)));
  }
  else {
    DVar1 = gen_imp_timeGetTime();
    iVar2 = DVar1 - *((int *)GEN_TOP((param_1 + 0x78)));
  }
  if (iVar2 < 1) {
    *param_2 = 0;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar2 = gen_imp_MulDiv(100000,*((int *)GEN_TOP((param_1 + 0x44))),iVar2);
  *param_2 = iVar2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseVideoRenderer::get_AvgSyncOffset */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82bc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc82bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 - 100);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*((int *)GEN_TOP((param_1 - 200))) != 0) && (1 < *((int *)GEN_TOP((param_1 + 0x44))))) {
    *param_2 = (int)(*((longlong *)GEN_TOP((param_1 + 0x48))) / (longlong)(*((int *)GEN_TOP((param_1 + 0x44))) - 1));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *param_2 = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseVideoRenderer::IntegerSqrt */
GEN_LIB GEN_FRAME uint F_00c82c30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc82c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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

/* ref: CBaseVideoRenderer::GetStdDev */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c82ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xc82ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == ((uint *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(this + 0x18) != 0) && (1 < param_1)) {
    uVar2 = F_00c8d160(param_5,param_6,param_5,param_6,param_1,param_1 >> 0x1f,0,0);
    uVar1 = F_00c82c30((int)((longlong)
                              CONCAT44((param_4 - (int)(uVar2 >> 0x20)) -
                                       (uint)(param_3 < (uint)uVar2),param_3 - (uint)uVar2) /
                             (longlong)(param_1 - 1)));
    *param_2 = uVar1;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *param_2 = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseVideoRenderer::get_DevSyncOffset */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82d40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc82d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c82ca0(((undefined *)GEN_TOP((param_1 - 0xe0))) GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 0x44))) - 1,param_2,
                    *((undefined4 *)GEN_TOP((param_1 + 0x50))),*((undefined4 *)GEN_TOP((param_1 + 0x54))),
                    *((undefined4 *)GEN_TOP((param_1 + 0x48))),*((undefined4 *)GEN_TOP((param_1 + 0x4c))));
  return uVar1;
}

/* ref: CBaseVideoRenderer::get_Jitter */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82d70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc82d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c82ca0(((undefined *)GEN_TOP((param_1 - 0xe0))) GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 0x44))) - 2,param_2,
                    *((undefined4 *)GEN_TOP((param_1 + 0x60))),*((undefined4 *)GEN_TOP((param_1 + 100))),
                    *((undefined4 *)GEN_TOP((param_1 + 0x68))),*((undefined4 *)GEN_TOP((param_1 + 0x6c))));
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::NonDelegatingQueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82da0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc82da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
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

/* ref: CBaseRenderer::JoinFilterGraph */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82e40(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc82e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  if ((param_2 == 0) && (*((int *)GEN_TOP((param_1 + 0x34))) != 0)) {
    F_00c84750(((undefined *)GEN_TOP((param_1 - 0xc))) GEN_EDX_ARG,0x15,-(uint)(param_1 != 0xc) & param_1,0);
  }
  uVar1 = F_00c87500(param_1,param_2,param_3);
  return uVar1;
}

/* ref: CBaseRenderer::~CBaseRenderer */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c82e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc82e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  code * pcVar1;
  int * piVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x94);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x1128778));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128738));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128724));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(this + 0x74) = 0;
  if (*(int *)(this + 100) == 1) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x44)));
    *(undefined4 *)(this + 100) = 0;
    (*pcVar1)(this);
    gen_imp_timeEndPeriod(1);
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar2 = *(int * PTR32 *)(this + 0x6c);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x50) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x50) + 8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x50) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x78);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x78) = 0;
  }
  gen_imp_DeleteCriticalSection(this + 0xc4);
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  gen_imp_DeleteCriticalSection(this + 0x7c);
  F_00c88dd0(this + 0x5c GEN_EDX_ARG);
  F_00c88dd0(this + 0x58 GEN_EDX_ARG);
  F_00c88dd0(this + 0x54 GEN_EDX_ARG);
  F_00c84310((undefined *)this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Streaming::TextureRenderer::WaitForRenderTime */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c82f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc82f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  
  uVar1 = *(undefined4 *)(this + 0x54);
  iVar2 = *(int *)this;
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x58);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x48))))(this);
  do {
    DVar3 = gen_imp_WaitForMultipleObjects(2,&(*(undefined4 *)(gen_frame + 0x0)),0,10000);
  } while (DVar3 == 0x102);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG);
  if (DVar3 == 0) {
    return 0x80040223;
  }
  *(undefined4 *)(this + 0x68) = 0;
  return 0;
}

/* ref: CBaseRenderer::Stop */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c82fc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc82fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x6c))) + 0x18))) != 0) {
      F_00c84440(param_1);
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x6c))) + 0x9c)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
      }
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      *((undefined4 *)GEN_TOP((param_1 + 0xa4))) = 1;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x80))))(param_1 - 0xc);
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x28))))(param_1 - 0xc,0);
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 100))))(param_1 - 0xc);
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x6c))))(param_1 - 0xc);
      gen_imp_SetEvent(*((HANDLE *)GEN_TOP((param_1 + 0x50))));
      F_00c81490(((undefined *)GEN_TOP((param_1 - 0xc))) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((param_1 + 0x54))) = 0;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c83090 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83090(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *((int *)GEN_TOP((param_1 + 8)));
  if (iVar1 == 1) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x30))))(param_1 - 0xc,1);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar4;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x6c))) + 0x18))) == 0) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x30)));
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 1;
    uVar4 = (*pcVar2)(param_1 - 0xc,1);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar4;
  }
  uVar4 = F_00c844d0(param_1);
  if ((int)uVar4 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar4;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  *((undefined4 *)GEN_TOP((param_1 + 0xa4))) = 1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x80))))(param_1 - 0xc);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x28))))(param_1 - 0xc,1);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x6c))))(param_1 - 0xc);
  if (*((UINT *)GEN_TOP((param_1 + 0xb4))) != 0) {
    gen_imp_timeKillEvent(*((UINT *)GEN_TOP((param_1 + 0xb4))));
    *((undefined4 *)GEN_TOP((param_1 + 0xb4))) = 0;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x6c))) + 0x9c)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  }
  if (iVar1 == 0) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x70)));
    *((undefined4 *)GEN_TOP((param_1 + 0x54))) = 0;
    (*pcVar2)(param_1 - 0xc);
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x30))))(param_1 - 0xc,iVar1);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar4;
}

/* ref: CBaseRenderer::Run */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c831d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc831d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int * piVar2;
  code * pcVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *((int *)GEN_TOP((param_1 + 8)));
  if (iVar1 != 2) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x6c))) + 0x18))) != 0) {
      gen_imp_SetEvent(*((HANDLE *)GEN_TOP((param_1 + 0x50))));
      uVar4 = F_00c84570(param_1,param_2,param_3);
      if ((int)uVar4 < 0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return uVar4;
      }
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x28))))(param_1 - 0xc,1);
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      *((undefined4 *)GEN_TOP((param_1 + 0xa4))) = 0;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x6c))) + 0x9c)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
      }
      if (iVar1 == 0) {
        pcVar3 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x70)));
        *((undefined4 *)GEN_TOP((param_1 + 0x54))) = 0;
        (*pcVar3)(param_1 - 0xc);
      }
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x7c))))(param_1 - 0xc);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar4;
    }
    F_00c84750(((undefined *)GEN_TOP((param_1 - 0xc))) GEN_EDX_ARG,1,0,-(uint)(param_1 != 0xc) & param_1);
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 2;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::GetPin */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c832d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc832d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0xc4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)&gen_args[0]) == 0) {
    if (*(int *)(this + 0x78) != 0) {
LAB_00c8334b: ;
      uVar1 = *(uint *)(this + 0x78);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
    (*(int *)&gen_args[0]) = 0;
    this_00 = ((undefined *)GEN_TOP(F_004069f0(0xe0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      piVar2 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar2 = ((int *)GEN_TOP(F_00c81de0(this_00 GEN_EDX_ARG,this,&(*(int *)&gen_args[0]),(*(undefined * PTR32 (*)[1])REFP(0x112870c)))));
    }
    *(int * PTR32 *)(this + 0x78) = piVar2;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      if (-1 < (*(int *)&gen_args[0])) goto LAB_00c8334b;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x78) = 0;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::CompleteConnect */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c83360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc83360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)(this + 0x60) = 0;
  if (*(int *)(this + 0x14) == 2) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_FWD);
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

/* ref: Client::System::Streaming::TextureRenderer::BreakConnect */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c833d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc833d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xac);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
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
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG);
  *(undefined4 *)(this + 0x60) = 0;
  if (*(int *)(this + 0x14) == 2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::PrepareReceive */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc83470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
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
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,piVar1[0x33]);
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
    if (*(undefined * PTR32 *)(this + 0x50) != ((undefined *)GEN_TOP(0x0))) {
      F_00c8af50(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_ARG,param_1);
    }
    if (*(int *)(this + 100) == 1) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_ARG,param_1);
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    if (*(int *)(this + 100) == 0) {
      F_00c81c50((undefined *)this GEN_EDX_ARG,1);
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

/* ref: CBaseRenderer::EndOfStreamTimerCallback */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00c835f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc835f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  code * pcVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x25));
  if (param_3[0x30] != 0) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*param_3 + 0x60)));
    param_3[0x30] = 0;
    (*pcVar1)(param_3);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x25)));
}

/* ref: Client::System::Streaming::TextureRenderer::SendEndOfStream */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc83630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (((*(int *)(this + 0x70) != 0) && (*(int *)(this + 0x74) == 0)) && (*(int *)(this + 0xc0) == 0)
     ) {
    piVar1 = *(int * PTR32 *)(this + 0x18);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      iVar2 = *(int *)(this + 0xbc);
      uVar5 = *(uint *)(this + 0xb8);
      uVar3 = *(uint *)(this + 0x20);
      uVar6 = uVar5 + *(uint *)(this + 0x20);
      iVar4 = *(int *)(this + 0x24);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)));
      iVar2 = (int)((longlong)
                    CONCAT44(((iVar2 + iVar4 + (uint)CARRY4(uVar5,uVar3)) - (*(int *)(gen_frame + 0x4))) -
                             (uint)(uVar6 < (*(uint *)(gen_frame + 0x0))),uVar6 - (*(uint *)(gen_frame + 0x0))) / 10000);
      if (0x31 < iVar2) {
        uVar5 = F_00c897c0(iVar2,10,((code *)REFP(0xc835f0)),this,0);
        *(uint *)(this + 0xc0) = uVar5;
        if (uVar5 != 0) {
          return 0;
        }
      }
    }
    uVar5 = F_00c81b20((undefined *)this GEN_EDX_ARG);
    return uVar5;
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::ResetEndOfStream */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c836c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc836c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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

/* ref: CBaseVideoRenderer::CBaseVideoRenderer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc83710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00c81220((undefined *)this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1128978));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128938));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128924));
  *(undefined * PTR32 * PTR32 *)(this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1128900));
  *(undefined * PTR32 * PTR32 *)(this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x11288ec));
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  F_00c82160((undefined *)this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: CBaseVideoRenderer::~CBaseVideoRenderer */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c83780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc83780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1128978));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128938));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128924));
  *(undefined * PTR32 * PTR32 *)(this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1128900));
  *(undefined * PTR32 * PTR32 *)(this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x11288ec));
  F_00c82e80((undefined *)this GEN_EDX_FWD);
  return;
}

/* ref: CUnknown::QueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c837b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc837b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 - 8))))))
                    (*((undefined4 * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: CUnknown::AddRef */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c837d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc837d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 8))) + 4))))(*((int * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: CUnknown::Release */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c837f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc837f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 8))) + 8))))(*((int * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c83810 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00c83810(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00c83820 */
GEN_LIB GEN_NOFRAME uint F_00c83820(void)
{
  GEN_ENTER(0xc83820u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c83830 */
GEN_LIB GEN_NOFRAME uint F_00c83830(void)
{
  GEN_ENTER(0xc83830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c83840 */
GEN_LIB GEN_NOFRAME unsigned int F_00c83840(void)
{
  GEN_ENTER(0xc83840u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c83850 */
GEN_LIB GEN_NOFRAME unsigned int F_00c83850(void)
{
  GEN_ENTER(0xc83850u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Global::ReturnNotImplemented */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83860(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc83860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return 0x80004001;
}

/* ref: Global::PinQueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83870(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc83870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 - 8))))))
                    (*((undefined4 * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: Global::PinAddRef */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83890(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 8))) + 4))))(*((int * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::PinRelease */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c838b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc838b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 8))) + 8))))(*((int * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::PinQueryInterfaceThunk8C */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83900(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc83900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c83870(param_1 - 0x8c,param_2,param_3);
  return uVar1;
}

/* ref: Global::PinReleaseThunk4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83910(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c838b0(param_1 - 4);
  return uVar1;
}

/* ref: Global::QueryInterfaceThunk4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83920(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc83920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c837b0(param_1 - 4,param_2,param_3);
  return uVar1;
}

/* ref: Global::PinAddRefThunk4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83930(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c83890(param_1 - 4);
  return uVar1;
}

/* ref: Global::PinReleaseThunk8C */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83940(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c838b0(param_1 - 0x8c);
  return uVar1;
}

/* ref: Global::ReleaseThunk4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83950(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c837f0(param_1 - 4);
  return uVar1;
}

/* ref: Global::PinQueryInterfaceThunk4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc83960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c83870(param_1 - 4,param_2,param_3);
  return uVar1;
}

/* ref: Global::PinAddRefThunk8C */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83970(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c83890(param_1 - 0x8c);
  return uVar1;
}

/* ref: Global::AddRefThunk4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c83980(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c837d0(param_1 - 4);
  return uVar1;
}

/* ref: Global::ScalarDeletingDestructor_00c83990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83990(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc83990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c85880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: CBaseRenderer::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c839c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc839c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c82e80(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: CBaseVideoRenderer::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c839f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc839f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[49])REFP(0x1128978));
  *(undefined * PTR32 * PTR32 *)(param_1 + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128938));
  *(undefined * PTR32 * PTR32 *)(param_1 + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128924));
  *(undefined * PTR32 * PTR32 *)(param_1 + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1128900));
  *(undefined * PTR32 * PTR32 *)(param_1 + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x11288ec));
  F_00c82e80(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::ReleaseOleAut32 */
GEN_LIB GEN_NOFRAME unsigned int F_00c83a60(void)
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

/* ref: Global::LoadOleAut32 */
GEN_LIB GEN_NOFRAME uint F_00c83a90(void)
{
  GEN_ENTER(0xc83a90u, 0u, 0u, 0u, 0u);
  HMODULE pHVar1;
  
  pHVar1 = REFG(undefined4, 0x15d7644);
  if (REFG(undefined4, 0x15d7644) == (HMODULE)0x0) {
    pHVar1 = gen_imp_LoadLibraryA(((char *)REFP(0x1128a3c)));
  }
  REFG(undefined4, 0x15d7644) = pHVar1;
  return (uint)pHVar1;
}

/* ref: CUnknown_00c83ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc83ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * pvVar1;
  
  gen_imp_InterlockedIncrement((LONG *)&REFG(undefined, 0x15d7648));
  pvVar1 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = this;
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: Global::GetInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83ae0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc83ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  return 0;
}

/* ref: Global::IsEqualObject */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83b10(unsigned int gen_a0, unsigned int gen_a1)
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
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1082374),&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,&REFG(undefined, 0x1082374),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      return (uint)((*(int * PTR32 *)&gen_args[0]) == (*(int * PTR32 *)&gen_args[1]));
    }
  }
  return 0;
}

/* ref: CUnknown_00c83b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc83b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  undefined * pvVar1;
  
  gen_imp_InterlockedIncrement((LONG *)&REFG(undefined, 0x15d7648));
  pvVar1 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = this;
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: CUnknown::NonDelegatingQueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83bc0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc83bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1082374));
  if (uVar1 != 0) {
    *param_3 = param_1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}

/* ref: Client::System::Streaming::TextureRenderer::NonDelegatingAddRef */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83c10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  gen_imp_InterlockedIncrement(((LONG *)GEN_TOP((param_1 + 8))));
  uVar1 = *((uint *)GEN_TOP((param_1 + 8)));
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::NonDelegatingRelease */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83c40(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  LONG * lpAddend;
  uint uVar1;
  
  lpAddend = param_1 + 2;
  uVar1 = gen_imp_InterlockedDecrement(lpAddend);
  if (uVar1 == 0) {
    *lpAddend = *lpAddend + 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,1);
    return 0;
  }
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00c83ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc83ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00c83cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc83cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: CRefTime::SubtractTime */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc83ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this - uVar2;
  *(uint *)(this + 4) = (*(int *)(this + 4) - param_1[1]) - (uint)(uVar1 < uVar2);
  return (uint)this;
}

/* ref: FUN_00c83d40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c83d40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc83d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x25))) = param_2;
  return param_2;
}

/* ref: CEnumPins::AreWeOutOfSync */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c83d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc83d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  return (uint)(uVar1 != *((uint *)GEN_TOP(((int)this + 0x10))));
}

/* ref: CEnumMediaTypes::AreWeOutOfSync */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c83d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc83d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return (uint)(uVar1 != *((uint *)GEN_TOP(((int)this + 0xc))));
}

/* ref: CSampleList::NextSample */
GEN_LIB GEN_FRAME uint F_00c83d90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x1c;
}

/* ref: CSampleList::Add */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc83dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = *(undefined4 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *(uint *)this = param_1;
  return param_1;
}

/* ref: Global::WideStringLengthChecked */
GEN_LIB GEN_NOFRAME uint F_00c83e00(GEN_P(int in_ecx, unsigned int gen_a0), GEN_P(short * in_edx, unsigned int gen_a1), GEN_P(int * in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0xc83e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(short * in_edx = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = in_ecx;
  do {
    if (iVar2 == 0) {
LAB_00c83e21: ;
      uVar1 = 0x80070057;
LAB_00c83e26: ;
      if (in_edi != ((int *)GEN_TOP(0x0))) {
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
    iVar2 = iVar2 - 1;
  } while( true );
}

/* ref: Global::ValidateBufferSize */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c83e40(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc83e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if ((in_ecx == 0) || (param_2 < in_ecx)) {
    uVar1 = 0x80070057;
  }
  return uVar1;
}

/* ref: Global::CopyWideStringChecked */
GEN_LIB GEN_FRAME uint GEN_FASTCALL F_00c83e60(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc83e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
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
      if ((iVar3 == 0) || (sVar1 = *((short *)GEN_TOP((iVar2 + (int)param_1))), sVar1 == 0)) {
        if (param_2 != 0) goto LAB_00c83ea1;
        break;
      }
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      iVar3 = iVar3 - 1;
      iVar4 = iVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  param_1 = param_1 - 1;
  iVar4 = iVar4 - 1;
  local_8 = 0x8007007a;
LAB_00c83ea1: ;
  *param_1 = 0;
  if (param_3 != ((int *)GEN_TOP(0x0))) {
    *param_3 = iVar4;
  }
  return local_8;
}

/* ref: FUN_00c83ec0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00c83ec0(GEN_P(LPVOID * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc83ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;)
  return (uint)(gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),param_1));
}

/* ref: Global::CreatePosPassThru */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[3]))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG,&REFG(undefined, 0x1095c64),&(*(GEN_LPANY *)&gen_args[0]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(GEN_LPANY *)&gen_args[0])))) + (1) * 12))))))((*(GEN_LPANY *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(GEN_LPANY *)&gen_args[0])))) + 8))))))((*(GEN_LPANY *)&gen_args[0]));
    if (-1 < (int)uVar2) {
      *piVar1 = (int)(*(int * PTR32 *)&gen_args[3]);
      return 0;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 8))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  return uVar2;
}

/* ref: CBaseMediaFilter::~CBaseMediaFilter */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c83f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc83f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  F_00c83a60();
  return;
}

/* ref: CBaseMediaFilter::NonDelegatingQueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c83fa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc83fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
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

/* ref: CBaseMediaFilter::GetClassID */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc84040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined8 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = *((undefined8 *)GEN_TOP((param_1 + 0x14)));
  param_2[1] = *((undefined8 *)GEN_TOP((param_1 + 0x1c)));
  return 0;
}

/* ref: CBaseMediaFilter::GetState */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc84070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_3 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return 0;
}

/* ref: CBaseMediaFilter::SetSyncSource */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c840a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc840a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x24)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP((param_1 + 8))) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseMediaFilter::GetSyncSource */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c840f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc840f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x24)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 4))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseMediaFilter::Stop */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84140(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x24)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseMediaFilter::Pause */
GEN_LIB GEN_FRAME gen_long GEN_STDCALL F_00c84170(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x24)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 1;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseMediaFilter::Run */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c841a0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc841a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[9];
  gen_imp_EnterCriticalSection(lpCriticalSection);
  param_1[3] = param_2;
  param_1[4] = param_3;
  if (param_1[1] == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
    if ((int)uVar1 < 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
  }
  param_1[1] = 2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseMediaFilter::StreamTime */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c84200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc84200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    return 0x80040213;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x14))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1);
  if (-1 < (int)uVar2) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
    uVar2 = *param_1;
    *param_1 = *param_1 - uVar1;
    param_1[1] = (param_1[1] - *((int *)GEN_TOP(((int)this + 0x1c)))) - (uint)(uVar2 < uVar1);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: CBaseFilter::NonDelegatingQueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84240(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc84240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
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

/* ref: CBaseFilter::~CBaseFilter */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c84310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc84310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  F_00406ad0(*(undefined4 *)(this + 0x3c));
  piVar1 = *(int * PTR32 *)(this + 0x18);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x18) = 0;
  }
  F_00c83a60();
  return;
}

/* ref: CBaseFilter::GetClassID */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84340(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc84340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined8 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = *((undefined8 *)GEN_TOP((param_1 + 0x1c)));
  param_2[1] = *((undefined8 *)GEN_TOP((param_1 + 0x24)));
  return 0;
}

/* ref: CBaseFilter::GetState */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84370(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc84370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_3 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return 0;
}

/* ref: CBaseFilter::SetSyncSource */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c843a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc843a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x2c)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP((param_1 + 0xc))) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseFilter::GetSyncSource */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c843f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc843f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x2c)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 4))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseFilter::Stop */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84440(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x2c)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x18))))(param_1 - 0xc);
    iVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x1c))))(param_1 - 0xc,iVar4)));
        if (piVar2 == ((int *)GEN_TOP(0x0))) break;
        if (((piVar2[6] != 0) && (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG), (int)uVar3 < 0)) &&
           (-1 < (int)local_8)) {
          local_8 = uVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar1);
    }
  }
  *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return local_8;
}

/* ref: FUN_00c844d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c844d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc844d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x2c)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 8))) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x18))))(param_1 - 0xc);
    iVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x1c))))(param_1 - 0xc,iVar4)));
        if (piVar2 == ((int *)GEN_TOP(0x0))) break;
        if ((piVar2[6] != 0) && (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG), (int)uVar3 < 0)) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
          return uVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar1);
    }
  }
  *((undefined4 *)GEN_TOP((param_1 + 8))) = 1;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseFilter::Run */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84570(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc84570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xb];
  gen_imp_EnterCriticalSection(lpCriticalSection);
  param_1[5] = param_2;
  param_1[6] = param_3;
  if ((param_1[2] == 0) && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG), (int)uVar1 < 0)) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  if (param_1[2] != 2) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1[-3] + 0x18))))(param_1 - 3);
    local_8 = 0;
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((param_1[-3] + 0x1c))))(param_1 - 3,local_8)));
        if (piVar2 == ((int *)GEN_TOP(0x0))) break;
        if ((piVar2[6] != 0) &&
           (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,param_2,param_3), (int)uVar3 < 0)) {
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

/* ref: Client::System::Streaming::TextureRenderer::StreamTime */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c84650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc84650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x18) == 0) {
    return 0x80040213;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0xc))))(*(int * PTR32 *)(this + 0x18) GEN_EDX_FWD,param_1);
  if (-1 < (int)uVar2) {
    uVar1 = *(uint *)(this + 0x20);
    uVar2 = *param_1;
    *param_1 = *param_1 - uVar1;
    param_1[1] = (param_1[1] - *(int *)(this + 0x24)) - (uint)(uVar2 < uVar1);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: CBaseFilter::FindPin */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(LPCWSTR param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc84690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(LPCWSTR param_2 = (LPCWSTR)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == ((int *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x2c)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x18))))(param_1 - 0xc);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x1c))))(param_1 - 0xc,iVar5);
      if (uVar3 == 0) break;
      iVar4 = gen_imp_lstrcmpW(*((LPCWSTR *)GEN_TOP((uVar3 + 0x14))),param_2);
      if (iVar4 == 0) {
        piVar1 = ((int *)GEN_TOP((uVar3 + 0xc)));
        *param_3 = (int)piVar1;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  *param_3 = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040216;
}

/* ref: CBaseFilter::QueryVendorInfo */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c84740(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc84740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0x80004001;
}

/* ref: CBaseFilter::NotifyEvent */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c84750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc84750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int * piVar1;
  uint uVar2;
  undefined * pCVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0x44);
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0x80004001;
  }
  pCVar3 = param_3;
  if (param_1 == 1) {
    pCVar3 = this + 0xc;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,param_1,param_2,pCVar3);
  return uVar2;
}

/* ref: CBaseFilter::ReconnectPin */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c84790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc84790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*(int *)(this + 0x40) == 0) {
    return 0x80004002;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x40))))
                    (*(undefined4 * PTR32 *)(this + 0x40) GEN_EDX_ARG,&REFG(undefined, 0x1095bd4),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x4c))))((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 8))))((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x40) + 0x20))))(*(int * PTR32 *)(this + 0x40) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::GetPinVersion */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c84800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc84800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x48)));
}

/* ref: CEnumPins::~CEnumPins */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c84820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc84820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a54));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  F_00c8df10(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  return;
}

/* ref: CEnumPins::QueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84840(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc84840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
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

/* ref: CEnumPins::AddRef */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00c848a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc848a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(gen_imp_InterlockedIncrement(((LONG *)GEN_TOP((param_1 + 0x14)))));
}

/* ref: CEnumPins::Release */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c848c0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc848c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 5);
  if ((uVar1 == 0) && (param_1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: CEnumPins::Skip */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c848f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc848f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 0x14))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  if (uVar1 != *((uint *)GEN_TOP((param_1 + 0x10)))) {
    return 0x80040203;
  }
  if ((uint)(*((int *)GEN_TOP((param_1 + 8))) - *((int *)GEN_TOP((param_1 + 4)))) < param_2) {
    return 1;
  }
  *((uint *)GEN_TOP((param_1 + 4))) = *((int *)GEN_TOP((param_1 + 4))) + param_2;
  return 0;
}

/* ref: CEnumPins::Reset */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84940(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 0x14))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  *((uint *)GEN_TOP((param_1 + 0x10))) = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  *((uint *)GEN_TOP((param_1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  F_00c8d780(((undefined *)GEN_TOP((param_1 + 0x18))) GEN_EDX_ARG);
  return 0;
}

/* ref: CEnumPins::Refresh */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84980(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 0x14))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  *((uint *)GEN_TOP((param_1 + 0x10))) = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  *((uint *)GEN_TOP((param_1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  return 0;
}

/* ref: CEnumMediaTypes::QueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c849d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc849d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
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

/* ref: CEnumMediaTypes::AddRef */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00c84a30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(gen_imp_InterlockedIncrement(((LONG *)GEN_TOP((param_1 + 0x10)))));
}

/* ref: CEnumMediaTypes::Release */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84a50(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 4);
  if ((uVar1 == 0) && (param_1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: CEnumMediaTypes::Next */
GEN_LIB_GS GEN_FRAME uint GEN_STDCALL F_00c84a80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc84a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x54, 12, 4);
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50));
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  if (uVar3 != *((uint *)GEN_TOP((param_1 + 0xc)))) {
    return 0x80040203;
  }
  if (param_4 == ((int *)GEN_TOP(0x0))) {
    if (1 < param_2) {
      return 0x80070057;
    }
  }
  else {
    *param_4 = 0;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  uVar3 = param_2;
  puVar1 = param_3;
  iVar2 = (*(int *)(gen_frame + 0x0));
  do {
    if (uVar3 == 0) {
LAB_00c84b90: ;
      if (param_4 != ((int *)GEN_TOP(0x0))) {
        *param_4 = iVar2;
      }
      return (uint)(uVar3 != 0);
    }
    F_00c8e4a0(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    iVar6 = *((int *)GEN_TOP((param_1 + 4)));
    *((int *)GEN_TOP((param_1 + 4))) = iVar6 + 1;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x34))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,iVar6,((undefined4 *)(gen_frame + 0x4)));
    if (uVar4 != 0) {
LAB_00c84b88: ;
      F_00c8e460(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      goto LAB_00c84b90;
    }
    puVar5 = gen_imp_CoTaskMemAlloc(0x48);
    *puVar1 = puVar5;
    if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c84b88;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
    puVar7 = ((undefined4 *)(gen_frame + 0x4));
    for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    uVar3 = uVar3 - 1;
    F_00c8e460(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  } while( true );
}

/* ref: CEnumMediaTypes::Skip */
GEN_LIB_GS GEN_FRAME uint GEN_STDCALL F_00c84bc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc84bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  if (uVar1 != *((uint *)GEN_TOP((param_1 + 0xc)))) {
    return 0x80040203;
  }
  *((int *)GEN_TOP((param_1 + 4))) = *((int *)GEN_TOP((param_1 + 4))) + param_2;
  F_00c8e4a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x34))))
                    (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 4))) - 1,((undefined1 *)(gen_frame + 0x0)));
  F_00c8e460(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)(uVar1 != 0);
}

/* ref: CEnumMediaTypes::Reset */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84c60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  *((uint *)GEN_TOP((param_1 + 0xc))) = uVar1;
  return 0;
}

/* ref: CBasePin::~CBasePin */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c84c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc84c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  F_00c8e460(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  F_00c83a60();
  return;
}

/* ref: CBasePin::NonDelegatingQueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84cb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc84cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
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

/* ref: CBasePin::NonDelegatingAddRef */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84d50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 0xc))) + 4))))
                    (*((int *)GEN_TOP((param_1 + 0x28))) + 0xc);
  return uVar1;
}

/* ref: CBasePin::NonDelegatingRelease */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c84d70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc84d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 0xc))) + 8))))
                    (*((int *)GEN_TOP((param_1 + 0x28))) + 0xc);
  return uVar1;
}

/* ref: CBasePin::AttemptConnection */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c84d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc84d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_FWD,param_1);
  if ((int)uVar2 < 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,param_2);
  if (uVar2 == 0) {
    *((int * PTR32 *)GEN_TOP(((int)this + 0x18))) = param_1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,param_2);
    if ((-1 < (int)uVar2) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,(int)this + 0xc,param_2), -1 < (int)uVar2)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return uVar2;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
    }
  }
  else if (((-1 < (int)uVar2) || (uVar2 == 0x80004005)) || (uVar2 == 0x80070057)) {
    uVar2 = 0x8004022a;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return uVar2;
}

/* ref: CBasePin::TryMediaTypes */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c84e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc84e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  code * pcVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x14))))(param_3 GEN_EDX_FWD);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_3 + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar4 = (*pcVar1)(param_3,1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
  if (uVar4 == 0) {
    do {
      if (((*(undefined * PTR32 *)(gen_frame + 0x8)) == ((undefined *)GEN_TOP(0x0))) ||
         ((param_2 != 0 && (uVar4 = F_00c8e2c0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_2), uVar4 == 0)))) {
        uVar4 = 0x80040207;
      }
      else {
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,param_1);
        if ((int)uVar4 < 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
        }
        else {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,pvVar3);
          if (uVar4 == 0) {
            *((int * PTR32 *)GEN_TOP(((int)this + 0x18))) = param_1;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,pvVar3);
            if ((-1 < (int)uVar4) &&
               (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,(int)this + 0xc,pvVar3),
               -1 < (int)uVar4)) {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG,param_1);
              if (-1 < (int)uVar4) goto LAB_00c84fa2;
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
            }
          }
          else if (((-1 < (int)uVar4) || (uVar4 == 0x80004005)) || (uVar4 == 0x80070057)) {
            uVar4 = 0x8004022a;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
          piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
          if (piVar2 != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
            *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
          }
        }
        if ((((int)uVar4 < 0) && (-1 < (int)(*(uint *)(gen_frame + 0x4)))) &&
           ((uVar4 != 0x80004005 && ((uVar4 != 0x80070057 && (uVar4 != 0x8004022a)))))) {
          (*(uint *)(gen_frame + 0x4)) = uVar4;
        }
      }
LAB_00c84fa2: ;
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != ((undefined *)GEN_TOP(0x0))) {
        F_00c8e650((*(undefined * PTR32 *)(gen_frame + 0x8)));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
      }
      if (uVar4 == 0) {
        return 0;
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0xc))))(param_3 GEN_EDX_ARG,1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
    } while (uVar4 == 0);
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      return (*(uint *)(gen_frame + 0x4));
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0x80040207;
  return 0x80040207;
}

/* ref: CBasePin::AgreeMediaType */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c85000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc85000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
  if ((param_2 != ((undefined *)GEN_TOP(0x0))) && (uVar1 = F_00c8e280(param_2 GEN_EDX_FWD), uVar1 == 0)) {
    uVar1 = F_00c84d90(this GEN_EDX_ARG,param_1,param_2);
    return uVar1;
  }
  (*(uint *)(gen_frame + 0x0)) = 0x80040207;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    if ((*(uint *)(gen_frame + 0x4)) == *((byte *)GEN_TOP(((int)this + 0x26)))) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)));
    }
    else {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x30))))((int)this + 0xc,&(*(int * PTR32 *)(gen_frame + 0x8)));
    }
    if (-1 < (int)uVar1) {
      uVar1 = F_00c84e60(this GEN_EDX_ARG,param_1,param_2,(*(int * PTR32 *)(gen_frame + 0x8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
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
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c850e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc850e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0;
}

/* ref: CBasePin::SetMediaType */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c850f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc850f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c8e8d0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,param_1);
  return uVar1 & (-1 < (int)uVar1) - 1;
}

/* ref: CBasePin::CheckConnect */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c85110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc85110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x24))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]));
  return ((*(int * PTR32 *)&gen_args[0]) != *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)))) - 1 & 0x80040208;
}

/* ref: CBasePin::ReceiveConnection */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85150(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc85150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  code * pcVar1;
  uint uVar2;
  
  if ((param_2 == ((int *)GEN_TOP(0x0))) || (param_3 == 0)) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x14)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040204;
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x14))) != 0) && (*((char *)GEN_TOP((param_1 + 0x19))) == '\0')) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040224;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x28))))(param_1 - 0xc,param_2);
  if ((int)uVar2 < 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x2c))))(param_1 - 0xc);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x20))))(param_1 - 0xc,param_3);
  if (uVar2 == 0) {
    *((int * PTR32 *)GEN_TOP((param_1 + 0xc))) = param_2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x24))))(param_1 - 0xc,param_3);
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x30))))(param_1 - 0xc,param_2);
      if (-1 < (int)uVar2) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 8))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
    pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x2c)));
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
    (*pcVar1)(param_1 - 0xc);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x2c))))(param_1 - 0xc);
    if (((-1 < (int)uVar2) || (uVar2 == 0x80004005)) || (uVar2 == 0x80070057)) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0x8004022a;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}

/* ref: CBasePin::DisconnectInternal */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c852b0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc852b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (param_1[6] == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x2c))))(param_1 GEN_EDX_ARG);
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[6])) + 8))))(((int *)GEN_TOP(param_1[6])) GEN_EDX_ARG);
      param_1[6] = 0;
      return 0;
    }
  }
  return uVar1;
}

/* ref: CBasePin::ConnectedTo */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c852f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc852f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  *param_2 = (int)piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
    return 0;
  }
  return 0x80040209;
}

/* ref: CBasePin::ConnectionMediaType */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85330(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc85330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x14)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
    F_00c8e3b0(param_2,param_1 + 0x28);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  F_00c8e260(param_2 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040209;
}

/* ref: CBasePin::QueryDirection */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85390(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc85390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  return 0;
}

/* ref: CBasePin::QueryId */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c853c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc853c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c89740(*((undefined4 *)GEN_TOP((param_1 + 8))),param_2);
  return uVar1;
}

/* ref: CBasePin::QueryAccept */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c853e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc853e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x20))))(param_1 - 0xc,param_2);
  if ((int)uVar1 < 0) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00c85410 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c85410(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc85410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0x8000ffff;
}

/* ref: FUN_00c85420 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c85420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x30)));
}

/* ref: FUN_00c85450 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c85450(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc85450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00c85470 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c85470(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc85470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0;
}

/* ref: CBasePin::SetSink */
GEN_LIB GEN_FRAME gen_long GEN_STDCALL F_00c85480(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc85480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x10)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBasePin::Notify */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c854b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc854b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  return 0x80004001;
}

/* ref: CBasePin::NewSegment */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c854c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(double param_6, double gen_a5))
{
  GEN_ENTER(0xc854c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(double param_6 = (double)gen_a5;)
  *((undefined4 *)GEN_TOP((param_1 + 0x74))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x78))) = param_3;
  *((undefined4 *)GEN_TOP((param_1 + 0x7c))) = param_4;
  *((undefined4 *)GEN_TOP((param_1 + 0x80))) = param_5;
  *((double *)GEN_TOP((param_1 + 0x84))) = param_6;
  return 0;
}

/* ref: CBaseOutputPin::CheckConnect */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c85520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc85520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x24))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]));
  if ((*(int * PTR32 *)&gen_args[0]) == *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    return 0x80040208;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,&REFG(undefined, 0x1095aa4),(int)this + 0x9c);
  return uVar2 & (-1 < (int)uVar2) - 1;
}

/* ref: CBaseOutputPin::BreakConnect */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c85570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x98)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_FWD);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x98))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x9c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  }
  return 0;
}

/* ref: CBaseOutputPin::InitAllocator */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00c855d0(GEN_P(LPVOID * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc855d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;)
  return (uint)(gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),param_1));
}

/* ref: CBaseOutputPin::DecideAllocator */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00c855f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc855f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  *param_2 = 0;
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x14)));
  (*(undefined8 *)(gen_frame + 0x0)) = 0;
  (*(undefined8 *)(gen_frame + 0x8)) = 0;
  (*pcVar1)(param_1,&(*(undefined8 *)(gen_frame + 0x0)));
  if ((int)(*(undefined8 *)(gen_frame + 0x8)) == 0) {
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined8 *)(gen_frame + 0x8)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)),1);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_FWD,param_2);
  if (((-1 < (int)uVar3) &&
      (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_ARG,*param_2,&(*(undefined8 *)(gen_frame + 0x0))), -1 < (int)uVar3)) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*param_2,0), -1 < (int)uVar3)) {
    return 0;
  }
  piVar2 = ((int *)GEN_TOP(*param_2));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    *param_2 = 0;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_2);
  if (((-1 < (int)uVar3) &&
      (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_ARG,*param_2,&(*(undefined8 *)(gen_frame + 0x0))), -1 < (int)uVar3)) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*param_2,0), -1 < (int)uVar3)) {
    return 0;
  }
  piVar2 = ((int *)GEN_TOP(*param_2));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    *param_2 = 0;
  }
  return uVar3;
}

/* ref: CBaseOutputPin::GetDeliveryBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c85700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc85700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x98))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x98))) + 0x1c))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0x80004002;
}

/* ref: CBaseOutputPin::Deliver */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c85740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc85740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x9c))) == 0) {
    return 0x80040209;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: CBaseOutputPin::DeliverEndOfStream */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c85770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 0) {
    return 0x80040209;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x38))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: CBaseOutputPin::EndOfStream */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c857d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc857d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0x8000ffff;
}

/* ref: FUN_00c857e0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c857e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc857e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0x8000ffff;
}

/* ref: FUN_00c857f0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c857f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc857f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0x8000ffff;
}

/* ref: CBaseOutputPin::DeliverNewSegment */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c85840(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(double param_6, double gen_a5))
{
  GEN_ENTER(0xc85840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(double param_6 = (double)gen_a5;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x18))) == 0) {
    return 0x80040209;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x18))) + 0x44))))
                    (*((int * PTR32 *)GEN_TOP((param_1 + 0x18))) GEN_EDX_ARG,param_2,param_3,param_4,param_5,
                     (int)(ulonglong)gen_d2bits(param_6),
                     (int)((ulonglong)gen_d2bits(param_6) >> 0x20));
  return uVar1;
}

/* ref: CBaseInputPin::~CBaseInputPin */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c85880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x9c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  }
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  F_00c8e460(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  F_00c83a60();
  return;
}

/* ref: CBaseInputPin::NonDelegatingQueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c858c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc858c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
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

/* ref: CBaseInputPin::GetAllocator */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85920(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc85920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  LPVOID * ppv;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 - 0x78)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  ppv = ((LPVOID *)GEN_TOP((param_1 + 4)));
  if (*ppv == (LPVOID)0x0) {
    uVar1 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),ppv);
    if ((int)uVar1 < 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
  }
  *param_2 = *ppv;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)*ppv + 4))))(*ppv GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseInputPin::NotifyAllocator */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c859a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc859a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 - 0x78)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = param_2;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  *((undefined1 *)GEN_TOP((param_1 + 8))) = param_3;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseInputPin::BreakConnect */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c85a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x9c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_FWD);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  }
  return 0;
}

/* ref: CBaseInputPin::Receive */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85a40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) - 0x98))) + 0x38))))((*(int *)&gen_args[0]) - 0x98);
  if (uVar3 != 0) {
    return uVar3;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,&REFG(undefined, 0x1095a54),&(*(int * PTR32 *)&gen_args[1]));
  if ((int)uVar3 < 0) {
    *((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10))) = 0x30;
    *((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) = 0;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG);
    if (uVar3 == 0) {
      *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) = *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) | 4;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG);
    if (uVar3 == 0) {
      *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) = *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) | 2;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
    if (uVar3 == 0) {
      *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) = *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) | 1;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,(*(int *)&gen_args[0]) + 0x20,(*(int *)&gen_args[0]) + 0x28);
    if (-1 < (int)uVar3) {
      *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) = *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) | 0x110;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x34))))(piVar2 GEN_EDX_ARG,(*(int *)&gen_args[0]) + 0x34);
    if (uVar3 == 0) {
      *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) = *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) | 8;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,(*(int *)&gen_args[0]) + 0x38);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c))) = uVar3;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x3c))) = uVar3;
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x4c))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0x30,(*(int *)&gen_args[0]) + 0x10);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  if (((*((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) & 8) != 0) &&
     (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) - 0x98))) + 0x20))))
                        ((*(int *)&gen_args[0]) - 0x98,*((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x34)))), uVar3 != 0)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) - 0x8c))) + 0x38)));
    *((undefined1 *)GEN_TOP(((*(int *)&gen_args[0]) - 0x74))) = 1;
    (*pcVar1)(*((int *)GEN_TOP(((*(int *)&gen_args[0]) - 0x8c))),(*(int *)&gen_args[0]) - 0x8c);
    piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) - 0x70))) + 0x44)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3,0x8004022a,0);
    }
    return 0x80040200;
  }
  return 0;
}

/* ref: CBaseInputPin::ReceiveMultiple */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85bb0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc85bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
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
    iVar2 = iVar2 - 1;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + *param_4 * 4))));
    if (uVar1 != 0) break;
    *param_4 = *param_4 + 1;
  }
  return uVar1;
}

/* ref: CBaseInputPin::ReceiveCanBlock */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85c00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc85c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 0x70))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 - 0x70))) GEN_EDX_ARG);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 0x70))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 - 0x70))) GEN_EDX_ARG,iVar5);
      if (uVar3 == 0) break;
      piVar1 = ((int *)GEN_TOP((uVar3 + 0xc)));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xc))) + 0x24))))(*((int *)GEN_TOP((uVar3 + 0xc))),piVar1,&(*(int *)(gen_frame + 0x0)));
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (((*(int *)(gen_frame + 0x0)) == 1) &&
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8))), -1 < (int)uVar3)) {
        iVar4 = iVar4 + 1;
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x8)))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x1095aa4),&(*(int * PTR32 *)(gen_frame + 0x4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        if ((int)uVar3 < 0) {
          return 0;
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x20))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
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
GEN_LIB GEN_FRAME gen_long GEN_STDCALL F_00c85cd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc85cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x14)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined1 *)GEN_TOP((param_1 + 0x95))) = 1;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CBaseInputPin::EndFlush */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85d00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc85d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x14)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined1 *)GEN_TOP((param_1 + 0x95))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x18))) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c85d30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85d30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc85d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  return (-(uint)(param_2 != 0) & 0x7fffbffd) + 0x80004003;
}

/* ref: CBaseInputPin::GetAllocatorRequirements */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c85d80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc85d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0x80004001;
}

/* ref: CBaseInputPin::CheckStreaming */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c85d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0x14))) == 0) {
    return 0x80040227;
  }
  if (*((char *)GEN_TOP((in_ecx + 0xa1))) != '\0') {
    return 1;
  }
  return -(uint)(*((char *)GEN_TOP((in_ecx + 0x24))) != '\0') & 0x8004020b;
}

/* ref: CBaseInputPin::PassNotify */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c85dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc85dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  int iVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x0)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x2c))) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x28))) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP(((int)this + 0x28))) + 0xc;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_FWD,iVar2);
    return uVar1;
  }
  uVar1 = 0x80040216;
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))))))
              (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&REFG(undefined, 0x1095b14),&(*(int * PTR32 *)(gen_frame + 0x0)));
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) {
      if (*((int *)GEN_TOP(((int)this + 0x28))) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *((int *)GEN_TOP(((int)this + 0x28))) + 0xc;
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0xc))))
                        ((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar2,(int)*param_1,(int)((ulonglong)*param_1 >> 0x20),
                         (int)param_1[1],(int)((ulonglong)param_1[1] >> 0x20),(int)param_1[2],
                         (int)((ulonglong)param_1[2] >> 0x20));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: CMediaSample::QueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85eb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc85eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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

/* ref: CMediaSample::AddRef */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00c85f20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc85f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(gen_imp_InterlockedIncrement(((LONG *)GEN_TOP((param_1 + 0x44)))));
}

/* ref: CMediaSample::Release */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85f40(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc85f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG,0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x10] = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1[6] + 0xc))) + 0x20))))(((int *)GEN_TOP((param_1[6] + 0xc))) GEN_EDX_ARG,param_1);
  return 0;
}

/* ref: CMediaSample::SetPointer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c85fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc85fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 < 0) {
    return 0x8004020d;
  }
  *((int *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return 0;
}

/* ref: CMediaSample::GetPointer */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85fd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc85fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  return 0;
}

/* ref: CMediaSample::GetSize */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c85ff0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc85ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((uint *)GEN_TOP((param_1 + 0x14)));
}

/* ref: CMediaSample::GetTime */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc86000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if ((*((uint *)GEN_TOP((param_1 + 4))) & 0x100) != 0) {
    *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
    param_2[1] = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
    *param_3 = *((int *)GEN_TOP((param_1 + 0x28)));
    param_3[1] = *((int *)GEN_TOP((param_1 + 0x2c)));
    return 0;
  }
  if ((*((uint *)GEN_TOP((param_1 + 4))) & 0x10) == 0) {
    return 0x80040249;
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  param_2[1] = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((param_1 + 0x24)));
  *param_3 = uVar1 + 1;
  param_3[1] = iVar2 + (uint)(0xfffffffe < uVar1);
  return 0x40270;
}

/* ref: CMediaSample::SetTime */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc86070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffeef;
    return 0;
  }
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *param_2;
    *((undefined4 *)GEN_TOP((param_1 + 0x24))) = param_2[1];
    *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffeff | 0x10;
    return 0;
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = param_2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = *param_3;
  uVar1 = param_3[1];
  *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) | 0x110;
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = uVar1;
  return 0;
}

/* ref: CMediaSample::GetMediaTime */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c860e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc860e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*((byte *)GEN_TOP((param_1 + 4))) & 0x20) == 0) {
    return 0x80040251;
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  param_2[1] = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x38)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x30)));
  iVar3 = *((int *)GEN_TOP((param_1 + 0x34)));
  *param_3 = uVar1 + *((uint *)GEN_TOP((param_1 + 0x30)));
  param_3[1] = ((int)uVar1 >> 0x1f) + iVar3 + (uint)CARRY4(uVar1,uVar2);
  return 0;
}

/* ref: CMediaSample::SetMediaTime */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86120(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc86120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0xffffffdf;
    return 0;
  }
  if (param_3 == ((int *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *((int *)GEN_TOP((param_1 + 0x30))) = *param_2;
  *((int *)GEN_TOP((param_1 + 0x34))) = param_2[1];
  iVar1 = *param_3;
  iVar2 = *param_2;
  *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) | 0x20;
  *((int *)GEN_TOP((param_1 + 0x38))) = iVar1 - iVar2;
  return 0;
}

/* ref: CMediaSample::IsSyncPoint */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86170(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc86170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (byte)~*((byte *)GEN_TOP((param_1 + 4))) & 1;
}

/* ref: CMediaSample::SetSyncPoint */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86190(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc86190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 0) {
    *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) | 1;
    return 0;
  }
  *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe;
  return 0;
}

/* ref: CMediaSample::IsDiscontinuity */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c861b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc861b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (byte)~*((byte *)GEN_TOP((param_1 + 4))) >> 2 & 1;
}

/* ref: CMediaSample::SetDiscontinuity */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c861d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc861d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 0) {
    *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) | 4;
    return 0;
  }
  *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffb;
  return 0;
}

/* ref: CMediaSample::IsPreroll */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c861f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc861f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (byte)~*((byte *)GEN_TOP((param_1 + 4))) >> 1 & 1;
}

/* ref: CMediaSample::SetPreroll */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86210(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc86210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 0) {
    *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) | 2;
    return 0;
  }
  *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffd;
  return 0;
}

/* ref: CMediaSample::GetActualDataLength */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc86230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((uint *)GEN_TOP((param_1 + 0x10)));
}

/* ref: CMediaSample::SetActualDataLength */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86240(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc86240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((param_2 <= *((int *)GEN_TOP((param_1 + 0x14)))) && (-1 < param_2)) {
    *((int *)GEN_TOP((param_1 + 0x10))) = param_2;
    return 0;
  }
  return 0x8004020d;
}

/* ref: CMediaSample::GetMediaType */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc86270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((param_1 + 4))) & 8) == 0) {
    *param_2 = 0;
    return 1;
  }
  uVar1 = F_00c8e6a0(*((undefined4 *)GEN_TOP((param_1 + 0x3c))));
  *param_2 = uVar1;
  return (-(uint)(uVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: CMediaSample::SetMediaType */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c862b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc862b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x3c))) != 0) {
    F_00c8e650(*((int *)GEN_TOP((param_1 + 0x3c))));
    *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = 0;
  }
  if (param_2 == 0) {
    *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffff7;
    return 0;
  }
  uVar1 = F_00c8e6a0(param_2);
  *((uint *)GEN_TOP((param_1 + 0x3c))) = uVar1;
  if (uVar1 == 0) {
    *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffff7;
    return 0x8007000e;
  }
  *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) | 8;
  return 0;
}

/* ref: CMediaSample::GetProperties */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc86310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      return 0x80004003;
    }
    uVar2 = param_2;
    if (0x2f < param_2) {
      uVar2 = 0x30;
    }
    uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
    (*(uint *)(gen_frame + 0x8)) = uVar1 & 0xffffffdf;
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    (*(undefined4 *)(gen_frame + 0x2c)) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
    (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
    (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
    (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
    (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP((param_1 + 0x40)));
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    if ((uVar1 & 8) == 0) {
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP((param_1 + 0x3c)));
    }
    F_00c46aa0(param_3,&(*(uint *)(gen_frame + 0x0)),uVar2);
  }
  return 0;
}

/* ref: CMediaSample::SetProperties */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c863c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc863c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  if (3 < param_2) {
    if (param_3 == ((uint *)GEN_TOP(0x0))) {
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
           ((((param_3[2] & 0x10) != 0 && ((*((byte *)GEN_TOP((param_1 + 4))) & 0x10) == 0)) && (uVar2 < 0x20))
           )))))) ||
        (((0x2b < uVar2 && (param_3[10] != 0)) && (param_3[10] != *((uint *)GEN_TOP((param_1 + 0xc))))))) ||
       ((0x2f < uVar2 &&
        (((uVar1 = param_3[0xb], uVar1 != 0 && (uVar1 != *((uint *)GEN_TOP((param_1 + 0x14))))) ||
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
      *((uint *)GEN_TOP((param_1 + 0x40))) = param_3[8];
    }
    if (uVar2 < 0xc) {
      if (7 < uVar2) {
        *((uint *)GEN_TOP((param_1 + 8))) = param_3[1];
      }
    }
    else {
      *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0x20 | param_3[2];
      *((uint *)GEN_TOP((param_1 + 8))) = param_3[1];
    }
    if (0xf < uVar2) {
      *((uint *)GEN_TOP((param_1 + 0x10))) = param_3[3];
    }
    if (0x1f < uVar2) {
      *((uint *)GEN_TOP((param_1 + 0x28))) = param_3[6];
      *((uint *)GEN_TOP((param_1 + 0x2c))) = param_3[7];
    }
    if (0x17 < uVar2) {
      *((uint *)GEN_TOP((param_1 + 0x20))) = param_3[4];
      *((uint *)GEN_TOP((param_1 + 0x24))) = param_3[5];
    }
    if ((0x27 < uVar2) && ((param_3[2] & 8) != 0)) {
      if (*((int *)GEN_TOP((param_1 + 0x3c))) != 0) {
        F_00c8e650(*((int *)GEN_TOP((param_1 + 0x3c))));
      }
      *((uint *)GEN_TOP((param_1 + 0x3c))) = local_8;
    }
    if (*((int *)GEN_TOP((param_1 + 0x3c))) == 0) {
      *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffff7;
      return 0;
    }
    *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) | 8;
  }
  return 0;
}

/* ref: CDynamicOutputPin::~CDynamicOutputPin */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c86550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1128b60));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[18])REFP(0x1128b18));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[5])REFP(0x1128b00));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[4])REFP(0x1128af0));
  if (*((int *)GEN_TOP(((int)this + 0xbc))) != 0) {
    gen_imp_CloseHandle(*((int *)GEN_TOP(((int)this + 0xbc))));
  }
  if (*((int *)GEN_TOP(((int)this + 0xc0))) != 0) {
    gen_imp_CloseHandle(*((int *)GEN_TOP(((int)this + 0xc0))));
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  F_00c8e460(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  F_00c83a60();
  return;
}

/* ref: CDynamicOutputPin::NonDelegatingQueryInterface */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c865f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc865f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
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

/* ref: CDynamicOutputPin::Disconnect */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c86650(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc86650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x14)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 0xc))) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0xc))) + 0x2c))))(param_1 - 0xc);
  if ((int)uVar1 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 8))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CDynamicOutputPin::BlockOutputPin */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c866c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc866c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)this + 0xbc))));
  gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 0xc0))));
  gen_imp_CloseHandle(*((HANDLE *)GEN_TOP(((int)this + 0xc0))));
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  return 0;
}

/* ref: CDynamicOutputPin::UnblockOutputPin */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c86700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xa4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP(((int)this + 0xc4))) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  gen_imp_SetEvent(*((undefined4 *)GEN_TOP(((int)this + 0xbc))));
  if (*((int *)GEN_TOP(((int)this + 0xc0))) != 0) {
    gen_imp_SetEvent(*((int *)GEN_TOP(((int)this + 0xc0))));
    gen_imp_CloseHandle(*((HANDLE *)GEN_TOP(((int)this + 0xc0))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: CDynamicOutputPin::StartUsingOutputPin */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c86780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xa4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc4)));
  while( true ) {
    if (iVar1 != 2) {
      *((int *)GEN_TOP(((int)this + 0xcc))) = *((int *)GEN_TOP(((int)this + 0xcc))) + 1;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0xd0)));
    (*(HANDLE *)(gen_frame + 0x0)) = *((HANDLE *)GEN_TOP(((int)this + 0xbc)));
    (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
    DVar3 = gen_imp_WaitForMultipleObjects(2,&(*(HANDLE *)(gen_frame + 0x0)),0,0xffffffff);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (DVar3 != 0) break;
    iVar1 = *((int *)GEN_TOP(((int)this + 0xc4)));
  }
  if (DVar3 != 1) {
    if (DVar3 == 0xffffffff) {
      uVar4 = F_00c89410();
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar4;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x8000ffff;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040223;
}

/* ref: CDynamicOutputPin::StopUsingOutputPin */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c86840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  piVar1 = ((int *)GEN_TOP(((int)this + 0xcc)));
  *piVar1 = *piVar1 - 1;
  if ((*piVar1 == 0) && (*((int *)GEN_TOP(((int)this + 0xc4))) != 0)) {
    F_00c866c0(this GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4)));
}

/* ref: CDynamicOutputPin::StreamingThreadUsingOutputPin */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00c86880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  iVar1 = *((int *)GEN_TOP(((int)this + 0xcc)));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  return iVar1 != 0;
}

/* ref: CDynamicOutputPin::SetConfigInfo */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c868b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc868b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0xd4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = param_2;
  return param_1;
}

/* ref: CDynamicOutputPin::Active */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c868d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc868d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*((HANDLE *)GEN_TOP(((int)this + 0xd0))) != (HANDLE)0x0) && (*((int *)GEN_TOP(((int)this + 0xd4))) != 0)) {
    gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)this + 0xd0))));
    if (*((int *)GEN_TOP(((int)this + 0x98))) == 0) {
      return 0x8004020a;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x98))) + 0x14))))();
    return uVar1;
  }
  return 0x80004005;
}

/* ref: CDynamicOutputPin::Inactive */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c86920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 0xd0))));
  *((undefined1 *)GEN_TOP(((int)this + 0x24))) = 0;
  if (*((int * PTR32 *)GEN_TOP(((int)this + 0x98))) == ((int *)GEN_TOP(0x0))) {
    return 0x8004020a;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x98))) + 0x18))))();
  return uVar1;
}

/* ref: CDynamicOutputPin::DeliverBeginFlush */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c86950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 0xd0))));
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 0) {
    return 0x80040209;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: CDynamicOutputPin::DeliverEndFlush */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c86980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)this + 0xd0))));
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 0) {
    return 0x80040209;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x40))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: CDynamicOutputPin::ChangeMediaTypeHelper */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00c869b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc869b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + 0xc;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,iVar3,param_1);
  if ((-1 < (int)uVar2) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,param_1), -1 < (int)uVar2)) {
    if (*((int *)GEN_TOP(((int)this + 0x9c))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x9c)));
      (*(int *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      if ((*(int *)(gen_frame + 0x8)) == 0) {
        (*(int *)(gen_frame + 0x8)) = 1;
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x98))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x98))),&(*(undefined4 *)(gen_frame + 0x0)));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x98))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x98))),
                         *((undefined4 *)GEN_TOP(((int)this + 0xd8))));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: CDynamicOutputPin::ChangeMediaType */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c86ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc86ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0xd4))) != 0) && (*((int *)GEN_TOP(((int)this + 0xd0))) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xd4))) + 0xc))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0xd4))) GEN_EDX_ARG,(int)this + 0xc,0,param_1,0,
                       *((int *)GEN_TOP(((int)this + 0xd0))),2);
    return uVar1;
  }
  return 0x80004005;
}

