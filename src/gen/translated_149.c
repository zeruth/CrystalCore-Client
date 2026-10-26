#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: __fpclass */
int F_00c516ab(double gen_a0)
{
  GEN_ENTER(0xc516abu, 0u, 0u, 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  uint uVar1;
  int iVar2;
  
  if (((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff0) == 0x7ff0) {
    uVar1 = F_00c6ebcd((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)),(int)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x20));
    if (uVar1 == 1) {
      return 0x200;
    }
    if (uVar1 == 2) {
      iVar2 = 4;
    }
    else {
      if (uVar1 != 3) {
        return 1;
      }
      iVar2 = 2;
    }
    return iVar2;
  }
  if ((((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0xfffff00000000) != 0 || ((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) != 0)))) {
    return (-(uint)(((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (GEN_ISNAN((*(double *)&gen_args[0])) != (GEN_ISNAN((*(double *)&gen_args[0])) || (*(double *)&gen_args[0]) == 0.0)) {
    return (-(uint)(((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}

/* ref: __heap_alloc */
undefined * F_00c51748(unsigned int gen_a0)
{
  GEN_ENTER(0xc51748u, gen_a0, 0u, 0u, 0u);
  gen_size32 _Size = (gen_size32)gen_a0;
  gen_size32 dwBytes;
  LPVOID pvVar1;
  
  if (REFG(undefined4, 0x15d74c8) == (HANDLE)0x0) {
    F_00c5593d();
    F_00c5578e(0x1e);
                    
    F_00c47986(0xff);
  }
  dwBytes = _Size;
  if (_Size == 0) {
    dwBytes = 1;
  }
  pvVar1 = gen_imp_HeapAlloc(REFG(undefined4, 0x15d74c8),0,dwBytes);
  return pvVar1;
}

/* ref: _malloc */
undefined * F_00c51787(unsigned int gen_a0)
{
  GEN_ENTER(0xc51787u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint dwBytes;
  LPVOID pvVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 < 0xffffffe1) {
    do {
      if (REFG(undefined4, 0x15d74c8) == (HANDLE)0x0) {
        F_00c5593d();
        F_00c5578e(0x1e);
                    
        F_00c47986(0xff);
      }
      dwBytes = param_1;
      if (param_1 == 0) {
        dwBytes = 1;
      }
      pvVar1 = gen_imp_HeapAlloc(REFG(undefined4, 0x15d74c8),0,dwBytes);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (REFG(int, 0x15d75ac) == 0) {
        piVar3 = F_00c51f85();
        *piVar3 = 0xc;
        break;
      }
      iVar2 = F_00c5b165(param_1);
    } while (iVar2 != 0);
    piVar3 = F_00c51f85();
    *piVar3 = 0xc;
  }
  else {
    F_00c5b165(param_1);
    piVar3 = F_00c51f85();
    *piVar3 = 0xc;
  }
  return (undefined *)0x0;
}

/* ref: FID_conflict:_wprintf */
int F_00c5181b(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xc5181bu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xa8];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int * piVar1;
  uint uVar2;
  int _Flag;
  char * pcVar3;
  undefined4 uVar4;
  undefined1 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f61e0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc51827;
  if ((*(char * PTR32 *)&gen_args[0]) == (char *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = F_00c50860();
    F_00c50978(1,(undefined *)(uVar2 + 0x20));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    uVar2 = F_00c50860();
    _Flag = F_00c5df50((undefined *)(uVar2 + 0x20));
    puVar5 = ((undefined *)&gen_args[1]);
    uVar4 = 0;
    pcVar3 = (*(char * PTR32 *)&gen_args[0]);
    uVar2 = F_00c50860();
    uVar2 = F_00c56a1d(uVar2 + 0x20,pcVar3,uVar4,puVar5);
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    uVar2 = F_00c50860();
    F_00c5dfec(_Flag,(undefined *)(uVar2 + 0x20));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c518af();
    uVar2 = (*(uint *)(gen_frame + 0x0));
  }
  return uVar2;
}

/* ref: FUN_00c518af */
uint F_00c518af(void)
{
  GEN_ENTER(0xc518afu, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint extraout_EAX = 0;
  
  uVar1 = F_00c50860();
  F_00c509e6(1,(undefined *)(uVar1 + 0x20));
  return extraout_EAX;
}

/* ref: FUN_00c518c2 */
uint F_00c518c2(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc518c2u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c6f7d0(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c518db */
uint F_00c518db(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc518dbu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c6f7ed(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c518f4 */
uint F_00c518f4(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xc518f4u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c6f7ed(param_1,(undefined *)0x0,((undefined *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00c5190c */
uint F_00c5190c(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc5190cu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c6f80a(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c51925 */
uint F_00c51925(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xc51925u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c6f80a(param_1,(undefined *)0x0,((undefined *)&gen_args[1]));
  return uVar1;
}

/* ref: __set_printf_count_output */
int F_00c5193d(unsigned int gen_a0)
{
  GEN_ENTER(0xc5193du, gen_a0, 0u, 0u, 0u);
  int _Value = (int)gen_a0;
  bool bVar1;
  
  bVar1 = REFG(undefined4, 0x15d6880) == (REFG(undefined4, 0x134ab78) | 1);
  REFG(undefined4, 0x15d6880) = -(uint)(_Value != 0) & (REFG(undefined4, 0x134ab78) | 1);
  return (uint)bVar1;
}

/* ref: FUN_00c51967 */
uint F_00c51967(void)
{
  GEN_ENTER(0xc51967u, 0u, 0u, 0u, 0u);
  return (uint)(REFG(undefined4, 0x15d6880) == (REFG(undefined4, 0x134ab78) | 1));
}

/* ref: _rewind */
unsigned int F_00c5197d(unsigned int gen_a0)
{
  GEN_ENTER(0xc5197du, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x18];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  undefined * _File_00;
  int * piVar1;
  uint _FileHandle;
  undefined * puVar2;
  long lVar3;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0xc)) = 8;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f6200);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc51989;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    _FileHandle = F_00c5d07b((*(undefined * PTR32 *)&gen_args[0]));
    F_00c50937(_File_00);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    F_00c50d59(_File_00);
    (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) & 0xffffffcf;
    if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
      puVar2 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar2 = ((undefined *)GEN_TOP(((_FileHandle & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)_FileHandle >> 5])));
    }
    puVar2[4] = puVar2[4] & 0xfd;
    if ((char)(*(int *)(((char *)(_File_00) + 12))) < '\0') {
      (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) & 0xfffffffc;
    }
    lVar3 = F_00c65171(_FileHandle,0,0);
    if (lVar3 == -1) {
      (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) | 0x20;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    F_00c51a31((gen_frame + 0xc));
  }
  return 0;
}

/* ref: FUN_00c51a31 */
uint F_00c51a31(unsigned int gen_a0)
{
  GEN_ENTER(0xc51a31u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: __ftell_nolock */
long F_00c51a3b(unsigned int gen_a0)
{
  GEN_ENTER(0xc51a3bu, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  char * pcVar2;
  int * piVar3;
  uint _FileHandle;
  undefined * pFVar4;
  char * pcVar5;
  undefined * pFVar6;
  long lVar7;
  char * pcVar8;
  int iVar9;
  bool bVar10;
  int local_10;
  int local_8;
  
  pFVar6 = _File;
  if (_File == (undefined *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    return -1;
  }
  _FileHandle = F_00c5d07b(_File);
  if ((*(int *)(((char *)(_File) + 4))) < 0) {
    (*(int *)(((char *)(_File) + 4))) = 0;
  }
  local_8 = F_00c65171(_FileHandle,0,1);
  if (local_8 < 0) {
LAB_00c51b8d: ;
    lVar7 = -1;
  }
  else {
    uVar1 = (*(int *)(((char *)(_File) + 12)));
    if ((uVar1 & 0x108) == 0) {
      return local_8 - (*(int *)(((char *)(_File) + 4)));
    }
    pcVar5 = (*(char * PTR32 *)((char *)(_File)));
    pcVar8 = (*(char * PTR32 *)(((char *)(_File) + 8)));
    local_10 = (int)pcVar5 - (int)pcVar8;
    if ((uVar1 & 3) == 0) {
      if (-1 < (char)uVar1) {
        piVar3 = F_00c51f85();
        *piVar3 = 0x16;
        goto LAB_00c51b8d;
      }
    }
    else {
      pcVar2 = pcVar8;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x40))) &
          0x80) != 0) {
        for (; pcVar2 < pcVar5; pcVar2 = pcVar2 + 1) {
          if (*pcVar2 == '\n') {
            local_10 = local_10 + 1;
          }
        }
      }
    }
    if (local_8 == 0) {
      return local_10;
    }
    if (((*(int *)(((char *)(_File) + 12))) & 1) != 0) {
      if ((*(int *)(((char *)(_File) + 4))) == 0) {
        local_10 = 0;
      }
      else {
        pFVar4 = ((undefined *)GEN_TOP((pcVar5 + ((*(int *)(((char *)(_File) + 4))) - (int)pcVar8))));
        iVar9 = (_FileHandle & 0x1f) * 0x40;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)_FileHandle >> 5] + 4 + iVar9))) & 0x80) != 0) {
          lVar7 = F_00c65171(_FileHandle,0,2);
          if (lVar7 == local_8) {
            pcVar5 = (*(char * PTR32 *)(((char *)(_File) + 8)));
            pcVar8 = pcVar5 + (int)&(*(char * PTR32 *)((char *)(pFVar4)));
            _File = pFVar4;
            for (; pcVar5 < pcVar8; pcVar5 = pcVar5 + 1) {
              if (*pcVar5 == '\n') {
                _File = ((undefined *)GEN_TOP(((int)&(*(char * PTR32 *)((char *)(_File))) + 1)));
              }
            }
            bVar10 = ((*(int *)(((char *)(pFVar6) + 12))) & 0x2000U) == 0;
          }
          else {
            lVar7 = F_00c65171(_FileHandle,local_8,0);
            if (lVar7 < 0) goto LAB_00c51b8d;
            pFVar6 = (undefined *)0x200;
            if ((((undefined *)0x200 < pFVar4) || (((*(int *)(((char *)(_File) + 12))) & 8U) == 0)) ||
               (((*(int *)(((char *)(_File) + 12))) & 0x400U) != 0)) {
              pFVar6 = (undefined *)(*(int *)(((char *)(_File) + 24)));
            }
            bVar10 = (*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)_FileHandle >> 5] + 4 + iVar9))) & 4) == 0;
            _File = pFVar6;
          }
          pFVar4 = _File;
          if (!bVar10) {
            pFVar4 = ((undefined *)GEN_TOP(((int)&(*(char * PTR32 *)((char *)(_File))) + 1)));
          }
        }
        _File = pFVar4;
        local_8 = local_8 - (int)_File;
      }
    }
    lVar7 = local_10 + local_8;
  }
  return lVar7;
}

/* ref: _ftell */
long F_00c51bcf(unsigned int gen_a0)
{
  GEN_ENTER(0xc51bcfu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int * piVar1;
  long lVar2;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6220);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc51bdb;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    lVar2 = -1;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    lVar2 = F_00c51a3b((*(undefined * PTR32 *)&gen_args[0]));
    (*(long *)(gen_frame + 0x0)) = lVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c51c2a((gen_frame + 0x1c));
    lVar2 = (*(long *)(gen_frame + 0x0));
  }
  return lVar2;
}

/* ref: FUN_00c51c2a */
uint F_00c51c2a(unsigned int gen_a0)
{
  GEN_ENTER(0xc51c2au, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: FUN_00c51c40 */
float10 F_00c51c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc51c40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ulonglong uVar2;
  double * pdVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  ulonglong uVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  undefined4 uVar11;
  
  uVar2 = *(ulonglong *)&REFG(undefined, 0x1118ba0);
  if ((REFG(int, 0x15e418c) != 0) &&
     ((*(uint *)(gen_frame + 0xc)) = MXCSR, (MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    dVar10 = gen_bits2d((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x1118ba0));
    uVar4 = (uint)((ulonglong)((longlong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) << 1) >> 0x35);
    lVar9 = CONCAT44(*(undefined4 *)&REFG(undefined, 0x1118b94),*(int *)&REFG(undefined, 0x1118b90) - uVar4);
    dVar8 = gen_bits2d(((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> lVar9) << lVar9);
    if (uVar4 < 0x3ff) {
      *(*(double * PTR32 *)&gen_args[2]) = dVar10;
      return (float10)*(double *)&(*(uint *)&gen_args[0]);
    }
    if (uVar4 < 0x433) {
      *(*(double * PTR32 *)&gen_args[2]) = dVar8;
      return ((float10)GEN_TOD(gen_bits2d((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0]) - dVar8) |
                                 (ulonglong)gen_d2bits(dVar10))));
    }
    if (uVar4 != 0x7ff) {
      *(*(double * PTR32 *)&gen_args[2]) = *(double *)&(*(uint *)&gen_args[0]);
      fVar6 = (float10)0;
      if (0x7ff < (*(uint *)&gen_args[1]) >> 0x14) {
        fVar6 = -fVar6;
      }
      return fVar6;
    }
    *(*(double * PTR32 *)&gen_args[2]) = *(double *)&(*(uint *)&gen_args[0]) + *(double *)&(*(uint *)&gen_args[0]);
    uVar7 = -(ulonglong)
             (gen_bits2d((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0]) + *(double *)&(*(uint *)&gen_args[0])) &
                         *(ulonglong *)&REFG(undefined, 0x1118b80)) != *(double *)&REFG(undefined, 0x1118bb0));
    dVar8 = gen_bits2d((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) & (uVar7 | uVar2));
    if ((short)uVar7 != 0) {
      (*(double *)(gen_frame + 0x4)) = dVar8;
      F_00c6bf0e(&(*(uint *)&gen_args[0]),&(*(double * PTR32 *)&gen_args[2]),&(*(double *)(gen_frame + 0x4)),0x3ef);
      return (float10)(*(double *)(gen_frame + 0x4));
    }
    return (float10)dVar8;
  }
  uVar4 = F_00c6f59e(0,0);
  F_00c6f59e(REFG(undefined4, 0x134bdbc),0xffff);
  pdVar3 = (*(double * PTR32 *)&gen_args[2]);
  uVar11 = (undefined4)((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> 0x20);
  if (((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff0) == 0x7ff0) {
    *(*(double * PTR32 *)&gen_args[2]) = *(double *)&REFG(undefined, 0x134bc98);
    uVar5 = F_00c6ebcd((int)(ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])),uVar11);
    if (0 < (int)uVar5) {
      if ((int)uVar5 < 3) {
        *pdVar3 = *(double *)&(*(uint *)&gen_args[0]);
        dVar8 = F_00c5124d(0.0,*(double *)&(*(uint *)&gen_args[0]));
        (*(double *)(gen_frame + 0x4)) = dVar8;
        F_00c6f59e(uVar4,0xffff);
        goto LAB_00c6f988;
      }
      if (uVar5 == 3) {
        *pdVar3 = *(double *)&(*(uint *)&gen_args[0]);
        fVar6 = F_00c6f323(0x1c,*(double *)&(*(uint *)&gen_args[0]),uVar4);
        return fVar6;
      }
    }
    dVar8 = *(double *)&(*(uint *)&gen_args[0]) + REFG(double, 0x1088130);
    *pdVar3 = dVar8;
    fVar6 = F_00c6f3d9(uVar11,8,0x1c,*(double *)&(*(uint *)&gen_args[0]),dVar8,uVar4);
  }
  else {
    fVar6 = F_00c7d6ab(*(double *)&(*(uint *)&gen_args[0]));
    *(*(double * PTR32 *)&gen_args[2]) = (double)fVar6;
    dVar8 = (double)((float10)*(double *)&(*(uint *)&gen_args[0]) - fVar6);
    (*(double *)(gen_frame + 0x4)) = dVar8;
    if (GEN_ISNAN(dVar8) != (GEN_ISNAN(dVar8) || dVar8 == 0.0)) {
      (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x4)) + 6)) = (ushort)((ulonglong)gen_d2bits(dVar8) >> 0x30);
      uVar1 = (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x4)) + 6)) | (*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x8000;
      (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x4)) + 6)) = uVar1;
      (*(double *)(gen_frame + 0x4)) = gen_bits2d(CONCAT26(uVar1,(int6)(ulonglong)gen_d2bits(dVar8)));
    }
    F_00c6f59e(uVar4,0xffff);
LAB_00c6f988: ;
    fVar6 = (float10)(*(double *)(gen_frame + 0x4));
  }
  return fVar6;
}

/* ref: FUN_00c51da0 */
uint F_00c51da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc51da0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  
  puVar5 = param_1;
  while (((uint)puVar5 & 3) != 0) {
    uVar1 = *puVar5;
    if ((char)uVar1 == (char)param_2) {
      return (uint)puVar5;
    }
    puVar5 = (uint *)((int)puVar5 + 1);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *puVar5;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)param_2,(char)param_2),
                               CONCAT11((char)param_2,(char)param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar6 = puVar5 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      puVar5 = puVar6;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return 0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return 0;
        }
      }
    }
    uVar1 = *puVar5;
    if ((char)uVar1 == (char)param_2) {
      return (uint)puVar5;
    }
    if ((char)uVar1 == '\0') {
      return 0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)param_2) {
      return (uint)(char *)((int)puVar5 + 1);
    }
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)param_2) {
      return (uint)(char *)((int)puVar5 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)param_2) {
      return (uint)(char *)((int)puVar5 + 3);
    }
    puVar5 = puVar6;
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c51da6 */
uint F_00c51da6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc51da6u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  char cVar7;
  uint uVar8;
  
  cVar7 = (char)in_eax;
  puVar5 = param_2;
  while (((uint)puVar5 & 3) != 0) {
    uVar8 = *puVar5;
    if ((char)uVar8 == cVar7) {
      return (uint)puVar5;
    }
    puVar5 = (uint *)((int)puVar5 + 1);
    if ((char)uVar8 == '\0') {
      return 0;
    }
  }
  uVar8 = in_eax | in_eax << 8;
  while( true ) {
    while( true ) {
      uVar1 = *puVar5;
      uVar4 = uVar1 ^ (uVar8 << 0x10 | uVar8);
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar6 = puVar5 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      puVar5 = puVar6;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return 0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return 0;
        }
      }
    }
    uVar1 = *puVar5;
    if ((char)uVar1 == cVar7) {
      return (uint)puVar5;
    }
    if ((char)uVar1 == '\0') {
      return 0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == cVar7) {
      return (uint)(char *)((int)puVar5 + 1);
    }
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == cVar7) {
      return (uint)(char *)((int)puVar5 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == cVar7) {
      return (uint)(char *)((int)puVar5 + 3);
    }
    puVar5 = puVar6;
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c51e5e */
uint F_00c51e5e(unsigned int gen_a0)
{
  GEN_ENTER(0xc51e5eu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (-1 < param_1) {
    piVar1 = (int *)F_00c6f990();
    iVar3 = param_1;
    if (param_1 < *piVar1) goto LAB_00c51e7b;
  }
  piVar1 = (int *)F_00c6f990();
  iVar3 = *piVar1;
LAB_00c51e7b: ;
  uVar2 = F_00c6f996();
  return *(uint *)(uVar2 + iVar3 * 4);
}

/* ref: FUN_00c51e86 */
uint F_00c51e86(unsigned int gen_a0)
{
  GEN_ENTER(0xc51e86u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * p_Var1;
  char * pcVar2;
  uint uVar3;
  int eVar4;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == (undefined *)0x0) {
    pcVar2 = "Visual C++ CRT: Not enough memory to complete call to strerror.";
  }
  else {
    if ((*(char * PTR32 *)(((char *)(p_Var1) + 36))) == (char *)0x0) {
      pcVar2 = F_00c54c73(0x86,1);
      (*(char * PTR32 *)(((char *)(p_Var1) + 36))) = pcVar2;
      if (pcVar2 == (char *)0x0) {
        return (uint)"Visual C++ CRT: Not enough memory to complete call to strerror.";
      }
    }
    pcVar2 = (*(char * PTR32 *)(((char *)(p_Var1) + 36)));
    uVar3 = F_00c51e5e(param_1);
    eVar4 = F_00c49908(pcVar2,0x86,uVar3);
    if (eVar4 != 0) {
                    
      F_00c4c299(0x86,0,0,0,0,0);
    }
  }
  return (uint)pcVar2;
}

/* ref: FUN_00c51ef0 */
uint F_00c51ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc51ef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  int eVar3;
  int iVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    piVar1 = F_00c51f85();
    uVar2 = 0x16;
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    iVar4 = param_2 + -1;
    uVar2 = F_00c51e5e(param_3);
    eVar3 = F_00c4d9ef(param_1,param_2,uVar2,iVar4);
    uVar2 = 0;
    if (eVar3 != 0) {
                    
      F_00c4c299(0,0,0,0,0,0);
    }
  }
  return uVar2;
}

/* ref: __get_errno_from_oserr */
int F_00c51f43(unsigned int gen_a0)
{
  GEN_ENTER(0xc51f43u, gen_a0, 0u, 0u, 0u);
  ulong param_1 = (ulong)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&REFG(undefined4, 0x134aed0))[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x134aed4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}

/* ref: __errno */
int * F_00c51f85(void)
{
  GEN_ENTER(0xc51f85u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == (undefined *)0x0) {
    return (int *)&REFG(undefined, 0x134b038);
  }
  return &(*(int *)(((char *)(p_Var1) + 8)));
}

/* ref: ___doserrno */
ulong * F_00c51f98(void)
{
  GEN_ENTER(0xc51f98u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == (undefined *)0x0) {
    return (ulong *)&REFG(undefined, 0x134b03c);
  }
  return &(*(ulong *)(((char *)(p_Var1) + 12)));
}

/* ref: __dosmaperr */
unsigned int F_00c51fab(unsigned int gen_a0)
{
  GEN_ENTER(0xc51fabu, gen_a0, 0u, 0u, 0u);
  ulong param_1 = (ulong)gen_a0;
  ulong * puVar1;
  int iVar2;
  int * piVar3;
  
  puVar1 = F_00c51f98();
  *puVar1 = param_1;
  iVar2 = F_00c51f43(param_1);
  piVar3 = F_00c51f85();
  *piVar3 = iVar2;
  return 0;
}

/* ref: FID_conflict___set_doserrno_00c51fce */
int F_00c51fce(unsigned int gen_a0)
{
  GEN_ENTER(0xc51fceu, gen_a0, 0u, 0u, 0u);
  ulong _Value = (ulong)gen_a0;
  undefined * p_Var1;
  ulong * puVar2;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == (undefined *)0x0) {
    return 0xc;
  }
  puVar2 = (ulong *)F_00c51f85();
  *puVar2 = _Value;
  return 0;
}

/* ref: FUN_00c51fef */
uint F_00c51fef(unsigned int gen_a0)
{
  GEN_ENTER(0xc51fefu, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    F_00c4c305();
    uVar2 = 0x16;
  }
  else {
    piVar1 = F_00c51f85();
    *param_1 = *piVar1;
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FID_conflict___set_doserrno_00c52014 */
int F_00c52014(unsigned int gen_a0)
{
  GEN_ENTER(0xc52014u, gen_a0, 0u, 0u, 0u);
  ulong _Value = (ulong)gen_a0;
  undefined * p_Var1;
  ulong * puVar2;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == (undefined *)0x0) {
    return 0xc;
  }
  puVar2 = F_00c51f98();
  *puVar2 = _Value;
  return 0;
}

/* ref: FUN_00c52035 */
uint F_00c52035(unsigned int gen_a0)
{
  GEN_ENTER(0xc52035u, gen_a0, 0u, 0u, 0u);
  ulong * param_1 = (ulong *)(uintptr_t)gen_a0;
  ulong * puVar1;
  uint uVar2;
  
  if (param_1 == (ulong *)0x0) {
    F_00c4c305();
    uVar2 = 0x16;
  }
  else {
    puVar1 = F_00c51f98();
    *param_1 = *puVar1;
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: __freopen_helper */
uint F_00c5205a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5205au, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  uint * puVar2;
  undefined * pFVar3;
  
  pFVar3 = (*(undefined * PTR32 *)&gen_args[3]);
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6240);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc52066;
  if (((((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) || (*(*(int * PTR32 *)&gen_args[0]) = 0, (*(char * PTR32 *)&gen_args[1]) == (char *)0x0)) ||
      ((*(char * PTR32 *)&gen_args[2]) == (char *)0x0)) || ((*(undefined * PTR32 *)&gen_args[3]) == (undefined *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  if (*(*(char * PTR32 *)&gen_args[1]) == '\0') {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)&gen_args[3]);
    F_00c50937((*(undefined * PTR32 *)&gen_args[3]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    if (((*(int *)(((char *)(pFVar3) + 12))) & 0x83) != 0) {
      F_00c492a5(pFVar3);
    }
    (*(char * PTR32 *)(((char *)(pFVar3) + 8))) = (char *)0x0;
    (*(char * PTR32 *)((char *)(pFVar3))) = (char *)0x0;
    (*(int *)(((char *)(pFVar3) + 12))) = 0;
    (*(int *)(((char *)(pFVar3) + 4))) = 0;
    pFVar3 = F_00c5e1e8((*(char * PTR32 *)&gen_args[1]),(*(char * PTR32 *)&gen_args[2]),(*(int *)&gen_args[4]),pFVar3);
    *piVar1 = (int)pFVar3;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c52121((gen_frame + 0x1c));
    if (*piVar1 != 0) {
      return 0;
    }
  }
  puVar2 = (uint *)F_00c51f85();
  return *puVar2;
}

/* ref: FUN_00c5211c */
uint F_00c5211c(unsigned int gen_a0)
{
  GEN_ENTER(0xc5211cu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + -0x1c));
  return extraout_EAX;
}

/* ref: FUN_00c52121 */
uint F_00c52121(unsigned int gen_a0)
{
  GEN_ENTER(0xc52121u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + -0x1c));
  return extraout_EAX;
}

/* ref: _freopen */
undefined * F_00c5212b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5212bu, gen_a0, gen_a1, gen_a2, 0u);
  char * _Filename = (char *)(uintptr_t)gen_a0;
  char * _Mode = (char *)(uintptr_t)gen_a1;
  undefined * _File = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  F_00c5205a(&(*(undefined * PTR32 *)(gen_frame + 0x8)),_Filename,_Mode,_File,0x40);
  return (*(undefined * PTR32 *)(gen_frame + 0x8));
}

/* ref: _freopen_s */
int F_00c52151(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc52151u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * PTR32 * _File = (undefined * PTR32 *)(uintptr_t)gen_a0;
  char * _Filename = (char *)(uintptr_t)gen_a1;
  char * _Mode = (char *)(uintptr_t)gen_a2;
  undefined * _OldFile = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c5205a(_File,_Filename,_Mode,_OldFile,0x80);
  return uVar1;
}

/* ref: _realloc */
undefined * F_00c52171(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc52171u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int * piVar4;
  DWORD DVar5;
  uint dwBytes;
  
  if (param_1 == (undefined *)0x0) {
    pvVar1 = F_00c51787(param_2);
    return pvVar1;
  }
  dwBytes = param_2;
  if (param_2 == 0) {
    F_00c4c68f(param_1);
  }
  else {
    do {
      if (0xffffffe0 < dwBytes) {
        F_00c5b165(dwBytes);
        piVar4 = F_00c51f85();
        *piVar4 = 0xc;
        return (undefined *)0x0;
      }
      if (dwBytes == 0) {
        dwBytes = 1;
      }
      pvVar2 = gen_imp_HeapReAlloc(REFG(undefined4, 0x15d74c8),0,param_1,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      if (REFG(int, 0x15d75ac) == 0) {
        piVar4 = F_00c51f85();
        DVar5 = gen_imp_GetLastError();
        iVar3 = F_00c51f43(DVar5);
        *piVar4 = iVar3;
        return (undefined *)0x0;
      }
      iVar3 = F_00c5b165(dwBytes);
    } while (iVar3 != 0);
    piVar4 = F_00c51f85();
    DVar5 = gen_imp_GetLastError();
    iVar3 = F_00c51f43(DVar5);
    *piVar4 = iVar3;
  }
  return (undefined *)0x0;
}

/* ref: FID_conflict:___longjmp_internal */
unsigned int F_00c522a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc522a0u, gen_a0, gen_a1, 0u, 0u);
  int * _Buf = (int *)(uintptr_t)gen_a0;
  int _Value = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int * piVar2;
  PVOID TargetFrame;
  
  (*(DWORD *)((char *)((undefined *)(gen_frame + 0xc)))) = 0x80000026;
  (*(DWORD *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0;
  (*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = (undefined *)0x0;
  (*(PVOID *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = (PVOID)0x0;
  (*(DWORD *)(((char *)((undefined *)(gen_frame + 0xc)) + 16))) = 0;
  TargetFrame = (PVOID)_Buf[6];
  piVar2 = _Buf;
  if (TargetFrame != (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))))) {
    gen_imp_RtlUnwind(TargetFrame,(PVOID)0xc522ee,((undefined *)(gen_frame + 0xc)),(PVOID)0x0);
  }
  if (TargetFrame != (PVOID)0x0) {
    uVar1 = F_00c6fad7(piVar2 + 8);
    if ((uVar1 == 0) || (piVar2[8] != 0x56433230)) {
      F_00c6fa05(TargetFrame,piVar2[7]);
    }
    else if ((code *)piVar2[9] != (code *)0x0) {
      (*(code *)piVar2[9])(piVar2);
    }
  }
  F_00c6fab5(piVar2[5],0);
                    
                    
  (*(code *)piVar2[5])();
  return 0;
}

/* ref: FUN_00c52351 */
double F_00c52351(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc52351u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  double dVar1;
  double dVar2;
  int * piVar3;
  uint uVar4;
  undefined * p_Var5;
  byte * _Str;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),param_3);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  _Str = param_1;
  if (param_1 == (byte *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
    dVar1 = 0.0;
    goto LAB_00c52465;
  }
  while( true ) {
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xac))) < 2) {
      uVar4 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 200))) + (uint)*_Str * 2))) & 8;
    }
    else {
      uVar4 = F_00c5ce6f((uint)*_Str,8,(undefined *)((byte *)(gen_frame + 0x8)));
    }
    if (uVar4 == 0) break;
    _Str = _Str + 1;
  }
  p_Var5 = F_00c635e3(((undefined *)(gen_frame + 0x20)),(char *)_Str,(undefined *)((byte *)(gen_frame + 0x8)));
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _Str + (*(int *)(((char *)(p_Var5) + 4)));
  }
  uVar4 = (*(int *)((char *)(p_Var5)));
  if ((uVar4 & 0x240) == 0) {
    if ((uVar4 & 0x81) == 0) {
      if (((uVar4 & 0x100) == 0) ||
         (dVar1 = (*(double *)(((char *)(p_Var5) + 16))), dVar2 = 0.0, GEN_ISNAN(dVar1) == (GEN_ISNAN(dVar1) || dVar1 == 0.0))) {
        (*(double *)(gen_frame + 0x18)) = (*(double *)(((char *)(p_Var5) + 16)));
        goto LAB_00c52455;
      }
    }
    else {
      dVar2 = *(double *)&REFG(undefined, 0x134b0a0);
      if (*_Str == 0x2d) {
        dVar2 = -*(double *)&REFG(undefined, 0x134b0a0);
      }
    }
    (*(double *)(gen_frame + 0x18)) = dVar2;
    piVar3 = F_00c51f85();
    *piVar3 = 0x22;
  }
  else {
    (*(double *)(gen_frame + 0x18)) = 0.0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
  }
LAB_00c52455: ;
  dVar1 = (*(double *)(gen_frame + 0x18));
  if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
  }
LAB_00c52465: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return dVar1;
}

/* ref: FUN_00c52474 */
double F_00c52474(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc52474u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  double dVar1;
  
  dVar1 = F_00c52351(param_1,param_2,0);
  return dVar1;
}

/* ref: _strncat */
char * F_00c52490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc52490u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Dest = (char *)(uintptr_t)gen_a0;
  char * _Source = (char *)(uintptr_t)gen_a1;
  gen_size32 _Count = (gen_size32)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  
  puVar6 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar6 & 3) == 0) goto LAB_00c524bc;
    uVar4 = *puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_00c524ed;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar7 = (uint *)((int)puVar7 + 2);
      goto LAB_00c524ff;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_00c524bc: ;
    do {
      puVar7 = puVar6;
      puVar6 = puVar7 + 1;
    } while (((*puVar7 ^ 0xffffffff ^ *puVar7 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar7;
    if ((char)uVar4 == '\0') goto LAB_00c524ff;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar7 = (uint *)((int)puVar7 + 1);
      goto LAB_00c524ff;
    }
  }
LAB_00c524ed: ;
  puVar7 = (uint *)((int)puVar6 + -1);
LAB_00c524ff: ;
  uVar4 = _Count;
  puVar6 = (uint *)_Source;
  if (((uint)_Source & 3) == 0) {
    uVar3 = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*puVar6;
      uVar5 = (uint)bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      if (bVar1 == 0) goto LAB_00c5255a;
      *(byte *)puVar7 = bVar1;
      puVar7 = (uint *)((int)puVar7 + 1);
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) goto LAB_00c52550;
    } while (((uint)puVar6 & 3) != 0);
    uVar3 = uVar4 >> 2;
  }
  do {
    if (uVar3 == 0) {
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar5 = *puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        *(byte *)puVar7 = (byte)uVar5;
        puVar7 = (uint *)((int)puVar7 + 1);
        if ((byte)uVar5 == 0) {
          return _Dest;
        }
      }
LAB_00c52550: ;
      *(byte *)puVar7 = 0;
      return _Dest;
    }
    uVar2 = *puVar6;
    uVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar5 == '\0') {
LAB_00c5255a: ;
        *(byte *)puVar7 = (byte)uVar5;
        return _Dest;
      }
      if ((char)(uVar5 >> 8) == '\0') {
        *(short *)puVar7 = (short)uVar5;
        return _Dest;
      }
      if ((uVar5 & 0xff0000) == 0) {
        *(short *)puVar7 = (short)uVar5;
        *(byte *)((int)puVar7 + 2) = 0;
        return _Dest;
      }
      if ((uVar5 & 0xff000000) == 0) {
        *puVar7 = uVar5;
        return _Dest;
      }
    }
    *puVar7 = uVar5;
    puVar7 = puVar7 + 1;
    uVar3 = uVar3 - 1;
  } while( true );
}

/* ref: _strcspn */
gen_size32 F_00c525d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc525d0u, gen_a0, gen_a1, 0u, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * _Control = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  gen_size32 sVar2;
  byte * pbVar3;
  
  ((byte *)(gen_frame + 0x8))[0x1c] = 0;
  ((byte *)(gen_frame + 0x8))[0x1d] = 0;
  ((byte *)(gen_frame + 0x8))[0x1e] = 0;
  ((byte *)(gen_frame + 0x8))[0x1f] = 0;
  ((byte *)(gen_frame + 0x8))[0x18] = 0;
  ((byte *)(gen_frame + 0x8))[0x19] = 0;
  ((byte *)(gen_frame + 0x8))[0x1a] = 0;
  ((byte *)(gen_frame + 0x8))[0x1b] = 0;
  ((byte *)(gen_frame + 0x8))[0x14] = 0;
  ((byte *)(gen_frame + 0x8))[0x15] = 0;
  ((byte *)(gen_frame + 0x8))[0x16] = 0;
  ((byte *)(gen_frame + 0x8))[0x17] = 0;
  ((byte *)(gen_frame + 0x8))[0x10] = 0;
  ((byte *)(gen_frame + 0x8))[0x11] = 0;
  ((byte *)(gen_frame + 0x8))[0x12] = 0;
  ((byte *)(gen_frame + 0x8))[0x13] = 0;
  ((byte *)(gen_frame + 0x8))[0xc] = 0;
  ((byte *)(gen_frame + 0x8))[0xd] = 0;
  ((byte *)(gen_frame + 0x8))[0xe] = 0;
  ((byte *)(gen_frame + 0x8))[0xf] = 0;
  ((byte *)(gen_frame + 0x8))[8] = 0;
  ((byte *)(gen_frame + 0x8))[9] = 0;
  ((byte *)(gen_frame + 0x8))[10] = 0;
  ((byte *)(gen_frame + 0x8))[0xb] = 0;
  ((byte *)(gen_frame + 0x8))[4] = 0;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  pbVar3 = (byte *)_Control;
  while( true ) {
    bVar1 = *pbVar3;
    if (bVar1 == 0) break;
    pbVar3 = pbVar3 + 1;
    ((byte *)(gen_frame + 0x8))[(int)((int)(uint)bVar1 >> 3)] = ((byte *)(gen_frame + 0x8))[(int)((int)(uint)bVar1 >> 3)] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  pbVar3 = (byte *)_Str;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *pbVar3;
    if (bVar1 == 0) {
      return sVar2;
    }
    pbVar3 = pbVar3 + 1;
  } while ((((byte *)(gen_frame + 0x8))[(int)((int)(uint)bVar1 >> 3)] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}

/* ref: _strncpy */
char * F_00c52620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc52620u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Dest = (char *)(uintptr_t)gen_a0;
  char * _Source = (char *)(uintptr_t)gen_a1;
  gen_size32 _Count = (gen_size32)gen_a2;
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  
  if (_Count == 0) {
    return _Dest;
  }
  uVar5 = _Count;
  puVar6 = (uint *)_Source;
  puVar7 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      *(char *)puVar7 = (char)uVar4;
      puVar7 = (uint *)((int)puVar7 + 1);
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)puVar6 & 3) == 0) {
        uVar4 = uVar5 >> 2;
        goto joined_r0x00c5266c;
      }
    }
    do {
      if (((uint)puVar7 & 3) == 0) {
        uVar4 = uVar5 >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_00c526b3;
        goto LAB_00c52729;
      }
      *(char *)puVar7 = '\0';
      puVar7 = (uint *)((int)puVar7 + 1);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *puVar6;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar7 = 0;
joined_r0x00c52725: ;
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar7 = puVar7 + 1;
            if (uVar4 == 0) break;
LAB_00c52729: ;
            *puVar7 = 0;
          }
          cVar3 = '\0';
          uVar5 = uVar5 & 3;
          if (uVar5 != 0) goto LAB_00c526b3;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar7 = uVar2 & 0xff;
          goto joined_r0x00c52725;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar7 = uVar2 & 0xffff;
          goto joined_r0x00c52725;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar7 = uVar2;
          goto joined_r0x00c52725;
        }
      }
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
      uVar4 = uVar4 - 1;
joined_r0x00c5266c: ;
    } while (uVar4 != 0);
    uVar5 = uVar5 & 3;
    if (uVar5 == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
    *(char *)puVar7 = cVar3;
    puVar7 = (uint *)((int)puVar7 + 1);
    if (cVar3 == '\0') {
      while (uVar5 = uVar5 - 1, uVar5 != 0) {
LAB_00c526b3: ;
        *(char *)puVar7 = cVar3;
        puVar7 = (uint *)((int)puVar7 + 1);
      }
      return _Dest;
    }
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return _Dest;
}

/* ref: __strcoll_l */
int F_00c52744(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc52744u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
LAB_00c5276f: ;
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if (*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x10))) == (LPCWSTR)0x0) {
      iVar2 = F_00c556e0(_Str1,_Str2);
    }
    else {
      iVar2 = F_00c6fdae((undefined *)((byte *)(gen_frame + 0xc)),*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x10))),0x1000,_Str1,-1,_Str2,
                         -1,*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 8))));
      if (iVar2 == 0) {
        piVar1 = F_00c51f85();
        *piVar1 = 0x16;
        goto LAB_00c5276f;
      }
      iVar2 = iVar2 + -2;
    }
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar2;
}

/* ref: _strcoll */
int F_00c527e2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc527e2u, gen_a0, gen_a1, 0u, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c52744(_Str1,_Str2,(undefined *)0x0);
  return iVar1;
}

/* ref: _localeconv */
undefined * F_00c527f9(void)
{
  GEN_ENTER(0xc527f9u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if (((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) != (undefined *)REFG(undefined * PTR32, 0x134ba28)) &&
     (((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0)) {
    F_00c5cdf6();
  }
  return (undefined *)REFG(undefined * PTR32, 0x134b098);
}

/* ref: _fgets */
char * F_00c5281f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5281fu, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char * pcVar1;
  undefined * _File_00;
  int * piVar2;
  uint uVar3;
  undefined * puVar4;
  char * pcVar5;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[2]);
  pcVar1 = (*(char * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6260);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc5282b;
  (*(char * PTR32 *)(gen_frame + 0x10)) = (*(char * PTR32 *)&gen_args[0]);
  if (((((*(char * PTR32 *)&gen_args[0]) == (char *)0x0) && ((*(int *)&gen_args[1]) != 0)) || ((*(int *)&gen_args[1]) < 0)) || ((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0)) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else if ((*(int *)&gen_args[1]) != 0) {
    (*(char * PTR32 *)&gen_args[0]) = (char *)(*(undefined * PTR32 *)&gen_args[2]);
    F_00c50937((*(undefined * PTR32 *)&gen_args[2]));
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    if (((*(int *)(((char *)(_File_00) + 12))) & 0x40) == 0) {
      uVar3 = F_00c5d07b(_File_00);
      if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
        puVar4 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar3 >> 5])));
      }
      if ((puVar4[0x24] & 0x7f) == 0) {
        if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
          puVar4 = &REFG(undefined, 0x134b280);
        }
        else {
          puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar3 >> 5])));
        }
        if ((puVar4[0x24] & 0x80) == 0) goto LAB_00c528f7;
      }
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
      (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)0x0;
    }
LAB_00c528f7: ;
    pcVar5 = pcVar1;
    if ((*(char * PTR32 *)(gen_frame + 0x10)) != (char *)0x0) {
      do {
        (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + -1;
        if ((*(int *)&gen_args[1]) == 0) break;
        piVar2 = &(*(int *)(((char *)(_File_00) + 4)));
        *piVar2 = *piVar2 + -1;
        if (*piVar2 < 0) {
          uVar3 = F_00c5cf59(_File_00);
        }
        else {
          uVar3 = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
          (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
        }
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        if (uVar3 == 0xffffffff) {
          if (pcVar5 == pcVar1) {
            (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)0x0;
            goto LAB_00c52937;
          }
          break;
        }
        *pcVar5 = (char)uVar3;
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
      } while ((char)uVar3 != '\n');
      *pcVar5 = '\0';
    }
LAB_00c52937: ;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c5294f(_File_00);
    return (*(char * PTR32 *)(gen_frame + 0x10));
  }
  return (char *)0x0;
}

/* ref: FUN_00c5294c */
uint F_00c5294c(unsigned int gen_a0)
{
  GEN_ENTER(0xc5294cu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: FUN_00c5294f */
uint F_00c5294f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5294fu, gen_a0, 0u, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: FUN_00c52978 */
float10 F_00c52978(double gen_a0)
{
  GEN_ENTER(0xc52978u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c6b9de(&REFG(undefined, 0x1125bfa),in_st0);
  return fVar1;
}

/* ref: FUN_00c52982 */
float10 F_00c52982(double gen_a0)
{
  GEN_ENTER(0xc52982u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c6b9de(&REFG(undefined, 0x1125c1a),in_st0);
  return fVar1;
}

/* ref: FUN_00c52989 */
float10 F_00c52989(double gen_a0)
{
  GEN_ENTER(0xc52989u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c6b9de(&REFG(undefined, 0x1125c3a),in_st0);
  return fVar1;
}

/* ref: _frexp */
double F_00c52990(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc52990u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  double dVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    fVar5 = (float10)0;
    goto LAB_00c52a5b;
  }
  uVar3 = F_00c6f59e(0x133f,0xffff);
  uVar6 = (undefined4)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x20);
  if (((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff0) != 0x7ff0) {
    fVar5 = F_00c6ec33((*(double *)&gen_args[0]),(*(int * PTR32 *)&gen_args[2]));
    F_00c6f59e(uVar3,0xffff);
    fVar5 = (float10)(double)fVar5;
    goto LAB_00c52a5b;
  }
  *(*(int * PTR32 *)&gen_args[2]) = -1;
  uVar4 = F_00c6ebcd((int)(ulonglong)gen_d2bits((*(double *)&gen_args[0])),uVar6);
  if ((int)uVar4 < 1) {
LAB_00c52a19: ;
    dVar1 = (*(double *)&gen_args[0]) + REFG(double, 0x1088130);
  }
  else {
    dVar1 = *(double *)&REFG(undefined, 0x134bc98);
    if (2 < (int)uVar4) {
      if (uVar4 == 3) {
        fVar5 = F_00c6f323(0x17,(*(double *)&gen_args[0]),uVar3);
        goto LAB_00c52a5b;
      }
      goto LAB_00c52a19;
    }
  }
  fVar5 = F_00c6f3d9(uVar6,8,0x17,(*(double *)&gen_args[0]),dVar1,uVar3);
LAB_00c52a5b: ;
  return (double)fVar5;
}

/* ref: FUN_00c52c10 */
uint F_00c52c10(unsigned int gen_a0)
{
  GEN_ENTER(0xc52c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x20;
}

/* ref: __toupper_l */
int F_00c52c1d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc52c1du, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  CHAR CVar5;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x4)),(*(undefined * PTR32 *)&gen_args[1]));
  if ((uint)(*(int *)&gen_args[0]) < 0x100) {
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xac))) < 2) {
      uVar2 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 200))) + (*(int *)&gen_args[0]) * 2))) & 2;
      iVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0));
    }
    else {
      uVar2 = F_00c5ce6f((*(int *)&gen_args[0]),2,(undefined *)((byte *)(gen_frame + 0x4)));
      iVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0));
    }
    if (uVar2 == 0) {
LAB_00c52c7c: ;
      if (((byte *)(gen_frame + 0x4))[0xc] == 0) {
        return iVar1;
      }
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*((byte *)GEN_TOP((*(int *)(iVar3 + 0xd0) + (*(int *)&gen_args[0]))));
  }
  else {
    CVar5 = (CHAR)(*(int *)&gen_args[0]);
    if ((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xac))) < 2) ||
       (iVar3 = F_00c6dfe8((*(int *)&gen_args[0]) >> 8 & 0xff,(undefined *)((byte *)(gen_frame + 0x4))), iVar3 == 0)) {
      piVar4 = F_00c51f85();
      *piVar4 = 0x2a;
      (*(CHAR *)(gen_frame + 0x18)) = CVar5;
      (*(CHAR *)(gen_frame + 0x19)) = '\0';
      iVar3 = 1;
    }
    else {
      (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (CHAR)((uint)(*(int *)&gen_args[0]) >> 8);
      (*(CHAR *)(gen_frame + 0x18)) = (CHAR)(*(int *)&gen_args[0]);
      (*(CHAR *)(gen_frame + 0x19)) = CVar5;
      (*(undefined1 *)(gen_frame + 0x1a)) = 0;
      iVar3 = 2;
    }
    iVar3 = F_00c54720((undefined *)((byte *)(gen_frame + 0x4)),*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0x14))),0x200,&(*(CHAR *)(gen_frame + 0x18)),
                               iVar3,(LPSTR)&(*(byte *)(gen_frame + 0x14)),3,*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 4))),1);
    if (iVar3 == 0) goto LAB_00c52c7c;
    uVar2 = (uint)(*(byte *)(gen_frame + 0x14));
    if (iVar3 != 1) {
      uVar2 = (uint)CONCAT11((*(byte *)(gen_frame + 0x14)),(*(undefined1 *)(gen_frame + 0x15)));
    }
  }
  if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar2;
}

/* ref: _toupper */
int F_00c52d33(unsigned int gen_a0)
{
  GEN_ENTER(0xc52d33u, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    iVar1 = _C;
    if (_C - 0x61U < 0x1a) {
      return _C + -0x20;
    }
  }
  else {
    iVar1 = F_00c52c1d(_C,(undefined *)0x0);
  }
  return iVar1;
}

/* ref: _strpbrk */
char * F_00c52d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc52d60u, gen_a0, gen_a1, 0u, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * _Control = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  
  ((byte *)(gen_frame + 0x8))[0x1c] = 0;
  ((byte *)(gen_frame + 0x8))[0x1d] = 0;
  ((byte *)(gen_frame + 0x8))[0x1e] = 0;
  ((byte *)(gen_frame + 0x8))[0x1f] = 0;
  ((byte *)(gen_frame + 0x8))[0x18] = 0;
  ((byte *)(gen_frame + 0x8))[0x19] = 0;
  ((byte *)(gen_frame + 0x8))[0x1a] = 0;
  ((byte *)(gen_frame + 0x8))[0x1b] = 0;
  ((byte *)(gen_frame + 0x8))[0x14] = 0;
  ((byte *)(gen_frame + 0x8))[0x15] = 0;
  ((byte *)(gen_frame + 0x8))[0x16] = 0;
  ((byte *)(gen_frame + 0x8))[0x17] = 0;
  ((byte *)(gen_frame + 0x8))[0x10] = 0;
  ((byte *)(gen_frame + 0x8))[0x11] = 0;
  ((byte *)(gen_frame + 0x8))[0x12] = 0;
  ((byte *)(gen_frame + 0x8))[0x13] = 0;
  ((byte *)(gen_frame + 0x8))[0xc] = 0;
  ((byte *)(gen_frame + 0x8))[0xd] = 0;
  ((byte *)(gen_frame + 0x8))[0xe] = 0;
  ((byte *)(gen_frame + 0x8))[0xf] = 0;
  ((byte *)(gen_frame + 0x8))[8] = 0;
  ((byte *)(gen_frame + 0x8))[9] = 0;
  ((byte *)(gen_frame + 0x8))[10] = 0;
  ((byte *)(gen_frame + 0x8))[0xb] = 0;
  ((byte *)(gen_frame + 0x8))[4] = 0;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  pbVar3 = (byte *)_Control;
  while( true ) {
    bVar1 = *pbVar3;
    pbVar2 = (byte *)_Str;
    if (bVar1 == 0) break;
    pbVar3 = pbVar3 + 1;
    ((byte *)(gen_frame + 0x8))[(int)((int)(uint)bVar1 >> 3)] = ((byte *)(gen_frame + 0x8))[(int)((int)(uint)bVar1 >> 3)] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar3 = pbVar2;
    bVar1 = *pbVar3;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    pbVar2 = pbVar3 + 1;
  } while ((((byte *)(gen_frame + 0x8))[(int)((int)(uint)bVar1 >> 3)] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar3;
}

/* ref: __difftime64 */
double F_00c52da0(unsigned long long gen_a0, unsigned long long gen_a1)
{
  GEN_ENTER(0xc52da0u, 0u, 0u, 0u, 0u);
  __time64_t _Time1 = (__time64_t)gen_a0;
  __time64_t _Time2 = (__time64_t)gen_a1;
  int * piVar1;
  
  if ((-1 < _Time2) && (-1 < _Time1)) {
    return (double)(_Time1 - _Time2);
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  return 0.0;
}

/* ref: __gmtime64_s */
int F_00c52de3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc52de3u, gen_a0, gen_a1, 0u, 0u);
  undefined * _Tm = (undefined *)(uintptr_t)gen_a0;
  __time64_t * _Time = (__time64_t *)(uintptr_t)gen_a1;
  undefined * ptVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined * ptVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  bool bVar10;
  longlong lStackY_30;
  
  ptVar5 = _Tm;
  bVar4 = false;
  if ((_Tm == (undefined *)0x0) || (F_00c48350(_Tm,0xff,0x24), _Time == (__time64_t *)0x0)) {
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  uVar7 = *(uint *)((int)_Time + 4);
  if (((0x7fffffff < uVar7) && (((int)uVar7 < -1 || ((uint)*_Time < 0xffff5740)))) ||
     ((6 < (int)uVar7 && ((7 < (int)uVar7 || (0x934126cf < (uint)*_Time)))))) {
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    return 0x16;
  }
  iVar2 = (int)(*_Time / 0x1e13380);
  _Tm = (undefined *)(iVar2 + 0x46);
  ptVar1 = (undefined *)(iVar2 + 0x45);
  lStackY_30 = (longlong)iVar2;
  lVar3 = (lStackY_30 * -0x16d -
          (longlong)
          (((iVar2 + 0x171) / 400 - (int)((int)(uintptr_t)ptVar1) / 100) + -0x11 +
          ((int)((int)&(*(int *)((char *)(ptVar1))) + ((int)((int)(uintptr_t)ptVar1) >> 0x1f & 3U)) >> 2))) * 0x15180 + *_Time;
  iVar9 = (int)lVar3;
  if ((lVar3 < 0x100000000) && (lVar3 < 0)) {
    lVar3 = lVar3 + 0x1e13380;
    uVar7 = (uint)ptVar1 & 0x80000003;
    bVar10 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar10 = (uVar7 - 1 | 0xfffffffc) == 0xffffffff;
    }
    _Tm = ptVar1;
    if (((!bVar10) || ((int)((int)(uintptr_t)ptVar1) % 100 == 0)) && ((iVar2 + 0x7b1) % 400 != 0)) goto LAB_00c52f5d;
    lVar3 = CONCAT44((int)((ulonglong)lVar3 >> 0x20) + (uint)(0xfffeae7f < (uint)lVar3),
                     iVar9 + 0x1e28500);
  }
  else {
    uVar7 = (uint)_Tm & 0x80000003;
    bVar10 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar10 = (uVar7 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((!bVar10) || ((int)((int)(uintptr_t)_Tm) % 100 == 0)) && ((iVar2 + 0x7b2) % 400 != 0)) goto LAB_00c52f5d;
  }
  bVar4 = true;
LAB_00c52f5d: ;
  (*(int *)(((char *)(ptVar5) + 20))) = (int)_Tm;
  iVar2 = (int)(lVar3 / 0x15180);
  (*(int *)(((char *)(ptVar5) + 28))) = iVar2;
  lStackY_30 = (longlong)iVar2;
  lVar3 = lStackY_30 * -0x15180 + lVar3;
  puVar8 = &REFG(undefined4, 0x134bc00);
  if (!bVar4) {
    puVar8 = &REFG(undefined4, 0x134bc34);
  }
  iVar9 = 1;
  iVar2 = puVar8[1];
  while (iVar2 < (*(int *)(((char *)(ptVar5) + 28)))) {
    iVar9 = iVar9 + 1;
    iVar2 = puVar8[iVar9];
  }
  (*(int *)(((char *)(ptVar5) + 16))) = iVar9 + -1;
  (*(int *)(((char *)(ptVar5) + 12))) = (*(int *)(((char *)(ptVar5) + 28))) - puVar8[iVar9 + -1];
  (*(int *)(((char *)(ptVar5) + 24))) = ((int)(*_Time / 0x15180) + 4) % 7;
  iVar2 = (int)(lVar3 / 0xe10);
  (*(int *)(((char *)(ptVar5) + 8))) = iVar2;
  lStackY_30 = (longlong)iVar2;
  lVar3 = lVar3 + lStackY_30 * -0xe10;
  iVar2 = (int)(lVar3 / 0x3c);
  (*(int *)(((char *)(ptVar5) + 4))) = iVar2;
  (*(int *)((char *)(ptVar5))) = (int)lVar3 + iVar2 * -0x3c;
  (*(int *)(((char *)(ptVar5) + 32))) = 0;
  return 0;
}

/* ref: __gmtime64 */
undefined * F_00c5301c(unsigned int gen_a0)
{
  GEN_ENTER(0xc5301cu, gen_a0, 0u, 0u, 0u);
  __time64_t * _Time = (__time64_t *)(uintptr_t)gen_a0;
  undefined * _Tm;
  int eVar1;
  undefined * ptVar2;
  
  _Tm = F_00c64f6d();
  ptVar2 = (undefined *)0x0;
  if (_Tm != (undefined *)0x0) {
    eVar1 = F_00c52de3(_Tm,_Time);
    ptVar2 = ((undefined *)GEN_TOP((~-(uint)(eVar1 != 0) & (uint)_Tm)));
  }
  return ptVar2;
}

/* ref: __invoke_watson_if_oneof */
int F_00c53043(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc53043u, gen_a0, gen_a1, gen_a2, gen_a3);
  int _ExpressionError = (int)gen_a0;
  int _ErrorValue1 = (int)gen_a1;
  int _ErrorValue2 = (int)gen_a2;
  wchar_t * _Expression = (wchar_t *)(uintptr_t)gen_a3;
  wchar_t * _Function = (wchar_t *)(uintptr_t)gen_a4;
  wchar_t * _File = (wchar_t *)(uintptr_t)gen_a5;
  uint _Line = (uint)gen_a6;
  uint _Reserved = (uint)gen_a7;
  undefined4 unaff_EDI = 0;
  
  if ((_ExpressionError != 0) &&
     ((_ExpressionError == _ErrorValue1 || (_ExpressionError == _ErrorValue2)))) {
                    
    F_00c4c299(unaff_EDI,_Expression,_Function,_File,_Line,_Reserved);
  }
  return _ExpressionError;
}

/* ref: _system */
int F_00c5306f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5306fu, gen_a0, 0u, 0u, 0u);
  char * _Command = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int eVar2;
  int * piVar3;
  uint uVar4;
  
  (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)0x0;
  uVar4 = 0;
  eVar2 = F_00c4b6eb(&(*(char * PTR32 *)(gen_frame + 0x18)),(gen_size32 *)0x0,"COMSPEC");
  if ((eVar2 != 0) && (eVar2 == 0x16)) {
                    
    F_00c4c299(0,0,0,0,0,0);
  }
  (*(char * PTR32 *)(gen_frame + 0x8)) = (*(char * PTR32 *)(gen_frame + 0x18));
  if (_Command == (char *)0x0) {
    if ((*(char * PTR32 *)(gen_frame + 0x18)) != (char *)0x0) {
      eVar2 = F_00c703b3((*(char * PTR32 *)(gen_frame + 0x18)),0);
      uVar4 = (uint)(eVar2 == 0);
    }
    goto LAB_00c5313d;
  }
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined, 0x1118c08);
  (*(char * PTR32 *)(gen_frame + 0x10)) = _Command;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if ((*(char * PTR32 *)(gen_frame + 0x18)) != (char *)0x0) {
    piVar3 = F_00c51f85();
    iVar1 = *piVar3;
    piVar3 = F_00c51f85();
    *piVar3 = 0;
    uVar4 = F_00c701ca(0,(*(char * PTR32 *)(gen_frame + 0x8)),&(*(char * PTR32 *)(gen_frame + 0x8)),(char * PTR32 *)0x0);
    piVar3 = F_00c51f85();
    if (uVar4 != 0xffffffff) {
      *piVar3 = iVar1;
      goto LAB_00c5313d;
    }
    if ((*piVar3 != 2) && (piVar3 = F_00c51f85(), *piVar3 != 0xd)) goto LAB_00c5313d;
    piVar3 = F_00c51f85();
    *piVar3 = iVar1;
  }
  (*(char * PTR32 *)(gen_frame + 0x8)) = "cmd.exe";
  uVar4 = F_00c6feec(0,"cmd.exe",&(*(char * PTR32 *)(gen_frame + 0x8)),(char * PTR32 *)0x0);
LAB_00c5313d: ;
  F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x18)));
  return uVar4;
}

/* ref: FUN_00c5314c */
uint F_00c5314c(unsigned int gen_a0)
{
  GEN_ENTER(0xc5314cu, gen_a0, 0u, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  BOOL BVar1;
  ulong uVar2;
  
  BVar1 = gen_imp_DeleteFileA(param_1);
  if (BVar1 == 0) {
    uVar2 = gen_imp_GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    F_00c51fab(uVar2);
    return 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00c5317c */
uint F_00c5317c(unsigned int gen_a0)
{
  GEN_ENTER(0xc5317cu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5314c(param_1);
  return uVar1;
}

/* ref: FUN_00c53187 */
uint F_00c53187(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc53187u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  LPCSTR param_2 = (LPCSTR)gen_a1;
  BOOL BVar1;
  ulong uVar2;
  
  BVar1 = gen_imp_MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = gen_imp_GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    F_00c51fab(uVar2);
    return 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00c531ba */
uint F_00c531ba(unsigned int gen_a0)
{
  GEN_ENTER(0xc531bau, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int eVar1;
  char * pcVar2;
  DWORD _Val;
  char * _Size;
  char * pcVar3;
  int in_edi;
  int _Radix;
  
  in_edi = 0;
  if (param_1 == (char *)0x0) {
    pcVar3 = &REFG(undefined1, 0x15d688c);
    in_edi = 0xe;
  }
  else {
    if (param_1 == (char *)0x1) {
      pcVar3 = &REFG(undefined1, 0x15d689c);
    }
    else {
      pcVar3 = param_1;
      if (param_1 != (char *)0x2) goto LAB_00c531f0;
      pcVar3 = &REFG(undefined1, 0x15d68b0);
    }
    in_edi = 0x12;
  }
LAB_00c531f0: ;
  eVar1 = F_00c49908(pcVar3,in_edi,&REFG(undefined, 0x1118c14));
  if (eVar1 == 0) {
    pcVar2 = pcVar3 + 1;
    if ((*pcVar3 != '\\') && (*pcVar3 != '/')) {
      *pcVar2 = '\\';
      pcVar2 = pcVar3 + 2;
    }
    if (param_1 == (char *)0x1) {
      *pcVar2 = 't';
    }
    else {
      *pcVar2 = 's';
    }
    pcVar2 = pcVar2 + 1;
    _Radix = 0x20;
    _Size = pcVar3 + (in_edi - (int)pcVar2);
    _Val = gen_imp_GetCurrentProcessId();
    eVar1 = F_00c70555(_Val,pcVar2,(gen_size32)_Size,_Radix);
    if ((eVar1 == 0) && (eVar1 = F_00c473c8(pcVar3,in_edi,&REFG(undefined, 0x1118a34)), eVar1 == 0)) {
      return 0;
    }
  }
                    
  F_00c4c299(in_edi,0,0,0,0,0);
}

/* ref: FUN_00c53264 */
uint F_00c53264(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc53264u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uchar * puVar1;
  uint uVar2;
  ulong uVar3;
  int eVar4;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  puVar1 = F_00c7075f(this,0x2e);
  puVar1 = puVar1 + 1;
  if ((puVar1 < this) || (param_1 <= (uint)((int)puVar1 - (int)this))) {
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = F_00c4abb6((char *)puVar1,(char * PTR32 *)0x0,0x20);
    if (uVar3 + 1 < param_2) {
      eVar4 = F_00c70555(uVar3 + 1,((char *)(gen_frame + 0x0)),8,0x20);
      if (eVar4 == 0) {
        this = ((undefined *)GEN_TOP(((int)this + (param_1 - (int)puVar1))));
        eVar4 = F_00c49908(puVar1,this,((char *)(gen_frame + 0x0)));
        uVar2 = 0;
        if (eVar4 == 0) goto LAB_00c532b7;
      }
                    
      F_00c4c299(this,0,0,0,0,0);
    }
    uVar2 = 0xffffffff;
  }
LAB_00c532b7: ;
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return uVar2;
}

/* ref: __tmpnam_helper */
uint F_00c53303(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc53303u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x48];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint * puVar1;
  int iVar2;
  int eVar3;
  undefined * p_Var4;
  char * pcVar5;
  gen_size32 sVar6;
  char * _Filename;
  uint uVar7;
  undefined4 uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6280);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc5330f;
  (*(uint *)(gen_frame + 0x10)) = 0;
  puVar1 = (uint *)F_00c51f85();
  (*(uint *)(gen_frame + 0xc)) = *puVar1;
  iVar2 = F_00c5a98d(2);
  if (iVar2 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[4]) = 0;
    puVar1 = (uint *)F_00c51f85();
    uVar7 = *puVar1;
  }
  else {
    F_00c5aa4f(2);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    if ((*(int *)&gen_args[2]) == 0) {
      _Filename = &REFG(undefined1, 0x15d688c);
      uVar8 = 0xe;
    }
    else {
      _Filename = &REFG(undefined1, 0x15d68b0);
      uVar8 = 0x12;
    }
    if (*_Filename != '\0') goto LAB_00c5336b;
    F_00c531ba((*(int *)&gen_args[2]));
    do {
      eVar3 = F_00c703b3(_Filename,0);
      pcVar5 = (*(char * PTR32 *)&gen_args[0]);
      if (eVar3 != 0) {
        if ((*(char * PTR32 *)&gen_args[0]) == (char *)0x0) {
          p_Var4 = F_00c5b301();
          if (p_Var4 == (undefined *)0x0) {
LAB_00c5339f: ;
            (*(uint *)(gen_frame + 0x10)) = 0xc;
            break;
          }
          if ((*(char * PTR32 *)(((char *)(p_Var4) + 44))) == (char *)0x0) {
            pcVar5 = F_00c54c2e(0xe);
            (*(char * PTR32 *)(((char *)(p_Var4) + 44))) = pcVar5;
            if (pcVar5 == (char *)0x0) goto LAB_00c5339f;
          }
          pcVar5 = (*(char * PTR32 *)(((char *)(p_Var4) + 44)));
          uVar7 = 0xe;
          (*(char * PTR32 *)&gen_args[0]) = pcVar5;
        }
        else {
          uVar7 = (*(uint *)&gen_args[1]);
          if (((*(int *)&gen_args[2]) != 0) && (sVar6 = F_00c552f0(_Filename), uVar7 = (*(uint *)&gen_args[1]), (*(uint *)&gen_args[1]) <= sVar6)) {
            (*(uint *)(gen_frame + 0x10)) = 0x22;
            if ((*(uint *)&gen_args[1]) != 0) {
              *pcVar5 = '\0';
            }
            break;
          }
        }
        eVar3 = F_00c49908(pcVar5,uVar7,_Filename);
        if (eVar3 != 0) {
                    
          F_00c4c299(_Filename,0,0,0,0,0);
        }
        break;
      }
LAB_00c5336b: ;
      uVar7 = F_00c53264(_Filename,uVar8,(*(undefined4 *)&gen_args[3]));
    } while (uVar7 == 0);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c53429();
    uVar7 = (*(uint *)(gen_frame + 0x10));
    *(*(undefined4 * PTR32 *)&gen_args[4]) = (*(char * PTR32 *)&gen_args[0]);
    puVar1 = (uint *)F_00c51f85();
    if (uVar7 == 0) {
      *puVar1 = (*(uint *)(gen_frame + 0xc));
    }
    else {
      *puVar1 = uVar7;
    }
  }
  return uVar7;
}

/* ref: FUN_00c53427 */
uint F_00c53427(void)
{
  GEN_ENTER(0xc53427u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(2);
  return uVar1;
}

/* ref: FUN_00c53429 */
uint F_00c53429(void)
{
  GEN_ENTER(0xc53429u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(2);
  return uVar1;
}

/* ref: _tmpnam_s */
int F_00c5343f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5343fu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  if ((*(char * PTR32 *)&gen_args[0]) == (char *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  uVar2 = F_00c53303((*(char * PTR32 *)&gen_args[0]),(*(gen_size32 *)&gen_args[1]),2,0x7fffffff,&(*(char * PTR32 *)&gen_args[0]));
  return uVar2;
}

/* ref: _tmpnam */
char * F_00c5347a(unsigned int gen_a0)
{
  GEN_ENTER(0xc5347au, gen_a0, 0u, 0u, 0u);
  char * _Buffer = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x0;
  F_00c53303(_Buffer,0xffffffff,0,0x7fff,&(*(char * PTR32 *)(gen_frame + 0x8)));
  return (*(char * PTR32 *)(gen_frame + 0x8));
}

/* ref: __tmpfile_helper */
uint F_00c534a1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc534a1u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  uint * puVar3;
  int eVar4;
  gen_size32 _Size;
  DWORD _Val;
  undefined * in_edi;
  uint uVar5;
  char * pcVar6;
  undefined4 unaff_EDI = 0;
  uint uVar7;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x1c;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f62a0);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc534ad;
  uVar7 = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if ((*(undefined4 * PTR32 *)&gen_args[0]) == (undefined4 *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
  iVar2 = F_00c5a98d(2);
  if (iVar2 == 0) {
    puVar3 = (uint *)F_00c51f85();
    return *puVar3;
  }
  F_00c5aa4f(2);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  if (REFG(char, 0x15d689c) == '\0') {
    eVar4 = F_00c49908(&REFG(char, 0x15d689c),0x12,&REFG(undefined, 0x1118c14));
    if (eVar4 != 0) {
LAB_00c5357d: ;
                    
      F_00c4c299(unaff_EDI,0,0,0,0,0);
    }
    (*(char * PTR32 *)(gen_frame + 0x10)) = &REFG(undefined1, 0x15d689d);
    if ((REFG(char, 0x15d689c) != '\\') && (REFG(char, 0x15d689c) != '/')) {
      REFG(undefined1, 0x15d689d) = 0x5c;
      (*(char * PTR32 *)(gen_frame + 0x10)) = &REFG(undefined1, 0x15d689e);
    }
    *(*(char * PTR32 *)(gen_frame + 0x10)) = 0x74;
    pcVar6 = (*(char * PTR32 *)(gen_frame + 0x10)) + 1;
    (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar6;
    iVar2 = 0x20;
    _Size = (int)&REFG(undefined, 0x15d68ae) - (int)pcVar6;
    _Val = gen_imp_GetCurrentProcessId();
    eVar4 = F_00c70555(_Val,pcVar6,_Size,iVar2);
    if ((eVar4 != 0) || (eVar4 = F_00c473c8(&REFG(char, 0x15d689c),0x12,&REFG(undefined, 0x1118a34)), eVar4 != 0))
    goto LAB_00c5357d;
  }
  else {
    uVar5 = F_00c53264(&REFG(char, 0x15d689c),0x12,0x7fffffff);
    in_edi = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (uVar5 != 0) goto LAB_00c53631;
  }
  in_edi = F_00c5e47f();
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = in_edi;
  if (in_edi == (undefined *)0x0) {
    uVar7 = 0x18;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    piVar1 = F_00c51f85();
    iVar2 = *piVar1;
    piVar1 = F_00c51f85();
    *piVar1 = 0;
    do {
      eVar4 = F_00c71149(&(*(int *)(gen_frame + 0xc)),&REFG(char, 0x15d689c),0x8542,(*(int *)&gen_args[1]),0x180);
      if (eVar4 != 0x11) break;
      uVar5 = F_00c53264(&REFG(char, 0x15d689c),0x12,0x7fffffff);
    } while (uVar5 == 0);
    piVar1 = F_00c51f85();
    if (*piVar1 == 0) {
      piVar1 = F_00c51f85();
      *piVar1 = iVar2;
    }
    if ((*(int *)(gen_frame + 0xc)) != -1) {
      pcVar6 = F_00c7081f(&REFG(char, 0x15d689c));
      (*(char * PTR32 *)(((char *)(in_edi) + 28))) = pcVar6;
      if (pcVar6 == (char *)0x0) {
        F_00c4e08e((*(int *)(gen_frame + 0xc)));
      }
      else {
        (*(int *)(((char *)(in_edi) + 4))) = 0;
        (*(char * PTR32 *)((char *)(in_edi))) = (char *)0x0;
        (*(char * PTR32 *)(((char *)(in_edi) + 8))) = (char *)0x0;
        (*(int *)(((char *)(in_edi) + 12))) = REFG(undefined4, 0x15d75b4) | 0x80;
        (*(int *)(((char *)(in_edi) + 16))) = (*(int *)(gen_frame + 0xc));
        *(*(undefined4 * PTR32 *)&gen_args[0]) = in_edi;
      }
    }
  }
LAB_00c53631: ;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
  F_00c5367f(0,in_edi,(gen_frame + 0x2c));
  if (uVar7 != 0) {
    puVar3 = (uint *)F_00c51f85();
    *puVar3 = uVar7;
  }
  return uVar7;
}

/* ref: FUN_00c5367a */
uint F_00c5367a(unsigned int gen_a0)
{
  GEN_ENTER(0xc5367au, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ebp + -0x28) != 0) {
    F_00c509aa(*(undefined * PTR32 *)(in_ebp + -0x24));
  }
  uVar1 = F_00c5a95e(2);
  return uVar1;
}

/* ref: FUN_00c5367f */
uint F_00c5367f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5367fu, gen_a0, gen_a1, gen_a2, 0u);
  int in_ebx = (int)gen_a0;
  undefined * in_edi = (undefined *)(uintptr_t)gen_a1;
  int in_ebp = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(in_ebp + -0x28) != in_ebx) {
    F_00c509aa(in_edi);
  }
  uVar1 = F_00c5a95e(2);
  return uVar1;
}

/* ref: _tmpfile */
undefined * F_00c53694(void)
{
  GEN_ENTER(0xc53694u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  F_00c534a1(&(*(undefined * PTR32 *)(gen_frame + 0x8)),0x40);
  return (*(undefined * PTR32 *)(gen_frame + 0x8));
}

/* ref: _tmpfile_s */
int F_00c536b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc536b0u, gen_a0, 0u, 0u, 0u);
  undefined * PTR32 * _File = (undefined * PTR32 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c534a1(_File,0x10);
  return uVar1;
}

/* ref: _clock */
long F_00c536c3(void)
{
  GEN_ENTER(0xc536c3u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_GetSystemTimeAsFileTime(&(*(_FILETIME *)(gen_frame + 0x4)));
  return (long)(CONCAT44((((*(_FILETIME *)(gen_frame + 0x4)).dwHighDateTime - *(int *)&REFG(undefined, 0x15d68cc)) -
                            (uint)(*(int *)&REFG(undefined, 0x15d68c8) != 0)) +
                            (uint)CARRY4(-*(int *)&REFG(undefined, 0x15d68c8),(*(_FILETIME *)(gen_frame + 0x4)).dwLowDateTime),
                            -*(int *)&REFG(undefined, 0x15d68c8) + (*(_FILETIME *)(gen_frame + 0x4)).dwLowDateTime) / 10000);
}

/* ref: ___inittime */
uint F_00c536fd(void)
{
  GEN_ENTER(0xc536fdu, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_GetSystemTimeAsFileTime(&(*(_FILETIME *)(gen_frame + 0x4)));
  *(DWORD *)&REFG(undefined, 0x15d68c8) = (*(_FILETIME *)(gen_frame + 0x4)).dwLowDateTime;
  *(DWORD *)&REFG(undefined, 0x15d68cc) = (*(_FILETIME *)(gen_frame + 0x4)).dwHighDateTime;
  return 0;
}

/* ref: idtab */
uint F_00c5372b(unsigned int gen_a0)
{
  GEN_ENTER(0xc5372bu, gen_a0, 0u, 0u, 0u);
  int in_edi = (int)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int * piVar3;
  
  for (piVar3 = REFG(undefined4, 0x15d68d4); (piVar3 < REFG(undefined4, 0x15d68d4) + REFG(undefined4, 0x15d68d0) * 2 && (*piVar3 != in_edi));
      piVar3 = piVar3 + 2) {
  }
  if (REFG(undefined4, 0x15d68d4) + REFG(undefined4, 0x15d68d0) * 2 <= piVar3) {
    if (((in_edi == 0) && (uVar1 = REFG(undefined4, 0x15d68d0) + 1, REFG(undefined4, 0x15d68d0) <= uVar1)) && (uVar1 < 0x1fffffff)
       ) {
      pvVar2 = F_00c54d0d(REFG(undefined4, 0x15d68d4),uVar1,8);
      uVar1 = REFG(undefined4, 0x15d68d0);
      if (pvVar2 != (undefined *)0x0) {
        REFG(undefined4, 0x15d68d0) = REFG(undefined4, 0x15d68d0) + 1;
        REFG(undefined4, 0x15d68d4) = pvVar2;
        return (uint)(undefined *)((int)pvVar2 + uVar1 * 8);
      }
    }
    piVar3 = (int *)0x0;
  }
  return (uint)piVar3;
}

/* ref: __popen */
undefined * F_00c53789(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc53789u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xcc];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0xc4);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  byte bVar2;
  byte bVar3;
  uchar uVar4;
  int * piVar5;
  byte * pbVar6;
  int iVar7;
  HANDLE pvVar8;
  BOOL BVar9;
  undefined * pFVar10;
  undefined4 * puVar11;
  int eVar12;
  gen_size32 sVar13;
  gen_size32 sVar14;
  LPSTR pCVar15;
  uchar * _Str;
  char * pcVar16;
  uchar * puVar17;
  uint uVar18;
  gen_size32 sVar19;
  bool bVar20;
  
  (*(undefined4 *)(gen_frame + 0xbc)) = 0xa4;
  (*(undefined * PTR32 *)(gen_frame + 0xb8)) = &REFG(undefined, 0x12f62c0);
  (*(undefined4 *)(gen_frame + 0xb4)) = 0xc53798;
  uVar18 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = (undefined *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x94)) = (char *)0x0;
  (*(ushort *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)(gen_frame + 0x9e)) = 0;
  ((uint *)(gen_frame + 0x70))[2] = 0;
  if (((*(char * PTR32 *)&gen_args[0]) == (char *)0x0) || (pbVar6 = (byte *)(*(char * PTR32 *)&gen_args[1]), (*(char * PTR32 *)&gen_args[1]) == (char *)0x0)) {
LAB_00c537b8: ;
    piVar5 = F_00c51f85();
    *piVar5 = 0x16;
    F_00c4c305();
    return (undefined *)0x0;
  }
  for (; *pbVar6 == 0x20; pbVar6 = pbVar6 + 1) {
  }
  bVar2 = *pbVar6;
  if ((bVar2 != 0x77) && (bVar2 != 0x72)) goto LAB_00c537b8;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x9c)) + 0)) = bVar2;
  (*(ushort *)(gen_frame + 0x9c)) = (ushort)bVar2;
  do {
    pbVar6 = pbVar6 + 1;
  } while (*pbVar6 == 0x20);
  bVar3 = *pbVar6;
  if (((bVar3 != 0) && (bVar3 != 0x74)) && (bVar3 != 0x62)) goto LAB_00c537b8;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x9c)) + 1)) = bVar3;
  (*(ushort *)(gen_frame + 0x9c)) = CONCAT11(bVar3,bVar2);
  if (bVar3 == 0x74) {
    uVar18 = 0x4000;
  }
  else if (bVar3 == 0x62) {
    uVar18 = 0x8000;
  }
  iVar7 = F_00c71374((int *)((uint *)(gen_frame + 0x70)),0x400,uVar18 | 0x80);
  if (iVar7 == -1) {
    return (*(undefined * PTR32 *)(gen_frame + 0x90));
  }
  bVar20 = (byte)(*(ushort *)(gen_frame + 0x9c)) != 'w';
  if (bVar20) {
    (*(LPSTR *)(gen_frame + 0xa0)) = (LPSTR)0x1;
    (*(uint *)(gen_frame + 0x8c)) = 1;
    (*(uint *)(gen_frame + 0x88)) = 0;
  }
  else {
    (*(LPSTR *)(gen_frame + 0xa0)) = (LPSTR)0x0;
    (*(uint *)(gen_frame + 0x8c)) = 0;
    (*(uint *)(gen_frame + 0x88)) = 1;
  }
  (*(LPSTR *)(gen_frame + 0xa0)) = (LPSTR)(uint)bVar20;
  (*(uint *)(gen_frame + 0x8c)) = (uint)bVar20;
  (*(uint *)(gen_frame + 0x88)) = (uint)!bVar20;
  iVar7 = F_00c5a98d(9);
  if (iVar7 == 0) {
    F_00c4e08e(((uint *)(gen_frame + 0x70))[0]);
    F_00c4e08e(((uint *)(gen_frame + 0x70))[1]);
    return (undefined *)0x0;
  }
  F_00c5aa4f(9);
  (*(undefined * PTR32 *)(gen_frame + 0xb8)) = (undefined *)0x0;
  ((int *)(gen_frame + 0x64))[1] = 1;
  ((int *)(gen_frame + 0x64))[0] = 1;
  pvVar8 = gen_imp_GetCurrentProcess();
  puVar1 = ((uint *)(gen_frame + 0x70)) + (*(uint *)(gen_frame + 0x8c));
  uVar18 = *puVar1;
  BVar9 = gen_imp_DuplicateHandle(pvVar8,*((HANDLE *)GEN_TOP(((int)(&REFG(undefined4, 0x15e41a0))[(int)uVar18 >> 5] + (uVar18 & 0x1f) * 0x40))),
                          pvVar8,&(*(HANDLE *)(gen_frame + 0x7c)),0,1,2);
  if (BVar9 != 0) {
    F_00c4e08e(*puVar1);
    ((int *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x8c)))] = 0;
    pFVar10 = F_00c711fe(((uint *)(gen_frame + 0x70))[(int)((*(uint *)(gen_frame + 0x88)))],(char *)&(*(ushort *)(gen_frame + 0x9c)));
    (*(undefined * PTR32 *)(gen_frame + 0x90)) = pFVar10;
    if (pFVar10 != (undefined *)0x0) {
      sVar19 = 0;
      puVar11 = (undefined4 *)F_00c5372b(0);
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = puVar11;
      if (puVar11 != (undefined4 *)0x0) {
        eVar12 = F_00c4b6eb(&(*(char * PTR32 *)(gen_frame + 0x94)),(gen_size32 *)0x0,"COMSPEC");
        if (eVar12 == 0) {
LAB_00c53934: ;
          (*(char * PTR32 *)(gen_frame + 0x98)) = (*(char * PTR32 *)(gen_frame + 0x94));
          if ((*(char * PTR32 *)(gen_frame + 0x94)) == (char *)0x0) goto LAB_00c5393e;
        }
        else {
          if (eVar12 == 0x16) goto LAB_00c53927;
          if (eVar12 == 0) goto LAB_00c53934;
LAB_00c5393e: ;
          (*(char * PTR32 *)(gen_frame + 0x98)) = "cmd.exe";
        }
        F_00c48350(&(*(_STARTUPINFOA *)(gen_frame + 0x8)),0,0x44);
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).cb = 0x44;
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).dwFlags = 0x100;
        pvVar8 = (*(HANDLE *)(gen_frame + 0x7c));
        if ((*(LPSTR *)(gen_frame + 0xa0)) != (LPSTR)0x0) {
          pvVar8 = (HANDLE)*REFG(int * PTR32, 0x15e41a0);
        }
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).hStdInput = pvVar8;
        pvVar8 = (*(HANDLE *)(gen_frame + 0x7c));
        if ((*(LPSTR *)(gen_frame + 0xa0)) != (LPSTR)0x1) {
          pvVar8 = (HANDLE)REFG(int * PTR32, 0x15e41a0)[0x10];
        }
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).hStdOutput = pvVar8;
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).hStdError = (HANDLE)REFG(int * PTR32, 0x15e41a0)[0x20];
        sVar19 = F_00c552f0((*(char * PTR32 *)(gen_frame + 0x98)));
        sVar13 = F_00c552f0((*(char * PTR32 *)&gen_args[0]));
        sVar14 = F_00c552f0(" /c ");
        sVar19 = sVar14 + 1 + sVar19 + sVar13;
        pCVar15 = F_00c54c73(sVar19,1);
        (*(LPSTR *)(gen_frame + 0xa0)) = pCVar15;
        if (pCVar15 != (LPSTR)0x0) {
          eVar12 = F_00c49908(pCVar15,sVar19,(*(char * PTR32 *)(gen_frame + 0x98)));
          if (((eVar12 != 0) || (eVar12 = F_00c473c8((*(LPSTR *)(gen_frame + 0xa0)),sVar19,&REFG(undefined, 0x1118c20)), eVar12 != 0)) ||
             (eVar12 = F_00c473c8((*(LPSTR *)(gen_frame + 0xa0)),sVar19,(*(char * PTR32 *)&gen_args[0])), eVar12 != 0)) {
LAB_00c53927: ;
                    
            F_00c4c299(sVar19,0,0,0,0,0);
          }
          piVar5 = F_00c51f85();
          (*(int *)(gen_frame + 0x84)) = *piVar5;
          eVar12 = F_00c703b3((*(char * PTR32 *)(gen_frame + 0x98)),0);
          if (eVar12 == 0) {
            BVar9 = gen_imp_CreateProcessA((*(char * PTR32 *)(gen_frame + 0x98)),(*(LPSTR *)(gen_frame + 0xa0)),(GEN_LPANY)0x0,
                                   (GEN_LPANY)0x0,1,0,(LPVOID)0x0,(LPCSTR)0x0,&(*(_STARTUPINFOA *)(gen_frame + 0x8)),
                                   ((undefined *)(gen_frame + 0x4c)));
            ((uint *)(gen_frame + 0x70))[2] = BVar9;
          }
          else {
            (*(char * PTR32 *)&gen_args[0]) = (char *)0x0;
            sVar19 = 0x104;
            _Str = F_00c54c73(0x104,1);
            (*(uchar * PTR32 *)(gen_frame + 0x60)) = _Str;
            if (_Str == (uchar *)0x0) {
              F_00c4c68f((undefined *)0x0);
              F_00c4c68f((*(LPSTR *)(gen_frame + 0xa0)));
              F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x94)));
LAB_00c53a80: ;
              piVar5 = F_00c51f85();
              *piVar5 = (*(int *)(gen_frame + 0x84));
              goto LAB_00c53bfa;
            }
            eVar12 = F_00c4b6eb(&(*(char * PTR32 *)&gen_args[0]),(gen_size32 *)0x0,"GEN_LPANY");
            pcVar16 = (*(char * PTR32 *)&gen_args[0]);
            if (eVar12 != 0) {
              if (eVar12 == 0x16) goto LAB_00c53927;
              if (eVar12 != 0) {
                F_00c4c68f((*(char * PTR32 *)&gen_args[0]));
                F_00c4c68f(_Str);
                F_00c4c68f((*(LPSTR *)(gen_frame + 0xa0)));
                F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x94)));
                goto LAB_00c53a80;
              }
            }
            do {
              pcVar16 = F_00c71169(pcVar16,_Str,0x103);
              (*(char * PTR32 *)(gen_frame + 0x5c)) = pcVar16;
              if ((pcVar16 == (char *)0x0) || (*_Str == '\0')) goto LAB_00c53b98;
              sVar13 = F_00c552f0((char *)_Str);
              (*(uchar * PTR32 *)(gen_frame + 0x80)) = _Str + (sVar13 - 1);
              uVar4 = _Str[sVar13 - 1];
              if (uVar4 == '\\') {
                puVar17 = F_00c7075f(_Str,0x5c);
                bVar20 = (*(uchar * PTR32 *)(gen_frame + 0x80)) == puVar17;
              }
              else {
                bVar20 = uVar4 == '/';
              }
              if ((!bVar20) && (eVar12 = F_00c473c8(_Str,0x104,&REFG(undefined, 0x1118c14)), eVar12 != 0))
              goto LAB_00c53927;
              puVar17 = (uchar *)F_00c552f0((*(char * PTR32 *)(gen_frame + 0x98)));
              (*(uchar * PTR32 *)(gen_frame + 0x80)) = puVar17;
              sVar13 = F_00c552f0((char *)_Str);
              _Str = (*(uchar * PTR32 *)(gen_frame + 0x60));
              if ((uchar *)0x103 < (*(uchar * PTR32 *)(gen_frame + 0x80)) + sVar13) goto LAB_00c53b98;
              eVar12 = F_00c473c8((*(uchar * PTR32 *)(gen_frame + 0x60)),0x104,(*(char * PTR32 *)(gen_frame + 0x98)));
              if (eVar12 != 0) goto LAB_00c53927;
              eVar12 = F_00c703b3((char *)_Str,0);
              pcVar16 = (*(char * PTR32 *)(gen_frame + 0x5c));
            } while (eVar12 != 0);
            BVar9 = gen_imp_CreateProcessA((LPCSTR)_Str,(*(LPSTR *)(gen_frame + 0xa0)),(GEN_LPANY)0x0,
                                   (GEN_LPANY)0x0,1,0,(LPVOID)0x0,(LPCSTR)0x0,&(*(_STARTUPINFOA *)(gen_frame + 0x8)),
                                   ((undefined *)(gen_frame + 0x4c)));
            ((uint *)(gen_frame + 0x70))[2] = BVar9;
LAB_00c53b98: ;
            F_00c4c68f((*(char * PTR32 *)&gen_args[0]));
            F_00c4c68f(_Str);
          }
          F_00c4c68f((*(LPSTR *)(gen_frame + 0xa0)));
          F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x94)));
          gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x7c)));
          gen_imp_CloseHandle((*(HANDLE *)(((char *)((undefined *)(gen_frame + 0x4c)) + 4))));
          piVar5 = F_00c51f85();
          *piVar5 = (*(int *)(gen_frame + 0x84));
          if (((uint *)(gen_frame + 0x70))[2] != 0) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x6c))[1] = (*(HANDLE *)((char *)((undefined *)(gen_frame + 0x4c))));
            *(*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 *)(gen_frame + 0x90));
            goto LAB_00c53c33;
          }
          *(*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = 0;
        }
      }
LAB_00c53bfa: ;
      F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x90)));
      ((int *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x88)))] = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x90)) = (undefined *)0x0;
    }
  }
  if (((int *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x8c)))] != 0) {
    F_00c4e08e(((uint *)(gen_frame + 0x70))[(int)((*(uint *)(gen_frame + 0x8c)))]);
  }
  if (((int *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x88)))] != 0) {
    F_00c4e08e(((uint *)(gen_frame + 0x70))[(int)((*(uint *)(gen_frame + 0x88)))]);
  }
LAB_00c53c33: ;
  (*(undefined * PTR32 *)(gen_frame + 0xb8)) = (undefined *)0xfffffffe;
  F_00c53c48();
  return (*(undefined * PTR32 *)(gen_frame + 0x90));
}

/* ref: FUN_00c53c48 */
uint F_00c53c48(void)
{
  GEN_ENTER(0xc53c48u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(9);
  return uVar1;
}

/* ref: __pclose */
int F_00c53c51(unsigned int gen_a0)
{
  GEN_ENTER(0xc53c51u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  undefined * _File_00;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f62e0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc53c5d;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)0xffffffff;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    iVar2 = F_00c5a98d(9);
    if (iVar2 != 0) {
      F_00c5aa4f(9);
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
      puVar3 = (undefined4 *)F_00c5372b(_File_00);
      if (puVar3 == (undefined4 *)0x0) {
        piVar1 = F_00c51f85();
        *piVar1 = 9;
      }
      else {
        F_00c49312(_File_00);
        piVar1 = F_00c51f85();
        iVar2 = *piVar1;
        piVar1 = F_00c51f85();
        *piVar1 = 0;
        iVar4 = F_00c7161a((int *)&(*(undefined * PTR32 *)&gen_args[0]),puVar3[1],1);
        if ((iVar4 != -1) || (piVar1 = F_00c51f85(), *piVar1 == 4)) {
          (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)&gen_args[0]);
        }
        piVar1 = F_00c51f85();
        *piVar1 = iVar2;
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
      F_00c53d13();
      return (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
    }
  }
  return -1;
}

/* ref: FUN_00c53d13 */
uint F_00c53d13(void)
{
  GEN_ENTER(0xc53d13u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(9);
  return uVar1;
}

/* ref: vfscanf */
uint F_00c53d1c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc53d1cu, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined * puVar3;
  
  _File = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6300);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc53d28;
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
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c53dde;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
LAB_00c53dde: ;
  if ((*(uint *)(gen_frame + 0x0)) == 0) {
    uVar2 = ((code *)(*(gen_code32 *)&gen_args[0]))(_File,(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    (*(uint *)(gen_frame + 0x0)) = uVar2;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c53e0e(_File);
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c53e0b */
uint F_00c53e0b(unsigned int gen_a0)
{
  GEN_ENTER(0xc53e0bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: FUN_00c53e0e */
uint F_00c53e0e(unsigned int gen_a0)
{
  GEN_ENTER(0xc53e0eu, gen_a0, 0u, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: FID_conflict__fscanf_00c53e16 */
int F_00c53e16(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc53e16u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c53d1c(((code *)REFP(0xc656fd)),_File,_Format,0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FID_conflict___fscanf_l_00c53e36 */
int F_00c53e36(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc53e36u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c53d1c(((code *)REFP(0xc656fd)),_File,_Format,_Locale,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FID_conflict__fscanf_00c53e57 */
int F_00c53e57(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc53e57u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c53d1c(((code *)REFP(0xc667cb)),_File,_Format,0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FID_conflict___fscanf_l_00c53e77 */
int F_00c53e77(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc53e77u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c53d1c(((code *)REFP(0xc667cb)),_File,_Format,_Locale,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: _clearerr_s */
int F_00c53e98(unsigned int gen_a0)
{
  GEN_ENTER(0xc53e98u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x18];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  undefined * _File_00;
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined * puVar4;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f6320);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc53ea4;
  if ((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) & 0xffffffcf;
    iVar2 = F_00c5d07b(_File_00);
    if ((iVar2 == -1) || (iVar2 = F_00c5d07b(_File_00), iVar2 == -2)) {
      puVar4 = &REFG(undefined, 0x134b280);
    }
    else {
      iVar2 = F_00c5d07b(_File_00);
      uVar3 = F_00c5d07b(_File_00);
      puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar2 >> 5])));
    }
    puVar4[4] = puVar4[4] & 0xfd;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    F_00c53f34(_File_00);
    return 0;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0x16;
}

/* ref: FUN_00c53f31 */
uint F_00c53f31(unsigned int gen_a0)
{
  GEN_ENTER(0xc53f31u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: FUN_00c53f34 */
uint F_00c53f34(unsigned int gen_a0)
{
  GEN_ENTER(0xc53f34u, gen_a0, 0u, 0u, 0u);
  undefined * in_edi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_edi);
  return extraout_EAX;
}

/* ref: FUN_00c53f3c */
uint F_00c53f3c(unsigned int gen_a0)
{
  GEN_ENTER(0xc53f3cu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c53e98(param_1);
  return uVar1;
}

/* ref: __vswprintf_helper */
uint F_00c53f47(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc53f47u, gen_a0, gen_a1, gen_a2, gen_a3);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if (param_4 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  if ((param_3 != 0) && (param_2 == (char *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
  (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = param_2;
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = param_2;
  if (param_3 < 0x40000000) {
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = param_3 * 2;
  }
  else {
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
  }
  uVar2 = (*param_1)(((undefined *)(gen_frame + 0xc)),param_4,param_5,param_6);
  if (param_2 == (char *)0x0) {
    return uVar2;
  }
  if (-1 < (int)uVar2) {
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
    if (iVar3 < 0) {
      iVar3 = F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
      if (iVar3 == -1) goto LAB_00c54028;
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = '\0';
      (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) + 1;
    }
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
    if (-1 < iVar3) {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = '\0';
      return uVar2;
    }
    iVar3 = F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    if (iVar3 != -1) {
      return uVar2;
    }
  }
LAB_00c54028: ;
  (param_2 + param_3 * 2 + -2)[0] = '\0';
  (param_2 + param_3 * 2 + -2)[1] = '\0';
  return (-1 < (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)))) - 2;
}

/* ref: FID_conflict___vswprintf_c_00c5403d */
int F_00c5403d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5403du, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _SizeInWords = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c53f47(((code *)REFP(0xc59b62)),_DstBuf,_SizeInWords,_Format,0,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FID_conflict___vswprintf_p_l_00c54066 */
int F_00c54066(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc54066u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c53f47(((code *)REFP(0xc59b62)),_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: __vswprintf_s_l */
int F_00c54090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc54090u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;
  int * piVar1;
  uint uVar2;
  
  if (_Format == (wchar_t *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  if ((_DstBuf == (wchar_t *)0x0) || (_DstSize == 0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
  }
  else {
    uVar2 = F_00c53f47(((code *)REFP(0xc71768)),_DstBuf,_DstSize,_Format,_Locale,_ArgList);
    if ((int)uVar2 < 0) {
      *_DstBuf = L'\0';
    }
    if (uVar2 != 0xfffffffe) {
      return uVar2;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x22;
  }
  F_00c4c305();
  return -1;
}

/* ref: _vswprintf_s */
int F_00c54109(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc54109u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _Dst = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _SizeInWords = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = F_00c54090(_Dst,_SizeInWords,_Format,(undefined *)0x0,_ArgList);
  return iVar1;
}

/* ref: __vsnwprintf_s_l */
int F_00c54126(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc54126u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a3;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a4;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a5;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (_Format == (wchar_t *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (wchar_t *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_00c54167: ;
      if (_DstSize != 0) {
        piVar2 = F_00c51f85();
        if (_MaxCount < _DstSize) {
          iVar1 = *piVar2;
          uVar3 = F_00c53f47(((code *)REFP(0xc71768)),_DstBuf,_MaxCount + 1,_Format,_Locale,_ArgList);
          if (uVar3 == 0xfffffffe) {
            piVar2 = F_00c51f85();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = F_00c51f85();
            *piVar2 = iVar1;
            return -1;
          }
LAB_00c541f0: ;
          if (-1 < (int)uVar3) {
            return uVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          uVar3 = F_00c53f47(((code *)REFP(0xc71768)),_DstBuf,_DstSize,_Format,_Locale,_ArgList);
          _DstBuf[_DstSize - 1] = L'\0';
          if (uVar3 != 0xfffffffe) goto LAB_00c541f0;
          if (_MaxCount == 0xffffffff) {
            piVar2 = F_00c51f85();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = F_00c51f85();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *_DstBuf = L'\0';
        if (uVar3 != 0xfffffffe) {
          return -1;
        }
        piVar2 = F_00c51f85();
        *piVar2 = 0x22;
        goto LAB_00c54209;
      }
    }
  }
  else if (_DstBuf != (wchar_t *)0x0) goto LAB_00c54167;
  piVar2 = F_00c51f85();
  *piVar2 = 0x16;
LAB_00c54209: ;
  F_00c4c305();
  return -1;
}

/* ref: __vsnwprintf_s */
int F_00c54216(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc54216u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _SizeInWords = (gen_size32)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a3;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = F_00c54126(_DstBuf,_SizeInWords,_MaxCount,_Format,(undefined *)0x0,_ArgList);
  return iVar1;
}

/* ref: FID_conflict___vswprintf_c_00c54236 */
int F_00c54236(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc54236u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _SizeInWords = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c53f47(((code *)REFP(0xc72530)),_DstBuf,_SizeInWords,_Format,0,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FID_conflict___vswprintf_p_l_00c5425f */
int F_00c5425f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5425fu, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c53f47(((code *)REFP(0xc72530)),_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00c5429a */
uint F_00c5429a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5429au, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  in_ecx[1] = *param_2;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: std::exception::vf1 */
uint F_00c542b7(unsigned int gen_a0)
{
  GEN_ENTER(0xc542b7u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  char * pcVar1;
  
  pcVar1 = *(char * PTR32 *)(in_ecx + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return (uint)pcVar1;
}

/* ref: std::exception::_Copy_str */
unsigned int F_00c542c4(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc542c4u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 sVar1;
  undefined * pvVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = F_00c552f0(param_1);
    pvVar2 = F_00c51787(sVar1 + 1);
    *(undefined * PTR32 *)(this + 4) = pvVar2;
    if (pvVar2 != (undefined *)0x0) {
      F_00c49908(pvVar2,sVar1 + 1,param_1);
      this[8] = (undefined1)0x1;
    }
  }
  return 0;
}

/* ref: std::exception::_Tidy */
unsigned int F_00c54304(unsigned int gen_a0)
{
  GEN_ENTER(0xc54304u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[8] != (undefined1)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  this[8] = (undefined1)0x0;
  return 0;
}

/* ref: std::exception::exception_00c54322 */
undefined * F_00c54322(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54322u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * PTR32 * param_1 = (char * PTR32 *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  this[8] = (undefined1)0x0;
  F_00c542c4(this,*param_1);
  return this;
}

/* ref: std::exception::operator= */
undefined * F_00c54349(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54349u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_00c54304(this);
    if (param_1[8] == (undefined1)0x0) {
      *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    }
    else {
      F_00c542c4(this,*(char * PTR32 *)(param_1 + 4));
    }
  }
  return this;
}

/* ref: FUN_00c5437e */
unsigned int F_00c5437e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5437eu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304(this);
  return 0;
}

/* ref: FUN_00c54389 */
uint F_00c54389(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54389u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118c4c));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: std::bad_typeid::bad_typeid */
undefined * F_00c543b2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc543b2u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((undefined *)(*(undefined * PTR32 *)&gen_args[0]),&(*(char * PTR32 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118c58));
  return (*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: std::__non_rtti_object::__non_rtti_object */
undefined * F_00c543db(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc543dbu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  F_00c543b2((undefined *)this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c64));
  return this;
}

/* ref: std::exception::vf0 */
uint F_00c54403(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54403u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::exception::exception_00c5442a */
undefined * F_00c5442a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5442au, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  this[8] = (undefined1)0x0;
  F_00c54349(this,param_1);
  return this;
}

/* ref: std::bad_cast::vf0 */
uint F_00c5444f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5444fu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304((undefined *)this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c54476 */
uint F_00c54476(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54476u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c4c));
  return (uint)this;
}

/* ref: std::bad_typeid::vf0 */
uint F_00c54493(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54493u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304((undefined *)this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c544ba */
uint F_00c544ba(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc544bau, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c58));
  return (uint)this;
}

/* ref: std::__non_rtti_object::vf0 */
uint F_00c544d7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc544d7u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304((undefined *)this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c544fe */
uint F_00c544fe(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc544feu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00c544ba(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c64));
  return (uint)this;
}

/* ref: strncnt_00c5451b */
int F_00c5451b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5451bu, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_2;
  for (; (iVar1 != 0 && (*in_eax != '\0')); in_eax = in_eax + 1) {
    iVar1 = iVar1 + -1;
  }
  return (param_2 - (iVar1 + -1)) + -1;
}

/* ref: __crtLCMapStringA_stat */
int F_00c54539(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc54539u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulong param_2 = (ulong)gen_a1;
  ulong param_3 = (ulong)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  char * param_6 = (char *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x10020];
  bool bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  LPCWSTR lpWideCharStr;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x10018)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pcVar2 = param_4;
  iVar8 = param_5;
  if (0 < param_5) {
    do {
      iVar8 = iVar8 + -1;
      if (*pcVar2 == '\0') goto LAB_00c54569;
      pcVar2 = pcVar2 + 1;
    } while (iVar8 != 0);
    iVar8 = -1;
LAB_00c54569: ;
    iVar8 = param_5 - iVar8;
    iVar3 = iVar8 + -1;
    bVar1 = iVar3 < param_5;
    param_5 = iVar3;
    if (bVar1) {
      param_5 = iVar8;
    }
  }
  (*(uint *)(gen_frame + 0x10014)) = 0;
  if (param_8 == 0) {
    param_8 = (*((uint *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)(param_1))) + 4)))));
  }
  uVar4 = gen_imp_MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,param_5,0,0);
  (*(uint *)(gen_frame + 0x1000c)) = uVar4;
  if (uVar4 != 0) {
    if (((int)uVar4 < 1) || (0xffffffe0 / uVar4 < 2)) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10010)) = (undefined4 *)0x0;
    }
    else {
      uVar7 = uVar4 * 2 + 8;
      if (uVar7 < 0x401) {
        puVar5 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
        puVar6 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
        if (1) {
LAB_00c545f9: ;
          puVar6 = puVar5 + 2;
        }
      }
      else {
        puVar5 = F_00c51787(uVar7);
        puVar6 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_00c545f9;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x10010)) = puVar6;
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x10010)) != (undefined4 *)0x0) {
      iVar8 = gen_imp_MultiByteToWideChar(param_8,1,param_4,param_5,(*(undefined4 * PTR32 *)(gen_frame + 0x10010)),uVar4);
      if (iVar8 != 0) {
        uVar7 = gen_imp_LCMapStringW(param_2,param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x10010)),uVar4,0,0);
        (*(uint *)(gen_frame + 0x10014)) = uVar7;
        if (uVar7 != 0) {
          if ((param_3 & 0x400) == 0) {
            if (((int)uVar7 < 1) || (0xffffffe0 / uVar7 < 2)) {
              lpWideCharStr = (LPCWSTR)0x0;
            }
            else {
              uVar4 = uVar7 * 2 + 8;
              if (uVar4 < 0x401) {
                if (0) goto LAB_00c54702;
                lpWideCharStr = (LPCWSTR)(gen_frame + 0x8);
              }
              else {
                lpWideCharStr = F_00c51787(uVar4);
                if (lpWideCharStr != (LPCWSTR)0x0) {
                  lpWideCharStr[0] = L'\xdddd';
                  lpWideCharStr[1] = L'\0';
                  lpWideCharStr = lpWideCharStr + 4;
                }
              }
            }
            if (lpWideCharStr != (LPCWSTR)0x0) {
              iVar8 = gen_imp_LCMapStringW(param_2,param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x10010)),(*(uint *)(gen_frame + 0x1000c)),lpWideCharStr,(*(uint *)(gen_frame + 0x10014)));
              if (iVar8 != 0) {
                pcVar2 = param_6;
                iVar8 = param_7;
                if (param_7 == 0) {
                  iVar8 = 0;
                  pcVar2 = (LPSTR)0x0;
                }
                uVar4 = gen_imp_WideCharToMultiByte(param_8,0,lpWideCharStr,(*(uint *)(gen_frame + 0x10014)),pcVar2,iVar8,(LPCSTR)0x0
                                            ,(LPBOOL)0x0);
                (*(uint *)(gen_frame + 0x10014)) = uVar4;
              }
              F_00c4f78f(lpWideCharStr);
            }
          }
          else if ((param_7 != 0) && ((int)uVar7 <= param_7)) {
            gen_imp_LCMapStringW(param_2,param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x10010)),uVar4,param_6,param_7);
          }
        }
      }
LAB_00c54702: ;
      F_00c4f78f((*(undefined4 * PTR32 *)(gen_frame + 0x10010)));
      uVar4 = (*(uint *)(gen_frame + 0x10014));
      goto LAB_00c5470e;
    }
  }
  uVar4 = 0;
LAB_00c5470e: ;
  F_00c47745((*(uint *)(gen_frame + 0x10018)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar4;
}

/* ref: ___crtLCMapStringA */
int F_00c54720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc54720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a0;
  LPCWSTR _LocaleName = (LPCWSTR)gen_a1;
  DWORD _DwMapFlag = (DWORD)gen_a2;
  LPCSTR _LpSrcStr = (LPCSTR)gen_a3;
  int _CchSrc = (int)gen_a4;
  LPSTR _LpDestStr = (LPSTR)gen_a5;
  int _CchDest = (int)gen_a6;
  int _Code_page = (int)gen_a7;
  BOOL _BError = (BOOL)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Plocinfo);
  iVar1 = F_00c54539((undefined *)((byte *)(gen_frame + 0xc)),(ulong)_LocaleName,_DwMapFlag,_LpSrcStr,_CchSrc,
                     _LpDestStr,_CchDest,_Code_page,_BError);
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar1;
}

/* ref: ___pctype_func */
ushort * F_00c5476c(void)
{
  GEN_ENTER(0xc5476cu, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  undefined * ptVar2;
  
  p_Var1 = F_00c5b37a();
  ptVar2 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 108)));
  if ((ptVar2 != (undefined *)REFG(undefined * PTR32, 0x134ba28)) && (((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0)) {
    ptVar2 = F_00c5cdf6();
  }
  return (ushort *)(*((char * PTR32 *)GEN_TOP((((((char *)(ptVar2) + (1) * 184) + 16) + (0) * 16)))));
}

/* ref: ___init_ctype */
int F_00c54795(unsigned int gen_a0)
{
  GEN_ENTER(0xc54795u, gen_a0, 0u, 0u, 0u);
  undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 * puVar4;
  BYTE * pBVar5;
  undefined * pvVar6;
  BOOL BVar7;
  LONG LVar8;
  BYTE * pBVar9;
  undefined * pvVar10;
  BYTE * pBVar11;
  int iVar12;
  uint uVar13;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar12 = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (undefined4 *)0x0;
  (*(BYTE * PTR32 *)(gen_frame + 0x30)) = (BYTE *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = _LocInfo;
  (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = (undefined *)0x0;
  if ((*((wchar_t * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 4))))) == (wchar_t *)0x0) {
    if ((LONG *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))) != (LONG *)0x0) {
      gen_imp_InterlockedDecrement((LONG *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))));
    }
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))) = 0;
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 12))))) = 0;
    (*((char * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16))))) = " ";
    (*((wchar_t * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 4))))) = (wchar_t *)&REFG(undefined, 0x11191f8);
    (*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 8))))) = (int *)&REFG(undefined, 0x1119378);
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (3) * 4))))) = (wchar_t *)0x1;
    iVar12 = 0;
    goto LAB_00c54b2d;
  }
  if (((*(uint *)(((char *)(_LocInfo) + 4))) == 0) &&
     (iVar3 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,
                               (LPCWSTR)(uint)*(ushort *)&(*((char * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 16) + (2) * 16))))),0x1004,
                               &(*(uint *)(((char *)(_LocInfo) + 4)))), iVar3 != 0)) {
LAB_00c54abe: ;
    F_00c4c68f((*(undefined4 * PTR32 *)(gen_frame + 0x20)));
    F_00c4c68f((*(BYTE * PTR32 *)(gen_frame + 0x30)));
    F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x2c)));
    F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x24)));
    iVar12 = 1;
  }
  else {
    puVar4 = F_00c54c2e(4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar4;
    pBVar5 = F_00c54c73(0x180,2);
    (*(BYTE * PTR32 *)(gen_frame + 0x30)) = pBVar5;
    pvVar6 = F_00c54c73(0x180,1);
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar6;
    pvVar6 = F_00c54c73(0x180,1);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar6;
    pvVar6 = F_00c54c73(0x101,1);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar6;
    if (((*(undefined4 * PTR32 *)(gen_frame + 0x20)) == (undefined4 *)0x0) ||
       (((((*(BYTE * PTR32 *)(gen_frame + 0x30)) == (BYTE *)0x0 || (pvVar6 == (undefined *)0x0)) || ((*(undefined * PTR32 *)(gen_frame + 0x2c)) == (undefined *)0x0)) ||
        ((*(undefined * PTR32 *)(gen_frame + 0x24)) == (undefined *)0x0)))) goto LAB_00c54abe;
    *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = 0;
    iVar3 = 0;
    do {
      *(char *)(iVar3 + (int)pvVar6) = (char)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    BVar7 = gen_imp_GetCPInfo((*(uint *)(((char *)(_LocInfo) + 4))),((undefined *)(gen_frame + 0x34)));
    if ((BVar7 == 0) || (5 < (*(UINT *)((char *)((undefined *)(gen_frame + 0x34)))))) goto LAB_00c54abe;
    (*(wchar_t * PTR32 *)(gen_frame + 0x1c)) = (wchar_t *)((*(UINT *)((char *)((undefined *)(gen_frame + 0x34)))) & 0xffff);
    if (((wchar_t *)0x1 < (wchar_t *)((*(UINT *)((char *)((undefined *)(gen_frame + 0x34)))) & 0xffff)) &&
       ((*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x34)) + 6) + (0) * 1))))) != '\0')) {
      pBVar5 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x34)) + 6))) + 1;
      do {
        bVar2 = *pBVar5;
        if (bVar2 == 0) break;
        for (uVar13 = (uint)pBVar5[-1]; (int)uVar13 <= (int)(uint)bVar2; uVar13 = uVar13 + 1) {
          *(undefined1 *)(uVar13 + (int)(*(undefined * PTR32 *)(gen_frame + 0x28))) = 0x20;
          bVar2 = *pBVar5;
        }
        pBVar9 = pBVar5 + 1;
        pBVar5 = pBVar5 + 2;
      } while (*pBVar9 != 0);
    }
    (*(byte * PTR32 *)(gen_frame + 0xc)) = (*(BYTE * PTR32 *)(gen_frame + 0x30)) + 0x100;
    BVar7 = F_00c635a3(0,1,(*(undefined * PTR32 *)(gen_frame + 0x28)),0x100,(*(BYTE * PTR32 *)(gen_frame + 0x30)) + 0x100,(*(uint *)(((char *)(_LocInfo) + 4))),0,0);
    if (((BVar7 == 0) ||
        (iVar3 = F_00c54720((undefined *)0x0,(*((wchar_t * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 4))))),0x100,
                                    (LPCSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 1),0xff,(LPSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x81),
                                    0xff,(*(uint *)(((char *)(_LocInfo) + 4))),0), iVar3 == 0)) ||
       (iVar3 = F_00c54720((undefined *)0x0,(*((wchar_t * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 4))))),0x200,
                                   (LPCSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 1),0xff,(LPSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x81),
                                   0xff,(*(uint *)(((char *)(_LocInfo) + 4))),0), pBVar5 = (*(BYTE * PTR32 *)(gen_frame + 0x30)),
       pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x2c)), iVar3 == 0)) goto LAB_00c54abe;
    pbVar1 = (*(BYTE * PTR32 *)(gen_frame + 0x30)) + 0xfe;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar1;
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x7f) = 0;
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x7f) = 0;
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80) = 0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = (wchar_t *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80);
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x80);
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x80) = 0;
    if ((1 < (int)(*(wchar_t * PTR32 *)(gen_frame + 0x1c))) && ((*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x34)) + 6) + (0) * 1))))) != '\0')) {
      (*(BYTE * PTR32 *)(gen_frame + 0x30)) = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x34)) + 6))) + 1;
      pBVar9 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x34)) + 6))) + 1;
      do {
        (*(BYTE * PTR32 *)(gen_frame + 0x30)) = pBVar9;
        if (*pBVar9 == 0) break;
        pvVar10 = (undefined *)(uint)pBVar9[-1];
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar10;
        if (pvVar10 <= (undefined *)(uint)*pBVar9) {
          pBVar11 = pBVar5 + (int)((int)(uintptr_t)pvVar10) * 2 + 0x100;
          do {
            pvVar10 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 1);
            (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar10;
            pBVar11[0] = '\0';
            pBVar11[1] = 0x80;
            pBVar11 = pBVar11 + 2;
            (*(BYTE * PTR32 *)(gen_frame + 0x18)) = pBVar11;
          } while ((int)pvVar10 <= (int)(uint)*pBVar9);
        }
        (*(BYTE * PTR32 *)(gen_frame + 0x30)) = pBVar9 + 2;
        pBVar11 = pBVar9 + 1;
        pBVar9 = pBVar9 + 2;
      } while (*pBVar11 != 0);
    }
    F_00c46aa0(pBVar5,pBVar5 + 0x200,0xfe);
    F_00c46aa0(pvVar6,(int)pvVar6 + 0x100,0x7f);
    F_00c46aa0((*(undefined * PTR32 *)(gen_frame + 0x24)),(int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x100,0x7f);
    if (((LONG *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))) != (LONG *)0x0) &&
       (LVar8 = gen_imp_InterlockedDecrement((LONG *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8)))))), LVar8 == 0)) {
      F_00c4c68f(((undefined *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 12))))) - 0xfe))));
      F_00c4c68f((*((wchar_t * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 4))))) + -0x40);
      F_00c4c68f((*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 8))))) + -0x20);
      F_00c4c68f((undefined *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))));
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = 1;
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))) = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    (*((char * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16))))) = (char *)(*(byte * PTR32 *)(gen_frame + 0xc));
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 12))))) = (uint)(*(byte * PTR32 *)(gen_frame + 0x10));
    (*((wchar_t * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x8));
    (*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 8))))) = (*(int * PTR32 *)(gen_frame + 0x14));
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (3) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x1c));
  }
  F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x28)));
LAB_00c54b2d: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return iVar12;
}

/* ref: ____mb_cur_max_func */
int F_00c54b3c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54b3cu, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * p_Var1;
  undefined * ptVar2;
  
  p_Var1 = F_00c5b37a();
  ptVar2 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 108)));
  if ((ptVar2 != (undefined *)REFG(undefined * PTR32, 0x134ba28)) && (((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0)) {
    ptVar2 = F_00c5cdf6();
  }
  return (int)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(ptVar2) + 160) + (3) * 4)))));
}

/* ref: ____lc_codepage_func */
UINT F_00c54b81(void)
{
  GEN_ENTER(0xc54b81u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  undefined * ptVar2;
  
  p_Var1 = F_00c5b37a();
  ptVar2 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 108)));
  if ((ptVar2 != (undefined *)REFG(undefined * PTR32, 0x134ba28)) && (((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0)) {
    ptVar2 = F_00c5cdf6();
  }
  return (*(uint *)(((char *)(ptVar2) + 4)));
}

/* ref: ____lc_handle_func */
uint F_00c54bcd(void)
{
  GEN_ENTER(0xc54bcdu, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  undefined * ptVar2;
  
  p_Var1 = F_00c5b37a();
  ptVar2 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 108)));
  if ((ptVar2 != (undefined *)REFG(undefined * PTR32, 0x134ba28)) && (((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0)) {
    ptVar2 = F_00c5cdf6();
  }
  return (uint)&(*(uint *)(((char *)(ptVar2) + 12)));
}

/* ref: wait_a_bit */
uint F_00c54bf3(unsigned int gen_a0)
{
  GEN_ENTER(0xc54bf3u, gen_a0, 0u, 0u, 0u);
  DWORD param_1 = (DWORD)gen_a0;
  uint uVar1;
  
  gen_imp_Sleep(param_1);
  uVar1 = param_1 + 1000;
  if (REFG(undefined4, 0x15d68d8) < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00c54c19 */
uint F_00c54c19(unsigned int gen_a0)
{
  GEN_ENTER(0xc54c19u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d68d8);
  REFG(undefined4, 0x15d68d8) = param_1;
  return uVar1;
}

/* ref: __malloc_crt */
undefined * F_00c54c2e(unsigned int gen_a0)
{
  GEN_ENTER(0xc54c2eu, gen_a0, 0u, 0u, 0u);
  gen_size32 _Size = (gen_size32)gen_a0;
  undefined * pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = F_00c51787(_Size);
    if (pvVar1 != (undefined *)0x0) {
      return pvVar1;
    }
    if (REFG(undefined4, 0x15d68d8) == 0) break;
    gen_imp_Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (REFG(undefined4, 0x15d68d8) < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (undefined *)0x0;
    }
  }
  return (undefined *)0x0;
}

/* ref: __calloc_crt */
undefined * F_00c54c73(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54c73u, gen_a0, gen_a1, 0u, 0u);
  gen_size32 _Count = (gen_size32)gen_a0;
  gen_size32 _Size = (gen_size32)gen_a1;
  undefined * pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = (undefined *)F_00c73804(_Count,_Size,0);
    if (pvVar1 != (undefined *)0x0) {
      return pvVar1;
    }
    if (REFG(undefined4, 0x15d68d8) == 0) break;
    gen_imp_Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (REFG(undefined4, 0x15d68d8) < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (undefined *)0x0;
    }
  }
  return (undefined *)0x0;
}

/* ref: __realloc_crt */
undefined * F_00c54cbf(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54cbfu, gen_a0, gen_a1, 0u, 0u);
  undefined * _Ptr = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _NewSize = (gen_size32)gen_a1;
  undefined * pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = F_00c52171(_Ptr,_NewSize);
    if (pvVar1 != (undefined *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (undefined *)0x0;
    }
    if (REFG(undefined4, 0x15d68d8) == 0) {
      return (undefined *)0x0;
    }
    gen_imp_Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (REFG(undefined4, 0x15d68d8) < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (undefined *)0x0;
}

/* ref: __recalloc_crt */
undefined * F_00c54d0d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc54d0du, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Ptr = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _Count = (gen_size32)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  undefined * pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = F_00c73886(_Ptr,_Count,_Size);
    if (pvVar1 != (undefined *)0x0) {
      return pvVar1;
    }
    if (_Size == 0) {
      return (undefined *)0x0;
    }
    if (REFG(undefined4, 0x15d68d8) == 0) {
      return (undefined *)0x0;
    }
    gen_imp_Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (REFG(undefined4, 0x15d68d8) < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (undefined *)0x0;
}

/* ref: _JumpToContinuation */
unsigned int F_00c54d5f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54d5fu, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * local_8;
  
  local_8 = param_2 + 0xc;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
                    
                    
  ((code *)param_1)();
  return 0;
}

/* ref: _CallMemberFunction0 */
unsigned int F_00c54d91(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54d91u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  LOCK();
  UNLOCK();
                    
                    
  ((code *)param_2)();
  return 0;
}

/* ref: FID_conflict__CallMemberFunction1_00c54d98 */
uint F_00c54d98(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54d98u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  code * param_2 = (code *)(uintptr_t)gen_a1;
  uint uVar1;
  
  LOCK();
  UNLOCK();
                    
                    
  uVar1 = (*param_2)();
  return uVar1;
}

/* ref: FID_conflict__CallMemberFunction1_00c54d9f */
uint F_00c54d9f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54d9fu, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  code * param_2 = (code *)(uintptr_t)gen_a1;
  uint uVar1;
  
  LOCK();
  UNLOCK();
                    
                    
  uVar1 = (*param_2)();
  return uVar1;
}

/* ref: _UnwindNestedFrames */
unsigned int F_00c54da6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc54da6u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 local_c;
  undefined4 * local_8;
  
  local_8 = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  local_c = 0xc54dd1;
  gen_imp_RtlUnwind(param_1,(PVOID)0xc54dd1,(GEN_LPANY)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *local_8 = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = local_8;
  return 0;
}

/* ref: FID_conflict____CxxFrameHandler3_00c54dfa */
uint F_00c54dfa(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc54dfau, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c74a36(param_2,param_3,param_4,param_5,in_eax,0,0,0);
  return uVar1;
}

/* ref: FID_conflict____CxxFrameHandler3_00c54e30 */
uint F_00c54e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc54e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c74a36(param_2,param_3,param_4,param_5,in_eax,0,0,0);
  return uVar1;
}

/* ref: FID_conflict____CxxFrameHandler3_00c54e66 */
uint F_00c54e66(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc54e66u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c74a36(param_2,param_3,param_4,param_5,in_eax,0,0,0);
  return uVar1;
}

/* ref: ___CxxLongjmpUnwind@4 */
uint F_00c54e9c(unsigned int gen_a0)
{
  GEN_ENTER(0xc54e9cu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c739f2(*(undefined4 *)(param_1 + 0x18),0,*(undefined4 *)(param_1 + 0x28),
                     *(undefined4 *)(param_1 + 0x1c));
  return uVar1;
}

/* ref: CatchGuardHandler */
int F_00c54ebb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc54ebbu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  int _Var1;
  
  F_00c47745(*(uint *)(param_2 + 8) ^ (uint)param_2);
  _Var1 = F_00c74a36(param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,
                     *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14),param_2,0);
  return _Var1;
}

/* ref: _CallSETranslator */
int F_00c54eee(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc54eeeu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x60];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  int iVar1;
  undefined * p_Var2;
  
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x123) {
    *(undefined4 *)(*(undefined * PTR32 *)&gen_args[1]) = 0xc54f99;
    iVar1 = 1;
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)0x0;
    (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0xc54fc5));
    (*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 * PTR32 *)(gen_frame + 0x14));
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)&gen_args[4]);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)&gen_args[1]);
    (*(int *)(gen_frame + 0x28)) = (*(int *)&gen_args[5]);
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)&gen_args[6]);
    (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (undefined1 *)0x0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = (undefined1 *)0x0;
    (*(int *)(gen_frame + 0x38)) = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (gen_frame + 0x0);
    (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = (gen_frame + 0x3c);
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
    if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)))))) { return (int)(uintptr_t)gen_eh_resume(); }
    (*(int *)(gen_frame + 0x4)) = 1;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[2]);
    p_Var2 = F_00c5b37a();
    (*(gen_code32 *)(gen_frame + 0x10)) = (*(void * PTR32 *)(((char *)(p_Var2) + 128)));
    ((code *)(*(gen_code32 *)(((char *)(p_Var2) + 128))))(*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    (*(int *)(gen_frame + 0x4)) = 0;
    if ((*(int *)(gen_frame + 0x38)) != 0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0x14)) = *(undefined4 *)(*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
    }
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
    iVar1 = (*(int *)(gen_frame + 0x4));
  }
  return iVar1;
}

/* ref: TranslatorGuardHandler */
int F_00c54fc5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc54fc5u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int _Var1;
  
  F_00c47745(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  F_00c74a36(param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),1);
  if (*(int *)(param_2 + 0x24) == 0) {
    F_00c54da6((undefined *)param_2,param_1);
  }
  F_00c54eee((undefined *)0x123,(undefined *)&(*(gen_code32 *)(gen_frame + 0x8)),(undefined *)0x0,
                    (undefined *)0x0,(undefined *)0x0,0,(undefined *)0x0);
                    
                    
  _Var1 = ((code *)(*(gen_code32 *)(gen_frame + 0x8)))();
  return _Var1;
}

/* ref: _GetRangeOfTrysToCheck */
undefined * F_00c55064(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc55064u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  undefined * pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = (*(undefined * PTR32 *)(((char *)(param_1) + 16)));
  uVar5 = (*(uint *)(((char *)(param_1) + 12)));
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
                    
      F_00c5aace();
    }
    uVar5 = uVar5 - 1;
    if ((((*((int *)GEN_TOP(((((char *)(pTVar1) + (uVar5) * 20) + 4))))) < param_3) && (param_3 <= (*((int *)GEN_TOP(((((char *)(pTVar1) + (uVar5) * 20) + 8))))))) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((uVar3 <= (*(uint *)(((char *)(param_1) + 12)))) && (uVar5 <= uVar3)) {
    return pTVar1 + (uVar5) * 20;
  }
                    
  F_00c5aace();
}

/* ref: __CreateFrameInfo */
uint F_00c550d7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc550d7u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * p_Var1;
  
  *param_1 = param_2;
  p_Var1 = F_00c5b37a();
  param_1[1] = (*(void * PTR32 *)(((char *)(p_Var1) + 152)));
  p_Var1 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var1) + 152))) = param_1;
  return (uint)param_1;
}

/* ref: __IsExceptionObjectToBeDestroyed */
uint F_00c55103(unsigned int gen_a0)
{
  GEN_ENTER(0xc55103u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * p_Var1;
  int * piVar2;
  
  p_Var1 = F_00c5b37a();
  piVar2 = (*(void * PTR32 *)(((char *)(p_Var1) + 152)));
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}

/* ref: __FindAndUnlinkFrame */
uint F_00c5512a(unsigned int gen_a0)
{
  GEN_ENTER(0xc5512au, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * p_Var1;
  undefined * p_Var2;
  
  p_Var1 = F_00c5b37a();
  if (param_1 == (*(void * PTR32 *)(((char *)(p_Var1) + 152)))) {
    p_Var2 = F_00c5b37a();
    (*(void * PTR32 *)(((char *)(p_Var2) + 152))) = (undefined *)(*(uint *)(((char *)(param_1) + 4)));
  }
  else {
    p_Var1 = F_00c5b37a();
    p_Var1 = (*(void * PTR32 *)(((char *)(p_Var1) + 152)));
    do {
      p_Var2 = p_Var1;
      if ((*(uint *)(((char *)(p_Var2) + 4))) == 0) {
                    
        F_00c5aace();
      }
      p_Var1 = (undefined *)(*(uint *)(((char *)(p_Var2) + 4)));
    } while (param_1 != (undefined *)(*(uint *)(((char *)(p_Var2) + 4))));
    (*(uint *)(((char *)(p_Var2) + 4))) = (*(uint *)(((char *)(param_1) + 4)));
  }
  return (uint)p_Var2;
}

/* ref: _CallCatchBlock2 */
undefined * F_00c5517c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5517cu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined * PTR32 *)(gen_frame + 0x4));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)&gen_args[1]);
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xc54ebb));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x18)) = (*(int *)&gen_args[3]) + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x4));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x4)))))) { return (undefined *)(uintptr_t)gen_eh_resume(); }
  pvVar1 = (undefined *)F_00c74b20((*(undefined * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[0]),(*(ulong *)&gen_args[4]));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4));
  return pvVar1;
}

/* ref: _strlen */
gen_size32 F_00c552f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc552f0u, gen_a0, 0u, 0u, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_00c55320;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_00c55353: ;
  return (gen_size32)((int)puVar2 + (-1 - (int)_Str));
LAB_00c55320: ;
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (gen_size32)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (gen_size32)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_00c55353;
}

/* ref: type_info::_Type_info_dtor */
unsigned int F_00c5537b(unsigned int gen_a0)
{
  GEN_ENTER(0xc5537bu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int * _Memory;
  undefined * ptVar1;
  int * piVar2;
  int * piVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6340);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc55387;
  F_00c5aa4f(0xe);
  ptVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  _Memory = REFG(undefined4, 0x15d68e0);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    piVar2 = (int *)&REFG(undefined, 0x15d68dc);
    do {
      piVar3 = piVar2;
      (*(int * PTR32 *)(gen_frame + 0x0)) = REFG(undefined4, 0x15d68e0);
      if (REFG(undefined4, 0x15d68e0) == (int *)0x0) goto LAB_00c553bf;
      piVar2 = REFG(undefined4, 0x15d68e0);
    } while (*REFG(int * PTR32, 0x15d68e0) != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))));
    piVar3[1] = REFG(int * PTR32, 0x15d68e0)[1];
    F_00c4c68f(_Memory);
LAB_00c553bf: ;
    F_00c4c68f(*(undefined * PTR32 *)(ptVar1 + 4));
    *(undefined4 *)(ptVar1 + 4) = 0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c553e2();
  return 0;
}

/* ref: FUN_00c553e2 */
uint F_00c553e2(void)
{
  GEN_ENTER(0xc553e2u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: type_info::_Name_base */
char * F_00c553eb(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc553ebu, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * in_edi;
  char * _Str;
  gen_size32 sVar1;
  undefined4 * _Memory;
  undefined * pvVar2;
  int eVar3;
  gen_size32 sVar4;
  
  in_edi = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6360);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc553f7;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) == 0) {
    _Str = (char *)F_00c79d47(0,(*(undefined * PTR32 *)&gen_args[0]) + 9,0,((code *)REFP(0xc51787)),((code *)REFP(0xc4c68f)),0x2800);
    (*(char * PTR32 *)(gen_frame + 0x0)) = _Str;
    if (_Str == (char *)0x0) {
      return (char *)0x0;
    }
    sVar1 = F_00c552f0(_Str);
    while ((sVar1 != 0 && (sVar4 = sVar1 - 1, (*(char * PTR32 *)(gen_frame + 0x0))[sVar4] == ' '))) {
      (*(char * PTR32 *)(gen_frame + 0x0))[sVar4] = '\0';
      sVar1 = sVar4;
    }
    F_00c5aa4f(0xe);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    if ((*(int *)(in_edi + 4) == 0) && (_Memory = F_00c51787(8), _Memory != (undefined4 *)0x0)) {
      pvVar2 = F_00c51787(sVar1 + 1);
      *(undefined * PTR32 *)(in_edi + 4) = pvVar2;
      if (pvVar2 == (undefined *)0x0) {
        F_00c4c68f(_Memory);
      }
      else {
        eVar3 = F_00c49908(pvVar2,sVar1 + 1,(*(char * PTR32 *)(gen_frame + 0x0)));
        if (eVar3 != 0) {
                    
          F_00c4c299(in_edi,0,0,0,0,0);
        }
        *_Memory = *(undefined4 *)(in_edi + 4);
        _Memory[1] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4)));
        *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4))) = _Memory;
      }
    }
    F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x0)));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c554d4();
  }
  return *(char * PTR32 *)(in_edi + 4);
}

/* ref: FUN_00c554d1 */
uint F_00c554d1(unsigned int gen_a0)
{
  GEN_ENTER(0xc554d1u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: FUN_00c554d4 */
uint F_00c554d4(void)
{
  GEN_ENTER(0xc554d4u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: FUN_00c55544 */
uint F_00c55544(void)
{
  GEN_ENTER(0xc55544u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: ___unDNameHelper */
uint F_00c5554d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5554du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((short)param_4 == 0) {
    param_4 = 0x2800;
  }
  uVar1 = F_00c79d47(param_1,param_2,param_3,((code *)REFP(0xc51787)),((code *)REFP(0xc4c68f)),param_4);
  return uVar1;
}

/* ref: type_info::_Name_base_internal */
char * F_00c55580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55580u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char * _Str;
  gen_size32 sVar1;
  undefined4 * _Memory;
  undefined * pvVar2;
  int eVar3;
  gen_size32 sVar4;
  undefined * ptVar5;
  
  ptVar5 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f63a0);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc5558c;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) == 0) {
    F_00c5aa4f(0xe);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    if (*(int *)(ptVar5 + 4) == 0) {
      _Str = (char *)F_00c5554d(0,ptVar5 + 9,0,0x2800);
      (*(char * PTR32 *)(gen_frame + 0x10)) = _Str;
      if (_Str == (char *)0x0) {
        F_00c5e5c0(&REFG(undefined4, 0x134ab78),((undefined1 *)(gen_frame + 0x1c)),0xfffffffe);
        return (char *)0x0;
      }
      sVar1 = F_00c552f0(_Str);
      (*(gen_size32 *)(gen_frame + 0xc)) = sVar1;
      while( true ) {
        sVar4 = sVar1 - 1;
        (*(gen_size32 *)(gen_frame + 0xc)) = sVar4;
        if ((sVar1 == 0) || (_Str[sVar4] != ' ')) break;
        _Str[sVar4] = '\0';
        sVar1 = sVar4;
      }
      _Memory = F_00c51787(8);
      if (_Memory != (undefined4 *)0x0) {
        pvVar2 = F_00c51787(sVar1 + 1);
        if (pvVar2 == (undefined *)0x0) {
          F_00c4c68f(_Memory);
        }
        else {
          eVar3 = F_00c49908(pvVar2,sVar1 + 1,(*(char * PTR32 *)(gen_frame + 0x10)));
          if (eVar3 != 0) {
                    
            F_00c4c299(_Memory,0,0,0,0,0);
          }
          *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) = pvVar2;
          *_Memory = pvVar2;
          _Memory[1] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4)));
          *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4))) = _Memory;
        }
      }
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x10)));
      ptVar5 = (*(undefined * PTR32 *)&gen_args[0]);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c55683();
  }
  return *(char * PTR32 *)(ptVar5 + 4);
}

/* ref: FUN_00c55680 */
uint F_00c55680(unsigned int gen_a0)
{
  GEN_ENTER(0xc55680u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: FUN_00c55683 */
uint F_00c55683(void)
{
  GEN_ENTER(0xc55683u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: FUN_00c556d6 */
uint F_00c556d6(void)
{
  GEN_ENTER(0xc556d6u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: _strcmp */
int F_00c556e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc556e0u, gen_a0, gen_a1, 0u, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte * pbVar5;
  char * pcVar6;
  bool bVar7;
  
  pbVar5 = (byte *)_Str2;
  pcVar6 = _Str1;
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      pcVar6 = _Str1 + 1;
      bVar7 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_00c55724;
      pbVar5 = (byte *)(_Str2 + 1);
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)pcVar6 & 2) == 0) goto LAB_00c556f0;
    }
    uVar1 = *(undefined2 *)pcVar6;
    pcVar6 = pcVar6 + 2;
    bVar4 = (byte)uVar1;
    bVar7 = bVar4 < *pbVar5;
    if (bVar4 != *pbVar5) goto LAB_00c55724;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar7 = bVar4 < pbVar5[1];
    if (bVar4 != pbVar5[1]) goto LAB_00c55724;
    if (bVar4 == 0) {
      return 0;
    }
    pbVar5 = pbVar5 + 2;
  }
LAB_00c556f0: ;
  while( true ) {
    uVar2 = *(undefined4 *)pcVar6;
    bVar4 = (byte)uVar2;
    bVar7 = bVar4 < *pbVar5;
    if (bVar4 != *pbVar5) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar7 = bVar4 < pbVar5[1];
    if (bVar4 != pbVar5[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar7 = bVar4 < pbVar5[2];
    if (bVar4 != pbVar5[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar7 = bVar3 < pbVar5[3];
    if (bVar3 != pbVar5[3]) break;
    pbVar5 = pbVar5 + 4;
    pcVar6 = pcVar6 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_00c55724: ;
  return (uint)bVar7 * -2 + 1;
}

/* ref: __GET_RTERRMSG */
wchar_t * F_00c55768(unsigned int gen_a0)
{
  GEN_ENTER(0xc55768u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&REFG(undefined4, 0x1119cf8))[uVar1 * 2]) {
      return *(wchar_t * PTR32 *)(&REFG(undefined, 0x1119cfc) + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x16);
  return (wchar_t *)0x0;
}

/* ref: __NMSG_WRITE */
unsigned int F_00c5578e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5578eu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  wchar_t * pwVar1;
  int iVar2;
  int eVar3;
  DWORD DVar4;
  gen_size32 sVar5;
  HANDLE hFile;
  uint uVar6;
  wchar_t * PTR32 * lpNumberOfBytesWritten;
  GEN_LPANY lpOverlapped;
  
  (*(uint *)(gen_frame + 0x1f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1fc);
  pwVar1 = F_00c55768(param_1);
  (*(wchar_t * PTR32 *)(gen_frame + 0x0)) = pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    iVar2 = F_00c7a6a3(3);
    if ((iVar2 == 1) || ((iVar2 = F_00c7a6a3(3), iVar2 == 0 && (REFG(int, 0x134ab80) == 1)))) {
      hFile = gen_imp_GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        uVar6 = 0;
        do {
          ((char *)(gen_frame + 0x4))[(int)(uVar6)] = (char)pwVar1[uVar6];
          if (pwVar1[uVar6] == L'\0') break;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 500);
        lpOverlapped = (GEN_LPANY)0x0;
        lpNumberOfBytesWritten = &(*(wchar_t * PTR32 *)(gen_frame + 0x0));
        ((char *)(gen_frame + 0x4))[499] = 0;
        sVar5 = F_00c552f0(((char *)(gen_frame + 0x4)));
        gen_imp_WriteFile(hFile,((char *)(gen_frame + 0x4)),sVar5,(LPDWORD)lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = F_00c4a8e0((wchar_t *)&REFG(undefined, 0x15d68e8),0x314,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[3])REFP(0x1119e34)))));
      if (eVar3 == 0) {
        *(undefined2 *)&REFG(undefined, 0x15d6b22) = 0;
        DVar4 = gen_imp_GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&REFG(undefined, 0x15d691a),0x104);
        if ((DVar4 != 0) ||
           (eVar3 = F_00c4a8e0((wchar_t *)&REFG(undefined, 0x15d691a),0x2fb,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[6])REFP(0x1119e04))))), eVar3 == 0
           )) {
          sVar5 = F_00c68ec8((wchar_t *)&REFG(undefined, 0x15d691a));
          if (0x3c < sVar5 + 1) {
            sVar5 = F_00c68ec8((wchar_t *)&REFG(undefined, 0x15d691a));
            eVar3 = F_00c4983b(&REFG(undefined, 0x15d68a4) + sVar5 * 2,0x2fb - ((int)(sVar5 * 2 + -0x76) >> 1),
                               &REFG(undefined, 0x1119dfc),3);
            if (eVar3 != 0) goto LAB_00c55853;
          }
          eVar3 = F_00c4b8d3((wchar_t *)&REFG(undefined, 0x15d68e8),0x314,L"\n\n");
          if ((eVar3 == 0) &&
             (eVar3 = F_00c4b8d3((wchar_t *)&REFG(undefined, 0x15d68e8),0x314,(*(wchar_t * PTR32 *)(gen_frame + 0x0))), eVar3 == 0)) {
            F_00c7a537((LPCWSTR)&REFG(undefined, 0x15d68e8),(LPCWSTR)(*(undefined * PTR32 (*)[4])REFP(0x1119da8)),0x12010);
            goto LAB_00c5592e;
          }
        }
      }
LAB_00c55853: ;
                    
      F_00c4c299(&REFG(undefined, 0x15d68e8),0,0,0,0,0);
    }
  }
LAB_00c5592e: ;
  F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
  return 0;
}

/* ref: __FF_MSGBANNER */
unsigned int F_00c5593d(void)
{
  GEN_ENTER(0xc5593du, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = F_00c7a6a3(3);
  if (iVar1 != 1) {
    iVar1 = F_00c7a6a3(3);
    if (iVar1 != 0) {
      return 0;
    }
    if (REFG(int, 0x134ab80) != 1) {
      return 0;
    }
  }
  F_00c5578e(0xfc);
  F_00c5578e(0xff);
  return 0;
}

/* ref: ___getlocaleinfo */
int F_00c55976(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc55976u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _Locale = (undefined *)(uintptr_t)gen_a0;
  int _Lc_type = (int)gen_a1;
  LPCWSTR _LocaleName = (LPCWSTR)gen_a2;
  ulong _FieldType = (ulong)gen_a3;
  undefined * _Address = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  bool bVar1;
  gen_size32 sVar2;
  DWORD DVar3;
  LPSTR _LpLCData;
  undefined * pvVar4;
  int iVar5;
  int eVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = _Locale;
  if (_Lc_type == 1) {
    bVar1 = false;
    _LpLCData = ((CHAR *)(gen_frame + 0x8));
    sVar2 = F_00c7a7cb(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
    if (sVar2 == 0) {
      DVar3 = gen_imp_GetLastError();
      if (DVar3 == 0x7a) {
        sVar2 = F_00c7a7cb((*(undefined * PTR32 *)(gen_frame + 0x4)),_LocaleName,_FieldType,(LPSTR)0x0,0);
        if (sVar2 != 0) {
          _LpLCData = F_00c54c73(sVar2,1);
          if (_LpLCData != (LPSTR)0x0) {
            bVar1 = true;
            sVar2 = F_00c7a7cb((*(undefined * PTR32 *)(gen_frame + 0x4)),_LocaleName,_FieldType,_LpLCData,sVar2);
            if (sVar2 != 0) goto LAB_00c55a30;
            goto LAB_00c55a4a;
          }
        }
      }
    }
    else {
LAB_00c55a30: ;
      pvVar4 = F_00c54c73(sVar2,1);
      *(undefined * PTR32 *)_Address = pvVar4;
      if (pvVar4 != (undefined *)0x0) {
        eVar6 = F_00c4d9ef(pvVar4,sVar2,_LpLCData,sVar2 - 1);
        if (eVar6 != 0) {
                    
          F_00c4c299(0,0,0,0,0,0);
        }
        if (bVar1) {
          F_00c4c68f(_LpLCData);
        }
LAB_00c55a85: ;
        iVar5 = 0;
        goto LAB_00c55a54;
      }
      if (bVar1) {
LAB_00c55a4a: ;
        F_00c4c68f(_LpLCData);
      }
    }
  }
  else if (_Lc_type == 2) {
    *(undefined4 *)_Address = 0;
    sVar2 = gen_imp_GetLocaleInfoW(_LocaleName,_FieldType,0,0);
    if (sVar2 != 0) {
      pvVar4 = F_00c54c73(sVar2,2);
      *(undefined * PTR32 *)_Address = pvVar4;
      if (pvVar4 != (undefined *)0x0) {
        iVar5 = gen_imp_GetLocaleInfoW(_LocaleName,_FieldType,pvVar4,sVar2);
        if (iVar5 != 0) goto LAB_00c55a85;
      }
    }
    F_00c4c68f(*(undefined * PTR32 *)_Address);
    *(undefined4 *)_Address = 0;
  }
  else if (_Lc_type == 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    iVar5 = gen_imp_GetLocaleInfoW((LCID)_LocaleName,_FieldType | 0x20000000,(LPWSTR)&(*(undefined * PTR32 *)(gen_frame + 0x4)),2);
    if (iVar5 != 0) {
      *(undefined1 *)_Address = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x4)) + (0) * 8));
      goto LAB_00c55a85;
    }
  }
  iVar5 = -1;
LAB_00c55a54: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return iVar5;
}

/* ref: FUN_00c55b22 */
uint F_00c55b22(unsigned int gen_a0)
{
  GEN_ENTER(0xc55b22u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d6f10) = param_1;
  return param_1;
}

/* ref: FUN_00c55b31 */
ulonglong F_00c55b31(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc55b31u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 * puVar18;
  
  puVar18 = in_edi;
  if (((uint)in_esi & 0xf) != 0) {
    uVar17 = 0x10 - ((uint)in_esi & 0xf);
    in_ecx = in_ecx - uVar17;
    for (uVar15 = uVar17 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined1 *)puVar18 = *(undefined1 *)in_esi;
      in_esi = (undefined4 *)((int)in_esi + 1);
      puVar18 = (undefined4 *)((int)puVar18 + 1);
    }
    for (uVar17 = uVar17 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar18 = *in_esi;
      in_esi = in_esi + 1;
      puVar18 = puVar18 + 1;
    }
  }
  for (uVar15 = in_ecx >> 7; uVar15 != 0; uVar15 = uVar15 - 1) {
    uVar16 = in_esi[1];
    uVar1 = in_esi[2];
    uVar2 = in_esi[3];
    uVar3 = in_esi[4];
    uVar4 = in_esi[5];
    uVar5 = in_esi[6];
    uVar6 = in_esi[7];
    uVar7 = in_esi[8];
    uVar8 = in_esi[9];
    uVar9 = in_esi[10];
    uVar10 = in_esi[0xb];
    uVar11 = in_esi[0xc];
    uVar12 = in_esi[0xd];
    uVar13 = in_esi[0xe];
    uVar14 = in_esi[0xf];
    *puVar18 = *in_esi;
    puVar18[1] = uVar16;
    puVar18[2] = uVar1;
    puVar18[3] = uVar2;
    puVar18[4] = uVar3;
    puVar18[5] = uVar4;
    puVar18[6] = uVar5;
    puVar18[7] = uVar6;
    puVar18[8] = uVar7;
    puVar18[9] = uVar8;
    puVar18[10] = uVar9;
    puVar18[0xb] = uVar10;
    puVar18[0xc] = uVar11;
    puVar18[0xd] = uVar12;
    puVar18[0xe] = uVar13;
    puVar18[0xf] = uVar14;
    uVar16 = in_esi[0x11];
    uVar1 = in_esi[0x12];
    uVar2 = in_esi[0x13];
    uVar3 = in_esi[0x14];
    uVar4 = in_esi[0x15];
    uVar5 = in_esi[0x16];
    uVar6 = in_esi[0x17];
    uVar7 = in_esi[0x18];
    uVar8 = in_esi[0x19];
    uVar9 = in_esi[0x1a];
    uVar10 = in_esi[0x1b];
    uVar11 = in_esi[0x1c];
    uVar12 = in_esi[0x1d];
    uVar13 = in_esi[0x1e];
    uVar14 = in_esi[0x1f];
    puVar18[0x10] = in_esi[0x10];
    puVar18[0x11] = uVar16;
    puVar18[0x12] = uVar1;
    puVar18[0x13] = uVar2;
    puVar18[0x14] = uVar3;
    puVar18[0x15] = uVar4;
    puVar18[0x16] = uVar5;
    puVar18[0x17] = uVar6;
    puVar18[0x18] = uVar7;
    puVar18[0x19] = uVar8;
    puVar18[0x1a] = uVar9;
    puVar18[0x1b] = uVar10;
    puVar18[0x1c] = uVar11;
    puVar18[0x1d] = uVar12;
    puVar18[0x1e] = uVar13;
    puVar18[0x1f] = uVar14;
    in_esi = in_esi + 0x20;
    puVar18 = puVar18 + 0x20;
  }
  uVar16 = 0;
  if ((in_ecx & 0x7f) != 0) {
    for (uVar15 = (in_ecx & 0x7f) >> 4; uVar15 != 0; uVar15 = uVar15 - 1) {
      uVar16 = in_esi[1];
      uVar1 = in_esi[2];
      uVar2 = in_esi[3];
      *puVar18 = *in_esi;
      puVar18[1] = uVar16;
      puVar18[2] = uVar1;
      puVar18[3] = uVar2;
      in_esi = in_esi + 4;
      puVar18 = puVar18 + 4;
    }
    uVar16 = 0;
    if ((in_ecx & 0xf) != 0) {
      for (uVar15 = (in_ecx & 0xf) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        uVar16 = *in_esi;
        *puVar18 = uVar16;
        in_esi = in_esi + 1;
        puVar18 = puVar18 + 1;
      }
      for (uVar15 = in_ecx & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar18 = *(undefined1 *)in_esi;
        in_esi = (undefined4 *)((int)in_esi + 1);
        puVar18 = (undefined4 *)((int)puVar18 + 1);
      }
    }
  }
  return CONCAT44(uVar16,in_edi);
}

/* ref: FUN_00c55c34 */
uint F_00c55c34(void)
{
  GEN_ENTER(0xc55c34u, 0u, 0u, 0u, 0u);
  BOOL BVar1;
  
  BVar1 = gen_imp_IsProcessorFeaturePresent(10);
  REFG(undefined4, 0x15e42a0) = BVar1;
  return 0;
}

/* ref: FUN_00c55c44 */
uint F_00c55c44(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55c44u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * pcVar1;
  
  pcVar1 = F_00c51220(param_1,param_2);
  return (uint)pcVar1;
}

/* ref: __forcdecpt_l */
unsigned int F_00c55c4f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55c4fu, gen_a0, gen_a1, 0u, 0u);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  iVar3 = F_00c4ef4f((int)*_Buf);
  bVar5 = iVar3 == 0x65;
  pbVar4 = (byte *)_Buf;
  while (!bVar5) {
    pbVar4 = pbVar4 + 1;
    iVar3 = F_00c48637((uint)*pbVar4);
    bVar5 = iVar3 == 0;
  }
  iVar3 = F_00c4ef4f((int)(char)*pbVar4);
  if (iVar3 == 0x78) {
    pbVar4 = pbVar4 + 2;
  }
  bVar2 = *pbVar4;
  *pbVar4 = *((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))));
  do {
    pbVar4 = pbVar4 + 1;
    bVar1 = *pbVar4;
    *pbVar4 = bVar2;
    bVar2 = bVar1;
  } while (*pbVar4 != 0);
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __cropzeros_l */
unsigned int F_00c55cc3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55cc3u, gen_a0, gen_a1, 0u, 0u);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  char * pcVar2;
  char cVar4;
  char * pcVar3;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  cVar4 = *_Buf;
  pcVar1 = _Buf;
  if (cVar4 != '\0') {
    do {
      if (cVar4 == *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))))) break;
      pcVar1 = pcVar1 + 1;
      cVar4 = *pcVar1;
    } while (cVar4 != '\0');
  }
  if (*pcVar1 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
      cVar4 = *pcVar1;
      pcVar2 = pcVar1;
      if ((cVar4 == '\0') || (cVar4 == 'e')) break;
    } while (cVar4 != 'E');
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))))) {
      pcVar2 = pcVar3 + -2;
    }
    do {
      cVar4 = *pcVar1;
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar1 + 1;
      *pcVar2 = cVar4;
    } while (cVar4 != '\0');
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __positive */
int F_00c55d45(unsigned int gen_a0)
{
  GEN_ENTER(0xc55d45u, gen_a0, 0u, 0u, 0u);
  double * arg = (double *)(uintptr_t)gen_a0;
  double dVar1;
  
  dVar1 = *arg;
  if (!GEN_ISNAN(dVar1) && 0.0 < dVar1 != (dVar1 == 0.0)) {
    return 1;
  }
  return 0;
}

/* ref: __fassign_l */
unsigned int F_00c55d61(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc55d61u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((*(int *)&gen_args[0]) == 0) {
    F_00c7a984((undefined *)&(*(int *)&gen_args[0]),(*(char * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]));
    *(int *)(*(char * PTR32 *)&gen_args[1]) = (*(int *)&gen_args[0]);
  }
  else {
    F_00c7a805(&(*(undefined4 *)(gen_frame + 0x4)),(*(char * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]));
    *(float *)(*(char * PTR32 *)&gen_args[1]) = (*(float *)((char *)&((*(undefined4 *)(gen_frame + 0x4)))));
    *((undefined4 *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 4))) = (*(undefined4 *)(gen_frame + 0x8));
  }
  return 0;
}

/* ref: __fassign */
unsigned int F_00c55da3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc55da3u, gen_a0, gen_a1, gen_a2, 0u);
  int flag = (int)gen_a0;
  char * argument = (char *)(uintptr_t)gen_a1;
  char * number = (char *)(uintptr_t)gen_a2;
  F_00c55d61(flag,argument,number,(undefined *)0x0);
  return 0;
}

/* ref: __shift */
uint F_00c55dbd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55dbdu, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  gen_size32 sVar1;
  
  if (in_edi != 0) {
    sVar1 = F_00c552f0(in_eax);
    in_eax = (char *)F_00c46e20(in_eax + in_edi,in_eax,sVar1 + 1);
  }
  return (uint)in_eax;
}

/* ref: __forcdecpt */
unsigned int F_00c55ddc(unsigned int gen_a0)
{
  GEN_ENTER(0xc55ddcu, gen_a0, 0u, 0u, 0u);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  F_00c55c4f(_Buf,(undefined *)0x0);
  return 0;
}

/* ref: __cropzeros */
unsigned int F_00c55def(unsigned int gen_a0)
{
  GEN_ENTER(0xc55defu, gen_a0, 0u, 0u, 0u);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  F_00c55cc3(_Buf,(undefined *)0x0);
  return 0;
}

/* ref: FUN_00c55e02 */
uint F_00c55e02(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc55e02u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * in_eax = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int eVar2;
  int iVar3;
  int iVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  uint uVar7;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),param_7);
  if ((in_eax == (undefined1 *)0x0) || (param_2 == 0)) {
    puVar1 = (uint *)F_00c51f85();
    uVar7 = 0x16;
  }
  else {
    iVar3 = param_3;
    if (param_3 < 1) {
      iVar3 = 0;
    }
    if (iVar3 + 9U < param_2) {
      if ((char)param_6 != '\0') {
        F_00c55dbd(in_eax + (*param_5 == 0x2d),(uint)(0 < param_3));
      }
      puVar6 = in_eax;
      if (*param_5 == 0x2d) {
        *in_eax = 0x2d;
        puVar6 = in_eax + 1;
      }
      if (0 < param_3) {
        *puVar6 = puVar6[1];
        puVar6 = puVar6 + 1;
        *puVar6 = *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))));
      }
      puVar6 = puVar6 + (uint)((char)param_6 == '\0') + param_3;
      if (param_2 == 0xffffffff) {
        puVar5 = (undefined1 *)0xffffffff;
      }
      else {
        puVar5 = in_eax + (param_2 - (int)puVar6);
      }
      eVar2 = F_00c49908(puVar6,puVar5,"e+000");
      if (eVar2 == 0) {
        if (param_4 != 0) {
          *puVar6 = 0x45;
        }
        if (*(char *)param_5[3] != '0') {
          iVar3 = param_5[1] + -1;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
            puVar6[1] = 0x2d;
          }
          if (99 < iVar3) {
            iVar4 = iVar3 / 100;
            iVar3 = iVar3 % 100;
            puVar6[2] = puVar6[2] + (char)iVar4;
          }
          if (9 < iVar3) {
            iVar4 = iVar3 / 10;
            iVar3 = iVar3 % 10;
            puVar6[3] = puVar6[3] + (char)iVar4;
          }
          puVar6[4] = puVar6[4] + (char)iVar3;
        }
        if ((((byte)REFG(undefined4, 0x15d763c) & 1) != 0) && (puVar6[2] == '0')) {
          F_00c46e20(puVar6 + 2,puVar6 + 3,3);
        }
        if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
        }
        return 0;
      }
                    
      F_00c4c299(param_5,0,0,0,0,0);
    }
    puVar1 = (uint *)F_00c51f85();
    uVar7 = 0x22;
  }
  *puVar1 = uVar7;
  F_00c4c305();
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar7;
}

/* ref: __cftoe_l */
uint F_00c55f63(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc55f63u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  gen_size32 _SizeInBytes;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = 0x16;
  F_00c7abe1(*param_1,param_1[1],((undefined *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)),0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (uint)((*(int *)((char *)((undefined *)(gen_frame + 0x0)))) == 0x2d)) - (uint)(0 < param_4);
    }
    uVar2 = F_00c7aa7b(param_2 + (uint)(0 < param_4) + (uint)((*(int *)((char *)((undefined *)(gen_frame + 0x0)))) == 0x2d),_SizeInBytes,
                      param_4 + 1,((undefined *)(gen_frame + 0x0)));
    if (uVar2 == 0) {
      uVar2 = F_00c55e02(param_2,param_3,param_4,param_5,((undefined *)(gen_frame + 0x0)),0,param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: __cftoe */
int F_00c5602a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5602au, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c55f63(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}

/* ref: __cftoa_l */
uint F_00c5604a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc5604au, gen_a0, gen_a1, gen_a2, gen_a3);
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  gen_size32 param_4 = (gen_size32)gen_a3;
  int param_5 = (int)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  uint * puVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  short sVar10;
  undefined1 * puVar11;
  char * pcVar12;
  char * pcVar13;
  bool bVar14;
  uint uVar15;
  
  (*(uint *)(gen_frame + 0x18)) = 0x3ff;
  (*(int *)(gen_frame + 0x28)) = 0x30;
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar5 = (uint *)F_00c51f85();
    uVar15 = 0x16;
LAB_00c56085: ;
    *puVar5 = uVar15;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return uVar15;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    puVar5 = (uint *)F_00c51f85();
    uVar15 = 0x22;
    goto LAB_00c56085;
  }
  (*(uint *)(gen_frame + 0x20)) = (uint)*param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      iVar6 = -1;
    }
    else {
      iVar6 = param_3 - 2;
    }
    uVar15 = F_00c5602a(param_1,param_2 + 2,iVar6,param_4,0);
    if (uVar15 != 0) {
      *param_2 = 0;
      if (((byte *)(gen_frame + 0x8))[0xc] == 0) {
        return uVar15;
      }
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
      return uVar15;
    }
    puVar11 = param_2;
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      puVar11 = param_2 + 1;
    }
    *puVar11 = 0x30;
    puVar11[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar7 = F_00c51220(puVar11 + 2,0x65);
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar7[3] = '\0';
    }
    goto LAB_00c563ac;
  }
  puVar11 = param_2;
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    puVar11 = param_2 + 1;
  }
  *puVar11 = 0x30;
  puVar11[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar10 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if ((*param_1 & 0x7ff0000000000000) == 0) {
    puVar11[2] = 0x30;
    if ((uint)*param_1 == 0 && (*param_1 & 0xfffff00000000) == 0) {
      (*(uint *)(gen_frame + 0x18)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x18)) = 0x3fe;
    }
  }
  else {
    puVar11[2] = 0x31;
  }
  pcVar13 = puVar11 + 3;
  pcVar7 = puVar11 + 4;
  if (param_4 == 0) {
    *pcVar13 = '\0';
  }
  else {
    *pcVar13 = *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xbc)))));
  }
  uVar15 = *(uint *)((int)param_1 + 4) & 0xfffff;
  (*(uint *)(gen_frame + 0x24)) = uVar15;
  if ((uVar15 != 0) || ((uint)*param_1 != 0)) {
    (*(uint *)(gen_frame + 0x20)) = 0;
    (*(uint *)(gen_frame + 0x24)) = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar4 = (ushort)((ulonglong)(byte)(*(int *)(gen_frame + 0x28)) < 0x40) *
              (short)(CONCAT44(*(uint *)((int)param_1 + 4) & (*(uint *)(gen_frame + 0x24)),(uint)*param_1 & (*(uint *)(gen_frame + 0x20))) >>
                     (ulonglong)(byte)(*(int *)(gen_frame + 0x28))) + 0x30;
      if (0x39 < uVar4) {
        uVar4 = uVar4 + sVar10;
      }
      iVar6 = (*(int *)(gen_frame + 0x28)) + -4;
      (*(int *)(gen_frame + 0x28)) = iVar6;
      iVar6 = (*(int *)(gen_frame + 0x28));
      *pcVar7 = (char)uVar4;
      pcVar7 = pcVar7 + 1;
      param_4 = param_4 - 1;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x28)) + 0)) = (short)iVar6;
      bVar14 = -1 < (short)(*(int *)(gen_frame + 0x28));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) >> 4 | (*(uint *)(gen_frame + 0x24)) << 0x1c;
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) >> 4;
      (*(int *)(gen_frame + 0x28)) = iVar6;
    } while (bVar14);
    if ((-1 < (short)(*(int *)(gen_frame + 0x28))) &&
       (pcVar12 = pcVar7,
       8 < (ushort)((ushort)((ulonglong)(byte)(*(int *)(gen_frame + 0x28)) < 0x40) *
                   (short)(CONCAT44(*(uint *)((int)param_1 + 4) & (*(uint *)(gen_frame + 0x24)),(uint)*param_1 & (*(uint *)(gen_frame + 0x20)))
                          >> (ulonglong)(byte)(*(int *)(gen_frame + 0x28)))))) {
      while( true ) {
        pcVar8 = pcVar12 + -1;
        if ((*pcVar8 != 'f') && (*pcVar8 != 'F')) break;
        *pcVar8 = '0';
        pcVar12 = pcVar8;
      }
      if (pcVar8 == pcVar13) {
        pcVar12[-2] = pcVar12[-2] + '\x01';
      }
      else if (*pcVar8 == '9') {
        *pcVar8 = (char)sVar10 + ':';
      }
      else {
        *pcVar8 = *pcVar8 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    F_00c48350(pcVar7,0x30,param_4);
    pcVar7 = pcVar7 + param_4;
  }
  if (*pcVar13 == '\0') {
    pcVar7 = pcVar13;
  }
  *pcVar7 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar15 = (uint)(*param_1 >> 0x34 & 0x7ff);
  uVar9 = uVar15 - (*(uint *)(gen_frame + 0x18));
  iVar6 = -(uint)(uVar15 < (*(uint *)(gen_frame + 0x18)));
  if (iVar6 < 0) {
    pcVar7[1] = '-';
    bVar14 = uVar9 != 0;
    uVar9 = -uVar9;
    iVar6 = -(iVar6 + (uint)bVar14);
  }
  else {
    pcVar7[1] = '+';
  }
  pcVar12 = pcVar7 + 2;
  *pcVar12 = '0';
  pcVar13 = pcVar12;
  lVar2 = (longlong)CONCAT44(iVar6,uVar9);
  if ((iVar6 < 0) || ((iVar6 < 1 && (lVar2 = (longlong)CONCAT44(iVar6,uVar9), uVar9 < 1000)))) {
LAB_00c5635b: ;
    if (99 < lVar2) goto LAB_00c56366;
  }
  else {
    lVar1 = (longlong)CONCAT44(iVar6,uVar9) / 1000;
    lVar2 = (longlong)CONCAT44(iVar6,uVar9) % 1000;
    *pcVar12 = (char)lVar1 + '0';
    pcVar13 = pcVar7 + 3;
    (*(undefined4 *)(gen_frame + 0x1c)) = (int)((ulonglong)lVar1 >> 0x20);
    if (pcVar13 == pcVar12) goto LAB_00c5635b;
LAB_00c56366: ;
    lVar1 = lVar2 / 100;
    lVar2 = lVar2 % 100;
    *pcVar13 = (char)lVar1 + '0';
    (*(undefined4 *)(gen_frame + 0x1c)) = (int)((ulonglong)lVar1 >> 0x20);
    pcVar13 = pcVar13 + 1;
  }
  cVar3 = (char)lVar2;
  if ((pcVar13 != pcVar12) || (9 < lVar2)) {
    cVar3 = (char)(lVar2 % 10);
    *pcVar13 = (char)(lVar2 / 10) + '0';
    (*(undefined4 *)(gen_frame + 0x1c)) = (int)((ulonglong)(lVar2 / 10) >> 0x20);
    pcVar13 = pcVar13 + 1;
    (*(undefined4 *)(gen_frame + 0x1c)) = (int)((ulonglong)(lVar2 % 10) >> 0x20);
  }
  *pcVar13 = cVar3 + '0';
  pcVar13[1] = '\0';
LAB_00c563ac: ;
  if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __cftoa */
int F_00c563c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc563c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  double * _Value = (double *)(uintptr_t)gen_a0;
  char * _Buf = (char *)(uintptr_t)gen_a1;
  gen_size32 _SizeInBytes = (gen_size32)gen_a2;
  int _Dec = (int)gen_a3;
  int _Caps = (int)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c5604a(_Value,_Buf,_SizeInBytes,_Dec,_Caps,0);
  return uVar1;
}

/* ref: __cftof2_l */
uint F_00c563e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc563e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  gen_size32 param_4 = (gen_size32)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * _Dst;
  int iVar1;
  int iVar2;
  int * piVar3;
  gen_size32 sVar4;
  uint uVar5;
  char * _Str;
  
  iVar1 = in_eax[1];
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),param_6);
  if ((in_ecx == (char *)0x0) || (param_3 == 0)) {
    piVar3 = F_00c51f85();
    uVar5 = 0x16;
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else {
    if (((char)param_5 != '\0') && (iVar1 - 1U == param_4)) {
      iVar2 = *in_eax;
      (in_ecx + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[0] = '0';
      (in_ecx + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
    }
    if (*in_eax == 0x2d) {
      *in_ecx = '-';
      in_ecx = in_ecx + 1;
    }
    if (in_eax[1] < 1) {
      _Str = in_ecx + 1;
      sVar4 = F_00c552f0(in_ecx);
      F_00c46e20(_Str,in_ecx,sVar4 + 1);
      *in_ecx = '0';
    }
    else {
      _Str = in_ecx + in_eax[1];
    }
    if (0 < (int)param_4) {
      _Dst = _Str + 1;
      sVar4 = F_00c552f0(_Str);
      F_00c46e20(_Dst,_Str,sVar4 + 1);
      *_Str = *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))));
      if (in_eax[1] < 0) {
        sVar4 = -in_eax[1];
        if (((char)param_5 != '\0') || ((int)sVar4 <= (int)param_4)) {
          param_4 = sVar4;
        }
        F_00c55dbd(_Dst,param_4);
        F_00c48350(_Dst,0x30,param_4);
      }
    }
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    uVar5 = 0;
  }
  return uVar5;
}

/* ref: __cftof_l */
uint F_00c564e3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc564e3u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  gen_size32 _SizeInBytes;
  uint uVar2;
  undefined _Stack_30[16];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = 0x16;
  F_00c7abe1(*param_1,param_1[1],&_Stack_30,((undefined1 *)(gen_frame + 0x0)),0x16);
  if (param_2 == (undefined1 *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else if (param_3 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    _SizeInBytes = 0xffffffff;
    if (param_3 != -1) {
      _SizeInBytes = param_3 - (uint)((*(int *)((char *)&(_Stack_30))) == 0x2d);
    }
    uVar2 = F_00c7aa7b(param_2 + ((*(int *)((char *)&(_Stack_30))) == 0x2d),_SizeInBytes,(*(int *)(((char *)&(_Stack_30) + 4))) + param_4,
                      &_Stack_30);
    if (uVar2 == 0) {
      uVar2 = F_00c563e0(&_Stack_30,param_2,param_3,param_4,0,param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: __cftof */
int F_00c565a4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc565a4u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c564e3(param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: __cftog_l */
uint F_00c565c1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc565c1u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  gen_size32 _SizeInBytes;
  int iVar5;
  char * pcVar6;
  undefined _Stack_30[16];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = 0x16;
  F_00c7abe1(*param_1,param_1[1],&_Stack_30,((undefined1 *)(gen_frame + 0x0)),0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    iVar5 = (*(int *)(((char *)&(_Stack_30) + 4))) + -1;
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)((*(int *)((char *)&(_Stack_30))) == 0x2d);
    }
    uVar3 = F_00c7aa7b(param_2 + ((*(int *)((char *)&(_Stack_30))) == 0x2d),_SizeInBytes,param_4,&_Stack_30);
    if (uVar3 == 0) {
      iVar4 = (*(int *)(((char *)&(_Stack_30) + 4))) + -1;
      if ((iVar4 < -4) || (param_4 <= iVar4)) {
        uVar3 = F_00c55e02(param_2,param_3,param_4,param_5,&_Stack_30,1,param_6);
      }
      else {
        pcVar1 = param_2 + ((*(int *)((char *)&(_Stack_30))) == 0x2d);
        if (iVar5 < iVar4) {
          do {
            pcVar6 = pcVar1;
            pcVar1 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          pcVar6[-1] = '\0';
        }
        uVar3 = F_00c563e0(&_Stack_30,param_2,param_3,param_4,1,param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: __cftog */
uint F_00c566ae(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc566aeu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c565c1(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}

/* ref: __cfltcvt_l */
int F_00c566ce(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc566ceu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  if ((param_4 == 0x65) || (param_4 == 0x45)) {
    uVar1 = F_00c55f63(param_1,param_2,param_3,param_5,param_6,param_7);
  }
  else {
    if (param_4 == 0x66) {
      uVar1 = F_00c564e3(param_1,param_2,param_3,param_5,param_7);
      return uVar1;
    }
    if ((param_4 == 0x61) || (param_4 == 0x41)) {
      uVar1 = F_00c5604a(param_1,param_2,param_3,param_5,param_6,param_7);
    }
    else {
      uVar1 = F_00c565c1(param_1,param_2,param_3,param_5,param_6,param_7);
    }
  }
  return uVar1;
}

/* ref: __cfltcvt */
int F_00c56756(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc56756u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int eVar1;
  
  eVar1 = F_00c566ce(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return eVar1;
}

/* ref: __initp_misc_cfltcvt_tab */
unsigned int F_00c56779(void)
{
  GEN_ENTER(0xc56779u, 0u, 0u, 0u, 0u);
  PVOID pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    pvVar1 = gen_imp_EncodePointer(*((PVOID *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x134b120) + uVar2))));
    *((PVOID *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x134b120) + uVar2))) = pvVar1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x28);
  return 0;
}

/* ref: __setdefaultprecision */
uint F_00c5679c(void)
{
  GEN_ENTER(0xc5679cu, 0u, 0u, 0u, 0u);
  int eVar1;
  undefined4 unaff_EDI = 0;
  
  eVar1 = F_00c7ad58((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    
    F_00c4c299(unaff_EDI,0,0,0,0,0);
  }
  return 0;
}

/* ref: __flsbuf */
int F_00c567c4(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc567c4u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char * _Buf;
  char * pcVar1;
  undefined * _File_00;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * puVar5;
  longlong lVar6;
  uint local_8;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)F_00c5d07b((*(undefined * PTR32 *)&gen_args[1]));
  uVar3 = (*(int *)(((char *)(_File_00) + 12)));
  if ((uVar3 & 0x82) == 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 9;
LAB_00c567ea: ;
    (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) | 0x20;
    return -1;
  }
  if ((uVar3 & 0x40) != 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x22;
    goto LAB_00c567ea;
  }
  if ((uVar3 & 1) != 0) {
    (*(int *)(((char *)(_File_00) + 4))) = 0;
    if ((uVar3 & 0x10) == 0) {
      (*(int *)(((char *)(_File_00) + 12))) = uVar3 | 0x20;
      return -1;
    }
    (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)(((char *)(_File_00) + 8)));
    (*(int *)(((char *)(_File_00) + 12))) = uVar3 & 0xfffffffe;
  }
  uVar3 = (*(int *)(((char *)(_File_00) + 12)));
  (*(int *)(((char *)(_File_00) + 12))) = uVar3 & 0xffffffef | 2;
  (*(int *)(((char *)(_File_00) + 4))) = 0;
  local_8 = 0;
  if (((uVar3 & 0x10c) == 0) &&
     (((uVar3 = F_00c50860(), _File_00 != (undefined *)(uVar3 + 0x20) &&
       (uVar3 = F_00c50860(), _File_00 != (undefined *)(uVar3 + 0x40))) ||
      (iVar4 = F_00c7adb7((int)(*(undefined * PTR32 *)&gen_args[1])), iVar4 == 0)))) {
    F_00c6e658(_File_00);
  }
  if (((*(int *)(((char *)(_File_00) + 12))) & 0x108U) == 0) {
    uVar3 = 1;
    local_8 = F_00c5de4b((int)(*(undefined * PTR32 *)&gen_args[1]),&(*(int *)&gen_args[0]),1);
  }
  else {
    _Buf = (*(char * PTR32 *)(((char *)(_File_00) + 8)));
    pcVar1 = (*(char * PTR32 *)((char *)(_File_00)));
    (*(char * PTR32 *)((char *)(_File_00))) = _Buf + 1;
    uVar3 = (int)pcVar1 - (int)_Buf;
    (*(int *)(((char *)(_File_00) + 4))) = (*(int *)(((char *)(_File_00) + 24))) + -1;
    if ((int)uVar3 < 1) {
      if (((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0xffffffff) || ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0xfffffffe)) {
        puVar5 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar5 = ((undefined *)GEN_TOP((((uint)(*(undefined * PTR32 *)&gen_args[1]) & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(*(undefined * PTR32 *)&gen_args[1]) >> 5])));
      }
      if (((puVar5[4] & 0x20) != 0) && (lVar6 = F_00c6de26((*(undefined * PTR32 *)&gen_args[1]),0,0,2), lVar6 == -1))
      goto LAB_00c56912;
    }
    else {
      local_8 = F_00c5de4b((int)(*(undefined * PTR32 *)&gen_args[1]),_Buf,uVar3);
    }
    *(*(char * PTR32 *)(((char *)(_File_00) + 8))) = (char)(*(int *)&gen_args[0]);
  }
  if (local_8 == uVar3) {
    return (*(int *)&gen_args[0]) & 0xff;
  }
LAB_00c56912: ;
  (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) | 0x20;
  return -1;
}

/* ref: write_char_00c56928 */
uint F_00c56928(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc56928u, gen_a0, gen_a1, gen_a2, 0u);
  byte in_al = (byte)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined3 in_register_00000001;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00000001,in_al);
  if ((((*(int *)(((char *)(in_ecx) + 12))) & 0x40) == 0) || ((*(char * PTR32 *)(((char *)(in_ecx) + 8))) != (char *)0x0)) {
    piVar1 = &(*(int *)(((char *)(in_ecx) + 4)));
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = F_00c567c4((int)(char)in_al,in_ecx);
    }
    else {
      *(*(char * PTR32 *)((char *)(in_ecx))) = in_al;
      (*(char * PTR32 *)((char *)(in_ecx))) = (*(char * PTR32 *)((char *)(in_ecx))) + 1;
      uVar2 = (uint)in_al;
    }
    if (uVar2 == 0xffffffff) {
      *in_esi = -1;
      return 0xffffffff;
    }
  }
  *in_esi = *in_esi + 1;
  return uVar2;
}

/* ref: write_multi_char_00c5695b */
uint F_00c5695b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5695bu, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar1 = (int *)F_00c56928((undefined1)param_2,param_4,in_eax);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c56981 */
uint F_00c56981(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc56981u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ebx = (int)gen_a1;
  uint * in_edi = (uint *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*(byte *)(in_ebx + 0xc) & 0x40) == 0) || (*(int *)(in_ebx + 8) != 0)) {
    *in_edi = 0;
    if (0 < (int)param_5) {
      do {
        param_5 = param_5 - 1;
        uVar1 = F_00c56928(*param_4,in_ebx,in_eax);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c56928(0x3f,in_ebx,in_eax);
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

/* ref: FUN_00c569e3 */
uint F_00c569e3(unsigned int gen_a0)
{
  GEN_ENTER(0xc569e3u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *param_1 = *param_1 + 4;
  return *(uint *)(*param_1 + -4);
}

/* ref: FUN_00c569f5 */
uint F_00c569f5(unsigned int gen_a0)
{
  GEN_ENTER(0xc569f5u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *param_1 = *param_1 + 8;
  return *(uint *)(*param_1 + -8);
}

/* ref: FUN_00c56a0a */
ushort F_00c56a0a(unsigned int gen_a0)
{
  GEN_ENTER(0xc56a0au, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *param_1 = *param_1 + 4;
  return *(ushort *)(*param_1 + -4);
}

/* ref: FUN_00c56a1d */
uint F_00c56a1d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc56a1du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  wchar_t _WCh;
  short * psVar1;
  uint * puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte * pbVar5;
  undefined * in_ecx;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  gen_size32 sVar9;
  wchar_t * pwVar10;
  int iVar11;
  code * pcVar12;
  wchar_t * pwVar13;
  int eVar14;
  char cVar15;
  undefined * puVar16;
  int iVar17;
  byte * pbVar18;
  wchar_t * pwVar19;
  bool bVar20;
  undefined4 * puVar21;
  undefined4 uVar22;
  undefined2 uVar23;
  undefined2 uVar25;
  undefined * p_Var24;
  
  (*(uint *)(gen_frame + 0x288)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28c);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(uint *)(gen_frame + 0x7c)) = 0;
  (*(int *)(gen_frame + 0x54)) = 0;
  (*(int *)(gen_frame + 0x74)) = 0;
  (*(int *)(gen_frame + 0x58)) = 0;
  (*(int *)(gen_frame + 0x48)) = 0;
  (*(int *)(gen_frame + 0x50)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x30)),param_3);
  piVar7 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar7;
  if (param_1 != (undefined *)0x0) {
    if (((*(int *)(((char *)(param_1) + 12))) & 0x40) == 0) {
      uVar8 = F_00c5d07b(param_1);
      if ((uVar8 == 0xffffffff) || (uVar8 == 0xfffffffe)) {
        puVar16 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar16 = ((undefined *)GEN_TOP(((uVar8 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar8 >> 5])));
      }
      if ((puVar16[0x24] & 0x7f) == 0) {
        if ((uVar8 == 0xffffffff) || (uVar8 == 0xfffffffe)) {
          puVar16 = &REFG(undefined, 0x134b280);
        }
        else {
          puVar16 = ((undefined *)GEN_TOP(((uVar8 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar8 >> 5])));
        }
        if ((puVar16[0x24] & 0x80) == 0) goto LAB_00c56b22;
      }
    }
    else {
LAB_00c56b22: ;
      iVar17 = 0;
      if (param_2 != (byte *)0x0) {
        (*(byte *)(gen_frame + 0x7b)) = *param_2;
        (*(uint *)(gen_frame + 0x68)) = 0;
        (*(gen_size32 *)(gen_frame + 0x64)) = 0;
        (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = (wchar_t *)0x0;
        pbVar5 = param_2;
        pwVar13 = param_4;
        uVar8 = (*(uint *)(gen_frame + 0x68));
        pwVar19 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
        while ((*(uint *)(gen_frame + 0x68)) = uVar8, (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar19, (*(byte *)(gen_frame + 0x7b)) != 0) {
          pbVar18 = pbVar5 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar18;
          if ((int)uVar8 < 0) break;
          if ((byte)((*(byte *)(gen_frame + 0x7b)) - 0x20) < 0x59) {
            uVar8 = (int)"e+000"[(char)(*(byte *)(gen_frame + 0x7b))] & 0xf;
          }
          else {
            uVar8 = 0;
          }
          (*(int *)(gen_frame + 0x18)) = (int)(char)(&REFG(undefined, 0x1119e88))[uVar8 * 8 + iVar17] >> 4;
          switch((unsigned int)(uintptr_t)((int)(char)(&REFG(undefined, 0x1119e88))[uVar8 * 8 + iVar17] >> 4)) {
          case 0: ;
switchD_00c56b97_caseD_0: ;
            (*(int *)(gen_frame + 0x50)) = 0;
            iVar17 = F_00c6dfe8((uint)(*(byte *)(gen_frame + 0x7b)),&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x30)))));
            bVar6 = (*(byte *)(gen_frame + 0x7b));
            if (iVar17 != 0) {
              F_00c56928((*(byte *)(gen_frame + 0x7b)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
              bVar6 = *pbVar18;
              (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar5 + 2;
              if (bVar6 == 0) goto LAB_00c56a93;
            }
            F_00c56928(bVar6,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
            break;
          case 1: ;
            (*(int *)(gen_frame + 0x74)) = -1;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(int *)(gen_frame + 0x48)) = 0;
            (*(int *)(gen_frame + 0x54)) = 0;
            (*(int *)(gen_frame + 0x58)) = 0;
            (*(uint *)(gen_frame + 0x7c)) = 0;
            (*(int *)(gen_frame + 0x50)) = 0;
            break;
          case 2: ;
            if ((*(byte *)(gen_frame + 0x7b)) == 0x20) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 2;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x23) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x80;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x2b) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 1;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x2d) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 4;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x30) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 8;
            }
            break;
          case 3: ;
            if ((*(byte *)(gen_frame + 0x7b)) == 0x2a) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar13 + 2;
              iVar17 = *(int *)pwVar13;
              (*(int *)(gen_frame + 0x54)) = iVar17;
              if (iVar17 < 0) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 4;
                (*(int *)(gen_frame + 0x54)) = -iVar17;
              }
            }
            else {
              (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) * 10 + -0x30 + (int)(char)(*(byte *)(gen_frame + 0x7b));
            }
            break;
          case 4: ;
            (*(int *)(gen_frame + 0x74)) = 0;
            break;
          case 5: ;
            if ((*(byte *)(gen_frame + 0x7b)) == 0x2a) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar13 + 2;
              (*(int *)(gen_frame + 0x74)) = *(int *)pwVar13;
              if (*(int *)pwVar13 < 0) {
                (*(int *)(gen_frame + 0x74)) = -1;
              }
            }
            else {
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) * 10 + -0x30 + (int)(char)(*(byte *)(gen_frame + 0x7b));
            }
            break;
          case 6: ;
            if ((*(byte *)(gen_frame + 0x7b)) == 0x49) {
              bVar6 = *pbVar18;
              if ((bVar6 == 0x36) && (pbVar5[2] == 0x34)) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x8000;
                (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar5 + 3;
              }
              else if ((bVar6 == 0x33) && (pbVar5[2] == 0x32)) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) & 0xffff7fff;
                (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar5 + 3;
              }
              else if (((((bVar6 != 100) && (bVar6 != 0x69)) && (bVar6 != 0x6f)) &&
                       ((bVar6 != 0x75 && (bVar6 != 0x78)))) && (bVar6 != 0x58)) {
                (*(int *)(gen_frame + 0x18)) = 0;
                goto switchD_00c56b97_caseD_0;
              }
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x68) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x20;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x6c) {
              if (*pbVar18 == 0x6c) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x1000;
                (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar5 + 2;
              }
              else {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x10;
              }
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x77) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
            }
            break;
          case 7: ;
            if ((char)(*(byte *)(gen_frame + 0x7b)) < 'e') {
              if ((*(byte *)(gen_frame + 0x7b)) == 100) {
LAB_00c57063: ;
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x40;
LAB_00c5706a: ;
                pwVar19 = pwVar13;
                (*(gen_size32 *)(gen_frame + 0x64)) = 10;
LAB_00c57074: ;
                if ((((*(uint *)(gen_frame + 0x7c)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x7c)) & 0x1000) == 0)) {
                  pwVar13 = pwVar19 + 2;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x20) == 0) {
                    uVar8 = *(uint *)pwVar19;
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x40) == 0) {
                      iVar17 = 0;
                    }
                    else {
                      iVar17 = (int)uVar8 >> 0x1f;
                    }
                    goto LAB_00c5729f;
                  }
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar13;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x40) == 0) {
                    uVar8 = (uint)(ushort)*pwVar19;
                  }
                  else {
                    uVar8 = (uint)*pwVar19;
                  }
                  iVar17 = (int)uVar8 >> 0x1f;
                }
                else {
                  uVar8 = *(uint *)pwVar19;
                  iVar17 = *(int *)(pwVar19 + 2);
                  pwVar13 = pwVar19 + 4;
LAB_00c5729f: ;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar13;
                }
                if (((((*(uint *)(gen_frame + 0x7c)) & 0x40) != 0) && (iVar17 < 1)) && (iVar17 < 0)) {
                  bVar20 = uVar8 != 0;
                  uVar8 = -uVar8;
                  iVar17 = -(iVar17 + (uint)bVar20);
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x100;
                }
                uVar3 = CONCAT44(iVar17,uVar8);
                if (((*(uint *)(gen_frame + 0x7c)) & 0x9000) == 0) {
                  iVar17 = 0;
                }
                if ((*(int *)(gen_frame + 0x74)) < 0) {
                  (*(int *)(gen_frame + 0x74)) = 1;
                }
                else {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) & 0xfffffff7;
                  if (0x200 < (*(int *)(gen_frame + 0x74))) {
                    (*(int *)(gen_frame + 0x74)) = 0x200;
                  }
                }
                if (uVar8 == 0 && iVar17 == 0) {
                  (*(int *)(gen_frame + 0x58)) = 0;
                }
                pwVar13 = &(*(undefined2 *)(gen_frame + 0x27f));
                while( true ) {
                  iVar11 = (*(int *)(gen_frame + 0x74));
                  (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                  if ((iVar11 < 1) && ((int)uVar3 == 0 && iVar17 == 0)) break;
                  uVar4 = CONCAT44(iVar17,(int)uVar3);
                  uVar3 = uVar4 / (*(gen_size32 *)(gen_frame + 0x64));
                  iVar17 = (int)(uVar3 >> 0x20);
                  uVar8 = (int)(uVar4 % (ulonglong)(*(gen_size32 *)(gen_frame + 0x64))) + 0x30;
                  cVar15 = (char)uVar8;
                  (*(gen_size32 *)(gen_frame + 0x2c)) = 0;
                  if (0x39 < uVar8) {
                    cVar15 = cVar15 + (char)(*(undefined4 *)(gen_frame + 0x40));
                  }
                  *(char *)pwVar13 = cVar15;
                  pwVar13 = (wchar_t *)((int)pwVar13 + -1);
                }
                sVar9 = (int)&(*(undefined2 *)(gen_frame + 0x27f)) - (int)pwVar13;
                (*(gen_size32 *)(gen_frame + 0x64)) = sVar9;
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((int)pwVar13 + 1);
                if ((((*(uint *)(gen_frame + 0x7c)) & 0x200) != 0) &&
                   ((sVar9 == 0 || (*(char *)((int)pwVar13 + 1) != '0')))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar13;
                  *(char *)pwVar13 = '0';
                  sVar9 = (int)&(*(undefined2 *)(gen_frame + 0x27f)) - (int)pwVar13 + 1;
                  goto LAB_00c573d0;
                }
              }
              else {
                if ((char)(*(byte *)(gen_frame + 0x7b)) < 'T') {
                  if ((*(byte *)(gen_frame + 0x7b)) == 0x53) {
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x830) == 0) {
                      (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
                    }
                    goto LAB_00c56e78;
                  }
                  if ((*(byte *)(gen_frame + 0x7b)) != 0x41) {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x43) {
                      pwVar19 = pwVar13;
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x830) == 0) {
                        (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
                      }
                      goto LAB_00c56ef1;
                    }
                    if (((*(byte *)(gen_frame + 0x7b)) != 0x45) && ((*(byte *)(gen_frame + 0x7b)) != 0x47)) goto LAB_00c573d6;
                  }
                  (*(undefined4 *)(gen_frame + 0x14)) = 1;
                  (*(byte *)(gen_frame + 0x7b)) = (*(byte *)(gen_frame + 0x7b)) + 0x20;
LAB_00c57099: ;
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x40;
                  pwVar19 = (wchar_t *)((undefined1 *)(gen_frame + 0x80));
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar19;
                  (*(gen_size32 *)(gen_frame + 0x2c)) = 0x200;
                  if ((*(int *)(gen_frame + 0x74)) < 0) {
                    (*(int *)(gen_frame + 0x74)) = 6;
                  }
                  else if ((*(int *)(gen_frame + 0x74)) == 0) {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x67) {
                      (*(int *)(gen_frame + 0x74)) = 1;
                    }
                  }
                  else {
                    if (0x200 < (*(int *)(gen_frame + 0x74))) {
                      (*(int *)(gen_frame + 0x74)) = 0x200;
                    }
                    if (0xa3 < (*(int *)(gen_frame + 0x74))) {
                      sVar9 = (*(int *)(gen_frame + 0x74)) + 0x15d;
                      pwVar10 = F_00c54c2e(sVar9);
                      (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = pwVar10;
                      if (pwVar10 == (wchar_t *)0x0) {
                        (*(int *)(gen_frame + 0x74)) = 0xa3;
                      }
                      else {
                        (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar10;
                        (*(gen_size32 *)(gen_frame + 0x2c)) = sVar9;
                        pwVar19 = pwVar10;
                      }
                    }
                  }
                  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)pwVar13;
                  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(pwVar13 + 2);
                  p_Var24 = ((undefined *)(gen_frame + 0x30));
                  iVar11 = (int)(char)(*(byte *)(gen_frame + 0x7b));
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar13 + 4;
                  puVar21 = &(*(undefined4 *)(gen_frame + 0xc));
                  pwVar13 = pwVar19;
                  sVar9 = (*(gen_size32 *)(gen_frame + 0x2c));
                  iVar17 = (*(int *)(gen_frame + 0x74));
                  uVar22 = (*(undefined4 *)(gen_frame + 0x14));
                  pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
                  (*pcVar12)(puVar21,pwVar13,sVar9,iVar11,iVar17,uVar22,p_Var24);
                  uVar8 = (*(uint *)(gen_frame + 0x7c)) & 0x80;
                  if ((uVar8 != 0) && ((*(int *)(gen_frame + 0x74)) == 0)) {
                    p_Var24 = ((undefined *)(gen_frame + 0x30));
                    pwVar13 = pwVar19;
                    pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                    (*pcVar12)(pwVar13,p_Var24);
                  }
                  if (((*(byte *)(gen_frame + 0x7b)) == 0x67) && (uVar8 == 0)) {
                    p_Var24 = ((undefined *)(gen_frame + 0x30));
                    pwVar13 = pwVar19;
                    pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                    (*pcVar12)(pwVar13,p_Var24);
                  }
                  if ((char)*pwVar19 == '-') {
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x100;
                    pwVar19 = (wchar_t *)((int)pwVar19 + 1);
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar19;
                  }
                  uVar23 = SUB42(pwVar19,0);
                  uVar25 = (undefined2)((uint)((int)(uintptr_t)pwVar19) >> 0x10);
                }
                else {
                  if ((*(byte *)(gen_frame + 0x7b)) == 0x58) goto LAB_00c571f9;
                  if ((*(byte *)(gen_frame + 0x7b)) != 0x5a) {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x61) goto LAB_00c57099;
                    if ((*(byte *)(gen_frame + 0x7b)) != 99) goto LAB_00c573d6;
LAB_00c56ef1: ;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar19 + 2;
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x810) == 0) {
                      ((undefined1 *)(gen_frame + 0x80))[0] = (char)*pwVar19;
                      (*(gen_size32 *)(gen_frame + 0x64)) = 1;
                    }
                    else {
                      eVar14 = F_00c7af62((int *)&(*(gen_size32 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x80)),0x200,*pwVar19);
                      if (eVar14 != 0) {
                        (*(int *)(gen_frame + 0x48)) = 1;
                      }
                    }
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((undefined1 *)(gen_frame + 0x80));
                    goto LAB_00c573d6;
                  }
                  psVar1 = *(short * PTR32 *)pwVar13;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar13 + 2;
                  if ((psVar1 != (short *)0x0) && (*(wchar_t * PTR32 *)(psVar1 + 2) != (wchar_t *)0x0)) {
                    sVar9 = (gen_size32)*psVar1;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)(psVar1 + 2);
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x800) == 0) {
                      (*(int *)(gen_frame + 0x50)) = 0;
                    }
                    else {
                      sVar9 = (int)sVar9 / 2;
                      (*(int *)(gen_frame + 0x50)) = 1;
                    }
                    goto LAB_00c573d0;
                  }
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                  uVar23 = SUB42(REFG(undefined * PTR32, 0x134b148),0);
                  uVar25 = (undefined2)((uint)REFG(undefined * PTR32, 0x134b148) >> 0x10);
                }
                sVar9 = F_00c552f0(((char *)GEN_TOP(CONCAT22(uVar25,uVar23))));
LAB_00c573d0: ;
                (*(gen_size32 *)(gen_frame + 0x64)) = sVar9;
              }
LAB_00c573d6: ;
              if ((*(int *)(gen_frame + 0x48)) == 0) {
                if (((*(uint *)(gen_frame + 0x7c)) & 0x40) != 0) {
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x100) == 0) {
                    if (((*(uint *)(gen_frame + 0x7c)) & 1) == 0) {
                      if (((*(uint *)(gen_frame + 0x7c)) & 2) == 0) goto LAB_00c57423;
                      (*(undefined1 *)(gen_frame + 0x60)) = 0x20;
                    }
                    else {
                      (*(undefined1 *)(gen_frame + 0x60)) = 0x2b;
                    }
                  }
                  else {
                    (*(undefined1 *)(gen_frame + 0x60)) = 0x2d;
                  }
                  (*(int *)(gen_frame + 0x58)) = 1;
                }
LAB_00c57423: ;
                sVar9 = ((*(int *)(gen_frame + 0x54)) - (*(gen_size32 *)(gen_frame + 0x64))) - (*(int *)(gen_frame + 0x58));
                (*(gen_size32 *)(gen_frame + 0x2c)) = sVar9;
                if (((*(uint *)(gen_frame + 0x7c)) & 0xc) == 0) {
                  do {
                    if ((int)sVar9 < 1) break;
                    sVar9 = sVar9 - 1;
                    F_00c56928(0x20,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                  } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                }
                in_ecx = (*(undefined * PTR32 *)(gen_frame + 0x5c));
                F_00c56981(&(*(uint *)(gen_frame + 0x68)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x20)),&(*(undefined1 *)(gen_frame + 0x60)),(*(int *)(gen_frame + 0x58)));
                if ((((*(uint *)(gen_frame + 0x7c)) & 8) != 0) && (sVar9 = (*(gen_size32 *)(gen_frame + 0x2c)), ((*(uint *)(gen_frame + 0x7c)) & 4) == 0)) {
                  do {
                    if ((int)sVar9 < 1) break;
                    sVar9 = sVar9 - 1;
                    F_00c56928(0x30,in_ecx,&(*(uint *)(gen_frame + 0x68)));
                  } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                }
                if (((*(int *)(gen_frame + 0x50)) == 0) || ((int)(*(gen_size32 *)(gen_frame + 0x64)) < 1)) {
                  F_00c56981(&(*(uint *)(gen_frame + 0x68)),in_ecx,(*(int * PTR32 *)(gen_frame + 0x20)),(*(wchar_t * PTR32 *)(gen_frame + 0x6c)),(*(gen_size32 *)(gen_frame + 0x64)));
                }
                else {
                  (*(gen_size32 *)(gen_frame + 0x24)) = (*(gen_size32 *)(gen_frame + 0x64));
                  pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                  do {
                    _WCh = *pwVar13;
                    (*(gen_size32 *)(gen_frame + 0x24)) = (*(gen_size32 *)(gen_frame + 0x24)) - 1;
                    pwVar13 = pwVar13 + 1;
                    eVar14 = F_00c7af62(&(*(int *)(gen_frame + 0x1c)),(char *)((int)&(*(undefined2 *)(gen_frame + 0x27f)) + 1),6,_WCh);
                    if ((eVar14 != 0) || ((*(int *)(gen_frame + 0x1c)) == 0)) {
                      (*(uint *)(gen_frame + 0x68)) = 0xffffffff;
                      break;
                    }
                    F_00c56981(&(*(uint *)(gen_frame + 0x68)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x20)),(int)&(*(undefined2 *)(gen_frame + 0x27f)) + 1,(*(int *)(gen_frame + 0x1c)));
                  } while ((*(gen_size32 *)(gen_frame + 0x24)) != 0);
                }
                if ((-1 < (int)(*(uint *)(gen_frame + 0x68))) && (sVar9 = (*(gen_size32 *)(gen_frame + 0x2c)), ((*(uint *)(gen_frame + 0x7c)) & 4) != 0)) {
                  do {
                    if ((int)sVar9 < 1) break;
                    sVar9 = sVar9 - 1;
                    F_00c56928(0x20,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                  } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                }
              }
            }
            else {
              if ('p' < (char)(*(byte *)(gen_frame + 0x7b))) {
                if ((*(byte *)(gen_frame + 0x7b)) == 0x73) {
LAB_00c56e78: ;
                  iVar17 = (*(int *)(gen_frame + 0x74));
                  if ((*(int *)(gen_frame + 0x74)) == -1) {
                    iVar17 = 0x7fffffff;
                  }
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar13 + 2;
                  pwVar13 = *(wchar_t * PTR32 *)pwVar13;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar13;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x810) == 0) {
                    pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                    if (pwVar13 == (wchar_t *)0x0) {
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                      pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                    }
                    for (; (iVar17 != 0 && (iVar17 = iVar17 + -1, (char)*pwVar13 != '\0'));
                        pwVar13 = (wchar_t *)((int)pwVar13 + 1)) {
                    }
                    sVar9 = (int)pwVar13 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                  }
                  else {
                    if (pwVar13 == (wchar_t *)0x0) {
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                    }
                    (*(int *)(gen_frame + 0x50)) = 1;
                    for (pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                        (iVar17 != 0 && (iVar17 = iVar17 + -1, *pwVar13 != L'\0'));
                        pwVar13 = pwVar13 + 1) {
                    }
                    sVar9 = (int)pwVar13 - (int)((int)(uintptr_t)(*(wchar_t * PTR32 *)(gen_frame + 0x6c))) >> 1;
                  }
                  goto LAB_00c573d0;
                }
                if ((*(byte *)(gen_frame + 0x7b)) == 0x75) goto LAB_00c5706a;
                if ((*(byte *)(gen_frame + 0x7b)) != 0x78) goto LAB_00c573d6;
                (*(undefined4 *)(gen_frame + 0x40)) = 0x27;
LAB_00c5722b: ;
                (*(gen_size32 *)(gen_frame + 0x64)) = 0x10;
                if (((*(uint *)(gen_frame + 0x7c)) & 0x80) != 0) {
                  (*(undefined1 *)(gen_frame + 0x60)) = 0x30;
                  (*(char *)(gen_frame + 0x61)) = (char)(*(undefined4 *)(gen_frame + 0x40)) + 'Q';
                  (*(int *)(gen_frame + 0x58)) = 2;
                }
                goto LAB_00c57074;
              }
              if ((*(byte *)(gen_frame + 0x7b)) == 0x70) {
                (*(int *)(gen_frame + 0x74)) = 8;
LAB_00c571f9: ;
                (*(undefined4 *)(gen_frame + 0x40)) = 7;
                pwVar19 = pwVar13;
                goto LAB_00c5722b;
              }
              if ((char)(*(byte *)(gen_frame + 0x7b)) < 'e') goto LAB_00c573d6;
              pwVar13 = pwVar19;
              if ((char)(*(byte *)(gen_frame + 0x7b)) < 'h') goto LAB_00c57099;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x69) goto LAB_00c57063;
              if ((*(byte *)(gen_frame + 0x7b)) != 0x6e) {
                if ((*(byte *)(gen_frame + 0x7b)) != 0x6f) goto LAB_00c573d6;
                (*(gen_size32 *)(gen_frame + 0x64)) = 8;
                if (((*(uint *)(gen_frame + 0x7c)) & 0x80) != 0) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x200;
                }
                goto LAB_00c57074;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar19 + 2;
              puVar2 = *(uint * PTR32 *)pwVar19;
              uVar8 = F_00c51967();
              if (uVar8 == 0) goto LAB_00c56a93;
              if (((*(uint *)(gen_frame + 0x7c)) & 0x20) == 0) {
                *puVar2 = (*(uint *)(gen_frame + 0x68));
              }
              else {
                *(undefined2 *)puVar2 = (undefined2)(*(uint *)(gen_frame + 0x68));
              }
              (*(int *)(gen_frame + 0x48)) = 1;
            }
            if ((*(wchar_t * PTR32 *)(gen_frame + 0x44)) != (wchar_t *)0x0) {
              F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x44)));
              (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = (wchar_t *)0x0;
            }
          }
          (*(byte *)(gen_frame + 0x7b)) = *(*(byte * PTR32 *)(gen_frame + 0x4c));
          iVar17 = (*(int *)(gen_frame + 0x18));
          pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x4c));
          pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
          uVar8 = (*(uint *)(gen_frame + 0x68));
          pwVar19 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
        }
        if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x30)) + 12))) != false) {
          (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) & 0xfffffffd;
        }
        goto LAB_00c575f5;
      }
    }
  }
LAB_00c56a93: ;
  piVar7 = F_00c51f85();
  *piVar7 = 0x16;
  F_00c4c305();
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x30)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) & 0xfffffffd;
  }
  uVar8 = 0xffffffff;
LAB_00c575f5: ;
  F_00c47745((*(uint *)(gen_frame + 0x288)) ^ (uint)(uint)(gen_frame + 0x28c));
  return uVar8;
}

/* ref: __vsprintf_l */
int F_00c57625(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc57625u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if ((_Format != (char *)0x0) && (_DstBuf != (char *)0x0)) {
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = _DstBuf;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = _DstBuf;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
    uVar2 = F_00c56a1d(((undefined *)(gen_frame + 0xc)),_Format,param_3,_ArgList);
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
    if (iVar3 < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = '\0';
    }
    return uVar2;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return -1;
}

/* ref: _vsprintf */
int F_00c576a9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc576a9u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Dest = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Args = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = F_00c57625(_Dest,_Format,(undefined *)0x0,_Args);
  return iVar1;
}

/* ref: FID_conflict___vscprintf_helper_00c576c3 */
uint F_00c576c3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc576c3u, gen_a0, gen_a1, gen_a2, gen_a3);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  puVar4 = ((undefined4 *)(gen_frame + 0x10));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_2 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  ((undefined4 *)(gen_frame + 0x10))[0] = 0x7fffffff;
  ((undefined4 *)(gen_frame + 0x10))[2] = 0x42;
  ((undefined4 *)(gen_frame + 0x10))[1] = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  uVar2 = (*param_1)(&(*(undefined4 *)(gen_frame + 0xc)),param_2,param_3,param_4);
  return uVar2;
}

/* ref: FID_conflict___vscprintf_p_00c5771f */
int F_00c5771f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5771fu, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc56a1d)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c5773b */
int F_00c5773b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5773bu, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc56a1d)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_00c57758 */
int F_00c57758(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc57758u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc5867b)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c57774 */
int F_00c57774(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc57774u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc5867b)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: write_char_00c57791 */
uint F_00c57791(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc57791u, gen_a0, gen_a1, gen_a2, 0u);
  byte in_al = (byte)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined3 in_register_00000001;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00000001,in_al);
  if ((((*(int *)(((char *)(in_ecx) + 12))) & 0x40) == 0) || ((*(char * PTR32 *)(((char *)(in_ecx) + 8))) != (char *)0x0)) {
    piVar1 = &(*(int *)(((char *)(in_ecx) + 4)));
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = F_00c567c4((int)(char)in_al,in_ecx);
    }
    else {
      *(*(char * PTR32 *)((char *)(in_ecx))) = in_al;
      (*(char * PTR32 *)((char *)(in_ecx))) = (*(char * PTR32 *)((char *)(in_ecx))) + 1;
      uVar2 = (uint)in_al;
    }
    if (uVar2 == 0xffffffff) {
      *in_esi = -1;
      return 0xffffffff;
    }
  }
  *in_esi = *in_esi + 1;
  return uVar2;
}

/* ref: write_multi_char_00c577c4 */
uint F_00c577c4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc577c4u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar1 = (int *)F_00c57791((undefined1)param_2,param_4,in_eax);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c577ea */
uint F_00c577ea(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc577eau, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ebx = (int)gen_a1;
  uint * in_edi = (uint *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*(byte *)(in_ebx + 0xc) & 0x40) == 0) || (*(int *)(in_ebx + 8) != 0)) {
    *in_edi = 0;
    if (0 < (int)param_5) {
      do {
        param_5 = param_5 - 1;
        uVar1 = F_00c57791(*param_4,in_ebx,in_eax);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c57791(0x3f,in_ebx,in_eax);
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

/* ref: FUN_00c5784c */
uint F_00c5784c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5784cu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  wchar_t _WCh;
  short * psVar1;
  uint * puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined * in_ecx;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  gen_size32 sVar8;
  wchar_t * pwVar9;
  int iVar10;
  code * pcVar11;
  wchar_t * pwVar12;
  int eVar13;
  char cVar14;
  undefined * puVar15;
  int iVar16;
  byte * pbVar17;
  wchar_t * pwVar19;
  bool bVar20;
  undefined4 * puVar21;
  undefined4 uVar22;
  undefined2 uVar23;
  undefined2 uVar25;
  undefined * p_Var24;
  byte * pbVar18;
  
  (*(uint *)(gen_frame + 0x288)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28c);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x7c)) = 0;
  (*(int *)(gen_frame + 0x54)) = 0;
  (*(int *)(gen_frame + 0x74)) = 0;
  (*(int *)(gen_frame + 0x58)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x50)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x38)),param_3);
  piVar6 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
  if (param_1 != (undefined *)0x0) {
    if (((*(int *)(((char *)(param_1) + 12))) & 0x40) == 0) {
      uVar7 = F_00c5d07b(param_1);
      if ((uVar7 == 0xffffffff) || (uVar7 == 0xfffffffe)) {
        puVar15 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar15 = ((undefined *)GEN_TOP(((uVar7 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar7 >> 5])));
      }
      if ((puVar15[0x24] & 0x7f) == 0) {
        if ((uVar7 == 0xffffffff) || (uVar7 == 0xfffffffe)) {
          puVar15 = &REFG(undefined, 0x134b280);
        }
        else {
          puVar15 = ((undefined *)GEN_TOP(((uVar7 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar7 >> 5])));
        }
        if ((puVar15[0x24] & 0x80) == 0) goto LAB_00c57951;
      }
    }
    else {
LAB_00c57951: ;
      if (param_2 != (byte *)0x0) {
        (*(byte *)(gen_frame + 0x7b)) = *param_2;
        (*(uint *)(gen_frame + 0x68)) = 0;
        (*(gen_size32 *)(gen_frame + 0x64)) = 0;
        (*(uint *)(gen_frame + 0x48)) = 0;
        (*(wchar_t * PTR32 *)(gen_frame + 0x2c)) = (wchar_t *)0x0;
        pbVar18 = param_2;
        pwVar12 = param_4;
        if ((*(byte *)(gen_frame + 0x7b)) != 0) {
          do {
            pwVar19 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
            pbVar17 = pbVar18 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar17;
            if ((int)(*(uint *)(gen_frame + 0x68)) < 0) break;
            if ((byte)((*(byte *)(gen_frame + 0x7b)) - 0x20) < 0x59) {
              uVar7 = (byte)(&REFG(undefined, 0x1119ec8))[(char)(*(byte *)(gen_frame + 0x7b))] & 0xf;
            }
            else {
              uVar7 = 0;
            }
            uVar7 = (uint)((byte)(&REFG(undefined, 0x1119ee8))[(*(uint *)(gen_frame + 0x48)) + uVar7 * 9] >> 4);
            (*(uint *)(gen_frame + 0x48)) = uVar7;
            if (uVar7 == 8) goto LAB_00c578c2;
            switch((unsigned int)(uintptr_t)(uVar7)) {
            case 0: ;
switchD_00c579de_caseD_0: ;
              (*(int *)(gen_frame + 0x50)) = 0;
              iVar16 = F_00c6dfe8((uint)(*(byte *)(gen_frame + 0x7b)),&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x38)))));
              bVar5 = (*(byte *)(gen_frame + 0x7b));
              if (iVar16 != 0) {
                F_00c57791((*(byte *)(gen_frame + 0x7b)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                bVar5 = *pbVar17;
                (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar18 + 2;
                if (bVar5 == 0) goto LAB_00c578c2;
              }
              F_00c57791(bVar5,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
              break;
            case 1: ;
              (*(int *)(gen_frame + 0x74)) = -1;
              (*(undefined4 *)(gen_frame + 0x18)) = 0;
              (*(int *)(gen_frame + 0x30)) = 0;
              (*(int *)(gen_frame + 0x54)) = 0;
              (*(int *)(gen_frame + 0x58)) = 0;
              (*(uint *)(gen_frame + 0x7c)) = 0;
              (*(int *)(gen_frame + 0x50)) = 0;
              break;
            case 2: ;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x20) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 2;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x23) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x80;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x2b) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 1;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x2d) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 4;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x30) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 8;
              }
              break;
            case 3: ;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x2a) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar12 + 2;
                iVar16 = *(int *)pwVar12;
                (*(int *)(gen_frame + 0x54)) = iVar16;
                if (iVar16 < 0) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 4;
                  (*(int *)(gen_frame + 0x54)) = -iVar16;
                }
              }
              else {
                (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) * 10 + -0x30 + (int)(char)(*(byte *)(gen_frame + 0x7b));
              }
              break;
            case 4: ;
              (*(int *)(gen_frame + 0x74)) = 0;
              break;
            case 5: ;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x2a) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar12 + 2;
                (*(int *)(gen_frame + 0x74)) = *(int *)pwVar12;
                if (*(int *)pwVar12 < 0) {
                  (*(int *)(gen_frame + 0x74)) = -1;
                }
              }
              else {
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) * 10 + -0x30 + (int)(char)(*(byte *)(gen_frame + 0x7b));
              }
              break;
            case 6: ;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x49) {
                bVar5 = *pbVar17;
                if ((bVar5 == 0x36) && (pbVar18[2] == 0x34)) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x8000;
                  (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar18 + 3;
                }
                else if ((bVar5 == 0x33) && (pbVar18[2] == 0x32)) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) & 0xffff7fff;
                  (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar18 + 3;
                }
                else if (((((bVar5 != 100) && (bVar5 != 0x69)) && (bVar5 != 0x6f)) &&
                         ((bVar5 != 0x75 && (bVar5 != 0x78)))) && (bVar5 != 0x58)) {
                  (*(uint *)(gen_frame + 0x48)) = 0;
                  goto switchD_00c579de_caseD_0;
                }
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x68) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x20;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x6c) {
                if (*pbVar17 == 0x6c) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x1000;
                  (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar18 + 2;
                }
                else {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x10;
                }
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x77) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
              }
              break;
            case 7: ;
              if ((char)(*(byte *)(gen_frame + 0x7b)) < 'e') {
                if ((*(byte *)(gen_frame + 0x7b)) == 100) {
LAB_00c57eaa: ;
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x40;
LAB_00c57eb1: ;
                  (*(gen_size32 *)(gen_frame + 0x64)) = 10;
LAB_00c57ebb: ;
                  if ((((*(uint *)(gen_frame + 0x7c)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x7c)) & 0x1000) == 0)) {
                    pwVar19 = pwVar12 + 2;
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x20) == 0) {
                      uVar7 = *(uint *)pwVar12;
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x40) == 0) {
                        iVar16 = 0;
                      }
                      else {
                        iVar16 = (int)uVar7 >> 0x1f;
                      }
                      goto LAB_00c580e3;
                    }
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar19;
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x40) == 0) {
                      uVar7 = (uint)(ushort)*pwVar12;
                    }
                    else {
                      uVar7 = (uint)*pwVar12;
                    }
                    iVar16 = (int)uVar7 >> 0x1f;
                  }
                  else {
                    pwVar19 = pwVar12 + 4;
                    uVar7 = *(uint *)pwVar12;
                    iVar16 = *(int *)(pwVar12 + 2);
LAB_00c580e3: ;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar19;
                  }
                  if (((((*(uint *)(gen_frame + 0x7c)) & 0x40) != 0) && (iVar16 < 1)) && (iVar16 < 0)) {
                    bVar20 = uVar7 != 0;
                    uVar7 = -uVar7;
                    iVar16 = -(iVar16 + (uint)bVar20);
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x100;
                  }
                  uVar3 = CONCAT44(iVar16,uVar7);
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x9000) == 0) {
                    iVar16 = 0;
                  }
                  if ((*(int *)(gen_frame + 0x74)) < 0) {
                    (*(int *)(gen_frame + 0x74)) = 1;
                  }
                  else {
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) & 0xfffffff7;
                    if (0x200 < (*(int *)(gen_frame + 0x74))) {
                      (*(int *)(gen_frame + 0x74)) = 0x200;
                    }
                  }
                  if (uVar7 == 0 && iVar16 == 0) {
                    (*(int *)(gen_frame + 0x58)) = 0;
                  }
                  pwVar12 = &(*(undefined2 *)(gen_frame + 0x27f));
                  while( true ) {
                    iVar10 = (*(int *)(gen_frame + 0x74));
                    (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                    if ((iVar10 < 1) && ((int)uVar3 == 0 && iVar16 == 0)) break;
                    uVar4 = CONCAT44(iVar16,(int)uVar3);
                    uVar3 = uVar4 / (*(gen_size32 *)(gen_frame + 0x64));
                    iVar16 = (int)(uVar3 >> 0x20);
                    uVar7 = (int)(uVar4 % (ulonglong)(*(gen_size32 *)(gen_frame + 0x64))) + 0x30;
                    cVar14 = (char)uVar7;
                    (*(gen_size32 *)(gen_frame + 0x24)) = 0;
                    if (0x39 < uVar7) {
                      cVar14 = cVar14 + (char)(*(undefined4 *)(gen_frame + 0x34));
                    }
                    *(char *)pwVar12 = cVar14;
                    pwVar12 = (wchar_t *)((int)pwVar12 + -1);
                  }
                  sVar8 = (int)&(*(undefined2 *)(gen_frame + 0x27f)) - (int)pwVar12;
                  (*(gen_size32 *)(gen_frame + 0x64)) = sVar8;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((int)pwVar12 + 1);
                  if ((((*(uint *)(gen_frame + 0x7c)) & 0x200) != 0) &&
                     ((sVar8 == 0 || (*(char *)((int)pwVar12 + 1) != '0')))) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar12;
                    *(char *)pwVar12 = '0';
                    sVar8 = (int)&(*(undefined2 *)(gen_frame + 0x27f)) - (int)pwVar12 + 1;
                    goto LAB_00c58217;
                  }
                }
                else {
                  if ((char)(*(byte *)(gen_frame + 0x7b)) < 'T') {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x53) {
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x830) == 0) {
                        (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
                      }
                      goto LAB_00c57cc2;
                    }
                    if ((*(byte *)(gen_frame + 0x7b)) != 0x41) {
                      if ((*(byte *)(gen_frame + 0x7b)) == 0x43) {
                        if (((*(uint *)(gen_frame + 0x7c)) & 0x830) == 0) {
                          (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
                        }
                        goto LAB_00c57d3b;
                      }
                      if (((*(byte *)(gen_frame + 0x7b)) != 0x45) && ((*(byte *)(gen_frame + 0x7b)) != 0x47)) goto LAB_00c5821d;
                    }
                    (*(undefined4 *)(gen_frame + 0x18)) = 1;
                    (*(byte *)(gen_frame + 0x7b)) = (*(byte *)(gen_frame + 0x7b)) + 0x20;
LAB_00c57ee0: ;
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x40;
                    pwVar19 = ((wchar_t *)(gen_frame + 0x80));
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar19;
                    (*(gen_size32 *)(gen_frame + 0x24)) = 0x200;
                    if ((*(int *)(gen_frame + 0x74)) < 0) {
                      (*(int *)(gen_frame + 0x74)) = 6;
                    }
                    else if ((*(int *)(gen_frame + 0x74)) == 0) {
                      if ((*(byte *)(gen_frame + 0x7b)) == 0x67) {
                        (*(int *)(gen_frame + 0x74)) = 1;
                      }
                    }
                    else {
                      if (0x200 < (*(int *)(gen_frame + 0x74))) {
                        (*(int *)(gen_frame + 0x74)) = 0x200;
                      }
                      if (0xa3 < (*(int *)(gen_frame + 0x74))) {
                        sVar8 = (*(int *)(gen_frame + 0x74)) + 0x15d;
                        pwVar9 = F_00c54c2e(sVar8);
                        (*(wchar_t * PTR32 *)(gen_frame + 0x2c)) = pwVar9;
                        if (pwVar9 == (wchar_t *)0x0) {
                          (*(int *)(gen_frame + 0x74)) = 0xa3;
                        }
                        else {
                          (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar9;
                          (*(gen_size32 *)(gen_frame + 0x24)) = sVar8;
                          pwVar19 = pwVar9;
                        }
                      }
                    }
                    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)pwVar12;
                    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(pwVar12 + 2);
                    p_Var24 = ((undefined *)(gen_frame + 0x38));
                    iVar10 = (int)(char)(*(byte *)(gen_frame + 0x7b));
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar12 + 4;
                    puVar21 = &(*(undefined4 *)(gen_frame + 0xc));
                    pwVar12 = pwVar19;
                    sVar8 = (*(gen_size32 *)(gen_frame + 0x24));
                    iVar16 = (*(int *)(gen_frame + 0x74));
                    uVar22 = (*(undefined4 *)(gen_frame + 0x18));
                    pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
                    (*pcVar11)(puVar21,pwVar12,sVar8,iVar10,iVar16,uVar22,p_Var24);
                    uVar7 = (*(uint *)(gen_frame + 0x7c)) & 0x80;
                    if ((uVar7 != 0) && ((*(int *)(gen_frame + 0x74)) == 0)) {
                      p_Var24 = ((undefined *)(gen_frame + 0x38));
                      pwVar12 = pwVar19;
                      pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                      (*pcVar11)(pwVar12,p_Var24);
                    }
                    if (((*(byte *)(gen_frame + 0x7b)) == 0x67) && (uVar7 == 0)) {
                      p_Var24 = ((undefined *)(gen_frame + 0x38));
                      pwVar12 = pwVar19;
                      pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                      (*pcVar11)(pwVar12,p_Var24);
                    }
                    if ((char)*pwVar19 == '-') {
                      (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x100;
                      pwVar19 = (wchar_t *)((int)pwVar19 + 1);
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar19;
                    }
                    uVar23 = SUB42(pwVar19,0);
                    uVar25 = (undefined2)((uint)((int)(uintptr_t)pwVar19) >> 0x10);
                  }
                  else {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x58) goto LAB_00c5803d;
                    if ((*(byte *)(gen_frame + 0x7b)) != 0x5a) {
                      if ((*(byte *)(gen_frame + 0x7b)) == 0x61) goto LAB_00c57ee0;
                      pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
                      if ((*(byte *)(gen_frame + 0x7b)) != 99) goto LAB_00c5821d;
LAB_00c57d3b: ;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar12 + 2;
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x810) == 0) {
                        (*(undefined1 *)((char *)&((wchar_t *)(gen_frame + 0x80))[0] + 0)) = (char)*pwVar12;
                        (*(gen_size32 *)(gen_frame + 0x64)) = 1;
                      }
                      else {
                        eVar13 = F_00c7af62((int *)&(*(gen_size32 *)(gen_frame + 0x64)),(char *)((wchar_t *)(gen_frame + 0x80)),0x200,*pwVar12);
                        if (eVar13 != 0) {
                          (*(int *)(gen_frame + 0x30)) = 1;
                        }
                      }
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = ((wchar_t *)(gen_frame + 0x80));
                      goto LAB_00c5821d;
                    }
                    psVar1 = *(short * PTR32 *)pwVar12;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar12 + 2;
                    if ((psVar1 != (short *)0x0) && (*(wchar_t * PTR32 *)(psVar1 + 2) != (wchar_t *)0x0)) {
                      sVar8 = (gen_size32)*psVar1;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)(psVar1 + 2);
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x800) == 0) {
                        (*(int *)(gen_frame + 0x50)) = 0;
                      }
                      else {
                        sVar8 = (int)sVar8 / 2;
                        (*(int *)(gen_frame + 0x50)) = 1;
                      }
                      goto LAB_00c58217;
                    }
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                    uVar23 = SUB42(REFG(undefined * PTR32, 0x134b148),0);
                    uVar25 = (undefined2)((uint)REFG(undefined * PTR32, 0x134b148) >> 0x10);
                  }
                  sVar8 = F_00c552f0(((char *)GEN_TOP(CONCAT22(uVar25,uVar23))));
LAB_00c58217: ;
                  (*(gen_size32 *)(gen_frame + 0x64)) = sVar8;
                }
LAB_00c5821d: ;
                if ((*(int *)(gen_frame + 0x30)) == 0) {
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x40) != 0) {
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x100) == 0) {
                      if (((*(uint *)(gen_frame + 0x7c)) & 1) == 0) {
                        if (((*(uint *)(gen_frame + 0x7c)) & 2) == 0) goto LAB_00c5826a;
                        (*(undefined1 *)(gen_frame + 0x60)) = 0x20;
                      }
                      else {
                        (*(undefined1 *)(gen_frame + 0x60)) = 0x2b;
                      }
                    }
                    else {
                      (*(undefined1 *)(gen_frame + 0x60)) = 0x2d;
                    }
                    (*(int *)(gen_frame + 0x58)) = 1;
                  }
LAB_00c5826a: ;
                  sVar8 = ((*(int *)(gen_frame + 0x54)) - (*(gen_size32 *)(gen_frame + 0x64))) - (*(int *)(gen_frame + 0x58));
                  (*(gen_size32 *)(gen_frame + 0x24)) = sVar8;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0xc) == 0) {
                    do {
                      if ((int)sVar8 < 1) break;
                      sVar8 = sVar8 - 1;
                      F_00c57791(0x20,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                    } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                  }
                  in_ecx = (*(undefined * PTR32 *)(gen_frame + 0x5c));
                  F_00c577ea(&(*(uint *)(gen_frame + 0x68)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined1 *)(gen_frame + 0x60)),(*(int *)(gen_frame + 0x58)));
                  if ((((*(uint *)(gen_frame + 0x7c)) & 8) != 0) && (sVar8 = (*(gen_size32 *)(gen_frame + 0x24)), ((*(uint *)(gen_frame + 0x7c)) & 4) == 0)) {
                    do {
                      if ((int)sVar8 < 1) break;
                      sVar8 = sVar8 - 1;
                      F_00c57791(0x30,in_ecx,&(*(uint *)(gen_frame + 0x68)));
                    } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                  }
                  if (((*(int *)(gen_frame + 0x50)) == 0) || ((int)(*(gen_size32 *)(gen_frame + 0x64)) < 1)) {
                    F_00c577ea(&(*(uint *)(gen_frame + 0x68)),in_ecx,(*(int * PTR32 *)(gen_frame + 0x28)),(*(wchar_t * PTR32 *)(gen_frame + 0x6c)),(*(gen_size32 *)(gen_frame + 0x64)));
                  }
                  else {
                    (*(gen_size32 *)(gen_frame + 0x1c)) = (*(gen_size32 *)(gen_frame + 0x64));
                    pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                    do {
                      _WCh = *pwVar12;
                      (*(gen_size32 *)(gen_frame + 0x1c)) = (*(gen_size32 *)(gen_frame + 0x1c)) - 1;
                      pwVar12 = pwVar12 + 1;
                      eVar13 = F_00c7af62(&(*(int *)(gen_frame + 0x14)),(char *)((int)&(*(undefined2 *)(gen_frame + 0x27f)) + 1),6,_WCh);
                      if ((eVar13 != 0) || ((*(int *)(gen_frame + 0x14)) == 0)) {
                        (*(uint *)(gen_frame + 0x68)) = 0xffffffff;
                        break;
                      }
                      F_00c577ea(&(*(uint *)(gen_frame + 0x68)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x28)),(int)&(*(undefined2 *)(gen_frame + 0x27f)) + 1,(*(int *)(gen_frame + 0x14)));
                    } while ((*(gen_size32 *)(gen_frame + 0x1c)) != 0);
                  }
                  if ((-1 < (int)(*(uint *)(gen_frame + 0x68))) && (sVar8 = (*(gen_size32 *)(gen_frame + 0x24)), ((*(uint *)(gen_frame + 0x7c)) & 4) != 0)) {
                    do {
                      if ((int)sVar8 < 1) break;
                      sVar8 = sVar8 - 1;
                      F_00c57791(0x20,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                    } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                  }
                }
              }
              else {
                if ('p' < (char)(*(byte *)(gen_frame + 0x7b))) {
                  if ((*(byte *)(gen_frame + 0x7b)) == 0x73) {
LAB_00c57cc2: ;
                    iVar16 = (*(int *)(gen_frame + 0x74));
                    if ((*(int *)(gen_frame + 0x74)) == -1) {
                      iVar16 = 0x7fffffff;
                    }
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar12 + 2;
                    pwVar12 = *(wchar_t * PTR32 *)pwVar12;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar12;
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x810) == 0) {
                      pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                      if (pwVar12 == (wchar_t *)0x0) {
                        (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                        pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                      }
                      for (; (iVar16 != 0 && (iVar16 = iVar16 + -1, (char)*pwVar12 != '\0'));
                          pwVar12 = (wchar_t *)((int)pwVar12 + 1)) {
                      }
                      sVar8 = (int)pwVar12 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                    }
                    else {
                      if (pwVar12 == (wchar_t *)0x0) {
                        (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                      }
                      (*(int *)(gen_frame + 0x50)) = 1;
                      for (pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                          (iVar16 != 0 && (iVar16 = iVar16 + -1, *pwVar12 != L'\0'));
                          pwVar12 = pwVar12 + 1) {
                      }
                      sVar8 = (int)pwVar12 - (int)((int)(uintptr_t)(*(wchar_t * PTR32 *)(gen_frame + 0x6c))) >> 1;
                    }
                    goto LAB_00c58217;
                  }
                  if ((*(byte *)(gen_frame + 0x7b)) == 0x75) goto LAB_00c57eb1;
                  if ((*(byte *)(gen_frame + 0x7b)) != 0x78) goto LAB_00c5821d;
                  (*(undefined4 *)(gen_frame + 0x34)) = 0x27;
                  pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
LAB_00c5806f: ;
                  (*(gen_size32 *)(gen_frame + 0x64)) = 0x10;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x80) != 0) {
                    (*(undefined1 *)(gen_frame + 0x60)) = 0x30;
                    (*(char *)(gen_frame + 0x61)) = (char)(*(undefined4 *)(gen_frame + 0x34)) + 'Q';
                    (*(int *)(gen_frame + 0x58)) = 2;
                  }
                  goto LAB_00c57ebb;
                }
                if ((*(byte *)(gen_frame + 0x7b)) == 0x70) {
                  (*(int *)(gen_frame + 0x74)) = 8;
LAB_00c5803d: ;
                  (*(undefined4 *)(gen_frame + 0x34)) = 7;
                  goto LAB_00c5806f;
                }
                if ((char)(*(byte *)(gen_frame + 0x7b)) < 'e') goto LAB_00c5821d;
                pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
                if ((char)(*(byte *)(gen_frame + 0x7b)) < 'h') goto LAB_00c57ee0;
                if ((*(byte *)(gen_frame + 0x7b)) == 0x69) goto LAB_00c57eaa;
                if ((*(byte *)(gen_frame + 0x7b)) != 0x6e) {
                  if ((*(byte *)(gen_frame + 0x7b)) != 0x6f) goto LAB_00c5821d;
                  (*(gen_size32 *)(gen_frame + 0x64)) = 8;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x80) != 0) {
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x200;
                  }
                  goto LAB_00c57ebb;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = (*(wchar_t * PTR32 *)(gen_frame + 0x70)) + 2;
                puVar2 = *(uint * PTR32 *)pwVar19;
                uVar7 = F_00c51967();
                if (uVar7 == 0) goto LAB_00c578c2;
                if (((*(uint *)(gen_frame + 0x7c)) & 0x20) == 0) {
                  *puVar2 = (*(uint *)(gen_frame + 0x68));
                }
                else {
                  *(undefined2 *)puVar2 = (undefined2)(*(uint *)(gen_frame + 0x68));
                }
                (*(int *)(gen_frame + 0x30)) = 1;
              }
              if ((*(wchar_t * PTR32 *)(gen_frame + 0x2c)) != (wchar_t *)0x0) {
                F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x2c)));
                (*(wchar_t * PTR32 *)(gen_frame + 0x2c)) = (wchar_t *)0x0;
              }
            }
            (*(byte *)(gen_frame + 0x7b)) = *(*(byte * PTR32 *)(gen_frame + 0x4c));
            pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x4c));
            pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
          } while ((*(byte *)(gen_frame + 0x7b)) != 0);
          if (((*(uint *)(gen_frame + 0x48)) != 0) && ((*(uint *)(gen_frame + 0x48)) != 7)) goto LAB_00c578c2;
        }
        uVar7 = (*(uint *)(gen_frame + 0x68));
        if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x38)) + 12))) != false) {
          (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x38)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x38)) + 8))) + 112))))) & 0xfffffffd;
        }
        goto LAB_00c5844e;
      }
    }
  }
LAB_00c578c2: ;
  piVar6 = F_00c51f85();
  *piVar6 = 0x16;
  F_00c4c305();
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x38)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x38)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x38)) + 8))) + 112))))) & 0xfffffffd;
  }
  uVar7 = 0xffffffff;
LAB_00c5844e: ;
  F_00c47745((*(uint *)(gen_frame + 0x288)) ^ (uint)(uint)(gen_frame + 0x28c));
  return uVar7;
}

/* ref: FUN_00c58480 */
uint F_00c58480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc58480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)param_1[2];
  if ((cVar1 == 'p') || ((char)param_3 == 'p')) {
    return (uint)(cVar1 == (char)param_3);
  }
  if ((cVar1 == 's') || (cVar1 == 'S')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if (((char)param_3 == 's') || ((char)param_3 == 'S')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != iVar2) {
      return 0;
    }
    if (((param_1[3] & 0x810U) != 0) != ((param_4 & 0x810) != 0)) {
      return 0;
    }
    return 1;
  }
  if (iVar2 != 0) {
    return 0;
  }
  if (cVar1 == 'd') {
LAB_00c58524: ;
    iVar3 = 1;
  }
  else {
    if ((((((cVar1 != 'i') && (cVar1 != 'o')) && (cVar1 != 'u')) &&
         (((cVar1 != 'x' && (cVar1 != 'X')) &&
          (((char)param_3 != 'd' && (((char)param_3 != 'i' && ((char)param_3 != 'o')))))))) &&
        ((char)param_3 != 'u')) && (((char)param_3 != 'x' && ((char)param_3 != 'X'))))
    goto LAB_00c58566;
    if ((cVar1 == 'd') ||
       ((((cVar1 == 'i' || (cVar1 == 'o')) || (cVar1 == 'u')) || ((cVar1 == 'x' || (cVar1 == 'X'))))
       )) goto LAB_00c58524;
    iVar3 = 0;
  }
  if ((((char)param_3 == 'd') || ((char)param_3 == 'i')) ||
     (((char)param_3 == 'o' ||
      ((((char)param_3 == 'u' || ((char)param_3 == 'x')) || ((char)param_3 == 'X')))))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (((iVar3 != iVar2) || (((param_1[3] ^ param_4) & 0x10000) != 0)) ||
     (((param_1[3] ^ param_4) & 0x20) != 0)) {
    return 0;
  }
LAB_00c58566: ;
  return (uint)(*param_1 == param_2);
}

/* ref: write_char_00c585ab */
uint F_00c585ab(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc585abu, gen_a0, gen_a1, gen_a2, 0u);
  byte in_al = (byte)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined3 in_register_00000001;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00000001,in_al);
  if ((((*(int *)(((char *)(in_ecx) + 12))) & 0x40) == 0) || ((*(char * PTR32 *)(((char *)(in_ecx) + 8))) != (char *)0x0)) {
    piVar1 = &(*(int *)(((char *)(in_ecx) + 4)));
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = F_00c567c4((int)(char)in_al,in_ecx);
    }
    else {
      *(*(char * PTR32 *)((char *)(in_ecx))) = in_al;
      (*(char * PTR32 *)((char *)(in_ecx))) = (*(char * PTR32 *)((char *)(in_ecx))) + 1;
      uVar2 = (uint)in_al;
    }
    if (uVar2 == 0xffffffff) {
      *in_esi = -1;
      return 0xffffffff;
    }
  }
  *in_esi = *in_esi + 1;
  return uVar2;
}

/* ref: write_multi_char_00c585de */
uint F_00c585de(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc585deu, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar1 = (int *)F_00c585ab((undefined1)param_2,param_4,in_eax);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c58604 */
uint F_00c58604(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc58604u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ebx = (int)gen_a1;
  uint * in_edi = (uint *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*(byte *)(in_ebx + 0xc) & 0x40) == 0) || (*(int *)(in_ebx + 8) != 0)) {
    *in_edi = 0;
    if (0 < (int)param_5) {
      do {
        param_5 = param_5 - 1;
        uVar1 = F_00c585ab(*param_4,in_ebx,in_eax);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c585ab(0x3f,in_ebx,in_eax);
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

/* ref: FUN_00c58666 */
uint F_00c58666(unsigned int gen_a0)
{
  GEN_ENTER(0xc58666u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *param_1 = *param_1 + 8;
  return *(uint *)(*param_1 + -8);
}

/* ref: FUN_00c5867b */
uint F_00c5867b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5867bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x8c0];
  int * piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined * puVar5;
  char * _Str;
  
  (*(uint *)(gen_frame + 0x8b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8bc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) = param_1;
  (*(undefined4 *)(gen_frame + 0x68)) = param_4;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x40)),param_3);
  (*(int *)(gen_frame + 0x5c)) = -1;
  ((byte *)(gen_frame + 0x0))[0x24] = 0;
  ((byte *)(gen_frame + 0x0))[0x25] = 0;
  ((byte *)(gen_frame + 0x0))[0x26] = 0;
  ((byte *)(gen_frame + 0x0))[0x27] = 0;
  piVar1 = F_00c51f85();
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = piVar1;
  if (param_1 != (undefined *)0x0) {
    if (((*(int *)(((char *)(param_1) + 12))) & 0x40) == 0) {
      uVar2 = F_00c5d07b(param_1);
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar5 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar5 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
      }
      if ((puVar5[0x24] & 0x7f) == 0) {
        if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
          puVar5 = &REFG(undefined, 0x134b280);
        }
        else {
          puVar5 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
        }
        if ((puVar5[0x24] & 0x80) == 0) goto LAB_00c58781;
      }
    }
    else {
LAB_00c58781: ;
      if (param_2 != (char *)0x0) {
        ((byte *)(gen_frame + 0x0))[0x3c] = 0;
        ((byte *)(gen_frame + 0x0))[0x3d] = 0;
        ((byte *)(gen_frame + 0x0))[0x3e] = 0;
        ((byte *)(gen_frame + 0x0))[0x3f] = 0;
        (*(int *)(gen_frame + 0x58)) = 0;
        do {
          if (((*(int *)(gen_frame + 0x58)) == 1) && ((*(int *)(gen_frame + 0x5c)) == 0)) break;
          ((byte *)(gen_frame + 0x0))[0x28] = 0xff;
          ((byte *)(gen_frame + 0x0))[0x29] = 0xff;
          ((byte *)(gen_frame + 0x0))[0x2a] = 0xff;
          ((byte *)(gen_frame + 0x0))[0x2b] = 0xff;
          (*(int *)(gen_frame + 0x50)) = -1;
          (*(int *)(gen_frame + 0x5c)) = -1;
          ((byte *)(gen_frame + 0x0))[0x34] = 0;
          ((byte *)(gen_frame + 0x0))[0x35] = 0;
          ((byte *)(gen_frame + 0x0))[0x36] = 0;
          ((byte *)(gen_frame + 0x0))[0x37] = 0;
          (*(char *)(gen_frame + 0x60)) = *param_2;
          ((byte *)(gen_frame + 0x0))[0x10] = 0;
          ((byte *)(gen_frame + 0x0))[0x11] = 0;
          ((byte *)(gen_frame + 0x0))[0x12] = 0;
          ((byte *)(gen_frame + 0x0))[0x13] = 0;
          ((byte *)(gen_frame + 0x0))[0xc] = 0;
          ((byte *)(gen_frame + 0x0))[0xd] = 0;
          ((byte *)(gen_frame + 0x0))[0xe] = 0;
          ((byte *)(gen_frame + 0x0))[0xf] = 0;
          ((byte *)(gen_frame + 0x0))[0x2c] = 0;
          ((byte *)(gen_frame + 0x0))[0x2d] = 0;
          ((byte *)(gen_frame + 0x0))[0x2e] = 0;
          ((byte *)(gen_frame + 0x0))[0x2f] = 0;
          (*(undefined4 *)(gen_frame + 0x64)) = 0;
          _Str = param_2;
          uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
          if ((*(char *)(gen_frame + 0x60)) != '\0') {
            do {
              _Str = _Str + 1;
              (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) = _Str;
              if ((byte)((*(char *)(gen_frame + 0x60)) - 0x20U) < 0x59) {
                uVar2 = (byte)(&REFG(undefined, 0x1119ec8))[(*(char *)(gen_frame + 0x60))] & 0xf;
              }
              else {
                uVar2 = 0;
              }
              uVar2 = (uint)((byte)(&REFG(undefined, 0x1119ee8))[(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) + uVar2 * 9] >> 4);
              ((byte *)(gen_frame + 0x0))[0x10] = (char)uVar2;
              ((byte *)(gen_frame + 0x0))[0x11] = (char)(uVar2 >> 8);
              ((byte *)(gen_frame + 0x0))[0x12] = (char)(uVar2 >> 0x10);
              ((byte *)(gen_frame + 0x0))[0x13] = (char)(uVar2 >> 0x18);
              if (uVar2 == 1) {
                if (*_Str != '%') {
                  lVar3 = F_00c4ab6e(_Str,(char * PTR32 *)(((byte *)(gen_frame + 0x0)) + 0x24),10);
                  if ((lVar3 < 1) || (*(char *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) != '$')) {
                    (*(int *)(gen_frame + 0x5c)) = 0;
                    (*(int *)(gen_frame + 0x5c)) = 0;
                  }
                  else {
                    if ((*(int *)(gen_frame + 0x58)) == 0) {
                      F_00c48350(((undefined1 *)(gen_frame + 0x270)),0,0x640);
                    }
                    (*(int *)(gen_frame + 0x5c)) = 1;
                    (*(int *)(gen_frame + 0x5c)) = 1;
                    lVar3 = F_00c4ab6e(_Str,(char * PTR32 *)(((byte *)(gen_frame + 0x0)) + 0x24),10);
                    iVar4 = lVar3 + -1;
                    (*(int *)(gen_frame + 0x50)) = iVar4;
                    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) + 1;
                    if ((*(int *)(gen_frame + 0x58)) == 0) {
                      if (((iVar4 < 0) || (*(char *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) != '$')) || (99 < iVar4))
                      goto LAB_00c586f2;
                      if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) < iVar4) {
                        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = iVar4;
                      }
                    }
                  }
                }
LAB_00c58922: ;
                    
                    
                uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0xc5997f) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) * 4))();
                return uVar2;
              }
              if (uVar2 == 8) goto LAB_00c586f2;
              if (uVar2 < 8) goto LAB_00c58922;
              (*(char *)(gen_frame + 0x60)) = *_Str;
            } while ((*(char *)(gen_frame + 0x60)) != '\0');
            if ((uVar2 != 0) && (uVar2 != 7)) goto LAB_00c586f2;
          }
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = uVar2;
          iVar4 = (*(int *)(gen_frame + 0x58)) + 1;
          (*(int *)(gen_frame + 0x58)) = iVar4;
        } while (iVar4 < 2);
        uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60));
        if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x40)) + 12))) != false) {
          (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) & 0xfffffffd;
        }
        goto LAB_00c5996f;
      }
    }
  }
LAB_00c586f2: ;
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x40)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) & 0xfffffffd;
  }
  uVar2 = 0xffffffff;
LAB_00c5996f: ;
  F_00c47745((*(uint *)(gen_frame + 0x8b8)) ^ (uint)(uint)(gen_frame + 0x8bc));
  return uVar2;
}

/* ref: write_char_00c59aa5 */
uint F_00c59aa5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc59aa5u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: write_multi_char_00c59ad4 */
uint F_00c59ad4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc59ad4u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar1 = (int *)F_00c59aa5(param_4,in_eax,param_2);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c59afb */
uint F_00c59afb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc59afbu, gen_a0, gen_a1, gen_a2, gen_a3);
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
        uVar1 = F_00c59aa5(in_ebx,in_eax,(uint)*param_4);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c59aa5(in_ebx,in_eax,0x3f);
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

/* ref: FUN_00c59b62 */
uint F_00c59b62(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc59b62u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x480];
  char cVar1;
  ushort uVar2;
  wchar_t wVar3;
  short * psVar4;
  short sVar5;
  ulonglong uVar6;
  ushort * puVar7;
  int * piVar8;
  uint uVar9;
  gen_size32 sVar10;
  wchar_t * pwVar11;
  code * pcVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  wchar_t * pwVar16;
  ushort * puVar17;
  wchar_t * pwVar18;
  bool bVar19;
  uint * puVar20;
  undefined4 uVar21;
  undefined2 uVar22;
  undefined * p_Var23;
  
  (*(uint *)(gen_frame + 0x478)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x47c);
  (*(int *)(gen_frame + 0x58)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(uint *)(gen_frame + 0x74)) = 0;
  (*(uint *)(gen_frame + 0x4c)) = 0;
  (*(uint *)(gen_frame + 0x70)) = 0;
  (*(int *)(gen_frame + 0x54)) = 0;
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(int *)(gen_frame + 0x50)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x24)),param_3);
  piVar8 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar8;
  if (((*(int *)(gen_frame + 0x58)) == 0) || (param_2 == (ushort *)0x0)) {
    piVar8 = F_00c51f85();
    *piVar8 = 0x16;
    F_00c4c305();
    cVar1 = (*(bool *)(((char *)((undefined *)(gen_frame + 0x24)) + 12)));
LAB_00c59bf2: ;
    if (cVar1 != '\0') {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) & 0xfffffffd;
    }
    uVar9 = 0xffffffff;
  }
  else {
    uVar2 = *param_2;
    (*(uint *)(gen_frame + 0x60)) = (uint)uVar2;
    iVar14 = 0;
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(gen_size32 *)(gen_frame + 0x68)) = 0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = (wchar_t *)0x0;
    puVar7 = param_2;
    pwVar18 = param_4;
    uVar9 = (*(uint *)(gen_frame + 0x64));
    while ((*(uint *)(gen_frame + 0x64)) = uVar9, uVar2 != 0) {
      puVar17 = puVar7 + 1;
      (*(ushort * PTR32 *)(gen_frame + 0x3c)) = puVar17;
      if ((int)uVar9 < 0) break;
      sVar5 = (short)(*(uint *)(gen_frame + 0x60));
      if ((ushort)(sVar5 - 0x20U) < 0x59) {
        uVar9 = (int)"e+000"[(*(uint *)(gen_frame + 0x60))] & 0xf;
      }
      else {
        uVar9 = 0;
      }
      (*(int *)(gen_frame + 0x1c)) = (int)(char)(&REFG(undefined, 0x1119e88))[uVar9 * 8 + iVar14] >> 4;
      switch((unsigned int)(uintptr_t)((int)(char)(&REFG(undefined, 0x1119e88))[uVar9 * 8 + iVar14] >> 4)) {
      case 0: ;
switchD_00c59c7e_caseD_0: ;
        (*(int *)(gen_frame + 0x50)) = 1;
        F_00c59aa5((*(int *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x60)));
        break;
      case 1: ;
        (*(uint *)(gen_frame + 0x70)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(int *)(gen_frame + 0x34)) = 0;
        (*(uint *)(gen_frame + 0x4c)) = 0;
        (*(int *)(gen_frame + 0x54)) = 0;
        (*(uint *)(gen_frame + 0x74)) = 0;
        (*(int *)(gen_frame + 0x50)) = 0;
        break;
      case 2: ;
        if ((*(uint *)(gen_frame + 0x60)) == 0x20) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 2;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x23) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x80;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x2b) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 1;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x2d) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 4;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x30) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 8;
        }
        break;
      case 3: ;
        if (sVar5 == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = pwVar18 + 2;
          uVar9 = *(uint *)pwVar18;
          (*(uint *)(gen_frame + 0x4c)) = uVar9;
          if ((int)uVar9 < 0) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 4;
            (*(uint *)(gen_frame + 0x4c)) = -uVar9;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) * 10 + -0x30 + (*(uint *)(gen_frame + 0x60));
        }
        break;
      case 4: ;
        (*(uint *)(gen_frame + 0x70)) = 0;
        break;
      case 5: ;
        if (sVar5 == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = pwVar18 + 2;
          (*(uint *)(gen_frame + 0x70)) = *(uint *)pwVar18;
          if ((int)*(uint *)pwVar18 < 0) {
            (*(uint *)(gen_frame + 0x70)) = 0xffffffff;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) * 10 + -0x30 + (*(uint *)(gen_frame + 0x60));
        }
        break;
      case 6: ;
        if ((*(uint *)(gen_frame + 0x60)) == 0x49) {
          uVar2 = *puVar17;
          if ((uVar2 == 0x36) && (puVar7[2] == 0x34)) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x8000;
            (*(ushort * PTR32 *)(gen_frame + 0x3c)) = puVar7 + 3;
          }
          else if ((uVar2 == 0x33) && (puVar7[2] == 0x32)) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) & 0xffff7fff;
            (*(ushort * PTR32 *)(gen_frame + 0x3c)) = puVar7 + 3;
          }
          else if (((((uVar2 != 100) && (uVar2 != 0x69)) && (uVar2 != 0x6f)) &&
                   ((uVar2 != 0x75 && (uVar2 != 0x78)))) && (uVar2 != 0x58)) {
            (*(int *)(gen_frame + 0x1c)) = 0;
            goto switchD_00c59c7e_caseD_0;
          }
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x68) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x20;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x6c) {
          if (*puVar17 == 0x6c) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x1000;
            (*(ushort * PTR32 *)(gen_frame + 0x3c)) = puVar7 + 2;
          }
          else {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x10;
          }
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x77) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x800;
        }
        break;
      case 7: ;
        if ((*(uint *)(gen_frame + 0x60)) < 0x65) {
          if ((*(uint *)(gen_frame + 0x60)) == 100) {
LAB_00c5a18e: ;
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x40;
LAB_00c5a195: ;
            (*(uint *)(gen_frame + 0x60)) = 10;
LAB_00c5a19f: ;
            if ((((*(uint *)(gen_frame + 0x74)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x74)) & 0x1000) == 0)) {
              pwVar16 = pwVar18 + 2;
              if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
                uVar9 = *(uint *)pwVar18;
                if (((*(uint *)(gen_frame + 0x74)) & 0x40) == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = (int)uVar9 >> 0x1f;
                }
                goto LAB_00c5a391;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = pwVar16;
              if (((*(uint *)(gen_frame + 0x74)) & 0x40) == 0) {
                uVar9 = (uint)(ushort)*pwVar18;
              }
              else {
                uVar9 = (uint)*pwVar18;
              }
              uVar15 = (int)uVar9 >> 0x1f;
            }
            else {
              uVar9 = *(uint *)pwVar18;
              uVar15 = *(uint *)(pwVar18 + 2);
              pwVar16 = pwVar18 + 4;
LAB_00c5a391: ;
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = pwVar16;
            }
            if (((((*(uint *)(gen_frame + 0x74)) & 0x40) != 0) && ((int)uVar15 < 1)) && ((int)uVar15 < 0)) {
              bVar19 = uVar9 != 0;
              uVar9 = -uVar9;
              uVar15 = -(uVar15 + bVar19);
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x100;
            }
            if (((*(uint *)(gen_frame + 0x74)) & 0x9000) == 0) {
              uVar15 = 0;
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
            if (uVar9 == 0 && uVar15 == 0) {
              (*(int *)(gen_frame + 0x54)) = 0;
            }
            pwVar18 = &(*(undefined2 *)(gen_frame + 0x277));
            uVar6 = CONCAT44(uVar15,uVar9);
            while ((uVar9 = (*(uint *)(gen_frame + 0x70)), (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1, 0 < (int)uVar9 || (uVar6 != 0))) {
              uVar9 = (int)(uVar6 % (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x60))) + 0x30;
              bVar13 = (byte)uVar9;
              if (0x39 < uVar9) {
                bVar13 = bVar13 + (char)(*(undefined4 *)(gen_frame + 0x38));
              }
              *(byte *)pwVar18 = bVar13;
              pwVar18 = (wchar_t *)((int)pwVar18 + -1);
              uVar6 = uVar6 / (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x60));
            }
            sVar10 = (int)&(*(undefined2 *)(gen_frame + 0x277)) - (int)pwVar18;
            (*(gen_size32 *)(gen_frame + 0x68)) = sVar10;
            (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((int)pwVar18 + 1);
            if ((((*(uint *)(gen_frame + 0x74)) & 0x200) != 0) &&
               ((sVar10 == 0 || (*(byte *)((int)pwVar18 + 1) != 0x30)))) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar18;
              (*(gen_size32 *)(gen_frame + 0x68)) = (int)&(*(undefined2 *)(gen_frame + 0x277)) - (int)pwVar18 + 1;
              *(byte *)pwVar18 = 0x30;
            }
          }
          else {
            if ((*(uint *)(gen_frame + 0x60)) < 0x54) {
              if ((*(uint *)(gen_frame + 0x60)) == 0x53) {
                if (((*(uint *)(gen_frame + 0x74)) & 0x830) == 0) {
                  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x20;
                }
                goto LAB_00c59f6a;
              }
              if ((*(uint *)(gen_frame + 0x60)) != 0x41) {
                if ((*(uint *)(gen_frame + 0x60)) == 0x43) {
                  if (((*(uint *)(gen_frame + 0x74)) & 0x830) == 0) {
                    (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x20;
                  }
                  goto LAB_00c5a013;
                }
                if (((*(uint *)(gen_frame + 0x60)) != 0x45) && ((*(uint *)(gen_frame + 0x60)) != 0x47)) goto LAB_00c5a4cd;
              }
              (*(undefined4 *)(gen_frame + 0x14)) = 1;
              (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x60)) + 0x20;
LAB_00c59f01: ;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x40;
              pwVar16 = ((wchar_t *)(gen_frame + 0x78));
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
              (*(gen_size32 *)(gen_frame + 0x68)) = 0x200;
              if ((int)(*(uint *)(gen_frame + 0x70)) < 0) {
                (*(uint *)(gen_frame + 0x70)) = 6;
              }
              else if ((*(uint *)(gen_frame + 0x70)) == 0) {
                if ((short)(*(uint *)(gen_frame + 0x60)) == 0x67) {
                  (*(uint *)(gen_frame + 0x70)) = 1;
                }
              }
              else {
                if (0x200 < (int)(*(uint *)(gen_frame + 0x70))) {
                  (*(uint *)(gen_frame + 0x70)) = 0x200;
                }
                if (0xa3 < (int)(*(uint *)(gen_frame + 0x70))) {
                  sVar10 = (*(uint *)(gen_frame + 0x70)) + 0x15d;
                  pwVar11 = F_00c54c2e(sVar10);
                  (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = pwVar11;
                  if (pwVar11 == (wchar_t *)0x0) {
                    (*(uint *)(gen_frame + 0x70)) = 0xa3;
                  }
                  else {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar11;
                    (*(gen_size32 *)(gen_frame + 0x68)) = sVar10;
                    pwVar16 = pwVar11;
                  }
                }
              }
              (*(uint *)(gen_frame + 0xc)) = *(uint *)pwVar18;
              (*(uint *)(gen_frame + 0x10)) = *(uint *)(pwVar18 + 2);
              p_Var23 = ((undefined *)(gen_frame + 0x24));
              iVar14 = (int)(char)(*(uint *)(gen_frame + 0x60));
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = pwVar18 + 4;
              puVar20 = &(*(uint *)(gen_frame + 0xc));
              pwVar18 = pwVar16;
              sVar10 = (*(gen_size32 *)(gen_frame + 0x68));
              uVar21 = (*(undefined4 *)(gen_frame + 0x14));
              uVar9 = (*(uint *)(gen_frame + 0x70));
              pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
              (*pcVar12)(puVar20,pwVar18,sVar10,iVar14,uVar9,uVar21,p_Var23);
              uVar9 = (*(uint *)(gen_frame + 0x74)) & 0x80;
              if ((uVar9 != 0) && ((*(uint *)(gen_frame + 0x70)) == 0)) {
                p_Var23 = ((undefined *)(gen_frame + 0x24));
                pwVar18 = pwVar16;
                pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                (*pcVar12)(pwVar18,p_Var23);
              }
              if (((short)(*(uint *)(gen_frame + 0x60)) == 0x67) && (uVar9 == 0)) {
                p_Var23 = ((undefined *)(gen_frame + 0x24));
                pwVar18 = pwVar16;
                pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                (*pcVar12)(pwVar18,p_Var23);
              }
              if ((byte)*pwVar16 == 0x2d) {
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x100;
                pwVar16 = (wchar_t *)((int)pwVar16 + 1);
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
              }
            }
            else {
              if ((*(uint *)(gen_frame + 0x60)) == 0x58) goto LAB_00c5a2f0;
              if ((*(uint *)(gen_frame + 0x60)) != 0x5a) {
                if ((*(uint *)(gen_frame + 0x60)) == 0x61) goto LAB_00c59f01;
                if ((*(uint *)(gen_frame + 0x60)) != 99) goto LAB_00c5a4cd;
LAB_00c5a013: ;
                wVar3 = *pwVar18;
                (*(int *)(gen_frame + 0x50)) = 1;
                (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = pwVar18 + 2;
                (*(uint *)(gen_frame + 0x20)) = (uint)(ushort)wVar3;
                if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
                  ((wchar_t *)(gen_frame + 0x78))[0] = wVar3;
                }
                else {
                  (*(char *)(gen_frame + 0x44)) = (char)wVar3;
                  (*(undefined1 *)(gen_frame + 0x45)) = 0;
                  iVar14 = F_00c7b204(((wchar_t *)(gen_frame + 0x78)),&(*(char *)(gen_frame + 0x44)),
                                      (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x24)))) + 160) + (3) * 4))))),
                                      &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
                  if (iVar14 < 0) {
                    (*(int *)(gen_frame + 0x34)) = 1;
                  }
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = ((wchar_t *)(gen_frame + 0x78));
                (*(gen_size32 *)(gen_frame + 0x68)) = 1;
                goto LAB_00c5a4cd;
              }
              psVar4 = *(short * PTR32 *)pwVar18;
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = pwVar18 + 2;
              if ((psVar4 != (short *)0x0) && (*(wchar_t * PTR32 *)(psVar4 + 2) != (wchar_t *)0x0)) {
                sVar10 = (gen_size32)*psVar4;
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)(psVar4 + 2);
                if (((*(uint *)(gen_frame + 0x74)) & 0x800) != 0) {
                  iVar14 = sVar10 - ((int)sVar10 >> 0x1f);
                  (*(int *)(gen_frame + 0x50)) = 1;
                  goto LAB_00c5a4c5;
                }
                (*(int *)(gen_frame + 0x50)) = 0;
                goto LAB_00c5a4c7;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              pwVar16 = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
            }
            sVar10 = F_00c552f0((char *)pwVar16);
LAB_00c5a4c7: ;
            (*(gen_size32 *)(gen_frame + 0x68)) = sVar10;
          }
LAB_00c5a4cd: ;
          if ((*(int *)(gen_frame + 0x34)) == 0) {
            if (((*(uint *)(gen_frame + 0x74)) & 0x40) != 0) {
              if (((*(uint *)(gen_frame + 0x74)) & 0x100) == 0) {
                if (((*(uint *)(gen_frame + 0x74)) & 1) == 0) {
                  if (((*(uint *)(gen_frame + 0x74)) & 2) == 0) goto LAB_00c5a50f;
                  uVar22 = 0x20;
                }
                else {
                  uVar22 = 0x2b;
                }
              }
              else {
                uVar22 = 0x2d;
              }
              (*(undefined2 *)(gen_frame + 0x48)) = uVar22;
              (*(int *)(gen_frame + 0x54)) = 1;
            }
LAB_00c5a50f: ;
            uVar9 = ((*(uint *)(gen_frame + 0x4c)) - (*(gen_size32 *)(gen_frame + 0x68))) - (*(int *)(gen_frame + 0x54));
            (*(uint *)(gen_frame + 0x60)) = uVar9;
            if (((*(uint *)(gen_frame + 0x74)) & 0xc) == 0) {
              do {
                if ((int)uVar9 < 1) break;
                uVar9 = uVar9 - 1;
                F_00c59aa5((*(int *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x64)),0x20);
              } while ((*(uint *)(gen_frame + 0x64)) != 0xffffffff);
            }
            iVar14 = (*(int *)(gen_frame + 0x58));
            F_00c59afb(&(*(uint *)(gen_frame + 0x64)),(*(int *)(gen_frame + 0x58)),(*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined2 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x54)));
            if ((((*(uint *)(gen_frame + 0x74)) & 8) != 0) && (uVar9 = (*(uint *)(gen_frame + 0x60)), ((*(uint *)(gen_frame + 0x74)) & 4) == 0)) {
              do {
                if ((int)uVar9 < 1) break;
                uVar9 = uVar9 - 1;
                F_00c59aa5(iVar14,&(*(uint *)(gen_frame + 0x64)),0x30);
              } while ((*(uint *)(gen_frame + 0x64)) != 0xffffffff);
            }
            if (((*(int *)(gen_frame + 0x50)) == 0) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x68)), pwVar18 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)), 0 < (int)(*(gen_size32 *)(gen_frame + 0x68)))) {
              do {
                sVar10 = sVar10 - 1;
                iVar14 = F_00c7b204((wchar_t *)&(*(uint *)(gen_frame + 0x20)),(char *)pwVar18,
                                    (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x24)))) + 160) + (3) * 4))))),
                                    &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
                if (iVar14 < 1) {
                  (*(uint *)(gen_frame + 0x64)) = 0xffffffff;
                  break;
                }
                F_00c59aa5((*(int *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x20)));
                pwVar18 = (wchar_t *)((int)pwVar18 + iVar14);
              } while (0 < (int)sVar10);
            }
            else {
              F_00c59afb(&(*(uint *)(gen_frame + 0x64)),(*(int *)(gen_frame + 0x58)),(*(int * PTR32 *)(gen_frame + 0x18)),(*(wchar_t * PTR32 *)(gen_frame + 0x6c)),(*(gen_size32 *)(gen_frame + 0x68)));
            }
            if ((-1 < (int)(*(uint *)(gen_frame + 0x64))) && (uVar9 = (*(uint *)(gen_frame + 0x60)), ((*(uint *)(gen_frame + 0x74)) & 4) != 0)) {
              do {
                if ((int)uVar9 < 1) break;
                uVar9 = uVar9 - 1;
                F_00c59aa5((*(int *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x64)),0x20);
              } while ((*(uint *)(gen_frame + 0x64)) != 0xffffffff);
            }
          }
        }
        else {
          if (0x70 < (*(uint *)(gen_frame + 0x60))) {
            if ((*(uint *)(gen_frame + 0x60)) == 0x73) {
LAB_00c59f6a: ;
              uVar9 = (*(uint *)(gen_frame + 0x70));
              if ((*(uint *)(gen_frame + 0x70)) == 0xffffffff) {
                uVar9 = 0x7fffffff;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = pwVar18 + 2;
              pwVar18 = *(wchar_t * PTR32 *)pwVar18;
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar18;
              if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
                if (pwVar18 == (wchar_t *)0x0) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                }
                (*(int *)(gen_frame + 0x50)) = 1;
                for (pwVar18 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)); (uVar9 != 0 && (uVar9 = uVar9 - 1, *pwVar18 != L'\0'));
                    pwVar18 = pwVar18 + 1) {
                }
                iVar14 = (int)pwVar18 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x6c));
LAB_00c5a4c5: ;
                (*(int *)(gen_frame + 0x50)) = 1;
                sVar10 = iVar14 >> 1;
                goto LAB_00c5a4c7;
              }
              if (pwVar18 == (wchar_t *)0x0) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              }
              (*(gen_size32 *)(gen_frame + 0x68)) = 0;
              pwVar18 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
              if (0 < (int)uVar9) {
                do {
                  if ((byte)*pwVar18 == 0) break;
                  iVar14 = F_00c6dfe8((uint)(byte)*pwVar18,&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
                  if (iVar14 != 0) {
                    pwVar18 = (wchar_t *)((int)pwVar18 + 1);
                  }
                  pwVar18 = (wchar_t *)((int)pwVar18 + 1);
                  sVar10 = (*(gen_size32 *)(gen_frame + 0x68)) + 1;
                  (*(gen_size32 *)(gen_frame + 0x68)) = sVar10;
                } while ((int)sVar10 < (int)uVar9);
              }
              goto LAB_00c5a4cd;
            }
            if ((*(uint *)(gen_frame + 0x60)) == 0x75) goto LAB_00c5a195;
            if ((*(uint *)(gen_frame + 0x60)) != 0x78) goto LAB_00c5a4cd;
            (*(undefined4 *)(gen_frame + 0x38)) = 0x27;
LAB_00c5a31c: ;
            (*(uint *)(gen_frame + 0x60)) = 0x10;
            if (((*(uint *)(gen_frame + 0x74)) & 0x80) != 0) {
              (*(undefined2 *)(gen_frame + 0x48)) = 0x30;
              (*(short *)(gen_frame + 0x4a)) = (short)(*(undefined4 *)(gen_frame + 0x38)) + 0x51;
              (*(int *)(gen_frame + 0x54)) = 2;
            }
            goto LAB_00c5a19f;
          }
          if ((*(uint *)(gen_frame + 0x60)) == 0x70) {
            (*(uint *)(gen_frame + 0x70)) = 8;
LAB_00c5a2f0: ;
            (*(undefined4 *)(gen_frame + 0x38)) = 7;
            goto LAB_00c5a31c;
          }
          if ((*(uint *)(gen_frame + 0x60)) < 0x65) goto LAB_00c5a4cd;
          if ((*(uint *)(gen_frame + 0x60)) < 0x68) goto LAB_00c59f01;
          if ((*(uint *)(gen_frame + 0x60)) == 0x69) goto LAB_00c5a18e;
          if ((*(uint *)(gen_frame + 0x60)) != 0x6e) {
            if ((*(uint *)(gen_frame + 0x60)) != 0x6f) goto LAB_00c5a4cd;
            (*(uint *)(gen_frame + 0x60)) = 8;
            if (((*(uint *)(gen_frame + 0x74)) & 0x80) != 0) {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x200;
            }
            goto LAB_00c5a19f;
          }
          puVar20 = *(uint * PTR32 *)pwVar18;
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = pwVar18 + 2;
          uVar9 = F_00c51967();
          if (uVar9 == 0) {
            piVar8 = F_00c51f85();
            *piVar8 = 0x16;
            F_00c4c305();
            cVar1 = (*(bool *)(((char *)((undefined *)(gen_frame + 0x24)) + 12)));
            goto LAB_00c59bf2;
          }
          if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
            *puVar20 = (*(uint *)(gen_frame + 0x64));
          }
          else {
            *(undefined2 *)puVar20 = (undefined2)(*(uint *)(gen_frame + 0x64));
          }
          (*(int *)(gen_frame + 0x34)) = 1;
        }
        if ((*(wchar_t * PTR32 *)(gen_frame + 0x40)) != (wchar_t *)0x0) {
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x40)));
          (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = (wchar_t *)0x0;
        }
      }
      uVar2 = *(*(ushort * PTR32 *)(gen_frame + 0x3c));
      (*(uint *)(gen_frame + 0x60)) = (uint)uVar2;
      iVar14 = (*(int *)(gen_frame + 0x1c));
      puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
      pwVar18 = (*(wchar_t * PTR32 *)(gen_frame + 0x5c));
      uVar9 = (*(uint *)(gen_frame + 0x64));
    }
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x24)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) & 0xfffffffd;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x478)) ^ (uint)(uint)(gen_frame + 0x47c));
  return uVar9;
}

/* ref: __vswprintf_l */
int F_00c5a72a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5a72au, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _String = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _Count = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a3;
  undefined * _Ap = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if ((_Count == 0) || (_String == (wchar_t *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else {
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = (char *)_String;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)_String;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
    uVar2 = F_00c59b62(((undefined *)(gen_frame + 0xc)),_Count,_Format,_Plocinfo);
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
    if (iVar3 < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = 0;
      (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) + 1)));
    }
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
    if (iVar3 < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = 0;
    }
  }
  return uVar2;
}

/* ref: FID_conflict___vscprintf_helper_00c5a7ef */
uint F_00c5a7ef(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5a7efu, gen_a0, gen_a1, gen_a2, gen_a3);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  puVar4 = ((undefined4 *)(gen_frame + 0x10));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_2 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  ((undefined4 *)(gen_frame + 0x10))[0] = 0x7fffffff;
  ((undefined4 *)(gen_frame + 0x10))[2] = 0x42;
  ((undefined4 *)(gen_frame + 0x10))[1] = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  uVar2 = (*param_1)(&(*(undefined4 *)(gen_frame + 0xc)),param_2,param_3,param_4);
  return uVar2;
}

/* ref: FID_conflict___vscprintf_p_00c5a84b */
int F_00c5a84b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5a84bu, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc59b62)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c5a867 */
int F_00c5a867(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5a867u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc59b62)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_00c5a884 */
int F_00c5a884(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5a884u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc72530)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c5a8a0 */
int F_00c5a8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5a8a0u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc72530)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: __mtinitlocks */
int F_00c5a8bd(void)
{
  GEN_ENTER(0xc5a8bdu, 0u, 0u, 0u, 0u);
  BOOL BVar1;
  int iVar2;
  undefined * puVar3;
  
  iVar2 = 0;
  puVar3 = &REFG(undefined, 0x15d7240);
  do {
    if ((&REFG(undefined4, 0x134b154))[iVar2 * 2] == 1) {
      (&REFG(undefined4, 0x134b150))[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      BVar1 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(&REFG(undefined4, 0x134b150))[iVar2 * 2],4000);
      if (BVar1 == 0) {
        (&REFG(undefined4, 0x134b150))[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}

/* ref: __mtdeletelocks */
unsigned int F_00c5a907(void)
{
  GEN_ENTER(0xc5a907u, 0u, 0u, 0u, 0u);
  undefined * _Memory;
  undefined4 * puVar1;
  int * piVar2;
  
  puVar1 = &REFG(undefined4, 0x134b150);
  do {
    _Memory = (undefined *)*puVar1;
    if ((_Memory != (undefined *)0x0) && (puVar1[1] != 1)) {
      gen_imp_DeleteCriticalSection(_Memory);
      F_00c4c68f(_Memory);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x134b270);
  piVar2 = &REFG(undefined4, 0x134b150);
  do {
    if ((*piVar2 != 0) && (piVar2[1] == 1)) {
      gen_imp_DeleteCriticalSection(*piVar2);
    }
    piVar2 = piVar2 + 2;
  } while ((int)piVar2 < 0x134b270);
  return 0;
}

/* ref: FUN_00c5a95e */
uint F_00c5a95e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5a95eu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint extraout_EAX = 0;
  
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(&REFG(undefined4, 0x134b150))[param_1 * 2]);
  return extraout_EAX;
}

/* ref: __mtinitlocknum */
int F_00c5a98d(unsigned int gen_a0)
{
  GEN_ENTER(0xc5a98du, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  BOOL BVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f63e0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5a999;
  iVar3 = 1;
  (*(int *)(gen_frame + 0x0)) = 1;
  if (REFG(int, 0x15d74c8) != 0) {
    piVar1 = &REFG(undefined4, 0x134b150) + (*(int *)&gen_args[0]) * 2;
    if (*piVar1 == 0) {
      lpCriticalSection = F_00c54c2e(0x18);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
        piVar1 = F_00c51f85();
        *piVar1 = 0xc;
        iVar3 = 0;
      }
      else {
        F_00c5aa4f(10);
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if (*piVar1 == 0) {
          BVar2 = gen_imp_InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
          if (BVar2 == 0) {
            F_00c4c68f(lpCriticalSection);
            piVar1 = F_00c51f85();
            *piVar1 = 0xc;
            (*(int *)(gen_frame + 0x0)) = 0;
          }
          else {
            *piVar1 = (int)lpCriticalSection;
          }
        }
        else {
          F_00c4c68f(lpCriticalSection);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c5aa46();
        iVar3 = (*(int *)(gen_frame + 0x0));
      }
    }
    return iVar3;
  }
  F_00c5593d();
  F_00c5578e(0x1e);
                    
  F_00c47986(0xff);
}

/* ref: FUN_00c5aa46 */
uint F_00c5aa46(void)
{
  GEN_ENTER(0xc5aa46u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: __lock */
unsigned int F_00c5aa4f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5aa4fu, gen_a0, 0u, 0u, 0u);
  int _File = (int)gen_a0;
  int iVar1;
  
  if ((&REFG(undefined4, 0x134b150))[_File * 2] == 0) {
    iVar1 = F_00c5a98d(_File);
    if (iVar1 == 0) {
                    
      F_00c47ca5(0x11);
    }
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(&REFG(undefined4, 0x134b150))[_File * 2]);
  return 0;
}

/* ref: terminate */
unsigned int F_00c5aa82(void)
{
  GEN_ENTER(0xc5aa82u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  undefined4 unaff_ESI = 0;
  undefined4 unaff_EDI = 0;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6400);
  uStack_c = 0xc5aa8e;
  p_Var1 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 120))) != (code *)0x0) {
    local_8 = (undefined *)0x0;
    ((code *)(*(gen_code32 *)(((char *)(p_Var1) + 120))))();
    local_8 = (undefined *)0xfffffffe;
  }
                    
  F_00c4c6c9(unaff_ESI,unaff_EDI);
}

/* ref: FUN_00c5aaa2 */
uint F_00c5aaa2(void)
{
  GEN_ENTER(0xc5aaa2u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c5aabb */
unsigned int F_00c5aabb(void)
{
  GEN_ENTER(0xc5aabbu, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 124))) != (code *)0x0) {
    ((code *)(*(gen_code32 *)(((char *)(p_Var1) + 124))))();
  }
                    
  F_00c5aa82();
}

/* ref: _inconsistency */
unsigned int F_00c5aace(void)
{
  GEN_ENTER(0xc5aaceu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6420);
  uStack_c = 0xc5aada;
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7390));
  if (pcVar1 != (code *)0x0) {
    local_8 = (undefined *)0x0;
    (*pcVar1)();
    local_8 = (undefined *)0xfffffffe;
  }
                    
  F_00c5aa82();
}

/* ref: FUN_00c5aaf2 */
uint F_00c5aaf2(void)
{
  GEN_ENTER(0xc5aaf2u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c5aaf6 */
unsigned int F_00c5aaf6(unsigned int gen_a0)
{
  GEN_ENTER(0xc5aaf6u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
                    
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0xc5ab05;
  F_00c5aa82();
}

/* ref: FUN_00c5ab06 */
unsigned int F_00c5ab06(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ab06u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  PVOID pvVar1;
  
  pvVar1 = gen_imp_EncodePointer(((code *)REFP(0xc5aa82)));
  REFG(undefined4, 0x15d7390) = pvVar1;
  return 0;
}

/* ref: __initp_misc_winsig */
uint F_00c5ab17(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ab17u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d7394) = param_1;
  REFG(undefined4, 0x15d7398) = param_1;
  REFG(undefined4, 0x15d739c) = param_1;
  REFG(undefined4, 0x15d73a0) = param_1;
  return param_1;
}

/* ref: FUN_00c5ab35 */
uint F_00c5ab35(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ab35u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  uint uVar1;
  uint * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6440);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc5ab41;
  F_00c5aa4f(0);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  if ((*(int *)&gen_args[0]) == 0) {
    puVar2 = (uint *)&REFG(undefined4, 0x15d7394);
    (*(gen_code32 *)(gen_frame + 0x10)) = gen_imp_DecodePointer(REFG(undefined4, 0x15d7394));
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
  }
  else {
    puVar2 = (uint *)&REFG(undefined4, 0x15d7398);
    (*(gen_code32 *)(gen_frame + 0x10)) = gen_imp_DecodePointer(REFG(undefined4, 0x15d7398));
    (*(undefined4 *)(gen_frame + 0xc)) = 0x15;
  }
  if (((*(gen_code32 *)(gen_frame + 0x10)) != (code *)0x0) && ((*(gen_code32 *)(gen_frame + 0x10)) != (code *)0x1)) {
    uVar1 = F_00c5b18d();
    *puVar2 = uVar1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
  F_00c5abaf();
  if ((*(gen_code32 *)(gen_frame + 0x10)) == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    if ((*(gen_code32 *)(gen_frame + 0x10)) != (code *)0x1) {
      ((code *)(*(gen_code32 *)(gen_frame + 0x10)))((*(undefined4 *)(gen_frame + 0xc)));
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00c5abaf */
uint F_00c5abaf(void)
{
  GEN_ENTER(0xc5abafu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0);
  return uVar1;
}

/* ref: siglookup */
uint F_00c5abd1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5abd1u, gen_a0, gen_a1, 0u, 0u);
  int in_edx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  do {
    if (*(int *)(uVar1 + 4) == in_edx) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < REFG(int, 0x111a064) * 0xc + param_2);
  if ((REFG(int, 0x111a064) * 0xc + param_2 <= uVar1) || (*(int *)(uVar1 + 4) != in_edx)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c5ac08 */
uint F_00c5ac08(void)
{
  GEN_ENTER(0xc5ac08u, 0u, 0u, 0u, 0u);
  PVOID pvVar1;
  
  pvVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d739c));
  return (uint)pvVar1;
}

/* ref: FUN_00c5ae29 */
uint F_00c5ae29(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ae29u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0);
  return uVar1;
}

/* ref: _raise */
int F_00c5ae67(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ae67u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x48];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  int in_edx;
  uint uVar1;
  int * piVar2;
  PVOID Ptr;
  code * pcVar3;
  uint * puVar4;
  undefined * p_Var5;
  
  in_edx = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x20;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = &REFG(undefined, 0x12f6480);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xc5ae73;
  p_Var5 = (undefined *)0x0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  if ((*(int *)&gen_args[0]) < 0xc) {
    if ((*(int *)&gen_args[0]) != 0xb) {
      if ((*(int *)&gen_args[0]) == 2) {
        puVar4 = (uint *)&REFG(undefined4, 0x15d7394);
        Ptr = REFG(undefined4, 0x15d7394);
        goto LAB_00c5af11;
      }
      if ((*(int *)&gen_args[0]) != 4) {
        if ((*(int *)&gen_args[0]) == 6) goto LAB_00c5aeef;
        if ((*(int *)&gen_args[0]) != 8) goto LAB_00c5aedd;
      }
    }
    p_Var5 = F_00c5b301();
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = p_Var5;
    if (p_Var5 == (undefined *)0x0) {
      return -1;
    }
    uVar1 = F_00c5abd1(in_edx,(*(void * PTR32 *)(((char *)(p_Var5) + 92))));
    puVar4 = (uint *)(uVar1 + 8);
    pcVar3 = (code *)*puVar4;
  }
  else {
    if ((*(int *)&gen_args[0]) == 0xf) {
      puVar4 = (uint *)&REFG(undefined4, 0x15d73a0);
      Ptr = REFG(undefined4, 0x15d73a0);
    }
    else if ((*(int *)&gen_args[0]) == 0x15) {
      puVar4 = (uint *)&REFG(undefined4, 0x15d7398);
      Ptr = REFG(undefined4, 0x15d7398);
    }
    else {
      if ((*(int *)&gen_args[0]) != 0x16) {
LAB_00c5aedd: ;
        piVar2 = F_00c51f85();
        *piVar2 = 0x16;
        F_00c4c305();
        return -1;
      }
LAB_00c5aeef: ;
      puVar4 = (uint *)&REFG(undefined4, 0x15d739c);
      Ptr = REFG(undefined4, 0x15d739c);
    }
LAB_00c5af11: ;
    (*(int *)(gen_frame + 0x20)) = 1;
    pcVar3 = gen_imp_DecodePointer(Ptr);
  }
  (*(gen_code32 *)(gen_frame + 0x1c)) = pcVar3;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
                    
    F_00c47c71(3);
  }
  if ((*(int *)(gen_frame + 0x20)) != 0) {
    F_00c5aa4f(0);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  if (((in_edx == 8) || (in_edx == 0xb)) || (in_edx == 4)) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(void * PTR32 *)(((char *)(p_Var5) + 96)));
    (*(void * PTR32 *)(((char *)(p_Var5) + 96))) = (undefined *)0x0;
    if (in_edx == 8) {
      (*(int *)(gen_frame + 0xc)) = (*(int *)(((char *)(p_Var5) + 100)));
      (*(int *)(((char *)(p_Var5) + 100))) = 0x8c;
      goto LAB_00c5af75;
    }
  }
  else {
LAB_00c5af75: ;
    if (in_edx == 8) {
      for ((*(int *)(gen_frame + 0x18)) = REFG(int, 0x111a058); (*(int *)(gen_frame + 0x18)) < REFG(int, 0x111a05c) + REFG(int, 0x111a058); (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1)
      {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) * 0xc + 8 + (int)(*(void * PTR32 *)(((char *)(p_Var5) + 92)))))) = 0;
      }
      goto LAB_00c5afad;
    }
  }
  uVar1 = F_00c5b18d();
  *puVar4 = uVar1;
LAB_00c5afad: ;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0xfffffffe;
  F_00c5afce((gen_frame + 0x3c));
  if (in_edx == 8) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x1c)))(8,(*(int *)(((char *)(p_Var5) + 100))));
  }
  else {
    ((code *)(*(gen_code32 *)(gen_frame + 0x1c)))(in_edx);
    if ((in_edx != 0xb) && (in_edx != 4)) {
      return 0;
    }
  }
  (*(void * PTR32 *)(((char *)(p_Var5) + 96))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  if (in_edx == 8) {
    (*(int *)(((char *)(p_Var5) + 100))) = (*(int *)(gen_frame + 0xc));
  }
  return 0;
}

/* ref: FUN_00c5afc8 */
unsigned int F_00c5afc8(unsigned int gen_a0)
{
  GEN_ENTER(0xc5afc8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  if (*(int *)(in_ebp + -0x1c) != 0) {
    F_00c5a95e(0);
  }
  return 0;
}

/* ref: FUN_00c5afce */
unsigned int F_00c5afce(unsigned int gen_a0)
{
  GEN_ENTER(0xc5afceu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  if (*(int *)(in_ebp + -0x1c) != 0) {
    F_00c5a95e(0);
  }
  return 0;
}

/* ref: FUN_00c5b00a */
uint F_00c5b00a(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b00au, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d73a8) = param_1;
  return param_1;
}

/* ref: rand_s */
uint F_00c5b019(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b019u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  FARPROC Ptr;
  int * piVar1;
  HMODULE hModule;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  PVOID Value;
  uint uVar5;
  uint * puVar6;
  
  Ptr = gen_imp_DecodePointer(REFG(undefined4, 0x15d73a8));
  if (param_1 == (undefined4 *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *param_1 = 0;
  if (Ptr == (FARPROC)0x0) {
    hModule = gen_imp_LoadLibraryW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x1119f60)));
    if (hModule == (HMODULE)0x0) {
      piVar1 = F_00c51f85();
      *piVar1 = 0x16;
      F_00c4c305();
      return 0x16;
    }
    Ptr = gen_imp_GetProcAddress(hModule,"SystemFunction036");
    if (Ptr == (FARPROC)0x0) {
      piVar1 = F_00c51f85();
      DVar2 = gen_imp_GetLastError();
      iVar3 = F_00c51f43(DVar2);
      *piVar1 = iVar3;
      F_00c4c305();
      DVar2 = gen_imp_GetLastError();
      uVar4 = F_00c51f43(DVar2);
      return uVar4;
    }
    Value = gen_imp_EncodePointer(Ptr);
    uVar4 = F_00c5b18d();
    uVar5 = gen_imp_InterlockedExchange((LONG *)&REFG(undefined4, 0x15d73a8),(LONG)Value);
    if (uVar5 != uVar4) {
      gen_imp_FreeLibrary(hModule);
    }
  }
  uVar4 = ((code *)Ptr)(param_1,4);
  if (uVar4 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
    puVar6 = (uint *)F_00c51f85();
    uVar4 = *puVar6;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00c5b109 */
uint F_00c5b109(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b109u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d73ac) = param_1;
  return param_1;
}

/* ref: _set_new_handler */
code * F_00c5b118(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b118u, gen_a0, 0u, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  code * p_Var1;
  
  F_00c5aa4f(4);
  p_Var1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73ac));
  REFG(undefined4, 0x15d73ac) = gen_imp_EncodePointer(param_1);
  F_00c5a95e(4);
  return p_Var1;
}

/* ref: __callnewh */
int F_00c5b165(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b165u, gen_a0, 0u, 0u, 0u);
  gen_size32 _Size = (gen_size32)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73ac));
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(_Size);
    if (uVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c5b18d */
uint F_00c5b18d(void)
{
  GEN_ENTER(0xc5b18du, 0u, 0u, 0u, 0u);
  PVOID pvVar1;
  
  pvVar1 = gen_imp_EncodePointer((PVOID)0x0);
  return (uint)pvVar1;
}

/* ref: FUN_00c5b196 */
unsigned int F_00c5b196(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b196u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_TlsAlloc();
  return 0;
}

/* ref: ___fls_getvalue@4 */
uint F_00c5b19f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b19fu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274));
  uVar2 = (*pcVar1)(param_1);
  return uVar2;
}

/* ref: FUN_00c5b1b9 */
uint F_00c5b1b9(void)
{
  GEN_ENTER(0xc5b1b9u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x134b270);
}

/* ref: ___set_flsgetvalue */
uint F_00c5b1bf(void)
{
  GEN_ENTER(0xc5b1bfu, 0u, 0u, 0u, 0u);
  LPVOID lpTlsValue;
  
  lpTlsValue = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274));
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b4));
    gen_imp_TlsSetValue(REFG(undefined4, 0x134b274),lpTlsValue);
  }
  return (uint)lpTlsValue;
}

/* ref: ___fls_setvalue@8 */
uint F_00c5b1f3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5b1f3u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
  uVar2 = (*pcVar1)(param_1,param_2);
  return uVar2;
}

/* ref: __mtterm */
unsigned int F_00c5b210(void)
{
  GEN_ENTER(0xc5b210u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  int iVar2;
  
  if (REFG(int, 0x134b270) != -1) {
    iVar2 = REFG(int, 0x134b270);
    pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73bc));
    (*pcVar1)(iVar2);
    REFG(int, 0x134b270) = -1;
  }
  if (REFG(undefined4, 0x134b274) != 0xffffffff) {
    gen_imp_TlsFree(REFG(undefined4, 0x134b274));
    REFG(undefined4, 0x134b274) = 0xffffffff;
  }
  F_00c5a907();
  return 0;
}

/* ref: __initptd */
unsigned int F_00c5b24d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5b24du, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x1c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * p_Var1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f64a0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc5b259;
  gen_imp_GetModuleHandleW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x1119f7c)));
  p_Var1 = (*(undefined * PTR32 *)&gen_args[0]);
  (*((void * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 92))))) = &REFG(undefined, 0x1119fc8);
  (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 8))))) = 0;
  (*((ulong *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 20))))) = 1;
  (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 112))))) = 1;
  *((undefined1 *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 156) + 28))))) + 8))) = 0x43;
  *((undefined1 *)GEN_TOP(((int)(((wchar_t *)GEN_TOP(((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 156) + 28))))) + 0x93))) = 0x43;
  (*((undefined * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 104))))) = (undefined *)&REFG(undefined, 0x134b2c0);
  F_00c5aa4f(0xd);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  gen_imp_InterlockedIncrement(&(*(int *)((char *)(*(undefined * PTR32 *)(((char *)(p_Var1) + 104))))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
  F_00c5b2ef();
  F_00c5aa4f(0xc);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  (*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    (*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) = (undefined *)REFG(undefined * PTR32, 0x134ba28);
  }
  F_00c5cb36((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
  F_00c5b2f8();
  return 0;
}

/* ref: FUN_00c5b2e9 */
uint F_00c5b2e9(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b2e9u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b2ef */
uint F_00c5b2ef(void)
{
  GEN_ENTER(0xc5b2efu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b2f8 */
uint F_00c5b2f8(void)
{
  GEN_ENTER(0xc5b2f8u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: __getptd_noexit */
undefined * F_00c5b301(void)
{
  GEN_ENTER(0xc5b301u, 0u, 0u, 0u, 0u);
  DWORD dwErrCode;
  code * pcVar1;
  undefined * _Ptd;
  uint uVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined * p_Var5;
  
  dwErrCode = gen_imp_GetLastError();
  uVar4 = REFG(undefined4, 0x134b270);
  pcVar1 = (code *)F_00c5b1bf();
  _Ptd = ((undefined *)GEN_TOP((*pcVar1)(uVar4)));
  if (_Ptd == (undefined *)0x0) {
    _Ptd = F_00c54c73(1,0x214);
    if (_Ptd != (undefined *)0x0) {
      uVar4 = REFG(undefined4, 0x134b270);
      p_Var5 = _Ptd;
      pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
      uVar2 = (*pcVar1)(uVar4,p_Var5);
      if (uVar2 == 0) {
        F_00c4c68f(_Ptd);
        _Ptd = (undefined *)0x0;
      }
      else {
        F_00c5b24d(_Ptd,(undefined *)0x0);
        DVar3 = gen_imp_GetCurrentThreadId();
        (*(uint *)(((char *)(_Ptd) + 4))) = 0xffffffff;
        (*(ulong *)((char *)(_Ptd))) = DVar3;
      }
    }
  }
  gen_imp_SetLastError(dwErrCode);
  return _Ptd;
}

/* ref: __getptd */
undefined * F_00c5b37a(void)
{
  GEN_ENTER(0xc5b37au, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == (undefined *)0x0) {
                    
    F_00c47ca5(0x10);
  }
  return p_Var1;
}

/* ref: __freefls@4 */
uint F_00c5b394(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b394u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x18];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  LONG * lpAddend;
  int * piVar1;
  undefined * _Memory;
  uint in_EAX = 0;
  LONG LVar2;
  uint extraout_EAX = 0;
  
  _Memory = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f64c8);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc5b3a0;
  if ((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != (undefined *)0x0) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x2c) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x2c));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x34) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x34));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x3c) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x3c));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x40) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x40));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x44) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x44));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x48) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x48));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x5c) != &REFG(undefined, 0x1119fc8)) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x5c));
    }
    F_00c5aa4f(0xd);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    lpAddend = *(LONG * PTR32 *)((int)_Memory + 0x68);
    if (lpAddend != (LONG *)0x0) {
      LVar2 = gen_imp_InterlockedDecrement(lpAddend);
      if ((LVar2 == 0) && (lpAddend != (LONG *)&REFG(undefined, 0x134b2c0))) {
        F_00c4c68f(lpAddend);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    F_00c5b4ae();
    F_00c5aa4f(0xc);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
    piVar1 = *(int * PTR32 *)((int)_Memory + 0x6c);
    if (piVar1 != (int *)0x0) {
      F_00c5cbc5(piVar1);
      if (((piVar1 != (int *)REFG(undefined * PTR32, 0x134ba28)) && (piVar1 != (int *)&REFG(undefined, 0x134b950))) &&
         (*piVar1 == 0)) {
        F_00c5cc5e(piVar1);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    F_00c5b4ba();
    F_00c4c68f(_Memory);
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}

/* ref: FUN_00c5b4ab */
uint F_00c5b4ab(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b4abu, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b4ae */
uint F_00c5b4ae(void)
{
  GEN_ENTER(0xc5b4aeu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b4b7 */
uint F_00c5b4b7(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b4b7u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c5b4ba */
uint F_00c5b4ba(void)
{
  GEN_ENTER(0xc5b4bau, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: __freeptd */
unsigned int F_00c5b4c3(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b4c3u, gen_a0, 0u, 0u, 0u);
  undefined * _Ptd = (undefined *)(uintptr_t)gen_a0;
  LPVOID pvVar1;
  code * pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (REFG(int, 0x134b270) != -1) {
    if ((_Ptd == (undefined *)0x0) && (pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274)), pvVar1 != (LPVOID)0x0)) {
      iVar3 = REFG(int, 0x134b270);
      pcVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274));
      _Ptd = ((undefined *)GEN_TOP((*pcVar2)(iVar3)));
    }
    uVar4 = 0;
    iVar3 = REFG(int, 0x134b270);
    pcVar2 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
    (*pcVar2)(iVar3,uVar4);
    F_00c5b394(_Ptd);
  }
  if (REFG(undefined4, 0x134b274) != 0xffffffff) {
    gen_imp_TlsSetValue(REFG(undefined4, 0x134b274),(LPVOID)0x0);
  }
  return 0;
}

/* ref: __mtinit */
int F_00c5b53d(void)
{
  GEN_ENTER(0xc5b53du, 0u, 0u, 0u, 0u);
  HMODULE pHVar1;
  BOOL BVar2;
  int iVar3;
  code * pcVar4;
  undefined * _Ptd;
  uint uVar5;
  DWORD DVar6;
  code * pcVar7;
  undefined * p_Var8;
  
  pHVar1 = gen_imp_GetModuleHandleW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x1119f7c)));
  if (pHVar1 == (HMODULE)0x0) {
    F_00c5b210();
    return 0;
  }
  REFG(undefined4, 0x15d73b0) = gen_imp_GetProcAddress(pHVar1,"FlsAlloc");
  REFG(undefined4, 0x15d73b4) = gen_imp_GetProcAddress(pHVar1,"FlsGetValue");
  REFG(undefined4, 0x15d73b8) = gen_imp_GetProcAddress(pHVar1,"FlsSetValue");
  REFG(undefined4, 0x15d73bc) = gen_imp_GetProcAddress(pHVar1,"FlsFree");
  if ((((REFG(undefined4, 0x15d73b0) == (FARPROC)0x0) || (REFG(undefined4, 0x15d73b4) == (FARPROC)0x0)) ||
      (REFG(undefined4, 0x15d73b8) == (FARPROC)0x0)) || (REFG(undefined4, 0x15d73bc) == (FARPROC)0x0)) {
    REFG(undefined4, 0x15d73b4) = (((code *)GEN_TOP(gen_imp_TlsGetValue)));
    REFG(undefined4, 0x15d73b0) = ((code *)REFP(0xc5b196));
    REFG(undefined4, 0x15d73b8) = (((code *)GEN_TOP(gen_imp_TlsSetValue)));
    REFG(undefined4, 0x15d73bc) = (((code *)GEN_TOP(gen_imp_TlsFree)));
  }
  REFG(undefined4, 0x134b274) = gen_imp_TlsAlloc();
  if ((REFG(undefined4, 0x134b274) != 0xffffffff) && (BVar2 = gen_imp_TlsSetValue(REFG(undefined4, 0x134b274),REFG(undefined4, 0x15d73b4)), BVar2 != 0))
  {
    F_00c479b0();
    REFG(undefined4, 0x15d73b0) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73b0));
    REFG(undefined4, 0x15d73b4) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73b4));
    REFG(undefined4, 0x15d73b8) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73b8));
    REFG(undefined4, 0x15d73bc) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73bc));
    iVar3 = F_00c5a8bd();
    if (iVar3 != 0) {
      pcVar7 = ((code *)REFP(0xc5b394));
      pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b0));
      REFG(undefined4, 0x134b270) = (*pcVar4)(pcVar7);
      if ((REFG(undefined4, 0x134b270) != 0xffffffff) && (_Ptd = F_00c54c73(1,0x214), _Ptd != (undefined *)0x0)) {
        uVar5 = REFG(undefined4, 0x134b270);
        p_Var8 = _Ptd;
        pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
        uVar5 = (*pcVar4)(uVar5,p_Var8);
        if (uVar5 != 0) {
          F_00c5b24d(_Ptd,(undefined *)0x0);
          DVar6 = gen_imp_GetCurrentThreadId();
          (*(uint *)(((char *)(_Ptd) + 4))) = 0xffffffff;
          (*(ulong *)((char *)(_Ptd))) = DVar6;
          return 1;
        }
      }
    }
    F_00c5b210();
  }
  return 0;
}

/* ref: __RTC_Initialize */
unsigned int F_00c5b6b8(void)
{
  GEN_ENTER(0xc5b6b8u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c5b6de */
unsigned int F_00c5b6de(void)
{
  GEN_ENTER(0xc5b6deu, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: __ValidateImageBase */
BOOL F_00c5b710(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b710u, gen_a0, 0u, 0u, 0u);
  GEN_LPANY pImageBase = (GEN_LPANY)gen_a0;
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*((int *)GEN_TOP((pImageBase + *(int *)(pImageBase + 0x3c)))) == 0x4550)) {
    return (uint)((short)*((int *)GEN_TOP(((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18))) == 0x10b);
  }
  return 0;
}

/* ref: __FindPESection */
GEN_LPANY F_00c5b750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5b750u, gen_a0, gen_a1, 0u, 0u);
  GEN_LPANY pImageBase = (GEN_LPANY)gen_a0;
  DWORD_PTR rva = (DWORD_PTR)gen_a1;
  int iVar1;
  GEN_LPANY p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (GEN_LPANY)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if (((*(DWORD *)(((char *)(p_Var2) + 12))) <= rva) &&
         (rva < (*(DWORD *)(((char *)(p_Var2) + 8))) + (*(DWORD *)(((char *)(p_Var2) + 12))))) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + (1) * 40;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (GEN_LPANY)0x0;
}

/* ref: __IsNonwritableInCurrentImage */
BOOL F_00c5b7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b7a0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  BOOL BVar1;
  GEN_LPANY p_Var2;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xfffffffe;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f64f0);
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)(REFG(undefined4, 0x134ab78) ^ 0x12f64f0);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (BOOL)(uintptr_t)gen_eh_resume(); }
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  BVar1 = F_00c5b710((GEN_LPANY)&(*(undefined (*)[128])REFP(0x400000)));
  if (BVar1 != 0) {
    p_Var2 = F_00c5b750((GEN_LPANY)&(*(undefined (*)[128])REFP(0x400000)),(DWORD_PTR)((*(GEN_LPANY *)&gen_args[0]) + -0x400000));
    if (p_Var2 != (GEN_LPANY)0x0) {
      (*(undefined4 *)(gen_frame + 0x28)) = 0xfffffffe;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      return ~((*(DWORD *)(((char *)(p_Var2) + 36))) >> 0x1f) & 1;
    }
  }
  (*(undefined4 *)(gen_frame + 0x28)) = 0xfffffffe;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00c5b82b */
uint F_00c5b82b(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b82bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  return (uint)(*((int *)GEN_TOP(**(undefined4 * PTR32 *)(in_ebp + -0x14))) == -0x3ffffffb);
}

/* ref: FUN_00c5b83e */
undefined4 F_00c5b83e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b83eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(in_ebp + -0x10);
  return 0;
}

/* ref: __msize */
gen_size32 F_00c5b8b9(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b8b9u, gen_a0, 0u, 0u, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  SIZE_T SVar2;
  
  if (_Memory == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  SVar2 = gen_imp_HeapSize(REFG(undefined4, 0x15d74c8),0,_Memory);
  return SVar2;
}

/* ref: __CxxUnhandledExceptionFilter */
long F_00c5b8ec(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b8ecu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  GEN_LPANY pEVar1;
  ULONG_PTR UVar2;
  
  pEVar1 = (*(undefined * PTR32 *)((char *)(param_1)));
  if ((((*(DWORD *)((char *)(pEVar1))) == 0xe06d7363) && ((*(DWORD *)(((char *)(pEVar1) + 16))) == 3)) &&
     ((UVar2 = (*((ULONG_PTR *)GEN_TOP(((((char *)(pEVar1) + 20) + (0) * 4))))), UVar2 == 0x19930520 ||
      (((UVar2 == 0x19930521 || (UVar2 == 0x19930522)) || (UVar2 == 0x1994000)))))) {
                    
    F_00c5aa82();
  }
  return 0;
}

/* ref: FUN_00c5b92e */
uint F_00c5b92e(void)
{
  GEN_ENTER(0xc5b92eu, 0u, 0u, 0u, 0u);
  gen_imp_SetUnhandledExceptionFilter(((code *)REFP(0xc5b8ec)));
  return 0;
}

/* ref: __XcptFilter */
int F_00c5b962(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5b962u, gen_a0, gen_a1, 0u, 0u);
  ulong _ExceptionNum = (ulong)gen_a0;
  undefined * _ExceptionPtr = (undefined *)(uintptr_t)gen_a1;
  ulong * puVar1;
  code * pcVar2;
  undefined * pvVar3;
  ulong uVar4;
  undefined * p_Var5;
  ulong * puVar6;
  int iVar7;
  
  p_Var5 = F_00c5b301();
  iVar7 = 0;
  if (p_Var5 != (undefined *)0x0) {
    puVar1 = (*(void * PTR32 *)(((char *)(p_Var5) + 92)));
    puVar6 = puVar1;
    do {
      if (*puVar6 == _ExceptionNum) break;
      puVar6 = puVar6 + 3;
    } while (puVar6 < puVar1 + 0x24);
    if ((puVar1 + 0x24 <= puVar6) || (*puVar6 != _ExceptionNum)) {
      puVar6 = (ulong *)0x0;
    }
    if ((puVar6 == (ulong *)0x0) || (pcVar2 = (code *)puVar6[2], pcVar2 == (code *)0x0)) {
      iVar7 = 0;
    }
    else if (pcVar2 == (code *)&REFG(undefined, 0x5)) {
      puVar6[2] = 0;
      iVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        pvVar3 = (*(void * PTR32 *)(((char *)(p_Var5) + 96)));
        (*(void * PTR32 *)(((char *)(p_Var5) + 96))) = _ExceptionPtr;
        if (puVar6[1] == 8) {
          iVar7 = 0x24;
          do {
            *((undefined4 *)GEN_TOP((iVar7 + 8 + (int)(*(void * PTR32 *)(((char *)(p_Var5) + 92)))))) = 0;
            iVar7 = iVar7 + 0xc;
          } while (iVar7 < 0x90);
          uVar4 = *puVar6;
          iVar7 = (*(int *)(((char *)(p_Var5) + 100)));
          if (uVar4 == 0xc000008e) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x83;
          }
          else if (uVar4 == 0xc0000090) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x81;
          }
          else if (uVar4 == 0xc0000091) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x84;
          }
          else if (uVar4 == 0xc0000093) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x85;
          }
          else if (uVar4 == 0xc000008d) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x82;
          }
          else if (uVar4 == 0xc000008f) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x86;
          }
          else if (uVar4 == 0xc0000092) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x8a;
          }
          else if (uVar4 == 0xc00002b5) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x8d;
          }
          else if (uVar4 == 0xc00002b4) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x8e;
          }
          (*pcVar2)(8,(*(int *)(((char *)(p_Var5) + 100))));
          (*(int *)(((char *)(p_Var5) + 100))) = iVar7;
        }
        else {
          puVar6[2] = 0;
          (*pcVar2)(puVar6[1]);
        }
        (*(void * PTR32 *)(((char *)(p_Var5) + 96))) = pvVar3;
      }
      iVar7 = -1;
    }
  }
  return iVar7;
}

/* ref: ___CppXcptFilter */
int F_00c5baac(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5baacu, gen_a0, gen_a1, 0u, 0u);
  ulong _ExceptionNum = (ulong)gen_a0;
  undefined * _ExceptionPtr = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (_ExceptionNum == 0xe06d7363) {
    iVar1 = F_00c5b962(0xe06d7363,_ExceptionPtr);
    return iVar1;
  }
  return 0;
}

/* ref: __wincmdln */
uint F_00c5bacc(void)
{
  GEN_ENTER(0xc5baccu, 0u, 0u, 0u, 0u);
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte * pbVar4;
  
  bVar2 = false;
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5cb18();
  }
  pbVar4 = REFG(undefined4, 0x15e52cc);
  if (REFG(undefined4, 0x15e52cc) == (byte *)0x0) {
    pbVar4 = &REFG(undefined1, 0x107fc63);
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return (uint)pbVar4;
      }
      if (!bVar2) {
        for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        return (uint)pbVar4;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = F_00c7b540((uint)bVar1);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}

/* ref: FUN_00c5bb2b */
uint F_00c5bb2b(void)
{
  GEN_ENTER(0xc5bb2bu, 0u, 0u, 0u, 0u);
  undefined4 * in_edi;
  gen_size32 sVar1;
  undefined * pvVar2;
  int eVar3;
  char * pcVar4;
  int iVar5;
  
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5cb18();
  }
  iVar5 = 0;
  pcVar4 = REFG(undefined4, 0x15d6864);
  if (REFG(undefined4, 0x15d6864) != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar1 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar1 = F_00c552f0(pcVar4);
    }
    in_edi = F_00c54c73(iVar5 + 1,4);
    pcVar4 = REFG(undefined4, 0x15d6864);
    REFG(undefined4, 0x15d6840) = in_edi;
    if (in_edi != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          F_00c4c68f(REFG(undefined4, 0x15d6864));
          REFG(undefined4, 0x15d6864) = (char *)0x0;
          *in_edi = 0;
          REFG(undefined4, 0x15e52d4) = 1;
          return 0;
        }
        sVar1 = F_00c552f0(pcVar4);
        sVar1 = sVar1 + 1;
        if (*pcVar4 != '=') {
          pvVar2 = F_00c54c73(sVar1,1);
          *in_edi = pvVar2;
          if (pvVar2 == (undefined *)0x0) {
            F_00c4c68f(REFG(undefined4, 0x15d6840));
            REFG(undefined4, 0x15d6840) = (undefined4 *)0x0;
            return 0xffffffff;
          }
          eVar3 = F_00c49908(pvVar2,sVar1,pcVar4);
          if (eVar3 != 0) {
                    
            F_00c4c299(in_edi,0,0,0,0,0);
          }
          in_edi = in_edi + 1;
        }
        pcVar4 = pcVar4 + sVar1;
      } while( true );
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c5bc07 */
uint F_00c5bc07(unsigned int gen_a0)
{
  GEN_ENTER(0xc5bc07u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d6850) = param_1;
  return param_1;
}

/* ref: parse_cmdline */
unsigned int F_00c5bc16(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5bc16u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * in_edx = (byte *)(uintptr_t)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  byte bVar6;
  byte * pbVar7;
  byte * pbVar8;
  
  *in_edi = 0;
  *param_5 = 1;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_4;
    param_3 = param_3 + 1;
  }
  bVar2 = false;
  pbVar5 = param_4;
  do {
    if (*in_edx == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_edx + 1;
    }
    else {
      *in_edi = *in_edi + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_edx;
        param_4 = pbVar5 + 1;
      }
      bVar6 = *in_edx;
      pbVar7 = in_edx + 1;
      iVar3 = F_00c7b540((uint)bVar6);
      if (iVar3 != 0) {
        *in_edi = *in_edi + 1;
        if (param_4 != (byte *)0x0) {
          *param_4 = *pbVar7;
          param_4 = param_4 + 1;
        }
        pbVar7 = in_edx + 2;
      }
      pbVar5 = param_4;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_00c5bcaa;
      }
    }
    in_edx = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_00c5bcaa: ;
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = pbVar5;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *in_edi = *in_edi + 1;
        param_4 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = F_00c7b540((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *in_edi = *in_edi + 1;
          }
        }
        else {
          iVar3 = F_00c7b540((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_4 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *in_edi = *in_edi + 1;
            param_4 = param_4 + 1;
          }
          *param_4 = *pbVar7;
          param_4 = param_4 + 1;
        }
        *in_edi = *in_edi + 1;
        pbVar5 = param_4;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_4 = pbVar5;
    }
    *in_edi = *in_edi + 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  *param_5 = *param_5 + 1;
  return 0;
}

/* ref: __setargv */
int F_00c5bdb0(void)
{
  GEN_ENTER(0xc5bdb0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint _Size;
  undefined * pvVar1;
  int iVar2;
  
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5cb18();
  }
  REFG(undefined4, 0x15d74c4) = 0;
  gen_imp_GetModuleFileNameA((HMODULE)0x0,&REFG(undefined, 0x15d73c0),0x104);
  REFG(undefined4, 0x15d6850) = &REFG(undefined, 0x15d73c0);
  if ((REFG(undefined4, 0x15e52cc) == (char *)0x0) || ((*(char * PTR32 *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e52cc), *REFG(int * PTR32, 0x15e52cc) == '\0')) {
    (*(char * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x15d73c0);
  }
  F_00c5bc16((*(char * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)),0,0,&(*(uint *)(gen_frame + 0x4)));
  if (((*(uint *)(gen_frame + 0x4)) < 0x3fffffff) && ((*(uint *)(gen_frame + 0x0)) != 0xffffffff)) {
    iVar2 = (*(uint *)(gen_frame + 0x4)) * 4;
    _Size = iVar2 + (*(uint *)(gen_frame + 0x0));
    if (((*(uint *)(gen_frame + 0x0)) <= _Size) && (pvVar1 = F_00c54c2e(_Size), pvVar1 != (undefined *)0x0)) {
      F_00c5bc16((*(char * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)),pvVar1,(undefined *)(iVar2 + (int)pvVar1),&(*(uint *)(gen_frame + 0x4)));
      REFG(int, 0x15d6834) = (*(uint *)(gen_frame + 0x4)) - 1;
      REFG(undefined4, 0x15d6838) = pvVar1;
      return 0;
    }
  }
  return -1;
}

/* ref: ___crtGetEnvironmentStringsA */
LPVOID F_00c5be6b(void)
{
  GEN_ENTER(0xc5be6bu, 0u, 0u, 0u, 0u);
  WCHAR WVar1;
  LPWSTR pWVar2;
  undefined * pvVar3;
  WCHAR * pWVar4;
  int iVar6;
  gen_size32 _Size;
  undefined * local_8;
  WCHAR * pWVar5;
  
  pWVar2 = gen_imp_GetEnvironmentStringsW();
  if (pWVar2 == (LPWSTR)0x0) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    WVar1 = *pWVar2;
    pWVar4 = pWVar2;
    while (WVar1 != L'\0') {
      do {
        pWVar5 = pWVar4;
        pWVar4 = pWVar5 + 1;
      } while (*pWVar4 != L'\0');
      pWVar4 = pWVar5 + 2;
      WVar1 = *pWVar4;
    }
    iVar6 = ((int)pWVar4 - (int)pWVar2 >> 1) + 1;
    _Size = gen_imp_WideCharToMultiByte(0,0,pWVar2,iVar6,0,0,0,0);
    if ((_Size == 0) || (local_8 = F_00c54c2e(_Size), local_8 == (undefined *)0x0)) {
      gen_imp_FreeEnvironmentStringsW(pWVar2);
      pvVar3 = (LPVOID)0x0;
    }
    else {
      iVar6 = gen_imp_WideCharToMultiByte(0,0,pWVar2,iVar6,local_8,_Size,0,0);
      if (iVar6 == 0) {
        F_00c4c68f(local_8);
        local_8 = (undefined *)0x0;
      }
      gen_imp_FreeEnvironmentStringsW(pWVar2);
      pvVar3 = local_8;
    }
  }
  return pvVar3;
}

/* ref: __ioinit */
int F_00c5bf02(void)
{
  GEN_ENTER(0xc5bf02u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pvVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  UINT UVar6;
  UINT UVar7;
  undefined4 * puVar8;
  int * piVar9;
  uint uVar10;
  
  gen_imp_GetStartupInfoW((GEN_LPANY)((byte *)(gen_frame + 0x0)));
  pvVar1 = F_00c54c73(0x20,0x40);
  if (pvVar1 == (undefined *)0x0) {
    iVar2 = -1;
  }
  else {
    REFG(undefined4, 0x15e4190) = 0x20;
    REFG(undefined4, 0x15e41a0) = pvVar1;
    if (pvVar1 < (undefined *)((int)pvVar1 + 0x800U)) {
      iVar2 = (int)pvVar1 + 5;
      do {
        *(undefined4 *)(iVar2 + -5) = 0xffffffff;
        *(undefined2 *)(iVar2 + -1) = 0xa00;
        *(undefined4 *)(iVar2 + 3) = 0;
        *(undefined2 *)(iVar2 + 0x1f) = 0xa00;
        *(undefined1 *)(iVar2 + 0x21) = 10;
        *(undefined4 *)(iVar2 + 0x33) = 0;
        *(undefined1 *)(iVar2 + 0x2f) = 0;
        uVar10 = iVar2 + 0x3b;
        iVar2 = iVar2 + 0x40;
      } while (uVar10 < (int)REFG(undefined4, 0x15e41a0) + 0x800U);
    }
    if (((*(undefined2 *)((char *)((byte *)(gen_frame + 0x0)) + 50)) != 0) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) != 0)) {
      UVar6 = *(UINT *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52));
      (*(byte * PTR32 *)(gen_frame + 0x48)) = ((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) + 4)));
      (*(byte * PTR32 *)(gen_frame + 0x44)) = ((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) + 4))) + UVar6;
      if (0x7ff < (int)UVar6) {
        UVar6 = 0x800;
      }
      UVar7 = UVar6;
      if ((int)REFG(undefined4, 0x15e4190) < (int)UVar6) {
        piVar9 = &REFG(undefined4, 0x15e41a4);
        do {
          pvVar1 = F_00c54c73(0x20,0x40);
          UVar7 = REFG(undefined4, 0x15e4190);
          if (pvVar1 == (undefined *)0x0) break;
          REFG(undefined4, 0x15e4190) = REFG(undefined4, 0x15e4190) + 0x20;
          *piVar9 = (int)pvVar1;
          if (pvVar1 < (undefined *)((int)pvVar1 + 0x800U)) {
            iVar2 = (int)pvVar1 + 5;
            do {
              *(undefined4 *)(iVar2 + -5) = 0xffffffff;
              *(undefined4 *)(iVar2 + 3) = 0;
              *(byte *)(iVar2 + 0x1f) = *(byte *)(iVar2 + 0x1f) & 0x80;
              *(undefined4 *)(iVar2 + 0x33) = 0;
              *(undefined2 *)(iVar2 + -1) = 0xa00;
              *(undefined2 *)(iVar2 + 0x20) = 0xa0a;
              *(undefined1 *)(iVar2 + 0x2f) = 0;
              uVar10 = iVar2 + 0x3b;
              iVar2 = iVar2 + 0x40;
            } while (uVar10 < *piVar9 + 0x800U);
          }
          piVar9 = piVar9 + 1;
          UVar7 = UVar6;
        } while ((int)REFG(undefined4, 0x15e4190) < (int)UVar6);
      }
      uVar10 = 0;
      if (0 < (int)UVar7) {
        do {
          pvVar5 = *(HANDLE *)(*(byte * PTR32 *)(gen_frame + 0x44));
          if ((((pvVar5 != (HANDLE)0xffffffff) && (pvVar5 != (HANDLE)0xfffffffe)) &&
              ((*(*(byte * PTR32 *)(gen_frame + 0x48)) & 1) != 0)) &&
             (((*(*(byte * PTR32 *)(gen_frame + 0x48)) & 8) != 0 || (DVar3 = gen_imp_GetFileType(pvVar5), DVar3 != 0)))) {
            puVar8 = ((undefined4 *)GEN_TOP(((uVar10 & 0x1f) * 0x40 + (int)(&REFG(undefined4, 0x15e41a0))[(int)uVar10 >> 5])))
            ;
            *puVar8 = *(undefined4 *)(*(byte * PTR32 *)(gen_frame + 0x44));
            *(byte *)(puVar8 + 1) = *(*(byte * PTR32 *)(gen_frame + 0x48));
            BVar4 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar8 + 3),4000);
            if (BVar4 == 0) {
              return -1;
            }
            puVar8[2] = puVar8[2] + 1;
          }
          (*(byte * PTR32 *)(gen_frame + 0x44)) = (*(byte * PTR32 *)(gen_frame + 0x44)) + 4;
          uVar10 = uVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x48)) = (*(byte * PTR32 *)(gen_frame + 0x48)) + 1;
        } while ((int)uVar10 < (int)UVar7);
      }
    }
    iVar2 = 0;
    do {
      piVar9 = (int *)(iVar2 * 0x40 + (int)REFG(undefined4, 0x15e41a0));
      if ((*piVar9 == -1) || (*piVar9 == -2)) {
        *(undefined1 *)(piVar9 + 1) = 0x81;
        if (iVar2 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar2 != 1);
        }
        pvVar5 = gen_imp_GetStdHandle(DVar3);
        if (((pvVar5 == (HANDLE)0xffffffff) || (pvVar5 == (HANDLE)0x0)) ||
           (DVar3 = gen_imp_GetFileType(pvVar5), DVar3 == 0)) {
          *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          *piVar9 = -2;
        }
        else {
          *piVar9 = (int)pvVar5;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 8;
          }
          BVar4 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(piVar9 + 3),4000);
          if (BVar4 == 0) {
            return -1;
          }
          piVar9[2] = piVar9[2] + 1;
        }
      }
      else {
        *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x80;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    gen_imp_SetHandleCount(REFG(undefined4, 0x15e4190));
    iVar2 = 0;
  }
  return iVar2;
}

/* ref: __heap_init */
int F_00c5c19a(void)
{
  GEN_ENTER(0xc5c19au, 0u, 0u, 0u, 0u);
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_HeapCreate(0,0x1000,0);
  REFG(undefined4, 0x15d74c8) = pvVar1;
  return (uint)(pvVar1 != (HANDLE)0x0);
}

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
                  *(undefined1 *)(iVar14 + 5 + *piVar6) = (undefined1)(*(short *)(gen_frame + 0x14));
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
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ae0)) + 0)) = '\r';
              BVar9 = gen_imp_WriteFile(*(HANDLE *)(iVar4 + *(*(int * PTR32 *)(gen_frame + 0x10010))),&(*(undefined2 *)(gen_frame + 0x11ae0)),1,(LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x10018)),
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
  GEN_ENTER(0xc5e740u, 0u, 0u, 0u, 0u);
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
  GEN_ENTER(0xc5e75eu, 0u, gen_a1, gen_a2, 0u);
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
  GEN_ENTER(0xc5eb11u, gen_a0, 0u, 0u, 0u);
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
  GEN_ENTER(0xc5ebd0u, gen_a0, 0u, gen_a2, 0u);
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
  GEN_ENTER(0xc5ecd4u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  return 0;
}

/* ref: FUN_00c5ecdd */
unsigned int F_00c5ecdd(double gen_a0)
{
  GEN_ENTER(0xc5ecddu, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  return 0;
}

/* ref: FUN_00c5ece2 */
unsigned int F_00c5ece2(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5ece2u, 0u, gen_a1, 0u, 0u);
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
  GEN_ENTER(0xc5ed0fu, 0u, gen_a1, 0u, 0u);
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
  GEN_ENTER(0xc5ed76u, gen_a0, 0u, gen_a2, 0u);
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
  GEN_ENTER(0xc5ed93u, gen_a0, 0u, 0u, 0u);
  char in_cl = (char)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  return 0;
}

/* ref: FUN_00c5edcc */
uint F_00c5edcc(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc5edccu, gen_a0, 0u, 0u, 0u);
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
unsigned int F_00c607ba(unsigned int gen_a0)
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
  return 0;
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
unsigned int F_00c636ae(unsigned int gen_a0)
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
  return 0;
}

/* ref: ___shr_12 */
unsigned int F_00c636e1(unsigned int gen_a0)
{
  GEN_ENTER(0xc636e1u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return 0;
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
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(short *)(gen_frame + 0x20)) = 0;
  iVar5 = 0;
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 0)) = 0;
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)) = 0;
  iVar6 = 0;
  (*(ushort *)(gen_frame + 0x26)) = 0;
  uVar3 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar8 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
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
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ushort * puVar11;
  uint uVar12;
  ushort uVar13;
  ushort uVar14;
  short * psVar15;
  uint uVar16;
  ushort uVar17;
  
  iVar2 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)),(undefined2)(*(int *)(gen_frame + 0x32)));
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x134bea0);
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x134c000);
    }
    uVar8 = param_2;
    puVar1 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
      uVar8 = param_2;
    }
joined_r0x00c639d6: ;
    if (uVar8 != 0) {
      puVar1 = puVar1 + 0x54;
      uVar16 = (int)uVar8 >> 3;
      uVar10 = uVar8 & 7;
      uVar8 = uVar16;
      if (uVar10 != 0) {
        puVar11 = (ushort *)(puVar1 + uVar10 * 0xc);
        if (0x7fff < *puVar11) {
          (*(ushort *)(gen_frame + 0x30)) = (ushort)*(undefined4 *)puVar11;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 0)) = (undefined2)((uint)*(undefined4 *)((int)(uintptr_t)puVar11) >> 0x10);
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)) = (undefined2)*(undefined4 *)(puVar11 + 2);
          (*(undefined2 *)(gen_frame + 0x36)) = (undefined2)((uint)*(undefined4 *)(puVar11 + 2) >> 0x10);
          (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(puVar11 + 4);
          iVar2 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)),(undefined2)(*(int *)(gen_frame + 0x32))) + -1;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 0)) = (undefined2)iVar2;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)) = (undefined2)((uint)iVar2 >> 0x10);
          puVar11 = &(*(ushort *)(gen_frame + 0x30));
        }
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(byte *)(gen_frame + 0x3c)) = 0;
        (*(undefined1 *)(gen_frame + 0x3d)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = 0;
        iVar5 = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = 0;
        iVar6 = 0;
        (*(ushort *)(gen_frame + 0x46)) = 0;
        uVar14 = (puVar11[5] ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
        uVar9 = *(ushort *)((int)param_1 + 10) & 0x7fff;
        uVar13 = puVar11[5] & 0x7fff;
        uVar17 = uVar13 + uVar9;
        iVar3 = 0;
        iVar4 = 0;
        if (((uVar9 < 0x7fff) && (iVar3 = 0, iVar4 = 0, uVar13 < 0x7fff)) &&
           (iVar3 = iVar5, iVar4 = iVar6, uVar17 < 0xbffe)) {
          if (0x3fbf < uVar17) {
            (*(int *)(gen_frame + 0x3e)) = iVar5;
            (*(int *)(gen_frame + 0x42)) = iVar6;
            if (((uVar9 == 0) && (uVar17 = uVar17 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
               ((param_1[1] == 0 && (*param_1 == 0)))) {
              *(undefined2 *)((int)param_1 + 10) = 0;
            }
            else if (((uVar13 == 0) &&
                     (uVar17 = uVar17 + 1, (*(uint *)(puVar11 + 4) & 0x7fffffff) == 0)) &&
                    ((*(int *)(puVar11 + 2) == 0 && (*(int *)puVar11 == 0)))) {
              param_1[2] = 0;
              param_1[1] = 0;
              *param_1 = 0;
            }
            else {
              (*(int *)(gen_frame + 0x18)) = 0;
              psVar15 = (short *)((int)&(*(int *)(gen_frame + 0x3e)) + 2);
              (*(int *)(gen_frame + 0x2c)) = 5;
              do {
                (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x2c));
                if (0 < (*(int *)(gen_frame + 0x2c))) {
                  (*(ushort * PTR32 *)(gen_frame + 0xc)) = puVar11 + 4;
                  (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)((*(int *)(gen_frame + 0x18)) * 2 + (int)param_1);
                  do {
                    bVar7 = false;
                    uVar16 = *(uint *)(psVar15 + -2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc));
                    if ((uVar16 < *(uint *)(psVar15 + -2)) ||
                       (uVar16 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)))) {
                      bVar7 = true;
                    }
                    *(uint *)(psVar15 + -2) = uVar16;
                    if (bVar7) {
                      *psVar15 = *psVar15 + 1;
                    }
                    (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 1;
                    (*(ushort * PTR32 *)(gen_frame + 0xc)) = (*(ushort * PTR32 *)(gen_frame + 0xc)) + -1;
                    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + -1;
                  } while (0 < (*(int *)(gen_frame + 0x20)));
                }
                psVar15 = psVar15 + 1;
                (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
                (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + -1;
              } while (0 < (*(int *)(gen_frame + 0x2c)));
              uVar17 = uVar17 + 0xc002;
              if ((short)uVar17 < 1) {
LAB_00c63b90: ;
                uVar17 = uVar17 - 1;
                if ((short)uVar17 < 0) {
                  uVar16 = (uint)(ushort)-uVar17;
                  uVar17 = 0;
                  do {
                    if (((*(byte *)(gen_frame + 0x3c)) & 1) != 0) {
                      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
                    }
                    iVar4 = CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
                    uVar10 = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)));
                    iVar3 = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)));
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2))) >> 1);
                    (*(ushort *)(gen_frame + 0x46)) = (*(ushort *)(gen_frame + 0x46)) >> 1;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)(*(int *)(gen_frame + 0x42)) >> 1 | (ushort)((uint)(iVar4 << 0x1f) >> 0x10)
                    ;
                    uVar12 = CONCAT22((ushort)(*(int *)(gen_frame + 0x3e)),CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) >> 1;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) =
                         (ushort)(*(int *)(gen_frame + 0x3e)) >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
                    uVar16 = uVar16 - 1;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = (ushort)(uVar10 >> 1);
                    (*(byte *)(gen_frame + 0x3c)) = (byte)uVar12;
                    (*(undefined1 *)(gen_frame + 0x3d)) = (undefined1)(uVar12 >> 8);
                  } while (uVar16 != 0);
                  if ((*(int *)(gen_frame + 0x14)) != 0) {
                    (*(byte *)(gen_frame + 0x3c)) = (*(byte *)(gen_frame + 0x3c)) | 1;
                  }
                }
              }
              else {
                do {
                  uVar9 = (ushort)(*(int *)(gen_frame + 0x3e));
                  if (((*(ushort *)(gen_frame + 0x46)) & 0x8000) != 0) break;
                  iVar3 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x3e)),CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) << 1;
                  (*(byte *)(gen_frame + 0x3c)) = (byte)iVar3;
                  (*(undefined1 *)(gen_frame + 0x3d)) = (undefined1)((uint)iVar3 >> 8);
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) = (ushort)((uint)iVar3 >> 0x10);
                  iVar3 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2))) * 2;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = (ushort)iVar3 | uVar9 >> 0xf;
                  iVar4 = (int)CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2))) * 2;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)iVar4 | (ushort)(*(int *)(gen_frame + 0x42)) >> 0xf;
                  uVar17 = uVar17 - 1;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)((uint)iVar3 >> 0x10);
                  (*(ushort *)(gen_frame + 0x46)) = (ushort)((uint)iVar4 >> 0x10);
                } while (0 < (short)uVar17);
                if ((short)uVar17 < 1) goto LAB_00c63b90;
              }
              if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) ||
                 (iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))),
                 iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)),(ushort)(*(int *)(gen_frame + 0x3e))),
                 (CONCAT22((ushort)(*(int *)(gen_frame + 0x3e)),CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) & 0x1ffff) == 0x18000)) {
                if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)),(ushort)(*(int *)(gen_frame + 0x3e))) == -1) {
                  iVar3 = 0;
                  if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) == -1) {
                    if ((*(ushort *)(gen_frame + 0x46)) == 0xffff) {
                      (*(ushort *)(gen_frame + 0x46)) = 0x8000;
                      uVar17 = uVar17 + 1;
                      iVar4 = 0;
                      iVar3 = 0;
                    }
                    else {
                      (*(ushort *)(gen_frame + 0x46)) = (*(ushort *)(gen_frame + 0x46)) + 1;
                      iVar4 = 0;
                      iVar3 = 0;
                    }
                  }
                  else {
                    iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) + 1;
                  }
                }
                else {
                  iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)),(ushort)(*(int *)(gen_frame + 0x3e))) + 1;
                  iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42)));
                }
              }
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = (ushort)((uint)iVar3 >> 0x10);
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) = (ushort)iVar3;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)((uint)iVar4 >> 0x10);
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)iVar4;
              if (0x7ffe < uVar17) goto LAB_00c63c53;
              *(ushort *)param_1 = (ushort)(*(int *)(gen_frame + 0x3e));
              *(uint *)((int)param_1 + 2) = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)));
              *(uint *)((int)param_1 + 6) = CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
              *(ushort *)((int)param_1 + 10) = uVar17 | uVar14;
              (*(int *)(gen_frame + 0x3e)) = iVar3;
              (*(int *)(gen_frame + 0x42)) = iVar4;
            }
            goto joined_r0x00c639d6;
          }
          param_1[2] = 0;
        }
        else {
LAB_00c63c53: ;
          param_1[2] = ((uVar14 == 0) - 1 & 0x80000000) + 0x7fff8000;
        }
        param_1[1] = 0;
        *param_1 = 0;
        (*(int *)(gen_frame + 0x3e)) = iVar3;
        (*(int *)(gen_frame + 0x42)) = iVar4;
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
              (*(ushort *)(gen_frame + 0x24)) = (ushort)*(undefined4 *)puVar23;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 0)) = (undefined2)((uint)*(undefined4 *)((int)(uintptr_t)puVar23) >> 0x10);
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

