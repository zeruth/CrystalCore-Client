#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: __controlfp */
GEN_NOFRAME uint F_00c8041e(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_NOFRAME int F_00c80733(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_NOFRAME unsigned int F_00c808a7(void)
{
  GEN_ENTER(0xc808a7u, 0u, 0u, 0u, 0u);
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateFileW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x112801c)),0x40000000,3,(GEN_LPANY)0x0,3,0,
                       (HANDLE)0x0);
  REFG(undefined4, 0x134c1c4) = pvVar1;
  return 0;
}

/* ref: Global::___termconout */
GEN_NOFRAME unsigned int F_00c808c6(void)
{
  GEN_ENTER(0xc808c6u, 0u, 0u, 0u, 0u);
  if ((REFG(undefined4, 0x134c1c4) != (HANDLE)0xffffffff) && (REFG(undefined4, 0x134c1c4) != (HANDLE)0xfffffffe)) {
    gen_imp_CloseHandle(REFG(undefined4, 0x134c1c4));
  }
  return 0;
}

/* ref: __filwbuf */
GEN_NOFRAME int F_00c808dd(unsigned int gen_a0)
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
GEN_NOFRAME int F_00c80a0d(unsigned int gen_a0)
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
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc) GEN_EDX_ARG);
  return iVar1;
}

/* ref: __getdcwd_nolock */
GEN_NOFRAME uint F_00c80a67(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_NOFRAME uint F_00c80bcb(void)
{
  GEN_ENTER(0xc80bcbu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c80c15 */
GEN_NOFRAME uint F_00c80c15(void)
{
  GEN_ENTER(0xc80c15u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: _wcsnlen */
GEN_NOFRAME gen_size32 F_00c80c1e(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_NOFRAME int F_00c80c3e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,_Locale);
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
GEN_NOFRAME int F_00c80e09(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_NOFRAME uint F_00c80e23(unsigned int gen_a0)
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
GEN_FRAME uint F_00c80fd0(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME uint F_00c81040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c81060 */
GEN_NOFRAME uint GEN_THISCALL F_00c81060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_InitializeCriticalSection(this);
  return (uint)this;
}

/* ref: FUN_00c810a0 */
GEN_FRAME uint GEN_THISCALL F_00c810a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc810a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00c811a0 */
GEN_FRAME uint GEN_THISCALL F_00c811a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc811a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_00c811d0 */
GEN_FRAME uint F_00c811d0(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00c81220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc81220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  F_00c88110(this GEN_EDX_FWD,param_2,param_3,(int)this + 0x7c,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x1128778));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128738));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128724));
  *(undefined4 *)((int)this + 0x50) = 0;
  F_00c88d50((undefined *)((int)this + 0x54) GEN_EDX_ARG,0,param_4);
  F_00c88d50((undefined *)((int)this + 0x58) GEN_EDX_ARG,1,param_4);
  F_00c88d50((undefined *)((int)this + 0x5c) GEN_EDX_ARG,1,param_4);
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
GEN_FRAME uint GEN_THISCALL F_00c81300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,0);
  if (uVar2 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    this_00 = (undefined *)F_004069f0(0x50);
    if (this_00 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00c8c280(this_00 GEN_EDX_ARG,0,*(undefined4 *)(this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),uVar2 + 0xc);
    }
    *(uint *)(this + 0x50) = uVar2;
    if (uVar2 != 0) {
      if ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) < 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 8) + 0xc))))(uVar2 + 8 GEN_EDX_ARG,1);
        *(undefined4 *)(this + 0x50) = 0;
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0x80004002;
      }
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,param_1,param_2);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x8007000e;
}

/* ref: FUN_00c81400 */
GEN_FRAME uint GEN_STDCALL F_00c81400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf10 */
GEN_FRAME uint GEN_THISCALL F_00c81460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME unsigned int GEN_THISCALL F_00c81490(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint GEN_STDCALL F_00c81510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00c81560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc81560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*((int *)GEN_TOP((*(int *)(this + 0x78) + 0x18))) == 0) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    return 0;
  }
  if (*(int *)(this + 0x70) == 1) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG);
  if ((uVar1 == 1) && ((*(int *)&gen_a1) != 0)) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    return 0;
  }
  gen_imp_ResetEvent(*(HANDLE *)(this + 0x5c));
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf6 */
GEN_NOFRAME byte GEN_THISCALL F_00c815e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc815e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x78) == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_FWD,0);
  }
  return *(int *)(this + 0x78) != 0;
}

/* ref: FUN_00c81600 */
GEN_FRAME uint GEN_STDCALL F_00c81600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x1c))))(param_1 - 0xc GEN_EDX_ARG,0);
    if (uVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(uVar2 + 0xc);
    }
    *param_3 = piVar3;
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
      return 0;
    }
    return 0x8007000e;
  }
  *param_3 = 0;
  return 0x80040216;
}

/* ref: Client::System::Streaming::TextureRenderer::vf26 */
GEN_NOFRAME uint GEN_THISCALL F_00c81680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)(this + 0x14) != 0) && (*(undefined4 *)(this + 0x70) = 1, *(int *)(this + 0x6c) == 0)
     ) {
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
    if (*(int *)(this + 100) != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf33 */
GEN_NOFRAME uint GEN_THISCALL F_00c816c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc816c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x14) == 1) {
    gen_imp_ResetEvent(*(HANDLE *)(this + 0x5c));
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,0);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  F_00c81490(this GEN_EDX_ARG);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf34 */
GEN_NOFRAME uint GEN_THISCALL F_00c81700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_00c8b080(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_FWD);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,1);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf29 */
GEN_NOFRAME uint F_00c81720(void)
{
  GEN_ENTER(0xc81720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf30 */
GEN_NOFRAME uint GEN_THISCALL F_00c81730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_00c8b080(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_FWD);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c81750 */
GEN_NOFRAME uint GEN_STDCALL F_00c81750(unsigned int gen_a0)
{
  GEN_ENTER(0xc81750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf22 */
GEN_FRAME uint GEN_THISCALL F_00c81760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc81760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_FWD,param_2,param_3);
  if (-1 < (int)uVar1) {
    if (((int)param_3[1] <= (int)param_2[1]) &&
       (((int)param_3[1] < (int)param_2[1] || (*param_3 < *param_2)))) {
      return 0x80040228;
    }
    if (*(int *)(this + 0x18) != 0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,param_1,param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00c817c0 */
GEN_NOFRAME uint GEN_STDCALL F_00c817c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc817c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf27 */
GEN_NOFRAME byte GEN_THISCALL F_00c817e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc817e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x68);
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x18))))(*(int * PTR32 *)(this + 0x18) GEN_EDX_FWD,iVar1);
    *(undefined4 *)(this + 0x68) = 0;
  }
  gen_imp_ResetEvent(*(HANDLE *)(this + 0x54));
  return iVar1 == 0;
}

/* ref: FUN_00c81820 */
GEN_FRAME uint GEN_THISCALL F_00c81820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc81820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_FWD,param_1,&(*(undefined4 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0xc)));
    if (-1 < (int)uVar1) {
      if (uVar1 == 0) {
        gen_imp_SetEvent(*(HANDLE *)((int)this + 0x54));
        return 1;
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x10))))
                        (*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20),
                         *(undefined4 *)((int)this + 0x24),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         *(undefined4 *)((int)this + 0x54),(int)this + 0x68);
      return (uint)(-1 < (int)uVar1);
    }
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf42 */
GEN_FRAME uint GEN_THISCALL F_00c818a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc818a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((param_1 != 0) && (*(int *)(this + 100) != 0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,param_1);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xac))(this GEN_EDX_ARG,param_1);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG,param_1);
    return 0;
  }
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf40 */
GEN_NOFRAME uint GEN_THISCALL F_00c818f0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00c81920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  if (*(int *)(this + 0x6c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x6c) + 4))))(*(int * PTR32 *)(this + 0x6c) GEN_EDX_ARG);
  }
  uVar1 = *(uint *)(this + 0x6c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf39 */
GEN_FRAME uint GEN_THISCALL F_00c81960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc81960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x98))(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 < 0) {
    return -(uint)(uVar1 != 0x8004022b) & uVar1;
  }
  if (*(int *)(this + 0x14) == 1) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
    *(undefined4 *)(this + 0xb4) = 0;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x7c));
    if (*(int *)(this + 0x14) == 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x7c));
      return 0;
    }
    *(undefined4 *)(this + 0xb4) = 1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
    gen_imp_LeaveCriticalSection(this + 0x7c);
    gen_imp_SetEvent(*(HANDLE *)(this + 0x5c));
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG);
  if ((int)uVar1 < 0) {
    *(undefined4 *)(this + 0xb4) = 0;
    return 0;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  *(undefined4 *)(this + 0xb4) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x7c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x14) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa8))(this GEN_EDX_ARG,*(undefined4 *)(this + 0x6c));
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf28 */
GEN_NOFRAME uint GEN_THISCALL F_00c81aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  piVar1 = *(int * PTR32 *)(this + 0x6c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return 0;
}

/* ref: FUN_00c81ae0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c81ae0(unsigned int gen_a0 GEN_EDX_PARAM)
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
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94)));
}

/* ref: FUN_00c81b20 */
GEN_NOFRAME uint GEN_THISCALL F_00c81b20(unsigned int gen_a0 GEN_EDX_PARAM)
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
    F_00c8b0b0(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0x74) = 1;
  uVar1 = F_00c84750(this GEN_EDX_ARG,1,0,(int)this + 0xc);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

/* ref: FUN_00c81b80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c81b80(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00c81ba0(unsigned int gen_a0 GEN_EDX_PARAM)
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
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))(this GEN_EDX_ARG);
    if (*(int *)(this + 0x6c) == 0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,*(int *)(this + 0x6c));
    if (uVar1 == 0) {
      gen_imp_SetEvent(*(HANDLE *)(this + 0x54));
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf32 */
GEN_NOFRAME uint GEN_THISCALL F_00c81c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc81c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  *(undefined4 *)(this + 0x74) = 0;
  if (*(int *)(this + 100) == 1) {
    *(undefined4 *)(this + 100) = 0;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_ARG);
    gen_imp_timeEndPeriod(1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x94));
  return 0;
}

/* ref: FUN_00c81c50 */
GEN_FRAME unsigned int GEN_THISCALL F_00c81c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc81c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  *(undefined4 *)((int)this + 0xb0) = param_1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94)));
}

/* ref: FUN_00c81c80 */
GEN_FRAME uint GEN_THISCALL F_00c81c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc81c80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD,&REFG(undefined, 0x1095b54),&(*(int * PTR32 *)&gen_args[1]));
  uVar1 = (*(undefined4 *)&gen_args[2]);
  if (-1 < (int)uVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0x19,(*(undefined4 *)&gen_args[2]),0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  }
  uVar2 = F_00c84750((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x19,uVar1,0);
  return uVar2;
}

/* ref: FUN_00c81cd0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c81cd0(unsigned int gen_a0 GEN_EDX_PARAM)
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
    F_00c84750(this GEN_EDX_ARG,5,iVar1,0);
    F_00c81c50(this GEN_EDX_ARG,0);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94)));
}

/* ref: FUN_00c81d40 */
GEN_NOFRAME uint GEN_THISCALL F_00c81d40(unsigned int gen_a0 GEN_EDX_PARAM)
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
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 4))))(iVar1 + 0xc GEN_EDX_ARG);
  F_00c84750(this GEN_EDX_ARG,0x16,iVar3,0);
  pcVar2 = *(gen_code32 *)(*(int *)this + 0x70);
  *(undefined4 *)((int)this + 0x60) = 1;
  (*pcVar2)(this);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + 0xc))) + 8))))(*(int *)((int)this + 0x78) + 0xc);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 1;
}

/* ref: FUN_00c81dc0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00c81dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc81dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00c81dd0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00c81dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc81dd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00c81de0 */
GEN_FRAME uint GEN_THISCALL F_00c81de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc81de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c87d40(this GEN_EDX_FWD,0,param_1,param_1 + 0x7c,param_2,param_3);
  *(int *)((int)this + 0xd8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x11288b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[18])REFP(0x1128868));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128850));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[9])REFP(0x112882c));
  return (uint)this;
}

/* ref: FUN_00c81e30 */
GEN_FRAME uint GEN_STDCALL F_00c81e30(unsigned int gen_a0)
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
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x38))))(param_1 - 0xc GEN_EDX_ARG);
  if (uVar1 == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xcc) + 0x68))))(*(int * PTR32 *)(param_1 + 0xcc) GEN_EDX_ARG);
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
GEN_FRAME uint GEN_STDCALL F_00c81eb0(unsigned int gen_a0)
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
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xcc) + 0x84))))(*(int * PTR32 *)(param_1 + 0xcc) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xcc) + 100))))(*(int * PTR32 *)(param_1 + 0xcc) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection(lpCriticalSection_00);
  return uVar1;
}

/* ref: FUN_00c81f20 */
GEN_FRAME uint GEN_STDCALL F_00c81f20(unsigned int gen_a0)
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
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xcc) + 0x88))))(*(int * PTR32 *)(param_1 + 0xcc) GEN_EDX_ARG);
  if (-1 < (int)uVar1) {
    uVar1 = F_00c85d00(param_1);
  }
  param_1 = uVar1;
  gen_imp_LeaveCriticalSection(lpCriticalSection_00);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return param_1;
}

/* ref: FUN_00c81f90 */
GEN_FRAME uint GEN_STDCALL F_00c81f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc81f90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x40) + 0x9c))))(*(int * PTR32 *)(param_1 + 0x40) GEN_EDX_ARG,param_2);
  if ((int)uVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0x40) + 0x7c);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if ((((*((int *)GEN_TOP((*(int *)(param_1 - 0x70) + 0x14))) != 0) && (*(char *)(param_1 + 9) == '\0')) &&
        (*((int *)GEN_TOP(((int)*(undefined * PTR32 *)(param_1 + 0x40) + 0x60))) == 0)) &&
       (*(char *)(param_1 - 0x74) == '\0')) {
      F_00c84750(*(undefined * PTR32 *)(param_1 + 0x40) GEN_EDX_ARG,3,uVar1,0);
      lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0x40) + 0x94);
      gen_imp_EnterCriticalSection(lpCriticalSection_00);
      this = *(undefined * PTR32 *)(param_1 + 0x40);
      if ((*(int *)((int)this + 100) != 0) && (*(int *)((int)this + 0x74) == 0)) {
        F_00c81b20(this GEN_EDX_ARG);
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection_00);
      *(undefined1 *)(param_1 - 0x74) = 1;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: FUN_00c82030 */
GEN_NOFRAME uint GEN_THISCALL F_00c82030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc82030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x8c))))(*(int * PTR32 *)((int)this + 0xd8) GEN_EDX_FWD);
  if (-1 < (int)uVar1) {
    uVar1 = F_00c85a00(this GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00c82060 */
GEN_FRAME uint GEN_THISCALL F_00c82060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc82060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x94))))(*(int * PTR32 *)((int)this + 0xd8) GEN_EDX_FWD,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = F_00c850e0(param_1);
  }
  return uVar1;
}

/* ref: FUN_00c82090 */
GEN_FRAME uint GEN_STDCALL F_00c82090(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00c820e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0xb0))))
                    (*(int * PTR32 *)((int)this + 0xd8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c82100 */
GEN_NOFRAME uint GEN_THISCALL F_00c82100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x74))))
                    (*(int * PTR32 *)((int)this + 0xd8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c82110 */
GEN_NOFRAME uint GEN_THISCALL F_00c82110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x78))))
                    (*(int * PTR32 *)((int)this + 0xd8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c82130 */
GEN_FRAME uint GEN_THISCALL F_00c82130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc82130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c850f0(this GEN_EDX_FWD,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd8) + 0x90))))(*(int * PTR32 *)((int)this + 0xd8) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf47 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c82160(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00c82220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc82220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xbc))(this GEN_EDX_FWD);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf17 */
GEN_NOFRAME uint GEN_THISCALL F_00c82230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc82230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_timeGetTime();
  *(DWORD *)(this + 0x158) = DVar1 - *(int *)(this + 0x158);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf18 */
GEN_NOFRAME unsigned int F_00c82250(void)
{
  GEN_ENTER(0xc82250u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Streaming::TextureRenderer::vf19 */
GEN_NOFRAME unsigned int F_00c82260(void)
{
  GEN_ENTER(0xc82260u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c82270 */
GEN_FRAME uint GEN_THISCALL F_00c82270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00c82290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00c82390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
    return (uint)(gen_imp_Sleep(*(int *)(this + 0xf0) / 10000));
  }
  return (uint)(gen_imp_Sleep(0));
}

/* ref: Client::System::Streaming::TextureRenderer::vf14 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c82400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc82400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  DWORD DVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb4))
            (this GEN_EDX_ARG,*(undefined4 *)(this + 0x150),*(undefined4 *)(this + 0x154));
  DVar1 = gen_imp_timeGetTime();
  *(DWORD *)(this + 0xfc) = DVar1;
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf15 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c82430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
    return (uint)(gen_imp_Sleep(*(int *)(this + 0xf0) / 10000));
  }
  return (uint)(gen_imp_Sleep(0));
}

/* ref: FUN_00c824b0 */
GEN_FRAME uint GEN_STDCALL F_00c824b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc824b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(param_1 - 0x38) = param_2;
  return 0;
}

/* ref: FUN_00c824d0 */
GEN_FRAME uint GEN_STDCALL F_00c824d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
  *(int *)(param_1 + 0xc) = (int)(0x172dd680 / (longlong)(param_4 + 0xa7)) - 330000;
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf48 */
GEN_FRAME uint GEN_THISCALL F_00c82510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_1c;
  int iStack_18;
  
  iVar4 = (*(int *)&gen_args[4]);
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10c)));
  if (iVar1 < 0) {
    local_1c = 0;
  }
  else {
    local_1c = (uint)(iVar1 <= *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf4))) * 2);
  }
  iStack_18 = 1000;
  if (-1 < iVar1) {
    if (((int)(*(uint *)&gen_args[2]) < 0) || (((int)(*(uint *)&gen_args[2]) < 1 && ((*(uint *)&gen_args[1]) == 0)))) {
      iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x108)));
      if ((20000 < iVar2) &&
         ((0x7fffffff < (*(uint *)&gen_args[2]) && (((int)(*(uint *)&gen_args[2]) < -1 || ((*(uint *)&gen_args[1]) < 0xffffb1e0)))))) {
        if ((iVar2 < iVar1) && (iVar2 < iVar1 + 20000)) {
          (*(int *)&gen_args[4]) = (iVar1 - iVar2) + 20000;
          iStack_18 = (iVar1 / (*(int *)&gen_args[4])) * 1000;
          if (iStack_18 < 0x7d1) goto LAB_00c825e7;
        }
        iStack_18 = 2000;
      }
    }
    else {
      iStack_18 = 1000 - (int)((longlong)CONCAT44((*(uint *)&gen_args[2]),(*(uint *)&gen_args[1])) / 10000);
      if (iStack_18 < 500) {
        iStack_18 = 500;
      }
    }
  }
LAB_00c825e7: ;
  uVar5 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf4))) / 2;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))) == 0) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78)));
    (*(int *)&gen_args[4]) = 0;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(iVar1 + 0x18))))
                      (*(undefined4 * PTR32 *)(iVar1 + 0x18) GEN_EDX_ARG,&REFG(undefined, 0x1095b14),&(*(int *)&gen_args[4]));
    if (-1 < (int)uVar6) {
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))) = (*(int *)&gen_args[4]);
    }
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac)));
  if (piVar3 != (int *)0x0) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))
                      (piVar3 GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]) + 0xc,local_1c,iStack_18,uVar5 + (*(uint *)&gen_args[1]),
                       ((int)uVar5 >> 0x1f) + (*(uint *)&gen_args[2]) + (uint)CARRY4(uVar5,(*(uint *)&gen_args[1])),(*(undefined4 *)&gen_args[3]),iVar4);
    return uVar5;
  }
  return 1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf23 */
GEN_FRAME uint GEN_THISCALL F_00c82680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0xc))))(*(int * PTR32 *)(this + 0x18) GEN_EDX_FWD,((byte *)(gen_frame + 0x4)) + 4);
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
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc0))(this GEN_EDX_ARG,param_2,(int)((int)(uintptr_t)param_2) >> 0x1f,uVar10,iVar3);
  *(uint *)(this + 0xec) = (uint)(uVar4 == 0);
  iVar5 = *param_3 - *puVar2;
  iVar3 = *(int *)(this + 0x110);
  iVar6 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
  if ((iVar3 + iVar6 < iVar5) || (iVar5 < iVar3 - iVar6)) {
    *(int *)(this + 0x10c) = iVar5;
    *(int *)(this + 0x110) = iVar5;
  }
  if ((((uVar4 == 0) != 0) && (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x3c))(param_1 GEN_EDX_ARG), uVar4 == 0)) ||
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
GEN_FRAME uint GEN_THISCALL F_00c82a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc82a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c81820(this GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    *(int *)(this + 0x120) = *(int *)(this + 0x120) + 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00c82ac0 */
GEN_FRAME uint GEN_STDCALL F_00c82ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82ac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 - 100));
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 - 100));
  return 0;
}

/* ref: FUN_00c82b00 */
GEN_FRAME uint GEN_STDCALL F_00c82b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82b00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 - 100));
  *param_2 = *(undefined4 *)(param_1 + 0x44);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 - 100));
  return 0;
}

/* ref: FUN_00c82b40 */
GEN_FRAME uint GEN_STDCALL F_00c82b40(unsigned int gen_a0, unsigned int gen_a1)
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
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 - 100);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 - 0x7c) == 0) {
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
GEN_FRAME uint GEN_STDCALL F_00c82bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82bc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 - 100);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 - 200) != 0) && (1 < *(int *)(param_1 + 0x44))) {
    *param_2 = (int)(*(longlong *)(param_1 + 0x48) / (longlong)(*(int *)(param_1 + 0x44) - 1));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *param_2 = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c82c30 */
GEN_FRAME uint F_00c82c30(unsigned int gen_a0)
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
GEN_FRAME uint GEN_THISCALL F_00c82ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
                              (longlong)(param_1 - 1)));
    *param_2 = uVar1;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *param_2 = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c82d40 */
GEN_FRAME uint GEN_STDCALL F_00c82d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82d40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c82ca0((undefined *)(param_1 - 0xe0) GEN_EDX_ARG,*(int *)(param_1 + 0x44) - 1,param_2,
                       *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  return uVar1;
}

/* ref: FUN_00c82d70 */
GEN_FRAME uint GEN_STDCALL F_00c82d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc82d70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c82ca0((undefined *)(param_1 - 0xe0) GEN_EDX_ARG,*(int *)(param_1 + 0x44) - 2,param_2,
                       *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf0 */
GEN_FRAME uint GEN_STDCALL F_00c82da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_STDCALL F_00c82e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc82e40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  if (((*(int *)&gen_args[1]) == 0) && (*(int *)((*(uint *)&gen_args[0]) + 0x34) != 0)) {
    F_00c84750((undefined *)((*(uint *)&gen_args[0]) - 0xc) GEN_EDX_ARG,0x15,-(uint)((*(uint *)&gen_args[0]) != 0xc) & (*(uint *)&gen_args[0]),0);
  }
  uVar1 = F_00c87500((*(uint *)&gen_args[0]),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c82e80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c82e80(unsigned int gen_a0 GEN_EDX_PARAM)
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
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x50) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x50) + 8)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  gen_imp_DeleteCriticalSection((int)this + 0xc4);
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  gen_imp_DeleteCriticalSection((int)this + 0x7c);
  F_00c88dd0((undefined *)((int)this + 0x5c) GEN_EDX_ARG);
  F_00c88dd0((undefined *)((int)this + 0x58) GEN_EDX_ARG);
  F_00c88dd0((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  F_00c84310(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Streaming::TextureRenderer::vf11 */
GEN_FRAME uint GEN_THISCALL F_00c82f50(unsigned int gen_a0 GEN_EDX_PARAM)
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
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG);
  if (DVar3 == 0) {
    return 0x80040223;
  }
  *(undefined4 *)(this + 0x68) = 0;
  return 0;
}

/* ref: FUN_00c82fc0 */
GEN_FRAME uint GEN_STDCALL F_00c82fc0(unsigned int gen_a0)
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
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG);
      }
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0xa4) = 1;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x80))))(param_1 - 0xc GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x28))))(param_1 - 0xc GEN_EDX_ARG,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 100))))(param_1 - 0xc GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x6c))))(param_1 - 0xc GEN_EDX_ARG);
      gen_imp_SetEvent(*(HANDLE *)(param_1 + 0x50));
      F_00c81490((undefined *)(param_1 - 0xc) GEN_EDX_ARG);
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
GEN_FRAME uint GEN_STDCALL F_00c83090(unsigned int gen_a0)
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
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x30))))(param_1 - 0xc GEN_EDX_ARG,1);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar4;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x6c) + 0x18))) == 0) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x30)));
    *(undefined4 *)(param_1 + 8) = 1;
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
  *(undefined4 *)(param_1 + 0xa4) = 1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x80))))(param_1 - 0xc GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x28))))(param_1 - 0xc GEN_EDX_ARG,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x6c))))(param_1 - 0xc GEN_EDX_ARG);
  if (*(UINT *)(param_1 + 0xb4) != 0) {
    gen_imp_timeKillEvent(*(UINT *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x6c) + 0x9c)));
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3 GEN_EDX_ARG);
  }
  if (iVar1 == 0) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x70)));
    *(undefined4 *)(param_1 + 0x54) = 0;
    (*pcVar2)(param_1 - 0xc);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x30))))(param_1 - 0xc GEN_EDX_ARG,iVar1);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar4;
}

/* ref: FUN_00c831d0 */
GEN_FRAME uint GEN_STDCALL F_00c831d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) - 0xc) + 0x28))))((*(uint *)&gen_args[0]) - 0xc GEN_EDX_ARG,1);
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((*(uint *)&gen_args[0]) + 0x88));
      *(undefined4 *)((*(uint *)&gen_args[0]) + 0xa4) = 0;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((*(uint *)&gen_args[0]) + 0x88));
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x6c) + 0x9c)));
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
      }
      if (iVar1 == 0) {
        pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) - 0xc) + 0x70)));
        *(undefined4 *)((*(uint *)&gen_args[0]) + 0x54) = 0;
        (*pcVar3)((*(uint *)&gen_args[0]) - 0xc);
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) - 0xc) + 0x7c))))((*(uint *)&gen_args[0]) - 0xc GEN_EDX_ARG);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar4;
    }
    F_00c84750((undefined *)((*(uint *)&gen_args[0]) - 0xc) GEN_EDX_ARG,1,0,-(uint)((*(uint *)&gen_args[0]) != 0xc) & (*(uint *)&gen_args[0]));
    *(undefined4 *)((*(uint *)&gen_args[0]) + 8) = 2;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf7 */
GEN_FRAME uint GEN_THISCALL F_00c832d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
      piVar2 = (int *)F_00c81de0(this_00 GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),(*(undefined * PTR32 (*)[1])REFP(0x112870c)));
    }
    *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = piVar2;
    if (piVar2 != (int *)0x0) {
      if (-1 < (*(int *)&gen_args[1])) goto LAB_00c8334b;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = 0;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00c83360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc83360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x60) = 0;
  if (*(int *)(this + 0x14) == 2) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD);
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
GEN_NOFRAME uint GEN_THISCALL F_00c833d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc833d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xac);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
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
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  *(undefined4 *)(this + 0x60) = 0;
  if (*(int *)(this + 0x14) == 2) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf38 */
GEN_FRAME uint GEN_THISCALL F_00c83470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,piVar1[0x33]);
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
      F_00c8af50(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_ARG,param_1);
    }
    if (*(int *)(this + 100) == 1) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,param_1);
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
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    if (*(int *)(this + 100) == 0) {
      F_00c81c50(this GEN_EDX_ARG,1);
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
GEN_FRAME unsigned int GEN_STDCALL F_00c835f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x25)));
}

/* ref: Client::System::Streaming::TextureRenderer::vf24 */
GEN_FRAME uint GEN_THISCALL F_00c83630(unsigned int gen_a0 GEN_EDX_PARAM)
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
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x4)));
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
    uVar5 = F_00c81b20(this GEN_EDX_ARG);
    return uVar5;
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_00c836c0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint GEN_THISCALL F_00c83710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc83710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c81220(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1128978));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128924));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1128900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x11288ec));
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  F_00c82160(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00c83780 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c83780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc83780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1128978));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128924));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1128900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x11288ec));
  F_00c82e80(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00c837b0 */
GEN_FRAME uint GEN_STDCALL F_00c837b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc837b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 - 8))))
                    (*(undefined4 * PTR32 *)(param_1 - 8) GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c837d0 */
GEN_FRAME uint GEN_STDCALL F_00c837d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc837d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 8) + 4))))(*(int * PTR32 *)(param_1 - 8) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c837f0 */
GEN_FRAME uint GEN_STDCALL F_00c837f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc837f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 8) + 8))))(*(int * PTR32 *)(param_1 - 8) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c83810 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00c83810(unsigned int gen_a0)
{
  GEN_ENTER(0xc83810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00c83820 */
GEN_NOFRAME uint F_00c83820(void)
{
  GEN_ENTER(0xc83820u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c83830 */
GEN_NOFRAME uint F_00c83830(void)
{
  GEN_ENTER(0xc83830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c83840 */
GEN_NOFRAME unsigned int F_00c83840(void)
{
  GEN_ENTER(0xc83840u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c83850 */
GEN_NOFRAME unsigned int F_00c83850(void)
{
  GEN_ENTER(0xc83850u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c83860 */
GEN_NOFRAME uint GEN_STDCALL F_00c83860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0x80004001;
}

/* ref: FUN_00c83870 */
GEN_FRAME uint GEN_STDCALL F_00c83870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83870u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 - 8))))
                    (*(undefined4 * PTR32 *)(param_1 - 8) GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c83890 */
GEN_FRAME uint GEN_STDCALL F_00c83890(unsigned int gen_a0)
{
  GEN_ENTER(0xc83890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 8) + 4))))(*(int * PTR32 *)(param_1 - 8) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c838b0 */
GEN_FRAME uint GEN_STDCALL F_00c838b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc838b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 8) + 8))))(*(int * PTR32 *)(param_1 - 8) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c83900 */
GEN_NOFRAME uint GEN_STDCALL F_00c83900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83900u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c83870(param_1 - 0x8c,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c83910 */
GEN_NOFRAME uint GEN_STDCALL F_00c83910(unsigned int gen_a0)
{
  GEN_ENTER(0xc83910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c838b0(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c83920 */
GEN_NOFRAME uint GEN_STDCALL F_00c83920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83920u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c837b0(param_1 - 4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c83930 */
GEN_NOFRAME uint GEN_STDCALL F_00c83930(unsigned int gen_a0)
{
  GEN_ENTER(0xc83930u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c83890(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c83940 */
GEN_NOFRAME uint GEN_STDCALL F_00c83940(unsigned int gen_a0)
{
  GEN_ENTER(0xc83940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c838b0(param_1 - 0x8c);
  return uVar1;
}

/* ref: FUN_00c83950 */
GEN_NOFRAME uint GEN_STDCALL F_00c83950(unsigned int gen_a0)
{
  GEN_ENTER(0xc83950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c837f0(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c83960 */
GEN_NOFRAME uint GEN_STDCALL F_00c83960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc83960u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c83870(param_1 - 4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c83970 */
GEN_NOFRAME uint GEN_STDCALL F_00c83970(unsigned int gen_a0)
{
  GEN_ENTER(0xc83970u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c83890(param_1 - 0x8c);
  return uVar1;
}

/* ref: FUN_00c83980 */
GEN_NOFRAME uint GEN_STDCALL F_00c83980(unsigned int gen_a0)
{
  GEN_ENTER(0xc83980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c837d0(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c83990 */
GEN_FRAME uint GEN_THISCALL F_00c83990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc83990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c85880(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c839c0 */
GEN_FRAME uint GEN_THISCALL F_00c839c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc839c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c82e80(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c839f0 */
GEN_FRAME uint GEN_THISCALL F_00c839f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc839f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1128978));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1128938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128924));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1128900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x11288ec));
  F_00c82e80(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c83a60 */
GEN_NOFRAME unsigned int F_00c83a60(void)
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
GEN_NOFRAME uint F_00c83a90(void)
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
GEN_FRAME uint GEN_THISCALL F_00c83ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_STDCALL F_00c83ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc83ae0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = param_1;
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c83b10 */
GEN_FRAME uint GEN_STDCALL F_00c83b10(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)*piVar1)(piVar1 GEN_EDX_ARG,&REFG(undefined, 0x1082374),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      return (uint)((*(int * PTR32 *)&gen_args[0]) == (*(int * PTR32 *)&gen_args[1]));
    }
  }
  return 0;
}

/* ref: CUnknown_00c83b90 */
GEN_FRAME uint GEN_THISCALL F_00c83b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_STDCALL F_00c83bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}

/* ref: Client::System::Streaming::TextureRenderer::vf1 */
GEN_FRAME uint GEN_STDCALL F_00c83c10(unsigned int gen_a0)
{
  GEN_ENTER(0xc83c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  gen_imp_InterlockedIncrement((LONG *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf2 */
GEN_FRAME uint GEN_STDCALL F_00c83c40(unsigned int gen_a0)
{
  GEN_ENTER(0xc83c40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  LONG * lpAddend;
  uint uVar1;
  
  lpAddend = param_1 + 2;
  uVar1 = gen_imp_InterlockedDecrement(lpAddend);
  if (uVar1 == 0) {
    *lpAddend = *lpAddend + 1;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,1);
    return 0;
  }
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00c83ca0 */
GEN_FRAME uint GEN_THISCALL F_00c83ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00c83cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00c83ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME byte GEN_THISCALL F_00c83d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc83d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00c83d50 */
GEN_NOFRAME uint GEN_THISCALL F_00c83d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc83d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_FWD);
  return (uint)(uVar1 != *(uint *)((int)this + 0x10));
}

/* ref: FUN_00c83d70 */
GEN_NOFRAME uint GEN_THISCALL F_00c83d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc83d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD);
  return (uint)(uVar1 != *(uint *)((int)this + 0xc));
}

/* ref: FUN_00c83d90 */
GEN_FRAME uint F_00c83d90(unsigned int gen_a0)
{
  GEN_ENTER(0xc83d90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1c;
}

/* ref: FUN_00c83dc0 */
GEN_FRAME uint GEN_THISCALL F_00c83dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_NOFRAME uint F_00c83e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    iVar2 = iVar2 - 1;
  } while( true );
}

/* ref: FUN_00c83e40 */
GEN_FRAME uint GEN_THISCALL F_00c83e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_FASTCALL F_00c83e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4;
  }
  return local_8;
}

/* ref: FUN_00c83ec0 */
GEN_FRAME unsigned int GEN_STDCALL F_00c83ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xc83ec0u, gen_a0, 0u, 0u, 0u);
  LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;
  return (uint)(gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),param_1));
}

/* ref: FUN_00c83ee0 */
GEN_FRAME uint GEN_STDCALL F_00c83ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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

/* ref: FUN_00c83f70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c83f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc83f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  F_00c83a60();
  return;
}

/* ref: FUN_00c83fa0 */
GEN_FRAME uint GEN_STDCALL F_00c83fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_STDCALL F_00c84040(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME uint GEN_STDCALL F_00c84070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_STDCALL F_00c840a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc840a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x24);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)(param_1 + 8) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c840f0 */
GEN_FRAME uint GEN_STDCALL F_00c840f0(unsigned int gen_a0, unsigned int gen_a1)
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 4))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG);
  }
  *param_2 = *(undefined4 *)(param_1 + 8);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c84140 */
GEN_FRAME uint GEN_STDCALL F_00c84140(unsigned int gen_a0)
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
GEN_FRAME long GEN_STDCALL F_00c84170(unsigned int gen_a0)
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
GEN_FRAME uint GEN_STDCALL F_00c841a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG);
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
GEN_FRAME uint GEN_THISCALL F_00c84200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc84200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x14) == 0) {
    return 0x80040213;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0xc))))(*(int * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1);
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
GEN_FRAME uint GEN_STDCALL F_00c84240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00c84310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc84310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  F_00406ad0(*(undefined4 *)((int)this + 0x3c));
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  F_00c83a60();
  return;
}

/* ref: FUN_00c84340 */
GEN_FRAME uint GEN_STDCALL F_00c84340(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME uint GEN_STDCALL F_00c84370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_STDCALL F_00c843a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc843a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)(param_1 + 0xc) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c843f0 */
GEN_FRAME uint GEN_STDCALL F_00c843f0(unsigned int gen_a0, unsigned int gen_a1)
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 4))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
  }
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c84440 */
GEN_FRAME uint GEN_STDCALL F_00c84440(unsigned int gen_a0)
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
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x18))))(param_1 - 0xc GEN_EDX_ARG);
    iVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x1c))))(param_1 - 0xc GEN_EDX_ARG,iVar4)));
        if (piVar2 == (int *)0x0) break;
        if (((piVar2[6] != 0) && (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG), (int)uVar3 < 0)) &&
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
GEN_FRAME uint GEN_STDCALL F_00c844d0(unsigned int gen_a0)
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
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x18))))(param_1 - 0xc GEN_EDX_ARG);
    iVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x1c))))(param_1 - 0xc GEN_EDX_ARG,iVar4)));
        if (piVar2 == (int *)0x0) break;
        if ((piVar2[6] != 0) && (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG), (int)uVar3 < 0)) {
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
GEN_FRAME uint GEN_STDCALL F_00c84570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  if ((param_1[2] == 0) && (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG), (int)uVar1 < 0)) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  if (param_1[2] != 2) {
    uVar1 = ((code *)*(gen_code32 *)(param_1[-3] + 0x18))(param_1 - 3);
    local_8 = 0;
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(param_1[-3] + 0x1c))(param_1 - 3,local_8)));
        if (piVar2 == (int *)0x0) break;
        if ((piVar2[6] != 0) &&
           (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG,param_2,param_3), (int)uVar3 < 0)) {
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
GEN_FRAME uint GEN_THISCALL F_00c84650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc84650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
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

/* ref: FUN_00c84690 */
GEN_FRAME uint GEN_STDCALL F_00c84690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84690u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  LPCWSTR param_2 = (LPCWSTR)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x18))))(param_1 - 0xc GEN_EDX_ARG);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x1c))))(param_1 - 0xc GEN_EDX_ARG,iVar5);
      if (uVar3 == 0) break;
      iVar4 = gen_imp_lstrcmpW(*(LPCWSTR *)(uVar3 + 0x14),param_2);
      if (iVar4 == 0) {
        piVar1 = (int *)(uVar3 + 0xc);
        *param_3 = (int)piVar1;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
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

/* ref: FUN_00c84740 */
GEN_NOFRAME uint GEN_STDCALL F_00c84740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0x80004001;
}

/* ref: FUN_00c84750 */
GEN_FRAME uint GEN_THISCALL F_00c84750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,param_1,param_2,iVar3);
  return uVar2;
}

/* ref: FUN_00c84790 */
GEN_FRAME uint GEN_THISCALL F_00c84790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x40))))
                    (*(undefined4 * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,&REFG(undefined, 0x1095bd4),&(*(int * PTR32 *)(gen_frame + 0x8)));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x4c))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1,param_2);
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x20))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00c84800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc84800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x48);
}

/* ref: FUN_00c84820 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c84820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc84820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a54));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
  F_00c8df10((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00c84840 */
GEN_FRAME uint GEN_STDCALL F_00c84840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
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
GEN_FRAME unsigned int GEN_STDCALL F_00c848a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc848a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x14)));
}

/* ref: FUN_00c848c0 */
GEN_FRAME uint GEN_STDCALL F_00c848c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc848c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 5);
  if ((uVar1 == 0) && (param_1 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00c848f0 */
GEN_FRAME uint GEN_STDCALL F_00c848f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc848f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
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
GEN_FRAME uint GEN_STDCALL F_00c84940(unsigned int gen_a0)
{
  GEN_ENTER(0xc84940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x18))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
  *(uint *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  F_00c8d780((undefined *)(param_1 + 0x18) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c84980 */
GEN_FRAME uint GEN_STDCALL F_00c84980(unsigned int gen_a0)
{
  GEN_ENTER(0xc84980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x18))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
  *(uint *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

/* ref: FUN_00c849d0 */
GEN_FRAME uint GEN_STDCALL F_00c849d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc849d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
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
GEN_FRAME unsigned int GEN_STDCALL F_00c84a30(unsigned int gen_a0)
{
  GEN_ENTER(0xc84a30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x10)));
}

/* ref: FUN_00c84a50 */
GEN_FRAME uint GEN_STDCALL F_00c84a50(unsigned int gen_a0)
{
  GEN_ENTER(0xc84a50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 4);
  if ((uVar1 == 0) && (param_1 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00c84a80 */
GEN_FRAME uint GEN_STDCALL F_00c84a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc84a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 0x80004003;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG);
  if (uVar3 != *(uint *)(param_1 + 0xc)) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 0x80040203;
  }
  if (param_4 == (int *)0x0) {
    if (1 < param_2) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
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
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return (uint)(uVar3 != 0);
    }
    F_00c8e4a0(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    iVar6 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar6 + 1;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x34))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG,iVar6,((undefined4 *)(gen_frame + 0x10)));
    if (uVar4 != 0) {
LAB_00c84b88: ;
      F_00c8e460(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      goto LAB_00c84b90;
    }
    puVar5 = gen_imp_CoTaskMemAlloc(0x48);
    *puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00c84b88;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
    puVar7 = ((undefined4 *)(gen_frame + 0x10));
    for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    uVar3 = uVar3 - 1;
    F_00c8e460(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  } while( true );
}

/* ref: FUN_00c84bc0 */
GEN_FRAME uint GEN_STDCALL F_00c84bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84bc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  if (param_2 == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG);
  if (uVar1 != *(uint *)(param_1 + 0xc)) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0x80040203;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  F_00c8e4a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x34))))
                    (*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG,*(int *)(param_1 + 4) - 1,((undefined1 *)(gen_frame + 0x0)));
  F_00c8e460(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00c84c60 */
GEN_FRAME uint GEN_STDCALL F_00c84c60(unsigned int gen_a0)
{
  GEN_ENTER(0xc84c60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG);
  *(uint *)(param_1 + 0xc) = uVar1;
  return 0;
}

/* ref: FUN_00c84c90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c84c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc84c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34) GEN_EDX_ARG);
  F_00c83a60();
  return;
}

/* ref: FUN_00c84cb0 */
GEN_FRAME uint GEN_STDCALL F_00c84cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_STDCALL F_00c84d50(unsigned int gen_a0)
{
  GEN_ENTER(0xc84d50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc))) + 4))))
                    (*(int *)(param_1 + 0x28) + 0xc);
  return uVar1;
}

/* ref: FUN_00c84d70 */
GEN_FRAME uint GEN_STDCALL F_00c84d70(unsigned int gen_a0)
{
  GEN_ENTER(0xc84d70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc))) + 8))))
                    (*(int *)(param_1 + 0x28) + 0xc);
  return uVar1;
}

/* ref: FUN_00c84d90 */
GEN_FRAME uint GEN_THISCALL F_00c84d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD,param_1);
  if ((int)uVar2 < 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG,param_2);
  if (uVar2 == 0) {
    *(int * PTR32 *)((int)this + 0x18) = param_1;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,param_2);
    if ((-1 < (int)uVar2) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,(int)this + 0xc,param_2), -1 < (int)uVar2)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return uVar2;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG);
    }
  }
  else if (((-1 < (int)uVar2) || (uVar2 == 0x80004005)) || (uVar2 == 0x80070057)) {
    uVar2 = 0x8004022a;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c84e60 */
GEN_FRAME uint GEN_THISCALL F_00c84e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc84e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x14))(param_3 GEN_EDX_FWD);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  pcVar1 = *(gen_code32 *)(*param_3 + 0xc);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar4 = (*pcVar1)(param_3,1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
  if (uVar4 == 0) {
    do {
      if (((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) ||
         ((param_2 != 0 && (uVar4 = F_00c8e2c0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_2), uVar4 == 0)))) {
        uVar4 = 0x80040207;
      }
      else {
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,param_1);
        if ((int)uVar4 < 0) {
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG);
        }
        else {
          uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG,pvVar3);
          if (uVar4 == 0) {
            *(int * PTR32 *)((int)this + 0x18) = param_1;
            ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
            uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,pvVar3);
            if ((-1 < (int)uVar4) &&
               (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,(int)this + 0xc,pvVar3),
               -1 < (int)uVar4)) {
              uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,param_1);
              if (-1 < (int)uVar4) goto LAB_00c84fa2;
              ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG);
            }
          }
          else if (((-1 < (int)uVar4) || (uVar4 == 0x80004005)) || (uVar4 == 0x80070057)) {
            uVar4 = 0x8004022a;
          }
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG);
          piVar2 = *(int * PTR32 *)((int)this + 0x18);
          if (piVar2 != (int *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
            *(undefined4 *)((int)this + 0x18) = 0;
          }
        }
        if ((((int)uVar4 < 0) && (-1 < (int)(*(uint *)(gen_frame + 0x4)))) &&
           ((uVar4 != 0x80004005 && ((uVar4 != 0x80070057 && (uVar4 != 0x8004022a)))))) {
          (*(uint *)(gen_frame + 0x4)) = uVar4;
        }
      }
LAB_00c84fa2: ;
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
        F_00c8e650((*(undefined * PTR32 *)(gen_frame + 0x8)));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      }
      if (uVar4 == 0) {
        return 0;
      }
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0xc))(param_3 GEN_EDX_ARG,1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
    } while (uVar4 == 0);
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      return (*(uint *)(gen_frame + 0x4));
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0x80040207;
  return 0x80040207;
}

/* ref: FUN_00c85000 */
GEN_FRAME uint GEN_THISCALL F_00c85000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  if ((param_2 != (undefined *)0x0) && (uVar1 = F_00c8e280(param_2 GEN_EDX_FWD), uVar1 == 0)) {
    uVar1 = F_00c84d90(this GEN_EDX_ARG,param_1,param_2);
    return uVar1;
  }
  (*(uint *)(gen_frame + 0x0)) = 0x80040207;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    if ((*(uint *)(gen_frame + 0x4)) == *(byte *)((int)this + 0x26)) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x30))(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)));
    }
    else {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x30))))((int)this + 0xc,&(*(int * PTR32 *)(gen_frame + 0x8)));
    }
    if (-1 < (int)uVar1) {
      uVar1 = F_00c84e60(this GEN_EDX_ARG,param_1,param_2,(*(int * PTR32 *)(gen_frame + 0x8)));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
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
GEN_NOFRAME uint GEN_STDCALL F_00c850e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc850e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00c850f0 */
GEN_FRAME uint GEN_THISCALL F_00c850f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc850f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8e8d0((undefined *)((int)this + 0x34) GEN_EDX_FWD,param_1);
  return uVar1 & (-1 < (int)uVar1) - 1;
}

/* ref: FUN_00c85110 */
GEN_FRAME uint GEN_THISCALL F_00c85110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc85110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  return ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) - 1 & 0x80040208;
}

/* ref: FUN_00c85150 */
GEN_FRAME uint GEN_STDCALL F_00c85150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x28))))(param_1 - 0xc GEN_EDX_ARG,param_2);
  if ((int)uVar2 < 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x2c))))(param_1 - 0xc GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x20))))(param_1 - 0xc GEN_EDX_ARG,param_3);
  if (uVar2 == 0) {
    *(int * PTR32 *)(param_1 + 0xc) = param_2;
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x24))))(param_1 - 0xc GEN_EDX_ARG,param_3);
    if (-1 < (int)uVar2) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x30))))(param_1 - 0xc GEN_EDX_ARG,param_2);
      if (-1 < (int)uVar2) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x2c)));
    *(undefined4 *)(param_1 + 0xc) = 0;
    (*pcVar1)(param_1 - 0xc);
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x2c))))(param_1 - 0xc GEN_EDX_ARG);
    if (((-1 < (int)uVar2) || (uVar2 == 0x80004005)) || (uVar2 == 0x80070057)) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0x8004022a;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}

/* ref: FUN_00c852b0 */
GEN_FRAME uint GEN_STDCALL F_00c852b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc852b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1[6] == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))(param_1 GEN_EDX_ARG);
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[6] + 8))((int *)param_1[6] GEN_EDX_ARG);
      param_1[6] = 0;
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00c852f0 */
GEN_FRAME uint GEN_STDCALL F_00c852f0(unsigned int gen_a0, unsigned int gen_a1)
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
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
    return 0;
  }
  return 0x80040209;
}

/* ref: FUN_00c85330 */
GEN_FRAME uint GEN_STDCALL F_00c85330(unsigned int gen_a0, unsigned int gen_a1)
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
  F_00c8e260(param_2 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040209;
}

/* ref: FUN_00c85390 */
GEN_FRAME uint GEN_STDCALL F_00c85390(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME uint GEN_STDCALL F_00c853c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc853c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c89740(*(undefined4 *)(param_1 + 8),param_2);
  return uVar1;
}

/* ref: FUN_00c853e0 */
GEN_FRAME uint GEN_STDCALL F_00c853e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc853e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x20))))(param_1 - 0xc GEN_EDX_ARG,param_2);
  if ((int)uVar1 < 0) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00c85410 */
GEN_NOFRAME uint GEN_STDCALL F_00c85410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0x8000ffff;
}

/* ref: FUN_00c85420 */
GEN_NOFRAME uint GEN_THISCALL F_00c85420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_00c85450 */
GEN_NOFRAME uint GEN_STDCALL F_00c85450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c85470 */
GEN_NOFRAME uint GEN_STDCALL F_00c85470(unsigned int gen_a0)
{
  GEN_ENTER(0xc85470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: CBasePin::SetSink */
GEN_FRAME long GEN_STDCALL F_00c85480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x10);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c854b0 */
GEN_NOFRAME uint GEN_STDCALL F_00c854b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc854b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  return 0x80004001;
}

/* ref: FUN_00c854c0 */
GEN_FRAME uint GEN_STDCALL F_00c854c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, double gen_a5)
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
GEN_FRAME uint GEN_THISCALL F_00c85520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc85520u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  if ((*(int * PTR32 *)&gen_args[1]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) {
    return 0x80040208;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)*piVar1)(piVar1 GEN_EDX_ARG,&REFG(undefined, 0x1095aa4),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c);
  return uVar2 & (-1 < (int)uVar2) - 1;
}

/* ref: FUN_00c85570 */
GEN_NOFRAME uint GEN_THISCALL F_00c85570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_FWD);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 8))))(*(int * PTR32 *)((int)this + 0x98) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  return 0;
}

/* ref: FUN_00c855d0 */
GEN_FRAME unsigned int GEN_STDCALL F_00c855d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc855d0u, gen_a0, 0u, 0u, 0u);
  LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;
  return (uint)(gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),param_1));
}

/* ref: FUN_00c855f0 */
GEN_FRAME uint GEN_THISCALL F_00c855f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc855f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *param_2 = 0;
  pcVar1 = *(gen_code32 *)(*param_1 + 0x14);
  (*(undefined8 *)(gen_frame + 0x8)) = 0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  (*pcVar1)(param_1,&(*(undefined8 *)(gen_frame + 0x8)));
  if ((int)(*(undefined8 *)(gen_frame + 0x10)) == 0) {
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = 1;
    (*(undefined8 *)(gen_frame + 0x10)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)),1);
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_FWD,param_2);
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG,*param_2,&(*(undefined8 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*param_2,0);
      if (-1 < (int)uVar3) goto LAB_00c8566d;
    }
  }
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
    *param_2 = 0;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,param_2);
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG,*param_2,&(*(undefined8 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*param_2,0);
      if (-1 < (int)uVar3) {
LAB_00c8566d: ;
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return 0;
      }
    }
  }
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
    *param_2 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00c85700 */
GEN_FRAME uint GEN_THISCALL F_00c85700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc85700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (*(int *)((int)this + 0x98) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 0x1c))))
                      (*(int * PTR32 *)((int)this + 0x98) GEN_EDX_ARG,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0x80004002;
}

/* ref: FUN_00c85740 */
GEN_FRAME uint GEN_THISCALL F_00c85740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc85740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    return 0x80040209;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x18))))(*(int * PTR32 *)((int)this + 0x9c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c85770 */
GEN_NOFRAME uint GEN_THISCALL F_00c85770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x38))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00c857d0 */
GEN_NOFRAME uint GEN_STDCALL F_00c857d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc857d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0x8000ffff;
}

/* ref: FUN_00c857e0 */
GEN_NOFRAME uint GEN_STDCALL F_00c857e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc857e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0x8000ffff;
}

/* ref: FUN_00c857f0 */
GEN_NOFRAME uint GEN_STDCALL F_00c857f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc857f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0x8000ffff;
}

/* ref: FUN_00c85840 */
GEN_FRAME uint GEN_THISCALL F_00c85840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, double gen_a5)
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
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0x44))))
                    (*(int * PTR32 *)(param_1 + 0x18) GEN_EDX_ARG,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00c85880 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c85880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34) GEN_EDX_ARG);
  F_00c83a60();
  return;
}

/* ref: FUN_00c858c0 */
GEN_FRAME uint GEN_STDCALL F_00c858c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc858c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
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
GEN_FRAME uint GEN_STDCALL F_00c85920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85920u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  LPVOID * ppv;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 - 0x78);
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
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)*ppv + 4))(*ppv GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c859a0 */
GEN_FRAME uint GEN_STDCALL F_00c859a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc859a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 - 0x78);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG);
  *(int * PTR32 *)(param_1 + 4) = param_2;
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  *(undefined1 *)(param_1 + 8) = (undefined1)param_3;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c85a00 */
GEN_NOFRAME uint GEN_THISCALL F_00c85a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc85a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_FWD);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 8))))(*(int * PTR32 *)((int)this + 0x9c) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  return 0;
}

/* ref: FUN_00c85a40 */
GEN_FRAME uint GEN_STDCALL F_00c85a40(unsigned int gen_a0, unsigned int gen_a1)
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
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) - 0x98) + 0x38))))((*(int *)&gen_args[0]) - 0x98 GEN_EDX_ARG);
  if (uVar3 != 0) {
    return uVar3;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)*piVar2)(piVar2 GEN_EDX_ARG,&REFG(undefined, 0x1095a54),&(*(int * PTR32 *)&gen_args[1]));
  if ((int)uVar3 < 0) {
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x10) = 0x30;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x14) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x30) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x18) = 0;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2 GEN_EDX_ARG);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 4;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 2;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 1;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG,(*(int *)&gen_args[0]) + 0x20,(*(int *)&gen_args[0]) + 0x28);
    if (-1 < (int)uVar3) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 0x110;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2 GEN_EDX_ARG,(*(int *)&gen_args[0]) + 0x34);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 8;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,(*(int *)&gen_args[0]) + 0x38);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2 GEN_EDX_ARG);
    *(uint *)((*(int *)&gen_args[0]) + 0x1c) = uVar3;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    *(uint *)((*(int *)&gen_args[0]) + 0x3c) = uVar3;
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x4c))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0x30,(*(int *)&gen_args[0]) + 0x10);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  if (((*(byte *)((*(int *)&gen_args[0]) + 0x18) & 8) != 0) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) - 0x98) + 0x20))))
                        ((*(int *)&gen_args[0]) - 0x98 GEN_EDX_ARG,*(undefined4 *)((*(int *)&gen_args[0]) + 0x34)), uVar3 != 0)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) - 0x8c) + 0x38)));
    *(undefined1 *)((*(int *)&gen_args[0]) - 0x74) = 1;
    (*pcVar1)(*(int *)((*(int *)&gen_args[0]) - 0x8c),(*(int *)&gen_args[0]) - 0x8c);
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) - 0x70) + 0x44)));
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,3,0x8004022a,0);
    }
    return 0x80040200;
  }
  return 0;
}

/* ref: FUN_00c85bb0 */
GEN_FRAME uint GEN_STDCALL F_00c85bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc85bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
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
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG,*(undefined4 *)(param_2 + *param_4 * 4));
    if (uVar1 != 0) break;
    *param_4 = *param_4 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c85c00 */
GEN_FRAME uint GEN_STDCALL F_00c85c00(unsigned int gen_a0)
{
  GEN_ENTER(0xc85c00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 0x70) + 0x18))))(*(int * PTR32 *)(param_1 - 0x70) GEN_EDX_ARG);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 0x70) + 0x1c))))(*(int * PTR32 *)(param_1 - 0x70) GEN_EDX_ARG,iVar5);
      if (uVar3 == 0) break;
      piVar1 = (int *)(uVar3 + 0xc);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0x24))))(*(int *)(uVar3 + 0xc),piVar1,&(*(int *)(gen_frame + 0x0)));
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (((*(int *)(gen_frame + 0x0)) == 1) &&
         (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8))), -1 < (int)uVar3)) {
        iVar4 = iVar4 + 1;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x8)))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x1095aa4),&(*(int * PTR32 *)(gen_frame + 0x4)));
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        if ((int)uVar3 < 0) {
          return 0;
        }
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
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
GEN_FRAME long GEN_STDCALL F_00c85cd0(unsigned int gen_a0)
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
GEN_FRAME uint GEN_STDCALL F_00c85d00(unsigned int gen_a0)
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
GEN_FRAME uint GEN_STDCALL F_00c85d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc85d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  return (-(uint)(param_2 != 0) & 0x7fffbffd) + 0x80004003;
}

/* ref: FUN_00c85d80 */
GEN_NOFRAME uint GEN_STDCALL F_00c85d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0x80004001;
}

/* ref: FUN_00c85d90 */
GEN_NOFRAME uint GEN_THISCALL F_00c85d90(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint GEN_THISCALL F_00c85dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc85dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
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
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2c) + 0xc))))(*(int * PTR32 *)((int)this + 0x2c) GEN_EDX_FWD,iVar2);
    return uVar1;
  }
  uVar1 = 0x80040216;
  if (*(int *)((int)this + 0x18) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
              (*(undefined4 * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,&REFG(undefined, 0x1095b14),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
      if (*(int *)((int)this + 0x28) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0x28) + 0xc;
      }
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))
                        ((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar2,(int)*param_1,(int)((ulonglong)*param_1 >> 0x20),
                         (int)param_1[1],(int)((ulonglong)param_1[1] >> 0x20),(int)param_1[2],
                         (int)((ulonglong)param_1[2] >> 0x20));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: FUN_00c85eb0 */
GEN_FRAME uint GEN_STDCALL F_00c85eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
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
GEN_FRAME unsigned int GEN_STDCALL F_00c85f20(unsigned int gen_a0)
{
  GEN_ENTER(0xc85f20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x44)));
}

/* ref: FUN_00c85f40 */
GEN_FRAME uint GEN_STDCALL F_00c85f40(unsigned int gen_a0)
{
  GEN_ENTER(0xc85f40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
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
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x38))(param_1 GEN_EDX_ARG,0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x10] = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1[6] + 0xc) + 0x20))))((int *)(param_1[6] + 0xc) GEN_EDX_ARG,param_1);
  return 0;
}

/* ref: FUN_00c85fa0 */
GEN_FRAME uint GEN_THISCALL F_00c85fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_STDCALL F_00c85fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85fd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}

/* ref: FUN_00c85ff0 */
GEN_FRAME uint GEN_STDCALL F_00c85ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xc85ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 0x14);
}

/* ref: FUN_00c86000 */
GEN_FRAME uint GEN_STDCALL F_00c86000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86000u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
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
GEN_FRAME uint GEN_STDCALL F_00c86070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86070u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
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
GEN_FRAME uint GEN_STDCALL F_00c860e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc860e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
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
GEN_FRAME uint GEN_STDCALL F_00c86120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86120u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
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
GEN_FRAME uint GEN_STDCALL F_00c86170(unsigned int gen_a0)
{
  GEN_ENTER(0xc86170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (byte)~*(byte *)(param_1 + 4) & 1;
}

/* ref: FUN_00c86190 */
GEN_FRAME uint GEN_STDCALL F_00c86190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86190u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00c861b0 */
GEN_FRAME uint GEN_STDCALL F_00c861b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc861b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (byte)~*(byte *)(param_1 + 4) >> 2 & 1;
}

/* ref: FUN_00c861d0 */
GEN_FRAME uint GEN_STDCALL F_00c861d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc861d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
  return 0;
}

/* ref: FUN_00c861f0 */
GEN_FRAME uint GEN_STDCALL F_00c861f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc861f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (byte)~*(byte *)(param_1 + 4) >> 1 & 1;
}

/* ref: FUN_00c86210 */
GEN_FRAME uint GEN_STDCALL F_00c86210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86210u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  return 0;
}

/* ref: FUN_00c86230 */
GEN_FRAME uint GEN_STDCALL F_00c86230(unsigned int gen_a0)
{
  GEN_ENTER(0xc86230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 0x10);
}

/* ref: FUN_00c86240 */
GEN_FRAME uint GEN_STDCALL F_00c86240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86240u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_2 <= *(int *)(param_1 + 0x14)) && (-1 < param_2)) {
    *(int *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 0x8004020d;
}

/* ref: FUN_00c86270 */
GEN_FRAME uint GEN_STDCALL F_00c86270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
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
GEN_FRAME uint GEN_STDCALL F_00c862b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc862b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
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
GEN_FRAME uint GEN_STDCALL F_00c86310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86310u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
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
    uVar1 = *(uint *)(param_1 + 4);
    (*(uint *)(gen_frame + 0x14)) = uVar1 & 0xffffffdf;
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 8);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(param_1 + 0xc);
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(param_1 + 0x14);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 0x10);
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_1 + 0x20);
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_1 + 0x24);
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(param_1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(param_1 + 0x2c);
    (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(param_1 + 0x40);
    (*(uint *)(gen_frame + 0xc)) = uVar2;
    if ((uVar1 & 8) == 0) {
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(param_1 + 0x3c);
    }
    F_00c46aa0(param_3,&(*(uint *)(gen_frame + 0xc)),uVar2);
  }
  return 0;
}

/* ref: FUN_00c863c0 */
GEN_FRAME uint GEN_STDCALL F_00c863c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc863c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00c86550(unsigned int gen_a0 GEN_EDX_PARAM)
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
  F_00c8e460((undefined *)((int)this + 0x34) GEN_EDX_ARG);
  F_00c83a60();
  return;
}

/* ref: FUN_00c865f0 */
GEN_FRAME uint GEN_STDCALL F_00c865f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc865f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
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
GEN_FRAME uint GEN_STDCALL F_00c86650(unsigned int gen_a0)
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
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x2c))))(param_1 - 0xc GEN_EDX_ARG);
  if ((int)uVar1 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
  *(undefined4 *)(param_1 + 0xc) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c866c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c866c0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00c86700(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint GEN_THISCALL F_00c86780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  uint uVar4;
  
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
    uVar2 = *(undefined4 *)((int)this + 0xd0);
    (*(HANDLE *)(gen_frame + 0x4)) = *(HANDLE *)((int)this + 0xbc);
    (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
    DVar3 = gen_imp_WaitForMultipleObjects(2,&(*(HANDLE *)(gen_frame + 0x4)),0,0xffffffff);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (DVar3 != 0) break;
    iVar1 = *(int *)((int)this + 0xc4);
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

/* ref: FUN_00c86840 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c86840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  piVar1 = (int *)((int)this + 0xcc);
  *piVar1 = *piVar1 - 1;
  if ((*piVar1 == 0) && (*(int *)((int)this + 0xc4) != 0)) {
    F_00c866c0(this GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4)));
}

/* ref: FUN_00c86880 */
GEN_NOFRAME byte GEN_THISCALL F_00c86880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  iVar1 = *(int *)((int)this + 0xcc);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  return iVar1 != 0;
}

/* ref: FUN_00c868b0 */
GEN_FRAME uint GEN_THISCALL F_00c868b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc868b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0xd4) = param_1;
  *(undefined4 *)((int)this + 0xd0) = param_2;
  return param_1;
}

/* ref: FUN_00c868d0 */
GEN_NOFRAME uint GEN_THISCALL F_00c868d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc868d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(HANDLE *)((int)this + 0xd0) != (HANDLE)0x0) && (*(int *)((int)this + 0xd4) != 0)) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0xd0));
    if (*(int *)((int)this + 0x98) == 0) {
      return 0x8004020a;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 0x14))))(*(int * PTR32 *)((int)this + 0x98) GEN_EDX_ARG);
    return uVar1;
  }
  return 0x80004005;
}

/* ref: FUN_00c86920 */
GEN_NOFRAME uint GEN_THISCALL F_00c86920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0xd0));
  *(undefined1 *)((int)this + 0x24) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar1 == (int *)0x0) {
    return 0x8004020a;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c86950 */
GEN_NOFRAME uint GEN_THISCALL F_00c86950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0xd0));
  if (*(int *)((int)this + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x3c))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c86980 */
GEN_NOFRAME uint GEN_THISCALL F_00c86980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_ResetEvent(*(HANDLE *)((int)this + 0xd0));
  if (*(int *)((int)this + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x40))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c869b0 */
GEN_FRAME uint GEN_THISCALL F_00c869b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc869b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (this == (undefined *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + 0xc;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x10))))
                    (*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,iVar3,param_1);
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,param_1);
    if (-1 < (int)uVar2) {
      if (*(int *)((int)this + 0x9c) != 0) {
        piVar1 = *(int * PTR32 *)((int)this + 0x9c);
        (*(int *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x10)) == 0) {
          (*(int *)(gen_frame + 0x10)) = 1;
        }
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 0x18))))(*(int * PTR32 *)((int)this + 0x98) GEN_EDX_ARG);
        if ((int)uVar2 < 0) goto LAB_00c86a90;
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98),&(*(undefined4 *)(gen_frame + 0x8)))
        ;
        if ((int)uVar2 < 0) goto LAB_00c86a90;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 0x14))))(*(int * PTR32 *)((int)this + 0x98) GEN_EDX_ARG);
        if ((int)uVar2 < 0) goto LAB_00c86a90;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x10))))
                          (*(int * PTR32 *)((int)this + 0x9c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98),
                           *(undefined4 *)((int)this + 0xd8));
        if ((int)uVar2 < 0) goto LAB_00c86a90;
      }
      uVar2 = 0;
    }
  }
LAB_00c86a90: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c86ab0 */
GEN_FRAME uint GEN_THISCALL F_00c86ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc86ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(int *)((int)this + 0xd4) != 0) && (*(int *)((int)this + 0xd0) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd4) + 0xc))))
                      (*(int * PTR32 *)((int)this + 0xd4) GEN_EDX_ARG,(int)this + 0xc,0,param_1,0,
                       *(int *)((int)this + 0xd0),2);
    return uVar1;
  }
  return 0x80004005;
}

/* ref: FUN_00c86b00 */
GEN_NOFRAME uint GEN_THISCALL F_00c86b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc86b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)this + 0x98);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,*(undefined4 *)((int)this + 0x9c),piVar1);
  if (((-1 < (int)uVar2) && (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x14))) != 0)) && (*piVar1 != 0)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*piVar1 + 0x14))((int *)*piVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00c86b40 */
GEN_FRAME uint F_00c86b40(unsigned int gen_a0)
{
  GEN_ENTER(0xc86b40u, gen_a0, 0u, 0u, 0u);
  HANDLE param_1 = (HANDLE)gen_a0;
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = gen_imp_WaitForSingleObject(param_1,0xffffffff);
  if (DVar1 == 0) {
    return 0;
  }
  if (DVar1 != 0xffffffff) {
    return 0x8000ffff;
  }
  uVar2 = F_00c89410();
  return uVar2;
}

/* ref: FUN_00c86b70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c86b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(HANDLE *)((int)this + 0x30) != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x30));
  }
  if (*(int *)((int)this + 0x58) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 8))))(*(int * PTR32 *)((int)this + 0x58) GEN_EDX_ARG);
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  F_00c83a60();
  return;
}

/* ref: FUN_00c86bb0 */
GEN_FRAME uint GEN_STDCALL F_00c86bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86bb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095a74));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095a84));
    if ((uVar1 == 0) || (*(int *)(param_1 + 0x5c) == 0)) {
      uVar1 = F_00c83bc0(param_1,param_2,param_3);
      return uVar1;
    }
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c86c20 */
GEN_FRAME uint GEN_STDCALL F_00c86c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86c20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION param_2 = (LPCRITICAL_SECTION)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = &(*(undefined * PTR32 *)((char *)(param_2)));
  if (param_2 == (LPCRITICAL_SECTION)0x0) {
    return 0x80004003;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  if (param_1 == 0xc) {
    param_2 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    param_2 = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(param_2);
  *param_3 = 0;
  param_3[1] = 0;
  if (puVar2[2] != 1) {
    gen_imp_LeaveCriticalSection(param_2);
    return 0x8004020e;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    gen_imp_LeaveCriticalSection(param_2);
    return 0x8004020f;
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x20)) {
    gen_imp_LeaveCriticalSection(param_2);
    return 0x80040210;
  }
  uVar1 = puVar2[1];
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)((int)param_3 + 4) = uVar1;
  uVar1 = *puVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)param_3 = uVar1;
  uVar1 = puVar2[2];
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_3 + 1) = uVar1;
  uVar1 = puVar2[3];
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)((int)param_3 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  gen_imp_LeaveCriticalSection(param_2);
  return 0;
}

/* ref: FUN_00c86d10 */
GEN_FRAME uint GEN_STDCALL F_00c86d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  *param_2 = *(undefined4 *)(param_1 + 0x2c);
  param_2[2] = *(undefined4 *)(param_1 + 0x38);
  param_2[3] = *(undefined4 *)(param_1 + 0x3c);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86d70 */
GEN_FRAME uint GEN_STDCALL F_00c86d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc86d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  int iVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  *param_2 = 0;
  while( true ) {
    if (param_1 == 0xc) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    else {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
    }
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0x44) == 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0x80040211;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x1c);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - 1;
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    if (iVar1 != 0) break;
    if ((param_5 & 4) != 0) {
      return 0x8004022e;
    }
    gen_imp_WaitForSingleObject(*(HANDLE *)(param_1 + 0x24),0xffffffff);
  }
  *(undefined4 *)(iVar1 + 0x44) = 1;
  *param_2 = iVar1;
  return 0;
}

/* ref: FUN_00c86e10 */
GEN_FRAME uint GEN_STDCALL F_00c86e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86e10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)(param_1 + 0x4c) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86e60 */
GEN_FRAME uint GEN_STDCALL F_00c86e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86e60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x20);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86ea0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c86ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc86ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x34) != 0) {
    gen_imp_ReleaseSemaphore(*(HANDLE *)((int)this + 0x30),*(int *)((int)this + 0x34),(LPLONG)0x0);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return 0;
}

/* ref: FUN_00c86ec0 */
GEN_FRAME uint GEN_STDCALL F_00c86ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xc86ec0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == (int *)0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_1[0x11] == 0) {
    param_1[0x11] = 1;
    if (param_1[0x12] == 0) {
      uVar1 = ((code *)*(gen_code32 *)(param_1[-3] + 0x14))(param_1 - 3);
      if ((int)uVar1 < 0) {
        param_1[0x11] = 0;
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return uVar1;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    param_1[0x12] = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86f50 */
GEN_FRAME uint GEN_STDCALL F_00c86f50(unsigned int gen_a0)
{
  GEN_ENTER(0xc86f50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  code * pcVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == (int *)0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((param_1[0x11] == 0) && (param_1[0x12] == 0)) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar2 = param_1[8];
  param_1[0x11] = 0;
  iVar1 = param_1[0xc];
  if (iVar1 <= iVar2) {
    pcVar3 = *(gen_code32 *)(param_1[-3] + 0x10);
    param_1[0x12] = 0;
    (*pcVar3)(param_1 - 3);
  }
  else {
    param_1[0x12] = 1;
  }
  if (param_1[10] != 0) {
    gen_imp_ReleaseSemaphore((HANDLE)param_1[9],param_1[10],(LPLONG)0x0);
    param_1[10] = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  if (iVar1 <= iVar2) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00c87020 */
GEN_FRAME unsigned int GEN_THISCALL F_00c87020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc87020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = this;
  if (*(int *)this != 0) {
    while (iVar1 = *piVar2, iVar1 != param_1) {
      piVar2 = (int *)(iVar1 + 0x1c);
      if (*(int *)(iVar1 + 0x1c) == 0) {
        return 0;
      }
    }
    *piVar2 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  return 0;
}

/* ref: FUN_00c87060 */
GEN_FRAME uint GEN_STDCALL F_00c87060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION param_3 = (LPCRITICAL_SECTION)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 * puVar4;
  
  puVar4 = (undefined8 *)param_3;
  iVar3 = param_1;
  if (param_3 == (LPCRITICAL_SECTION)0x0) {
    return 0x80004003;
  }
  if (param_1 == 0xc) {
    param_3 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    param_3 = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(param_3);
  *puVar4 = 0;
  puVar4[1] = 0;
  gen_imp_GetSystemInfo((GEN_LPANY)((byte *)(gen_frame + 0x8)));
  iVar1 = param_2[2];
  if ((iVar1 == 0) || (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) & iVar1 - 1U) != 0)) {
    gen_imp_LeaveCriticalSection(param_3);
    return 0x8004020e;
  }
  if (*(int *)(param_1 + 0x44) == 1) {
    gen_imp_LeaveCriticalSection(param_3);
    return 0x8004020f;
  }
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x30)) {
    gen_imp_LeaveCriticalSection(param_3);
    return 0x80040210;
  }
  param_1 = param_2[1] + param_2[3];
  if (param_1 % iVar1 != 0) {
    param_1 = param_1 + (iVar1 - param_1 % iVar1);
  }
  iVar1 = param_2[3];
  *(int *)(iVar3 + 0x34) = param_1 - iVar1;
  *(int *)((int)puVar4 + 4) = param_1 - iVar1;
  uVar2 = *param_2;
  *(undefined4 *)(iVar3 + 0x2c) = uVar2;
  *(undefined4 *)puVar4 = uVar2;
  uVar2 = param_2[2];
  *(undefined4 *)(iVar3 + 0x38) = uVar2;
  *(undefined4 *)(puVar4 + 1) = uVar2;
  uVar2 = param_2[3];
  *(undefined4 *)(iVar3 + 0x3c) = uVar2;
  *(undefined4 *)((int)puVar4 + 0xc) = uVar2;
  *(undefined4 *)(iVar3 + 0x40) = 1;
  gen_imp_LeaveCriticalSection(param_3);
  return 0;
}

/* ref: FUN_00c87180 */
GEN_NOFRAME unsigned int F_00c87180(void)
{
  GEN_ENTER(0xc87180u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c87190 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c87190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc87190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  while (piVar1 = *(int * PTR32 *)((int)this + 0x28), piVar1 != (int *)0x0) {
    iVar2 = piVar1[7];
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) - 1;
    *(int *)((int)this + 0x28) = iVar2;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_FWD,1);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  if (*(LPVOID *)((int)this + 0x60) != (LPVOID)0x0) {
    gen_imp_VirtualFree(*(LPVOID *)((int)this + 0x60),0,0x8000);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  return 0;
}

/* ref: FUN_00c871e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c871e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc871e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1128bf4));
  *(undefined4 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[11])REFP(0x1128bc8));
  F_00c86f50((undefined4 *)((int)this + 0xc));
  F_00c87190(this GEN_EDX_ARG);
  if (*(HANDLE *)((int)this + 0x30) != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x30));
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x58);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  F_00c83a60();
  return;
}

/* ref: FUN_00c87230 */
GEN_FRAME uint GEN_STDCALL F_00c87230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  iVar4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar1 = *(undefined8 *)*param_1;
  uVar2 = ((undefined8 *)*param_1)[1];
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x1c))
                    (param_2 GEN_EDX_ARG,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,
                     (int)((ulonglong)uVar2 >> 0x20));
  if (((param_3 != 0) &&
      (uVar1 = *(undefined8 *)*param_1, uVar2 = ((undefined8 *)*param_1)[1],
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0xc))
                        (param_2 GEN_EDX_ARG,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,
                         (int)((ulonglong)uVar2 >> 0x20),param_1[1],param_1[2]), -1 < (int)uVar3))
     && (local_8 = 0, param_1[3] != 0)) {
    while (uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x14))(), -1 < (int)uVar3) {
      param_3 = 0;
      if (*(int *)(iVar4 + 0x1c + param_1[4]) != 0) {
        do {
          uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x18))();
          if ((int)uVar3 < 0) goto LAB_00c873ed;
          param_3 = param_3 + 1;
        } while (param_3 < *(uint *)(iVar4 + 0x1c + param_1[4]));
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x24;
      if ((uint)param_1[3] <= local_8) break;
    }
  }
LAB_00c873ed: ;
  return -(uint)(uVar3 != 0x80070002) & uVar3;
}

/* ref: FUN_00c87410 */
GEN_FRAME uint GEN_THISCALL F_00c87410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc87410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined8 uVar1;
  
  F_00c83b90(this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined8 *)((int)this + 0x28) = *param_4;
  uVar1 = param_4[1];
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined8 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x38) = param_3;
  *(undefined4 *)((int)this + 0x48) = 1;
  return (uint)this;
}

/* ref: FUN_00c87470 */
GEN_FRAME uint GEN_STDCALL F_00c87470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87470u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  short * psVar1;
  short * psVar2;
  short * psVar3;
  int iVar4;
  
  if (param_2 == (short *)0x0) {
    return 0x80004003;
  }
  psVar3 = *(short * PTR32 *)(param_1 + 0x30);
  if (psVar3 == (short *)0x0) {
    *param_2 = 0;
  }
  else {
    iVar4 = 0x80;
    psVar1 = param_2;
    do {
      psVar2 = psVar1;
      if ((iVar4 == -0x7fffff7e) || (*psVar3 == 0)) {
        if (iVar4 == 0) {
          psVar2 = psVar2 - 1;
        }
        *psVar2 = 0;
        goto LAB_00c874dd;
      }
      *psVar2 = *psVar3;
      psVar3 = psVar3 + 1;
      iVar4 = iVar4 - 1;
      psVar1 = psVar2 + 1;
    } while (iVar4 != 0);
    *psVar2 = 0;
  }
LAB_00c874dd: ;
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x34) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x34) + 4))))(*(int * PTR32 *)(param_1 + 0x34) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00c87500 */
GEN_FRAME uint GEN_STDCALL F_00c87500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87500u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  short * param_3 = (short *)(uintptr_t)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  longlong lVar2;
  uint uVar3;
  short * psVar4;
  int iVar5;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 * PTR32 *)(param_1 + 0x34) = param_2;
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*param_2)(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1095b54),(undefined4 *)(param_1 + 0x38));
    if (-1 < (int)uVar3) {
      piVar1 = *(int * PTR32 *)(param_1 + 0x38);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    F_00406ad0(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (param_3 == (short *)0x0) {
LAB_00c875c0: ;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar5 = 0x7fffffff;
  psVar4 = param_3;
  do {
    if (*psVar4 == 0) {
      if (iVar5 != 0) {
        lVar2 = (ulonglong)(0x80000000U - iVar5) * 2;
        uVar3 = F_004069f0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
        *(uint *)(param_1 + 0x30) = uVar3;
        if (uVar3 == 0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
          return 0x8007000e;
        }
        F_00c88990(uVar3,0x80000000U - iVar5,param_3);
        goto LAB_00c875c0;
      }
      break;
    }
    psVar4 = psVar4 + 1;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80070057;
}

/* ref: FUN_00c875f0 */
GEN_FRAME uint GEN_STDCALL F_00c875f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc875f0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint uVar1;
  HRESULT HVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[-4] + 0x20))))((*(int * PTR32 *)&gen_args[0]) - 4);
  if (uVar1 == 0) {
    return 1;
  }
  gen_imp_CoInitialize((LPVOID)0x0);
  HVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085688),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095ae4),&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < HVar2) {
    F_00c87230(uVar1,(*(int * PTR32 *)&gen_args[0]),1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  gen_imp_CoFreeUnusedLibraries();
  gen_imp_CoUninitialize();
  return 0;
}

/* ref: FUN_00c87660 */
GEN_FRAME uint GEN_STDCALL F_00c87660(unsigned int gen_a0)
{
  GEN_ENTER(0xc87660u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[-4] + 0x20))))((*(int * PTR32 *)&gen_args[0]) - 4);
  if (uVar1 == 0) {
    return 1;
  }
  gen_imp_CoInitialize((LPVOID)0x0);
  uVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085688),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095ae4),&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar2) {
    uVar2 = F_00c87230(uVar1,(*(int * PTR32 *)&gen_args[0]),0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  gen_imp_CoFreeUnusedLibraries();
  gen_imp_CoUninitialize();
  return -(uint)(uVar2 != 0x80070002) & uVar2;
}

/* ref: FUN_00c876e0 */
GEN_FRAME uint GEN_THISCALL F_00c876e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc876e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a54));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = 1;
  F_00c8d760((int)this + 0x18 GEN_EDX_FWD,0);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + 4))))(*(int *)((int)this + 0xc) + 0xc);
  if (param_2 == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG);
    *(uint *)((int)this + 0x10) = uVar1;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x18))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG);
    *(uint *)((int)this + 8) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  F_00c8d9b0((undefined *)((int)this + 0x18) GEN_EDX_ARG,param_2 + 0x18);
  return (uint)this;
}

/* ref: FUN_00c87770 */
GEN_FRAME uint GEN_STDCALL F_00c87770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87770u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar2 = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
  if (uVar1 != *(uint *)(param_1 + 0x10)) {
    *param_2 = 0;
    return 0x80040203;
  }
  this = (undefined *)F_004069f0(0x30);
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c876e0(this GEN_EDX_ARG,*(undefined4 *)(param_1 + 0xc),param_1);
  }
  *param_2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 0x8007000e;
  }
  return uVar2;
}

/* ref: FUN_00c877e0 */
GEN_FRAME uint GEN_STDCALL F_00c877e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc877e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if (param_4 == (uint *)0x0) {
    if (1 < param_2) {
      return 0x80070057;
    }
  }
  else {
    *param_4 = 0;
  }
  local_8 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
  if (uVar3 != *(uint *)(param_1 + 0x10)) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
    *(uint *)(param_1 + 0x10) = uVar3;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x18))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
    *(uint *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 4);
      if (*(int *)(param_1 + 8) <= iVar2) break;
      *(int *)(param_1 + 4) = iVar2 + 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x1c))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG,iVar2);
      if (uVar3 == 0) {
        return 0x80040203;
      }
      uVar4 = F_00c8d840((undefined *)(param_1 + 0x18) GEN_EDX_ARG,uVar3);
      if (uVar4 == 0) {
        piVar1 = (int *)(uVar3 + 0xc);
        *param_3 = (int)piVar1;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
        local_8 = local_8 + 1;
        param_3 = param_3 + 1;
        F_00c8d8e0((undefined *)(param_1 + 0x18) GEN_EDX_ARG,uVar3);
      }
    } while (local_8 < param_2);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = local_8;
  }
  return (uint)(param_2 != local_8);
}

/* ref: FUN_00c878e0 */
GEN_FRAME uint GEN_THISCALL F_00c878e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc878e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(int *)((int)this + 8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a74));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 4))))((int *)(param_1 + 0xc) GEN_EDX_FWD);
  if (param_2 == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    *(uint *)((int)this + 0xc) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return (uint)this;
}

/* ref: FUN_00c87940 */
GEN_FRAME uint GEN_STDCALL F_00c87940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87940u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar2 = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG);
  if (uVar1 != *(uint *)(param_1 + 0xc)) {
    *param_2 = 0;
    return 0x80040203;
  }
  this = (undefined *)F_004069f0(0x14);
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c878e0(this GEN_EDX_ARG,*(undefined4 *)(param_1 + 8),param_1);
  }
  *param_2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 0x8007000e;
  }
  return uVar2;
}

/* ref: FUN_00c879b0 */
GEN_FRAME uint GEN_THISCALL F_00c879b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc879b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  short * param_5 = (short *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  longlong lVar1;
  undefined8 uVar2;
  short * psVar3;
  uint uVar4;
  int iVar5;
  
  F_00c83b90(this GEN_EDX_FWD,param_1,0);
  *(undefined4 *)((int)this + 0x1c) = param_6;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 1;
  F_00c8e4a0((undefined *)((int)this + 0x34) GEN_EDX_ARG);
  uVar2 = (undefined8)gen_d2bits((double)(REFG(double, 0x1088130)));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0xffffffff;
  *(undefined4 *)((int)this + 0x8c) = 0x7fffffff;
  *(undefined8 *)((int)this + 0x90) = uVar2;
  if (param_5 != (short *)0x0) {
    iVar5 = 0x7fffffff;
    psVar3 = param_5;
    while (*psVar3 != 0) {
      psVar3 = psVar3 + 1;
      iVar5 = iVar5 - 1;
      if (iVar5 == 0) {
        return (uint)this;
      }
    }
    if (iVar5 != 0) {
      lVar1 = (ulonglong)(0x80000000U - iVar5) * 2;
      uVar4 = F_004069f0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      *(uint *)((int)this + 0x14) = uVar4;
      if (uVar4 != 0) {
        F_00c88990(uVar4,0x80000000U - iVar5,param_5);
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_00c87a90 */
GEN_FRAME uint GEN_STDCALL F_00c87a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87a90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  if (param_2 == 0) {
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
  uVar1 = F_00c85000((undefined *)(param_1 - 0xc) GEN_EDX_ARG,param_2,param_3);
  if ((int)uVar1 < 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x2c))))(param_1 - 0xc GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c87b30 */
GEN_FRAME uint GEN_STDCALL F_00c87b30(unsigned int gen_a0)
{
  GEN_ENTER(0xc87b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x14))) != 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040224;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0xc) + 0x2c))))(param_1 - 0xc GEN_EDX_ARG);
    if ((int)uVar1 < 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
    *(undefined4 *)(param_1 + 0xc) = 0;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 1;
}

/* ref: FUN_00c87bc0 */
GEN_FRAME uint GEN_STDCALL F_00c87bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87bc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  short * psVar4;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c) + 0xc;
  }
  *param_2 = iVar2;
  if (*(int *)(param_1 + 0x1c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 4))))(*(int *)(param_1 + 0x1c) + 0xc);
  }
  psVar4 = *(short * PTR32 *)(param_1 + 8);
  if (psVar4 != (short *)0x0) {
    iVar2 = 0x80;
    piVar1 = param_2 + 2;
    while ((piVar3 = piVar1, iVar2 != -0x7fffff7e && (*psVar4 != 0))) {
      *(short *)piVar3 = *psVar4;
      psVar4 = psVar4 + 1;
      iVar2 = iVar2 - 1;
      piVar1 = (int *)((int)piVar3 + 2);
      if (iVar2 == 0) {
        *(short *)piVar3 = 0;
        param_2[1] = *(int *)(param_1 + 0x10);
        return 0;
      }
    }
    if (iVar2 == 0) {
      piVar3 = (int *)((int)piVar3 - 2);
    }
    *(short *)piVar3 = 0;
    param_2[1] = *(int *)(param_1 + 0x10);
    return 0;
  }
  *(undefined2 *)(param_2 + 2) = 0;
  param_2[1] = *(int *)(param_1 + 0x10);
  return 0;
}

/* ref: FUN_00c87c80 */
GEN_FRAME uint GEN_STDCALL F_00c87c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87c80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  puVar1 = (undefined4 *)F_004069f0(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = param_1 - 3;
    *puVar1 = (*(undefined * PTR32 (*)[8])REFP(0x1128a74));
    puVar1[1] = 0;
    puVar1[4] = 1;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)puVar1[2] + 0x10))((int *)puVar1[2] GEN_EDX_ARG);
    puVar1[3] = uVar2;
  }
  *param_2 = puVar1;
  return (-(uint)(puVar1 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: FUN_00c87d00 */
GEN_FRAME uint GEN_THISCALL F_00c87d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc87d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00c879b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,1);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return (uint)this;
}

/* ref: FUN_00c87d40 */
GEN_FRAME uint GEN_THISCALL F_00c87d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc87d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00c879b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,0);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined2 *)((int)this + 0xa0) = 0;
  F_00c48350((undefined *)((int)this + 0xa8),0,0x30);
  return (uint)this;
}

/* ref: FUN_00c87d90 */
GEN_FRAME uint GEN_THISCALL F_00c87d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc87d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  HANDLE pvVar1;
  uint uVar2;
  
  F_00c879b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,1);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1128b60));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[18])REFP(0x1128b18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128b00));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[4])REFP(0x1128af0));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,1,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0xbc) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = F_00c89410();
    if ((int)uVar2 < 0) {
      *param_4 = uVar2;
    }
    return (uint)this;
  }
  *(undefined1 *)((int)this + 0x25) = 1;
  return (uint)this;
}

/* ref: FUN_00c87e60 */
GEN_FRAME uint GEN_THISCALL F_00c87e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc87e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE param_1 = (HANDLE)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  uint uVar2;
  GEN_LPANY lpTargetHandle;
  BOOL BVar3;
  DWORD dwOptions;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xa4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0xc4) == 0) {
    dwOptions = 0;
    BVar3 = 0;
    DVar1 = 2;
    lpTargetHandle = (GEN_LPANY)((int)this + 0xc0);
    hTargetProcessHandle = gen_imp_GetCurrentProcess();
    hSourceProcessHandle = gen_imp_GetCurrentProcess();
    BVar3 = gen_imp_DuplicateHandle(hSourceProcessHandle,param_1,hTargetProcessHandle,lpTargetHandle,DVar1,
                            BVar3,dwOptions);
    if (BVar3 == 0) {
      uVar2 = F_00c89410();
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
    *(undefined4 *)((int)this + 0xc4) = 1;
    DVar1 = gen_imp_GetCurrentThreadId();
    *(DWORD *)((int)this + 200) = DVar1;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      F_00c866c0(this GEN_EDX_ARG);
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  DVar1 = gen_imp_GetCurrentThreadId();
  if (*(DWORD *)((int)this + 200) == DVar1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040293;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040294;
}

/* ref: FUN_00c87f30 */
GEN_FRAME uint GEN_THISCALL F_00c87f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc87f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x18) == 0) {
    return 0x80040209;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x18);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,&REFG(undefined, 0x1096114),&(*(int * PTR32 *)(gen_frame + 0x8)));
  if (((*(int * PTR32 *)(gen_frame + 0x8)) == (int *)0x0) ||
     (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1), uVar2 != 0)) {
    if ((*(int *)((int)this + 0xd4) == 0) || (*(int *)((int)this + 0xd0) == 0)) {
      uVar2 = 0x80004005;
    }
    else {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd4) + 0xc))))
                        (*(int * PTR32 *)((int)this + 0xd4) GEN_EDX_ARG,(int)this + 0xc,0,param_1,0,
                         *(int *)((int)this + 0xd0),2);
    }
  }
  else {
    uVar2 = F_00c869b0(this GEN_EDX_ARG,param_1);
    if (-1 < (int)uVar2) {
      if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      }
      return 0;
    }
  }
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00c88000 */
GEN_FRAME uint GEN_STDCALL F_00c88000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88000u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  if (param_2 == 0) {
    return 0x80004003;
  }
  if (param_1 != (int *)0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(int *)(param_2 + 0x1c) = param_1[7];
  param_1[7] = param_2;
  bVar2 = true;
  param_1[8] = param_1[8] + 1;
  if ((param_1[10] != 0) && (param_1[10] != 0)) {
    gen_imp_ReleaseSemaphore((HANDLE)param_1[9],param_1[10],(LPLONG)0x0);
    param_1[10] = 0;
  }
  if ((param_1[0x12] == 0) || (param_1[8] != param_1[0xc])) {
    bVar2 = false;
  }
  else {
    ((code *)*(gen_code32 *)(param_1[-3] + 0x10))(param_1 - 3);
    param_1[0x12] = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  if (bVar2) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00c880c0 */
GEN_FRAME uint GEN_THISCALL F_00c880c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc880c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a4;
  F_00c83b90(this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined8 *)((int)this + 0x20) = *param_4;
  *(undefined8 *)((int)this + 0x28) = param_4[1];
  *(undefined4 *)((int)this + 0x30) = param_3;
  return (uint)this;
}

/* ref: FUN_00c88110 */
GEN_FRAME uint GEN_THISCALL F_00c88110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc88110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a4;
  undefined8 uVar1;
  
  F_00c83b90(this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined8 *)((int)this + 0x28) = *param_4;
  uVar1 = param_4[1];
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined8 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x38) = param_3;
  *(undefined4 *)((int)this + 0x48) = 1;
  return (uint)this;
}

/* ref: FUN_00c88170 */
GEN_FRAME uint GEN_STDCALL F_00c88170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88170u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  this = (undefined *)F_004069f0(0x30);
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c876e0(this GEN_EDX_ARG,param_1 - 0xc,0);
  }
  *param_2 = uVar1;
  return (-(uint)(uVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: FUN_00c881c0 */
GEN_FRAME uint GEN_THISCALL F_00c881c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc881c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[22])REFP(0x1128a98));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0x10) = param_5;
  *(int *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  if (param_5 < 0) {
    *param_3 = 0x8004020d;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c88210 */
GEN_NOFRAME uint GEN_THISCALL F_00c88210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc88210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE hHandle;
  uint uVar1;
  DWORD DVar2;
  
  hHandle = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  if (hHandle == (HANDLE)0x0) {
    uVar1 = F_00c89410();
    return uVar1;
  }
  uVar1 = F_00c87e60(this GEN_EDX_ARG,hHandle);
  if ((int)uVar1 < 0) {
    gen_imp_CloseHandle(hHandle);
    return uVar1;
  }
  DVar2 = gen_imp_WaitForSingleObject(hHandle,0xffffffff);
  if (DVar2 == 0) {
    gen_imp_CloseHandle(hHandle);
    return 0;
  }
  if (DVar2 != 0xffffffff) {
    gen_imp_CloseHandle(hHandle);
    return 0x8000ffff;
  }
  uVar1 = F_00c89410();
  gen_imp_CloseHandle(hHandle);
  return (-1 < (int)uVar1) - 1 & uVar1;
}

/* ref: FUN_00c882b0 */
GEN_FRAME uint GEN_THISCALL F_00c882b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
{
  GEN_ENTER(0xc882b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  double param_7 = (double)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00c8e500(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_2,0);
  uVar1 = F_00c87f30(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  if ((int)uVar1 < 0) {
    F_00c8e460(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x58))
                    (param_1 GEN_EDX_ARG,param_3,param_4,param_5,param_6,(int)(ulonglong)gen_d2bits(param_7),
                     (int)((ulonglong)gen_d2bits(param_7) >> 0x20));
  F_00c8e460(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)uVar1 < 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c88360 */
GEN_FRAME uint GEN_THISCALL F_00c88360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc88360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  HANDLE pvVar1;
  
  F_00c83b90(this GEN_EDX_FWD,param_1,param_2);
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
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
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = param_5;
  if (param_4 != 0) {
    pvVar1 = gen_imp_CreateSemaphoreA((GEN_LPANY)0x0,0,0x7fffffff,(LPCSTR)0x0);
    *(HANDLE *)((int)this + 0x30) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      *param_3 = 0x8007000e;
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00c883f0 */
GEN_FRAME uint GEN_THISCALL F_00c883f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc883f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  HANDLE pvVar1;
  
  F_00c83b90(this GEN_EDX_FWD,param_1,param_2);
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
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
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 1;
  pvVar1 = gen_imp_CreateSemaphoreA((GEN_LPANY)0x0,0,0x7fffffff,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x30) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    *param_3 = 0x8007000e;
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1128bf4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[11])REFP(0x1128bc8));
  return (uint)this;
}

/* ref: FUN_00c88480 */
GEN_FRAME uint GEN_THISCALL F_00c88480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc88480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar6;
  
  if (this == (undefined *)0x0) {
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)0x0;
  }
  else {
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)((int)this + 0x10);
  }
  lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
  gen_imp_EnterCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  if (((*(int *)((int)this + 0x38) < 1) || (*(int *)((int)this + 0x40) < 1)) ||
     (*(int *)((int)this + 0x44) < 1)) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040212;
  }
  if (*(int *)((int)this + 0x4c) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_00c87190(this GEN_EDX_ARG);
  }
  iVar1 = *(int *)((int)this + 0x40);
  if (((iVar1 < 0) || (*(int *)((int)this + 0x48) < 0)) ||
     (lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)), *(int *)((int)this + 0x38) < 0)) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x8007000e;
  }
  iVar6 = *(int *)((int)this + 0x48) + iVar1;
  if (iVar1 <= iVar6) {
    iVar1 = *(int *)((int)this + 0x44);
    iVar5 = iVar6;
    if (((1 < iVar1) && (iVar6 % iVar1 != 0)) &&
       (iVar5 = (iVar1 - iVar6 % iVar1) + iVar6, iVar5 < iVar6)) {
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
      return 0x8007000e;
    }
    lVar2 = (longlong)*(int *)((int)this + 0x38) * (longlong)iVar5;
    if (0x7fffffff < lVar2) {
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
      return 0x8007000e;
    }
    pvVar3 = gen_imp_VirtualAlloc((LPVOID)0x0,(SIZE_T)lVar2,0x1000,4);
    *(LPVOID *)((int)this + 0x60) = pvVar3;
    if (pvVar3 != (LPVOID)0x0) {
      if (*(int *)((int)this + 0x3c) < *(int *)((int)this + 0x38)) {
        do {
          this_00 = (undefined *)F_004069f0(0x48);
          if ((this_00 == (undefined *)0x0) ||
             (uVar4 = F_00c881c0(this_00 GEN_EDX_ARG,0,this,((undefined1 *)(gen_frame + 0x4)),*(int *)((int)this + 0x48) + (int)pvVar3,
                                   *(undefined4 *)((int)this + 0x40)), uVar4 == 0))
          goto LAB_00c884f4;
          *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)((int)this + 0x28);
          *(uint *)((int)this + 0x28) = uVar4;
          *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
          *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + 1;
          pvVar3 = (LPVOID)((int)pvVar3 + iVar5);
        } while (*(int *)((int)this + 0x3c) < *(int *)((int)this + 0x38));
      }
      *(undefined4 *)((int)this + 0x4c) = 0;
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
      return 0;
    }
  }
LAB_00c884f4: ;
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  return 0x8007000e;
}

/* ref: FUN_00c88630 */
GEN_FRAME uint GEN_STDCALL F_00c88630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88630u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  HANDLE param_3 = (HANDLE)gen_a2;
  BOOL BVar1;
  uint uVar2;
  undefined * this;
  
  if ((param_2 & 0xfffffffe) != 0) {
    return 0x80070057;
  }
  if (((param_2 & 1) != 0) && (param_3 != (HANDLE)0x0)) {
    BVar1 = gen_imp_ResetEvent(param_3);
    if (BVar1 == 0) {
      uVar2 = F_00c89410();
      return uVar2;
    }
  }
  if ((param_2 == 0) && (param_3 != (HANDLE)0x0)) {
    return 0x80070057;
  }
  this = (undefined *)(param_1 - 0xa0);
  if ((param_2 & 1) == 0) {
    uVar2 = F_00c86700(this GEN_EDX_ARG);
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  if (param_3 == (HANDLE)0x0) {
    uVar2 = F_00c88210(this GEN_EDX_ARG);
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  uVar2 = F_00c87e60(this GEN_EDX_ARG,param_3);
  return uVar2 & (-1 < (int)uVar2) - 1;
}

/* ref: FUN_00c886e0 */
GEN_FRAME uint F_00c886e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc886e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_004069f0(100);
  if (this != (undefined *)0x0) {
    uVar1 = F_00c883f0(this GEN_EDX_ARG,0,param_1,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c88770 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c88770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc88770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34) GEN_EDX_ARG);
  F_00c83a60();
  return;
}

/* ref: FUN_00c887c0 */
GEN_FRAME uint GEN_STDCALL F_00c887c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc887c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 - 8))))
                    (*(undefined4 * PTR32 *)(param_1 - 8) GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c887e0 */
GEN_FRAME uint GEN_STDCALL F_00c887e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc887e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 8) + 4))))(*(int * PTR32 *)(param_1 - 8) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c88800 */
GEN_FRAME uint GEN_STDCALL F_00c88800(unsigned int gen_a0)
{
  GEN_ENTER(0xc88800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 8) + 8))))(*(int * PTR32 *)(param_1 - 8) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c88830 */
GEN_FRAME uint GEN_STDCALL F_00c88830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88830u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 - 8))))
                    (*(undefined4 * PTR32 *)(param_1 - 8) GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c88850 */
GEN_FRAME uint GEN_STDCALL F_00c88850(unsigned int gen_a0)
{
  GEN_ENTER(0xc88850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 8) + 4))))(*(int * PTR32 *)(param_1 - 8) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c88870 */
GEN_FRAME uint GEN_STDCALL F_00c88870(unsigned int gen_a0)
{
  GEN_ENTER(0xc88870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 - 8) + 8))))(*(int * PTR32 *)(param_1 - 8) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c88890 */
GEN_FRAME uint GEN_THISCALL F_00c88890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88890u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00c8d760(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00c888b0 */
GEN_FRAME uint GEN_THISCALL F_00c888b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc888b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d8e0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c888c0 */
GEN_FRAME uint GEN_THISCALL F_00c888c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc888c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d9b0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c888d0 */
GEN_FRAME uint GEN_THISCALL F_00c888d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc888d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d840(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c88930 */
GEN_NOFRAME uint GEN_STDCALL F_00c88930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c887c0(param_1 - 4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c88940 */
GEN_NOFRAME uint GEN_STDCALL F_00c88940(unsigned int gen_a0)
{
  GEN_ENTER(0xc88940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c88800(param_1 - 0x94);
  return uVar1;
}

/* ref: FUN_00c88950 */
GEN_NOFRAME uint GEN_STDCALL F_00c88950(unsigned int gen_a0)
{
  GEN_ENTER(0xc88950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c887e0(param_1 - 0x94);
  return uVar1;
}

/* ref: FUN_00c88960 */
GEN_NOFRAME uint GEN_STDCALL F_00c88960(unsigned int gen_a0)
{
  GEN_ENTER(0xc88960u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c88800(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c88970 */
GEN_NOFRAME uint GEN_STDCALL F_00c88970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88970u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c887c0(param_1 - 0x94,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c88980 */
GEN_NOFRAME uint GEN_STDCALL F_00c88980(unsigned int gen_a0)
{
  GEN_ENTER(0xc88980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c887e0(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c88990 */
GEN_FRAME uint GEN_STDCALL F_00c88990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88990u, gen_a0, gen_a1, gen_a2, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  short * psVar2;
  uint uVar3;
  short * psVar4;
  uint uVar5;
  
  uVar3 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar3 = 0x80070057;
  }
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar3 = 0;
  psVar4 = param_1;
  if (param_2 != 0) {
    psVar2 = param_1;
    uVar5 = param_2;
    while ((psVar4 = psVar2, (0x7ffffffe - param_2) + uVar5 != 0 &&
           (sVar1 = *((short *)GEN_TOP(((param_3 - (int)param_1) + (int)psVar4))), sVar1 != 0))) {
      *psVar4 = sVar1;
      uVar5 = uVar5 - 1;
      psVar2 = psVar4 + 1;
      if (uVar5 == 0) {
        *psVar4 = 0;
        return 0x8007007a;
      }
    }
    if (uVar5 != 0) goto LAB_00c88a00;
  }
  psVar4 = psVar4 - 1;
  uVar3 = 0x8007007a;
LAB_00c88a00: ;
  *psVar4 = 0;
  return uVar3;
}

/* ref: FUN_00c88a10 */
GEN_FRAME uint GEN_STDCALL F_00c88a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88a10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((param_1 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = F_00c83e00(param_2,param_1,param_3);
    if (-1 < (int)uVar1) {
      return uVar1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c88a70 */
GEN_FRAME uint GEN_THISCALL F_00c88a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a54));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
  F_00c8df10((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88ab0 */
GEN_FRAME uint GEN_THISCALL F_00c88ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a74));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88ae0 */
GEN_FRAME uint GEN_THISCALL F_00c88ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[22])REFP(0x1128a98));
  if (*(int *)((int)this + 0x3c) != 0) {
    F_00c8e650(*(int *)((int)this + 0x3c));
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88b20 */
GEN_FRAME uint GEN_THISCALL F_00c88b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c86550(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88b60 */
GEN_FRAME uint GEN_THISCALL F_00c88b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1128bf4));
  *(undefined4 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[11])REFP(0x1128bc8));
  F_00c86f50((undefined4 *)((int)this + 0xc));
  F_00c87190(this GEN_EDX_ARG);
  if (*(HANDLE *)((int)this + 0x30) != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x30));
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x58);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  F_00c83a60();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88bd0 */
GEN_FRAME uint F_00c88bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc88bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1;
  if (0 < (int)param_1) {
    uVar1 = param_1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

/* ref: FUN_00c88bf0 */
GEN_FRAME uint GEN_THISCALL F_00c88bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD param_1 = (DWORD)gen_a1;
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*(HANDLE *)this,param_1);
  return (uint)(DVar1 == 0);
}

/* ref: FUN_00c88ca0 */
GEN_NOFRAME uint F_00c88ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88ca0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  short * in_edx = (short *)(uintptr_t)gen_a1;
  int * in_edi = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = in_ecx;
  do {
    if (iVar2 == 0) {
LAB_00c88cc1: ;
      uVar1 = 0x80070057;
LAB_00c88cc6: ;
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
      if (iVar2 != 0) goto LAB_00c88cc6;
      goto LAB_00c88cc1;
    }
    in_edx = in_edx + 1;
    iVar2 = iVar2 - 1;
  } while( true );
}

/* ref: FUN_00c88ce0 */
GEN_FRAME uint GEN_THISCALL F_00c88ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88ce0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if ((in_ecx == 0) || (param_2 < in_ecx)) {
    uVar1 = 0x80070057;
  }
  return uVar1;
}

/* ref: FUN_00c88d00 */
GEN_FRAME uint F_00c88d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc88d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_eax = (undefined *)(uintptr_t)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  char * in_edi = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint _Count;
  
  _Count = param_4 - 1;
  uVar2 = 0;
  uVar1 = F_01051c9c(in_edi,_Count,in_ecx,in_eax);
  if (((int)uVar1 < 0) || (_Count < uVar1)) {
    in_edi[_Count] = '\0';
    uVar2 = 0x8007007a;
    uVar1 = _Count;
  }
  else if (uVar1 == _Count) {
    in_edi[_Count] = '\0';
    uVar1 = _Count;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00c88d50 */
GEN_FRAME uint GEN_THISCALL F_00c88d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  BOOL param_1 = (BOOL)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_2 != (int *)0x0)) && (-1 < *param_2)) {
    *param_2 = -0x7ff8fff2;
  }
  return (uint)this;
}

/* ref: FUN_00c88d90 */
GEN_FRAME uint GEN_THISCALL F_00c88d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != (int *)0x0)) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  return (uint)this;
}

/* ref: FUN_00c88dd0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c88dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc88dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(HANDLE *)this != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)this);
  }
  return 0;
}

/* ref: FUN_00c88de0 */
GEN_FRAME uint GEN_THISCALL F_00c88de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != (int *)0x0)) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  return (uint)this;
}

/* ref: FUN_00c88e20 */
GEN_FRAME uint GEN_THISCALL F_00c88e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  DWORD DVar2;
  uint dwMilliseconds;
  
  uVar1 = param_1;
  dwMilliseconds = param_1;
  if (param_1 != 0xffffffff) {
    DVar2 = gen_imp_timeGetTime();
    param_1 = DVar2;
  }
  while( true ) {
    DVar2 = gen_imp_MsgWaitForMultipleObjects(1,this,0,dwMilliseconds,0x40);
    if (DVar2 != 1) break;
    gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0x0)),(HWND)0x0,0,0,0);
    if (dwMilliseconds != 0xffffffff) {
      DVar2 = gen_imp_timeGetTime();
      if (DVar2 - param_1 < uVar1) {
        dwMilliseconds = uVar1 - (DVar2 - param_1);
      }
      else {
        dwMilliseconds = 0;
      }
    }
  }
  return (uint)(DVar2 == 0);
}

/* ref: FUN_00c88ea0 */
GEN_FRAME uint GEN_THISCALL F_00c88ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA(0,1,0,0);
  *(HANDLE *)((int)this + 4) = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != (int *)0x0)) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)((int)this + 8) = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != (int *)0x0)) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  gen_imp_InitializeCriticalSection((int)this + 0x18);
  gen_imp_InitializeCriticalSection((int)this + 0x30);
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00c88f20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c88f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc88f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE hHandle;
  
  hHandle = (HANDLE)gen_imp_InterlockedExchange((LONG *)((int)this + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    gen_imp_WaitForSingleObject(hHandle,0xffffffff);
    gen_imp_CloseHandle(hHandle);
  }
  gen_imp_DeleteCriticalSection((int)this + 0x30);
  gen_imp_DeleteCriticalSection((int)this + 0x18);
  if (*(int *)((int)this + 8) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 8));
  }
  if (*(int *)((int)this + 4) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00c88f80 */
GEN_FRAME uint GEN_THISCALL F_00c88f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc88f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x14) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  *(undefined4 *)((int)this + 0xc) = param_1;
  gen_imp_SetEvent(*(HANDLE *)((int)this + 4));
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 8),0xffffffff);
  uVar1 = *(uint *)((int)this + 0x10);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

/* ref: FUN_00c88fe0 */
GEN_NOFRAME uint GEN_THISCALL F_00c88fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc88fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 4),0xffffffff);
  return *(uint *)((int)this + 0xc);
}

/* ref: FUN_00c89000 */
GEN_FRAME uint GEN_THISCALL F_00c89000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc89000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 4),0);
  if (DVar1 != 0) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0xc);
  }
  return 1;
}

/* ref: FUN_00c89040 */
GEN_FRAME unsigned int GEN_THISCALL F_00c89040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc89040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x10) = param_1;
  gen_imp_ResetEvent(*(HANDLE *)((int)this + 4));
  return (uint)(gen_imp_SetEvent(*(HANDLE *)((int)this + 8)));
}

/* ref: FUN_00c890b0 */
GEN_FRAME uint GEN_STDCALL F_00c890b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc890b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  gen_imp_CoInitialize((LPVOID)0x0);
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  do {
    ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
  } while (uVar1 == 0);
  gen_imp_CoUninitialize();
  return uVar1;
}

/* ref: FUN_00c89120 */
GEN_FRAME uint GEN_STDCALL F_00c89120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc89120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined1 * puVar3;
  undefined4 * puVar4;
  undefined1 * puVar5;
  undefined4 * puVar6;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)((int)param_2 + param_3))) {
    puVar3 = (undefined1 *)((int)param_2 + param_3);
    puVar5 = (undefined1 *)((int)param_1 + param_3);
    uVar1 = param_3;
    while( true ) {
      puVar5 = puVar5 - 1;
      puVar3 = puVar3 - 1;
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      *puVar5 = *puVar3;
    }
    return (uint)param_1;
  }
  uVar2 = param_3 & 3;
  puVar4 = param_2;
  puVar6 = param_1;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (uVar2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00c89170 */
GEN_FRAME uint F_00c89170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc89170u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint param_7 = (uint)gen_a6;
  if ((param_7 <= (*(int *)&gen_a5) + param_7) && ((*(int *)&gen_a5) + param_7 <= param_5)) {
    if ((param_7 <= (*(int *)&gen_a2) + param_7) && ((*(int *)&gen_a2) + param_7 <= param_2)) {
      F_00c89120(param_1 + (*(int *)&gen_a2),param_4 + (*(int *)&gen_a5),param_7);
      return 0;
    }
  }
  return 0x80070057;
}

/* ref: FUN_00c891c0 */
GEN_FRAME uint GEN_STDCALL F_00c891c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc891c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  BSTR pOVar1;
  
  pOVar1 = gen_imp_SysAllocString(param_2);
  *param_1 = pOVar1;
  return (-(uint)(pOVar1 != (BSTR)0x0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: FUN_00c891f0 */
GEN_FRAME uint GEN_STDCALL F_00c891f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc891f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((BSTR)*param_1 == (BSTR)0x0) {
    return 1;
  }
  gen_imp_SysFreeString((BSTR)*param_1);
  return 0;
}

/* ref: FUN_00c89220 */
GEN_FRAME uint GEN_STDCALL F_00c89220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc89220u, gen_a0, gen_a1, gen_a2, gen_a3);
  HANDLE param_1 = (HANDLE)gen_a0;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  int iVar2;
  HANDLE pvVar3;
  uint uVar4;
  DWORD DVar5;
  UINT UVar6;
  uint dwMilliseconds;
  WPARAM wParam;
  LPARAM lParam;
  
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(HANDLE *)(gen_frame + 0x28)) = param_1;
  (*(int *)(gen_frame + 0x2c)) = param_5;
  if (((*(uint *)&gen_a1) != 0xffffffff) && ((*(uint *)&gen_a1) != 0)) {
    param_1 = (HANDLE)gen_imp_GetTickCount();
  }
  uVar4 = (param_5 != 0) + 1;
  (*(uint *)(gen_frame + 0x34)) = uVar4;
  uVar1 = gen_imp_WaitForMultipleObjects(uVar4,&(*(HANDLE *)(gen_frame + 0x28)),0,0);
  if (uVar4 <= uVar1) {
    do {
      dwMilliseconds = (*(uint *)&gen_a1);
      if (10 < (*(uint *)&gen_a1)) {
        dwMilliseconds = 10;
      }
      uVar1 = gen_imp_MsgWaitForMultipleObjects(uVar4,&(*(HANDLE *)(gen_frame + 0x28)),0,dwMilliseconds,(uint)(param_3 != 0) * 8 + 0x40);
      if ((uVar1 != uVar4) && ((uVar1 != 0x102 || (dwMilliseconds == (*(uint *)&gen_a1))))) break;
      if (param_3 != 0) {
        iVar2 = gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0xc)),param_3,param_4,param_4,1);
        while (iVar2 != 0) {
          gen_imp_DispatchMessageA(((undefined1 *)(gen_frame + 0xc)));
          iVar2 = gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0xc)),param_3,param_4,param_4,1);
        }
      }
      gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0xc)),0,0,0,0);
      if (((*(uint *)&gen_a1) != 0xffffffff) && ((*(uint *)&gen_a1) != 0)) {
        pvVar3 = (HANDLE)gen_imp_GetTickCount();
        if ((*(uint *)&gen_a1) < (uint)((int)pvVar3 - (int)param_1)) {
          (*(uint *)&gen_a1) = 0;
          param_1 = pvVar3;
        }
        else {
          (*(uint *)&gen_a1) = (*(uint *)&gen_a1) - ((int)pvVar3 - (int)param_1);
          param_1 = pvVar3;
        }
      }
      if ((*(int *)(gen_frame + 0x38)) == 0) {
        pvVar3 = gen_imp_GetCurrentThread();
        uVar4 = gen_imp_GetThreadPriority(pvVar3);
        (*(uint *)(gen_frame + 0x30)) = uVar4;
        if (uVar4 < 2) {
          iVar2 = 2;
          pvVar3 = gen_imp_GetCurrentThread();
          gen_imp_SetThreadPriority(pvVar3,iVar2);
        }
        (*(int *)(gen_frame + 0x38)) = 1;
      }
      uVar4 = (*(uint *)(gen_frame + 0x34));
      uVar1 = gen_imp_WaitForMultipleObjects((*(uint *)(gen_frame + 0x34)),&(*(HANDLE *)(gen_frame + 0x28)),0,0);
    } while (uVar4 <= uVar1);
    if ((*(int *)(gen_frame + 0x38)) != 0) {
      uVar4 = (*(uint *)(gen_frame + 0x30));
      pvVar3 = gen_imp_GetCurrentThread();
      gen_imp_SetThreadPriority(pvVar3,uVar4);
      DVar5 = gen_imp_GetQueueStatus(8);
      if ((DVar5 >> 0x10 & 8) != 0) {
        if (REFG(undefined4, 0x15d764c) != 0) goto LAB_00c893d1;
        REFG(undefined4, 0x15d764c) = gen_imp_RegisterWindowMessageA("AMUnblock");
        UVar6 = REFG(undefined4, 0x15d764c);
        while (UVar6 != 0) {
LAB_00c893d1: ;
          UVar6 = gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0xc)),(HWND)0xffffffff,REFG(undefined4, 0x15d764c),REFG(undefined4, 0x15d764c),1);
        }
        lParam = 0;
        wParam = 0;
        UVar6 = REFG(undefined4, 0x15d764c);
        DVar5 = gen_imp_GetCurrentThreadId();
        gen_imp_PostThreadMessageA(DVar5,UVar6,wParam,lParam);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00c89410 */
GEN_NOFRAME uint F_00c89410(void)
{
  GEN_ENTER(0xc89410u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = gen_imp_GetLastError();
  if (uVar1 == 0) {
    uVar1 = 0x80004005;
  }
  else if (0 < (int)uVar1) {
    return uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

/* ref: FUN_00c89430 */
GEN_FRAME uint F_00c89430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89430u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  *param_1 = (int)param_2;
  return (uint)param_2;
}

/* ref: FUN_00c89460 */
GEN_FRAME byte F_00c89460(void)
{
  GEN_ENTER(0xc89460u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  BOOL BVar1;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  ((byte *)(gen_frame + 0x4))[0] = 0x94;
  ((byte *)(gen_frame + 0x4))[1] = 0;
  ((byte *)(gen_frame + 0x4))[2] = 0;
  ((byte *)(gen_frame + 0x4))[3] = 0;
  BVar1 = gen_imp_GetVersionExA((GEN_LPANY)((byte *)(gen_frame + 0x4)));
  if ((BVar1 != 0) && ((5 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) || (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) == 5 && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0)))))) {
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c894d0 */
GEN_FRAME uint GEN_STDCALL F_00c894d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc894d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x80004005;
  hModule = gen_imp_GetModuleHandleA("ole32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = gen_imp_GetProcAddress(hModule,"CoInitializeEx");
    if (pFVar1 != (FARPROC)0x0) {
      uVar3 = ((code *)pFVar1)(0,4);
    }
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG);
  if (-1 < (int)uVar3) {
    gen_imp_CoUninitialize();
  }
  return uVar2;
}

/* ref: FUN_00c89520 */
GEN_FRAME uint GEN_THISCALL F_00c89520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc89520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x14) == 0) {
    pvVar1 = gen_imp_CreateThread((GEN_LPANY)0x0,0,((code *)REFP(0xc894d0)),this,0,(LPDWORD)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(HANDLE *)((int)this + 0x14) = pvVar1;
    if (pvVar1 != (HANDLE)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c89580 */
GEN_FRAME unsigned int GEN_THISCALL F_00c89580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc89580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(HANDLE *)((int)this + 8) != (HANDLE)0x0) {
    gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 8),0xffffffff);
    gen_imp_CloseHandle(*(undefined4 *)((int)this + 8));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0xc);
  while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
    uVar1 = F_00c8d7f0(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_00406ad0(uVar1);
  }
  F_00c8d780((undefined *)((int)this + 0xc) GEN_EDX_ARG);
  if (*(int *)((int)this + 0x3c) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 0x3c));
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x24));
  F_00c8df10((undefined *)((int)this + 0xc) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00c89650 */
GEN_FRAME uint GEN_THISCALL F_00c89650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc89650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 * puVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x24);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  puVar1 = (undefined8 *)F_00c8df70((undefined *)((int)this + 0xc) GEN_EDX_ARG);
  while (puVar1 == (undefined8 *)0x0) {
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x3c),0xffffffff);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    puVar1 = (undefined8 *)F_00c8df70((undefined *)((int)this + 0xc) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  uVar2 = F_00406ad0(puVar1);
  return uVar2;
}

/* ref: FUN_00c896d0 */
GEN_FRAME uint GEN_STDCALL F_00c896d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc896d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPWSTR param_2 = (LPWSTR)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = F_00c89890(((CHAR *)(gen_frame + 0xc)),0xc,&REFG(undefined, 0x1128c30),param_1);
  if ((int)uVar1 < 0) {
    *param_2 = L'\0';
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = gen_imp_MultiByteToWideChar(0,0,((CHAR *)(gen_frame + 0xc)),-1,param_2,0xc);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c89740 */
GEN_FRAME uint GEN_STDCALL F_00c89740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar2 = 0x80070057;
  }
  else {
    uVar2 = F_00c88ca0(50000,(*(int *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar2) {
      iVar4 = (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 2;
      goto LAB_00c8978a;
    }
  }
  iVar4 = 0;
LAB_00c8978a: ;
  if (-1 < (int)uVar2) {
    pvVar3 = gen_imp_CoTaskMemAlloc(iVar4 + 2U);
    *puVar1 = pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    F_00c46aa0(pvVar3,(*(int *)&gen_args[0]),iVar4 + 2U);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c897c0 */
GEN_FRAME uint F_00c897c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc897c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  UINT param_1 = (UINT)gen_a0;
  UINT param_2 = (UINT)gen_a1;
  GEN_LPANY param_3 = (GEN_LPANY)gen_a2;
  DWORD_PTR param_4 = (DWORD_PTR)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  BOOL BVar1;
  uint MVar2;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  if (REFG(char, 0x15d7651) == '\0') {
    ((byte *)(gen_frame + 0x4))[0] = 0x94;
    ((byte *)(gen_frame + 0x4))[1] = 0;
    ((byte *)(gen_frame + 0x4))[2] = 0;
    ((byte *)(gen_frame + 0x4))[3] = 0;
    BVar1 = gen_imp_GetVersionExA((GEN_LPANY)((byte *)(gen_frame + 0x4)));
    if ((BVar1 == 0) || (((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) < 6 && (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) != 5 || ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) == 0))))))
    {
      REFG(char, 0x15d7650) = '\0';
    }
    else {
      REFG(char, 0x15d7650) = '\x01';
    }
    REFG(char, 0x15d7651) = '\x01';
  }
  if (REFG(char, 0x15d7650) != '\0') {
    param_5 = param_5 | 0x100;
  }
  MVar2 = gen_imp_timeSetEvent(param_1,param_2,param_3,param_4,param_5);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return MVar2;
}

/* ref: FUN_00c89870 */
GEN_FRAME uint GEN_STDCALL F_00c89870(unsigned int gen_a0)
{
  GEN_ENTER(0xc89870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c8d7f0(param_1);
  return uVar1;
}

/* ref: FUN_00c89890 */
GEN_FRAME uint F_00c89890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc89890u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint _Count;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
  }
  if (-1 < (int)uVar1) {
    _Count = param_2 - 1;
    uVar1 = 0;
    uVar2 = F_01051c9c(param_1,_Count,param_3,((undefined *)&gen_args[3]));
    if (((int)uVar2 < 0) || (_Count < uVar2)) {
      param_1[_Count] = '\0';
      uVar1 = 0x8007007a;
    }
    else if (uVar2 == _Count) {
      param_1[_Count] = '\0';
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00c898f0 */
GEN_FRAME uint GEN_STDCALL F_00c898f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc898f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[1]) >> 1;
  (*(uint *)&gen_args[1]) = 0;
  if (((*(int *)&gen_args[0]) == 0) || (0x7fffffff < uVar1)) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = F_00c88ca0(uVar1,(*(int *)&gen_args[0]),&(*(uint *)&gen_args[1]));
  }
  if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
    if (-1 < (int)uVar1) {
      *(*(int * PTR32 *)&gen_args[2]) = (*(uint *)&gen_args[1]) * 2;
      return uVar1;
    }
    *(*(int * PTR32 *)&gen_args[2]) = 0;
  }
  return uVar1;
}

/* ref: FUN_00c89940 */
GEN_FRAME uint F_00c89940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_1,param_2);
  return (uint)(uVar1 == 0);
}

/* ref: CRefTime::CRefTime */
GEN_FRAME uint GEN_THISCALL F_00c89960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc89960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(longlong *)this = (longlong)param_1 * 10000;
  return (uint)this;
}

/* ref: FUN_00c89990 */
GEN_FRAME uint GEN_THISCALL F_00c89990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc89990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c899b0 */
GEN_FRAME uint GEN_THISCALL F_00c899b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc899b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this + uVar2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1[1] + (uint)CARRY4(uVar1,uVar2);
  return (uint)this;
}

/* ref: FUN_00c899f0 */
GEN_FRAME uint GEN_THISCALL F_00c899f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc899f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00c89a10 */
GEN_FRAME uint GEN_THISCALL F_00c89a10(unsigned int gen_a0 GEN_EDX_PARAM, double gen_a1)
{
  GEN_ENTER(0xc89a10u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  longlong * param_1 = (longlong *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  *param_1 = (longlong)(param_2 * *(double *)&REFG(double, 0x1087ef0));
  return (uint)param_1;
}

/* ref: COARefTime::operator= */
GEN_FRAME undefined * GEN_THISCALL F_00c89a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc89a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double * param_1 = (double *)(uintptr_t)gen_a1;
  *(longlong *)this = (longlong)(*param_1 * *(double *)&REFG(double, 0x1087ef0));
  return this;
}

/* ref: FUN_00c89a80 */
GEN_FRAME uint GEN_THISCALL F_00c89a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc89a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c89ab0 */
GEN_FRAME uint GEN_THISCALL F_00c89ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc89ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x1c);
  *param_1 = *(undefined4 *)((int)this + 0x18);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00c89b20 */
GEN_FRAME uint GEN_THISCALL F_00c89b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc89b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  bool bVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (param_3 != 0) {
      if (*(int *)((int)this + 100) == 0) {
        return 0;
      }
      bVar2 = CARRY4(param_1,*(uint *)((int)this + 0x68));
      param_1 = param_1 + *(uint *)((int)this + 0x68);
      param_2 = param_2 + *(int *)((int)this + 0x6c) + (uint)bVar2;
    }
    (*(undefined8 *)(gen_frame + 0x4)) = 0;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,&(*(undefined8 *)(gen_frame + 0x4)));
    if ((param_2 <= (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4)) + 4))) && ((param_2 < (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4)) + 4)) || (param_1 <= (uint)(*(undefined8 *)(gen_frame + 0x4)))))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c89ba0 */
GEN_FRAME uint GEN_STDCALL F_00c89ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c89bc0 */
GEN_FRAME uint GEN_STDCALL F_00c89bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc89bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  FARPROC pFVar2;
  uint uVar3;
  DWORD DVar4;
  
  if ((*(int * PTR32 *)&gen_args[4]) == (int *)0x0) {
    return 0x80004003;
  }
  *(*(int * PTR32 *)&gen_args[4]) = 0;
  if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
    return 0x8002802b;
  }
  if (*(*(int * PTR32 *)&gen_args[0]) == 0) {
    uVar1 = F_00c83a90();
    if ((uVar1 == 0) || (pFVar2 = gen_imp_GetProcAddress(uVar1,"LoadRegTypeLib"), pFVar2 == (FARPROC)0x0)) {
LAB_00c89c37: ;
      DVar4 = gen_imp_GetLastError();
      return DVar4 | 0x80070000;
    }
    uVar3 = ((code *)pFVar2)(&REFG(undefined, 0x1084cc8),1,0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
    if ((int)uVar3 < 0) {
      pFVar2 = gen_imp_GetProcAddress(uVar1,"LoadTypeLib");
      if (pFVar2 == (FARPROC)0x0) goto LAB_00c89c37;
      uVar1 = ((code *)pFVar2)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)&gen_args[2]));
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x18))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[0]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  *(*(int * PTR32 *)&gen_args[4]) = *(*(int * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 4))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c89ca0 */
GEN_FRAME uint GEN_STDCALL F_00c89ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc89ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  FARPROC pFVar2;
  uint uVar3;
  DWORD DVar4;
  int * piVar5;
  
  piVar5 = (int *)0x0;
  if (*param_1 == 0) {
    uVar1 = F_00c83a90();
    if ((uVar1 == 0) || (pFVar2 = gen_imp_GetProcAddress(uVar1,"LoadRegTypeLib"), pFVar2 == (FARPROC)0x0)) {
LAB_00c89d35: ;
      DVar4 = gen_imp_GetLastError();
      uVar1 = DVar4 | 0x80070000;
    }
    else {
      uVar3 = ((code *)pFVar2)(&REFG(undefined, 0x1084cc8),1,0,param_5,&(*(int * PTR32 *)(gen_frame + 0x8)));
      if ((int)uVar3 < 0) {
        pFVar2 = gen_imp_GetProcAddress(uVar1,"LoadTypeLib");
        if (pFVar2 == (FARPROC)0x0) goto LAB_00c89d35;
        uVar1 = ((code *)pFVar2)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)(gen_frame + 0x8)));
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_2,param_1);
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      if (-1 < (int)uVar1) goto LAB_00c89d26;
    }
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  else {
LAB_00c89d26: ;
    piVar5 = (int *)*param_1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 4))(piVar5 GEN_EDX_ARG);
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5 GEN_EDX_ARG,param_3,param_4,param_6);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 8))(piVar5 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c89d70 */
GEN_FRAME uint GEN_STDCALL F_00c89d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc89d70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084ce8));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 - 4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c89dc0 */
GEN_FRAME uint GEN_STDCALL F_00c89dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c89de0 */
GEN_FRAME uint GEN_STDCALL F_00c89de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc89de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084ce8),param_2,param_3,param_4);
  return uVar1;
}

